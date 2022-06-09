
#include "FigaroNextStateGenerator.h"

#include <boost/container/flat_map.hpp>
#include <boost/any.hpp>
#include <sstream>

#include "storm/models/sparse/StateLabeling.h"
#include "storm/storage/expressions/SimpleValuation.h"
#include "storm/storage/expressions/ExpressionManager.h"
#include "storm/utility/constants.h"
#include "storm/utility/macros.h"
#include "storm/exceptions/InvalidArgumentException.h"
#include "storm/exceptions/WrongFormatException.h"
#include "storm/exceptions/UnexpectedException.h"

namespace storm {
    namespace figaro {
        namespace generator {


            template<typename ValueType, typename StateType>
            FigaroNextStateGenerator<ValueType, StateType>::FigaroNextStateGenerator(
                    std::shared_ptr<storm::figaro::FigaroProgram> model,
                    bool topnonrep,
                    storm::generator::NextStateGeneratorOptions const &options
                    )
                    : storm::generator::NextStateGenerator<ValueType, StateType>(options), figaromodel(model), isTopNonRepairSet(topnonrep) {
            }

            template<typename ValueType, typename StateType>
            FigaroNextStateGenerator<ValueType, StateType>::FigaroNextStateGenerator(
                    std::shared_ptr<storm::figaro::FigaroProgram> model,
                    storm::expressions::ExpressionManager const &manager,
                    storm::generator::VariableInformation const &varinfo,
                    std::shared_ptr<storm::figaro::storage::FigaroIndependentSymmetries> symm,
                    bool topnonrep,
                    storm::generator::NextStateGeneratorOptions const &options
                    )
                    : storm::generator::NextStateGenerator<ValueType, StateType>(manager, varinfo, options),
                      figaromodel(model), symmetries(symm), isTopNonRepairSet(topnonrep) {
//            std::cout<<"\n FigaroNextStateGenerator Experssion manager and variable information included constructor is called\n";
            }

            template<typename ValueType, typename StateType>
            FigaroNextStateGenerator<ValueType, StateType>::FigaroNextStateGenerator(
                    std::shared_ptr<storm::figaro::FigaroProgram> model,
                    storm::expressions::ExpressionManager const &manager,
                    storm::generator::VariableInformation const &varinfo,
                    bool topnonrep,
                    storm::generator::NextStateGeneratorOptions const &options
                    )
                    : storm::generator::NextStateGenerator<ValueType, StateType>(manager, varinfo, options),
                      figaromodel(model), symmetries(nullptr),isTopNonRepairSet(topnonrep)  {
//            std::cout<<"\n FigaroNextStateGenerator Experssion manager and variable information included constructor is called\n";
            }

            template<typename ValueType, typename StateType>
            std::vector<StateType> FigaroNextStateGenerator<ValueType, StateType>::getInitialStates(
                    StateToIdCallback const &stateToIdCallback) {

                std::vector<StateType> initialStateIndices;

                storm::generator::CompressedState initialState(this->variableInformation.getTotalBitOffset(true));
                figaromodel->init();
                figaromodel->runInteractions();
                figaromodel->updateFailureStates();
                retreiveFigaroModelState(initialState);
//            std::cout<<"\nInitial State\n state tuple::";
//            figaromodel->printState();
//            figaromodel->printState();
//            for (int i=0; i<initialState.size(); i++)
//                std::cout<<initialState[i];
//            exit(6);



                // Register initial state and return it.
//            std::cout<<"\n\nI come hereeeeeeeee";
                StateType id = stateToIdCallback(initialState);
//            std::cout<<"\n\nI come hereeeeeeeee";
                initialStateIndices.push_back(id);
//            initialStateIndices.emplace_back(stateToIdCallback(initialState));

                return initialStateIndices;
            }


            template<typename ValueType, typename StateType>
            void FigaroNextStateGenerator<ValueType, StateType>::load(storm::generator::CompressedState const &state) {
                // Since almost all subsequent operations are based on the evaluator, we load the state into it now. We use figaro program as evaluator

                unpackStateIntoFigaroModel(state);
//                std::cout << "First Loaded State";
//                figaromodel->printState();
                this->state = &state;


            }
            template<typename ValueType, typename StateType>
            void FigaroNextStateGenerator<ValueType, StateType>::load(storm::generator::CompressedState const &state,storm::generator::CompressedState const &symmetricstate) {
                // Since almost all subsequent operations are based on the evaluator, we load the state into it now. We use figaro program as evaluator

                unpackStateIntoFigaroModel(state);
//                std::cout << "First Loaded State";
//                figaromodel->printState();
                this->state = &state;
                this->symmetricState = &symmetricstate;


            }


