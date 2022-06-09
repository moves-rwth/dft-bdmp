//
// Created by Shahid Khan on 23.08.21.
//

#include "StatesMap.h"

namespace storm {
    namespace figaro {
        namespace storage {

            template<typename ValueType, typename StateType>
            StatesMap<ValueType, StateType>::StatesMap(std::deque<std::deque<std::set<std::string>>> available_traces)
                    :traces(available_traces) {
                pendingunexploredState = false;
                switchedFromSimtoProb = false;
                simulationIterations = 0;
            }

//            we start by setting simulation phase to true
            template<typename ValueType, typename StateType>
            StatesMap<ValueType, StateType>::StatesMap(bool isSimulationPhase):simulationPhase(isSimulationPhase) {
//    Intentionally left blanck
                pendingunexploredState = false;
                switchedFromSimtoProb = isSimulationPhase? false : true;
                simulationIterations = 0;
            }


            template<typename ValueType, typename StateType>
            void StatesMap<ValueType, StateType>::insertTransition(StateType originState, std::set<std::string> label,
                                                                   StateType targetState) {
                stateTransitionState[originState][label] = targetState;
                if (exploredStates.find(originState) == exploredStates.end()) {
                    addState(originState);
                }
            }

            template<typename ValueType, typename StateType>
            bool StatesMap<ValueType, StateType>::hasTransition(StateType origState, std::string label,
                                                                StateType targetState) {
                return true;
            }

            template<typename ValueType, typename StateType>
            std::string
            StatesMap<ValueType, StateType>::getTransitionLabel(StateType origState, StateType targetState) {
                return "Adding details";
            }

            template<typename ValueType, typename StateType>
            uint_fast64_t StatesMap<ValueType, StateType>::getOriginState(std::string label, StateType targetState) {
                return 1;
            }

            template<typename ValueType, typename StateType>
            void StatesMap<ValueType, StateType>::addState(StateType stateId) {
                exploredStates.insert(stateId);
                stateToMatrixMapping.push_back(0);
                matrixToStateMapping.push_back(0);
            }

            template<typename ValueType, typename StateType>
            uint_fast64_t
            StatesMap<ValueType, StateType>::getTargetState(StateType origState, std::set<std::string> label,
                                                            bool &isSuccessful) {
//                std::cout << "Getting Next state for state \"" << origState << "\" againts the Label \"";
//                for(auto elem : label){std::cout<<elem<<"  ";}
//                std::cout<< "\"" << std::endl;
                if (stateTransitionState.find(origState) != stateTransitionState.end()) {
                    auto temp = stateTransitionState[origState];
                    if (temp.find(label) != temp.end()) {
                        auto state = temp[label];
//                        std::cout << std::endl << "The next State for \"" << origState << "\" againts the Label \"";
//                        for (auto elem : label)
//                            std::cout << elem << ",";
//                        std::cout << "\" is \"" << state << "\"" << std::endl;
                        currentState = state;
                        isSuccessful = true;
                        pendingunexploredState = false;
                        return state;
                    } else {
                        isSuccessful = false;
                        pendingunexploredState = true;
//                        STORM_LOG_ERROR("Transition \"" << label << "\"  for state  \"" << origState
//                                                        << "\"  not explored so far or does not exist.");
                        return origState;
                    }
                } else {
                    isSuccessful = false;
                    pendingunexploredState = true;
//                    STORM_LOG_ERROR("State \"" << origState << "\" for Lable \"" << label << "\" not explored so far.");
                    return origState;
                }
            }

            template<typename ValueType, typename StateType>
            bool StatesMap<ValueType, StateType>::isStateExplored(StateType State) {

                if (exploredStates.find(State) == exploredStates.end()) {
                    return false;
                } else {
                    return true;
                }
            }

            template<typename ValueType, typename StateType>
            void StatesMap<ValueType, StateType>::printStateMap() {
                std::cout << "printing State Map with remapped staets" << std::endl;
                for (auto itr1 = stateTransitionState.begin(); itr1 != stateTransitionState.end(); itr1++) {
                    std::cout << stateToMatrixMapping[itr1->first]<< ' '; // Add space to separate entries on the same line
                    std::cout << std::endl;
                    for (auto itr2 = itr1->second.begin(); itr2 != itr1->second.end(); itr2++) {
                        for(auto elem : itr2->first) std::cout<<elem <<",";
                        std::cout <<  " : " << stateToMatrixMapping[itr2->second] << ' ';
                        std::cout << std::endl;
                    }
                    std::cout << std::endl;
                }
            }

            template<typename ValueType, typename StateType>
            void StatesMap<ValueType, StateType>::print() {
                std::cout << "printing State Map" << std::endl;
                for (auto itr1 = stateTransitionState.begin(); itr1 != stateTransitionState.end(); itr1++) {
                    std::cout << itr1->first << ' '; // Add space to separate entries on the same line
                    std::cout << std::endl;

                    for (auto itr2 = itr1->second.begin(); itr2 != itr1->second.end(); itr2++) {
                        for(auto elem: itr2->first) std::cout<<elem<<"  ";
                        std::cout << " : " << itr2->second << ' ';
                        std::cout << std::endl;
                    }
                    std::cout << std::endl;
                }
            }


