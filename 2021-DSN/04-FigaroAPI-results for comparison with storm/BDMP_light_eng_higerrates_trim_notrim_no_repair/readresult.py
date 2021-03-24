import os
from shutil import copyfile
import re
from defusedxml.ElementTree import parse as parse_xml
import subprocess
lowest_dirs = list()
# print(lowest_dirs)
current_directory = os.getcwd()
for root,dirs,files in os.walk(current_directory):
    if not dirs:
        lowest_dirs.append(root)
for terminal_path in lowest_dirs:
    # copyfile(os.path.join(current_directory,"configuration.mcp"),os.path.join(current_directory,terminal_path,"configuration.mcp"))
    #os.remove(os.path.join(current_directory,terminal_path,"configuration.mcp"))
    os.chdir(os.path.join(current_directory,terminal_path))
    mcp_top_event = "null"
    fig_top_event = "null"
    figfile = "null"
    fsrfile = "null"
    for file in os.listdir('.'):
        if not(file.endswith('.fsr')):
            continue
        else :
            fsrfile = os.path.join(current_directory, terminal_path, file)
        if file != "FigseqResults.fsr":
            fsrfile_contents =parse_xml(fsrfile)
            mission_time_prob =   fsrfile_contents.find("STUDY").find("TARGET").get("MIS_TIME_PROBA")
            optimisitc_prob = fsrfile_contents.find("STUDY").find("TARGET").get("MIS_TIME_OPT_PROBA")
            print(os.path.join( terminal_path, file), ", MaxProbability: , ", mission_time_prob, ", Optimistic Probability ,", optimisitc_prob)
        #     # print mcp_top_event
        #     with open(mcpfile, 'r') as f:
        #         res = f.read().replace(mcp_top_event, fig_top_event)
        #     with open(mcpfile, 'w') as f:
        #         f.write(res)
        # print("Process file:", figfile)
        # subprocess.call(['C:\\PortablePrograms\\EDF MRI TOOLS\\YAMS\\yams.exe', 'export_fig0.fi', 'configuration.mcp', '-o', 'result.mcr'])
        # print ("loop")
