import pprint
import sys
import os
import subprocess

###########Writting Exp type Basic event###########################
################################################################################
################################################################################
def WriteFleaf(BDMP, element, file_object,PRIORITY):
    #PlaceTags = {str("fail_"+BDMP[element]['Name']), str("act_" + BDMP[element]['module'])}
    file_object.write("<?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"no\"?>\n")
    file_object.write("<!-- This project file has been saved by the Python Script for composition with algebra tool, v.100 --><project name=\"New project\" version=\"121\">\n")
    file_object.write("<gspn name=\"GSPN\" show-color-cmd=\"false\" show-fluid-cmd=\"false\">\n")
    file_object.write("<nodes>\n")
    file_object.write("<place marking=\"1\" name=\"P_"+BDMP[element]['Name']+"_0\" superposition-tags=\"work_"+BDMP[element]['Name']+"\" x=\"3.0\" y=\"9.0\"/>\n")
    file_object.write("<place name=\"P_"+BDMP[element]['Name']+"_1\" superposition-tags=\"fail_"+BDMP[element]['Name']+"\" x=\"14.0\" y=\"9.0\"/>\n")
    file_object.write("<place name=\"P_"+BDMP[element]['Name']+"_2\" superposition-tags=\"act_" + BDMP[element]['module'] + "\" x=\"8.0\" y=\"15.0\"/>\n")
    file_object.write("<transition delay=\""+BDMP[element]['lambda']+"\" name=\"T_"+BDMP[element]['Name']+"_0_fail\" nservers-x=\"0.5\" type=\"EXP\" x=\"8.55\" y=\"9.0\"/>\n")
    if PRIORITY['Repairable'] == 'True':
        file_object.write("<transition delay=\""+BDMP[element]['mu']+"\" name=\"T_"+BDMP[element]['Name']+"_1_rep\" nservers-x=\"0.5\" type=\"EXP\" x=\"8.55\" y=\"4.0\"/>\n")
    """
    coord = (14, 9)
    WriteActivation(BDMP, element, file_object, coord)
    """
    file_object.write("    </nodes>\n")
    file_object.write("    <edges>\n")
    file_object.write("<arc head=\"T_"+BDMP[element]['Name']+"_0_fail\" kind=\"INPUT\" tail=\"P_"+BDMP[element]['Name']+"_0\"/>\n")
    file_object.write("<arc head=\"P_"+BDMP[element]['Name']+"_1\" kind=\"OUTPUT\" tail=\"T_"+BDMP[element]['Name']+"_0_fail\"/>\n")
    file_object.write("<arc head=\"T_"+BDMP[element]['Name']+"_0_fail\" kind=\"INPUT\" tail=\"P_"+BDMP[element]['Name']+"_2\"/>\n")
    file_object.write("<arc head=\"P_" + BDMP[element]['Name'] + "_2\" kind=\"INPUT\" tail=\"T_" + BDMP[element]['Name'] + "_0_fail\"/>\n")
    if PRIORITY['Repairable'] == 'True':
        file_object.write("<arc head=\"T_"+BDMP[element]['Name']+"_1_rep\" kind=\"INPUT\" tail=\"P_"+BDMP[element]['Name']+"_1\"/>\n")
        file_object.write("<arc head=\"P_"+BDMP[element]['Name']+"_0\" kind=\"OUTPUT\" tail=\"T_"+BDMP[element]['Name']+"_1_rep\"/>\n")
    file_object.write("</edges>\n")
    file_object.write("</gspn>\n")
    file_object.write("</project>\n")

    #subprocess.Popen("/usr/local/GreatSPN/scripts/algebra")
########### Writting Standby type Basic event######################################
################################################################################
################################################################################
def WriteSleaf(BDMP, element, file_object,PRIORITY):
    file_object.write("<?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"no\"?>\n")
    file_object.write(
        "<!-- This project file has been saved by the Python Script for composition with algebra tool, v.100 --><project name=\"New project\" version=\"121\">\n")
    file_object.write("<gspn name=\"GSPN\" show-color-cmd=\"false\" show-fluid-cmd=\"false\">\n")
    file_object.write("<nodes>\n")
    file_object.write(
        "<place marking=\"1\" name=\"P_" + BDMP[element]['Name'] + "_0\" superposition-tags=\"work_" + BDMP[element][
            'Name'] + "\" x=\"3.0\" y=\"9.0\"/>\n")
    file_object.write("<place name=\"P_" + BDMP[element]['Name'] + "_1\" superposition-tags=\"fail_" + BDMP[element][
        'Name'] + "\" x=\"14.0\" y=\"9.0\"/>\n")
    file_object.write("<place name=\"P_" + BDMP[element]['Name'] + "_2\" superposition-tags=\"act_" + BDMP[element][
        'module'] + "\" x=\"4.0\" y=\"15.0\"/>\n")
    file_object.write("<transition delay=\"" + BDMP[element]['mu'] + "\" name=\"T_" + BDMP[element]['Name'] + "_1\" nservers-x=\"0.5\" type=\"EXP\" x=\"8.55\" y=\"3.0\"/>\n")
    file_object.write("<transition delay=\"" + BDMP[element]['standby_lambda'] + "\" name=\"T_" + BDMP[element][
        'Name'] + "_2\" nservers-x=\"0.5\" type=\"EXP\" x=\"8.55\" y=\"8.0\"/>\n")
    file_object.write("<transition delay=\"" + BDMP[element]['lambda'] + "\" name=\"T_" + BDMP[element][
        'Name'] + "_0\" nservers-x=\"0.5\" type=\"EXP\" x=\"8.55\" y=\"14.0\"/>\n")
    #coord = (14, 9)
    #WriteActivation(BDMP, element, file_object, coord)
    file_object.write("    </nodes>\n")
    file_object.write("    <edges>\n")
    file_object.write(
        "<arc head=\"T_" + BDMP[element]['Name'] + "_0\" kind=\"INPUT\" tail=\"P_" + BDMP[element]['Name'] + "_0\"/>\n")
    file_object.write("<arc head=\"P_" + BDMP[element]['Name'] + "_1\" kind=\"OUTPUT\" tail=\"T_" + BDMP[element][
        'Name'] + "_0\"/>\n")
    file_object.write(
        "<arc head=\"T_" + BDMP[element]['Name'] + "_2\" kind=\"INPUT\" tail=\"P_" + BDMP[element]['Name'] + "_0\"/>\n")
    file_object.write("<arc head=\"P_" + BDMP[element]['Name'] + "_1\" kind=\"OUTPUT\" tail=\"T_" + BDMP[element][
        'Name'] + "_2\"/>\n")
    file_object.write(
        "<arc head=\"T_" + BDMP[element]['Name'] + "_0\" kind=\"INPUT\" tail=\"P_" + BDMP[element]['Name'] + "_2\"/>\n")
    file_object.write(
        "<arc head=\"T_" + BDMP[element]['Name'] + "_2\" kind=\"INHIBITOR\" tail=\"P_" + BDMP[element]['Name'] + "_2\"/>\n")
    file_object.write(
        "<arc head=\"P_" + BDMP[element]['Name'] + "_2\" kind=\"INPUT\" tail=\"T_" + BDMP[element]['Name'] + "_0\"/>\n")
    file_object.write(
        "<arc head=\"T_" + BDMP[element]['Name'] + "_1\" kind=\"INPUT\" tail=\"P_" + BDMP[element]['Name'] + "_1\"/>\n")
    file_object.write("<arc head=\"P_" + BDMP[element]['Name'] + "_0\" kind=\"OUTPUT\" tail=\"T_" + BDMP[element][
        'Name'] + "_1\"/>\n")
    file_object.write("</edges>\n")
    file_object.write("</gspn>\n")
    file_object.write("</project>\n")


########### Writting Instantenous Type Basic event##############################
################################################################################
################################################################################

def WriteIleaf(BDMP, element, file_object,PRIORITY):
    # If INST type BE is in module 0 then donot check it
    #PlaceTags = {str("fail_" + BDMP[element]['Name']), str("act_" + BDMP[element]['module'])}
    #print(BDMP[element])
    if BDMP[element]['module'] == '0':  # BDMP['UE_1']['module']: look later for a suitable way to identify topmodule
       input("Model has an an INST in first module eiter remove it of add its semantics in this code \n BDMP donot have such element but any thing can happen")
    # If INST type BE is not in module 0 then it can be checked
    else:
        file_object.write("<?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"no\"?>")
        file_object.write("<!-- This project file has been saved by the New GreatSPN Editor, v.100 --><project name=\"New project\" version=\"121\">")
        file_object.write("  <gspn name=\"GSPN\" show-color-cmd=\"false\" show-fluid-cmd=\"false\">")
        file_object.write("    <nodes>")
        file_object.write("      <place name=\"P_"+BDMP[element]['Name']+"_1\" superposition-tags=\"fail_"+BDMP[element]['Name']+"\" x=\"33.0\" y=\"12.0\"/>")
        if PRIORITY['Repairable'] == 'True':
            file_object.write("      <transition delay=\""+BDMP[element]['mu']+"\" name=\"T_" +BDMP[element]['Name']+ "_1_rep\" nservers-x=\"0.5\" type=\"EXP\" x=\"26.55\" y=\"8.0\"/>")
        file_object.write("      <place name=\"P_"+BDMP[element]['Name']+"_2\" superposition-tags=\"act_"+BDMP[element]['module']+"\" x=\"26.0\" y=\"22.0\"/>")
        #file_object.write("      <transition name=\"t_"+BDMP[element]['Name']+"_0\" priority=\""+ BDMP[element]['Priority'] +"\" type=\"IMM\" weight=\""+str(1-float(BDMP[element]['gamma']))+"\" x=\"25.85\" y=\"15.0\"/>")
        #file_object.write("      <transition name=\"t_"+BDMP[element]['Name']+"_1\" priority=\""+ BDMP[element]['Priority'] +"\" type=\"IMM\" weight=\"" + BDMP[element]['gamma']+ "\" x=\"27.85\" y=\"12.0\"/>")
        file_object.write("      <transition name=\"t_" + BDMP[element]['Name'] + "_0_good\" priority=\""+ PRIORITY['BE_FAIL'] +"\" type=\"IMM\" weight=\"" + str(
            1 - float(BDMP[element]['gamma'])) + "\" x=\"25.85\" y=\"15.0\"/>")
        file_object.write("      <transition name=\"t_"+BDMP[element]['Name']+"_1_fail\"  priority=\""+ PRIORITY['BE_FAIL'] +"\" type=\"IMM\" weight=\"" + BDMP[element]['gamma']+ "\" x=\"27.85\" y=\"12.0\"/>")
        file_object.write("      <place marking=\"1\" name=\"P_"+BDMP[element]['Name']+"_3\" x=\"15.0\" y=\"13.0\"/>")
        file_object.write("      <place name=\"P_"+BDMP[element]['Name']+"_0\" x=\"33.0\" y=\"19.0\"/>")
        file_object.write("      <transition name=\"t_"+BDMP[element]['Name']+"_2\" priority=\""+ PRIORITY['REPAIR'] + "\" rotation=\"1.57\" type=\"IMM\" x=\"33.85\" y=\"24.0\"/>")
        #coord = (14, 9)
        #WriteActivation(BDMP, element, file_object, coord)
        file_object.write("    </nodes>\n")
        file_object.write("    <edges>\n")
        if PRIORITY['Repairable'] == 'True':
            file_object.write("      <arc head=\"T_"+BDMP[element]['Name']+"_1_rep\" kind=\"INPUT\" tail=\"P_"+BDMP[element]['Name']+"_1\"/>")
            file_object.write("      <arc head=\"P_"+BDMP[element]['Name']+"_3\" kind=\"OUTPUT\" tail=\"T_"+BDMP[element]['Name']+"_1_rep\"/>")
        file_object.write("      <arc head=\"t_"+BDMP[element]['Name']+"_0_good\" kind=\"INPUT\" tail=\"P_"+BDMP[element]['Name']+"_2\"/>")
        file_object.write("      <arc head=\"t_"+BDMP[element]['Name']+"_1_fail\" kind=\"INPUT\" tail=\"P_"+BDMP[element]['Name']+"_2\"/>")
        file_object.write("      <arc head=\"P_"+BDMP[element]['Name']+"_1\" kind=\"OUTPUT\" tail=\"t_"+BDMP[element]['Name']+"_1_fail\"/>")
        file_object.write("      <arc head=\"t_"+BDMP[element]['Name']+"_0_good\" kind=\"INPUT\" tail=\"P_"+BDMP[element]['Name']+"_3\"/>")
        file_object.write("      <arc head=\"t_"+BDMP[element]['Name']+"_1_fail\" kind=\"INPUT\" tail=\"P_"+BDMP[element]['Name']+"_3\"/>")
        file_object.write("      <arc head=\"P_"+BDMP[element]['Name']+"_3\" kind=\"OUTPUT\" tail=\"t_"+BDMP[element]['Name']+"_0_good\"/>")
        file_object.write("      <arc head=\"P_"+BDMP[element]['Name']+"_2\" kind=\"OUTPUT\" tail=\"t_"+BDMP[element]['Name']+"_0_good\"/>")
        file_object.write("      <arc head=\"P_"+BDMP[element]['Name']+"_2\" kind=\"OUTPUT\" tail=\"t_"+BDMP[element]['Name']+"_1_fail\"/>")
        file_object.write("      <arc head=\"P_"+BDMP[element]['Name']+"_0\" kind=\"OUTPUT\" tail=\"t_"+BDMP[element]['Name']+"_1_fail\"/>")
        file_object.write("      <arc head=\"P_"+BDMP[element]['Name']+"_0\" kind=\"OUTPUT\" tail=\"t_"+BDMP[element]['Name']+"_0_good\"/>")
        file_object.write("      <arc head=\"t_"+BDMP[element]['Name']+"_2\" kind=\"INPUT\" tail=\"P_"+BDMP[element]['Name']+"_0\"/>")
        file_object.write("      <arc head=\"t_"+BDMP[element]['Name']+"_2\" kind=\"INHIBITOR\" tail=\"P_"+BDMP[element]['Name']+"_2\"/>")
        file_object.write("      <arc head=\"t_"+BDMP[element]['Name']+"_1_fail\" kind=\"INHIBITOR\" tail=\"P_"+BDMP[element]['Name']+"_0\"/>")
        file_object.write("      <arc head=\"t_"+BDMP[element]['Name']+"_0_good\" kind=\"INHIBITOR\" tail=\"P_"+BDMP[element]['Name']+"_0\"/>")
        file_object.write("    </edges>")
        file_object.write("  </gspn>")
        file_object.write("</project>")