            template<typename ValueType, typename StateType>
            storm::generator::StateBehavior<ValueType, StateType>
            FigaroNextStateGenerator<ValueType, StateType>::expand(StateToIdCallback const &stateToIdCallback) {
                // Prepare the result, in case we return early.
                storm::generator::StateBehavior<ValueType, StateType> result;
                result.setExpanded(true);
                //Todo: Add state reward functionality later.
                //Todo: return early in case of terminanl expression.
                //we have unique choice (0) for each state and it is always Markovian
                bool markovian = false;
                std::vector<std::tuple<int, double, std::string, int, std::string>> menue = figaromodel->showFireableOccurrences();
                figaromodel->updateFailureStates();
                if (menue.size() == 0) {
                    storm::generator::Choice<ValueType, StateType> choice(0, true);
                    // Add self loop
                    choice.addProbability(stateToIdCallback(*this->state), storm::utility::one<ValueType>());
                    STORM_LOG_TRACE("Added self loop for " << *this->state);
                    // No further exploration required
                    result.addChoice(std::move(choice));
                    result.setExpanded();
                    return result;
                }
                std::vector<std::pair<storm::generator::CompressedState,storm::generator::CompressedState>> menuestates;
                double totalExitrate = 0;
                if (std::get<2>(menue[0]) == "EXP") {
                    markovian = true; //markovian choice
                } else if (std::get<2>(menue[0]) == "INS") {
                    markovian = false; //probablistic choice
                } else {
                    std::cout << "The choice is intelligible\n";
                    exit(2); // add storm exception here to indicate that the choice is intelligible
                }

                storm::generator::Choice<ValueType> choice(0, markovian);

                if (std::get<2>(menue[0]) == "EXP") {

                    storm::generator::CompressedState tempstate(this->variableInformation.getTotalBitOffset(true));
                    storm::generator::CompressedState tempsymmetricstate(this->variableInformation.getTotalBitOffset(true));


                    for (auto i = 0; i < menue.size(); ++i) {
                        if (std::get<1>(menue[i]) == 0) {
                            continue;
                        }
                        totalExitrate += std::get<1>(menue[i]);
                        std::cout << std::endl << std::get<3>(menue[i]) << std::endl;
                        unpackStateIntoFigaroModel(*this->state);
//                        figaromodel->runInteractions();
//                        figaromodel->updateFailureStates();
                        figaromodel->fireOccurrence(std::get<0>(menue[i]));
                        figaromodel->runInteractions();
                        figaromodel->updateFailureStates();
                        retreiveFigaroModelState(tempstate,tempsymmetricstate, *this->state);
                        menuestates.push_back(std::make_pair(tempstate,tempsymmetricstate));
                    }
                    int count = 0;
                    printmenue(menuestates, menue, *this->state);
                    for (auto i = 0; i < menue.size(); ++i) {
                        if (std::get<1>(menue[i]) == 0) {
                            continue;
                        }
                        choice.addProbability(stateToIdCallback((menuestates[count].second)), std::get<1>(menue[i]));
                        count = count + 1;

                    }
                } else if (std::get<2>(menue[0]) == "INS") {

                    storm::generator::CompressedState tempstate(this->variableInformation.getTotalBitOffset(true));
                    storm::generator::CompressedState tempsymmetricstate(this->variableInformation.getTotalBitOffset(true));

                    std::vector<std::set<std::string>> instTransitions;
                    std::vector<std::pair<std::string, double>> inst_menue = create_inst_menue(menue, instTransitions);
                    for (auto i = 0; i < inst_menue.size(); ++i) {
                        if (inst_menue[i].second == 0) {
                            continue;
                        }
                        totalExitrate += inst_menue[i].second;
                        unpackStateIntoFigaroModel(*this->state);
//                        figaromodel->runInteractions();
                        figaromodel->fireinsttransitiongroup(inst_menue[i].first);
                        figaromodel->runInteractions();
                        figaromodel->updateFailureStates();
                        retreiveFigaroModelState(tempstate,tempsymmetricstate, *this->state);
                        menuestates.push_back(std::make_pair(tempstate,tempsymmetricstate));
                    }
//                    printinstmenue(menuestates, inst_menue, *this->state);
                    int count = 0;
                    for (auto i = 0; i < inst_menue.size(); ++i) {
                        if (inst_menue[i].second == 0) {
                            continue;
                        }
                        choice.addProbability(stateToIdCallback((menuestates[count].second)), inst_menue[i].second);
                        count = count + 1;
                    }
                } else {
                    std::cout << "The choice is intelligible\n";
                    exit(2); // add storm exception here to indicate that the choice is intelligible
                }





                //can also merge in previous loop




//                insert explored states to state index

                //Get all choices for the state
                std::vector<storm::generator::Choice<ValueType>> allChoices;
                allChoices.push_back(choice);
//                std::cout<<"\nNow I am in expand function\n";
                // to do: I have single choice during refactoring remove this approach and directly add choice to results.
//                for (auto& choice : allChoices) {
//                    result.addChoice(std::move(choice));
//                }
                result.addChoice(std::move(choice));
                return result;
            }

            template<typename ValueType, typename StateType>
            storm::generator::ModelType FigaroNextStateGenerator<ValueType, StateType>::getModelType() const {
                if (isDeterministicModel()) {
                    return storm::generator::ModelType::CTMC;
                } else {
                    return storm::generator::ModelType::MA;
                }
            }

            template<typename ValueType, typename StateType>
            bool FigaroNextStateGenerator<ValueType, StateType>::isDeterministicModel() const {
                return !figaromodel->figaromodelhasinstransitions();
            }

            template<typename ValueType, typename StateType>
            bool FigaroNextStateGenerator<ValueType, StateType>::isDiscreteTimeModel() const {
                return false;
            }

            template<typename ValueType, typename StateType>
            bool FigaroNextStateGenerator<ValueType, StateType>::isPartiallyObservable() const {
                return false;
            }

            template<typename ValueType, typename StateType>
            std::size_t FigaroNextStateGenerator<ValueType, StateType>::getNumberOfRewardModels() const {
                return rewardModels.size();
            }

            template<typename ValueType, typename StateType>
            storm::builder::RewardModelInformation
            FigaroNextStateGenerator<ValueType, StateType>::getRewardModelInformation(uint64_t const &index) const {
                storm::prism::RewardModel const &rewardModel = rewardModels[index].get();
                return storm::builder::RewardModelInformation(rewardModel.getName(), rewardModel.hasStateRewards(),
                                                              rewardModel.hasStateActionRewards(),
                                                              rewardModel.hasTransitionRewards());
            }

            template<typename ValueType, typename StateType>
            storm::models::sparse::StateLabeling FigaroNextStateGenerator<ValueType, StateType>::label(
                    storm::storage::sparse::StateStorage<StateType> const &stateStorage,
                    std::vector<StateType> const &initialStateIndices,
                    std::vector<StateType> const &deadlockStateIndices) {
                // Gather a vector of labels and their expressions.
//                std::vector<std::pair<std::string, storm::expressions::Expression>> labels;
                storm::models::sparse::StateLabeling labels(stateStorage.getNumberOfStates());
                labels.addLabel("init");
                labels.addLabel("deadlock");
                labels.addLabel("failed");


                for (auto const &elements: figaromodel->mFigarofailureelementindex) {
                    labels.addLabel(elements.first);
                }
//                for (auto const& elements : figaromodel->mFigarofloatelementindex) {
//                    labels.addLabel(elements.first);
//                }
//                for (auto const& elements : figaromodel->mFigarointelementindex) {
//                    labels.addLabel(elements.first);
//                }


                for (int i = 0; i < initialStateIndices.size(); ++i) {
                    labels.addLabelToState("init", initialStateIndices.at(i));
                }
                for (int i = 0; i < deadlockStateIndices.size(); ++i) {
                    labels.addLabelToState("deadlock", deadlockStateIndices.at(i));
                }
                int failure_bit_offset = 0;
                for (auto const &booleanvariables : this->variableInformation.booleanVariables) {
                    if (booleanvariables.variable.getName() == figaromodel->topevent) {
//                        std::cout<<booleanvariables.bitOffset<<",";
                        failure_bit_offset = booleanvariables.bitOffset;
                    }
                }

                for (auto const &stateIdPair : stateStorage.stateToId) {
                    storm::storage::BitVector state = stateIdPair.first;

                    if (state.get(failure_bit_offset)) {
//                        std::cout<<std::endl<<"(hereewerqtee)";
                        labels.addLabelToState("failed", stateIdPair.second);
                    }
//                    for (auto const& booleanvariables : this->variableInformation.booleanVariables)
//                        {
//                        if(figaromodel->mFigaroelementfailureindex.find(booleanvariables.variable.getName()) != figaromodel->mFigaroelementfailureindex.end()){
//                    if(state.get(booleanvariables.bitOffset)) {
//                        labels.addLabelToState(booleanvariables.variable.getName(), stateIdPair.second);
//                    }}}

//                    for (auto const& integerVariable : this->variableInformation.integerVariables) {
//                        if (figaromodel->enum_variables_names.find(integerVariable.variable.getName()) != figaromodel->enum_variables_names.end())
//                        {
////                            labels.addLabel(integerVariable.variable.getName()+"hello");
////
//                     labels.addLabelToState(integerVariable.variable.getName(), stateIdPair.second);
//                        }
//                        else if (figaromodel->float_variables_names.find(integerVariable.variable.getName()) != figaromodel->float_variables_names.end())
//                        {
////                            labels.addLabel(integerVariable.variable.getName()+"hello");
//                            labels.addLabelToState(integerVariable.variable.getName(), stateIdPair.second);
//                        }
//                        else
//                        {
//                            labels.addLabelToState(integerVariable.variable.getName(), stateIdPair.second);
////                            labels.addLabel(integerVariable.variable.getName());
////                            labels.addLabelToState(integerVariable.variable.getName(), stateIdPair.second);
////                            figaromodel->intState[figaromodel->mFigarointelementindex[integerVariable.variable.getName()]] = (compstate.getAsInt(integerVariable.bitOffset, integerVariable.bitWidth) + integerVariable.lowerBound);
//                        }
//                    }

                }
                for (auto const &elements: figaromodel->mFigarofailureelementindex) {
                    for (auto const &stateIdPair : stateStorage.stateToId) {
                        storm::storage::BitVector state = stateIdPair.first;
                        for (auto const &booleanvariables : this->variableInformation.booleanVariables) {
                            if (booleanvariables.variable.getName() == elements.first) {
                                if (state.get(booleanvariables.bitOffset)) {
                                    labels.addLabelToState(elements.first, stateIdPair.second);
                                }
                            }
                        }
                    }
                }
//                compstate.get(booleanVariable.bitOffset);
//                if (this->options.isBuildAllLabelsSet()) {
//                    for (auto const& label : program.getLabels()) {
//                        labels.push_back(std::make_pair(label.getName(), label.getStatePredicateExpression()));
//                    }
//                }
//                else {
//                    for (auto const& labelName : this->options.getLabelNames()) {
//                        if (program.hasLabel(labelName)) {
//                            labels.push_back(std::make_pair(labelName, program.getLabelExpression(labelName)));
//                        } else {
//                            STORM_LOG_THROW(labelName == "init" || labelName == "deadlock", storm::exceptions::InvalidArgumentException, "Cannot build labeling for unknown label '" << labelName << "'.");
//                        }
//                    }
//                }

//                return storm::generator::NextStateGenerator<ValueType, StateType>::label(stateStorage, initialStateIndices, deadlockStateIndices, labels);
                return labels;

            }

