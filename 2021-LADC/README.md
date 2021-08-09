# fire_sprinkler_system

This repository contains results and source code used to analyse the fire sprinkler system.
Scripts contain the python project. Note the source code is build on Storm model checker and your will also need python bindings for storm to run this project.
To get Storm visit: 
www.stormchecker.org
To get python bindings for storm visit:
https://github.com/moves-rwth/stormpy/

Once both prerequisites are installed please open
/script/test.py
And set "storm_path" and "project_path" variables in it. 
You can also set Mission Time and Warranty_time on line#135 and #136 of this file.

Finally go to line#148 to set scenario_no for which you want to run the analysis.
Run 
>>python script/test.py

The results will be printed on the console window and various intermediate files will be generated necessary for calculation.


##To quickly review the results without running the project
 Please go to results directory and you will find screen dumps for all experiments in respective directory.

