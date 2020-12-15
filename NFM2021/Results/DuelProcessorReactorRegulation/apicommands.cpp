//HEADER FILES
#include "storm-figaro/figaro/FFORT_Benchmarks/DuelProcessorReactorRegulation/Trim_repair/FigaroModelDuelProcessorReactorRegulation_Trim_repair.h"
#include "storm-figaro/figaro/FFORT_Benchmarks/DuelProcessorReactorRegulation/No_trim_No_repair/FigaroModelDuelProcessorReactorRegulation_No_trim_No_repair.h"
#include "storm-figaro/figaro/FFORT_Benchmarks/DuelProcessorReactorRegulation/Trim_No_repair/FigaroModelDuelProcessorReactorRegulation_Trim_No_repair.h"
#include "storm-figaro/figaro/FFORT_Benchmarks/DuelProcessorReactorRegulation/Trim_article_repair/FigaroModelDuelProcessorReactorRegulation_Trim_article_repair.h"
#include "storm-figaro/figaro/FFORT_Benchmarks/DuelProcessorReactorRegulation/No_trim_repair/FigaroModelDuelProcessorReactorRegulation_No_trim_repair.h"
#include "storm-figaro/figaro/FFORT_Benchmarks/DuelProcessorReactorRegulation/Trim_article_No_repair/FigaroModelDuelProcessorReactorRegulation_Trim_article_No_repair.h"
//TEST CASES

/***********************           Test Case Duel processor Core   No_trim_No_repair           ***********************/

TEST_F(FigaroAPITest, FigaroProgram_DuelProcessorReactorRegulation_No_trim_No_repair) {
    uint32_t missiontime = 10000;
    double result = this->analyzeUnReliability(
                                               std::make_shared<storm::figaro::FigaroProgram_DuelProcessorReactorRegulation_No_trim_No_repair>(
                                                                                                                                               storm::figaro::FigaroProgram_DuelProcessorReactorRegulation_No_trim_No_repair()), missiontime);
    EXPECT_FLOAT_EQ(result, 0.00201696);
}

    ///***********************           Test Case Duel processor Core   Trim_Article_No_repair           ***********************/

TEST_F(FigaroAPITest, FigaroProgram_DuelProcessorReactorRegulation_Trim_article_No_repair) {
    uint32_t missiontime = 10000;
    double result = this->analyzeUnReliability(
                                               std::make_shared<storm::figaro::FigaroProgram_DuelProcessorReactorRegulation_Trim_article_No_repair>(
                                                                                                                                                    storm::figaro::FigaroProgram_DuelProcessorReactorRegulation_Trim_article_No_repair()), missiontime);
    EXPECT_FLOAT_EQ(result, 0.00201696);
}

    ///***********************           Test Case Duel processor Core   Trim_Max_No_repair           ***********************/

TEST_F(FigaroAPITest, FigaroProgram_DuelProcessorReactorRegulation_Trim_No_repair) {
    uint32_t missiontime = 10000;
    double result = this->analyzeUnReliability(
                                               std::make_shared<storm::figaro::FigaroProgram_DuelProcessorReactorRegulation_Trim_No_repair>(
                                                                                                                                            storm::figaro::FigaroProgram_DuelProcessorReactorRegulation_Trim_No_repair()), missiontime);
    EXPECT_FLOAT_EQ(result, 0.00201696);
}

    ///***********************           Test Case Duel processor Core   No_trim_repair           ***********************/

TEST_F(FigaroAPITest, FigaroProgram_DuelProcessorReactorRegulation_No_trim_repair) {
    uint32_t missiontime = 10000;
    double result = this->analyzeUnReliability(
                                               std::make_shared<storm::figaro::FigaroProgram_DuelProcessorReactorRegulation_No_trim_repair>(
                                                                                                                                            storm::figaro::FigaroProgram_DuelProcessorReactorRegulation_No_trim_repair()), missiontime);
    EXPECT_FLOAT_EQ(result, 0.00201696);
    result = this->analyzeUnAvailability(std::make_shared<storm::figaro::FigaroProgram_DuelProcessorReactorRegulation_No_trim_repair>(
                                                                                                                                      storm::figaro::FigaroProgram_DuelProcessorReactorRegulation_No_trim_repair()), missiontime);
    EXPECT_FLOAT_EQ(result, 0.0000020271448);
    std::cout << result;
}

    ///***********************           Test Case Duel processor Core   Trim_repair           ***********************/

