//#include "test/storm_gtest.h"
//#include "storm-config.h"
//#include "storm/api/verification.h"
//#include "storm-figaro/api/storm-figaro.h"
//#include "figaro-test-headers.h"
//
//#include <string>
//#include "storm/modelchecker/results/ExplicitQualitativeCheckResult.h"
//#include <iostream>
//
//namespace {
//#define ERRORBOUND_Rep 0.0001
//#define ERRORBOUND_NonRep 0.0001
//#define MISSIONTIME 1
//#define exclusion
//
//    class FigaroAPITest : public ::testing::Test {
//    public:
//
//        FigaroAPITest() {
//            std::cout << std::endl << "test_info: " << ::testing::UnitTest::GetInstance()->current_test_info()->name()
//                      << std::endl;
//        }
//
//        double analyzeUnReliability(std::shared_ptr<storm::figaro::FigaroProgram> figaromodel, uint32_t missiontime) {
//            std::string property = "Pmin=? [F<=" + std::to_string(missiontime) + "\"failed\"]";
//            std::vector<std::shared_ptr<storm::logic::Formula const>> properties = storm::api::extractFormulasFromProperties(
//                    storm::api::parseProperties(property));
//
//            storm::figaro::modelchecker::FigaroModelChecker<double>::figaro_results results =
//                    storm::figaro::api::analyzeFigaro<double>(*figaromodel, properties);
//            return boost::get<double>(results[0]);
//        }
//
//        double analyzeUnAvailability(std::shared_ptr<storm::figaro::FigaroProgram> figaromodel, uint32_t missiontime) {
//            std::string property =
//                    "Pmin=? [F[" + std::to_string(missiontime) + "," + std::to_string(missiontime) + "] \"failed\"]";
//            std::vector<std::shared_ptr<storm::logic::Formula const>> properties = storm::api::extractFormulasFromProperties(
//                    storm::api::parseProperties(property));
//
//            storm::figaro::modelchecker::FigaroModelChecker<double>::figaro_results results =
//                    storm::figaro::api::analyzeFigaro<double>(*figaromodel, properties);
//            return boost::get<double>(results[0]);
//        }
//        double longRunAverage(std::shared_ptr<storm::figaro::FigaroProgram> figaromodel) {
//            std::string property = "S=? [\"failed\"]";
//            std::vector<std::shared_ptr<storm::logic::Formula const>> properties = storm::api::extractFormulasFromProperties(
//                    storm::api::parseProperties(property));
//            storm::figaro::modelchecker::FigaroModelChecker<double>::figaro_results results =
//                    storm::figaro::api::analyzeFigaro<double>(*figaromodel, properties);
//            return boost::get<double>(results[0]);
//        }
//
//    };
//
///************************  01_FigaroProgram_figaro_01_and  ************************/
//    TEST_F(FigaroAPITest, FigaroProgram_figaro_01_and) {
//        uint32_t missiontime = 100;
//        double result = this->analyzeUnReliability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_01_and>(
//                        storm::figaro::FigaroProgram_figaro_01_and()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.002488490481);
//        result = this->analyzeUnAvailability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_01_and>(
//                        storm::figaro::FigaroProgram_figaro_01_and()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.000001249092981);
//    }
///************************  FigaroProgram_figaro_02_or  ************************/
//    TEST_F(FigaroAPITest, FigaroProgram_figaro_02_or) {
//        uint32_t missiontime =100;
//        double result = this->analyzeUnReliability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_02_or>(
//                        storm::figaro::FigaroProgram_figaro_02_or()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.002488490481);
//        result = this->analyzeUnAvailability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_02_or>(
//                        storm::figaro::FigaroProgram_figaro_02_or()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.000001249092981);
//    }
///************************  FigaroProgram_figaro_03_and3  ************************/
//    TEST_F(FigaroAPITest, FigaroProgram_figaro_03_and3) {
//        uint32_t missiontime =100;
//        double result = this->analyzeUnReliability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_03_and3>(
//                        storm::figaro::FigaroProgram_figaro_03_and3()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.002488490481);
//        result = this->analyzeUnAvailability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_03_and3>(
//                        storm::figaro::FigaroProgram_figaro_03_and3()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.000001249092981);
//    }
///************************  FigaroProgram_figaro_04_and_or  ************************/
//    TEST_F(FigaroAPITest, FigaroProgram_figaro_04_and_or) {
//        uint32_t missiontime =100;
//        double result = this->analyzeUnReliability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_04_and_or>(
//                        storm::figaro::FigaroProgram_figaro_04_and_or()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.002488490481);
//        result = this->analyzeUnAvailability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_04_and_or>(
//                        storm::figaro::FigaroProgram_figaro_04_and_or()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.000001249092981);
//    }
//
///************************  FigaroProgram_figaro_05_and_trig  ************************/
//    TEST_F(FigaroAPITest, FigaroProgram_figaro_05_and_trig) {
//        uint32_t missiontime =1000;
//        double result = this->analyzeUnReliability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_05_and_trig>(
//                        storm::figaro::FigaroProgram_figaro_05_and_trig()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.002488490481);
//        result = this->analyzeUnAvailability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_05_and_trig>(
//                        storm::figaro::FigaroProgram_figaro_05_and_trig()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.000001249092981);
//    }
///************************  FigaroProgram_figaro_06_or_trig  ************************/
//    TEST_F(FigaroAPITest, FigaroProgram_figaro_06_or_trig) {
//        uint32_t missiontime =100;
//        double result = this->analyzeUnReliability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_06_or_trig>(
//                        storm::figaro::FigaroProgram_figaro_06_or_trig()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.002488490481);
//        result = this->analyzeUnAvailability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_06_or_trig>(
//                        storm::figaro::FigaroProgram_figaro_06_or_trig()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.000001249092981);
//    }
///************************  FigaroProgram_figaro_07_and_and_trig  ************************/
//    TEST_F(FigaroAPITest, FigaroProgram_figaro_07_and_and_trig) {
//        uint32_t missiontime =1000;
//        double result = this->analyzeUnReliability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_07_and_and_trig>(
//                        storm::figaro::FigaroProgram_figaro_07_and_and_trig()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.002488490481);
//        result = this->analyzeUnAvailability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_07_and_and_trig>(
//                        storm::figaro::FigaroProgram_figaro_07_and_and_trig()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.000001249092981);
//    }
///************************  FigaroProgram_figaro_08_and_and_trig_common  ************************/
//    TEST_F(FigaroAPITest, FigaroProgram_figaro_08_and_and_trig_common) {
//        uint32_t missiontime =1000;
//        double result = this->analyzeUnReliability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_08_and_and_trig_common>(
//                        storm::figaro::FigaroProgram_figaro_08_and_and_trig_common()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.002488490481);
//        result = this->analyzeUnAvailability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_08_and_and_trig_common>(
//                        storm::figaro::FigaroProgram_figaro_08_and_and_trig_common()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.000001249092981);
//    }
//
//    /************************  FigaroProgram_figaro_09_and_inv_trig  ************************/
//    TEST_F(FigaroAPITest, FigaroProgram_figaro_09_and_inv_trig) {
//        uint32_t missiontime =1000;
//        double result = this->analyzeUnReliability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_09_and_inv_trig>(
//                        storm::figaro::FigaroProgram_figaro_09_and_inv_trig()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.002488490481);
//        result = this->analyzeUnAvailability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_09_and_inv_trig>(
//                        storm::figaro::FigaroProgram_figaro_09_and_inv_trig()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.000001249092981);
//    }
///************************  FigaroProgram_figaro_10_vot  ************************/
//    TEST_F(FigaroAPITest, FigaroProgram_figaro_10_vot) {
//        uint32_t missiontime =1000;
//        double result = this->analyzeUnReliability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_10_vot>(
//                        storm::figaro::FigaroProgram_figaro_10_vot()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.002488490481);
//        result = this->analyzeUnAvailability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_10_vot>(
//                        storm::figaro::FigaroProgram_figaro_10_vot()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.000001249092981);
//    }
///************************  FigaroProgram_figaro_11_inst_and  ************************/
//    TEST_F(FigaroAPITest, FigaroProgram_figaro_11_inst_and) {
//        uint32_t missiontime =1000;
//        double result = this->analyzeUnReliability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_11_inst_and>(
//                        storm::figaro::FigaroProgram_figaro_11_inst_and()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.002488490481);
//        result = this->analyzeUnAvailability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_11_inst_and>(
//                        storm::figaro::FigaroProgram_figaro_11_inst_and()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.000001249092981);
//    }
///************************  FigaroProgram_figaro_12_test  ************************/
//    TEST_F(FigaroAPITest, FigaroProgram_figaro_12_test) {
//        uint32_t missiontime =1000;
//        double result = this->analyzeUnReliability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_12_test>(
//                        storm::figaro::FigaroProgram_figaro_12_test()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.002488490481);
//        result = this->analyzeUnAvailability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_12_test>(
//                        storm::figaro::FigaroProgram_figaro_12_test()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.000001249092981);
//    }
///************************  FigaroProgram_figaro_13_PAND_rep_all  ************************/
//    TEST_F(FigaroAPITest, FigaroProgram_figaro_13_PAND_rep_all) {
//        uint32_t missiontime =10000;
//        double result = this->analyzeUnReliability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_13_PAND_rep_all>(
//                        storm::figaro::FigaroProgram_figaro_13_PAND_rep_all()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.002488490481);
//        result = this->analyzeUnAvailability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_13_PAND_rep_all>(
//                        storm::figaro::FigaroProgram_figaro_13_PAND_rep_all()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.000001249092981);
//    }/************************  FigaroProgram_figaro_14_PAND_rep_any  ************************/
//    TEST_F(FigaroAPITest, FigaroProgram_figaro_14_PAND_rep_any) {
//        uint32_t missiontime =10000;
//        double result = this->analyzeUnReliability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_14_PAND_rep_any>(
//                        storm::figaro::FigaroProgram_figaro_14_PAND_rep_any()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.002488490481);
//        result = this->analyzeUnAvailability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_14_PAND_rep_any>(
//                        storm::figaro::FigaroProgram_figaro_14_PAND_rep_any()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.000001249092981);
//    }
//    /************************  FigaroProgram_figaro_15_PAND_rep_first  ************************/
//    TEST_F(FigaroAPITest, FigaroProgram_figaro_15_PAND_rep_first) {
//        uint32_t missiontime =10000;
//        double result = this->analyzeUnReliability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_15_PAND_rep_first>(
//                        storm::figaro::FigaroProgram_figaro_15_PAND_rep_first()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.002488490481);
//        result = this->analyzeUnAvailability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_15_PAND_rep_first>(
//                        storm::figaro::FigaroProgram_figaro_15_PAND_rep_first()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.000001249092981);
//    }
//    /************************  FigaroProgram_figaro_16_PAND_rep_last  ************************/
//    TEST_F(FigaroAPITest, FigaroProgram_figaro_16_PAND_rep_last) {
//        uint32_t missiontime =10000;
//        double result = this->analyzeUnReliability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_16_PAND_rep_last>(
//                        storm::figaro::FigaroProgram_figaro_16_PAND_rep_last()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.002488490481);
//        result = this->analyzeUnAvailability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_16_PAND_rep_last>(
//                        storm::figaro::FigaroProgram_figaro_16_PAND_rep_last()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.000001249092981);
//    }
//    /************************  FigaroProgram_figaro_17_01  ************************/
//    TEST_F(FigaroAPITest, FigaroProgram_figaro_17_01) {
//        uint32_t missiontime =100;
//        double result = this->analyzeUnReliability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_01>(
//                        storm::figaro::FigaroProgram_figaro_17_01()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.002488490481);
//        result = this->analyzeUnAvailability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_01>(
//                        storm::figaro::FigaroProgram_figaro_17_01()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.000001249092981);
//    }
//    /************************  FigaroProgram_figaro_17_02  ************************/
//    TEST_F(FigaroAPITest, FigaroProgram_figaro_17_02) {
//        uint32_t missiontime =100;
//        double result = this->analyzeUnReliability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_02>(
//                        storm::figaro::FigaroProgram_figaro_17_02()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.002488490481);
//        result = this->analyzeUnAvailability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_02>(
//                        storm::figaro::FigaroProgram_figaro_17_02()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.000001249092981);
//    }
//    /************************  FigaroProgram_figaro_17_03  ************************/
//    TEST_F(FigaroAPITest, FigaroProgram_figaro_17_03) {
//        uint32_t missiontime =100;
//        double result = this->analyzeUnReliability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_03>(
//                        storm::figaro::FigaroProgram_figaro_17_03()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.002488490481);
//        result = this->analyzeUnAvailability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_03>(
//                        storm::figaro::FigaroProgram_figaro_17_03()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.000001249092981);
//    }
//    /************************  FigaroProgram_figaro_17_04  ************************/
//    TEST_F(FigaroAPITest, FigaroProgram_figaro_17_04) {
//        uint32_t missiontime =10;
//        double result = this->analyzeUnReliability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_04>(
//                        storm::figaro::FigaroProgram_figaro_17_04()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.002488490481);
//        result = this->analyzeUnAvailability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_04>(
//                        storm::figaro::FigaroProgram_figaro_17_04()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.000001249092981);
//    }
//    /************************  FigaroProgram_figaro_17_05  ************************/
//    TEST_F(FigaroAPITest, FigaroProgram_figaro_17_05) {
//        uint32_t missiontime =100;
//        double result = this->analyzeUnReliability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_05>(
//                        storm::figaro::FigaroProgram_figaro_17_05()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.002488490481);
//        result = this->analyzeUnAvailability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_05>(
//                        storm::figaro::FigaroProgram_figaro_17_05()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.000001249092981);
//    }
//    /************************  FigaroProgram_figaro_17_06  ************************/
//    TEST_F(FigaroAPITest, FigaroProgram_figaro_17_06) {
//        uint32_t missiontime =100;
//        double result = this->analyzeUnReliability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_06>(
//                        storm::figaro::FigaroProgram_figaro_17_06()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.002488490481);
//        result = this->analyzeUnAvailability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_06>(
//                        storm::figaro::FigaroProgram_figaro_17_06()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.000001249092981);
//    }
//    /************************  FigaroProgram_figaro_17_07  ************************/
//    TEST_F(FigaroAPITest, FigaroProgram_figaro_17_07) {
//        uint32_t missiontime =100;
//        double result = this->analyzeUnReliability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_07>(
//                        storm::figaro::FigaroProgram_figaro_17_07()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.002488490481);
//        result = this->analyzeUnAvailability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_07>(
//                        storm::figaro::FigaroProgram_figaro_17_07()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.000001249092981);
//    }
//    /************************  FigaroProgram_figaro_17_08  ************************/
//    TEST_F(FigaroAPITest, FigaroProgram_figaro_17_08) {
//        uint32_t missiontime =100;
//        double result = this->analyzeUnReliability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_08>(
//                        storm::figaro::FigaroProgram_figaro_17_08()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.002488490481);
//        result = this->analyzeUnAvailability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_08>(
//                        storm::figaro::FigaroProgram_figaro_17_08()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.000001249092981);
//    }
//    /************************  FigaroProgram_figaro_17_09  ************************/
//    TEST_F(FigaroAPITest, FigaroProgram_figaro_17_09) {
//        uint32_t missiontime =100;
//        double result = this->analyzeUnReliability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_09>(
//                        storm::figaro::FigaroProgram_figaro_17_09()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.002488490481);
//        result = this->analyzeUnAvailability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_09>(
//                        storm::figaro::FigaroProgram_figaro_17_09()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.000001249092981);
//    }
//    /************************  FigaroProgram_figaro_17_10  ************************/
//    TEST_F(FigaroAPITest, FigaroProgram_figaro_17_10) {
//        uint32_t missiontime =100;
//        double result = this->analyzeUnReliability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_10>(
//                        storm::figaro::FigaroProgram_figaro_17_10()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.002488490481);
//        result = this->analyzeUnAvailability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_10>(
//                        storm::figaro::FigaroProgram_figaro_17_10()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.000001249092981);
//    }
//    /************************  FigaroProgram_figaro_17_11  ************************/
//    TEST_F(FigaroAPITest, FigaroProgram_figaro_17_11) {
//        uint32_t missiontime =100;
//        double result = this->analyzeUnReliability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_11>(
//                        storm::figaro::FigaroProgram_figaro_17_11()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.002488490481);
//        result = this->analyzeUnAvailability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_11>(
//                        storm::figaro::FigaroProgram_figaro_17_11()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.000001249092981);
//    }
//    /************************  FigaroProgram_figaro_17_12  ************************/
//    TEST_F(FigaroAPITest, FigaroProgram_figaro_17_12) {
//        uint32_t missiontime =100;
//        double result = this->analyzeUnReliability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_12>(
//                        storm::figaro::FigaroProgram_figaro_17_12()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.002488490481);
//        result = this->analyzeUnAvailability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_12>(
//                        storm::figaro::FigaroProgram_figaro_17_12()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.000001249092981);
//    }
//    /************************  FigaroProgram_figaro_17_13 ************************/
//    TEST_F(FigaroAPITest, FigaroProgram_figaro_17_13) {
//        uint32_t missiontime =100;
//        double result = this->analyzeUnReliability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_13>(
//                        storm::figaro::FigaroProgram_figaro_17_13()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.002488490481);
//        result = this->analyzeUnAvailability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_13>(
//                        storm::figaro::FigaroProgram_figaro_17_13()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.000001249092981);
//    }
//    /************************  FigaroProgram_figaro_17_14  ************************/
//    TEST_F(FigaroAPITest, FigaroProgram_figaro_17_14) {
//        uint32_t missiontime =100;
//        double result = this->analyzeUnReliability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_14>(
//                        storm::figaro::FigaroProgram_figaro_17_14()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.002488490481);
//        result = this->analyzeUnAvailability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_14>(
//                        storm::figaro::FigaroProgram_figaro_17_14()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.000001249092981);
//    }
//    /************************  FigaroProgram_figaro_17_15  ************************/
//    TEST_F(FigaroAPITest, FigaroProgram_figaro_17_15) {
//        uint32_t missiontime =100;
//        double result = this->analyzeUnReliability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_15>(
//                        storm::figaro::FigaroProgram_figaro_17_15()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.002488490481);
//        result = this->analyzeUnAvailability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_15>(
//                        storm::figaro::FigaroProgram_figaro_17_15()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.000001249092981);
//    }
//        /************************  FigaroProgram_figaro_17_08  ************************/
//    TEST_F(FigaroAPITest, FigaroProgram_figaro_17_16) {
//        uint32_t missiontime =100;
//        double result = this->analyzeUnReliability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_16>(
//                        storm::figaro::FigaroProgram_figaro_17_16()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.002488490481);
//        result = this->analyzeUnAvailability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_16>(
//                        storm::figaro::FigaroProgram_figaro_17_16()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.000001249092981);
//    }
//    /************************  FigaroProgram_figaro_17_17  ************************/
//    TEST_F(FigaroAPITest, FigaroProgram_figaro_17_17) {
//        uint32_t missiontime =100;
//        double result = this->analyzeUnReliability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_17>(
//                        storm::figaro::FigaroProgram_figaro_17_17()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.002488490481);
//        result = this->analyzeUnAvailability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_17>(
//                        storm::figaro::FigaroProgram_figaro_17_17()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.000001249092981);
//    }
//    /************************  FigaroProgram_figaro_17_18  ************************/
//    TEST_F(FigaroAPITest, FigaroProgram_figaro_17_18) {
//        uint32_t missiontime =100;
//        double result = this->analyzeUnReliability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_18>(
//                        storm::figaro::FigaroProgram_figaro_17_18()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.002488490481);
//        result = this->analyzeUnAvailability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_18>(
//                        storm::figaro::FigaroProgram_figaro_17_18()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.000001249092981);
//    }
//    /************************  FigaroProgram_figaro_17_19  ************************/
//    TEST_F(FigaroAPITest, FigaroProgram_figaro_17_19) {
//        uint32_t missiontime =100;
//        double result = this->analyzeUnReliability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_19>(
//                        storm::figaro::FigaroProgram_figaro_17_19()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.002488490481);
//        result = this->analyzeUnAvailability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_19>(
//                        storm::figaro::FigaroProgram_figaro_17_19()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.000001249092981);
//    }
//    /************************  FigaroProgram_figaro_17_20  ************************/
//    TEST_F(FigaroAPITest, FigaroProgram_figaro_17_20) {
//        uint32_t missiontime =10;
//        double result = this->analyzeUnReliability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_20>(
//                        storm::figaro::FigaroProgram_figaro_17_20()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.002488490481);
//        result = this->analyzeUnAvailability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_20>(
//                        storm::figaro::FigaroProgram_figaro_17_20()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.000001249092981);
//    }
//    /************************  FigaroProgram_figaro_17_21 ************************/
//    TEST_F(FigaroAPITest, FigaroProgram_figaro_17_21) {
//        uint32_t missiontime =100;
//        double result = this->analyzeUnReliability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_21>(
//                        storm::figaro::FigaroProgram_figaro_17_21()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.002488490481);
//        result = this->analyzeUnAvailability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_21>(
//                        storm::figaro::FigaroProgram_figaro_17_21()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.000001249092981);
//    }
//    /************************  FigaroProgram_figaro_17_22  ************************/
//    TEST_F(FigaroAPITest, FigaroProgram_figaro_17_22) {
//        uint32_t missiontime =10;
//        double result = this->analyzeUnReliability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_22>(
//                        storm::figaro::FigaroProgram_figaro_17_22()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.002488490481);
//        result = this->analyzeUnAvailability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_22>(
//                        storm::figaro::FigaroProgram_figaro_17_22()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.000001249092981);
//    }
//    /************************  FigaroProgram_figaro_17_23  ************************/
//    TEST_F(FigaroAPITest, FigaroProgram_figaro_17_23) {
//        uint32_t missiontime =100;
//        double result = this->analyzeUnReliability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_23>(
//                        storm::figaro::FigaroProgram_figaro_17_23()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.002488490481);
//        result = this->analyzeUnAvailability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_23>(
//                        storm::figaro::FigaroProgram_figaro_17_23()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.000001249092981);
//    }
//    /************************  FigaroProgram_figaro_17_23_A  ************************/
//    TEST_F(FigaroAPITest, FigaroProgram_figaro_17_23_A_10) {
//        uint32_t missiontime =10;
//        double result = this->analyzeUnReliability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_23_A>(
//                        storm::figaro::FigaroProgram_figaro_17_23_A()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.002488490481);
//        result = this->analyzeUnAvailability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_23_A>(
//                        storm::figaro::FigaroProgram_figaro_17_23_A()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.000001249092981);
//    }
//    /************************  FigaroProgram_figaro_17_23_B  ************************/
//    TEST_F(FigaroAPITest, FigaroProgram_figaro_17_23_B_10) {
//        uint32_t missiontime =10;
//        double result = this->analyzeUnReliability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_23_B>(
//                        storm::figaro::FigaroProgram_figaro_17_23_B()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.002488490481);
//        result = this->analyzeUnAvailability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_23_B>(
//                        storm::figaro::FigaroProgram_figaro_17_23_B()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.000001249092981);
//    }
//    /************************  FigaroProgram_figaro_17_23_A  ************************/
//    TEST_F(FigaroAPITest, FigaroProgram_figaro_17_23_A_20) {
//        uint32_t missiontime =20;
//        double result = this->analyzeUnReliability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_23_A>(
//                        storm::figaro::FigaroProgram_figaro_17_23_A()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.002488490481);
//        result = this->analyzeUnAvailability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_23_A>(
//                        storm::figaro::FigaroProgram_figaro_17_23_A()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.000001249092981);
//    }
//    /************************  FigaroProgram_figaro_17_23_B  ************************/
//    TEST_F(FigaroAPITest, FigaroProgram_figaro_17_23_B_20) {
//        uint32_t missiontime =20;
//        double result = this->analyzeUnReliability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_23_B>(
//                        storm::figaro::FigaroProgram_figaro_17_23_B()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.002488490481);
//        result = this->analyzeUnAvailability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_23_B>(
//                        storm::figaro::FigaroProgram_figaro_17_23_B()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.000001249092981);
//    }
//    /************************  FigaroProgram_figaro_17_23_A  ************************/
//    TEST_F(FigaroAPITest, FigaroProgram_figaro_17_23_A_50) {
//        uint32_t missiontime =50;
//        double result = this->analyzeUnReliability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_23_A>(
//                        storm::figaro::FigaroProgram_figaro_17_23_A()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.002488490481);
//        result = this->analyzeUnAvailability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_23_A>(
//                        storm::figaro::FigaroProgram_figaro_17_23_A()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.000001249092981);
//    }
//    /************************  FigaroProgram_figaro_17_23_B  ************************/
//    TEST_F(FigaroAPITest, FigaroProgram_figaro_17_23_B_50) {
//        uint32_t missiontime =50;
//        double result = this->analyzeUnReliability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_23_B>(
//                        storm::figaro::FigaroProgram_figaro_17_23_B()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.002488490481);
//        result = this->analyzeUnAvailability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_23_B>(
//                        storm::figaro::FigaroProgram_figaro_17_23_B()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.000001249092981);
//    }
//    /************************  FigaroProgram_figaro_17_23_A  ************************/
//    TEST_F(FigaroAPITest, FigaroProgram_figaro_17_23_A_100) {
//        uint32_t missiontime =100;
//        double result = this->analyzeUnReliability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_23_A>(
//                        storm::figaro::FigaroProgram_figaro_17_23_A()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.002488490481);
//        result = this->analyzeUnAvailability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_23_A>(
//                        storm::figaro::FigaroProgram_figaro_17_23_A()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.000001249092981);
//    }
//    /************************  FigaroProgram_figaro_17_23_B  ************************/
//    TEST_F(FigaroAPITest, FigaroProgram_figaro_17_23_B_100) {
//        uint32_t missiontime =100;
//        double result = this->analyzeUnReliability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_23_B>(
//                        storm::figaro::FigaroProgram_figaro_17_23_B()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.002488490481);
//        result = this->analyzeUnAvailability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_23_B>(
//                        storm::figaro::FigaroProgram_figaro_17_23_B()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.000001249092981);
//    }
//    /************************  FigaroProgram_figaro_17_23_A  ************************/
//    TEST_F(FigaroAPITest, FigaroProgram_figaro_17_23_A_200) {
//        uint32_t missiontime =200;
//        double result = this->analyzeUnReliability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_23_A>(
//                        storm::figaro::FigaroProgram_figaro_17_23_A()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.002488490481);
//        result = this->analyzeUnAvailability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_23_A>(
//                        storm::figaro::FigaroProgram_figaro_17_23_A()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.000001249092981);
//    }
//    /************************  FigaroProgram_figaro_17_23_B  ************************/
//    TEST_F(FigaroAPITest, FigaroProgram_figaro_17_23_B_200) {
//        uint32_t missiontime =200;
//        double result = this->analyzeUnReliability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_23_B>(
//                        storm::figaro::FigaroProgram_figaro_17_23_B()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.002488490481);
//        result = this->analyzeUnAvailability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_23_B>(
//                        storm::figaro::FigaroProgram_figaro_17_23_B()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.000001249092981);
//    }
//    /************************  FigaroProgram_figaro_17_23_A  ************************/
//    TEST_F(FigaroAPITest, FigaroProgram_figaro_17_23_A_500) {
//        uint32_t missiontime =500;
//        double result = this->analyzeUnReliability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_23_A>(
//                        storm::figaro::FigaroProgram_figaro_17_23_A()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.002488490481);
//        result = this->analyzeUnAvailability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_23_A>(
//                        storm::figaro::FigaroProgram_figaro_17_23_A()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.000001249092981);
//    }
//    /************************  FigaroProgram_figaro_17_23_B  ************************/
//    TEST_F(FigaroAPITest, FigaroProgram_figaro_17_23_B_500) {
//        uint32_t missiontime =500;
//        double result = this->analyzeUnReliability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_23_B>(
//                        storm::figaro::FigaroProgram_figaro_17_23_B()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.002488490481);
//        result = this->analyzeUnAvailability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_23_B>(
//                        storm::figaro::FigaroProgram_figaro_17_23_B()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.000001249092981);
//    }
//    /************************  FigaroProgram_figaro_17_23_A  ************************/
//    TEST_F(FigaroAPITest, FigaroProgram_figaro_17_23_A_1000) {
//        uint32_t missiontime =1000;
//        double result = this->analyzeUnReliability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_23_A>(
//                        storm::figaro::FigaroProgram_figaro_17_23_A()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.002488490481);
//        result = this->analyzeUnAvailability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_23_A>(
//                        storm::figaro::FigaroProgram_figaro_17_23_A()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.000001249092981);
//    }
//    /************************  FigaroProgram_figaro_17_23_B  ************************/
//    TEST_F(FigaroAPITest, FigaroProgram_figaro_17_23_B_1000) {
//        uint32_t missiontime =1000;
//        double result = this->analyzeUnReliability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_23_B>(
//                        storm::figaro::FigaroProgram_figaro_17_23_B()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.002488490481);
//        result = this->analyzeUnAvailability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_23_B>(
//                        storm::figaro::FigaroProgram_figaro_17_23_B()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.000001249092981);
//    }
//    /************************  FigaroProgram_figaro_17_23_A  ************************/
//    TEST_F(FigaroAPITest, FigaroProgram_figaro_17_23_A_2000) {
//        uint32_t missiontime =2000;
//        double result = this->analyzeUnReliability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_23_A>(
//                        storm::figaro::FigaroProgram_figaro_17_23_A()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.002488490481);
//        result = this->analyzeUnAvailability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_23_A>(
//                        storm::figaro::FigaroProgram_figaro_17_23_A()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.000001249092981);
//    }
//    /************************  FigaroProgram_figaro_17_23_B  ************************/
//    TEST_F(FigaroAPITest, FigaroProgram_figaro_17_23_B_2000) {
//        uint32_t missiontime =2000;
//        double result = this->analyzeUnReliability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_23_B>(
//                        storm::figaro::FigaroProgram_figaro_17_23_B()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.002488490481);
//        result = this->analyzeUnAvailability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_23_B>(
//                        storm::figaro::FigaroProgram_figaro_17_23_B()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.000001249092981);
//    }
//    /************************  FigaroProgram_figaro_17_23_A  ************************/
//    TEST_F(FigaroAPITest, FigaroProgram_figaro_17_23_A_5000) {
//        uint32_t missiontime =5000;
//        double result = this->analyzeUnReliability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_23_A>(
//                        storm::figaro::FigaroProgram_figaro_17_23_A()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.002488490481);
//        result = this->analyzeUnAvailability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_23_A>(
//                        storm::figaro::FigaroProgram_figaro_17_23_A()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.000001249092981);
//    }
//    /************************  FigaroProgram_figaro_17_23_B  ************************/
//    TEST_F(FigaroAPITest, FigaroProgram_figaro_17_23_B_5000) {
//        uint32_t missiontime =5000;
//        double result = this->analyzeUnReliability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_23_B>(
//                        storm::figaro::FigaroProgram_figaro_17_23_B()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.002488490481);
//        result = this->analyzeUnAvailability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_23_B>(
//                        storm::figaro::FigaroProgram_figaro_17_23_B()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.000001249092981);
//    }
//    /************************  FigaroProgram_figaro_17_23_A  ************************/
//    TEST_F(FigaroAPITest, FigaroProgram_figaro_17_23_A_10000) {
//        uint32_t missiontime =10000;
//        double result = this->analyzeUnReliability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_23_A>(
//                        storm::figaro::FigaroProgram_figaro_17_23_A()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.002488490481);
//        result = this->analyzeUnAvailability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_23_A>(
//                        storm::figaro::FigaroProgram_figaro_17_23_A()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.000001249092981);
//    }
//    /************************  FigaroProgram_figaro_17_23_B  ************************/
//    TEST_F(FigaroAPITest, FigaroProgram_figaro_17_23_B_10000) {
//        uint32_t missiontime =10000;
//        double result = this->analyzeUnReliability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_23_B>(
//                        storm::figaro::FigaroProgram_figaro_17_23_B()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.002488490481);
//        result = this->analyzeUnAvailability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_23_B>(
//                        storm::figaro::FigaroProgram_figaro_17_23_B()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.000001249092981);
//    }
//    /************************  FigaroProgram_figaro_17_23_A  ************************/
//    TEST_F(FigaroAPITest, FigaroProgram_figaro_17_23_A_20000) {
//        uint32_t missiontime =20000;
//        double result = this->analyzeUnReliability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_23_A>(
//                        storm::figaro::FigaroProgram_figaro_17_23_A()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.002488490481);
//        result = this->analyzeUnAvailability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_23_A>(
//                        storm::figaro::FigaroProgram_figaro_17_23_A()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.000001249092981);
//    }
//    /************************  FigaroProgram_figaro_17_23_B  ************************/
//    TEST_F(FigaroAPITest, FigaroProgram_figaro_17_23_B_20000) {
//        uint32_t missiontime =20000;
//        double result = this->analyzeUnReliability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_23_B>(
//                        storm::figaro::FigaroProgram_figaro_17_23_B()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.002488490481);
//        result = this->analyzeUnAvailability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_17_23_B>(
//                        storm::figaro::FigaroProgram_figaro_17_23_B()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.000001249092981);
//    }
//
//
//
//    /************************  FigaroProgram_figaro_04_A  ************************/
//    TEST_F(FigaroAPITest, FigaroProgram_figaro_04_A) {
//        uint32_t missiontime =100;
//        double result = this->analyzeUnReliability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_04_A>(
//                        storm::figaro::FigaroProgram_figaro_04_A()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.002488490481);
//        result = this->analyzeUnAvailability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_04_A>(
//                        storm::figaro::FigaroProgram_figaro_04_A()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.000001249092981);
//    }
//    TEST_F(FigaroAPITest, FigaroProgram_figaro_04_A_lra) {
//        double result = this->longRunAverage(std::make_shared<storm::figaro::FigaroProgram_figaro_04_A>(storm::figaro::FigaroProgram_figaro_04_A()));
//        EXPECT_FLOAT_EQ(result,0.00021015652);
//    }
//    /************************  FigaroProgram_figaro_04_B  ************************/
//    TEST_F(FigaroAPITest, FigaroProgram_figaro_04_B) {
//        uint32_t missiontime =10000;
//        double result = this->analyzeUnReliability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_04_B>(
//                        storm::figaro::FigaroProgram_figaro_04_B()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.002488490481);
//        result = this->analyzeUnAvailability(
//                std::make_shared<storm::figaro::FigaroProgram_figaro_04_B>(
//                        storm::figaro::FigaroProgram_figaro_04_B()), missiontime);
//        EXPECT_FLOAT_EQ(result, 0.000001249092981);
//    }
//    TEST_F(FigaroAPITest, FigaroProgram_figaro_04_B_lra) {
//        double result = this->longRunAverage(std::make_shared<storm::figaro::FigaroProgram_figaro_04_B>(storm::figaro::FigaroProgram_figaro_04_B()));
//        EXPECT_FLOAT_EQ(result,0.00021015652);
//    }
//
//}