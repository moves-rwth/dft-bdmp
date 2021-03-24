//include in header files
#include "storm-figaro/figaro/FFORT_Benchmarks/VehicleGuidance/vgs_6/Trim_Article_repair/FigaroModelvgs_6_Trim_Article_repair.h"
#include "storm-figaro/figaro/FFORT_Benchmarks/VehicleGuidance/vgs_6/Trim_Article_No_repair/FigaroModelvgs_6_Trim_Article_No_repair.h"
#include "storm-figaro/figaro/FFORT_Benchmarks/VehicleGuidance/vgs_1/Trim_article_repair/FigaroModelvgs_1_Trim_article_repair.h"
#include "storm-figaro/figaro/FFORT_Benchmarks/VehicleGuidance/vgs_1/Trim_article_No_repair/FigaroModelvgs_1_Trim_article_No_repair.h"
#include "storm-figaro/figaro/FFORT_Benchmarks/VehicleGuidance/vgs_8/Trim_Article_repair/FigaroModelvgs_8_Trim_Article_repair.h"
#include "storm-figaro/figaro/FFORT_Benchmarks/VehicleGuidance/vgs_8/Trim_Article_No_repair/FigaroModelvgs_8_Trim_Article_No_repair.h"
#include "storm-figaro/figaro/FFORT_Benchmarks/VehicleGuidance/vgs_7/Trim_Article_repair/FigaroModelvgs_7_Trim_Article_repair.h"
#include "storm-figaro/figaro/FFORT_Benchmarks/VehicleGuidance/vgs_7/Trim_Article_No_repair/FigaroModelvgs_7_Trim_Article_No_repair.h"
#include "storm-figaro/figaro/FFORT_Benchmarks/VehicleGuidance/vgs_2/Trim_Article_repair/FigaroModelvgs_2_Trim_Article_repair.h"
#include "storm-figaro/figaro/FFORT_Benchmarks/VehicleGuidance/vgs_2/Trim_Article_No_repair/FigaroModelvgs_2_Trim_Article_No_repair.h"
#include "storm-figaro/figaro/FFORT_Benchmarks/VehicleGuidance/vgs_5/Trim_Article_repair/FigaroModelvgs_5_Trim_Article_repair.h"
#include "storm-figaro/figaro/FFORT_Benchmarks/VehicleGuidance/vgs_5/Trim_Article_No_repair/FigaroModelvgs_5_Trim_Article_No_repair.h"
#include "storm-figaro/figaro/FFORT_Benchmarks/VehicleGuidance/vgs_4/Trim_Article_repair/FigaroModelvgs_4_Trim_Article_repair.h"
#include "storm-figaro/figaro/FFORT_Benchmarks/VehicleGuidance/vgs_4/Trim_Article_No_repair/FigaroModelvgs_4_Trim_Article_No_repair.h"
#include "storm-figaro/figaro/FFORT_Benchmarks/VehicleGuidance/vgs_3/Trim_Article_repair/FigaroModelvgs_3_Trim_Article_repair.h"
#include "storm-figaro/figaro/FFORT_Benchmarks/VehicleGuidance/vgs_3/Trim_Article_No_repair/FigaroModelvgs_3_Trim_Article_No_repair.h"





// copy to API

    ///***********************           Test Case Vehicle Guidance VGS_1 Trim_article_repair              ***********************/

TEST_F(FigaroAPITest, FigaroProgram_vgs_1_Trim_article_repair) {
    uint32_t missiontime = MISSIONTIME;
    double errorBound = ERRORBOUND_Rep;
    double result = this->analyzeUnReliability(std::make_shared<storm::figaro::FigaroProgram_vgs_1_Trim_article_repair>(storm::figaro::FigaroProgram_vgs_1_Trim_article_repair()), missiontime);
    
    EXPECT_FLOAT_EQ(result, 0.00201696);
        //std::cout<<std::endl<<"Lower limit: "<<approxResult.first<<"  Nominal Value: "<<"0.00201696 "<<" Upper limit:"<<approxResult.second<<std::endl;
    
}
    /////***********************           Test Case Vehicle Guidance VGS_1 Trim_article_no_repair              ***********************/

