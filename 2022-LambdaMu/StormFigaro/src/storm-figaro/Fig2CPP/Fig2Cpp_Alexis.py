# -*- coding: UTF-8 -*-
"""
v1.0.0
First full version
supports manual Figaro0
"""

import re
import os
import argparse
import xml.etree.ElementTree as EltTree

# adding of all the keywords
keywords_main = ["STEPS_ORDER", "GROUP_NAMES", "OBJECT", "SYSTEM_NAMES", "CLASS", "GLOBAL"]
keywords_object = ["IS_A", "CONSTANT", "DIST_PARAMETER", "ATTRIBUTE", "EFFECT",
                                                  "INTERFACE", "INTERACTION", "OCCURRENCE", "DESCRIPTION", "EQUATION"]
keywords_attribute = ['LABEL', 'DOMAIN', 'REINITIALISATION', "="]
keywords_constant = ['LABEL', 'DOMAIN', "="]
keywords_interaction = ['GROUP', 'IF', 'STEP', 'THEN', 'ELSE']
keywords_occurrence = ['GROUP', 'IF', 'MAY_OCCUR', 'OR_ELSE']
keywords_may_occur = ["LABEL", "DIST", "INDUCING", "FAULT", "TRANSITION", "REPAIR"]
keywords_non_markovian_op = ["CURRENT_DATE", "INTEGRAL", "ALREADY_REALIZED", "STATE_TIME"]

special_pattern = re.compile("[\n\t ]+")

operators = {'FLOOR': '(int)std::floor', 'CEIL': '(int)std::ceil', 'NINT': '(int)std::round',
             'EXP': 'std::exp', 'COS': 'std::cos', 'SIN': 'std::sin', 'TAN': 'std::tan', 'ATAN': 'std::atan',
             'LN': 'std::log', 'LOG': 'std::log10', 'SQRT': 'std::sqrt',
             'ABS': 'std::abs', 'FACT': 'fact', 'LNFACT': 'lnfact', 'MIN': 'MIN', 'MAX': 'MAX'}

enum_list = []
all_constants = []
all_attributes = []
all_interactions = []
all_occurrences = []
all_failures = []
all_steps = []

all_parameters = {"MAX_TURNS_IR": "200"}

map_attributes = {}
set_constants = set()


class Step:
    def __init__(self, names: list):
        self.names = names
        self.interactions = []


class Variable:
    def __init__(self, name, domain="bool", affect=None, label=None, reinit=False):
        self.name = name
        self.domain = domain
        self.label = label
        self.affect = affect
        self.reinit = reinit


class Interaction:
    def __init__(self, name, steps=None, cond=None, then=None, else_=None):
        self.name = name
        self.steps = steps
        self.cond = cond
        self.then = then
        self.else_ = else_


class Transition:
    def __init__(self, name):
        self.name = name
        self.trName = ""
        self.label = None
        self.rate = None
        self.cppRate = None
        self.affect = None
        self.numFire = 0
        self.numIns = 0


class Occurrence:
    def __init__(self, name, cond=None):
        self.name = name
        self.cond = cond
        self.cppCond = None
        self.trans = []
    def complete(self):
        """Calcul du taux complémentaire pour les INS"""
        if len(self.trans)<2 or self.trans[-1].rate:
            return
        expr = self.trans[0].rate
        for i in range(1, len(self.trans)-1):
            expr += " + " + self.trans[i].rate
        self.trans[-1].rate = "1 - (" + expr + ")"


class Failure:
    def __init__(self, name):
        self.name = name
        self.cond = None
        self.type = None


def remove_specials(string: str, rep: str = " ") -> str:
    """
    This function is used to remove line breaks in order to avoid some specific cases during the parsing.

    Parameters
    ----------
    string : str
        string to modify.
    rep : str
        replacement string

    Returns
    -------
    string : str
        modified string.

    """
    string = special_pattern.sub(rep, string)
    return string


def change_boolean(string: str) -> str:
    string = string.replace('FALSE', 'false')
    string = string.replace('TRUE', 'true')
    return string


def identifier_general(string: str, selected_keywords: list, lookbehind="") -> list:
    """
    Make it easier to parse a complex expression by generating the regular expression from a list of keywords.
    """
    re_keywords = ("\\b"+"\\b|\\b".join(selected_keywords) + "\\b").replace("\\b=\\b","=")
    all_strings = re.findall(lookbehind + "(" + re_keywords + ")((?:[^\"]*?(?:\"[^\"]*?\")*?)*?)(?=" + lookbehind + "(?:" + re_keywords + ")|\\Z)", string)
    index = None if not all_strings else string.find(all_strings[0][0])
    if index != 0:
        all_strings.insert(0, [string[0:index].strip()])
    for i in range(len(all_strings)):
        all_strings[i] = [s.strip() for s in all_strings[i]]
    return all_strings


def replace_concat(my_str, keyword, replacement):
    return re.sub("[\\n\\t ]*\\b" + keyword + "\\b[\\n\\t ]*", replacement, my_str)


def replace_robust(my_str: str, keyword: str, rep: str) -> str:
    """
    Allow to replace keywords surrounded by not word characters

    Parameters
    ----------
    my_str : string
        input string
    keyword : string
        keyword to be replaced.
    rep : string
        replacement of the keyword.

    Returns
    -------
    my_str : string
        input with robustly replaced keyword.

    """
    return re.sub("\\b" + keyword + "\\b", rep, my_str)


def all_comas(expr: str, index1: int, index2: int) -> list:
    """Return indexes of comas of first level between index1 and index2"""
    cindexes = []
    ip = 0
    for i in range(index1, index2):
        c = expr[i]
        if c == '(':
            ip += 1
        elif c == ')':
            ip -= 1
            if ip < 0:
                return [cindexes, i]
        elif c == ',' and ip == 0:
            cindexes.append(i)
    return [cindexes, -1]


