from dft26262.data.parameters import Parameters
from dft26262.dft.dft import Dft
from dft26262.dft.dft_element_pattern import create_logical_block
from dft26262.data import parameters

def generate_bus(dft, source_name, target_name, target_type):
    element_target_or = dft.get_element_by_name(target_name + target_type)
    orig_position = element_target_or.position
    # Add new BE
    position = (orig_position[0] - 150 + 50 * len(element_target_or.outgoing), orig_position[1] + 200)
    #Falak: added a new function in parameter.py to get zero and one
    #Falak: commented by Falak
    #element_target_be = dft.new_be(source_name, parameters.get_zero(), parameters.get_one(), False, position)
    #Falak: name of BE changed to "BE-"+source_name.
    element_target_be = dft.new_be("Be"+ source_name + target_name, parameters.get_zero(), parameters.get_one(), False, position)
    # Add Bus BE
    position = (orig_position[0] - 100 + 50 * len(element_target_or.outgoing), orig_position[1] + 600)

    element_bus_or = dft.new_gate("BUS-" + source_name + "-" + target_name, "or", [], position)
    # Add combined Or
    position = (orig_position[0] - 100 + 50 * len(element_target_or.outgoing), orig_position[1] + 100)


    element_combined_or = dft.new_gate(source_name + target_type, "or", [element_target_be, element_bus_or], position)

    # Add to parent or
    element_target_or.add_child(element_combined_or)

    # Set dependency
    element_dep = dft.get_element_by_name("Dep" + source_name)
    element_dep.add_child(element_target_be)


def generate_dft(json):
    dft = Dft()
    pos = (0, 0)
    dft.parameters = Parameters(json['parameters'])

    # Create top level element
    top_level_element = dft.new_gate("T", "or", [], (pos[0], pos[1] - 100))
    dft.set_top_level_element(top_level_element.element_id)

    for block in json['logical_blocks']:
        # Create block
        name = block['name']
        rate = dft.parameters.parse(block['rate'])
        _, pos = create_logical_block(dft, name, rate, pos)

    for bus in json['buses']:
        # Create bus
        source = bus['from']
        target = bus['to']
        bus_type = bus['type']
        if bus_type == "nominal":
            generate_bus(dft, source, target, "WrongNominalValue")
        elif bus_type == "potential":
            generate_bus(dft, source, target, "WrongPotential")
        elif bus_type == "both":
            generate_bus(dft, source, target, "WrongNominalValue")
            #Falak: Why 'target' variable has been replaced with 'source' below in the parameter list to 'generate_bus' function?
            # Whereas previously if bus_type = "Potential", 'source' and 'target' variables have different positions in parameter list to 'generate_bus' function.
            generate_bus(dft, target, source, "WrongPotential")
        else:
            raise Exception("Bus type {} not known.".format(bus_type))
    return dft