TEST_F(FigaroAPITest, FigaroProgram_vgs_1_Trim_article_No_repair) {
    uint32_t missiontime = MISSIONTIME;
    double errorBound = ERRORBOUND_NonRep;
    double result = this->analyzeUnReliability(std::make_shared<storm::figaro::FigaroProgram_vgs_1_Trim_article_No_repair>(storm::figaro::FigaroProgram_vgs_1_Trim_article_No_repair()), missiontime);
    
    EXPECT_FLOAT_EQ(result, 0.00201696);
        //std::cout<<std::endl<<"Lower limit: "<<approxResult.first<<"  Nominal Value: "<<"0.00201696 "<<" Upper limit:"<<approxResult.second<<std::endl;
    
}

    ///***********************           Test Case Vehicle Guidance VGS_2 Trim_article_repair              ***********************/

TEST_F(FigaroAPITest, FigaroProgram_vgs_2_Trim_Article_repair) {
    uint32_t missiontime = MISSIONTIME;
    double errorBound = ERRORBOUND_Rep;
    double result = this->analyzeUnReliability(std::make_shared<storm::figaro::FigaroProgram_vgs_2_Trim_Article_repair>(storm::figaro::FigaroProgram_vgs_2_Trim_Article_repair()), missiontime);
    
    EXPECT_FLOAT_EQ(result, 0.00201696);
        //std::cout<<std::endl<<"Lower limit: "<<approxResult.first<<"  Nominal Value: "<<"0.00201696 "<<" Upper limit:"<<approxResult.second<<std::endl;
    
}
    /////***********************           Test Case Vehicle Guidance VGS_2 Trim_article_no_repair              ***********************/

TEST_F(FigaroAPITest, FigaroProgram_vgs_2_Trim_Article_No_repair) {
    uint32_t missiontime = MISSIONTIME;
    double errorBound = ERRORBOUND_NonRep;
    double result = this->analyzeUnReliability(std::make_shared<storm::figaro::FigaroProgram_vgs_2_Trim_Article_No_repair>(storm::figaro::FigaroProgram_vgs_2_Trim_Article_No_repair()), missiontime);
    
    EXPECT_FLOAT_EQ(result, 0.00201696);
        //std::cout<<std::endl<<"Lower limit: "<<approxResult.first<<"  Nominal Value: "<<"0.00201696 "<<" Upper limit:"<<approxResult.second<<std::endl;
    
}
    ///***********************           Test Case Vehicle Guidance VGS_3 Trim_article_repair              ***********************/

TEST_F(FigaroAPITest, FigaroProgram_vgs_3_Trim_Article_repair) {
    uint32_t missiontime = MISSIONTIME;
    double errorBound = ERRORBOUND_Rep;
    double result = this->analyzeUnReliability(std::make_shared<storm::figaro::FigaroProgram_vgs_3_Trim_Article_repair>(storm::figaro::FigaroProgram_vgs_3_Trim_Article_repair()), missiontime);
    
    EXPECT_FLOAT_EQ(result, 0.00201696);
        //std::cout<<std::endl<<"Lower limit: "<<approxResult.first<<"  Nominal Value: "<<"0.00201696 "<<" Upper limit:"<<approxResult.second<<std::endl;
    
}
    /////***********************           Test Case Vehicle Guidance VGS_3 Trim_article_no_repair              ***********************/

TEST_F(FigaroAPITest, FigaroProgram_vgs_3_Trim_Article_No_repair) {
    uint32_t missiontime = MISSIONTIME;
    double errorBound = ERRORBOUND_NonRep;
    double result = this->analyzeUnReliability(std::make_shared<storm::figaro::FigaroProgram_vgs_3_Trim_Article_No_repair>(storm::figaro::FigaroProgram_vgs_3_Trim_Article_No_repair()), missiontime);
    
    EXPECT_FLOAT_EQ(result, 0.00201696);
        //std::cout<<std::endl<<"Lower limit: "<<approxResult.first<<"  Nominal Value: "<<"0.00201696 "<<" Upper limit:"<<approxResult.second<<std::endl;
    
}

    ///***********************           Test Case Vehicle Guidance VGS_4 Trim_article_repair              ***********************/

