#!/bin/bash 


rm 06.dot 06_ctmc.drn 06.pdf  06.jani 06.drn 06-jani.dot 06-jani.pdf 06-drn.pdf 06-drn.dot  06.jani 06.drn 06.modest
python3 /home/shahid/PycharmProjects/Fi2Modest/src/main.py -i '06.fi' -o '06.modest'
#mono /home/shahid/modest/mcsta.exe  06.modest -E  "B=1"  
mono /home/shahid/modest/moconv.exe  06.modest -O  06.jani -E  "B=10"
scp 06.jani yg112533@login18-1.hpc.itc.rwth-aachen.de:/home/yg112533/job/06.jani
read -p "Press any key to continue"
scp  yg112533@login18-1.hpc.itc.rwth-aachen.de:/home/yg112533/job/06.drn 06.drn
storm -drn 06.drn  --io:exportexplicit 06_ma.drn --prop "Tmax=? [F \"Fail\"]" --buildfull --eliminate-chains --ec-label-behavior delete
#python3 /home/shahid/PycharmProjects/stormpy-project/src/main.py -i '06_int.drn' -o '06_ma.drn'
storm -drn '06_ma.drn' --io:exportexplicit  06_ctmc.drn --prop "Tmax=? [F \"Fail\"]" --buildfull --precision 1e-8 --eliminate-chains --ec-label-behavior delete
storm -drn '06_ctmc.drn'  --prop "Pmax=? [F<=3000 \"Fail\"]" --precision 1e-8
storm -drn '06_ctmc.drn'  --prop "Pmax=? [F [3000,3000] \"Fail\"]" --precision 1e-8

exit

###################to export jani format
storm --jani 06.jani --io:exportexplicit 06.drn --io:exportdot 06-jani.dot  --prop "Pmax=? [F<=100 Fail]" --buildfull --buildstateval   --eliminate-chains --ec-label-behavior merge  # -e dd -bisim --bisimulation:quot sparse
dot -Tpdf 06-jani.dot -o 06-jani.pdf
okular 06-jani.pdf
exit

storm --jani 06.jani --prop "Pmax=? [F<=300  Fail]" --precision 1e-8 --buildfull --eliminate-chains --ec-ignore-labeling --io:exportexplicit 06.drn

gedit 06.drn
echo "drn is generated please add init label"
read keypress

storm -drn 06.drn --prop "Pmax=? [F<=600 \"Fail\"]" --precision 1e-8

storm -drn 06.drn --prop "Pmax=? [F [6000, 6000] \"Fail\"]" --precision 1e-8


exit
storm --jani 06.jani --prop "Tmax=? [F  Fail];Tmin=? [F  Fail] " --precision 1e-8 --exact

exit
storm --jani 06.jani --prop "	Pmax=? [F<=300  Fail]; Pmin=? [F<=300  Fail];
				Pmax=? [F<=600  Fail]; Pmin=? [F<=600  Fail];
				Pmax=? [F<=900  Fail]; Pmin=? [F<=900  Fail];
				Pmax=? [F<=1200  Fail]; Pmin=? [F<=1200 Fail];
				Pmax=? [F<=1500 Fail]; Pmin=? [F<=1500 Fail];
				Pmax=? [F<=1800 Fail]; Pmin=? [F<=1800 Fail];
				Pmax=? [F<=2100 Fail]; Pmin=? [F<=2100 Fail];
				Pmax=? [F<=2400 Fail]; Pmin=? [F<=2400 Fail];
				Pmax=? [F<=2700  Fail]; Pmin=? [F<=2700 Fail];
				Pmax=? [F<=3000  Fail]; Pmin=? [F<=3000  Fail]" --precision 1e-8 #--eliminate-chains 
storm --jani 06.jani --prop "	Tmax=? [F  Fail]; Tmin=? [F  Fail]" --exact
rm 06.dot  06.pdf  06.jani 06.drn 06-jani.dot 06-jani.pdf 06-drn.pdf 06-drn.dot 06.modest 06.jani
exit
#storm --jani 06.jani --prop "Tmax=? [F  Fail] " --precision 1e-8 --exact









#storm-dft -dft 06.dft --timebound 100
#dftcalc exp.dft -p -u



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




