#!/bin/bash



rm 01.dot  01.pdf  01.jani 01.drn 01-jani.dot 01-jani.pdf 01-drn.pdf 01-drn.dot 01.modest 01.jani 01.drn 01_ctmc.drn 01_int.drn 01_ma.drn 

python3 /home/shahid/PycharmProjects/Fi2Modest/src-nondet/main.py -i '01.fi' -o '01.modest'
#mono /home/shahid/modest/mcsta.exe  01.modest -E  "B=1"  
mono /home/shahid/modest/moconv.exe  01.modest -O  01.jani -E  "B=10"
scp 01.jani yg112533@login18-1.hpc.itc.rwth-aachen.de:/home/yg112533/job/01.jani
read -p "Press any key to continue"
scp  yg112533@login18-1.hpc.itc.rwth-aachen.de:/home/yg112533/job/01.drn 01.drn
storm -drn 01.drn  --io:exportexplicit 01_int.drn --prop "Tmax=? [F \"Fail\"]" --buildfull --eliminate-chains --ec-label-behavior delete
python3 /home/shahid/PycharmProjects/stormpy-project/src/main.py -i '01_int.drn' -o '01_ma.drn'
storm -drn '01_ma.drn' --io:exportexplicit  01_ctmc.drn --prop "Tmax=? [F \"Fail\"]" --buildfull --precision 1e-8 --eliminate-chains --ec-label-behavior delete
storm -drn '01_ctmc.drn'  --prop "Pmax=? [F<=10 \"Fail\"]" --precision 1e-8
storm -drn '01_ctmc.drn'  --prop "Pmax=? [F [10,10] \"Fail\"];Pmin=? [F [10,10] \"Fail\"]" --precision 1e-8

exit
#mono /home/shahid/modest/mosta.exe  01.modest -O  01.dot
#dot -Tpdf 01.dot -o 01.pdf
#if [[ "$OSTYPE" == "linux-gnu" ]]; then
#        xdg-open 01.pdf
#elif [[ "$OSTYPE" == "darwin"* ]]; then
#        open 01.pdf
#fi

#storm --jani 01.jani --prop "Tmax=? [F  Fail] " --precision 1e-8 --exact
#storm --jani 01.jani --prop "Pmax=? [F<=100  Fail] " --precision 1e-8 #--eliminate-chains
storm --jani 01.jani --prop "	Tmax=? [F  \"Fail\"]; Tmin=? [F  \"Fail\"]" --exact

storm --jani 01.jani --prop "	Pmax=? [F<=1  \"Fail\"];Pmin=? [F<=1  Fail]" --precision 1e-8 #--eliminate-chains --ec-label-behavior merge --io:exportexplicit 01.drn
exit
storm -drn 01.drn --prop "Pmax=? [F<=1 \"Fail\"];Pmin=? [F<=1 \"Fail\"]"
#storm --jani 01.jani --prop "	Pmax=? [F<=1  Fail]" --eliminate-chains 
#storm --jani 01.jani --prop "	Pmax=? [F<=1  Fail]" --ec-ignore-labeling

#storm --jani 01.jani --prop "	Pmax=? [F<=1  Fail]" --engine dd --bisimulation --bisimulation:quot sparse 
storm --jani 01.jani --prop "	Pmax=? [F<=1  Fail];  Pmin=? [F<=1  Fail];
				Pmax=? [F<=2  Fail];  Pmin=? [F<=2  Fail];
				Pmax=? [F<=3  Fail];  Pmin=? [F<=3 Fail];
				Pmax=? [F<=4  Fail];  Pmin=? [F<=4  Fail];
				Pmax=? [F<=5 Fail];   Pmin=? [F<=5 Fail];
				Pmax=? [F<=6 Fail];   Pmin=? [F<=6 Fail];
				Pmax=? [F<=7 Fail];   Pmin=? [F<=7 Fail];
				Pmax=? [F<=8 Fail];   Pmin=? [F<=8 Fail];
				Pmax=? [F<=9  Fail];  Pmin=? [F<=9 Fail];
				Pmax=? [F<=10  Fail]; Pmin=? [F<=10  Fail]
				Pmax=? [F<=11  Fail]; Pmin=? [F<=11  Fail];
				Pmax=? [F<=12  Fail]; Pmin=? [F<=12  Fail];
				Pmax=? [F<=13  Fail]; Pmin=? [F<=13 Fail];
				Pmax=? [F<=14  Fail]; Pmin=? [F<=14  Fail];
				Pmax=? [F<=15 Fail];  Pmin=? [F<=15 Fail];
				Pmax=? [F<=16 Fail];  Pmin=? [F<=16 Fail];
				Pmax=? [F<=17 Fail];  Pmin=? [F<=17 Fail];
				Pmax=? [F<=18 Fail];  Pmin=? [F<=18 Fail];
				Pmax=? [F<=19  Fail]; Pmin=? [F<=19 Fail];
				Pmax=? [F<=20  Fail]; Pmin=? [F<=20  Fail] " --precision 1e-8 #--buildfull --buildstateval
#--eliminate-chains 
exit
storm --jani 01.jani --prop "	Tmax=? [F  Fail]; Tmin=? [F  Fail]" --exact


rm 01.dot  01.pdf  01.jani 01.drn 01-jani.dot 01-jani.pdf 01-drn.pdf 01-drn.dot 01.modest
exit




#storm-dft -dft 01.dft --timebound 100
#dftcalc 01.dft -p -u

###################to 01ort jani format
#storm --jani 01.jani --io:01ortdot 01-jani.dot  --prop "Pmax=? [F<=100 Fail]" --buildfull --buildstateval #--eliminate-chains #  --ec-ignore-labeling
#dot -Tpdf 01-jani.dot -o 01-jani.pdf
#open 01-jani.pdf

######################to 01ort drn format
#storm --jani 01.jani --io:01ort01licit  01.drn   --prop "Pmax=? [F<=100 Fail]" --buildfull --buildstateval --eliminate-chains   #--ec-ignore-labeling  #--eliminate-chains #
#storm -drn 01.drn --io:01ortdot 01-drn.dot #--buildfull --buildstateval
#dot -Tpdf 01-drn.dot -o 01-drn.pdf
#open 01-drn.pdf
#####################01ort drn aggressive reduction
#storm --jani 01.jani --io:01ort01licit  01-aggressive.drn   --prop "Pmax=? [F<=100 Fail];" --buildfull --buildstateval --eliminate-chains   --ec-ignore-labeling  #--eliminate-chains #
#storm -drn 01-aggressive.drn --io:01ortdot 01-drn-aggressive.dot #--buildfull --buildstateval
#dot -Tpdf 01-drn-aggressive.dot -o 01-drn-aggressive.pdf
#open 01-drn-aggressive.pdf

#storm -drn 01_ctmc.drn --prop "Tmax=? [F \"Fail\"], Tmin=? [F \"Fail\"]" --exact
#storm -drn 01.drn --prop "Pmax=? [F [100, 100] f=false]"