TEST_F(FigaroAPITest, FigaroProgram_vgs_4_Trim_Article_repair) {
    uint32_t missiontime = MISSIONTIME;
    double errorBound = ERRORBOUND_Rep;
    double result = this->analyzeUnReliability(std::make_shared<storm::figaro::FigaroProgram_vgs_4_Trim_Article_repair>(storm::figaro::FigaroProgram_vgs_4_Trim_Article_repair()), missiontime);
    
    EXPECT_FLOAT_EQ(result, 0.00201696);
        //std::cout<<std::endl<<"Lower limit: "<<approxResult.first<<"  Nominal Value: "<<"0.00201696 "<<" Upper limit:"<<approxResult.second<<std::endl;
    
}
    /////***********************           Test Case Vehicle Guidance VGS_4 Tri_article_no_repair              ***********************/

TEST_F(FigaroAPITest, FigaroProgram_vgs_4_Trim_Article_No_repair) {
    uint32_t missiontime = MISSIONTIME;
    double errorBound = ERRORBOUND_NonRep;
    double result = this->analyzeUnReliability(std::make_shared<storm::figaro::FigaroProgram_vgs_4_Trim_Article_No_repair>(storm::figaro::FigaroProgram_vgs_4_Trim_Article_No_repair()), missiontime);
    
    EXPECT_FLOAT_EQ(result, 0.00201696);
        //std::cout<<std::endl<<"Lower limit: "<<approxResult.first<<"  Nominal Value: "<<"0.00201696 "<<" Upper limit:"<<approxResult.second<<std::endl;
    
}

    ///***********************           Test Case Vehicle Guidance VGS_5 Trim_article_repair              ***********************/

TEST_F(FigaroAPITest, FigaroProgram_vgs_5_Trim_Article_repair) {
    uint32_t missiontime = MISSIONTIME;
    double errorBound = ERRORBOUND_Rep;
    double result = this->analyzeUnReliability(std::make_shared<storm::figaro::FigaroProgram_vgs_5_Trim_Article_repair>(storm::figaro::FigaroProgram_vgs_5_Trim_Article_repair()), missiontime);
    
    EXPECT_FLOAT_EQ(result, 0.00201696);
        //std::cout<<std::endl<<"Lower limit: "<<approxResult.first<<"  Nominal Value: "<<"0.00201696 "<<" Upper limit:"<<approxResult.second<<std::endl;
    
}
    /////***********************           Test Case Vehicle Guidance VGS_5 Trim_article_no_repair              ***********************/

TEST_F(FigaroAPITest, FigaroProgram_vgs_5_Trim_Article_No_repair) {
    uint32_t missiontime = MISSIONTIME;
    double errorBound = ERRORBOUND_NonRep;
    double result = this->analyzeUnReliability(std::make_shared<storm::figaro::FigaroProgram_vgs_5_Trim_Article_No_repair>(storm::figaro::FigaroProgram_vgs_5_Trim_Article_No_repair()), missiontime);
    
    EXPECT_FLOAT_EQ(result, 0.00201696);
        //std::cout<<std::endl<<"Lower limit: "<<approxResult.first<<"  Nominal Value: "<<"0.00201696 "<<" Upper limit:"<<approxResult.second<<std::endl;
    
}
    ///***********************           Test Case Vehicle Guidance VGS_6 Trim_article_repair              ***********************/

TEST_F(FigaroAPITest, FigaroProgram_vgs_6_Trim_Article_repair) {
    uint32_t missiontime = MISSIONTIME;
    double errorBound = ERRORBOUND_Rep;
    double result = this->analyzeUnReliability(std::make_shared<storm::figaro::FigaroProgram_vgs_6_Trim_Article_repair>(storm::figaro::FigaroProgram_vgs_6_Trim_Article_repair()), missiontime);
    
    EXPECT_FLOAT_EQ(result, 0.00201696);
        //std::cout<<std::endl<<"Lower limit: "<<approxResult.first<<"  Nominal Value: "<<"0.00201696 "<<" Upper limit:"<<approxResult.second<<std::endl;
    
}
    /////***********************           Test Case Vehicle Guidance VGS_6 Trim_article_no_repair              ***********************/

