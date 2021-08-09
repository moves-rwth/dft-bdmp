import json
from queue import Queue
import collections

import stormpy
import stormpy.dft
import stormpy.logic

from dft26262.utility.os_functions import run_tool


def load_model_via_stormpy(dft, generated_json_file, instantiate):
    # Export DFT in JSON
    with open(generated_json_file, 'w') as outFile:
        json.dump(dft.json(instantiate), outFile, indent=4)
        print("Written to {}".format(generated_json_file))

    # Load model in stormpy
    if not instantiate and dft.paramaters.parameters:
        return stormpy.dft.build_parametric_sparse_model_from_json_dft(generated_json_file, True)
    else:
        return stormpy.dft.load_dft_json_file(generated_json_file)
        #return stormpy.dft.build_sparse_model_from_json_dft(generated_json_file, True)


def load_model_via_drn(dft, generated_json_file, generated_drn_file, storm_dft_binary, instantiate):
    # Export DFT in JSON
    with open(generated_json_file, 'w') as outFile:
        json.dump(dft.json(instantiate), outFile, indent=4)
        print("Written to {}".format(generated_json_file))

    # Construct Markov Chain with storm
    arguments = [storm_dft_binary, "--dftfile-json", generated_json_file, "-mttf", "--firstdep", "-symred", "-bisim",
                 "--io:exportexplicit", generated_drn_file, "--relevantevents", "n_Path,s_Path"]
    #arguments = [storm_dft_binary, "--dftfile-json", generated_json_file, "-mttf", "--firstdep", "-symred", "-bisim",
     #            "--io:exportexplicit", generated_drn_file]

    if not instantiate and dft.paramaters.parameters:
        arguments.append("--parametric")
    run_tool(arguments, False)
    print("Written to {}".format(generated_drn_file))

    if not instantiate and dft.paramaters.parameters:
        return stormpy.build_parametric_model_from_drn(generated_drn_file)
    else:
        return stormpy.build_model_from_drn(generated_drn_file)


def get_label(model, label):
    found_label = None
    for lab in model.labeling.get_labels():
        if lab.startswith(label + "_"):
            if not found_label:
                found_label = lab
            else:
                raise Exception("Found two possible labels for {}: {} and {}".format(label, found_label, lab))
        elif lab == label:
            if not found_label:
                found_label = lab
            else:
                raise Exception("Found two possible labels for {}: {} and {}".format(label, found_label, lab))

    if not found_label:
        raise Exception("Could not find label {}".format(label))
    return found_label


def analyse(model, prop):
    # print(prop)
    initial_state = model.initial_states[0]
    formulas = stormpy.parse_properties(prop)
    # print(prop)
    # print(formulas[0])
    result = stormpy.model_checking(model, formulas[0])
    return result.at(initial_state)


def analyse_probability(model, reach_argument="\"failed\"", avoid_argument=None):
    if avoid_argument:
        return analyse(model, "P=? [! ({1}) U ({0})]".format(reach_argument, avoid_argument))
    else:
        return analyse(model, "P=? [F {}]".format(reach_argument))


def analyse_timebound(model, time, reach_argument="\"failed\"", avoid_argument=None):
    if avoid_argument:
        return analyse(model, "P=? [! ({2}) U<={0} ({1})]".format(time, reach_argument, avoid_argument))
    else:
        return analyse(model, "P=? [F<={0} {1}]".format(time, reach_argument))


def analyse_timebound_min(model, time, reach_argument="\"failed\"", avoid_argument=None):
    if avoid_argument:
        return analyse(model, "Pmin=? [! ({2}) U<={0} ({1})]".format(time, reach_argument, avoid_argument))
    else:
        return analyse(model, "Pmin=? [F<={0} {1}]".format(time, reach_argument))

def analyse_timebound_max(model, time, reach_argument="\"failed\"", avoid_argument=None):
    if avoid_argument:
        return analyse(model, "Pmax=? [! ({2}) U<={0} ({1})]".format(time, reach_argument, avoid_argument))
    else:
        return analyse(model, "Pmax=? [F<={0} {1}]".format(time, reach_argument))


def analyse_timepoints(model, start, end, increment, reach_argument="\"failed\"", avoid_argument=None):
    results = []
    time = start
    while time <= end:
        results.append(analyse_timebound(model, time, reach_argument, avoid_argument))
        time += increment
    return results


