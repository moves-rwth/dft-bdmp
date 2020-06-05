#!/usr/bin/env python3

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

import click
from defusedxml.ElementTree import parse as parse_xml
from bs4 import BeautifulSoup

working_dir = sys.path[0]
yams_csv_file = f"{working_dir}/light-examples/testcasesresults.csv"
storm = f"{working_dir}/storm/cmake-build-debug/bin/storm"
storm_bdmp = f"{storm}-bdmp"
if Path("/opt/greatspn").exists():
    dspn_tool = "/opt/greatspn/bin/DSPN-Tool"
    greatspn_classpath = (
        "/opt/greatspn/bin/Editor.jar:/opt/greatspn/bin/lib/antlr-runtime-4.2.1.jar"
    )
else:
    dspn_tool = "/usr/local/GreatSPN/bin/DSPN-Tool"
    greatspn_classpath = "/usr/local/GreatSPN/bin/Editor.jar:/usr/local/GreatSPN/bin/lib/antlr-runtime-4.2.1.jar"
dta_path = f"{working_dir}/dta"
yams_precision = 1e-8
yams_round_to = 7
only_99 = True

# STORM unrel: ./storm/cmake-build-debug/bin/storm --jani light-examples/06.jani --constants TIME_BOUND=100 --prop "Pmin=? [F<=100 UE_1>0] " --precision 1e-6
# STORM unavail: ./storm/cmake-build-debug/bin/storm --jani light-examples/06.jani --constants TIME_BOUND=100 --statistics --prop "Smax=? [ UE_1>0]"


def convert_to_gspn(fi, use_storm):
    start = time.perf_counter()
    pnpro = fi.with_suffix(".PNPRO") if not use_storm else fi.with_suffix(".jani")
    conv = (
        ["--to-pnpro", pnpro] if not use_storm else ["--to-jani", pnpro, "--addprops"]
    )
    p = subprocess.run(
        [storm_bdmp, "-bdmp", fi, "--show-bdmp-stats", "--to-gspn", "--show-stats"]
        + conv,
        capture_output=True,
        text=True,
    )
    toplevel = "UE_1"
    stats = {"bdmp": (0, 0, 0), "gspn": (0, 0, 0)}
    for line in p.stdout.splitlines():
        if line.startswith("Upmost Object:"):
            toplevel = line.split(":")[1].strip()
        elif line.startswith("Number of places:"):
            stats["gspn"] = (
                line.split(":")[1].strip(),
                stats["gspn"][1],
                stats["gspn"][2],
            )
        elif line.startswith("Number of timed transitions:"):
            stats["gspn"] = (
                stats["gspn"][0],
                line.split(":")[1].strip(),
                stats["gspn"][2],
            )
        elif line.startswith("Number of immediate transitions:"):
            stats["gspn"] = (
                stats["gspn"][0],
                stats["gspn"][1],
                line.split(":")[1].strip(),
            )
        else:
            s = line.split()
            if (
                len(s) >= 6
                and s[1].strip(",") == "Objects"
                and s[3].strip(",") == "Connections"
                and s[5].strip(",") == "Triggers"
            ):
                stats["bdmp"] = (s[0], s[2], s[4])
    if p.returncode != 0 or not pnpro.exists():
        return False, toplevel, p.stdout, int(time.perf_counter() - start), stats
    if not use_storm:
        p = subprocess.run(
            [
                "java",
                "-mx14000m",
                "-cp",
                greatspn_classpath,
                "editor.UnfoldPNML2NetDefCommandLineTool",
                pnpro.with_suffix(""),
                "-name-map",
                "-no-unfolding",
                "-short-names",
            ],
            capture_output=True,
            text=True,
        )
        if p.returncode != 0 or not pnpro.with_suffix(".net").exists():
            return (
                False,
                toplevel,
                f"{p.stdout}\n---\n{p.stderr}",
                int(time.perf_counter() - start),
                stats,
            )
    return True, toplevel, "", int(time.perf_counter() - start), stats


