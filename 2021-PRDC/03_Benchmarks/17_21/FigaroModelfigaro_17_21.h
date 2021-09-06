
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
        class FigaroProgram_figaro_17_21: public storm::figaro::FigaroProgram{
        public:
        FigaroProgram_figaro_17_21(): FigaroProgram(//            std::map<std::string, size_t> mFigaroboolelementindex =
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
            	{"required_OF_A7" , 28},
            	{"already_S_OF_A7" , 29},
            	{"S_OF_A7" , 30},
            	{"relevant_evt_OF_A7" , 31},
            	{"failF_OF_A7" , 32},
            	{"required_OF_A9" , 33},
            	{"already_S_OF_A9" , 34},
            	{"S_OF_A9" , 35},
            	{"relevant_evt_OF_A9" , 36},
            	{"required_OF_UE_1" , 37},
            	{"already_S_OF_UE_1" , 38},
            	{"S_OF_UE_1" , 39},
            	{"relevant_evt_OF_UE_1" , 40},
            	{"required_OF_a8" , 41},
            	{"already_S_OF_a8" , 42},
            	{"S_OF_a8" , 43},
            	{"relevant_evt_OF_a8" , 44}},

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
                    45 ,
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
            bool REINITIALISATION_OF_required_OF_A9 ;
            bool REINITIALISATION_OF_S_OF_A9 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A9 ;
            bool REINITIALISATION_OF_required_OF_UE_1 ;
            bool REINITIALISATION_OF_S_OF_UE_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_UE_1 ;
            bool REINITIALISATION_OF_required_OF_a8 ;
            bool REINITIALISATION_OF_S_OF_a8 ;
            bool REINITIALISATION_OF_relevant_evt_OF_a8 ;
            
		/* ---------- DECLARATION OF CONSTANTS ------------ */
			bool const Weakpassword_OF___ARBRE__EIRM = false;
			double const mu_OF_A2 = 0.1;
			bool const force_relevant_events_OF_A3 = false;
			double const mu_OF_A7 = 0.1;
			std::string const calculate_required_OF_A9 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_a8 = false;
			bool const force_relevant_events_OF_A7 = false;
			bool const force_relevant_events_OF_A2 = false;
			double const lambda_OF_A4 = 0.1;
			bool const Standard_OF___ARBRE__EIRM = true;
			double const mu_OF_A1 = 0.1;
			double const mu_OF_A4 = 0.1;
			std::string const calculate_required_OF_UE_1 = "fn_fathers_and_trig";
			std::string const trimming_option_OF_OPTIONS = "maximum";
			std::string const trigger_kind_OF_t_3 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A1 = false;
			bool const force_relevant_events_OF_A4 = false;
			std::string const calculate_required_OF_A5 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_UE_1 = true;
			std::string const calculate_required_OF_A6 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A9 = false;
			bool const failF_FROZEN_OF_A3 = false;
			double const lambda_OF_A7 = 0.01;
			std::string const calculate_required_OF_A3 = "fn_fathers_and_trig";
			std::string const trigger_kind_OF_t_2 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_A2 = false;
			bool const failF_FROZEN_OF_A7 = false;
			double const lambda_OF_A1 = 0.01;
			bool const trimming_OF_OPTIONS = false;
			std::string const calculate_required_OF_a8 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A2 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A7 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_A1 = false;
			double const lambda_OF_A2 = 0.05;
			bool const failF_FROZEN_OF_A4 = false;
			bool const force_relevant_events_OF_A6 = false;
			std::string const calculate_required_OF_A1 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A4 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A5 = false;
			bool const repairable_system_OF_OPTIONS = true;
			double const mu_OF_A3 = 0.1;
			double const lambda_OF_A3 = 0.1;
		
            /* ---------- DECLARATION OF OCCURRENCE RULES FIRING FLAGS ------------ */
            bool FIRE_xx10_OF_A1;
            bool FIRE_xx11_OF_A1;
            bool FIRE_xx10_OF_A2;
            bool FIRE_xx11_OF_A2;
            bool FIRE_xx10_OF_A3;
            bool FIRE_xx11_OF_A3;
            bool FIRE_xx10_OF_A4;
            bool FIRE_xx11_OF_A4;
            bool FIRE_xx10_OF_A7;
            bool FIRE_xx11_OF_A7;

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
            int required_OF_A7 = 28 ;
            int already_S_OF_A7 = 29 ;
            int S_OF_A7 = 30 ;
            int relevant_evt_OF_A7 = 31 ;
            int failF_OF_A7 = 32 ;
            int required_OF_A9 = 33 ;
            int already_S_OF_A9 = 34 ;
            int S_OF_A9 = 35 ;
            int relevant_evt_OF_A9 = 36 ;
            int required_OF_UE_1 = 37 ;
            int already_S_OF_UE_1 = 38 ;
            int S_OF_UE_1 = 39 ;
            int relevant_evt_OF_UE_1 = 40 ;
            int required_OF_a8 = 41 ;
            int already_S_OF_a8 = 42 ;
            int S_OF_a8 = 43 ;
            int relevant_evt_OF_a8 = 44 ;




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