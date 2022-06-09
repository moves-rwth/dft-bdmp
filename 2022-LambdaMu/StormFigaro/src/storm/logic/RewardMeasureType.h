#ifndef STORM_LOGIC_REWARDMEASURETYPE_H_
#define STORM_LOGIC_REWARDMEASURETYPE_H_

#include <iostream>

namespace storm {
    namespace logic {
        
        enum class RewardMeasureType { Expectation, Variance };

        std::ostream& operator<<(std::ostream& out, RewardMeasureType const& type);

    }
}

#endif /* STORM_LOGIC_REWARDMEASURETYPE_H_ */
