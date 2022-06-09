#include "storm/abstraction/SymbolicQualitativeMdpResultMinMax.h"

namespace storm {
    namespace abstraction {
        
        template<storm::dd::DdType Type>
        SymbolicQualitativeResult<Type> const& SymbolicQualitativeMdpResultMinMax<Type>::getProb0(storm::OptimizationDirection const& dir) const {
            if (dir == storm::OptimizationDirection::Minimize) {
                return prob0Min;
            } else {
                return prob0Max;
            }
        }
        
        template<storm::dd::DdType Type>
        SymbolicQualitativeResult<Type> const& SymbolicQualitativeMdpResultMinMax<Type>::getProb1(storm::OptimizationDirection const& dir) const {
            if (dir == storm::OptimizationDirection::Minimize) {
                return prob1Min;
            } else {
                return prob1Max;
            }
        }
        
        template class SymbolicQualitativeMdpResultMinMax<storm::dd::DdType::CUDD>;
        template class SymbolicQualitativeMdpResultMinMax<storm::dd::DdType::Sylvan>;

    }
}

