#include "storm/abstraction/GameBddResult.h"

namespace storm {
    namespace abstraction {
        
        template <storm::dd::DdType DdType>
        GameBddResult<DdType>::GameBddResult() : bdd(), numberOfPlayer2Variables(0) {
            // Intentionally left empty.
        }
        
        template <storm::dd::DdType DdType>
        GameBddResult<DdType>::GameBddResult(storm::dd::Bdd<DdType> const& gameBdd, uint_fast64_t numberOfPlayer2Variables) : bdd(gameBdd), numberOfPlayer2Variables(numberOfPlayer2Variables) {
            // Intentionally left empty.
        }
        
        template struct GameBddResult<storm::dd::DdType::CUDD>;
        template struct GameBddResult<storm::dd::DdType::Sylvan>;
        
    }
}