def simulate_gspn(fi, toplevel, time_steps, use_storm, timeout):
    name = fi.with_suffix("")
    dspn = [
        dspn_tool,
        "-load",
        name,
        "-epsilon",
        "1.0E-7",
        "-on-the-fly",
        "-i",
        "-gmres",
    ]
    storm_cmd = [
        storm,
        "--jani",
        fi.with_suffix(".jani"),
        "--constants",
        f"TIME_BOUND={time_steps}",
        "--precision",
        "1e-7",
        "--eliminate-chains",
        "--prop",
    ]
    unavail_dta = True
    if time_steps is None:
        time_steps = 100
    if use_storm:
        unrel_measure = f"Pmin=? [F<={time_steps} {toplevel}>0]"
        unavail_measure = f"Pmin=? [F[{time_steps},{time_steps}] {toplevel}>0]"
        unavail_dta = False
    else:
        if unavail_dta:
            unavail_measure = (
                "PROB_TA>0 DTA1 (t=" + str(time_steps) + "| |Phi0=#" + toplevel + ">0)"
            )
        else:
            # unavail_measure = 'E{ #' + toplevel + ' }'
            unavail_measure = "P{ #" + toplevel + " >0}"
        unrel_measure = (
            "PROB_TA>0 DTA (t=" + str(time_steps) + "| |Phi0=#" + toplevel + ">0)"
        )
    res = {
        "unavailability": {"measure": unavail_measure, "use_dta": unavail_dta,},
        "unreliability": {"measure": unrel_measure,},
        "time_steps": time_steps,
        "toplevel": toplevel,
        "source": "STORM" if use_storm else "DSPN-Tool",
    }

    if use_storm:
        try:
            start = time.perf_counter()
            unavailability = subprocess.run(
                storm_cmd + [unavail_measure, "--buildfull"],
                capture_output=True,
                text=True,
                timeout=timeout,
            )
            res["unavailability"]["time"] = int(time.perf_counter() - start)
            res["unavailability"]["timeout"] = False
            res["unavailability"]["returncode"] = unavailability.returncode
            # Result (for initial states): 0.00299400918
            if (
                unavailability.returncode != 0
                or "Result (for initial states):" not in unavailability.stdout
            ):
                res["unavailability"]["success"] = False
                res["unavailability"]["stdout"] = unavailability.stdout
                res["unavailability"]["stderr"] = unavailability.stderr
            else:
                res["unavailability"]["success"] = True
            for line in unavailability.stdout.splitlines():
                if line.startswith("Result (for initial states):"):
                    res["unavailability"]["value"] = line.split(": ")[1].strip()
                    break
        except subprocess.TimeoutExpired as e:
            res["unavailability"]["success"] = False
            res["unavailability"]["timeout"] = True
            res["unavailability"]["time"] = timeout
            res["unavailability"]["returncode"] = 0
            res["unavailability"]["stdout"] = (
                "" if e.stdout is None else e.stdout.decode(errors="ignore")
            )
            res["unavailability"]["stderr"] = (
                "" if e.stderr is None else e.stderr.decode(errors="ignore")
            )
        try:
            start = time.perf_counter()
            unreliability = subprocess.run(
                storm_cmd + [unrel_measure],
                capture_output=True,
                text=True,
                timeout=timeout,
            )
            res["unreliability"]["time"] = int(time.perf_counter() - start)
            res["unreliability"]["timeout"] = False
            res["unreliability"]["returncode"] = unreliability.returncode
            # Result (for initial states): 0.00299400918
            if (
                unreliability.returncode != 0
                or "Result (for initial states):" not in unreliability.stdout
            ):
                res["unreliability"]["success"] = False
                res["unreliability"]["stdout"] = unreliability.stdout
                res["unreliability"]["stderr"] = unreliability.stderr
            else:
                res["unreliability"]["success"] = True
            for line in unreliability.stdout.splitlines():
                if line.startswith("Result (for initial states):"):
                    res["unreliability"]["value"] = line.split(": ")[1].strip()
                    break
        except subprocess.TimeoutExpired as e:
            res["unreliability"]["success"] = False
            res["unreliability"]["timeout"] = True
            res["unreliability"]["time"] = timeout
            res["unreliability"]["returncode"] = 0
            res["unreliability"]["stdout"] = (
                "" if e.stdout is None else e.stdout.decode(errors="ignore")
            )
            res["unreliability"]["stderr"] = (
                "" if e.stderr is None else e.stderr.decode(errors="ignore")
            )
        return res

    if unavail_dta:
        try:
            start = time.perf_counter()
            unavailability = subprocess.run(
                dspn
                + ["-dta-path", dta_path, "-cslta0-X", "MEASURE0", unavail_measure],
                capture_output=True,
                text=True,
                timeout=timeout,
            )
            res["unavailability"]["time"] = int(time.perf_counter() - start)
            res["unavailability"]["timeout"] = False
            res["unavailability"]["returncode"] = unavailability.returncode
            # RESULT: TRUE. ACCEPTANCE PROBABILITY IS 0.312500000000
            if unavailability.returncode != 0 or (
                "RESULT: TRUE." not in unavailability.stdout
                and "RESULT: FALSE." not in unavailability.stdout
            ):
                res["unavailability"]["success"] = False
                res["unavailability"]["stdout"] = unavailability.stdout
                res["unavailability"]["stderr"] = unavailability.stderr
            else:
                res["unavailability"]["success"] = True
            for line in unavailability.stdout.splitlines():
                if line.startswith(
                    "RESULT: TRUE. ACCEPTANCE PROBABILITY IS "
                ) or line.startswith("RESULT: FALSE. ACCEPTANCE PROBABILITY IS "):
                    res["unavailability"]["value"] = line.split("IS ")[1].strip()
                    break
        except subprocess.TimeoutExpired as e:
            res["unavailability"]["success"] = False
            res["unavailability"]["timeout"] = True
            res["unavailability"]["time"] = timeout
            res["unavailability"]["returncode"] = 0
            res["unavailability"]["stdout"] = (
                "" if e.stdout is None else e.stdout.decode(errors="ignore")
            )
            res["unavailability"]["stderr"] = (
                "" if e.stderr is None else e.stderr.decode(errors="ignore")
            )
    else:
        try:
            start = time.perf_counter()
            unavailability = subprocess.run(
                dspn + ["-measure", "MEASURE0", unavail_measure, "-s"],
                capture_output=True,
                text=True,
                timeout=timeout,
            )
            res["unavailability"]["time"] = int(time.perf_counter() - start)
            res["unavailability"]["timeout"] = False
            res["unavailability"]["returncode"] = unavailability.returncode
            # MEASURE: MEASURE0: E{ #UE_1 / True } = 0.3125000000
            if (
                unavailability.returncode != 0
                or "MEASURE: MEASURE0: " not in unavailability.stdout
            ):
                res["unavailability"]["success"] = False
                res["unavailability"]["stdout"] = unavailability.stdout
                res["unavailability"]["stderr"] = unavailability.stderr
            else:
                res["unavailability"]["success"] = True
            for line in unavailability.stdout.splitlines():
                if line.startswith("MEASURE: MEASURE0: "):
                    res["unavailability"]["value"] = line.split("=")[1].strip()
                    break
        except subprocess.TimeoutExpired as e:
            res["unavailability"]["success"] = False
            res["unavailability"]["timeout"] = True
            res["unavailability"]["time"] = timeout
            res["unavailability"]["returncode"] = 0
            res["unavailability"]["stdout"] = (
                "" if e.stdout is None else e.stdout.decode(errors="ignore")
            )
            res["unavailability"]["stderr"] = (
                "" if e.stderr is None else e.stderr.decode(errors="ignore")
            )

    try:
        start = time.perf_counter()
        unreliability = subprocess.run(
            dspn + ["-dta-path", dta_path, "-cslta0-X", "MEASURE0", unrel_measure],
            capture_output=True,
            text=True,
            timeout=timeout,
        )
        res["unreliability"]["time"] = int(time.perf_counter() - start)
        res["unreliability"]["timeout"] = False
        res["unreliability"]["returncode"] = unreliability.returncode
        # RESULT: TRUE. ACCEPTANCE PROBABILITY IS 0.999999994839
        if unreliability.returncode != 0 or (
            "RESULT: TRUE." not in unreliability.stdout
            and "RESULT: FALSE." not in unreliability.stdout
        ):
            res["unreliability"]["success"] = False
            res["unreliability"]["stdout"] = unreliability.stdout
            res["unreliability"]["stderr"] = unreliability.stderr
        else:
            res["unreliability"]["success"] = True
        for line in unreliability.stdout.splitlines():
            if line.startswith(
                "RESULT: TRUE. ACCEPTANCE PROBABILITY IS "
            ) or line.startswith("RESULT: FALSE. ACCEPTANCE PROBABILITY IS "):
                res["unreliability"]["value"] = line.split("IS ")[1].strip()
                break
    except subprocess.TimeoutExpired as e:
        res["unreliability"]["success"] = False
        res["unreliability"]["timeout"] = True
        res["unreliability"]["time"] = timeout
        res["unreliability"]["returncode"] = 0
        res["unreliability"]["stdout"] = (
            "" if e.stdout is None else e.stdout.decode(errors="ignore")
        )
        res["unreliability"]["stderr"] = (
            "" if e.stderr is None else e.stderr.decode(errors="ignore")
        )

    return res


