import argparse
import json

from dft26262.dft.dft import Dft
import dft26262.dft.rewriting as rewriting

if __name__ == "__main__":
    parser = argparse.ArgumentParser(description='Simplify a DFT by rewriting.')

    parser.add_argument('--dft', help='The path for the dft file in JSON encoding', required=True)
    parser.add_argument('--out', help='The path for the saved dft file in JSON encoding', required=True)
    args = parser.parse_args()

    # Read DFT file
    print("Reading {}".format(args.dft))
    with open(args.dft) as jsonFile:
        dft = Dft(json.load(jsonFile))
    print(dft)

    rewriting.simplify_dft(dft)
    print(dft)

    # Save dft again
    with open(args.out, 'w') as outFile:
        json.dump(dft.json(), outFile, indent=4)
