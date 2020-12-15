import pprint
import re
import math
import sympy as sy
import numpy as ny
from functionwithgracetime import *


# @Description: This function takes parameters file as input
# @Input: parameters file (law componenent_name GLM Gamma Lambda Mu)
# @Ouput: returns a structure Name Gamam lambada Mu Type
def ReadParameters(parameters_file_path):
    with open(parameters_file_path, 'r') as file_object:
        parameters = {}
        for i, line in enumerate(file_object):
            element = {}
            match = line.split()
            element['Gamma'] = match[3]
            element['Lambda'] = match[4]
            element['Mu'] = match[5].strip(';')
            element['R'] = str(float(match[5].strip(';')) + float(match[4]))
            if re.search(r"failF", line):
                element['Type'] = 'failF'
            elif re.search(r"_end", line):
                element['Type'] = 'failEnd'
            elif re.search(r"failI", line):
                element['Type'] = 'failI'
            elif re.search(r"init", line):
                element['Type'] = 'Init'
            else:
                exit('Intelligible event type recheck parameters file')
            parameters[match[1]] = element
    return parameters


# @Description: This function takes parameters file as input
# @Input: parameters file (law componenent_name GLM Gamma Lambda Mu)
# @Ouput: returns a structure Name Gamam lambada Mu Type

def ReadCutSets(cutsets_file_path):
    cutsets = {}
    init_elements = set()
    with open(cutsets_file_path, 'r') as file_object:
        for i, line in enumerate(file_object):
            match = line.split()
            match_temp = match
            for i, elements in enumerate(match_temp):
                # print(match)
                if re.search(r"init", elements) and elements not in init_elements:
                    init_elements.add(elements)
                    match.pop(i)
                    cutsets[elements] = []
                    cutsets[elements].append(match)
                elif re.search(r"init", elements) and elements in init_elements:
                    match.pop(i)
                    cutsets[elements].append(match)
                else:
                    continue
    return cutsets


def compute_summations( temp_cutset, parameters, mu_ie, m):
    x = []
    # m = len(temp_cutset)
    x.append(1 / (mu_ie))  # zeroth term
    for a in range(0, len(temp_cutset)):
        if a == 0:
            x.append(sum(1 / (mu_ie + float(parameters[temp_cutset[b]]['R'])) for b in range(0, len(temp_cutset))))
        elif a == 1:
            x.append(sum(
                1 / (mu_ie + float(parameters[temp_cutset[b]]['R']) + float(parameters[temp_cutset[c]]['R'])) for b in
                range(0, len(temp_cutset)) for c in range(b + 1, len(temp_cutset))))
        elif a == 2:
            x.append(sum(1 / (
                    mu_ie + float(parameters[temp_cutset[b]]['R']) + float(parameters[temp_cutset[c]]['R']) + float(
                parameters[temp_cutset[d]]['R'])) for b in range(0, len(temp_cutset)) for c in
                         range(b + 1, len(temp_cutset)) for d in range(c + 1, len(temp_cutset))))
        elif a == 3:
            x.append(sum(1 / (
                    mu_ie + float(parameters[temp_cutset[b]]['R']) + float(parameters[temp_cutset[c]]['R']) + float(
                parameters[temp_cutset[d]]['R']) + float(parameters[temp_cutset[e]]['R'])) for b in
                         range(0, len(temp_cutset)) for c in range(b + 1, len(temp_cutset)) for d in
                         range(c + 1, len(temp_cutset)) for e in range(c + 1, len(temp_cutset))))
        elif a == 4:
            x.append(sum(1 / (mu_ie + float(parameters[temp_cutset[b]]['R']) + float(
                parameters[temp_cutset[c]]['R']) +
                              float(parameters[temp_cutset[d]]['R']) + float(
                        parameters[temp_cutset[e]]['R']) + float(
                        parameters[temp_cutset[f]]['R'])) for b in range(0, len(temp_cutset)) for c in
                         range(b + 1, len(temp_cutset)) for d in range(c + 1, len(temp_cutset)) for e in
                         range(c + 1, len(temp_cutset)) for f in
                         range(d + 1, len(temp_cutset))))
        elif a == 5:
            x.append(sum(1 / (mu_ie + float(parameters[temp_cutset[b]]['R']) + float(
                parameters[temp_cutset[c]]['R']) +
                              float(parameters[temp_cutset[d]]['R']) + float(
                        parameters[temp_cutset[e]]['R']) + float(
                        parameters[temp_cutset[f]]['R']) + float(
                        parameters[temp_cutset[g]]['R'])) for b in range(0, len(temp_cutset)) for c in
                         range(b + 1, len(temp_cutset)) for d in range(c + 1, len(temp_cutset)) for e in
                         range(d + 1, len(temp_cutset)) for f in
                         range(e + 1, len(temp_cutset)) for g in
                         range(f + 1, len(temp_cutset))))
        else:
            exit('this cut set size not supported yet')

    Sigma_x = sum(float(parameters[temp_cutset[b]]['R']) for b in range(0, len(temp_cutset)))
    last = (1 / (mu_ie + Sigma_x))
    # print("X = ", x, "last =", last)
    if len(temp_cutset) == 0:
        return x[0] + (math.pow(-1, m) * last)
    if len(temp_cutset) == 1:
        return x[0] - x[1] + (math.pow(-1, m) * last)
    if len(temp_cutset) == 1:
        return x[0] - x[1] + (math.pow(-1, m) * last)
    elif len(temp_cutset) == 2:
        return x[0] - x[1] + x[2] + (math.pow(-1, m) * last)
    elif len(temp_cutset) == 3:
        return x[0] - x[1] + x[2] - x[3] + (math.pow(-1, m) * last)
    elif len(temp_cutset) == 4:
        return x[0] - x[1] + x[2] - x[3] + x[4] + (math.pow(-1, m) * last)
    elif len(temp_cutset) == 5:
        return x[0] - x[1] + x[2] - x[3] + x[4] - x[5] + (math.pow(-1, m) * last)
    else:
        exit("cutset size greater than 5 not supported yet")
    print("no cut set matches")
    return 0


