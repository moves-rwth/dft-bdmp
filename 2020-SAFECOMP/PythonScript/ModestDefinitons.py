import pprint
import sys



###########Writting Exp type Basic event###########################
################################################################################
################################################################################
def WriteFleaf(BDMP, element, header, footer, file_obj):
    header.append("action  act_" + BDMP[element]['Name'] + ",dact_" + BDMP[element]['Name'] + ", fail_" +
                  BDMP[element]['Name'] + ", repaired_" + BDMP[element]['Name'] + ';\n')
    header.append("bool  " + BDMP[element]['Name'] + " = false;\n")
    footer.append("::" + BDMP[element]['Name'] + "()  :: " + BDMP[element][
        'Name'] + '_Act()\n')
    file_obj.write(
        "//##########Failure Behavior of \"" + BDMP[element]['Type'] + "\" named \"" + BDMP[element][
            'Name'] + '\"\n')
    file_obj.write("process " + BDMP[element]['Name'] + "(){" + '\n')
    file_obj.write(
        "process P1() {alt{::dact_" + BDMP[element]['module'] + ";" + BDMP[element]['Name'] + "()::rate(" +
        BDMP[element]['lambda'] + ") tau{=" + BDMP[element]['Name'] + "=true=}; fail_" + BDMP[element][
            'Name'] + "; P2()}}" + '\n')
    file_obj.write(
        "process P2() " + "{alt{::dact_" + BDMP[element]['module'] + "; " + "alt{::act_" + BDMP[element][
            'module'] + "; P2()::rate(" + BDMP[element]['mu'] + ") tau{=" + BDMP[element]['Name'] +
        "=false=}; repaired_" + BDMP[element]['Name'] + "; " + BDMP[element]['Name'] + "()}::rate(" +
        BDMP[element]['mu'] + ") tau{=" +
        BDMP[element]['Name'] + "=false=}; repaired_" + BDMP[element]['Name'] + "; P1()}}" + '\n')
    file_obj.write("act_" + BDMP[element]['module'] + "; P1()}" + '\n')
    return header, footer


########### Writting Standby type Basic event######################################
################################################################################
################################################################################
def WriteSleaf(BDMP, element, header, footer, file_obj):
    header.append("action  act_" + BDMP[element]['Name'] + ",dact_" + BDMP[element]['Name'] + ", fail_" +
                  BDMP[element]['Name'] + ", repaired_" + BDMP[element]['Name'] + ';\n')
    header.append("bool  " + BDMP[element]['Name'] + " = false;\n")
    footer.append("::" + BDMP[element]['Name'] + "()  :: " + BDMP[element][
        'Name'] + '_Act()\n')
    file_obj.write(
        "//##########Failure Behavior of \"" + BDMP[element]['Type'] + "\" named \"" + BDMP[element][
            'Name'] + '\"\n')
    file_obj.write("process " + BDMP[element]['Name'] + "(){" + '\n')
    file_obj.write(
        "process P1() {alt{::dact_" + BDMP[element]['module'] + ";" + BDMP[element]['Name'] + "()::rate(" +
        BDMP[element]['lambda'] +
        ") tau{=" + BDMP[element]['Name'] + "=true=}; fail_" + BDMP[element]['Name'] + "; P2()}}" + '\n')
    file_obj.write(
        "process P2() " + "{alt{::dact_" + BDMP[element]['module'] + "; P3()" + "::rate(" + BDMP[element][
            'mu'] + ") tau{=" + BDMP[element]['Name'] +
        "=false=}; repaired_" + BDMP[element]['Name'] + "; P1()}}\n")
    file_obj.write("process P3() {alt{:: rate(" + BDMP[element]['mu'] + ") tau{= " + BDMP[element][
        'Name'] + " = false=}; repaired_" + BDMP[element]['Name'] + "; " + BDMP[element]['Name'] + "() :: act_" +
                   BDMP[element]['module'] + "; P2()}}\n")
    file_obj.write(
        "alt{::act_" + BDMP[element]['module'] + "; P1() :: rate(" + BDMP[element]['standby_lambda'] + ") tau; fail_" +
        BDMP[element]['Name'] + "; P3()}}\n")
    return header, footer



########### Writting Instantenous Type Basic event##############################
################################################################################
################################################################################

def WriteIleaf(BDMP, element, header, footer, file_obj):
    # If INST type BE is in module 0 then donot check it
    if BDMP[element]['module'] == 0:  # BDMP['UE_1']['module']: look later for a suitable way to identify topmodule
        header.append("action  act_" + BDMP[element]['Name'] + ",dact_" + BDMP[element]['Name'] + ", fail_" +
                      BDMP[element]['Name'] + ", good_" + BDMP[element]['Name'] + ", repaired_" + BDMP[element][
                          'Name'] + ';\n')
        footer.append("::" + BDMP[element]['Name'] + "()  :: " + BDMP[element][
            'Name'] + '_Act()\n')
        file_obj.write(
            "//##########Failure Behavior of \"" + BDMP[element]['Type'] + "\" named \"" + BDMP[element][
                'Name'] + '\"\n')
        file_obj.write("process " + BDMP[element]['Name'] + "(){" + '\n')
        file_obj.write("when(false) fail_" + BDMP[element]['Name'] + "; repaired_" + BDMP[element]['Name'] + "}\n")
    # If INST type BE is not in module 0 then it can be checked
    else:
        header.append("action  act_" + BDMP[element]['Name'] + ",dact_" + BDMP[element]['Name'] + ", fail_" +
                      BDMP[element]['Name'] + ", good_" + BDMP[element]['Name'] + ", repaired_" + BDMP[element][
                          'Name'] + ';\n')
        header.append("bool  " + BDMP[element]['Name'] + " = false;\n")
        footer.append("::" + BDMP[element]['Name'] + "()  :: " + BDMP[element][
            'Name'] + '_Act()\n')

        file_obj.write(
            "//##########Failure Behavior of \"" + BDMP[element]['Type'] + "\" named \"" + BDMP[element][
                'Name'] + '\"\n')
        file_obj.write("process " + BDMP[element]['Name'] + "(){" + '\n')
        #file_obj.write("act_" + BDMP[element]['module'] + ";alt{::rate(100000) tau; P0()::dact_"+BDMP[element]['module']+";"+BDMP[element]['Name'] + "()} \n")
        file_obj.write("act_" + BDMP[element]['module'] + ";P0() \n")
        file_obj.write(
            "process P0() {alt{:: dact_" + BDMP[element]['module'] + "; " + BDMP[element]['Name'] + "() :: palt{:" +
            BDMP[element]['gamma'] + ": {=" + BDMP[element]['Name'] + " = true =}; fail_" +
            BDMP[element]['Name'] + "; P2(): 1 - " + BDMP[element]['gamma'] + ":good_" + BDMP[element][
                'Name'] + ";P1()}}}\n")
        file_obj.write("process P1() {dact_" + BDMP[element]['module'] + "; " + BDMP[element]['Name'] + "()}\n")
        file_obj.write(
            "process P2() {alt {::dact_" + BDMP[element]['module'] + "; P3()::rate(" + BDMP[element]['mu'] + ") {=" +
            BDMP[element]['Name'] + " = false =}; repaired_" + BDMP[element]['Name'] + "; P1()}}\n")
        file_obj.write("process P3() {alt {::act_" + BDMP[element]['module'] + "; alt {::dact_" + BDMP[element][
            'module'] + ";P3()::rate(" + BDMP[element]['mu'] + ")tau{= " + BDMP[element][
                           'Name'] + " = false =};repaired_" + BDMP[element]['Name'] + ";P0()}::rate(" + BDMP[element][
                           'mu'] + ")tau{= " + BDMP[element]['Name'] + " = false =}; repaired_" + BDMP[element][
                           'Name'] + "; " + BDMP[element]['Name'] + "()}}}\n")

    return header, footer