def cpp_min_max(expr: str, op: str, cpp_op: str):
    rop = re.compile("\\b"+op+"\\b")
    fop = rop.search(expr)
    while fop:
        ip = expr.find("(", fop.end())  # Parenthèse de WITHIN
        ic = all_comas(expr, ip + 1, len(expr))
        if ic[1] == -1:
            raise Exception("Parenthesis not closed in " + expr[fop.start():fop.start() + 30])
        nexpr = expr[0:fop.start()]
        ii = ip + 1
        for i in ic[0]:
            nexpr += cpp_op + "(" + expr[ii:i].strip() + ", "
            ii = i + 1
        expr = nexpr + expr[ii:ic[1]].strip() + ')' * len(ic[0]) + expr[ic[1] + 1:]
        fop = rop.search(expr, fop.end())
    return expr


def cpp_expression(expr: str, object_name=None) -> str:
    nm = re.findall("\\b" + "\\b|\\b".join(keywords_non_markovian_op) + "\\b", expr)
    if nm:
        raise Exception("Non markovian model because of use of " + nm[0] + " in " + expr)
    expr = change_boolean(expr)
    expr = re.sub('\\bAND\\b', '&&', expr)
    expr = re.sub('\\bOR\\b', '||', expr)
    expr = re.sub('\\bNOT\\b', '!', expr)
    expr = re.sub('(?<=[^<>?])=', '==', expr)
    iop = expr.find("AT_LEAST")
    while iop >= 0:
        iw = expr.find("WITHIN", iop + 8)
        ip = expr.find("(", iw + 6)  # Parenthèse de WITHIN
        ic = all_comas(expr, ip + 1, len(expr))  # Toutes les virgules de niveau 1 jusqu'à la parenthèse fermante
        if ic[1] == -1:
            raise Exception("Parenthesis not closed in " + expr[iw:iw + 30])
        nexpr = expr[0:iop] + "(" + expr[iop + 8: iw].strip() + " <= (("
        ii = ip + 1
        for i in ic[0]:
            nexpr += expr[ii:i].strip() + ") + ("
            ii = i + 1
        expr = nexpr + expr[ii:ic[1]].strip() + "))" + expr[ic[1]:]
        iop = expr.find("AT_LEAST", iop + 8)

    # Traitement des opérateurs numériques dont l'opérande contient des parenthèses
    ii = 0
    nexpr = ""
    for iter_op in re.finditer("\\b([A-Za-z_][A-Za-z0-9_]*)\\s*\\(", expr):
        if iter_op.group(1) in operators:
            nexpr += expr[ii:iter_op.start()] + operators[iter_op.group(1)] + "("
            ii = iter_op.end()
        else:
            obj = re.compile("([A-Za-z_][A-Za-z0-9_]*)\\s*\\)").search(expr, iter_op.end())
            if obj is None:
                raise Exception("Parenthesis not closed in " + iter_op.group(0))
            nexpr += expr[ii:iter_op.start()] + iter_op.group(1) + "_OF_" + obj.group(1)
            ii = obj.end()
    expr = nexpr + expr[ii:]

    expr = cpp_min_max(expr, "MIN", "tmin")
    expr = cpp_min_max(expr, "MAX", "tmax")

    # Traitement des variables locales
    ii = 0
    nexpr = ""
    if object_name:
        for iter_var in re.finditer("([^.:'0-9A-Za-z_]|\\A)([A-Za-z_][A-Za-z0-9_]*)\\b", expr):
            if not (iter_var.group().find("_OF_") >= 0 or iter_var.group(2) in ["false", "true", "tmin", "tmax",
                                                                                "fact", "lnfact", "int", "std"]):
                nexpr += expr[ii:iter_var.end()] + "_OF_" + object_name
                ii = iter_var.end()
    expr = nexpr + expr[ii:]

    expr = expr.replace("'", "")
    expr = expr.replace("<--", "=")

    # Traitement de l'opérateur ?= grâce à la classe Choices (ce n'est pas idéal car % n'est pas plus prioritaire que * ou /)
    fop = expr.find("?=")
    rep = "%choices("
    while fop >= 0:
        ip = expr.find("(", fop+2)  # Parenthèse de ?=
        ic = all_comas(expr, ip + 1, len(expr))
        if ic[1] == -1:
            raise Exception("Parenthesis not closed in " + expr[fop:fop + 30])
        nexpr = expr[0:fop]
        ii = ip + 1
        for i in ic[0]:
            nexpr +=  rep + expr[ii:i].strip() + ", "
            rep = "choices("
            ii = i + 1
        expr = nexpr + rep + expr[ii:ic[1]].strip() + ')' * (len(ic[0]) + 1) + expr[ic[1] + 1:]
        fop = expr.find("?=", ic[1])
    return expr


def cpp_affectations(affect):
    ic = all_comas(affect, 0, len(affect))
    res = ""
    ip = 0
    for i in ic[0]:
        aff = affect[ip:i].strip()
        if re.search("<--", aff) is None:
            aff += " <-- true"
        res += aff + ";"
        ip = i + 1
    aff = affect[ip:].strip()
    if re.search("<--", aff) is None:
        aff += " <-- true"
    return res + aff  # On ne termine pas par ; pour pouvoir ajouter ce qu'on veut après


