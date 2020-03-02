#!/usrINPUT=Nonen

from Bdmp2Modest import *
from ModestDefinitons import *
import copy
import sys, getopt
import re
import pprint
from collections import deque
from queue import Queue
import math
import random


def nCr(n, r):
    f = math.factorial
    return (f(n) // f(r) // f(n - r))


# def parse_result(file):
parse_state = 0
result = None
results = []
old = False
matching_lines = []


def ReadFiFrench2English(lines, file_object, BDMP):
    for i, line in enumerate(file_object):
        if line.startswith("OBJET"):
            element = {}
            match = re.search(r"OBJET (.*) EST_UN (.*);", line)
            if (match.group(1) == 'OPTIONS') | (match.group(1) == '__ARBRE__EIRM') | (
                    match.group(2) == 'lien_logique') | (match.group(2) == 'lien_declenche') | (match.group(2) == 'lien_d_abord') | (
                    match.group(2) == 'lien_ensuite') | (match.group(2) =='lien_precede' ):
                continue
            else:
                element = {'Name': match.group(1), 'Type': match.group(2)}
                element_Name = match.group(1)
                ref = i + 1
                while not lines[ref].startswith("OBJET"):
                    ref += 1
                    match = re.search(r"amont\n", lines[ref])  # amont parents
                    if match:
                        element['Fathers'] = (lines[ref + 1].replace(';', '').split()[1:])
                    match = re.search(r"aval\n", lines[ref])  # aval sons
                    if match:
                        element['Sons'] = (lines[ref + 1].replace(';', '').split()[1:])
                    match = re.search(r"\bType_de_loi\n", lines[ref])
                    if match and (str(lines[ref + 2].split()[1].strip(';')) != '\'exponentiel\''):
                        sys.exit('Sorry only exponentials are supported')
                    match = re.search(r"duree\n", lines[ref])  # aval sons
                    if match:
                        element['lambda'] = str(1/float(lines[ref + 2].split()[1].strip(';')))
                    match = re.search(r"\ben_cours\n", lines[ref])
                    if match:
                        element['In_progress'] = lines[ref + 3].split()[1].strip(';')
                    match = re.search(r"previous\n", lines[ref])
                    if match:
                        element['Previous'] = lines[ref + 1].split()[1].strip(';')
                    match = re.search(r"calcul_soll\n", lines[ref])  # calcul_soll  caluclate required
                    if match:
                        element['Calculate'] = lines[ref + 2].split()[1].strip('\' ;')
                    match = re.search(r"\bmu\n", lines[ref])
                    if match:
                        element['mu'] = lines[ref + 2].split()[1].strip(';')
                    match = re.search(r"\blambda\n", lines[ref])
                    if match:
                        element['lambda'] = lines[ref + 2].split()[1].strip(';')
                    match = re.search(r"gamma\n", lines[ref])
                    if match:
                        element['gamma'] = lines[ref + 2].split()[1].strip(';')
                    match = re.search(r"lambda_attente\n", lines[ref])
                    if match:
                        element['standby_lambda'] = lines[ref + 2].split()[1].strip(';')
                    match = re.search(r"declenchant\n", lines[ref])  # declenche is triggered by
                    if match:
                        element['Triggered_by'] = lines[ref + 1].split()[1].strip(';')
                    match = re.search(r"K\n", lines[ref])  # K parameter
                    if match:# and element['Type'] = 'feuille_mult':
                        element['K'] = lines[ref + 2].split()[1].strip(';')
                    match = re.search(r"effectif\n", lines[ref])
                    if match:
                        element['Nr_items'] = lines[ref + 2].split()[1].strip(';')
                    match = re.search(r"nb_requis\n", lines[ref])
                    if match:
                        element['Min_acceptable'] = lines[ref + 2].split()[1].strip(';')
                    match = re.search(r"nb_reparateurs\n", lines[ref])
                    if match:
                        element['Nr_repairmen'] = lines[ref + 2].split()[1].strip(';')
                    match = re.search(r"nb_OK\n", lines[ref])
                    if match:
                        element['Nr_ok'] = lines[ref + 2].split()[1].strip(';')
                    match = re.search(r"nb_rep_en_cours\n", lines[ref])
                    if match:
                        element['Nr_being_repaired'] = lines[ref + 2].split()[1].strip(';')
                    match = re.search(r"d_abord\n", lines[ref])
                    if match:
                        element['First'] = lines[ref + 1].split()[1].strip(';')
                    match = re.search(r"ensuite\n", lines[ref])
                    if match:
                        element['Second'] = lines[ref + 1].split()[1].strip(';')




            BDMP[element_Name] = element
            ##########Convert the names to english
            for component in BDMP:
                if BDMP[component]['Type'] == "porte_ou":
                    BDMP[component]['Type'] = "or_gate"
                if BDMP[component]['Type'] == "porte_et":
                    BDMP[component]['Type'] = "and_gate"
                if BDMP[component]['Type'] == "porte_puis":
                    BDMP[component]['Type'] = "then_gate"
                if BDMP[component]['Type'] == "feuille_f":
                    BDMP[component]['Type'] = "f_leaf"
                if BDMP[component]['Type'] == "feuille_af":
                    BDMP[component]['Type'] = "sf_leaf"
                if BDMP[component]['Type'] == "feuille_phase":
                    BDMP[component]['Type'] = "phase_leaf"
                if BDMP[component]['Type'] == "porte_k_sur_n":
                    BDMP[component]['Type'] = "k_out_of_n_gate"
                if BDMP[component]['Type'] == "feuille_i":
                    BDMP[component]['Type'] = "i_leaf"
                if BDMP[component]['Type'] == "feuille_mult":
                    BDMP[component]['Type'] = "multiple_leaf"
                if BDMP[component]['Type'] == "phase_leaf":
                    if BDMP[component]['In_progress'] == "VRAI":
                        BDMP[component]['In_progress'] = "TRUE"
                    if BDMP[component]['In_progress'] == "FAUX":
                        BDMP[component]['In_progress'] = "FALSE"
                if BDMP[component]['Type'] == "evt_indes":
                    BDMP[component]['Type'] = "undes_event"
                if BDMP[component]['Calculate'] == "fn_amont_et_decl":
                    BDMP[component]['Calculate'] = "fn_fathers_and_trig"
                if BDMP[component]['Calculate'] == "fn_amont_inv_decl":
                    BDMP[component]['Calculate'] = "fn_fathers_opp_trig"
                if BDMP[component]['Calculate'] == "toujours_vrai":
                    BDMP[component]['Calculate'] = "always_true"
                if BDMP[component]['Calculate'] == "toujours_faux":
                    BDMP[component]['Calculate'] = "always_false"
                if BDMP[component]['Calculate'] == "egal_a_real_decl":
                    BDMP[component]['Calculate'] = "equal_to_S_trig"
                if BDMP[component]['Calculate'] == "contraire_real_decl":
                    BDMP[component]['Calculate'] = "opposite_to_S_trig"


    return BDMP

def ReadFiEnglish(lines, file_object, BDMP):
    for i, line in enumerate(file_object):
        if line.startswith("OBJECT"):
            element = {}
            match = re.search(r"OBJECT (.*) IS_A (.*);", line)
            if (match.group(1) == 'OPTIONS') | (match.group(1) == '__ARBRE__EIRM') | (
                    match.group(2) == 'logic_link') | (match.group(2) == 'trigger_link') | (
                    match.group(2) == 'before_link') |( match.group(2) =='first_link') | ( match.group(2) =='second_link'):
                continue
            else:
                element = {'Name': match.group(1), 'Type': match.group(2)}
                element_Name = match.group(1)
                ref = i + 1
                while not lines[ref].startswith("OBJECT"):
                    ref += 1
                    match = re.search(r"fathers\n", lines[ref])
                    if match:
                        element['Fathers'] = (lines[ref + 1].replace(';', '').split()[1:])
                    match = re.search(r"sons\n", lines[ref])
                    if match:
                        element['Sons'] = (lines[ref + 1].replace(';', '').split()[1:])
                    match = re.search(r"previous\n", lines[ref])
                    if match:
                        element['Previous'] = lines[ref + 1].split()[1].strip(';')
                    match = re.search(r"calculate_required\n", lines[ref])
                    if match:
                        element['Calculate'] = lines[ref + 2].split()[1].strip('\' ;')
                    match = re.search(r"mu\n", lines[ref])
                    if match:
                        element['mu'] = lines[ref + 2].split()[1].strip(';')
                    match = re.search(r"\blambda\n", lines[ref])
                    if match:
                        element['lambda'] = lines[ref + 2].split()[1].strip(';')
                    match = re.search(r"\b \n", lines[ref])
                    if match:
                        element['lambda'] = str(1 / float(lines[ref + 2].split()[1].strip(';')))
                    match = re.search(r"\bDist_kind\n", lines[ref])
                    if match and (str(lines[ref + 2].split()[1].strip(';')) != '\'exponential\''):
                        sys.exit('Sorry only exponentials are supported')
                    match = re.search(r"\bduration\n", lines[ref])
                    if match:
                        element['lambda'] = str(1/float(lines[ref + 2].split()[1].strip(';')))
                    match = re.search(r"\bin_progress\n", lines[ref])
                    if match:
                        element['In_progress'] = lines[ref + 3].split()[1].strip(';')
                    match = re.search(r"gamma\n", lines[ref])
                    if match:
                        element['gamma'] = lines[ref + 2].split()[1].strip(';')
                    match = re.search(r"standby_lambda\n", lines[ref])
                    if match:
                        element['standby_lambda'] = lines[ref + 2].split()[1].strip(';')
                    match = re.search(r"triggered_by\n", lines[ref])
                    if match:
                        element['Triggered_by'] = lines[ref + 1].split()[1].strip(';')
                    match = re.search(r"K\n", lines[ref])
                    if match:
                        element['K'] = lines[ref + 2].split()[1].strip(';')
                    match = re.search(r"first\n", lines[ref])
                    if match:
                        element['First'] = lines[ref + 1].split()[1].strip(';')
                    match = re.search(r"second\n", lines[ref])
                    if match:
                        element['Second'] = lines[ref + 1].split()[1].strip(';')
                    match = re.search(r"number_of_items\n", lines[ref])
                    if match:
                        element['Nr_items'] = lines[ref + 2].split()[1].strip(';')
                    match = re.search(r"min_acceptable\n", lines[ref])
                    if match:
                        element['Min_acceptable'] = lines[ref + 2].split()[1].strip(';')
                    match = re.search(r"number_of_repairmen\n", lines[ref])
                    if match:
                        element['Nr_repairmen'] = lines[ref + 2].split()[1].strip(';')
                    match = re.search(r"nb_OK\n", lines[ref])
                    if match:
                        element['Nr_ok'] = lines[ref + 2].split()[1].strip(';')
                    match = re.search(r"nb_being_repaired\n", lines[ref])
                    if match:
                        element['Nr_being_repaired'] = lines[ref + 2].split()[1].strip(';')




            BDMP[element_Name] = element
    return BDMP

###############################################################
###############################################################
###############################################################
###############################################################
##########################################################reading the fi structure
def ReadFi(inputfile):
    BDMP = {}
    with open(inputfile, 'rt', encoding='latin-1') as file_object:
        lines = file_object.readlines()
        file_object.seek(0)
        if lines[0].split()[0] == 'ORDRE_DES_ETAPES':  # French File
            BDMP = ReadFiFrench2English(lines, file_object, BDMP)
        elif lines[0].split()[0] == 'STEPS_ORDER': # English File
            BDMP = ReadFiEnglish(lines, file_object, BDMP)
    #pprint.pprint(BDMP)
    ############################# Prepreocessing components

    for component in BDMP:
        if BDMP[component]['Type'] == 'then_gate':
            BDMP[component]['Sons'] = [BDMP[component]['First'], BDMP[component]['Second']]
        if not 'Sons' in BDMP[component]:
            BDMP[component]['Sons'] = 'Null'
        if not 'Fathers' in BDMP[component]:
            BDMP[component]['Fathers'] = 'Null'
        if not 'Triggered_by' in BDMP[component]:
            BDMP[component]['Triggered_by'] = 'Null'
        if not 'Previous' in BDMP[component]:
            BDMP[component]['Previous'] = 'Null'
        if (BDMP[component]['Name'] in {'and_gate'}) and len(BDMP[component]['Sons']) > 3:
            sys.exit("Sorry! Only three input gates are supported....")
        if (BDMP[component]['Name'] in {'or_gate'}) and len(BDMP[component]['Sons']) > 2:
            sys.exit("Sorry! Only two input gates are supported....")
        if BDMP[component]['Type'] not in {'f_leaf', 'and_gate', 'or_gate', 'undes_event', 'sf_leaf', 'i_leaf', 'k_out_of_n_gate', 'then_gate', 'phase_leaf', 'multiple_leaf'}:
            print(BDMP[component]['Type'])
            sys.exit(
                "Sorry! Only exponential events, standbys, AND gates, OR gates, k_ot_of_n Gate are supported yet hey....")
        if BDMP[component]['Name'] in {'E', 'T'}:
            sys.exit("Error:component name E not possible!. E is key word in Modest")
        if BDMP[component]['Name'] in {'P1', 'P2', 'P3', 'P4', 'P5', 'P6', 'P7', 'P8', 'P9', 'P10', 'P11', 'P12', 'P13', 'P14', 'P15', 'P16', 'P17'}:
            sys.exit("the component name is in P1 ~ P17 please rename the components")
        if BDMP[component]['Name'] in {'B'}:
            sys.exit("Error:One of the component names is  B please rename the components")
    return BDMP


############################################################### Modularizing the BDMP###################
###############################################################
###############################################################
###############################################################
###############################################################
def ModularizeBDMP(BDMP):
    q = Queue()
    s = deque()
    module = set()
    children = {}
    module_cnt = 0
    Visited = set()
    queue_track = set()  # to keep queue items unique
    ##########get top elements BDMP is multitop tree
    for component in BDMP:
        if BDMP[component]['Fathers'] == 'Null' and BDMP[component]['Type'] == 'undes_event':
            s.append(BDMP[component]['Name'])
        if BDMP[component]['Fathers'] == 'Null' and BDMP[component]['Type'] != 'undes_event' and BDMP[component]['Type'] != 'phase_leaf' and BDMP[component]['Calculate'] not in {'always_true', 'always_false'}:
            q.put(BDMP[component]['Name'])
            queue_track.add(BDMP[component]['Name'])
        if BDMP[component]['Type'] == 'phase_leaf' or BDMP[component]['Calculate'] in {'always_true', 'always_false'}:
            q.put(BDMP[component]['Name'])
            queue_track.add(BDMP[component]['Name'])
    while True:
        while s:
            vertex = s.pop()
            children = (BDMP[vertex]['Sons'])
            if children != 'Null':
                print(children)
                for child in children:
                    print(BDMP[child])
                    if (BDMP[child]['Triggered_by'] != 'Null' or BDMP[child]['Previous'] != 'Null' or len(
                            BDMP[child]['Fathers']) > 1) and (
                            child not in queue_track) and (BDMP[child]['Type']!='phase_leaf') and (BDMP[child]['Calculate'] not in {'always_true', 'always_false'}):
                        q.put(child)
                        queue_track.add(child)
                    if (BDMP[child]['Sons'] != 'Null') and (BDMP[child]['Triggered_by'] == 'Null') and (
                            BDMP[child]['Previous'] == 'Null') and len(BDMP[child]['Fathers']) == 1 and (BDMP[child]['Type']!='phase_leaf') and (BDMP[child]['Calculate'] not in {'always_true', 'always_false'}):
                        s.append(child)
                    if BDMP[child]['Sons'] == 'Null' and (BDMP[child]['Triggered_by'] == 'Null') and (
                            BDMP[child]['Previous'] == 'Null') and (len(BDMP[child]['Fathers']) == 1) and (BDMP[child]['Type']!='phase_leaf') and (BDMP[child]['Calculate'] not in {'always_true', 'always_false'}):
                        module.add(child)
                    if vertex not in module:
                        module.add(vertex)
            else:
                module.add(vertex)
        for component in module:
            if 'module' in BDMP[component]:
                BDMP[component]['module'] = [BDMP[component]['module'], str(module_cnt)]
            else:
                BDMP[component]['module'] = str(module_cnt)
        for element in module:
            if element not in Visited:
                Visited.add(element)
        # print(str(module_cnt) + ":", module)
        module.clear()
        module_cnt += 1
        if q.empty():
            break
        if not q.empty():
            s.append(q.get())
        # pprint.pprint(BDMP)
        # Check well formdness


        if BDMP[component]['Type'] == 'i_leaf' and BDMP[component]['module'] == 0: #BDMP['UE_1']['module']: look later for suitable way to identify top module
            print("Warning:Instantaneous event in primary module has no semantics: Please recheck your BDMP")
    return BDMP


def RemoveKofN(BDMP):

    Binarize_gate = []
    BDMP_temp = list(BDMP)
    for element in BDMP_temp:
        if BDMP[element]['Type'] in {'k_out_of_n_gate'} and len(BDMP[element]['Sons']) > 1:
            if int(BDMP[element]['K']) == 1:
                BDMP[element]['Type'] = 'or_gate'
                continue
            elif int(BDMP[element]['K']) == len(BDMP[element]['Sons']):
                BDMP[element]['Type'] = 'and_gate'
                continue
            elif len(BDMP[element]['Sons']) > 2:
                popped_koutofNgate = BDMP.pop(element)

                for elements in BDMP:
                    if popped_koutofNgate['Name'] in BDMP[elements]['Fathers']: #remove K out of N gate from childern
                        BDMP[elements]['Fathers'].remove(popped_koutofNgate['Name'])
                    if popped_koutofNgate['Name'] in BDMP[elements]['Sons']:
                        BDMP[elements]['Sons'].append(str('OR_' + popped_koutofNgate['Name']))
                        BDMP[elements]['Sons'].remove(popped_koutofNgate['Name'])

                # first gate, i.e. OR gate
                Binarize_gate = copy.deepcopy(popped_koutofNgate)
                Binarize_gate['Name'] = str('OR_' + popped_koutofNgate['Name'])
                Binarize_gate['Type'] = str('or_gate')
                sons = []
                for childern in range(0, nCr(len(popped_koutofNgate['Sons']), int(popped_koutofNgate['K']))):
                    sons.append(str('AND_' + popped_koutofNgate['Name'] + '_' + str(childern)))
                Binarize_gate['Sons'] = sons
                BDMP[Binarize_gate['Name']] = copy.deepcopy(Binarize_gate)
                # rest of the gates, i..e, And gates

                for childern in range(0, len(popped_koutofNgate['Sons']) ):
                    n = 10
                    A = list(range(n))
                    k = 4
                    m = 5
                    samples = set()
                    while len(samples) < nCr(len(popped_koutofNgate['Sons']), int(popped_koutofNgate['K'])):
                        samples.add(
                            tuple(sorted(random.sample(range(len(popped_koutofNgate['Sons'])), int(popped_koutofNgate['K'])))))
                gate_number = 0;
                print(samples)
                for inputs in samples:
                    Binarize_gate['Name'] = str('AND_' + popped_koutofNgate['Name'] + '_' + str(gate_number))
                    Binarize_gate['Type'] = str('and_gate')
                    Binarize_gate['Fathers'] = [str('OR_' + popped_koutofNgate['Name'])]
                    Binarize_gate['Triggered_by'] = 'Null'
                    Binarize_gate['Previous'] = 'Null'
                    sons = []
                    for each in range(0, len(inputs)):
                        sons.append(popped_koutofNgate['Sons'][inputs[each]])
                    Binarize_gate['Sons'] = sons
                    gate_number += 1
                    for elements in BDMP:
                        if BDMP[elements]['Name'] in Binarize_gate['Sons']:
                            if Binarize_gate['Name'] not in BDMP[elements]['Sons']:
                                BDMP[elements]['Fathers'].append(Binarize_gate['Name'])
                    BDMP[Binarize_gate['Name']] = copy.deepcopy(Binarize_gate)
    pprint.pprint(BDMP)
    return BDMP


def BinarizeGates(BDMP):
    Binarize_the_popped_gate = []
    popped_gate = {}

    BDMP_temp = list(BDMP)
    for element in BDMP_temp:
        if BDMP[element]['Type'] in {'and_gate', 'or_gate'} and len(BDMP[element]['Sons']) > 2:
            popped_gate = BDMP.pop(element)
            Binarize_the_popped_gate = copy.deepcopy(popped_gate) #This copy of gate will be changed to make it binary

            gates_removed = Binarize_the_popped_gate['Name']
            # print(popped_gate)
            # print(len(popped_gate['Sons']))
            for childern in range(0, (len(popped_gate['Sons']) - 1)):
                # print(childern)
                Binarize_the_popped_gate['Name'] = str(popped_gate['Name'] + '_' + str(childern))
                parents_of_Binarized_popped_gate = Binarize_the_popped_gate['Fathers']
                if childern == 0:
                    for parent in range(0, len(parents_of_Binarized_popped_gate)): # go to each parent of binarized gate
                        if parents_of_Binarized_popped_gate == 'Null':
                            print(parents_of_Binarized_popped_gate)
                        else:
                            for child in range(0, len(BDMP[parents_of_Binarized_popped_gate[parent]]['Sons'])): # Now for each parent scan childern to look wher binarized gate is the child of binarized gate
                                if (BDMP[parents_of_Binarized_popped_gate[parent]]['Sons'][child]) == popped_gate['Name']:
                                    BDMP[parents_of_Binarized_popped_gate[parent]]['Sons'][child] = str(popped_gate['Name'] + '_' + str(childern))
                    for temp_element in list(BDMP):  # Change triggered by to first element
                        if temp_element == popped_gate['Name']:
                            continue
                        if BDMP[temp_element]['Triggered_by'] == popped_gate['Name']:
                            BDMP[temp_element]['Triggered_by'] = popped_gate['Name'] + '_' + str(childern)


                    for temp_element in list(BDMP): # Sons of Binarized popped gate

                        if temp_element in popped_gate['Sons'][childern] : # scan downwards for the elemnt. Just one el
                            for components in range(0, len(BDMP[temp_element]['Fathers'])): #go to each child of binarized gate
                                if BDMP[temp_element]['Fathers'][components] == popped_gate['Name']:
                                    BDMP[temp_element]['Fathers'][components] = str(popped_gate['Name'] + '_' + str(childern))

                    Binarize_the_popped_gate['Fathers'] = popped_gate['Fathers']
                    Binarize_the_popped_gate['Sons'] = [popped_gate['Sons'][childern],
                                             popped_gate['Name'] + '_' + str(childern + 1)]
                if childern > 0 and childern < (len(popped_gate['Sons']) - 2):
                    Binarize_the_popped_gate['Fathers'] = [popped_gate['Name'] + '_' + str(childern - 1)]
                    Binarize_the_popped_gate['Sons'] = [popped_gate['Sons'][childern],
                                             popped_gate['Name'] + '_' + str(childern + 1)]
                    Binarize_the_popped_gate['Triggered_by'] = 'Null'
                    for temp_element in list(BDMP):  # BDMP_temp:
                        if temp_element in popped_gate['Sons'][childern]:
                            for components in range(0, len(BDMP[temp_element]['Fathers'])):
                                if BDMP[temp_element]['Fathers'][components] == popped_gate['Name']:
                                    BDMP[temp_element]['Fathers'][components] = Binarize_the_popped_gate['Name']
                if childern == (len(popped_gate['Sons']) - 2):
                    Binarize_the_popped_gate['Fathers'] = [popped_gate['Name'] + '_' + str(childern - 1)]
                    Binarize_the_popped_gate['Sons'] = [popped_gate['Sons'][childern], popped_gate['Sons'][childern + 1]]
                    Binarize_the_popped_gate['Triggered_by'] = 'Null'
                    for temp_element in list(BDMP):
                        if temp_element in popped_gate['Sons'][childern] or temp_element in popped_gate['Sons'][childern+1]:
                            for components in range(0, len(BDMP[temp_element]['Fathers'])):
                                if BDMP[temp_element]['Fathers'][components] == popped_gate['Name']:
                                    BDMP[temp_element]['Fathers'][components] = str(popped_gate['Name'] + '_' + str(childern))
                BDMP[Binarize_the_popped_gate['Name']] = copy.deepcopy(Binarize_the_popped_gate)
        # for K out of N gate

    return BDMP


######################################################################Writing Modest Definitions
################################################################################################
################################################################################################
################################################################################################
################################################################################################
################################################################################################
def WriteModest(BDMP, inputfile, outputfile):
    header = []
    footer = []
    header.append("//##########Automatically generated Modest file from: \"" + inputfile + "\"\n")
    header.append("const int B;\n");
    header.append("property ComputeProbability=Pmax(<>[T<=B]  (Fail==true));\n")
    footer.append("//##########Composition of all files\n")
    footer.append("par\n{\n")
    with open(outputfile, 'w+') as write_object:
        module = set()
        for element in BDMP:
            if BDMP[element]['module'] not in module:
                module.add((BDMP[element]['module']))
        a_act = ''
        d_dact = ''
        for element in module:
            a_act += " act_" + str(element) + "  ,"
            d_dact += " dact_" + str(element) + "  ,"
        header.append('action  ' + a_act.rstrip(',').strip() + ';\n')
        header.append('action  ' + d_dact.rstrip(',').strip() + ';\n')
        for element in BDMP:
            #########################Exponential event
            if BDMP[element]['Type'] == 'f_leaf':
                header, footer = WriteFleaf(BDMP, element, header, footer, write_object)

            #########################Standby event
            if BDMP[element]['Type'] == 'sf_leaf':
                header, footer = WriteSleaf(BDMP, element, header, footer, write_object)

            #########################Instntaneous event
            if BDMP[element]['Type'] == 'i_leaf':
                header, footer = WriteIleaf(BDMP, element, header, footer, write_object)
                #########################Phase
            if BDMP[element]['Type'] == 'phase_leaf':
                header, footer = WritePleaf(BDMP, element, header, footer, write_object)

            if BDMP[element]['Type'] == 'multiple_leaf':
                header, footer = WriteMultileaf(BDMP, element, header, footer, write_object)

            #########################Top Level Event

            if BDMP[element]['Type'] == 'undes_event':
                header, footer = WriteUndesEvent(BDMP, element, header, footer, write_object)
                #########################AND Gate

            if BDMP[element]['Type'] == 'and_gate':
                header, footer = WriteAndGate(BDMP, element, header, footer, write_object)

            #########################Or Gate
            if BDMP[element]['Type'] == 'or_gate':
                header, footer = WriteOrGate(BDMP, element, header, footer, write_object)
            #########################pand Gate
            if BDMP[element]['Type'] == 'then_gate':
                header, footer = WritePandGate(BDMP, element, header, footer, write_object)


            WriteActivation(BDMP, element, write_object)
            #############################################################
            # Activation behavior for Phase Leaf
            # The Inst type elements in main modules never gets tested.
            ###############################################################
            #if BDMP[element]['Type'] == 'phase_leaf':
            #   ActivatePleafWrapper(BDMP, element, write_object)


        ################################################################################3
        # Wrtting header and footer of the modest file
        ################################################################################3
        write_object.seek(0, 0)
        content = write_object.read()
        write_object.seek(0, 0)
        for row in header:
            write_object.write(row)
        write_object.write(content)
        write_object.seek(0, 2)
        for row in footer:
            write_object.write(row)
        write_object.write("}")


################################################################################3
# Compute functon handling main steps of the process
################################################################################3
def compute(INPUT, OUTPUT):
    BDMP = ReadFi(INPUT)
    BDMP = ModularizeBDMP(BDMP)
    BDMP = RemoveKofN(BDMP)
    BDMP = BinarizeGates(BDMP)
    pprint.pprint(BDMP)
    WriteModest(BDMP, INPUT, OUTPUT)
