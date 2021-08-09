from dft26262.data import parameters


def create_single_be(dft, name, rate, pos):
    """
    Create single BE
    :param dft: DFT.
    :param name: Name.
    :param rate: Rate.
    :param pos: Position.
    :return: Element, position.
    """
    be = dft.new_be(name, rate, parameters.get_one(), False, pos)
    return be, (pos[0] + 125, pos[1])


def create_covered_fault(dft, name, rate, coverage, safety_rate, is_transient, pos):
    """
    Create subtree for covered fault according to ISO 26262.
    :param dft: DFT.
    :param name: Name.
    :param rate: Rate.
    :param coverage: Coverage.
    :param safety_rate: Rate for safety mechanism.
    :param is_transient: Flag indicating whether it is a transient or permanent fault.
    :param pos: Position.
    :return: Top level element, position.
    """
    one = parameters.get_one()
    # Create BEs
    node_fault_covered = dft.new_be(name + "Cov", rate * coverage, one, is_transient, (pos[0] + 150, pos[1] + 200))
    node_fault_not_covered = dft.new_be(name + "NotCov", rate * (one - coverage), one, is_transient,
                                        (pos[0] - 75, pos[1] + 100))
    node_safety = dft.new_be(name + "SafeMech", safety_rate, one, False, (pos[0] + 50, pos[1] + 200))
    # Create gates
    children = [node_safety, node_fault_covered]
    and_not_detected = dft.new_gate(name + "NotDet", "and", children, (pos[0] + 75, pos[1] + 100))
    seq_covered = dft.new_gate("seq" + name, "seq", children, (pos[0] + 150, pos[1] + 100))
    or_fault = dft.new_gate(name, "or", [node_fault_not_covered, and_not_detected], pos)
    return or_fault, (pos[0] + 300, pos[1])


def create_transient_permanent_fault(dft, name, rate_transient, coverage_transient, safety_rate_transient,
                                     rate_permanent, coverage_permanent, safety_rate_permanent, pos):
    """
    Create transient and permanent covered faults according to ISO 26262.
    :param dft: DFT.
    :param name: Name.
    :param rate_transient: Rate for transient faults.
    :param coverage_transient: Coverage for transient faults.
    :param safety_rate_: Safety rate for transient faults.
    :param ransient:
    :param rate_permanent: Rate for permanent faults.
    :param coverage_permanent: Coverage for permanent faults.
    :param safety_rate_permanent: Safety rate for permanent faults.
    :param pos: Position.
    :return: Top level element, position.
    """
    transient_element, _ = create_covered_fault(dft, name + " Transient", rate_transient, coverage_transient,
                                                safety_rate_transient, True, (pos[0], pos[1] + 100))
    permanent_element, new_pos = create_covered_fault(dft, name + " Permanent", rate_permanent, coverage_permanent,
                                                      safety_rate_permanent, False, (pos[0] + 300, pos[1] + 100))
    # Create or gate
    or_fault = dft.new_gate(name + " Failure", "or", [transient_element, permanent_element], (pos[0] + 150, pos[1]))
    return or_fault, (new_pos[0], pos[1])


def create_logical_block(dft, name, rate_internal, pos):
    """
    Create subtree for logical block.
    :param dft: DFT.
    :param name: Name.
    :param rate_internal: Rate for internal faults.
    :param pos: Position.
    :return: Top level element, position.
    """
    node_internal = dft.new_be(name + "Internal", rate_internal, parameters.get_one(), False,
                               (pos[0] - 150, pos[1] + 100))
    or_wrong_nominal = dft.new_gate(name + "WrongNominalValue", "or", [], (pos[0], pos[1] + 100))
    or_wrong_potential = dft.new_gate(name + "WrongPotential", "or", [], (pos[0] + 150, pos[1] + 100))
    or_hw = dft.new_gate("HW-" + name, "or", [], (pos[0], pos[1] + 800))
    or_block = dft.new_gate(name, "or", [node_internal, or_wrong_nominal, or_wrong_potential, or_hw], pos)
    dep = dft.new_gate("Dep" + name, "fdep", [or_block], (pos[0] + 100, pos[1] + 400))
    return or_block, (pos[0] + 600, pos[1])
