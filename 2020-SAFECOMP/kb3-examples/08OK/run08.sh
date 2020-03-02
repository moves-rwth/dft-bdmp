#!/bin/bash 



rm 08.dot 08_ctmc.drn 08.pdf  08.jani 08.drn 08-jani.dot 08-jani.pdf 08-drn.pdf 08-drn.dot  08.jani 08.drn 08.modest
python3 /home/shahid/PycharmProjects/Fi2Modest/src/main.py -i '08.fi' -o '08.modest'
#mono /home/shahid/modest/mcsta.exe  08.modest -E  "B=1"  
mono /home/shahid/modest/moconv.exe  08.modest -O  08.jani -E  "B=10"
scp 08.jani yg112533@login18-1.hpc.itc.rwth-aachen.de:/home/yg112533/job/08.jani
read -p "Press any key to continue"
scp  yg112533@login18-1.hpc.itc.rwth-aachen.de:/home/yg112533/job/08.drn 08.drn
storm -drn 08.drn  --io:exportexplicit 08_int.drn --prop "Tmax=? [F \"Fail\"]" --buildfull --eliminate-chains --ec-label-behavior delete
python3 /home/shahid/PycharmProjects/stormpy-project/src/main.py -i '08_int.drn' -o '08_ma.drn'
storm -drn '08_ma.drn' --io:exportexplicit  08_ctmc.drn --prop "Tmax=? [F \"Fail\"]" --buildfull --precision 1e-8 --eliminate-chains --ec-label-behavior delete
storm -drn '08_ctmc.drn'  --prop "Pmax=? [F<=10 \"Fail\"]" --precision 1e-8
storm -drn '08_ctmc.drn'  --prop "Pmax=? [F [10,10] \"Fail\"];Pmin=? [F [10,10] \"Fail\"]" --precision 1e-8

exit
###################to export jani format
storm --jani 08.jani --io:exportdot 08-jani.dot  --prop "Pmax=? [F<=100 Fail]" --buildfull --buildstateval --eliminate-chains #--ec-label-behavior merge 
dot -Tpdf 08-jani.dot -o 08-jani.pdf
okular 08-jani.p
###################to export jani format
storm --jani 08.jani --io:exportdot 08-jani.dot  --prop "Pmax=? [F<=100 Fail]" --buildfull --buildstateval --eliminate-chains #--ec-label-behavior merge 
dot -Tpdf 08-jani.dot -o 08-jani.pdf
okular 08-jani.pdf
exit

mono /home/shahid/modest/mosta.exe  08.modest -O  08.dot  
dot -Tpdf 08.dot -o 08.pdf
okular 08.pdf 
mono /home/shahid/modest/moconv.exe  08.modest -O  08.jani -E  "B=10" # >>sample.txt
storm --jani 08.jani --prop "Tmax=? [F  Fail];Tmin=? [F  Fail] " --precision 1e-8 --exact
exit
storm --jani 08.jani --prop "	Pmax=? [F<=1  Fail]; Pmin=? [F<=1  Fail];
				Pmax=? [F<=2  Fail]; Pmin=? [F<=2  Fail];
				Pmax=? [F<=3  Fail]; Pmin=? [F<=3 Fail];
				Pmax=? [F<=4  Fail]; Pmin=? [F<=4  Fail];
				Pmax=? [F<=5 Fail]; Pmin=? [F<=5 Fail];
				Pmax=? [F<=6 Fail]; Pmin=? [F<=6 Fail];
				Pmax=? [F<=7 Fail]; Pmin=? [F<=7 Fail];
				Pmax=? [F<=8 Fail]; Pmin=? [F<=8 Fail];
				Pmax=? [F<=9  Fail]; Pmin=? [F<=9 Fail];
				Pmax=? [F<=10  Fail]; Pmin=? [F<=10  Fail]" --precision 1e-8 #>>sample.txt #--eliminate-chains 
exit
storm --jani 08.jani --prop "	Pmax=? [F [1, 1]  Fail]; Pmin=? [F [1, 1]  Fail];
				Pmax=? [F [2, 2]  Fail]; Pmin=? [F [2, 2]  Fail];
				Pmax=? [F [3, 3]  Fail]; Pmin=? [F [3, 3] Fail];
				Pmax=? [F [4, 4]  Fail]; Pmin=? [F [4, 4]  Fail];
				Pmax=? [F [5, 5] Fail]; Pmin=? [F [5, 5] Fail];
				Pmax=? [F [6, 6] Fail]; Pmin=? [F [6, 6] Fail];
				Pmax=? [F [7, 7] Fail]; Pmin=? [F [7, 7] Fail];
				Pmax=? [F [8, 8] Fail]; Pmin=? [F [8, 8] Fail];
				Pmax=? [F [9, 9]  Fail]; Pmin=? [F [9, 9] Fail];
				Pmax=? [F [10, 10]  Fail]; Pmin=? [F [10, 10]  Fail]" --precision 1e-8 --eliminate-chains 
storm --jani 08.jani --prop "	Tmax=? [F  Fail]; Tmin=? [F  Fail]" --exact >>sample.txt

exit
rm 08.dot  08.pdf  08.jani 08.drn 08-jani.dot 08-jani.pdf 08-drn.pdf 08-drn.dot 08.modest 08.jani
#storm --jani 08.jani --prop "Tmax=? [F  Fail] " --precision 1e-8 --exact









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




