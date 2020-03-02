!/bin/bash 



rm 35.dot 35_ctmc.drn 35.pdf  35.jani 35.drn 35-jani.dot 35-jani.pdf 35-drn.pdf 35-drn.dot  35.jani 35.drn 35.modest
python3 /home/shahid/PycharmProjects/Fi2Modest/src/main.py -i '35.fi' -o '35.modest'
#mono /home/shahid/modest/mcsta.exe  35.modest -E  "B=1"  
mono /home/shahid/modest/moconv.exe  35.modest -O  35.jani -E  "B=10"
scp 35.jani yg112533@login18-1.hpc.itc.rwth-aachen.de:/home/yg112533/job/35.jani
read -p "Press any key to continue"
scp  yg112533@login18-1.hpc.itc.rwth-aachen.de:/home/yg112533/job/35.drn 35.drn
storm -drn 35.drn  --io:exportexplicit 35_int.drn --prop "Tmax=? [F \"Fail\"]" --buildfull --eliminate-chains --ec-label-behavior delete
python3 /home/shahid/PycharmProjects/stormpy-project/src/main.py -i '35_int.drn' -o '35_ma.drn'
storm -drn '35_ma.drn' --io:exportexplicit  35_ctmc.drn --prop "Tmax=? [F \"Fail\"]" --buildfull --precision 1e-8 --eliminate-chains --ec-label-behavior delete
storm -drn '35_ctmc.drn'  --prop "Pmax=? [F<=100 \"Fail\"]" --precision 1e-8
storm -drn '35_ctmc.drn'  --prop "Pmax=? [F [100,100] \"Fail\"]" --precision 1e-8

exit

storm --jani 35.jani --prop "	Pmax=? [F<=10  Fail];  Pmin=? [F<=10  Fail];
								Pmax=? [F<=20  Fail];  Pmin=? [F<=20  Fail];
								Pmax=? [F<=30  Fail];  Pmin=? [F<=30  Fail];
								Pmax=? [F<=40  Fail];  Pmin=? [F<=40  Fail];
								Pmax=? [F<=50 Fail];  Pmin=? [F<=50 Fail];
								Pmax=? [F<=60 Fail];  Pmin=? [F<=60 Fail];
								Pmax=? [F<=70 Fail];  Pmin=? [F<=70 Fail];
								Pmax=? [F<=80 Fail];  Pmin=? [F<=80 Fail];
								Pmax=? [F<=90  Fail]; Pmin=? [F<=90 Fail];
								Pmax=? [F<=100  Fail]; Pmin=? [F<=100  Fail]" --precision 1e-8 #--eliminate-chains 								
								
storm --jani 35.jani --prop  "Tmax=? [F  Fail]; Tmin=? [F  Fail]" --exact

exit
#storm --jani 35.jani --prop "Tmax=? [F  Fail] " --precision 1e-8 --exact









#storm-dft -dft 35.dft --timebound 100
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