########### Writting Standby type Basic event######################################
################################################################################
################################################################################
def WritePleaf(BDMP, element, file_object,PRIORITY):
    #PlaceTags = {str("fail_" + BDMP[element]['Name']), str("act_" + BDMP[element]['module'])}
    file_object.write("<?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"no\"?>")
    file_object.write(
        "<!-- This project file has been saved by the New GreatSPN Editor, v.100 --><project name=\"New project\" version=\"121\">")
    file_object.write("  <gspn name=\"GSPN\" show-color-cmd=\"false\" show-fluid-cmd=\"false\">")
    file_object.write("    <nodes>")
    file_object.write(
        "      <place name=\"P_" + BDMP[element]['Name'] + "_1\" superposition-tags=\"fail_" + BDMP[element][
            'Name'] + "\" x=\"33.0\" y=\"12.0\"/>")
    file_object.write("      <transition delay=\"" + BDMP[element]['lambda'] + "\" name=\"T_" + BDMP[element][
        'Name'] + "_1\" nservers-x=\"0.5\" type=\"EXP\" x=\"26.55\" y=\"8.0\"/>")
    file_object.write(
        "      <place name=\"P_" + BDMP[element]['Name'] + "_2\" superposition-tags=\"act_" + BDMP[element][
            'module'] + "\" x=\"26.0\" y=\"22.0\"/>")
    file_object.write(
        "      <transition name=\"t_" + BDMP[element]['Name'] + "_0\" priority=\""+ PRIORITY['FAIL'] +"\" type=\"IMM\" weight=\"" + str(
            1) + "\" x=\"25.85\" y=\"15.0\"/>")

    file_object.write("      <place marking=\"1\" name=\"P_" + BDMP[element]['Name'] + "_3\" x=\"15.0\" y=\"13.0\"/>")
    file_object.write("      <place name=\"P_" + BDMP[element]['Name'] + "_0\" x=\"33.0\" y=\"19.0\"/>")
    file_object.write("      <transition name=\"t_" + BDMP[element]['Name'] + "_2\" rotation=\"1.5707963267948966\" priority=\""+ PRIORITY['REPAIR'] +"\" type=\"IMM\" x=\"33.85\" y=\"24.0\"/>")
    # coord = (14, 9)
    # WriteActivation(BDMP, element, file_object, coord)
    file_object.write("    </nodes>\n")
    file_object.write("    <edges>\n")
    file_object.write("      <arc head=\"T_" + BDMP[element]['Name'] + "_1\" kind=\"INPUT\" tail=\"P_" + BDMP[element][
        'Name'] + "_1\"/>")
    file_object.write("      <arc head=\"P_" + BDMP[element]['Name'] + "_3\" kind=\"OUTPUT\" tail=\"T_" + BDMP[element][
        'Name'] + "_1\"/>")
    file_object.write("      <arc head=\"t_" + BDMP[element]['Name'] + "_0\" kind=\"INPUT\" tail=\"P_" + BDMP[element][
        'Name'] + "_2\"/>")

    file_object.write("      <arc head=\"P_" + BDMP[element]['Name'] + "_1\" kind=\"OUTPUT\" tail=\"t_" + BDMP[element][
        'Name'] + "_0\"/>")
    file_object.write("      <arc head=\"t_" + BDMP[element]['Name'] + "_0\" kind=\"INPUT\" tail=\"P_" + BDMP[element][
        'Name'] + "_3\"/>")
    file_object.write("      <arc head=\"P_" + BDMP[element]['Name'] + "_2\" kind=\"OUTPUT\" tail=\"t_" + BDMP[element][
        'Name'] + "_0\"/>")


    file_object.write("      <arc head=\"P_" + BDMP[element]['Name'] + "_0\" kind=\"OUTPUT\" tail=\"t_" + BDMP[element][
        'Name'] + "_0\"/>")
    file_object.write("      <arc head=\"t_" + BDMP[element]['Name'] + "_2\" kind=\"INPUT\" tail=\"P_" + BDMP[element][
        'Name'] + "_0\"/>")
    file_object.write(
        "      <arc head=\"t_" + BDMP[element]['Name'] + "_2\" kind=\"INHIBITOR\" tail=\"P_" + BDMP[element][
            'Name'] + "_2\"/>")
    file_object.write(
        "      <arc head=\"t_" + BDMP[element]['Name'] + "_0\" kind=\"INHIBITOR\" tail=\"P_" + BDMP[element][
            'Name'] + "_0\"/>")
    file_object.write("    </edges>")
    file_object.write("  </gspn>")
    file_object.write("</project>")

########### Writting Multileaf type Basic event######################################
#Reminder: MAXIMAL PROGRESS ASSUMPTION IS USED HERE
#Note: Corner cases are missing in this implementation add them later if maturity of this code is required
################################################################################
################################################################################
def WriteMultileaf(BDMP, element, file_object,PRIORITY):
    #PlaceTags = {str("fail_" + BDMP[element]['Name']), str("act_" + BDMP[element]['module'])}
    if (BDMP[element]['Nr_being_repaired'] != '0'):
        sys.exit("Caution: Multileaf has \"No_being_reparied\" attribute >0. I am usnure about its semantics. Plese rechek multileaf parameters")

    Lambda = float(BDMP[element]['lambda'])
    Mu = float(BDMP[element]['mu'])
    total_items = int(BDMP[element]['Nr_items'])
    NoofRepairmen = int(BDMP[element]['Nr_repairmen'])
    failures_allowed = int(total_items) - int(BDMP[element]['Min_acceptable'])
    NoofFail = int(total_items) - int(BDMP[element]['Nr_ok'])
    #Preprocessing to comupute transition rates of each transition
    file_object.write("<?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"no\"?>\n")
    file_object.write("<!-- This project file has been saved by the New GreatSPN Editor, v.100 --><project name=\"New project\" version=\"121\">\n")
    file_object.write("  <gspn name=\"GSPN\" show-color-cmd=\"false\" show-fluid-cmd=\"false\">\n")
    file_object.write("    <nodes>\n")
    file_object.write("      <place name=\"P_" + BDMP[element][
        'Name'] + "_act\" superposition-tags=\"act_"+ BDMP[element]['module'] +"\" x=\""+str(6 + (4 * total_items))+"\" y=\"31.0\"/>\n")
    ################file_object.write("      <place name=\"P_" + BDMP[element]['Name'] + "_Fail\" superposition-tags=\"fail_" + BDMP[element]['Name'] + "\" x=\"" + str(6.0 + (5 * failures_allowed)) + "\" y=\"10.0\"/>\n")
    for loop_count in range(0, total_items+1):
        if loop_count != NoofFail:  #place token at number of fails ******T**** if 6 already failed
            file_object.write(
                "      <place name=\"P_" + BDMP[element]['Name'] + "_" + str(loop_count) + "_0\"  x=\"" + str(
                    6.0 + (10 * loop_count)) + "\" y=\"18.0\"/>\n")
        else:
            file_object.write("      <place marking=\"1\" name=\"P_" + BDMP[element]['Name'] + "_" + str(
                loop_count) + "_0\" x=\"" + str(6.0 + (10 * loop_count)) + "\" y=\"18.0\"/>\n")
        if loop_count == failures_allowed:
            if failures_allowed >= NoofFail: # place token in Multi fail place if given fails are already greater than given fails
                file_object.write("      <place  name=\"P_" + BDMP[element]['Name'] + "_Fail\" superposition-tags=\"fail_" + BDMP[element]['Name'] + "\" x=\"" + str(6.0 + (10 * loop_count)) + "\" y=\"10.0\"/>\n")
            else:
                file_object.write("      <place name=\"P_" + BDMP[element]['Name'] + "_" + str(loop_count) + "_0\" superposition-tags=\"fail_" + BDMP[element]['Name'] + "\" x=\"" + str(6.0 + (10 * loop_count)) + "\" y=\"18.0\"/>\n")
                file_object.write("      <place marking=\"1\" name=\"P_" + BDMP[element]['Name'] + "_Fail\" superposition-tags=\"fail_" +BDMP[element]['Name'] + "\" x=\"" + str(6.0 + (5 * failures_allowed)) + "\" y=\"10.0\"/>\n")
        if loop_count < total_items: #this check is required to avoid extra expnential events beyond last place
            if loop_count > NoofRepairmen: #control number of files
                file_object.write("      <transition delay=\"" + str(Mu * (total_items - (NoofRepairmen))) + "\" name=\"T_" +BDMP[element]['Name'] + "_" + str(loop_count + 1) + "_1\" nservers-x=\"0.5\" type=\"EXP\" x=\"" + str(
                        11.0 + (10 * loop_count)) + "\" y=\"14.0\"/>\n")
            else:
                file_object.write("      <transition delay=\"" + str(Mu *(loop_count+1) )+ "\" name=\"T_" + BDMP[element]['Name'] +"_"+ str(loop_count+1)+"_1\" nservers-x=\"0.5\" type=\"EXP\" x=\""+ str(11.0 + (10* loop_count))+"\" y=\"14.0\"/>\n")
            file_object.write("      <transition delay=\"" + str(Lambda * (total_items - (loop_count) ) )+ "\" name=\"T_" + BDMP[element]['Name'] +"_"+ str(loop_count+1)+"_0\" nservers-x=\"0.5\" type=\"EXP\" x=\""+ str(11.0 + (10* loop_count))+"\" y=\"23.0\"/>\n")

###file_object.write("<transition delay=\"" + BDMP[element]['standby_lambda'] + "1\" name=\"T_" + BDMP[element][
        #'Name'] + "_2\" nservers-x=\"0.5\" type=\"EXP\" x=\"8.55\" y=\"8.0\"/>\n")

    file_object.write("    </nodes>\n")
    file_object.write("    <edges>\n")
    for loop_count in range(0, total_items+1):
        if loop_count < total_items:  # this check is required to avoid extra edges beyon last transition
            file_object.write("      <arc head=\"T_" + BDMP[element]['Name'] +"_"+ str(loop_count+1)+"_0\" kind=\"INPUT\" tail=\"P_" + BDMP[element]['Name'] + "_act\"/>\n")
            file_object.write("      <arc head=\"P_" + BDMP[element]['Name'] + "_act\" kind=\"INPUT\" tail=\"T_" + BDMP[element]['Name'] +"_"+ str(loop_count+1)+"_0\"/>\n")
            file_object.write("      <arc head=\"T_" + BDMP[element]['Name'] + "_" + str(loop_count + 1) + "_0\" kind=\"INPUT\" tail=\"P_" + BDMP[element]['Name'] + "_" + str(loop_count) + "_0\"/>\n")
            file_object.write("      <arc head=\"P_" + BDMP[element]['Name'] + "_" + str(loop_count) + "_0\" kind=\"OUTPUT\" tail=\"T_" + BDMP[element]['Name'] + "_" + str(loop_count + 1) + "_1\"/>\n")
            file_object.write("      <arc head=\"P_" + BDMP[element]['Name'] + "_" + str(loop_count+1) + "_0\" kind=\"OUTPUT\" tail=\"T_" + BDMP[element]['Name'] + "_" + str(loop_count + 1) + "_0\"/>\n")
            file_object.write("      <arc head=\"T_" + BDMP[element]['Name'] + "_" + str(loop_count + 1) + "_1\" kind=\"INPUT\" tail=\"P_" + BDMP[element]['Name'] + "_" + str(loop_count+1) + "_0\"/>\n")
        if loop_count == failures_allowed:
            file_object.write("      <arc head=\"T_" + BDMP[element]['Name'] + "_" + str(loop_count+1) + "_1\" kind=\"OUTPUT\" tail=\"P_" + BDMP[element]['Name'] + "_Fail\"/>\n")
            file_object.write("      <arc head=\"P_" + BDMP[element]['Name'] + "_Fail\" kind=\"INPUT\" tail=\"T_" + BDMP[element]['Name'] + "_" + str(loop_count+1) + "_0\"/>\n")
    file_object.write("    </edges>\n")
    file_object.write("  </gspn>\n")
    file_object.write("</project>\n")




########### Writting failure behavior of top level event; UE_1##############################
################################################################################
################################################################################

