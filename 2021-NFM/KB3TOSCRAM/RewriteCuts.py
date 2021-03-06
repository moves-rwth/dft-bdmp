# -*- coding: utf-8 -*-
"""
Created on Thu Jan 26 16:02:33 2017

@author: Marc
"""

# Input file = cut sets generated by SCRAM (in XML)
# Output file = plain text, one cut set per line

import re
import sys
if __name__ == "__main__":
# Le script doit être lancé par une commmande python RewriteCuts.py ...
# pour qu'on puisse récupérer les arguments !!

# Pour tests, lancer sans arguments, ce qui utilisera les fichiers avec noms en dur
# NB: sys.argv[0] est le nom absolu du programme lui-meme
# The script must be started with a python command RewriteCuts.py ...
# so that we can retrieve the arguments !!

# For tests, run without arguments, which will use the files with hard names
# NB: sys.argv [0] is the absolute name of the program itself
    if len(sys.argv)==1:
        input_file_path = "result.xml"
        output_file_path = "min_cuts.txt"
    else: # le programme a été lancé avec deux arguments
       input_file_path = sys.argv[1]
       repertoire_origine = sys.argv[2]
       output_file_path = repertoire_origine + '\\min_cuts.txt'
       
# Pour toute structure de la forme       
#       <product order="1">
#        <basic-event name="ValidityMonitorFailure"/>
#      </product>
#  récupérer la liste des names de basic events
#with open(output_file_path, "w") as output_file:
          
# traitement du fichier d'entrée ligne par ligne (attention, c'est simple mais
# on écrit un blanc à la fin des lignes et une ligne vide en fin de fichier !)

# For any structure of the form
# <product order = "1">
# <basic-event name = "ValidityMonitorFailure" />
# </product>
# get the list of names of basic events
#with open (output_file_path, "w") as output_file:
          
# processing the input file line by line (be careful, it's simple but
# we write a blank at the end of the lines and an empty line at the end of the file!)
with open(output_file_path, "w") as output_file:
    source = open(input_file_path,'r')      
    for line in source:
# on écrit les classes au fil de l'eau 
        match = re.compile(r'<basic-event name=(.*?)/>').search(line)
        if match != None:
            BE = match.group(1).strip('"')
            output_file.write(BE + ' ')
        endproduct = re.compile(r'</product>').search(line)
        if endproduct != None:
            output_file.write("\n")
       
