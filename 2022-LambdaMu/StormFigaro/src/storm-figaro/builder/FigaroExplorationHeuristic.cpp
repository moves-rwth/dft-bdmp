#include "FigaroExplorationHeuristic.h"

#include "storm/adapters/RationalFunctionAdapter.h"
#include "storm/exceptions/NotImplementedException.h"

namespace storm {
    namespace figaro {
        namespace builder {

            template<>
            double FigaroExplorationHeuristicProbability<double>::getPriority() const {
                return probability;
            }

            template<typename ValueType>
            double FigaroExplorationHeuristicProbability<ValueType>::getPriority() const {
                STORM_LOG_THROW(false, storm::exceptions::NotImplementedException,
                                "Heuristic 'probability' does not work for this data type.");
            }

            template<>
            double FigaroExplorationHeuristicBoundDifference<double>::getPriority() const {
                double difference = lowerBound - upperBound; // Lower bound is larger than upper bound
                difference = 2 * difference / (upperBound + lowerBound);
                return probability * difference;
            }

            template<typename ValueType>
            double FigaroExplorationHeuristicBoundDifference<ValueType>::getPriority() const {
                STORM_LOG_THROW(false, storm::exceptions::NotImplementedException,
                                "Heuristic 'bound difference' does not work for this data type.");
            }
            template<>
            double FigaroExplorationHeuristicSimulation<double>::getPriority() const {
                return probability;
            }
            template<typename ValueType>
            double FigaroExplorationHeuristicSimulation<ValueType>::getPriority() const {
                STORM_LOG_THROW(false, storm::exceptions::NotImplementedException,
                                "Heuristic 'simulation' does not work for this data type.");
            }

            // Instantiate templates.
            template
            class FigaroExplorationHeuristic<double>;

            template
            class FigaroExplorationHeuristicDepth<double>;

            template
            class FigaroExplorationHeuristicProbability<double>;

            template
            class FigaroExplorationHeuristicBoundDifference<double>;
            template
            class FigaroExplorationHeuristicSimulation<double>;

#ifdef STORM_HAVE_CARL

            template
            class FigaroExplorationHeuristic<storm::RationalFunction>;

            template
            class FigaroExplorationHeuristicDepth<storm::RationalFunction>;

            template
            class FigaroExplorationHeuristicProbability<storm::RationalFunction>;

            template
            class FigaroExplorationHeuristicBoundDifference<storm::RationalFunction>;
            template
            class FigaroExplorationHeuristicSimulation<storm::RationalFunction>;

#endif
        }
    }
}
