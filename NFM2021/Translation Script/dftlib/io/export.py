import json
import pprint
import xml.etree.ElementTree as ET

from dftlib.exceptions.exceptions import DftTypeNotKnownException, DftInvalidArgumentException
import dftlib.storage.dft_elements as dft_elements


def export_dft_json(dft, file):
    """
    Export DFT to JSON file.
    :param dft: DFT.
    :param file: File.
    """
    with open(file, 'w') as outFile:
        json.dump(dft.json(), outFile, indent=4)


def galileo_name(element):
    """
    Get name in Galileo format.
    :param element: Element.
    :return: Name in quotation marks.
    """
    return '"{}"'.format(element.name)


def export_dft_galileo(dft, file):
    """
    Export DFT to Galileo file.
    :param dft: DFT.
    :param file: File.
    """
    elements = dft.topological_sort()

    # Assert unique names
    names = dict()
    for element in elements:
        if element.name in names:
            raise DftInvalidArgumentException("Element name '{}' used twice.".format(element.name))
        names[element.name] = element

    with open(file, 'w') as out_file:
        out_file.write("toplevel {};\n".format(galileo_name(dft.top_level_element)))
        for element in elements:
            out = galileo_name(element)
            if element.is_be():
                out += " lambda={}".format(element.rate)
                out += " dorm={}".format(element.dorm)
            else:
                assert element.is_gate()
                # Handle gate type
                if isinstance(element, dft_elements.DftAnd):
                    out += " and"
                elif isinstance(element, dft_elements.DftOr):
                    out += " or"
                elif isinstance(element, dft_elements.DftVotingGate):
                    out += " vot{}".format(element.votingThreshold)
                elif isinstance(element, dft_elements.DftPand):
                    out += " pand"
                elif isinstance(element, dft_elements.DftPor):
                    out += " por"
                elif isinstance(element, dft_elements.DftSpare):
                    assert element.element_type == "spare"
                    out += " wsp"
                elif isinstance(element, dft_elements.DftDependency):
                    if element.probability == 1:
                        out += " fdep"
                    else:
                        out += " pdep={}".format(element.probability)
                elif isinstance(element, dft_elements.DftSeq):
                    out += " seq"
                elif isinstance(element, dft_elements.DftMutex):
                    out += " mutex"
                else:
                    raise DftTypeNotKnownException("Type '{}' not known.".format(element.element_type))
                for child in element.outgoing:
                    out += " " + galileo_name(child)
            out_file.write(out + ";\n")

