#ifndef STORM_STORAGE_EXPRESSIONS_OPERATORTYPE_H_
#define STORM_STORAGE_EXPRESSIONS_OPERATORTYPE_H_

#include <ostream>

namespace storm {
    namespace expressions {
        // An enum representing all possible operator types.
        enum class OperatorType {
            And,
            Or,
            Xor,
            Implies,
            Iff,
            Plus,
            Minus,
            Times,
            Divide,
            Min,
            Max,
            Power,
            Modulo,
            Equal,
            NotEqual,
            Less,
            LessOrEqual,
            Greater,
            GreaterOrEqual,
            Not,
            Floor,
            Ceil,
            Ite
        };
        
        std::ostream& operator<<(std::ostream& stream, OperatorType const& operatorType);
    }
}

#endif /* STORM_STORAGE_EXPRESSIONS_OPERATORTYPE_H_ */
