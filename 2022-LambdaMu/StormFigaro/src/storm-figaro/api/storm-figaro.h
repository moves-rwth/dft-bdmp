#pragma once
#include <stdlib.h>

#include <iostream>
#include <string>
#include "storm/models/symbolic/MarkovAutomaton.h"
#include "storm/builder/ExplicitModelBuilder.h"


#include "storm-figaro/generator/FigaroNextStateGenerator.h"

#include <random>
#include "storm/storage/SymbolicModelDescription.h"

#include "storm/storage/sparse/ModelComponents.h"
#include "storm/models/sparse/Ctmc.h"
#include "storm/models/sparse/Dtmc.h"
#include "storm/models/sparse/Ctmc.h"

#include "storm/models/sparse/StandardRewardModel.h"
#include "storm/builder/BuilderType.h"
#include "storm/builder/ExplicitModelBuilder.h"


#include "storm/utility/macros.h"
#include "storm/exceptions/NotSupportedException.h"

#include "storm-parsers/parser/AutoParser.h"
#include "storm-parsers/parser/DirectEncodingParser.h"
#include "storm-parsers/parser/ImcaMarkovAutomatonParser.h"

#include "storm/storage/SymbolicModelDescription.h"
#include "storm/storage/jani/ModelFeatures.h"

#include "storm/storage/sparse/ModelComponents.h"
#include "storm/models/sparse/Dtmc.h"
#include "storm/models/sparse/Ctmc.h"
#include "storm/models/sparse/Mdp.h"
#include "storm/models/sparse/Pomdp.h"
#include "storm/models/sparse/MarkovAutomaton.h"
#include "storm/models/sparse/StochasticTwoPlayerGame.h"
#include "storm/models/sparse/StandardRewardModel.h"

#include "storm/builder/DdPrismModelBuilder.h"
#include "storm/builder/DdJaniModelBuilder.h"
#include "storm/builder/BuilderType.h"

#include "storm/generator/PrismNextStateGenerator.h"
#include "storm/generator/JaniNextStateGenerator.h"

#include "storm/builder/ExplicitModelBuilder.h"
#include "storm/builder/jit/ExplicitJitJaniModelBuilder.h"

#include "storm/utility/macros.h"
#include "storm/exceptions/NotSupportedException.h"

#include "storm/api/export.h"
#include "storm/api/properties.h"
#include "storm/api/verification.h"
#include "storm-parsers/api/properties.h"
#include "storm-parsers/api/model_descriptions.h"
#include "storm/modelchecker/results/ExplicitQuantitativeCheckResult.h"
#include "storm/modelchecker/csl/SparseCtmcCslModelChecker.h"
#include "storm/modelchecker/csl/helper/SparseCtmcCslHelper.h"
    
#include "storm/api/transformation.h"
#include "storm/storage/expressions/ExpressionManager.h"
#include "storm/generator/VariableInformation.h"
#include "storm-dft/builder/DftExplorationHeuristic.h"



#include <stdlib.h>
#include <string>
#include "storm-figaro/model/FigaroModelTemplate.h"
#include "storm/models/symbolic/MarkovAutomaton.h"
#include "storm-figaro/api/storm-figaro.h"
//#include "storm-cli-utilities/cli.h"
//#include "storm-cli-utilities/model-handling.h"


#include "storm-figaro/generator/FigaroNextStateGenerator.h"
#include "storm-figaro/modelchecker/FigaroModelChecker.h"
#include <random>
#include "storm/storage/SymbolicModelDescription.h"

#include "storm/storage/sparse/ModelComponents.h"
#include "storm/models/sparse/Ctmc.h"
#include "storm/models/sparse/Dtmc.h"
#include "storm/models/sparse/Ctmc.h"

#include "storm/models/sparse/StandardRewardModel.h"
#include "storm/builder/BuilderType.h"
#include "storm/builder/ExplicitModelBuilder.h"


#include "storm/utility/macros.h"
#include "storm/exceptions/NotSupportedException.h"

#include "storm-parsers/parser/AutoParser.h"
#include "storm-parsers/parser/DirectEncodingParser.h"
#include "storm-parsers/parser/ImcaMarkovAutomatonParser.h"

#include "storm/storage/SymbolicModelDescription.h"
#include "storm/storage/jani/ModelFeatures.h"