########### Writting Standby type Basic event######################################
################################################################################
################################################################################
def WritePleaf(BDMP, element, header, footer, file_obj):
    header.append("action  act_" + BDMP[element]['Name'] + ", dact_" + BDMP[element]['Name'] + ", fail_" +
                  BDMP[element]['Name'] + ", repaired_" + BDMP[element]['Name'] +", start_"+BDMP[element]['Name'] + ", end_" + BDMP[element]['Name'] +';\n')
    header.append("bool  " + BDMP[element]['Name'] + " = false;\n")
    footer.append("::" + BDMP[element]['Name'] + "()  :: " + BDMP[element][
        'Name'] + "_Act() \n")
    file_obj.write(
        "//##########Failure Behavior of \"" + BDMP[element]['Type'] + "\" named \"" + BDMP[element][
            'Name'] + '\"\n')
    file_obj.write("process " + BDMP[element]['Name'] + "(){" + '\n')
    file_obj.write(
        "process P1() {alt{:: act_" + BDMP[element]['module'] + "; P1() :: rate(" + BDMP[element][
            'lambda'] + ") tau; repaired_" + BDMP[element]['Name'] + " {=" +
        BDMP[element]['Name'] + " = false =}" + ";" + BDMP[element][
            'Name'] + "()}}\n")

    file_obj.write("act_" + BDMP[element]['module'] + "; fail_" + BDMP[element]['Name'] + " {=" +
          BDMP[element]['Name'] + " = true =}; P1()}" + '\n')

    """
    print(
        "process P1() {alt{:: start_"+ BDMP[element]['Name']+ "; P1() :: rate(" +BDMP[element]['lambda']+") tau; repaired_" + BDMP[element]['Name'] + " {=" +
            BDMP[element]['Name'] + " = false =}" + "; end_" + BDMP[element]['Name']+ ";" + BDMP[element]['Name'] + "()}}\n")

    print("start_"+ BDMP[element]['Name'] + "; fail_" + BDMP[element]['Name'] + "{=" +
            BDMP[element]['Name'] + " = true =}; P1()}" + '\n')
    """
    return header, footer
########### Writting Multileaf type Basic event######################################
#Reminder: MAXIMAL PROGRESS ASSUMPTION IS USED HERE
#Note: Corner cases are missing in this implementation add them later if maturity of this code is required
################################################################################
################################################################################
def WriteMultileaf(BDMP, element, header, footer, file_obj):
    header.append("action  act_" + BDMP[element]['Name'] + ",dact_" + BDMP[element]['Name'] + ", fail_" +
                  BDMP[element]['Name'] + ", repaired_" + BDMP[element]['Name'] + ';\n')
    header.append("bool  " + BDMP[element]['Name'] + " = false;\n")
    footer.append("::" + BDMP[element]['Name'] + "()  :: " + BDMP[element][
        'Name'] + '_Act()\n')
    file_obj.write(
        "//##########Failure Behavior of \"" + BDMP[element]['Type'] + "\" named \"" + BDMP[element][
            'Name'] + '\"\n')
    file_obj.write("process " + BDMP[element]['Name'] + "(){" + '\n')
    """
    Preprocessing to comupute transition rates of each transition
    For now repairmen are ignored later they may be added
    """
    if (BDMP[element]['Nr_repairmen'] != BDMP[element]['Nr_items']) | (BDMP[element]['Nr_ok'] != BDMP[element]['Nr_items']) | (BDMP[element]['Nr_being_repaired'] != '0') | (BDMP[element]['Min_acceptable'] == BDMP[element]['Nr_items']):
        sys.exit("Sorry This type of Multileaf is not supported. Either repaimen !=  number of items or Nr_OK != number of items. Plese rechek multileaf parameters")
    total_items = int(BDMP[element]['Nr_items'])
    failures_allowed = int(total_items) - int(BDMP[element]['Min_acceptable'])
    F_rate = float(BDMP[element]['lambda'])
    R_rate = float(BDMP[element]['mu'])
    for process_cnt in range(1, total_items+1):
        if (process_cnt ==1 ):
            file_obj.write("process P"+str(process_cnt)+"() { alt{::rate("+str(round((process_cnt)*R_rate, 3))+") tau; P0() ::rate("+str(round((total_items - process_cnt)*F_rate, 3))+")tau; P"+ str(process_cnt+1)+"():: dact_"+BDMP[element]['module']+"; P"+str(process_cnt)+"_rest()}}\n")
            file_obj.write("process P" + str(process_cnt) + "_rest() { act_"+BDMP[element]['module']+"; P" + str(process_cnt) + "()}\n")
        elif (process_cnt > 1) and (process_cnt != failures_allowed +1) and (process_cnt != total_items) and (process_cnt != failures_allowed +2): #we know the bE type only has exponential distributions therfore keeping in view the maximal progress assumption we can ignore multiple copies of states
            file_obj.write("process P"+str(process_cnt)+"() { alt{::rate("+str(round((process_cnt)*R_rate, 3))+") tau; P"+ str(process_cnt-1)+"() ::rate("+str(round((total_items - process_cnt)*F_rate, 3))+")tau; P"+ str(process_cnt+1)+"():: dact_"+BDMP[element]['module']+"; P"+str(process_cnt)+"_rest()}}\n")
            file_obj.write("process P" + str(process_cnt) + "_rest() { act_"+BDMP[element]['module']+"; P" + str(process_cnt) + "()}\n")
        elif process_cnt == failures_allowed+1 :
            file_obj.write("process P" + str(process_cnt) + "() {alt{::fail_"+BDMP[element]['Name']+" {= " +
            BDMP[element]['Name'] + " = false =}; P" + str(process_cnt) + "A() :: rate(" + str(
                round((process_cnt)*R_rate, 3)) + ") tau; P" + str(process_cnt - 1) + "():: dact_"+BDMP[element]['module']+"; P"+str(process_cnt)+"_rest()}}\n")
            file_obj.write("process P" + str(process_cnt) + "_rest() { act_" + BDMP[element]['module'] + "; P" + str(
                process_cnt) + "()}\n")
            file_obj.write("process P" + str(process_cnt) + "A() { alt{:: rate(" + str(
                round((total_items - process_cnt) * F_rate, 3)) + ") tau; P" + str(process_cnt + 1) + "() ::rate(" + str(
                round((process_cnt)*R_rate, 3))+") tau;repaired_"+BDMP[element]['Name']+" {= " +
            BDMP[element]['Name'] + " = false =}; P" + str(process_cnt - 1) + "():: dact_"+BDMP[element]['module']+"; P"+str(process_cnt)+"A_rest()}}\n")
            file_obj.write("process P" + str(process_cnt) + "A_rest() { act_" + BDMP[element]['module'] + "; P" + str(
                process_cnt) + "A()}\n")

        elif process_cnt == failures_allowed + 2:
            file_obj.write("process P" + str(process_cnt) + "() {alt{::rate(" + str(
                round((total_items - process_cnt) * F_rate, 3))+") tau; P" + str(process_cnt+1) + "()::rate(" + str(
                round((process_cnt) * R_rate, 3)) + ") tau; P" + str(process_cnt- 1) + "A():: dact_"+BDMP[element]['module']+"; P"+str(process_cnt)+"_rest()}}\n")
            file_obj.write("process P" + str(process_cnt) + "_rest() { act_" + BDMP[element]['module'] + "; P" + str(
                process_cnt) + "()}\n")
        elif process_cnt == total_items:
            file_obj.write("process P" + str(process_cnt) + "() {alt{:: rate(" + str(round((process_cnt)*R_rate, 3))+") tau; P"+str(process_cnt-1)+"():: dact_"+BDMP[element]['module']+"; P"+str(process_cnt)+"_rest()}} \n")
            file_obj.write("process P" + str(process_cnt) + "_rest() { act_" + BDMP[element]['module'] + "; P" + str(
                process_cnt) + "()}\n")
    file_obj.write("process P0() {alt{::dact_"+BDMP[element]['module'] +"; "+BDMP[element]['Name']+"() :: rate("+str(round(total_items * F_rate, 3)) + ") tau; P1()}}\n")   # # ignore the case where this item is given fail
    file_obj.write("act_" + BDMP[element]['module'] + "; P0()}\n")
    return header, footer

########### Writting failure behavior of top level event; UE_1##############################
################################################################################
################################################################################
def WriteUndesEvent(BDMP, element, header, footer, file_obj):
    header.append("action  act_" + BDMP[element]['Name'] + ",dact_" + BDMP[element]['Name'] + ", fail_" +
                  BDMP[element][
                      'Name'] + ", repaired_" + BDMP[element]['Name'] + ';\n')
    header.append("bool  " + BDMP[element]['Name'] + " = false, Fail=false;\n")
    footer.append(":: " + BDMP[element]['Name'] + "()  :: " + BDMP[element]['Name'] + '_Act()\n')
    file_obj.write(
        "//##########Failure Behavior of \"" + BDMP[element]['Type'] + "\" named \"" + BDMP[element][
            'Name'] + '\"\n')
    file_obj.write("process " + BDMP[element]['Name'] + "() {" + '\n')
    file_obj.write(
        "fail_" + BDMP[element]['Sons'][0] + " {=  " + BDMP[element]['Name'] + "=true, Fail = true=} ; repaired_" +
        BDMP[element]['Sons'][0] + " {=  " + BDMP[element]['Name'] + "=false, Fail = false=}; " + BDMP[element][
            'Name'] + "()\n }\n")

    return header, footer


