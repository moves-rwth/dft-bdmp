#!/bin/bash 



rm 24.dot 24_ctmc.drn 24.pdf  24.jani 24.drn 24-jani.dot 24-jani.pdf 24-drn.pdf 24-drn.dot  24.jani 24.drn 24.modest
python3 /home/shahid/PycharmProjects/Fi2PNPRO/src/main.py -i '24.fi' -o '01.modest'
exit
python3 /home/shahid/PycharmProjects/Fi2Modest/src/main.py -i '24.fi' -o '24.modest'
#mono /home/shahid/modest/mcsta.exe  24.modest -E  "B=1"  
mono /home/shahid/modest/moconv.exe  24.modest -O  24.jani -E  "B=10"
scp 24.jani yg112533@login18-1.hpc.itc.rwth-aachen.de:/home/yg112533/job/24.jani
read -p "Press any key to continue"
scp  yg112533@login18-1.hpc.itc.rwth-aachen.de:/home/yg112533/job/24.drn 24.drn
storm -drn 24.drn  --io:exportexplicit 24_int.drn --prop "Tmax=? [F \"Fail\"]" --buildfull --eliminate-chains --ec-label-behavior delete
python3 /home/shahid/PycharmProjects/stormpy-project/src/main.py -i '24_int.drn' -o '24_ma.drn'
storm -drn '24_ma.drn' --io:exportexplicit  24_ctmc.drn --prop "Tmax=? [F \"Fail\"]" --buildfull --precision 1e-8 --eliminate-chains --ec-label-behavior delete
storm -drn '24_ctmc.drn'  --prop "Pmax=? [F<=10 \"Fail\"]" --precision 1e-8
storm -drn '24_ctmc.drn'  --prop "Pmax=? [F [10,10] \"Fail\"]" --precision 1e-8

exit
storm --jani 24.jani --io:exportdot 24-jani.dot  --prop "Pmax=? [F<=100 Fail]"  --eliminate-chains #--buildfull --buildstateval   #--ec-ignore-labeling 
dot -Tpdf 24-jani.dot -o 24-jani.pdf
okular 24-jani.pdf
storm --jani 24.jani --prop "Tmax=? [F  Fail];Tmin=? [F  Fail] " --precision 1e-8 --exact
storm --jani 24.jani --prop "	Pmax=? [F<=1  Fail]; Pmin=? [F<=1  Fail];
				Pmax=? [F<=2  Fail]; Pmin=? [F<=2  Fail];
				Pmax=? [F<=3  Fail]; Pmin=? [F<=3 Fail];
				Pmax=? [F<=4  Fail]; Pmin=? [F<=4  Fail];
				Pmax=? [F<=5 Fail]; Pmin=? [F<=5 Fail];
				Pmax=? [F<=6 Fail]; Pmin=? [F<=6 Fail];
				Pmax=? [F<=7 Fail]; Pmin=? [F<=7 Fail];
				Pmax=? [F<=8 Fail]; Pmin=? [F<=8 Fail];
				Pmax=? [F<=9  Fail]; Pmin=? [F<=9 Fail];
				Pmax=? [F<=10  Fail]; Pmin=? [F<=10  Fail]" --precision 1e-8 #--eliminate-chains 
storm --jani 24.jani --prop "	Tmax=? [F  Fail]; Tmin=? [F  Fail]" --exact
exit
rm 24.dot  24.pdf  24.jani 24.drn 24-jani.dot 24-jani.pdf 24-drn.pdf 24-drn.dot 24.modest 24.jani

#storm --jani 24.jani --prop "Tmax=? [F  Fail] " --precision 1e-8 --exact









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




