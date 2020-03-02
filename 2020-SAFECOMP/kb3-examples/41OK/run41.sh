#!/bin/bash 

rm 41.dot 41_ctmc.drn 41.pdf  41.jani 41.drn 41-jani.dot 41-jani.pdf 41-drn.pdf 41-drn.dot  41.jani 41.drn 41.modest
python3 /home/shahid/PycharmProjects/Fi2Modest/src/main.py -i '41.fi' -o '41.modest'
#mono /home/shahid/modest/mcsta.exe  41.modest -E  "B=1"  
mono /home/shahid/modest/moconv.exe  41.modest -O  41.jani -E  "B=10"
scp 41.jani yg112533@login18-1.hpc.itc.rwth-aachen.de:/home/yg112533/job/41.jani
read -p "Press any key to continue"
scp  yg112533@login18-1.hpc.itc.rwth-aachen.de:/home/yg112533/job/41.drn 41.drn
storm -drn 41.drn  --io:exportexplicit 41_int.drn --prop "Tmax=? [F \"Fail\"]" --buildfull --eliminate-chains --ec-label-behavior delete
python3 /home/shahid/PycharmProjects/stormpy-project/src/main.py -i '41_int.drn' -o '41_ma.drn'
storm -drn '41_ma.drn' --io:exportexplicit  41_ctmc.drn --prop "Tmax=? [F \"Fail\"]" --buildfull --precision 1e-8 --eliminate-chains --ec-label-behavior delete
storm -drn '41_ctmc.drn'  --prop "Pmax=? [F<=20 \"Fail\"]" --precision 1e-8
storm -drn '41_ctmc.drn'  --prop "Pmax=? [F [20,20] \"Fail\"]" --precision 1e-8

exit

storm --jani 41.jani --prop "	Pmax=? [F<=6  Fail];  Pmin=? [F<=6  Fail];
								Pmax=? [F<=8  Fail];  Pmin=? [F<=8  Fail];
								Pmax=? [F<=10 Fail];  Pmin=? [F<=10  Fail];
								Pmax=? [F<=12 Fail];  Pmin=? [F<=12  Fail];
								Pmax=? [F<=14 Fail];  Pmin=? [F<=14 Fail];
								Pmax=? [F<=16 Fail];  Pmin=? [F<=16 Fail];
								Pmax=? [F<=18 Fail];  Pmin=? [F<=18 Fail];
								Pmax=? [F<=20 Fail];  Pmin=? [F<=20 Fail];
								Pmax=? [F<=22  Fail]; Pmin=? [F<=22 Fail];
								Pmax=? [F<=24  Fail]; Pmin=? [F<=24  Fail]" --precision 1e-8 #--eliminate-chains 								
								
storm --jani 41.jani --prop  "Tmax=? [F  Fail]; Tmin=? [F  Fail]" --exact

exit
#storm --jani 41.jani --prop "Tmax=? [F  Fail] " --precision 1e-8 --exact









#storm-dft -dft 41.dft --timebound 100
#dftcalc exp.dft -p -u

###################to export jani format
storm --jani exp.jani --io:exportdot exp-jani.dot  --prop "Pmax=? [F<=100 Fail]" --buildfull --buildstateval #--eliminate-chains #  --ec-ignore-labeling 
dot -Tpdf exp-jani.dot -o exp-jani.pdf
okular exp-jani.pdf

######################to export drn format
storm --jani exp.jani --io:exportexplicit  exp.drn   --prop "Pmax=? [F<=100 Fail]" --buildfull --buildstateval --eliminate-chains   #--ec-ignore-labeling  #--eliminate-chains #
storm -drn exp.drn --io:exportdot exp-drn.dot #--buildfull --buildstateval
dot -Tpdf exp-drn.dot -o exp-drn.pdf
okular exp-drn.pdf
#####################export drn aggressive reduction
storm --jani exp.jani --io:exportexplicit  exp-aggressive.drn   --prop "Pmax=? [F<=100 Fail];" --buildfull --buildstateval --eliminate-chains   --ec-ignore-labeling  #--eliminate-chains #
storm -drn exp-aggressive.drn --io:exportdot exp-drn-aggressive.dot #--buildfull --buildstateval
dot -Tpdf exp-drn-aggressive.dot -o exp-drn-aggressive.pdf
okular exp-drn-aggressive.pdf

storm -drn exp.drn --prop "Pmax=? [F<=100 \"Fail\"]"
#storm -drn exp.drn --prop "Pmax=? [F [100, 100] f=false]"