########### Writting failure behavior of AND Gate##############################
################################################################################
################################################################################
def WriteAndGate(BDMP, element, header, footer, file_obj):
    ########################Failure Mecanism
    header.append("action  act_" + BDMP[element]['Name'] + ",dact_" + BDMP[element]['Name'] + ", fail_" +
                  BDMP[element]['Name'] + ", repaired_" + BDMP[element]['Name'] + ';\n')
    header.append("bool  " + BDMP[element]['Name'] + " = false;\n")
    footer.append("::" + BDMP[element]['Name'] + "()  :: " + BDMP[element][
        'Name'] + '_Act()\n')
    file_obj.write(
        "//##########Failure Behavior of \"" + BDMP[element]['Type'] + "\" named \"" + BDMP[element][
            'Name'] + '\"\n')
    file_obj.write("process " + BDMP[element]['Name'] + "(){" + '\n')
    if len(BDMP[element]['Sons']) == 1:
        print("Warning:: the dfinition contain and gate with one inputs: please recheck the model")
        file_obj.write(
            " fail_" + BDMP[element]['Sons'][0] + "; fail_" + BDMP[element]['Name'] + ";repaired_" +
            BDMP[element]['Sons'][0] + "; repaired_" + BDMP[element]['Name'] + ";" + BDMP[element]['Name'] + "()}\n")
    elif len(BDMP[element]['Sons']) == 2:
        file_obj.write(
            "alt { :: fail_" + BDMP[element]['Sons'][0] + "; S1() :: fail_" + BDMP[element]['Sons'][1] + "; S2()}\n")
        file_obj.write("process S1() {alt { :: repaired_" + BDMP[element]['Sons'][0] + ";" + BDMP[element][
            'Name'] + "() :: fail_" + BDMP[element]['Sons'][1] + "{=" + BDMP[element]['Name'] + "=true=} ; S3()}}\n")
        file_obj.write("process S2() {alt { :: repaired_" + BDMP[element]['Sons'][1] + ";" + BDMP[element][
            'Name'] + "() :: fail_" + BDMP[element]['Sons'][0] + "{=" + BDMP[element]['Name'] + "=true=} ; S3()}}\n")
        file_obj.write(
            "process S3() {alt { :: fail_" + BDMP[element]['Name'] + "; S4() :: repaired_" + BDMP[element]['Sons'][
                1] + "{=" + BDMP[element]['Name'] + "=false=}; S1()::repaired_" + BDMP[element]['Sons'][0] + "{=" +
            BDMP[element]['Name'] + "=false=}; S2()}}\n")
        file_obj.write("process S4() {alt { :: repaired_" + BDMP[element]['Sons'][1] + " {=" + BDMP[element][
            'Name'] + "= false =}; S5():: repaired_" + BDMP[element]['Sons'][0] + " {=" + BDMP[element][
                           'Name'] + "=false=};S6()}}\n")
        file_obj.write(
            "process S5() {alt { :: repaired_" + BDMP[element]['Sons'][0] + "; S7():: fail_" + BDMP[element]['Sons'][
                1] + " {=" + BDMP[element]['Name'] + "=true=}; S4() :: repaired_" + BDMP[element]['Name'] + "{=" +
            BDMP[element]['Name'] + "=false=}; S1()}}\n")
        file_obj.write(
            "process S6() {alt { :: repaired_" + BDMP[element]['Sons'][1] + "; S7():: fail_" + BDMP[element]['Sons'][
                0] + " {=" + BDMP[element]['Name'] + "=true=}; S4() :: repaired_" + BDMP[element]['Name'] + "{=" +
            BDMP[element]['Name'] + "=false=}; S2()}}\n")
        file_obj.write(
            "process S7() {alt { :: fail_" + BDMP[element]['Sons'][0] + "; S5() :: fail_" + BDMP[element]['Sons'][
                1] + "; S6():: repaired_" + BDMP[element]['Name'] + " {=" + BDMP[element]['Name'] + "=false=};" +
            BDMP[element]['Name'] + "()}}}\n")
    elif len(BDMP[element]['Sons']) == 3:
        sys.exit("three input or gate not defined yet")
    return header, footer


# Following block defines failure behavior of AND gate with three inputs. after binarization this block is no more required
"""
if len(BDMP[element]['Sons']) == 3:
    file_obj.write("alt { :: fail_" + BDMP[element]['Sons'][0] + "; S1()" + ":: fail_" + BDMP[element]['Sons'][
        1] + "; S2()::fail_" + BDMP[element]['Sons'][2] + ";S3()}\n")
    file_obj.write(
        "process S1() {alt {:: repaired_" + BDMP[element]['Sons'][0] + "; " + BDMP[element]['Name'] + "():: fail_" +
        BDMP[element]['Sons'][1] + "; S4():: fail_" + BDMP[element]['Sons'][2] + "; S5()}}\n")
    file_obj.write(
        "process S2() {alt {:: repaired_" + BDMP[element]['Sons'][1] + "; " + BDMP[element]['Name'] + "():: fail_" +
        BDMP[element]['Sons'][0] + "; S4():: fail_" + BDMP[element]['Sons'][2] + "; S6()}}\n")
    file_obj.write(
        "process S3() {alt {:: repaired_" + BDMP[element]['Sons'][2] + "; " + BDMP[element]['Name'] + "():: fail_" +
        BDMP[element]['Sons'][0] + "; S5():: fail_" + BDMP[element]['Sons'][1] + "; S6()}}\n")
    file_obj.write("process S4() {alt {:: repaired_" + BDMP[element]['Sons'][1] + "; " + "S1():: repaired_" +
                   BDMP[element]['Sons'][0] + "; S2():: fail_" + BDMP[element]['Sons'][2] + "; S7()}}\n")
    file_obj.write(
        "process S5() {alt {:: repaired_" + BDMP[element]['Sons'][2] + "; S1()::repaired_" + BDMP[element]['Sons'][
            0] + "; S3()::fail_" + BDMP[element]['Sons'][1] + ";S7()}}\n")
    file_obj.write(
        "process S6() {alt {:: repaired_" + BDMP[element]['Sons'][1] + "; S3()::repaired_" + BDMP[element]['Sons'][
            2] + "; S2()::fail_" + BDMP[element]['Sons'][0] + ";S7()}}\n")
    file_obj.write("process S7(){alt{:: fail_" + BDMP[element]['Name'] + " {= Fail=true =} ;S8() :: repaired_" +
                   BDMP[element]['Sons'][0] + "; S6()::repaired_" + BDMP[element]['Sons'][1] + "; S5()::repaired_" +
                   BDMP[element]['Sons'][2] + "; S4()}}\n")
    file_obj.write(
        "process S8() {alt {:: repaired_" + BDMP[element]['Sons'][0] + "; S9()::repaired_" + BDMP[element]['Sons'][
            1] + ";S10()::repaired_" + BDMP[element]['Sons'][2] + ";S11()}}\n")
    file_obj.write("process S9() {alt{::fail_" + BDMP[element]['Sons'][0] + "; S8() :: repaired_" + BDMP[element][
        'Name'] + " {=Fail = false =}; S6()}}\n")
    file_obj.write("process S10() {alt{::fail_" + BDMP[element]['Sons'][1] + "; S8() :: repaired_" + BDMP[element][
        'Name'] + " {=Fail = false =}; S5()}}\n")
    file_obj.write("process S11() {alt{::fail_" + BDMP[element]['Sons'][2] + "; S8() :: repaired_" + BDMP[element][
        'Name'] + " {=Fail = false =}; S4()}}}\n")
"""


########### Writting failure behavior of OR Gate##############################
################################################################################
################################################################################