def WriteUndesEvent(BDMP, element, file_object,PRIORITY):

    #PlaceTags = {str("fail_" + BDMP[element]['Name']), str("act_" + BDMP[element]['module'])}
    file_object.write("<?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"no\"?>\n")
    file_object.write("<!-- This project file has been saved by the New GreatSPN Editor, v.100 --><project name=\"New project\" version=\"121\">\n")
    file_object.write("  <gspn name=\"GSPN\" show-color-cmd=\"false\" show-fluid-cmd=\"false\">\n")
    file_object.write("    <nodes>\n")
    file_object.write("      <place marking=\"1\" name=\"P_"+BDMP[element]['Name']+"_0\" superposition-tags=\"work_"+BDMP[element]['Name'] +"\" x=\"5.0\" y=\"7.0\"/>\n")
    file_object.write("      <transition name=\"t_"+BDMP[element]['Name']+"_0\"  priority=\""+ PRIORITY['FAIL'] +"\" type=\"IMM\" x=\"9.85\" y=\"7.0\"/>\n")
    file_object.write("      <place name=\"FAIL\" x=\"14.0\" y=\"7.0\"/>\n")
    file_object.write("      <transition name=\"t_"+BDMP[element]['Name']+"_1\"  priority=\""+ PRIORITY['REPAIR'] +"\" type=\"IMM\" x=\"9.85\" y=\"3.0\"/>\n")
    file_object.write("      <place name=\"P_"+BDMP[element]['Name']+"_2\" superposition-tags=\"fail_"+BDMP[element]['Sons'][0] +"\" x=\"12.0\" y=\"12.0\"/>\n")
    #Root of BDMP is always active therefore we do not need to invoke WriteActivation for this element
    file_object.write("    </nodes>\n")
    file_object.write("    <edges>\n")
    file_object.write("      <arc head=\"t_"+BDMP[element]['Name']+"_0\" kind=\"INPUT\" tail=\"P_"+BDMP[element]['Name']+"_0\"/>\n")
    file_object.write("      <arc head=\"FAIL\" kind=\"OUTPUT\" tail=\"t_"+BDMP[element]['Name']+"_0\"/>\n")
    file_object.write("      <arc head=\"t_"+BDMP[element]['Name']+"_1\" kind=\"INPUT\" tail=\"FAIL\"/>\n")
    file_object.write("      <arc head=\"P_"+BDMP[element]['Name']+"_0\" kind=\"OUTPUT\" tail=\"t_"+BDMP[element]['Name']+"_1\"/>\n")
    file_object.write("      <arc head=\"t_"+BDMP[element]['Name']+"_0\" kind=\"INPUT\" tail=\"P_"+BDMP[element]['Name']+"_2\"/>\n")
    file_object.write("      <arc head=\"t_"+BDMP[element]['Name']+"_1\" kind=\"INHIBITOR\" tail=\"P_"+BDMP[element]['Name']+"_2\"/>\n")
    file_object.write("      <arc head=\"P_"+BDMP[element]['Name']+"_2\" kind=\"OUTPUT\" tail=\"t_"+BDMP[element]['Name']+"_0\"/>\n")
    file_object.write("    </edges>\n")
    file_object.write("  </gspn>\n")
    file_object.write("</project>\n")

########### Writting failure behavior of AND Gate##############################
################################################################################
################################################################################
def WriteAndGate(BDMP, element, file_object,PRIORITY):
    #PlaceTags = {str("fail_" + BDMP[element]['Name']), str("act_" + BDMP[element]['module'])}
    gate_input_size = len(BDMP[element]['Sons'])
    file_object.write("<?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"no\"?>\n")
    file_object.write("<!-- This project file has been saved by the New GreatSPN Editor, v.100 --><project name=\"New project\" version=\"121\">\n")
    file_object.write("  <gspn name=\"GSPN\" show-color-cmd=\"false\" show-fluid-cmd=\"false\">\n")
    file_object.write("    <nodes>\n")
    file_object.write("      <place marking=\"1\" name=\"P_"+BDMP[element]['Name']+"_0\" superposition-tags=\"work_"+BDMP[element]['Name']+"\" x=\"4.0\" y=\"9.0\"/>\n")
    file_object.write("      <transition name=\"t_"+BDMP[element]['Name']+"_0\"  priority=\""+ PRIORITY['FAIL'] +"\" type=\"IMM\" x=\"8.85\" y=\"12.0\"/>\n")
    for count in range(0,gate_input_size):
        file_object.write("      <place name=\"P_"+BDMP[element]['Name']+"_"+str(count+1)+"\" superposition-tags=\"fail_"+BDMP[element]['Sons'][count]+"\" x=\""+str(4+8*(count+1))+"\" y=\"16.0\"/>\n")
        if PRIORITY['Repairable'] == 'True':
            file_object.write("      <transition name=\"t_"+BDMP[element]['Name']+"_"+str(count+1)+"\"  priority=\""+ PRIORITY['REPAIR'] +"\" type=\"IMM\" x=\""+str(4+8*(count+1))+"\" y=\"8.0\"/>\n")
    file_object.write("      <place name=\"P_"+BDMP[element]['Name']+"_" + str(gate_input_size + 2) + "\" superposition-tags=\"fail_" + BDMP[element]['Name'] + "\" x=\"" + str(4 + 8 * (gate_input_size + 2)) + "\" y=\"9.0\"/>\n")
    #coord = (4 + 8 * (gate_input_size + 4), 9)
    #WriteActivation(BDMP, element, file_object, coord)
    file_object.write("    </nodes>\n")
    file_object.write("    <edges>\n")
    file_object.write("      <arc head=\"t_"+BDMP[element]['Name']+"_0\" kind=\"INPUT\" tail=\"P_"+BDMP[element]['Name']+"_0\"/>\n")
    file_object.write("      <arc head=\"P_"+BDMP[element]['Name']+"_"+str(gate_input_size+2)+"\" kind=\"OUTPUT\" tail=\"t_"+BDMP[element]['Name']+"_0\"/>\n")
    for count in range(0,gate_input_size):
        file_object.write("      <arc head=\"t_"+BDMP[element]['Name']+"_0\" kind=\"INPUT\" tail=\"P_"+BDMP[element]['Name']+"_"+str(count+1)+"\"/>\n")
        file_object.write("      <arc head=\"P_"+BDMP[element]['Name']+"_"+str(count+1)+"\" kind=\"OUTPUT\" tail=\"t_"+BDMP[element]['Name']+"_0\"/>\n")
        if PRIORITY['Repairable'] == 'True':
            file_object.write("      <arc head=\"t_"+BDMP[element]['Name']+"_"+str(count+1)+"\" kind=\"INHIBITOR\" tail=\"P_"+BDMP[element]['Name']+"_"+str(count+1)+"\"/>\n")
            file_object.write("      <arc head=\"t_"+BDMP[element]['Name']+"_"+str(count+1)+"\" kind=\"INPUT\" tail=\"P_"+BDMP[element]['Name']+"_"+str(gate_input_size+2)+"\"/>\n")
            file_object.write("      <arc head=\"P_"+BDMP[element]['Name']+"_0\" kind=\"OUTPUT\" tail=\"t_"+BDMP[element]['Name']+"_"+str(count+1)+"\"/>\n")
    file_object.write("    </edges>\n")
    file_object.write("  </gspn>\n")
    file_object.write("</project>\n")



########### Writting failure behavior of OR Gate##############################
################################################################################
################################################################################

def WriteOrGate(BDMP, element, file_object,PRIORITY):
    #PlaceTags = {str("fail_" + BDMP[element]['Name']), str("act_" + BDMP[element]['module'])}
    ########################Failure Mecanism
    gate_input_size = len(BDMP[element]['Sons'])
    file_object.write("<?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"no\"?>\n")
    file_object.write(
        "<!-- This project file has been saved by the New GreatSPN Editor, v.100 --><project name=\"New project\" version=\"121\">\n")
    file_object.write("  <gspn name=\"GSPN\" show-color-cmd=\"false\" show-fluid-cmd=\"false\">\n")
    file_object.write("    <nodes>\n")
    file_object.write("      <place marking=\"1\" name=\"P_"+BDMP[element]['Name']+"_0\" superposition-tags=\"work_" + BDMP[element][
        'Name'] + "\" x=\"4.0\" y=\"9.0\"/>\n")
    if PRIORITY['Repairable'] == 'True':
        file_object.write("      <transition name=\"t_"+BDMP[element]['Name']+"_0\"  priority=\""+ PRIORITY['REPAIR'] +"\" type=\"IMM\" x=\"8.85\" y=\"12.0\"/>\n")
    for count in range(0, gate_input_size):
        file_object.write(
            "      <place name=\"P_"+BDMP[element]['Name']+"_" + str(count + 1) + "\" superposition-tags=\"fail_" + BDMP[element]['Sons'][
                count] + "\" x=\"" + str(4 + 8 * (count + 1)) + "\" y=\"16.0\"/>\n")
        file_object.write("      <transition name=\"t_"+BDMP[element]['Name']+"_" + str(count + 1) + "\"  priority=\""+ PRIORITY['FAIL'] +"\" type=\"IMM\" x=\"" + str(
            4 + 8 * (count + 1)) + "\" y=\"8.0\"/>\n")
    file_object.write("<place name=\"P_"+BDMP[element]['Name']+"_" + str(gate_input_size + 2) + "\" superposition-tags=\"fail_" + BDMP[element][
            'Name'] + "\" x=\"" + str(4 + 8 * (gate_input_size + 2)) + "\" y=\"9.0\"/>\n")
    #coord = (4 + 8 * (gate_input_size + 4), 9)
    #WriteActivation(BDMP, element, file_object, coord)
    file_object.write("    </nodes>\n")
    file_object.write("    <edges>\n")
    if PRIORITY['Repairable'] == 'True':
        file_object.write("      <arc head=\"P_"+BDMP[element]['Name']+"_0\" kind=\"OUTPUT\" tail=\"t_"+BDMP[element]['Name']+"_0\"/>\n")
        file_object.write("      <arc head=\"t_"+BDMP[element]['Name']+"_0\" kind=\"INPUT\" tail=\"P_"+BDMP[element]['Name']+"_" + str(gate_input_size + 2) + "\"/>\n")
    for count in range(0, gate_input_size):
        if PRIORITY['Repairable'] == 'True':
            file_object.write("      <arc head=\"t_"+BDMP[element]['Name']+"_0\" kind=\"INHIBITOR\" tail=\"P_"+BDMP[element]['Name']+"_" + str(count + 1) + "\"/>\n")
        file_object.write("      <arc head=\"t_"+BDMP[element]['Name']+"_" + str(count + 1) + "\" kind=\"INPUT\" tail=\"P_"+BDMP[element]['Name']+"_" + str(count + 1) + "\"/>\n")
        file_object.write("      <arc head=\"P_" +BDMP[element]['Name'] + "_" + str(count + 1) + "\" kind=\"OUTPUT\" tail=\"t_" + BDMP[element]['Name'] + "_" + str(count + 1) + "\"/>\n")
        file_object.write("      <arc head=\"P_"+BDMP[element]['Name']+"_" + str(gate_input_size + 2) + "\" kind=\"OUTPUT\" tail=\"t_"+BDMP[element]['Name']+"_" + str(count + 1) + "\"/>\n")
        file_object.write("      <arc head=\"t_"+BDMP[element]['Name']+"_" + str(count + 1) + "\" kind=\"INPUT\" tail=\"P_"+BDMP[element]['Name']+"_0\"/>\n")
    file_object.write("    </edges>\n")
    file_object.write("  </gspn>\n")
    file_object.write("</project>\n")

########### Writting failure behavior of K out of N (a.k.a:Vot gate)##############################
################################################################################
################################################################################

