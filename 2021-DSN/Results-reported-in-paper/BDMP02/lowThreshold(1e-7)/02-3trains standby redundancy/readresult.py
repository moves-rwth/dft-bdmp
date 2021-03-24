import os
from shutil import copyfile
import re
from defusedxml.ElementTree import parse as parse_xml
import subprocess
from bs4 import BeautifulSoup
count = 0
lowest_dirs = list()
# print(lowest_dirs)
current_directory = os.getcwd()
for root, dirs, files in os.walk(current_directory):
    if not dirs:
        lowest_dirs.append(root)
for terminal_path in lowest_dirs:
    count = count + 1
    # copyfile(os.path.join(current_directory,"configuration.mcp"),os.path.join(current_directory,terminal_path,"configuration.mcp"))
    # os.remove(os.path.join(current_directory,terminal_path,"configuration.mcp"))
    os.chdir(os.path.join(current_directory, terminal_path))
    mcp_top_event = "null"
    fig_top_event = "null"
    figfile = "null"
    htmlfile = "null"
    for file in os.listdir('.'):
        if not (file.endswith('.html')) or file.rsplit('.', 1)[0] == "FigseqResults_10h" or file.rsplit('.', 1)[0] == "FigseqResults_1h":
            continue
        else:
            htmlfile = os.path.join(current_directory, terminal_path, file)
        with open(htmlfile) as inputfile:
            parsed_html = BeautifulSoup(inputfile, "lxml")
            tables = parsed_html.find_all("table")

            if len(tables[1].find_all("tr")) != 5:
                tds_unr = tables[1].find_all("tr")[-1].find_all("td")
                print(os.path.join(terminal_path, file), "Estimated unreliability without truncated: ",
                      str(tds_unr[0].text), "Pessimistic unreliability with truncated", str(tds_unr[1].text))
            elif len(tables[1].find_all("tr")) == 5:
                tds_unr = tables[1].find_all("tr")[-2].find_all("td")
                tds_unavail = tables[1].find_all("tr")[-1].find_all("td")
                print(os.path.join(terminal_path, file), "Estimated unreliability without truncated: ",
                      str(tds_unr[0].text), "Pessimistic unreliability with truncated", str(tds_unr[1].text),
                      "Estimated unavailability without truncated: ",
                      (re.search(r"(.*) = (.*)", str(tds_unavail[0].text)).group(2)),
                      "Pessimistic unavailability with truncated",
                      re.search(r"(.*)=A", str(tds_unavail[1].text)).group(1))
            else:
                print(os.path.join(terminal_path, file), len(tables[1].find_all("tr")))
                exit("results table dose not match template recheck your input")

            #     # print mcp_top_event
            #     with open(mcpfile, 'r') as f:
            #         res = f.read().replace(mcp_top_event, fig_top_event)
            #     with open(mcpfile, 'w') as f:
            #         f.write(res)
            # print("Process file:", figfile)
            # subprocess.call(['C:\\PortablePrograms\\EDF MRI TOOLS\\YAMS\\yams.exe', 'export_fig0.fi', 'configuration.mcp', '-o', 'result.mcr'])
            # print ("loop")