def analyse_conditional_reliability(model, time_mission, time_lapsed, reach_argument="\"failed\"", avoid_argument=None):
    if avoid_argument:
        return analyse(model, "P=? [! ({2}) U<={0} ({1})]".format(time_mission, reach_argument, avoid_argument))
    else:
        total_time =time_mission + time_lapsed
        q_t_plus_T = analyse(model, "P=? [F<={0} {1}]".format(total_time, reach_argument))
        q_T = analyse(model, "P=? [F<={0} {1}]".format(time_lapsed, reach_argument))
        return (1-q_t_plus_T)/(1-q_T)

def analyse_b_x_life(model, warranty_time, reach_argument="\"failed\"", avoid_argument=None):
    if avoid_argument:
        time_mission = 1;
        return analyse(model, "P=? [! ({2}) U<={0} ({1})]".format(time_mission, reach_argument, avoid_argument))
    else:
        upper_bound= 10 * analyse_mttf(model)
        lower_bound = 0;
        mean_value = round((upper_bound + lower_bound )/2)
        q = warranty_time/100
        q_estimate = analyse_timebound(model, mean_value)
        delta = 0.001
        while(q_estimate >= q + delta or q_estimate <= q - delta):
            if (q_estimate >= q + delta):
                upper_bound = mean_value
            else:
                 lower_bound = mean_value
            mean_value = round((upper_bound + lower_bound) / 2)
            q_estimate = analyse_timebound(model, mean_value)
            print (q_estimate, lower_bound, mean_value, upper_bound)
        return mean_value


def analyse_mttf(model, argument="\"failed\""):
    return analyse(model, "T=? [F {}]".format(argument))

def analyse_mttf_min(model, argument="\"failed\""):
    return analyse(model, "Tmin=? [F {}]".format(argument))

def analyse_mttf_max(model, argument="\"failed\""):
    return analyse(model, "Tmax=? [F {}]".format(argument))


def get_degraded_states(model, contained_labels, avoid_labels, failed_labels):
    # Prepare states

    print("contained_labels:")
    print(contained_labels)
    print("avoid_labels:")
    print(avoid_labels)
    print("failed_labels:")
    print(failed_labels)


    labeling = model.labeling
    assert(len(contained_labels)>0)
    assert(len(failed_labels)>0)

    contained_states = labeling.get_states(contained_labels[0])
    for label in contained_labels[1:]:
        contained_states = contained_states | labeling.get_states(label)
    avoid_states = stormpy.storage.BitVector(model.nr_states, False)
    for label in avoid_labels:
        temp_states = labeling.get_states(label)
        avoid_states = avoid_states | temp_states
    not_avoid_sates = ~avoid_states
    degraded_states = contained_states & not_avoid_sates
    failed_states = labeling.get_states(failed_labels[0])
    for label in failed_labels[1:]:
        failed_states = failed_states | labeling.get_states(label)

    states = []
    visited = stormpy.storage.BitVector(model.nr_states)

    queue = Queue()
    queue.put(model.initial_states[0])
    while not queue.empty():
        current_state = queue.get()
        if visited.get(current_state):
            # Already visited
            continue
        visited.set(current_state, True)
        if degraded_states.get(current_state):
            # Found state
            states.append(current_state)
        else:
            # Add successor states
            s = model.states[current_state]
            actions = s.actions
            assert len(actions) == 1
            action = actions[0]
            for transition in action.transitions:
                successor = transition.column
                if not visited.get(successor) and not failed_states.get(successor):
                    queue.put(successor)

    # print("States: {}".format(", ".join([str(i) for i in sorted(states)])))
    return states


def analyse_remaining_expected_time(model, contained_label, avoid_label, failed_label):
    formulas = stormpy.parse_properties("T=? [F {}]".format(failed_label))
    results = stormpy.model_checking(model, formulas[0])
    assert results.result_for_all_states
    result = 0
    if "tmp_target_et" not in model.labeling.get_labels():
        model.labeling.add_label("tmp_target_et")
    states = stormpy.BitVector(model.nr_states)
    degraded_label = "{} & !{}".format(contained_label, avoid_label)

    consider_states = get_degraded_states(model, contained_label, avoid_label)
    no = 0
    for state in consider_states:
        no += 1
        if no % 100 == 0:
            print("State {}/{}".format(no, len(consider_states)), end="\r")
        et = results.at(state)
        states.set(state, True)
        model.labeling.set_states("tmp_target_et", states)
        prob = analyse_probability(model, "\"tmp_target_et\"", degraded_label)
        states.set(state, False)
        result += et * prob
    return result


