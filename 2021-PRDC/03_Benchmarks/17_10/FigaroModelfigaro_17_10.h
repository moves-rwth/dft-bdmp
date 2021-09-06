
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
        class FigaroProgram_figaro_17_10: public storm::figaro::FigaroProgram{
        public:
        FigaroProgram_figaro_17_10(): FigaroProgram(//            std::map<std::string, size_t> mFigaroboolelementindex =
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
            	{"failF_OF_A3" , 14},
            	{"required_OF_A4" , 15},
            	{"already_S_OF_A4" , 16},
            	{"S_OF_A4" , 17},
            	{"relevant_evt_OF_A4" , 18},
            	{"failF_OF_A4" , 19},
            	{"required_OF_A5" , 20},
            	{"already_S_OF_A5" , 21},
            	{"S_OF_A5" , 22},
            	{"relevant_evt_OF_A5" , 23},
            	{"required_OF_A6" , 24},
            	{"already_S_OF_A6" , 25},
            	{"S_OF_A6" , 26},
            	{"relevant_evt_OF_A6" , 27},
            	{"failF_OF_A6" , 28},
            	{"required_OF_A7" , 29},
            	{"already_S_OF_A7" , 30},
            	{"S_OF_A7" , 31},
            	{"relevant_evt_OF_A7" , 32},
            	{"failI_OF_A7" , 33},
            	{"to_be_fired_OF_A7" , 34},
            	{"already_standby_OF_A7" , 35},
            	{"already_required_OF_A7" , 36},
            	{"required_OF_A8" , 37},
            	{"already_S_OF_A8" , 38},
            	{"S_OF_A8" , 39},
            	{"relevant_evt_OF_A8" , 40},
            	{"required_OF_A9" , 41},
            	{"already_S_OF_A9" , 42},
            	{"S_OF_A9" , 43},
            	{"relevant_evt_OF_A9" , 44},
            	{"required_OF_UE_1" , 45},
            	{"already_S_OF_UE_1" , 46},
            	{"S_OF_UE_1" , 47},
            	{"relevant_evt_OF_UE_1" , 48}},

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
                    49 ,
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
            bool REINITIALISATION_OF_required_OF_A9 ;
            bool REINITIALISATION_OF_S_OF_A9 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A9 ;
            bool REINITIALISATION_OF_required_OF_UE_1 ;
            bool REINITIALISATION_OF_S_OF_UE_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_UE_1 ;
            
		/* ---------- DECLARATION OF CONSTANTS ------------ */
			bool const failI_FROZEN_OF_A7 = false;
			std::string const calculate_required_OF_A2 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_A2 = false;
			bool const force_relevant_events_OF_A5 = false;
			bool const force_relevant_events_OF_A1 = false;
			double const mu_OF_A2 = 0.1;
			std::string const calculate_required_OF_A7 = "fn_fathers_and_trig";
			std::string const trigger_kind_OF_t_1_1 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A6 = false;
			double const mu_OF_A7 = 0.1;
			bool const repairable_system_OF_OPTIONS = true;
			bool const trimming_OF_OPTIONS = false;
			bool const force_relevant_events_OF_A4 = false;
			bool const force_relevant_events_OF_A3 = false;
			std::string const trigger_kind_OF_t_2 = "fn_fathers_and_trig";
			bool const Profil1_OF___ARBRE__EIRM = true;
			std::string const trimming_option_OF_OPTIONS = "maximum";
			double const lambda_OF_A1 = 0.01;
			std::string const calculate_required_OF_A8 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A9 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A2 = false;
			double const lambda_OF_A6 = 0.01;
			std::string const calculate_required_OF_A5 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A1 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_UE_1 = true;
			bool const failF_FROZEN_OF_A1 = false;
			bool const force_relevant_events_OF_A7 = false;
			std::string const trigger_kind_OF_t_1 = "fn_fathers_and_trig";
			double const lambda_OF_A4 = 0.01;
			double const lambda_OF_A3 = 0.01;
			double const mu_OF_A1 = 0.1;
			std::string const when_to_check_OF_A7 = "not_req_to_req";
			std::string const calculate_required_OF_A6 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_UE_1 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_A6 = false;
			double const gamma_OF_A7 = 0.01;
			double const mu_OF_A6 = 0.1;
			std::string const calculate_required_OF_A4 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A3 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_A3 = false;
			double const lambda_OF_A2 = 0.01;
			double const mu_OF_A4 = 0.1;
			double const mu_OF_A3 = 0.1;
			bool const failF_FROZEN_OF_A4 = false;
			bool const force_relevant_events_OF_A9 = false;
			bool const force_relevant_events_OF_A8 = false;
		
            /* ---------- DECLARATION OF OCCURRENCE RULES FIRING FLAGS ------------ */
            bool FIRE_xx10_OF_A1;
            bool FIRE_xx11_OF_A1;
            bool FIRE_xx10_OF_A2;
            bool FIRE_xx11_OF_A2;
            bool FIRE_xx10_OF_A3;
            bool FIRE_xx11_OF_A3;
            bool FIRE_xx10_OF_A4;
            bool FIRE_xx11_OF_A4;
            bool FIRE_xx10_OF_A6;
            bool FIRE_xx11_OF_A6;
            bool FIRE_xx23_OF_A7_INS_10;
            bool FIRE_xx23_OF_A7_INS_11;
            bool FIRE_xx24_OF_A7;

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
            int failF_OF_A3 = 14 ;
            int required_OF_A4 = 15 ;
            int already_S_OF_A4 = 16 ;
            int S_OF_A4 = 17 ;
            int relevant_evt_OF_A4 = 18 ;
            int failF_OF_A4 = 19 ;
            int required_OF_A5 = 20 ;
            int already_S_OF_A5 = 21 ;
            int S_OF_A5 = 22 ;
            int relevant_evt_OF_A5 = 23 ;
            int required_OF_A6 = 24 ;
            int already_S_OF_A6 = 25 ;
            int S_OF_A6 = 26 ;
            int relevant_evt_OF_A6 = 27 ;
            int failF_OF_A6 = 28 ;
            int required_OF_A7 = 29 ;
            int already_S_OF_A7 = 30 ;
            int S_OF_A7 = 31 ;
            int relevant_evt_OF_A7 = 32 ;
            int failI_OF_A7 = 33 ;
            int to_be_fired_OF_A7 = 34 ;
            int already_standby_OF_A7 = 35 ;
            int already_required_OF_A7 = 36 ;
            int required_OF_A8 = 37 ;
            int already_S_OF_A8 = 38 ;
            int S_OF_A8 = 39 ;
            int relevant_evt_OF_A8 = 40 ;
            int required_OF_A9 = 41 ;
            int already_S_OF_A9 = 42 ;
            int S_OF_A9 = 43 ;
            int relevant_evt_OF_A9 = 44 ;
            int required_OF_UE_1 = 45 ;
            int already_S_OF_UE_1 = 46 ;
            int S_OF_UE_1 = 47 ;
            int relevant_evt_OF_UE_1 = 48 ;




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