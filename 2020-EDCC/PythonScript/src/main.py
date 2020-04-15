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
            Priority = {}
            Priority['REPAIR'] = '103'
            Priority['FAIL'] = '104'
            Priority['BE_FAIL'] = '105'
            Priority['ACTIVE'] = '1'
            Priority['DEACTIVE'] = '102'
            Priority['Repairable'] = 'True'
            compute(inputfile, outputfile, Priority)


if __name__ == "__main__":
    main(sys.argv[1:])

"""
path = '/home/shahid/modest/repairable/02-inst/'
compute(path+'and-inst.fi',path+'exp.modest')
#TestCode()



compute('or.fi','exp.net')

 sys.exit()

for file_count in range(0,53):
    print('TEST NUMBER', file_count+1)
    compute(str(str(file_count+1)+'.fi'), 'exp.modest')
    #ssut("inspect thoroughly")

compute('50.fi', 'exp.modest',1)
"""




