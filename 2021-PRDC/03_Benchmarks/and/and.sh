cd /Users/shahidkhan/Documents/storm_2/build_RDFT/bin/
./storm-dft -dft result/and/and.dft --dftGspn:to-gspn --exportGspn:to-pnpro result/and/and.pnpro --disabledc
/usr/local/GreatSPN/scripts/unfolding2 result/and/and
cp -v result/and/and.net result/BENCHMARK/BENCHMARK-Measures.solution/final.net
cp -v result/and/and.def result/BENCHMARK/BENCHMARK-Measures.solution/final.def
#REM greatspn_editor

#REM /Users/shahidkhan/Documents/storm_2/build_RDFT/bin/result/and

/usr/local/GreatSPN/bin/DSPN-Tool -load "result/BENCHMARK/BENCHMARK-Measures.solution/final" -epsilon 1.0E-7 -on-the-fly -i -gmres -dta-path "result/BENCHMARK/BENCHMARK-Measures.solution" -cslta0-X MEASURE0 "PROB_TA>0 DTA_unr (t=100| | Phi1=#TopGate_failed>0 )"
/usr/local/GreatSPN/bin/DSPN-Tool -load "result/BENCHMARK/BENCHMARK-Measures.solution/final" -epsilon 1.0E-7 -on-the-fly -i -gmres -dta-path "result/BENCHMARK/BENCHMARK-Measures.solution" -cslta0-X MEASURE0 "PROB_TA>0 DTA_unavil (t=100| | Phi1=#TopGate_failed>0 )"
#res3=$(date +%s.%N)
#compruntime=$(python -c "print(${res2} - ${res1})")
#echo "Translation and composition runtime was: $compruntime\n"
#relruntime=$(python -c "print(${res3} - ${res2})")
#echo "Translation and composition runtime was: $relruntime\n"