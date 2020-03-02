#!/bin/bash 


rm 25.dot 25_ctmc.drn 25.pdf  25.jani 25.drn 25-jani.dot 25-jani.pdf 25-drn.pdf 25-drn.dot  25.jani 25.drn 25.modest
python3 /home/shahid/PycharmProjects/Fi2Modest/src/main.py -i '25.fi' -o '25.modest'
#mono /home/shahid/modest/mcsta.exe  25.modest -E  "B=1"  
mono /home/shahid/modest/moconv.exe  25.modest -O  25.jani -E  "B=10"
scp 25.jani yg112533@login18-1.hpc.itc.rwth-aachen.de:/home/yg112533/job/25.jani
read -p "Press any key to continue"
scp  yg112533@login18-1.hpc.itc.rwth-aachen.de:/home/yg112533/job/25.drn 25.drn
storm -drn 25.drn  --io:exportexplicit 25_int.drn --prop "Tmax=? [F \"Fail\"]" --buildfull --eliminate-chains --ec-label-behavior delete
python3 /home/shahid/PycharmProjects/stormpy-project/src/main.py -i '25_int.drn' -o '25_ma.drn'
storm -drn '25_ma.drn' --io:exportexplicit  25_ctmc.drn --prop "Tmax=? [F \"Fail\"]" --buildfull --precision 1e-8 --eliminate-chains --ec-label-behavior delete
storm -drn '25_ctmc.drn'  --prop "Pmax=? [F<=1000 \"Fail\"]" --precision 1e-8
storm -drn '25_ctmc.drn'  --prop "Pmax=? [F [1000,1000] \"Fail\"]" --precision 1e-8

exit
storm --jani 25.jani --prop "	Pmax=? [F<=1  Fail]; Pmin=? [F<=1  Fail];
				Pmax=? [F<=2  Fail]; Pmin=? [F<=2  Fail];
				Pmax=? [F<=3  Fail]; Pmin=? [F<=3 Fail];
				Pmax=? [F<=4  Fail]; Pmin=? [F<=4  Fail];
				Pmax=? [F<=5 Fail]; Pmin=? [F<=5 Fail];
				Pmax=? [F<=6 Fail]; Pmin=? [F<=6 Fail];
				Pmax=? [F<=7 Fail]; Pmin=? [F<=7 Fail];
				Pmax=? [F<=8 Fail]; Pmin=? [F<=8 Fail];
				Pmax=? [F<=9  Fail]; Pmin=? [F<=9 Fail];
				Pmax=? [F<=10  Fail]; Pmin=? [F<=10  Fail]" --precision 1e-8 #--eliminate-chains 
storm --jani 25.jani --prop "	Tmax=? [F  Fail]; Tmin=? [F  Fail]" --exact

rm 25.dot  25.pdf  25.jani 25.drn 25-jani.dot 25-jani.pdf 25-drn.pdf 25-drn.dot 25.modest 25.jani
exit


storm --jani 25.jani --prop "	Pmax=? [F<=100  Fail]; Pmin=? [F<=100  Fail];
				Pmax=? [F<=200  Fail]; Pmin=? [F<=200  Fail];
				Pmax=? [F<=300  Fail]; Pmin=? [F<=300 Fail];
				Pmax=? [F<=400  Fail]; Pmin=? [F<=400  Fail];
				Pmax=? [F<=500 Fail]; Pmin=? [F<=500 Fail];
				Pmax=? [F<=600 Fail]; Pmin=? [F<=600 Fail];
				Pmax=? [F<=700 Fail]; Pmin=? [F<=700 Fail];
				Pmax=? [F<=800 Fail]; Pmin=? [F<=800 Fail];
				Pmax=? [F<=900  Fail]; Pmin=? [F<=900 Fail];
				Pmax=? [F<=1000  Fail]; Pmin=? [F<=1000  Fail]" --precision 1e-8 #--eliminate-chains 
storm --jani 25.jani --prop "	Tmax=? [F  Fail]; Tmin=? [F  Fail]" --exact
exit
rm 25.dot  25.pdf  25.jani 25.drn 25-jani.dot 25-jani.pdf 25-drn.pdf 25-drn.dot 25.modest 25.jani

#storm --jani 25.jani --prop "Tmax=? [F  Fail] " --precision 1e-8 --exact









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




