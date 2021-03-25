This directory contains additional information about experiments summarized in the DSN2021 submission.
Excel file [FIG2STORM_API_results.xlsx](FIG2STORM_API_results.xlsx) contains summay of experiments. Each row of sheet-1 refers to a different test case, and columns refer to experiments performed with different tools.
PDF file [BDMP.pdf](BDMP.pdf) contains BDMPs that we have experimented with FigaroAPI.
Text file [Stormresults.txt](Stormresults.txt) provides screen dump of some test cases.
The directory [Results-reported-in-paper](Results-reported-in-paper) contains source files for the test cases reported in DSN paper.
The direcotry [04-FigaroAPI-results for comparison with storm](04-FigaroAPI-results for comparison with storm) contains many test cases used during development of the FigaroAPI
This python file [wrapper-for-figaroapi](wrapper-for-figaroapi) is the translator that loops over the directory structure and convenrt all encountered figaro files to cpp files
The data base [V4.0database.mdb](V4.0database.mdb) can only be opened in KB3. Therefore, might not be helpful for reviewrs.
**The tool is available [here](https://github.com/moves-rwth/storm/tree/FigaroAPI) as a branch of Storm We plan to build command line interface and ship FigaroAPI in futrue release of Storms model checker**
