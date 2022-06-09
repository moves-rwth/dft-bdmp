//
//#include "test/storm_gtest.h"
//#include "storm-config.h"
//#include "storm/api/verification.h"
//#include "storm-figaro/api/storm-figaro.h"
//#include "figaro-test-headers.h"
//
//#include <string>
//#include "storm/modelchecker/results/ExplicitQualitativeCheckResult.h"
//#include <iostream>
//#include "storm-dft/api/storm-dft.h"
//#include "storm-parsers/api/storm-parsers.h"
//
//// Configurations for DFT approximation
//
//namespace {
//#define ERRORBOUND 0.00001
//#define exclusion
//    struct FigaroAnalysisConfig {
//        storm::builder::ApproximationHeuristic heuristic;
//        bool useSR;
//    };
//
////    class ApproxDepthConfig {
////    public:
////        typedef double ValueType;
////
////        static FigaroAnalysisConfig createConfig() {
////            return FigaroAnalysisConfig{storm::builder::ApproximationHeuristic::DEPTH, false};
////
////        }
////    };
//
////    class ApproxProbabilityConfig {
////    public:
////        typedef double ValueType;
////
////        static FigaroAnalysisConfig createConfig() {
////            return FigaroAnalysisConfig{storm::builder::ApproximationHeuristic::PROBABILITY, false};
////        }
////    };
//
//    class ApproxBoundDifferenceConfig {
//    public:
//        typedef double ValueType;
//
//        static FigaroAnalysisConfig createConfig() {
//            return FigaroAnalysisConfig{storm::builder::ApproximationHeuristic::BOUNDDIFFERENCE, false};
//        }
//    };
//
//    template<typename TestType>
//    class FigaroApproximationTest : public ::testing::Test {
//    public:
//        typedef typename TestType::ValueType ValueType;
//
//        FigaroApproximationTest() : config(TestType::createConfig()) {std::cout<<std::endl<<"test_info: "<<::testing::UnitTest::GetInstance()->current_test_info()->name()<<std::endl;}
//
//        FigaroApproximationTest const &getConfig() const {
//            return config;
//        }
//
//        std::pair<double, double>
//        analyzeUnReliability(std::shared_ptr<storm::figaro::FigaroProgram> figaromodel, uint32_t missiontime,
//                             double errorBound, bool printOutput = true) {
//            std::string property = "Pmin=? [F<=" + std::to_string(missiontime) + "\"failed\"]";
//            std::vector<std::shared_ptr<storm::logic::Formula const>> properties = storm::api::extractFormulasFromProperties(
//                    storm::api::parseProperties(property));
//
//            storm::figaro::modelchecker::FigaroModelChecker<double>::figaro_results results =
//                    storm::figaro::api::analyzeFigaro<double>(*figaromodel, properties, errorBound, config.heuristic, printOutput, true);
//            return boost::get<storm::figaro::modelchecker::FigaroModelChecker<double>::approximation_result>(
//                    results[0]);
//        }
//
//        std::pair<double, double>
//        analyzeUnAvailability(std::shared_ptr<storm::figaro::FigaroProgram> figaromodel, uint32_t missiontime,
//                              double errorBound, bool printOutput = true) {
//            std::string property =
//                    "Pmin=? [F[" + std::to_string(missiontime) + "," + std::to_string(missiontime) + "] \"failed\"]";
//            std::vector<std::shared_ptr<storm::logic::Formula const>> properties = storm::api::extractFormulasFromProperties(
//                    storm::api::parseProperties(property));
//
//            storm::figaro::modelchecker::FigaroModelChecker<double>::figaro_results results =
//                    storm::figaro::api::analyzeFigaro<double>(*figaromodel, properties, errorBound, config.heuristic, printOutput, true);
//            return boost::get<storm::figaro::modelchecker::FigaroModelChecker<double>::approximation_result>(
//                    results[0]);
//        }
//
//    private:
//        FigaroAnalysisConfig config;
//
//    };
//
//    typedef ::testing::Types<
////            ApproxDepthConfig,
////            ApproxProbabilityConfig,
//            ApproxBoundDifferenceConfig
//    > TestingTypes;
//
//    TYPED_TEST_SUITE(FigaroApproximationTest, TestingTypes,);
///***********************           Test Case FFORT NPPs No_trim_No_repair              ***********************/
//
////    TYPED_TEST(FigaroApproximationTest, FigaroProgram_NPPS_No_trim_No_repair) {
////        uint32_t missiontime = 10000;
////        double errorBound = ERRORBOUND;
////        std::pair<double, double> approxResult = this->analyzeUnReliability(std::make_shared<storm::figaro::FigaroProgram_NPPS_No_trim_No_repair>(storm::figaro::FigaroProgram_NPPS_No_trim_No_repair()), missiontime, errorBound);
////
////        EXPECT_NEAR(approxResult.first, 0.00201696, errorBound);
////        EXPECT_NEAR(approxResult.second, 0.00201696, errorBound);
////        std::cout<<std::endl<<"Lower limit: "<<approxResult.first<<"  Nominal Value: "<<"0.00201696 "<<" Upper limit:"<<approxResult.second<<std::endl;
////
////
////        approxResult =  this->analyzeUnAvailability(std::make_shared<storm::figaro::FigaroProgram_NPPS_No_trim_No_repair>(storm::figaro::FigaroProgram_NPPS_No_trim_No_repair()), missiontime, errorBound);
////        EXPECT_NEAR(approxResult.first,0.0000020271448 , errorBound);
////        EXPECT_NEAR(approxResult.second, 0.0000020271448, errorBound);
////        std::cout<<std::endl<<"Lower limit: "<<approxResult.first<<"  Nominal Value: "<<" 0.0000020271448"<<" Upper limit:"<<approxResult.second<<std::endl;
////
////    }
//
///***********************           Test Case FFORT NPPs Trim_article_No_repair              ***********************/
//
////    TYPED_TEST(FigaroApproximationTest, FigaroProgram_NPPS_Trim_article_No_repair) {
////        uint32_t missiontime = 10000;
////        double errorBound = ERRORBOUND;
////        std::pair<double, double> approxResult = this->analyzeUnReliability(std::make_shared<storm::figaro::FigaroProgram_NPPS_Trim_article_No_repair>(storm::figaro::FigaroProgram_NPPS_Trim_article_No_repair()), missiontime, errorBound);
////
////        EXPECT_NEAR(approxResult.first, 0.00201696, errorBound);
////        EXPECT_NEAR(approxResult.second, 0.00201696, errorBound);
////        std::cout<<std::endl<<"Lower limit: "<<approxResult.first<<"  Nominal Value: "<<"0.00201696 "<<" Upper limit:"<<approxResult.second<<std::endl;
////
////
////        approxResult =  this->analyzeUnAvailability(std::make_shared<storm::figaro::FigaroProgram_NPPS_Trim_article_No_repair>(storm::figaro::FigaroProgram_NPPS_Trim_article_No_repair()), missiontime, errorBound);
////        EXPECT_NEAR(approxResult.first,0.0000020271448 , errorBound);
////        EXPECT_NEAR(approxResult.second, 0.0000020271448, errorBound);
////        std::cout<<std::endl<<"Lower limit: "<<approxResult.first<<"  Nominal Value: "<<" 0.0000020271448"<<" Upper limit:"<<approxResult.second<<std::endl;
////
////    }
//
///***********************           Test Case FFORT NPPs Trim_No_repair              ***********************/
//
////    TYPED_TEST(FigaroApproximationTest, FigaroProgram_NPPS_Trim_No_repair) {
////        uint32_t missiontime = 10000;
////        double errorBound = ERRORBOUND;
////        std::pair<double, double> approxResult = this->analyzeUnReliability(std::make_shared<storm::figaro::FigaroProgram_NPPS_Trim_No_repair>(storm::figaro::FigaroProgram_NPPS_Trim_No_repair()), missiontime, errorBound);
////
////        EXPECT_NEAR(approxResult.first, 0.00201696, errorBound);
////        EXPECT_NEAR(approxResult.second, 0.00201696, errorBound);
////        std::cout<<std::endl<<"Lower limit: "<<approxResult.first<<"  Nominal Value: "<<"0.00201696 "<<" Upper limit:"<<approxResult.second<<std::endl;
////
////
////        approxResult =  this->analyzeUnAvailability(std::make_shared<storm::figaro::FigaroProgram_NPPS_Trim_No_repair>(storm::figaro::FigaroProgram_NPPS_Trim_No_repair()), missiontime, errorBound);
////        EXPECT_NEAR(approxResult.first,0.0000020271448 , errorBound);
////        EXPECT_NEAR(approxResult.second, 0.0000020271448, errorBound);
////        std::cout<<std::endl<<"Lower limit: "<<approxResult.first<<"  Nominal Value: "<<" 0.0000020271448"<<" Upper limit:"<<approxResult.second<<std::endl;
////
////    }
//
///***********************           Test Case FFORT NPPs No_trim_repair              ***********************/
//
////    TYPED_TEST(FigaroApproximationTest, FigaroProgram_NPPS_No_trim_repair) {
////        uint32_t missiontime = 10000;
////        double errorBound = ERRORBOUND;
////        std::pair<double, double> approxResult = this->analyzeUnReliability(std::make_shared<storm::figaro::FigaroProgram_NPPS_No_trim_repair>(storm::figaro::FigaroProgram_NPPS_No_trim_repair()), missiontime, errorBound);
////
////        EXPECT_NEAR(approxResult.first, 0.00201696, errorBound);
////        EXPECT_NEAR(approxResult.second, 0.00201696, errorBound);
////        std::cout<<std::endl<<"Lower limit: "<<approxResult.first<<"  Nominal Value: "<<"0.00201696 "<<" Upper limit:"<<approxResult.second<<std::endl;
////
////
////        approxResult =  this->analyzeUnAvailability(std::make_shared<storm::figaro::FigaroProgram_NPPS_No_trim_repair>(storm::figaro::FigaroProgram_NPPS_No_trim_repair()), missiontime, errorBound);
////        EXPECT_NEAR(approxResult.first,0.0000020271448 , errorBound);
////        EXPECT_NEAR(approxResult.second, 0.0000020271448, errorBound);
////        std::cout<<std::endl<<"Lower limit: "<<approxResult.first<<"  Nominal Value: "<<" 0.0000020271448"<<" Upper limit:"<<approxResult.second<<std::endl;
////
////    }
//
///***********************           Test Case FFORT NPPs Trim_article_repair              ***********************/
//
////    TYPED_TEST(FigaroApproximationTest, FigaroProgram_NPPS_Trim_article_repair) {
////        uint32_t missiontime = 10000;
////        double errorBound = ERRORBOUND;
////        std::pair<double, double> approxResult = this->analyzeUnReliability(std::make_shared<storm::figaro::FigaroProgram_NPPS_Trim_article_repair>(storm::figaro::FigaroProgram_NPPS_Trim_article_repair()), missiontime, errorBound);
////
////        EXPECT_NEAR(approxResult.first, 0.00201696, errorBound);
////        EXPECT_NEAR(approxResult.second, 0.00201696, errorBound);
////        std::cout<<std::endl<<"Lower limit: "<<approxResult.first<<"  Nominal Value: "<<"0.00201696 "<<" Upper limit:"<<approxResult.second<<std::endl;
////
////
////        approxResult =  this->analyzeUnAvailability(std::make_shared<storm::figaro::FigaroProgram_NPPS_Trim_article_repair>(storm::figaro::FigaroProgram_NPPS_Trim_article_repair()), missiontime, errorBound);
////        EXPECT_NEAR(approxResult.first,0.0000020271448 , errorBound);
////        EXPECT_NEAR(approxResult.second, 0.0000020271448, errorBound);
////        std::cout<<std::endl<<"Lower limit: "<<approxResult.first<<"  Nominal Value: "<<" 0.0000020271448"<<" Upper limit:"<<approxResult.second<<std::endl;
////
////    }
///***********************           Test Case FFORT NPPs Trim_repair              ***********************/
////
////    TYPED_TEST(FigaroApproximationTest, FigaroProgram_NPPS_Trim_repair) {
////        uint32_t missiontime = 10000;
////        double errorBound = ERRORBOUND;
////        std::pair<double, double> approxResult = this->analyzeUnReliability(std::make_shared<storm::figaro::FigaroProgram_NPPS_Trim_repair>(storm::figaro::FigaroProgram_NPPS_Trim_repair()), missiontime, errorBound);
////
////        EXPECT_NEAR(approxResult.first, 0.00201696, errorBound);
////        EXPECT_NEAR(approxResult.second, 0.00201696, errorBound);
////        std::cout<<std::endl<<"Lower limit: "<<approxResult.first<<"  Nominal Value: "<<"0.00201696 "<<" Upper limit:"<<approxResult.second<<std::endl;
////
////
////        approxResult =  this->analyzeUnAvailability(std::make_shared<storm::figaro::FigaroProgram_NPPS_Trim_repair>(storm::figaro::FigaroProgram_NPPS_Trim_repair()), missiontime, errorBound);
////        EXPECT_NEAR(approxResult.first,0.0000020271448 , errorBound);
////        EXPECT_NEAR(approxResult.second, 0.0000020271448, errorBound);
////        std::cout<<std::endl<<"Lower limit: "<<approxResult.first<<"  Nominal Value: "<<" 0.0000020271448"<<" Upper limit:"<<approxResult.second<<std::endl;
////
////    }
//}