def export_dft_kbi(dft, file):
    """
    Export DFT to .KBI file.
    :param dft: DFT.
    :param file: File.
    """

    elements = dft.topological_sort()
    #
    # Assert unique names
    names = dict()
    for element in elements:
        if element.name in names:
            raise DftInvalidArgumentException("Element name '{}' used twice.".format(element.name))
        names[element.name] = element


    with open(file, 'w') as out_file:
        mutex_child = set()
        fdep_child = set()
        seq_child = set()
        for element in elements:
            if isinstance(element, dft_elements.DftMutex):
                for child in element.outgoing:
                   mutex_child.add(child.name)
            if isinstance(element, dft_elements.DftDependency):
                for child in element.outgoing:
                    if child.name == element.outgoing[0].name:
                        continue
                    else:
                        fdep_child.add(child.name)
            if isinstance(element, dft_elements.DftSeq):
                for child in element.outgoing:
                    if child.name == element.outgoing[0].name:
                        continue
                    else:
                        seq_child.add(child.name)

        out_file.write("<?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"no\" ?>\n")
        out_file.write("<KB3Import Desc=\"Generated through Python Script for scalability test of FigaroAPI\" Nom=\""+str(file[:-4])+"\">\n\n")
        # out_file.write("toplevel {};\n".format(galileo_name(dft.top_level_element)))
        tle_string = ""

        for element in elements:
            out = galileo_name(element)
            if element.element_id == dft.top_level_element.element_id:
                tle_string += "<Objet Action=\"CREER\" Nom=\"UE_1\" Page=\"Main_page\" Type=\"undes_event\">\n"
                tle_string += "<Position X=\"" + str(abs(int(element.position[0]))+5) + "\" Y=\"" + str(abs(int(element.position[1]))) + "\"/>\n"
                tle_string += "</Objet>"
            if element.is_be() and element.name not in fdep_child:
                if element.dorm != 1.0:
                    out_file.write("<Objet Action=\"CREER\" Nom=\"" + str(element.name) + "\" Page=\"Main_page\" Type=\"sf_leaf\">\n")
                    out_file.write("<Position X=\"" + str(abs(int(element.position[0]))) + "\" Y=\"" + str(abs(int(element.position[1]))) + "\"/>\n")
                    if element.name in mutex_child:
                        out_file.write("<Affectation Nom=\"calculate_required\" Profil=\"Profil1\" Valeur=\"'fn_fathers_opp_trig'\"/>\n")
                    if element.name in seq_child:
                        out_file.write("<Affectation Nom=\"calculate_required\" Profil=\"Profil1\" Valeur=\"'equal_to_S_trig'\"/>\n")
                    out_file.write("<Affectation Nom=\"lambda\" Profil=\"Profil1\" Valeur=\"" + str(element.rate) + "\"/>\n")
                    out_file.write("<Affectation Nom=\"mu\" Profil=\"Profil1\" Valeur=\"" + str(0.1) + "\"/>\n")  # Note: the repair rate is kept constant
                    out_file.write("<Affectation Nom=\"standby_lambda\" Profil=\"Profil1\" Valeur=\"" + str((element.rate) * (element.dorm)) + "\"/>\n")
                    out_file.write("</Objet>")

                else:
                    out_file.write("<Objet Action=\"CREER\" Nom=\""+str(element.name)+"\" Page=\"Main_page\" Type=\"f_leaf\">\n")
                    out_file.write("<Position X=\""+str(abs(int(element.position[0])))+"\" Y=\"" + str(abs(int(element.position[1]))) + "\"/>\n")
                    if element in mutex_child:
                        out_file.write("<Affectation Nom=\"calculate_required\" Profil=\"Profil1\" Valeur=\"'fn_fathers_opp_trig'\"/>\n")
                    if element.name in seq_child:
                        out_file.write(
                            "<Affectation Nom=\"calculate_required\" Profil=\"Profil1\" Valeur=\"'equal_to_S_trig'\"/>\n")
                    out_file.write("<Affectation Nom=\"lambda\" Profil=\"Profil1\" Valeur=\""+str(element.rate)+"\"/>\n")
                    out_file.write("<Affectation Nom=\"mu\" Profil=\"Profil1\" Valeur=\""+str(0.1)+"\"/>\n") #Note: the repair rate is kept constant
                    out_file.write("</Objet>\n")
            elif element.is_be() and element.name in fdep_child:
                if element.dorm != 1.0:
                    out_file.write("<Objet Action=\"CREER\" Nom=\"f_" + str(element.name) + "\" Page=\"Main_page\" Type=\"sf_leaf\">\n")
                    out_file.write("<Position X=\"" + str(abs(int(element.position[0]))) + "\" Y=\"" + str(abs(int(element.position[1]))) + "\"/>\n")
                    if element.name in mutex_child:
                        out_file.write("<Affectation Nom=\"calculate_required\" Profil=\"Profil1\" Valeur=\"'fn_fathers_opp_trig'\"/>\n")
                    if element.name in seq_child:
                        out_file.write("<Affectation Nom=\"calculate_required\" Profil=\"Profil1\" Valeur=\"'equal_to_S_trig'\"/>\n")
                    out_file.write("<Affectation Nom=\"lambda\" Profil=\"Profil1\" Valeur=\"" + str(element.rate) + "\"/>\n")
                    out_file.write("<Affectation Nom=\"mu\" Profil=\"Profil1\" Valeur=\"" + str(0.1) + "\"/>\n")  # Note: the repair rate is kept constant
                    out_file.write("<Affectation Nom=\"standby_lambda\" Profil=\"Profil1\" Valeur=\"" + str((element.rate) * (element.dorm)) + "\"/>\n")
                    out_file.write("</Objet>")

                else:
                    # out_file.write("<Objet Action=\"CREER\" Nom=\""+str(element.name)+"\" Page=\"Main_page\" Type=\"or_gate\">\n")
                    # out_file.write("<Position X=\""+str(abs(int(element.position[0])))+"\" Y=\"" + str(abs(int(element.position[1]))) + "\"/>\n")
                    # if element in mutex_child:
                    #     out_file.write("<Affectation Nom=\"calculate_required\" Profil=\"Profil1\" Valeur=\"'fn_fathers_opp_trig'\"/>\n")
                    # if element.name in seq_child:
                    #     out_file.write("<Affectation Nom=\"calculate_required\" Profil=\"Profil1\" Valeur=\"'equal_to_S_trig'\"/>\n")
                    # out_file.write("</Objet>\n")
                    out_file.write("<Objet Action=\"CREER\" Nom=\"f_" + str(element.name) + "\" Page=\"Main_page\" Type=\"f_leaf\">\n")
                    out_file.write("<Position X=\"" + str(abs(int(element.position[0]))+5) + "\" Y=\"" + str(abs(int(element.position[1]))+5) + "\"/>\n")
                    out_file.write("<Affectation Nom=\"lambda\" Profil=\"Profil1\" Valeur=\"" + str(element.rate) + "\"/>\n")
                    out_file.write("<Affectation Nom=\"mu\" Profil=\"Profil1\" Valeur=\"" + str(0.1) + "\"/>\n")  # Note: the repair rate is kept constant
                    out_file.write("</Objet>\n")
                    # out_file.write("<Objet Action=\"CREER\" Nom=\"i_" + str(element.name) + "\" Page=\"Main_page\" Type=\"i_leaf\">\n")
                    # out_file.write("<Position X=\"" + str(abs(int(element.position[0]))+2) + "\" Y=\"" + str(abs(int(element.position[1]))+5) + "\"/>\n")
                    # out_file.write("<Affectation Nom=\"gamma\" Profil=\"Profil1\" Valeur=\"" + str(1.0) + "\"/>\n")
                    # out_file.write("<Affectation Nom=\"mu\" Profil=\"Profil1\" Valeur=\"" + str(0.1) + "\"/>\n")  # Note: the repair rate is kept constant
                    # out_file.write("</Objet>\n")
            else:
                assert element.is_gate()
            #     # Handle gate type
                if isinstance(element, dft_elements.DftAnd):
                    out_file.write("<Objet Action=\"CREER\" Nom=\"" + str(element.name) + "\" Page=\"Main_page\" Type=\"and_gate\">\n")
                    out_file.write("<Position X=\"" + str(abs(int(element.position[0]))) + "\" Y=\"" + str(abs(int(element.position[1]))) + "\"/>\n")
                    if element in mutex_child:
                        out_file.write("<Affectation Nom=\"calculate_required\" Profil=\"Profil1\" Valeur=\"'fn_fathers_opp_trig'\"/>\n")
                    if element.name in seq_child:
                        out_file.write("<Affectation Nom=\"calculate_required\" Profil=\"Profil1\" Valeur=\"'equal_to_S_trig'\"/>\n")
                    out_file.write("</Objet>\n")

                elif isinstance(element, dft_elements.DftOr):
                    out_file.write("<Objet Action=\"CREER\" Nom=\"" + str(element.name) + "\" Page=\"Main_page\" Type=\"or_gate\">\n")
                    out_file.write("<Position X=\"" + str(abs(int(element.position[0]))) + "\" Y=\"" + str(abs(int(element.position[1]))) + "\"/>\n")
                    if element in mutex_child:
                        out_file.write("<Affectation Nom=\"calculate_required\" Profil=\"Profil1\" Valeur=\"'fn_fathers_opp_trig'\"/>\n")
                    if element.name in seq_child:
                        out_file.write("<Affectation Nom=\"calculate_required\" Profil=\"Profil1\" Valeur=\"'equal_to_S_trig'\"/>\n")
                    out_file.write("</Objet>\n")
                elif isinstance(element, dft_elements.DftVotingGate):

                    out_file.write("<Objet Action=\"CREER\" Nom=\"" + str(element.name) + "\" Page=\"Main_page\" Type=\"k_out_of_n_gate\">\n")
                    out_file.write("<Position X=\"" + str(abs(int(element.position[0]))) + "\" Y=\"" + str(abs(int(element.position[1]))) + "\"/>\n")
                    out_file.write("<Affectation Nom=\"K\" Profil=\"Profil1\" Valeur=\""+str(element.votingThreshold)+"\"/>\n")
                    if element in mutex_child:
                        out_file.write("<Affectation Nom=\"calculate_required\" Profil=\"Profil1\" Valeur=\"'fn_fathers_opp_trig'\"/>\n")
                    if element.name in seq_child:
                        out_file.write("<Affectation Nom=\"calculate_required\" Profil=\"Profil1\" Valeur=\"'equal_to_S_trig'\"/>\n")
                    out_file.write("</Objet>\n")
                elif isinstance(element, dft_elements.DftPand):
                   out_file.write("<Objet Action=\"CREER\" Nom=\"" + str(element.name) + "\" Page=\"Main_page\" Type=\"then_gate\">\n")
                   out_file.write("<Position X=\"" + str(abs(int(element.position[0]))) + "\" Y=\"" + str(abs(int(element.position[1]))) + "\"/>\n")
                   if element in mutex_child:
                       out_file.write(
                           "<Affectation Nom=\"calculate_required\" Profil=\"Profil1\" Valeur=\"'fn_fathers_opp_trig'\"/>\n")
                   if element.name in seq_child:
                       out_file.write(
                           "<Affectation Nom=\"calculate_required\" Profil=\"Profil1\" Valeur=\"'equal_to_S_trig'\"/>\n")
                   out_file.write("</Objet>\n")
                elif isinstance(element, dft_elements.DftPor):
                    exit("Error:: The model contains POR gate")
            #         out += " por"
                elif isinstance(element, dft_elements.DftSpare):
                    out_file.write("<Objet Action=\"CREER\" Nom=\"" + str(element.name) + "\" Page=\"Main_page\" Type=\"and_gate\">\n")
                    out_file.write("<Position X=\"" + str(abs(int(element.position[0]))) + "\" Y=\"" + str(abs(int(element.position[1]))) + "\"/>\n")
                    if element in mutex_child:
                        out_file.write("<Affectation Nom=\"calculate_required\" Profil=\"Profil1\" Valeur=\"'fn_fathers_opp_trig'\"/>\n")
                    if element.name in seq_child:
                        out_file.write("<Affectation Nom=\"calculate_required\" Profil=\"Profil1\" Valeur=\"'equal_to_S_trig'\"/>\n")
                    out_file.write("</Objet>\n")
                elif isinstance(element, dft_elements.DftSeq):
                    continue
                elif isinstance(element, dft_elements.DftDependency):
                    for child in element.outgoing:
                        if child.name == element.outgoing[0].name:
                            continue
                        else:
                            out_file.write("<Objet Action=\"CREER\" Nom=\"i_"+str(child.name)+"\" Page=\"Main_page\" Type=\"i_leaf\">\n")
                            out_file.write("<Position X=\""+str(abs(int(child.position[0]))+2)+"\" Y=\"" + str(abs(int(child.position[1]))+5) + "\"/>\n")
                            out_file.write("<Affectation Nom=\"gamma\" Profil=\"Profil1\" Valeur=\""+str(1.0)+"\"/>\n") # we only have fdeps
                            out_file.write("<Affectation Nom=\"mu\" Profil=\"Profil1\" Valeur=\""+str(0.1)+"\"/>\n") #Note: the repair rate is kept constant
                            out_file.write("</Objet>\n")
                            out_file.write("<Objet Action=\"CREER\" Nom=\"" + str(child.name) + "\" Page=\"Main_page\" Type=\"or_gate\">\n")
                            out_file.write(
                                "<Position X=\"" + str(abs(int(child.position[0]))) + "\" Y=\"" + str(abs(int(child.position[1]))) + "\"/>\n")
                            if element in mutex_child:
                                out_file.write(
                                    "<Affectation Nom=\"calculate_required\" Profil=\"Profil1\" Valeur=\"'fn_fathers_opp_trig'\"/>\n")
                            if element.name in seq_child:
                                out_file.write("<Affectation Nom=\"calculate_required\" Profil=\"Profil1\" Valeur=\"'equal_to_S_trig'\"/>\n")
                            out_file.write("</Objet>\n")
                elif isinstance(element, dft_elements.DftMutex):
                    out_file.write("<Objet Action=\"CREER\" Nom=\"" + str(element.name) + "\" Page=\"Main_page\" Type=\"and_gate\">\n")
                    out_file.write("<Position X=\"" + str(abs(int(element.position[0]))) + "\" Y=\"" + str(abs(int(element.position[1]))) + "\"/>\n")
                    if element in mutex_child:
                        out_file.write("<Affectation Nom=\"calculate_required\" Profil=\"Profil1\" Valeur=\"'fn_fathers_opp_trig'\"/>\n")
                    if element.name in seq_child:
                        out_file.write("<Affectation Nom=\"calculate_required\" Profil=\"Profil1\" Valeur=\"'equal_to_S_trig'\"/>\n")
                    out_file.write("</Objet>\n")
                else:
                    raise DftTypeNotKnownException("Type '{}' not known.".format(element.element_type))
        out_file.write(tle_string)
        count_logic_link = 0
        count_pand_link = 0
        count_trigger_link = 0
        count_mutex_link = 0
        count_DEP_trig_link = 0
        count_SEQ_trig_link = 0
        already_visited = set()
        for element in elements:
            if isinstance(element, dft_elements.DftDependency) or isinstance(element, dft_elements.DftSeq) or isinstance(element, dft_elements.DftPand):
                continue
            for child in element.outgoing:
                out_file.write("<Objet Action=\"CREER\" Nom=\"logic_" + str(count_logic_link) + "\" Page=\"Main_page\" Type=\"logic_link\">\n")
                out_file.write("</Objet>\n")
                count_logic_link =  count_logic_link + 1
                if child.name in fdep_child and child.name not in already_visited:
                    already_visited.add(child.name)
                    out_file.write("<Objet Action=\"CREER\" Nom=\"logic_" + str(count_logic_link) + "\" Page=\"Main_page\" Type=\"logic_link\">\n")
                    out_file.write("</Objet>\n")
                    count_logic_link = count_logic_link + 1
                    out_file.write("<Objet Action=\"CREER\" Nom=\"logic_" + str(count_logic_link) + "\" Page=\"Main_page\" Type=\"logic_link\">\n")
                    out_file.write("</Objet>\n")
                    count_logic_link = count_logic_link + 1
        out_file.write("<Objet Action=\"CREER\" Nom=\"logic_" + str(count_logic_link) + "\" Page=\"Main_page\" Type=\"logic_link\">\n")
        out_file.write("</Objet>\n")
        count_logic_link = count_logic_link + 1
        for element in elements:
            if isinstance(element, dft_elements.DftPand):
                out_file.write("<Objet Action=\"CREER\" Nom=\"first_" + str(count_pand_link) + "\" Page=\"Main_page\" Type=\"first_link\">\n")
                out_file.write("</Objet>\n")
                out_file.write("<Objet Action=\"CREER\" Nom=\"second_" + str(count_pand_link) + "\" Page=\"Main_page\" Type=\"second_link\">\n")
                out_file.write("</Objet>\n")
                count_pand_link = count_pand_link + 1
            elif isinstance(element, dft_elements.DftSpare):
                for child in element.outgoing:
                    if child.name == element.outgoing[0].name:
                        continue
                    out_file.write("<Objet Action=\"CREER\" Nom=\"t_" + str(count_trigger_link) + "\" Page=\"Main_page\" Type=\"trigger_link\">\n")
                    out_file.write("</Objet>\n")
                    count_trigger_link = count_trigger_link + 1
            elif isinstance(element, dft_elements.DftMutex):
                out_file.write("<Objet Action=\"CREER\" Nom=\"t_mutex_" + str(count_mutex_link) + "\" Page=\"Main_page\" Type=\"trigger_link\">\n")
                out_file.write("</Objet>\n")
                count_mutex_link = count_mutex_link + 1
                out_file.write("<Objet Action=\"CREER\" Nom=\"t_mutex_" + str( count_mutex_link) + "\" Page=\"Main_page\" Type=\"trigger_link\">\n")
                out_file.write("</Objet>\n")
                count_mutex_link = count_mutex_link + 1
            elif isinstance(element, dft_elements.DftDependency):
                for child in element.outgoing:
                    if child.name == element.outgoing[0].name:
                        continue
                    else:
                        out_file.write("<Objet Action=\"CREER\" Nom=\"t_dep_" + str(count_DEP_trig_link) + "\" Page=\"Main_page\" Type=\"trigger_link\">\n")
                        out_file.write("</Objet>\n")
                        # out_file.write("<Objet Action=Alink + 1
                        count_DEP_trig_link = count_DEP_trig_link + 1
            elif isinstance(element, dft_elements.DftSeq):
                out_file.write("<Objet Action=\"CREER\" Nom=\"t_seq_" + str(
                    count_SEQ_trig_link) + "\" Page=\"Main_page\" Type=\"trigger_link\">\n")
                out_file.write("</Objet>\n")
                count_SEQ_trig_link = count_SEQ_trig_link + 1

        count_logic_link = 0
        count_pand_link = 0
        count_trigger_link = 0
        count_mutex_link = 0
        count_DEP_trig_link = 0
        count_SEQ_trig_link = 0
        for element in elements:
            if element.element_id == dft.top_level_element.element_id:
                out_file.write("<Objet Nom=\"logic_"+str(count_logic_link)+"\">\n")
                out_file.write("<Cnx CnxObj=\""+str(element.name)+"\" CnxPt=\"in\" MonPt=\"ARRIVEE\"/>\n")
                out_file.write("<Cnx CnxObj=\"UE_1\" CnxPt=\"out\" MonPt=\"DEPART\"/>\n")
                out_file.write("</Objet>\n")
                count_logic_link = count_logic_link + 1
            if not isinstance(element, dft_elements.DftDependency) and not isinstance(element, dft_elements.DftSeq) and not isinstance(element, dft_elements.DftPand):
                for child in element.outgoing:
                    out_file.write("<Objet Nom=\"logic_" + str(count_logic_link) + "\">\n")
                    out_file.write("<Cnx CnxObj=\"" + str(child.name) + "\" CnxPt=\"in\" MonPt=\"ARRIVEE\"/>\n")
                    out_file.write("<Cnx CnxObj=\"" + str(element.name) + "\" CnxPt=\"out\" MonPt=\"DEPART\"/>\n")
                    out_file.write("</Objet>\n")
                    count_logic_link = count_logic_link + 1
            if isinstance(element, dft_elements.DftPand):
                out_file.write("<Objet Nom=\"first_"+str(count_pand_link)+"\">\n")
                out_file.write("<Cnx CnxObj=\""+str(element.outgoing[0].name)+"\" CnxPt=\"in\" MonPt=\"ARRIVEE\"/>\n")
                out_file.write("<Cnx CnxObj=\""+str(element.name)+"\" CnxPt=\"left_out\" MonPt=\"DEPART\"/>\n")
                out_file.write("</Objet>\n")
                out_file.write("<Objet Nom=\"second_" + str(count_pand_link) + "\">\n")
                out_file.write("<Cnx CnxObj=\"" + str(element.outgoing[1].name) + "\" CnxPt=\"in\" MonPt=\"ARRIVEE\"/>\n")
                out_file.write("<Cnx CnxObj=\"" + str(element.name) + "\" CnxPt=\"right_out\" MonPt=\"DEPART\"/>\n")
                out_file.write("</Objet>\n")
                count_pand_link = count_pand_link + 1
            elif isinstance(element, dft_elements.DftSpare):
                childern_names = []
                for child in element.outgoing:
                    childern_names.append(child.name)
                for count in range(len(childern_names)-1):
                    out_file.write("<Objet Nom=\"t_" + str(count_trigger_link) + "\">\n")
                    out_file.write("<Cnx CnxObj=\"" + str(childern_names[count+1]) + "\" CnxPt=\"in\" MonPt=\"ARRIVEE\"/>\n")
                    out_file.write("<Cnx CnxObj=\"" + str(childern_names[count]) + "\" CnxPt=\"out_decl\" MonPt=\"DEPART\"/>\n")
                    out_file.write("</Objet>\n")
                    count_trigger_link = count_trigger_link + 1
            elif isinstance(element, dft_elements.DftMutex):
                out_file.write("<Objet Nom=\"t_mutex_" + str(count_mutex_link) + "\">\n")
                out_file.write("<Cnx CnxObj=\"" + str(element.outgoing[0].name) + "\" CnxPt=\"in\" MonPt=\"ARRIVEE\"/>\n")
                out_file.write("<Cnx CnxObj=\"" + str(element.outgoing[1].name) + "\" CnxPt=\"out_decl\" MonPt=\"DEPART\"/>\n")
                out_file.write("</Objet>\n")
                count_mutex_link = count_mutex_link + 1
                out_file.write("<Objet Nom=\"t_mutex_" + str(count_mutex_link) + "\">\n")
                out_file.write("<Cnx CnxObj=\"" + str(element.outgoing[1].name) + "\" CnxPt=\"in\" MonPt=\"ARRIVEE\"/>\n")
                out_file.write("<Cnx CnxObj=\"" + str(element.outgoing[0].name) + "\" CnxPt=\"out_decl\" MonPt=\"DEPART\"/>\n")
                out_file.write("</Objet>\n")
                count_mutex_link = count_mutex_link + 1
            elif isinstance(element, dft_elements.DftDependency):
                for child in element.outgoing:
                    if child.name == element.outgoing[0].name:
                        continue
                    else:
                        out_file.write("<Objet Nom=\"t_dep_" + str(count_DEP_trig_link) + "\">\n")
                        out_file.write(
                            "<Cnx CnxObj=\"i_" + str(child.name) + "\" CnxPt=\"in\" MonPt=\"ARRIVEE\"/>\n")
                        out_file.write(
                            "<Cnx CnxObj=\"" + str(element.outgoing[0].name) + "\" CnxPt=\"out_decl\" MonPt=\"DEPART\"/>\n")
                        out_file.write("</Objet>\n")
                        count_DEP_trig_link = count_DEP_trig_link + 1
                        out_file.write("<Objet Nom=\"logic_" + str(count_logic_link) + "\">\n")
                        out_file.write("<Cnx CnxObj=\"i_" + str(child.name) + "\" CnxPt=\"in\" MonPt=\"ARRIVEE\"/>\n")
                        out_file.write("<Cnx CnxObj=\"" + str(child.name) + "\" CnxPt=\"out\" MonPt=\"DEPART\"/>\n")
                        out_file.write("</Objet>\n")
                        count_logic_link = count_logic_link + 1
                        out_file.write("<Objet Nom=\"logic_" + str(count_logic_link) + "\">\n")
                        out_file.write("<Cnx CnxObj=\"f_" + str(child.name) + "\" CnxPt=\"in\" MonPt=\"ARRIVEE\"/>\n")
                        out_file.write("<Cnx CnxObj=\"" + str(child.name) + "\" CnxPt=\"out\" MonPt=\"DEPART\"/>\n")
                        out_file.write("</Objet>\n")
                        count_logic_link = count_logic_link + 1
            elif isinstance(element, dft_elements.DftSeq):
                out_file.write("<Objet Nom=\"t_seq_" + str(count_SEQ_trig_link) + "\">\n")
                out_file.write(
                    "<Cnx CnxObj=\"" + str(element.outgoing[1].name) + "\" CnxPt=\"in\" MonPt=\"ARRIVEE\"/>\n")
                out_file.write(
                    "<Cnx CnxObj=\"" + str(element.outgoing[0].name) + "\" CnxPt=\"out_decl\" MonPt=\"DEPART\"/>\n")
                out_file.write("</Objet>\n")
                count_SEQ_trig_link = count_SEQ_trig_link + 1


        out_file.write("\n<Donnees>\n")
        out_file.write("  <Profil Action=\"CREER\" Nom=\"Profil1\"/>\n")
        out_file.write("  <Arbre/>\n")
        out_file.write("</Donnees>\n\n")
        out_file.write("</KB3Import>")

