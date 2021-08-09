import stormpy
import stormpy.core
import json
import stormpy.examples
import stormpy.examples.files
import time
from dft26262.utility.os_functions import run_tool
from dft26262.dft.dft import Dft
from dft26262.dft.rewriting import simplify_dft, make_anonymous
import dft26262.analysis.model_checking as mc

import numpy as np

storm_path = '/Users/shahidkhan/Documents/storm'
project_path = '/Users/shahidkhan/Documents'

def analyse(name, func, *arguments):
    print(name)
    start = time.time()
    result = func(*arguments)
    end = time.time()
    analysis_time = end - start
    print("\tResult: {}".format(result))
    print("\tTime:   {:.2f}s".format(analysis_time))
    return result


def generateJSON(dft_file, generated_json_file):
    arguments = [storm_path + "/build/bin/storm-dft", "-dft", dft_file, "--dftIO:export-json", generated_json_file]
    run_tool(arguments, True)
    with open(generated_json_file) as f:
        json_obj = json.load(f);
        parameters = {}
        for i in range(len(json_obj['nodes'])):
            if (json_obj['nodes'][i]['data']['type'] == 'be_exp'):
                name = json_obj['nodes'][i]['data']['name']
                rate_name = "rate" + name
                dorm_name = "dorm" + name
                json_obj['nodes'][i]['data']['rate'] = rate_name
                # json_obj['nodes'][i]['data']['dorm'] = dorm_name
                parameters[rate_name] = 0.00001
            # parameters[dorm_name] = 0.0

        json_obj['parameters'] = parameters
        dft = Dft(json_obj)
        print(dft)
        f.close()
        with open(generated_json_file, 'w') as outFile:
            json.dump(dft.json(False), outFile, indent=4)
            print("Written to {}".format(dft))
            outFile.close()

def updateParameters(generated_json_file,parameters_file,updated_Dft):

    with open(generated_json_file) as f:
        json_obj = json.load(f);
        with open(parameters_file) as p:
            parameters = json.load(p);
            p.close()
        for key in json_obj['parameters']:
            json_obj['parameters'][key] = parameters['parameters'][key]
        dft = Dft(json_obj)
        f.close()
        with open(updated_Dft, 'w') as outFile:
            json.dump(dft.json(False), outFile, indent=4)
            print("Written to {}".format(dft))
            outFile.close()

def generateFinalDFT(updated_Dft,final_Dft):

    with open(updated_Dft) as f:
        json_obj = json.load(f)
        dft = Dft(json_obj)
        dft = simplify_dft(dft)
        print(dft)
        f.close()
        with open(final_Dft, 'w') as outFile:
            print("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nline 79 of test.yp cause problem, i.e., dft.json(True)")
            dft.json(True)
            print("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nthe problem is with dft.json")
            json.dump(dft.json(True), outFile, indent=4)
            print("Written to {}".format(dft))
            outFile.close()


def generate_drn_file(final_Dft, generated_drn_file, time_bound, approximation_required,approximation_value, degraded_label):

    if approximation_required:
        arguments = [storm_path + "/build/bin/storm-dft", "--dftfile-json", final_Dft, "--timebound",
                     str(time_bound), "--firstdep", "-bisim", "-approx", str(approximation_value),"--io:exportexplicit",
                     generated_drn_file, "--relevantevents", degraded_label]
        run_tool(arguments, False)

    else:
        arguments = [storm_path + "/build/bin/storm-dft", "--dftfile-json", final_Dft, "--timebound", str(time_bound),
                     "--firstdep", "-bisim", "--io:exportexplicit", generated_drn_file, "--relevantevents",
                     degraded_label]
        run_tool(arguments, False)


def generate_drn_file_mttf(final_Dft, generated_drn_file, time_bound, approximation_required,approximation_value, degraded_label):

    if approximation_required:
        arguments = [storm_path + "/build/bin/storm-dft", "--dftfile-json", final_Dft, "-mttf" ,"--firstdep", "-bisim",  "-approx", str(approximation_value),"--io:exportexplicit",
                     generated_drn_file, "--relevantevents", degraded_label]
        run_tool(arguments, False)
    else:
        arguments = [storm_path + "/build/bin/storm-dft", "--dftfile-json", final_Dft, "-mttf",
                     "--firstdep", "-bisim", "--io:exportexplicit", generated_drn_file, "--relevantevents",
                     degraded_label]
        run_tool(arguments, False)


