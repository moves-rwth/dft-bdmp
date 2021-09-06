
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
        class FigaroProgram_figaro_07_and_and_trig: public storm::figaro::FigaroProgram{
        public:
        FigaroProgram_figaro_07_and_and_trig(): FigaroProgram(//            std::map<std::string, size_t> mFigaroboolelementindex =
                    {  
            	{"required_OF_AND_1" , 0},
            	{"already_S_OF_AND_1" , 1},
            	{"S_OF_AND_1" , 2},
            	{"relevant_evt_OF_AND_1" , 3},
            	{"required_OF_AND_2" , 4},
            	{"already_S_OF_AND_2" , 5},
            	{"S_OF_AND_2" , 6},
            	{"relevant_evt_OF_AND_2" , 7},
            	{"required_OF_AND_3" , 8},
            	{"already_S_OF_AND_3" , 9},
            	{"S_OF_AND_3" , 10},
            	{"relevant_evt_OF_AND_3" , 11},
            	{"required_OF_F_1" , 12},
            	{"already_S_OF_F_1" , 13},
            	{"S_OF_F_1" , 14},
            	{"relevant_evt_OF_F_1" , 15},
            	{"failF_OF_F_1" , 16},
            	{"required_OF_F_2" , 17},
            	{"already_S_OF_F_2" , 18},
            	{"S_OF_F_2" , 19},
            	{"relevant_evt_OF_F_2" , 20},
            	{"failF_OF_F_2" , 21},
            	{"required_OF_F_3" , 22},
            	{"already_S_OF_F_3" , 23},
            	{"S_OF_F_3" , 24},
            	{"relevant_evt_OF_F_3" , 25},
            	{"failF_OF_F_3" , 26},
            	{"required_OF_F_4" , 27},
            	{"already_S_OF_F_4" , 28},
            	{"S_OF_F_4" , 29},
            	{"relevant_evt_OF_F_4" , 30},
            	{"failF_OF_F_4" , 31},
            	{"required_OF_UE_1" , 32},
            	{"already_S_OF_UE_1" , 33},
            	{"S_OF_UE_1" , 34},
            	{"relevant_evt_OF_UE_1" , 35}},

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
                    36 ,
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
            bool REINITIALISATION_OF_required_OF_AND_3 ;
            bool REINITIALISATION_OF_S_OF_AND_3 ;
            bool REINITIALISATION_OF_relevant_evt_OF_AND_3 ;
            bool REINITIALISATION_OF_required_OF_F_1 ;
            bool REINITIALISATION_OF_S_OF_F_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_F_1 ;
            bool REINITIALISATION_OF_required_OF_F_2 ;
            bool REINITIALISATION_OF_S_OF_F_2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_F_2 ;
            bool REINITIALISATION_OF_required_OF_F_3 ;
            bool REINITIALISATION_OF_S_OF_F_3 ;
            bool REINITIALISATION_OF_relevant_evt_OF_F_3 ;
            bool REINITIALISATION_OF_required_OF_F_4 ;
            bool REINITIALISATION_OF_S_OF_F_4 ;
            bool REINITIALISATION_OF_relevant_evt_OF_F_4 ;
            bool REINITIALISATION_OF_required_OF_UE_1 ;
            bool REINITIALISATION_OF_S_OF_UE_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_UE_1 ;
            
		/* ---------- DECLARATION OF CONSTANTS ------------ */
			std::string const calculate_required_OF_UE_1 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_F_4 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_AND_3 = false;
			std::string const calculate_required_OF_F_3 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_AND_3 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_AND_2 = false;
			double const lambda_OF_F_2 = 0.01;
			std::string const trigger_kind_OF_t_1 = "fn_fathers_and_trig";
			double const lambda_OF_F_4 = 0.01;
			bool const force_relevant_events_OF_F_1 = false;
			bool const failF_FROZEN_OF_F_1 = false;
			std::string const calculate_required_OF_AND_2 = "fn_fathers_and_trig";
			double const lambda_OF_F_3 = 0.01;
			bool const force_relevant_events_OF_AND_1 = false;
			std::string const calculate_required_OF_F_1 = "fn_fathers_and_trig";
			bool const repairable_system_OF_OPTIONS = true;
			bool const trimming_OF_OPTIONS = false;
			std::string const calculate_required_OF_AND_1 = "fn_fathers_and_trig";
			double const mu_OF_F_2 = 0.1;
			bool const failF_FROZEN_OF_F_4 = false;
			bool const force_relevant_events_OF_UE_1 = true;
			bool const Profil1_OF___ARBRE__EIRM = true;
			double const mu_OF_F_4 = 0.1;
			double const lambda_OF_F_1 = 0.01;
			double const mu_OF_F_3 = 0.1;
			bool const force_relevant_events_OF_F_2 = false;
			bool const failF_FROZEN_OF_F_2 = false;
			bool const force_relevant_events_OF_F_4 = false;
			std::string const calculate_required_OF_F_2 = "fn_fathers_and_trig";
			std::string const trimming_option_OF_OPTIONS = "maximum";
			double const mu_OF_F_1 = 0.1;
			bool const force_relevant_events_OF_F_3 = false;
			bool const failF_FROZEN_OF_F_3 = false;
		
            /* ---------- DECLARATION OF OCCURRENCE RULES FIRING FLAGS ------------ */
            bool FIRE_xx10_OF_F_1;
            bool FIRE_xx11_OF_F_1;
            bool FIRE_xx10_OF_F_2;
            bool FIRE_xx11_OF_F_2;
            bool FIRE_xx10_OF_F_3;
            bool FIRE_xx11_OF_F_3;
            bool FIRE_xx10_OF_F_4;
            bool FIRE_xx11_OF_F_4;

            int required_OF_AND_1 = 0 ;
            int already_S_OF_AND_1 = 1 ;
            int S_OF_AND_1 = 2 ;
            int relevant_evt_OF_AND_1 = 3 ;
            int required_OF_AND_2 = 4 ;
            int already_S_OF_AND_2 = 5 ;
            int S_OF_AND_2 = 6 ;
            int relevant_evt_OF_AND_2 = 7 ;
            int required_OF_AND_3 = 8 ;
            int already_S_OF_AND_3 = 9 ;
            int S_OF_AND_3 = 10 ;
            int relevant_evt_OF_AND_3 = 11 ;
            int required_OF_F_1 = 12 ;
            int already_S_OF_F_1 = 13 ;
            int S_OF_F_1 = 14 ;
            int relevant_evt_OF_F_1 = 15 ;
            int failF_OF_F_1 = 16 ;
            int required_OF_F_2 = 17 ;
            int already_S_OF_F_2 = 18 ;
            int S_OF_F_2 = 19 ;
            int relevant_evt_OF_F_2 = 20 ;
            int failF_OF_F_2 = 21 ;
            int required_OF_F_3 = 22 ;
            int already_S_OF_F_3 = 23 ;
            int S_OF_F_3 = 24 ;
            int relevant_evt_OF_F_3 = 25 ;
            int failF_OF_F_3 = 26 ;
            int required_OF_F_4 = 27 ;
            int already_S_OF_F_4 = 28 ;
            int S_OF_F_4 = 29 ;
            int relevant_evt_OF_F_4 = 30 ;
            int failF_OF_F_4 = 31 ;
            int required_OF_UE_1 = 32 ;
            int already_S_OF_UE_1 = 33 ;
            int S_OF_UE_1 = 34 ;
            int relevant_evt_OF_UE_1 = 35 ;




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