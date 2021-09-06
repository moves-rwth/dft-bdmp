
    #pragma once
    #include "storm-figaro/model/FigaroModelTemplate.h"
    #include <array>
    #include <map>
    #include <vector>
    #include <sstream>
    #include<math.h>
    #include <set>

    namespace storm{
        namespace figaro{
        class FigaroProgram_figaro_17_23_A: public storm::figaro::FigaroProgram{
        public:
        FigaroProgram_figaro_17_23_A(): FigaroProgram(//            std::map<std::string, size_t> mFigaroboolelementindex =
                    {  
            	{"required_OF_Bus" , 0},
            	{"already_S_OF_Bus" , 1},
            	{"S_OF_Bus" , 2},
            	{"relevant_evt_OF_Bus" , 3},
            	{"failF_OF_Bus" , 4},
            	{"required_OF_CM1_loss" , 5},
            	{"already_S_OF_CM1_loss" , 6},
            	{"S_OF_CM1_loss" , 7},
            	{"relevant_evt_OF_CM1_loss" , 8},
            	{"required_OF_CM2_loss" , 9},
            	{"already_S_OF_CM2_loss" , 10},
            	{"S_OF_CM2_loss" , 11},
            	{"relevant_evt_OF_CM2_loss" , 12},
            	{"required_OF_D11" , 13},
            	{"already_S_OF_D11" , 14},
            	{"S_OF_D11" , 15},
            	{"relevant_evt_OF_D11" , 16},
            	{"failF_OF_D11" , 17},
            	{"required_OF_D12" , 18},
            	{"already_S_OF_D12" , 19},
            	{"S_OF_D12" , 20},
            	{"relevant_evt_OF_D12" , 21},
            	{"failF_OF_D12" , 22},
            	{"failS_OF_D12" , 23},
            	{"required_OF_D21" , 24},
            	{"already_S_OF_D21" , 25},
            	{"S_OF_D21" , 26},
            	{"relevant_evt_OF_D21" , 27},
            	{"failF_OF_D21" , 28},
            	{"required_OF_D22" , 29},
            	{"already_S_OF_D22" , 30},
            	{"S_OF_D22" , 31},
            	{"relevant_evt_OF_D22" , 32},
            	{"failF_OF_D22" , 33},
            	{"failS_OF_D22" , 34},
            	{"required_OF_Disk1_loss" , 35},
            	{"already_S_OF_Disk1_loss" , 36},
            	{"S_OF_Disk1_loss" , 37},
            	{"relevant_evt_OF_Disk1_loss" , 38},
            	{"required_OF_Disk2_loss" , 39},
            	{"already_S_OF_Disk2_loss" , 40},
            	{"S_OF_Disk2_loss" , 41},
            	{"relevant_evt_OF_Disk2_loss" , 42},
            	{"required_OF_Loss_of_both_calculators" , 43},
            	{"already_S_OF_Loss_of_both_calculators" , 44},
            	{"S_OF_Loss_of_both_calculators" , 45},
            	{"relevant_evt_OF_Loss_of_both_calculators" , 46},
            	{"required_OF_M1" , 47},
            	{"already_S_OF_M1" , 48},
            	{"S_OF_M1" , 49},
            	{"relevant_evt_OF_M1" , 50},
            	{"failF_OF_M1" , 51},
            	{"required_OF_M2" , 52},
            	{"already_S_OF_M2" , 53},
            	{"S_OF_M2" , 54},
            	{"relevant_evt_OF_M2" , 55},
            	{"failF_OF_M2" , 56},
            	{"required_OF_M3" , 57},
            	{"already_S_OF_M3" , 58},
            	{"S_OF_M3" , 59},
            	{"relevant_evt_OF_M3" , 60},
            	{"failF_OF_M3" , 61},
            	{"failS_OF_M3" , 62},
            	{"required_OF_Mem1_loss" , 63},
            	{"already_S_OF_Mem1_loss" , 64},
            	{"S_OF_Mem1_loss" , 65},
            	{"relevant_evt_OF_Mem1_loss" , 66},
            	{"required_OF_Mem2_loss" , 67},
            	{"already_S_OF_Mem2_loss" , 68},
            	{"S_OF_Mem2_loss" , 69},
            	{"relevant_evt_OF_Mem2_loss" , 70},
            	{"required_OF_OR_1" , 71},
            	{"already_S_OF_OR_1" , 72},
            	{"S_OF_OR_1" , 73},
            	{"relevant_evt_OF_OR_1" , 74},
            	{"required_OF_One_main_mem_fail" , 75},
            	{"already_S_OF_One_main_mem_fail" , 76},
            	{"S_OF_One_main_mem_fail" , 77},
            	{"relevant_evt_OF_One_main_mem_fail" , 78},
            	{"required_OF_P1_loss" , 79},
            	{"already_S_OF_P1_loss" , 80},
            	{"S_OF_P1_loss" , 81},
            	{"relevant_evt_OF_P1_loss" , 82},
            	{"required_OF_P2_loss" , 83},
            	{"already_S_OF_P2_loss" , 84},
            	{"S_OF_P2_loss" , 85},
            	{"relevant_evt_OF_P2_loss" , 86},
            	{"required_OF_PS" , 87},
            	{"already_S_OF_PS" , 88},
            	{"S_OF_PS" , 89},
            	{"relevant_evt_OF_PS" , 90},
            	{"failF_OF_PS" , 91},
            	{"required_OF_Pa" , 92},
            	{"already_S_OF_Pa" , 93},
            	{"S_OF_Pa" , 94},
            	{"relevant_evt_OF_Pa" , 95},
            	{"failF_OF_Pa" , 96},
            	{"required_OF_Pb" , 97},
            	{"already_S_OF_Pb" , 98},
            	{"S_OF_Pb" , 99},
            	{"relevant_evt_OF_Pb" , 100},
            	{"failF_OF_Pb" , 101},
            	{"required_OF_UE_1" , 102},
            	{"already_S_OF_UE_1" , 103},
            	{"S_OF_UE_1" , 104},
            	{"relevant_evt_OF_UE_1" , 105}},

//            std::map<std::string, size_t> mFigaroelementfailureindex =
                    {  { "exp0",0}},

//            std::map<std::string, size_t> mFigarofloatelementindex =
                     { },

//            std::map<std::string, size_t> mFigarointelementindex =
                     { },

//            std::map<std::string, size_t> mFigaroenumelementindex =
                     { },

//            std::map<std::string, size_t> failure_variable_names =
                    {  "exp0"},

//            std::set<std::string> enum_variables_names =
                     { },

//            std::set<std::string> float_variables_names =
                     { },


//            std::string const topevent=
                    "exp0",
//            static int const numBoolState = 
                    106 ,
//             numBoolFailureState = 
                    1 ,
//            static int const numFloatState = 
                    0 ,
//            static int const numIntState = 
                    0 ,
//            static int const numEnumState = 
                    0 ,
//            bool ins_transition_found = 
                     false){} 

            /* ---------- CODING ENUMERATED VARIABLES STATES ------------ */
            enum enum_status {};

//            std::array<bool, numBoolState> boolState;
//            std::array<bool, numBoolState> backupBoolState;
//            std::array<float, numFloatState> floatState;
//            std::array<float, numFloatState> backupFloatState;
//            std::array<int, numIntState> intState;
//            std::array<int, numIntState> backupIntState;
//            std::array<int, numEnumState> enumState;
//            std::array<int, numEnumState> backupEnumState;
            bool REINITIALISATION_OF_required_OF_Bus ;
            bool REINITIALISATION_OF_S_OF_Bus ;
            bool REINITIALISATION_OF_relevant_evt_OF_Bus ;
            bool REINITIALISATION_OF_required_OF_CM1_loss ;
            bool REINITIALISATION_OF_S_OF_CM1_loss ;
            bool REINITIALISATION_OF_relevant_evt_OF_CM1_loss ;
            bool REINITIALISATION_OF_required_OF_CM2_loss ;
            bool REINITIALISATION_OF_S_OF_CM2_loss ;
            bool REINITIALISATION_OF_relevant_evt_OF_CM2_loss ;
            bool REINITIALISATION_OF_required_OF_D11 ;
            bool REINITIALISATION_OF_S_OF_D11 ;
            bool REINITIALISATION_OF_relevant_evt_OF_D11 ;
            bool REINITIALISATION_OF_required_OF_D12 ;
            bool REINITIALISATION_OF_S_OF_D12 ;
            bool REINITIALISATION_OF_relevant_evt_OF_D12 ;
            bool REINITIALISATION_OF_required_OF_D21 ;
            bool REINITIALISATION_OF_S_OF_D21 ;
            bool REINITIALISATION_OF_relevant_evt_OF_D21 ;
            bool REINITIALISATION_OF_required_OF_D22 ;
            bool REINITIALISATION_OF_S_OF_D22 ;
            bool REINITIALISATION_OF_relevant_evt_OF_D22 ;
            bool REINITIALISATION_OF_required_OF_Disk1_loss ;
            bool REINITIALISATION_OF_S_OF_Disk1_loss ;
            bool REINITIALISATION_OF_relevant_evt_OF_Disk1_loss ;
            bool REINITIALISATION_OF_required_OF_Disk2_loss ;
            bool REINITIALISATION_OF_S_OF_Disk2_loss ;
            bool REINITIALISATION_OF_relevant_evt_OF_Disk2_loss ;
            bool REINITIALISATION_OF_required_OF_Loss_of_both_calculators ;
            bool REINITIALISATION_OF_S_OF_Loss_of_both_calculators ;
            bool REINITIALISATION_OF_relevant_evt_OF_Loss_of_both_calculators ;
            bool REINITIALISATION_OF_required_OF_M1 ;
            bool REINITIALISATION_OF_S_OF_M1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_M1 ;
            bool REINITIALISATION_OF_required_OF_M2 ;
            bool REINITIALISATION_OF_S_OF_M2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_M2 ;
            bool REINITIALISATION_OF_required_OF_M3 ;
            bool REINITIALISATION_OF_S_OF_M3 ;
            bool REINITIALISATION_OF_relevant_evt_OF_M3 ;
            bool REINITIALISATION_OF_required_OF_Mem1_loss ;
            bool REINITIALISATION_OF_S_OF_Mem1_loss ;
            bool REINITIALISATION_OF_relevant_evt_OF_Mem1_loss ;
            bool REINITIALISATION_OF_required_OF_Mem2_loss ;
            bool REINITIALISATION_OF_S_OF_Mem2_loss ;
            bool REINITIALISATION_OF_relevant_evt_OF_Mem2_loss ;
            bool REINITIALISATION_OF_required_OF_OR_1 ;
            bool REINITIALISATION_OF_S_OF_OR_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_OR_1 ;
            bool REINITIALISATION_OF_required_OF_One_main_mem_fail ;
            bool REINITIALISATION_OF_S_OF_One_main_mem_fail ;
            bool REINITIALISATION_OF_relevant_evt_OF_One_main_mem_fail ;
            bool REINITIALISATION_OF_required_OF_P1_loss ;
            bool REINITIALISATION_OF_S_OF_P1_loss ;
            bool REINITIALISATION_OF_relevant_evt_OF_P1_loss ;
            bool REINITIALISATION_OF_required_OF_P2_loss ;
            bool REINITIALISATION_OF_S_OF_P2_loss ;
            bool REINITIALISATION_OF_relevant_evt_OF_P2_loss ;
            bool REINITIALISATION_OF_required_OF_PS ;
            bool REINITIALISATION_OF_S_OF_PS ;
            bool REINITIALISATION_OF_relevant_evt_OF_PS ;
            bool REINITIALISATION_OF_required_OF_Pa ;
            bool REINITIALISATION_OF_S_OF_Pa ;
            bool REINITIALISATION_OF_relevant_evt_OF_Pa ;
            bool REINITIALISATION_OF_required_OF_Pb ;
            bool REINITIALISATION_OF_S_OF_Pb ;
            bool REINITIALISATION_OF_relevant_evt_OF_Pb ;
            bool REINITIALISATION_OF_required_OF_UE_1 ;
            bool REINITIALISATION_OF_S_OF_UE_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_UE_1 ;
            
		/* ---------- DECLARATION OF CONSTANTS ------------ */
			std::string const calculate_required_OF_CM1_loss = "fn_fathers_and_trig";
			std::string const calculate_required_OF_UE_1 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_D22 = false;
			double const mu_OF_D22 = 0.3;
			bool const trimming_OF_OPTIONS = false;
			bool const force_relevant_events_OF_Pa = false;
			bool const Profil1_OF___ARBRE__EIRM = true;
			std::string const trigger_kind_OF_t_2 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_OR_1 = "fn_fathers_and_trig";
			std::string const trigger_kind_OF_t_1 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_One_main_mem_fail = "fn_fathers_and_trig";
			std::string const calculate_required_OF_P1_loss = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_M1 = false;
			bool const force_relevant_events_OF_P2_loss = false;
			bool const force_relevant_events_OF_D12 = false;
			double const mu_OF_D12 = 0.3;
			bool const failS_FROZEN_OF_D22 = false;
			double const mu_OF_M2 = 0.1;
			bool const force_relevant_events_OF_M2 = false;
			double const mu_OF_Pa = 0.2;
			std::string const calculate_required_OF_Disk2_loss = "fn_fathers_and_trig";
			double const lambda_OF_Pb = 5e-07;
			bool const force_relevant_events_OF_M3 = false;
			double const lambda_OF_D22 = 8e-05;
			std::string const calculate_required_OF_Loss_of_both_calculators = "fn_fathers_and_trig";
			bool const failS_FROZEN_OF_D12 = false;
			std::string const calculate_required_OF_M1 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_D22 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_M2 = false;
			bool const force_relevant_events_OF_Disk1_loss = false;
			bool const failS_FROZEN_OF_M3 = false;
			std::string const calculate_required_OF_Pa = "fn_fathers_and_trig";
			std::string const trimming_option_OF_OPTIONS = "maximum";
			bool const force_relevant_events_OF_D21 = false;
			double const mu_OF_D21 = 0.3;
			bool const failF_FROZEN_OF_M3 = false;
			double const lambda_OF_D12 = 8e-05;
			bool const failF_FROZEN_OF_D22 = false;
			double const lambda_OF_Bus = 2e-09;
			double const standby_lambda_OF_D22 = 4e-05;
			bool const force_relevant_events_OF_D11 = false;
			double const mu_OF_D11 = 0.3;
			std::string const calculate_required_OF_P2_loss = "fn_fathers_and_trig";
			std::string const calculate_required_OF_D12 = "fn_fathers_and_trig";
			double const lambda_OF_M1 = 3e-08;
			bool const failF_FROZEN_OF_Pa = false;
			bool const force_relevant_events_OF_UE_1 = true;
			double const mu_OF_Bus = 0.1;
			bool const force_relevant_events_OF_Bus = false;
			std::string const calculate_required_OF_M2 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_One_main_mem_fail = false;
			double const mu_OF_Pb = 0.2;
			std::string const calculate_required_OF_M3 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_PS = false;
			double const standby_lambda_OF_M3 = 1.5e-08;
			bool const failF_FROZEN_OF_D12 = false;
			std::string const trigger_kind_OF_t_1_1 = "fn_fathers_and_trig";
			double const standby_lambda_OF_D12 = 4e-05;
			bool const repairable_system_OF_OPTIONS = true;
			bool const force_relevant_events_OF_Mem1_loss = false;
			bool const force_relevant_events_OF_Mem2_loss = false;
			bool const force_relevant_events_OF_CM2_loss = false;
			bool const force_relevant_events_OF_Pb = false;
			bool const force_relevant_events_OF_CM1_loss = false;
			double const lambda_OF_D21 = 8e-05;
			std::string const calculate_required_OF_Disk1_loss = "fn_fathers_and_trig";
			double const lambda_OF_M2 = 3e-08;
			bool const force_relevant_events_OF_M1 = false;
			double const lambda_OF_PS = 6e-06;
			double const lambda_OF_D11 = 8e-05;
			std::string const calculate_required_OF_D21 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_PS = false;
			double const lambda_OF_M3 = 3e-08;
			std::string const calculate_required_OF_D11 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_OR_1 = false;
			bool const force_relevant_events_OF_P1_loss = false;
			bool const failF_FROZEN_OF_Pb = false;
			bool const failF_FROZEN_OF_D21 = false;
			std::string const calculate_required_OF_Bus = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_D11 = false;
			double const mu_OF_M3 = 0.5;
			std::string const calculate_required_OF_PS = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_Disk2_loss = false;
			double const lambda_OF_Pa = 5e-07;
			double const mu_OF_PS = 10;
			bool const failF_FROZEN_OF_Bus = false;
			bool const force_relevant_events_OF_Loss_of_both_calculators = false;
			std::string const calculate_required_OF_Mem1_loss = "fn_fathers_and_trig";
			std::string const calculate_required_OF_Mem2_loss = "fn_fathers_and_trig";
			double const mu_OF_M1 = 0.1;
			std::string const calculate_required_OF_CM2_loss = "fn_fathers_and_trig";
			std::string const calculate_required_OF_Pb = "fn_fathers_and_trig";
		
            /* ---------- DECLARATION OF OCCURRENCE RULES FIRING FLAGS ------------ */
            bool FIRE_xx10_OF_Bus;
            bool FIRE_xx11_OF_Bus;
            bool FIRE_xx10_OF_D11;
            bool FIRE_xx11_OF_D11;
            bool FIRE_xx17_OF_D12;
            bool FIRE_xx18_OF_D12;
            bool FIRE_xx19_OF_D12;
            bool FIRE_xx10_OF_D21;
            bool FIRE_xx11_OF_D21;
            bool FIRE_xx17_OF_D22;
            bool FIRE_xx18_OF_D22;
            bool FIRE_xx19_OF_D22;
            bool FIRE_xx10_OF_M1;
            bool FIRE_xx11_OF_M1;
            bool FIRE_xx10_OF_M2;
            bool FIRE_xx11_OF_M2;
            bool FIRE_xx17_OF_M3;
            bool FIRE_xx18_OF_M3;
            bool FIRE_xx19_OF_M3;
            bool FIRE_xx10_OF_PS;
            bool FIRE_xx11_OF_PS;
            bool FIRE_xx10_OF_Pa;
            bool FIRE_xx11_OF_Pa;
            bool FIRE_xx10_OF_Pb;
            bool FIRE_xx11_OF_Pb;

            int required_OF_Bus = 0 ;
            int already_S_OF_Bus = 1 ;
            int S_OF_Bus = 2 ;
            int relevant_evt_OF_Bus = 3 ;
            int failF_OF_Bus = 4 ;
            int required_OF_CM1_loss = 5 ;
            int already_S_OF_CM1_loss = 6 ;
            int S_OF_CM1_loss = 7 ;
            int relevant_evt_OF_CM1_loss = 8 ;
            int required_OF_CM2_loss = 9 ;
            int already_S_OF_CM2_loss = 10 ;
            int S_OF_CM2_loss = 11 ;
            int relevant_evt_OF_CM2_loss = 12 ;
            int required_OF_D11 = 13 ;
            int already_S_OF_D11 = 14 ;
            int S_OF_D11 = 15 ;
            int relevant_evt_OF_D11 = 16 ;
            int failF_OF_D11 = 17 ;
            int required_OF_D12 = 18 ;
            int already_S_OF_D12 = 19 ;
            int S_OF_D12 = 20 ;
            int relevant_evt_OF_D12 = 21 ;
            int failF_OF_D12 = 22 ;
            int failS_OF_D12 = 23 ;
            int required_OF_D21 = 24 ;
            int already_S_OF_D21 = 25 ;
            int S_OF_D21 = 26 ;
            int relevant_evt_OF_D21 = 27 ;
            int failF_OF_D21 = 28 ;
            int required_OF_D22 = 29 ;
            int already_S_OF_D22 = 30 ;
            int S_OF_D22 = 31 ;
            int relevant_evt_OF_D22 = 32 ;
            int failF_OF_D22 = 33 ;
            int failS_OF_D22 = 34 ;
            int required_OF_Disk1_loss = 35 ;
            int already_S_OF_Disk1_loss = 36 ;
            int S_OF_Disk1_loss = 37 ;
            int relevant_evt_OF_Disk1_loss = 38 ;
            int required_OF_Disk2_loss = 39 ;
            int already_S_OF_Disk2_loss = 40 ;
            int S_OF_Disk2_loss = 41 ;
            int relevant_evt_OF_Disk2_loss = 42 ;
            int required_OF_Loss_of_both_calculators = 43 ;
            int already_S_OF_Loss_of_both_calculators = 44 ;
            int S_OF_Loss_of_both_calculators = 45 ;
            int relevant_evt_OF_Loss_of_both_calculators = 46 ;
            int required_OF_M1 = 47 ;
            int already_S_OF_M1 = 48 ;
            int S_OF_M1 = 49 ;
            int relevant_evt_OF_M1 = 50 ;
            int failF_OF_M1 = 51 ;
            int required_OF_M2 = 52 ;
            int already_S_OF_M2 = 53 ;
            int S_OF_M2 = 54 ;
            int relevant_evt_OF_M2 = 55 ;
            int failF_OF_M2 = 56 ;
            int required_OF_M3 = 57 ;
            int already_S_OF_M3 = 58 ;
            int S_OF_M3 = 59 ;
            int relevant_evt_OF_M3 = 60 ;
            int failF_OF_M3 = 61 ;
            int failS_OF_M3 = 62 ;
            int required_OF_Mem1_loss = 63 ;
            int already_S_OF_Mem1_loss = 64 ;
            int S_OF_Mem1_loss = 65 ;
            int relevant_evt_OF_Mem1_loss = 66 ;
            int required_OF_Mem2_loss = 67 ;
            int already_S_OF_Mem2_loss = 68 ;
            int S_OF_Mem2_loss = 69 ;
            int relevant_evt_OF_Mem2_loss = 70 ;
            int required_OF_OR_1 = 71 ;
            int already_S_OF_OR_1 = 72 ;
            int S_OF_OR_1 = 73 ;
            int relevant_evt_OF_OR_1 = 74 ;
            int required_OF_One_main_mem_fail = 75 ;
            int already_S_OF_One_main_mem_fail = 76 ;
            int S_OF_One_main_mem_fail = 77 ;
            int relevant_evt_OF_One_main_mem_fail = 78 ;
            int required_OF_P1_loss = 79 ;
            int already_S_OF_P1_loss = 80 ;
            int S_OF_P1_loss = 81 ;
            int relevant_evt_OF_P1_loss = 82 ;
            int required_OF_P2_loss = 83 ;
            int already_S_OF_P2_loss = 84 ;
            int S_OF_P2_loss = 85 ;
            int relevant_evt_OF_P2_loss = 86 ;
            int required_OF_PS = 87 ;
            int already_S_OF_PS = 88 ;
            int S_OF_PS = 89 ;
            int relevant_evt_OF_PS = 90 ;
            int failF_OF_PS = 91 ;
            int required_OF_Pa = 92 ;
            int already_S_OF_Pa = 93 ;
            int S_OF_Pa = 94 ;
            int relevant_evt_OF_Pa = 95 ;
            int failF_OF_Pa = 96 ;
            int required_OF_Pb = 97 ;
            int already_S_OF_Pb = 98 ;
            int S_OF_Pb = 99 ;
            int relevant_evt_OF_Pb = 100 ;
            int failF_OF_Pb = 101 ;
            int required_OF_UE_1 = 102 ;
            int already_S_OF_UE_1 = 103 ;
            int S_OF_UE_1 = 104 ;
            int relevant_evt_OF_UE_1 = 105 ;




            int exp0 = 0 ;


            /* ---------- DECLARATION OF FUNCTIONS ------------ */
            void init();
            void saveCurrentState();
            void printState();
            void fireOccurrence(int numFire);
            std::vector<std::tuple<int, double, std::string, int>> showFireableOccurrences();
            void runOnceInteractionStep_initialization();
            void runOnceInteractionStep_propagate_effect_S();
            void runOnceInteractionStep_propagate_effect_required();
            void runOnceInteractionStep_propagate_leaves();
            int compareStates();
            void doReinitialisations();
            void runInteractions();
            void printstatetuple();
            void fireinsttransitiongroup(std::string);
            int_fast64_t stateSize() const;
            bool figaromodelhasinstransitions();
            };
        }
    }