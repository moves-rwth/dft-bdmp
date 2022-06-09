#pragma once

#include <algorithm>
#include <functional>
#include <unordered_map>
#include <vector>

#include "storm-figaro/builder/FigaroExplorationHeuristic.h"

namespace storm {
    namespace figaro {
        namespace storage {

            /*!
             * Priority queue based on buckets.
             * Can be used to keep track of states during state space exploration.
             * @tparam PriorityType Underlying priority data type
             */
            template<class PriorityType>
            class FigaroBucketPriorityQueue {

                using PriorityTypePointer = std::shared_ptr<PriorityType>;

            public:
                /*!
                 * Create new priority queue.
                 * @param nrBuckets
                 * @param lowerValue
                 * @param ratio
                 * @param higher
                 */
                explicit FigaroBucketPriorityQueue(size_t nrBuckets, double lowerValue, double ratio, bool higher);

                FigaroBucketPriorityQueue(FigaroBucketPriorityQueue const &queue) = default;

                virtual ~FigaroBucketPriorityQueue() = default;

                /*!
                 * Fix the elements in the queue based on compare function
                 * The highest priority goes to the end
                 * The elemnts are fixed if number of unsorted elements in the data structure is greater than 10 % of
                 * the total elements
                 */
                void fix();

                /*!
                 * Check whether queue is empty.
                 * @return True iff queue is empty.
                 */
                bool empty() const;

                /*!
                 * Return number of entries.
                 * @return Size of queue.
                 */
                std::size_t size() const;

                /*!
                 * Get element with highest priority.
                 * @return Top element.
                 */
                PriorityTypePointer const &top() const;

                /*!
                 * Add element.
                 * @param item Element.
                 */
                void push(PriorityTypePointer const &item, bool isSimulationPhase=false);

                /*!
                 * Update existing element.
                 * @param item Element with changes.
                 * @param oldPriority Old priority.
                 */
                void update(PriorityTypePointer const &item, double oldPriority);

                /*!
                 * Get element with highest priority and remove it from the queue.
                 * @return Top element.
                 */
                PriorityTypePointer pop();
                PriorityTypePointer pop(uint32_t stateId, bool isSimulationPhase=false);
                void switchSimulationToProbability();

                /*!
                 * Print info about priority queue.
                 * @param out Output stream.
                 */
                void print(std::ostream &out) const;

                /*!
                 * Print sizes of buckets.
                 * @param out Output stream.
                 */
                void printSizes(std::ostream &out) const;

            private:

                /*!
                 * Get bucket for given priority.
                 * @param priority Priority.
                 * @return Bucket containing the priority.
                 */
                size_t getBucket(double priority) const;

                // List of buckets
                std::vector<std::vector<PriorityTypePointer>> buckets;

                // Bucket containing all items which should be considered immediately
                std::vector<PriorityTypePointer> immediateBucket;
                // Bucket containing all items which are immediately considered
                std::vector<PriorityTypePointer> immediateSimulationBucket;

                // Index of first bucket which contains items
                size_t currentBucket;

                // Number of unsorted items in current bucket
                size_t nrUnsortedItems;

                // Comparison function for priorities
                std::function<bool(PriorityTypePointer, PriorityTypePointer)> compare;

                // Minimal value
                double lowerValue;

                bool higher;

                bool AUTOSORT = false;

                double logBase;

                // Number of available buckets
                size_t nrBuckets;

            };

        }
    }
}