            template<typename ValueType, typename StateType>
            storm::storage::BitVector FigaroNextStateGenerator<ValueType, StateType>::evaluateObservationLabels(
                    storm::generator::CompressedState const &state) const {
                // TODO consider to avoid reloading by computing these bitvectors in an earlier build stage
//                unpackStateIntoEvaluator(state, this->variableInformation, *this->evaluator);

                storm::storage::BitVector result(10);
//                                                 program.getNumberOfObservationLabels() * 64);
//                for (uint64_t i = 0; i < program.getNumberOfObservationLabels(); ++i) {
//                    result.setFromInt(64*i,64,this->evaluator->asInt(program.getObservationLabels()[i].getStatePredicateExpression()));
//                }
                return result;
            }

            template<typename ValueType, typename StateType>
            void FigaroNextStateGenerator<ValueType, StateType>::printhello() {
                std::cout << "\nHello world for figaro next state generator\n";
            }

            template<typename ValueType, typename StateType>
            std::shared_ptr<storm::storage::sparse::ChoiceOrigins>
            FigaroNextStateGenerator<ValueType, StateType>::generateChoiceOrigins(
                    std::vector<boost::any> &dataForChoiceOrigins) const {
//                if (!this->getOptions().isBuildChoiceOriginsSet())
                {
                    return nullptr;
                }

//                std::vector<uint_fast64_t> identifiers;
//                identifiers.reserve(dataForChoiceOrigins.size());
//
//                std::map<CommandSet, uint_fast64_t> commandSetToIdentifierMap;
//                    // The empty commandset (i.e., the choices without origin) always has to get identifier getIdentifierForChoicesWithNoOrigin() -- which is assumed to be 0
//                STORM_LOG_ASSERT(storm::storage::sparse::ChoiceOrigins::getIdentifierForChoicesWithNoOrigin() == 0, "The no origin identifier is assumed to be zero");
//                commandSetToIdentifierMap.insert(std::make_pair(CommandSet(), 0));
//                uint_fast64_t currentIdentifier = 1;
//                for (boost::any& originData : dataForChoiceOrigins) {
//                    STORM_LOG_ASSERT(originData.empty() || boost::any_cast<CommandSet>(&originData) != nullptr, "Origin data has unexpected type: " << originData.type().name() << ".");
//
//                    CommandSet currentCommandSet = originData.empty() ? CommandSet() : boost::any_cast<CommandSet>(std::move(originData));
//                    auto insertionRes = commandSetToIdentifierMap.insert(std::make_pair(std::move(currentCommandSet), currentIdentifier));
//                    identifiers.push_back(insertionRes.first->second);
//                    if (insertionRes.second) {
//                        ++currentIdentifier;
//                    }
//                }
//
//                std::vector<CommandSet> identifierToCommandSetMapping(currentIdentifier);
//                for (auto const& setIdPair : commandSetToIdentifierMap) {
//                    identifierToCommandSetMapping[setIdPair.second] = setIdPair.first;
//                }
//
//                return std::make_shared<storm::storage::sparse::PrismChoiceOrigins>(std::make_shared<storm::prism::Program>(program), std::move(identifiers), std::move(identifierToCommandSetMapping));
            }
            template<typename ValueType, typename StateType>
            bool FigaroNextStateGenerator<ValueType, StateType>::statehasFailLabel(
                    storm::generator::CompressedState const &compstate){
                bool isFailLabel = false;
                for (auto const &booleanVariable: this->variableInformation.booleanVariables) {
                    if (figaromodel->failure_variable_names.find(booleanVariable.variable.getName()) !=
                        figaromodel->failure_variable_names.end()) {
                        isFailLabel = compstate.get(booleanVariable.bitOffset);
                        if (isFailLabel){
                            return true;
                        }
                    }

                }
                return false;
            }

            template<typename ValueType, typename StateType>
            size_t FigaroNextStateGenerator<ValueType, StateType>::ComputeStateRelevanceAttribute(
                    storm::generator::CompressedState const &compstate){

                size_t relevance = 0;
                size_t total_elements = 0;

                for (auto const &booleanVariable: this->variableInformation.booleanVariables) {
                    std::string name = booleanVariable.variable.getName();
                    if (boost::starts_with(name,"relevant_evt_OF_")) {
                        total_elements += 1;
                        relevance += compstate.get(booleanVariable.bitOffset);
                    }
                }
                return total_elements - relevance;
//                return relevance;
            }




