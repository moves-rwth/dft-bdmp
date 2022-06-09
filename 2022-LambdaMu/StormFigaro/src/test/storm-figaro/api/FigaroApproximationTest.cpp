#include "test/storm_gtest.h"
#include "storm-config.h"
#include "storm/api/verification.h"
#include "storm-figaro/api/storm-figaro.h"
#include "figaro-test-headers.h"

#include <string>
#include "storm/modelchecker/results/ExplicitQualitativeCheckResult.h"
#include <iostream>
#include "storm-figaro/api/storm-figaro.h"
#include "storm-parsers/api/storm-parsers.h"




// Configurations for DFT approximation
namespace {
    struct FigaroAnalysisConfig {
        storm::builder::ApproximationHeuristic heuristic;
        bool useSR;
    };

    class ApproxDepthConfig {
    public:
        typedef double ValueType;

        static FigaroAnalysisConfig createConfig() {
            return FigaroAnalysisConfig{storm::builder::ApproximationHeuristic::DEPTH, false};

        }
    };

    class ApproxProbabilityConfig {
    public:
        typedef double ValueType;

        static FigaroAnalysisConfig createConfig() {
            return FigaroAnalysisConfig{storm::builder::ApproximationHeuristic::PROBABILITY, false};
        }
    };

    class ApproxBoundDifferenceConfig {
    public:
        typedef double ValueType;

        static FigaroAnalysisConfig createConfig() {
            return FigaroAnalysisConfig{storm::builder::ApproximationHeuristic::BOUNDDIFFERENCE, false};
        }
    };
    class ApproxSimulationConfig {
    public:
        typedef double ValueType;

        static FigaroAnalysisConfig createConfig() {
            return FigaroAnalysisConfig{storm::builder::ApproximationHeuristic::SIMULATION, false};
        }
    };

    template<typename TestType>
    class FigaroApproximationTest : public ::testing::Test {
    public:
        typedef typename TestType::ValueType ValueType;


        FigaroApproximationTest() : config(TestType::createConfig()) {
        }

        FigaroApproximationTest const &getConfig() const {
            return config;
        }

        std::pair<double, double>
        analyzeUnReliability(std::string const& figaroFile, std::string const& xmlFile, double missiontime, double errorBound) {
            std::string property = "Pmin=? [F<=" + std::to_string(missiontime) + "\"failed\"]";
            std::vector<std::shared_ptr<storm::logic::Formula const>> properties = storm::api::extractFormulasFromProperties(
                    storm::api::parseProperties(property));
            storm::figaro::builder::jit::JitFigaroBuilder<double> jitbuilder(figaroFile, xmlFile);
            std::shared_ptr<storm::figaro::FigaroProgram> figaromodel = storm::figaro::api::loadFigaroProgram(jitbuilder);


            storm::figaro::modelchecker::FigaroModelChecker<double>::figaro_results results =
                    storm::figaro::api::analyzeFigaro<double>(figaromodel, properties, errorBound, config.heuristic, true, true);
            jitbuilder.delete_files();
            return boost::get<storm::figaro::modelchecker::FigaroModelChecker<double>::approximation_result>(results[0]);
        }

        std::pair<double, double>
        analyzeUnAvailability(std::string const& figaroFile, std::string const& xmlFile, double missiontime, double errorBound) {
            std::string property = "Pmin=? [F[" + std::to_string(missiontime) + "," + std::to_string(missiontime) + "] \"failed\"]";
            std::vector<std::shared_ptr<storm::logic::Formula const>> properties = storm::api::extractFormulasFromProperties(
                    storm::api::parseProperties(property));
            storm::figaro::builder::jit::JitFigaroBuilder<double> jitbuilder(figaroFile, xmlFile);
            std::shared_ptr<storm::figaro::FigaroProgram> figaromodel = storm::figaro::api::loadFigaroProgram(jitbuilder);


            storm::figaro::modelchecker::FigaroModelChecker<double>::figaro_results results =
                    storm::figaro::api::analyzeFigaro<double>(figaromodel, properties, errorBound, config.heuristic, true, true);
            jitbuilder.delete_files();
            return boost::get<storm::figaro::modelchecker::FigaroModelChecker<double>::approximation_result>(results[0]);

        }


        std::pair<double, double> analyzeMTTF(std::string const& figaroFile, std::string const& xmlFile, double errorBound) {
            std::string property = "T=? [F \"failed\"]";
            std::vector<std::shared_ptr<storm::logic::Formula const>> properties = storm::api::extractFormulasFromProperties(
                    storm::api::parseProperties(property));

            storm::figaro::builder::jit::JitFigaroBuilder<double> jitbuilder(figaroFile, xmlFile);
            std::shared_ptr<storm::figaro::FigaroProgram> figaromodel = storm::figaro::api::loadFigaroProgram(jitbuilder);


            storm::figaro::modelchecker::FigaroModelChecker<double>::figaro_results results =
                    storm::figaro::api::analyzeFigaro<double>(figaromodel, properties, errorBound, config.heuristic, true, true);
            jitbuilder.delete_files();
            return boost::get<storm::figaro::modelchecker::FigaroModelChecker<double>::approximation_result>(results[0]);
        }


    private:
        FigaroAnalysisConfig config;

    };

    typedef ::testing::Types<
//            ApproxDepthConfig,
            ApproxProbabilityConfig
//            ApproxBoundDifferenceConfig,
//            ApproxSimulationConfig
    > TestingTypes;

    TYPED_TEST_SUITE(FigaroApproximationTest, TestingTypes,);

    TYPED_TEST(FigaroApproximationTest, 03_CCF_Unr) {
        double errorBound = 1e-6;
        int missionTime = 100;
        std::pair<double, double> approxResult = this->analyzeUnReliability(STORM_TEST_RESOURCES_DIR "/figaro/03_CCF.fi",STORM_TEST_RESOURCES_DIR "/figaro/03_CCF.xml", missionTime, errorBound);
        EXPECT_LE(approxResult.first, 417.9436693);
        EXPECT_GE(approxResult.second, 417.9436693);
        EXPECT_LE(2 * (approxResult.second - approxResult.first) / (approxResult.first + approxResult.second), errorBound);
        // Ensure results are not equal -> not exact values were computed
        EXPECT_GE(approxResult.second - approxResult.first, errorBound * approxResult.first / 10);

    }

}