def compute_summations_a( temp_cutset, parameters, mu_ie, m):
    x = []
    # m = len(temp_cutset)
    x.append(1 / (mu_ie))  # zeroth term
    for a in range(0, len(temp_cutset)):
        if a == 0:
            x.append(sum(1 / (mu_ie + float(parameters[temp_cutset[b]]['R'])) for b in range(0, len(temp_cutset))))
        elif a == 1:
            x.append(sum(
                1 / (mu_ie + float(parameters[temp_cutset[b]]['R']) + float(parameters[temp_cutset[c]]['R'])) for b in
                range(0, len(temp_cutset)) for c in range(b + 1, len(temp_cutset))))
        elif a == 2:
            x.append(sum(1 / (
                    mu_ie + float(parameters[temp_cutset[b]]['R']) + float(parameters[temp_cutset[c]]['R']) + float(
                parameters[temp_cutset[d]]['R'])) for b in range(0, len(temp_cutset)) for c in
                         range(b + 1, len(temp_cutset)) for d in range(c + 1, len(temp_cutset))))
        elif a == 3:
            x.append(sum(1 / (
                    mu_ie + float(parameters[temp_cutset[b]]['R']) + float(parameters[temp_cutset[c]]['R']) + float(
                parameters[temp_cutset[d]]['R']) + float(parameters[temp_cutset[e]]['R'])) for b in
                         range(0, len(temp_cutset)) for c in range(b + 1, len(temp_cutset)) for d in
                         range(c + 1, len(temp_cutset)) for e in range(d + 1, len(temp_cutset))))
        elif a == 4:
            x.append(sum(1 / (mu_ie + float(parameters[temp_cutset[b]]['R']) + float(
                parameters[temp_cutset[c]]['R']) +
                              float(parameters[temp_cutset[d]]['R']) + float(
                        parameters[temp_cutset[e]]['R']) + float(
                        parameters[temp_cutset[f]]['R'])) for b in range(0, len(temp_cutset)) for c in
                         range(b + 1, len(temp_cutset)) for d in range(c + 1, len(temp_cutset)) for e in
                         range(d + 1, len(temp_cutset)) for f in
                         range(e + 1, len(temp_cutset))))
        elif a == 5:
            x.append(sum(1 / (mu_ie + float(parameters[temp_cutset[b]]['R']) + float(
                parameters[temp_cutset[c]]['R']) +
                              float(parameters[temp_cutset[d]]['R']) + float(
                        parameters[temp_cutset[e]]['R']) + float(
                        parameters[temp_cutset[f]]['R']) + float(
                        parameters[temp_cutset[g]]['R'])) for b in range(0, len(temp_cutset)) for c in
                         range(b + 1, len(temp_cutset)) for d in range(c + 1, len(temp_cutset)) for e in
                         range(d + 1, len(temp_cutset)) for f in
                         range(e + 1, len(temp_cutset)) for g in
                         range(f + 1, len(temp_cutset))))
        else:
            exit('this cut set size not supported yet')

    # Sigma_x = sum(float(parameters[temp_cutset[b]]['R']) for b in range(0, len(temp_cutset)))
    # last  = (1 / (mu_ie + Sigma_x))
    # print("X = ", x, "no last =")
    if len(temp_cutset) == 0:
        return x[0]
    if len(temp_cutset) == 1:
        return x[0] - x[1]
    elif len(temp_cutset) == 2:
        return x[0] - x[1] + x[2]
    elif len(temp_cutset) == 3:
        return x[0] - x[1] + x[2] -x[3]
    elif len(temp_cutset) == 4:
        return x[0] - x[1] + x[2] - x[3] + x[4]
    elif len(temp_cutset) == 5:
        return x[0] - x[1] + x[2] - x[3] + x[4] - x[5]
    else:
        exit("cutset size greater than 5 not supported yet")
    print("no cut set matches")
    return 0

