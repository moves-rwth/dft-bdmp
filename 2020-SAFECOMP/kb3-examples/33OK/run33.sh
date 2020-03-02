!/bin/bash 



rm 33.dot 33_ctmc.drn 33.pdf  33.jani 33.drn 33-jani.dot 33-jani.pdf 33-drn.pdf 33-drn.dot  33.jani 33.drn 33.modest
python3 /home/shahid/PycharmProjects/Fi2Modest/src/main.py -i '33.fi' -o '33.modest'
#mono /home/shahid/modest/mcsta.exe  33.modest -E  "B=1"  
mono /home/shahid/modest/moconv.exe  33.modest -O  33.jani -E  "B=10"
scp 33.jani yg112533@login18-1.hpc.itc.rwth-aachen.de:/home/yg112533/job/33.jani
read -p "Press any key to continue"
scp  yg112533@login18-1.hpc.itc.rwth-aachen.de:/home/yg112533/job/33.drn 33.drn
storm -drn 33.drn  --io:exportexplicit 33_int.drn --prop "Tmax=? [F \"Fail\"]" --buildfull --eliminate-chains --ec-label-behavior delete
python3 /home/shahid/PycharmProjects/stormpy-project/src/main.py -i '33_int.drn' -o '33_ma.drn'
storm -drn '33_ma.drn' --io:exportexplicit  33_ctmc.drn --prop "Tmax=? [F \"Fail\"]" --buildfull --precision 1e-8 --eliminate-chains --ec-label-behavior delete
storm -drn '33_ctmc.drn'  --prop "Pmax=? [F<=20 \"Fail\"]" --precision 1e-8
storm -drn '33_ctmc.drn'  --prop "Pmax=? [F [20,20] \"Fail\"]" --precision 1e-8

exit
storm --jani 33.jani --prop "Tmax=? [F  Fail];Tmin=? [F  Fail] " --precision 1e-8 --exact
storm --jani 33.jani --prop "	Pmax=? [F<=2  Fail];  Pmin=? [F<=2  Fail];
								Pmax=? [F<=4  Fail];  Pmin=? [F<=4  Fail];
								Pmax=? [F<=6  Fail];  Pmin=? [F<=6  Fail];
								Pmax=? [F<=8  Fail];  Pmin=? [F<=8  Fail];
								Pmax=? [F<=10 Fail];  Pmin=? [F<=10 Fail];
								Pmax=? [F<=12 Fail];  Pmin=? [F<=12 Fail];
								Pmax=? [F<=14 Fail];  Pmin=? [F<=14 Fail];
								Pmax=? [F<=16 Fail];  Pmin=? [F<=16 Fail];
								Pmax=? [F<=18  Fail]; Pmin=? [F<=18 Fail];
								Pmax=? [F<=20  Fail]; Pmin=? [F<=20  Fail]" --precision 1e-8 #--eliminate-chains 								
								
storm --jani 33.jani --prop  "Tmax=? [F  Fail]; Tmin=? [F  Fail]" --exact

exit
#storm --jani 33.jani --prop "Tmax=? [F  Fail] " --precision 1e-8 --exact









#storm-dft -dft 33.dft --timebound 100
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




