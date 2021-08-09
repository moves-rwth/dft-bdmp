import argparse
import json
import os
import time

from dft26262.dft.dft import Dft
from dft26262.dft.rewriting import simplify_dft
import dft26262.analysis.model_checking as mc
import stormpy


def analyse(name, func, *arguments):
    print(name)
    start = time.time()
    result = func(*arguments)
    end = time.time()
    analysis_time = end - start
    print("\tResult: {}".format(result))
    print("\tTime:   {:.2f}s".format(analysis_time))
    return result


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description='Analyse a DFT with a partitioning.')

    parser.add_argument('--dft', help='The path for the dft file in JSON encoding', required=True)
    parser.add_argument('--tmp-dir', help='Directory for temporariy files', required=True)
    parser.add_argument('--storm', help='The path for the Storm build directory', required=True)
    parser.add_argument('--comp', help='component(s) for which to compute the sensitivity', required=True)
    args = parser.parse_args()

    components = args.comp.split(",")

    results = []
    storm_dft = os.path.join(args.storm, "bin", "storm-dft")

    dft_name, end = os.path.splitext(os.path.basename(args.dft))
    json_file = os.path.join(args.tmp_dir, dft_name + "-tmp.json")
    drn_file = os.path.join(args.tmp_dir, dft_name + "-tmp.drn")

    if end == ".json":
        # Load DFT
        with open(args.dft) as f:
            dft = Dft(json.load(f))

        # Simplify DFT
        dft = simplify_dft(dft)
        print(dft)

   # Load model
    print("Loading model")
    start_time = time.time()
    if end == ".json":
        print("Load from json")
        model = stormpy.dft.build_sparse_model_from_json_dft(args.dft, True)
        model = mc.load_model_via_drn(dft, json_file, drn_file, storm_dft, instantiate)
    else:
        assert end == ".drn"
        print("Load from DRN")
        model = stormpy.build_model_from_drn(args.dft)

    end_time = time.time()
    building_time = end_time - start_time
    print("Model building")
    assert len(model.initial_states) == 1
    print("\tModel:  {} states, {} transitions".format(model.nr_states, model.nr_transitions))
    print("\tTime:   {:.2f}s".format(building_time))

    for comp in components:
        print("Component {}".format(comp))
        contained_labels = ['{}_failed'.format(comp), 'skipped']
        avoid_labels = []
        failed_labels = ['failed', 'skipped']
        analyse("MTDF 3", mc.analyse_remaining_expected_time3, model, contained_labels, avoid_labels, failed_labels)
        analyse("MTDF 2", mc.analyse_remaining_expected_time2, model, contained_labels, avoid_labels, failed_labels)
