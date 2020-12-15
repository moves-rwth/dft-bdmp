#include "storm-figaro/figaro/FFORT_Benchmarks/RailwayStation/stationA_standard/Trim_Article_repair/FigaroModelstationA_standard_Trim_Article_repair.h"
#include "storm-figaro/figaro/FFORT_Benchmarks/RailwayStation/stationA_standard/Trim_Article_No_repair/FigaroModelstationA_standard_Trim_Article_No_repair.h"
#include "storm-figaro/figaro/FFORT_Benchmarks/RailwayStation/stationM_standard/Trim_Article_repair/FigaroModelstationM_standard_Trim_Article_repair.h"
#include "storm-figaro/figaro/FFORT_Benchmarks/RailwayStation/stationM_standard/Trim_Article_No_repair/FigaroModelstationM_standard_Trim_Article_No_repair.h"
#include "storm-figaro/figaro/FFORT_Benchmarks/RailwayStation/stationM_alternative/Trim_Article_repair/FigaroModelstationM_alternative_Trim_Article_repair.h"
#include "storm-figaro/figaro/FFORT_Benchmarks/RailwayStation/stationM_alternative/Trim_Article_No_repair/FigaroModelstationM_alternative_Trim_Article_No_repair.h"
#include "storm-figaro/figaro/FFORT_Benchmarks/RailwayStation/stationH_alternative/Trim_Article_repair/FigaroModelstationH_alternative_Trim_Article_repair.h"
#include "storm-figaro/figaro/FFORT_Benchmarks/RailwayStation/stationH_alternative/Trim_Article_No_repair/FigaroModelstationH_alternative_Trim_Article_No_repair.h"
#include "storm-figaro/figaro/FFORT_Benchmarks/RailwayStation/stationA_alternative/Trim_Article_repair/FigaroModelstationA_alternative_Trim_Article_repair.h"
#include "storm-figaro/figaro/FFORT_Benchmarks/RailwayStation/stationA_alternative/Trim_Article_No_repair/FigaroModelstationA_alternative_Trim_Article_No_repair.h"
#include "storm-figaro/figaro/FFORT_Benchmarks/RailwayStation/stationH_standard/Trim_Article_repair/FigaroModelstationH_standard_Trim_Article_repair.h"
#include "storm-figaro/figaro/FFORT_Benchmarks/RailwayStation/stationH_standard/Trim_Article_No_repair/FigaroModelstationH_standard_Trim_Article_No_repair.h"




///add this to approximation.cpp

#include "test/storm_gtest.h"
#include "storm-config.h"
#include "storm/api/verification.h"
#include "storm-figaro/api/storm-figaro.h"
#include "figaro-test-headers.h"

#include <string>
#include "storm/modelchecker/results/ExplicitQualitativeCheckResult.h"
#include <iostream>
#include "storm-dft/api/storm-dft.h"
#include "storm-parsers/api/storm-parsers.h"




    // Configurations for DFT approximation
class FigaroProgram_vgs_1_No_Trim_Repair;
namespace {
#define ERRORBOUND_Rep 0.0001
#define ERRORBOUND_NonRep 0.0001
#define MISSIONTIME 100
    
#define exclusion
    struct FigaroAnalysisConfig {
        storm::builder::ApproximationHeuristic heuristic;
        bool useSR;
    };
    
        //    class ApproxDepthConfig {
        //    public:
        //        typedef double ValueType;
        //
        //        static FigaroAnalysisConfig createConfig() {
        //            return FigaroAnalysisConfig{storm::builder::ApproximationHeuristic::DEPTH, false};
        //
        //        }
        //    };
    
        //    class ApproxProbabilityConfig {
        //    public:
        //        typedef double ValueType;
        //
        //        static FigaroAnalysisConfig createConfig() {
        //            return FigaroAnalysisConfig{storm::builder::ApproximationHeuristic::PROBABILITY, false};
        //        }
        //    };
    
    class ApproxBoundDifferenceConfig {
    public:
        typedef double ValueType;
        
        static FigaroAnalysisConfig createConfig() {
            return FigaroAnalysisConfig{storm::builder::ApproximationHeuristic::BOUNDDIFFERENCE, false};
        }
    };
    
    template<typename TestType>
    class FigaroApproximationTest : public ::testing::Test {
    public:
        typedef typename TestType::ValueType ValueType;
        
        FigaroApproximationTest() : config(TestType::createConfig()) {std::cout<<std::endl<<"test_info: "<<::testing::UnitTest::GetInstance()->current_test_info()->name()<<std::endl;}
        
        FigaroApproximationTest const &getConfig() const {
            return config;
        }
        