def analyse_remaining_expected_time2(model, contained_labels, avoid_labels, failed_labels):
    failed_str = "|".join("(\"{}\")".format(label) for label in failed_labels)
    formulas = stormpy.parse_properties("T=? [F {}]".format(failed_str))
    results = stormpy.model_checking(model, formulas[0])
    assert results.result_for_all_states
    result = 0
    if "tmp_target_et" not in model.labeling.get_labels():
        model.labeling.add_label("tmp_target_et")

    consider_states = get_degraded_states(model, contained_labels, avoid_labels, failed_labels)
    # Merge states with same result
    merged_states = dict()
    for state in consider_states:
        et = results.at(state)
        if et in merged_states:
            merged_states[et].append(state)
        else:
            merged_states[et] = [state]
    merged_states = collections.OrderedDict(sorted(merged_states.items()))

    print("Consider states: {}, dict length: {}".format(len(consider_states), len(merged_states)))

    contained_str = "|".join("(\"{}\")".format(label) for label in contained_labels)
    if len(avoid_labels)>0:
        avoid_str = "|".join("(\"{}\")".format(label) for label in avoid_labels)
        degraded_label = "({}) & !({})".format(contained_str, avoid_str)
    else:
        degraded_label = "({})".format(contained_str)
    no = 0
    for et, similar_states in merged_states.items():
        no += 1
        if no % 100 == 0:
            print("State {}/{}".format(no, len(merged_states)), end="\r")
        states = stormpy.BitVector(model.nr_states, similar_states)
        model.labeling.set_states("tmp_target_et", states)
        prob = analyse_probability(model, "\"tmp_target_et\"", degraded_label)
        result += et * prob
    return result


def analyse_remaining_expected_time3(model, contained_labels, avoid_labels, failed_labels):
    # Compute expected time
    failed_str = "|".join("(\"{}\")".format(label) for label in failed_labels)
    formulas = stormpy.parse_properties("T=? [F {}]".format(failed_str))
    results = stormpy.model_checking(model, formulas[0])
    assert results.result_for_all_states
    if "tmp_target_et" not in model.labeling.get_labels():
        model.labeling.add_label("tmp_target_et")

    consider_states = get_degraded_states(model, contained_labels, avoid_labels, failed_labels)
    print("Consider {} states".format(len(consider_states)))

    contained_str = "|".join("(\"{}\")".format(label) for label in contained_labels)
    if len(avoid_labels)>0:
        avoid_str = "|".join("(\"{}\")".format(label) for label in avoid_labels)
        degraded_label = "({}) & !({})".format(contained_str, avoid_str)
    else:
        degraded_label = "({})".format(contained_str)

    env = stormpy.Environment()
    formula_phi = stormpy.parse_properties("!({})".format(degraded_label))[0]
    phi_result = stormpy.model_checking(model, formula_phi)
    phi_states = phi_result.get_truth_values()
    psi_states = stormpy.BitVector(model.nr_states)
    for state in consider_states:
        psi_states.set(state)
  #  for label in failed_labels:
   #     failed_states = model.labeling.get_states(label)
   #     psi_states = psi_states | failed_states

    task = stormpy.CheckTask(formula_phi.raw_formula, False)
    #Falak: Commented by Falak
    #probs = stormpy.compute_all_until_probabilities(model, phi_states, psi_states, task)
    #Falak: Added by Falak
    probs = stormpy.compute_all_until_probabilities(stormpy.Environment(), task, model, phi_states, psi_states)


    no = 0
    result = 0
    for state in consider_states:
        no += 1
        if no % 100 == 0:
            print("State {}/{}".format(no, len(consider_states)), end="\r")
        result += results.at(state) * probs[state]

    return result

