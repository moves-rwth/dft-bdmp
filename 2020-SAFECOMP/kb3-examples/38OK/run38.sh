#!/bin/bash 



rm 38.dot 38_ctmc.drn 38.pdf  38.jani 38.drn 38-jani.dot 38-jani.pdf 38-drn.pdf 38-drn.dot  38.jani 38.drn 38.modest
python3 /home/shahid/PycharmProjects/Fi2Modest/src/main.py -i '38.fi' -o '38.modest'
#mono /home/shahid/modest/mcsta.exe  38.modest -E  "B=1"  
mono /home/shahid/modest/moconv.exe  38.modest -O  38.jani -E  "B=10"
scp 38.jani yg112533@login18-1.hpc.itc.rwth-aachen.de:/home/yg112533/job/38.jani
read -p "Press any key to continue"
scp  yg112533@login18-1.hpc.itc.rwth-aachen.de:/home/yg112533/job/38.drn 38.drn
storm -drn 38.drn  --io:exportexplicit 38_int.drn --prop "Tmax=? [F \"Fail\"]" --buildfull --eliminate-chains --ec-label-behavior delete
python3 /home/shahid/PycharmProjects/stormpy-project/src/main.py -i '38_int.drn' -o '38_ma.drn'
storm -drn '38_ma.drn' --io:exportexplicit  38_ctmc.drn --prop "Tmax=? [F \"Fail\"]" --buildfull --precision 1e-8 --eliminate-chains --ec-label-behavior delete
storm -drn '38_ctmc.drn'  --prop "Pmax=? [F<=100 \"Fail\"]" --precision 1e-8
storm -drn '38_ctmc.drn'  --prop "Pmax=? [F [100,100] \"Fail\"]" --precision 1e-8

exit

storm --jani 38.jani --prop "	Pmax=? [F<=10  Fail]; Pmin=? [F<=10  Fail];
				Pmax=? [F<=20  Fail]; Pmin=? [F<=20  Fail];
				Pmax=? [F<=30  Fail]; Pmin=? [F<=30 Fail];
				Pmax=? [F<=40  Fail]; Pmin=? [F<=40  Fail];
				Pmax=? [F<=50 Fail]; Pmin=? [F<=50 Fail];
				Pmax=? [F<=60 Fail]; Pmin=? [F<=60 Fail];
				Pmax=? [F<=70 Fail]; Pmin=? [F<=70 Fail];
				Pmax=? [F<=80 Fail]; Pmin=? [F<=80 Fail];
				Pmax=? [F<=90  Fail]; Pmin=? [F<=90 Fail];
				Pmax=? [F<=100  Fail]; Pmin=? [F<=100  Fail]" --precision 1e-8 #--eliminate-chains 
storm --jani 38.jani --prop "	Tmax=? [F  Fail]; Tmin=? [F  Fail]" --exact
exit
rm 38.dot  38.pdf  38.jani 38.drn 38-jani.dot 38-jani.pdf 38-drn.pdf 38-drn.dot 38.modest 38.jani

#storm --jani 38.jani --prop "Tmax=? [F  Fail] " --precision 1e-8 --exact









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