#include "storm/storage/sparse/ModelComponents.h"
#include "storm/models/sparse/Dtmc.h"
#include "storm/models/sparse/Ctmc.h"
#include "storm/models/sparse/Mdp.h"
#include "storm/models/sparse/Pomdp.h"
#include "storm/models/sparse/MarkovAutomaton.h"
#include "storm/models/sparse/StochasticTwoPlayerGame.h"
#include "storm/models/sparse/StandardRewardModel.h"

#include "storm/builder/DdPrismModelBuilder.h"
#include "storm/builder/DdJaniModelBuilder.h"
#include "storm/builder/BuilderType.h"

#include "storm/generator/PrismNextStateGenerator.h"
#include "storm/generator/JaniNextStateGenerator.h"

#include "storm/builder/ExplicitModelBuilder.h"
#include "storm/builder/jit/ExplicitJitJaniModelBuilder.h"

#include "storm/utility/macros.h"
#include "storm/exceptions/NotSupportedException.h"

#include "storm/api/export.h"
#include "storm/api/properties.h"
#include "storm/api/verification.h"
#include "storm-parsers/api/properties.h"
#include "storm-parsers/api/model_descriptions.h"
#include "storm/modelchecker/results/ExplicitQuantitativeCheckResult.h"
#include "storm/modelchecker/csl/SparseCtmcCslModelChecker.h"
#include "storm/modelchecker/csl/helper/SparseCtmcCslHelper.h"

#include "storm/api/transformation.h"
#include "storm/storage/expressions/ExpressionManager.h"
#include "storm/generator/VariableInformation.h"
#include "storm-dft/builder/DftExplorationHeuristic.h"
#include "storm-figaro/builder/jit/JitFigaroBuilder.h"

namespace storm {
    namespace figaro {
        namespace api{

//            std::shared_ptr<storm::figaro::FigaroProgram> loadFigaroProgram(std::string, std::string);
            std::shared_ptr<storm::figaro::FigaroProgram> loadFigaroProgram(storm::figaro::builder::jit::JitFigaroBuilder<double>&);


            std::vector<std::string> parseXmlProperties(std::string filepath, std::vector<std::string> properties);
            std::deque<std::deque<std::set<std::string>>> parseYamsSimulationTraces(std::string);

            std::vector<std::shared_ptr<storm::logic::Formula const>> buildProperties(std::vector<std::string> properties);

            std::vector<storm::expressions::Variable> getFigaroIntegerVariables(std::shared_ptr<storm::figaro::FigaroProgram> figaroprogram);
            std::vector<storm::expressions::Variable> getFigaroBooleanVariables(std::shared_ptr<storm::figaro::FigaroProgram> figaroprogram);
            std::shared_ptr<storm::expressions::ExpressionManager> getFigaroExpresseionManager(std::shared_ptr<storm::figaro::FigaroProgram> figaroprogram);



            template<typename ValueType>
            std::shared_ptr<storm::models::sparse::Model<ValueType>>
            buildSparseModel( storm::figaro::FigaroProgram & model
                    //, maybe at some later development stage we provide build options through commnad line
                    //storm::builder::BuilderOptions const& options
            ) {
                // For expression Manager

                std::vector<storm::expressions::Variable> boolean_variables;
                std::vector<storm::expressions::Variable> integer_variables;


                auto manager = std::make_shared<storm::expressions::ExpressionManager>();

                for (auto & bool_var : model.mFigaroboolelementindex) {
                    boolean_variables.emplace_back(manager->declareBooleanVariable(bool_var.first));
                }
                for (auto & float_var : model.mFigarofloatelementindex) {

                    integer_variables.emplace_back(manager->declareIntegerVariable(float_var.first));
                }

                for (auto & int_var : model.mFigarointelementindex) {
                    integer_variables.emplace_back(manager->declareIntegerVariable(int_var.first));
                }
                for (auto & enum_var : model.mFigaroenumelementindex) {
                    integer_variables.emplace_back(manager->declareIntegerVariable(enum_var.first));
                }

                auto variable_info = std::make_shared<storm::generator::VariableInformation>(model, boolean_variables,integer_variables);


                std::shared_ptr<storm::figaro::generator::FigaroNextStateGenerator<ValueType, uint32_t>> generator = std::make_shared<storm::figaro::generator::FigaroNextStateGenerator<ValueType, uint32_t>>(model, *manager, *variable_info);
                storm::builder::ExplicitModelBuilder<ValueType> builder(generator);
                std::shared_ptr<storm::models::sparse::Model<ValueType>> built_model = builder.build();
                return built_model;
            }