            template<typename ValueType, typename StateType>
            void FigaroNextStateGenerator<ValueType, StateType>::retreiveFigaroModelState(
                    storm::generator::CompressedState &compstate,
                    storm::generator::CompressedState &symmetricstate,
                    storm::generator::CompressedState const &loadedState) {

                figaromodel->runInteractions();
                auto dummy = figaromodel->showFireableOccurrences();
                figaromodel->updateFailureStates();
                for (auto const &booleanVariable: this->variableInformation.booleanVariables) {
                    if (figaromodel->failure_variable_names.find(booleanVariable.variable.getName()) !=
                        figaromodel->failure_variable_names.end()) {
//                        std::cout << ">>>>>>>>>>>" << booleanVariable.variable.getName() << "((((()))))"
//                                  << booleanVariable.bitOffset << "<<<<<<<<<<<<<<<";
                        compstate.set(booleanVariable.bitOffset, figaromodel->boolFailureState.at(
                                figaromodel->mFigarofailureelementindex[booleanVariable.variable.getName()]));
//                    std::cout << "\nI come hereeeee" << booleanVariable.variable.getName()<<figaromodel->boolFailureState.at(
//                            figaromodel->mFigarofailureelementindex[booleanVariable.variable.getName()])<<":::"<<figaromodel->mFigarofailureelementindex[booleanVariable.variable.getName()]<<":::";
                    } else {
//                        std::cout << ">>>>>>>>>>>" << booleanVariable.variable.getName() << "((((()))))"
//                                  << booleanVariable.bitOffset << "<<<<<<<<<<<<<<<";
//                std::cout << "\nI come here" << booleanVariable.variable.getName();
                        compstate.set(booleanVariable.bitOffset, figaromodel->boolState.at(
                                figaromodel->mFigaroboolelementindex[booleanVariable.variable.getName()]));
                    }
                }
                for (auto const &IntegerVariable: this->variableInformation.integerVariables) {
//                    std::cout<<"\nI come here"<<IntegerVariable.variable.getName();
                    if (figaromodel->enum_variables_names.find(IntegerVariable.variable.getName()) !=
                        figaromodel->enum_variables_names.end()) {
                        compstate.setFromInt(IntegerVariable.bitOffset, IntegerVariable.bitWidth,
                                             figaromodel->enumState.at(
                                                     figaromodel->mFigaroenumelementindex[IntegerVariable.variable.getName()]) -
                                             IntegerVariable.lowerBound);

//                         std::cout<<IntegerVariable.variable.getName()<<" : "<<figaromodel->enumState.at(figaromodel->mFigaroenumelementindex[IntegerVariable.variable.getName()])<<"            offset:                "<<IntegerVariable.bitOffset<<"      bitwidth:       "<<IntegerVariable.bitWidth<<"  Lower bound "<<IntegerVariable.lowerBound<< std::endl;
                    } else if (figaromodel->float_variables_names.find(IntegerVariable.variable.getName()) !=
                               figaromodel->float_variables_names.end()) {
//                        figaromodl-> compstate
//                        std::uint64_t temp;
//                        std::memcpy(&temp,
//                                    &figaromodel->floatState[figaromodel->mFigarofloatelementindex[IntegerVariable.variable.getName()]], 8);
//                        compstate.setFromInt(IntegerVariable.bitOffset, IntegerVariable.bitWidth, temp - IntegerVariable.lowerBound);

                        unsigned char temp[sizeof(double)];

                        std::memcpy(temp,
                                    &figaromodel->floatState[figaromodel->mFigarofloatelementindex[IntegerVariable.variable.getName()]],
                                    sizeof(double));
                        int bits[64];
                        for (int j = 0; j < 8; j++) {
                            for (int i = 0; i < 8; i++) {
                                bits[j * 8 + i] = (temp[j] & (0b00000001 << i)) != 0;
//                            std::cout<<bits[j*8 + i];
                            }
                        }
                        int bit_index = 0;
                        for (int count = IntegerVariable.bitOffset;
                             count <= IntegerVariable.bitOffset + IntegerVariable.bitWidth; count++) {
                            compstate.set(count, bits[bit_index] != 0);
                            bit_index++;
                        }
                    } else {

                        compstate.setFromInt(IntegerVariable.bitOffset, IntegerVariable.bitWidth,
                                             figaromodel->intState.at(
                                                     figaromodel->mFigarointelementindex[IntegerVariable.variable.getName()]) -
                                             IntegerVariable.lowerBound);
                    }
//                    std::cout<<std::endl<<figaromodel->intState[figaromodel->nb_failures_OF_Failure_counter]<<std::endl;
                }
                //Now we have the next state from Figaro model; we see if their is a difference from the pervious state
                //If there is a difference, then reflect this difference in all variables

                symmetricstate = compstate;
                bool changed = false;
                size_t changedBit = 0;
                for (auto symmetrygroup : symmetries->augmentedSymmetries) {

                    auto tempSymmGroup = symmetrygroup;
//                    std::cout << std::endl;
                    for (auto elem : tempSymmGroup) {
                        if (symmetricstate.get(symmetries->elemntToBitVectorLocation[elem]) !=
                            loadedState.get(symmetries->elemntToBitVectorLocation[elem])) {
                            changed = true;
                            changedBit = symmetries->elemntToBitVectorLocation[elem];
                            break;
                            std::cout << elem << "----------" << symmetries->elemntToBitVectorLocation[elem]<< "----------";
                            //add an error check. Only one bit should be changed in successive states
//                            break;

                        }
                    }
                    if (changed) {
                        auto tempsymmGroup = symmetrygroup;
                        for (auto elem : tempSymmGroup) {
                            //This will work only for booelan variable; implement all other variable types.
                            symmetricstate.set(symmetries->elemntToBitVectorLocation[elem], symmetricstate.get(changedBit));
                        }
                    }
                    changed = false;
                }

            }

