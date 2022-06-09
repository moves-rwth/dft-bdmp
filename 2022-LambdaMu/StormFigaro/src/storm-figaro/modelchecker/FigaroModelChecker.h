#pragma once

#include <storm-dft/builder/DftExplorationHeuristic.h>
#include "storm/logic/Formula.h"
#include "storm/modelchecker/results/CheckResult.h"
#include "storm/api/storm.h"
#include "storm/utility/Stopwatch.h"
#include "storm-figaro/storage/StatesMap.h"
#include "storm-figaro/storage/FigaroSymmetricUnits.h"


namespace storm{
    namespace figaro{
        namespace modelchecker{
/*!
         * Analyser for DFTs.
         */
            template<typename ValueType>
            class FigaroModelChecker {

            public:
                typedef std::pair<ValueType, ValueType> approximation_result;
                typedef std::vector<boost::variant<ValueType, approximation_result>> figaro_results;
                typedef std::vector<std::shared_ptr<storm::logic::Formula const>> property_vector;

                class ResultOutputVisitor : public boost::static_visitor<> {
                public:
                    void operator()(ValueType result, std::ostream& os) const {
                        os << result;
                    }

                    void operator()(std::pair<ValueType, ValueType> const& result, std::ostream& os) const {
                        os << "(" << result.first << ", " << result.second << ")";
                    }
                };

                /*!
                 * Constructor.
                 */
                FigaroModelChecker(bool printOutput) : printInfo(printOutput) {
                }

                /*!
                 * Main method for checking Figaro program.
                 *
                 * @param origFigaro Original Figaro program.
                 * @param properties Properties to check for.
                 * @param approximationError Error allowed for approximation. Value 0 indicates no approximation.
                 * @param approximationHeuristic Heuristic used for state space exploration.
                 * @param eliminateChains If true, chains of non-Markovian states are elimianted from the resulting MA
                 * @param labelBehavior Behavior of labels of eliminated states
                 * @return Model checking results for the given properties..
                 */
                figaro_results check(std::shared_ptr<storm::figaro::FigaroProgram> origFigaro, property_vector const& properties,
                                  double approximationError = 0.0, storm::builder::ApproximationHeuristic approximationHeuristic = storm::builder::ApproximationHeuristic::DEPTH,
                                  bool eliminateChains = false, bool APPROXIMATION = false, bool topNoRepair = false);

                /*!
                 * Print timings of all operations to stream.
                 *
                 * @param os Output stream to write to.
                 */
                void printTimings(std::ostream& os = std::cout);

                /*!
                 * Print result to stream.
                 *
                 * @param results List of results.
                 * @param os Output stream to write to.
                 */
                void printResults(figaro_results const& results, std::ostream& os = std::cout);

            private:

                bool printInfo;

                // Timing values
                storm::utility::Stopwatch buildingTimer;
                storm::utility::Stopwatch explorationTimer;
                storm::utility::Stopwatch bisimulationTimer;
                storm::utility::Stopwatch modelCheckingTimer;
                storm::utility::Stopwatch totalTimer;



                /*!
                 * Check model generated from Figaro.
                 *
                 * @param figaro The Figaro.
                 * @param properties Properties to check for.
                 * @param symred Flag indicating if symmetry reduction should be used.
                 * @param relevantEvents List with ids of relevant events which should be observed.
                 * @param approximationError Error allowed for approximation. Value 0 indicates no approximation.
                 * @param approximationHeuristic Heuristic used for approximation.
                 * @param eliminateChains If true, chains of non-Markovian states are elimianted from the resulting MA
                 * @param labelBehavior Behavior of labels of eliminated states
                 *
                 * @return Model checking result
                 */
                figaro_results checkFigaro(std::shared_ptr<storm::figaro::FigaroProgram> origFigaro, property_vector const& properties,
                                     double approximationError = 0.0, storm::builder::ApproximationHeuristic approximationHeuristic = storm::builder::ApproximationHeuristic::DEPTH,
                                     bool eliminateChains = false, bool APPROXIMATION = false, bool topNoRepair = false);

                /*!
                 * Check the given markov model for the given properties.
                 *
                 * @param model      Model to check
                 * @param properties Properties to check for
                 *
                 * @return Model checking result
                 */
                std::vector<ValueType> checkModel(std::shared_ptr<storm::models::sparse::Model<ValueType>>& model, property_vector const& properties);

                /*!
                 * Checks if the computed approximation is sufficient, i.e.
                 * upperBound - lowerBound <= approximationError * mean(lowerBound, upperBound).
                 *
                 * @param lowerBound         The lower bound on the result.
                 * @param upperBound         The upper bound on the result.
                 * @param approximationError The allowed error for approximating.
                 * @param relative           Flag indicating if the error should be relative to 1 or
                                             to the mean of lower and upper bound.
                 *
                 * @return True, if the approximation is sufficient.
                 */
                bool isApproximationSufficient(ValueType lowerBound, ValueType upperBound, double approximationError, bool relative);

            };

        }
    }
}
