#!/bin/bash 


rm 21.dot 21_ctmc.drn 21.pdf  21.jani 21.drn 21-jani.dot 21-jani.pdf 21-drn.pdf 21-drn.dot  21.jani 21.drn 21.modest
python3 /home/shahid/PycharmProjects/Fi2Modest/src/main.py -i '21.fi' -o '21.modest'
#mono /home/shahid/modest/mcsta.exe  21.modest -E  "B=1"  
mono /home/shahid/modest/moconv.exe  21.modest -O  21.jani -E  "B=10"
scp 21.jani yg112533@login18-1.hpc.itc.rwth-aachen.de:/home/yg112533/job/21.jani
read -p "Press any key to continue"
scp  yg112533@login18-1.hpc.itc.rwth-aachen.de:/home/yg112533/job/21.drn 21.drn
storm -drn 21.drn  --io:exportexplicit 21_int.drn --prop "Tmax=? [F \"Fail\"]" --buildfull --eliminate-chains --ec-label-behavior delete
python3 /home/shahid/PycharmProjects/stormpy-project/src/main.py -i '21_int.drn' -o '21_ma.drn'
storm -drn '21_ma.drn' --io:exportexplicit  21_ctmc.drn --prop "Tmax=? [F \"Fail\"]" --buildfull --precision 1e-8 --eliminate-chains --ec-label-behavior delete
storm -drn '21_ctmc.drn'  --prop "Pmax=? [F<=100 \"Fail\"]" --precision 1e-8
storm -drn '21_ctmc.drn'  --prop "Pmax=? [F [100,100] \"Fail\"]" --precision 1e-8

exit

storm --jani 21.jani --prop "	Pmax=? [F<=10  Fail]; Pmin=? [F<=10  Fail];
				Pmax=? [F<=20  Fail]; Pmin=? [F<=20  Fail];
				Pmax=? [F<=30  Fail]; Pmin=? [F<=30 Fail];
				Pmax=? [F<=40  Fail]; Pmin=? [F<=40  Fail];
				Pmax=? [F<=50 Fail]; Pmin=? [F<=50 Fail];
				Pmax=? [F<=60 Fail]; Pmin=? [F<=60 Fail];
				Pmax=? [F<=70 Fail]; Pmin=? [F<=70 Fail];
				Pmax=? [F<=80 Fail]; Pmin=? [F<=80 Fail];
				Pmax=? [F<=90  Fail]; Pmin=? [F<=90 Fail];
				Pmax=? [F<=100  Fail]; Pmin=? [F<=100  Fail]" --precision 1e-8 #--eliminate-chains 
storm --jani 21.jani --prop "	Tmax=? [F  Fail]; Tmin=? [F  Fail]" --exact

rm 21.dot  21.pdf  21.jani 21.drn 21-jani.dot 21-jani.pdf 21-drn.pdf 21-drn.dot 21.modest 21.jani
exit
#storm --jani 21.jani --prop "Tmax=? [F  Fail] " --precision 1e-8 --exact









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




