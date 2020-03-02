#!/bin/bash 



rm 10.dot 10_ctmc.drn 10.pdf  10.jani 10.drn 10-jani.dot 10-jani.pdf 10-drn.pdf 10-drn.dot  10.jani 10.drn 10.modest
python3 /home/shahid/PycharmProjects/Fi2Modest/src/main.py -i '10.fi' -o '10.modest'
#mono /home/shahid/modest/mcsta.exe  10.modest -E  "B=1"  
mono /home/shahid/modest/moconv.exe  10.modest -O  10.jani -E  "B=10"
scp 10.jani yg112533@login18-1.hpc.itc.rwth-aachen.de:/home/yg112533/job/10.jani
read -p "Press any key to continue"
scp  yg112533@login18-1.hpc.itc.rwth-aachen.de:/home/yg112533/job/10.drn 10.drn
storm -drn 10.drn  --io:exportexplicit 10_int.drn --prop "Tmax=? [F \"Fail\"]" --buildfull --eliminate-chains --ec-label-behavior delete
python3 /home/shahid/PycharmProjects/stormpy-project/src/main.py -i '10_int.drn' -o '10_ma.drn'
storm -drn '10_ma.drn' --io:exportexplicit  10_ctmc.drn --prop "Tmax=? [F \"Fail\"]" --buildfull --precision 1e-8 --eliminate-chains --ec-label-behavior delete
storm -drn '10_ctmc.drn'  --prop "Pmax=? [F<=12 \"Fail\"]" --precision 1e-8
storm -drn '10_ctmc.drn'  --prop "Pmax=? [F [12,12] \"Fail\"]" --precision 1e-8

exi
###################to export jani format
storm --jani 10.jani --io:exportdot 10-jani.dot  --prop "Pmax=? [F<=100 Fail]" --buildfull --buildstateval --eliminate-chains #--ec-label-behavior merge 
dot -Tpdf 10-jani.dot -o 10-jani.pdf
okular 10-jani.pdf
exit
storm --jani 10.jani --prop "Tmax=? [F  Fail];Tmin=? [F  Fail] " --precision 1e-8 --exact
exit
storm --jani 10.jani --prop "	Pmax=? [F<=3  Fail]; Pmin=? [F<=3  Fail];
				Pmax=? [F<=6  Fail]; Pmin=? [F<=6  Fail];
				Pmax=? [F<=9  Fail]; Pmin=? [F<=9 Fail];
				Pmax=? [F<=12 Fail]; Pmin=? [F<=12  Fail];
				Pmax=? [F<=15 Fail]; Pmin=? [F<=15 Fail];
				Pmax=? [F<=18 Fail]; Pmin=? [F<=18 Fail];
				Pmax=? [F<=21 Fail]; Pmin=? [F<=21 Fail];
				Pmax=? [F<=24 Fail]; Pmin=? [F<=24 Fail];
				Pmax=? [F<=27  Fail]; Pmin=? [F<=27 Fail];
				Pmax=? [F<=30  Fail]; Pmin=? [F<=30  Fail]" --precision 1e-8 #--eliminate-chains 
storm --jani 10.jani --prop "	Tmax=? [F  Fail]; Tmin=? [F  Fail]" --exact
rm 10.dot  10.pdf  10.jani 10.drn 10-jani.dot 10-jani.pdf 10-drn.pdf 10-drn.dot 10.modest 10.jani
exit
#storm --jani 10.jani --prop "Tmax=? [F  Fail] " --precision 1e-8 --exact









#storm-dft -dft 10.dft --timebound 100
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