            template<typename ValueType>
            //std::shared_ptr<storm::models::sparse::Model<ValueType>>
            typename storm::figaro::modelchecker::FigaroModelChecker<ValueType>::figaro_results
            analyzeFigaro(std::shared_ptr<storm::figaro::FigaroProgram> origfigaro, std::vector<std::shared_ptr<storm::logic::Formula const>> const& properties,
                        double approximationError = 0.0, storm::builder::ApproximationHeuristic approximationHeuristic = storm::builder::ApproximationHeuristic::DEPTH,
                        bool  printOutput = true, bool APPROXIMATION = false, bool topNoRepair = false )
            {



                storm::figaro::modelchecker::FigaroModelChecker<ValueType> modelChecker(printOutput);
                typename storm::figaro::modelchecker::FigaroModelChecker<ValueType>::figaro_results results = modelChecker.check(origfigaro, properties, approximationError, approximationHeuristic, true, APPROXIMATION, topNoRepair);
                if (printOutput) {
                    modelChecker.printTimings();
                    modelChecker.printResults(results);
                }

                return results;



//
//
//                std::shared_ptr<storm::models::sparse::Model<ValueType>> sparsemodel = storm::figaro::api::buildSparseModel<ValueType>(model);
//        std::shared_ptr<storm::models::sparse::Model<ValueType>> sparsemodelcopy = sparsemodel;
            //change MA to CTMC
//        sparsemodel->printModelInformationToStream(std::cout);
////          std::cout << sparsemodel->getTransitionMatrix() << std::endl;
////        auto ma = std::static_pointer_cast<storm::models::sparse::MarkovAutomaton<ValueType>>(sparsemodel);
//        storm::api::exportSparseModelAsDot(sparsemodel,"hello.dot");
//        storm::api::exportSparseModelAsDrn(sparsemodel,"hello.drn");
////
//        if(model.figaromodelhasinstransitions()) {
//         sparsemodel = storm::transformer::NonMarkovianChainTransformer<ValueType>::eliminateNonmarkovianStates(sparsemodel->template as<storm::models::sparse::MarkovAutomaton<ValueType>>(), storm::transformer::EliminationLabelBehavior::MergeLabels);
//        }
////        auto sparsemodel_new = storm::transformer::NonMarkovianChainTransformer<ValueType>::eliminateNonmarkovianStates(ma, storm::transformer::EliminationLabelBehavior::DeleteLabels);
//        //model check this sparse CTMC in next step
////        exit(3);
//        sparsemodel->printModelInformationToStream(std::cout);
////        exit(2);
////        storm::api::exportSparseModelAsDot(sparsemodel,"hello.dot");
////        std::string property_string = "Pmax=? [F[20,20] \"failed\"]";
////        std::string property_string = "Pmax=? [F<=100 \"failed\"]";
//        std::string property_string = "Pmax=? [F<=10000 \"failed\"]";
////        std::string property_string = "Pmax=? [F<=10000 \"failed\"]";
////        std::string property_string = "Pmax=? [F [10000, 10000] \"failed\"]";
//        auto properties = storm::api::parseProperties(property_string);
//        auto formulae = storm::api::extractFormulasFromProperties(properties);
//        auto ctmc = sparsemodel->template as<storm::models::sparse::Ctmc<ValueType>>();
//        auto checker = std::make_shared<storm::modelchecker::SparseCtmcCslModelChecker<storm::models::sparse::Ctmc<ValueType>>>(*ctmc);
//        auto result =
//        checker->check(storm::modelchecker::CheckTask<>(*(formulae[0]), false));
//        assert(result->isExplicitQuantitativeCheckResult());
//        auto quantRes = result->template asExplicitQuantitativeCheckResult<double>();
//        std::cout << quantRes[(*sparsemodel->getInitialStates().begin())] << std::endl;
//        result->writeToStream(std::cout);
//        return sparsemodelcopy;
        }
                    }//namespace api
        }//namespace figaro
}//namespace storm


