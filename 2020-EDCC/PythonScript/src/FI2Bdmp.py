#!/usrINPUT=Nonen
import shutil
from Bdmp2PNPRO import *
from PNPRODefinitons import *
import copy
import sys, getopt
import re
import pprint
from collections import deque
from queue import Queue
import math
import random
import subprocess
import glob

def nCr(n, r):
    f = math.factorial
    return (f(n) // f(r) // f(n - r))
# def parse_result(file):
parse_state = 0
result = None
results = []
old = False
matching_lines = []
def removeallfilestobenchmarkfolder():
    #remove all files from benchmark folder
    filelist = glob.glob(('/home/shahid/modest/repairable/BENCHMARK/*.PNPRO'), recursive=True)
    for filePath in filelist:
        try:
            match = re.search(r'\bBENCHMARK.PNPRO\b', filePath)
            if match:
                continue
            else:
                os.remove(filePath)
        except OSError:
            print("Error while deleting file")

    currdir = os.getcwd()
    print(str( currdir+ '/*.PNPRO'))
    fileList = glob.glob(str( currdir+ '/*.PNPRO'), recursive=True)
    for filePath in fileList:
        try:
            shutil.copy(filePath, "/home/shahid/modest/repairable/BENCHMARK/")
        except OSError:
            print("Error while deleting file")
def performcomposition(firstoperand, secondoperand,BDMP, loop_count):
    """
    @shahid: This step is not required at his point because all files are laready converted to .net format
    if BDMP[firstoperand]['Type'] == "undes_event":
        subprocess.run(["/usr/local/GreatSPN/scripts/unfolding2", firstoperand])
    subprocess.run(["/usr/local/GreatSPN/scripts/unfolding2", secondoperand])
    """
    newopearnd = str("temp_" + str(loop_count))
    args = ["/usr/local/GreatSPN/scripts/algebra", '-no_ba', firstoperand, secondoperand, "p", "null_file",newopearnd, '1']#'3 0 0']
    subprocess.run(args)
    os.remove(str(firstoperand+".net"))
    os.remove(str(firstoperand + ".def"))
    os.remove(str(firstoperand + ".parsing"))
    return newopearnd

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
                        element['lambda'] = str("{0:.20f}".format(1/float(lines[ref + 2].split()[1].strip(';'))).rstrip("0"))
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
                        element['mu'] = str("{0:.20f}".format(float(lines[ref + 2].split()[1].strip(';'))).rstrip("0"))
                    match = re.search(r"\blambda\n", lines[ref])
                    if match:
                        element['lambda'] = str("{0:.20f}".format(float(lines[ref + 2].split()[1].strip(';'))).rstrip("0"))
                    match = re.search(r"gamma\n", lines[ref])
                    if match:
                        element['gamma'] = str("{0:.20f}".format(float(lines[ref + 2].split()[1].strip(';'))).rstrip("0"))
                    match = re.search(r"lambda_attente\n", lines[ref])
                    if match:
                        element['standby_lambda'] = str("{0:.20f}".format(float(lines[ref + 2].split()[1].strip(';'))).rstrip("0"))
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
                    match.group(2) == 'before_link') |( match.group(2) =='first_link') | ( match.group(2) =='second_link') | ( match.group(2) == 'exclusion') | ( match.group(2)=='aggregate_link')| ( match.group(2)=='repair_team'):
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
                    match = re.search(r"DOMAIN 'fn_fathers_and_trig' 'fn_fathers_opp_trig' (.*)\n", lines[ref])
                    if match:
                        element['Calculate'] = lines[ref + 1].split()[1].strip('\' ;')
                    match = re.search(r"mu\n", lines[ref])
                    if match:
                        element['mu'] = lines[ref + 2].split()[1].strip(';')
                    match = re.search(r"\blambda\n", lines[ref])
                    if match:
                        element['lambda'] = str("{0:.20f}".format(float(lines[ref + 2].split()[1].strip(';'))).rstrip("0"))
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
                        element['gamma'] = str("{0:.20f}".format(float(lines[ref + 2].split()[1].strip(';'))).rstrip("0"))
                    match = re.search(r"standby_lambda\n", lines[ref])
                    if match:
                        element['standby_lambda'] = str("{0:.20f}".format(float(lines[ref + 2].split()[1].strip(';'))).rstrip("0"))
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
    count = 2
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
        if BDMP[component]['Type'] == 'i_leaf':
            BDMP[component]['Priority'] = str(count)
            count = count+1
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
    all_modules = {}
    already_added_to_some_module = set()
    ##########get top elements BDMP is multitop tree
    for component in BDMP:
        if BDMP[component]['Fathers'] == 'Null' and BDMP[component]['Triggered_by'] == 'Null' and BDMP[component][
            'Calculate'] not in {'always_false'} and BDMP[component]['Type'] != 'phase_leaf':
            s.append(BDMP[component]['Name'])
        if (BDMP[component]['Type'] == 'phase_leaf' or BDMP[component]['Calculate'] in {'always_true',
                                                                                        'always_false'}) :
            q.put(BDMP[component]['Name'])
            queue_track.add(BDMP[component]['Name'])
        if BDMP[component]['Fathers'] != 'Null' and BDMP[component]['Triggered_by'] != 'Null' and BDMP[component]['Type'] != 'phase_leaf' and component not in queue_track:
            q.put(BDMP[component]['Name'])
            queue_track.add(BDMP[component]['Name'])
        if BDMP[component]['Fathers'] == 'Null' and BDMP[component]['Triggered_by'] != 'Null' and BDMP[component]['Type'] != 'phase_leaf' and component not in queue_track:
            q.put(BDMP[component]['Name'])
            queue_track.add(BDMP[component]['Name'])
    while True:
        while s:
            vertex = s.pop()
            children = (BDMP[vertex]['Sons'])
            if children != 'Null':
                for child in children:
                    if (BDMP[child]['Triggered_by'] != 'Null' )  and (
                            child not in queue_track) and (BDMP[child]['Type'] != 'phase_leaf') and (
                            BDMP[child]['Calculate'] not in {'always_true',
                                                             'always_false'}) and (child not in already_added_to_some_module):  # or BDMP[child]['Previous'] != 'Null'
                        q.put(child)
                        queue_track.add(child)
                    if (BDMP[child]['Sons'] != 'Null') and (BDMP[child]['Triggered_by'] == 'Null') and (
                            #BDMP[child]['Previous'] == 'Null') and ( look inot this line later
                            BDMP[child]['Type'] != 'phase_leaf') and (
                            BDMP[child]['Calculate'] not in {'always_true', 'always_false'}) and  (child not in already_added_to_some_module) and (
                            child not in queue_track):
                        s.append(child)
                    if BDMP[child]['Sons'] == 'Null' and (BDMP[child]['Triggered_by'] == 'Null') and (
                            #BDMP[child]['Previous'] == 'Null') and  ( of now ignore previous
                            BDMP[child]['Type'] != 'phase_leaf') and (
                            BDMP[child]['Calculate'] not in {'always_true', 'always_false'}) and (child not in already_added_to_some_module) and (
                            child not in queue_track):
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
        if module_cnt == 0:
            already_added_to_some_module = module.copy()
        for element in BDMP:
            if len(BDMP[element]['Fathers']) > 1 and BDMP[element]['Fathers'] != 'Null' and element not in already_added_to_some_module and module_cnt == 0 and element not in queue_track and BDMP[element]['Type']!='ileaf':
                q.put(BDMP[element]['Name'])
                queue_track.add(BDMP[element]['Name'])
        for element in module:
            if element not in Visited:
                Visited.add(element)
        all_modules[str(module_cnt)] = module.copy()
        module.clear()
        module_cnt += 1
        if q.empty():
            break
        if not q.empty():
            s.append(q.get())
        # pprint.pprint(BDMP)
        # Check well formdness
        if BDMP[component]['Type'] == 'i_leaf' and BDMP[component][
            'module'] == 0:  # BDMP['UE_1']['module']: look later for suitable way to identify top module
            print("Warning:Instantaneous event in primary module has no semantics: Please recheck your BDMP")
    """
    pprint.pprint(all_modules)


    copyall_modules = all_modules.copy()

    for module in all_modules:
        for component in all_modules[str(module)]:
            for element in BDMP:
                if component == element or BDMP[element]['Triggered_by'] == "Null":
                    continue

                elif BDMP[component]['Triggered_by'] == BDMP[element]['Triggered_by']:
                    if BDMP[component]['Fathers'] == "Null" and BDMP[element]['Fathers']=="Null": #case  when trigger is pointing to BE
                        for element in all_modules[str(module)]:
                            copyall_modules[BDMP[component]['module']].add(element)
                            copyall_modules.pop(str(BDMP[element]['module']))
                            BDMP[element]['module'] = BDMP[component]['module']

                    #elif BDMP[BDMP[component]['Fathers'][0]]['module'] == BDMP[BDMP[component]['Fathers'][0]]['module']:
                    #    print("This component is doubtful", component)
                    #    input('pause here')
                else:
                    continue

            
            if len(BDMP[component]['Fathers']) > 1 and BDMP[component]['Fathers'] != 'Null' and BDMP[component][
                'Triggered_by'] == 'Null':             
                if len(BDMP[component]['Fathers']) == 2 and BDMP[BDMP[component]['Fathers'][0]]['module'] == \
                        BDMP[BDMP[component]['Fathers'][1]]['module'] and BDMP[component]['module'] != \
                        BDMP[BDMP[component]['Fathers'][0]]['module']:
                    for element in all_modules[str(module)]:
                        copyall_modules[BDMP[BDMP[component]['Fathers'][0]]['module']].add(element)
                        copyall_modules.pop(str(BDMP[component]['module']))
                        BDMP[component]['module'] = BDMP[BDMP[component]['Fathers'][0]]['module']
                elif len(BDMP[component]['Fathers']) == 3 and BDMP[BDMP[component]['Fathers'][0]]['module'] == \
                        BDMP[BDMP[component]['Fathers'][1]]['module'] and BDMP[BDMP[component]['Fathers'][1]][
                    'module'] == BDMP[BDMP[component]['Fathers'][2]]['module']:
                    for element in all_modules[str(module)]:
                        copyall_modules[BDMP[BDMP[component]['Fathers'][0]]['module']].add(element)
                        copyall_modules.pop(str(BDMP[component]['module']))
                        BDMP[component]['module'] = BDMP[BDMP[component]['Fathers'][0]]['module']
    



    

    pprint.pprint(copyall_modules)
    """
    #input("pause")
    #pprint.pprint(BDMP)

    return BDMP