def read_variable(variables_strs, object_name: str, variables: list) -> Variable:
    if len(variables_strs) <= 1 or isinstance(variables_strs, str) or len(variables_strs[0]) == 0:
        return

    variable = Variable(variables_strs[0][0] + "_OF_" + object_name)
    variables.append(variable)

    for variable_strs in variables_strs[1:]:

        var_identifier = variable_strs[0]

        # Translating to C++
        if var_identifier == "=":
            variable.affect = cpp_expression(variable_strs[1], object_name)
        elif var_identifier == 'REINITIALISATION':
            variable.reinit = True
            variable.affect = cpp_expression(variable_strs[1], object_name)
        elif var_identifier == 'LABEL':
            variable_str = variable_strs[1].replace(var_identifier, '')
            variable_str = variable_str.replace('%OBJECT', object_name)
            variable_str = remove_specials(variable_str)
            variable.label = variable_str
        elif var_identifier == 'DOMAIN':
            variable_str = variable_strs[1].strip()
            if variable_str == 'BOOLEAN':
                pass
            elif variable_str == 'INTEGER':
                variable.domain = 'int'
            elif variable_str == 'REAL':
                variable.domain = 'double'
            else:  # Handling the enum variables state
                variable.domain = None
                tmp = variable_str.split("'")
                for elem in tmp:
                    elem = elem.replace(' ', '')
                    if len(elem) > 0:
                        if elem not in enum_list:
                            enum_list.append(elem)

    return variable


def replace_var_by_elem_state(expression):
    var_names = re.findall("[A-Za-z_][A-Za-z0-9_]*_OF_[A-Za-z0-9_]+", expression)
    replaced = set()
    for name in var_names:
        att = map_attributes.get(name, None)
        if att is None:
            if name not in set_constants:
                raise Exception("The variable " + name + " is used in " + expression + " but not declared")
            continue
        if name in replaced:
            continue
        replaced.add(name)
        expression = re.sub("\\b" + name + "\\b",
                            ("int" if att.domain is None else att.domain) + "State[" + att.name + "]", expression)
    return expression


def read_fig0(input_file_path):

    input_file = open(input_file_path, "r", encoding = "latin-1")

    figaro_code = input_file.read()

    figaro_code = remove_specials(figaro_code)

    figaro_code = replace_concat(figaro_code, 'OF', '_OF_')

    first_level_elts = identifier_general(figaro_code, keywords_main, lookbehind="(?:;\\s*|\\A\\s*)")

    all_steps.append(Step(["default_step", ]))

    for elt in first_level_elts:
        if elt[0] == "SYSTEM_NAMES":
            raise Exception("Linear equation systems are not allowed")
        elif elt[0] == "STEPS_ORDER":
            all_steps.clear()
            declared_steps = elt[1].split(";")
            for st_str in declared_steps:
                for stm in identifier_general(st_str, ["LABEL", "CONDITION"]):
                    if len(stm) == 1:  # C'est le premier, il contient le nom
                        st = Step([n.strip() for n in stm[0].split(",")])
                        all_steps.append(st)
                    elif stm[0] == "LABEL":
                        st.label = stm[1].strip()
                    elif stm[0] == "CONDITION":
                        st.cond = stm[1].strip()
        elif elt[0] == "OBJECT" or elt[0] == "GLOBAL":
            members = identifier_general(elt[1], keywords_object)
            if elt[0] == "GLOBAL":
                members.insert(0, ["GLOBAL"])  # Le nom est GLOBAL

            if len(members) <= 1:
                continue

            object_name = members[0][0][0:-1].strip() if members[0][0][-1] == ";" else members[0][0]
            for member in members:
                if member[0] == 'INTERFACE':
                    continue

                if member[0] == 'CONSTANT':
                    constants = list(member[1].split(";"))
                    for constant in constants:

                        if len(constant) == 0:
                            continue
                        constant_strs = identifier_general(constant, keywords_constant)

                        read_variable(constant_strs, object_name, all_constants)

                if member[0] == 'DIST_PARAMETER':
                    constants = list(member[1].split(";"))
                    for constant in constants:

                        if len(constant) == 0:
                            continue
                        constant_strs = identifier_general(constant, keywords_constant)
                        constant_strs.append(["DOMAIN", "REAL"])

                        read_variable(constant_strs, object_name, all_constants)

                elif member[0] == 'ATTRIBUTE':
                    attributes = member[1].split(";")
                    for attribute in attributes:

                        if len(attribute) == 0:
                            continue
                        attribute_strs = identifier_general(attribute, keywords_attribute)

                        read_variable(attribute_strs, object_name, all_attributes)

                elif member[0] == 'EFFECT':
                    attributes = member[1].split(";")
                    for attribute in attributes:

                        if len(attribute) == 0:
                            continue
                        attribute_strs = identifier_general(attribute, keywords_attribute)
                        attribute_strs.append(["DOMAIN", "BOOLEAN"])
                        attribute_strs.append(["REINITIALISATION", "FALSE"])

                        read_variable(attribute_strs, object_name, all_attributes)

                elif member[0] == 'INTERACTION':

                    interactions = member[1].split(";")

                    for ji in interactions:
                        if len(ji) == 0:
                            continue
                        interaction_strs = identifier_general(ji, keywords_interaction)

                        if len(interaction_strs) == 0 or len(interaction_strs[0]) == 0:
                            continue

                        interaction = Interaction(interaction_strs[0], ["default_step", ])
                        for inter_str in interaction_strs:
                            interaction_identifier = inter_str[0]
                            # translating to C++
                            if interaction_identifier == 'STEP':
                                interaction.steps = [st.strip() for st in inter_str[1].split(",")]
                            if interaction_identifier == 'IF':
                                interaction.cond = cpp_expression(inter_str[1], object_name)
                            if interaction_identifier == 'THEN' or interaction_identifier == 'ELSE':
                                if interaction_identifier == 'THEN':
                                    interaction.then = cpp_expression(cpp_affectations(inter_str[1]), object_name)
                                else:
                                    interaction.else_ = cpp_expression(cpp_affectations(inter_str[1]), object_name)

                        if interaction.then is None and interaction.cond is not None:
                            interaction.cond = "!(" + interaction.cond + ")"
                            interaction.then = interaction.else_
                            interaction.else_ = None
                        if interaction.then is not None:
                            all_interactions.append(interaction)
                            for st in all_steps:
                                for ist in interaction.steps:
                                    if ist in st.names:
                                        st.interactions.append(interaction)

                elif member[0] == 'OCCURRENCE':
                    occurrences_strs = member[1].split(";")

                    for jo in occurrences_strs:
                        occurrence_strs = identifier_general(jo, keywords_occurrence)
                        if len(occurrence_strs) <= 1:
                            continue
                        occurrence = Occurrence(occurrence_strs[0][0] + "_OF_" + object_name)
                        all_occurrences.append(occurrence)
                        for occ_strs in occurrence_strs:
                            occ_identifier = occ_strs[0]
                            if occ_identifier == "IF":
                                # translating to C++:
                                occurrence.cond = cpp_expression(change_boolean(occ_strs[1]), object_name)
                            elif occ_identifier == "MAY_OCCUR" or occ_identifier == "OR_ELSE":
                                occurrence_may_occur = occ_strs[1].replace("%OBJECT", object_name)
                                may_parsed = identifier_general(occurrence_may_occur, keywords_may_occur)
                                tr = Transition(occurrence.name)
                                occurrence.trans.append(tr)
                                for may_elt in may_parsed:
                                    if may_elt[0] == "LABEL":
                                        tr.label = may_elt[1]
                                    if may_elt[0] == "DIST":
                                        occurrence.type = may_elt[1][0:3]  # C'est strippé
                                        if occurrence.type not in ["INS", "EXP"]:
                                            raise Exception("Unknown distribution for occurrence " + occurrence.name)
                                        tr.rate = cpp_expression(may_elt[1][may_elt[1].find("(",3)+1:-1], object_name)  # On enlève les parenthèses
                                    elif may_elt[0] == "INDUCING":
                                        tr.affect = cpp_expression(cpp_affectations(may_elt[1]), object_name)
                                    elif may_elt[0] in ["FAULT", "TRANSITION", "REPAIR"]:
                                        tr.type = may_elt[0]
                                        tr.trName = may_elt[1]
                                if occurrence.type == "INS":
                                    tr.name += "_INS_" + str(len(occurrence.trans))
                        if occurrence.type == "INS":
                            occurrence.complete()

    input_file.close()


