!/bin/bash 



rm 32.dot 32_ctmc.drn 32.pdf  32.jani 32.drn 32-jani.dot 32-jani.pdf 32-drn.pdf 32-drn.dot  32.jani 32.drn 32.modest
python3 /home/shahid/PycharmProjects/Fi2Modest/src/main.py -i '32.fi' -o '32.modest'
#mono /home/shahid/modest/mcsta.exe  32.modest -E  "B=1"  
mono /home/shahid/modest/moconv.exe  32.modest -O  32.jani -E  "B=10"
scp 32.jani yg112533@login18-1.hpc.itc.rwth-aachen.de:/home/yg112533/job/32.jani
read -p "Press any key to continue"
scp  yg112533@login18-1.hpc.itc.rwth-aachen.de:/home/yg112533/job/32.drn 32.drn
storm -drn 32.drn  --io:exportexplicit 32_int.drn --prop "Tmax=? [F \"Fail\"]" --buildfull --eliminate-chains --ec-label-behavior delete
python3 /home/shahid/PycharmProjects/stormpy-project/src/main.py -i '32_int.drn' -o '32_ma.drn'
storm -drn '32_ma.drn' --io:exportexplicit  32_ctmc.drn --prop "Tmax=? [F \"Fail\"]" --buildfull --precision 1e-8 --eliminate-chains --ec-label-behavior delete
storm -drn '32_ctmc.drn'  --prop "Pmax=? [F<=10 \"Fail\"]" --precision 1e-8
storm -drn '32_ctmc.drn'  --prop "Pmax=? [F [10,10] \"Fail\"]" --precision 1e-8

exit
storm --jani 32.jani --prop "	Pmax=? [F<=1  Fail];  Pmin=? [F<=1  Fail];
								Pmax=? [F<=2  Fail];  Pmin=? [F<=2  Fail];
								Pmax=? [F<=3  Fail];  Pmin=? [F<=3  Fail];
								Pmax=? [F<=4  Fail];  Pmin=? [F<=4  Fail];
								Pmax=? [F<=5 Fail];  Pmin=? [F<=5 Fail];
								Pmax=? [F<=6 Fail];  Pmin=? [F<=6 Fail];
								Pmax=? [F<=7 Fail];  Pmin=? [F<=7 Fail];
								Pmax=? [F<=8 Fail];  Pmin=? [F<=8 Fail];
								Pmax=? [F<=9  Fail]; Pmin=? [F<=9 Fail];
								Pmax=? [F<=10  Fail]; Pmin=? [F<=10  Fail]" --precision 1e-8 #--eliminate-chains 								
								
storm --jani 32.jani --prop  "Tmax=? [F  Fail]; Tmin=? [F  Fail]" --exact

exit
#storm --jani 32.jani --prop "Tmax=? [F  Fail] " --precision 1e-8 --exact









#storm-dft -dft 32.dft --timebound 100
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




