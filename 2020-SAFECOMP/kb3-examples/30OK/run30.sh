#!/bin/bash 



rm 30.dot 30_ctmc.drn 30.pdf  30.jani 30.drn 30-jani.dot 30-jani.pdf 30-drn.pdf 30-drn.dot  30.jani 30.drn 30.modest
python3 /home/shahid/PycharmProjects/Fi2Modest/src/main.py -i '30.fi' -o '30.modest'
#mono /home/shahid/modest/mcsta.exe  30.modest -E  "B=1"  
mono /home/shahid/modest/moconv.exe  30.modest -O  30.jani -E  "B=10"
scp 30.jani yg112533@login18-1.hpc.itc.rwth-aachen.de:/home/yg112533/job/30.jani
read -p "Press any key to continue"
scp  yg112533@login18-1.hpc.itc.rwth-aachen.de:/home/yg112533/job/30.drn 30.drn
storm -drn 30.drn  --io:exportexplicit 30_int.drn --prop "Tmax=? [F \"Fail\"]" --buildfull --eliminate-chains --ec-label-behavior delete
python3 /home/shahid/PycharmProjects/stormpy-project/src/main.py -i '30_int.drn' -o '30_ma.drn'
storm -drn '30_ma.drn' --io:exportexplicit  30_ctmc.drn --prop "Tmax=? [F \"Fail\"]" --buildfull --precision 1e-8 --eliminate-chains --ec-label-behavior delete
storm -drn '30_ctmc.drn'  --prop "Pmax=? [F<=10 \"Fail\"]" --precision 1e-8
storm -drn '30_ctmc.drn'  --prop "Pmax=? [F [10,10] \"Fail\"]" --precision 1e-8

exit

storm --jani 30.jani --prop "	Pmax=? [F<=1   Fail]; Pmin=? [F<=1   Fail];
				Pmax=? [F<=2  Fail]; Pmin=? [F<=2   Fail];
				Pmax=? [F<=3  Fail]; Pmin=? [F<=3  Fail];
				Pmax=? [F<=4  Fail]; Pmin=? [F<=4   Fail];
				Pmax=? [F<=5 Fail]; Pmin=? [F<=5  Fail];
				Pmax=? [F<=6  Fail]; Pmin=? [F<=6  Fail];
				Pmax=? [F<=7  Fail]; Pmin=? [F<=7  Fail];
				Pmax=? [F<=8  Fail]; Pmin=? [F<=8  Fail];
				Pmax=? [F<=9   Fail]; Pmin=? [F<=9  Fail];
				Pmax=? [F<=10  Fail]; Pmin=? [F<=10  Fail]" --precision 1e-8 #--eliminate-chains 
storm --jani 30.jani --prop "	Tmax=? [F  Fail]; Tmin=? [F  Fail]" --exact
exit
rm 30.dot  30.pdf  30.jani 30.drn 30-jani.dot 30-jani.pdf 30-drn.pdf 30-drn.dot 30.modest 30.jani

#storm --jani 30.jani --prop "Tmax=? [F  Fail] " --precision 1e-8 --exact









#storm-dft -dft exp.dft --timebound 100
#dftcalc exp.dft -p -u

###################to export jani format

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




