#include "FIGAROIOSettings.h"

#include "storm/settings/SettingsManager.h"
#include "storm/settings/SettingMemento.h"
#include "storm/settings/Option.h"
#include "storm/settings/OptionBuilder.h"
#include "storm/settings/ArgumentBuilder.h"
#include "storm/settings/Argument.h"
#include "storm/exceptions/IllegalArgumentValueException.h"
#include "storm/exceptions/InvalidSettingsException.h"
#include "storm/parser/CSVParser.h"

namespace storm {

    namespace settings {
        namespace modules {
            const std::string FIGAROIOSettings::moduleName = "figaro";
            
            const std::string FIGAROIOSettings::figaroFileOptionName = "figarofile";
            const std::string FIGAROIOSettings::figaroFileOptionShortame = "fi";
            const std::string FIGAROIOSettings::xmlFileOptionName = "analysis";
            const std::string FIGAROIOSettings::xmlFileOptionShortName = "a";
            const std::string FIGAROIOSettings::yamsMcrFileOptionName = "simulation-file";
            const std::string FIGAROIOSettings::yamsMcrFileOptionShortName = "mcr";
            const std::string FIGAROIOSettings::figaroToDotOptionName = "to-dot";
            const std::string FIGAROIOSettings::figaroToDotOptionShortName = "dot";
            const std::string FIGAROIOSettings::figaroToExplicitOptionName = "to-explicit";
            const std::string FIGAROIOSettings::figaroToExplicitOptionShortName = "drn";
            const std::string FIGAROIOSettings::outputtextFileOptionName = "result-text";
            const std::string FIGAROIOSettings::outputtextFileOptionShortName = "txt";
            const std::string FIGAROIOSettings::propertyOptionName = "prop";
            const std::string FIGAROIOSettings::propertyOptionShortName = "prop";
            
            const std::string FIGAROIOSettings::approximationErrorOptionName = "approximation";
            const std::string FIGAROIOSettings::approximationErrorOptionShortName = "approx";
            const std::string FIGAROIOSettings::approximationHeuristicOptionName = "approximationheuristic";
            const std::string FIGAROIOSettings::maxDepthOptionName = "maxdepth";
            const std::string FIGAROIOSettings::figaroStatisticsOptionName = "figaro-statistics";
            const std::string FIGAROIOSettings::figaroStatisticsOptionShortName = "figarostats";
            const std::string FIGAROIOSettings::SymmetryReductionFileOptionName = "symmetry-file";
            const std::string FIGAROIOSettings::SymmetryReductionFileOptionShortName = "symfile";
            const std::string FIGAROIOSettings::SymmetryReductionOptionName = "symmetryreduction";
            const std::string FIGAROIOSettings::SymmetryReductionOptionShortName = "symred";
            const std::string FIGAROIOSettings::figaroTopNonRepairableAnalysisOptionName = "top-nonrepairable";
            const std::string FIGAROIOSettings::figaroTopNonRepairableAnalysisOptionShortName = "topnonrep";



