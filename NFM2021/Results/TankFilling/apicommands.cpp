
//add include files in test/storm-figaro/api/figaro-test-headers.h
#include "storm-figaro/figaro/FFORT_Benchmarks/TankFilling/Trim_repair/FigaroModelTankFilling_Trim_repair.h"
#include "storm-figaro/figaro/FFORT_Benchmarks/TankFilling/No_trim_No_repair/FigaroModelTankFilling_No_trim_No_repair.h"
#include "storm-figaro/figaro/FFORT_Benchmarks/TankFilling/Trim_No_repair/FigaroModelTankFilling_Trim_No_repair.h"
#include "storm-figaro/figaro/FFORT_Benchmarks/TankFilling/Trim_Max_repair/FigaroModelTankFilling_Trim_Max_repair.h"
#include "storm-figaro/figaro/FFORT_Benchmarks/TankFilling/Trim_Max_No_repair/FigaroModelTankFilling_Trim_Max_No_repair.h"
#include "storm-figaro/figaro/FFORT_Benchmarks/TankFilling/No_trim_repair/FigaroModelTankFilling_No_trim_repair.h"

//add folowing tests in test/storm-figaro/api/FigaroAPITest.cpp

/***********************           Test Case Tank Filling   No_trim_No_repair           ***********************/

    //    TEST_F(FigaroAPITest, FigaroProgram_vgs_1_Trim_No_Repair) {
    //        uint32_t missiontime = 10000;
    //        double result = this->analyzeUnReliability(
    //                std::make_shared<storm::figaro::FigaroProgram_TankFilling_No_trim_No_repair>(
    //                        storm::figaro::FigaroProgram_TankFilling_No_trim_No_repair()), missiontime);
    //        EXPECT_FLOAT_EQ(result, 0.00201696);
    //    }

    ///***********************           Test Case Tank Filling   Trim_Article_No_repair           ***********************/

    //    TEST_F(FigaroAPITest, FigaroProgram_TankFilling_Trim_No_repair) {
    //        uint32_t missiontime = 10000;
    //        double result = this->analyzeUnReliability(
    //                std::make_shared<storm::figaro::FigaroProgram_TankFilling_Trim_No_repair>(
    //                        storm::figaro::FigaroProgram_TankFilling_Trim_No_repair()), missiontime);
    //        EXPECT_FLOAT_EQ(result, 0.00201696);
    //    }

    ///***********************           Test Case Tank Filling   Trim_Max_No_repair           ***********************/

    //    TEST_F(FigaroAPITest, FigaroProgram_TankFilling_Trim_Max_No_repair) {
    //        uint32_t missiontime = 10000;
    //        double result = this->analyzeUnReliability(
    //                std::make_shared<storm::figaro::FigaroProgram_TankFilling_Trim_Max_No_repair>(
    //                        storm::figaro::FigaroProgram_TankFilling_Trim_Max_No_repair()), missiontime);
    //        EXPECT_FLOAT_EQ(result, 0.00201696);
    //    }

    ///***********************           Test Case Tank Filling   No_trim_repair           ***********************/
    //
    //    TEST_F(FigaroAPITest, FigaroProgram_TankFilling_No_trim_repair) {
    //        uint32_t missiontime = 10000;
    //        double result = this->analyzeUnReliability(
    //                std::make_shared<storm::figaro::FigaroProgram_TankFilling_No_trim_repair>(
    //                        storm::figaro::FigaroProgram_TankFilling_No_trim_repair()), missiontime);
    //        EXPECT_FLOAT_EQ(result, 0.00201696);
    //        result = this->analyzeUnAvailability(std::make_shared<storm::figaro::FigaroProgram_TankFilling_No_trim_repair>(
    //                storm::figaro::FigaroProgram_TankFilling_No_trim_repair()), missiontime);
    //        EXPECT_FLOAT_EQ(result, 0.0000020271448);
    //        std::cout << result;
    //    }

    ///***********************           Test Case Tank Filling   Trim_repair           ***********************/

TEST_F(FigaroAPITest, FigaroProgram_TankFilling_Trim_repair) {
    uint32_t missiontime = 10000;
    double result = this->analyzeUnReliability(
                                               std::make_shared<storm::figaro::FigaroProgram_TankFilling_Trim_repair>(
                                                                                                                      storm::figaro::FigaroProgram_TankFilling_Trim_repair()), missiontime);
    EXPECT_FLOAT_EQ(result, 0.00201696);
    result = this->analyzeUnAvailability(std::make_shared<storm::figaro::FigaroProgram_TankFilling_Trim_repair>(
                                                                                                                storm::figaro::FigaroProgram_TankFilling_Trim_repair()), missiontime);
    EXPECT_FLOAT_EQ(result, 0.0000020271448);
    std::cout << result;
}
    ///***********************           Test Case Tank Filling   Trim_Max_repair           ***********************/
    //
    //    TEST_F(FigaroAPITest, FigaroProgram_TankFilling_Trim_Max_repair) {
    //        uint32_t missiontime = 10000;
    //        double result = this->analyzeUnReliability(
    //                std::make_shared<storm::figaro::FigaroProgram_TankFilling_Trim_Max_repair>(
    //                        storm::figaro::FigaroProgram_TankFilling_Trim_Max_repair()), missiontime);
    //        EXPECT_FLOAT_EQ(result, 0.00201696);
    //        result = this->analyzeUnAvailability(std::make_shared<storm::figaro::FigaroProgram_TankFilling_Trim_Max_repair>(
    //                storm::figaro::FigaroProgram_TankFilling_Trim_Max_repair()), missiontime);
    //        EXPECT_FLOAT_EQ(result, 0.0000020271448);
    //        std::cout << result;
    //    }
