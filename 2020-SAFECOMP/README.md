# Supplementary material for SAFECOMP 2020


This directory contains additional information about experiments summarized in the SAFECOMP2020 submission.

- [safecomp_results.ods](safecomp_results.ods): is an executive summary of reported results for 53 test cases.
- [BDMPs.pdf](BDMPs.pdf): will give an idea of size and shape of all BDMPs considered. The BDMPs database available online can only be opened in Windows based enviroment unsing Knowledge base tool (KB). All BDMPs are exported as PDF from that [KB3 tool](https://www.edf.fr/en/the-edf-group/world-s-largest-power-company/activities/research-and-development/scientific-communities/simulation-softwares?logiciel=10848) and summarized in this document.
- [storm-output-dump.txt](storm-output-dump.txt): is direct output dump of [storm model checker](http://www.stormchecker.org/). No post processing is done therefore information is quite cluttered. However it will give an idea of processing times, model sizes, and numerical values. 
- [kb3-examples](kb3-examples): provide data/files genertated though expreiments. If someone is already familiar with the [modest language](http://www.modestchecker.net), [storm model checker](http://www.stormchecker.org/) and figaro language then he/she can easily relate the information available in these directories.
- [PythonScript](PythonScript): This directory contains the python script to perform model-checking on the figaro files. Notice, this script is written on top of storm python bindings, i.e., [stormpy](https://moves-rwth.github.io/stormpy/). Since Storm and Stormpy are required to run this script, relative paths are not set in the shell scripts of kb3 examples. However, anyone intersted in running the experiments can easily set the paths and reproduce the outputs dumped in [storm-output-dump.txt](storm-output-dump.txt).
