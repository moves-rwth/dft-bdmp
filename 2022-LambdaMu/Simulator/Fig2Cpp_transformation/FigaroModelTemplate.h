#pragma once

#include <map>
#include <vector>
#include <sstream>
#include<math.h>
#include <set>
#include <tuple>
// Comment the two next lines for running the interactive simulator
#ifndef INTERACTIVE
#include "storm/storage/expressions/ExpressionManager.h"
#include "storm/generator/VariableInformation.h"
#endif
namespace storm {
    namespace figaro {

        class FigaroProgram {

        protected:
            //constructor to initialize all variables through derived class
            FigaroProgram(
                std::map<std::string, size_t> mFigaroboolelementindex,
                std::map<std::string, size_t> mFigarofailureelementindex,
                std::map<std::string, size_t> mFigarofloatelementindex,
                std::map<std::string, size_t> mFigarointelementindex,
                std::map<std::string, size_t> mFigaroenumelementindex,
                std::string topevent,
                int  numBoolState,
                int numBoolFailureState,
                int  numFloatState,
                int  numIntState,
                int  numEnumState,
                bool ins_transition_found
            ) :
                mFigaroboolelementindex(mFigaroboolelementindex),
                mFigarofailureelementindex(mFigarofailureelementindex),
                mFigarofloatelementindex(mFigarofloatelementindex),
                mFigarointelementindex(mFigarointelementindex),
                mFigaroenumelementindex(mFigaroenumelementindex),
                topevent(topevent),
                numBoolState(numBoolState),
                numBoolFailureState(numBoolFailureState),
                numFloatState(numFloatState),
                numIntState(numIntState),
                numEnumState(numEnumState),
                ins_transition_found(ins_transition_found)
            {
                boolState.resize(numBoolState, 0);
                boolFailureState.resize(numBoolFailureState, 0);
                backupBoolState.resize(numBoolState, 0);
                doubleState.resize(numFloatState, 0);
                backupDoubleState.resize(numFloatState, 0);
                intState.resize(numIntState, 0);
                backupIntState.resize(numIntState, 0);
                enumState.resize(numEnumState, 0);
                backupEnumState.resize(numEnumState, 0);
                for (auto it = mFigarofailureelementindex.begin(); it != mFigarofailureelementindex.end(); it++)
                    failure_variable_names.insert(it->first);
                for (auto it = mFigarofloatelementindex.begin(); it != mFigarofloatelementindex.end(); it++)
                    float_variables_names.insert(it->first);
                for (auto it = mFigaroenumelementindex.begin(); it != mFigaroenumelementindex.end(); it++)
                    enum_variables_names.insert(it->first);
            }


        public:


            std::map<std::string, size_t> mFigaroboolelementindex;

            std::map<std::string, size_t> mFigarofailureelementindex;
            std::map<std::string, size_t> mFigarofloatelementindex;

            std::map<std::string, size_t> mFigarointelementindex;

            std::map<std::string, size_t> mFigaroenumelementindex;
            std::set<std::string> failure_variable_names;
            std::set<std::string> enum_variables_names;

            std::set<std::string> float_variables_names;

            std::string topevent;
            int  numBoolState;
            int  numBoolFailureState;
            int  numFloatState;
            int  numIntState;
            int  numEnumState;
            bool ins_transition_found;
            std::vector<bool> boolState;
            std::vector<bool> boolFailureState;
            std::vector<bool> backupBoolState;
            std::vector<double> doubleState;
            std::vector<double> backupDoubleState;
            std::vector<int> intState;
            std::vector<int> backupIntState;
            std::vector<int> enumState;
            std::vector<int> backupEnumState;


            virtual void init() = 0;
            virtual void saveCurrentState() = 0;
            virtual void printState() = 0;
            virtual void fireOccurrence(int numFire) = 0;
            virtual std::vector<std::tuple<int, double, std::string, int>> showFireableOccurrences() = 0;
            virtual int compareStates() = 0;
            virtual void doReinitialisations() = 0;
            virtual void runInteractions() = 0;
            virtual void printstatetuple() = 0;
            virtual void fireinsttransitiongroup(std::string) = 0;
            virtual bool figaromodelhasinstransitions() = 0;
        };
    }
}


