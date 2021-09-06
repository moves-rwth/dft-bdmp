
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
        class FigaroProgram_figaro_17_04: public storm::figaro::FigaroProgram{
        public:
        FigaroProgram_figaro_17_04(): FigaroProgram(//            std::map<std::string, size_t> mFigaroboolelementindex =
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
            	{"failF_OF_A10" , 9},
            	{"required_OF_A12" , 10},
            	{"already_S_OF_A12" , 11},
            	{"S_OF_A12" , 12},
            	{"relevant_evt_OF_A12" , 13},
            	{"required_OF_A13" , 14},
            	{"already_S_OF_A13" , 15},
            	{"S_OF_A13" , 16},
            	{"relevant_evt_OF_A13" , 17},
            	{"failF_OF_A13" , 18},
            	{"required_OF_A14" , 19},
            	{"already_S_OF_A14" , 20},
            	{"S_OF_A14" , 21},
            	{"relevant_evt_OF_A14" , 22},
            	{"failF_OF_A14" , 23},
            	{"required_OF_A15" , 24},
            	{"already_S_OF_A15" , 25},
            	{"S_OF_A15" , 26},
            	{"relevant_evt_OF_A15" , 27},
            	{"failF_OF_A15" , 28},
            	{"required_OF_A16" , 29},
            	{"already_S_OF_A16" , 30},
            	{"S_OF_A16" , 31},
            	{"relevant_evt_OF_A16" , 32},
            	{"required_OF_A17" , 33},
            	{"already_S_OF_A17" , 34},
            	{"S_OF_A17" , 35},
            	{"relevant_evt_OF_A17" , 36},
            	{"required_OF_A18" , 37},
            	{"already_S_OF_A18" , 38},
            	{"S_OF_A18" , 39},
            	{"relevant_evt_OF_A18" , 40},
            	{"required_OF_A19" , 41},
            	{"already_S_OF_A19" , 42},
            	{"S_OF_A19" , 43},
            	{"relevant_evt_OF_A19" , 44},
            	{"required_OF_A2" , 45},
            	{"already_S_OF_A2" , 46},
            	{"S_OF_A2" , 47},
            	{"relevant_evt_OF_A2" , 48},
            	{"failI_OF_A2" , 49},
            	{"to_be_fired_OF_A2" , 50},
            	{"already_standby_OF_A2" , 51},
            	{"already_required_OF_A2" , 52},
            	{"required_OF_A3" , 53},
            	{"already_S_OF_A3" , 54},
            	{"S_OF_A3" , 55},
            	{"relevant_evt_OF_A3" , 56},
            	{"failI_OF_A3" , 57},
            	{"to_be_fired_OF_A3" , 58},
            	{"already_standby_OF_A3" , 59},
            	{"already_required_OF_A3" , 60},
            	{"required_OF_A4" , 61},
            	{"already_S_OF_A4" , 62},
            	{"S_OF_A4" , 63},
            	{"relevant_evt_OF_A4" , 64},
            	{"failF_OF_A4" , 65},
            	{"required_OF_A5" , 66},
            	{"already_S_OF_A5" , 67},
            	{"S_OF_A5" , 68},
            	{"relevant_evt_OF_A5" , 69},
            	{"failF_OF_A5" , 70},
            	{"required_OF_A6" , 71},
            	{"already_S_OF_A6" , 72},
            	{"S_OF_A6" , 73},
            	{"relevant_evt_OF_A6" , 74},
            	{"failF_OF_A6" , 75},
            	{"required_OF_A7" , 76},
            	{"already_S_OF_A7" , 77},
            	{"S_OF_A7" , 78},
            	{"relevant_evt_OF_A7" , 79},
            	{"failI_OF_A7" , 80},
            	{"to_be_fired_OF_A7" , 81},
            	{"already_standby_OF_A7" , 82},
            	{"already_required_OF_A7" , 83},
            	{"required_OF_A8" , 84},
            	{"already_S_OF_A8" , 85},
            	{"S_OF_A8" , 86},
            	{"relevant_evt_OF_A8" , 87},
            	{"failI_OF_A8" , 88},
            	{"to_be_fired_OF_A8" , 89},
            	{"already_standby_OF_A8" , 90},
            	{"already_required_OF_A8" , 91},
            	{"required_OF_A9" , 92},
            	{"already_S_OF_A9" , 93},
            	{"S_OF_A9" , 94},
            	{"relevant_evt_OF_A9" , 95},
            	{"failF_OF_A9" , 96},
            	{"required_OF_UE_1" , 97},
            	{"already_S_OF_UE_1" , 98},
            	{"S_OF_UE_1" , 99},
            	{"relevant_evt_OF_UE_1" , 100}},

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
                    101 ,
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
            bool REINITIALISATION_OF_required_OF_A12 ;
            bool REINITIALISATION_OF_S_OF_A12 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A12 ;
            bool REINITIALISATION_OF_required_OF_A13 ;
            bool REINITIALISATION_OF_S_OF_A13 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A13 ;
            bool REINITIALISATION_OF_required_OF_A14 ;
            bool REINITIALISATION_OF_S_OF_A14 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A14 ;
            bool REINITIALISATION_OF_required_OF_A15 ;
            bool REINITIALISATION_OF_S_OF_A15 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A15 ;
            bool REINITIALISATION_OF_required_OF_A16 ;
            bool REINITIALISATION_OF_S_OF_A16 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A16 ;
            bool REINITIALISATION_OF_required_OF_A17 ;
            bool REINITIALISATION_OF_S_OF_A17 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A17 ;
            bool REINITIALISATION_OF_required_OF_A18 ;
            bool REINITIALISATION_OF_S_OF_A18 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A18 ;
            bool REINITIALISATION_OF_required_OF_A19 ;
            bool REINITIALISATION_OF_S_OF_A19 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A19 ;
            bool REINITIALISATION_OF_required_OF_A2 ;
            bool REINITIALISATION_OF_S_OF_A2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A2 ;
            bool REINITIALISATION_OF_to_be_fired_OF_A2 ;
            bool REINITIALISATION_OF_required_OF_A3 ;
            bool REINITIALISATION_OF_S_OF_A3 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A3 ;
            bool REINITIALISATION_OF_to_be_fired_OF_A3 ;
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
            bool REINITIALISATION_OF_to_be_fired_OF_A7 ;
            bool REINITIALISATION_OF_required_OF_A8 ;
            bool REINITIALISATION_OF_S_OF_A8 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A8 ;
            bool REINITIALISATION_OF_to_be_fired_OF_A8 ;
            bool REINITIALISATION_OF_required_OF_A9 ;
            bool REINITIALISATION_OF_S_OF_A9 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A9 ;
            bool REINITIALISATION_OF_required_OF_UE_1 ;
            bool REINITIALISATION_OF_S_OF_UE_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_UE_1 ;
            
		/* ---------- DECLARATION OF CONSTANTS ------------ */
			std::string const calculate_required_OF_A19 = "fn_fathers_and_trig";
			bool const failI_FROZEN_OF_A7 = false;
			bool const force_relevant_events_OF_A13 = false;
			double const lambda_OF_A9 = 0.01;
			bool const failF_FROZEN_OF_A6 = false;
			double const gamma_OF_A2 = 0.5;
			std::string const calculate_required_OF_A4 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_A15 = false;
			bool const force_relevant_events_OF_A16 = false;
			double const mu_OF_A13 = 0.1;
			std::string const when_to_check_OF_A3 = "not_req_to_req";
			bool const failF_FROZEN_OF_A5 = false;
			std::string const when_to_check_OF_A7 = "not_req_to_req";
			bool const force_relevant_events_OF_A9 = false;
			std::string const trimming_option_OF_OPTIONS = "maximum";
			double const gamma_OF_A8 = 0.5;
			bool const failI_FROZEN_OF_A2 = false;
			double const mu_OF_A9 = 0.1;
			std::string const calculate_required_OF_A3 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A7 = "fn_fathers_and_trig";
			double const lambda_OF_A10 = 0.01;
			double const lambda_OF_A14 = 0.01;
			std::string const calculate_required_OF_UE_1 = "fn_fathers_and_trig";
			bool const failI_FROZEN_OF_A8 = false;
			std::string const when_to_check_OF_A2 = "not_req_to_req";
			std::string const calculate_required_OF_A6 = "fn_fathers_and_trig";
			bool const failI_FROZEN_OF_A3 = false;
			bool const repairable_system_OF_OPTIONS = true;
			bool const force_relevant_events_OF_A10 = false;
			bool const force_relevant_events_OF_A14 = false;
			std::string const calculate_required_OF_A15 = "fn_fathers_and_trig";
			double const lambda_OF_A1 = 0.01;
			std::string const calculate_required_OF_A5 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A17 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A2 = "fn_fathers_and_trig";
			std::string const when_to_check_OF_A8 = "not_req_to_req";
			double const mu_OF_A10 = 0.1;
			double const mu_OF_A14 = 0.1;
			bool const Profil1_OF___ARBRE__EIRM = true;
			bool const failF_FROZEN_OF_A13 = false;
			bool const force_relevant_events_OF_A1 = false;
			std::string const calculate_required_OF_A8 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A19 = false;
			double const lambda_OF_A4 = 0.01;
			double const mu_OF_A1 = 0.1;
			bool const failF_FROZEN_OF_A9 = false;
			bool const force_relevant_events_OF_A4 = false;
			std::string const calculate_required_OF_A18 = "fn_fathers_and_trig";
			double const mu_OF_A4 = 0.1;
			double const lambda_OF_A6 = 0.01;
			std::string const calculate_required_OF_A13 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A3 = false;
			bool const force_relevant_events_OF_A7 = false;
			bool const failF_FROZEN_OF_A10 = false;
			std::string const calculate_required_OF_A12 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_A14 = false;
			double const lambda_OF_A15 = 0.01;
			std::string const calculate_required_OF_A16 = "fn_fathers_and_trig";
			double const lambda_OF_A5 = 0.01;
			bool const force_relevant_events_OF_A6 = false;
			double const mu_OF_A3 = 0.1;
			double const mu_OF_A7 = 0.1;
			std::string const calculate_required_OF_A9 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A15 = false;
			double const mu_OF_A6 = 0.1;
			bool const force_relevant_events_OF_A5 = false;
			bool const force_relevant_events_OF_A17 = false;
			bool const failF_FROZEN_OF_A1 = false;
			bool const force_relevant_events_OF_A2 = false;
			double const mu_OF_A15 = 0.1;
			bool const force_relevant_events_OF_A12 = false;
			double const mu_OF_A5 = 0.1;
			double const mu_OF_A2 = 0.1;
			bool const force_relevant_events_OF_A8 = false;
			std::string const trigger_kind_OF_t_2 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_A4 = false;
			std::string const calculate_required_OF_A10 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A14 = "fn_fathers_and_trig";
			double const gamma_OF_A3 = 0.5;
			double const gamma_OF_A7 = 0.5;
			bool const force_relevant_events_OF_UE_1 = true;
			double const mu_OF_A8 = 0.1;
			std::string const trigger_kind_OF_t_1 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A18 = false;
			double const lambda_OF_A13 = 0.01;
			std::string const calculate_required_OF_A1 = "fn_fathers_and_trig";
			bool const trimming_OF_OPTIONS = false;
		
            /* ---------- DECLARATION OF OCCURRENCE RULES FIRING FLAGS ------------ */
            bool FIRE_xx10_OF_A1;
            bool FIRE_xx11_OF_A1;
            bool FIRE_xx10_OF_A10;
            bool FIRE_xx11_OF_A10;
            bool FIRE_xx10_OF_A13;
            bool FIRE_xx11_OF_A13;
            bool FIRE_xx10_OF_A14;
            bool FIRE_xx11_OF_A14;
            bool FIRE_xx10_OF_A15;
            bool FIRE_xx11_OF_A15;
            bool FIRE_xx23_OF_A2_INS_10;
            bool FIRE_xx23_OF_A2_INS_11;
            bool FIRE_xx24_OF_A2;
            bool FIRE_xx23_OF_A3_INS_13;
            bool FIRE_xx23_OF_A3_INS_14;
            bool FIRE_xx24_OF_A3;
            bool FIRE_xx10_OF_A4;
            bool FIRE_xx11_OF_A4;
            bool FIRE_xx10_OF_A5;
            bool FIRE_xx11_OF_A5;
            bool FIRE_xx10_OF_A6;
            bool FIRE_xx11_OF_A6;
            bool FIRE_xx23_OF_A7_INS_22;
            bool FIRE_xx23_OF_A7_INS_23;
            bool FIRE_xx24_OF_A7;
            bool FIRE_xx23_OF_A8_INS_25;
            bool FIRE_xx23_OF_A8_INS_26;
            bool FIRE_xx24_OF_A8;
            bool FIRE_xx10_OF_A9;
            bool FIRE_xx11_OF_A9;

            int required_OF_A1 = 0 ;
            int already_S_OF_A1 = 1 ;
            int S_OF_A1 = 2 ;
            int relevant_evt_OF_A1 = 3 ;
            int failF_OF_A1 = 4 ;
            int required_OF_A10 = 5 ;
            int already_S_OF_A10 = 6 ;
            int S_OF_A10 = 7 ;
            int relevant_evt_OF_A10 = 8 ;
            int failF_OF_A10 = 9 ;
            int required_OF_A12 = 10 ;
            int already_S_OF_A12 = 11 ;
            int S_OF_A12 = 12 ;
            int relevant_evt_OF_A12 = 13 ;
            int required_OF_A13 = 14 ;
            int already_S_OF_A13 = 15 ;
            int S_OF_A13 = 16 ;
            int relevant_evt_OF_A13 = 17 ;
            int failF_OF_A13 = 18 ;
            int required_OF_A14 = 19 ;
            int already_S_OF_A14 = 20 ;
            int S_OF_A14 = 21 ;
            int relevant_evt_OF_A14 = 22 ;
            int failF_OF_A14 = 23 ;
            int required_OF_A15 = 24 ;
            int already_S_OF_A15 = 25 ;
            int S_OF_A15 = 26 ;
            int relevant_evt_OF_A15 = 27 ;
            int failF_OF_A15 = 28 ;
            int required_OF_A16 = 29 ;
            int already_S_OF_A16 = 30 ;
            int S_OF_A16 = 31 ;
            int relevant_evt_OF_A16 = 32 ;
            int required_OF_A17 = 33 ;
            int already_S_OF_A17 = 34 ;
            int S_OF_A17 = 35 ;
            int relevant_evt_OF_A17 = 36 ;
            int required_OF_A18 = 37 ;
            int already_S_OF_A18 = 38 ;
            int S_OF_A18 = 39 ;
            int relevant_evt_OF_A18 = 40 ;
            int required_OF_A19 = 41 ;
            int already_S_OF_A19 = 42 ;
            int S_OF_A19 = 43 ;
            int relevant_evt_OF_A19 = 44 ;
            int required_OF_A2 = 45 ;
            int already_S_OF_A2 = 46 ;
            int S_OF_A2 = 47 ;
            int relevant_evt_OF_A2 = 48 ;
            int failI_OF_A2 = 49 ;
            int to_be_fired_OF_A2 = 50 ;
            int already_standby_OF_A2 = 51 ;
            int already_required_OF_A2 = 52 ;
            int required_OF_A3 = 53 ;
            int already_S_OF_A3 = 54 ;
            int S_OF_A3 = 55 ;
            int relevant_evt_OF_A3 = 56 ;
            int failI_OF_A3 = 57 ;
            int to_be_fired_OF_A3 = 58 ;
            int already_standby_OF_A3 = 59 ;
            int already_required_OF_A3 = 60 ;
            int required_OF_A4 = 61 ;
            int already_S_OF_A4 = 62 ;
            int S_OF_A4 = 63 ;
            int relevant_evt_OF_A4 = 64 ;
            int failF_OF_A4 = 65 ;
            int required_OF_A5 = 66 ;
            int already_S_OF_A5 = 67 ;
            int S_OF_A5 = 68 ;
            int relevant_evt_OF_A5 = 69 ;
            int failF_OF_A5 = 70 ;
            int required_OF_A6 = 71 ;
            int already_S_OF_A6 = 72 ;
            int S_OF_A6 = 73 ;
            int relevant_evt_OF_A6 = 74 ;
            int failF_OF_A6 = 75 ;
            int required_OF_A7 = 76 ;
            int already_S_OF_A7 = 77 ;
            int S_OF_A7 = 78 ;
            int relevant_evt_OF_A7 = 79 ;
            int failI_OF_A7 = 80 ;
            int to_be_fired_OF_A7 = 81 ;
            int already_standby_OF_A7 = 82 ;
            int already_required_OF_A7 = 83 ;
            int required_OF_A8 = 84 ;
            int already_S_OF_A8 = 85 ;
            int S_OF_A8 = 86 ;
            int relevant_evt_OF_A8 = 87 ;
            int failI_OF_A8 = 88 ;
            int to_be_fired_OF_A8 = 89 ;
            int already_standby_OF_A8 = 90 ;
            int already_required_OF_A8 = 91 ;
            int required_OF_A9 = 92 ;
            int already_S_OF_A9 = 93 ;
            int S_OF_A9 = 94 ;
            int relevant_evt_OF_A9 = 95 ;
            int failF_OF_A9 = 96 ;
            int required_OF_UE_1 = 97 ;
            int already_S_OF_UE_1 = 98 ;
            int S_OF_UE_1 = 99 ;
            int relevant_evt_OF_UE_1 = 100 ;




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
            void runOnceInteractionStep_tops();
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