def WriteOrGate(BDMP, element, header, footer, file_obj):
    ########################Failure Mecanism

    header.append("action  act_" + BDMP[element]['Name'] + ",dact_" + BDMP[element]['Name'] + ", fail_" + BDMP[element][
        'Name'] + ", repaired_" + BDMP[element]['Name'] + ';\n')
    header.append("bool  " + BDMP[element]['Name'] + " = false;\n")
    footer.append("::" + BDMP[element]['Name'] + "()  :: " + BDMP[element][
        'Name'] + '_Act()\n')
    file_obj.write(
        "//##########Failure Behavior of \"" + BDMP[element]['Type'] + "\" named \"" + BDMP[element][
            'Name'] + '\"\n')
    file_obj.write("process " + BDMP[element]['Name'] + "(){" + '\n')
    if len(BDMP[element]['Sons']) == 1:
        print("Warning:: the dfinition contain one or gate with one inputs: please recheck the model")
        file_obj.write(
            " fail_" + BDMP[element]['Sons'][0] + "{=" + BDMP[element]['Name'] + "=true=}; fail_" + BDMP[element]['Name'] + ";repaired_" +
            BDMP[element]['Sons'][0] + "{=" + BDMP[element]['Name'] + "=false=}; repaired_" + BDMP[element]['Name'] + ";" + BDMP[element]['Name'] + "()}\n")
    elif len(BDMP[element]['Sons']) == 2:
        file_obj.write(
            "alt { :: fail_" + BDMP[element]['Sons'][0] + "; S1() :: fail_" + BDMP[element]['Sons'][1] + "; S2()}\n")
        file_obj.write(
            "process S1() {alt { :: repaired_" + BDMP[element]['Sons'][0] + "; " + BDMP[element][
                'Name'] + "():: fail_" +
            BDMP[element]['Sons'][1] + "; S3():: fail_" +
            BDMP[element]['Name'] + "{=" + BDMP[element]['Name'] + "=true=} ; S5()}}\n")
        file_obj.write(
            "process S2() {alt { :: repaired_" + BDMP[element]['Sons'][1] + "; " + BDMP[element][
                'Name'] + "() :: fail_" +
            BDMP[element]['Sons'][0] + "; S3()::fail_" +
            BDMP[element]['Name'] + "{=" + BDMP[element]['Name'] + "=true=} ; S6()}}\n")
        file_obj.write(
            "process S3() {alt { :: fail_" + BDMP[element]['Name'] + "{=" + BDMP[element][
                'Name'] + "=true=}; S4() :: repaired_" + BDMP[element]['Sons'][
                1] + "; S1()::repaired_" + BDMP[element]['Sons'][0] + "; S2()}}\n")
        file_obj.write(
            "process S4() {alt { :: repaired_" + BDMP[element]['Sons'][1] + "; S5():: repaired_" +
            BDMP[element]['Sons'][
                0] + " ;S6()}}\n")
        file_obj.write(
            "process S5() {alt { :: repaired_" + BDMP[element]['Sons'][0] + "; S7():: fail_" + BDMP[element]['Sons'][
                1] + " ; S4()}}\n")
        file_obj.write(
            "process S6() {alt { :: repaired_" + BDMP[element]['Sons'][1] + "; S7():: fail_" + BDMP[element]['Sons'][
                0] + " ; S4() }}\n")
        file_obj.write(
            "process S7() {alt { :: fail_" + BDMP[element]['Sons'][0] + "; S5() :: fail_" + BDMP[element]['Sons'][
                1] + "; S6():: repaired_" + BDMP[element]['Name'] + " {=" + BDMP[element]['Name'] + "=false=};" +
            BDMP[element]['Name'] + "()}}}\n")
    return header, footer


########### Writting failure behavior of PAND Gate##############################
################################################################################
################################################################################


def WritePandGate(BDMP, element, header, footer, file_obj):
    ########################Failure Mecanism

    header.append("action  act_" + BDMP[element]['Name'] + ",dact_" + BDMP[element]['Name'] + ", fail_" + BDMP[element][
        'Name'] + ", repaired_" + BDMP[element]['Name'] + ';\n')
    header.append("bool  " + BDMP[element]['Name'] + " = false;\n")
    footer.append("::" + BDMP[element]['Name'] + "()  :: " + BDMP[element][
        'Name'] + '_Act()\n')
    file_obj.write(
        "//##########Failure Behavior of \"" + BDMP[element]['Type'] + "\" named \"" + BDMP[element][
            'Name'] + '\"\n')
    file_obj.write("process " + BDMP[element]['Name'] + "(){" + '\n')
    file_obj.write(
        "alt { :: fail_" + BDMP[element]['Sons'][0] + "; S1()" + ":: fail_" + BDMP[element]['Sons'][1] + "; S2()}\n")
    file_obj.write(
        "process S1() {alt { :: repaired_" + BDMP[element]['Sons'][0] + ";" + BDMP[element]['Name'] + "() :: fail_" +
        BDMP[element]['Sons'][1] + "; S3()}}\n")
    file_obj.write(
        "process S2() {alt { :: repaired_" + BDMP[element]['Sons'][1] + ";" + BDMP[element]['Name'] + "() :: fail_" +
        BDMP[element]['Sons'][0] + "; S4()}}\n")
    file_obj.write("process S3() {alt { :: fail_" + BDMP[element]['Name'] + "{=" + BDMP[element][
        'Name'] + "=true=}; S5() :: repaired_" + BDMP[element]['Sons'][1] + "; S1()::repaired_" + BDMP[element]['Sons'][
                       0] + "; S2()}}\n")
    file_obj.write(
        "process S4()  {alt {:: repaired_" + BDMP[element]['Sons'][1] + "; S1():: repaired_" + BDMP[element]['Sons'][
            0] + ";S2()}}\n")
    file_obj.write(
        "process S5() {alt { :: repaired_" + BDMP[element]['Sons'][1] + "; S6():: repaired_" + BDMP[element]['Sons'][
            0] + ";S7()}}\n")
    file_obj.write(
        "process S6() {alt { :: repaired_" + BDMP[element]['Sons'][0] + "; S8():: fail_" + BDMP[element]['Sons'][
            1] + "; S5() :: repaired_" + BDMP[element]['Name'] + "{=" + BDMP[element]['Name'] + "=false=}; S1()}}\n")
    file_obj.write(
        "process S7() {alt { :: repaired_" + BDMP[element]['Sons'][1] + "; S8():: fail_" + BDMP[element]['Sons'][
            0] + "; S5() :: repaired_" + BDMP[element]['Name'] + "{=" + BDMP[element]['Name'] + "=false=}; S2()}}\n")
    file_obj.write(
        "process S8() {alt { :: fail_" + BDMP[element]['Sons'][0] + "; S6() :: fail_" + BDMP[element]['Sons'][
            1] + "; S7():: repaired_" + BDMP[element]['Name'] + "{=" + BDMP[element]['Name'] + "=false=};" +
        BDMP[element]['Name'] + "()}}}\n")
    return header, footer

    # Grey Arrow Trigger