def gather_yams_mcr(fi):
    mcr = fi.with_suffix(".mcr")
    if not mcr.exists():
        return None
    et = parse_xml(mcr)
    if fi.name != et.find("FIGARO0").text[2:]:
        click.echo(f"Contents of MCR for {fi} do not match name, skipping.")
        return None
    res = {}
    res["intervals"] = et.find("HISTOIRE").find("INTERVALLE").attrib
    res["parameters"] = et.find("PARAMETRES").attrib
    res["toplevel"] = et.find("ETATS").find("ETAT").get("EXPRESSION")[2:-1]
    res["hist"] = et.find("INDICATEURS").get("NB_HISTOIRES")
    time_steps = 0
    for child in et.find("INDICATEURS"):
        name = child.get("NOM").lower()
        res[name] = {}
        for value in child.find("COMBINAISON"):
            inst = int(value.get("INSTANT"))
            res[name][inst] = value.attrib
            res[name][inst]["mean"] = value.attrib["MOYENNE"]
            res[name][inst]["90"] = value.attrib["INT_CONF_90"]
            res[name][inst]["95"] = value.attrib["INT_CONFIANCE"]
            res[name][inst]["99"] = value.attrib["INT_CONF_99"]
            if inst > time_steps:
                time_steps = inst
    res["time_steps"] = time_steps
    return res


