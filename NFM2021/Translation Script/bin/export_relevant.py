import argparse

import dftlib.io.parser
import dftlib.transformer.trimming

if __name__ == "__main__":
    parser = argparse.ArgumentParser(description='Export string of relevant DFT events.')

    parser.add_argument('--dft', '-i', help='The path for the dft file in JSON encoding', required=True)
    args = parser.parse_args()

    # Read DFT file
    print("Reading {}".format(args.dft))
    dft = dftlib.io.parser.parse_dft_json(args.dft)

    relevant = []
    for elem in dft.elements.values():
        if elem.relevant:
            relevant.append(elem.name)

    rel_str = ",".join("{}".format(rel) for rel in relevant)
    print('--relevantevents "{}"'.format(rel_str))