#Falak: def analyse_remaining_timebound(model, contained_label, avoid_label, timebound):
def analyse_remaining_timebound(model, contained_labels, avoid_labels, failed_labels, timebound):
    print("P=? [F<={} \"failed\"]".format(timebound))
    formulas = stormpy.parse_properties("P=? [F<={} \"failed\"]".format(timebound))
    print(formulas)
    results = stormpy.model_checking(model, formulas[0])
    assert results.result_for_all_states
    result = 0

    #Falak: consider_states = get_degraded_states(model, contained_label, avoid_label)
    consider_states = get_degraded_states(model, contained_labels, avoid_labels, failed_labels)


    no = 0
    for state in consider_states:
        no += 1
        if no % 100 == 0:
            print("State {}/{}".format(no, len(consider_states)), end="\r")
        tb = results.at(state)
        result = max(tb, result)
    return result


def analyse_remaining_timebound2(model, contained_label, avoid_label, timebound):
    formulas = stormpy.parse_properties("P=? [F<={} \"failed\"]".format(timebound))
    results = stormpy.model_checking(model, formulas[0])
    assert results.result_for_all_states
    result = 0

    consider_states = get_degraded_states(model, contained_label, avoid_label)

    # Merge states with same result
    merged_states = dict()
    for state in consider_states:
        tb = results.at(state)
        if tb in merged_states:
            merged_states[tb].append(state)
        else:
            merged_states[tb] = [state]
    merged_states = collections.OrderedDict(sorted(merged_states.items()))

    print("Consider states: {}, dict length: {}".format(len(consider_states), len(merged_states)))

    no = 0
    for tb, similar_states in merged_states.items():
        no += 1
        if no % 100 == 0:
            print("State {}/{}".format(no, len(merged_states)), end="\r")
        result = max(tb, result)
    return result


def analyse_remaining_timepoints(model, start, end, increment, contained_label, avoid_label):
    results = []
    time = start
    while time <= end:
        results.append(analyse_remaining_timebound(model, contained_label, avoid_label, time))
        time += increment
    return results


def analyse_silfo(model, contained_labels, avoid_labels, failed_labels, timebound, time_cycle):
    formulas = stormpy.parse_properties("P=? [F<={} \"failed\"]".format(time_cycle))
    results = stormpy.model_checking(model, formulas[0])
    assert results.result_for_all_states

    # First compute FWD
    # Falak: commented below line
    # degraded_label = "\"{}\" & !\"{}\"".format(contained_labels, avoid_labels)

    # Falak: Added below few chuck of lines

    contained_str = "|".join("(\"{}\")".format(label) for label in contained_labels)
    if len(avoid_labels) > 0:
        avoid_str = "|".join("(\"{}\")".format(label) for label in avoid_labels)
        degraded_label = "({}) & !({})".format(contained_str, avoid_str)
    else:
        degraded_label = "({})".format(contained_str)


    fwd = analyse_timebound(model, timebound, "\"failed\"", degraded_label)
    print("SILFO fwd for {}: {}".format(timebound, fwd))

    if "tmp_target_silfo" not in model.labeling.get_labels():
        model.labeling.add_label("tmp_target_silfo")
    states = stormpy.BitVector(model.nr_states)
    consider_states = get_degraded_states(model, contained_labels, avoid_labels, failed_labels)
    print("Consider {} states".format(len(consider_states)))

    no = 0
    result = 0
    for state in consider_states:
        no += 1
        if no % 100 == 0:
            print("State {}/{}".format(no, len(consider_states)), end="\r")
        tb = results.at(state)
        states.set(state, True)
        model.labeling.set_states("tmp_target_silfo", states)
        prob = analyse_timebound(model, timebound, "\"tmp_target_silfo\"", degraded_label)
        states.set(state, False)
        result += tb * prob
    print("SILFO result for {}: {}".format(timebound, result))
    return result + fwd


