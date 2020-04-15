#!/bin/bash


rm *.parsing *.net *.def *.PNPRO
res1=$(date +%s.%N)
python3 ../../PythonScript/src/main.py -i '47.fi' -o 'DummyForPNPRO.modest'
cp -v ../BENCHMARK/final.net ../BENCHMARK/BENCHMARK-Measures.solution/final.net 
res2=$(date +%s.%N)
cp -v ../BENCHMARK/final.def ../BENCHMARK/BENCHMARK-Measures.solution/final.def 
/usr/local/GreatSPN/bin/DSPN-Tool -load "../BENCHMARK/BENCHMARK-Measures.solution//final" -epsilon 1.0E-7 -on-the-fly -i -gmres -dta-path "../BENCHMARK/BENCHMARK-Measures.solution" -cslta0-X MEASURE0 "PROB_TA>0 DTA_unr (t=10| | Phi1=#FAIL>0 )"
/usr/local/GreatSPN/bin/DSPN-Tool -load "../BENCHMARK/BENCHMARK-Measures.solution//final" -epsilon 1.0E-7 -on-the-fly -i -gmres -dta-path "../BENCHMARK/BENCHMARK-Measures.solution" -cslta0-X MEASURE0 "PROB_TA>0 DTA_unavil (t=10| | Phi1=#FAIL>0 )"
res3=$(date +%s.%N)
compruntime=$(python -c "print(${res2} - ${res1})")
echo "Translation and composition runtime was: $compruntime\n"
relruntime=$(python -c "print(${res3} - ${res2})")
echo "Translation and composition runtime was: $relruntime\n"


#storm-gspn -gspn ../BENCHMARK/BENCHMARK.PNPRO  --exportGspn:to-jani ../BENCHMARK/temp.jani  
#storm --jani ../BENCHMARK/temp.jani --prop "Pmin=? [F<=10 FAIL>0]" --precision 1e-6
#storm --jani ../BENCHMARK/temp.jani --prop "Tmax=? [F FAIL>0]; Tmin=? [F FAIL>0]"  --buildfull --buildstateval --exact

rm ../BENCHMARK/temp.jani  *.def  *.net  *.parsing