def WriteVOTGate(BDMP, element, file_object,PRIORITY):
    #PlaceTags = {str("fail_" + BDMP[element]['Name']), str("act_" + BDMP[element]['module'])}
    ########################Failure Mecanism
    gate_input_size = len(BDMP[element]['Sons'])
    file_object.write("<?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"no\"?>\n")
    file_object.write(
        "<!-- This project file has been saved by the New GreatSPN Editor, v.100 --><project name=\"New project\" version=\"121\">\n")
    file_object.write("  <gspn name=\"GSPN\" show-color-cmd=\"false\" show-fluid-cmd=\"false\">\n")
    file_object.write("    <nodes>\n")
    file_object.write("      <place marking=\"1\" name=\"P_"+BDMP[element]['Name']+"_0\" superposition-tags=\"work_" + BDMP[element][
        'Name'] + "\" x=\"4.0\" y=\"9.0\"/>\n")
    file_object.write("      <transition name=\"t_"+BDMP[element]['Name']+"_0\"  priority=\""+ PRIORITY['FAIL'] +"\" type=\"IMM\" x=\"8.85\" y=\"6.0\"/>\n")
    file_object.write("      <transition name=\"t_" + BDMP[element]['Name']+ "_"+str((gate_input_size + 3)) + "_0\"  priority=\""+ PRIORITY['FAIL'] +"\" type=\"IMM\" x=\"8.85\" y=\"2.0\"/>\n")
    for count in range(0, gate_input_size):
        file_object.write("      <place marking=\"1\" name=\"P_" + BDMP[element]['Name'] + "_" + str(count + 1) + "_0\" x=\"" + str(4 + 8 * (count + 1)) + "\" y=\"16.0\"/>\n")
        file_object.write(
            "      <place name=\"P_"+BDMP[element]['Name']+"_" + str(count + 1) + "_1\" superposition-tags=\"fail_" + BDMP[element]['Sons'][
                count] + "\" x=\"" + str(4 + 8 * (count + 1)) + "\" y=\"24.0\"/>\n")

        file_object.write("      <transition name=\"t_"+BDMP[element]['Name']+"_" + str(count + 1) + "\"  priority=\""+ PRIORITY['FAIL'] +"\" type=\"IMM\" x=\"" + str(
            4 + 8 * (count + 1)) + "\" y=\"20.0\"/>\n")
        file_object.write(
            "      <transition name=\"t_" + BDMP[element]['Name'] + "_" + str(count + 1) + "_1\"  priority=\""+ PRIORITY['FAIL'] +"\" type=\"IMM\" x=\"" + str(
                4 + 8 * (count + 1)) + "\" y=\"10.0\"/>\n")
    file_object.write("<place name=\"P_"+BDMP[element]['Name']+"_" + str(gate_input_size + 2) + "\" x=\"" + str(4 + 8 * (gate_input_size + 2)) + "\" y=\"9.0\"/>\n")
    file_object.write(
        "<place name=\"P_" + BDMP[element]['Name'] + "_" + str(gate_input_size + 3) + "\" superposition-tags=\"fail_" +
        BDMP[element]['Name'] + "\" x=\"" + str(13) + "\" y=\"2.0\"/>\n")
    #coord = (15, 16)
    #WriteActivation(BDMP, element, file_object, coord)
    file_object.write("    </nodes>\n")
    file_object.write("    <edges>\n")
    file_object.write("      <arc head=\"t_"+BDMP[element]['Name']+"_0\" kind=\"INPUT\" tail=\"P_"+BDMP[element]['Name']+"_0\"/>\n")
    file_object.write("      <arc head=\"t_"+BDMP[element]['Name']+"_0\" kind=\"INPUT\" mult=\"" +BDMP[element]['K']+ "\" tail=\"P_"+BDMP[element]['Name']+"_" + str(gate_input_size + 2) + "\"/>\n")
    file_object.write("      <arc head=\"t_" + BDMP[element]['Name'] +"_" +str(gate_input_size + 3) + "_0\" kind=\"INHIBITOR\" mult=\"" + BDMP[element]['K'] + "\" tail=\"P_" + BDMP[element]['Name'] + "_" + str(gate_input_size + 2) + "\"/>\n")
    file_object.write("      <arc head=\"P_" + BDMP[element]['Name'] + "_" + str(gate_input_size + 2) + "\" kind=\"OUTPUT\" mult=\"" + BDMP[element]['K'] + "\" tail=\"t_" + BDMP[element]['Name'] + "_0\"/>\n")
    file_object.write("      <arc head=\"P_" + BDMP[element]['Name'] + "_" + str(gate_input_size + 3) + "\" kind=\"OUTPUT\" tail=\"t_" + BDMP[element]['Name'] + "_0\"/>\n")
    file_object.write("      <arc head=\"t_" + BDMP[element]['Name'] +"_" +str(gate_input_size + 3) +"_0\" kind=\"INPUT\" tail=\"P_" + BDMP[element]['Name'] + "_" + str(gate_input_size + 3) + "\"/>\n")
    file_object.write("      <arc head=\"P_"+BDMP[element]['Name']+"_0\" kind=\"OUTPUT\" tail=\"t_" + BDMP[element]['Name'] + "_" + str(gate_input_size + 3) + "_0\"/>\n")
    for count in range(0, gate_input_size):
        file_object.write("      <arc head=\"t_" + BDMP[element]['Name'] + "_" + str(count + 1) + "_1\" kind=\"INHIBITOR\" tail=\"P_"+BDMP[element]['Name']+"_" + str(count + 1) + "_1\"/>\n")
        file_object.write("      <arc head=\"t_" + BDMP[element]['Name'] + "_" + str(count + 1) + "\" kind=\"INPUT\" tail=\"P_" +BDMP[element]['Name'] + "_" + str(count + 1) + "_0\"/>\n")
        file_object.write("      <arc head=\"P_"+BDMP[element]['Name']+"_" + str(gate_input_size + 2) + "\" kind=\"OUTPUT\" tail=\"t_"+BDMP[element]['Name']+"_" + str(count + 1) + "\"/>\n")
        file_object.write("      <arc head=\"t_" + BDMP[element]['Name'] + "_" + str(count + 1) + "_1\" kind=\"INPUT\" tail=\"P_" + BDMP[element]['Name'] + "_" + str(gate_input_size + 2) + "\"/>\n")
        file_object.write("<arc head=\"t_" + BDMP[element]['Name'] + "_" + str(count + 1) + "\" kind=\"INPUT\" tail=\"P_" +BDMP[element]['Name'] + "_" + str(count + 1) + "_1\"/>\n")
        file_object.write("<arc head=\"P_" +BDMP[element]['Name'] + "_" + str(count + 1) + "_0\" kind=\"OUTPUT\" tail=\"t_" + BDMP[element]['Name'] + "_" + str(count + 1) + "_1\"/>\n")
        file_object.write("<arc head=\"t_" +BDMP[element]['Name'] + "_" + str(count + 1) + "_1\" kind=\"INHIBITOR\" tail=\"P_" + BDMP[element]['Name'] + "_" + str(count + 1) + "_0\"/>\n")
        file_object.write("      <arc head=\"P_"+BDMP[element]['Name']+"_"+str(count + 1) + "_1\" kind=\"OUTPUT\" tail=\"t_"+BDMP[element]['Name']+"_" + str(count + 1) + "\"/>\n")
    file_object.write("    </edges>\n")
    file_object.write("  </gspn>\n")
    file_object.write("</project>\n")
########### Writting failure behavior of PAND Gate##############################
################################################################################
################################################################################


def WritePandGate(BDMP, element, file_obj,PRIORITY):
    file_obj.write("<?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"no\"?>\n")
    file_obj.write("<!-- This project file has been saved by the New GreatSPN Editor, v.100 --><project name=\"New project\" version=\"121\">\n")
    file_obj.write("  <gspn name=\"GSPN\" show-color-cmd=\"false\" show-fluid-cmd=\"false\">\n")
    file_obj.write("    <nodes>\n")
    file_obj.write("      <place marking=\"1\" name=\"P_"+BDMP[element]['Name']+"_0\" x=\"1.0\" y=\"4.0\"/>\n")
    file_obj.write("      <place name=\"P_"+BDMP[element]['Name']+"_1\" x=\"9.0\" y=\"9.0\"/>\n")
    file_obj.write("      <place name=\"P_"+BDMP[element]['Name']+"_2\" superposition-tags=\"fail_" + BDMP[element]['Name'] + "\" x=\"15.0\" y=\"4.0\"/>\n")
    file_obj.write("      <place name=\"P_"+BDMP[element]['Name']+"_3\" superposition-tags=\"fail_" + BDMP[element]['Sons'][0] + "\" x=\"6.0\" y=\"14.0\"/>\n")
    file_obj.write("      <place name=\"P_"+BDMP[element]['Name']+"_4\" superposition-tags=\"fail_" + BDMP[element]['Sons'][1] + "\" x=\"14.0\" y=\"14.0\"/>\n")
    file_obj.write("      <transition name=\"t_"+BDMP[element]['Name']+"_0\"  priority=\""+ PRIORITY['FAIL'] +"\" type=\"IMM\" x=\"4.85\" y=\"9.0\"/>\n")
    file_obj.write("      <transition name=\"t_"+BDMP[element]['Name']+"_1\"  priority=\""+ PRIORITY['FAIL'] +"\" type=\"IMM\" x=\"15.85\" y=\"9.0\"/>\n")
    file_obj.write("      <transition name=\"t_"+BDMP[element]['Name']+"_2\"  priority=\""+ PRIORITY['FAIL'] +"\" type=\"IMM\" x=\"12.85\" y=\"7.0\"/>\n")
    file_obj.write("      <transition name=\"t_"+BDMP[element]['Name']+"_3\"  priority=\""+ PRIORITY['FAIL'] +"\" type=\"IMM\" x=\"6.85\" y=\"3.0\"/>\n")
    file_obj.write("      <transition name=\"t_"+BDMP[element]['Name']+"_4\"  priority=\""+ PRIORITY['FAIL'] +"\" type=\"IMM\" x=\"7.85\" y=\"7.0\"/>\n")
    #coord = (20, 9)
    #WriteActivation(BDMP, element, file_object, coord)
    file_obj.write("    </nodes>\n")
    file_obj.write("    <edges>\n")
    file_obj.write("      <arc head=\"t_"+BDMP[element]['Name']+"_0\" kind=\"INPUT\" tail=\"P_"+BDMP[element]['Name']+"_3\"/>\n")
    file_obj.write("      <arc head=\"P_"+BDMP[element]['Name']+"_3\" kind=\"OUTPUT\" tail=\"t_"+BDMP[element]['Name']+"_0\"/>\n")
    file_obj.write("      <arc head=\"t_"+BDMP[element]['Name']+"_1\" kind=\"INPUT\" tail=\"P_"+BDMP[element]['Name']+"_4\"/>\n")
    file_obj.write("      <arc head=\"P_"+BDMP[element]['Name']+"_4\" kind=\"OUTPUT\" tail=\"t_"+BDMP[element]['Name']+"_1\"/>\n")
    file_obj.write("      <arc head=\"t_"+BDMP[element]['Name']+"_0\" kind=\"INHIBITOR\" tail=\"P_"+BDMP[element]['Name']+"_4\"/>\n")
    file_obj.write("      <arc head=\"P_"+BDMP[element]['Name']+"_1\" kind=\"OUTPUT\" tail=\"t_"+BDMP[element]['Name']+"_0\"/>\n")
    file_obj.write("      <arc head=\"t_"+BDMP[element]['Name']+"_0\" kind=\"INPUT\" tail=\"P_"+BDMP[element]['Name']+"_0\"/>\n")
    file_obj.write("      <arc head=\"t_"+BDMP[element]['Name']+"_3\" kind=\"INPUT\" tail=\"P_"+BDMP[element]['Name']+"_2\"/>\n")
    file_obj.write("      <arc head=\"t_"+BDMP[element]['Name']+"_3\" kind=\"INHIBITOR\" tail=\"P_"+BDMP[element]['Name']+"_3\"/>\n")
    file_obj.write("      <arc head=\"P_"+BDMP[element]['Name']+"_0\" kind=\"OUTPUT\" tail=\"t_"+BDMP[element]['Name']+"_3\"/>\n")
    file_obj.write("      <arc head=\"t_"+BDMP[element]['Name']+"_1\" kind=\"INPUT\" tail=\"P_"+BDMP[element]['Name']+"_1\"/>\n")
    file_obj.write("      <arc head=\"P_"+BDMP[element]['Name']+"_2\" kind=\"OUTPUT\" tail=\"t_"+BDMP[element]['Name']+"_1\"/>\n")
    file_obj.write("      <arc head=\"t_"+BDMP[element]['Name']+"_4\" kind=\"INPUT\" tail=\"P_"+BDMP[element]['Name']+"_1\"/>\n")
    file_obj.write("      <arc head=\"t_"+BDMP[element]['Name']+"_4\" kind=\"INHIBITOR\" tail=\"P_"+BDMP[element]['Name']+"_3\"/>\n")
    file_obj.write("      <arc head=\"P_"+BDMP[element]['Name']+"_0\" kind=\"OUTPUT\" tail=\"t_"+BDMP[element]['Name']+"_4\"/>\n")
    file_obj.write("      <arc head=\"t_"+BDMP[element]['Name']+"_2\" kind=\"INHIBITOR\" tail=\"P_"+BDMP[element]['Name']+"_4\"/>\n")
    file_obj.write("      <arc head=\"t_"+BDMP[element]['Name']+"_2\" kind=\"INPUT\" tail=\"P_"+BDMP[element]['Name']+"_2\"/>\n")
    file_obj.write("      <arc head=\"P_"+BDMP[element]['Name']+"_1\" kind=\"OUTPUT\" tail=\"t_"+BDMP[element]['Name']+"_2\"/>\n")
    file_obj.write("    </edges>\n")
    file_obj.write("  </gspn>\n")
    file_obj.write("</project>\n")
    # Grey Arrow Trigger