################################ Write PNPNO definitons ########################################
################################################################################################
################################################################################################
################################################################################################
################################################################################################
def WritePNPROFiles(BDMP, inputfile, outputfile,PRIORITY):
    topelement = {}
    #pprint.pprint(BDMP)
    for element in BDMP:
        intermediate_file = os.path.join(element+".PNPRO")
        print(intermediate_file)
        with open(intermediate_file,'w+') as write_object:
                #########################Exponential event
                if BDMP[element]['Type'] == 'f_leaf':
                     WriteFleaf(BDMP, element, write_object,PRIORITY)
                #########################Standby event
                if BDMP[element]['Type'] == 'sf_leaf':
                    WriteSleaf(BDMP, element, write_object,PRIORITY)
                #########################Instntaneous event
                if BDMP[element]['Type'] == 'i_leaf':
                    WriteIleaf(BDMP, element, write_object,PRIORITY)
                    #########################Phase
                if BDMP[element]['Type'] == 'phase_leaf':
                    WritePleaf(BDMP, element, write_object,PRIORITY)
                if BDMP[element]['Type'] == 'multiple_leaf':
                    WriteMultileaf(BDMP, element, write_object,PRIORITY)
                #########################Top Level Event
                if BDMP[element]['Type'] == 'undes_event':
                    topelement = BDMP[element]['Name']
                    WriteUndesEvent(BDMP, element, write_object,PRIORITY)
                    #########################AND Gate
                if BDMP[element]['Type'] == 'and_gate':
                    WriteAndGate(BDMP, element, write_object,PRIORITY)
                #########################Or Gate
                if BDMP[element]['Type'] == 'or_gate':
                    WriteOrGate(BDMP, element, write_object,PRIORITY)
                    #########################VOT Gate
                if BDMP[element]['Type'] == 'k_out_of_n_gate':
                    WriteVOTGate(BDMP, element, write_object,PRIORITY)
                #########################pand Gate
                if BDMP[element]['Type'] == 'then_gate':
                    WritePandGate(BDMP, element, write_object,PRIORITY)
        intermediate_file = os.path.join(element + "_act.PNPRO")
        with open(intermediate_file, 'w+') as write_object:
            WriteActivation(BDMP, element, write_object,PRIORITY)
    removeallfilestobenchmarkfolder()
    firstoperand = topelement
    print(firstoperand)
    for element in BDMP: # merge activation and failure templaets

        subprocess.run(["/usr/local/GreatSPN/scripts/unfolding2", str(element)])
        subprocess.run(["/usr/local/GreatSPN/scripts/unfolding2", str(element+'_act')])
        args = ['/usr/local/GreatSPN/scripts/algebra', '-no_ba', str(element + '_act'), str(element), 'p', 'null_file',str(element + '_merged'), '1']
        subprocess.run(args)
        os.remove(str(element + ".PNPRO")) # remove failure of each component pnpro
        os.remove(str(element + "_act.PNPRO")) #remove failure of each component pnpro
        os.remove(str(element + ".net")) # remove failure of each component
        os.remove(str(element + ".def"))
        os.remove(str(element + "_act.net"))# remove activation of each component
        os.remove(str(element + "_act.def"))
        os.rename(str(element + "_merged.def"), str(element + ".def"))
        os.rename(str(element + "_merged.net"), str(element + ".net"))
    loop_count = 0
    for element in BDMP:          #construct complete GSPN
        if BDMP[element]['Type'] == 'undes_event':
            continue
        else:
            secondoperand = BDMP[element]['Name']
            firstoperand = performcomposition(firstoperand, secondoperand,BDMP, loop_count)
            loop_count = loop_count + 1

    print("Please open GreatSPN and import \""+ firstoperand + ".net\"")
    shutil.copy(str(firstoperand+".net"), "/home/shahid/modest/repairable/BENCHMARK/final.net")
    shutil.copy(str(firstoperand+".def"), "/home/shahid/modest/repairable/BENCHMARK/final.def")
    #shutil.copy(str("F_2" + ".PNPRO"), "/home/shahid/modest/repairable/BENCHMARK/K_N_1.PNPRO")
    #os.system("/usr/local/GreatSPN/scripts/greatspn_editor")
################################################################################3
# Compute functon handling main steps of the process
################################################################################3
def compute(INPUT, OUTPUT, PRIORITY):
    BDMP = ReadFi(INPUT)
    BDMP = ModularizeBDMP(BDMP)
    #BDMP = RemoveKofN(BDMP)
    #BDMP = BinarizeGates(BDMP)
    pprint.pprint(BDMP)
    #input('pause')
    WritePNPROFiles(BDMP, INPUT, OUTPUT,PRIORITY)

"""
commontags=SetOfPlaceTags[firstoperand].intersection(SetOfPlaceTags[secondoperand])
    with open(placestooverlay,'w+') as write_object:
        write_object.write("transition={}\n")
        write_object.write("place={")
        loopcount = 0
        for elements in commontags:
            loopcount += 1
            if loopcount == len(commontags):
                write_object.write(elements)
            else:
                write_object.write(elements+" | ")
        write_object.write("}")
"""