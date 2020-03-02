#!/bin/bash 



rm 17.dot 17_ctmc.drn 17_ma.drn  17.pdf  17.jani 17.drn 17-jani.dot 17-jani.pdf 17-drn.pdf 17-drn.dot 17.modest 17.jani

python3 /home/shahid/PycharmProjects/Fi2Modest/src-nondet/main.py -i '17.fi' -o '17.modest'
#mono /home/shahid/modest/mcsta.exe  17.modest -E  "B=1"  
mono /home/shahid/modest/moconv.exe  17.modest -O  17.jani -E  "B=10"
scp 17.jani yg112533@login18-1.hpc.itc.rwth-aachen.de:/home/yg112533/job/17.jani
read -p "Press any key to continue"
scp  yg112533@login18-1.hpc.itc.rwth-aachen.de:/home/yg112533/job/17.drn 17.drn
storm -drn 17.drn  --io:exportexplicit 17_int.drn --prop "Tmax=? [F \"Fail\"]" --buildfull --eliminate-chains --ec-label-behavior delete
python3 /home/shahid/PycharmProjects/stormpy-project/src/main.py -i '17_int.drn' -o '17_ma.drn'
storm -drn '17_ma.drn' --io:exportexplicit  17_ctmc.drn --prop "Tmax=? [F \"Fail\"]" --buildfull --precision 1e-8 --eliminate-chains --ec-label-behavior delete
storm -drn '17_ctmc.drn'  --prop "Pmax=? [F<=10 \"Fail\"]" --precision 1e-8
storm -drn '17_ctmc.drn'  --prop "Pmax=? [F [10,10] \"Fail\"];Pmin=? [F [10,10] \"Fail\"]" --precision 1e-8

exitm -drn '17_ctmc.drn'  --prop "Pmax=? [F [10,10] \"Fail\"];Pmin=? [F [10,10] \"Fail\"]" --precision 1e-8
exit

storm --jani 17.jani --prop "Tmax=? [F  Fail] " --precision 1e-8 --exact
exit
storm --jani 17.jani --prop "	Pmax=? [F<=1  Fail]; Pmin=? [F<=1  Fail];
				Pmax=? [F<=2  Fail]; Pmin=? [F<=2  Fail];
				Pmax=? [F<=3  Fail]; Pmin=? [F<=3 Fail];
				Pmax=? [F<=4  Fail]; Pmin=? [F<=4  Fail];
				Pmax=? [F<=5 Fail]; Pmin=? [F<=5 Fail];
				Pmax=? [F<=6 Fail]; Pmin=? [F<=6 Fail];
				Pmax=? [F<=7 Fail]; Pmin=? [F<=7 Fail];
				Pmax=? [F<=8 Fail]; Pmin=? [F<=8 Fail];
				Pmax=? [F<=9  Fail]; Pmin=? [F<=9 Fail];
				Pmax=? [F<=10  Fail]; Pmin=? [F<=10  Fail]" --precision 1e-8 #--eliminate-chains 
storm --jani 17.jani --prop "	Tmax=? [F  Fail]; Tmin=? [F  Fail]" --exact

rm 17.dot  17.pdf  17.jani 17.drn 17-jani.dot 17-jani.pdf 17-drn.pdf 17-drn.dot 17.modest 17.jani
exit
#storm --jani 17.jani --prop "Tmax=? [F  Fail] " --precision 1e-8 --exact









#storm-dft -dft exp.dft --timebound 100
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




