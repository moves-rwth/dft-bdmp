import argparse
import json

import dft26262.funcblocks.composition as composition

import dft26262.dft.rewriting as rewriting

if __name__ == "__main__":

    parser = argparse.ArgumentParser(description='Compose a DFT with a partitioning.')

    parser.add_argument('--dft', help='the path for the dft file in JSON encoding')
    parser.add_argument('--partition', help='the path for the partition file')
    parser.add_argument('--blocks', help='the path for the file describing the logical blocks')
    parser.add_argument('--out', help='the path for the saved dft file in JSON encoding', required=True)
    args = parser.parse_args()

    if not args.dft:
        if not args.blocks:
            raise Exception("Either (--dft and --partition) or --blocks have to be given.")
    elif not args.partition:
        raise Exception("Both --dft and --partition have to be given.")

    if args.blocks:
        # Read block file
        print("Reading {}".format(args.blocks))
        # Generate DFT
        dft = composition.compose_logical_blocks(args.blocks)
    else:
        # Read DFT file
        print("Reading {}".format(args.dft))
        # Generate DFT
        dft = composition.compose_partition(args.dft, args.partition)
        print(dft)

        # Check for empty ors
        for (_, element) in dft.elements.items():
            if element.element_type == "or" and len(element.outgoing) == 0:
                print("Empty OR-gate '{}'".format(element.name))
        # Simplify DFT
    #    dft = rewriting.simplify_dft(dft)
    #    print(dft)

        # Print parameter
      #  print(dft.parameters.verbose_str())

    # Save dft again
    with open(args.out, 'w') as outFile:
        print("Writing {}".format(args.out))
        json.dump(dft.json(False), outFile, indent=4)