def gather_yams_htm(fi):
    htm = fi.with_suffix(".htm")
    if not htm.exists():
        return None
    with open(htm) as fp:
        bs = BeautifulSoup(fp, "lxml")
    tables = bs.find_all("table")
    res = {}
    res["parameters"] = [i.text for i in tables[0].find_all("td")][:-2]
    res["toplevel"] = tables[2].find_all("td")[-2].text[2:-1]
    name = "unnamed"
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
                    "instant": tds[entry * 5].text,
                    "mean": tds[entry * 5 + 1].text,
                    "90": tds[entry * 5 + 2].text,
                    "95": tds[entry * 5 + 3].text,
                    "99": tds[entry * 5 + 4].text,
                }
                if inst > time_steps:
                    time_steps = inst
    res["time_steps"] = time_steps
    return res


# ,BDMP size,,,,,,,,,,,YAMS,,,
# ,,,,,,MA (Symolic),,MA (Sparse),,MA reduced,,,,,
# Test Case,static,dynamic,Mission Time,#Static,#Dynamic,States,Transitions,States,Transitions,States,Transitions,unreliability,Tolerance,Unavailability,Tolerance
def gather_yams_csv(fi):
    if not fi.stem.isnumeric():
        return None
    res = {}
    with open(yams_csv_file) as csvfile:
        csvfile.readline()
        csvfile.readline()
        csvfile.readline()
        reader = csv.DictReader(
            csvfile,
            fieldnames=[
                "id",
                "bdmp_size_static",
                "bdmp_size_dynamic",
                "mission_time",
                "__num_static",
                "__num_dynamic",
                "__states_1",
                "__transitions_1",
                "__states_2",
                "__transitions_2",
                "__states_3",
                "__transitions_3",
                "yams_unreliability",
                "yams_unreliability_tolerance",
                "yams_unavailability",
                "yams_unavailability_tolerance",
            ],
        )
        for row in reader:
            inst = int(row["id"])
            res[inst] = row
            res[inst]["mission_time"] = res[inst]["mission_time"].replace("K", "000")
            res[inst]["time_steps"] = res[inst]["mission_time"]
    fi_id = int(fi.stem)
    if fi_id in res:
        return res[fi_id]
    return None