            template<typename ValueType, typename StateType>
            void FigaroNextStateGenerator<ValueType, StateType>::retreiveFigaroModelState(
                    storm::generator::CompressedState &compstate) {
                figaromodel->runInteractions();
                auto dummy = figaromodel->showFireableOccurrences();
                figaromodel->updateFailureStates();
                for (auto const &booleanVariable: this->variableInformation.booleanVariables) {
                    if (figaromodel->failure_variable_names.find(booleanVariable.variable.getName()) !=
                        figaromodel->failure_variable_names.end()) {
//                        std::cout << ">>>>>>>>>>>" << booleanVariable.variable.getName() << "((((()))))"
//                                  << booleanVariable.bitOffset << "<<<<<<<<<<<<<<<";
                        compstate.set(booleanVariable.bitOffset, figaromodel->boolFailureState.at(
                                figaromodel->mFigarofailureelementindex[booleanVariable.variable.getName()]));
//                    std::cout << "\nI come hereeeee" << booleanVariable.variable.getName()<<figaromodel->boolFailureState.at(
//                            figaromodel->mFigarofailureelementindex[booleanVariable.variable.getName()])<<":::"<<figaromodel->mFigarofailureelementindex[booleanVariable.variable.getName()]<<":::";
                    } else {
//                        std::cout << ">>>>>>>>>>>" << booleanVariable.variable.getName() << "((((()))))"
//                                  << booleanVariable.bitOffset << "<<<<<<<<<<<<<<<";
//                std::cout << "\nI come here" << booleanVariable.variable.getName();
                        compstate.set(booleanVariable.bitOffset, figaromodel->boolState.at(
                                figaromodel->mFigaroboolelementindex[booleanVariable.variable.getName()]));
                    }
                }
                for (auto const &IntegerVariable: this->variableInformation.integerVariables) {
//                    std::cout<<"\nI come here"<<IntegerVariable.variable.getName();
                    if (figaromodel->enum_variables_names.find(IntegerVariable.variable.getName()) !=
                        figaromodel->enum_variables_names.end()) {
                        compstate.setFromInt(IntegerVariable.bitOffset, IntegerVariable.bitWidth,
                                             figaromodel->enumState.at(
                                                     figaromodel->mFigaroenumelementindex[IntegerVariable.variable.getName()]) -
                                             IntegerVariable.lowerBound);

//                         std::cout<<IntegerVariable.variable.getName()<<" : "<<figaromodel->enumState.at(figaromodel->mFigaroenumelementindex[IntegerVariable.variable.getName()])<<"            offset:                "<<IntegerVariable.bitOffset<<"      bitwidth:       "<<IntegerVariable.bitWidth<<"  Lower bound "<<IntegerVariable.lowerBound<< std::endl;
                    } else if (figaromodel->float_variables_names.find(IntegerVariable.variable.getName()) !=
                               figaromodel->float_variables_names.end()) {
//                        figaromodl-> compstate
//                        std::uint64_t temp;
//                        std::memcpy(&temp,
//                                    &figaromodel->floatState[figaromodel->mFigarofloatelementindex[IntegerVariable.variable.getName()]], 8);
//                        compstate.setFromInt(IntegerVariable.bitOffset, IntegerVariable.bitWidth, temp - IntegerVariable.lowerBound);

                        unsigned char temp[sizeof(double)];

                        std::memcpy(temp,
                                    &figaromodel->floatState[figaromodel->mFigarofloatelementindex[IntegerVariable.variable.getName()]],
                                    sizeof(double));
                        int bits[64];
                        for (int j = 0; j < 8; j++) {
                            for (int i = 0; i < 8; i++) {
                                bits[j * 8 + i] = (temp[j] & (0b00000001 << i)) != 0;
//                            std::cout<<bits[j*8 + i];
                            }
                        }
                        int bit_index = 0;
                        for (int count = IntegerVariable.bitOffset;
                             count <= IntegerVariable.bitOffset + IntegerVariable.bitWidth; count++) {
                            compstate.set(count, bits[bit_index] != 0);
                            bit_index++;
                        }
                    } else {

                        compstate.setFromInt(IntegerVariable.bitOffset, IntegerVariable.bitWidth,
                                             figaromodel->intState.at(
                                                     figaromodel->mFigarointelementindex[IntegerVariable.variable.getName()]) -
                                             IntegerVariable.lowerBound);
                    }
//                    std::cout<<std::endl<<figaromodel->intState[figaromodel->nb_failures_OF_Failure_counter]<<std::endl;
                }

//                std::cout<<StateToIdCallback(compstate);
//                exit(2);
            }


            template<typename ValueType, typename StateType>
            void FigaroNextStateGenerator<ValueType, StateType>::unpackStateIntoFigaroModel(
                    storm::generator::CompressedState const &compstate) {

                for (auto const &booleanVariable : this->variableInformation.booleanVariables) {
                    if (figaromodel->failure_variable_names.find(booleanVariable.variable.getName()) !=
                        figaromodel->failure_variable_names.end()) {
                        figaromodel->boolFailureState[figaromodel->mFigarofailureelementindex[booleanVariable.variable.getName()]] = compstate.get(
                                booleanVariable.bitOffset);
                    } else {
                        figaromodel->boolState[figaromodel->mFigaroboolelementindex[booleanVariable.variable.getName()]] = compstate.get(
                                booleanVariable.bitOffset);
                    }
                }

                for (auto const &integerVariable : this->variableInformation.integerVariables) {
                    if (figaromodel->enum_variables_names.find(integerVariable.variable.getName()) !=
                        figaromodel->enum_variables_names.end()) {
                        figaromodel->enumState[figaromodel->mFigaroenumelementindex[integerVariable.variable.getName()]] = (
                                compstate.getAsInt(integerVariable.bitOffset, integerVariable.bitWidth) +
                                integerVariable.lowerBound);
//                    std::cout<<integerVariable.variable.getName()<<" : "<<(compstate.getAsInt(integerVariable.bitOffset, integerVariable.bitWidth))<<"         offset:      "<<integerVariable.bitOffset<<"          bitwidth         "<<integerVariable.bitWidth<<"  Lower bound "<<integerVariable.lowerBound<<std::endl;
//
                    } else if (figaromodel->float_variables_names.find(integerVariable.variable.getName()) !=
                               figaromodel->float_variables_names.end()) {
//                    std::uint64_t temp = (compstate.getAsInt(integerVariable.bitOffset, integerVariable.bitWidth) + integerVariable.lowerBound);

////                    statevector -> figaromodel
//                    std::memcpy(&figaromodel->intState[figaromodel->mFigarofloatelementindex[integerVariable.variable.getName()]], &temp, 8);
                        unsigned char temp[sizeof(double)];
                        int count = 0;
                        for (int i = 0; i < sizeof(double); i++) {
                            for (int j = 0; j < sizeof(double); j++) {
                                temp[i] = (temp[i] & ~(0b00000001 << j)) |
                                          ((compstate.get(integerVariable.bitOffset + count) != 0) << j);
                                count++;
                            }
                        }
                        //se

//                    for (int count = 0; count < 64; count++ )
//                        {
//                        temp.set(count, compstate.get(integerVariable.bitOffset + count));
//                        }
//                    std::cout<< integerVariable.bitWidth;
//                    std::cout<<sizeof(temp);
//                    std::cout<<integerVariable.variable.getName();
                        std::memcpy(
                                &figaromodel->floatState[figaromodel->mFigarofloatelementindex[integerVariable.variable.getName()]],
                                &temp, sizeof(double));

                    } else {
                        figaromodel->intState[figaromodel->mFigarointelementindex[integerVariable.variable.getName()]] = (
                                compstate.getAsInt(integerVariable.bitOffset, integerVariable.bitWidth) +
                                integerVariable.lowerBound);
                    }
                }

//                std::cout << std::endl << "printedstate" << std::endl;
//                figaromodel->printState();
            }

            template<typename ValueType, typename StateType>
            void FigaroNextStateGenerator<ValueType, StateType>::printmenue(
                    std::vector<std::pair<storm::generator::CompressedState,storm::generator::CompressedState>> menuestates,
                    std::vector<std::tuple<int, double, std::string, int, std::string>> menue,
                    storm::generator::CompressedState compstate) {

                for (auto i = 0; i < menue.size(); i++) {
                    std::cout << "(";
                    for (auto j = 0; j < figaromodel->boolState.size(); j++) {
                        std::cout << compstate.get(j);
                    }
                    std::cout << ") --> ";
                    std::cout << "action " << std::get<0>(menue[i]) << " rate " << std::get<1>(menue[i]) << " type "
                              << std::get<2>(menue[i]) << "-->";
                    std::cout << "(";
                    for (auto j = 0; j < figaromodel->boolState.size(); j++) {
                        std::cout << menuestates[i].first.get(j);
                    }

                    std::cout << ")\n";
                }
            }

