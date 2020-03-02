#!/bin/bash 



rm 03.dot 03_ctmc.drn 03.pdf  03.jani 03.drn 03-jani.dot 03-jani.pdf 03-drn.pdf 03-drn.dot  03.jani 03.drn 03.modest

python3 /home/shahid/PycharmProjects/Fi2Modest/src/main.py -i '03.fi' -o '03.modest'
#mono /home/shahid/modest/mcsta.exe  03.modest -E  "B=1"  
mono /home/shahid/modest/moconv.exe  03.modest -O  03.jani -E  "B=10"
scp 03.jani yg112533@login18-1.hpc.itc.rwth-aachen.de:/home/yg112533/job/03.jani
read -p "Press any key to continue"
scp  yg112533@login18-1.hpc.itc.rwth-aachen.de:/home/yg112533/job/03.drn 03.drn
storm -drn 03.drn  --io:exportexplicit 03_int.drn --prop "Tmax=? [F \"Fail\"]" --buildfull --eliminate-chains --ec-label-behavior delete
python3 /home/shahid/PycharmProjects/stormpy-project/src/main.py -i '03_int.drn' -o '03_ma.drn'
storm -drn '03_ma.drn' --io:exportexplicit  03_ctmc.drn --prop "Tmax=? [F \"Fail\"]" --buildfull --precision 1e-8 --eliminate-chains --ec-label-behavior delete
storm -drn '03_ctmc.drn'  --prop "Pmax=? [F<=10 \"Fail\"]" --precision 1e-8
storm -drn '03_ctmc.drn'  --prop "Pmax=? [F [10,10] \"Fail\"];Pmin=? [F [10,10] \"Fail\"]" --precision 1e-8

exit


storm --jani 03.jani --prop "Pmax=? [F<=26  Fail]" --precision 1e-8 --buildfull --eliminate-chains --ec-ignore-labeling --io:exportexplicit 06.drn

gedit 03.drn
echo "drn is generated please add init label"
read keypress

storm -drn 03.drn --prop "Pmax=? [F<=600 \"Fail\"]" --precision 1e-8

storm -drn 03.drn --prop "Pmax=? [F [6000, 6000] \"Fail\"]" --precision 1e-8
exit
storm --jani 03.jani --io:exportexplicit  03-help.drn --eliminate-chains --prop "Tmax=? [F Fail]"

storm -drn 03-help.drn --prop  "Tmax=? [F  \"Fail\"]" --exact
exit
#storm --jani 03.jani --prop "	Pmax=? [F [2, 2]  Fail]" --precision 1e-8 # --eliminate-chains 
exit
;
				Pmax=? [F [4, 4] Fail]; Pmin=? [F [ 4 , 4] Fail];
				Pmax=? [F [6, 6] Fail]; Pmin=? [F [ 6 , 6] Fail];
				Pmax=? [F [8, 5] Fail]; Pmin=? [F [ 8 ,8]  Fail];
				Pmax=? [F [10, 10]  Fail]; Pmin=? [F [ 10, 10] Fail];
				Pmax=? [F [12, 12]  Fail]; Pmin=? [F [ 12,12] Fail];
				Pmax=? [F [14, 14]  Fail]; Pmin=? [F [ 14,14] Fail];
				Pmax=? [F [16, 16]  Fail]; Pmin=? [F [ 16,16] Fail];
				Pmax=? [F [18, 18]   Fail]; Pmin=? [F [ 18,18] Fail];
				Pmax=? [F [20, 20]  Fail]; Pmin=? [F [ 20, 20] Fail]
exit
storm --jani 03.jani --io:exportexplicit  03.drn --eliminate-chains --prop "Pmax=? [F[100, 100] Fail]"
storm -drn 03.drn --prop "Pmax=? [F [2, 2] \"Fail\"]"

exit


storm --jani 03.jani --prop "	Pmax=? [F<=2  Fail]; Pmin=? [F<=2  Fail];
				Pmax=? [F<=4  Fail]; Pmin=? [F<=4  Fail];
				Pmax=? [F<=6  Fail]; Pmin=? [F<=6  Fail];
				Pmax=? [F<=8  Fail]; Pmin=? [F<=8  Fail];
				Pmax=? [F<=10 Fail]; Pmin=? [F<=10 Fail];
				Pmax=? [F<=12 Fail]; Pmin=? [F<=12 Fail];
				Pmax=? [F<=14 Fail]; Pmin=? [F<=13 Fail];
				Pmax=? [F<=16 Fail]; Pmin=? [F<=14 Fail];
				Pmax=? [F<=18  Fail]; Pmin=? [F<=16 Fail];
				Pmax=? [F<=20  Fail]; Pmin=? [F<=20  Fail]" --precision 1e-8 #--eliminate-chains 
storm --jani 03.jani --prop  "Tmax=? [F  Fail]; Tmin=? [F  Fail]" --exact

exit
#storm --jani 03.jani --prop "Tmax=? [F  Fail] " --precision 1e-8 --exact









#storm-dft -dft 03.dft --timebound 100
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




