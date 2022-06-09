#include "storm/models/sparse/MarkovAutomaton.h"
#include "storm/logic/Formula.h"

namespace storm {
    namespace transformer {
        enum EliminationLabelBehavior {
            KeepLabels,
            MergeLabels,
            DeleteLabels
        };

        /**
         * Transformer for eliminating chains of non-Markovian states (instantaneous path fragment leading to the same outcome) from Markov automata.
         */
        template<typename ValueType, typename RewardModelType = storm::models::sparse::StandardRewardModel<ValueType>>
        class NonMarkovianChainTransformer {
        public:

            /**
             * Generates a model with the same basic behavior as the input, but eliminates non-Markovian chains.
             * If no non-determinism occurs, a CTMC is generated.
             *
             * @param ma The input Markov Automaton.
             * @param labelBehavior How the labels of non-Markovian states should be treated when eliminating states.
             * @return A reference to the new model after eliminating non-Markovian states.
             */
            static std::shared_ptr<models::sparse::Model<ValueType, RewardModelType>> eliminateNonmarkovianStates(std::shared_ptr<models::sparse::MarkovAutomaton<ValueType, RewardModelType>> ma, EliminationLabelBehavior labelBehavior = EliminationLabelBehavior::KeepLabels);

            /**
             * Check if the property specified by the given formula is preserved by the transformation.
             * 
             * @param formula The formula to check.
             * @return True, if the property is preserved.
             */
            static bool preservesFormula(storm::logic::Formula const& formula);

            /**
             * Checks for the given formulae if the specified properties are preserved and removes formulae of properties which are not preserved.
             * 
             * @param formulas Formulae.
             * @return Vector containing all fomulae which are valid for the transformed model.
             */
            static std::vector<std::shared_ptr<storm::logic::Formula const>> checkAndTransformFormulas(std::vector<std::shared_ptr<storm::logic::Formula const>> const& formulas);
        };
    }
}

