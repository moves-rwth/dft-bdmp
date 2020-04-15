import os
import os.path
import sys, getopt
import subprocess
import re
import time
import argparse
import math
import itertools
from ast import literal_eval
import pprint

def isclose(a, b, rel_tol=1e-09, abs_tol=0.0):
    # Needs python >= 3.5
     return math.isclose(a, b, rel_tol=rel_tol, abs_tol=abs_tol)
     # For python < 3.5
     #if a == b:
     #    return True
     #if a == float('inf'):
     #    return b == float('inf')
     #if b == float('inf'):
     #   return a == float('inf')
     #return abs(a - b) <= max(rel_tol * max(abs(a), abs(b)), abs_tol)

if __name__ == "__main__":
    result1 = {}
    result2 = {}
    STORMPATH = os.path.expanduser("~/storm/build/bin/storm")
    PNPROPATH = os.path.expanduser("~/modest/repairable/BENCHMARK/BENCHMARK.PNPRO")
    JANIPATH = os.path.expanduser("~/modest/repairable/BENCHMARK/temp.jani")
    arg = [ str(STORMPATH + "-gspn") , "-gspn", PNPROPATH , "--exportGspn:to-jani" , JANIPATH]
    pipe = subprocess.Popen(arg, stdout=subprocess.PIPE, stderr=subprocess.STDOUT)
    arg = [STORMPATH, '--jani', JANIPATH, "--prop", "Tmax=? [F FAIL>0]", "--buildfull", "--buildstateval" , "--exact"]
    pipe = subprocess.Popen(arg, stdout=subprocess.PIPE, stderr=subprocess.STDOUT)
    pprint.pprint(pipe)
    for line in iter(pipe.stdout.readline, ""):
        print(line)
        if not line and pipe.poll() is not None:
            break
        output = line.decode(encoding='UTF-8').rstrip()
        print(output)
        if output != "":
            result1 = output
    arg = [STORMPATH, '--jani', JANIPATH, "--prop", "Tmin=? [F FAIL>0]", "--buildfull", "--buildstateval", "--exact"]
    pipe = subprocess.Popen(arg, stdout=subprocess.PIPE, stderr=subprocess.STDOUT)
    for line in iter(pipe.stdout.readline, ""):
        if not line and pipe.poll() is not None:
            break
        output = line.decode(encoding='UTF-8').rstrip()
        match = re.search(r"\b Result (for initial states): (.*)/(.*) (approx. (.*)",output)
        if match:
            print("The results")
            print(match)

            sys.exit()
    print("Final result")
    print(result2)
    print(result1)
    sys.exit()
    if isclose(result1, result2, rel_tol=1e-09, abs_tol=0.0):
        print("No Nondeterminism present in the mdel")
    else:
        print("Test Fail")
        print("Tmax: ", result1)
        print("Tmin: ", result1)



