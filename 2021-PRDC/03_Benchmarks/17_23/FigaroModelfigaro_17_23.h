
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
        class FigaroProgram_figaro_17_23: public storm::figaro::FigaroProgram{
        public:
        FigaroProgram_figaro_17_23(): FigaroProgram(//            std::map<std::string, size_t> mFigaroboolelementindex =
                    {  
            	{"required_OF_A1" , 0},
            	{"already_S_OF_A1" , 1},
            	{"S_OF_A1" , 2},
            	{"relevant_evt_OF_A1" , 3},
            	{"failF_OF_A1" , 4},
            	{"required_OF_A10" , 5},
            	{"already_S_OF_A10" , 6},
            	{"S_OF_A10" , 7},
            	{"relevant_evt_OF_A10" , 8},
            	{"required_OF_A11" , 9},
            	{"already_S_OF_A11" , 10},
            	{"S_OF_A11" , 11},
            	{"relevant_evt_OF_A11" , 12},
            	{"required_OF_A12" , 13},
            	{"already_S_OF_A12" , 14},
            	{"S_OF_A12" , 15},
            	{"relevant_evt_OF_A12" , 16},
            	{"required_OF_A13" , 17},
            	{"already_S_OF_A13" , 18},
            	{"S_OF_A13" , 19},
            	{"relevant_evt_OF_A13" , 20},
            	{"required_OF_A2" , 21},
            	{"already_S_OF_A2" , 22},
            	{"S_OF_A2" , 23},
            	{"relevant_evt_OF_A2" , 24},
            	{"failF_OF_A2" , 25},
            	{"required_OF_A3" , 26},
            	{"already_S_OF_A3" , 27},
            	{"S_OF_A3" , 28},
            	{"relevant_evt_OF_A3" , 29},
            	{"failF_OF_A3" , 30},
            	{"required_OF_A4" , 31},
            	{"already_S_OF_A4" , 32},
            	{"S_OF_A4" , 33},
            	{"relevant_evt_OF_A4" , 34},
            	{"required_OF_A5" , 35},
            	{"already_S_OF_A5" , 36},
            	{"S_OF_A5" , 37},
            	{"relevant_evt_OF_A5" , 38},
            	{"required_OF_A6" , 39},
            	{"already_S_OF_A6" , 40},
            	{"S_OF_A6" , 41},
            	{"relevant_evt_OF_A6" , 42},
            	{"required_OF_A7" , 43},
            	{"already_S_OF_A7" , 44},
            	{"S_OF_A7" , 45},
            	{"relevant_evt_OF_A7" , 46},
            	{"required_OF_A8" , 47},
            	{"already_S_OF_A8" , 48},
            	{"S_OF_A8" , 49},
            	{"relevant_evt_OF_A8" , 50},
            	{"required_OF_A9" , 51},
            	{"already_S_OF_A9" , 52},
            	{"S_OF_A9" , 53},
            	{"relevant_evt_OF_A9" , 54},
            	{"required_OF_D11" , 55},
            	{"already_S_OF_D11" , 56},
            	{"S_OF_D11" , 57},
            	{"relevant_evt_OF_D11" , 58},
            	{"failF_OF_D11" , 59},
            	{"required_OF_D12" , 60},
            	{"already_S_OF_D12" , 61},
            	{"S_OF_D12" , 62},
            	{"relevant_evt_OF_D12" , 63},
            	{"failF_OF_D12" , 64},
            	{"failS_OF_D12" , 65},
            	{"required_OF_D21" , 66},
            	{"already_S_OF_D21" , 67},
            	{"S_OF_D21" , 68},
            	{"relevant_evt_OF_D21" , 69},
            	{"failF_OF_D21" , 70},
            	{"required_OF_D22" , 71},
            	{"already_S_OF_D22" , 72},
            	{"S_OF_D22" , 73},
            	{"relevant_evt_OF_D22" , 74},
            	{"failF_OF_D22" , 75},
            	{"failS_OF_D22" , 76},
            	{"required_OF_M1" , 77},
            	{"already_S_OF_M1" , 78},
            	{"S_OF_M1" , 79},
            	{"relevant_evt_OF_M1" , 80},
            	{"failF_OF_M1" , 81},
            	{"required_OF_M2" , 82},
            	{"already_S_OF_M2" , 83},
            	{"S_OF_M2" , 84},
            	{"relevant_evt_OF_M2" , 85},
            	{"failF_OF_M2" , 86},
            	{"required_OF_M3" , 87},
            	{"already_S_OF_M3" , 88},
            	{"S_OF_M3" , 89},
            	{"relevant_evt_OF_M3" , 90},
            	{"failF_OF_M3" , 91},
            	{"failS_OF_M3" , 92},
            	{"required_OF_N" , 93},
            	{"already_S_OF_N" , 94},
            	{"S_OF_N" , 95},
            	{"relevant_evt_OF_N" , 96},
            	{"failF_OF_N" , 97},
            	{"required_OF_OR_1" , 98},
            	{"already_S_OF_OR_1" , 99},
            	{"S_OF_OR_1" , 100},
            	{"relevant_evt_OF_OR_1" , 101},
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
            bool REINITIALISATION_OF_required_OF_A1 ;
            bool REINITIALISATION_OF_S_OF_A1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A1 ;
            bool REINITIALISATION_OF_required_OF_A10 ;
            bool REINITIALISATION_OF_S_OF_A10 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A10 ;
            bool REINITIALISATION_OF_required_OF_A11 ;
            bool REINITIALISATION_OF_S_OF_A11 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A11 ;
            bool REINITIALISATION_OF_required_OF_A12 ;
            bool REINITIALISATION_OF_S_OF_A12 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A12 ;
            bool REINITIALISATION_OF_required_OF_A13 ;
            bool REINITIALISATION_OF_S_OF_A13 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A13 ;
            bool REINITIALISATION_OF_required_OF_A2 ;
            bool REINITIALISATION_OF_S_OF_A2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A2 ;
            bool REINITIALISATION_OF_required_OF_A3 ;
            bool REINITIALISATION_OF_S_OF_A3 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A3 ;
            bool REINITIALISATION_OF_required_OF_A4 ;
            bool REINITIALISATION_OF_S_OF_A4 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A4 ;
            bool REINITIALISATION_OF_required_OF_A5 ;
            bool REINITIALISATION_OF_S_OF_A5 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A5 ;
            bool REINITIALISATION_OF_required_OF_A6 ;
            bool REINITIALISATION_OF_S_OF_A6 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A6 ;
            bool REINITIALISATION_OF_required_OF_A7 ;
            bool REINITIALISATION_OF_S_OF_A7 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A7 ;
            bool REINITIALISATION_OF_required_OF_A8 ;
            bool REINITIALISATION_OF_S_OF_A8 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A8 ;
            bool REINITIALISATION_OF_required_OF_A9 ;
            bool REINITIALISATION_OF_S_OF_A9 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A9 ;
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
            bool REINITIALISATION_OF_required_OF_M1 ;
            bool REINITIALISATION_OF_S_OF_M1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_M1 ;
            bool REINITIALISATION_OF_required_OF_M2 ;
            bool REINITIALISATION_OF_S_OF_M2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_M2 ;
            bool REINITIALISATION_OF_required_OF_M3 ;
            bool REINITIALISATION_OF_S_OF_M3 ;
            bool REINITIALISATION_OF_relevant_evt_OF_M3 ;
            bool REINITIALISATION_OF_required_OF_N ;
            bool REINITIALISATION_OF_S_OF_N ;
            bool REINITIALISATION_OF_relevant_evt_OF_N ;
            bool REINITIALISATION_OF_required_OF_OR_1 ;
            bool REINITIALISATION_OF_S_OF_OR_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_OR_1 ;
            bool REINITIALISATION_OF_required_OF_UE_1 ;
            bool REINITIALISATION_OF_S_OF_UE_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_UE_1 ;
            
		/* ---------- DECLARATION OF CONSTANTS ------------ */
			bool const force_relevant_events_OF_M2 = false;
			double const mu_OF_A2 = 0.1;
			std::string const calculate_required_OF_D12 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_D22 = "fn_fathers_and_trig";
			std::string const trimming_option_OF_OPTIONS = "maximum";
			bool const force_relevant_events_OF_A10 = false;
			std::string const calculate_required_OF_M1 = "fn_fathers_and_trig";
			std::string const trigger_kind_OF_t_1 = "fn_fathers_and_trig";
			double const mu_OF_D22 = 0.1;
			std::string const calculate_required_OF_M2 = "fn_fathers_and_trig";
			std::string const trigger_kind_OF_t_2 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_A2 = false;
			double const lambda_OF_M2 = 0.03;
			double const mu_OF_M1 = 0.1;
			bool const trimming_OF_OPTIONS = false;
			bool const force_relevant_events_OF_M3 = false;
			bool const failF_FROZEN_OF_A1 = false;
			bool const force_relevant_events_OF_D11 = false;
			std::string const calculate_required_OF_A10 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_D12 = false;
			bool const force_relevant_events_OF_A3 = false;
			bool const failF_FROZEN_OF_D22 = false;
			std::string const calculate_required_OF_A12 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_M1 = false;
			double const mu_OF_A1 = 0.1;
			std::string const calculate_required_OF_UE_1 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_M3 = "fn_fathers_and_trig";
			double const lambda_OF_M3 = 0.03;
			double const lambda_OF_N = 0.002;
			std::string const calculate_required_OF_A6 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A11 = false;
			double const mu_OF_D12 = 0.1;
			bool const Profil1_OF___ARBRE__EIRM = true;
			std::string const calculate_required_OF_A3 = "fn_fathers_and_trig";
			double const lambda_OF_A3 = 0.05;
			double const lambda_OF_D11 = 0.1;
			double const mu_OF_A3 = 0.1;
			bool const force_relevant_events_OF_A8 = false;
			double const mu_OF_M2 = 0.1;
			std::string const calculate_required_OF_A11 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_N = false;
			bool const force_relevant_events_OF_A7 = false;
			double const lambda_OF_D21 = 0.08;
			bool const failF_FROZEN_OF_M3 = false;
			std::string const calculate_required_OF_D11 = "fn_fathers_and_trig";
			double const standby_lambda_OF_D12 = 0.04;
			double const standby_lambda_OF_D22 = 0.04;
			bool const force_relevant_events_OF_D21 = false;
			bool const force_relevant_events_OF_UE_1 = true;
			double const lambda_OF_A2 = 0.06;
			bool const force_relevant_events_OF_A9 = false;
			bool const failF_FROZEN_OF_A3 = false;
			std::string const calculate_required_OF_A8 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_M2 = false;
			std::string const calculate_required_OF_N = "fn_fathers_and_trig";
			double const mu_OF_M3 = 0.1;
			double const standby_lambda_OF_M3 = 0.015;
			bool const force_relevant_events_OF_M1 = false;
			double const mu_OF_D11 = 0.1;
			bool const failS_FROZEN_OF_D12 = false;
			bool const failS_FROZEN_OF_D22 = false;
			bool const force_relevant_events_OF_A5 = false;
			bool const repairable_system_OF_OPTIONS = true;
			double const mu_OF_N = 0.1;
			std::string const calculate_required_OF_D21 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_OR_1 = false;
			std::string const calculate_required_OF_A9 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A13 = false;
			std::string const trigger_kind_OF_t_1_1 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A2 = false;
			double const lambda_OF_D12 = 0.08;
			double const lambda_OF_D22 = 0.08;
			bool const failF_FROZEN_OF_D11 = false;
			bool const force_relevant_events_OF_A1 = false;
			bool const force_relevant_events_OF_A4 = false;
			double const lambda_OF_M1 = 0.03;
			double const mu_OF_D21 = 0.1;
			std::string const calculate_required_OF_A5 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_N = false;
			bool const force_relevant_events_OF_A12 = false;
			bool const force_relevant_events_OF_D12 = false;
			std::string const calculate_required_OF_OR_1 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_D22 = false;
			std::string const calculate_required_OF_A13 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A2 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A7 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A6 = false;
			std::string const calculate_required_OF_A1 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A4 = "fn_fathers_and_trig";
			bool const failS_FROZEN_OF_M3 = false;
			double const lambda_OF_A1 = 0.05;
			bool const failF_FROZEN_OF_D21 = false;
		
            /* ---------- DECLARATION OF OCCURRENCE RULES FIRING FLAGS ------------ */
            bool FIRE_xx10_OF_A1;
            bool FIRE_xx11_OF_A1;
            bool FIRE_xx10_OF_A2;
            bool FIRE_xx11_OF_A2;
            bool FIRE_xx10_OF_A3;
            bool FIRE_xx11_OF_A3;
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
            bool FIRE_xx10_OF_N;
            bool FIRE_xx11_OF_N;

            int required_OF_A1 = 0 ;
            int already_S_OF_A1 = 1 ;
            int S_OF_A1 = 2 ;
            int relevant_evt_OF_A1 = 3 ;
            int failF_OF_A1 = 4 ;
            int required_OF_A10 = 5 ;
            int already_S_OF_A10 = 6 ;
            int S_OF_A10 = 7 ;
            int relevant_evt_OF_A10 = 8 ;
            int required_OF_A11 = 9 ;
            int already_S_OF_A11 = 10 ;
            int S_OF_A11 = 11 ;
            int relevant_evt_OF_A11 = 12 ;
            int required_OF_A12 = 13 ;
            int already_S_OF_A12 = 14 ;
            int S_OF_A12 = 15 ;
            int relevant_evt_OF_A12 = 16 ;
            int required_OF_A13 = 17 ;
            int already_S_OF_A13 = 18 ;
            int S_OF_A13 = 19 ;
            int relevant_evt_OF_A13 = 20 ;
            int required_OF_A2 = 21 ;
            int already_S_OF_A2 = 22 ;
            int S_OF_A2 = 23 ;
            int relevant_evt_OF_A2 = 24 ;
            int failF_OF_A2 = 25 ;
            int required_OF_A3 = 26 ;
            int already_S_OF_A3 = 27 ;
            int S_OF_A3 = 28 ;
            int relevant_evt_OF_A3 = 29 ;
            int failF_OF_A3 = 30 ;
            int required_OF_A4 = 31 ;
            int already_S_OF_A4 = 32 ;
            int S_OF_A4 = 33 ;
            int relevant_evt_OF_A4 = 34 ;
            int required_OF_A5 = 35 ;
            int already_S_OF_A5 = 36 ;
            int S_OF_A5 = 37 ;
            int relevant_evt_OF_A5 = 38 ;
            int required_OF_A6 = 39 ;
            int already_S_OF_A6 = 40 ;
            int S_OF_A6 = 41 ;
            int relevant_evt_OF_A6 = 42 ;
            int required_OF_A7 = 43 ;
            int already_S_OF_A7 = 44 ;
            int S_OF_A7 = 45 ;
            int relevant_evt_OF_A7 = 46 ;
            int required_OF_A8 = 47 ;
            int already_S_OF_A8 = 48 ;
            int S_OF_A8 = 49 ;
            int relevant_evt_OF_A8 = 50 ;
            int required_OF_A9 = 51 ;
            int already_S_OF_A9 = 52 ;
            int S_OF_A9 = 53 ;
            int relevant_evt_OF_A9 = 54 ;
            int required_OF_D11 = 55 ;
            int already_S_OF_D11 = 56 ;
            int S_OF_D11 = 57 ;
            int relevant_evt_OF_D11 = 58 ;
            int failF_OF_D11 = 59 ;
            int required_OF_D12 = 60 ;
            int already_S_OF_D12 = 61 ;
            int S_OF_D12 = 62 ;
            int relevant_evt_OF_D12 = 63 ;
            int failF_OF_D12 = 64 ;
            int failS_OF_D12 = 65 ;
            int required_OF_D21 = 66 ;
            int already_S_OF_D21 = 67 ;
            int S_OF_D21 = 68 ;
            int relevant_evt_OF_D21 = 69 ;
            int failF_OF_D21 = 70 ;
            int required_OF_D22 = 71 ;
            int already_S_OF_D22 = 72 ;
            int S_OF_D22 = 73 ;
            int relevant_evt_OF_D22 = 74 ;
            int failF_OF_D22 = 75 ;
            int failS_OF_D22 = 76 ;
            int required_OF_M1 = 77 ;
            int already_S_OF_M1 = 78 ;
            int S_OF_M1 = 79 ;
            int relevant_evt_OF_M1 = 80 ;
            int failF_OF_M1 = 81 ;
            int required_OF_M2 = 82 ;
            int already_S_OF_M2 = 83 ;
            int S_OF_M2 = 84 ;
            int relevant_evt_OF_M2 = 85 ;
            int failF_OF_M2 = 86 ;
            int required_OF_M3 = 87 ;
            int already_S_OF_M3 = 88 ;
            int S_OF_M3 = 89 ;
            int relevant_evt_OF_M3 = 90 ;
            int failF_OF_M3 = 91 ;
            int failS_OF_M3 = 92 ;
            int required_OF_N = 93 ;
            int already_S_OF_N = 94 ;
            int S_OF_N = 95 ;
            int relevant_evt_OF_N = 96 ;
            int failF_OF_N = 97 ;
            int required_OF_OR_1 = 98 ;
            int already_S_OF_OR_1 = 99 ;
            int S_OF_OR_1 = 100 ;
            int relevant_evt_OF_OR_1 = 101 ;
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