        std::pair<double, double>
        analyzeUnReliability(std::shared_ptr<storm::figaro::FigaroProgram> figaromodel, uint32_t missiontime,
                             double errorBound, bool printOutput = true) {
            std::string property = "Pmin=? [F<=" + std::to_string(missiontime) + "\"failed\"]";
            std::vector<std::shared_ptr<storm::logic::Formula const>> properties = storm::api::extractFormulasFromProperties(
                                                                                                                             storm::api::parseProperties(property));
            
            storm::figaro::modelchecker::FigaroModelChecker<double>::figaro_results results =
            storm::figaro::api::analyzeFigaro<double>(*figaromodel, properties, errorBound, config.heuristic, printOutput, true);
            return boost::get<storm::figaro::modelchecker::FigaroModelChecker<double>::approximation_result>(
                                                                                                             results[0]);
        }
        
        std::pair<double, double>
        analyzeUnAvailability(std::shared_ptr<storm::figaro::FigaroProgram> figaromodel, uint32_t missiontime,
                              double errorBound, bool printOutput = true) {
            std::string property =
            "Pmin=? [F[" + std::to_string(missiontime) + "," + std::to_string(missiontime) + "] \"failed\"]";
            std::vector<std::shared_ptr<storm::logic::Formula const>> properties = storm::api::extractFormulasFromProperties(
                                                                                                                             storm::api::parseProperties(property));
            
            storm::figaro::modelchecker::FigaroModelChecker<double>::figaro_results results =
            storm::figaro::api::analyzeFigaro<double>(*figaromodel, properties, errorBound, config.heuristic, printOutput, true);
            return boost::get<storm::figaro::modelchecker::FigaroModelChecker<double>::approximation_result>(
                                                                                                             results[0]);
        }
        
    private:
        FigaroAnalysisConfig config;
        
    };
    
    typedef ::testing::Types<
        //            ApproxDepthConfig,
        //            ApproxProbabilityConfig,
    ApproxBoundDifferenceConfig
    > TestingTypes;
    
    TYPED_TEST_SUITE(FigaroApproximationTest, TestingTypes,);
    
    
        //
        //
        ///***********************           Test Case railway station A alternative Trim_article_repair              ***********************/
    
    TYPED_TEST(FigaroApproximationTest, FigaroProgram_stationA_alternative_Trim_Article_repair) {
        uint32_t missiontime = MISSIONTIME;
        double errorBound = ERRORBOUND_Rep;
        std::pair<double, double> approxResult = this->analyzeUnReliability(std::make_shared<storm::figaro::FigaroProgram_stationA_alternative_Trim_Article_repair>(storm::figaro::FigaroProgram_stationA_alternative_Trim_Article_repair()), missiontime, errorBound);
        
        EXPECT_NEAR(approxResult.first, 0.00201696, errorBound);
        EXPECT_NEAR(approxResult.second, 0.00201696, errorBound);
        std::cout<<std::endl<<"Lower limit: "<<approxResult.first<<"  Nominal Value: "<<"0.00201696 "<<" Upper limit:"<<approxResult.second<<std::endl;
        
    }
        /////***********************           Test Case railway station A alternative Trim_article_no_repair              ***********************/
    
    TYPED_TEST(FigaroApproximationTest, FigaroProgram_stationA_alternative_Trim_Article_No_repair) {
        uint32_t missiontime = MISSIONTIME;
        double errorBound = ERRORBOUND_NonRep;
        std::pair<double, double> approxResult = this->analyzeUnReliability(std::make_shared<storm::figaro::FigaroProgram_stationA_alternative_Trim_Article_No_repair>(storm::figaro::FigaroProgram_stationA_alternative_Trim_Article_No_repair()), missiontime, errorBound);
        
        EXPECT_NEAR(approxResult.first, 0.00201696, errorBound);
        EXPECT_NEAR(approxResult.second, 0.00201696, errorBound);
        std::cout<<std::endl<<"Lower limit: "<<approxResult.first<<"  Nominal Value: "<<"0.00201696 "<<" Upper limit:"<<approxResult.second<<std::endl;
        
    }
    
        ///***********************           Test Case railway station H alternative Trim_article_repair              ***********************/
    