            FIGAROIOSettings::FIGAROIOSettings() : ModuleSettings(moduleName) {
                this->addOption(storm::settings::OptionBuilder(moduleName, figaroFileOptionName, false, "Parses the figaro program.").setShortName(figaroFileOptionShortame).addArgument(storm::settings::ArgumentBuilder::createStringArgument("filename", "path to file").addValidatorString(ArgumentValidatorFactory::createExistingFileValidator()).build()).build());
                this->addOption(storm::settings::OptionBuilder(moduleName, xmlFileOptionName, false, "Parse the XML file").setShortName(xmlFileOptionShortName).addArgument(storm::settings::ArgumentBuilder::createStringArgument("filename", "path to file").addValidatorString(ArgumentValidatorFactory::createExistingFileValidator()).build()).build());
                this->addOption(storm::settings::OptionBuilder(moduleName, yamsMcrFileOptionName, false, "Parse the YAMS simulation result file").setShortName(yamsMcrFileOptionShortName).addArgument(storm::settings::ArgumentBuilder::createStringArgument("filename", "path to file").addValidatorString(ArgumentValidatorFactory::createExistingFileValidator()).build()).build());
                this->addOption(storm::settings::OptionBuilder(moduleName, SymmetryReductionFileOptionName, false, "Parse the Symmetric elements file to exploit symmetric structure of Figaro model. Hint: Later add direct BDMP symmetry analysis support").setShortName(SymmetryReductionFileOptionShortName).addArgument(storm::settings::ArgumentBuilder::createStringArgument("filename", "path to file").addValidatorString(ArgumentValidatorFactory::createExistingFileValidator()).build()).build());
                this->addOption(storm::settings::OptionBuilder(moduleName, figaroToDotOptionName, false, "Destination for the figaro model dot output.").setShortName(figaroToDotOptionShortName).addArgument(storm::settings::ArgumentBuilder::createStringArgument("filename", "path to file").build()).build());
                this->addOption(storm::settings::OptionBuilder(moduleName, figaroToExplicitOptionName, false, "Destination for the results of analysis.").setShortName(figaroToExplicitOptionShortName).addArgument(storm::settings::ArgumentBuilder::createStringArgument("filename", "path to file").build()).build());
                this->addOption(storm::settings::OptionBuilder(moduleName, outputtextFileOptionName, false, "Destination for the figaro model drn output.").setShortName(outputtextFileOptionShortName).addArgument(storm::settings::ArgumentBuilder::createStringArgument("filename", "path to file").build()).build());
                this->addOption(storm::settings::OptionBuilder(moduleName, propertyOptionName, false, "Specifies the properties to be checked on the model.").setShortName(propertyOptionShortName)
                        .addArgument(storm::settings::ArgumentBuilder::createStringArgument("property or filename", "The formula or the file containing the formulas.").build())
                        .addArgument(storm::settings::ArgumentBuilder::createStringArgument("filter", "The names of the properties to check.").setDefaultValueString("all").makeOptional().build())
                        .build());
                this->addOption(storm::settings::OptionBuilder(moduleName, approximationErrorOptionName, false, "Approximation error allowed.").setShortName(
                                                                                                                                                             approximationErrorOptionShortName).addArgument(
                                                                                                                                                                                                            storm::settings::ArgumentBuilder::createDoubleArgument("error", "The relative approximation error to use.").addValidatorDouble(
                                                                                                                                                                                                                                                                                                                                           ArgumentValidatorFactory::createDoubleGreaterEqualValidator(0.0)).build()).build());
                this->addOption(storm::settings::OptionBuilder(moduleName, approximationHeuristicOptionName, false, "Set the heuristic used for approximation.").addArgument(storm::settings::ArgumentBuilder::createStringArgument("heuristic", "The name of the heuristic used for approximation.")
                                             .setDefaultValueString("depth")
                                             .addValidatorString(ArgumentValidatorFactory::createMultipleChoiceValidator(
                                                                                                                         {"depth", "probability", "bounddifference","simulation", "relevance"})).build()).build());
                this->addOption(storm::settings::OptionBuilder(moduleName, maxDepthOptionName, false, "Maximal depth for state space exploration.").addArgument(
                                                                                                                                                                storm::settings::ArgumentBuilder::createUnsignedIntegerArgument("depth", "The maximal depth.").build()).build());
                this->addOption(storm::settings::OptionBuilder(moduleName, figaroStatisticsOptionName, false, "Sets whether to display Figaro statistics if available.").setShortName(figaroStatisticsOptionShortName).build());
                this->addOption(storm::settings::OptionBuilder(moduleName, SymmetryReductionOptionName, false, "Sets whether to use symmetry reduction.").setShortName(SymmetryReductionOptionShortName).build());
                this->addOption(storm::settings::OptionBuilder(moduleName, figaroTopNonRepairableAnalysisOptionName, false, "Sets whether the top of BDMP is stuck at fault. Exploration stop on hitting a fail-labeled state").setShortName(figaroTopNonRepairableAnalysisOptionShortName).build());
            }
            
            bool FIGAROIOSettings::isFigaroFileSet() const {
                return this->getOption(figaroFileOptionName).getHasOptionBeenSet();
            }
            
            std::string FIGAROIOSettings::getFigaroFilename() const {
                return this->getOption(figaroFileOptionName).getArgumentByName("filename").getValueAsString();
            }

            bool FIGAROIOSettings::isxmlFileSet() const {
                return this->getOption(xmlFileOptionName).getHasOptionBeenSet();
            }
            
            std::string FIGAROIOSettings::getxmlFilename() const {
                return this->getOption(xmlFileOptionName).getArgumentByName("filename").getValueAsString();
            }

            bool FIGAROIOSettings::isYamsMcrFileSet() const {
                return this->getOption(yamsMcrFileOptionName).getHasOptionBeenSet();
            }

