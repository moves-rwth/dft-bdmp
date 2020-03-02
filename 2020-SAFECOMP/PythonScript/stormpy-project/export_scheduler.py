import stormpy
import stormpy.core
import stormpy.logic
import stormpy.examples
import sys, getopt
import pprint
import stormpy.examples.files
def expCTMC(infile,outfile):
    prop = "Pmin=? [F \"Fail\"]"

    model= stormpy.build_model_from_drn(infile)
    proper = stormpy.parse_properties(prop)
    initial_state = model.initial_states[0]
    model, proper=stormpy.eliminate_non_markovian_chains(model,proper,stormpy.EliminationLabelBehavior.DELETE_LABELS)
    result= stormpy.model_checking(model,proper[0], extract_scheduler=True)
    intermediate = model.apply_scheduler(result.scheduler)
    model, proper=stormpy.eliminate_non_markovian_chains(intermediate,proper,stormpy.EliminationLabelBehavior.DELETE_LABELS)
    stormpy.export_to_drn(model,outfile)
    exit(1)
    fin = open(infile,'r')
    lst = []
    for line in fin:
        if "action 0" in line:
            continue
        else:
            lst.append(line)
    fin.close()
    fin = open(outfile,'w+')

    for line in lst:
        fin.write(line)
    fin.close()

    if result.has_scheduler:

        scheduler = result.scheduler
        assert scheduler.memoryless
        assert scheduler.memory_size == 1
        assert scheduler.deterministic
        intermediate = model.apply_scheduler(scheduler)
        #assert intermediate.model_type == stormpy.ModelType.MA
        for state in intermediate.states:
                assert len(state.actions)==1
        for state in intermediate.states:
                choice = scheduler.get_choice(state)
                action = choice.get_deterministic_choice()
                print("In state {} choose action {}".format(state, action))
    else:
        print("I am here")



"""

exit
print(model.nr_states)
model = stormpy.build_model(jani_program,property)
print(model.initial_states)
print(model.labeling.get_labels())
initial_state = model.initial_states[0]
assert initial_state == 0

result = stormpy.model_checking(model, property[0],extract_scheduler=True)
print(result.at(initial_state))
assert result.has_scheduler
scheduler = result.scheduler

print(result)
scheduler = result.scheduler
print(scheduler)

for state in model.states:
        choice = scheduler.get_choice(state)
        action = choice.get_deterministic_choice()
        print("In state {} choose action {}".format(state, action))




initial_state = model.initial_states[0]
assert initial_state == 0


for state in model.states:
    print(state, state.la)
"""