            template<typename ValueType, typename StateType>
            void FigaroNextStateGenerator<ValueType, StateType>::printinstmenue(
                    std::vector<std::pair<storm::generator::CompressedState,storm::generator::CompressedState>> menuestates,
                    std::vector<std::pair<std::string, double>> menue, storm::generator::CompressedState compstate) {

                for (auto i = 0; i < menue.size(); i++) {
                    std::cout << "(";
                    for (auto j = 0; j < figaromodel->boolState.size(); j++) {
                        std::cout << compstate.get(j);
                    }
//                std::cout<<") --> ";
//                std::cout<<"action "<<std::get<0>(menue[i])<<" rate "<<std::get<1>(menue[i])<<" type  INST-->";
//                std::cout<<"(";
                    for (auto j = 0; j < figaromodel->boolState.size(); j++) {
                        std::cout << menuestates[i].first.get(j);
                    }

                    std::cout << ")\n";
                }
            }

            template<typename ValueType, typename StateType>
            std::string FigaroNextStateGenerator<ValueType, StateType>::toBinary(int n, int number_of_digits) {
                std::string r;
                do {
                    r = (n % 2 == 0 ? "0" : "1") + r;
                    n /= 2;
                }
                while (n != 0);
                if (r.size() == number_of_digits) {
                    return r;
                } else {
//                    for (int i = 0 ; i <= number_of_digits - r.size() ; i ++)
                    while (r.size() != number_of_digits) { r = "0" + r; }
//                    std::cout<<r;
                    return r;
                }
            }


            template<typename ValueType, typename StateType>
            std::vector<std::pair<std::string, double>>
            FigaroNextStateGenerator<ValueType, StateType>::create_inst_menue(
                    std::vector<std::tuple<int, double, std::string, int, std::string>> fireableOccurrences,
                    std::vector<std::set<std::string>>& instTransitionLabels) {
                std::vector<std::pair<std::string, double>> ins_menue = {};
                std::unordered_set<int> traversed_elements = {};
//            std::cout<<"\n---------->";
                std::map<std::string, std::pair<std::string, double>> inst_transition_maping;
                std::map<std::string, std::string> tmptransitionlabels;
                std::vector<std::string> indexoftransition = {};
                int nrPhaseLeaves = 0;
                std::string phase_string;
                for (auto &myTuple : fireableOccurrences) {

                    if(std::get<4>(myTuple).substr(std::get<4>(myTuple).size()-6) =="_start"){ // other component names can have _start in their names so we must confirm that we have chosen a phase leaf
                        nrPhaseLeaves = nrPhaseLeaves+1;
                        if (nrPhaseLeaves==1){
                            phase_string += std::to_string(std::get<0>(myTuple));
                        }
                        else{
                           phase_string += ","+ std::to_string(std::get<0>(myTuple));
                        }
                    }
                }
                if( fireableOccurrences.size()==nrPhaseLeaves){
                    ins_menue.push_back(make_pair(phase_string, 1.0));
                    return ins_menue;
                }

                for (auto &myTuple : fireableOccurrences) {

                    if (fireableOccurrences.size() == 1 && std::get<1>(myTuple) == 1) { // to accomodate phase leaves
                        std::string empty_string;
                        empty_string += std::to_string(std::get<0>(myTuple));
                        double prob = std::get<1>(myTuple);
                        ins_menue.push_back(make_pair(empty_string, prob));
                        return ins_menue;
                    }


                    if (traversed_elements.find(std::get<3>(myTuple)) != traversed_elements.end()) {
                        inst_transition_maping[std::to_string(std::get<3>(myTuple)) + "0"] =
                                make_pair(std::to_string(std::get<0>(myTuple)), std::get<1>(myTuple));
                        indexoftransition.push_back(std::to_string(std::get<3>(myTuple)));
                        tmptransitionlabels[std::to_string(std::get<0>(myTuple))] = std::get<4>(myTuple);

                    } else {
                        traversed_elements.insert(std::get<3>(myTuple));
                        inst_transition_maping[std::to_string(std::get<3>(myTuple)) + "1"] = make_pair(
                                std::to_string(std::get<0>(myTuple)), std::get<1>(myTuple));
                        tmptransitionlabels[std::to_string(std::get<0>(myTuple))] = std::get<4>(myTuple);
                    }
                }
//            std::cout<<"<<<xxxx<<<<<<<";
//            for (auto const& imap: inst_transition_maping)
//                {
//                std::cout<<"\n"<<imap.first<<"       "<<imap.second.first<< "        "<<imap.second.second<<"\n" ;
//                }


                for (int menue_size = 0; menue_size < pow(2, 0.5 * fireableOccurrences.size()); ++menue_size) {
                    std::string binary = toBinary(menue_size, 0.5 * fireableOccurrences.size());
                    std::string empty_string;
                    double prob = 1;
                    for (int j = 0; j < binary.size(); j++) {
                        if (binary.at(j) == '1') {
                            empty_string += (inst_transition_maping[indexoftransition.at(j) + "1"].first);
                            prob *= (inst_transition_maping[indexoftransition.at(j) + "1"].second);
                            if (j < binary.size() - 1) {
                                empty_string += ",";
                            }
                        } else {
                            empty_string += (inst_transition_maping[indexoftransition.at(j) + "0"].first);
                            prob *= (inst_transition_maping[indexoftransition.at(j) + "0"].second);
                            if (j < binary.size() - 1) {
                                empty_string += ",";
                            }
                        }
                    }
//                std::cout<<"\n    "<<menue_size<<"   "<<empty_string<<"       "<< prob<<"\n";
                    ins_menue.push_back(make_pair(empty_string, prob));
//                std::cout<<"\n--->"<<empty_string;

                }
                int transitionNumber = 0;
                int labelNumber = 0;
                instTransitionLabels.resize(ins_menue.size());
                for(auto transitions : ins_menue){
                    std::stringstream temp(transitions.first);
                    while (temp.good()){
                        std::string tempLabel;
                        getline(temp, tempLabel, ',' );
//                        std::cout<<tempLabel;
//                        std::cout<<tmptransitionlabels[tempLabel]<<std::endl;
                        instTransitionLabels[transitionNumber].insert(tmptransitionlabels[tempLabel]);
                    }
                    transitionNumber += 1;
                }
                return ins_menue;
            }

            template<typename ValueType, typename StateType>
            std::vector<StateType> FigaroNextStateGenerator<ValueType, StateType>::getInitialStatesApproximation(
                    StateToIdCallbackapproximation const &stateToIdCallback) {
                std::vector<StateType> initialStateIndices;
                storm::generator::CompressedState initialState(this->variableInformation.getTotalBitOffset(true));
                figaromodel->init();
                figaromodel->runInteractions();
                figaromodel->updateFailureStates();
                retreiveFigaroModelState(initialState);

                FigaroStatePointer initialStateApproximation = std::make_shared<storm::figaro::storage::FigaroState<ValueType>>(
                        initialState,initialState, 0);
                StateType id = stateToIdCallback(initialStateApproximation);
                initialStateApproximation->setId(id);
                initialStateIndices.push_back(id);
                return initialStateIndices;
            }