def ActivateInvTrig(BDMP, element, file_object,PRIORITY):
    coord=(0,0)
    # if compoentnn is not inherited by any element and it is still triggered by some elemnt then add this case here
    #if BDMP[element]['Fathers'] == 'Null':
    #   print("I am here")
    parent_module = set()
    for parent_cnt in range(0, len(BDMP[element]['Fathers'])):
        parent_module.add(BDMP[BDMP[element]['Fathers'][parent_cnt]]['module'])  # only distinct modules are added
    parent_module = list(parent_module)
    gate_parents_size = len(parent_module)

    file_object.write("<?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"no\"?>\n")
    file_object.write(
        "<!-- This project file has been saved by the New GreatSPN Editor, v.100 --><project name=\"New project\" version=\"121\">\n")
    file_object.write("  <gspn name=\"GSPN\" show-color-cmd=\"false\" show-fluid-cmd=\"false\">\n")
    file_object.write("    <nodes>\n")
    file_object.write(
        "      <place marking=\"1\" name=\"P_" + BDMP[element]['Name'] + "_trig_0\" superposition-tags=\"dact_" +
        BDMP[element]['module'] + "\" x=\"4.0\" y=\"9.0\"/>\n")
    file_object.write(
        "      <transition name=\"t_" + BDMP[element]['Name'] + "_trig_0\" priority=\""+ PRIORITY['DEACTIVE'] +"\" type=\"IMM\" x=\"" + str(
            coord[0] + 8.85) + "\" y=\"12.0\"/>\n")
    file_object.write(
        "      <transition name=\"t_" + BDMP[element]['Name'] + "_trig_1\" priority=\""+ PRIORITY['DEACTIVE'] +"\" type=\"IMM\" x=\"10\" y=\"6.0\"/>\n")
    for count in range(0, gate_parents_size):
        file_object.write(
            "      <place name=\"P_" + BDMP[element]['Name'] + "_" + str(
                count + 1) + "_trig\" superposition-tags=\"act_" +
            parent_module[count] + "\" x=\"" + str(coord[0] + 4 + 8 * (count + 1)) + "\" y=\"16.0\"/>\n")
        file_object.write(
            "      <transition name=\"t_" + BDMP[element]['Name'] + "_" + str(
                count + 1) + "_trig\" priority=\""+ PRIORITY['ACTIVE'] +"\" type=\"IMM\" x=\"" + str(
                coord[0] + 4 + 8 * (count + 1)) + "\" y=\"8.0\"/>\n")
    file_object.write("<place name=\"P_" + BDMP[element]['Name'] + "_" + str(
        gate_parents_size + 1) + "_trig\" superposition-tags=\"fail_" +
                      BDMP[element]['Triggered_by'] + "\" x=\"" + str(
        coord[0] + 12 * gate_parents_size / 2) + "\" y=\"2.0\"/>\n")
    file_object.write("<place name=\"P_" + BDMP[element]['Name'] + "_" + str(
        gate_parents_size + 2) + "_trig\" superposition-tags=\"act_" +
                      BDMP[element]['module'] + "\" x=\"" + str(
        coord[0] + 4 + 8 * (gate_parents_size + 2)) + "\" y=\"9.0\"/>\n")
    file_object.write("    </nodes>\n")
    file_object.write("    <edges>\n")
    file_object.write(
        "      <arc head=\"P_" + BDMP[element]['Name'] + "_trig_0\" kind=\"OUTPUT\" tail=\"t_" + BDMP[element][
            'Name'] + "_trig_0\"/>\n")
    file_object.write(
        "      <arc head=\"t_" + BDMP[element]['Name'] + "_trig_0\" kind=\"INPUT\" tail=\"P_" + BDMP[element][
            'Name'] + "_" + str(gate_parents_size + 2) + "_trig\"/>\n")
    file_object.write(
        "      <arc head=\"P_" + BDMP[element]['Name'] + "_trig_0\" kind=\"INPUT\" tail=\"t_" + BDMP[element][
            'Name'] + "_trig_1\"/>\n")
    file_object.write(
        "      <arc head=\"t_" + BDMP[element]['Name'] + "_trig_1\" kind=\"OUTPUT\" tail=\"P_" + BDMP[element][
            'Name'] + "_" + str(gate_parents_size + 2) + "_trig\"/>\n")
    file_object.write(
        "      <arc head=\"t_" + BDMP[element]['Name'] + "_trig_1\" kind=\"INPUT\" tail=\"P_" + BDMP[element][
            'Name'] + "_" + str(gate_parents_size + 1) + "_trig\"/>\n")
    file_object.write(
        "      <arc head=\"P_" + BDMP[element][
            'Name'] + "_" + str(gate_parents_size + 1) + "_trig\" kind=\"OUTPUT\" tail=\"t_" + BDMP[element]['Name'] + "_trig_1\"/>\n")
    for count in range(0, gate_parents_size):
        file_object.write(
            "      <arc head=\"t_" + BDMP[element]['Name'] + "_" + str(
                count + 1) + "_trig\" kind=\"INHIBITOR\" tail=\"P_" + BDMP[element][
                'Name'] + "_" + str(gate_parents_size + 1) + "_trig\"/>\n")
        file_object.write(
            "      <arc head=\"t_" + BDMP[element]['Name'] + "_trig_0\" kind=\"INHIBITOR\" tail=\"P_" + BDMP[element][
                'Name'] + "_" + str(count + 1) + "_trig\"/>\n")
        file_object.write(
            "      <arc head=\"t_" + BDMP[element]['Name'] + "_" + str(count + 1) + "_trig\" kind=\"INPUT\" tail=\"P_" +
            BDMP[element]['Name'] + "_" + str(count + 1) + "_trig\"/>\n")
        file_object.write(
            "      <arc head=\"P_" + BDMP[element]['Name'] + "_" + str(
                count + 1) + "_trig\" kind=\"OUTPUT\" tail=\"t_" +
            BDMP[element]['Name'] + "_" + str(count + 1) + "_trig\"/>\n")
        file_object.write("      <arc head=\"P_" + BDMP[element]['Name'] + "_" + str(
            gate_parents_size + 2) + "_trig\" kind=\"OUTPUT\" tail=\"t_" + BDMP[element]['Name'] + "_" + str(
            count + 1) + "_trig\"/>\n")
        file_object.write(
            "      <arc head=\"t_" + BDMP[element]['Name'] + "_" + str(count + 1) + "_trig\" kind=\"INPUT\" tail=\"P_" +
            BDMP[element]['Name'] + "_trig_0\"/>\n")
    file_object.write("    </edges>\n")
    file_object.write("  </gspn>\n")
    file_object.write("</project>\n")
def ActivateSimpleTrig(BDMP, element, file_object,coord,PRIORITY):
    # if compoentnn is not inherited by any element and it is still triggered by some elemnt then add this case here

    parent_module = set()
    for parent_cnt in range(0, len(BDMP[element]['Fathers'])):
        parent_module.add(BDMP[BDMP[element]['Fathers'][parent_cnt]]['module'])  # only distinct modules are added
    parent_module = list(parent_module)
    ########################Failure Mecanism
    gate_parents_size = len(parent_module) #len(BDMP[element]['Fathers'])
    file_object.write("<?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"no\"?>\n")
    file_object.write(
        "<!-- This project file has been saved by the New GreatSPN Editor, v.100 --><project name=\"New project\" version=\"121\">\n")
    file_object.write("  <gspn name=\"GSPN\" show-color-cmd=\"false\" show-fluid-cmd=\"false\">\n")
    file_object.write("    <nodes>\n")
    file_object.write("      <place marking=\"1\" name=\"P_" + BDMP[element]['Name'] + "_trig_0\" superposition-tags=\"dact_" + BDMP[element]['module'] + "\" x=\"4.0\" y=\"9.0\"/>\n")
    file_object.write(
        "      <transition name=\"t_" + BDMP[element]['Name'] + "_trig_0\" priority=\""+ PRIORITY['DEACTIVE'] +"\" type=\"IMM\" x=\""+str(coord[0] +8.85)+"\" y=\"12.0\"/>\n")
    file_object.write("      <transition name=\"t_" + BDMP[element]['Name'] + "_trig_1\" priority=\""+ PRIORITY['DEACTIVE'] +"\" type=\"IMM\" x=\"10\" y=\"6.0\"/>\n")
    for count in range(0, gate_parents_size):
        file_object.write(
            "      <place name=\"P_" + BDMP[element]['Name'] + "_" + str(count + 1) + "_trig\" superposition-tags=\"act_" +
            parent_module[count] + "\" x=\"" + str(coord[0] + 4 + 8 * (count + 1)) + "\" y=\"16.0\"/>\n")
        file_object.write(
            #"      <transition name=\"t_" + BDMP[element]['Name'] + "_" + str(count + 1) + "_trig\" priority=\""+ PRIORITY['ACTIVE'] +"\" type=\"IMM\" x=\"" + str(
            #    coord[0] + 4 + 8 * (count + 1)) + "\" y=\"8.0\"/>\n")
            "      <transition name=\"t_" + BDMP[element]['Name'] + "_" + str(count + 1) + "_trig\" priority=\"" + BDMP[element]['module'] + "\" type=\"IMM\" x=\"" + str(
            coord[0] + 4 + 8 * (count + 1)) + "\" y=\"8.0\"/>\n")
    file_object.write("<place name=\"P_" + BDMP[element]['Name'] + "_" + str(gate_parents_size + 1) + "_trig\" superposition-tags=\"fail_" +
                      BDMP[element]['Triggered_by'] + "\" x=\""+str(coord[0]+12* gate_parents_size/2 )+"\" y=\"2.0\"/>\n")
    file_object.write("<place name=\"P_" + BDMP[element]['Name'] + "_" + str(gate_parents_size + 2) + "_trig\" superposition-tags=\"act_" +
        BDMP[element]['module'] + "\" x=\"" + str(coord[0] + 4 + 8 * (gate_parents_size + 2)) + "\" y=\"9.0\"/>\n")
    file_object.write("    </nodes>\n")
    file_object.write("    <edges>\n")
    file_object.write("      <arc head=\"P_" + BDMP[element]['Name'] + "_trig_0\" kind=\"OUTPUT\" tail=\"t_" + BDMP[element][
        'Name'] + "_trig_0\"/>\n")
    file_object.write("      <arc head=\"t_" + BDMP[element]['Name'] + "_trig_0\" kind=\"INPUT\" tail=\"P_" + BDMP[element][
        'Name'] + "_" + str(gate_parents_size + 2) + "_trig\"/>\n")
    file_object.write("      <arc head=\"P_" + BDMP[element]['Name'] + "_trig_0\" kind=\"INPUT\" tail=\"t_" + BDMP[element][
            'Name'] + "_trig_1\"/>\n")
    file_object.write("      <arc head=\"t_" + BDMP[element]['Name'] + "_trig_1\" kind=\"OUTPUT\" tail=\"P_" + BDMP[element][
            'Name'] + "_" + str(gate_parents_size + 2) + "_trig\"/>\n")
    file_object.write(
        "      <arc head=\"t_" + BDMP[element]['Name'] + "_trig_1\" kind=\"INHIBITOR\" tail=\"P_" + BDMP[element][
            'Name'] + "_" + str(gate_parents_size + 1) + "_trig\"/>\n")
    for count in range(0, gate_parents_size):
        file_object.write(
            "      <arc head=\"t_" + BDMP[element]['Name'] + "_" + str(count + 1) + "_trig\" kind=\"OUTPUT\" tail=\"P_" + BDMP[element][
                'Name'] + "_" + str(gate_parents_size + 1) + "_trig\"/>\n")
        file_object.write("      <arc head=\"P_" + BDMP[element][
                'Name'] + "_" + str(gate_parents_size + 1) + "_trig\" kind=\"INPUT\" tail=\"t_" + BDMP[element]['Name'] + "_" + str(count + 1) + "_trig\"/>\n")
        file_object.write(
            "      <arc head=\"t_" + BDMP[element]['Name'] + "_trig_0\" kind=\"INHIBITOR\" tail=\"P_" + BDMP[element][
                'Name'] + "_" + str(count + 1) + "_trig\"/>\n")
        file_object.write(
            "      <arc head=\"t_" + BDMP[element]['Name'] + "_" + str(count + 1) + "_trig\" kind=\"INPUT\" tail=\"P_" +
            BDMP[element]['Name'] + "_" + str(count + 1) + "_trig\"/>\n")
        file_object.write(
            "      <arc head=\"P_" + BDMP[element]['Name'] + "_" + str(count + 1) + "_trig\" kind=\"OUTPUT\" tail=\"t_" +
            BDMP[element]['Name'] + "_" + str(count + 1) + "_trig\"/>\n")
        file_object.write("      <arc head=\"P_" + BDMP[element]['Name'] + "_" + str(
            gate_parents_size+ 2) + "_trig\" kind=\"OUTPUT\" tail=\"t_" + BDMP[element]['Name'] + "_" + str(
            count + 1) + "_trig\"/>\n")
        file_object.write(
            "      <arc head=\"t_" + BDMP[element]['Name'] + "_" + str(count + 1) + "_trig\" kind=\"INPUT\" tail=\"P_" +
            BDMP[element]['Name'] + "_trig_0\"/>\n")
    file_object.write("    </edges>\n")
    file_object.write("  </gspn>\n")
    file_object.write("</project>\n")