TEST_F(FigaroAPITest, FigaroProgram_DuelProcessorReactorRegulation_Trim_article_repair) {
    uint32_t missiontime = 10000;
    double result = this->analyzeUnReliability(
                                               std::make_shared<storm::figaro::FigaroProgram_DuelProcessorReactorRegulation_Trim_article_repair>(
                                                                                                                                                 storm::figaro::FigaroProgram_DuelProcessorReactorRegulation_Trim_article_repair()), missiontime);
    EXPECT_FLOAT_EQ(result, 0.00201696);
    result = this->analyzeUnAvailability(std::make_shared<storm::figaro::FigaroProgram_DuelProcessorReactorRegulation_Trim_article_repair>(
                                                                                                                                           storm::figaro::FigaroProgram_DuelProcessorReactorRegulation_Trim_article_repair()), missiontime);
    EXPECT_FLOAT_EQ(result, 0.0000020271448);
    std::cout << result;
}
/***********************           Test Case Duel processor Core   Trim_Max_repair           ***********************/

TEST_F(FigaroAPITest, FigaroProgram_DuelProcessorReactorRegulation_Trim_repair) {
    uint32_t missiontime = 10000;
    double result = this->analyzeUnReliability(
                                               std::make_shared<storm::figaro::FigaroProgram_DuelProcessorReactorRegulation_Trim_repair>(
                                                                                                                                         storm::figaro::FigaroProgram_DuelProcessorReactorRegulation_Trim_repair()), missiontime);
    EXPECT_FLOAT_EQ(result, 0.00201696);
    result = this->analyzeUnAvailability(std::make_shared<storm::figaro::FigaroProgram_DuelProcessorReactorRegulation_Trim_repair>(
                                                                                                                                   storm::figaro::FigaroProgram_DuelProcessorReactorRegulation_Trim_repair()), missiontime);
    EXPECT_FLOAT_EQ(result, 0.0000020271448);
    std::cout << result;
}



//for approximation


    ///***********************           Test Case DuelProcessorReactorRegulation no_trim_no_repair              ***********************/
    //
    //    TYPED_TEST(FigaroApproximationTest, FigaroProgram_DuelProcessorReactorRegulation_No_trim_No_repair) {
    //   uint32_t missiontime = MISSIONTIME;
    //    double errorBound = ERRORBOUND_NonRep;
    //    std::pair<double, double> approxResult = this->analyzeUnReliability(std::make_shared<storm::figaro::FigaroProgram_DuelProcessorReactorRegulation_No_trim_No_repair>(storm::figaro::FigaroProgram_DuelProcessorReactorRegulation_No_trim_No_repair()), missiontime, errorBound);
    //
    //        EXPECT_NEAR(approxResult.first, 0.00201696, errorBound);
    //        EXPECT_NEAR(approxResult.second, 0.00201696, errorBound);
    //        std::cout<<std::endl<<"Lower limit: "<<approxResult.first<<"  Nominal Value: "<<"0.00201696 "<<" Upper limit:"<<approxResult.second<<std::endl;
    //
    //}
    ///***********************           Test Case DuelProcessorReactorRegulation no_trim_repair              ***********************/

TYPED_TEST(FigaroApproximationTest, FigaroProgram_DuelProcessorReactorRegulation_No_trim_repair) {
    uint32_t missiontime = MISSIONTIME;
    double errorBound = ERRORBOUND_Rep;
    std::pair<double, double> approxResult = this->analyzeUnReliability(std::make_shared<storm::figaro::FigaroProgram_DuelProcessorReactorRegulation_No_trim_repair>(storm::figaro::FigaroProgram_DuelProcessorReactorRegulation_No_trim_repair()), missiontime, errorBound);
    
    EXPECT_NEAR(approxResult.first, 0.00201696, errorBound);
    EXPECT_NEAR(approxResult.second, 0.00201696, errorBound);
    std::cout<<std::endl<<"Lower limit: "<<approxResult.first<<"  Nominal Value: "<<"0.00201696 "<<" Upper limit:"<<approxResult.second<<std::endl;
        //
        //        approxResult =  this->analyzeUnAvailability(std::make_shared<storm::figaro::FigaroProgram_NPPS_No_trim_repair>(storm::figaro::FigaroProgram_NPPS_No_trim_repair()), missiontime, errorBound);
        //        EXPECT_NEAR(approxResult.first,0.0000020271448 , errorBound);
        //        EXPECT_NEAR(approxResult.second, 0.0000020271448, errorBound);
        //        std::cout<<std::endl<<"Lower limit: "<<approxResult.first<<"  Nominal Value: "<<" 0.0000020271448"<<" Upper limit:"<<approxResult.second<<std::endl;
    
}