def computeCustSetEN_Mix(cutset, parameters, initiator):
    if len(cutset) > 5:
        print("------------->only cut sets of sizes 5 are hard coded yet<---------------------")
        return 0
    m = len(cutset)
    EN = 0
    gamma_l = 1  # for mix type cut set we need gammal_l as first part of equation
    mu_l = 0
    cutset_backup = cutset[:]
    for i in range(0, len(cutset)):
        if parameters[cutset[i]]['Type'] == 'failI':
            gamma_l = gamma_l * float(parameters[cutset[i]]['Gamma'])
            mu_l = mu_l + float(parameters[cutset[i]]['Mu'])
            cutset_backup.remove(cutset[i])
    # see equation 2 on page 24 of patent
    mu_ie = float(parameters[initiator]['Mu']) + mu_l

    for i, elements in enumerate(cutset_backup):
        lambda_i = float(parameters[cutset_backup[i]]['Lambda'])
        temp_cutset = cutset_backup[:]  # to encode first part of the equation
        temp_cutset.pop(i)
        a = 1
        for j in range(0, len(temp_cutset)):  # j = 0 to m j !=i
            x_1 = (float(parameters[temp_cutset[j]]['Lambda']) / float(parameters[temp_cutset[j]]['R']))
            a = a * x_1
        x_2 = compute_summations_a(temp_cutset, parameters, mu_ie, m)
        a = a * x_2
        # print("a = ", a)
        # Now we see elements without poping i
        temp_cutset = cutset_backup[:]
        b = 1
        for j in range(0, len(temp_cutset)):  # j = 0 to m j !=i
            x_1 = (float(parameters[temp_cutset[j]]['Lambda']) / float(parameters[temp_cutset[j]]['R']))
            b = b * x_1
        x_2 = compute_summations_a(temp_cutset, parameters, mu_ie, m)
        b = b * x_2
        EN = EN + (lambda_i * (a - b))
    EN = gamma_l * EN
    return EN

    # @Description: This function Computes EN for cutsets having only failure on demand


# @Input: parameters and cutset
# @Ouput: computes EN = \prod_{i=1}^{l}\gamma_i where i is number of elements in our cutset

def computeCustSetEN_failI(cutset, parameters):
    EN = 1
    for elements in cutset:
        EN = EN * float(parameters[elements]['Gamma'])
    return EN