def read_analysis(input_analysis_path):
    global all_failures
    tree = EltTree.parse(input_analysis_path)
    root = tree.getroot()
    for params in root.findall("PARAMETERS"):
        for att in params.attrib:
            if att == "MAX_RULES_RUNS":
                all_parameters["MAX_TURNS_IR"] = params.get(att)
            elif att == "OPTIMIZE_RULES_ORDER":
                raise Exception("Rules optimization is not available")
            elif att == "MAX_INST_TRANSITIONS":
                raise Exception("Limiting the count of successive instantaneous transitions is not available")
            else:
                raise Exception("Unkwown parameter " + att)
    for unrel in root.findall("UNRELIABILITY"):
        for child in unrel:
            failure = Failure("exp" + str(len(all_failures)))
            all_failures.append(failure)
            failure.cond = cpp_expression(child.get("CONDITION"))
            failure.type = child.get("TYPE")
            failure.type = 7 if not failure.type else ((1 if failure.type.find("VANISHING")>=0 else 0) +
                                                       (2 if failure.type.find("TANGIBLE")>=0 else 0) +
                                                       (4 if failure.type.find("ABSORBING")>=0 else 0))


def write_header(header_file_path: str):
    global enum_list
    global all_steps
    global all_constants
    global all_attributes
    # Writing of the header file: cpp/FigaroModel.h ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    cpp_header_file = open(header_file_path, "w")
    cpp_header_file.write("""
#pragma once
#ifdef INTERACTIVE
#include "FigaroModelTemplate.h"
#endif
#ifndef INTERACTIVE
#include "storm-figaro/model/FigaroModelTemplate.h"
#include <boost/dll/alias.hpp>
#endif

namespace storm{
    namespace figaro{
        class FigaroProgram1: public storm::figaro::FigaroProgram{
            // to manage mixed types
            int tmin(int a, int b){return a<b?a:b;}
            double tmin(int a, double b){return a<b?a:b;}
            double tmin(double a, int b){return a<b?a:b;}
            double tmin(double a, double b){return a<b?a:b;}
            int tmax(int a, int b){return a>b?a:b;}
            double tmax(int a, double b){return a>b?a:b;}
            double tmax(double a, int b){return a>b?a:b;}
            double tmax(double a, double b){return a>b?a:b;}
            int fact(int i){int res = 1;while(i>0)res*=i--;return res;}
            double lfact(int i);
        public:
            FigaroProgram1(): FigaroProgram(
""")
    cur_indent = "\t\t\t\t"

    cpp_bool_state = ""
    cpp_float_state = ""
    cpp_int_state = ""
    cpp_enum_state = ""
    cpp_failure_index = ""
    cpp_map_bool_state = "//            std::map<std::string, size_t> mFigaroboolelementindex =\n" + cur_indent + "{ "
    cpp_map_float_state = "//            std::map<std::string, size_t> mFigarofloatelementindex =\n" + cur_indent + "{ "
    cpp_map_int_state = "//            std::map<std::string, size_t> mFigarointelementindex =\n" + cur_indent + "{ "
    cpp_map_enum_state = "//            std::map<std::string, size_t> mFigaroenumelementindex =\n" + cur_indent + "{ "
    cpp_map_failure_index = "//            std::map<std::string, size_t> mFigaroelementfailureindex =\n" + cur_indent + "{ "

    cpp_expected_states = ""

    nb_boolState = 0
    nb_intState = 0
    nb_floatState = 0
    nb_enumState = 0
    for att in all_attributes:
        map_attributes[att.name] = att
        if att.domain == "bool":
            cpp_bool_state += "\nint " + att.name + " = " + str(nb_boolState) + " ;" +\
                              ("" if att.label is None else " // " + att.label)
            cpp_map_bool_state += "\n" + cur_indent + "{\"" + att.name + "\" , " + str(nb_boolState) + "},"
            nb_boolState += 1
            att.stateName = "boolState[" + att.name + "]"
        elif att.domain == "double":
            cpp_float_state += "\nint " + att.name + " = " + str(nb_floatState) + " ;" +\
                              ("" if att.label is None else " // " + att.label)
            cpp_map_float_state += "\n" + cur_indent + "{\"" + att.name + "\" , " + str(nb_floatState) + "},"
            nb_floatState += 1
            att.stateName = "floatState[" + att.name + "]"
        elif att.domain == "int":
            cpp_int_state += "\nint " + att.name + " = " + str(nb_intState) + " ;" +\
                              ("" if att.label is None else " // " + att.label)
            cpp_map_int_state += "\n" + cur_indent + "{\"" + att.name + "\" , " + str(nb_intState) + "},"
            nb_intState += 1
            att.stateName = "intState[" + att.name + "]"
        else:  # enum
            cpp_enum_state += "\nint " + att.name + " = " + str(nb_enumState) + " ;"
            cpp_map_enum_state += "\n" + cur_indent + "{\"" + att.name + "\" , " + str(nb_enumState) + "},"
            nb_enumState += 1
            att.stateName = "enumState[" + att.name + "]"
    for cst in all_constants:
        set_constants.add(cst.name)

    for i in range(len(all_failures)):
        f = all_failures[i]
        cpp_failure_index += "\nint " + f.name + " = " + str(i) + " ;"
        cpp_map_failure_index += "\n            \t{\"" + f.name + "\" , " + str(i) + "},"
        cpp_expected_states += str(f.type) + ", "

    cpp_header_file.write(cpp_map_bool_state[:-1] + "},\n")
    cpp_header_file.write(cpp_map_failure_index[:-1] + "},\n")
    cpp_header_file.write(cpp_map_float_state[:-1] + "},\n")
    cpp_header_file.write(cpp_map_int_state[:-1] + "},\n")
    cpp_header_file.write(cpp_map_enum_state[:-1] + "},\n")

    cpp_header_file.write("\n//" + cur_indent + "std::string const topevent=\n" + cur_indent + "\""
                          + (all_failures[0].name if all_failures else "") + "\",")

    cpp_header_file.write(
        "\n//" + cur_indent + "static int const numBoolState = \n" + cur_indent + str(nb_boolState) + " ,")
    cpp_header_file.write(
        "\n//" + cur_indent + "static int numBoolFailureState = \n" + cur_indent + str(len(all_failures)) + " ,")
    cpp_header_file.write(
        "\n//" + cur_indent + "static int const numFloatState = \n" + cur_indent + str(nb_floatState) + " ,")
    cpp_header_file.write(
        "\n//" + cur_indent + "static int const numIntState = \n" + cur_indent + str(nb_intState) + " ,")
    cpp_header_file.write(
        "\n//" + cur_indent + "static int const numEnumState = \n" + cur_indent + str(nb_enumState) + " ,")
    cpp_header_file.write("\n//" + cur_indent + "bool ins_transition_found = \n" + cur_indent +
                          " false),ExpectedStates({" + cpp_expected_states[0:-2] + "}){} \n")

    cur_indent = cur_indent[0:-1]

    # enum variables declaration
    cpp_header_file.write("\n" + cur_indent +
                          "/* ---------- CODING ENUMERATED VARIABLES STATES ------------ */\n" +
                          cur_indent + "enum enum_status {  ")
    enum_number = 0
    for elem in enum_list:
        cpp_header_file.write(elem + " = " + str(enum_number) + ("" if elem == enum_list[-1] else ", "))
        enum_number += 1
    cpp_header_file.write("};\n" + cur_indent +
                          "enum enum_state {st_none = 0, st_vanishing = 1, st_tangible = 2, st_absorbing = 4};")

    cpp_header_file.write("\n//" + cur_indent + "std::vector<bool> boolState;")
    cpp_header_file.write("\n//" + cur_indent + "std::vector<bool> backupBoolState;")

    cpp_header_file.write("\n//" + cur_indent + "std::vector<double> floatState;")
    cpp_header_file.write("\n//" + cur_indent + "std::vector<double> backupFloatState;")

    cpp_header_file.write("\n//" + cur_indent + "std::vector<int> intState;")
    cpp_header_file.write("\n//" + cur_indent + "std::vector<int> backupIntState;")

    cpp_header_file.write("\n//" + cur_indent + "std::vector<int> enumState;")
    cpp_header_file.write("\n//" + cur_indent + "std::vector<int> backupEnumState;")

    # Constant declaration:
    cpp_header_file.write("\n\n/* ---------- DECLARATION OF CONSTANTS ------------ */")
    for cst in all_constants:
        cpp_header_file.write("\n" + cur_indent + (
            "int" if cst.domain is None else cst.domain) + " const " + cst.name + " = " + cst.affect + ";" +\
                              ("" if cst.label is None else " // " + cst.label))

    # fire_occurrence declaration
    cpp_header_file.write("\n\n/* ---------- DECLARATION OF OCCURRENCE RULES FIRING FLAGS ------------ */")
    num_fire = 0
    num_ins = 0
    for occ in all_occurrences:
        if occ.type == "INS":
            num_ins += 1
        for tr in occ.trans:
            tr.numFire = num_fire
            num_fire += 1
            if occ.type == "INS":
                tr.numIns = num_ins
            cpp_header_file.write("\n" + cur_indent + "bool FIRE_" + tr.name + ";")

    cpp_header_file.write("\n\n" + cur_indent + "std::vector<int>ExpectedStates;")
    cpp_header_file.write("\n\n" + cur_indent + "enum_state CurrentState = st_none;")

    # Attributes declaration
    cpp_header_file.write("\n\n/* ---------- DECLARATION OF VARIABLE INDEXES ------------ */")
    cpp_header_file.write("\n" + cur_indent + "//boolean state" + cpp_bool_state.replace('\n', '\n' + cur_indent))
    cpp_header_file.write("\n" + cur_indent + "//double state" + cpp_float_state.replace('\n', '\n' + cur_indent))
    cpp_header_file.write("\n" + cur_indent + "//integer state" + cpp_int_state.replace('\n', '\n' + cur_indent))
    cpp_header_file.write("\n" + cur_indent + "//enum state" + cpp_enum_state.replace('\n', '\n' + cur_indent))

    cpp_header_file.write(cpp_failure_index.replace('\n', '\n' + cur_indent) + "\n")

    # Function header declaration :
    cpp_header_file.write("\n/* ---------- DECLARATION OF FUNCTIONS ------------ */")

    cpp_header_file.write("\n" + cur_indent + "void init();")

    cpp_header_file.write("\n" + cur_indent + "void saveCurrentState();")

    cpp_header_file.write("\n" + cur_indent + "void printState();")

    cpp_header_file.write("\n" + cur_indent + "void fireOccurrence(int numFire);")

    cpp_header_file.write(
        "\n" + cur_indent + "std::vector<std::tuple<int, double, std::string, int, std::string>> showFireableOccurrences();")

    # step functions
    for step in all_steps:
        if len(step.interactions) > 0:
            cpp_header_file.write("\n" + cur_indent + "void runOnceInteractionStep_" + step.names[0] + "();")

    cpp_header_file.write("\n" + cur_indent + "int compareStates();")
    cpp_header_file.write("\n" + cur_indent + "void doReinitialisations();")
    cpp_header_file.write("\n" + cur_indent + "void runInteractions();")
    cpp_header_file.write("\n" + cur_indent + "void printstatetuple();")
    cpp_header_file.write("\n" + cur_indent + "void fireinsttransitiongroup(std::string);")
    cpp_header_file.write("\n" + cur_indent + "bool figaromodelhasinstransitions();")
    cpp_header_file.write("\n" + cur_indent + "void updateFailureStates();")

    cpp_header_file.write("""
    #ifdef INTERACTIVE
        };
    }
}
    #endif
    #ifndef INTERACTIVE
    \nstatic std::shared_ptr<storm::figaro::FigaroProgram> create() {
                               return std::shared_ptr<storm::figaro::FigaroProgram1> (new storm::figaro::FigaroProgram1());
                                }
    };
        BOOST_DLL_ALIAS(storm::figaro::FigaroProgram1::create, create_builder);
    }
}
    #endif
    """)

    cpp_header_file.close()  # ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