def ActivateOppSTrig(BDMP, element, file_object,PRIORITY):
    print("Opposite S trig present in the system: Since no given fail possible we assume  every thing under Opp Strig active by default")
    # fail_Source; act_target; repaired_source; dact_target; S_Trig_Act()
    file_object.write("<?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"no\"?>\n")
    file_object.write("<!-- This project file has been saved by the New GreatSPN Editor, v.100 --><project name=\"New project\" version=\"121\">\n")
    file_object.write("  <gspn name=\"GSPN\" show-color-cmd=\"false\" show-fluid-cmd=\"false\">\n")
    file_object.write("    <nodes>\n")
    file_object.write("      <place name=\"P_"+BDMP[element]['Name']+"_trig_1_0\" superposition-tags=\"dact_"+BDMP[element]['module']+"\" x=\"5.0\" y=\"7.0\"/>\n")
    file_object.write("      <transition name=\"t_"+BDMP[element]['Name']+"_trig_1_0\" priority=\""+ PRIORITY['ACTIVE'] +"\" type=\"IMM\" x=\"9.85\" y=\"7.0\"/>\n")
    file_object.write("      <place marking=\"1\" name=\"P_"+BDMP[element]['Name']+"_trig_1_1\" superposition-tags=\"act_"+BDMP[element]['module']+"\" x=\"14.0\" y=\"7.0\"/>\n")
    file_object.write("      <transition name=\"t_"+BDMP[element]['Name']+"_trig_1_1\"  priority=\""+ PRIORITY['ACTIVE'] +"\" type=\"IMM\" x=\"9.85\" y=\"3.0\"/>\n")
    file_object.write("      <place name=\"P_"+BDMP[element]['Name']+"_trig_1_2\" superposition-tags=\"fail_"+BDMP[element]['Triggered_by']+"\" x=\"12.0\" y=\"12.0\"/>\n")
    file_object.write("    </nodes>\n")
    file_object.write("    <edges>\n")
    file_object.write("      <arc head=\"t_"+BDMP[element]['Name']+"_trig_1_0\" kind=\"INPUT\" tail=\"P_"+BDMP[element]['Name']+"_trig_1_0\"/>\n")
    file_object.write("      <arc head=\"P_"+BDMP[element]['Name']+"_trig_1_1\" kind=\"OUTPUT\" tail=\"t_"+BDMP[element]['Name']+"_trig_1_0\"/>\n")
    file_object.write("      <arc head=\"t_"+BDMP[element]['Name']+"_trig_1_1\" kind=\"INPUT\" tail=\"P_"+BDMP[element]['Name']+"_trig_1_1\"/>\n")
    file_object.write("      <arc head=\"P_"+BDMP[element]['Name']+"_trig_1_0\" kind=\"OUTPUT\" tail=\"t_"+BDMP[element]['Name']+"_trig_1_1\"/>\n")
    file_object.write("      <arc head=\"t_"+BDMP[element]['Name']+"_trig_1_1\" kind=\"INPUT\" tail=\"P_"+BDMP[element]['Name']+"_trig_1_2\"/>\n")
    file_object.write("      <arc head=\"t_"+BDMP[element]['Name']+"_trig_1_0\" kind=\"INHIBITOR\" tail=\"P_"+BDMP[element]['Name']+"_trig_1_2\"/>\n")
    file_object.write("      <arc head=\"P_"+BDMP[element]['Name']+"_trig_1_2\" kind=\"OUTPUT\" tail=\"t_"+BDMP[element]['Name']+"_trig_1_1\"/>\n")
    file_object.write("    </edges>\n")
    file_object.write("  </gspn>\n")
    file_object.write("</project>\n")


def ActivateEqualSTrig(BDMP, element, file_object,PRIORITY):

    print("EqualS trig present in the system: Since no given fail possible we assume  every thing inactive by default")
    file_object.write("<?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"no\"?>\n")
    file_object.write("<!-- This project file has been saved by the New GreatSPN Editor, v.100 --><project name=\"New project\" version=\"121\">\n")
    file_object.write("  <gspn name=\"GSPN\" show-color-cmd=\"false\" show-fluid-cmd=\"false\">\n")
    file_object.write("    <nodes>\n")
    file_object.write("      <place marking=\"1\" name=\"P_"+BDMP[element]['Name']+"_trig_1_0\" superposition-tags=\"dact_"+BDMP[element]['module']+"\" x=\"5.0\" y=\"7.0\"/>\n")
    file_object.write("      <transition name=\"t_"+BDMP[element]['Name']+"_trig_1_0\" priority=\""+ PRIORITY['ACTIVE'] +"\" type=\"IMM\" x=\"9.85\" y=\"7.0\"/>\n")
    file_object.write("      <place name=\"P_"+BDMP[element]['Name']+"_trig_1_1\" superposition-tags=\"act_"+BDMP[element]['module']+"\" x=\"14.0\" y=\"7.0\"/>\n")
    file_object.write("      <transition name=\"t_"+BDMP[element]['Name']+"_trig_1_1\" priority=\""+ PRIORITY['DEACTIVE'] +"\" type=\"IMM\" x=\"9.85\" y=\"3.0\"/>\n")
    file_object.write("      <place name=\"P_"+BDMP[element]['Name']+"_trig_1_2\" superposition-tags=\"fail_"+BDMP[element]['Triggered_by']+"\" x=\"12.0\" y=\"12.0\"/>\n")
    file_object.write("    </nodes>\n")
    file_object.write("    <edges>\n")
    file_object.write("      <arc head=\"t_"+BDMP[element]['Name']+"_trig_1_0\" kind=\"INPUT\" tail=\"P_"+BDMP[element]['Name']+"_trig_1_0\"/>\n")
    file_object.write("      <arc head=\"P_"+BDMP[element]['Name']+"_trig_1_1\" kind=\"OUTPUT\" tail=\"t_"+BDMP[element]['Name']+"_trig_1_0\"/>\n")
    file_object.write("      <arc head=\"t_"+BDMP[element]['Name']+"_trig_1_1\" kind=\"INPUT\" tail=\"P_"+BDMP[element]['Name']+"_trig_1_1\"/>\n")
    file_object.write("      <arc head=\"P_"+BDMP[element]['Name']+"_trig_1_0\" kind=\"OUTPUT\" tail=\"t_"+BDMP[element]['Name']+"_trig_1_1\"/>\n")
    file_object.write("      <arc head=\"t_"+BDMP[element]['Name']+"_trig_1_0\" kind=\"INPUT\" tail=\"P_"+BDMP[element]['Name']+"_trig_1_2\"/>\n")
    file_object.write("      <arc head=\"t_"+BDMP[element]['Name']+"_trig_1_1\" kind=\"INHIBITOR\" tail=\"P_"+BDMP[element]['Name']+"_trig_1_2\"/>\n")
    file_object.write("      <arc head=\"P_"+BDMP[element]['Name']+"_trig_1_2\" kind=\"OUTPUT\" tail=\"t_"+BDMP[element]['Name']+"_trig_1_0\"/>\n")
    file_object.write("    </edges>\n")
    file_object.write("  </gspn>\n")
    file_object.write("</project>\n")

def ActivateAlwaysTrue(BDMP, element, file_object,PRIORITY):
    print("Always True trig present in the system")
    file_object.write("<?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"no\"?>\n")
    file_object.write("<!-- This project file has been saved by the New GreatSPN Editor, v.100 --><project name=\"New project\" version=\"121\">\n")
    file_object.write("  <gspn name=\"GSPN\" show-color-cmd=\"false\" show-fluid-cmd=\"false\">\n")
    file_object.write("    <nodes>\n")
    file_object.write("      <place marking=\"1\" name=\"P_"+ BDMP[element]['Name'] +"0\" superposition-tags=\"act_" + BDMP[element]['module'] + "\" x=\"6.0\" y=\"5.0\"/>\n")
    file_object.write("    </nodes>\n")
    file_object.write("    <edges/>\n")
    file_object.write("  </gspn>\n")
    file_object.write("</project>\n")


def ActivateAlwaysFalse(BDMP, element, file_object,PRIORITY):
    print("Always False trig present in the system")  # Add different module if encountered any of this
    file_object.write("<?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"no\"?>\n")
    file_object.write(
        "<!-- This project file has been saved by the New GreatSPN Editor, v.100 --><project name=\"New project\" version=\"121\">\n")
    file_object.write("  <gspn name=\"GSPN\" show-color-cmd=\"false\" show-fluid-cmd=\"false\">\n")
    file_object.write("    <nodes>\n")
    file_object.write("      <place name=\"P_" + BDMP[element]['Name'] + "0\" superposition-tags=\"act_" +
                      BDMP[element]['module'] + "\" x=\"6.0\" y=\"5.0\"/>\n")
    file_object.write("    </nodes>\n")
    file_object.write("    <edges/>\n")
    file_object.write("  </gspn>\n")
    file_object.write("</project>\n")


def ActivateGreyArrow():
    print("functon fro grey arrow")
    # no trigger simple element being inherited by two or more gates


def ActivateSimple(BDMP, element, file_object, coord,PRIORITY):  # could have multiple parents and could also have always true and always false
    if BDMP[element]['Calculate'] == 'always_true':  # case for alwasy true
        ActivateAlwaysTrue(BDMP, element, file_object)
    elif BDMP[element]['Calculate'] == 'always_false':  # case for alwasy false
        ActivateAlwaysFalse(BDMP, element, file_object)

    else:  # case for NO trigger but one or more parents
        parent_module = set()
        if BDMP[element]['Calculate'] in {'fn_fathers_and_trig', 'fn_fathers_opp_trig', 'equal_to_S_trig',
                                          # does not necessarily mean that element is trigger
                                          'opposite_to_S_trig'} and BDMP[element]['Fathers'] != 'Null':
            for parent_cnt in range(0, len(BDMP[element]['Fathers'])):
                parent_module.add(BDMP[BDMP[element]['Fathers'][parent_cnt]]['module'])  # only distinct modules are added
            parent_module = list(parent_module)
        if len(parent_module) == 1 and len(BDMP[element]['Fathers']) == 1:  # if activated by one parent but all belong to same module
            file_object.write("<?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"no\"?>\n")
            file_object.write("<!-- This project file has been saved by the New GreatSPN Editor, v.100 --><project name=\"New project\" version=\"121\">\n")
            file_object.write("  <gspn name=\"GSPN\" show-color-cmd=\"false\" show-fluid-cmd=\"false\">\n")
            file_object.write("    <nodes>\n")
            file_object.write("      <place name=\"P_"+ BDMP[element]['Name'] + "_trig_0\" superposition-tags=\"act_"+ BDMP[element]['module'] + "\" x=\"7.0\" y=\"6.0\"/>\n")
            file_object.write("    </nodes>\n")
            file_object.write("    <edges/>\n")
            file_object.write("  </gspn>\n")
            file_object.write("</project>\n")
        elif len(parent_module) >1 and '0' in parent_module:
            file_object.write("<?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"no\"?>\n")
            file_object.write(
                "<!-- This project file has been saved by the New GreatSPN Editor, v.100 --><project name=\"New project\" version=\"121\">\n")
            file_object.write("  <gspn name=\"GSPN\" show-color-cmd=\"false\" show-fluid-cmd=\"false\">\n")
            file_object.write("    <nodes>\n")
            file_object.write(
                "      <place name=\"P_" + BDMP[element]['Name'] + "_trig_0\" superposition-tags=\"act_" + BDMP[element][
                    'module'] + "\" x=\"7.0\" y=\"6.0\"/>\n")
            file_object.write("    </nodes>\n")
            file_object.write("    <edges/>\n")
            file_object.write("  </gspn>\n")
            file_object.write("</project>\n")


        elif len(parent_module) == 1 and (len(BDMP[element]['Fathers']) > 1) :  # if activated by multiple parents but all belong to same module
            file_object.write("<?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"no\"?>\n")
            file_object.write(
                "<!-- This project file has been saved by the New GreatSPN Editor, v.100 --><project name=\"New project\" version=\"121\">\n")
            file_object.write("  <gspn name=\"GSPN\" show-color-cmd=\"false\" show-fluid-cmd=\"false\">\n")
            file_object.write("    <nodes>\n")
            file_object.write("      <place name=\"P_" + BDMP[element]['Name'] + "_trig_0\" superposition-tags=\"act_" +
                           parent_module[0] + "\" x=\"7.0\" y=\"6.0\"/>\n")
            file_object.write("    </nodes>\n")
            file_object.write("    <edges/>\n")
            file_object.write("  </gspn>\n")
            file_object.write("</project>\n")

        elif len(parent_module) in {2,3}:  # behavior without trigger with activation inherited from two modules
            parent_module = set()
            for parent_cnt in range(0, len(BDMP[element]['Fathers'])):
                parent_module.add(
                    BDMP[BDMP[element]['Fathers'][parent_cnt]]['module'])  # only distinct modules are added
            parent_module = list(parent_module)
            ########################Failure Mecanism
            gate_parents_size = len(parent_module)  # len(BDMP[element]['Fathers'])
            file_object.write("<?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"no\"?>\n")
            file_object.write(
                "<!-- This project file has been saved by the New GreatSPN Editor, v.100 --><project name=\"New project\" version=\"121\">\n")
            file_object.write("  <gspn name=\"GSPN\" show-color-cmd=\"false\" show-fluid-cmd=\"false\">\n")
            file_object.write("    <nodes>\n")
            file_object.write("      <place marking=\"1\" name=\"P_" + BDMP[element][
                'Name'] + "_trig_0\" superposition-tags=\"dact_" + BDMP[element][
                                  'module'] + "\" x=\"4.0\" y=\"9.0\"/>\n")
            file_object.write(
                "      <transition name=\"t_" + BDMP[element]['Name'] + "_trig_0\" priority=\""+ PRIORITY['ACTIVE'] +"\" type=\"IMM\" x=\"" + str(
                    coord[0] + 8.85) + "\" y=\"12.0\"/>\n")

            for count in range(0, gate_parents_size):
                file_object.write(
                    "      <place name=\"P_" + BDMP[element]['Name'] + "_" + str(
                        count + 1) + "_trig\" superposition-tags=\"act_" +
                    parent_module[count] + "\" x=\"" + str(coord[0] + 4 + 8 * (count + 1)) + "\" y=\"16.0\"/>\n")
                file_object.write(
                    "      <transition name=\"t_" + BDMP[element]['Name'] + "_" + str(
                        count + 1) + "_trig\" priority=\""+ PRIORITY['ACTIVE'] +"\" type=\"IMM\" x=\"" + str(
                        coord[0] + 4 + 8 * (count + 1)) + "\" y=\"8.0\"/>\n")
            file_object.write("<place name=\"P_" + BDMP[element]['Name'] + "_" + str(
                gate_parents_size + 2) + "_trig\" superposition-tags=\"act_" +
                              BDMP[element]['module'] + "\" x=\"" + str(
                coord[0] + 4 + 8 * (gate_parents_size + 2)) + "\" y=\"9.0\"/>\n")
            file_object.write("    </nodes>\n")
            file_object.write("    <edges>\n")
            file_object.write(
                "      <arc head=\"P_" + BDMP[element]['Name'] + "_trig_0\" kind=\"OUTPUT\" tail=\"t_" + BDMP[element][
                    'Name'] + "_trig_0\"/>\n")
            file_object.write(
                "      <arc head=\"t_" + BDMP[element]['Name'] + "_trig_0\" kind=\"INPUT\" tail=\"P_" + BDMP[element][
                    'Name'] + "_" + str(gate_parents_size + 2) + "_trig\"/>\n")
            for count in range(0, gate_parents_size):
                file_object.write(
                    "      <arc head=\"t_" + BDMP[element]['Name'] + "_trig_0\" kind=\"INHIBITOR\" tail=\"P_" +
                    BDMP[element][
                        'Name'] + "_" + str(count + 1) + "_trig\"/>\n")
                file_object.write(
                    "      <arc head=\"t_" + BDMP[element]['Name'] + "_" + str(
                        count + 1) + "_trig\" kind=\"INPUT\" tail=\"P_" +
                    BDMP[element]['Name'] + "_" + str(count + 1) + "_trig\"/>\n")
                file_object.write(
                    "      <arc head=\"P_" + BDMP[element]['Name'] + "_" + str(
                        count + 1) + "_trig\" kind=\"OUTPUT\" tail=\"t_" +
                    BDMP[element]['Name'] + "_" + str(count + 1) + "_trig\"/>\n")
                file_object.write("      <arc head=\"P_" + BDMP[element]['Name'] + "_" + str(
                    gate_parents_size + 2) + "_trig\" kind=\"OUTPUT\" tail=\"t_" + BDMP[element]['Name'] + "_" + str(
                    count + 1) + "_trig\"/>\n")
                file_object.write(
                    "      <arc head=\"t_" + BDMP[element]['Name'] + "_" + str(
                        count + 1) + "_trig\" kind=\"INPUT\" tail=\"P_" +
                    BDMP[element]['Name'] + "_trig_0\"/>\n")
            file_object.write("    </edges>\n")
            file_object.write("  </gspn>\n")
            file_object.write("</project>\n")


