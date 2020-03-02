#!/bin/bash 



rm 23.dot  23.pdf  23.jani 23.drn 23-jani.dot 23-jani.pdf 23-drn.pdf 23-drn.dot  23.jani  23.modest
python3 /home/shahid/PycharmProjects/Fi2Modest/src-nondet/main.py -i '23.fi' -o '23.modest'
#mono /home/shahid/modest/mcsta.exe  23.modest -E  "B=1"  
mono /home/shahid/modest/moconv.exe  23.modest -O  23.jani -E  "B=10"
scp 23.jani yg112533@login18-1.hpc.itc.rwth-aachen.de:/home/yg112533/job/23.jani
read -p "Press any key to continue"
scp  yg112533@login18-1.hpc.itc.rwth-aachen.de:/home/yg112533/job/23.drn 23.drn
storm -drn 23.drn  --io:exportexplicit 23_int.drn --prop "Tmax=? [F \"Fail\"]" --buildfull --eliminate-chains --ec-label-behavior delete
python3 /home/shahid/PycharmProjects/stormpy-project/src/main.py -i '23_int.drn' -o '23_ma.drn'
storm -drn '23_ma.drn' --io:exportexplicit  23_ctmc.drn --prop "Tmax=? [F \"Fail\"]" --buildfull --precision 1e-8 --eliminate-chains --ec-label-behavior delete
storm -drn '23_ctmc.drn'  --prop "Pmax=? [F<=20 \"Fail\"]" --precision 1e-8
storm -drn '23_ctmc.drn'  --prop "Pmax=? [F [20,20] \"Fail\"];Pmin=? [F [20,20] \"Fail\"]" --precision 1e-8

exit
python3 /home/shahid/PycharmProjects/Fi2Modest/src/main.py -i '23.fi' -o '23.modest'
#mono /home/shahid/modest/mcsta.exe  23.modest -E  "B=10" --long-run-alg ValueIteration 
#mono /home/shahid/modest/mosta.exe  23.modest -O  23.dot  
#dot -Tpdf 23.dot -o 23.pdf
#okular 23.pdf 
mono /home/shahid/modest/moconv.exe  23.modest -O  23.jani -E  "B=1"
storm --jani 23.jani --io:exportexplicit  23.drn  --prop "Tmax=? [F Fail]" -e dd --bisimulation --bisimulation:quot sparse --ddlib sylvan --sylvan:maxmem 3000 
 
python3 /home/shahid/PycharmProjects/stormpy-project/src/main.py -i '23.drn' -o '23_ma.drn'
storm -drn '23_ma.drn' --io:exportexplicit  23_ctmc.drn --prop "Pmax=? [F<=1 \"Fail\"]" --precision 1e-8 --eliminate-chains --ec-label-behavior delete
storm -drn '23_ctmc.drn'  --prop "Pmax=? [F<=5 \"Fail\"];Pmin=? [F<=5 \"Fail\"]" --precision 1e-8
storm -drn '23_ctmc.drn'  --prop "Pmax=? [F [5,5] \"Fail\"];Pmin=? [F [5,5] \"Fail\"]" --precision 1e-8
exit

#storm --jani 23.jani --io:exportdot 23-jani.dot  --prop "Pmax=? [F<=100 Fail]"  --eliminate-chains #--buildfull --buildstateval   #--ec-ignore-labeling 
#dot -Tpdf 23-jani.dot -o 23-jani.pdf
#okular 23-jani.pdf

storm --jani 23.jani --prop "Tmax=? [F  Fail];Tmin=? [F  Fail] " --precision 1e-8 --exact
exit
storm --jani 23.jani --prop "	Pmax=? [F<=2  Fail]; Pmax=? [F<=4  Fail];
				Pmax=? [F<=6  Fail]; Pmax=? [F<=8  Fail];
				Pmax=? [F<=10 Fail]; Pmax=? [F<=12 Fail];
				Pmax=? [F<=14 Fail]; Pmax=? [F<=16  Fail];
				Pmax=? [F<=18 Fail]; Pmax=? [F<=20 Fail];
				Pmax=? [F<=22 Fail]; Pmax=? [F<=24 Fail];
				Pmax=? [F<=26 Fail]; Pmax=? [F<=28 Fail];
				Pmax=? [F<=30 Fail]; Pmax=? [F<=32 Fail];
				Pmax=? [F<=34  Fail]; Pmax=? [F<=36 Fail];
				Pmax=? [F<=38  Fail]; Pmax=? [F<=40 Fail]" --precision 1e-8 #--eliminate-chains 

storm --jani 23.jani --prop "	Pmax=? [F<=1  Fail]; Pmin=? [F<=1  Fail];
				Pmax=? [F<=2  Fail]; Pmin=? [F<=2  Fail];
				Pmax=? [F<=3  Fail]; Pmin=? [F<=3 Fail];
				Pmax=? [F<=4  Fail]; Pmin=? [F<=4  Fail];
				Pmax=? [F<=5 Fail]; Pmin=? [F<=5 Fail];
				Pmax=? [F<=6 Fail]; Pmin=? [F<=6 Fail];
				Pmax=? [F<=7 Fail]; Pmin=? [F<=7 Fail];
				Pmax=? [F<=8 Fail]; Pmin=? [F<=8 Fail];
				Pmax=? [F<=9  Fail]; Pmin=? [F<=9 Fail];
				Pmax=? [F<=10  Fail]; Pmin=? [F<=10  Fail]" --precision 1e-8 #--eliminate-chains 
storm --jani 23.jani --prop "	Tmax=? [F  Fail]; Tmin=? [F  Fail]" --exact

rm 23.dot  23.pdf  23.jani 23.drn 23-jani.dot 23-jani.pdf 23-drn.pdf 23-drn.dot 23.modest 23.jani
exit
#storm --jani 23.jani --prop "Tmax=? [F  Fail] " --precision 1e-8 --exact









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




