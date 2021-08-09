#!/bin/bash
# Partitioning A
python3 compose.py --dft ../dfts/safety_concept_1.json --partition files/partitions/sc1_a.json --out files/scenarios/safety_concept_1_a.json
python3 compose.py --dft ../dfts/safety_concept_2a.json --partition files/partitions/sc2a_a.json --out files/scenarios/safety_concept_2a_a.json
python3 compose.py --dft ../dfts/safety_concept_2b.json --partition files/partitions/sc2b_a.json --out files/scenarios/safety_concept_2b_a.json
python3 compose.py --dft ../dfts/safety_concept_3.json --partition files/partitions/sc3_a.json --out files/scenarios/safety_concept_3_a.json
# Partitioning B
python3 compose.py --dft ../dfts/safety_concept_1.json --partition files/partitions/sc1_b.json --out files/scenarios/safety_concept_1_b.json
python3 compose.py --dft ../dfts/safety_concept_2a.json --partition files/partitions/sc2a_b.json --out files/scenarios/safety_concept_2a_b.json
python3 compose.py --dft ../dfts/safety_concept_2b.json --partition files/partitions/sc2b_b.json --out files/scenarios/safety_concept_2b_b.json
python3 compose.py --dft ../dfts/safety_concept_3.json --partition files/partitions/sc3_b.json --out files/scenarios/safety_concept_3_b.json
# Partitioning C
python3 compose.py --dft ../dfts/safety_concept_1.json --partition files/partitions/sc1_c.json --out files/scenarios/safety_concept_1_c.json
python3 compose.py --dft ../dfts/safety_concept_2a.json --partition files/partitions/sc2a_c.json --out files/scenarios/safety_concept_2a_c.json
python3 compose.py --dft ../dfts/safety_concept_2b.json --partition files/partitions/sc2b_c.json --out files/scenarios/safety_concept_2b_c.json
python3 compose.py --dft ../dfts/safety_concept_3.json --partition files/partitions/sc3_c.json --out files/scenarios/safety_concept_3_c.json
# Other partitioning
python3 compose.py --dft ../dfts/safety_concept_2a.json --partition files/partitions/sc2a_d.json --out files/scenarios/safety_concept_2a_d.json
python3 compose.py --dft ../dfts/safety_concept_2a.json --partition files/partitions/sc2a_e.json --out files/scenarios/safety_concept_2a_e.json
python3 compose.py --dft ../dfts/safety_concept_2a_scaled.json --partition files/partitions/sc2a_e_scaled.json --out files/scenarios/safety_concept_2a_e_scaled.json
python3 compose.py --dft ../dfts/safety_concept_2a_scaled.json --partition files/partitions/sc2a_f_scaled.json --out files/scenarios/safety_concept_2a_f_scaled.json