            std::string FIGAROIOSettings::getYamsMcrFilename() const {
                return this->getOption(yamsMcrFileOptionName).getArgumentByName("filename").getValueAsString();
            }


            bool FIGAROIOSettings::isSymmetricFileSet() const {
                return this->getOption(SymmetryReductionFileOptionName).getHasOptionBeenSet();
            }

            bool FIGAROIOSettings::isTopNonRepairableAnalysisOptionSet() const {
                return this->getOption(figaroTopNonRepairableAnalysisOptionName).getHasOptionBeenSet();
            }

            std::string FIGAROIOSettings::getSymmetricFilename() const {
                return this->getOption(SymmetryReductionFileOptionName).getArgumentByName("filename").getValueAsString();
            }

            bool FIGAROIOSettings::useSymmetryReduction() const {
                return this->getOption(SymmetryReductionOptionName).getHasOptionBeenSet();
            }


            bool FIGAROIOSettings::isrslttxtFileSet() const {
                return this->getOption(outputtextFileOptionName).getHasOptionBeenSet();
            }
            
            std::string FIGAROIOSettings::getrlsttxtFilename() const {
                return this->getOption(outputtextFileOptionName).getArgumentByName("filename").getValueAsString();
            }
            //
            bool FIGAROIOSettings::isToDotSet() const {
                return this->getOption(figaroToDotOptionName).getHasOptionBeenSet();
            }

            std::string FIGAROIOSettings::getFigaroDotOutputFilename() const {
                return this->getOption(figaroToDotOptionName).getArgumentByName("filename").getValueAsString();
            }


            bool FIGAROIOSettings::isFigaroToExplicitSet() const {
                return this->getOption(figaroToExplicitOptionShortName).getHasOptionBeenSet();
            }

            std::string FIGAROIOSettings::getFigaroExplicitOutputFilename() const {
                return this->getOption(figaroToExplicitOptionName).getArgumentByName("filename").getValueAsString();
            }


            bool FIGAROIOSettings::isPropertyInputSet() const {
                return this->getOption(propertyOptionName).getHasOptionBeenSet();
            }

            std::string FIGAROIOSettings::getPropertyInput() const {
                return this->getOption(propertyOptionName).getArgumentByName("property or filename").getValueAsString();
            }

            std::string FIGAROIOSettings::getPropertyInputFilter() const {
                return this->getOption(propertyOptionName).getArgumentByName("filter").getValueAsString();
            }

            void FIGAROIOSettings::finalize() {

            }

            bool FIGAROIOSettings::check() const {
                return true;
            }
            bool FIGAROIOSettings::isApproximationErrorSet() const {
                return this->getOption(approximationErrorOptionName).getHasOptionBeenSet();
            }
            
            double FIGAROIOSettings::getApproximationError() const {
                return this->getOption(approximationErrorOptionName).getArgumentByName("error").getValueAsDouble();
            }
            
            storm::builder::ApproximationHeuristic FIGAROIOSettings::getApproximationHeuristic() const {
                std::string heuristicAsString = this->getOption(approximationHeuristicOptionName).getArgumentByName("heuristic").getValueAsString();
                if (heuristicAsString == "depth") {
                    return storm::builder::ApproximationHeuristic::DEPTH;
                } else if (heuristicAsString == "probability") {
                    return storm::builder::ApproximationHeuristic::PROBABILITY;
                } else if (heuristicAsString == "bounddifference") {
                    return storm::builder::ApproximationHeuristic::BOUNDDIFFERENCE;
                } else if (heuristicAsString == "simulation") {
                    return storm::builder::ApproximationHeuristic::SIMULATION;
                } else if (heuristicAsString == "relevance") {
                    return storm::builder::ApproximationHeuristic::RELEVANCE;
                }
                STORM_LOG_THROW(false, storm::exceptions::IllegalArgumentValueException, "Illegal value '" << heuristicAsString << "' set as heuristic for approximation.");
            }
            bool FIGAROIOSettings::isShowFigaroStatisticsSet() const {
                return this->getOption(figaroStatisticsOptionName).getHasOptionBeenSet();
            }
            bool FIGAROIOSettings::isMaxDepthSet() const {
                return this->getOption(maxDepthOptionName).getHasOptionBeenSet();
            }
            
            uint_fast64_t FIGAROIOSettings::getMaxDepth() const {
                return this->getOption(maxDepthOptionName).getArgumentByName("depth").getValueAsUnsignedInteger();
            }
        }
    }


}