def ActivateInvTrig(BDMP, element, file_obj):
    # if compoentnn is not inherited by any element and it is still triggered by some elemnt then add this case here
    #if BDMP[element]['Fathers'] == 'Null':
    #   print("I am here")
    parent_module = set()
    for parent_cnt in range(0, len(BDMP[element]['Fathers'])):
        parent_module.add(BDMP[BDMP[element]['Fathers'][parent_cnt]]['module'])  # only distinct modules are added
    parent_module = list(parent_module)
    if len(BDMP[element]['Fathers']) == 1 and BDMP[element]['Fathers'] != 'Null':  # behavior of inv trigger one father
        file_obj.write(
            "alt{::fail_" + BDMP[element]['Triggered_by'] + "; S3():: act_"
            + BDMP[BDMP[element]['Fathers'][0]]['module'] + ";  act_" + BDMP[element]['module'] + "; S1():: act_" + BDMP[BDMP[element]['Fathers'][0]]['module'] + "; S2()}\n")
        file_obj.write(
            "process S0(){alt{:: dact_" + BDMP[BDMP[element]['Fathers'][0]]['module'] + "; S3()::repaired_" + BDMP[element]['Triggered_by'] + "; alt{:: act_" + BDMP[element][
                'module'] + ";S1()"+":: dact_"+BDMP[BDMP[element]['Fathers'][0]]['module']+";" + BDMP[element]['Name'] + "_Act() }}}\n")
        file_obj.write(
            "process S1(){alt{::dact_" + BDMP[BDMP[element]['Fathers'][0]]['module'] + ";dact_" + BDMP[element][
                'module'] + ";" + BDMP[element]['Name'] + "_Act()::fail_" + BDMP[element][
                'Triggered_by'] + "; dact_" +
            BDMP[element]['module'] + ";S0()}}\n")
        file_obj.write(
            "process S2(){dact_" + BDMP[BDMP[element]['Fathers'][0]]['module'] + ";" + BDMP[element]['Name'] + "_Act()}\n")
        file_obj.write("process S3(){alt{::repaired_" + BDMP[element]['Triggered_by'] + ";" +BDMP[element]['Name'] + "_Act():: act_" + BDMP[BDMP[element]['Fathers'][0]]['module'] + "; S0()}}}\n")
        """file_obj.write(
                "alt{::fail_" + BDMP[element]['Triggered_by'] + "; S3()::when("+BDMP[element]['Triggered_by']+" == false) act_"
                + BDMP[BDMP[element]['Fathers'][0]]['module'] + "; when("+BDMP[element]['Triggered_by']+" == false) act_" + BDMP[element]['module'] + "; S1()::when("+BDMP[element]['Triggered_by']+" == true) act_" + BDMP[BDMP[element]['Fathers'][0]]['module'] + "; S2()}\n")
            file_obj.write(
                "process S0(){alt{:: dact_" + BDMP[BDMP[element]['Fathers'][0]]['module'] + "; S3()::repaired_" + BDMP[element]['Triggered_by'] + "; alt{::when("+BDMP[element]['Triggered_by']+" == false) act_" + BDMP[element][
                    'module'] + ";S1()"+":: dact_"+BDMP[BDMP[element]['Fathers'][0]]['module']+";" + BDMP[element]['Name'] + "_Act() }}}\n")
            file_obj.write(
                "process S1(){alt{::dact_" + BDMP[BDMP[element]['Fathers'][0]]['module'] + ";dact_" + BDMP[element][
                    'module'] + ";" + BDMP[element]['Name'] + "_Act()::fail_" + BDMP[element][
                    'Triggered_by'] + "; dact_" +
                BDMP[element]['module'] + ";S0()}}\n")
            file_obj.write(
                "process S2(){dact_" + BDMP[BDMP[element]['Fathers'][0]]['module'] + ";" + BDMP[element]['Name'] + "_Act()}\n")
            file_obj.write(
                "process S3(){alt{::repaired_" + BDMP[element]['Triggered_by'] + ";" +BDMP[element]['Name'] + "_Act():: act_" + BDMP[BDMP[element]['Fathers'][0]]['module'] + "; S0()}}}\n")
        """
    elif len(parent_module) == 2:  # behavior of inverse trigger with two parents
        file_obj.write(
            "alt{:: act_" + parent_module[0] + "; S1() :: act_" + parent_module[1] + "; S1() :: fail_" + BDMP[element][
                'Triggered_by'] + "; S2()} \n")
        file_obj.write(
            "process S1()  {alt {:: dact_" + parent_module[0] + "; " +
            BDMP[element]['Name'] + "_Act():: dact_" + parent_module[1] + "; " + BDMP[element][
                'Name'] + "_Act():: fail_" +
            BDMP[element]['Triggered_by'] + "; S4()" + " :: act_" + parent_module[
                0] + "; S3() :: act_" + parent_module[1] + "; S3():: act_"+BDMP[element]['module']+"; S9()}}\n")
        file_obj.write(
            "process S2()  {alt {:: repaired_" +
            BDMP[element]['Triggered_by'] + "; " + BDMP[element]['Name'] + "_Act() :: act_" + parent_module[
                0] + "; S4():: act_" + parent_module[1] + "; S4()}}\n")
        file_obj.write(
            "process S3()  {alt {:: dact_" + parent_module[0] + "; S1():: dact_" + parent_module[1] + "; S1():: fail_" +
            BDMP[element]['Triggered_by'] + "; S7() :: act_" +  BDMP[element]['module'] + "; S8()}}\n")
        file_obj.write(
            "process S4()  {alt {:: dact_" +
            parent_module[0] + "; S2() :: dact_" + parent_module[1] + "; S2() :: repaired_" + BDMP[element][
                'Triggered_by'] + "; S1():: act_" +
            parent_module[0] + "; S7() :: act_" + parent_module[1] + "; S7() }}\n")
        file_obj.write("process S7()  {alt {:: dact_" + parent_module[
            0] + "; S4() :: dact_" + parent_module[1] + "; S4() :: repaired_" + BDMP[element][
                           'Triggered_by'] + "; S3() }}\n")

        file_obj.write("process S8()  {alt {:: fail_"+BDMP[element]['Triggered_by']+"; alt{::dact_" + BDMP[element]['module'] + "; S7()::repaired_"+BDMP[element]['Triggered_by']+";S8()} :: dact_" + parent_module[
                           0] + "; S9():: dact_" + parent_module[
                           1] + "; S9() }}\n")
        file_obj.write("process S9()  {alt {::  fail_" + BDMP[element][
            'Triggered_by'] + "; S11() :: act_" + parent_module[
                           0] + "; S8() :: act_" + parent_module[
                           1] + "; S8() :: dact_" + parent_module[
                           0] + "; S10() :: dact_" + parent_module[
                           1] + "; S10() }}\n")
        file_obj.write(
            "process S10()  {alt {:: dact_" + BDMP[element]['module'] + ";"+BDMP[element]['Name']+"_Act()::  fail_" + BDMP[element][
                'Triggered_by'] + "; dact_" + BDMP[element]['module'] +"; S2() :: act_" + parent_module[
                0] + "; S9() :: act_" + parent_module[
                1] + "; S9() }}\n")
        file_obj.write("process S11()  {alt {::  repaired_" + BDMP[element][
                'Triggered_by'] +" ; S9():: dact_" + BDMP[element]['module'] + "; S4():: act_" + parent_module[
                           0] + "; dact_" + BDMP[element]['module'] + "; S7() :: act_" + parent_module[
                           1] + ";dact_" + BDMP[element]['module'] +" ; S7() :: dact_" + parent_module[
                           0] + "; dact_" + BDMP[element]['module']+"; S2() :: dact_" + parent_module[
                           1] + "; dact_" + BDMP[element]['module']+"; S2()}}}\n")
def ActivateSimpleTrig(BDMP, element, file_obj):
    # if compoentnn is not inherited by any element and it is still triggered by some elemnt then add this case here
    parent_module = set()
    for parent_cnt in range(0, len(BDMP[element]['Fathers'])):
        parent_module.add(BDMP[BDMP[element]['Fathers'][parent_cnt]]['module'])  # only distinct modules are added
    parent_module = list(parent_module)

    if len(parent_module) == 1:  # behavior of tirgger one father
        file_obj.write(
            "alt{:: act_" + parent_module[0] + "; S1() :: fail_" + BDMP[element][
                'Triggered_by'] + "; S1()} \n")
        file_obj.write(
            "process S1()  {alt {:: dact_" + parent_module[0] + "; " +
            BDMP[element]['Name'] + "_Act():: repaired_" + BDMP[element]['Triggered_by'] + "; " + BDMP[element][
                'Name'] + "_Act() :: act_" + parent_module[0] + "; S2() :: fail_" + BDMP[element]['Triggered_by'] + "; S2()}}\n")
        file_obj.write("process S2()  {alt {:: act_" + BDMP[element]['module'] + "; S3() :: dact_" + parent_module[0] + "; S1() :: repaired_" + BDMP[element]['Triggered_by'] + "; S1() }}\n")
        file_obj.write(
            "process S3()  {alt {::  dact_" +
            parent_module[0] + "; S4() :: repaired_" + BDMP[element][
                'Triggered_by'] + "; S4()}}\n")
        file_obj.write("process S4()  {alt {::dact_" + BDMP[element]['module'] + "; " + "S1() :: dact_" + parent_module[
            0] + "; S5() :: repaired_" + BDMP[element][
                           'Triggered_by'] + "; S5():: act_" + parent_module[
            0] + "; S3() :: fail_" + BDMP[element][
                           'Triggered_by'] + "; S3()}}\n")
        file_obj.write("process S5()  {alt {::dact_" + BDMP[element]['module'] + "; " +
            BDMP[element]['Name'] + "_Act() ::  act_" + parent_module[0] + "; S4() :: fail_" + BDMP[element]['Triggered_by'] + "; S4()}}}\n")
        """ one parent with one trigger keep this part only if results differ from the original
         file_obj.write(
               "alt{::fail_" + BDMP[element]['Triggered_by'] + "; S0() :: act_" + parent_module[0] + "; S1()}\n")
           file_obj.write(
               "process S0(){ act_" + parent_module[0] + "; act_" + BDMP[element][
                   'module'] + "; S2()}\n") 
           file_obj.write(
               "process S1(){ alt{::fail_" + BDMP[element]['Triggered_by'] + "; act_" + BDMP[element][
                   'module'] + "; S3():: dact_" + parent_module[0] + "; " + BDMP[element][
                   'Name'] + "_Act()}}\n")
           file_obj.write(
               "process S2() {alt{:: dact_" + parent_module[0] + "; S4():: repaired_" +
               BDMP[element][
                   'Triggered_by'] + "; S5()}}\n")
           file_obj.write(
               "process S3() {alt{:: dact_" + parent_module[0] + "; S4():: repaired_" +
               BDMP[element][
                   'Triggered_by'] + "; S5()}}\n")
           file_obj.write("process S4() { dact_" + BDMP[element]['module'] + "; S0()}\n")
           file_obj.write("process S5() { dact_" + BDMP[element]['module'] + "; S1()}}\n") 
        """
    elif len(parent_module) == 2: #behavior of trigger with two parents

        file_obj.write(
            "alt{:: act_" + parent_module[0] + "; S1() :: act_" + parent_module[1] + "; S1() :: fail_" + BDMP[element][
                'Triggered_by'] + "; S2()} \n")
        file_obj.write(
            "process S1()  {alt {:: dact_" + parent_module[0] + "; " +
            BDMP[element]['Name'] + "_Act():: dact_" + parent_module[1] + "; " + BDMP[element]['Name'] + "_Act():: fail_" +
            BDMP[element]['Triggered_by'] + "; S4()"  + " :: act_" + parent_module[
                0] + "; S3() :: act_" + parent_module[1] + "; S3()}}\n")

        file_obj.write(
            "process S2()  {alt {:: repaired_" +
            BDMP[element]['Triggered_by'] + "; " +BDMP[element]['Name'] + "_Act() :: act_" + parent_module[0] + "; S4():: act_" + parent_module[
                1] + "; S4()}}\n") 
        file_obj.write(
            "process S3()  {alt {:: dact_" + parent_module[0] + "; S1():: dact_" + parent_module[1] + "; S1():: fail_" +
            BDMP[element]['Triggered_by'] + "; S6() }}\n")
      
        file_obj.write(
            "process S4()  {alt {:: act_" + BDMP[element]['module'] + "; S9() :: dact_" +
            parent_module[0] + "; S2() :: dact_" + parent_module[1] + "; S2() :: repaired_" + BDMP[element][
                'Triggered_by'] + "; S1():: act_" +
            parent_module[0] + "; S6() :: act_" + parent_module[1] + "; S6() }}\n")
        file_obj.write("process S6()  {alt {:: act_" + BDMP[element]['module'] + "; S7() :: dact_" + parent_module[
            0] + "; S4() :: dact_" + parent_module[1] + "; S4() :: repaired_" + BDMP[element][
                  'Triggered_by'] + "; S3() }}\n")
        
        file_obj.write("process S7()  {alt {:: repaired_" + BDMP[element][
                           'Triggered_by'] + "; S8() :: act_" + parent_module[
            0] + "; S9() :: act_" + parent_module[1] + "; S9() }}\n")
        
        file_obj.write("process S8()  {alt {:: dact_" + BDMP[element]['module'] + "; S3() :: fail_" + BDMP[element]['Triggered_by'] + "; S7() :: dact_" + parent_module[
            0] + "; S11():: dact_" + parent_module[
            1] + "; S11() }}\n")
        
        file_obj.write("process S9()  {alt {::  repaired_" + BDMP[element][
            'Triggered_by'] + "; S11() :: dact_" + parent_module[
                  0] + "; S10() :: dact_" + parent_module[
                  1] + "; S10() }}\n")
        
        file_obj.write("process S10()  {alt {:: dact_" + BDMP[element]['module']+ "; S2()::  repaired_" + BDMP[element][
            'Triggered_by'] + "; S12() :: act_" + parent_module[
                  0] + "; S9() :: act_" + parent_module[
                  1] + "; S9() }}\n")

        file_obj.write("process S11()  {alt {:: dact_" + BDMP[element]['module']+ "; S1()::  fail_" + BDMP[element][
            'Triggered_by'] + "; S9() :: dact_" + parent_module[
                  0] + "; S12() :: dact_" + parent_module[
                  1] + "; S12() :: act_" + parent_module[
                  0] + "; S8() :: act_" + parent_module[
                  1] + "; S8()}}\n")

        file_obj.write("process S12()  {alt {:: dact_" + BDMP[element]['module'] + ";"+BDMP[element]['Name']+"_Act()::  fail_" + BDMP[element][
            'Triggered_by'] + "; S10() :: act_" + parent_module[
                           0] + "; S11() :: act_" + parent_module[
                           1] + "; S11()}}}\n")