def ActivateTrig(BDMP, element, file_obj,coord,PRIORITY):
    if BDMP[element]['Calculate'] == 'fn_fathers_and_trig':  # behavior of tirgger one father
        ActivateSimpleTrig(BDMP, element, file_obj,coord,PRIORITY)
    elif BDMP[element]['Calculate'] == 'fn_fathers_opp_trig':
        ActivateInvTrig(BDMP, element, file_obj,PRIORITY)
    elif BDMP[element]['Calculate'] == 'always_true':
        ActivateAlwaysTrue(BDMP, element, file_obj,PRIORITY)
    elif BDMP[element]['Calculate'] == 'always_false':
        ActivateAlwaysFalse(BDMP, element, file_obj,PRIORITY)
    elif BDMP[element]['Calculate'] == 'opposite_to_S_trig':
        ActivateOppSTrig(BDMP, element, file_obj,PRIORITY)
    elif BDMP[element]['Calculate'] == 'equal_to_S_trig':
        ActivateEqualSTrig(BDMP, element, file_obj,PRIORITY)


def ActivatePleaf(BDMP, element, file_object,PRIORITY):
    if BDMP[element]['Fathers'] != 'Null' and BDMP[element]['Calculate'] != 'equal_to_S_trig':
        print("Caution: The phase semantics are doubtful for this case")


    if BDMP[element]['In_progress'] == 'TRUE' and BDMP[element]['Triggered_by'] == 'Null':
        file_object.write("<?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"no\"?>\n")
        file_object.write(
            "<!-- This project file has been saved by the New GreatSPN Editor, v.100 --><project name=\"New project\" version=\"121\">\n")
        file_object.write("  <gspn name=\"GSPN\" show-color-cmd=\"false\" show-fluid-cmd=\"false\">\n")
        file_object.write("    <nodes>\n")
        file_object.write(
            "      <place marking=\"1\" name=\"P_" + BDMP[element]['Name'] + "_inprogress\" superposition-tags=\"act_" +
            BDMP[element][
                'module'] + "\" x=\"7.0\" y=\"6.0\"/>\n")
        file_object.write(
            "      <transition name=\"t_" + BDMP[element]['Name'] + "_inprogress\" priority=\""+ PRIORITY['REPAIR'] +"\" type=\"IMM\" x=\"9.85\" y=\"3.0\"/>\n")
        file_object.write("    </nodes>\n")
        file_object.write("    <edges>\n")
        file_object.write(
            "      <arc head=\"t_" + BDMP[element]['Name'] + "_inprogress\" kind=\"INPUT\" tail=\"P_" + BDMP[element][
                'Name'] + "_inprogress\"/>\n")
        file_object.write("    </edges>\n")
        file_object.write("  </gspn>\n")
        file_object.write("</project>\n")

    if BDMP[element]['In_progress'] == 'FALSE' and BDMP[element]['Triggered_by'] == 'Null':
        file_object.write("Phase has no tirgger and its in porgess os also false please recheck the model or add semantics for this case")
    if BDMP[element]['In_progress'] == 'FALSE' and BDMP[element]['Triggered_by'] != 'Null' and BDMP[element]['Calculate'] in {'fn_fathers_and_trig'}:
        #ActivateEqualSTrig(BDMP, element, file_object)
        #if BDMP[element]['Calculate'] in {fn_fathers_and_trig, }

        print(
            "Phase is of Fn fathers and trig: Since no given fail possible we assume  every thing under Opp Strig active by default")
        # fail_Source; act_target; repaired_source; dact_target; S_Trig_Act()g
        file_object.write("<?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"no\"?>\n")
        file_object.write(
            "<!-- This project file has been saved by the New GreatSPN Editor, v.100 --><project name=\"New project\" version=\"121\">\n")
        file_object.write("  <gspn name=\"GSPN\" show-color-cmd=\"false\" show-fluid-cmd=\"false\">\n")
        file_object.write("    <nodes>\n")
        file_object.write(
            "      <place marking=\"1\"  name=\"P_" + BDMP[element]['Name'] + "_trig_1_0\" superposition-tags=\"dact_" + BDMP[element][
                'module'] + "\" x=\"5.0\" y=\"7.0\"/>\n")
        file_object.write(
            "      <transition name=\"t_" + BDMP[element]['Name'] + "_trig_1_1\" priority=\""+ PRIORITY['ACTIVE'] +"\" type=\"IMM\" x=\"9.85\" y=\"7.0\"/>\n")
        file_object.write(
            "      <place name=\"P_" + BDMP[element]['Name'] + "_trig_1_1\" superposition-tags=\"act_" +
            BDMP[element]['module'] + "\" x=\"14.0\" y=\"7.0\"/>\n")
        file_object.write(
            "      <transition name=\"t_" + BDMP[element]['Name'] + "_trig_1_0\" priority=\""+ PRIORITY['DEACTIVE'] +"\" type=\"IMM\" x=\"9.85\" y=\"3.0\"/>\n")
        file_object.write(
            "      <place name=\"P_" + BDMP[element]['Name'] + "_trig_1_2\" superposition-tags=\"fail_" + BDMP[element][
                'Triggered_by'] + "\" x=\"12.0\" y=\"12.0\"/>\n")
        file_object.write("    </nodes>\n")
        file_object.write("    <edges>\n")
        file_object.write(
            "      <arc head=\"t_" + BDMP[element]['Name'] + "_trig_1_0\" kind=\"INPUT\" tail=\"P_" + BDMP[element][
                'Name'] + "_trig_1_0\"/>\n")
        file_object.write(
            "      <arc head=\"P_" + BDMP[element]['Name'] + "_trig_1_1\" kind=\"OUTPUT\" tail=\"t_" + BDMP[element][
                'Name'] + "_trig_1_0\"/>\n")
        file_object.write(
            "      <arc head=\"t_" + BDMP[element]['Name'] + "_trig_1_1\" kind=\"INPUT\" tail=\"P_" + BDMP[element][
                'Name'] + "_trig_1_1\"/>\n")
        file_object.write(
            "      <arc head=\"P_" + BDMP[element]['Name'] + "_trig_1_0\" kind=\"OUTPUT\" tail=\"t_" + BDMP[element][
                'Name'] + "_trig_1_1\"/>\n")
        file_object.write(
            "      <arc head=\"t_" + BDMP[element]['Name'] + "_trig_1_1\" kind=\"INPUT\" tail=\"P_" + BDMP[element][
                'Name'] + "_trig_1_2\"/>\n")
        file_object.write(
            "      <arc head=\"t_" + BDMP[element]['Name'] + "_trig_1_0\" kind=\"INHIBITOR\" tail=\"P_" + BDMP[element][
                'Name'] + "_trig_1_2\"/>\n")
        file_object.write(
            "      <arc head=\"P_" + BDMP[element]['Name'] + "_trig_1_2\" kind=\"OUTPUT\" tail=\"t_" + BDMP[element][
                'Name'] + "_trig_1_1\"/>\n")
        file_object.write("    </edges>\n")
        file_object.write("  </gspn>\n")
        file_object.write("</project>\n")
    if BDMP[element]['In_progress'] == 'FALSE' and BDMP[element]['Triggered_by'] != 'Null' and BDMP[element]['Calculate'] in {'equal_to_S_trig'}:
        #ActivateEqualSTrig(BDMP, element, file_object)
        #if BDMP[element]['Calculate'] in {fn_fathers_and_trig, }

        print(
            "Phase is of Equal S trig present in the system: Since no given fail possible we assume  every thing under Opp Strig active by default")
        # fail_Source; act_target; repaired_source; dact_target; S_Trig_Act()g
        file_object.write("<?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"no\"?>\n")
        file_object.write(
            "<!-- This project file has been saved by the New GreatSPN Editor, v.100 --><project name=\"New project\" version=\"121\">\n")
        file_object.write("  <gspn name=\"GSPN\" show-color-cmd=\"false\" show-fluid-cmd=\"false\">\n")
        file_object.write("    <nodes>\n")
        file_object.write(
            "      <place name=\"P_" + BDMP[element]['Name'] + "_trig_1_0\" superposition-tags=\"dact_" + BDMP[element][
                'module'] + "\" x=\"5.0\" y=\"7.0\"/>\n")

        file_object.write(
            "      <place marking=\"1\"  name=\"P_" + BDMP[element]['Name'] + "_trig_1_3\" x=\"5.0\" y=\"12.0\"/>\n")
        file_object.write(
            "      <transition name=\"t_" + BDMP[element]['Name'] + "_trig_1_1\" priority=\""+ PRIORITY['ACTIVE'] +"\" type=\"IMM\" x=\"9.85\" y=\"7.0\"/>\n")
        file_object.write(
            "      <transition name=\"t_" + BDMP[element]['Name'] + "_trig_1_2\" priority=\""+ PRIORITY['ACTIVE'] +"\" type=\"IMM\" x=\"9.85\" y=\"12.0\"/>\n")
        file_object.write(
            "      <place name=\"P_" + BDMP[element]['Name'] + "_trig_1_1\" superposition-tags=\"act_" +
            BDMP[element]['module'] + "\" x=\"14.0\" y=\"7.0\"/>\n")
        file_object.write(
            "      <transition name=\"t_" + BDMP[element]['Name'] + "_trig_1_0\" priority=\""+ PRIORITY['ACTIVE'] +"\" type=\"IMM\" x=\"9.85\" y=\"3.0\"/>\n")
        file_object.write(
            "      <place name=\"P_" + BDMP[element]['Name'] + "_trig_1_2\" superposition-tags=\"fail_" + BDMP[element][
                'Triggered_by'] + "\" x=\"12.0\" y=\"12.0\"/>\n")
        file_object.write("    </nodes>\n")
        file_object.write("    <edges>\n")
        file_object.write(
            "      <arc head=\"t_" + BDMP[element]['Name'] + "_trig_1_0\" kind=\"INPUT\" tail=\"P_" + BDMP[element][
                'Name'] + "_trig_1_0\"/>\n")
        file_object.write(
            "      <arc head=\"P_" + BDMP[element][
                'Name'] + "_trig_1_0\" kind=\"OUTPUT\" tail=\"t_" + BDMP[element]['Name'] + "_trig_1_2\"/>\n")
        file_object.write(
            "      <arc head=\"P_" + BDMP[element][
                'Name'] + "_trig_1_2\" kind=\"OUTPUT\" tail=\"t_" + BDMP[element]['Name'] + "_trig_1_2\"/>\n")
        file_object.write(
            "      <arc head=\"t_" + BDMP[element]['Name'] + "_trig_1_2\" kind=\"INPUT\" tail=\"P_" + BDMP[element][
                'Name'] + "_trig_1_3\"/>\n")
        file_object.write(
            "      <arc head=\"t_" + BDMP[element]['Name'] + "_trig_1_2\" kind=\"INPUT\" tail=\"P_" + BDMP[element][
                'Name'] + "_trig_1_2\"/>\n")
        file_object.write(
            "      <arc head=\"P_" + BDMP[element]['Name'] + "_trig_1_1\" kind=\"OUTPUT\" tail=\"t_" + BDMP[element][
                'Name'] + "_trig_1_0\"/>\n")
        file_object.write(
            "      <arc head=\"t_" + BDMP[element]['Name'] + "_trig_1_1\" kind=\"INPUT\" tail=\"P_" + BDMP[element][
                'Name'] + "_trig_1_1\"/>\n")
        file_object.write(
            "      <arc head=\"P_" + BDMP[element]['Name'] + "_trig_1_0\" kind=\"OUTPUT\" tail=\"t_" + BDMP[element][
                'Name'] + "_trig_1_1\"/>\n")
        file_object.write(
            "      <arc head=\"t_" + BDMP[element]['Name'] + "_trig_1_1\" kind=\"INPUT\" tail=\"P_" + BDMP[element][
                'Name'] + "_trig_1_2\"/>\n")
        file_object.write(
            "      <arc head=\"t_" + BDMP[element]['Name'] + "_trig_1_0\" kind=\"INHIBITOR\" tail=\"P_" + BDMP[element][
                'Name'] + "_trig_1_2\"/>\n")
        file_object.write(
            "      <arc head=\"P_" + BDMP[element]['Name'] + "_trig_1_2\" kind=\"OUTPUT\" tail=\"t_" + BDMP[element][
                'Name'] + "_trig_1_1\"/>\n")
        file_object.write("    </edges>\n")
        file_object.write("  </gspn>\n")
        file_object.write("</project>\n")

    if BDMP[element]['In_progress'] == 'TRUE' and BDMP[element]['Triggered_by'] != 'Null':
        print(
            "Opposite S trig present in the system: Since no given fail possible we assume  every thing under Opp Strig active by default")
        # fail_Source; act_target; repaired_source; dact_target; S_Trig_Act()
        file_object.write("<?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"no\"?>\n")
        file_object.write(
            "<!-- This project file has been saved by the New GreatSPN Editor, v.100 --><project name=\"New project\" version=\"121\">\n")
        file_object.write("  <gspn name=\"GSPN\" show-color-cmd=\"false\" show-fluid-cmd=\"false\">\n")
        file_object.write("    <nodes>\n")
        file_object.write(
            "      <place name=\"P_" + BDMP[element]['Name'] + "_trig_1_0\" superposition-tags=\"dact_" + BDMP[element][
                'module'] + "\" x=\"5.0\" y=\"7.0\"/>\n")
        file_object.write(
            "      <transition name=\"t_" + BDMP[element]['Name'] + "_trig_1_0\" priority=\""+ PRIORITY['ACTIVE'] +"\" type=\"IMM\" x=\"9.85\" y=\"7.0\"/>\n")
        file_object.write(
            "      <place marking=\"1\" name=\"P_" + BDMP[element]['Name'] + "_trig_1_1\" superposition-tags=\"act_" +
            BDMP[element]['module'] + "\" x=\"14.0\" y=\"7.0\"/>\n")
        file_object.write(
            "      <transition name=\"t_" + BDMP[element]['Name'] + "_trig_1_1\" priority=\""+ PRIORITY['DEACTIVE'] +"\" type=\"IMM\" x=\"9.85\" y=\"3.0\"/>\n")
        file_object.write(
            "      <place name=\"P_" + BDMP[element]['Name'] + "_trig_1_2\" superposition-tags=\"fail_" + BDMP[element][
                'Triggered_by'] + "\" x=\"12.0\" y=\"12.0\"/>\n")
        file_object.write("    </nodes>\n")
        file_object.write("    <edges>\n")
        file_object.write(
            "      <arc head=\"t_" + BDMP[element]['Name'] + "_trig_1_0\" kind=\"INPUT\" tail=\"P_" + BDMP[element][
                'Name'] + "_trig_1_0\"/>\n")
        file_object.write(
            "      <arc head=\"P_" + BDMP[element]['Name'] + "_trig_1_1\" kind=\"OUTPUT\" tail=\"t_" + BDMP[element][
                'Name'] + "_trig_1_0\"/>\n")
        file_object.write(
            "      <arc head=\"t_" + BDMP[element]['Name'] + "_trig_1_1\" kind=\"INPUT\" tail=\"P_" + BDMP[element][
                'Name'] + "_trig_1_1\"/>\n")
        file_object.write(
            "      <arc head=\"P_" + BDMP[element]['Name'] + "_trig_1_0\" kind=\"OUTPUT\" tail=\"t_" + BDMP[element][
                'Name'] + "_trig_1_1\"/>\n")
        file_object.write(
            "      <arc head=\"t_" + BDMP[element]['Name'] + "_trig_1_1\" kind=\"INPUT\" tail=\"P_" + BDMP[element][
                'Name'] + "_trig_1_2\"/>\n")
        file_object.write(
            "      <arc head=\"t_" + BDMP[element]['Name'] + "_trig_1_0\" kind=\"INHIBITOR\" tail=\"P_" + BDMP[element][
                'Name'] + "_trig_1_2\"/>\n")
        file_object.write(
            "      <arc head=\"P_" + BDMP[element]['Name'] + "_trig_1_2\" kind=\"OUTPUT\" tail=\"t_" + BDMP[element][
                'Name'] + "_trig_1_1\"/>\n")
        file_object.write("    </edges>\n")
        file_object.write("  </gspn>\n")
        file_object.write("</project>\n")
