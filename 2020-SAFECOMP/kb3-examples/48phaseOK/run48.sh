#!/bin/bash 



rm 48.dot 48_ctmc.drn 48.pdf  48.jani 48.drn 48-jani.dot 48-jani.pdf 48-drn.pdf 48-drn.dot  48.jani 48.drn 48.modest
python3 /home/shahid/PycharmProjects/Fi2Modest/src-nondet/main.py -i '48.fi' -o '48.modest'
#mono /home/shahid/modest/mcsta.exe  48.modest -E  "B=1"  
mono /home/shahid/modest/moconv.exe  48.modest -O  48.jani -E  "B=10"
scp 48.jani yg112533@login18-1.hpc.itc.rwth-aachen.de:/home/yg112533/job/48.jani
read -p "Press any key to continue"
scp  yg112533@login18-1.hpc.itc.rwth-aachen.de:/home/yg112533/job/48.drn 48.drn
storm -drn 48.drn  --io:exportexplicit 48_int.drn --prop "Tmax=? [F \"Fail\"]" --buildfull --eliminate-chains --ec-label-behavior delete
python3 /home/shahid/PycharmProjects/stormpy-project/src/main.py -i '48_int.drn' -o '48_ma.drn'
storm -drn '48_ma.drn' --io:exportexplicit  48_ctmc.drn --prop "Tmax=? [F \"Fail\"]" --buildfull --precision 1e-8 --eliminate-chains --ec-label-behavior delete
storm -drn '48_ctmc.drn'  --prop "Pmax=? [F<=20 \"Fail\"]" --precision 1e-8
storm -drn '48_ctmc.drn'  --prop "Pmax=? [F [20,20] \"Fail\"]" --precision 1e-8

exit

#storm --jani 48.jani --io:exportdot 48-jani.dot  --prop "Pmax=? [F<=100 Fail]" --eliminate-chains   --ec-ignore-labeling
#dot -Tpdf 48-jani.dot -o 48.pdf
#okular 48.pdf 

storm --jani 48.jani --prop "	Pmax=? [F<=1  Fail ]; Pmin=? [F<=1  Fail];
				Pmax=? [F<=2  Fail]; Pmin=? [F<=2  Fail];
				Pmax=? [F<=3  Fail]; Pmin=? [F<=3 Fail];
				Pmax=? [F<=4  Fail]; Pmin=? [F<=4  Fail];
				Pmax=? [F<=5 Fail]; Pmin=? [F<=5 Fail];
				Pmax=? [F<=6 Fail]; Pmin=? [F<=6 Fail];
				Pmax=? [F<=7 Fail]; Pmin=? [F<=7 Fail];
				Pmax=? [F<=8 Fail]; Pmin=? [F<=8 Fail];
				Pmax=? [F<=9  Fail]; Pmin=? [F<=9 Fail];
				Pmax=? [F<=10  Fail ]; Pmin=? [F<=10  Fail];
				Pmax=? [F<=11  Fail ]; Pmin=? [F<=11  Fail];
				Pmax=? [F<=12  Fail]; Pmin=? [F<=12  Fail];
				Pmax=? [F<=13  Fail]; Pmin=? [F<=13 Fail];
				Pmax=? [F<=14  Fail]; Pmin=? [F<=14  Fail];
				Pmax=? [F<=15 Fail]; Pmin=? [F<=15 Fail];
				Pmax=? [F<=16 Fail]; Pmin=? [F<=16 Fail];
				Pmax=? [F<=17 Fail]; Pmin=? [F<=17 Fail];
				Pmax=? [F<=18 Fail]; Pmin=? [F<=18 Fail];
				Pmax=? [F<=19  Fail]; Pmin=? [F<=19 Fail];
				Pmax=? [F<=20 Fail]; Pmin=? [F<=20 Fail]" --precision 1e-8 #--eliminate-chains 
exit
storm --jani 48.jani --prop "	Tmax=? [F  Fail]; Tmin=? [F  Fail]" --exact

exit
#storm --jani 48.jani --prop "Tmax=? [F  Fail] " --precision 1e-8 --exact









#storm-dft -dft 48.dft --timebound 100
#dftcalc 48.dft -p -u

###################to 48ort jani format
storm --jani 48.jani --io:48ortdot 48-jani.dot  --prop "Pmax=? [F<=100 Fail]" --buildfull --buildstateval #--eliminate-chains #  --ec-ignore-labeling 
dot -Tpdf 48-jani.dot -o exp-jani.pdf
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




