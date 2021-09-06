
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
        class FigaroProgram_figaro_17_14: public storm::figaro::FigaroProgram{
        public:
        FigaroProgram_figaro_17_14(): FigaroProgram(//            std::map<std::string, size_t> mFigaroboolelementindex =
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
            	{"required_OF_A5" , 19},
            	{"already_S_OF_A5" , 20},
            	{"S_OF_A5" , 21},
            	{"relevant_evt_OF_A5" , 22},
            	{"required_OF_A6" , 23},
            	{"already_S_OF_A6" , 24},
            	{"S_OF_A6" , 25},
            	{"relevant_evt_OF_A6" , 26},
            	{"required_OF_UE_1" , 27},
            	{"already_S_OF_UE_1" , 28},
            	{"S_OF_UE_1" , 29},
            	{"relevant_evt_OF_UE_1" , 30}},

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
                    31 ,
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
            bool REINITIALISATION_OF_required_OF_UE_1 ;
            bool REINITIALISATION_OF_S_OF_UE_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_UE_1 ;
            
		/* ---------- DECLARATION OF CONSTANTS ------------ */
			std::string const calculate_required_OF_A2 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_A2 = false;
			bool const force_relevant_events_OF_A5 = false;
			bool const force_relevant_events_OF_A1 = false;
			std::string const step_down_OF_A4 = "rep_any";
			double const mu_OF_A2 = 0.1;
			bool const force_relevant_events_OF_A6 = false;
			bool const repairable_system_OF_OPTIONS = true;
			bool const trimming_OF_OPTIONS = false;
			bool const force_relevant_events_OF_A4 = false;
			bool const force_relevant_events_OF_A3 = false;
			bool const Profil1_OF___ARBRE__EIRM = true;
			std::string const trimming_option_OF_OPTIONS = "maximum";
			double const lambda_OF_A1 = 0.01;
			bool const force_relevant_events_OF_A2 = false;
			std::string const calculate_required_OF_A5 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A1 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_UE_1 = true;
			bool const failF_FROZEN_OF_A1 = false;
			double const lambda_OF_A3 = 0.01;
			double const mu_OF_A1 = 0.1;
			std::string const calculate_required_OF_A6 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_UE_1 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A4 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A3 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_A3 = false;
			double const lambda_OF_A2 = 0.01;
			double const mu_OF_A3 = 0.1;
		
            /* ---------- DECLARATION OF OCCURRENCE RULES FIRING FLAGS ------------ */
            bool FIRE_xx10_OF_A1;
            bool FIRE_xx11_OF_A1;
            bool FIRE_xx10_OF_A2;
            bool FIRE_xx11_OF_A2;
            bool FIRE_xx10_OF_A3;
            bool FIRE_xx11_OF_A3;

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
            int required_OF_A5 = 19 ;
            int already_S_OF_A5 = 20 ;
            int S_OF_A5 = 21 ;
            int relevant_evt_OF_A5 = 22 ;
            int required_OF_A6 = 23 ;
            int already_S_OF_A6 = 24 ;
            int S_OF_A6 = 25 ;
            int relevant_evt_OF_A6 = 26 ;
            int required_OF_UE_1 = 27 ;
            int already_S_OF_UE_1 = 28 ;
            int S_OF_UE_1 = 29 ;
            int relevant_evt_OF_UE_1 = 30 ;




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