def ActivateOppSTrig(BDMP, element, file_obj):
    print("Opposite S trig present in the system")
    # fail_Source; act_target; repaired_source; dact_target; S_Trig_Act()
    file_obj.write(
        "act_" + BDMP[element]['module'] + "; S0()\n")
    file_obj.write(
        "process S0() {fail_" + BDMP[element]['Triggered_by'] + "; dact_" + BDMP[element]['module'] + "; repaired_" +
        BDMP[element][
            'Triggered_by'] + "; act_" + BDMP[element]['module'] + "; S0()}}\n")


def ActivateEqualSTrig(BDMP, element, file_obj):
    print("EqualS trig present in the system")
    file_obj.write(
        "fail_" + BDMP[element]['Triggered_by'] + "; act_" + BDMP[element]['module'] + "; repaired_" +
        BDMP[element][
            'Triggered_by'] + "; dact_" + BDMP[element]['module'] + ";" + BDMP[element]['Name'] + "_Act()}\n")


def ActivateAlwaysTrue(BDMP, element, file_obj):
    print("Always True trig present in the system")
    file_obj.write(
        "act_" + BDMP[element]['module'] + "; when(false) dact_" + BDMP[element]['module'] + "; " +
        BDMP[element][
            'Name'] + "_Act()}\n")


def ActivateAlwaysFalse(BDMP, element, file_obj):
    print("Always False trig present in the system")  # Add different module if encountered any of this
    file_obj.write("when(false) act_" + BDMP[element]['module'] + "; dact_" + BDMP[element]['module'] + "; " +
                   BDMP[element]['Name'] + "_Act()}\n")


def ActivateGreyArrow():
    print("functon fro grey arrow")
    # no trigger simple element being inherited by two or more gates