            template<typename ValueType, typename StateType>
            void
            StatesMap<ValueType, StateType>::loadTraces(std::deque<std::deque<std::set<std::string>>> parsedTraces) {

                traces = parsedTraces;
            }

            template<typename ValueType, typename StateType>
            bool StatesMap<ValueType, StateType>::isSimulationPhase() {
                return simulationPhase;
            }

            template<typename ValueType, typename StateType>
            void StatesMap<ValueType, StateType>::setCurrentState(StateType stateID) {
                if (stateID == initialState) {
                    previousState = initialState;
                    currentState = initialState;
                } else {
                    previousState = currentState;
                    currentState = stateID;
                }
            }

            template<typename ValueType, typename StateType>
            StateType StatesMap<ValueType, StateType>::getCurrentState() {
                return currentState;
            }

            template<typename ValueType, typename StateType>
            StateType StatesMap<ValueType, StateType>::getPreviousState() {
                return previousState;
            }

            template<typename ValueType, typename StateType>
            void StatesMap<ValueType, StateType>::setInitialState(StateType stateID) {
                initialState = stateID;
                //We start by setting all states equal to the initial state
                currentState = stateID;
                previousState = stateID;
                importantState = stateID;
                addState(stateID);
            }

            template<typename ValueType, typename StateType>
            StateType StatesMap<ValueType, StateType>::getInitialState() {
                return initialState;
            }

            template<typename ValueType, typename StateType>
            StateType StatesMap<ValueType, StateType>::getImportantState() {
                if (pendingunexploredState or exploredStates.find(importantState) != exploredStates.end()) {
                    computeImportantState();
//                    std::cout << std::endl << "The important State is " << importantState << std::endl;
                    return importantState;
                }
//                std::cout << std::endl << "The important State is " << importantState << std::endl;
                computeImportantState();
                return importantState;
            }

            template<typename ValueType, typename StateType>
            void StatesMap<ValueType, StateType>::computeImportantState() {


                if ((traces.size() == 0 and currentTrace.size() == 0) or
                (traces.size() == 0 and failLabelledStates.find(importantState)!=failLabelledStates.end())) {
                    std::cout<<std::endl<<" All traces are exhausted; switch to probablistic phase now."<<std::endl;
                    simulationPhase = false;
                    importantState = initialState;
                    return;
                } else if ((currentTrace.size() == 0 and exploredStates.find(importantState) != exploredStates.end()) or
                        (failLabelledStates.find(importantState)!=failLabelledStates.end())) {
                    currentTrace = traces.front();
                    traces.pop_front();
//                    std::cout << "Checking Trace:";
//                    for (int j = 0; j < currentTrace.size(); j++) {
//                        for (auto it = currentTrace[j].begin(); it != currentTrace[j].end(); it++) {
//                            std::cout << *it << "  ";
//                        }
//                    }
//                    std::cout << ":" << std::endl;



//                    Check if it is the first trace and only initial state is explored yet.
                    if (exploredStates.size() == 1) {
                        bool isSuccessful = false;
                        currentLabel = currentTrace.front();
                        auto tempState = getTargetState(initialState, currentLabel, isSuccessful);
                        if (isSuccessful) {
                            importantState = tempState;
                            currentTrace.pop_front();
                        }
                    }
//                    if states are already explored then we need to start from the initial state again to reach the state of interest
                    else {
                        StateType tempState = initialState;
                        do {
                            bool isSuccessful = false;
                            if(currentTrace.size()> 0){
                            currentLabel = currentTrace.front();}

                            auto temp = getTargetState(tempState, currentLabel, isSuccessful);
                            if (isSuccessful) {
                                currentState = temp;
                                if(currentTrace.size()> 0){
                                currentTrace.pop_front();}
                                previousState = tempState;
                                tempState = currentState;
                            } else {
                                break;
                            }
                        } while (exploredStates.find(tempState) != exploredStates.end());
                        importantState = tempState;
                    }
                }
//                the generic case where we have already explored some parts of the trace.
                else if (currentTrace.size() > 0) {
                    bool isSuccessful = false;
                    currentLabel = currentTrace.front();

                    auto tempState = getTargetState(currentState, currentLabel, isSuccessful);
                    if (isSuccessful) {
                        currentTrace.pop_front();
                        previousState = currentState;
                        currentState = tempState;
                        importantState = tempState;
                    }

                } else if (currentTrace.size() == 0 and exploredStates.find(importantState) == exploredStates.end()) {
                    return;
                } else {
                    std::cout << "This scenario not considered so far";
                    exit(2);
                    importantState = initialState;
                }
            }

            template<typename ValueType, typename StateType>
            void StatesMap<ValueType, StateType>::printRemainingTraces() {
                std::cout<<"Printing the remaining traces"<<std::endl;
                for (int i = 0; i < traces.size(); i++) {
                    for (int j = 0; j < traces[i].size(); j++) {

                    if (traces[i][j].size()>1){
                        std::cout<<"<";
                    }
                        for (auto it = traces[i][j].begin(); it != traces[i][j].end(); it++)
                            std::cout << *it << "  ";
                    if (traces[i][j].size()>1){
                        std::cout<<">";
                    }
                    }

                    std::cout << std::endl;
                }
            }


            template
            class StatesMap<double, uint32_t>;
        }
    }
}