#!/bin/bash



storm -drn helo.drn --prop "	Pmax=? [F<=1  \"Fail\"]" --precision 1e-8 --io:exportexplicit helo1.drn --eliminate-chains #--ec-label-behavior delete #--buildfull --buildstateval
storm -drn helo.drn --prop "	Pmax=? [F<=1  \"Fail\"]"

exit
storm --jani 01.jani --prop "	Tmax=? [F  Fail]; Tmin=? [F  Fail]" --exact


rm 01.dot  01.pdf  01.jani 01.drn 01-jani.dot 01-jani.pdf 01-drn.pdf 01-drn.dot 01.modest
exit




#storm-dft -dft 01.dft --timebound 100
#dftcalc 01.dft -p -u

###################to 01ort jani format
#storm --jani 01.jani --io:01ortdot 01-jani.dot  --prop "Pmax=? [F<=100 Fail]" --buildfull --buildstateval #--eliminate-chains #  --ec-ignore-labeling
#dot -Tpdf 01-jani.dot -o 01-jani.pdf
#open 01-jani.pdf

######################to 01ort drn format
#storm --jani 01.jani --io:01ort01licit  01.drn   --prop "Pmax=? [F<=100 Fail]" --buildfull --buildstateval --eliminate-chains   #--ec-ignore-labeling  #--eliminate-chains #
#storm -drn 01.drn --io:01ortdot 01-drn.dot #--buildfull --buildstateval
#dot -Tpdf 01-drn.dot -o 01-drn.pdf
#open 01-drn.pdf
#####################01ort drn aggressive reduction
#storm --jani 01.jani --io:01ort01licit  01-aggressive.drn   --prop "Pmax=? [F<=100 Fail];" --buildfull --buildstateval --eliminate-chains   --ec-ignore-labeling  #--eliminate-chains #
#storm -drn 01-aggressive.drn --io:01ortdot 01-drn-aggressive.dot #--buildfull --buildstateval
#dot -Tpdf 01-drn-aggressive.dot -o 01-drn-aggressive.pdf
#open 01-drn-aggressive.pdf

#storm -drn 01.drn --prop "Pmax=? [F<=100 \"Fail\"]"
#storm -drn 01.drn --prop "Pmax=? [F [100, 100] f=false]"
