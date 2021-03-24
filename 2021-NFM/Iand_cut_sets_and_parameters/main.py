
"""
Created on Sun Aug 09  2018

@author: Shahid Khan
"""
# Rudimentary implementation of I& AB method
# Input: cutsets.text, parameters.txt
#Output: Unreliability corresponding to a given mission time. In this script I hardcode the mission time as 10000
# Note: At present I am using only one cutsets.txt file but intention is to automate the procedure using KB3.


# The only basic events that are handled are GLM models
import pprint
import sys
import os
import re
import math

from functions import *


# import library for XML files
# from lxml import etree

if __name__ == "__main__":
    # The script must be launched by a command  python KB3TOOI&AB.py ...
    # so that arguments can be fetched !!

    # For tests, launch without arguments, which will use the hard coded names for files
    # NB: sys.argv[0] is the absolute name of the program itself
    if len(sys.argv) == 1:
        work_directory = os.getcwd() #+ "/I&_ABkeepasreference"
        cutsets_file_path = work_directory +"/min_cuts.txt" # Cut set file
        paramters_file_path =work_directory + "/PARAMS_FT.txt" # Parameters of basic events as GLM format aka relaibility data
        output_file_path =work_directory + "/result_pythonInAB.txt"  # contain mission time and resulting probability. REM: this value must corresond to patehnt values

        params_file_path = "PARAMS_FT.txt"  # reliability data
        mu_params_file_path = "mu_params.txt"  # repair rates only. For the prototype in RiskSpectrum
        # ToDO: change these file paths later.
    # else:  # the program was launched with two arguments
    #     input_file_path = sys.argv[1]
    #     work_directory = sys.argv[2]  # there must be no '\' at the end!
    #     output_file_path = work_directory + '\\OPSA_FT.xml'
    #     params_file_path = work_directory + '\\PARAMS_FT.txt'
    #     mu_params_file_path = work_directory + '\\mu_params.txt'

# Loading the file containing the FT
# print(cutsets_file_path)
# f = open(cutsets_file_path, "r")
# print(f.read())
mission_time = 10000
parameters = ReadParameters(paramters_file_path)
# pprint.pprint(parameters)
cutsets = ReadCutSets(cutsets_file_path)
# pprint.pprint(cutsets)
lambda_eq = ComputeCutsets(cutsets, parameters)
probability = 1 - math.exp(-1 * lambda_eq * mission_time)
print("The result for Mission Time '", mission_time, "' is = ", probability)
with open(output_file_path, "w") as file_object:
    file_object.write("The result for Mission Time '"+ str(mission_time) + "' is = "+ str(probability))

