//
// Created by Shahid Khan on 23.08.21.
//

#ifndef STORM_STATESMAP_H
#define STORM_STATESMAP_H
#include <iostream>
#include <map>
#include <set>
#include <deque>
#include "storm/exceptions/OptionParserException.h"
#include "storm/utility/logging.h"

namespace storm {
    namespace figaro {
        namespace storage {

            template<typename ValueType=double, typename StateType=uint32_t>
        class StatesMap {
            public:
                 StatesMap(std::deque<std::deque<std::set<std::string>>>);
                 StatesMap(bool);

                void insertTransition(StateType, std::set<std::string>, StateType);

                bool hasTransition(StateType, std::string, StateType);

                std::string getTransitionLabel(StateType, StateType);
                std::set<StateType> failLabelledStates;

                uint_fast64_t getOriginState(std::string, StateType);
                void addState(StateType stateId);

                uint_fast64_t getTargetState(StateType, std::set<std::string>, bool &);
                bool isStateExplored(StateType);
                void print();
                void printStateMap();
                void loadTraces(std::deque<std::deque<std::set<std::string>>>);
                bool isSimulationPhase();
                void setCurrentState(StateType);
                StateType getCurrentState();
                StateType getPreviousState();
                void setInitialState(StateType);
                StateType getInitialState();
                StateType getImportantState();
                void computeImportantState();
                void printRemainingTraces();

            private:
//            Complete map of states that can be used to simulate the behavior

                std::map<StateType, std::map<std::set<std::string>, StateType>> stateTransitionState;
//                List of explored states
                std::set<StateType> exploredStates;
//                List of Traces
                std::deque<std::deque<std::set<std::string>>> traces;
                StateType currentState;
                StateType previousState;
                StateType initialState;
                StateType importantState;
                std::deque<std::set<std::string>> currentTrace;
                bool simulationPhase;
                bool pendingunexploredState;
                std::set<std::string> currentLabel;


            public:
                std::vector<uint_fast64_t> stateToMatrixMapping;
                std::vector<uint_fast64_t> matrixToStateMapping;
                bool switchedFromSimtoProb;
                int simulationIterations;


            };
        }
    }
}
#endif //STORM_STATESMAP_H
