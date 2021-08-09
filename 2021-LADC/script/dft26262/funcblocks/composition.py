
import json
import re

from dft26262.dft.dft import Dft

from dft26262.funcblocks.logical_blocks import generate_dft

from dft26262.funcblocks.partition import Partition


def compose_partition(dft_file, partition_file):
    """
    Generate DFT from DFT and partitioning.
    :param dft_file: File containing DFT description.
    :param partition_file: File containing partitioning.
    :return: DFT.
    """
    with open(dft_file) as jsonFile:
        dft = Dft(json.load(jsonFile))
    with open(partition_file) as jsonFile:
        json_string = json.load(jsonFile)

    partition = Partition(json_string, dft.parameters)
    mapping = {}

    # Set assignments
    for assignment in json_string['assignment']:
        component_name = assignment['component']
        block_name = assignment['block']
        element = dft.get_element_by_name(component_name)
        partition.add(block_name, element)
        mapping[component_name] = block_name

    # Check if assignment of buses is valid
    for assignment in json_string['assignment']:
        component_name = assignment['component']
        component_block = assignment['block']
        match = re.search(r"BUS-(.*)-(.*)", component_name)
        if match:
            comp1 = match.group(1)
            comp2 = match.group(2)
            if comp1 == "Sensors" or comp2 == "Sensors":
                continue
            # Ensure that bus is on the same component for both directions
            reverse_comp = "BUS-{}-{}".format(comp2, comp1)
            if reverse_comp in mapping and mapping[reverse_comp] != component_block:
                raise Exception("{} should be on same block as".format(component_name, reverse_comp))
            block1 = mapping["HW-" + comp1]
            block2 = mapping["HW-" + comp2]
            # Ensure bus is on the same block if both components are on one block
            if block1 == block2 and component_block != block1:
                raise Exception("{} should be on block {}".format(component_name, block1))
            # Ensure that bus is on BUS block if components are on different blocks
            if block1 != block2 and component_block != "BUS":
                raise Exception("{} should be on block BUS".format(component_name))

    # Extend Dft with new hardware assignments
    old_pos = (dft.position_bounds[0], dft.position_bounds[3] + 100)
    for block in partition.blocks:
        # Create new subtree for hardware block
        (hwTopElement, old_pos) = block.create_pattern(dft, old_pos)
        # All components on this block have this hardware block as a child
        for component in block.components:
            component.add_child(hwTopElement)
        # children = [hwTopElement.element_id] + [component.element_id for component in block.components]
        # depHW = dft.new_gate("dep HW {}".format(block.name), "fdep", children, oldPos)
        old_pos = (old_pos[0] + 100, old_pos[1])
    return dft


def compose_logical_blocks(block_file):
    """
    Generate DFT from logical blocks.
    :param block_file: File containing block description.
    :return: DFT.
    """
    with open(block_file) as jsonFile:
        json_string = json.load(jsonFile)
        return generate_dft(json_string)