def write_cpp_trans(cpp_source_file, occ, tr):
    if occ.cppCond:
        cpp_source_file.write("\n\tif (" + occ.cppCond + ")\n\t{")
    tr.cppRate = replace_var_by_elem_state(tr.rate)
    cpp_source_file.write("\n\t\t#ifdef INTERACTIVE")
    if occ.type == "EXP":
        cpp_source_file.write("\n\t\t\tstd::cout << \"" + str(tr.numFire) + " : " + tr.name + " : " + tr.type + " " +
                              tr.trName + ("" if tr.label is None else ' LABEL \\' + tr.label[0:-1] + '\\"') +
                              "  DIST EXP (" + tr.cppRate + ")  INDUCING " + tr.affect + "\" << std::endl;")
    else:
        cpp_source_file.write("\n\t\t\tstd::cout << \"" + str(tr.numFire)
                              + " : INS_SUB_COUNT(" + str(tr.numIns) + ") " + tr.name + " : " + tr.type + " " +
                              tr.trName + ("" if tr.label is None else ' LABEL \\' + tr.label[0:-1] + '\\"') +
                              "  DIST EXP (" + tr.cppRate + ")  INDUCING " + tr.affect + "\" << std::endl;")
    cpp_source_file.write("\n\t\t#endif\n\t\tlist.push_back(std::make_tuple(" + str(tr.numFire) + ", " + tr.cppRate +
                          ", \"" + occ.type + ("\", " + str(tr.numIns)) + ", " +str("\""+tr.name.split("_OF_")[1].strip().split("_INS_")[0].strip()+"_"+tr.trName+"\"")+"));")
    if occ.cppCond:
        cpp_source_file.write("\n\t}")


