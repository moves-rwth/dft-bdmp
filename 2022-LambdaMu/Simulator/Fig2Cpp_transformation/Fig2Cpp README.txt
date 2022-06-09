This directory contains an example of input and output files of Fig2Cpp.py, with their default names.
This example can be run by the simple command: Fig2Cpp

The first 4 arguments of Fig2Cpp.py are there for compatibility with the previous operation, but they are optional.
A typical conversion towards FigaroModel.cpp and FigaroModel.h is launched in this way:
Fig2Cpp -fig0 PathOfFigaro0File [-a PathOfAnalysisFile]

Note that the template contains a compilation parameter called INTERACTIVE. 
It is possible to define it with gcc using the compilation parameter -DINTERACTIVE.


Below is the help you can obtain by lauching Fig2Cpp.py with one of the arguments:   -h or --help  

usage: Fig2Cpp [-h] [-fig0 FIG0] [-a A] [-cpp CPP] [-hpp HPP] [-v]
               [arg1] [arg2] [arg3] [arg4]

positional arguments:
  arg1        Base directory or fig0 file (if more than 1 positionnal args, override -fig0)
  arg2        Analysis file (override -a)
  arg3        cpp output file (override -cpp)
  arg4        h output file (override -hpp)

optional arguments:
  -h, --help  show this help message and exit
  -fig0 FIG0  Fig0 input file (by default export_fig0.fi)
  -a A        Analysis input file (by default analysis.xml)
  -cpp CPP    cpp output file (by default FigaroModel.cpp)
  -hpp HPP    h output file (by default FigaroModel.h)
  -v          show program's version number and exit


