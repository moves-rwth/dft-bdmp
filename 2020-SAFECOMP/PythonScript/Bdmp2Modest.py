#!/usrINPUT=Nonen
# def parse_result(file):
parse_state = 0
result = None
results = []
old = False
matching_lines = []        


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
        for i, line in enumerate(file_object):
            if line.startswith("OBJECT"):
                element = {}
                match = re.search(r"OBJECT (.*) IS_A (.*);", line)
                if (match.group(1) == 'OPTIONS') | (match.group(1) == '__ARBRE__EIRM') | (
                        match.group(2) == 'logic_link') | (match.group(2) == 'trigger_link') | (
                        match.group(2) == 'before_link'):
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
                            element['Previous'] = (lines[ref + 1].replace(';', '').split()[1:])
                        match = re.search(r"calculate_required\n", lines[ref])
                        if match:
                            element['Calculate'] = lines[ref + 2].split()[1].strip('\' ;')
                        match = re.search(r"mu\n", lines[ref])
                        if match:
                            element['Mu'] = lines[ref + 2].split()[1].strip(';')
                        match = re.search(r"lambda\n", lines[ref])
                        if match:
                            element['lambda'] = lines[ref + 2].split()[1].strip(';')
                        match = re.search(r"triggered_by\n", lines[ref])
                        if match:
                            element['Triggered_by'] = lines[ref + 1].split()[1].strip(';')
                BDMP[element_Name] = element
        ############################# Prepreocessing components
    for component in BDMP:
        if not 'Sons' in BDMP[component]:
            BDMP[component]['Sons'] = 'Null'
        if not 'Fathers' in BDMP[component]:
            BDMP[component]['Fathers'] = 'Null'
        if not 'Triggered_by' in BDMP[component]:
            BDMP[component]['Triggered_by'] = 'Null'
        if not 'Previous' in BDMP[component]:
            BDMP[component]['Previous'] = 'Null'
    return BDMP
############################################################### Modularizing the BDMP###################
    ###############################################################
    ###############################################################
    ###############################################################
    ###############################################################

def Modularize(BDMP):
    q = Queue()
    s = deque()

    ##########get top elements BDMP is multitop tree
    for component in BDMP:
        if BDMP[component]['Fathers'] == 'Null':
            s.append(BDMP[component]['Name'])
    module = set()
    children = {}
    module_cnt = 0
    while True:
        while s:
            vertex = s.pop()
            children = (BDMP[vertex]['Sons'])
            if children != 'Null':
                for child in children:
                    if BDMP[child]['Triggered_by'] != 'Null' or BDMP[child]['Previous'] != 'Null':
                        q.put(child)
                    if (BDMP[child]['Sons'] != 'Null') and (BDMP[child]['Triggered_by'] == 'Null') and (BDMP[child]['Previous'] == 'Null'):
                        s.append(child)
                    if BDMP[child]['Sons'] == 'Null' and (BDMP[child]['Triggered_by'] == 'Null') and (BDMP[child]['Previous'] == 'Null'):
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
        print(module_cnt, module)
        module.clear()
        module_cnt += 1
        if q.empty():
            break
        if not q.empty():
            s.append(q.get())
    #print(BDMP['AND_1']['Fathers'])
    return BDMP

