#!/bin/bash 



rm 12.dot 12_ctmc.drn 12.pdf  12.jani 12.drn 12-jani.dot 12-jani.pdf 12-drn.pdf 12-drn.dot  12.jani 12.drn 12.modest
python3 /home/shahid/PycharmProjects/Fi2Modest/src/main.py -i '12.fi' -o '12.modest'
#mono /home/shahid/modest/mcsta.exe  12.modest -E  "B=1"  
mono /home/shahid/modest/moconv.exe  12.modest -O  12.jani -E  "B=10"
scp 12.jani yg112533@login18-1.hpc.itc.rwth-aachen.de:/home/yg112533/job/12.jani
read -p "Press any key to continue"
scp  yg112533@login18-1.hpc.itc.rwth-aachen.de:/home/yg112533/job/12.drn 12.drn
storm -drn 12.drn  --io:exportexplicit 12_int.drn --prop "Tmax=? [F \"Fail\"]" --buildfull --eliminate-chains --ec-label-behavior delete
python3 /home/shahid/PycharmProjects/stormpy-project/src/main.py -i '12_int.drn' -o '12_ma.drn'
storm -drn '12_ma.drn' --io:exportexplicit  12_ctmc.drn --prop "Tmax=? [F \"Fail\"]" --buildfull --precision 1e-8 --eliminate-chains --ec-label-behavior delete
storm -drn '12_ctmc.drn'  --prop "Pmax=? [F<=20 \"Fail\"]" --precision 1e-8
storm -drn '12_ctmc.drn'  --prop "Pmax=? [F [20,20] \"Fail\"]" --precision 1e-8

exit

###################to export jani format
storm --jani 12.jani --io:exportdot 12-jani.dot  --prop "Pmax=? [F<=100 Fail]" --buildfull --buildstateval --eliminate-chains #--ec-label-behavior merge 
dot -Tpdf 12-jani.dot -o 12-jani.pdf
okular 12-jani.pdf
exit
storm --jani 12.jani --prop "Tmax=? [F  Fail];Tmin=? [F  Fail] " --precision 1e-8 --exact
exit
storm --jani 12.jani --prop "	Pmax=? [F<=10  Fail]; Pmin=? [F<=10  Fail];
				Pmax=? [F<=20  Fail]; Pmin=? [F<=20  Fail];
				Pmax=? [F<=30  Fail]; Pmin=? [F<=30 Fail];
				Pmax=? [F<=40  Fail]; Pmin=? [F<=40  Fail];
				Pmax=? [F<=50 Fail]; Pmin=? [F<=50 Fail];
				Pmax=? [F<=60 Fail]; Pmin=? [F<=60 Fail];
				Pmax=? [F<=70 Fail]; Pmin=? [F<=70 Fail];
				Pmax=? [F<=80 Fail]; Pmin=? [F<=80 Fail];
				Pmax=? [F<=90  Fail]; Pmin=? [F<=90 Fail];
				Pmax=? [F<=100  Fail]; Pmin=? [F<=100  Fail]" --precision 1e-8 #--eliminate-chains 
storm --jani 12.jani --prop "	Tmax=? [F  Fail]; Tmin=? [F  Fail]" --exact
rm 12.dot  12.pdf  12.jani 12.drn 12-jani.dot 12-jani.pdf 12-drn.pdf 12-drn.dot 12.modest 12.jani
exit
#storm --jani 12.jani --prop "Tmax=? [F  Fail] " --precision 1e-8 --exact









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




