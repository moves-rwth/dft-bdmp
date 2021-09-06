
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
        class FigaroProgram_figaro_17_01: public storm::figaro::FigaroProgram{
        public:
        FigaroProgram_figaro_17_01(): FigaroProgram(//            std::map<std::string, size_t> mFigaroboolelementindex =
                    {  
            	{"required_OF_A1" , 0},
            	{"already_S_OF_A1" , 1},
            	{"S_OF_A1" , 2},
            	{"relevant_evt_OF_A1" , 3},
            	{"failF_OF_A1" , 4},
            	{"required_OF_A2" , 5},
            	{"already_S_OF_A2" , 6},
            	{"S_OF_A2" , 7},
            	{"relevant_evt_OF_A2" , 8},
            	{"failF_OF_A2" , 9},
            	{"required_OF_A3" , 10},
            	{"already_S_OF_A3" , 11},
            	{"S_OF_A3" , 12},
            	{"relevant_evt_OF_A3" , 13},
            	{"failI_OF_A3" , 14},
            	{"to_be_fired_OF_A3" , 15},
            	{"already_standby_OF_A3" , 16},
            	{"already_required_OF_A3" , 17},
            	{"required_OF_A4" , 18},
            	{"already_S_OF_A4" , 19},
            	{"S_OF_A4" , 20},
            	{"relevant_evt_OF_A4" , 21},
            	{"failI_OF_A4" , 22},
            	{"to_be_fired_OF_A4" , 23},
            	{"already_standby_OF_A4" , 24},
            	{"already_required_OF_A4" , 25},
            	{"required_OF_A5" , 26},
            	{"already_S_OF_A5" , 27},
            	{"S_OF_A5" , 28},
            	{"relevant_evt_OF_A5" , 29},
            	{"failI_OF_A5" , 30},
            	{"to_be_fired_OF_A5" , 31},
            	{"already_standby_OF_A5" , 32},
            	{"already_required_OF_A5" , 33},
            	{"required_OF_A6" , 34},
            	{"already_S_OF_A6" , 35},
            	{"S_OF_A6" , 36},
            	{"relevant_evt_OF_A6" , 37},
            	{"failF_OF_A6" , 38},
            	{"required_OF_A7" , 39},
            	{"already_S_OF_A7" , 40},
            	{"S_OF_A7" , 41},
            	{"relevant_evt_OF_A7" , 42},
            	{"required_OF_A8" , 43},
            	{"already_S_OF_A8" , 44},
            	{"S_OF_A8" , 45},
            	{"relevant_evt_OF_A8" , 46},
            	{"required_OF_A9" , 47},
            	{"already_S_OF_A9" , 48},
            	{"S_OF_A9" , 49},
            	{"relevant_evt_OF_A9" , 50},
            	{"required_OF_UE_1" , 51},
            	{"already_S_OF_UE_1" , 52},
            	{"S_OF_UE_1" , 53},
            	{"relevant_evt_OF_UE_1" , 54}},

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
                    55 ,
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
            bool REINITIALISATION_OF_to_be_fired_OF_A5 ;
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
			std::string const when_to_check_OF_A5 = "not_req_to_req";
			bool const force_relevant_events_OF_A5 = false;
			std::string const when_to_check_OF_A4 = "not_req_to_req";
			bool const force_relevant_events_OF_A2 = false;
			bool const failF_FROZEN_OF_A1 = false;
			bool const force_relevant_events_OF_A4 = false;
			std::string const calculate_required_OF_A6 = "fn_fathers_and_trig";
			double const mu_OF_A6 = 0.1;
			bool const failI_FROZEN_OF_A3 = false;
			bool const repairable_system_OF_OPTIONS = true;
			double const gamma_OF_A5 = 0.5;
			bool const failF_FROZEN_OF_A6 = false;
			double const gamma_OF_A4 = 0.5;
			double const lambda_OF_A1 = 0.01;
			double const mu_OF_A5 = 0.1;
			std::string const calculate_required_OF_A3 = "fn_fathers_opp_trig";
			double const mu_OF_A2 = 0.1;
			double const mu_OF_A4 = 0.1;
			std::string const calculate_required_OF_A5 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A2 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A4 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A8 = false;
			double const lambda_OF_A6 = 0.01;
			std::string const when_to_check_OF_A3 = "not_req_to_req";
			bool const force_relevant_events_OF_A3 = false;
			bool const failF_FROZEN_OF_A2 = false;
			bool const force_relevant_events_OF_A7 = false;
			bool const force_relevant_events_OF_A9 = false;
			std::string const trimming_option_OF_OPTIONS = "maximum";
			bool const Profil1_OF___ARBRE__EIRM = true;
			double const gamma_OF_A3 = 0.5;
			bool const force_relevant_events_OF_A1 = false;
			bool const failI_FROZEN_OF_A5 = false;
			bool const force_relevant_events_OF_UE_1 = true;
			bool const failI_FROZEN_OF_A4 = false;
			std::string const calculate_required_OF_A8 = "fn_fathers_and_trig";
			double const lambda_OF_A2 = 0.01;
			bool const force_relevant_events_OF_A6 = false;
			double const mu_OF_A3 = 0.1;
			std::string const trigger_kind_OF_t_1 = "fn_fathers_and_trig";
			std::string const trigger_kind_OF_t_2 = "fn_fathers_opp_trig";
			std::string const calculate_required_OF_A7 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A9 = "fn_fathers_and_trig";
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
            bool FIRE_xx23_OF_A5_INS_10;
            bool FIRE_xx23_OF_A5_INS_11;
            bool FIRE_xx24_OF_A5;
            bool FIRE_xx10_OF_A6;
            bool FIRE_xx11_OF_A6;

            int required_OF_A1 = 0 ;
            int already_S_OF_A1 = 1 ;
            int S_OF_A1 = 2 ;
            int relevant_evt_OF_A1 = 3 ;
            int failF_OF_A1 = 4 ;
            int required_OF_A2 = 5 ;
            int already_S_OF_A2 = 6 ;
            int S_OF_A2 = 7 ;
            int relevant_evt_OF_A2 = 8 ;
            int failF_OF_A2 = 9 ;
            int required_OF_A3 = 10 ;
            int already_S_OF_A3 = 11 ;
            int S_OF_A3 = 12 ;
            int relevant_evt_OF_A3 = 13 ;
            int failI_OF_A3 = 14 ;
            int to_be_fired_OF_A3 = 15 ;
            int already_standby_OF_A3 = 16 ;
            int already_required_OF_A3 = 17 ;
            int required_OF_A4 = 18 ;
            int already_S_OF_A4 = 19 ;
            int S_OF_A4 = 20 ;
            int relevant_evt_OF_A4 = 21 ;
            int failI_OF_A4 = 22 ;
            int to_be_fired_OF_A4 = 23 ;
            int already_standby_OF_A4 = 24 ;
            int already_required_OF_A4 = 25 ;
            int required_OF_A5 = 26 ;
            int already_S_OF_A5 = 27 ;
            int S_OF_A5 = 28 ;
            int relevant_evt_OF_A5 = 29 ;
            int failI_OF_A5 = 30 ;
            int to_be_fired_OF_A5 = 31 ;
            int already_standby_OF_A5 = 32 ;
            int already_required_OF_A5 = 33 ;
            int required_OF_A6 = 34 ;
            int already_S_OF_A6 = 35 ;
            int S_OF_A6 = 36 ;
            int relevant_evt_OF_A6 = 37 ;
            int failF_OF_A6 = 38 ;
            int required_OF_A7 = 39 ;
            int already_S_OF_A7 = 40 ;
            int S_OF_A7 = 41 ;
            int relevant_evt_OF_A7 = 42 ;
            int required_OF_A8 = 43 ;
            int already_S_OF_A8 = 44 ;
            int S_OF_A8 = 45 ;
            int relevant_evt_OF_A8 = 46 ;
            int required_OF_A9 = 47 ;
            int already_S_OF_A9 = 48 ;
            int S_OF_A9 = 49 ;
            int relevant_evt_OF_A9 = 50 ;
            int required_OF_UE_1 = 51 ;
            int already_S_OF_UE_1 = 52 ;
            int S_OF_UE_1 = 53 ;
            int relevant_evt_OF_UE_1 = 54 ;




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