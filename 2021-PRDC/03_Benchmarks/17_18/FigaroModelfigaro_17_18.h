
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
        class FigaroProgram_figaro_17_18: public storm::figaro::FigaroProgram{
        public:
        FigaroProgram_figaro_17_18(): FigaroProgram(//            std::map<std::string, size_t> mFigaroboolelementindex =
                    {  
            	{"required_OF_A1" , 0},
            	{"already_S_OF_A1" , 1},
            	{"S_OF_A1" , 2},
            	{"relevant_evt_OF_A1" , 3},
            	{"failI_OF_A1" , 4},
            	{"to_be_fired_OF_A1" , 5},
            	{"already_standby_OF_A1" , 6},
            	{"already_required_OF_A1" , 7},
            	{"required_OF_A10" , 8},
            	{"already_S_OF_A10" , 9},
            	{"S_OF_A10" , 10},
            	{"relevant_evt_OF_A10" , 11},
            	{"failF_OF_A10" , 12},
            	{"required_OF_A11" , 13},
            	{"already_S_OF_A11" , 14},
            	{"S_OF_A11" , 15},
            	{"relevant_evt_OF_A11" , 16},
            	{"required_OF_A12" , 17},
            	{"already_S_OF_A12" , 18},
            	{"S_OF_A12" , 19},
            	{"relevant_evt_OF_A12" , 20},
            	{"failI_OF_A12" , 21},
            	{"to_be_fired_OF_A12" , 22},
            	{"already_standby_OF_A12" , 23},
            	{"already_required_OF_A12" , 24},
            	{"required_OF_A2" , 25},
            	{"already_S_OF_A2" , 26},
            	{"S_OF_A2" , 27},
            	{"relevant_evt_OF_A2" , 28},
            	{"failI_OF_A2" , 29},
            	{"to_be_fired_OF_A2" , 30},
            	{"already_standby_OF_A2" , 31},
            	{"already_required_OF_A2" , 32},
            	{"required_OF_A3" , 33},
            	{"already_S_OF_A3" , 34},
            	{"S_OF_A3" , 35},
            	{"relevant_evt_OF_A3" , 36},
            	{"failI_OF_A3" , 37},
            	{"to_be_fired_OF_A3" , 38},
            	{"already_standby_OF_A3" , 39},
            	{"already_required_OF_A3" , 40},
            	{"required_OF_A4" , 41},
            	{"already_S_OF_A4" , 42},
            	{"S_OF_A4" , 43},
            	{"relevant_evt_OF_A4" , 44},
            	{"failI_OF_A4" , 45},
            	{"to_be_fired_OF_A4" , 46},
            	{"already_standby_OF_A4" , 47},
            	{"already_required_OF_A4" , 48},
            	{"required_OF_A5" , 49},
            	{"already_S_OF_A5" , 50},
            	{"S_OF_A5" , 51},
            	{"relevant_evt_OF_A5" , 52},
            	{"required_OF_A6" , 53},
            	{"already_S_OF_A6" , 54},
            	{"S_OF_A6" , 55},
            	{"relevant_evt_OF_A6" , 56},
            	{"failI_OF_A6" , 57},
            	{"to_be_fired_OF_A6" , 58},
            	{"already_standby_OF_A6" , 59},
            	{"already_required_OF_A6" , 60},
            	{"required_OF_A7" , 61},
            	{"already_S_OF_A7" , 62},
            	{"S_OF_A7" , 63},
            	{"relevant_evt_OF_A7" , 64},
            	{"required_OF_A8" , 65},
            	{"already_S_OF_A8" , 66},
            	{"S_OF_A8" , 67},
            	{"relevant_evt_OF_A8" , 68},
            	{"required_OF_A9" , 69},
            	{"already_S_OF_A9" , 70},
            	{"S_OF_A9" , 71},
            	{"relevant_evt_OF_A9" , 72},
            	{"required_OF_UE_1" , 73},
            	{"already_S_OF_UE_1" , 74},
            	{"S_OF_UE_1" , 75},
            	{"relevant_evt_OF_UE_1" , 76}},

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
                    77 ,
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
            bool REINITIALISATION_OF_to_be_fired_OF_A1 ;
            bool REINITIALISATION_OF_required_OF_A10 ;
            bool REINITIALISATION_OF_S_OF_A10 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A10 ;
            bool REINITIALISATION_OF_required_OF_A11 ;
            bool REINITIALISATION_OF_S_OF_A11 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A11 ;
            bool REINITIALISATION_OF_required_OF_A12 ;
            bool REINITIALISATION_OF_S_OF_A12 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A12 ;
            bool REINITIALISATION_OF_to_be_fired_OF_A12 ;
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
            bool REINITIALISATION_OF_to_be_fired_OF_A4 ;
            bool REINITIALISATION_OF_required_OF_A5 ;
            bool REINITIALISATION_OF_S_OF_A5 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A5 ;
            bool REINITIALISATION_OF_required_OF_A6 ;
            bool REINITIALISATION_OF_S_OF_A6 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A6 ;
            bool REINITIALISATION_OF_to_be_fired_OF_A6 ;
            bool REINITIALISATION_OF_required_OF_A7 ;
            bool REINITIALISATION_OF_S_OF_A7 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A7 ;
            bool REINITIALISATION_OF_required_OF_A8 ;
            bool REINITIALISATION_OF_S_OF_A8 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A8 ;
            bool REINITIALISATION_OF_required_OF_A9 ;
            bool REINITIALISATION_OF_S_OF_A9 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A9 ;
            bool REINITIALISATION_OF_required_OF_UE_1 ;
            bool REINITIALISATION_OF_S_OF_UE_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_UE_1 ;
            
		/* ---------- DECLARATION OF CONSTANTS ------------ */
			double const gamma_OF_A1 = 0.01;
			double const gamma_OF_A4 = 0.01;
			std::string const calculate_required_OF_A11 = "fn_fathers_and_trig";
			double const mu_OF_A2 = 0.1;
			bool const force_relevant_events_OF_A3 = false;
			std::string const calculate_required_OF_A9 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A7 = false;
			bool const force_relevant_events_OF_A2 = false;
			std::string const calculate_required_OF_A12 = "fn_fathers_and_trig";
			bool const failI_FROZEN_OF_A6 = false;
			double const mu_OF_A10 = 0.1;
			std::string const when_to_check_OF_A6 = "not_req_to_req";
			double const mu_OF_A1 = 0.1;
			double const mu_OF_A4 = 0.1;
			std::string const calculate_required_OF_UE_1 = "fn_fathers_and_trig";
			std::string const trimming_option_OF_OPTIONS = "maximum";
			bool const force_relevant_events_OF_A10 = false;
			double const gamma_OF_A12 = 0.01;
			bool const failI_FROZEN_OF_A3 = false;
			bool const force_relevant_events_OF_A1 = false;
			bool const force_relevant_events_OF_A4 = false;
			std::string const trigger_kind_OF_t_1 = "fn_fathers_and_trig";
			std::string const when_to_check_OF_A3 = "not_req_to_req";
			bool const failI_FROZEN_OF_A2 = false;
			std::string const calculate_required_OF_A5 = "fn_fathers_and_trig";
			std::string const when_to_check_OF_A2 = "not_req_to_req";
			std::string const calculate_required_OF_A6 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A11 = false;
			double const mu_OF_A12 = 0.1;
			bool const force_relevant_events_OF_A9 = false;
			std::string const calculate_required_OF_A8 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_UE_1 = true;
			bool const force_relevant_events_OF_A12 = false;
			double const gamma_OF_A6 = 0.01;
			bool const Profil1_OF___ARBRE__EIRM = true;
			std::string const calculate_required_OF_A3 = "fn_fathers_and_trig";
			std::string const when_to_check_OF_A1 = "not_req_to_req";
			bool const failI_FROZEN_OF_A1 = false;
			std::string const when_to_check_OF_A4 = "not_req_to_req";
			bool const failI_FROZEN_OF_A4 = false;
			double const lambda_OF_A10 = 0.01;
			bool const trimming_OF_OPTIONS = false;
			double const gamma_OF_A3 = 0.01;
			std::string const calculate_required_OF_A2 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_A10 = false;
			std::string const calculate_required_OF_A7 = "fn_fathers_and_trig";
			double const mu_OF_A6 = 0.1;
			double const gamma_OF_A2 = 0.01;
			std::string const calculate_required_OF_A10 = "fn_fathers_and_trig";
			bool const failI_FROZEN_OF_A12 = false;
			bool const force_relevant_events_OF_A6 = false;
			std::string const calculate_required_OF_A1 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A4 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A5 = false;
			std::string const when_to_check_OF_A12 = "not_req_to_req";
			bool const repairable_system_OF_OPTIONS = true;
			double const mu_OF_A3 = 0.1;
			bool const force_relevant_events_OF_A8 = false;
		
            /* ---------- DECLARATION OF OCCURRENCE RULES FIRING FLAGS ------------ */
            bool FIRE_xx23_OF_A1_INS_0;
            bool FIRE_xx23_OF_A1_INS_1;
            bool FIRE_xx24_OF_A1;
            bool FIRE_xx10_OF_A10;
            bool FIRE_xx11_OF_A10;
            bool FIRE_xx23_OF_A12_INS_5;
            bool FIRE_xx23_OF_A12_INS_6;
            bool FIRE_xx24_OF_A12;
            bool FIRE_xx23_OF_A2_INS_8;
            bool FIRE_xx23_OF_A2_INS_9;
            bool FIRE_xx24_OF_A2;
            bool FIRE_xx23_OF_A3_INS_11;
            bool FIRE_xx23_OF_A3_INS_12;
            bool FIRE_xx24_OF_A3;
            bool FIRE_xx23_OF_A4_INS_14;
            bool FIRE_xx23_OF_A4_INS_15;
            bool FIRE_xx24_OF_A4;
            bool FIRE_xx23_OF_A6_INS_17;
            bool FIRE_xx23_OF_A6_INS_18;
            bool FIRE_xx24_OF_A6;

            int required_OF_A1 = 0 ;
            int already_S_OF_A1 = 1 ;
            int S_OF_A1 = 2 ;
            int relevant_evt_OF_A1 = 3 ;
            int failI_OF_A1 = 4 ;
            int to_be_fired_OF_A1 = 5 ;
            int already_standby_OF_A1 = 6 ;
            int already_required_OF_A1 = 7 ;
            int required_OF_A10 = 8 ;
            int already_S_OF_A10 = 9 ;
            int S_OF_A10 = 10 ;
            int relevant_evt_OF_A10 = 11 ;
            int failF_OF_A10 = 12 ;
            int required_OF_A11 = 13 ;
            int already_S_OF_A11 = 14 ;
            int S_OF_A11 = 15 ;
            int relevant_evt_OF_A11 = 16 ;
            int required_OF_A12 = 17 ;
            int already_S_OF_A12 = 18 ;
            int S_OF_A12 = 19 ;
            int relevant_evt_OF_A12 = 20 ;
            int failI_OF_A12 = 21 ;
            int to_be_fired_OF_A12 = 22 ;
            int already_standby_OF_A12 = 23 ;
            int already_required_OF_A12 = 24 ;
            int required_OF_A2 = 25 ;
            int already_S_OF_A2 = 26 ;
            int S_OF_A2 = 27 ;
            int relevant_evt_OF_A2 = 28 ;
            int failI_OF_A2 = 29 ;
            int to_be_fired_OF_A2 = 30 ;
            int already_standby_OF_A2 = 31 ;
            int already_required_OF_A2 = 32 ;
            int required_OF_A3 = 33 ;
            int already_S_OF_A3 = 34 ;
            int S_OF_A3 = 35 ;
            int relevant_evt_OF_A3 = 36 ;
            int failI_OF_A3 = 37 ;
            int to_be_fired_OF_A3 = 38 ;
            int already_standby_OF_A3 = 39 ;
            int already_required_OF_A3 = 40 ;
            int required_OF_A4 = 41 ;
            int already_S_OF_A4 = 42 ;
            int S_OF_A4 = 43 ;
            int relevant_evt_OF_A4 = 44 ;
            int failI_OF_A4 = 45 ;
            int to_be_fired_OF_A4 = 46 ;
            int already_standby_OF_A4 = 47 ;
            int already_required_OF_A4 = 48 ;
            int required_OF_A5 = 49 ;
            int already_S_OF_A5 = 50 ;
            int S_OF_A5 = 51 ;
            int relevant_evt_OF_A5 = 52 ;
            int required_OF_A6 = 53 ;
            int already_S_OF_A6 = 54 ;
            int S_OF_A6 = 55 ;
            int relevant_evt_OF_A6 = 56 ;
            int failI_OF_A6 = 57 ;
            int to_be_fired_OF_A6 = 58 ;
            int already_standby_OF_A6 = 59 ;
            int already_required_OF_A6 = 60 ;
            int required_OF_A7 = 61 ;
            int already_S_OF_A7 = 62 ;
            int S_OF_A7 = 63 ;
            int relevant_evt_OF_A7 = 64 ;
            int required_OF_A8 = 65 ;
            int already_S_OF_A8 = 66 ;
            int S_OF_A8 = 67 ;
            int relevant_evt_OF_A8 = 68 ;
            int required_OF_A9 = 69 ;
            int already_S_OF_A9 = 70 ;
            int S_OF_A9 = 71 ;
            int relevant_evt_OF_A9 = 72 ;
            int required_OF_UE_1 = 73 ;
            int already_S_OF_UE_1 = 74 ;
            int S_OF_UE_1 = 75 ;
            int relevant_evt_OF_UE_1 = 76 ;




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