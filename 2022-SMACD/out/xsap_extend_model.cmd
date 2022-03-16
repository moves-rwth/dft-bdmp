set on_failure_script_quits
read_model -i "AVN.smv"
flatten_hierarchy
fe_load_doc -o "out/errors.log"  -p "/home/shahid/xSAP/data/schema" -i "out/expanded_AVN.xml"
fe_extend_module -m "out/fms_AVN.xml"   -o "out/extended_AVN.smv"
quit
