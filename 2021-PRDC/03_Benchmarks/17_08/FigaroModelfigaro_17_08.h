
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
        class FigaroProgram_figaro_17_08: public storm::figaro::FigaroProgram{
        public:
        FigaroProgram_figaro_17_08(): FigaroProgram(//            std::map<std::string, size_t> mFigaroboolelementindex =
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
            	{"failI_OF_A10" , 9},
            	{"to_be_fired_OF_A10" , 10},
            	{"already_standby_OF_A10" , 11},
            	{"already_required_OF_A10" , 12},
            	{"required_OF_A11" , 13},
            	{"already_S_OF_A11" , 14},
            	{"S_OF_A11" , 15},
            	{"relevant_evt_OF_A11" , 16},
            	{"failF_OF_A11" , 17},
            	{"required_OF_A12" , 18},
            	{"already_S_OF_A12" , 19},
            	{"S_OF_A12" , 20},
            	{"relevant_evt_OF_A12" , 21},
            	{"required_OF_A13" , 22},
            	{"already_S_OF_A13" , 23},
            	{"S_OF_A13" , 24},
            	{"relevant_evt_OF_A13" , 25},
            	{"required_OF_A14" , 26},
            	{"already_S_OF_A14" , 27},
            	{"S_OF_A14" , 28},
            	{"relevant_evt_OF_A14" , 29},
            	{"required_OF_A2" , 30},
            	{"already_S_OF_A2" , 31},
            	{"S_OF_A2" , 32},
            	{"relevant_evt_OF_A2" , 33},
            	{"failF_OF_A2" , 34},
            	{"required_OF_A3" , 35},
            	{"already_S_OF_A3" , 36},
            	{"S_OF_A3" , 37},
            	{"relevant_evt_OF_A3" , 38},
            	{"failF_OF_A3" , 39},
            	{"required_OF_A4" , 40},
            	{"already_S_OF_A4" , 41},
            	{"S_OF_A4" , 42},
            	{"relevant_evt_OF_A4" , 43},
            	{"failF_OF_A4" , 44},
            	{"required_OF_A5" , 45},
            	{"already_S_OF_A5" , 46},
            	{"S_OF_A5" , 47},
            	{"relevant_evt_OF_A5" , 48},
            	{"failF_OF_A5" , 49},
            	{"required_OF_A6" , 50},
            	{"already_S_OF_A6" , 51},
            	{"S_OF_A6" , 52},
            	{"relevant_evt_OF_A6" , 53},
            	{"required_OF_A7" , 54},
            	{"already_S_OF_A7" , 55},
            	{"S_OF_A7" , 56},
            	{"relevant_evt_OF_A7" , 57},
            	{"failF_OF_A7" , 58},
            	{"required_OF_A8" , 59},
            	{"already_S_OF_A8" , 60},
            	{"S_OF_A8" , 61},
            	{"relevant_evt_OF_A8" , 62},
            	{"failF_OF_A8" , 63},
            	{"failS_OF_A8" , 64},
            	{"required_OF_A9" , 65},
            	{"already_S_OF_A9" , 66},
            	{"S_OF_A9" , 67},
            	{"relevant_evt_OF_A9" , 68},
            	{"failF_OF_A9" , 69},
            	{"required_OF_UE_1" , 70},
            	{"already_S_OF_UE_1" , 71},
            	{"S_OF_UE_1" , 72},
            	{"relevant_evt_OF_UE_1" , 73}},

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
                    74 ,
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
            bool REINITIALISATION_OF_to_be_fired_OF_A10 ;
            bool REINITIALISATION_OF_required_OF_A11 ;
            bool REINITIALISATION_OF_S_OF_A11 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A11 ;
            bool REINITIALISATION_OF_required_OF_A12 ;
            bool REINITIALISATION_OF_S_OF_A12 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A12 ;
            bool REINITIALISATION_OF_required_OF_A13 ;
            bool REINITIALISATION_OF_S_OF_A13 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A13 ;
            bool REINITIALISATION_OF_required_OF_A14 ;
            bool REINITIALISATION_OF_S_OF_A14 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A14 ;
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
            bool REINITIALISATION_OF_required_OF_UE_1 ;
            bool REINITIALISATION_OF_S_OF_UE_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_UE_1 ;
            
		/* ---------- DECLARATION OF CONSTANTS ------------ */
			std::string const calculate_required_OF_A2 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A10 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A11 = false;
			bool const failF_FROZEN_OF_A2 = false;
			bool const force_relevant_events_OF_A5 = false;
			bool const force_relevant_events_OF_A1 = false;
			bool const failF_FROZEN_OF_A9 = false;
			std::string const calculate_required_OF_A12 = "fn_fathers_and_trig";
			double const mu_OF_A10 = 0.1;
			double const mu_OF_A2 = 0.1;
			std::string const calculate_required_OF_A7 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_A7 = false;
			std::string const calculate_required_OF_A14 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A6 = false;
			double const mu_OF_A7 = 0.1;
			bool const repairable_system_OF_OPTIONS = true;
			bool const trimming_OF_OPTIONS = false;
			double const lambda_OF_A9 = 0.01;
			double const lambda_OF_A11 = 0.01;
			bool const force_relevant_events_OF_A4 = false;
			bool const force_relevant_events_OF_A3 = false;
			double const lambda_OF_A5 = 0.01;
			double const lambda_OF_A8 = 0.01;
			double const standby_lambda_OF_A8 = 0.001;
			std::string const trigger_kind_OF_t_2 = "fn_fathers_and_trig";
			bool const Profil1_OF___ARBRE__EIRM = true;
			std::string const trimming_option_OF_OPTIONS = "maximum";
			double const lambda_OF_A1 = 0.01;
			std::string const calculate_required_OF_A13 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A8 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A9 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A2 = false;
			bool const force_relevant_events_OF_A10 = false;
			std::string const calculate_required_OF_A11 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_A11 = false;
			std::string const calculate_required_OF_A5 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A1 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_A5 = false;
			double const mu_OF_A8 = 0.1;
			bool const force_relevant_events_OF_A12 = false;
			double const mu_OF_A11 = 0.1;
			bool const failF_FROZEN_OF_A8 = false;
			double const mu_OF_A5 = 0.1;
			double const mu_OF_A9 = 0.1;
			bool const force_relevant_events_OF_UE_1 = true;
			bool const failF_FROZEN_OF_A1 = false;
			std::string const when_to_check_OF_A10 = "not_req_to_req";
			bool const force_relevant_events_OF_A7 = false;
			double const lambda_OF_A4 = 0.01;
			bool const force_relevant_events_OF_A14 = false;
			double const lambda_OF_A3 = 0.01;
			double const mu_OF_A1 = 0.1;
			double const gamma_OF_A10 = 0.01;
			std::string const trigger_kind_OF_t_1 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A6 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_UE_1 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A4 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A3 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_A3 = false;
			double const lambda_OF_A2 = 0.01;
			double const mu_OF_A4 = 0.1;
			double const mu_OF_A3 = 0.1;
			bool const failF_FROZEN_OF_A4 = false;
			bool const failI_FROZEN_OF_A10 = false;
			bool const failS_FROZEN_OF_A8 = false;
			bool const force_relevant_events_OF_A13 = false;
			bool const force_relevant_events_OF_A9 = false;
			double const lambda_OF_A7 = 0.01;
			bool const force_relevant_events_OF_A8 = false;
		
            /* ---------- DECLARATION OF OCCURRENCE RULES FIRING FLAGS ------------ */
            bool FIRE_xx10_OF_A1;
            bool FIRE_xx11_OF_A1;
            bool FIRE_xx23_OF_A10_INS_2;
            bool FIRE_xx23_OF_A10_INS_3;
            bool FIRE_xx24_OF_A10;
            bool FIRE_xx10_OF_A11;
            bool FIRE_xx11_OF_A11;
            bool FIRE_xx10_OF_A2;
            bool FIRE_xx11_OF_A2;
            bool FIRE_xx10_OF_A3;
            bool FIRE_xx11_OF_A3;
            bool FIRE_xx10_OF_A4;
            bool FIRE_xx11_OF_A4;
            bool FIRE_xx10_OF_A5;
            bool FIRE_xx11_OF_A5;
            bool FIRE_xx10_OF_A7;
            bool FIRE_xx11_OF_A7;
            bool FIRE_xx17_OF_A8;
            bool FIRE_xx18_OF_A8;
            bool FIRE_xx19_OF_A8;
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
            int failI_OF_A10 = 9 ;
            int to_be_fired_OF_A10 = 10 ;
            int already_standby_OF_A10 = 11 ;
            int already_required_OF_A10 = 12 ;
            int required_OF_A11 = 13 ;
            int already_S_OF_A11 = 14 ;
            int S_OF_A11 = 15 ;
            int relevant_evt_OF_A11 = 16 ;
            int failF_OF_A11 = 17 ;
            int required_OF_A12 = 18 ;
            int already_S_OF_A12 = 19 ;
            int S_OF_A12 = 20 ;
            int relevant_evt_OF_A12 = 21 ;
            int required_OF_A13 = 22 ;
            int already_S_OF_A13 = 23 ;
            int S_OF_A13 = 24 ;
            int relevant_evt_OF_A13 = 25 ;
            int required_OF_A14 = 26 ;
            int already_S_OF_A14 = 27 ;
            int S_OF_A14 = 28 ;
            int relevant_evt_OF_A14 = 29 ;
            int required_OF_A2 = 30 ;
            int already_S_OF_A2 = 31 ;
            int S_OF_A2 = 32 ;
            int relevant_evt_OF_A2 = 33 ;
            int failF_OF_A2 = 34 ;
            int required_OF_A3 = 35 ;
            int already_S_OF_A3 = 36 ;
            int S_OF_A3 = 37 ;
            int relevant_evt_OF_A3 = 38 ;
            int failF_OF_A3 = 39 ;
            int required_OF_A4 = 40 ;
            int already_S_OF_A4 = 41 ;
            int S_OF_A4 = 42 ;
            int relevant_evt_OF_A4 = 43 ;
            int failF_OF_A4 = 44 ;
            int required_OF_A5 = 45 ;
            int already_S_OF_A5 = 46 ;
            int S_OF_A5 = 47 ;
            int relevant_evt_OF_A5 = 48 ;
            int failF_OF_A5 = 49 ;
            int required_OF_A6 = 50 ;
            int already_S_OF_A6 = 51 ;
            int S_OF_A6 = 52 ;
            int relevant_evt_OF_A6 = 53 ;
            int required_OF_A7 = 54 ;
            int already_S_OF_A7 = 55 ;
            int S_OF_A7 = 56 ;
            int relevant_evt_OF_A7 = 57 ;
            int failF_OF_A7 = 58 ;
            int required_OF_A8 = 59 ;
            int already_S_OF_A8 = 60 ;
            int S_OF_A8 = 61 ;
            int relevant_evt_OF_A8 = 62 ;
            int failF_OF_A8 = 63 ;
            int failS_OF_A8 = 64 ;
            int required_OF_A9 = 65 ;
            int already_S_OF_A9 = 66 ;
            int S_OF_A9 = 67 ;
            int relevant_evt_OF_A9 = 68 ;
            int failF_OF_A9 = 69 ;
            int required_OF_UE_1 = 70 ;
            int already_S_OF_UE_1 = 71 ;
            int S_OF_UE_1 = 72 ;
            int relevant_evt_OF_UE_1 = 73 ;




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