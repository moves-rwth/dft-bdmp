
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
        class FigaroProgram_figaro_04_and_or: public storm::figaro::FigaroProgram{
        public:
        FigaroProgram_figaro_04_and_or(): FigaroProgram(//            std::map<std::string, size_t> mFigaroboolelementindex =
                    {  
            	{"required_OF_AND_1" , 0},
            	{"already_S_OF_AND_1" , 1},
            	{"S_OF_AND_1" , 2},
            	{"relevant_evt_OF_AND_1" , 3},
            	{"required_OF_AND_2" , 4},
            	{"already_S_OF_AND_2" , 5},
            	{"S_OF_AND_2" , 6},
            	{"relevant_evt_OF_AND_2" , 7},
            	{"required_OF_F_1" , 8},
            	{"already_S_OF_F_1" , 9},
            	{"S_OF_F_1" , 10},
            	{"relevant_evt_OF_F_1" , 11},
            	{"failF_OF_F_1" , 12},
            	{"required_OF_F_3" , 13},
            	{"already_S_OF_F_3" , 14},
            	{"S_OF_F_3" , 15},
            	{"relevant_evt_OF_F_3" , 16},
            	{"failF_OF_F_3" , 17},
            	{"required_OF_F_4" , 18},
            	{"already_S_OF_F_4" , 19},
            	{"S_OF_F_4" , 20},
            	{"relevant_evt_OF_F_4" , 21},
            	{"failF_OF_F_4" , 22},
            	{"required_OF_F_6" , 23},
            	{"already_S_OF_F_6" , 24},
            	{"S_OF_F_6" , 25},
            	{"relevant_evt_OF_F_6" , 26},
            	{"failF_OF_F_6" , 27},
            	{"required_OF_F_7" , 28},
            	{"already_S_OF_F_7" , 29},
            	{"S_OF_F_7" , 30},
            	{"relevant_evt_OF_F_7" , 31},
            	{"failF_OF_F_7" , 32},
            	{"required_OF_OR_1" , 33},
            	{"already_S_OF_OR_1" , 34},
            	{"S_OF_OR_1" , 35},
            	{"relevant_evt_OF_OR_1" , 36},
            	{"required_OF_OR_2" , 37},
            	{"already_S_OF_OR_2" , 38},
            	{"S_OF_OR_2" , 39},
            	{"relevant_evt_OF_OR_2" , 40},
            	{"required_OF_UE_1" , 41},
            	{"already_S_OF_UE_1" , 42},
            	{"S_OF_UE_1" , 43},
            	{"relevant_evt_OF_UE_1" , 44}},

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
            bool REINITIALISATION_OF_required_OF_AND_1 ;
            bool REINITIALISATION_OF_S_OF_AND_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_AND_1 ;
            bool REINITIALISATION_OF_required_OF_AND_2 ;
            bool REINITIALISATION_OF_S_OF_AND_2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_AND_2 ;
            bool REINITIALISATION_OF_required_OF_F_1 ;
            bool REINITIALISATION_OF_S_OF_F_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_F_1 ;
            bool REINITIALISATION_OF_required_OF_F_3 ;
            bool REINITIALISATION_OF_S_OF_F_3 ;
            bool REINITIALISATION_OF_relevant_evt_OF_F_3 ;
            bool REINITIALISATION_OF_required_OF_F_4 ;
            bool REINITIALISATION_OF_S_OF_F_4 ;
            bool REINITIALISATION_OF_relevant_evt_OF_F_4 ;
            bool REINITIALISATION_OF_required_OF_F_6 ;
            bool REINITIALISATION_OF_S_OF_F_6 ;
            bool REINITIALISATION_OF_relevant_evt_OF_F_6 ;
            bool REINITIALISATION_OF_required_OF_F_7 ;
            bool REINITIALISATION_OF_S_OF_F_7 ;
            bool REINITIALISATION_OF_relevant_evt_OF_F_7 ;
            bool REINITIALISATION_OF_required_OF_OR_1 ;
            bool REINITIALISATION_OF_S_OF_OR_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_OR_1 ;
            bool REINITIALISATION_OF_required_OF_OR_2 ;
            bool REINITIALISATION_OF_S_OF_OR_2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_OR_2 ;
            bool REINITIALISATION_OF_required_OF_UE_1 ;
            bool REINITIALISATION_OF_S_OF_UE_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_UE_1 ;
            
		/* ---------- DECLARATION OF CONSTANTS ------------ */
			std::string const calculate_required_OF_UE_1 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_F_4 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_F_3 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_OR_1 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_AND_2 = false;
			double const mu_OF_F_7 = 0.1;
			bool const force_relevant_events_OF_OR_2 = false;
			double const lambda_OF_F_4 = 0.01;
			bool const force_relevant_events_OF_F_1 = false;
			bool const failF_FROZEN_OF_F_1 = false;
			std::string const calculate_required_OF_AND_2 = "fn_fathers_and_trig";
			double const lambda_OF_F_3 = 0.01;
			double const mu_OF_F_6 = 0.1;
			std::string const calculate_required_OF_OR_2 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_AND_1 = false;
			std::string const calculate_required_OF_F_1 = "fn_fathers_and_trig";
			bool const repairable_system_OF_OPTIONS = true;
			bool const trimming_OF_OPTIONS = false;
			std::string const calculate_required_OF_AND_1 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_F_7 = false;
			bool const failF_FROZEN_OF_F_7 = false;
			bool const failF_FROZEN_OF_F_4 = false;
			bool const force_relevant_events_OF_UE_1 = true;
			std::string const calculate_required_OF_F_7 = "fn_fathers_and_trig";
			bool const Profil1_OF___ARBRE__EIRM = true;
			bool const force_relevant_events_OF_F_6 = false;
			double const mu_OF_F_4 = 0.1;
			double const lambda_OF_F_1 = 0.01;
			bool const failF_FROZEN_OF_F_6 = false;
			double const mu_OF_F_3 = 0.1;
			std::string const calculate_required_OF_F_6 = "fn_fathers_and_trig";
			double const lambda_OF_F_7 = 0.01;
			bool const force_relevant_events_OF_F_4 = false;
			bool const force_relevant_events_OF_OR_1 = false;
			double const lambda_OF_F_6 = 0.01;
			std::string const trimming_option_OF_OPTIONS = "maximum";
			double const mu_OF_F_1 = 0.1;
			bool const force_relevant_events_OF_F_3 = false;
			bool const failF_FROZEN_OF_F_3 = false;
		
            /* ---------- DECLARATION OF OCCURRENCE RULES FIRING FLAGS ------------ */
            bool FIRE_xx10_OF_F_1;
            bool FIRE_xx11_OF_F_1;
            bool FIRE_xx10_OF_F_3;
            bool FIRE_xx11_OF_F_3;
            bool FIRE_xx10_OF_F_4;
            bool FIRE_xx11_OF_F_4;
            bool FIRE_xx10_OF_F_6;
            bool FIRE_xx11_OF_F_6;
            bool FIRE_xx10_OF_F_7;
            bool FIRE_xx11_OF_F_7;

            int required_OF_AND_1 = 0 ;
            int already_S_OF_AND_1 = 1 ;
            int S_OF_AND_1 = 2 ;
            int relevant_evt_OF_AND_1 = 3 ;
            int required_OF_AND_2 = 4 ;
            int already_S_OF_AND_2 = 5 ;
            int S_OF_AND_2 = 6 ;
            int relevant_evt_OF_AND_2 = 7 ;
            int required_OF_F_1 = 8 ;
            int already_S_OF_F_1 = 9 ;
            int S_OF_F_1 = 10 ;
            int relevant_evt_OF_F_1 = 11 ;
            int failF_OF_F_1 = 12 ;
            int required_OF_F_3 = 13 ;
            int already_S_OF_F_3 = 14 ;
            int S_OF_F_3 = 15 ;
            int relevant_evt_OF_F_3 = 16 ;
            int failF_OF_F_3 = 17 ;
            int required_OF_F_4 = 18 ;
            int already_S_OF_F_4 = 19 ;
            int S_OF_F_4 = 20 ;
            int relevant_evt_OF_F_4 = 21 ;
            int failF_OF_F_4 = 22 ;
            int required_OF_F_6 = 23 ;
            int already_S_OF_F_6 = 24 ;
            int S_OF_F_6 = 25 ;
            int relevant_evt_OF_F_6 = 26 ;
            int failF_OF_F_6 = 27 ;
            int required_OF_F_7 = 28 ;
            int already_S_OF_F_7 = 29 ;
            int S_OF_F_7 = 30 ;
            int relevant_evt_OF_F_7 = 31 ;
            int failF_OF_F_7 = 32 ;
            int required_OF_OR_1 = 33 ;
            int already_S_OF_OR_1 = 34 ;
            int S_OF_OR_1 = 35 ;
            int relevant_evt_OF_OR_1 = 36 ;
            int required_OF_OR_2 = 37 ;
            int already_S_OF_OR_2 = 38 ;
            int S_OF_OR_2 = 39 ;
            int relevant_evt_OF_OR_2 = 40 ;
            int required_OF_UE_1 = 41 ;
            int already_S_OF_UE_1 = 42 ;
            int S_OF_UE_1 = 43 ;
            int relevant_evt_OF_UE_1 = 44 ;




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