            template<typename ValueType, typename StateType>
            storm::generator::StateBehavior<ValueType, StateType>
            FigaroNextStateGenerator<ValueType, StateType>::expandApproximation(
                    StateToIdCallbackapproximation const &stateToIdCallback) {
                // Prepare the result, in case we return early.
                storm::generator::StateBehavior<ValueType, StateType> result;
                result.setExpanded(true);
                //Todo: Add state reward functionality later.
                //Todo: return early in case of terminanl expression.
                //we have unique choice (0) for each state and it is always Markovian
                bool markovian = false;
                std::vector<std::tuple<int, double, std::string, int, std::string>> menue = figaromodel->showFireableOccurrences();
                figaromodel->updateFailureStates();
                if (menue.size() == 0) {
                    storm::generator::Choice<ValueType, StateType> choice(0, true);
                    // Add self loop
                    /***************************

                     * **************************************/
                    FigaroStatePointer figState = std::make_shared<storm::figaro::storage::FigaroState<ValueType>>(
                            *this->state,*this->symmetricState, 0);
                    choice.addProbability(stateToIdCallback(figState), storm::utility::one<ValueType>());
                    STORM_LOG_TRACE("Added self loop for " << *this->state);
                    // No further exploration required
                    result.addChoice(std::move(choice));
                    result.setExpanded();
                    return result;
                }
                std::vector<storm::generator::CompressedState> menuestates;
                double totalExitrate = 0;
                if (std::get<2>(menue[0]) == "EXP") {
                    markovian = true; //markovian choice
                } else if (std::get<2>(menue[0]) == "INS") {
                    markovian = false; //probablistic choice
                } else {
                    std::cout << "The choice is intelligible\n";
                    exit(2); // add storm exception here to indicate that the choice is intelligible
                }
                storm::generator::Choice<ValueType> choice(0, markovian);

                if (std::get<2>(menue[0]) == "EXP") {

                    storm::generator::CompressedState tempstate(this->variableInformation.getTotalBitOffset(true));
                    storm::generator::CompressedState tempsymmetricstate(this->variableInformation.getTotalBitOffset(true));
                    for (auto i = 0; i < menue.size(); ++i) {
                        if (std::get<1>(menue[i]) == 0) {
                            continue;
                        }
                        totalExitrate += std::get<1>(menue[i]);
//                    figaromodel->printState();
                        unpackStateIntoFigaroModel(*this->state);
                        figaromodel->runInteractions();
                        figaromodel->updateFailureStates();
//                    std::cout<<"\nafter unpackingg\n";
//                    figaromodel->printState();
                        figaromodel->fireOccurrence(std::get<0>(menue[i]));
                        figaromodel->runInteractions();
                        figaromodel->updateFailureStates();
//                    std::cout<< "herere";
                        retreiveFigaroModelState(tempstate);
//                    std::cout<< "herere3";
                        menuestates.push_back(tempstate);
                    }
//                    printmenue(menuestates, menue, *this->state);
                    int count = 0;
                    for (auto i = 0; i < menue.size(); ++i) {
                        if (std::get<1>(menue[i]) == 0) {
                            continue;
                        }
                        FigaroStatePointer figState = std::make_shared<storm::figaro::storage::FigaroState<ValueType>>(
                                menuestates[count],menuestates[count], 0);
                        choice.addProbability(stateToIdCallback(figState), std::get<1>(menue[i]));
                        choice.addLabel(std::get<4>(menue[i]));
//                        std::cout<<std::get<4>(menue[i])<<std::endl;
//                        for(auto it = choice.getLabels().begin(); it != choice.getLabels().end(); it++) { std::cout << "-----" << *it << "-----"; }
//                        std::cout<<std::endl;
                        count = count + 1;
                    }
                } else if (std::get<2>(menue[0]) == "INS") {

                    storm::generator::CompressedState tempstate(this->variableInformation.getTotalBitOffset(true));

                    std::vector<std::set<std::string>> instTransitions;
                    std::vector<std::pair<std::string, double>> inst_menue = create_inst_menue(menue, instTransitions);
                    for (auto i = 0; i < inst_menue.size(); ++i) {
                        if (inst_menue[i].second == 0) {
                            continue;
                        }
                        totalExitrate += inst_menue[i].second;
                        unpackStateIntoFigaroModel(*this->state);
//                        figaromodel->runInteractions();
                        figaromodel->fireinsttransitiongroup(inst_menue[i].first);
                        figaromodel->runInteractions();
                        figaromodel->updateFailureStates();
                        retreiveFigaroModelState(tempstate);
                        menuestates.push_back(tempstate);
                    }
//                    printinstmenue(menuestates, inst_menue, *this->state);
                    int count = 0;
                    for (auto i = 0; i < inst_menue.size(); ++i) {
                        if (inst_menue[i].second == 0) {
                            continue;
                        }
                        FigaroStatePointer figState = std::make_shared<storm::figaro::storage::FigaroState<ValueType>>(
                                menuestates[count],menuestates[count], 0);
                        choice.addProbability(stateToIdCallback(figState), inst_menue[i].second);
                        count = count + 1;
                    }
                } else {
                    std::cout << "The choice is intelligible\n";
                    exit(2); // add storm exception here to indicate that the choice is intelligible
                }
                //can also merge in previous loop
//                insert explored states to state index

                //Get all choices for the state
                std::vector<storm::generator::Choice<ValueType>> allChoices;
                allChoices.push_back(choice);
//                std::cout<<"\nNow I am in expand function\n";
                // to do: I have single choice during refactoring remove this approach and directly add choice to results.
//                for (auto& choice : allChoices) {
//                    result.addChoice(std::move(choice));
//                }
                result.addChoice(std::move(choice));
                return result;
            }

