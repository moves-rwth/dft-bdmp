!/bin/bash 



rm 34.dot 34_ctmc.drn 34.pdf  34.jani 34.drn 34-jani.dot 34-jani.pdf 34-drn.pdf 34-drn.dot  34.jani 34.drn 34.modest
python3 /home/shahid/PycharmProjects/Fi2Modest/src/main.py -i '34.fi' -o '34.modest'
#mono /home/shahid/modest/mcsta.exe  34.modest -E  "B=1"  
mono /home/shahid/modest/moconv.exe  34.modest -O  34.jani -E  "B=10"
scp 34.jani yg112533@login18-1.hpc.itc.rwth-aachen.de:/home/yg112533/job/34.jani
read -p "Press any key to continue"
scp  yg112533@login18-1.hpc.itc.rwth-aachen.de:/home/yg112533/job/34.drn 34.drn
storm -drn 34.drn  --io:exportexplicit 34_int.drn --prop "Tmax=? [F \"Fail\"]" --buildfull --eliminate-chains --ec-label-behavior delete
python3 /home/shahid/PycharmProjects/stormpy-project/src/main.py -i '34_int.drn' -o '34_ma.drn'
storm -drn '34_ma.drn' --io:exportexplicit  34_ctmc.drn --prop "Tmax=? [F \"Fail\"]" --buildfull --precision 1e-8 --eliminate-chains --ec-label-behavior delete
storm -drn '34_ctmc.drn'  --prop "Pmax=? [F<=100 \"Fail\"]" --precision 1e-8
storm -drn '34_ctmc.drn'  --prop "Pmax=? [F [100,100] \"Fail\"]" --precision 1e-8

exit
storm --jani 34.jani --prop "	Pmax=? [F<=10  Fail];  Pmin=? [F<=10  Fail];
								Pmax=? [F<=20  Fail];  Pmin=? [F<=20  Fail];
								Pmax=? [F<=30  Fail];  Pmin=? [F<=30  Fail];
								Pmax=? [F<=40  Fail];  Pmin=? [F<=40  Fail];
								Pmax=? [F<=50 Fail];  Pmin=? [F<=50 Fail];
								Pmax=? [F<=60 Fail];  Pmin=? [F<=60 Fail];
								Pmax=? [F<=70 Fail];  Pmin=? [F<=70 Fail];
								Pmax=? [F<=80 Fail];  Pmin=? [F<=80 Fail];
								Pmax=? [F<=90  Fail]; Pmin=? [F<=90 Fail];
								Pmax=? [F<=100  Fail]; Pmin=? [F<=100  Fail]" --precision 1e-8 #--eliminate-chains 								
								
storm --jani 34.jani --prop  "Tmax=? [F  Fail]; Tmin=? [F  Fail]" --exact

exit
#storm --jani 34.jani --prop "Tmax=? [F  Fail] " --precision 1e-8 --exact









#storm-dft -dft 34.dft --timebound 100
#dftcalc exp.dft -p -u

###################to export jani format
storm --jani exp.jani --io:exportdot exp-jani.dot  --prop "Pmax=? [F<=100 Fail]" --buildfull --buildstateval #--eliminate-chains #  --ec-ignore-labeling 
dot -Tpdf exp-jani.dot -o exp-jani.pdf
ostorm --jani 34.jani --prop "Tmax=? [F  Fail] " --precision 1e-8 --exactkular exp-jani.pdf

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