def write_cpp_file(cpp_file_path, header_file_path):
    header_file_path = os.path.basename(header_file_path)
    # Writing of the file: cpp/FigaroModel.cpp ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    cpp_source_file = open(cpp_file_path, "w")
    cpp_source_file.write("""

#include \"""" + header_file_path + """"

#include <iostream>
#include <cmath>

namespace storm{
    namespace figaro{
        double storm::figaro::FigaroProgram1::lfact(int i){
            double res = 0;
            while(i>0)
                res += std::log(i);
            return res;
        }
        /* ---------- MANAGEMENT OF ?= OPERATOR ---------- */
        std::vector<bool>choices(bool c1, std::vector<bool>v1 = std::vector<bool>()) {
            v1.push_back(c1);
            return v1;
        }
        std::vector<int>choices(int c1, std::vector<int>v1 = std::vector<int>()) {
            v1.push_back(c1);
            return v1;
        }
        std::vector<double>choices(double c1, std::vector<double>v1 = std::vector<double>()) {
            v1.push_back(c1);
            return v1;
        }
        std::vector<int>choices(int c1, std::vector<bool>&v1) {
            return choices(c1, std::vector<int>(v1.begin(),v1.end()));
        }
        std::vector<double>choices(double c1, std::vector<bool>&v1) {
            return choices(c1, std::vector<double>(v1.begin(),v1.end()));
        }
        std::vector<double>choices(double c1, std::vector<int>&v1) {
            return choices(c1, std::vector<double>(v1.begin(), v1.end()));
        }
        template<typename TYPE>TYPE operator%(int ichoice, std::vector<TYPE> const&choices) {
            if (--ichoice < 0 || ichoice >= (int)choices.size())
                return choices.back();
            return choices[ichoice];
        }
""")

    # Ecriture de la procédure d'initialisation des variables
    cpp_source_file.write("""
void storm::figaro::FigaroProgram1::init()
{
#ifdef INTERACTIVE
    std::cout <<">>>>>>>>>>>>>>>>>>>> Initialization of variables <<<<<<<<<<<<<<<<<<<<<<<" << std::endl;
#endif
""")
    for att in all_attributes:
        if not att.reinit:
            cpp_source_file.write("\n\t" + att.stateName + " = " + att.affect + ";")

    cpp_source_file.write("\n\t/* ---------- DECLARATION OF OCCURRENCE RULES FIRING FLAGS ------------ */")
    has_ins_trans = False
    for occ in all_occurrences:
        for tr in occ.trans:
            cpp_source_file.write("\n\tFIRE_" + tr.name + " = false;")
        if occ.type == "INS":
            has_ins_trans = True

    cpp_source_file.write("\n\tdoReinitialisations();\n}\n")

    # Sauvegarde et comparaison de l'état courant
    cpp_source_file.write("""
void storm::figaro::FigaroProgram1::saveCurrentState()
{
    // std::cout <<">>>>>>>>>>>>>>>>>>>> Saving current state  <<<<<<<<<<<<<<<<<<<<<<<" << std::endl;
    backupBoolState = boolState ;
    backupFloatState = floatState ;
    backupIntState = intState ;
    backupEnumState = enumState ;
}

int storm::figaro::FigaroProgram1::compareStates()
{
    // std::cout <<">>>>>>>>>>>>>>>>>>>> Comparing state with previous one (return number of differences) <<<<<<<<<<<<<<<<<<<<<<<" << std::endl;

    return (backupBoolState != boolState) + (backupFloatState != floatState) + (backupIntState != intState) + (backupEnumState != enumState);
}
""")

    # Impression de l'état courant
    cpp_source_file.write("""
void storm::figaro::FigaroProgram1::printState()
{
    std::cout <<"\\n==================== Print of the current state :  ====================" << std::endl;
""")
    for att in all_attributes:
        cpp_source_file.write(
            '\n\tstd::cout << "Attribute :  ' + att.stateName + ' | Value : " << ' + att.stateName + " << std::endl;")
    cpp_source_file.write("\n}\n")

    # Fonction de présence de transitions instantanées
    cpp_source_file.write("""
bool storm::figaro::FigaroProgram1::figaromodelhasinstransitions()
{
    return """ + ("true" if has_ins_trans else "false") + """;
}
""")

    # Mise à jour des états de panne
    cpp_source_file.write("""
void storm::figaro::FigaroProgram1::updateFailureStates()
{
    // ------------------- Handling of FailureState elements --------------------------------""")
    for i in range(len(all_failures)):
        f = all_failures[i]
        cpp_source_file.write("\n\tboolFailureState[" + f.name + "] = (" + replace_var_by_elem_state(f.cond) +
                              " && (CurrentState & ExpectedStates[" + str(i) + "]) != 0);")
    cpp_source_file.write("\n}\n")

    # Réinitialisation des variables
    cpp_source_file.write("""
void storm::figaro::FigaroProgram1::doReinitialisations()
{""")
    for att in all_attributes:
        if att.reinit:
            cpp_source_file.write("\n\t" + att.stateName + " = " + att.affect + ";")
    cpp_source_file.write("\n}\n")

    # Tirage des occurrences
    cpp_source_file.write("""
void storm::figaro::FigaroProgram1::fireOccurrence(int numFire)
{
#ifdef INTERACTIVE
    std::cout <<">>>>>>>>>>>>>>>>>>>> Fire of occurrence #" << numFire << " <<<<<<<<<<<<<<<<<<<<<<<" << std::endl;
#endif
""")
    for occ in all_occurrences:
        for tr in occ.trans:
            cpp_source_file.write("\n\tif (numFire == " + str(tr.numFire) + ")\n\t\tFIRE_" + tr.name + " = true;")

    cpp_source_file.write("\n\t/* ---------- DECLARATION OF OCCURRENCE RULES------------ */\n")
    for occ in all_occurrences:
        cpp_source_file.write("\n\t// Occurrence " + occ.name)
        for tr in occ.trans:
            if occ.cond:
                occ.cppCond = replace_var_by_elem_state(occ.cond)
                cpp_source_file.write("\n\tif (" + occ.cppCond + ")\n\t\tif (FIRE_" + tr.name + ")\n\t\t{")
                cpp_source_file.write("\n\t\t\t" + replace_var_by_elem_state(tr.affect).replace(";", ";\n\t\t\t"))
                cpp_source_file.write(";\n\t\t\tFIRE_" + tr.name + " = false;\n\t\t}")
            else:
                cpp_source_file.write("\n\tif (FIRE_" + tr.name + ")\n\t{")
                cpp_source_file.write("\n\t\t" + replace_var_by_elem_state(tr.affect).replace(";", ";\n\t\t"))
                cpp_source_file.write(";\n\t\tFIRE_" + tr.name + " = false;\n\t}")

    cpp_source_file.write("\n}")

    # Présentation des transition tirables
    cpp_source_file.write("""
std::vector<std::tuple<int, double, std::string, int, std::string>> storm::figaro::FigaroProgram1::showFireableOccurrences()
{
    std::vector<std::tuple<int, double, std::string, int, std::string>> list = {};
#ifdef INTERACTIVE
    std::cout <<"\\n==================== List of fireable occurrences :  ====================" << std::endl;
#endif
""")
    for occ in all_occurrences:
        if occ.type == "INS":
            for tr in occ.trans:
                write_cpp_trans(cpp_source_file, occ, tr)

    cpp_source_file.write("""
    if ((ins_transition_found = (list.size() > 0)))
    {
		CurrentState = st_vanishing;
		updateFailureStates();
		return list;
	}""")
    for occ in all_occurrences:
        if not (occ.type == "INS"):
            for tr in occ.trans:
                write_cpp_trans(cpp_source_file, occ, tr)

    cpp_source_file.write("\n\tCurrentState = list.empty()?st_absorbing:st_tangible;\n\tupdateFailureStates();\n\treturn list;\n}")

    # Execution de chacunes des étapes
    for st in all_steps:
        if st.interactions:
            cpp_source_file.write("\nvoid storm::figaro::FigaroProgram1::runOnceInteractionStep_" + st.names[0] + "()\n{")
            for inter in st.interactions:
                if inter.cond is not None:
                    cpp_source_file.write("\n\tif (" + replace_var_by_elem_state(inter.cond) + ")\n\t{")
                    cpp_source_file.write(
                        "\n\t\t" + replace_var_by_elem_state(inter.then).replace(";", ";\n\t\t") + ";\n\t}")
                    if inter.else_ is not None:
                        cpp_source_file.write(
                            " else {" + replace_var_by_elem_state(inter.else_).replace(";", ";\n\t\t") + "; }")
                else:
                    cpp_source_file.write("\n\t" + replace_var_by_elem_state(inter.then).replace(";", ";\n\t") + ";")
            cpp_source_file.write("\n}")

    # Exécution de l'ensemble des étapes
    cpp_source_file.write("""
    
void storm::figaro::FigaroProgram1::runInteractions() {
    int counter = 0;
    int comparator = 1;
    CurrentState = st_none;
    doReinitialisations();
    int max_interactions_loop = """ + all_parameters["MAX_TURNS_IR"] + """; 
""")
    for st in all_steps:
        if st.interactions:
            cpp_source_file.write("""
 	counter = 0;
 	comparator = 1;
    do
 	{
		//std::cout << counter << std::endl;
		saveCurrentState();
		runOnceInteractionStep_""" + st.names[0] + """();
		comparator = compareStates();
		counter++;
 	} while (comparator > 0 && counter < max_interactions_loop);""")
            cpp_source_file.write("""
 	if (comparator <= 0)
 	{
  #ifdef INTERACTIVE
		std::cout << "==> Stabilisation of interactions at loop #" << counter << " for runInteractionStep_""" + st.names[0] + """() ." << std::endl;
  #endif
 	}
 	else {
  #ifdef INTERACTIVE
		std::cout << "==> Maximum of interactions loop  reached : #" << counter <<" for runOnceInteractionStep_""" + st.names[0] + """()." << std::endl;
  #endif
 	}""")
    cpp_source_file.write("\n#ifdef INTERACTIVE\n\tstd::cout << std::endl;\n#endif\n}")

    # Restitutions variées

    cpp_source_file.write("""
void storm::figaro::FigaroProgram1::printstatetuple(){
    std::cout<<"\\n State information: (";
    for (int i=0; i<(int)boolFailureState.size(); i++)
    {
        std::cout<<boolFailureState.at(i);
    }
    std::cout<<")";    
}
    
void storm::figaro::FigaroProgram1::fireinsttransitiongroup(std::string user_input_ins)
{
    std::vector<int> list_user_inputs = {};
    int user_input = -2;
    std::stringstream ss(user_input_ins);
    for (int i; ss >> i;) {
        list_user_inputs.push_back(i);
        if (ss.peek() == ',')
            ss.ignore();
    }
    
    for (size_t i = 0; i < list_user_inputs.size(); i++)
    {
#ifdef INTERACTIVE
        std::cout << list_user_inputs[i] << std::endl;
#endif
        user_input = list_user_inputs[i];
        if (user_input == -1)
            break;
        fireOccurrence(user_input);
    }
}
}
}
""")

    cpp_source_file.close()  # ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


