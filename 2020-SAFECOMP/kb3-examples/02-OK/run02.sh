#!/bin/bash 



rm 02.dot  02.pdf  02.jani 02.drn 02-jani.dot 02-jani.pdf 02-drn.pdf 02-drn.dot 02.modest 02.jani


python3 /home/shahid/PycharmProjects/Fi2Modest/src-nondet/main.py -i '02.fi' -o '02.modest'
#mono /home/shahid/modest/mcsta.exe  02.modest -E  "B=1"  
mono /home/shahid/modest/moconv.exe  02.modest -O  02.jani -E  "B=10"
scp 02.jani yg112533@login18-1.hpc.itc.rwth-aachen.de:/home/yg112533/job/02.jani
read -p "Press any key to continue"
scp  yg112533@login18-1.hpc.itc.rwth-aachen.de:/home/yg112533/job/02.drn 02.drn
storm -drn 02.drn  --io:exportexplicit 02_int.drn --prop "Tmax=? [F \"Fail\"]" --buildfull --eliminate-chains --ec-label-behavior delete
python3 /home/shahid/PycharmProjects/stormpy-project/src/main.py -i '02_int.drn' -o '02_ma.drn'
storm -drn '02_ma.drn' --io:exportexplicit  02_ctmc.drn --prop "Tmax=? [F \"Fail\"]" --buildfull --precision 1e-8 --eliminate-chains --ec-label-behavior delete
storm -drn '02_ctmc.drn'  --prop "Pmax=? [F<=9000 \"Fail\"]" --precision 1e-8
storm -drn '02_ctmc.drn'  --prop "Pmax=? [F [9000,9000] \"Fail\"]" --precision 1e-8

exit


python3 /home/shahid/PycharmProjects/Fi2Modest/src/main.py -i '02.fi' -o '02.modest'
mono /home/shahid/modest/moconv.exe  02.modest -O  02.jani -E  "B=10"
storm --jani 02.jani --io:exportexplicit  02.drn  --prop "Tmax=? [F Fail]" --buildfull --eliminate-chains --ec-label-behavior delete
python3 /home/shahid/PycharmProjects/stormpy-project/src/main.py -i '02.drn' -o '02_ma.drn'
storm -drn '02_ma.drn' --io:exportexplicit  02_ctmc.drn --prop "Pmax=? [F<=200 \"Fail\"]" --precision 1e-8 --eliminate-chains --ec-label-behavior delete
rm 02_ma.drn
storm -drn '02_ctmc.drn'  --prop "Pmax=? [F<=9000 \"Fail\"];Pmin=? [F<=9000 \"Fail\"]" --precision 1e-8
storm -drn '02_ctmc.drn'  --prop "Pmax=? [F [9000,9000] \"Fail\"];Pmin=? [F [9000,9000] \"Fail\"]" --precision 1e-8
exit
mono /home/shahid/modest/mcsta.exe  02.modest -E  "B=1" --long-run-alg ValueIteration 
mono /home/shahid/modest/mosta.exe  02.modest -O  02.dot  
dot -Tpdf 02.dot -o 02.pdf
okular 02.pdf 

storm --jani 02.jani --io:exportexplicit  02.drn  --prop "Tmax=? [F Fail]" --eliminate-chains --ec-label-behavior delete
python3 /home/shahid/PycharmProjects/stormpy-project/src/main.py -i '02.drn' -o '02_ctmc.drn'
storm -drn '02_ctmc.drn' --prop "Pmax=? [F<=200 \"Fail\"];Pmin=? [F<=2 \"Fail\"]" --precision 1e-8 --eliminate-chains --ec-label-behavior delete
exit

storm --jani 02.jani --prop "Tmax=? [F  Fail]; Tmin=?[F Fail] " --precision 1e-8 --exact


storm --jani 02.jani --prop "Pmax=? [F<=1000  Fail]; Pmin=? [F<=1000  Fail] ;
			      Pmax=? [F<=2000  Fail]; Pmin=? [F<=2000  Fail] ;
		 	      Pmax=? [F<=3000  Fail]; Pmin=? [F<=3000  Fail] ;
			      Pmax=? [F<=4000  Fail]; Pmin=? [F<=4000  Fail] ;
			      Pmax=? [F<=5000  Fail]; Pmin=? [F<=5000  Fail] ;
			      Pmax=? [F<=6000  Fail]; Pmin=? [F<=6000  Fail] ;
			      Pmax=? [F<=7000  Fail]; Pmin=? [F<=7000  Fail] ;
			      Pmax=? [F<=8000  Fail]; Pmin=? [F<=8000  Fail] ;
		 	      Pmax=? [F<=9000  Fail]; Pmin=? [F<=9000  Fail] ;			     
       			      Pmax=? [F<=10000  Fail]; Pmin=? [F<=10000  Fail] " --precision 1e-8 
rm 02.dot  02.pdf  02.jani 02.drn 02-jani.dot 02-jani.pdf 02-drn.pdf 02-drn.dot #02.modest 02.jani
exit
#

Pmax=? [F<=1000  Fail]; Pmin=? [F<=1000  Fail] ;
			      Pmax=? [F<=2000  Fail]; Pmin=? [F<=2000  Fail] ;
			      Pmax=? [F<=3000  Fail]; Pmin=? [F<=3000  Fail] ;







#storm-dft -dft 02.dft --timebound 100
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