def ActivateSimple(BDMP, element,
                   file_obj):  # could have multiple parents and could also have always true and always false
    if BDMP[element]['Calculate'] == 'always_true':  # case for alwasy true
        ActivateAlwaysTrue(BDMP, element, file_obj)
    elif BDMP[element]['Calculate'] == 'always_false':  # case for alwasy false
        ActivateAlwaysFalse(BDMP, element, file_obj)
    else:  # case for NO trigger but one or more parents
        parent_module = set()
        if BDMP[element]['Calculate'] in {'fn_fathers_and_trig', 'fn_fathers_opp_trig', 'equal_to_S_trig',
                                          # does not necessarily mean that element is trigger
                                          'opposite_to_S_trig'} and BDMP[element]['Fathers'] != 'Null':
            for parent_cnt in range(0, len(BDMP[element]['Fathers'])):
                parent_module.add(
                    BDMP[BDMP[element]['Fathers'][parent_cnt]]['module'])  # only distinct modules are added

            parent_module = list(parent_module)

        if len(parent_module) == 1 and (len(BDMP[element]['Fathers']) == 1) :  # if activated by one parent but all belong to same module
            file_obj.write(  # parent  and child modules are same so it does not matter if we reffer to one or other
                "act_" + parent_module[0] + "; dact_" + parent_module[0] + "; " + BDMP[element][
                    'Name'] + "_Act()}\n")
        elif len(parent_module) == 1 and (len(BDMP[element]['Fathers']) > 1) :  # if activated by multiple parents but all belong to same module
            file_obj.write(  # parent  and child modules are same so it does not matter if we reffer to one or other
                "act_" + parent_module[0] + "; act_" + BDMP[element]['module']+ "; dact_" + parent_module[0] + "; dact_" + BDMP[element]['module']+ "; " + BDMP[element][
                    'Name'] + "_Act()}\n")

        elif len(parent_module) == 2:  # behavior without trigger with activation inherited from two modules
            file_obj.write(
                "alt{:: act_" + parent_module[0] + "; S1() :: act_" + parent_module[1]  + "; S1()} \n")
            file_obj.write(
                "process S1()  {alt {::act_" + BDMP[element]['module'] + "; " + "S4():: dact_" + parent_module[0] + "; " +
                BDMP[element]['Name'] + "_Act():: dact_" + parent_module[1]  + "; " + BDMP[element][
                    'Name'] + "_Act() :: act_" + parent_module[0] + "; S2() :: act_" + parent_module[1]  + "; S2()}}\n")
            file_obj.write("process S2()  {alt {:: act_" + BDMP[element]['module'] + "; S3() :: dact_" + parent_module[
                0] + "; S1() :: dact_" + parent_module[1]  + "; S1() }}\n")
            file_obj.write(
                "process S3()  {alt {::  dact_" +
                parent_module[0] + "; S4() :: dact_" + parent_module[1]  + "; S4()}}\n")
            file_obj.write(
                "process S4()  {alt { :: dact_" + parent_module[
                    0] + "; S5() :: dact_" + parent_module[1]  + "; S5():: act_" + parent_module[
                    0] + "; S3() :: act_" + parent_module[1]  + "; S3()}}\n")
            file_obj.write("process S5()  {alt {::dact_" + BDMP[element]['module'] + "; " +
                           BDMP[element]['Name'] + "_Act() ::  act_" + parent_module[0] + "; S4() :: act_" +
                           parent_module[1]  + "; S4()}}}\n")


            """            
            file_obj.write("alt{::act_" + parent_module[0] + ";S0()::act_" +
                           parent_module[1] + ";S1()}\n")
            file_obj.write(
                "process S0(){alt{::dact_" + parent_module[0] + ";" + BDMP[element][
                    'Name'] + "_Act()::act_" + parent_module[1] + ";S2()::act_" +
                BDMP[element]['module'] + ";S6()}}\n")
            file_obj.write(
                "process S1(){alt{::dact_" + parent_module[1] + ";" + BDMP[element][
                    'Name'] + "_Act()::act_" + parent_module[0] + ";S3()::act_" +
                BDMP[element]['module'] + ";S5()}}\n")
            file_obj.write(
                "process S2(){alt{::dact_" + parent_module[1] + "; S0()::dact_" +
                parent_module[0] + ";S1()::act_" + BDMP[element]['module'] + ";S4()}}\n")
            file_obj.write(
                "process S3(){alt{::dact_" + parent_module[0] + "; S1()::dact_" +
                parent_module[1] + ";S0()::act_" + BDMP[element]['module'] + ";S4()}}\n")
            file_obj.write(
                "process S4(){alt{::dact_" + parent_module[0] + "; S5()::dact_" +
                parent_module[1] + ";S6()}}\n")
            file_obj.write(
                "process S5(){alt{::act_" + parent_module[0] + "; S4()::dact_" +
                parent_module[1] + ";alt{::act_" + parent_module[1] + ";S4():: dact_" + BDMP[element]['module'] + ";" +
                BDMP[element][
                    'Name'] + "_Act():: act_" + parent_module[0] + ";S6()}}}\n")
            file_obj.write(
                "process S6(){alt{::act_" + parent_module[1] + "; S4()::dact_" +
                parent_module[0] + ";alt{::act_" + parent_module[0] + ";S6():: dact_" + BDMP[element]['module'] + ";" +
                BDMP[element][
                    'Name'] + "_Act():: act_" + parent_module[1] + ";S5()}}}}\n")
            """

        elif len(parent_module) == 3:  # behavior without trigger with activation inherited from three modules
            file_obj.write("alt{:: act_" + parent_module[0] + "; S1() :: act_" + parent_module[1] + "; S1() :: act_" +
                           parent_module[2] + "; S1()} \n")
            file_obj.write(
                "process S1() {alt {:: act_" + BDMP[element]['module'] + "; S2() :: dact_" + parent_module[0] + "; " +
                BDMP[element]['Name'] + "_Act() :: dact_" + parent_module[1] + "; " + BDMP[element][
                    'Name'] + "_Act():: dact_" + parent_module[2] + "; " + BDMP[element]['Name'] + "_Act() :: act_" +
                parent_module[0] + "; S4() :: act_" + parent_module[1] + "; S4():: act_" + parent_module[
                    2] + "; S4()}}\n")
            file_obj.write("process S2()  {alt {:: dact_" + parent_module[0] + "; S3() :: dact_" + parent_module[
                1] + "; S3() :: dact_" + parent_module[2] + "; S3() :: act_" + parent_module[0] + "; S5():: act_" +
                           parent_module[1] + "; S5():: act_" + parent_module[2] + "; S5()}}\n")
            file_obj.write("process S3()  {alt {:: dact_" + BDMP[element]['module'] + "; " + BDMP[element][
                'Name'] + "_Act() :: act_" + parent_module[0] + "; S2() :: act_" + parent_module[1] + "; S2() :: act_" +
                           parent_module[2] + "; S2()}}\n")
            file_obj.write("process S4()  {alt {:: act_" + BDMP[element]['module'] + "; S5() :: dact_" + parent_module[
                0] + "; S1() :: dact_" + parent_module[1] + "; S1() :: dact_" + parent_module[2] + "; S1()  :: act_" +
                           parent_module[0] + "; S6():: act_" + parent_module[1] + "; S6() :: act_" + parent_module[
                               2] + "; S6()}}\n")
            file_obj.write("process S5()  {alt {:: act_" + parent_module[0] + "; S7() :: act_" + parent_module[
                1] + "; S7() :: act_" + parent_module[2] + "; S7() :: dact_" + parent_module[0] + "; S2() :: dact_" +
                           parent_module[1] + "; S2() :: dact_" + parent_module[2] + "; S2()}}\n")
            file_obj.write("process S6()  {alt {:: act_" + BDMP[element]['module'] + "; S7():: dact_" + parent_module[
                0] + "; S4() :: dact_" + parent_module[1] + "; S4() :: dact_" + parent_module[2] + "; S4()}}\n")
            file_obj.write("process S7()  {alt {:: dact_" + parent_module[0] + "; S5() :: dact_" + parent_module[
                1] + "; S5() :: dact_" + parent_module[2] + "; S5() }}}\n")

        """
    elif len(parent_module) == 2
    len(BDMP[element]['Fathers']) == 2:  # behavior without trigger with activation inherited from two modules
    file_obj.write("alt{::act_" + BDMP[BDMP[element]['Fathers'][0]]['module'] + ";S0()::act_" +
                   BDMP[BDMP[element]['Fathers'][1]]['module'] + ";S1()}\n")
    file_obj.write(
        "process S0(){alt{::dact_" + BDMP[BDMP[element]['Fathers'][0]]['module'] + ";" + BDMP[element][
            'Name'] + "_Act()::act_" + BDMP[BDMP[element]['Fathers'][1]]['module'] + ";S2()::act_" +
        BDMP[element]['module'] + ";S6()}}\n")
    file_obj.write(
        "process S1(){alt{::dact_" + BDMP[BDMP[element]['Fathers'][1]]['module'] + ";" + BDMP[element][
            'Name'] + "_Act()::act_" + BDMP[BDMP[element]['Fathers'][0]]['module'] + ";S3()::act_" +
        BDMP[element]['module'] + ";S5()}}\n")
    file_obj.write(
        "process S2(){alt{::dact_" + BDMP[BDMP[element]['Fathers'][1]]['module'] + "; S0()::dact_" +
        BDMP[BDMP[element]['Fathers'][0]]['module'] + ";S1()::act_" + BDMP[element]['module'] + ";S4()}}\n")
    file_obj.write(
        "process S3(){alt{::dact_" + BDMP[BDMP[element]['Fathers'][0]]['module'] + "; S1()::dact_" +
        BDMP[BDMP[element]['Fathers'][1]]['module'] + ";S0()::act_" + BDMP[element]['module'] + ";S4()}}\n")
    file_obj.write(
        "process S4(){alt{::dact_" + BDMP[BDMP[element]['Fathers'][0]]['module'] + "; S5()::dact_" +
        BDMP[BDMP[element]['Fathers'][1]]['module'] + ";S6()}}\n")
    file_obj.write(
        "process S5(){alt{::act_" + BDMP[BDMP[element]['Fathers'][0]]['module'] + "; S4()::dact_" +
        BDMP[BDMP[element]['Fathers'][1]]['module'] + ";alt{::act_" + BDMP[BDMP[element]['Fathers'][1]][
            'module'] + ";S4():: dact_" + BDMP[element]['module'] + ";" + BDMP[element][
            'Name'] + "_Act():: act_" + BDMP[BDMP[element]['Fathers'][0]]['module'] + ";S6()}}}\n")
    file_obj.write(
        "process S6(){alt{::act_" + BDMP[BDMP[element]['Fathers'][1]]['module'] + "; S4()::dact_" +
        BDMP[BDMP[element]['Fathers'][0]]['module'] + ";alt{::act_" + BDMP[BDMP[element]['Fathers'][0]][
            'module'] + ";S6():: dact_" + BDMP[element]['module'] + ";" + BDMP[element][
            'Name'] + "_Act():: act_" + BDMP[BDMP[element]['Fathers'][1]]['module'] + ";S5()}}}}\n")
    elif BDMP[element]['Calculate'] == 'always_true':
    print("always true without any trigger")
    elif BDMP[element]['Calculate'] == 'always_false':
    print("always false without any trigger")
"""


def ActivateTrig(BDMP, element, file_obj):
    if BDMP[element]['Calculate'] == 'fn_fathers_and_trig':  # behavior of tirgger one father
        ActivateSimpleTrig(BDMP, element, file_obj)
    elif BDMP[element]['Calculate'] == 'fn_fathers_opp_trig':
        ActivateInvTrig(BDMP, element, file_obj)
    elif BDMP[element]['Calculate'] == 'always_true':
        ActivateAlwaysTrue(BDMP, element, file_obj)
    elif BDMP[element]['Calculate'] == 'always_false':
        ActivateAlwaysFalse(BDMP, element, file_obj)
    elif BDMP[element]['Calculate'] == 'opposite_to_S_trig':
        ActivateOppSTrig(BDMP, element, file_obj)
    elif BDMP[element]['Calculate'] == 'equal_to_S_trig':
        ActivateEqualSTrig(BDMP, element, file_obj)


