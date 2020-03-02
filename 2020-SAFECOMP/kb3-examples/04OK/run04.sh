#!/bin/bash 



rm 04.dot  04.pdf  04.jani 04.drn 04-jani.dot 04-jani.pdf 04-drn.pdf 04-drn.dot 04.modest 04.jani


python3 /home/shahid/PycharmProjects/Fi2Modest/src/main.py -i '04.fi' -o '04.modest'

#mono /home/shahid/modest/mcsta.exe  04.modest -E  "B=10" --long-run-alg ValueIteration 
mono /home/shahid/modest/moconv.exe  04.modest -O  04.jani -E  "B=10"
#mono /home/shahid/modest/mosta.exe  04.modest -O  04.dot  
#dot -Tpdf 04.dot -o 04.pdf
#okular 04.pdf 
#python3 /home/shahid/PycharmProjects/Fi2Modest/src-nondet/main.py -i '04.fi' -o '04.modest'
#mono /home/shahid/modest/mcsta.exe  04.modest -E  "B=1"  
#mono /home/shahid/modest/moconv.exe  04.modest -O  04.jani -E  "B=10"
scp 04.jani yg112533@login18-1.hpc.itc.rwth-aachen.de:/home/yg112533/job/04.jani
read -p "Press any key to continue"
scp  yg112533@login18-1.hpc.itc.rwth-aachen.de:/home/yg112533/job/04.drn 04.drn
storm -drn 04.drn  --io:exportexplicit 04_int.drn --prop "Tmax=? [F \"Fail\"]" --buildfull --eliminate-chains --ec-label-behavior delete
python3 /home/shahid/PycharmProjects/stormpy-project/src/main.py -i '04_int.drn' -o '04_ma.drn'
storm -drn '04_ma.drn' --io:exportexplicit  04_ctmc.drn --prop "Tmax=? [F \"Fail\"]" --buildfull --precision 1e-8 --eliminate-chains --ec-label-behavior delete
storm -drn '04_ctmc.drn'  --prop "Pmax=? [F<=10 \"Fail\"]" --precision 1e-8
storm -drn '04_ctmc.drn'  --prop "Pmax=? [F [10,10] \"Fail\"];Pmin=? [F [10,10] \"Fail\"]" --precision 1e-8

exit

storm --jani 04.jani --io:exportexplicit  04.drn  --prop "Tmax=? [F Fail]"  --eliminate-chains --ec-label-behavior delete -e dd -bisim --bisimulation:quot sparse
python3 /home/shahid/PycharmProjects/stormpy-project/src/main.py -i '04.drn' -o '04_ma.drn'
storm -drn '04_ma.drn' --io:exportexplicit  04_ctmc.drn --prop "Pmax=? [F<=2 \"Fail\"]" --precision 1e-8 --eliminate-chains --ec-label-behavior delete
rm 04_ma.drn
storm -drn '04_ctmc.drn'  --prop "Pmax=? [F<=10 \"Fail\"];Pmin=? [F<=10 \"Fail\"]" --precision 1e-8
storm -drn '04_ctmc.drn'  --prop "Pmax=? [F [10,10] \"Fail\"];Pmin=? [F [10,10] \"Fail\"]" --precision 1e-8
exit

exit
#storm --jani 04.jani --prop "Tmax=? [F  Fail];Tmin=? [F  Fail] " --precision 1e-8 --exact
storm --jani 04.jani --prop "Pmax=? [F<=2  Fail]" --precision 1e-8 --eliminate-chains --ec-label-behavior merge --io:exportdot 04.dot #--buildfull	
dot -Tpdf 04.dot -o 04.pdf
okular 04.pdf
exit
storm --jani 04.jani --prop "	Pmax=? [F<=1  Fail]; Pmin=? [F<=1  Fail];
				Pmax=? [F<=2  Fail]; Pmin=? [F<=2  Fail];
				Pmax=? [F<=3  Fail]; Pmin=? [F<=3  Fail];
				Pmax=? [F<=4  Fail]; Pmin=? [F<=4  Fail];
				Pmax=? [F<=5  Fail]; Pmin=? [F<=5  Fail];
				Pmax=? [F<=6  Fail]; Pmin=? [F<=6  Fail];
				Pmax=? [F<=7 Fail]; Pmin=? [F<=7 Fail];
				Pmax=? [F<=8 Fail]; Pmin=? [F<=8 Fail];
				Pmax=? [F<=9 Fail]; Pmin=? [F<=9 Fail];
				Pmax=? [F<=10 Fail]; Pmin=? [F<=10 Fail];
				Pmax=? [F<=11  Fail]; Pmin=? [F<=11 Fail];
				Pmax=? [F<=12 Fail]; Pmin=? [F<=12 Fail];
				Pmax=? [F<=13 Fail]; Pmin=? [F<=13 Fail];
				Pmax=? [F<=14 Fail]; Pmin=? [F<=14 Fail];
				Pmax=? [F<=15 Fail]; Pmin=? [F<=15 Fail];
				Pmax=? [F<=16 Fail]; Pmin=? [F<=16 Fail];
				Pmax=? [F<=17 Fail]; Pmin=? [F<=17 Fail];
				Pmax=? [F<=18 Fail]; Pmin=? [F<=18 Fail];
				Pmax=? [F<=19 Fail]; Pmin=? [F<=19 Fail];
				Pmax=? [F<=20 Fail]; Pmin=? [F<=20 Fail];" --precision 1e-8 #--eliminate-chains 
storm --jani 04.jani --prop    "Tmax=? [F  Fail]; Tmin=? [F  Fail]" --exact

rm 04.dot  04.pdf  04.jani 04.drn 04-jani.dot 04-jani.pdf 04-drn.pdf 04-drn.dot 04.modest 04.jani
exit










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




