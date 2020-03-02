#!/bin/bash 

rm 29.dot 29_ctmc.drn 29.pdf  29.jani 29.drn 29-jani.dot 29-jani.pdf 29-drn.pdf 29-drn.dot  29.jani 29.drn 29.modest
python3 /home/shahid/PycharmProjects/Fi2Modest/src/main.py -i '29.fi' -o '29.modest'
#mono /home/shahid/modest/mcsta.exe  29.modest -E  "B=1"  
mono /home/shahid/modest/moconv.exe  29.modest -O  29.jani -E  "B=10"
scp 29.jani yg112533@login18-1.hpc.itc.rwth-aachen.de:/home/yg112533/job/29.jani
read -p "Press any key to continue"
scp  yg112533@login18-1.hpc.itc.rwth-aachen.de:/home/yg112533/job/29.drn 29.drn
storm -drn 29.drn  --io:exportexplicit 29_int.drn --prop "Tmax=? [F \"Fail\"]" --buildfull --eliminate-chains --ec-label-behavior delete
python3 /home/shahid/PycharmProjects/stormpy-project/src/main.py -i '29_int.drn' -o '29_ma.drn'
storm -drn '29_ma.drn' --io:exportexplicit  29_ctmc.drn --prop "Tmax=? [F \"Fail\"]" --buildfull --precision 1e-8 --eliminate-chains --ec-label-behavior delete
storm -drn '29_ctmc.drn'  --prop "Pmax=? [F<=10 \"Fail\"]" --precision 1e-8
storm -drn '29_ctmc.drn'  --prop "Pmax=? [F [10,10] \"Fail\"]" --precision 1e-8

exit
#mono /home/shahid/modest/mcsta.exe  29.modest -E  "B=10" --long-run-alg ValueIteration 
#mono /home/shahid/modest/mosta.exe  29.modest -O  29.dot  
#dot -Tpdf 29.dot -o 29.pdf
#okular 29.pdf 
mono /home/shahid/modest/moconv.exe  29.modest -O  29.jani -E  "B=1"
#storm --jani 29.jani --io:exportdot 29-jani.dot  --prop "Pmax=? [F<=100 Fail]"  --eliminate-chains #--buildfull --buildstateval   #--ec-ignore-labeling 
#dot -Tpdf 29-jani.dot -o 29-jani.pdf
#okular 29-jani.pdf
storm --jani 29.jani --prop "Tmax=? [F  Fail];Tmin=? [F  Fail] " --precision 1e-8 --exact
exit

storm --jani 29.jani --prop "	Pmax=? [F<=1   Fail]; Pmin=? [F<=1   Fail];
				Pmax=? [F<=2   Fail]; Pmin=? [F<=2   Fail];
				Pmax=? [F<=3   Fail]; Pmin=? [F<=3  Fail];
				Pmax=? [F<=4   Fail]; Pmin=? [F<=4   Fail];
				Pmax=? [F<=5  Fail]; Pmin=? [F<=5  Fail];
				Pmax=? [F<=6  Fail]; Pmin=? [F<=6  Fail];
				Pmax=? [F<=7  Fail]; Pmin=? [F<=7  Fail];
				Pmax=? [F<=8  Fail]; Pmin=? [F<=8  Fail];
				Pmax=? [F<=9   Fail]; Pmin=? [F<=9  Fail];
				Pmax=? [F<=10  Fail]; Pmin=? [F<=10  Fail]" --precision 1e-8 #--eliminate-chains 
storm --jani 29.jani --prop "	Tmax=? [F  Fail]; Tmin=? [F  Fail]" --exact
exit
rm 29.dot  29.pdf  29.jani 29.drn 29-jani.dot 29-jani.pdf 29-drn.pdf 29-drn.dot 29.modest 29.jani

#storm --jani 29.jani --prop "Tmax=? [F  Fail] " --precision 1e-8 --exact









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




