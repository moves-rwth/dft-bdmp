

def try_merge_bes_in_or(dft, or_gate):
    """
    Try to merge BEs under an OR into one BE.
    :param dft: DFT.
    :param or_gate: OR gate.
    :return: True iff merge was successful.
    """
    # Check if rule is applicable
    if or_gate.element_type != "or":
        return False

    child_bes = []
    for child in or_gate.outgoing:
        if child.is_be() and not child.transient and len(child.ingoing) <= 1:
            child_bes.append(child)

    if len(child_bes) <= 1:
        return False

    # Merge BEs into one
    first_child = child_bes[0]
    for element in child_bes[1:]:
        first_child.name += "_{}".format(element.name)
        first_child.rate = element.rate + first_child.rate
        # TODO: combine dormancy factors as well
        dft.remove(element)

    return True


def try_merge_or(dft, or_gate):
    """
    Try to merge two OR gates in different levels.
    :param dft: DFT
    :param or_gate: OR gate to remove.
    :return: True iff merge was successful.
    """
    # Check if rule is applicable
    if or_gate.element_type != "or":
        return False

    if len(or_gate.ingoing) != 1:
        return False
    parent = or_gate.ingoing[0]
    if parent.element_type != "or":
        return False

    # Add children to parent gate
    for child in or_gate.outgoing:
        if child not in parent.outgoing:
            parent.add_child(child)
    # Delete or gate
    dft.remove(or_gate)

    return True


def has_immediate_failure(dft, gate):
    """
    Checks whether a failure of the gate leads to an immediate failure of the top level element.
    In other words, all parents are OR gates.
    :param dft: DFT.
    :param gate: Gate.
    :return: True iff failure leads to system failure.
    """
    if gate.element_id == dft.top_level_element.element_id:
        return gate.element_type == "or"
    else:
        for parent in gate.ingoing:
            if parent.element_type == "or":
                if has_immediate_failure(dft, parent):
                    return True
        return False


def try_remove_dependencies(dft, dependency):
    """
    Try to remove superfluous dependencies.
    These dependencies have a trigger which already leads to failure of the top level element.
    :param dft: DFT
    :param dependency: Dependency gate to remove.
    :return: True iff removal was successful.
    """
    # Check if rule is applicable
    if dependency.element_type != "fdep":
        return False

    trigger = dependency.outgoing[0]
    if not has_immediate_failure(dft, trigger):
        return False

    # Remove superfluous dependency
    dft.remove(dependency)
    return True


def simplify_dft(dft):
    """
    Simplify DFT.
    :param dft: DFT.
    :return: Simplified DFT.
    """
    changed = True
    while changed:
        for _, element in dft.elements.items():
            changed = try_merge_or(dft, element)
            if changed:
                break
            changed = try_merge_bes_in_or(dft, element)
            if changed:
                break
            changed = try_remove_dependencies(dft, element)
            if changed:
                break

    return dft


def make_anonymous(dft, grid_layout=False):
    """
    Remove all data which could identify the DFT.
    Id and name are increasing counter values.
    :param dft: DFT.
    :param grid_layout: Elements are ordered in a grid to remove positioning information.
    :return: Anonymous DFT.
    """
    counter = 0
    if grid_layout:
        x = 0
        y = 0
        dist_x = 200
        dist_y = 200
        end_x = 10 * dist_x
    # Make all elements anonymous
    for _, element in dft.elements.items():
        element.element_id = counter
        element.name = "A{}".format(counter)
        if grid_layout:
            element.position = (x, y)
            x += dist_x
            if x > end_x:
                x = 0
                y += dist_y
        counter += 1