    TYPED_TEST(FigaroApproximationTest, FigaroProgram_stationH_alternative_Trim_Article_repair) {
        uint32_t missiontime = MISSIONTIME;
        double errorBound = ERRORBOUND_Rep;
        std::pair<double, double> approxResult = this->analyzeUnReliability(std::make_shared<storm::figaro::FigaroProgram_stationH_alternative_Trim_Article_repair>(storm::figaro::FigaroProgram_stationH_alternative_Trim_Article_repair()), missiontime, errorBound);
        
        EXPECT_NEAR(approxResult.first, 0.00201696, errorBound);
        EXPECT_NEAR(approxResult.second, 0.00201696, errorBound);
        std::cout<<std::endl<<"Lower limit: "<<approxResult.first<<"  Nominal Value: "<<"0.00201696 "<<" Upper limit:"<<approxResult.second<<std::endl;
        
    }
        /////***********************           Test Case railway station H alternative Trim_article_no_repair              ***********************/
    
    TYPED_TEST(FigaroApproximationTest, FigaroProgram_stationH_alternative_Trim_Article_No_repair) {
        uint32_t missiontime = MISSIONTIME;
        double errorBound = ERRORBOUND_NonRep;
        std::pair<double, double> approxResult = this->analyzeUnReliability(std::make_shared<storm::figaro::FigaroProgram_stationH_alternative_Trim_Article_No_repair>(storm::figaro::FigaroProgram_stationH_alternative_Trim_Article_No_repair()), missiontime, errorBound);
        
        EXPECT_NEAR(approxResult.first, 0.00201696, errorBound);
        EXPECT_NEAR(approxResult.second, 0.00201696, errorBound);
        std::cout<<std::endl<<"Lower limit: "<<approxResult.first<<"  Nominal Value: "<<"0.00201696 "<<" Upper limit:"<<approxResult.second<<std::endl;
        
    }
        ///***********************           Test Case railway station M alternative Trim_article_repair              ***********************/
    
    TYPED_TEST(FigaroApproximationTest, FigaroProgram_stationM_alternative_Trim_Article_repair) {
        uint32_t missiontime = MISSIONTIME;
        double errorBound = ERRORBOUND_Rep;
        std::pair<double, double> approxResult = this->analyzeUnReliability(std::make_shared<storm::figaro::FigaroProgram_stationM_alternative_Trim_Article_repair>(storm::figaro::FigaroProgram_stationM_alternative_Trim_Article_repair()), missiontime, errorBound);
        
        EXPECT_NEAR(approxResult.first, 0.00201696, errorBound);
        EXPECT_NEAR(approxResult.second, 0.00201696, errorBound);
        std::cout<<std::endl<<"Lower limit: "<<approxResult.first<<"  Nominal Value: "<<"0.00201696 "<<" Upper limit:"<<approxResult.second<<std::endl;
        
    }
        /////***********************           Test Case railway station M alternative Trim_article_no_repair              ***********************/
    
    TYPED_TEST(FigaroApproximationTest, FigaroProgram_stationM_alternative_Trim_Article_No_repair) {
        uint32_t missiontime = MISSIONTIME;
        double errorBound = ERRORBOUND_NonRep;
        std::pair<double, double> approxResult = this->analyzeUnReliability(std::make_shared<storm::figaro::FigaroProgram_stationM_alternative_Trim_Article_No_repair>(storm::figaro::FigaroProgram_stationM_alternative_Trim_Article_No_repair()), missiontime, errorBound);
        
        EXPECT_NEAR(approxResult.first, 0.00201696, errorBound);
        EXPECT_NEAR(approxResult.second, 0.00201696, errorBound);
        std::cout<<std::endl<<"Lower limit: "<<approxResult.first<<"  Nominal Value: "<<"0.00201696 "<<" Upper limit:"<<approxResult.second<<std::endl;
        
    }
    
        ///***********************           Test Case railway station A standard Trim_article_repair              ***********************/
    
    TYPED_TEST(FigaroApproximationTest, FigaroProgram_stationA_standard_Trim_Article_repair) {
        uint32_t missiontime = MISSIONTIME;
        double errorBound = ERRORBOUND_Rep;
        std::pair<double, double> approxResult = this->analyzeUnReliability(std::make_shared<storm::figaro::FigaroProgram_stationA_standard_Trim_Article_repair>(storm::figaro::FigaroProgram_stationA_standard_Trim_Article_repair()), missiontime, errorBound);
        
        EXPECT_NEAR(approxResult.first, 0.00201696, errorBound);
        EXPECT_NEAR(approxResult.second, 0.00201696, errorBound);
        std::cout<<std::endl<<"Lower limit: "<<approxResult.first<<"  Nominal Value: "<<"0.00201696 "<<" Upper limit:"<<approxResult.second<<std::endl;
        
    }
        /////***********************           Test Case railway station A standard Trim_article_no_repair              ***********************/
    
