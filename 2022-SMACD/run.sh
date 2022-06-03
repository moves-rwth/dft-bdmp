#!/bin/bash
# My first script
python ../scripts/extend_model.py -v AVN.smv AVN.fei
python ../scripts/compute_ft.py -v --prop-text="(!(VC.is_HW_functional))"
python ../scripts/view_ft.py -o 
#python ../scripts/compute_ft.py -v --prop-text="(!(VC.is_vehcile_running))"
#python ../scripts/view_ft.py
#python ../scripts/compute_ft.py -v --prop-text="(!(VC.is_primary_sensor_functional))"
#python ../scripts/view_ft.py
