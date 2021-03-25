# -*- coding: utf-8 -*-
"""
Created on Thu Jan 26 17:11:53 2017

@author: Marc Bouissou
"""
# Transformation of a FT generated by KB3 into format OPSA-MEF
# ATTENTION : the fault tree must be generated with a naming rules group (that may be empty) 
# so that EXPORT_NAME structures are present in the file.

# The only basic events that are handled are GLM models


import sys
# import library for XML files
from lxml import etree

if __name__ == "__main__":
# The script must be launched by a command  python KB3TOOPSA.py ...
# so that arguments can be fetched !!

# For tests, launch without arguments, which will use the hard coded names for files
# NB: sys.argv[0] is the absolute name of the program itself
    if len(sys.argv)==1:
        input_file_path = "KB3_FT.xml"
        output_file_path = "OPSA_FT.xml"       # FT structure
        params_file_path = "PARAMS_FT.txt"     # reliability data
        mu_params_file_path = "mu_params.txt"  # repair rates only. For the prototype in RiskSpectrum
    else: # the program was launched with two arguments
       input_file_path = sys.argv[1]
       work_directory = sys.argv[2]  # there must be no '\' at the end!
       output_file_path = work_directory + '\\OPSA_FT.xml'
       params_file_path = work_directory + '\\PARAMS_FT.txt'
       mu_params_file_path = work_directory + '\\mu_params.txt'
       
# Loading the file containing the FT
print(input_file_path)       
xmldoc = etree.parse(input_file_path)

# Fault tree name
FTName = xmldoc.xpath("/TREE_ROOT/NAME")[0].text
print ("Translation of a FT generated by KB3 in OPSA-MEF format")
print ("Fault tree name: " + FTName)

with open(output_file_path, "w") as output_file:
    with open(params_file_path, "w") as params_file:
        with open(mu_params_file_path, "w") as mu_params_file:
            output_file.write (r'<?xml version="1.0"  encoding="UTF-8"?><opsa-mef><define-fault-tree name="' + FTName + r'">')
            
            # Processing basic events
            for i in xmldoc.xpath("/TREE_ROOT/OBJECT/FAILURE"):
                    # Search for the first EXPORT_NAME (thus corresponding to the 
                    # first failure in the object)                
                    LeafNAMEobj = i.find('EXPORT_NAME')
                    if LeafNAMEobj == None : output_file.write ("\nError: missing export name in the tree")
                    else: 
                        LeafNAME = LeafNAMEobj.text     
                        output_file.write (r'    <define-basic-event name="' + LeafNAME + r'"></define-basic-event>')
                        glm=i.find('FIAB_MODELS').find('GLM')
                        g= glm.find('GAMMA').text
                        l= glm.find('LAMBDA').text
                        m= glm.find('MU').text
                        params_file.write (r'law '+ LeafNAME + ' GLM ' + g + ' '+ l+ ' ' +m +';\n')
                        mu_params_file.write (LeafNAME + (20-len(LeafNAME))*' ' +';' +m+'\n')    
            # Initialize the list of negated basic events, for which NOT gates will be created
            neg_basic_events=[]
    
            # Processing gates
            for i in xmldoc.xpath("/TREE_ROOT/GATE"):
                    GateTYPE = i.find('TYPE').text
                    GateNAMEobj =  i.find('EXPORT_NAME')
                    if GateNAMEobj == None : output_file.write ("\nError: missing export name in the tree")
                    else:    
                        # Start of gate declaration : opening the tag define-gate and declaring the gate type
                        GateNAME=GateNAMEobj.text
                        output_file.write (r'    <define-gate name="' + GateNAME + r'">')
                        if GateTYPE =="ET": output_file.write ("<and>")
                        elif GateTYPE =="OU": output_file.write ("<or>")
                        elif GateTYPE =="K_SUR_N":
                            K = i.find('K').text
                            output_file.write ('<atleast min="' + K +'">')                
                        else: print("Error: gate type unknown: " + GateTYPE)       
                
                        # Gate daughters: depending on the version of KB3, the fact that they are NOT negated
                        # is explicit or implicit (absence of <NEGATED>FAUX</NEGATED>)                 
                        daughters = i.find('DAUGHTERS')
                        for j in daughters:
                            negatedobj = j.find('NEGATED')
                            if (negatedobj != None ):
                                if negatedobj.text == "FAUX": prefix = ""
                                else: prefix = "NOT_"
                            else : prefix = ""    
                
                            if j.tag =='GATE_REF':
                        # Gates IDs are just integers in KB3, so EXPORT_NAME must be reconstructed                
                                output_file.write (r'<gate name= "'+ prefix + FTName+ "_" + j.find("NAME").text + r'"/>')
                            if j.tag =='BASIC_EVENT_REF':
                                BE_name = j.find("OBJECT_NAME").text + "_" + j.find("FAILURE_NAME").text
                                if prefix =="NOT_": # if a basic event is negated, it must be written as a gate 
                                    tag= r'<gate name= "'
                                    if BE_name not in neg_basic_events: neg_basic_events.append(BE_name)
                                else:  tag= r'<basic-event name= "'   
                                output_file.write (tag + prefix + BE_name + r'"/>')             
        
                        # End of gate declaration : closing the tags       
                        if GateTYPE =="ET": output_file.write ("</and>")
                        elif GateTYPE =="OU": output_file.write ("</or>")
                        elif GateTYPE =="K_SUR_N": output_file.write ("</atleast>")    
                        output_file.write (r'    </define-gate>')
    
            # Creating NOT gates pointing at negated basic events 
            for i in neg_basic_events:
                output_file.write(r'    <define-gate name="NOT_' + i + r'">')
                output_file.write (r'<not><basic-event name= "' + i + r'"/></not></define-gate>')
            
            # Final tags...
            output_file.write ("</define-fault-tree></opsa-mef>")