######################################################################33Writing Modest Definitions
################################################################################################
################################################################################################
################################################################################################
################################################################################################
################################################################################################
def WriteModest(BDMP, inputfile, outputfile):
    header = []
    footer = []
    header.append("//##########Automatically generated Modest file from: \"" + inputfile + "\"\n")
    footer.append("//##########Composition of all processes\n")
    footer.append("par\n{\n")
    with open(outputfile, 'w+') as write_object:
        module = set()
        for element in BDMP:
            if BDMP[element]['module'] not in module:
                module.update(BDMP[element]['module'])
        actions = []
        actions.append("action")
        for element in module:
            actions.append("act_" + str(element) + ", dact_" + element + "\n")  ################33
        header.append(str(actions))
        for element in BDMP:
            #########################Exponential event
            if BDMP[element]['Type'] == 'f_leaf':
                header.append("action  act_" + BDMP[element]['Name'] + ",dact_" + BDMP[element]['Name'] + ", fail_" +
                              BDMP[element]['Name'] + ", repaired_" + BDMP[element]['Name'] + ';\n')
                header.append("bool  " + BDMP[element]['Name'] + " = false;\n")
                footer.append("::" + BDMP[element]['Name'] + BDMP[element]['Name'] + "()  :: " + BDMP[element][
                    'Name'] + '_Act()\n')
                write_object.write(
                    "//##########Failure Behavior of \"" + BDMP[element]['Type'] + "\" named \"" + BDMP[element][
                        'Name'] + '\"\n')
                write_object.write("process " + BDMP[element]['Name'] + "(){" + '\n')
                write_object.write(
                    "process P1() {alt{::dact_" + BDMP[element]['module'] + ";" + BDMP[element]['Name'] + "()::rate(" +
                    BDMP[element]['lambda'] +
                    ") tau{=" + BDMP[element]['Name'] + "=true=}; fail_" + BDMP[element]['Name'] + "; P2()}}" + '\n')
                write_object.write(
                    "process P2() " + "{alt{::dact_" + BDMP[element]['Name'] + "; " + "alt{::act_" + BDMP[element][
                        'Name'] + "; P2()::rate(" + BDMP[element]['Mu'] + ") tau{=" + BDMP[element]['Name'] +
                    "=false=}; repaired_" + BDMP[element]['Name'] + "; " + BDMP[element]['Name'] + "()}::rate(" +
                    BDMP[element]['Mu'] + ") tau{=" +
                    BDMP[element]['Name'] + "=false=}; repaired_" + BDMP[element]['Name'] + "; P1()}}" + '\n')
                write_object.write("act_" + BDMP[element]['module'] + "; P1()}" + '\n')
                write_object.write("//##########activation Behavior" + '\n')
                write_object.write("process " + BDMP[element]['Name'] + "_Act(){" + '\n')
                write_object.write(
                    "act_" + BDMP[element]['module'] + "; dact_" + BDMP[element]['module'] + "; " + BDMP[element][
                        'Name'] + "_Act()}\n")
            #########################Top Level Event
            if BDMP[element]['Type'] == 'undes_event':
                header.append("action  act_" + BDMP[element]['Name'] + ",dact_" + BDMP[element]['Name'] + ", fail_" +
                              BDMP[element][
                                  'Name'] + ", repaired_" + BDMP[element]['Name'] + ';\n')
                header.append("bool  " + BDMP[element]['Name'] + " = false;\n")
                footer.append(":: " + BDMP[element]['Name'] + "()  :: " + BDMP[element]['Name'] + '_Act()\n')
                write_object.write(
                    "//##########Failure Behavior of \"" + BDMP[element]['Type'] + "\" named \"" + BDMP[element][
                        'Name'] + '\"\n')
                write_object.write("process " + BDMP[element]['Name'] + "() {" + '\n')
                write_object.write(
                    "fail_" + BDMP[element]['Sons'][0] + " {=  " + BDMP[element]['Name'] + "=true=} ; repaired_" +
                    BDMP[element]['Sons'][0] + " {=  " + BDMP[element]['Name'] + "=false=}; " + BDMP[element][
                        'Name'] + "()\n }\n")
                write_object.write("//##########activation Behavior" + '\n')
                write_object.write("process " + BDMP[element]['Name'] + "_Act(){" + '\n')
                write_object.write(
                    "act_" + BDMP[element]['Name'] + "; when(false) dact_" + BDMP[element]['Name'] + "; " +
                    BDMP[element][
                        'Name'] + "_Act()}\n")
                #########################AND Gate
                if BDMP[element]['Type'] == 'and_gate':
                    print("we have an and gate")
                #########################Or Gate
                if BDMP[element]['Type'] == 'or_gate':
                    print("we have an or gate")
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