TEST_F(FigaroAPITest, FigaroProgram_vgs_6_Trim_Article_No_repair) {
    uint32_t missiontime = MISSIONTIME;
    double errorBound = ERRORBOUND_NonRep;
    double result = this->analyzeUnReliability(std::make_shared<storm::figaro::FigaroProgram_vgs_6_Trim_Article_No_repair>(storm::figaro::FigaroProgram_vgs_6_Trim_Article_No_repair()), missiontime);
    
    EXPECT_FLOAT_EQ(result, 0.00201696);
        //std::cout<<std::endl<<"Lower limit: "<<approxResult.first<<"  Nominal Value: "<<"0.00201696 "<<" Upper limit:"<<approxResult.second<<std::endl;
    
}

    ///***********************           Test Case Vehicle Guidance VGS_7 Trim_article_repair              ***********************/

TEST_F(FigaroAPITest, FigaroProgram_vgs_7_Trim_Article_repair) {
    uint32_t missiontime = MISSIONTIME;
    double errorBound = ERRORBOUND_Rep;
    double result = this->analyzeUnReliability(std::make_shared<storm::figaro::FigaroProgram_vgs_7_Trim_Article_repair>(storm::figaro::FigaroProgram_vgs_7_Trim_Article_repair()), missiontime);
    
    EXPECT_FLOAT_EQ(result, 0.00201696);
        //std::cout<<std::endl<<"Lower limit: "<<approxResult.first<<"  Nominal Value: "<<"0.00201696 "<<" Upper limit:"<<approxResult.second<<std::endl;
    
}
    /////***********************           Test Case Vehicle Guidance VGS_7 Trim_article_no_repair              ***********************/

TEST_F(FigaroAPITest, FigaroProgram_vgs_7_Trim_Article_No_repair) {
    uint32_t missiontime = MISSIONTIME;
    double errorBound = ERRORBOUND_NonRep;
    double result = this->analyzeUnReliability(std::make_shared<storm::figaro::FigaroProgram_vgs_7_Trim_Article_No_repair>(storm::figaro::FigaroProgram_vgs_7_Trim_Article_No_repair()), missiontime);
    
    EXPECT_FLOAT_EQ(result, 0.00201696);
        //std::cout<<std::endl<<"Lower limit: "<<approxResult.first<<"  Nominal Value: "<<"0.00201696 "<<" Upper limit:"<<approxResult.second<<std::endl;
    
}
    ///***********************           Test Case Vehicle Guidance VGS_8 Trim_article_repair              ***********************/

TEST_F(FigaroAPITest, FigaroProgram_vgs_8_Trim_Article_repair) {
    uint32_t missiontime = MISSIONTIME;
    double errorBound = ERRORBOUND_Rep;
    double result = this->analyzeUnReliability(std::make_shared<storm::figaro::FigaroProgram_vgs_8_Trim_Article_repair>(storm::figaro::FigaroProgram_vgs_8_Trim_Article_repair()), missiontime);
    
    EXPECT_FLOAT_EQ(result, 0.00201696);
        //std::cout<<std::endl<<"Lower limit: "<<approxResult.first<<"  Nominal Value: "<<"0.00201696 "<<" Upper limit:"<<approxResult.second<<std::endl;
    
}
    /////***********************           Test Case Vehicle Guidance VGS_8 Trim_article_no_repair              ***********************/

TEST_F(FigaroAPITest, FigaroProgram_vgs_8_Trim_Article_No_repair) {
    uint32_t missiontime = MISSIONTIME;
    double errorBound = ERRORBOUND_NonRep;
    double result = this->analyzeUnReliability(std::make_shared<storm::figaro::FigaroProgram_vgs_8_Trim_Article_No_repair>(storm::figaro::FigaroProgram_vgs_8_Trim_Article_No_repair()), missiontime);
    
    EXPECT_FLOAT_EQ(result, 0.00201696);
        //std::cout<<std::endl<<"Lower limit: "<<approxResult.first<<"  Nominal Value: "<<"0.00201696 "<<" Upper limit:"<<approxResult.second<<std::endl;
    
}
