#pragma once
#include <memory>

#include "storm/utility/constants.h"
#include "storm/utility/macros.h"


namespace storm {
    namespace figaro {
        namespace builder {

            /*!
             * Enum representing the heuristic used for deciding which states to expand.
             */
            enum class ApproximationHeuristic {
                DEPTH, PROBABILITY, BOUNDDIFFERENCE, SIMULATION
            };


            /*!
             * General super class for approximation heuristics.
             */
            template<typename ValueType>
            class FigaroExplorationHeuristic {

            public:
                explicit FigaroExplorationHeuristic(size_t id) : id(id), expand(false),
                                                              lowerBound(storm::utility::zero<ValueType>()),
                                                              upperBound(storm::utility::infinity<ValueType>()),
                                                              depth(0), relevance(0), probability(storm::utility::one<ValueType>()),
                                                                      Simulation_Priority(0.0) {
                    // Intentionally left empty
                }

                FigaroExplorationHeuristic(size_t id, FigaroExplorationHeuristic const &predecessor, ValueType rate,
                                        ValueType exitRate, size_t relevance) : id(id), expand(false),
                                                              lowerBound(storm::utility::zero<ValueType>()),
                                                              upperBound(storm::utility::infinity<ValueType>()),
                                                              depth(predecessor.depth + 1),
                                                              relevance(relevance),
                                                              probability(storm::utility::zero<ValueType>()),
                                                                          Simulation_Priority(0.0) {
                    this->updateHeuristicValues(predecessor, rate, exitRate, relevance);
                }
//                FigaroExplorationHeuristic(size_t id, FigaroExplorationHeuristic const &predecessor, ValueType rate,
//                                           ValueType exitRate, ) : id(id), expand(false),
//                                                                 lowerBound(storm::utility::zero<ValueType>()),
//                                                                 upperBound(storm::utility::infinity<ValueType>()),
//                                                                 depth(predecessor.depth + 1),
//                                                                 probability(storm::utility::zero<ValueType>()),
//                                                                 Simulation_Priority(0.0) {
//                    this->updateHeuristicValues(predecessor, rate, exitRate);
//                }

                virtual ~FigaroExplorationHeuristic() = default;

                void setBounds(ValueType lowerBound, ValueType upperBound) {
                    this->lowerBound = lowerBound;
                    this->upperBound = upperBound;
                }

                virtual bool
                updateHeuristicValues(FigaroExplorationHeuristic const &predecessor, ValueType rate, ValueType exitRate, size_t relvance) {
                    STORM_LOG_ASSERT(!storm::utility::isZero<ValueType>(exitRate), "Exit rate is 0");
                    probability += predecessor.getProbability() * rate / exitRate;
                    relevance = relvance;
                    return true;
                }

                void markExpand() {
                    expand = true;
                }
                void resetExpand(){
                    expand = false;
                }

                size_t getId() const {
                    return id;
                }

                bool isExpand() const {
                    return expand;
                }

                size_t getDepth() const {
                    return depth;
                }
                size_t getRelevance() const {
                    return relevance;
                }


                ValueType getProbability() const {
                    return probability;
                }


                ValueType getLowerBound() const {
                    return lowerBound;
                }

                ValueType getUpperBound() const {
                    return upperBound;
                }
                void setSimulationPriority(double sim_priority) {
                    Simulation_Priority = sim_priority;
                }

                virtual double getPriority() const = 0;

                virtual bool isSkip(double approximationThreshold) const {
                    return !this->isExpand() && (this->getPriority() < approximationThreshold);
                }

                virtual bool operator<(FigaroExplorationHeuristic<ValueType> const &other) const {
                    return this->getPriority() < other.getPriority();
                }

            protected:
                size_t id;
                bool expand;
                ValueType lowerBound;
                ValueType upperBound;
                size_t depth;
                size_t relevance;
                ValueType probability;

            public:
                double Simulation_Priority;
            };

            template<typename ValueType>
            class FigaroExplorationHeuristicDepth : public FigaroExplorationHeuristic<ValueType> {
            public:
                FigaroExplorationHeuristicDepth(size_t id) : FigaroExplorationHeuristic<ValueType>(id) {
                    // Intentionally left empty
                }

                FigaroExplorationHeuristicDepth(size_t id, FigaroExplorationHeuristic<ValueType> const &predecessor,
                                             ValueType rate, ValueType exitRate, size_t relevance=0) : FigaroExplorationHeuristic<ValueType>(
                        id, predecessor, rate, exitRate, relevance) {
                    // Intentionally left empty
                }

