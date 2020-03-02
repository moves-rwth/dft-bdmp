from FI2Bdmp import *
def main(argv):
    inputfile = ''
    outputfile = ''
    try:
        opts, args = getopt.getopt(argv, "hi:o:", ["ifile=", "ofile="])
    except getopt.GetoptError:
        print('result.py -i <inputfile> -o <outputfile>')
        sys.exit(2)
    for opt, arg in opts:
        if opt == '-h':
            print('result.py -i <inputfile> -o <outputfile>')
            sys.exit()
        elif opt in ("-i", "--ifile"):
            inputfile = arg
        elif opt in ("-o", "--ofile"):
            outputfile = arg
            compute(inputfile, outputfile)


if __name__ == "__main__":
    main(sys.argv[1:])


"""
path = '/home/shahid/modest/repairable/02-inst/'
compute(path+'and-inst.fi',path+'exp.modest')
#TestCode()




compute('09.fi','exp.modest')




for file_count in range(1,53):
    compute(str(str(file_count)+'.fi'), 'exp.modest')
    print(file_count)

"""

