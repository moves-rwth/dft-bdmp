!/bin/bash 


rm 49.dot 49_ctmc.drn 49.pdf  49.jani 49.drn 49-jani.dot 49-jani.pdf 49-drn.pdf 49-drn.dot  49.jani 49.drn 49.modest
python3 /home/shahid/PycharmProjects/Fi2Modest/src/main.py -i '49.fi' -o '49.modest'
#mono /home/shahid/modest/mcsta.exe  49.modest -E  "B=1"  
mono /home/shahid/modest/moconv.exe  49.modest -O  49.jani -E  "B=10"
scp 49.jani yg112533@login18-1.hpc.itc.rwth-aachen.de:/home/yg112533/job/49.jani
read -p "Press any key to continue"
scp  yg112533@login18-1.hpc.itc.rwth-aachen.de:/home/yg112533/job/49.drn 49.drn
storm -drn 49.drn  --io:exportexplicit 49_int.drn --prop "Tmax=? [F \"Fail\"]" --buildfull --eliminate-chains --ec-label-behavior delete
python3 /home/shahid/PycharmProjects/stormpy-project/src/main.py -i '49_int.drn' -o '49_ma.drn'
storm -drn '49_ma.drn' --io:exportexplicit  49_ctmc.drn --prop "Tmax=? [F \"Fail\"]" --buildfull --precision 1e-8 --eliminate-chains --ec-label-behavior delete
storm -drn '49_ctmc.drn'  --prop "Pmax=? [F<=10 \"Fail\"]" --precision 1e-8
storm -drn '49_ctmc.drn'  --prop "Pmax=? [F [10,10] \"Fail\"]" --precision 1e-8

exit
storm --jani 49.jani --prop "	Pmax=? [F<=1  Fail];  Pmin=? [F<=1  Fail];
								Pmax=? [F<=2  Fail];  Pmin=? [F<=2  Fail];
								Pmax=? [F<=3  Fail];  Pmin=? [F<=3  Fail];
								Pmax=? [F<=4  Fail];  Pmin=? [F<=4  Fail];
								Pmax=? [F<=5 Fail];  Pmin=? [F<=5 Fail];
								Pmax=? [F<=6 Fail];  Pmin=? [F<=6 Fail];
								Pmax=? [F<=7 Fail];  Pmin=? [F<=7 Fail];
								Pmax=? [F<=8 Fail];  Pmin=? [F<=8 Fail];
								Pmax=? [F<=9  Fail]; Pmin=? [F<=9 Fail];
								Pmax=? [F<=10  Fail]; Pmin=? [F<=10  Fail]" --precision 1e-8 #--eliminate-chains 								
								
storm --jani 49.jani --prop  "Tmax=? [F  Fail]; Tmin=? [F  Fail]" --exact

exit
#storm --jani 49.jani --prop "Tmax=? [F  Fail] " --precision 1e-8 --exact









#storm-dft -dft 49.dft --timebound 100
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