"""file_object.write("<?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"no\"?>\n")
file_object.write("<!-- This project file has been saved by the New GreatSPN Editor, v.100 --><project name=\"New project\" version=\"121\">\n")
file_object.write("  <gspn name=\"GSPN\" show-color-cmd=\"false\" show-fluid-cmd=\"false\">\n")
file_object.write("    <nodes>\n")
file_object.write("      <place name=\"P0\" x=\"1.0\" y=\"10.0\"/>\n")
file_object.write("      <place name=\"P1\" x=\"24.0\" y=\"6.0\"/>\n")
file_object.write("      <transition name=\"t0\" type=\"IMM\" x=\"11.85\" y=\"19.0\"/>\n")
file_object.write("      <place name=\"P2\" superposition-tags=\"inprogress\" x=\"1.0\" y=\"15.0\"/>\n")
file_object.write("      <transition name=\"T0\" nservers-x=\"0.5\" type=\"EXP\" x=\"10.55\" y=\"1.0\"/>\n")
file_object.write("      <transition name=\"t1\" type=\"IMM\" x=\"11.85\" y=\"15.0\"/>\n")
file_object.write("      <place name=\"P3\" superposition-tags=\"failed\" x=\"1.0\" y=\"6.0\"/>\n")
file_object.write("      <transition name=\"t2\" type=\"IMM\" x=\"11.85\" y=\"12.0\"/>\n")
file_object.write("      <place name=\"P4\" superposition-tags=\"tested\" x=\"16.0\" y=\"8.0\"/>\n")
file_object.write("      <place name=\"act_\" x=\"1.0\" y=\"2.0\"/>\n")
file_object.write("      <transition name=\"t3\" superposition-tags=\"add for activation\" type=\"IMM\" x=\"10.85\" y=\"7.0\"/>\n")
file_object.write("    </nodes>\n")
file_object.write("    <edges>\n")
file_object.write("      <arc head=\"t0\" kind=\"INPUT\" tail=\"P2\"/>\n")
file_object.write("      <arc head=\"T0\" kind=\"INPUT\" tail=\"P1\"/>\n")
file_object.write("      <arc head=\"P0\" kind=\"OUTPUT\" tail=\"T0\"/>\n")
file_object.write("      <arc head=\"P1\" kind=\"OUTPUT\" tail=\"t0\"/>\n")
file_object.write("      <arc head=\"t1\" kind=\"INPUT\" tail=\"P3\"/>\n")
file_object.write("      <arc head=\"P1\" kind=\"OUTPUT\" tail=\"t1\"/>\n")
file_object.write("      <arc head=\"t0\" kind=\"INPUT\" tail=\"P0\"/>\n")
file_object.write("      <arc head=\"P3\" kind=\"OUTPUT\" tail=\"t1\"/>\n")
file_object.write("      <arc head=\"t2\" kind=\"INHIBITOR\" tail=\"P3\"/>\n")
file_object.write("      <arc head=\"P4\" kind=\"OUTPUT\" tail=\"t1\"/>\n")
file_object.write("      <arc head=\"P4\" kind=\"OUTPUT\" tail=\"t0\"/>\n")
file_object.write("      <arc head=\"t2\" kind=\"INPUT\" tail=\"P4\"/>\n")
file_object.write("      <arc head=\"t3\" kind=\"INPUT\" tail=\"act_\"/>\n")
file_object.write("      <arc head=\"P1\" kind=\"OUTPUT\" tail=\"t3\"/>\n")
file_object.write("    </edges>\n")
file_object.write("  </gspn>\n")
file_object.write("</project>\n")
"""
def ActivateMultitop(BDMP, element, file_obj,PRIORITY):
    if BDMP[element]['Triggered_by'] != 'Null':
        if BDMP[element]['Calculate'] in {'fn_fathers_and_trig', 'equal_to_S_trig'}:
            ActivateEqualSTrig(BDMP, element, file_obj,PRIORITY)
        elif BDMP[element]['Calculate'] == 'always_true':
            ActivateAlwaysTrue(BDMP, element, file_obj,PRIORITY)
        elif BDMP[element]['Calculate'] == 'always_false':
            ActivateAlwaysFalse(BDMP, element, file_obj,PRIORITY)
        elif BDMP[element]['Calculate'] in {'fn_fathers_opp_trig', 'opposite_to_S_trig'}:
            ActivateOppSTrig(BDMP, element, file_obj,PRIORITY)
    elif BDMP[element]['Calculate'] == 'always_false':
        file_obj.write("<?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"no\"?>\n")
        file_obj.write("<!-- This project file has been saved by the New GreatSPN Editor, v.100 --><project name=\"New project\" version=\"121\">\n")
        file_obj.write("  <gspn name=\"GSPN\" show-color-cmd=\"false\" show-fluid-cmd=\"false\">\n")
        file_obj.write("    <nodes>\n")
        file_obj.write(
            "      <place name=\"P_" + BDMP[element]['Name'] + "_trig_0\" superposition-tags=\"act_" +
            BDMP[element][
                'module'] + "\" x=\"7.0\" y=\"6.0\"/>\n")
        file_obj.write("    </nodes>\n")
        file_obj.write("    <edges/>\n")
        file_obj.write("  </gspn>\n")
        file_obj.write("</project>\n")
    else:
        if BDMP[element]['Type'] != 'i_leaf' and BDMP[element]['Triggered_by'] == 'Null': #top level event in this case no matter where
            file_obj.write("<?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"no\"?>\n")
            file_obj.write(
                "<!-- This project file has been saved by the New GreatSPN Editor, v.100 --><project name=\"New project\" version=\"121\">\n")
            file_obj.write("  <gspn name=\"GSPN\" show-color-cmd=\"false\" show-fluid-cmd=\"false\">\n")
            file_obj.write("    <nodes>\n")
            file_obj.write("      <place marking=\"1\" name=\"P_" + BDMP[element]['Name'] + "_trig_0\" superposition-tags=\"act_" +
                BDMP[element][
                    'module'] + "\" x=\"7.0\" y=\"6.0\"/>\n")
            file_obj.write("    </nodes>\n")
            file_obj.write("    <edges/>\n")
            file_obj.write("  </gspn>\n")
            file_obj.write("</project>\n")
            """
            else:
                file_obj.write("<?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"no\"?>\n")
                file_obj.write(
                    "<!-- This project file has been saved by the New GreatSPN Editor, v.100 --><project name=\"New project\" version=\"121\">\n")
                file_obj.write("  <gspn name=\"GSPN\" show-color-cmd=\"false\" show-fluid-cmd=\"false\">\n")
                file_obj.write("    <nodes>\n")
                file_obj.write(
                    "      <place name=\"P_" + BDMP[element]['Name'] + "_trig_0\" superposition-tags=\"act_" +
                    BDMP[element][
                        'module'] + "\" x=\"7.0\" y=\"6.0\"/>\n")
                file_obj.write("    </nodes>\n")
                file_obj.write("    <edges/>\n")
                file_obj.write("  </gspn>\n")
                file_obj.write("</project>\n")
            """


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


def WriteActivation(BDMP, element, file_object,PRIORITY):
    #############################################################
    # Activation behavior for Top level elements in multitop tree the module is called Module 0
    # The top level elements never gets deactivated unless they are triggered by an activation link
    # The Inst type elements in main modules never gets tested.
    ###############################################################
    coord = (0,0)
    if BDMP[element]['Type'] == 'phase_leaf':
        ActivatePleaf(BDMP, element, file_object,PRIORITY)
    else:
        if BDMP[element]['Fathers'] == 'Null':
            ActivateMultitop(BDMP, element, file_object,PRIORITY)
        if BDMP[element]['Triggered_by'] == 'Null' and BDMP[element]['Calculate'] not in {'always_true', 'always_false'}:  # for elements without any trigger, inv trigger. Could be alway required Could have multiple parents
            ActivateSimple(BDMP, element, file_object,coord,PRIORITY)
        if (BDMP[element]['Triggered_by'] != 'Null' or BDMP[element]['Calculate'] in {'always_true', 'always_false'}) and BDMP[element]['Fathers'] != 'Null':  # for elements having trigger four cases trigger, ivtrigger, equal strig and opp strig
            print(BDMP[element]['Calculate'])
            ActivateTrig(BDMP, element, file_object,coord,PRIORITY)


