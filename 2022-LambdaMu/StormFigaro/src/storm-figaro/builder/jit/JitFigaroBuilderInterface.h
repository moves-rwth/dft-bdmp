#pragma once

#include <memory>

#include "storm-figaro/builder/jit/JitFigaroBuilderInterface.h"
#include "storm/builder/jit/ModelComponentsBuilder.h"

namespace storm {
    namespace models {
        namespace sparse {
            template <typename ValueType>
            class StandardRewardModel;

            template <typename ValueType, typename RewardModelType>
            class Model;
        }
    }

namespace figaro{
    namespace builder {
        namespace jit {

            template <typename IndexType, typename ValueType>
            class JitFigaroBuilderInterface {
            public:
                JitFigaroBuilderInterface(storm::builder::jit::ModelComponentsBuilder<IndexType, ValueType>& modelComponentsBuilder);

                virtual ~JitFigaroBuilderInterface();

                virtual storm::models::sparse::Model<ValueType, storm::models::sparse::StandardRewardModel<ValueType>>* build() = 0;

//                void addStateBehaviour(IndexType const& stateId, StateBehaviour<IndexType, ValueType>& behaviour);

            protected:
                storm::builder::jit::ModelComponentsBuilder<IndexType, ValueType>& modelComponentsBuilder;
            };


        }
    }
}
}