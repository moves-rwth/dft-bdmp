#include "storm-figaro/builder/jit/JitFigaroBuilderInterface.h"

#include "storm/adapters/RationalFunctionAdapter.h"
#include "storm/builder/jit/ModelComponentsBuilder.h"

namespace storm {
    namespace figaro {
        namespace builder {
            namespace jit {

                template<typename IndexType, typename ValueType>
                JitFigaroBuilderInterface<IndexType, ValueType>::JitFigaroBuilderInterface(
                        storm::builder::jit::ModelComponentsBuilder<IndexType, ValueType> &modelComponentsBuilder) : modelComponentsBuilder(
                        modelComponentsBuilder) {
                    // Intentionally left empty.
                }

                template<typename IndexType, typename ValueType>
                JitFigaroBuilderInterface<IndexType, ValueType>::~JitFigaroBuilderInterface() {
                    // Intentionally left empty.
                }

//                template<typename IndexType, typename ValueType>
//                void JitModelBuilderInterface<IndexType, ValueType>::addStateBehaviour(IndexType const &stateId,
//                                                                                       StateBehaviour <IndexType, ValueType> &behaviour) {
//                    modelComponentsBuilder.addStateBehaviour(stateId, behaviour);
//                }

                template
                class JitFigaroBuilderInterface<uint32_t, double>;

                template
                class JitFigaroBuilderInterface<uint32_t, storm::RationalNumber>;

                template
                class JitFigaroBuilderInterface<uint32_t, storm::RationalFunction>;

            }
        }
    }
}