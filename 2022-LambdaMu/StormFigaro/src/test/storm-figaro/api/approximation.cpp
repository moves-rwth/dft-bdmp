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
//
//
//
//// Configurations for DFT approximation
//class FigaroProgram_vgs_1_No_Trim_Repair;
//namespace {
//#define ERRORBOUND_Rep 0.1
//#define ERRORBOUND_NonRep 0.1
//#define MISSIONTIME 1
//
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
//
//
////
//////
////    ///***********************           Test Case Vehicle Guidance VGS_1 Trim_article_repair              ***********************/
////
////    TYPED_TEST(FigaroApproximationTest, FigaroProgram_vgs_1_Trim_article_repair) {
////        uint32_t missiontime = MISSIONTIME;
////        double errorBound = ERRORBOUND_Rep;
////        std::pair<double, double> approxResult = this->analyzeUnReliability(std::make_shared<storm::figaro::FigaroProgram_vgs_1_Trim_article_repair>(storm::figaro::FigaroProgram_vgs_1_Trim_article_repair()), missiontime, errorBound);
////
////        EXPECT_NEAR(approxResult.first, 0.00201696, errorBound);
////        EXPECT_NEAR(approxResult.second, 0.00201696, errorBound);
////        std::cout<<std::endl<<"Lower limit: "<<approxResult.first<<"  Nominal Value: "<<"0.00201696 "<<" Upper limit:"<<approxResult.second<<std::endl;
////
////    }
/////////***********************           Test Case Vehicle Guidance VGS_1 Trim_article_no_repair              ***********************/
////
////    TYPED_TEST(FigaroApproximationTest, FigaroProgram_vgs_1_Trim_article_No_repair) {
////        uint32_t missiontime = MISSIONTIME;
////        double errorBound = ERRORBOUND_NonRep;
////        std::pair<double, double> approxResult = this->analyzeUnReliability(std::make_shared<storm::figaro::FigaroProgram_vgs_1_Trim_article_No_repair>(storm::figaro::FigaroProgram_vgs_1_Trim_article_No_repair()), missiontime, errorBound);
////
////        EXPECT_NEAR(approxResult.first, 0.00201696, errorBound);
////        EXPECT_NEAR(approxResult.second, 0.00201696, errorBound);
////        std::cout<<std::endl<<"Lower limit: "<<approxResult.first<<"  Nominal Value: "<<"0.00201696 "<<" Upper limit:"<<approxResult.second<<std::endl;
////
////    }
////
////    ///***********************           Test Case Vehicle Guidance VGS_2 Trim_article_repair              ***********************/
////
////    TYPED_TEST(FigaroApproximationTest, FigaroProgram_vgs_2_Trim_Article_repair) {
////        uint32_t missiontime = MISSIONTIME;
////        double errorBound = ERRORBOUND_Rep;
////        std::pair<double, double> approxResult = this->analyzeUnReliability(std::make_shared<storm::figaro::FigaroProgram_vgs_2_Trim_Article_repair>(storm::figaro::FigaroProgram_vgs_2_Trim_Article_repair()), missiontime, errorBound);
////
////        EXPECT_NEAR(approxResult.first, 0.00201696, errorBound);
////        EXPECT_NEAR(approxResult.second, 0.00201696, errorBound);
////        std::cout<<std::endl<<"Lower limit: "<<approxResult.first<<"  Nominal Value: "<<"0.00201696 "<<" Upper limit:"<<approxResult.second<<std::endl;
////
////    }
/////////***********************           Test Case Vehicle Guidance VGS_2 Trim_article_no_repair              ***********************/
////
////    TYPED_TEST(FigaroApproximationTest, FigaroProgram_vgs_2_Trim_Article_No_repair) {
////        uint32_t missiontime = MISSIONTIME;
////        double errorBound = ERRORBOUND_NonRep;
////        std::pair<double, double> approxResult = this->analyzeUnReliability(std::make_shared<storm::figaro::FigaroProgram_vgs_2_Trim_Article_No_repair>(storm::figaro::FigaroProgram_vgs_2_Trim_Article_No_repair()), missiontime, errorBound);
////
////        EXPECT_NEAR(approxResult.first, 0.00201696, errorBound);
////        EXPECT_NEAR(approxResult.second, 0.00201696, errorBound);
////        std::cout<<std::endl<<"Lower limit: "<<approxResult.first<<"  Nominal Value: "<<"0.00201696 "<<" Upper limit:"<<approxResult.second<<std::endl;
////
////    }
////    ///***********************           Test Case Vehicle Guidance VGS_3 Trim_article_repair              ***********************/
////
////    TYPED_TEST(FigaroApproximationTest, FigaroProgram_vgs_3_Trim_Article_repair) {
////        uint32_t missiontime = MISSIONTIME;
////        double errorBound = ERRORBOUND_Rep;
////        std::pair<double, double> approxResult = this->analyzeUnReliability(std::make_shared<storm::figaro::FigaroProgram_vgs_3_Trim_Article_repair>(storm::figaro::FigaroProgram_vgs_3_Trim_Article_repair()), missiontime, errorBound);
////
////        EXPECT_NEAR(approxResult.first, 0.00201696, errorBound);
////        EXPECT_NEAR(approxResult.second, 0.00201696, errorBound);
////        std::cout<<std::endl<<"Lower limit: "<<approxResult.first<<"  Nominal Value: "<<"0.00201696 "<<" Upper limit:"<<approxResult.second<<std::endl;
////
////    }
/////////***********************           Test Case Vehicle Guidance VGS_3 Trim_article_no_repair              ***********************/
////
////    TYPED_TEST(FigaroApproximationTest, FigaroProgram_vgs_3_Trim_Article_No_repair) {
////        uint32_t missiontime = MISSIONTIME;
////        double errorBound = ERRORBOUND_NonRep;
////        std::pair<double, double> approxResult = this->analyzeUnReliability(std::make_shared<storm::figaro::FigaroProgram_vgs_3_Trim_Article_No_repair>(storm::figaro::FigaroProgram_vgs_3_Trim_Article_No_repair()), missiontime, errorBound);
////
////        EXPECT_NEAR(approxResult.first, 0.00201696, errorBound);
////        EXPECT_NEAR(approxResult.second, 0.00201696, errorBound);
////        std::cout<<std::endl<<"Lower limit: "<<approxResult.first<<"  Nominal Value: "<<"0.00201696 "<<" Upper limit:"<<approxResult.second<<std::endl;
////
////    }
////
////    ///***********************           Test Case Vehicle Guidance VGS_4 Trim_article_repair              ***********************/
////
////    TYPED_TEST(FigaroApproximationTest, FigaroProgram_vgs_4_Trim_Article_repair) {
////        uint32_t missiontime = MISSIONTIME;
////        double errorBound = ERRORBOUND_Rep;
////        std::pair<double, double> approxResult = this->analyzeUnReliability(std::make_shared<storm::figaro::FigaroProgram_vgs_4_Trim_Article_repair>(storm::figaro::FigaroProgram_vgs_4_Trim_Article_repair()), missiontime, errorBound);
////
////        EXPECT_NEAR(approxResult.first, 0.00201696, errorBound);
////        EXPECT_NEAR(approxResult.second, 0.00201696, errorBound);
////        std::cout<<std::endl<<"Lower limit: "<<approxResult.first<<"  Nominal Value: "<<"0.00201696 "<<" Upper limit:"<<approxResult.second<<std::endl;
////
////    }
/////////***********************           Test Case Vehicle Guidance VGS_4 Tri_article_no_repair              ***********************/
////
////    TYPED_TEST(FigaroApproximationTest, FigaroProgram_vgs_4_Trim_Article_No_repair) {
////        uint32_t missiontime = MISSIONTIME;
////        double errorBound = ERRORBOUND_NonRep;
////        std::pair<double, double> approxResult = this->analyzeUnReliability(std::make_shared<storm::figaro::FigaroProgram_vgs_4_Trim_Article_No_repair>(storm::figaro::FigaroProgram_vgs_4_Trim_Article_No_repair()), missiontime, errorBound);
////
////        EXPECT_NEAR(approxResult.first, 0.00201696, errorBound);
////        EXPECT_NEAR(approxResult.second, 0.00201696, errorBound);
////        std::cout<<std::endl<<"Lower limit: "<<approxResult.first<<"  Nominal Value: "<<"0.00201696 "<<" Upper limit:"<<approxResult.second<<std::endl;
////
////    }
////
////    ///***********************           Test Case Vehicle Guidance VGS_5 Trim_article_repair              ***********************/
////
////    TYPED_TEST(FigaroApproximationTest, FigaroProgram_vgs_5_Trim_Article_repair) {
////        uint32_t missiontime = MISSIONTIME;
////        double errorBound = ERRORBOUND_Rep;
////        std::pair<double, double> approxResult = this->analyzeUnReliability(std::make_shared<storm::figaro::FigaroProgram_vgs_5_Trim_Article_repair>(storm::figaro::FigaroProgram_vgs_5_Trim_Article_repair()), missiontime, errorBound);
////
////        EXPECT_NEAR(approxResult.first, 0.00201696, errorBound);
////        EXPECT_NEAR(approxResult.second, 0.00201696, errorBound);
////        std::cout<<std::endl<<"Lower limit: "<<approxResult.first<<"  Nominal Value: "<<"0.00201696 "<<" Upper limit:"<<approxResult.second<<std::endl;
////
////    }
/////////***********************           Test Case Vehicle Guidance VGS_5 Trim_article_no_repair              ***********************/
////
////    TYPED_TEST(FigaroApproximationTest, FigaroProgram_vgs_5_Trim_Article_No_repair) {
////        uint32_t missiontime = MISSIONTIME;
////        double errorBound = ERRORBOUND_NonRep;
////        std::pair<double, double> approxResult = this->analyzeUnReliability(std::make_shared<storm::figaro::FigaroProgram_vgs_5_Trim_Article_No_repair>(storm::figaro::FigaroProgram_vgs_5_Trim_Article_No_repair()), missiontime, errorBound);
////
////        EXPECT_NEAR(approxResult.first, 0.00201696, errorBound);
////        EXPECT_NEAR(approxResult.second, 0.00201696, errorBound);
////        std::cout<<std::endl<<"Lower limit: "<<approxResult.first<<"  Nominal Value: "<<"0.00201696 "<<" Upper limit:"<<approxResult.second<<std::endl;
////
////    }
////    ///***********************           Test Case Vehicle Guidance VGS_6 Trim_article_repair              ***********************/
////
////    TYPED_TEST(FigaroApproximationTest, FigaroProgram_vgs_6_Trim_Article_repair) {
////        uint32_t missiontime = MISSIONTIME;
////        double errorBound = ERRORBOUND_Rep;
////        std::pair<double, double> approxResult = this->analyzeUnReliability(std::make_shared<storm::figaro::FigaroProgram_vgs_6_Trim_Article_repair>(storm::figaro::FigaroProgram_vgs_6_Trim_Article_repair()), missiontime, errorBound);
////
////        EXPECT_NEAR(approxResult.first, 0.00201696, errorBound);
////        EXPECT_NEAR(approxResult.second, 0.00201696, errorBound);
////        std::cout<<std::endl<<"Lower limit: "<<approxResult.first<<"  Nominal Value: "<<"0.00201696 "<<" Upper limit:"<<approxResult.second<<std::endl;
////
////    }
/////////***********************           Test Case Vehicle Guidance VGS_6 Trim_article_no_repair              ***********************/
////
////    TYPED_TEST(FigaroApproximationTest, FigaroProgram_vgs_6_Trim_Article_No_repair) {
////        uint32_t missiontime = MISSIONTIME;
////        double errorBound = ERRORBOUND_NonRep;
////        std::pair<double, double> approxResult = this->analyzeUnReliability(std::make_shared<storm::figaro::FigaroProgram_vgs_6_Trim_Article_No_repair>(storm::figaro::FigaroProgram_vgs_6_Trim_Article_No_repair()), missiontime, errorBound);
////
////        EXPECT_NEAR(approxResult.first, 0.00201696, errorBound);
////        EXPECT_NEAR(approxResult.second, 0.00201696, errorBound);
////        std::cout<<std::endl<<"Lower limit: "<<approxResult.first<<"  Nominal Value: "<<"0.00201696 "<<" Upper limit:"<<approxResult.second<<std::endl;
////
////    }
////
////    ///***********************           Test Case Vehicle Guidance VGS_7 Trim_article_repair              ***********************/
////
////    TYPED_TEST(FigaroApproximationTest, FigaroProgram_vgs_7_Trim_Article_repair) {
////        uint32_t missiontime = MISSIONTIME;
////        double errorBound = ERRORBOUND_Rep;
////        std::pair<double, double> approxResult = this->analyzeUnReliability(std::make_shared<storm::figaro::FigaroProgram_vgs_7_Trim_Article_repair>(storm::figaro::FigaroProgram_vgs_7_Trim_Article_repair()), missiontime, errorBound);
////
////        EXPECT_NEAR(approxResult.first, 0.00201696, errorBound);
////        EXPECT_NEAR(approxResult.second, 0.00201696, errorBound);
////        std::cout<<std::endl<<"Lower limit: "<<approxResult.first<<"  Nominal Value: "<<"0.00201696 "<<" Upper limit:"<<approxResult.second<<std::endl;
////
////    }
/////////***********************           Test Case Vehicle Guidance VGS_7 Trim_article_no_repair              ***********************/
////
////    TYPED_TEST(FigaroApproximationTest, FigaroProgram_vgs_7_Trim_Article_No_repair) {
////        uint32_t missiontime = MISSIONTIME;
////        double errorBound = ERRORBOUND_NonRep;
////        std::pair<double, double> approxResult = this->analyzeUnReliability(std::make_shared<storm::figaro::FigaroProgram_vgs_7_Trim_Article_No_repair>(storm::figaro::FigaroProgram_vgs_7_Trim_Article_No_repair()), missiontime, errorBound);
////
////        EXPECT_NEAR(approxResult.first, 0.00201696, errorBound);
////        EXPECT_NEAR(approxResult.second, 0.00201696, errorBound);
////        std::cout<<std::endl<<"Lower limit: "<<approxResult.first<<"  Nominal Value: "<<"0.00201696 "<<" Upper limit:"<<approxResult.second<<std::endl;
////
////    }
////    ///***********************           Test Case Vehicle Guidance VGS_8 Trim_article_repair              ***********************/
////
////    TYPED_TEST(FigaroApproximationTest, FigaroProgram_vgs_8_Trim_Article_repair) {
////        uint32_t missiontime = MISSIONTIME;
////        double errorBound = ERRORBOUND_Rep;
////        std::pair<double, double> approxResult = this->analyzeUnReliability(std::make_shared<storm::figaro::FigaroProgram_vgs_8_Trim_Article_repair>(storm::figaro::FigaroProgram_vgs_8_Trim_Article_repair()), missiontime, errorBound);
////
////        EXPECT_NEAR(approxResult.first, 0.00201696, errorBound);
////        EXPECT_NEAR(approxResult.second, 0.00201696, errorBound);
////        std::cout<<std::endl<<"Lower limit: "<<approxResult.first<<"  Nominal Value: "<<"0.00201696 "<<" Upper limit:"<<approxResult.second<<std::endl;
////
////    }
/////////***********************           Test Case Vehicle Guidance VGS_8 Trim_article_no_repair              ***********************/
////
////    TYPED_TEST(FigaroApproximationTest, FigaroProgram_vgs_8_Trim_Article_No_repair) {
////        uint32_t missiontime = MISSIONTIME;
////        double errorBound = ERRORBOUND_NonRep;
////        std::pair<double, double> approxResult = this->analyzeUnReliability(std::make_shared<storm::figaro::FigaroProgram_vgs_8_Trim_Article_No_repair>(storm::figaro::FigaroProgram_vgs_8_Trim_Article_No_repair()), missiontime, errorBound);
////
////        EXPECT_NEAR(approxResult.first, 0.00201696, errorBound);
////        EXPECT_NEAR(approxResult.second, 0.00201696, errorBound);
////        std::cout<<std::endl<<"Lower limit: "<<approxResult.first<<"  Nominal Value: "<<"0.00201696 "<<" Upper limit:"<<approxResult.second<<std::endl;
////
////    }
//
///////***********************           Test Case Sensor filter sf3-2              ***********************/
//////
////    TYPED_TEST(FigaroApproximationTest, FigaroProgram_sf3_2_trim_no_repair) {
////        uint32_t missiontime = MISSIONTIME;
////        double errorBound = ERRORBOUND_NonRep;
////        std::pair<double, double> approxResult = this->analyzeUnReliability(std::make_shared<storm::figaro::FigaroProgram_sf3_2_trim_no_repair>(storm::figaro::FigaroProgram_sf3_2_trim_no_repair()), missiontime, errorBound);
////
////        EXPECT_NEAR(approxResult.first, 0.00201696, errorBound);
////        EXPECT_NEAR(approxResult.second, 0.00201696, errorBound);
////        std::cout<<std::endl<<"Lower limit: "<<approxResult.first<<"  Nominal Value: "<<"0.00201696 "<<" Upper limit:"<<approxResult.second<<std::endl;
////
////    }
////
///////***********************           Test Case Sensor filter sf3-2              ***********************/
////
////    TYPED_TEST(FigaroApproximationTest, FigaroProgram_sf3_2_trim_repair) {
////        uint32_t missiontime = MISSIONTIME;
////        double errorBound = ERRORBOUND_NonRep;
////        std::pair<double, double> approxResult = this->analyzeUnReliability(std::make_shared<storm::figaro::FigaroProgram_sf3_2_trim_repair>(storm::figaro::FigaroProgram_sf3_2_trim_repair()), missiontime, errorBound);
////
////        EXPECT_NEAR(approxResult.first, 0.00201696, errorBound);
////        EXPECT_NEAR(approxResult.second, 0.00201696, errorBound);
////        std::cout<<std::endl<<"Lower limit: "<<approxResult.first<<"  Nominal Value: "<<"0.00201696 "<<" Upper limit:"<<approxResult.second<<std::endl;
////
////    }
//
//}
//
//
//
