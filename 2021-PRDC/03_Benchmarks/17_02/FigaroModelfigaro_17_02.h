
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
        class FigaroProgram_figaro_17_02: public storm::figaro::FigaroProgram{
        public:
        FigaroProgram_figaro_17_02(): FigaroProgram(//            std::map<std::string, size_t> mFigaroboolelementindex =
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
            	{"required_OF_A2" , 13},
            	{"already_S_OF_A2" , 14},
            	{"S_OF_A2" , 15},
            	{"relevant_evt_OF_A2" , 16},
            	{"failF_OF_A2" , 17},
            	{"required_OF_A3" , 18},
            	{"already_S_OF_A3" , 19},
            	{"S_OF_A3" , 20},
            	{"relevant_evt_OF_A3" , 21},
            	{"failI_OF_A3" , 22},
            	{"to_be_fired_OF_A3" , 23},
            	{"already_standby_OF_A3" , 24},
            	{"already_required_OF_A3" , 25},
            	{"required_OF_A4" , 26},
            	{"already_S_OF_A4" , 27},
            	{"S_OF_A4" , 28},
            	{"relevant_evt_OF_A4" , 29},
            	{"failI_OF_A4" , 30},
            	{"to_be_fired_OF_A4" , 31},
            	{"already_standby_OF_A4" , 32},
            	{"already_required_OF_A4" , 33},
            	{"required_OF_A5" , 34},
            	{"already_S_OF_A5" , 35},
            	{"S_OF_A5" , 36},
            	{"relevant_evt_OF_A5" , 37},
            	{"failF_OF_A5" , 38},
            	{"required_OF_A6" , 39},
            	{"already_S_OF_A6" , 40},
            	{"S_OF_A6" , 41},
            	{"relevant_evt_OF_A6" , 42},
            	{"required_OF_A7" , 43},
            	{"already_S_OF_A7" , 44},
            	{"S_OF_A7" , 45},
            	{"relevant_evt_OF_A7" , 46},
            	{"failF_OF_A7" , 47},
            	{"required_OF_A8" , 48},
            	{"already_S_OF_A8" , 49},
            	{"S_OF_A8" , 50},
            	{"relevant_evt_OF_A8" , 51},
            	{"required_OF_A9" , 52},
            	{"already_S_OF_A9" , 53},
            	{"S_OF_A9" , 54},
            	{"relevant_evt_OF_A9" , 55},
            	{"required_OF_UE_1" , 56},
            	{"already_S_OF_UE_1" , 57},
            	{"S_OF_UE_1" , 58},
            	{"relevant_evt_OF_UE_1" , 59}},

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
                    60 ,
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
            bool REINITIALISATION_OF_required_OF_A2 ;
            bool REINITIALISATION_OF_S_OF_A2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A2 ;
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
			std::string const trigger_kind_OF_t_3 = "fn_fathers_opp_trig";
			bool const force_relevant_events_OF_A5 = false;
			std::string const when_to_check_OF_A4 = "not_req_to_req";
			bool const force_relevant_events_OF_A2 = false;
			bool const failF_FROZEN_OF_A1 = false;
			bool const force_relevant_events_OF_A4 = false;
			std::string const calculate_required_OF_A6 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A11 = "fn_fathers_and_trig";
			bool const failI_FROZEN_OF_A3 = false;
			bool const repairable_system_OF_OPTIONS = true;
			double const lambda_OF_A7 = 0.01;
			bool const force_relevant_events_OF_A10 = false;
			bool const failF_FROZEN_OF_A7 = false;
			double const gamma_OF_A4 = 0.001;
			double const lambda_OF_A1 = 0.01;
			double const mu_OF_A5 = 0.1;
			std::string const calculate_required_OF_A3 = "fn_fathers_opp_trig";
			double const mu_OF_A2 = 0.1;
			double const mu_OF_A4 = 0.1;
			std::string const calculate_required_OF_A5 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A4 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A8 = false;
			std::string const when_to_check_OF_A3 = "not_req_to_req";
			bool const force_relevant_events_OF_A3 = false;
			bool const failF_FROZEN_OF_A5 = false;
			bool const failF_FROZEN_OF_A2 = false;
			std::string const calculate_required_OF_A10 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A7 = false;
			bool const force_relevant_events_OF_A9 = false;
			std::string const trimming_option_OF_OPTIONS = "maximum";
			bool const Profil1_OF___ARBRE__EIRM = true;
			bool const force_relevant_events_OF_A1 = false;
			bool const force_relevant_events_OF_UE_1 = true;
			bool const failI_FROZEN_OF_A4 = false;
			std::string const calculate_required_OF_A8 = "fn_fathers_and_trig";
			double const lambda_OF_A5 = 0.01;
			double const lambda_OF_A2 = 0.01;
			bool const force_relevant_events_OF_A6 = false;
			double const mu_OF_A3 = 0.1;
			std::string const trigger_kind_OF_t_1 = "fn_fathers_and_trig";
			double const mu_OF_A7 = 0.1;
			double const gamma_OF_A3 = 0.001;
			bool const force_relevant_events_OF_A11 = false;
			std::string const calculate_required_OF_A7 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A9 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A2 = "opposite_to_S_trig";
			std::string const trigger_kind_OF_t_2 = "opposite_to_S_trig";
			double const mu_OF_A1 = 0.1;
			std::string const calculate_required_OF_A1 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_UE_1 = "fn_fathers_and_trig";
			bool const trimming_OF_OPTIONS = false;
		
            /* ---------- DECLARATION OF OCCURRENCE RULES FIRING FLAGS ------------ */
            bool FIRE_xx10_OF_A1;
            bool FIRE_xx11_OF_A1;
            bool FIRE_xx10_OF_A2;
            bool FIRE_xx11_OF_A2;
            bool FIRE_xx23_OF_A3_INS_4;
            bool FIRE_xx23_OF_A3_INS_5;
            bool FIRE_xx24_OF_A3;
            bool FIRE_xx23_OF_A4_INS_7;
            bool FIRE_xx23_OF_A4_INS_8;
            bool FIRE_xx24_OF_A4;
            bool FIRE_xx10_OF_A5;
            bool FIRE_xx11_OF_A5;
            bool FIRE_xx10_OF_A7;
            bool FIRE_xx11_OF_A7;

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
            int required_OF_A2 = 13 ;
            int already_S_OF_A2 = 14 ;
            int S_OF_A2 = 15 ;
            int relevant_evt_OF_A2 = 16 ;
            int failF_OF_A2 = 17 ;
            int required_OF_A3 = 18 ;
            int already_S_OF_A3 = 19 ;
            int S_OF_A3 = 20 ;
            int relevant_evt_OF_A3 = 21 ;
            int failI_OF_A3 = 22 ;
            int to_be_fired_OF_A3 = 23 ;
            int already_standby_OF_A3 = 24 ;
            int already_required_OF_A3 = 25 ;
            int required_OF_A4 = 26 ;
            int already_S_OF_A4 = 27 ;
            int S_OF_A4 = 28 ;
            int relevant_evt_OF_A4 = 29 ;
            int failI_OF_A4 = 30 ;
            int to_be_fired_OF_A4 = 31 ;
            int already_standby_OF_A4 = 32 ;
            int already_required_OF_A4 = 33 ;
            int required_OF_A5 = 34 ;
            int already_S_OF_A5 = 35 ;
            int S_OF_A5 = 36 ;
            int relevant_evt_OF_A5 = 37 ;
            int failF_OF_A5 = 38 ;
            int required_OF_A6 = 39 ;
            int already_S_OF_A6 = 40 ;
            int S_OF_A6 = 41 ;
            int relevant_evt_OF_A6 = 42 ;
            int required_OF_A7 = 43 ;
            int already_S_OF_A7 = 44 ;
            int S_OF_A7 = 45 ;
            int relevant_evt_OF_A7 = 46 ;
            int failF_OF_A7 = 47 ;
            int required_OF_A8 = 48 ;
            int already_S_OF_A8 = 49 ;
            int S_OF_A8 = 50 ;
            int relevant_evt_OF_A8 = 51 ;
            int required_OF_A9 = 52 ;
            int already_S_OF_A9 = 53 ;
            int S_OF_A9 = 54 ;
            int relevant_evt_OF_A9 = 55 ;
            int required_OF_UE_1 = 56 ;
            int already_S_OF_UE_1 = 57 ;
            int S_OF_UE_1 = 58 ;
            int relevant_evt_OF_UE_1 = 59 ;




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