def gather_yams_data(fi, prefer_csv):
    if isinstance(fi, str):
        fi = Path(fi)
    if prefer_csv:
        res = gather_yams_csv(fi)
        if not (res is None):
            res["source"] = "CSV"
            return res
    res = gather_yams_mcr(fi)
    if res is None:
        res = gather_yams_htm(fi)
        if res is None:
            res = gather_yams_csv(fi)
            if res is None:
                return {}
            else:
                res["source"] = "CSV"
        else:
            res["source"] = "HTM"
    else:
        res["source"] = "MCR"
    return res


def collect_figaro_files(path):
    figaro = []
    if path.is_dir():
        for i in path.iterdir():
            figaro.extend(collect_figaro_files(i))
    else:
        if path.suffix == ".fi":
            figaro.append(path)
    return figaro


def gather_results(figaro, yams_prefer_csv, use_storm, timeout, workers):
    results = {fi: {} for fi in figaro}
    with concurrent.futures.ProcessPoolExecutor(max_workers=workers) as executor:
        future_to_fi = {
            executor.submit(gather_yams_data, fi, yams_prefer_csv): fi for fi in figaro
        }
        with click.progressbar(
            concurrent.futures.as_completed(future_to_fi),
            label="Gathering YAMS data",
            length=len(future_to_fi),
        ) as bar:
            for future in bar:
                fi = future_to_fi[future]
                results[fi]["yams"] = future.result()

        future_to_fi = {
            executor.submit(convert_to_gspn, fi, use_storm): fi for fi in figaro
        }
        with click.progressbar(
            concurrent.futures.as_completed(future_to_fi),
            label="Converting to GSPNs",
            length=len(future_to_fi),
        ) as bar:
            for future in bar:
                fi = future_to_fi[future]
                results[fi]["gspn"] = future.result()

        future_to_fi = {
            executor.submit(
                simulate_gspn,
                fi,
                results[fi]["gspn"][1],
                results[fi]["yams"].get("time_steps", None),
                use_storm,
                timeout,
            ): fi
            for fi in figaro
            if results[fi]["gspn"][0]
        }
        with click.progressbar(
            concurrent.futures.as_completed(future_to_fi),
            label="Simulating GSPNs",
            length=len(future_to_fi),
        ) as bar:
            for future in bar:
                fi = future_to_fi[future]
                results[fi]["dspn-tool"] = future.result()

    return results


def is_float(s):
    try:
        float(s)
        return True
    except ValueError:
        return False


