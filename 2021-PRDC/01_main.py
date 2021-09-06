#Script for BDMP2rDFT work.
#This script uses the following tools:
#    (1) storm_rdft
#    (2) storm_figaro
#    (3) recent version of storm for JANI/explicit formats
#    (4) GreatSPN
#    (5) dftcalc by U. Twente


import sys
import json
import csv
import datetime
import subprocess
from pathlib import Path
import concurrent.futures
from pprint import pprint
from tabulate import tabulate
import time
import os
import click
from defusedxml.ElementTree import parse as parse_xml
from bs4 import BeautifulSoup

test_cases_directory = '/users/Documents/storm-figaro-final/src/storm-figaro/figaro/'
storm_rdft_directory = '/users/Documents/storm_2/build_RDFT/bin/'
storm_figaro_directory = '/users/Documents/storm-figaro-final/build/bin/'
unfolding_directory = "/usr/local/GreatSPN/scripts/"
dspn_directory = "/usr/local/GreatSPN/bin/"
dftcalc_directory = '/users/Documents/dftcalc-master/bin/'


def ReadYams(test_case_directory, mission_time):
    with open(os.path.join(test_case_directory, 'configure.htm')) as f:
        soup = BeautifulSoup(f, "lxml")
    tables = soup.find_all("table")
    res = {}
    time_steps = 0
    for n, table in enumerate(tables[4:]):
        tds = table.find_all("td")
        if n % 2 == 0:
            name = tds[1].text.lower()
            res[name] = {}
        else:
            tds = tds[5:]
            for entry in range(len(tds) // 5):
                inst = int(tds[entry * 5].text)
                res[name][inst] = {
                    # "Mission Time": tds[entry * 5].text,
                    "Mean": tds[entry * 5 + 1].text,
                    "Confidence Interval": tds[entry * 5 + 4].text
                }
                if inst > time_steps:
                    time_steps = inst
    res["time_steps"] = mission_time
    return {"Mission_time": res["time_steps"], "Unreliability": res["unreliability"][mission_time],
            "Unavailability": res["unavailability"][mission_time]}


def RunStormRdft(test_case_directory):
    # conv = (["--to-pnpro", pnpro] if not use_storm else ["--to-jani", pnpro, "--addprops"]
    p = subprocess.run(
        [os.path.join(storm_rdft_directory, 'storm-dft'), "-dft", os.path.join(test_case_directory, "Galelio_rdft.dft"),
         "--dftGspn:to-gspn", "--exportGspn:to-pnpro", os.path.join(test_case_directory, "final.pnpro"), "--disabledc"],
        capture_output=True,
        text=True,
    )
    for line in p.stdout.splitlines():
        print(line)


def RunUnfolding2(test_case_directory):
    p = subprocess.run(
        [os.path.join(unfolding_directory, 'unfolding2'), os.path.join(test_case_directory, "final")],
        capture_output=True,
        text=True,
    )
    for line in p.stdout.splitlines():
        print(line)


def RunDftCalc(test_case_directory, mission_time):
    p = subprocess.run(
        [os.path.join(dftcalc_directory, 'dftcalc'), "-t", str(mission_time), "-v", str(5),
         os.path.join(test_case_directory, "Galelio_dftcalc.dft")],
        capture_output=True,
        text=True,
    )
    temp = True
    for line in p.stdout.splitlines():
        print(line)
        if line.startswith("P(`Galelio_dftcalc.dft") and temp:
            unreliability = line.split()[-1].strip()[7:]
            temp = False
            continue

#    p = subprocess.run(
#        [os.path.join(dftcalc_directory, 'dftcalc'), "-I", str(mission_time), str(mission_time), "-v", str(5),
#         os.path.join(test_case_directory, "Galelio_dftcalc.dft")],
#        capture_output=True,
#        text=True,
#    )
#    temp = True
#    for line in p.stdout.splitlines():
#        print(line)
#        if line.startswith("P(`Galelio_dftcalc.dft") and temp:
#            unavailability = line.split()[-1].strip()[7:]
#            temp = False
#            continue
    
    unavailability = 0
    return {"DFTcalc unreliability": unreliability, "DFTcalc unavailability": unavailability}


def RunGreatSPN(test_case_directory, mission_time):
    p = subprocess.run(
        [os.path.join(dspn_directory, "DSPN-Tool"), "-load", os.path.join(test_case_directory, "final"), "-epsilon",
         "1.0E-7", "-on-the-fly", "-i", "-gmres", "-dta-path", test_cases_directory, "-cslta0-X", " MEASURE0",
         str("PROB_TA>0 DTA_unr (t=" + str(mission_time) + "| | Phi1=#TopGate_failed>0 )")],
        capture_output=True,
        text=True)
    for line in p.stdout.splitlines():
        print(line)
        if "ACCEPTANCE PROBABILITY IS" in line:
            unreliability = line.split()[-1].strip()
    p = subprocess.run(
        [os.path.join(dspn_directory, "DSPN-Tool"), "-load", os.path.join(test_case_directory, "final"), "-epsilon",
         "1.0E-7", "-on-the-fly", "-i", "-gmres", "-dta-path", test_cases_directory, "-cslta0-X", " MEASURE0",
         str("PROB_TA>0 DTA_unavil (t=" + str(mission_time) + "| | Phi1=#TopGate_failed>0 )")],
        capture_output=True,
        text=True)
    for line in p.stdout.splitlines():
        print(line)
        if "ACCEPTANCE PROBABILITY IS" in line:
            unavailability = line.split()[-1].strip()
    #    print({"GSPN unreliability": unreliability, "GSPN unavailability": unavailability})
    return {"GSPN unreliability": unreliability, "GSPN unavailability": unavailability}


def RunStormFigaroAPI(test_case_directory, test_case):
    p = subprocess.run(
        [os.path.join(storm_figaro_directory, "test-figaro-api"), "--figarofile",
         os.path.join(storm_figaro_directory, "bin/abc.fi"), "--xml",
         os.path.join(storm_figaro_directory, "bin/abc.xml"), "--result-text",
         os.path.join(storm_figaro_directory, "bin/result.txt"),
         "--gtest_filter=FigaroAPITest.FigaroProgram_figaro_" + str(test_case)],
        capture_output=True,
        text=True)
    temp = True
    for line in p.stdout.splitlines():
        print(line)
        if line.startswith("Result:") and temp:
            unreliability = line.split()[-1].strip()[1:-1]
            temp = False
            continue
        if line.startswith("Result:"):
            unavailability = line.split()[-1].strip()[1:-1]
    # print({"Figaro unreliability":unreliability,"Figaro unavailability": unavailability})
    #    unreliability = 0
    #    unavailability = 0
    return {"Figaro unreliability": unreliability, "Figaro unavailability": unavailability}


if __name__ == "__main__":
    Results = {}
    # list_of_test_cases = [["17_09",100],["17_22",10], ["12_test",1000], ["11_inst_and",1000], ["10_vot",1000], ["09_and_inv_trig",1000], ["08_and_and_trig_common",1000], ["07_and_and_trig",1000], ["06_or_trig",100],  ["05_and_trig",1000], ["16_PAND_rep_last",10000], ["15_PAND_rep_first",10000], ['14_PAND_rep_any',10000], ['13_PAND_rep_all',10000] ,["04_and_or",100], ["03_and3",100], ["02_or",100], ["01_and",100],["17_23_A", 5000],["17_23_B", 5000]["17_23", 5000]]
    list_of_test_cases = [["17_04", 10]]
    for test_case, mission_time in list_of_test_cases:
        print("Start DFTCalc ")
        dftcalc_result = RunDftCalc(os.path.join(test_cases_directory, test_case), mission_time)
        print("FTCalc run completed ")

        # yams_result= ReadYams(os.path.join(test_cases_directory,test_case),mission_time)
        yams_result = 0
        print(test_case, "@", mission_time)

        RunStormRdft(os.path.join(os.path.join(test_cases_directory, test_case)))

        RunUnfolding2(os.path.join(os.path.join(test_cases_directory, test_case)))
        gspn_result = RunGreatSPN(os.path.join(os.path.join(test_cases_directory, test_case)), mission_time)
        figaroapi_result = RunStormFigaroAPI(os.path.join(os.path.join(test_cases_directory, test_case)), test_case)
        Results[test_case] = {"GSPN Unreliability Error":
                                  float(gspn_result["GSPN unreliability"]) - float(
                                      figaroapi_result["Figaro unreliability"]),
                              "GSPN Unavailability Error": float(gspn_result["GSPN unavailability"]) - float(
                                  figaroapi_result["Figaro unavailability"]), "DFTcalc Unreliability Error":
                                  float(dftcalc_result["DFTcalc unreliability"]) - float(
                                      figaroapi_result["Figaro unreliability"]),
                              "DFTcalc Unavailability Error": float(dftcalc_result["DFTcalc unavailability"]) - float(
                                  figaroapi_result["Figaro unavailability"]), "Yams Results": yams_result}
        print("Unreliability:", "FigaroAPI=", figaroapi_result["Figaro unreliability"], "  DftCalc=",
              dftcalc_result["DFTcalc unreliability"], "  Storm-RDFT=",
              round(float(gspn_result["GSPN unreliability"]), 7), "                    DFTCalc Error=",
              round(Results[test_case]["DFTcalc Unreliability Error"], 8), "     Storm-RDFT Error=",
              round(Results[test_case]["GSPN Unreliability Error"], 8))
        print("Unavailability:", "FigaroAPI=", figaroapi_result["Figaro unavailability"], "  DftCalc=",
              dftcalc_result["DFTcalc unavailability"], "  Storm-RDFT=",
              round(float(gspn_result["GSPN unavailability"]), 9), "                DFTCalc Error=",
              round(Results[test_case]["DFTcalc Unavailability Error"], 8), "   Storm-RDFT Error=",
              round(Results[test_case]["GSPN Unavailability Error"], 8))

        # print([test_case,": GSPN Unreliability Error  :",
        #  float(gspn_result["GSPN unreliability"]) - float(figaroapi_result["Figaro unreliability"]),
        #  "Unavailability Error:",
        #  float(gspn_result["GSPN unavailability"]) - float(figaroapi_result["Figaro unavailability"]), yams_result])
        # assert float(gspn_result["GSPN unreliability"]) - float(figaroapi_result["Figaro unreliability"]) < 1e-6
        # subprocess.run(["greatspn_editor"])

    # pprint(Results)
