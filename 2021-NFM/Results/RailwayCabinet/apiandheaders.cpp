
//add these header to test header of stom figar
#include "storm-figaro/figaro/FFORT_Benchmarks/RailwayCabinet/Trim_repair/FigaroModelRailwayCabinet_Trim_repair.h"
#include "storm-figaro/figaro/FFORT_Benchmarks/RailwayCabinet/No_trim_No_repair/FigaroModelRailwayCabinet_No_trim_No_repair.h"
#include "storm-figaro/figaro/FFORT_Benchmarks/RailwayCabinet/Trim_No_repair/FigaroModelRailwayCabinet_Trim_No_repair.h"
#include "storm-figaro/figaro/FFORT_Benchmarks/RailwayCabinet/Trim_article_repair/FigaroModelRailwayCabinet_Trim_article_repair.h"
#include "storm-figaro/figaro/FFORT_Benchmarks/RailwayCabinet/No_trim_repair/FigaroModelRailwayCabinet_No_trim_repair.h"
#include "storm-figaro/figaro/FFORT_Benchmarks/RailwayCabinet/Trim_article_No_repair/FigaroModelRailwayCabinet_Trim_article_No_repair.h"




/***********************           Test Case Railway Cabinet   No_trim_No_repair           ***********************/

TEST_F(FigaroAPITest, FigaroProgram_RailwayCabinet_No_trim_No_repair) {
    uint32_t missiontime = 10;
    double result = this->analyzeUnReliability(
                                               std::make_shared<storm::figaro::FigaroProgram_RailwayCabinet_No_trim_No_repair>(
                                                                                                                               storm::figaro::FigaroProgram_RailwayCabinet_No_trim_No_repair()), missiontime);
    EXPECT_FLOAT_EQ(result, 0.00201696);
}

    ///***********************           Test Case Railway Cabinet   Trim_Article_No_repair           ***********************/

TEST_F(FigaroAPITest, FigaroProgram_RailwayCabinet_Trim_article_No_repair) {
    uint32_t missiontime = 10;
    double result = this->analyzeUnReliability(
                                               std::make_shared<storm::figaro::FigaroProgram_RailwayCabinet_Trim_article_No_repair>(
                                                                                                                                    storm::figaro::FigaroProgram_RailwayCabinet_Trim_article_No_repair()), missiontime);
    EXPECT_FLOAT_EQ(result, 0.00201696);
}

    ///***********************           Test Case Railway Cabinet   Trim_Max_No_repair           ***********************/

TEST_F(FigaroAPITest, FigaroProgram_RailwayCabinet_Trim_No_repair) {
    uint32_t missiontime = 10;
    double result = this->analyzeUnReliability(
                                               std::make_shared<storm::figaro::FigaroProgram_RailwayCabinet_Trim_No_repair>(
                                                                                                                            storm::figaro::FigaroProgram_RailwayCabinet_Trim_No_repair()), missiontime);
    EXPECT_FLOAT_EQ(result, 0.00201696);
}

    ///***********************           Test Case Railway Cabinet   No_trim_repair           ***********************/

TEST_F(FigaroAPITest, FigaroProgram_RailwayCabinet_No_trim_repair) {
    uint32_t missiontime = 10;
    double result = this->analyzeUnReliability(
                                               std::make_shared<storm::figaro::FigaroProgram_RailwayCabinet_No_trim_repair>(
                                                                                                                            storm::figaro::FigaroProgram_RailwayCabinet_No_trim_repair()), missiontime);
    EXPECT_FLOAT_EQ(result, 0.00201696);
    result = this->analyzeUnAvailability(std::make_shared<storm::figaro::FigaroProgram_RailwayCabinet_No_trim_repair>(
                                                                                                                      storm::figaro::FigaroProgram_RailwayCabinet_No_trim_repair()), missiontime);
    EXPECT_FLOAT_EQ(result, 0.0000020271448);
    std::cout << result;
}

    ///***********************           Test Case Railway Cabinet   Trim_repair           ***********************/

TEST_F(FigaroAPITest, FigaroProgram_RailwayCabinet_Trim_article_repair) {
    uint32_t missiontime = 10;
    double result = this->analyzeUnReliability(
                                               std::make_shared<storm::figaro::FigaroProgram_RailwayCabinet_Trim_article_repair>(
                                                                                                                                 storm::figaro::FigaroProgram_RailwayCabinet_Trim_article_repair()), missiontime);
    EXPECT_FLOAT_EQ(result, 0.00201696);
    result = this->analyzeUnAvailability(std::make_shared<storm::figaro::FigaroProgram_RailwayCabinet_Trim_article_repair>(
                                                                                                                           storm::figaro::FigaroProgram_RailwayCabinet_Trim_article_repair()), missiontime);
    EXPECT_FLOAT_EQ(result, 0.0000020271448);
    std::cout << result;
}
/***********************           Test Case Railway Cabinet   Trim_Max_repair           ***********************/

TEST_F(FigaroAPITest, FigaroProgram_RailwayCabinet_Trim_repair) {
    uint32_t missiontime = 10;
    double result = this->analyzeUnReliability(
                                               std::make_shared<storm::figaro::FigaroProgram_RailwayCabinet_Trim_repair>(
                                                                                                                         storm::figaro::FigaroProgram_RailwayCabinet_Trim_repair()), missiontime);
    EXPECT_FLOAT_EQ(result, 0.00201696);
    result = this->analyzeUnAvailability(std::make_shared<storm::figaro::FigaroProgram_RailwayCabinet_Trim_repair>(
                                                                                                                   storm::figaro::FigaroProgram_RailwayCabinet_Trim_repair()), missiontime);
    EXPECT_FLOAT_EQ(result, 0.0000020271448);
    std::cout << result;
}
