#include "storm/utility/ProgressMeasurement.h"

#include <sstream>
#include <limits>

#include "storm/settings/SettingsManager.h"
#include "storm/settings/modules/GeneralSettings.h"
#include "storm/utility/macros.h"

namespace storm {
    namespace utility {

        ProgressMeasurement::ProgressMeasurement(std::string const& itemName) : itemName(itemName), maxCount(std::numeric_limits<uint64_t>::max()) {
            delay = storm::settings::getModule<storm::settings::modules::GeneralSettings>().getShowProgressDelay();
        }
        
        void ProgressMeasurement::startNewMeasurement(uint64_t startCount) {
            lastDisplayedCount = startCount;
            timeOfStart =  std::chrono::high_resolution_clock::now();
            timeOfLastMessage = timeOfStart;
        }
        
        bool ProgressMeasurement::updateProgress(uint64_t count) {
            std::stringstream stream;
            if (updateProgress(count, stream)) {
                std::string message = stream.str();
                // Remove the line break at the end of the message.
                message.pop_back();
                STORM_LOG_INFO(message);
                return true;
            }
            return false;
        }

        bool ProgressMeasurement::updateProgress(uint64_t count, std::ostream& outstream) {
            auto now = std::chrono::high_resolution_clock::now();
            // Get the duration since the last message in milliseconds.
            auto durationSinceLastMessage = static_cast<uint64_t>(std::chrono::duration_cast<std::chrono::milliseconds>(now - this->timeOfLastMessage).count());
            if (durationSinceLastMessage >= this->delay * 1000) {
                double itemsPerSecond = (static_cast<double>(count - this->lastDisplayedCount) * 1000.0 / static_cast<double>(durationSinceLastMessage));
                outstream << "Completed " << count << " " << itemName << " "
                               << (this->isMaxCountSet() ? "(out of " + std::to_string(this->getMaxCount()) + ") " : "")
                               << "in " << std::chrono::duration_cast<std::chrono::seconds>(now - timeOfStart).count() << "s (currently " << itemsPerSecond << " " << itemName << " per second)." << std::endl;
                timeOfLastMessage = std::chrono::high_resolution_clock::now();
                lastDisplayedCount = count;
                return true;
            }
            return false;
        }
        
        bool ProgressMeasurement::isMaxCountSet() const {
            return this->maxCount < std::numeric_limits<uint64_t>::max();
        }
        
        uint64_t ProgressMeasurement::getMaxCount() const {
            STORM_LOG_ASSERT(this->isMaxCountSet(), "Tried to get the maximal count but it was not set before.");
            return this->maxCount;
        }
        
        void ProgressMeasurement::setMaxCount(uint64_t maxCount) {
            this->maxCount = maxCount;
        }
        
        void ProgressMeasurement::unsetMaxCount() {
            this->maxCount = std::numeric_limits<uint64_t>::max();
        }
        
        uint64_t ProgressMeasurement::getShowProgressDelay() const {
            return this->delay;
        }

        void ProgressMeasurement::setShowProgressDelay(uint64_t delay) {
            this->delay = delay;
        }
        
        std::string const& ProgressMeasurement::getItemName() const {
            return this->itemName;
        }

        void ProgressMeasurement::setItemName(std::string const& name) {
            this->itemName = name;
        }
        
    }
}