def print_table(results, show_reasons, table_format):
    headers = "Name\tUnreliability\tYAMS\tMargin\tDiff\tTime\tUnavailability\tYAMS\tMargin\tDiff\tTime\tSteps\tYAMS\tR\tA\tBDMP\tGSPN\tCT".split(
        "\t"
    )
    if show_reasons:
        headers.append("Reasons")
    entries = []
    counter = [0, 0, 0, 0]  # all, pass, imprecise, fail
    for fi, res in results.items():
        name = Path(fi).stem
        reason = ""
        bdmp_size = (
            "/".join([str(i) for i in res["gspn"][4]["bdmp"]])
            if len(res["gspn"]) >= 5
            else "n/a"
        )
        gspn_size = (
            "/".join([str(i) for i in res["gspn"][4]["gspn"]])
            if len(res["gspn"]) >= 5
            else "n/a"
        )
        bdmp_time = res["gspn"][3] if len(res["gspn"]) >= 4 else "n/a"
        if isinstance(bdmp_time, int):
            h = int(bdmp_time / 60 / 60)
            m = int((bdmp_time - h * 60 * 60) / 60)
            s = int(bdmp_time - h * 60 * 60 - m * 60)
            if h > 0:
                bdmp_time = f"{h}h {m}m"
            else:
                bdmp_time = f"{m}m {s}s"
        steps_gspn = -1
        steps_yams = -1
        unrel_gspn = ""
        unrel_yams = ""
        unrel_yams_margin = ""
        unrel_diff = ""
        unrel_time = res["dspn-tool"]["unreliability"].get("time", "n/a")
        if isinstance(unrel_time, int):
            h = int(unrel_time / 60 / 60)
            m = int((unrel_time - h * 60 * 60) / 60)
            s = int(unrel_time - h * 60 * 60 - m * 60)
            if h > 0:
                unrel_time = f"{h}h {m}m"
            else:
                unrel_time = f"{m}m {s}s"
        unrel_state = 0
        unavail_gspn = ""
        unavail_yams = ""
        unavail_yams_margin = ""
        unavail_diff = ""
        unavail_time = res["dspn-tool"]["unavailability"].get("time", "n/a")
        if isinstance(unavail_time, int):
            h = int(unavail_time / 60 / 60)
            m = int((unavail_time - h * 60 * 60) / 60)
            s = int(unavail_time - h * 60 * 60 - m * 60)
            if h > 0:
                unavail_time = f"{h}h {m}m"
            else:
                unavail_time = f"{m}m {s}s"
        unavail_state = 0
        hilite_steps = False
        if res["gspn"][0]:
            reason += ", " + res["dspn-tool"]["source"]
            steps_gspn = res["dspn-tool"]["time_steps"]
            if res["dspn-tool"]["unreliability"]["success"]:
                unrel_gspn = res["dspn-tool"]["unreliability"]["value"]
            else:
                unrel_gspn = "n/a"
                unrel_diff = "n/a"
                unrel_state = -1
                if res["dspn-tool"]["unreliability"].get("timeout", False):
                    reason += ", Unreliability Timeout"
                elif res["dspn-tool"]["unreliability"].get("returncode", 0) != 0:
                    reason += ", Unreliability Code " + str(
                        res["dspn-tool"]["unreliability"].get("returncode", 0)
                    )
                else:
                    reason += ", GSPN Failed Unreliability"
            if res["dspn-tool"]["unavailability"]["success"]:
                unavail_gspn = res["dspn-tool"]["unavailability"]["value"]
            else:
                unavail_gspn = "n/a"
                unavail_diff = "n/a"
                unavail_state = -1
                if res["dspn-tool"]["unavailability"].get("timeout", False):
                    reason += ", Unavailability Timeout"
                elif res["dspn-tool"]["unavailability"].get("returncode", 0) != 0:
                    reason += ", Unavailability Code " + str(
                        res["dspn-tool"]["unavailability"].get("returncode", 0)
                    )
                else:
                    reason += ", GSPN Failed Unavailability"
        else:
            unrel_gspn = "n/a"
            unrel_diff = "n/a"
            unrel_state = -1
            unavail_gspn = "n/a"
            unavail_diff = "n/a"
            unavail_state = -1
            reason += ", BDMP Failed Conversion"
        if len(res["yams"]) == 0:
            unrel_yams = "n/a"
            unrel_yams_margin = "n/a"
            unrel_diff = "n/a"
            unrel_state = -1
            unavail_yams = "n/a"
            unavail_yams_margin = "n/a"
            unavail_diff = "n/a"
            unavail_state = -1
            reason += ", No YAMS data found"
        else:
            reason += ", " + res["yams"]["source"]
            if res["yams"]["source"] == "CSV":
                unrel_yams = res["yams"]["yams_unreliability"].replace(",", ".")
                unrel_yams_margin = res["yams"]["yams_unreliability_tolerance"].replace(
                    ",", "."
                )
                unrel_yams_low = float(unrel_yams) - float(unrel_yams_margin)
                unrel_yams_high = float(unrel_yams) + float(unrel_yams_margin)
                if is_float(unrel_gspn):
                    unrel_diff = abs(float(unrel_gspn) - float(unrel_yams))
                    if not (
                        (unrel_yams_low - yams_precision)
                        <= round(float(unrel_gspn), yams_round_to)
                        and round(float(unrel_gspn), yams_round_to)
                        <= (unrel_yams_high + yams_precision)
                    ):
                        unrel_state = 1
                        reason += ", Unreliability"
                unavail_yams = res["yams"]["yams_unavailability"].replace(",", ".")
                unavail_yams_margin = res["yams"][
                    "yams_unavailability_tolerance"
                ].replace(",", ".")
                unavail_yams_low = float(unavail_yams) - float(unavail_yams_margin)
                unavail_yams_high = float(unavail_yams) + float(unavail_yams_margin)
                if is_float(unavail_gspn):
                    unavail_diff = abs(float(unavail_gspn) - float(unavail_yams))
                    if not (
                        (unavail_yams_low - yams_precision)
                        <= round(float(unavail_gspn), yams_round_to)
                        and round(float(unavail_gspn), yams_round_to)
                        <= (unavail_yams_high + yams_precision)
                    ):
                        unavail_state = 1
                        reason += ", Unavailability"
                steps_yams = int(res["yams"]["mission_time"].replace("K", "000"))
                if int(steps_yams) != int(steps_gspn):
                    hilite_steps = True
            else:
                str_steps = False
                for steps, data in res["yams"]["unreliability"].items():
                    if isinstance(steps, str):
                        str_steps = True
                        steps = int(steps)
                    if steps_gspn > 0 and steps < steps_gspn:
                        continue
                    steps_yams = steps
                    break
                if steps_yams <= 0:
                    steps_yams = sorted(list(res["yams"]["unreliability"].keys()))[-1]
                    hilite_steps = True
                steps_yams_idx = steps_yams if not str_steps else str(steps_yams)
                unrel_yams = res["yams"]["unreliability"][steps_yams_idx]["mean"]
                for margin in reversed(["90", "95", "99"]):
                    unrel_yams_margin = res["yams"]["unreliability"][steps_yams_idx][
                        margin
                    ]
                    unrel_yams_low = float(unrel_yams) - float(unrel_yams_margin)
                    unrel_yams_high = float(unrel_yams) + float(unrel_yams_margin)
                    if not is_float(unrel_gspn):
                        # we want the first margin then
                        break
                    unrel_diff = abs(float(unrel_gspn) - float(unrel_yams))
                    if not (
                        (unrel_yams_low - yams_precision)
                        <= round(float(unrel_gspn), yams_round_to)
                        and round(float(unrel_gspn), yams_round_to)
                        <= (unrel_yams_high + yams_precision)
                    ):
                        unrel_state = 1
                        reason += f", Unreliability {margin}%"
                        break
                    if only_99:
                        break
                steps_yams_unrel = steps_yams

                str_steps = False
                for steps, data in res["yams"]["unavailability"].items():
                    if isinstance(steps, str):
                        str_steps = True
                        steps = int(steps)
                    if steps_gspn > 0 and steps < steps_gspn:
                        continue
                    steps_yams = steps
                    break
                if steps_yams <= 0:
                    steps_yams = sorted(list(res["yams"]["unavailability"].keys()))[-1]
                    hilite_steps = True
                steps_yams_idx = steps_yams if not str_steps else str(steps_yams)
                unavail_yams = res["yams"]["unavailability"][steps_yams_idx]["mean"]
                for margin in reversed(["90", "95", "99"]):
                    unavail_yams_margin = res["yams"]["unavailability"][steps_yams_idx][
                        margin
                    ]
                    unavail_yams_low = float(unavail_yams) - float(unavail_yams_margin)
                    unavail_yams_high = float(unavail_yams) + float(unavail_yams_margin)
                    if not is_float(unavail_gspn):
                        # we want the first margin then
                        break
                    unavail_diff = abs(float(unavail_gspn) - float(unavail_yams))
                    if not (
                        (unavail_yams_low - yams_precision)
                        <= round(float(unavail_gspn), yams_round_to)
                        and round(float(unavail_gspn), yams_round_to)
                        <= (unavail_yams_high + yams_precision)
                    ):
                        unavail_state = 1
                        reason += f", Unavailability {margin}%"
                        break
                    if only_99:
                        break
                if steps_yams_unrel != steps_yams:
                    reason += f", YAMS Unreliability Steps: {steps_yams_unrel}"
                    hilite_steps = True
        if reason != "":
            reason = reason[2:]
        checkmarks = ""
        new_entries = [name]
        color = ""
        if unrel_state == 0:
            color = "green"
            checkmarks = click.style("✔", fg=color)
        elif unrel_state == 1:
            color = "yellow"
            checkmarks = click.style("❗", fg=color)
        else:
            color = "red"
            checkmarks = click.style("❌", fg=color)
        new_entries.extend(
            [
                click.style(str(i), fg="black", bg=color)
                for i in [
                    unrel_gspn,
                    unrel_yams,
                    unrel_yams_margin,
                    unrel_diff,
                    unrel_time,
                ]
            ]
        )
        if unavail_state == 0:
            color = "green"
            checkmarks += click.style("\t✔", fg=color)
        elif unavail_state == 1:
            color = "yellow"
            checkmarks += click.style("\t❗", fg=color)
        else:
            color = "red"
            checkmarks += click.style("\t❌", fg=color)
        new_entries.extend(
            [
                click.style(str(i), fg="black", bg=color)
                for i in [
                    unavail_gspn,
                    unavail_yams,
                    unavail_yams_margin,
                    unavail_diff,
                    unavail_time,
                ]
            ]
        )
        if hilite_steps:
            new_entries.extend(
                [
                    click.style(str(steps_gspn), fg="black", bg="red"),
                    click.style(str(steps_yams), fg="black", bg="red"),
                ]
            )
        else:
            new_entries.extend([str(steps_gspn), str(steps_yams)])
        new_entries.extend(checkmarks.split("\t") + [bdmp_size, gspn_size, bdmp_time])
        if show_reasons:
            new_entries.append(reason)
        entries.append(new_entries)
        counter[0] += 1
        if unrel_state == -1 or unavail_state == -1:
            counter[3] += 1
        elif unrel_state == 1 or unavail_state == 1:
            counter[2] += 1
        else:
            counter[1] += 1

    click.echo(tabulate(entries, headers=headers, tablefmt=table_format))
    click.echo("")
    click.echo(
        f"Result for {counter[0]} Examples: {counter[1]} Pass / {counter[2]} Imprecise / {counter[3]} Fail"
    )


