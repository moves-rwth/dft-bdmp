# A Petri Net Semantics for Boolean-logic Driven Markov Processes

This directory contains the script and its produced data for the Master's Thesis "A Petri Net Semantics for Boolean-logic Driven Markov Processes" by Lars Beckers.

## `stress.py`

This script converts BDMPs to GSPNs via `storm-bdmp`, a component of Storm implemented for the aforementioned Master's Thesis. You'll need that component to do anything useful with it. After converting, the resulting net is checked for unreliability and unavailability measures with either GreatSPN or Storm itself. These values are compared to values yielded by YAMS, the reference tooling to simulate BDMPs.

Requirements:
  - Python 3.8
  - tabulate
  - click
  - defusedxml
  - bs4

The script has only been tested on Arch Linux and Debian 10, so there may be other assumptions that are missing from the requirements.

The script either loads the data of previous test runs from the corresponding JSON files or does new test runs that are automatically saved to JSON files. Multiple files can be specified. Use the command line parameter `--yams-reload` to load new values from YAMS files to compare the saved values to; this works alongside `--yams-prefer-csv` as documented below.

In order to do new runs, one needs to change some configurable paths in the first few lines of the source, so that the script is able to find required tools and files. The multiple Figaro files or directories containing them can be supplied. It is expected that there are MCR files next to these Figaro files (with an otherwise identical name) that contain the results from simulations done with YAMS. These will be used for comparison and their values will also be saved to the JSON.

Further parameters that can be supplied on the command line for new runs:
   - `--yams-prefer-csv` will load YAMS' data preferably from a configured CSV file rather than from MCR files that are next to the specified Figaro files.
   - `--use-storm` will use Storm to retrieve the GSPN measurements instead of DSPN-Tool from GreatSPN.
   - `--timeout N` will wait `N` seconds per measurement before killing the tool's process. A timeout of `0` (the default) tells the script to wait indefinitely.
   - `--workers N` will use `N` worker processes to compute the measurements concurrently. Default is `4`. If you can spare the machine, use `N` equal to the number of available CPU cores.

By default, there the script does not output a report and just saves the results in a JSON file. To view the results outside a JSON viewer, use the following command line parameters:
  - `--table` enables the output of a tabular overview of the results.
  - `--table-format <format>` specifies the output format for the `tabular` module that produces the table overriding the default, that is compatible to terminals. Use for example `latex` to produce the source format for LaTeX tables.
  - `--table-reasons` enables an additional column in the table that denotes the data sources and failure conditions, if any.

## `untrimmed/` and `trimmed/`

These directories contain JSON files produced by `stress.py` for all example test cases used in the thesis. You can use the script to display the results captured there.