            template<typename ValueType, typename StateType>
            storm::generator::StateBehavior<ValueType, StateType>
            FigaroNextStateGenerator<ValueType, StateType>::expandApproximation(
                    StateToIdCallbackapproximation const &stateToIdCallback,
                    storm::figaro::storage::StatesMap<ValueType, StateType> &stateTransitionMap) {
                // Prepare the result, in case we return early.

                storm::generator::StateBehavior<ValueType, StateType> result;
                result.setExpanded(true);
                //Todo: Add state reward functionality later.
                //Todo: return early in case of terminanl expression.
                //we have unique choice (0) for each state and it is always Markovian
                bool markovian = false;
                std::vector<std::tuple<int, double, std::string, int, std::string>> menue = figaromodel->showFireableOccurrences();
                figaromodel->updateFailureStates();

                bool isNonRepairableanalysis = this->isTopNonRepairSet;
                if (menue.size() == 0 or (isNonRepairableanalysis and statehasFailLabel(*this->state))) {
                    storm::generator::Choice<ValueType, StateType> choice(0, true);

                    // Add self loop
                    /***************************

                     * **************************************/
                    FigaroStatePointer figState = std::make_shared<storm::figaro::storage::FigaroState<ValueType>>(
                            *this->state,*this->symmetricState, 0);
                    choice.addProbability(stateToIdCallback(figState), storm::utility::one<ValueType>());
                    STORM_LOG_TRACE("Added self loop for " << *this->state);
                    if(stateTransitionMap.isSimulationPhase()) {
                        stateTransitionMap.addState(stateToIdCallback(figState));
                        if(isNonRepairableanalysis and statehasFailLabel(*this->state)) {
                            stateTransitionMap.failLabelledStates.insert(stateToIdCallback(figState));
                        }
                    }
                    // No further exploration required
                    result.addChoice(std::move(choice));
                    result.setExpanded();
                    return result;
                }
                std::vector<std::pair<storm::generator::CompressedState,storm::generator::CompressedState>> menuestates;
                double totalExitrate = 0;
                if (std::get<2>(menue[0]) == "EXP") {
                    markovian = true; //markovian choice
                } else if (std::get<2>(menue[0]) == "INS") {
                    markovian = false; //probablistic choice
                } else {
                    std::cout << "The choice is intelligible\n";
                    exit(2); // add storm exception here to indicate that the choice is intelligible
                }
                storm::generator::Choice<ValueType> choice(0, markovian);

                if (std::get<2>(menue[0]) == "EXP") {

                    storm::generator::CompressedState tempstate(this->variableInformation.getTotalBitOffset(true));
                    storm::generator::CompressedState tempSymmetricState(this->variableInformation.getTotalBitOffset(true));
                    for (auto i = 0; i < menue.size(); ++i) {
                        if (std::get<1>(menue[i]) == 0) {
                            continue;
                        }
                        totalExitrate += std::get<1>(menue[i]);
//                    figaromodel->printState();
                        unpackStateIntoFigaroModel(*this->state);
                        figaromodel->runInteractions();
                        figaromodel->updateFailureStates();
//                    std::cout<<"\nafter unpackingg\n";
//                    figaromodel->printState();
                        figaromodel->fireOccurrence(std::get<0>(menue[i]));
                        figaromodel->runInteractions();
                        figaromodel->updateFailureStates();
//                    std::cout<< "herere";
                        retreiveFigaroModelState(tempstate,tempSymmetricState,*this->state);
//                    std::cout<< "herere3";
                        menuestates.push_back(std::make_pair(tempstate,tempSymmetricState));
                    }
//                    printmenue(menuestates, menue, *this->state);
                    int count = 0;
                    for (auto i = 0; i < menue.size(); ++i) {
                        if (std::get<1>(menue[i]) == 0) {
                            continue;
                        }
                        //We avoid self loops of states in case of symmetries enabled
                        if(*this->symmetricState == menuestates[count].second and symmetries->hasSymmetries()){
                            continue;
                        }

                        FigaroStatePointer figState = std::make_shared<storm::figaro::storage::FigaroState<ValueType>>(
                                menuestates[count].first,menuestates[count].second, 0);

                        choice.addProbability(stateToIdCallback(figState), std::get<1>(menue[i]));
                        count = count + 1;

                        if(stateTransitionMap.isSimulationPhase()) {
                            FigaroStatePointer originState = std::make_shared<storm::figaro::storage::FigaroState<ValueType>>(
                                    *this->state, *this->symmetricState, 0);
                            stateTransitionMap.insertTransition(stateToIdCallback(originState),
                                                                std::set<std::string>({std::get<4>(menue[i])}),
                                                                stateToIdCallback(figState));
                            stateTransitionMap.matrixToStateMapping.push_back(0);
                            stateTransitionMap.stateToMatrixMapping.push_back(0);
                        }

                    }
                } else if (std::get<2>(menue[0]) == "INS") {

                    storm::generator::CompressedState tempstate(this->variableInformation.getTotalBitOffset(true));
                    storm::generator::CompressedState tempSymmetricState(this->variableInformation.getTotalBitOffset(true));

                    std::vector<std::set<std::string>> instTransitions;
                    std::vector<std::pair<std::string, double>> inst_menue = create_inst_menue(menue, instTransitions);
                    //TODO: Generate vector of ins transition labels

                    for (auto i = 0; i < inst_menue.size(); ++i) {
                        if (inst_menue[i].second == 0) {
                            continue;
                        }
                        totalExitrate += inst_menue[i].second;
                        unpackStateIntoFigaroModel(*this->state);
//                        figaromodel->runInteractions();
                        figaromodel->fireinsttransitiongroup(inst_menue[i].first);
                        figaromodel->runInteractions();
                        figaromodel->updateFailureStates();
                        retreiveFigaroModelState(tempstate,tempSymmetricState,*this->state);
                        menuestates.push_back(std::make_pair(tempstate,tempSymmetricState));
                    }
//                    printinstmenue(menuestates, inst_menue, *this->state);
                    int count = 0;
                    for (auto i = 0; i < inst_menue.size(); ++i) {
                        if (inst_menue[i].second == 0) {
                            continue;
                        }
                        FigaroStatePointer figState = std::make_shared<storm::figaro::storage::FigaroState<ValueType>>(
                                menuestates[count].first,menuestates[count].second, 0);
                        choice.addProbability(stateToIdCallback(figState), inst_menue[i].second);
                        count = count + 1;
                        if(stateTransitionMap.isSimulationPhase()) {
                            FigaroStatePointer originState = std::make_shared<storm::figaro::storage::FigaroState<ValueType>>(
                                    *this->state, *this->symmetricState, 0);
                            stateTransitionMap.insertTransition(stateToIdCallback(originState), std::set<std::string>(instTransitions[i]),
                                                                stateToIdCallback(figState));
                            stateTransitionMap.matrixToStateMapping.push_back(0);
                            stateTransitionMap.stateToMatrixMapping.push_back(0);
                        }
                    }
                } else {
                    std::cout << "The choice is intelligible\n";
                    exit(2); // add storm exception here to indicate that the choice is intelligible
                }
                //can also merge in previous loop
//                insert explored states to state index

                //Get all choices for the state
//                TODO: shahid see if the following two lines are required
//                std::vector<storm::generator::Choice<ValueType>> allChoices;
//                allChoices.push_back(choice);
//                std::cout<<"\nNow I am in expand function\n";
                // to do: I have single choice during refactoring remove this approach and directly add choice to results.
//                for (auto& choice : allChoices) {
//                    result.addChoice(std::move(choice));
//                }
                result.addChoice(std::move(choice));
//                Compute the important state to be explored in the next iteration
                return result;
            }

            template<typename ValueType, typename StateType>
            storm::generator::CompressedState
            FigaroNextStateGenerator<ValueType, StateType>::maskstate(storm::generator::CompressedState &figarostate) {
                storm::generator::CompressedState result(this->variableInformation.getTotalBitOffset(true));

                for (int i = 0; i < figarostate.size(); i++) {
                    result.set(i, figarostate.get(i));
                }
                return result;
            }

            template
            class FigaroNextStateGenerator<double, uint32_t>;
        }
    }
}