@click.command(
    help="convert and simulate Figaro-described BDMPs to GSPNs and compare results with YAMS"
)
@click.argument(
    "paths", nargs=-1, required=True, type=click.Path(exists=True, resolve_path=True)
)
@click.option("--table", is_flag=True, help="output a tabular overview of the results")
@click.option("--table-reasons", is_flag=True, help="add a reasons column to the table")
@click.option(
    "--table-format",
    type=str,
    default="simple",
    show_default=True,
    help="formatting option for tabulate",
)
@click.option(
    "--yams-prefer-csv",
    is_flag=True,
    help="for YAMS results prefer CSV over MCR parsing",
)
@click.option(
    "--yams-reload", is_flag=True, help="when displaing JSON, reload current YAMS data"
)
@click.option(
    "--use-storm",
    is_flag=True,
    help="use STORM instead of DSPN-Tool for simulating GSPNs",
)
@click.option(
    "--timeout",
    type=int,
    default=60,
    show_default=True,
    help="Timeout for GSPN simulation",
)
@click.option(
    "--workers",
    type=int,
    default=4,
    show_default=True,
    help="Maximal concurrent workers",
)
def run(
    paths,
    table,
    table_reasons,
    table_format,
    yams_prefer_csv,
    yams_reload,
    use_storm,
    timeout,
    workers,
):
    start = datetime.datetime.now()
    results = {}

    if timeout <= 0:
        timeout = None

    p = Path(paths[0])
    if p.is_file() and p.suffix == ".json":
        for x in paths:
            with open(x) as fp:
                results.update(json.load(fp))
        click.echo("Loaded previous results from json file")

        if yams_reload:
            figaro = [fi for fi, _ in results.items()]
            with concurrent.futures.ProcessPoolExecutor(
                max_workers=workers
            ) as executor:
                future_to_fi = {
                    executor.submit(gather_yams_data, fi, yams_prefer_csv): fi
                    for fi in figaro
                }
                with click.progressbar(
                    concurrent.futures.as_completed(future_to_fi),
                    label="Gathering YAMS data",
                    length=len(future_to_fi),
                ) as bar:
                    for future in bar:
                        fi = future_to_fi[future]
                        results[fi]["yams"] = future.result()
    else:
        figaro = []
        for path in paths:
            figaro.extend(sorted(collect_figaro_files(Path(path))))
        click.echo(f"Found {len(figaro)} Figaro description files")
        for key, value in gather_results(
            figaro, yams_prefer_csv, use_storm, timeout, workers
        ).items():
            results[str(key.absolute().relative_to(working_dir))] = value

        now = int(datetime.datetime.now().timestamp())
        with open(f"{working_dir}/results-{now}.json", "w+") as fp:
            try:
                json.dump(results, fp)
            except TypeError:
                pprint(results)

    if table:
        print_table(results, table_reasons, table_format)

    end = datetime.datetime.now()
    td = end - start
    try:
        subprocess.run(["notify-send", "Stress Test", f"Finished in {td}."])
    except:
        print(f"Finished in {td}.")


if __name__ == "__main__":
    run()