def main():
    parser = argparse.ArgumentParser("Fig2Cpp")
    # Compatibilité ascendante
    parser.add_argument("arg1", nargs='?', help="Base directory or fig0 file (if more than 1 positionnal args, override -fig0)")
    parser.add_argument("arg2", nargs='?', help="Analysis file (override -a)")
    parser.add_argument("arg3", nargs='?', help="cpp output file (override -cpp)")
    parser.add_argument("arg4", nargs='?', help="h output file (override -hpp)")
    # Arguments nommés
    parser.add_argument("-fig0", default="export_fig0.fi", help="Fig0 input file (by default %(default)s)")
    parser.add_argument("-a", default="analysis.xml", help="Analysis input file (by default %(default)s)")
    parser.add_argument("-cpp", default="FigaroModel.cpp", help="cpp output file (by default %(default)s)")
    parser.add_argument("-hpp", default="FigaroModel.h", help="h output file (by default %(default)s)")
    parser.add_argument("-sa", default=None, help=argparse.SUPPRESS)
    parser.add_argument("-v", default=None, action='version', version="V1.0.0")
    args = parser.parse_args()

    if args.arg1 is None:
        print("The program is launched with no positionnal argument")
        input_file_path = args.fig0
        input_analysis_path = args.a if args.sa is None else re.sub(args.sa, args.a, input_file_path)
        cpp_file_path = args.cpp
        header_file_path = args.hpp
    elif args.arg2 is None:  # the program was launched with one positionnal arguments
        print("The program is launched with directory path")
        input_file_path = os.path.join(args.arg1.rstrip(), args.fig0)
        input_analysis_path = os.path.join(args.arg1.rstrip(), args.a) if args.sa is None else re.sub(args.sa, args.a, input_file_path)
        cpp_file_path = os.path.join(args.arg1.rstrip(), args.cpp)
        header_file_path = os.path.join(args.arg1.rstrip(), args.hpp)
    else:  # the program was launched with four arguments
        print("The program is launched with more than one positionnal argument")
        input_file_path = args.arg1
        input_analysis_path = args.arg2
        cpp_file_path = args.arg3 if args.arg3 is not None else args.cpp
        header_file_path = args.arg4 if args.arg4 is not None else args.hpp

    print(input_file_path)
    read_fig0(input_file_path)
    if len(input_analysis_path) > 0:
        read_analysis(input_analysis_path)
    write_header(header_file_path)
    write_cpp_file(cpp_file_path, header_file_path)


if __name__ == "__main__":
    main()
