#!/bin/bash 



rm 31.dot 31_ctmc.drn 31.pdf  31.jani 31.drn 31-jani.dot 31-jani.pdf 31-drn.pdf 31-drn.dot  31.jani 31.drn 31.modest
python3 /home/shahid/PycharmProjects/Fi2Modest/src-nondet/main.py -i '31.fi' -o '31.modest'
#mono /home/shahid/modest/mcsta.exe  31.modest -E  "B=1"  
mono /home/shahid/modest/moconv.exe  31.modest -O  31.jani -E  "B=10"
scp 31.jani yg112533@login18-1.hpc.itc.rwth-aachen.de:/home/yg112533/job/31.jani
read -p "Press any key to continue"
scp  yg112533@login18-1.hpc.itc.rwth-aachen.de:/home/yg112533/job/31.drn 31.drn
storm -drn 31.drn  --io:exportexplicit 31_int.drn --prop "Tmax=? [F \"Fail\"]" --buildfull --eliminate-chains --ec-label-behavior delete
python3 /home/shahid/PycharmProjects/stormpy-project/src/main.py -i '31_int.drn' -o '31_ma.drn'
storm -drn '31_ma.drn' --io:exportexplicit  31_ctmc.drn --prop "Tmax=? [F \"Fail\"]" --buildfull --precision 1e-8 --eliminate-chains --ec-label-behavior delete
storm -drn '31_ctmc.drn'  --prop "Pmax=? [F<=7000 \"Fail\"]" --precision 1e-8
storm -drn '31_ctmc.drn'  --prop "Pmax=? [F [7000,7000] \"Fail\"]" --precision 1e-8

exit

storm --jani 31.jani --prop "	
				Pmax=? [F<=1000 Fail]; Pmin=? [F<=1000 Fail];
				Pmax=? [F<=2000 Fail]; Pmin=? [F<=2000 Fail];
				Pmax=? [F<=3000 Fail]; Pmin=? [F<=3000 Fail];
				Pmax=? [F<=4000 Fail]; Pmin=? [F<=4000 Fail];
				Pmax=? [F<=5000 Fail]; Pmin=? [F<=5000 Fail];
				Pmax=? [F<=6000 Fail]; Pmin=? [F<=6000 Fail];
				Pmax=? [F<=7000 Fail]; Pmin=? [F<=7000 Fail];
				Pmax=? [F<=8000 Fail]; Pmin=? [F<=8000 Fail];
				Pmax=? [F<=9000  Fail]; Pmin=? [F<=9000 Fail];
				Pmax=? [F<=10000  Fail]; Pmin=? [F<=10000  Fail]" --precision 1e-8 #--eliminate-chains 
storm --jani 31.jani --prop "	Tmax=? [F  Fail]; Tmin=? [F  Fail]" --exact
exit
rm 31.dot  31.pdf  31.jani 31.drn 31-jani.dot 31-jani.pdf 31-drn.pdf 31-drn.dot 31.modest 31.jani

#storm --jani 31.jani --prop "Tmax=? [F  Fail] " --precision 1e-8 --exact









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