                bool updateHeuristicValues(FigaroExplorationHeuristic<ValueType> const &predecessor, ValueType,
                                           ValueType exitrate, size_t relevance) override {
                    if (predecessor.getDepth() + 1 < this->depth) {
                        this->depth = predecessor.getDepth() + 1;
                        return true;
                    }
                    return false;
                }

                double getPriority() const override {
                    return this->depth;
                }

                bool isSkip(double approximationThreshold) const override {
                    return !this->expand && this->getPriority() > approximationThreshold;
                }

                bool operator<(FigaroExplorationHeuristic<ValueType> const &other) const override {
                    return this->getPriority() > other.getPriority();
                }
            };


            template<typename ValueType>
            class FigaroExplorationHeuristicRelevance : public FigaroExplorationHeuristic<ValueType> {
            public:
                FigaroExplorationHeuristicRelevance(size_t id) : FigaroExplorationHeuristic<ValueType>(id) {
                    // Intentionally left empty
                }

                FigaroExplorationHeuristicRelevance(size_t id, FigaroExplorationHeuristic<ValueType> const &predecessor,
                                                ValueType rate, ValueType exitRate, size_t relevance=0) : FigaroExplorationHeuristic<ValueType>(
                        id, predecessor, rate, exitRate, relevance) {
                    // Intentionally left empty
                }

                bool updateHeuristicValues(FigaroExplorationHeuristic<ValueType> const &predecessor, ValueType,
                                           ValueType, size_t relvance) override {
                    if (this->relevance != relvance) {
                        this->relevance = relvance;
                        return true;
                    }
//                    if (predecessor.getDepth() + 1 < this->depth) {
//                        this->depth = predecessor.getDepth() + 1;yg
//                        return true;
//                    }
                    return false;
                }

                double getPriority() const override {
//                    return this->depth;
                    return this->relevance;
                }

                bool isSkip(double approximationThreshold) const override {
//                    return !this->expand && this->getPriority() > approximationThreshold;
                    return !this->expand && this->getPriority() < approximationThreshold;
                }

                bool operator<(FigaroExplorationHeuristic<ValueType> const &other) const override {
//                    return this->getPriority() > other.getPriority();
                    return this->getPriority() < other.getPriority();
                }
            };

            template<typename ValueType>
            class FigaroExplorationHeuristicProbability : public FigaroExplorationHeuristic<ValueType> {
            public:
                FigaroExplorationHeuristicProbability(size_t id) : FigaroExplorationHeuristic<ValueType>(id) {
                    // Intentionally left empty
                }

                FigaroExplorationHeuristicProbability(size_t id, FigaroExplorationHeuristic<ValueType> const &predecessor,
                                                   ValueType rate, ValueType exitRate, size_t relevance=0)
                        : FigaroExplorationHeuristic<ValueType>(id, predecessor, rate, exitRate, relevance) {
                    // Intentionally left empty
                }

                double getPriority() const override;
            };

            template<typename ValueType>
            class FigaroExplorationHeuristicBoundDifference : public FigaroExplorationHeuristic<ValueType> {
            public:
                FigaroExplorationHeuristicBoundDifference(size_t id) : FigaroExplorationHeuristic<ValueType>(id) {
                    // Intentionally left empty
                }

                FigaroExplorationHeuristicBoundDifference(size_t id, FigaroExplorationHeuristic<ValueType> const &predecessor,
                                                       ValueType rate, ValueType exitRate, size_t relevance=0)
                        : FigaroExplorationHeuristic<ValueType>(id, predecessor, rate, exitRate, relevance) {
                    // Intentionally left empty
                }

                double getPriority() const override;
            };
            template<typename ValueType>
            class FigaroExplorationHeuristicSimulation : public FigaroExplorationHeuristic<ValueType> {
            public:
                FigaroExplorationHeuristicSimulation(size_t id) : FigaroExplorationHeuristic<ValueType>(id) {
                    // Intentionally left empty
                }

                FigaroExplorationHeuristicSimulation(size_t id, FigaroExplorationHeuristic<ValueType> const &predecessor,
                                                          ValueType rate, ValueType exitRate, size_t relevance=0)
                        : FigaroExplorationHeuristic<ValueType>(id, predecessor, rate, exitRate, relevance) {
                    // Intentionally left empty
                }

                double getPriority() const override;
            };

        }
    }
}