def computeCustSetEN_failF(cutset, parameters, initiator):
    if len(cutset) > 5:
        print('only cut sets of sizes 5 are hard coded yet')
        return 0
        exit('only cut sets of sizes 5 are hard coded yet')
    EN = 0
    m = len(cutset)
    # see equation 2 on page 24 of patent
    cutset_backup = cutset[:]
    mu_ie = float(parameters[initiator]['Mu'])

    for i in range(0, len(cutset)):
        lambda_i = float(parameters[cutset[i]]['Lambda'])
        temp_cutset = cutset_backup[:]  # to encode first part of the equation
        temp_cutset.pop(i)
        a = 1
        for j in range(0, len(temp_cutset)):  # j = 0 to m j !=i
            x_1 = (float(parameters[temp_cutset[j]]['Lambda']) / float(parameters[temp_cutset[j]]['R']))
            a = a * x_1
        x_2 = compute_summations_a(temp_cutset, parameters, mu_ie, m)
        a = a *  x_2
        # Now we see elements without poping i
        temp_cutset = cutset_backup[:]
        b = 1
        for j in range(0, len(temp_cutset)):  # j = 0 to m j !=i
            x_1 = (float(parameters[temp_cutset[j]]['Lambda']) / float(parameters[temp_cutset[j]]['R']))
            b = b * x_1
        x_2 = (compute_summations_a(temp_cutset, parameters, mu_ie, m))
        b = b * x_2
        EN = EN + (lambda_i * (a - b))

    return EN


def ComputeCutsets(cutsets, parameters):
    lambda_eq = 0
    for initiators in cutsets:
        lambda_initiator = float(parameters[initiators]['Lambda'])
        P_ie = 0
        for cutset in cutsets[initiators]:  # get cut each cut set c to compute Rc_infty
            Rc_infty = 0
            # First decide the cutset belongs to which case so that E_c(infty) can be computed
            has_ondemand = False
            has_infunction = False
            has_end = False
            # for each component of cutset use algorithm
            for elements in cutset:
                if parameters[elements]['Type'] == 'failF':
                    has_infunction = True
                elif parameters[elements]['Type'] == 'failI':
                    has_ondemand = True
                elif parameters[elements]['Type'] == 'failEnd':
                    has_end = True
                else:
                    exit("intelligible input. quitting...")
            if not has_end:
                if has_infunction and has_ondemand: #both in function and on demand
                    Rc_infty = computeCustSetEN_Mix(cutset, parameters, initiators)
                    print("Apie_barrier=", lambda_initiator * Rc_infty, initiators, cutset)
                elif not has_infunction and has_ondemand: # only failrues on demand
                    Rc_infty = computeCustSetEN_failI(cutset, parameters)
                    print("Bpie_barrier=", lambda_initiator * Rc_infty, initiators, cutset)
                elif has_infunction and not has_ondemand: # only failures in function
                    Rc_infty = computeCustSetEN_failF(cutset, parameters, initiators)
                    print("Cpie_barrier=", lambda_initiator * Rc_infty, initiators, cutset)
                else:
                    exit("intelligible input. quitting...")
            elif has_end:
                if has_infunction and has_ondemand: #both in function and on demand
                    Rc_infty = computeCustSetEN_Mix_deterministic(cutset, parameters, initiators)
                    print("Dpie_barrier=", lambda_initiator * Rc_infty, initiators, cutset)
                elif not has_infunction and has_ondemand:  # only failrues on demand
                    Rc_infty = computeCustSetEN_failI_deterministic(cutset, parameters)
                    print("Epie_barrier=", lambda_initiator * Rc_infty, initiators, cutset)
                elif has_infunction and not has_ondemand:  # only failures in function
                    Rc_infty = computeCustSetEN_failF_deterministic(cutset, parameters, initiators)
                    print("Fpie_barrier=", lambda_initiator * Rc_infty, initiators, cutset)
                else:
                    exit("intelligible input. quitting...")
            P_ie = P_ie + Rc_infty
            # print("pie_barrier=", lambda_initiator*Rc_infty, initiators, cutset)
        lambda_eq = lambda_eq + (lambda_initiator * P_ie)
        # print("LAMBDA_EQ", lambda_eq)
    return lambda_eq
