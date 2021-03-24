import pprint
import re
import math
import sympy as sy
import numpy as ny


def compute_summations_deterministic( temp_cutset, parameters, mu_ie, element_end):
    x = []
    # m = len(temp_cutset)
    grace_delay = 1/float(parameters[element_end]['Lambda'])
    x.append(math.exp(-1*grace_delay*mu_ie) / (mu_ie))  # zeroth term
    for a in range(0, len(temp_cutset)):

        if a == 0:
            x.append(sum(math.exp(-1*grace_delay*(mu_ie + float(parameters[temp_cutset[b]]['R']))) / (mu_ie + float(parameters[temp_cutset[b]]['R'])) for b in range(0, len(temp_cutset))))
        elif a == 1:
            x.append(sum(
                math.exp(-1*grace_delay*(mu_ie + float(parameters[temp_cutset[b]]['R']) + float(parameters[temp_cutset[c]]['R']))) / (mu_ie + float(parameters[temp_cutset[b]]['R']) + float(parameters[temp_cutset[c]]['R'])) for b in
                range(0, len(temp_cutset)) for c in range(b + 1, len(temp_cutset))))
        elif a == 2:
            x.append(sum(math.exp(-1*grace_delay*( mu_ie + float(parameters[temp_cutset[b]]['R']) + float(parameters[temp_cutset[c]]['R']) + float(
                parameters[temp_cutset[d]]['R'])))/ (
                    mu_ie + float(parameters[temp_cutset[b]]['R']) + float(parameters[temp_cutset[c]]['R']) + float(
                parameters[temp_cutset[d]]['R'])) for b in range(0, len(temp_cutset)) for c in
                         range(b + 1, len(temp_cutset)) for d in range(c + 1, len(temp_cutset))))
        elif a == 3:
            x.append(sum(math.exp(-1*grace_delay*( mu_ie + float(parameters[temp_cutset[b]]['R']) + float(parameters[temp_cutset[c]]['R']) + float(
                parameters[temp_cutset[d]]['R']) + float(parameters[temp_cutset[e]]['R'])))/ (
                    mu_ie + float(parameters[temp_cutset[b]]['R']) + float(parameters[temp_cutset[c]]['R']) + float(
                parameters[temp_cutset[d]]['R']) + float(parameters[temp_cutset[e]]['R'])) for b in
                         range(0, len(temp_cutset)) for c in range(b + 1, len(temp_cutset)) for d in
                         range(c + 1, len(temp_cutset)) for e in range(d + 1, len(temp_cutset))))
        elif a == 4:
            x.append(sum(math.exp(-1*grace_delay*( mu_ie + float(parameters[temp_cutset[b]]['R']) + float(
                parameters[temp_cutset[c]]['R']) +
                              float(parameters[temp_cutset[d]]['R']) + float(
                        parameters[temp_cutset[e]]['R']) + float(
                        parameters[temp_cutset[f]]['R'])))/ (mu_ie + float(parameters[temp_cutset[b]]['R']) + float(
                parameters[temp_cutset[c]]['R']) +
                              float(parameters[temp_cutset[d]]['R']) + float(
                        parameters[temp_cutset[e]]['R']) + float(
                        parameters[temp_cutset[f]]['R'])) for b in range(0, len(temp_cutset)) for c in
                         range(b + 1, len(temp_cutset)) for d in range(c + 1, len(temp_cutset)) for e in
                         range(d + 1, len(temp_cutset)) for f in
                         range(e + 1, len(temp_cutset))))
        elif a == 5:
            x.append(sum(math.exp(-1*grace_delay* mu_ie + float(parameters[temp_cutset[b]]['R']) + float(
                parameters[temp_cutset[c]]['R']) +
                              float(parameters[temp_cutset[d]]['R']) + float(
                        parameters[temp_cutset[e]]['R']) + float(
                        parameters[temp_cutset[f]]['R']) + float(
                        parameters[temp_cutset[g]]['R']))/ (mu_ie + float(parameters[temp_cutset[b]]['R']) + float(
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

    if len(temp_cutset) == 0:
        return x[0]
    if len(temp_cutset) == 1:
        return x[0] - x[1]
    elif len(temp_cutset) == 2:
        return x[0] - x[1] + x[2]
    elif len(temp_cutset) == 3:
        return x[0] - x[1] + x[2] - x[3]
    elif len(temp_cutset) == 4:
        return x[0] - x[1] + x[2] - x[3] + x[4]
    elif len(temp_cutset) == 5:
        return x[0] - x[1] + x[2] - x[3] + x[4] - x[5]
    else:
        exit("cutset size greater than 5 not supported yet")
    print("no cut set matches")
    return 0
def computeCustSetEN_Mix_deterministic(cutset, parameters, initiator):
    if len(cutset) > 5:
        print("------------->only cut sets of sizes 5 are hard coded yet<---------------------")
        return(0)
    m = len(cutset)
    EN = 0
    component_end = ''
    cutset_backup = cutset.copy()
    for i  in range(0,len(cutset_backup)):
        if parameters[cutset[i]]['Type'] == 'failEnd':
            component_end = cutset[i]
            # cutset_backup.remove(cutset[i])
    gamma_l = 1  # for mix type cut set we need gammal_l as first part of equation
    mu_l = 0
    cutset_backup = cutset.copy()
    for i in range(0, len(cutset)):
        if parameters[cutset[i]]['Type'] == 'failI':
            gamma_l = gamma_l * float(parameters[cutset[i]]['Gamma'])
            mu_l = mu_l + float(parameters[cutset[i]]['Mu'])
            # print("pop", i, "from this cutset",cutset_backup)
            cutset_backup.remove(cutset[i])
    # see equation 2 on page 24 of patent
    mu_ie = float(parameters[initiator]['Mu']) + mu_l
    for i, elements in enumerate(cutset_backup):
        lambda_i = float(parameters[cutset_backup[i]]['Lambda'])
        temp_cutset = cutset_backup.copy()  # to encode first part of the equation
        temp_cutset.pop(i)
        a = 1
        for j in range(0, len(temp_cutset)):  # j = 0 to m j !=i
            # if j==i:
            #     continue
            x_1 = (float(parameters[temp_cutset[j]]['Lambda']) / float(parameters[temp_cutset[j]]['R']))
            a = a * x_1
        x_2 = (compute_summations_deterministic(temp_cutset, parameters, mu_ie, component_end))
        a = a * x_2
        # Now we see elements without poping i
        temp_cutset = cutset_backup.copy()
        b = 1
        for j in range(0, len(temp_cutset)):  # j = 0 to m j !=i
            x_1 = (float(parameters[temp_cutset[j]]['Lambda']) / float(parameters[temp_cutset[j]]['R']))
            b = b * x_1
        x_2 = (compute_summations_deterministic(temp_cutset, parameters, mu_ie, component_end))
        b = b * x_2
        EN = EN + (lambda_i * (a - b))
    EN = gamma_l * EN
    return EN
    # @Description: This function Computes EN for cutsets having only failure on demand
# @Input: parameters and cutset
# @Ouput: computes EN = \prod_{i=1}^{l}\gamma_i where i is number of elements in our cutset
def computeCustSetEN_failI_deterministic(cutset, parameters):

    EN = 1
    for elements in cutset:
        if parameters[elements]['Type'] == 'FailEnd':
            continue
        EN = EN * float(parameters[elements]['Gamma'])
    return EN
def computeCustSetEN_failF_deterministic(cutset, parameters, initiator):
    if len(cutset) > 5:
        print('only cut sets of sizes 5 are hard coded yet')
        return 0
        exit('only cut sets of sizes 5 are hard coded yet')
    EN = 0
    cutset_backup = cutset.copy()
    component_end = ''
    for i in range(0, len(cutset_backup)):
        if parameters[cutset[i]]['Type'] == 'failEnd':
            component_end = cutset[i]
            # cutset_backup.remove(cutset[i])
    m = len(cutset)
    # see equation 2 on page 24 of patent

    mu_ie = float(parameters[initiator]['Mu'])
    for i in range(0, len(cutset_backup)):
        lambda_i = float(parameters[cutset[i]]['Lambda'])
        temp_cutset = cutset_backup.copy()  # to encode first part of the equation
        temp_cutset.pop(i)
        a = 1
        for j in range(0, len(temp_cutset)):  # j = 0 to m j !=i
            # if j==i:
            #     continue
            x_1 = (float(parameters[temp_cutset[j]]['Lambda']) / float(parameters[temp_cutset[j]]['R']))
            a = a * x_1
        x_2 = (compute_summations_deterministic(temp_cutset, parameters, mu_ie, component_end))
        a = a *  x_2
        # Now we see elements without poping i
        temp_cutset = cutset_backup.copy()
        b = 1
        for j in range(0, len(temp_cutset)):  # j = 0 to m j !=i
            x_1 = (float(parameters[temp_cutset[j]]['Lambda']) / float(parameters[temp_cutset[j]]['R']))
            b = b * x_1
        x_2 = (compute_summations_deterministic(temp_cutset, parameters, mu_ie, component_end))
        b = b * x_2
        EN = EN + (lambda_i * (a - b))
    return EN


