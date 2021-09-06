
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
        class FigaroProgram_figaro_17_05: public storm::figaro::FigaroProgram{
        public:
        FigaroProgram_figaro_17_05(): FigaroProgram(//            std::map<std::string, size_t> mFigaroboolelementindex =
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
            	{"required_OF_A11" , 10},
            	{"already_S_OF_A11" , 11},
            	{"S_OF_A11" , 12},
            	{"relevant_evt_OF_A11" , 13},
            	{"failF_OF_A11" , 14},
            	{"required_OF_A12" , 15},
            	{"already_S_OF_A12" , 16},
            	{"S_OF_A12" , 17},
            	{"relevant_evt_OF_A12" , 18},
            	{"required_OF_A13" , 19},
            	{"already_S_OF_A13" , 20},
            	{"S_OF_A13" , 21},
            	{"relevant_evt_OF_A13" , 22},
            	{"required_OF_A14" , 23},
            	{"already_S_OF_A14" , 24},
            	{"S_OF_A14" , 25},
            	{"relevant_evt_OF_A14" , 26},
            	{"required_OF_A2" , 27},
            	{"already_S_OF_A2" , 28},
            	{"S_OF_A2" , 29},
            	{"relevant_evt_OF_A2" , 30},
            	{"failF_OF_A2" , 31},
            	{"required_OF_A3" , 32},
            	{"already_S_OF_A3" , 33},
            	{"S_OF_A3" , 34},
            	{"relevant_evt_OF_A3" , 35},
            	{"failF_OF_A3" , 36},
            	{"required_OF_A4" , 37},
            	{"already_S_OF_A4" , 38},
            	{"S_OF_A4" , 39},
            	{"relevant_evt_OF_A4" , 40},
            	{"failF_OF_A4" , 41},
            	{"required_OF_A5" , 42},
            	{"already_S_OF_A5" , 43},
            	{"S_OF_A5" , 44},
            	{"relevant_evt_OF_A5" , 45},
            	{"failF_OF_A5" , 46},
            	{"required_OF_A6" , 47},
            	{"already_S_OF_A6" , 48},
            	{"S_OF_A6" , 49},
            	{"relevant_evt_OF_A6" , 50},
            	{"failF_OF_A6" , 51},
            	{"required_OF_A7" , 52},
            	{"already_S_OF_A7" , 53},
            	{"S_OF_A7" , 54},
            	{"relevant_evt_OF_A7" , 55},
            	{"required_OF_A8" , 56},
            	{"already_S_OF_A8" , 57},
            	{"S_OF_A8" , 58},
            	{"relevant_evt_OF_A8" , 59},
            	{"required_OF_A9" , 60},
            	{"already_S_OF_A9" , 61},
            	{"S_OF_A9" , 62},
            	{"relevant_evt_OF_A9" , 63},
            	{"failF_OF_A9" , 64},
            	{"required_OF_UE_1" , 65},
            	{"already_S_OF_UE_1" , 66},
            	{"S_OF_UE_1" , 67},
            	{"relevant_evt_OF_UE_1" , 68}},

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
                    69 ,
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
			double const mu_OF_A6 = 0.1;
			bool const force_relevant_events_OF_A5 = false;
			bool const force_relevant_events_OF_A2 = false;
			bool const failF_FROZEN_OF_A1 = false;
			bool const force_relevant_events_OF_A4 = false;
			double const mu_OF_A11 = 0.1;
			std::string const calculate_required_OF_A6 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A11 = "fn_fathers_and_trig";
			bool const repairable_system_OF_OPTIONS = true;
			bool const force_relevant_events_OF_A13 = false;
			bool const failF_FROZEN_OF_A6 = false;
			bool const force_relevant_events_OF_A10 = false;
			double const lambda_OF_A9 = 0.01;
			bool const force_relevant_events_OF_A14 = false;
			double const lambda_OF_A3 = 0.01;
			bool const failF_FROZEN_OF_A11 = false;
			bool const force_relevant_events_OF_A12 = false;
			double const lambda_OF_A1 = 0.01;
			double const mu_OF_A5 = 0.1;
			double const mu_OF_A2 = 0.1;
			double const mu_OF_A4 = 0.1;
			std::string const calculate_required_OF_A5 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A2 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A4 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A8 = false;
			std::string const trigger_kind_OF_t_2 = "fn_fathers_and_trig";
			double const lambda_OF_A6 = 0.01;
			double const mu_OF_A10 = 0.1;
			double const lambda_OF_A11 = 0.01;
			std::string const calculate_required_OF_A13 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A10 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_A2 = false;
			std::string const calculate_required_OF_A14 = "fn_fathers_and_trig";
			std::string const trimming_option_OF_OPTIONS = "maximum";
			bool const force_relevant_events_OF_A3 = false;
			bool const failF_FROZEN_OF_A4 = false;
			bool const failF_FROZEN_OF_A5 = false;
			bool const force_relevant_events_OF_A7 = false;
			bool const force_relevant_events_OF_A9 = false;
			bool const Profil1_OF___ARBRE__EIRM = true;
			bool const force_relevant_events_OF_A1 = false;
			bool const failF_FROZEN_OF_A10 = false;
			std::string const calculate_required_OF_A12 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_UE_1 = true;
			std::string const calculate_required_OF_A8 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_A9 = false;
			double const lambda_OF_A5 = 0.01;
			double const lambda_OF_A2 = 0.01;
			double const lambda_OF_A4 = 0.01;
			double const mu_OF_A3 = 0.1;
			bool const force_relevant_events_OF_A6 = false;
			double const mu_OF_A9 = 0.1;
			std::string const calculate_required_OF_A3 = "fn_fathers_and_trig";
			std::string const trigger_kind_OF_t_1 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A11 = false;
			std::string const calculate_required_OF_A7 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A9 = "fn_fathers_and_trig";
			double const lambda_OF_A10 = 0.01;
			double const mu_OF_A1 = 0.1;
			bool const failF_FROZEN_OF_A3 = false;
			std::string const calculate_required_OF_A1 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_UE_1 = "fn_fathers_and_trig";
			bool const trimming_OF_OPTIONS = false;
		
            /* ---------- DECLARATION OF OCCURRENCE RULES FIRING FLAGS ------------ */
            bool FIRE_xx10_OF_A1;
            bool FIRE_xx11_OF_A1;
            bool FIRE_xx10_OF_A10;
            bool FIRE_xx11_OF_A10;
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
            bool FIRE_xx10_OF_A6;
            bool FIRE_xx11_OF_A6;
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
            int required_OF_A11 = 10 ;
            int already_S_OF_A11 = 11 ;
            int S_OF_A11 = 12 ;
            int relevant_evt_OF_A11 = 13 ;
            int failF_OF_A11 = 14 ;
            int required_OF_A12 = 15 ;
            int already_S_OF_A12 = 16 ;
            int S_OF_A12 = 17 ;
            int relevant_evt_OF_A12 = 18 ;
            int required_OF_A13 = 19 ;
            int already_S_OF_A13 = 20 ;
            int S_OF_A13 = 21 ;
            int relevant_evt_OF_A13 = 22 ;
            int required_OF_A14 = 23 ;
            int already_S_OF_A14 = 24 ;
            int S_OF_A14 = 25 ;
            int relevant_evt_OF_A14 = 26 ;
            int required_OF_A2 = 27 ;
            int already_S_OF_A2 = 28 ;
            int S_OF_A2 = 29 ;
            int relevant_evt_OF_A2 = 30 ;
            int failF_OF_A2 = 31 ;
            int required_OF_A3 = 32 ;
            int already_S_OF_A3 = 33 ;
            int S_OF_A3 = 34 ;
            int relevant_evt_OF_A3 = 35 ;
            int failF_OF_A3 = 36 ;
            int required_OF_A4 = 37 ;
            int already_S_OF_A4 = 38 ;
            int S_OF_A4 = 39 ;
            int relevant_evt_OF_A4 = 40 ;
            int failF_OF_A4 = 41 ;
            int required_OF_A5 = 42 ;
            int already_S_OF_A5 = 43 ;
            int S_OF_A5 = 44 ;
            int relevant_evt_OF_A5 = 45 ;
            int failF_OF_A5 = 46 ;
            int required_OF_A6 = 47 ;
            int already_S_OF_A6 = 48 ;
            int S_OF_A6 = 49 ;
            int relevant_evt_OF_A6 = 50 ;
            int failF_OF_A6 = 51 ;
            int required_OF_A7 = 52 ;
            int already_S_OF_A7 = 53 ;
            int S_OF_A7 = 54 ;
            int relevant_evt_OF_A7 = 55 ;
            int required_OF_A8 = 56 ;
            int already_S_OF_A8 = 57 ;
            int S_OF_A8 = 58 ;
            int relevant_evt_OF_A8 = 59 ;
            int required_OF_A9 = 60 ;
            int already_S_OF_A9 = 61 ;
            int S_OF_A9 = 62 ;
            int relevant_evt_OF_A9 = 63 ;
            int failF_OF_A9 = 64 ;
            int required_OF_UE_1 = 65 ;
            int already_S_OF_UE_1 = 66 ;
            int S_OF_UE_1 = 67 ;
            int relevant_evt_OF_UE_1 = 68 ;




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