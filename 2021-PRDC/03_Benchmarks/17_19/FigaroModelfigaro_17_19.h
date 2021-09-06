
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
        class FigaroProgram_figaro_17_19: public storm::figaro::FigaroProgram{
        public:
        FigaroProgram_figaro_17_19(): FigaroProgram(//            std::map<std::string, size_t> mFigaroboolelementindex =
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
            	{"in_progress_OF_A10" , 9},
            	{"already_required_OF_A10" , 10},
            	{"start_phase_OF_A10" , 11},
            	{"required_OF_A11" , 12},
            	{"already_S_OF_A11" , 13},
            	{"S_OF_A11" , 14},
            	{"relevant_evt_OF_A11" , 15},
            	{"in_progress_OF_A11" , 16},
            	{"already_required_OF_A11" , 17},
            	{"start_phase_OF_A11" , 18},
            	{"required_OF_A12" , 19},
            	{"already_S_OF_A12" , 20},
            	{"S_OF_A12" , 21},
            	{"relevant_evt_OF_A12" , 22},
            	{"in_progress_OF_A12" , 23},
            	{"already_required_OF_A12" , 24},
            	{"start_phase_OF_A12" , 25},
            	{"required_OF_A13" , 26},
            	{"already_S_OF_A13" , 27},
            	{"S_OF_A13" , 28},
            	{"relevant_evt_OF_A13" , 29},
            	{"failF_OF_A13" , 30},
            	{"required_OF_A2" , 31},
            	{"already_S_OF_A2" , 32},
            	{"S_OF_A2" , 33},
            	{"relevant_evt_OF_A2" , 34},
            	{"failF_OF_A2" , 35},
            	{"required_OF_A3" , 36},
            	{"already_S_OF_A3" , 37},
            	{"S_OF_A3" , 38},
            	{"relevant_evt_OF_A3" , 39},
            	{"failF_OF_A3" , 40},
            	{"required_OF_A4" , 41},
            	{"already_S_OF_A4" , 42},
            	{"S_OF_A4" , 43},
            	{"relevant_evt_OF_A4" , 44},
            	{"required_OF_A5" , 45},
            	{"already_S_OF_A5" , 46},
            	{"S_OF_A5" , 47},
            	{"relevant_evt_OF_A5" , 48},
            	{"failF_OF_A5" , 49},
            	{"required_OF_A6" , 50},
            	{"already_S_OF_A6" , 51},
            	{"S_OF_A6" , 52},
            	{"relevant_evt_OF_A6" , 53},
            	{"failF_OF_A6" , 54},
            	{"required_OF_A7" , 55},
            	{"already_S_OF_A7" , 56},
            	{"S_OF_A7" , 57},
            	{"relevant_evt_OF_A7" , 58},
            	{"required_OF_A8" , 59},
            	{"already_S_OF_A8" , 60},
            	{"S_OF_A8" , 61},
            	{"relevant_evt_OF_A8" , 62},
            	{"required_OF_A9" , 63},
            	{"already_S_OF_A9" , 64},
            	{"S_OF_A9" , 65},
            	{"relevant_evt_OF_A9" , 66},
            	{"required_OF_UE_1" , 67},
            	{"already_S_OF_UE_1" , 68},
            	{"S_OF_UE_1" , 69},
            	{"relevant_evt_OF_UE_1" , 70},
            	{"required_OF_a14" , 71},
            	{"already_S_OF_a14" , 72},
            	{"S_OF_a14" , 73},
            	{"relevant_evt_OF_a14" , 74}},

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
                    75 ,
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
            bool REINITIALISATION_OF_required_OF_UE_1 ;
            bool REINITIALISATION_OF_S_OF_UE_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_UE_1 ;
            bool REINITIALISATION_OF_required_OF_a14 ;
            bool REINITIALISATION_OF_S_OF_a14 ;
            bool REINITIALISATION_OF_relevant_evt_OF_a14 ;
            
		/* ---------- DECLARATION OF CONSTANTS ------------ */
			std::string const calculate_required_OF_A11 = "fn_fathers_and_trig";
			double const mu_OF_A2 = 0.1;
			bool const force_relevant_events_OF_A3 = false;
			bool const force_relevant_events_OF_A13 = false;
			std::string const calculate_required_OF_A9 = "fn_fathers_and_trig";
			std::string const trigger_kind_OF_t_9 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A7 = false;
			double const duration_OF_A11 = 10;
			std::string const trigger_kind_OF_t_6 = "fn_fathers_and_trig";
			std::string const Dist_kind_OF_A11 = "exponential";
			std::string const calculate_required_OF_A12 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A2 = false;
			bool const force_relevant_events_OF_a14 = false;
			std::string const Dist_kind_OF_A12 = "exponential";
			double const mu_OF_A1 = 0.1;
			std::string const calculate_required_OF_UE_1 = "fn_fathers_and_trig";
			double const duration_OF_A12 = 10;
			std::string const trimming_option_OF_OPTIONS = "maximum";
			bool const force_relevant_events_OF_A10 = false;
			double const lambda_OF_A5 = 0.01;
			double const lambda_OF_A6 = 0.01;
			std::string const trigger_kind_OF_t_3 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A1 = false;
			bool const force_relevant_events_OF_A4 = false;
			std::string const trigger_kind_OF_t_5 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_A5 = false;
			bool const failF_FROZEN_OF_A6 = false;
			double const lambda_OF_A3 = 0.01;
			double const lambda_OF_A13 = 0.01;
			std::string const calculate_required_OF_A5 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_UE_1 = true;
			std::string const calculate_required_OF_A6 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A11 = false;
			bool const force_relevant_events_OF_A9 = false;
			bool const failF_FROZEN_OF_A3 = false;
			std::string const calculate_required_OF_A8 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_A13 = false;
			double const lambda_OF_A2 = 0.01;
			bool const force_relevant_events_OF_A12 = false;
			bool const Profil1_OF___ARBRE__EIRM = true;
			std::string const calculate_required_OF_A3 = "fn_fathers_and_trig";
			std::string const trigger_kind_OF_t_2 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_A2 = false;
			std::string const calculate_required_OF_A13 = "fn_fathers_and_trig";
			double const lambda_OF_A1 = 0.01;
			bool const trimming_OF_OPTIONS = false;
			std::string const trigger_kind_OF_t_8 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A2 = "fn_fathers_and_trig";
			double const mu_OF_A13 = 0.1;
			std::string const calculate_required_OF_A7 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_A1 = false;
			double const mu_OF_A5 = 0.1;
			std::string const calculate_required_OF_a14 = "fn_fathers_and_trig";
			double const mu_OF_A6 = 0.1;
			std::string const trigger_kind_OF_t_7 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A10 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A6 = false;
			std::string const calculate_required_OF_A1 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A4 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A5 = false;
			bool const repairable_system_OF_OPTIONS = true;
			double const duration_OF_A10 = 10;
			double const mu_OF_A3 = 0.1;
			bool const force_relevant_events_OF_A8 = false;
			std::string const Dist_kind_OF_A10 = "exponential";
			std::string const trigger_kind_OF_t_4 = "fn_fathers_and_trig";
		
            /* ---------- DECLARATION OF OCCURRENCE RULES FIRING FLAGS ------------ */
            bool FIRE_xx10_OF_A1;
            bool FIRE_xx11_OF_A1;
            bool FIRE_xx43_a_OF_A10;
            bool FIRE_xx47_OF_A10_INS_3;
            bool FIRE_xx43_a_OF_A11;
            bool FIRE_xx47_OF_A11_INS_5;
            bool FIRE_xx43_a_OF_A12;
            bool FIRE_xx47_OF_A12_INS_7;
            bool FIRE_xx10_OF_A13;
            bool FIRE_xx11_OF_A13;
            bool FIRE_xx10_OF_A2;
            bool FIRE_xx11_OF_A2;
            bool FIRE_xx10_OF_A3;
            bool FIRE_xx11_OF_A3;
            bool FIRE_xx10_OF_A5;
            bool FIRE_xx11_OF_A5;
            bool FIRE_xx10_OF_A6;
            bool FIRE_xx11_OF_A6;

            int required_OF_A1 = 0 ;
            int already_S_OF_A1 = 1 ;
            int S_OF_A1 = 2 ;
            int relevant_evt_OF_A1 = 3 ;
            int failF_OF_A1 = 4 ;
            int required_OF_A10 = 5 ;
            int already_S_OF_A10 = 6 ;
            int S_OF_A10 = 7 ;
            int relevant_evt_OF_A10 = 8 ;
            int in_progress_OF_A10 = 9 ;
            int already_required_OF_A10 = 10 ;
            int start_phase_OF_A10 = 11 ;
            int required_OF_A11 = 12 ;
            int already_S_OF_A11 = 13 ;
            int S_OF_A11 = 14 ;
            int relevant_evt_OF_A11 = 15 ;
            int in_progress_OF_A11 = 16 ;
            int already_required_OF_A11 = 17 ;
            int start_phase_OF_A11 = 18 ;
            int required_OF_A12 = 19 ;
            int already_S_OF_A12 = 20 ;
            int S_OF_A12 = 21 ;
            int relevant_evt_OF_A12 = 22 ;
            int in_progress_OF_A12 = 23 ;
            int already_required_OF_A12 = 24 ;
            int start_phase_OF_A12 = 25 ;
            int required_OF_A13 = 26 ;
            int already_S_OF_A13 = 27 ;
            int S_OF_A13 = 28 ;
            int relevant_evt_OF_A13 = 29 ;
            int failF_OF_A13 = 30 ;
            int required_OF_A2 = 31 ;
            int already_S_OF_A2 = 32 ;
            int S_OF_A2 = 33 ;
            int relevant_evt_OF_A2 = 34 ;
            int failF_OF_A2 = 35 ;
            int required_OF_A3 = 36 ;
            int already_S_OF_A3 = 37 ;
            int S_OF_A3 = 38 ;
            int relevant_evt_OF_A3 = 39 ;
            int failF_OF_A3 = 40 ;
            int required_OF_A4 = 41 ;
            int already_S_OF_A4 = 42 ;
            int S_OF_A4 = 43 ;
            int relevant_evt_OF_A4 = 44 ;
            int required_OF_A5 = 45 ;
            int already_S_OF_A5 = 46 ;
            int S_OF_A5 = 47 ;
            int relevant_evt_OF_A5 = 48 ;
            int failF_OF_A5 = 49 ;
            int required_OF_A6 = 50 ;
            int already_S_OF_A6 = 51 ;
            int S_OF_A6 = 52 ;
            int relevant_evt_OF_A6 = 53 ;
            int failF_OF_A6 = 54 ;
            int required_OF_A7 = 55 ;
            int already_S_OF_A7 = 56 ;
            int S_OF_A7 = 57 ;
            int relevant_evt_OF_A7 = 58 ;
            int required_OF_A8 = 59 ;
            int already_S_OF_A8 = 60 ;
            int S_OF_A8 = 61 ;
            int relevant_evt_OF_A8 = 62 ;
            int required_OF_A9 = 63 ;
            int already_S_OF_A9 = 64 ;
            int S_OF_A9 = 65 ;
            int relevant_evt_OF_A9 = 66 ;
            int required_OF_UE_1 = 67 ;
            int already_S_OF_UE_1 = 68 ;
            int S_OF_UE_1 = 69 ;
            int relevant_evt_OF_UE_1 = 70 ;
            int required_OF_a14 = 71 ;
            int already_S_OF_a14 = 72 ;
            int S_OF_a14 = 73 ;
            int relevant_evt_OF_a14 = 74 ;




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