#!/bin/bash
# I
#python3 run.py --dft files/scenarios/safety_concept_1_b.json --tmp-dir files/scenarios/tmp/ --storm ~/develop/release_storm/build --export files/results/safety_concept_1_b.csv
python3 run.py --dft files/dft_files/sc_1.json --tmp-dir files/scenarios/tmp/ --storm ~/Softwares/storm/build --export files/results/safety_concept_1_b.csv

# II
#python3 run.py --dft files/scenarios/safety_concept_2a_b.json --tmp-dir files/scenarios/tmp/ --storm ~/develop/release_storm/build --export files/results/safety_concept_2a_b.csv
python3 run.py --dft files/dft_files/sc_2.json --tmp-dir files/scenarios/tmp/ --storm ~/develop/release_storm/build --export files/results/safety_concept_2a_b.csv

# III
#python3 run.py --dft files/scenarios/safety_concept_2b_b.json --tmp-dir files/scenarios/tmp/ --storm ~/develop/release_storm/build --export files/results/safety_concept_2b_b.csv
python3 run.py --dft files/dft_files/sc_3.json --tmp-dir files/scenarios/tmp/ --storm ~/develop/release_storm/build --export files/results/safety_concept_2b_b.csv

# IV
#python3 run.py --dft files/scenarios/safety_concept_3_b_fixed.json --tmp-dir files/scenarios/tmp/ --storm ~/develop/release_storm/build --export files/results/safety_concept_3_b.csv
python3 run.py --dft files/dft_files/sc_4.json --tmp-dir files/scenarios/tmp/ --storm ~/develop/release_storm/build --export files/results/safety_concept_3_b.csv

# V
#python3 run.py --dft files/scenarios/safety_concept_2a_a.json --tmp-dir files/scenarios/tmp/ --storm ~/develop/release_storm/build --export files/results/safety_concept_2a_a.csv
python3 run.py --dft files/dft_files/sc_5.json --tmp-dir files/scenarios/tmp/ --storm ~/develop/release_storm/build --export files/results/safety_concept_2a_a.csv

# VI
#python3 run.py --dft files/scenarios/safety_concept_2a_c.json --tmp-dir files/scenarios/tmp/ --storm ~/develop/release_storm/build --export files/results/safety_concept_2a_c.csv
python3 run.py --dft files/dft_files/sc_6.json --tmp-dir files/scenarios/tmp/ --storm ~/develop/release_storm/build --export files/results/safety_concept_2a_c.csv

# VII
#python3 run.py --dft files/scenarios/safety_concept_2a_e_scaled_fixed.json --tmp-dir files/scenarios/tmp/ --storm ~/develop/release_storm/build --export files/results/safety_concept_2a_e_scaled_fixed.csv
python3 run.py --dft files/dft_files/sc_7.json --tmp-dir files/scenarios/tmp/ --storm ~/develop/release_storm/build --export files/results/safety_concept_2a_e_scaled_fixed.csv

# VIII
#python3 run.py --dft files/scenarios/safety_concept_2a_f_scaled_fixed.json --tmp-dir files/scenarios/tmp/ --storm ~/develop/release_storm/build --export files/results/safety_concept_2a_f_scaled_fixed.csv
python3 run.py --dft files/dft_files/sc_8.json --tmp-dir files/scenarios/tmp/ --storm ~/develop/release_storm/build --export files/results/safety_concept_2a_f_scaled_fixed.csv