def ActivatePleaf(BDMP, element, file_obj):

    if BDMP[element]['In_progress'] == 'TRUE' and BDMP[element]['Triggered_by'] == 'Null':
        file_obj.write(" act_" + BDMP[element]['module'] + "; when(false) " +"act_" + BDMP[element]['module'] + "; "+BDMP[element]['Name']+"_Act()}\n")
    if BDMP[element]['In_progress'] == 'FALSE' and BDMP[element]['Triggered_by'] == 'Null':
        file_obj.write("when(false) " +"act_" + BDMP[element]['module'] + "; "+BDMP[element]['Name']+"_Act()}\n")
    if BDMP[element]['In_progress'] == 'FALSE' and BDMP[element]['Triggered_by'] != 'Null':
        file_obj.write("repaired_"+BDMP[element]['Triggered_by']+"; act_" + BDMP[element]['module'] + ";"+BDMP[element]['Name']+"_Act()}\n")
    if BDMP[element]['In_progress'] == 'TRUE' and BDMP[element]['Triggered_by'] != 'Null':
        file_obj.write("act_" + BDMP[element]['module']+ "; repaired_"+BDMP[element]['Triggered_by']+"; act_" + BDMP[element]['module'] + ";"+BDMP[element]['Name']+"_Act()}\n")
    """
    else:
        #these additioanl sigansl are not necessary remove them after checking the correct behavior
        file_obj.write("process P1(){ alt{:: end_" + BDMP[element]['Name'] +"; "+ BDMP[element]['Name'] + "_Act_Wrap():: dact_" + BDMP[element][
            'module'] + "; P1()}}\n")
        file_obj.write(
            " dact_" + BDMP[element]['module'] + "; start_" + BDMP[element]['Name'] + "; "+"P1()}\n")

    if BDMP[element]['Triggered_by'] == 'Null' and BDMP[element]['In_progress'] == 'TRUE':
        file_obj.write("act_" + BDMP[element]['module'] + "; when(false) dact_" + BDMP[element]['module'] + "; " + BDMP[element]['Name'] + "_Act()}\n")
        print("act_" + BDMP[element]['module'] + "; when(false) dact_" + BDMP[element]['module'] + "; " +
                       BDMP[element]['Name'] + "_Act()}\n")
    elif BDMP[element]['Triggered_by'] == 'Null' and BDMP[element]['In_progress'] == 'FALSE' and BDMP[element]['Fathers'] == 'Null':
        file_obj.write("act_" + BDMP[element]['module'] + "; when(false) dact_" + BDMP[element]['module'] + "; " +
                       BDMP[element]['Name'] + "_Act()}\n")
    elif BDMP[element]['Triggered_by'] != 'Null' and BDMP[element][
        'In_progress'] != 'TRUE' and BDMP[element]['Fathers'] != 'Null':  # there can be other cases of phase but for now consider test cases
        print(
            " alt{:: fail_" + BDMP[element]['Triggered_by'] + "; " + BDMP[element]['Name'] + "_Act() :: repaired_" +
            BDMP[element]['Triggered_by'] + "; act_" + BDMP[element]['module'] + "; repaired_" +
            BDMP[element]['Name'] + "; dact_" + BDMP[element]['module'] + ";" + BDMP[element][
                'Name'] + "_Act()}}\n")
        file_obj.write(
            " alt{:: fail_" + BDMP[element]['Triggered_by'] + "; " + BDMP[element]['Name'] + "_Act() :: repaired_" +
            BDMP[element]['Triggered_by'] + "; act_" + BDMP[element]['module'] + "; repaired_" +
            BDMP[element]['Name'] + "; dact_" + BDMP[element]['module'] + ";" + BDMP[element][
                'Name'] + "_Act()}}\n")
    elif BDMP[element]['Triggered_by'] != 'Null' and BDMP[element][
        'In_progress'] != 'TRUE':  # there can be other cases of phase but for now consider test cases
        file_obj.write(
            " alt{:: fail_" + BDMP[element]['Triggered_by'] + "; " + BDMP[element]['Name'] + "_Act() :: repaired_" +
            BDMP[element]['Triggered_by'] + "; act_" + BDMP[element]['module'] + "; fail_" +
            BDMP[element]['Triggered_by'] + "; dact_" + BDMP[element]['module'] + ";" + BDMP[element][
                'Name'] + "_Act()}}\n")
"""

def ActivateTopLevel(BDMP, element, file_obj):
    if BDMP[element]['Calculate'] in {'always_true', 'always_false'}:
        if BDMP[element]['Calculate'] == 'always_true':
            ActivateAlwaysTrue(BDMP, element, file_obj)
        if BDMP[element]['Calculate'] == 'always_false':
            ActivateAlwaysFalse(BDMP, element, file_obj)
    else:
        if BDMP[element]['Type'] != 'i_leaf' and BDMP[element]['Triggered_by'] == 'Null':
            file_obj.write(
                "act_" + BDMP[element]['module'] + "; when(false) dact_" + BDMP[element]['module'] + "; " +
                BDMP[element][
                    'Name'] + "_Act()}\n")
        elif BDMP[element]['Type'] != 'i_leaf' and BDMP[element]['Triggered_by'] != 'Null' and BDMP[element]['Calculate'] in {'fn_fathers_and_trig'}:
            print("Top level element triggered by a fn_fathers and trig")
            file_obj.write(
                "fail_" + BDMP[element]['Triggered_by'] + "; act_" + BDMP[element]['module'] + "; repaired_" +
                BDMP[element][
                    'Triggered_by'] + "; dact_" + BDMP[element]['module'] + "; "+BDMP[element]['Name']+"_Act()}\n")

        # add fail of parent activates this module and repair of parent deactiv
        # ates this module
        elif BDMP[element]['Type'] == 'i_leaf' and BDMP[element]['Triggered_by'] == 'Null':
            print("top level event is an i_leaf it has no activation behavior")
            """
            file_obj.write(
                "fail_" + BDMP[element]['Triggered_by'] + "; act_" + BDMP[element]['module'] + "; repaired_" +
                BDMP[element][
                    'Triggered_by'] + "; dact_" + BDMP[element]['module'] + "; " + BDMP[element]['Name'] + "_Act()}\n")
            """
        elif BDMP[element]['Type'] == 'i_leaf' and BDMP[element]['Triggered_by'] != 'Null' and BDMP[element]['Calculate'] in {'fn_fathers_and_trig', } :
            print("top level event is an i_leaf it is triggered by a trigger could be trigger")
            file_obj.write(
                "fail_" + BDMP[element]['Triggered_by'] + "; act_" + BDMP[element]['module'] + "; repaired_" +
                BDMP[element][
                    'Triggered_by'] + "; dact_" + BDMP[element]['module'] + ";" + BDMP[element]['Name'] + "_Act()}\n")
        elif BDMP[element]['Type'] == 'i_leaf' and BDMP[element]['Triggered_by'] != 'Null' and BDMP[element]['Calculate'] in {'fn_fathers_and_trig', } :
            print("top level event is an i_leaf it is triggered by a opposite trigger")


    ########### Writting Activation behavior of all elements##############################
    ################################################################################
    ################################################################################


def WriteActivation(BDMP, element, file_obj):

    #############################################################
    # Header Fragment of Activation
    ###############################################################
    file_obj.write(
        "//##########Activation Behavior of \"" + BDMP[element]['Type'] + "\" named \"" + BDMP[element][
            'Name'] + '\"\n')
    file_obj.write("process " + BDMP[element]['Name'] + "_Act(){" + '\n')
    #############################################################
    # Activation behavior for Top level elements in multitop tree the module is called Module 0
    # The top level elements never gets deactivated unless they are triggered by an activation link
    # The Inst type elements in main modules never gets tested.
    ###############################################################
    if BDMP[element]['Type'] == 'phase_leaf':
        ActivatePleaf(BDMP, element, file_obj)
    else:
        if (BDMP[element]['Type'] == 'undes_event' or BDMP[element]['Fathers'] == 'Null'):  # For multitop
            ActivateTopLevel(BDMP, element, file_obj)
        if BDMP[element][
            'Triggered_by'] == 'Null' and BDMP[element]['Calculate'] not in {'always_true', 'always_false'}:  # for elements without any trigger, inv trigger. Could be alway required Could have multiple parents
            ActivateSimple(BDMP, element, file_obj)
        if (BDMP[element][
            'Triggered_by'] != 'Null' or BDMP[element]['Calculate'] in {'always_true', 'always_false'}) and BDMP[element]['Fathers'] != 'Null':  # for elements having trigger four cases trigger, ivtrigger, equal strig and opp strig
            print(BDMP[element]['Calculate'])
            ActivateTrig(BDMP, element, file_obj)


