#!/bin/bash 


rm 05.dot 05_ctmc.drn 05.pdf  05.jani 05.drn 05-jani.dot 05-jani.pdf 05-drn.pdf 05-drn.dot  05.jani 05.drn 05.modest

python3 /home/shahid/PycharmProjects/Fi2Modest/src/main.py -i '05.fi' -o '05.modest'
#mono /home/shahid/modest/mcsta.exe  05.modest -E  "B=1"  
mono /home/shahid/modest/moconv.exe  05.modest -O  05.jani -E  "B=10"
scp 05.jani yg112533@login18-1.hpc.itc.rwth-aachen.de:/home/yg112533/job/05.jani
read -p "Press any key to continue"
scp  yg112533@login18-1.hpc.itc.rwth-aachen.de:/home/yg112533/job/05.drn 05.drn
storm -drn 05.drn  --io:exportexplicit 05_int.drn --prop "Tmax=? [F \"Fail\"]" --buildfull --eliminate-chains --ec-label-behavior delete
python3 /home/shahid/PycharmProjects/stormpy-project/src/main.py -i '05_int.drn' -o '05_ma.drn'
storm -drn '05_ma.drn' --io:exportexplicit  05_ctmc.drn --prop "Tmax=? [F \"Fail\"]" --buildfull --precision 1e-8 --eliminate-chains --ec-label-behavior delete
storm -drn '05_ctmc.drn'  --prop "Pmax=? [F<=20 \"Fail\"]" --precision 1e-8
storm -drn '05_ctmc.drn'  --prop "Pmax=? [F [20,20] \"Fail\"]" --precision 1e-8
exit
storm --jani 05.jani --io:exportexplicit  05.drn  --prop "Tmax=? [F Fail]" --buildfull --eliminate-chains --ec-label-behavior delete
python3 /home/shahid/PycharmProjects/stormpy-project/src/main.py -i '05.drn' -o '05_ma.drn'

storm -drn '05_ma.drn' --io:exportexplicit  05_ctmc.drn --prop "Pmax=? [F<=2 \"Fail\"]" --precision 1e-8 --eliminate-chains --ec-label-behavior delete
rm 05_ma.drn
storm -drn '05_ctmc.drn'  --prop "Pmax=? [F<=20 \"Fail\"];Pmin=? [F<=20 \"Fail\"]" --precision 1e-8
storm -drn '05_ctmc.drn'  --prop "Pmax=? [F [20,20] \"Fail\"];Pmin=? [F [20,20] \"Fail\"]" --precision 1e-8
exit
dot -Tpdf final.dot -o final.pdf
okular final.pdf
exit

#storm -drn 05-help.drn --prop  "Pmax=? [F [2,2]  \"Fail\"]" --precision 1e-8

#storm --jani 05.jani --prop "Pmax=? [F<=2  Fail]" --precision 1e-8 --eliminate-chains --ec-ignore-labeling --io:exportexplicit 05.drn --buildfull	
storm --jani 05.jani --prop "Pmax=? [F<=2  Fail]" --precision 1e-8 --buildfull #--eliminate-chains --ec-label-behavior merge --io:exportjanidot 05.dot 	
dot -Tpdf 05.dot -o 05.pdf
okular 05.pdf

#storm -drn 05.drn --prop "Pmax=? [F<=2 \"Fail\"]" --precision 1e-8

#storm -drn 05.drn --prop "Pmax=? [F [2, 2] \"Fail\"]" --precision 1e-8



exit
storm --jani 05.jani --prop "Tmax=? [F  Fail];Tmin=? [F  Fail] " --precision 1e-8 --exact

storm --jani 05.jani --prop "	Pmax=? [F<=2  Fail]; Pmin=? [F<=2  Fail];
				Pmax=? [F<=4  Fail]; Pmin=? [F<=4  Fail];
				Pmax=? [F<=6  Fail]; Pmin=? [F<=6  Fail];
				Pmax=? [F<=8  Fail]; Pmin=? [F<=8  Fail];
				Pmax=? [F<=10 Fail]; Pmin=? [F<=10 Fail];
				Pmax=? [F<=12 Fail]; Pmin=? [F<=12 Fail];
				Pmax=? [F<=14 Fail]; Pmin=? [F<=13 Fail];
				Pmax=? [F<=16 Fail]; Pmin=? [F<=14 Fail];
				Pmax=? [F<=18  Fail]; Pmin=? [F<=16 Fail];
				Pmax=? [F<=20  Fail]; Pmin=? [F<=20  Fail]" --precision 1e-8 --eliminate-chains 
exit
storm --jani 05.jani --prop "	Tmax=? [F  Fail]; Tmin=? [F  Fail]" --exact
rm 05.dot  05.pdf  05.jani 05.drn 05-jani.dot 05-jani.pdf 05-drn.pdf 05-drn.dot 05.modest 05.jani
exit
#









#storm-dft -dft 05.dft --timebound 100
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