    TYPED_TEST(FigaroApproximationTest, FigaroProgram_stationA_standard_Trim_Article_No_repair) {
        uint32_t missiontime = MISSIONTIME;
        double errorBound = ERRORBOUND_NonRep;
        std::pair<double, double> approxResult = this->analyzeUnReliability(std::make_shared<storm::figaro::FigaroProgram_stationA_standard_Trim_Article_No_repair>(storm::figaro::FigaroProgram_stationA_standard_Trim_Article_No_repair()), missiontime, errorBound);
        
        EXPECT_NEAR(approxResult.first, 0.00201696, errorBound);
        EXPECT_NEAR(approxResult.second, 0.00201696, errorBound);
        std::cout<<std::endl<<"Lower limit: "<<approxResult.first<<"  Nominal Value: "<<"0.00201696 "<<" Upper limit:"<<approxResult.second<<std::endl;
        
    }
    
        ///***********************           Test Case railway station H standard Trim_article_repair              ***********************/
    
    TYPED_TEST(FigaroApproximationTest, FigaroProgram_stationH_standard_Trim_Article_repair) {
        uint32_t missiontime = MISSIONTIME;
        double errorBound = ERRORBOUND_Rep;
        std::pair<double, double> approxResult = this->analyzeUnReliability(std::make_shared<storm::figaro::FigaroProgram_stationH_standard_Trim_Article_repair>(storm::figaro::FigaroProgram_stationH_standard_Trim_Article_repair()), missiontime, errorBound);
        
        EXPECT_NEAR(approxResult.first, 0.00201696, errorBound);
        EXPECT_NEAR(approxResult.second, 0.00201696, errorBound);
        std::cout<<std::endl<<"Lower limit: "<<approxResult.first<<"  Nominal Value: "<<"0.00201696 "<<" Upper limit:"<<approxResult.second<<std::endl;
        
    }
        /////***********************           Test Case railway station H standard Trim_article_no_repair              ***********************/
    
    TYPED_TEST(FigaroApproximationTest, FigaroProgram_stationH_standard_Trim_Article_No_repair) {
        uint32_t missiontime = MISSIONTIME;
        double errorBound = ERRORBOUND_NonRep;
        std::pair<double, double> approxResult = this->analyzeUnReliability(std::make_shared<storm::figaro::FigaroProgram_stationH_standard_Trim_Article_No_repair>(storm::figaro::FigaroProgram_stationH_standard_Trim_Article_No_repair()), missiontime, errorBound);
        
        EXPECT_NEAR(approxResult.first, 0.00201696, errorBound);
        EXPECT_NEAR(approxResult.second, 0.00201696, errorBound);
        std::cout<<std::endl<<"Lower limit: "<<approxResult.first<<"  Nominal Value: "<<"0.00201696 "<<" Upper limit:"<<approxResult.second<<std::endl;
        
    }
        ///***********************           Test Case railway station M standard Trim_article_repair              ***********************/
    
    TYPED_TEST(FigaroApproximationTest, FigaroProgram_stationM_standard_Trim_Article_repair) {
        uint32_t missiontime = MISSIONTIME;
        double errorBound = ERRORBOUND_Rep;
        std::pair<double, double> approxResult = this->analyzeUnReliability(std::make_shared<storm::figaro::FigaroProgram_stationM_standard_Trim_Article_repair>(storm::figaro::FigaroProgram_stationM_standard_Trim_Article_repair()), missiontime, errorBound);
        
        EXPECT_NEAR(approxResult.first, 0.00201696, errorBound);
        EXPECT_NEAR(approxResult.second, 0.00201696, errorBound);
        std::cout<<std::endl<<"Lower limit: "<<approxResult.first<<"  Nominal Value: "<<"0.00201696 "<<" Upper limit:"<<approxResult.second<<std::endl;
        
    }
        /////***********************           Test Case railway station M standard Trim_article_no_repair              ***********************/
    
    TYPED_TEST(FigaroApproximationTest, FigaroProgram_stationM_standard_Trim_Article_No_repair) {
        uint32_t missiontime = MISSIONTIME;
        double errorBound = ERRORBOUND_NonRep;
        std::pair<double, double> approxResult = this->analyzeUnReliability(std::make_shared<storm::figaro::FigaroProgram_stationM_standard_Trim_Article_No_repair>(storm::figaro::FigaroProgram_stationM_standard_Trim_Article_No_repair()), missiontime, errorBound);
        
        EXPECT_NEAR(approxResult.first, 0.00201696, errorBound);
        EXPECT_NEAR(approxResult.second, 0.00201696, errorBound);
        std::cout<<std::endl<<"Lower limit: "<<approxResult.first<<"  Nominal Value: "<<"0.00201696 "<<" Upper limit:"<<approxResult.second<<std::endl;
        
    }
    
    
}




