import argparse
import json
import os
import time

from dft26262.dft.dft import Dft
from dft26262.dft.rewriting import simplify_dft, make_anonymous
import dft26262.analysis.model_checking as mc


def analyse(name, func, *arguments):
    global export, export_list
    print(name)
    start = time.time()
    result = func(*arguments)
    end = time.time()
    analysis_time = end - start
    print("\tResult: {}".format(result))
    print("\tTime:   {:.2f}s".format(analysis_time))
    if export:
        export_list += [result, "{:.2f}".format(analysis_time)]
    return result


if __name__ == "__main__":
    global export, export_list

    parser = argparse.ArgumentParser(description='Analyse a DFT with a partitioning.')

    parser.add_argument('--dft', help='The path for the dft file in JSON encoding', required=True)
    parser.add_argument('--tmp-dir', help='Directory for temporariy files', required=True)
    parser.add_argument('--storm', help='The path for the Storm build directory', required=True)
    parser.add_argument('--eval', help='Evaluation to consider (normal, high, low)', default='normal')
    parser.add_argument('--export', help='Export results into given file', default=None)
    args = parser.parse_args()

    # Scenarios
    evaluations = {
        # Name, evaluation
        "normal": {"rSensorsInt": 100e-9, "rActuatorInt": 100e-9, "rHW": 100e-9, "rTrans": 100000e-9, "rPerm": 10000e-9,
                   "rSafety": 10000e-9, "rCovD": 0.99, "rCovB": 0.90, "rCovQM": 0.6, "dfb_Path": 0},
        "high": {"rSensorsInt": 100e-9, "rActuatorInt": 100e-9, "rHW": 100e-9, "rTrans": 100000e-9, "rPerm": 10000e-9,
                 "rSafety": 10000e-9, "rCovD": 0.999, "rCovB": 0.99, "rCovQM": 0.9, "dfb_Path": 0},
        "low": {"rSensorsInt": 100e-9, "rActuatorInt": 100e-9, "rHW": 100e-9, "rTrans": 100000e-9, "rPerm": 10000e-9,
                "rSafety": 10000e-9, "rCovD": 0.90, "rCovB": 0.6, "rCovQM": 0.0, "dfb_Path": 0},
    }
    scenarios = {
        # File name, (normal path, safe/fb path)
        "safety_concept_1_a": (None, None),
        #Falak: Added below line
        "safety_concept_1_a_sys_hard": (None, None),
        "safety_concept_1_b_sys_hard": (None, None),
        # "safety_concept_2a_a": ("n_Path", "s_Path"),  # V
        "safety_concept_2a_a": ("failed", "failed"),  # V
        "sc_5": ("failed", "failed"),  # V
        "safety_concept_2b_a": ("n_Path", "s_Path"),
        "safety_concept_3_a": ("m_Path", "fb_Path"),
        "sc_1": (None, None),  # I
        "safety_concept_1_b": (None, None),  # I
        #Falak: Added below line
        "sc2b_2bb_hard": ("nPath", "sPath"),  # II
        "sc2a_b_hard": ("nPath", "sPath"),  # II
        "safety_concept_2a_b": ("n_Path", "s_Path"),  # II
        "sc_2": ("n_Path", "s_Path"),  # II
        "safety_concept_2b_b": ("n_Path", "s_Path"),  # III
        "sc_3": ("n_Path", "s_Path"),  # III
        # "safety_concept_3_b_fixed": ("m_Path", "fb_Path"),  # IV
        "safety_concept_3_b": ("m_Path", "failed"),  # IV
        "safety_concept_3_b_fixed": ("m_Path", "failed"),  # IV
        "safety_concept_3_b_static": ("m_Path", "failed"),  # IV
        "sc_4": ("m_Path", "failed"),  # IV
        "safety_concept_1_c": (None, None),
        # "safety_concept_2a_c": ("n_Path", "s_Path"),  # VI
        "safety_concept_2a_c": ("n_Path", "failed"),  # VI
        "sc_6": ("n_Path", "failed"),  # VI
        "safety_concept_2b_c": ("n_Path", "s_Path"),
        "safety_concept_3_c": ("m_Path", "fb_Path"),
        "safety_concept_2a_d": ("n_Path", "s_Path"),
        "safety_concept_2a_e": ("n_Path", "s_Path"),
        "safety_concept_2a_e_scaled": ("n_Path", "s_Path"),
        "safety_concept_2a_e_scaled_fixed": ("n_Path", "s_Path"),  # VII
        "sc_7": ("n_Path", "s_Path"),  # VII
        "safety_concept_2a_f_scaled": ("n_Path", "s_Path"),
        "safety_concept_2a_f_scaled_fixed": ("n_Path", "s_Path"),  # VIII
        "sc_8": ("n_Path", "s_Path"),  # VIII
        "safety_concept_2a_g_scaled_fixed": ("n_Path", "s_Path"),  # IX
    }

    # Initialize
    #Falak: tb_start changed from 0 to 500
    tb_start = 10000
    tb_end = 20000
    # tb_end = 10000
    tb_inc = 10000
    # tb_inc = 100
    time_bound = 10000

    derivation = True
    results = []
    instantiate = True
    storm_dft = os.path.join(args.storm, "bin", "storm-dft")
    export = (args.export is not None)
    export_list = []

    if args.eval not in evaluations:
        print("Evaluation {} not known.".format(args.eval))
    evaluation = evaluations[args.eval]

    dft_name, _ = os.path.splitext(os.path.basename(args.dft))
    json_file = os.path.join(args.tmp_dir, dft_name + "-tmp.json")
    drn_file = os.path.join(args.tmp_dir, dft_name + "-tmp.drn")

    if dft_name not in scenarios:
        print("Scenario {} not known.".format(dft_name))
    n_path, s_path = scenarios[dft_name]

    # Load DFT
    with open(args.dft) as f:
        dft = Dft(json.load(f))

    if export:
        no_be, no_dyn, no_elements = dft.statistics()
        export_list += [no_be, no_dyn, no_elements]

    # Simplify DFT

    dft = simplify_dft(dft)
    print(dft)
    if export:
        no_be, no_dyn, no_elements = dft.statistics()
        export_list += [no_be, no_elements]

    strEval = "Changed parameters"
    no_param = 0
    for param, value in evaluation.items():
        if param in dft.parameters.parameters:
            dft.parameters.change_evaluation(param, value)
            strEval += ", {} = {}".format(param, value)
            no_param += 1
        else:
            print("Parameter {} not known.".format(param))
    print(strEval)
    if export:
        export_list += [no_param, ""]

    #Falak: Added make_anonymous fucntion to make DFT anonymous before applying model-checking
   # make_anonymous(dft,True)
    # Load model
    print("Loading model")
    start_time = time.time()



    #Falak: Uncommented to generate model
    #model = mc.load_model_via_stormpy(dft, json_file, instantiate)
    #Falak: Commented because of error while model generation
    model = mc.load_model_via_drn(dft, json_file, drn_file, storm_dft, instantiate)
    end_time = time.time()
    building_time = end_time - start_time
    print("Model building")
    assert len(model.initial_states) == 1
    print("\tModel:  {} states, {} transitions".format(model.nr_states, model.nr_transitions))
    print("\tTime:   {:.2f}s".format(building_time))
    if export:
        export_list += ["{:.2f}".format(building_time), model.nr_states, model.nr_transitions, ""]

    # if not instantiate:
    #    parameters = model.collect_probability_parameters()
    #    instantiator = stormpy.ModelInstantiator(model)
    #    # TODO instantiate from json
    #    evaluation = dict()
    #    for param in parameters:
    #        evaluation[param] = 10
    #    print("Evaluation: " + ", ".join(["{} = {}".format(param, evaluation[param]) for param in parameters]))
    #    model = instantiator.instantiate(evaluation)

    # Export model to DRN for debugging purposes
    # stormpy.export_to_drn(model, "test.drn")

    # Analyse model
    #analyse("Probability", mc.analyse_probability, model)
    analyse("Integrity", mc.analyse_timebound, model, time_bound)
    analyse("FIT", mc.analyse_fit, model, time_bound)
    analyse("MTTF", mc.analyse_mttf, model)
    if export:
        export_list += ["", ""]
    #exit(0)

    # Timepoints
    start_time = time.time()
    if derivation:
      result = mc.analyse_timepoints(model, tb_start, tb_end + tb_inc, tb_inc, "\"failed\"")
    else:
      result = mc.analyse_timepoints(model, tb_start, tb_end, tb_inc, "\"failed\"")
    print("Result for timepoints: {}".format(result))
    results.append((dft_name + "_" + args.eval, result))
    endTime = time.time()
    print("Time: {:.2f}s".format(end_time - start_time))
    print(results)

    # Analysis for degraded states
    print(model.labeling.get_labels())
    if n_path:
        n_path_label = mc.get_label(model, n_path)
        s_path_label = mc.get_label(model, s_path)
        print("{}, {}".format(n_path_label, s_path_label))
        analyse("FFA", mc.analyse_timebound, model, time_bound, "\"{}\" | \"failed\"".format(n_path_label))
        #Falak: commented by Falak
        #fwd = analyse("FWD", mc.analyse_timebound, model, time_bound, "\"failed\"", "\"{}\" & !\"{}\"".format(n_path_label, s_path_label))
        #Falak: added by Falak
        fwd = analyse("FWD", mc.analyse_timebound, model, time_bound, "\"failed\" & !\"{}\"".format(s_path_label), "\"{}\"".format(n_path_label))
        #Falak: Updaged by Falak
        #analyse("MTDF 3", mc.analyse_remaining_expected_time3, model, n_path_label, s_path_label, ["failed"])
     #   analyse("MTDF 3", mc.analyse_remaining_expected_time3, model, [n_path_label], [s_path_label, "failed"], ["failed"])

      #added by ahmad

        analyse("MTDF 3", mc.analyse_remaining_expected_time2, model, [n_path_label], [s_path_label], ["failed"])

        ##

        # Falak: Updaged by Falak
        #analyse("MDR", mc.analyse_remaining_timebound, model, n_path_label, s_path_label, time_bound)
        analyse("MDR", mc.analyse_remaining_timebound, model, [n_path_label], [s_path_label, "failed"], ["failed"], time_bound)
        #Falak: updated flod = analyse("FLOD 3", mc.analyse_flod3, model, n_path_label, s_path_label, time_bound, 1)
        flod = analyse("FLOD 3", mc.analyse_flod3, model, [n_path_label], [s_path_label, "failed"], ["failed"], time_bound, 1)
        analyse("SILFO 3", mc.analyse_silfo3, fwd, flod)

        # analyse("MTDF 2", mc.analyse_remaining_expected_time2, model, n_path_label, s_path_label)
        # analyse("SILFO 2", mc.analyse_silfo2, model, n_path_label, s_path_label, time_bound, 1)
        # analyse("MTDF", mc.analyse_remaining_expected_time, model, n_path_label, s_path_label)
        # analyse("MDR 2", mc.analyse_remaining_timebound2, model, n_path_label, s_path_label, time_bound)
        # analyse("SILFO", mc.analyse_silfo, model, n_path_label, s_path_label, time_bound, 1)
        flod4 = analyse("FLOD 3 with drive cycle 1000", mc.analyse_flod3, model, [n_path_label], [s_path_label], ["failed"], time_bound, 1000)
        analyse("SILFO 3 with drive cycle 4", mc.analyse_silfo3, fwd, flod4)
        # analyse("SILFO with drive cycle 4", mc.analyse_silfo, model, n_path_label, s_path_label, time_bound, 4)

        if export:
            export_list += ["", ""]

        print("Number of degraded states")
        start = time.time()
        #Falak: result = len(mc.get_degraded_states(model, n_path_label, s_path_label))
        result = len(mc.get_degraded_states(model, [n_path_label], [s_path_label], ["failed"]))
        end = time.time()
        analysis_time = end - start
        print("\tResult: {}".format(result))
        print("\tTime:   {:.2f}s".format(analysis_time))
        if export:
            export_list += [result, "{:.2f}".format(analysis_time)]

        # Timepoints degraded
        start_time = time.time()

        result = mc.analyse_silfo_timepoints(model, tb_start, tb_end, tb_inc, [n_path_label], [s_path_label], ["failed"], 1)
        print("Result for SILFO timepoints: {}".format(result))
        results.append((dft_name + "_silfo_" + args.eval, result))
        end_time = time.time()
        print("Time: {}".format(end_time - start_time))
    else:
        print("No label for degradation given.")

    # Write result


    #Falak: updated to set the right folder
    outputFile = os.path.join("./files/results/", "timepoints.csv")

    with open(outputFile, 'w') as f:
        f.write("time")
        for name, _ in results:
            f.write(";{0}".format(name))
            if derivation:
                f.write(";{0}-der".format(name))
        f.write("\n")

        t = tb_start
        j = 0
        while t <= tb_end:
            f.write("{}".format(t))
            for _, result in results:
                res = result[j]
                f.write(";{}".format(res))
                if derivation:
                    if j > 0:
                        res = res /t
                    else:
                        res = 0
                    #assert j < len(result)
                    #if j + 1 < len(result):
                    #    res = ((result[j + 1] - result[j]) / tb_inc) / (1 - result[j])
                    #else:
                    #    res = ((result[j] - result[j - 1]) / tb_inc) / (1 - result[j - 1])
                    # if t == 0:
                    #    res = result[j] / 1
                    # else:
                    #    res = result[j] / t
                    f.write(";{}".format(res))
            f.write("\n")
            t += tb_inc
            j += 1
    # print("Results written to {}".format(outputFile))
    if export:
        with open(args.export, 'w') as f:
            for res in export_list:
                f.write("{}\n".format(res))