def generateResults(generated_drn_file,degraded_label, time_bound, drive_cycle):
    model = stormpy.build_model_from_drn(generated_drn_file)
    analyse("Reliability Complement", mc.analyse_timebound, model, time_bound)
    analyse("PFH", mc.analyse_fit, model, time_bound)
    analyse("MTTF", mc.analyse_mttf, model)

    # Pre Processing for Degradation States

    n_path_label = ""
    labels = degraded_label.split(',')
    length = len(labels)
    for i in range(length):
        n_path_label = n_path_label + "\"" + mc.get_label(model, labels[i]) + "\""
        if i != length - 1:
            n_path_label = n_path_label + " | "
    n_path_label_array = []
    for i in range(length):
        n_path_label_array.append(mc.get_label(model, labels[i]))

    # Degradations Results

    mission_time = 180
    warranty_time = 5
    # analyse(str("P("+str(mission_time)+"|"+str(time_bound)+")"), mc.analyse_conditional_reliability, model, mission_time, time_bound, "{}  | \"failed\"".format(n_path_label))
    # analyse(str("B(" + str(warranty_time) + ")"), mc.analyse_b_x_life, model, warranty_time, "{}  | \"failed\"".format(n_path_label))
    # analyse("FFA", mc.analyse_timebound, model, time_bound, "{}  | \"failed\"".format(n_path_label))
    fwd = analyse("FWD", mc.analyse_timebound, model, time_bound, "\"failed\"", "{}".format(n_path_label))
    # analyse("MTDF", mc.analyse_remaining_expected_time2, model, n_path_label_array, [], ["failed"])
    # analyse("MDR", mc.analyse_remaining_timebound, model, n_path_label_array, ["failed"], ["failed"], time_bound)
    flod = analyse("FLOD", mc.analyse_flod3, model, n_path_label_array, ["failed"], ["failed"], time_bound, drive_cycle)
    analyse("SILFO", mc.analyse_silfo3, fwd, flod)

if __name__ == '__main__':

    scenario_no = "1"
    # degraded_label = ""
    degraded_label = "Electric_pump_fails,Diesel_pump_fails,No_water_from_town_main1,No_water_from_town_main2,Diesel_generator_fail,No_water_from_pumps_bypass_town_main,PS1_faulty,PS2_faulty,PS1_dp_faulty,PS2_dp_faulty,Flat_battery"  #1

    #degraded_label = "S3S2_Supply1_Fault,MWaterSupply1_Failure"  #1

    # degraded_label = "Grid_Power_Failure,S3S2_Supply1_Fault,MWaterSupply1_Failure"  # 2
    #degraded_label = "S2_PRoom_PreRed1_Fault,GTank1_Fault,PumpSys1_Fault,STank1_Fault,Grid_Power_Failure,S3S2_Supply1_Fault,MWaterSupply1_Failure"  # 3
    #degraded_label = "S2_PRoom_PreRed1_Fault,Riser_Pipe1_Fault,GTank1_Fault,PumpSys1_Fault,STank1_Fault,Grid_Power_Failure,S3S2_Supply1_Fault,MWaterSupply1_Failure"  # 4

    approximation_value = 0.001  # [0.05,0.04,0.03,0.02,0.01]
    approximation_required = False  # Can be set false if original results required

    time_bound = 730  # 1 month 30 * 24 = 720 hours
    drive_cycle = 6  # 1 week * 24 = 180 hours


    original_dft_file = project_path + "/fire_sprinkler_system/fire_sprinkler_scenarios/scenario_" + scenario_no + ".dft"
    generated_json_file = project_path + "/fire_sprinkler_system/fire_sprinkler_scenarios/json/scenario_" + scenario_no + ".json"
    parameters_file = project_path + "/fire_sprinkler_system/fire_sprinkler_scenarios/parameters/parameters" + scenario_no + ".json"
    updated_Dft = project_path + "/fire_sprinkler_system/fire_sprinkler_scenarios/json/scenario_" + scenario_no + "_updated.json"
    final_Dft = project_path + "/fire_sprinkler_system/fire_sprinkler_scenarios/json/scenario_" + scenario_no + "_final.json"
    generated_drn_file = project_path + "/fire_sprinkler_system/fire_sprinkler_scenarios/drn/scenario_" + scenario_no + ".drn"
    generated_drn_file_mttf = "/fire_sprinkler_system/fire_sprinkler_scenarios/drn/scenario_" + scenario_no + "_mttf.drn"

    # Step 1 Generate DFT JSON with Default Rate Parameters 0.1
    # generateJSON(original_dft_file, generated_json_file)
    print("JSON generated")
    # Step 2 Update Parameters in json file
    # updateParameters(generated_json_file, parameters_file, updated_Dft)

    print("parameters updated")
    # Step 3 Simplify DFT and generate final DFT
    # generateFinalDFT(updated_Dft, final_Dft)
    # print("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nfinal DFT generated")
    # Step 4 Generate DRN File
    # generate_drn_file(final_Dft, generated_drn_file, time_bound, approximation_required, approximation_value,degraded_label)
    print("DRN generated")

    # Manually Update DRN File

    # Step 5 Compute Results
    generateResults(generated_drn_file, degraded_label, time_bound, drive_cycle)