import os
from shutil import copyfile
import re
import click
from defusedxml.ElementTree import parse as parse_xml
from bs4 import BeautifulSoup
import subprocess
lowest_dirs = list()
current_directory = os.getcwd()
for root,dirs,files in os.walk(current_directory):
    if not dirs:
        lowest_dirs.append(root)
for terminal_path in lowest_dirs:
    #os.remove(os.path.join(current_directory,terminal_path,"configuration.mcp"))
    copyfile(os.path.join(current_directory,"configuration.mcp"),os.path.join(current_directory,terminal_path,"configuration.mcp"))
    os.chdir(os.path.join(current_directory,terminal_path))
    mcp_top_event = "null"
    fig_top_event = "null"
    figfile = "null"
    mcpfile = "null"
    bool french = false;
    for file in os.listdir('.'):
        if not(file.endswith('.fi') or file.endswith('.mcp')):
            continue
        elif file.endswith('.fi'):
            figfile = os.path.join(current_directory, terminal_path, file)
        elif file.endswith(".mcp"):
            mcpfile = os.path.join(current_directory, terminal_path, file)
    if figfile!= "null":
        with open(figfile, 'rt') as f:
            res = f.readlines()
            for i, lines in enumerate(res):
                if lines.startswith("OBJECT") or lines.startswith("OBJET"):
                    if lines.startswith("OBJECT"):
                        match = re.search(r"OBJECT (.*) IS_A undes_event;", lines)
                        if match:
                            fig_top_event = match.group(1)
                    if lines.startswith("OBJET"):
                        french = true;
                        match = re.search(r"OBJET (.*) EST_UN evt_indes;", lines)
                        if match:
                            fig_top_event = match.group(1)
    # print fig_top_event
    if mcpfile!= "null":
        mcpfile_contents =parse_xml(mcpfile)
        if french:
            mcp_top_event =  mcpfile_contents.find("ETATS").find("ETAT").get("EXPRESSION")[5:-1]
        else:
            mcp_top_event =  mcpfile_contents.find("ETATS").find("ETAT").get("EXPRESSION")[2:-1]
        # print mcp_top_event
        with open(mcpfile, 'r') as f:
            res = f.read().replace(mcp_top_event, fig_top_event)
        with open(mcpfile, 'w') as f:
            f.write(res)
    print("Process file:", figfile)
    subprocess.call(['D:\\YAMS\\yams.exe', 'export_fig0.fi', 'configuration.mcp', '-o', 'result.mcr'])
    print "loop"
