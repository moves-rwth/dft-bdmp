#ifndef STORM_MODELS_MODELTYPE_H_
#define STORM_MODELS_MODELTYPE_H_

#include <ostream>

namespace storm {
    namespace models {
        // All supported model types.
        enum class ModelType {
            Dtmc, Ctmc, Mdp, MarkovAutomaton, S2pg, Pomdp
        };

        ModelType getModelType(std::string const& type);
        
        std::ostream& operator<<(std::ostream& os, ModelType const& type);
    }
}

#endif /* STORM_MODELS_MODELTYPE_H_ */