def analyse_silfo2(model, contained_label, avoid_label, timebound, time_cycle):
    formulas = stormpy.parse_properties("P=? [F<={} \"failed\"]".format(time_cycle))
    results = stormpy.model_checking(model, formulas[0])
    assert results.result_for_all_states

    # First compute FWD
    degraded_label = "\"{}\" & !\"{}\"".format(contained_label, avoid_label)
    fwd = analyse_timebound(model, timebound, "\"failed\"", degraded_label)
    print("SILFO fwd for {}: {}".format(timebound, fwd))

    if "tmp_target_silfo" not in model.labeling.get_labels():
        model.labeling.add_label("tmp_target_silfo")
    consider_states = get_degraded_states(model, contained_label, avoid_label)

    # Merge states with same result
    merged_states = dict()
    for state in consider_states:
        tb = results.at(state)
        if tb in merged_states:
            merged_states[tb].append(state)
        else:
            merged_states[tb] = [state]
    merged_states = collections.OrderedDict(sorted(merged_states.items()))

    print("Consider states: {}, dict length: {}".format(len(consider_states), len(merged_states)))

    no = 0
    result = 0
    for tb, similar_states in merged_states.items():
        no += 1
        if no % 100 == 0:
            print("State {}/{}".format(no, len(merged_states)), end="\r")
        states = stormpy.BitVector(model.nr_states, similar_states)
        model.labeling.set_states("tmp_target_silfo", states)
        prob = analyse_timebound(model, timebound, "\"tmp_target_silfo\"", degraded_label)
        result += tb * prob
    print("SILFO result for {}: {}".format(timebound, result))
    return result + fwd


def analyse_flod3(model, contained_labels, avoid_labels, failed_labels, timebound, time_cycle):
    formulas = stormpy.parse_properties("P=? [F<={} \"failed\"]".format(time_cycle))
    results = stormpy.model_checking(model, formulas[0])
    assert results.result_for_all_states

    if "tmp_target_silfo" not in model.labeling.get_labels():
        model.labeling.add_label("tmp_target_silfo")
    consider_states = get_degraded_states(model, contained_labels, avoid_labels, failed_labels)
    print("Consider {} states".format(len(consider_states)))

    #Falak: commented below line
    #degraded_label = "\"{}\" & !\"{}\"".format(contained_labels, avoid_labels)

    #Falak: Added below few chuck of lines

    contained_str = "|".join("(\"{}\")".format(label) for label in contained_labels)
    if len(avoid_labels) > 0:
        avoid_str = "|".join("(\"{}\")".format(label) for label in avoid_labels)
        degraded_label = "({}) & !({})".format(contained_str, avoid_str)
    else:
        degraded_label = "({})".format(contained_str)


    formula_phi = stormpy.parse_properties("!({})".format(degraded_label))[0]
    phi_result = stormpy.model_checking(model, formula_phi)
    phi_states = phi_result.get_truth_values()
    psi_states = stormpy.BitVector(model.nr_states)
    for state in consider_states:
        psi_states.set(state)

    #Falak: probs = stormpy.compute_transient_probabilities(model, phi_states, psi_states, timebound)
    probs = stormpy.compute_transient_probabilities(stormpy.Environment(), model, phi_states, psi_states, timebound)
    no = 0
    result = 0
    for state in consider_states:
        no += 1
        if no % 100 == 0:
            print("State {}/{}".format(no, len(consider_states)), end="\r")
        tb = results.at(state)
        result += tb * probs[state]

    print("FLOD result for {}: {}".format(timebound, result))
    return result


def analyse_silfo3(fwd, flod):
    return fwd + flod


def analyse_silfo_timepoints(model, start, end, increment, contained_labels, avoid_labels, failed_labels, time_cycle):
    results = []
    time = start
    while time <= end:
        results.append(analyse_silfo(model, contained_labels, avoid_labels, failed_labels, time, time_cycle))
        time += increment
    return results


def analyse_fit(model, timebound):
    return analyse_timebound(model, timebound) / timebound
    delta = timebound / 100
    res1 = analyse_timebound(model, timebound)
    res2 = analyse_timebound(model, timebound + delta)
    return ((res2 - res1) / delta) / (1 - res1)

def analyse_fit_min(model, timebound):
    return analyse_timebound_min(model, timebound) / timebound
    delta = timebound / 100
    res1 = analyse_timebound_min(model, timebound)
    res2 = analyse_timebound_min(model, timebound + delta)
    return ((res2 - res1) / delta) / (1 - res1)

def analyse_fit_max(model, timebound):
    return analyse_timebound_max(model, timebound) / timebound
    delta = timebound / 100
    res1 = analyse_timebound_max(model, timebound)
    res2 = analyse_timebound_max(model, timebound + delta)
    return ((res2 - res1) / delta) / (1 - res1)
