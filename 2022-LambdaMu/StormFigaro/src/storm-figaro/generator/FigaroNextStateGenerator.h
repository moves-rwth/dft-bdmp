#pragma once
    // to avoid multiple inclusions of header file
#ifndef STORM_GENERATOR_FIGARONEXTSTATEGENERATOR_H_
#define STORM_GENERATOR_FIGARONEXTSTATEGENERATOR_H_

#include "storm/generator/NextStateGenerator.h"
#include "storm/builder/ExplicitModelBuilder.h"
#include "storm/storage/BoostTypes.h"
#include "storm-figaro/model/FigaroModelTemplate.h"
#include <set>
#include <storm-figaro/storage/FigaroState.h>
#include "storm-figaro/storage/StatesMap.h"
//#include <iostream>
//#include <array>
//#include <sstream>
//#include <algorithm>
//#include "FigaroModel.h"
//#include <stdlib.h>
//
//#include <unordered_set>
//#include <cmath>



namespace storm {
    namespace figaro{
        namespace generator{
            
            template<typename ValueType, typename StateType>
        class FigaroNextStateGenerator: public storm::generator::NextStateGenerator<ValueType, StateType> //, storm::figaro::builder::ExplicitFigaroModelBuilder<ValueType, StateType>
            {
            public:
            typedef typename storm::generator::NextStateGenerator<ValueType, StateType>::StateToIdCallback StateToIdCallback;
            using FigaroStatePointer = std::shared_ptr<storm::figaro::storage::FigaroState<ValueType>>;
            typedef std::function<StateType  (FigaroStatePointer const&)> StateToIdCallbackapproximation;
//            Without expression Manger
            FigaroNextStateGenerator(std::shared_ptr<storm::figaro::FigaroProgram> model, bool topnonrep ,storm::generator::NextStateGeneratorOptions const& options = storm::generator::NextStateGeneratorOptions());

            //with expression manager and variable information and symmetries
            FigaroNextStateGenerator(std::shared_ptr<storm::figaro::FigaroProgram> model, storm::expressions::ExpressionManager const& manger, storm::generator::VariableInformation const& varinfo, std::shared_ptr<storm::figaro::storage::FigaroIndependentSymmetries> symmetries, bool topnonrep, storm::generator::NextStateGeneratorOptions const& options = storm::generator::NextStateGeneratorOptions());
            //with expression manager and variable information; delete this constructor later
            FigaroNextStateGenerator(std::shared_ptr<storm::figaro::FigaroProgram> model, storm::expressions::ExpressionManager const& manger, storm::generator::VariableInformation const& varinfo, bool topnonrep, storm::generator::NextStateGeneratorOptions const& options = storm::generator::NextStateGeneratorOptions());
            
            
//            following three functions require implementation
            virtual std::vector<StateType> getInitialStates(StateToIdCallback const& stateToIdCallback) override;
            void printmenue( std::vector<std::pair<storm::generator::CompressedState,storm::generator::CompressedState>> menuestates, std::vector<std::tuple<int, double,std::string,int,std::string>> menue,storm::generator::CompressedState compstate);
            void printinstmenue( std::vector<std::pair<storm::generator::CompressedState,storm::generator::CompressedState>> menuestates, std::vector<std::pair<std::string,double>> menue,storm::generator::CompressedState compstate);
            uint_fast64_t getTotalBitOffset(uint_fast64_t result) const;
 
            virtual void load(storm::generator::CompressedState const& state) override;
             void load(storm::generator::CompressedState const& state,storm::generator::CompressedState const &symmetricstate);

            virtual storm::generator::StateBehavior<ValueType, StateType> expand(StateToIdCallback const& stateToIdCallback) override;
            //For symmetries we compare the symmetric buBitVectors to the loaded state values and and where ever a variable is changed we make change all other variables.
            bool statehasFailLabel(storm::generator::CompressedState const &compstate);
            size_t ComputeStateRelevanceAttribute(storm::generator::CompressedState const &compstate);

            void retreiveFigaroModelState(storm::generator::CompressedState &state,storm::generator::CompressedState &symmetricstate,storm::generator::CompressedState const& loadedState);
            void retreiveFigaroModelState(storm::generator::CompressedState &state);
            std::vector<StateType> getInitialStatesApproximation(StateToIdCallbackapproximation const& stateToIdCallback);
            storm::generator::StateBehavior<ValueType, StateType> expandApproximation(StateToIdCallbackapproximation const& stateToIdCallback);
            storm::generator::StateBehavior<ValueType, StateType> expandApproximation(StateToIdCallbackapproximation const& stateToIdCallback,storm::figaro::storage::StatesMap<ValueType,StateType>&);

            void printhello();
            storm::generator::CompressedState maskstate(storm::generator::CompressedState &figarostate);
            virtual storm::generator::ModelType getModelType() const override;
            virtual bool isDeterministicModel() const override;
            virtual bool isDiscreteTimeModel() const override;
            virtual bool isPartiallyObservable() const override;
           void unpackStateIntoFigaroModel(storm::generator::CompressedState const& state);
            virtual std::size_t getNumberOfRewardModels() const override;
            virtual storm::builder::RewardModelInformation getRewardModelInformation(uint64_t const& index) const override;
            virtual storm::models::sparse::StateLabeling label(storm::storage::sparse::StateStorage<StateType> const& stateStorage, std::vector<StateType> const& initialStateIndices = {}, std::vector<StateType> const& deadlockStateIndices = {}) override;
            
            virtual std::shared_ptr<storm::storage::sparse::ChoiceOrigins> generateChoiceOrigins(std::vector<boost::any>& dataForChoiceOrigins) const override;
            std::string toBinary(int, int);
            std::vector<std::pair<std::string, double>> create_inst_menue(std::vector<std::tuple<int, double, std::string, int, std::string>> fireableOccurrences,std::vector<std::set<std::string>>&);
            private:
            /*!
             * Evaluate observation labels
             */
            storm::storage::BitVector evaluateObservationLabels(storm::generator::CompressedState const& state) const override;
            
            std::vector<std::reference_wrapper<storm::prism::RewardModel const>> rewardModels;
            
                // A flag that stores whether at least one of the selected reward models has state-action rewards.
            bool hasStateActionRewards;
            public:
            std::shared_ptr<storm::figaro::FigaroProgram> figaromodel;
            std::shared_ptr<storm::figaro::storage::FigaroIndependentSymmetries> symmetries;
            bool hasSymmetries;
            bool isTopNonRepairSet;

            std::map<std::shared_ptr<storm::generator::CompressedState>,std::shared_ptr<storm::generator::CompressedState>> pseudoStates;
            storm::storage::BitVector const* symmetricState;
            };
            
        }
    }
}

#endif /* STORM_GENERATOR_FIGAROMNEXTSTATEGENERATOR_H_ */
