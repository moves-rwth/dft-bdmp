
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
        class FigaroProgram_figaro_16_PAND_rep_last: public storm::figaro::FigaroProgram{
        public:
        FigaroProgram_figaro_16_PAND_rep_last(): FigaroProgram(//            std::map<std::string, size_t> mFigaroboolelementindex =
                    {  
            	{"required_OF_F_1" , 0},
            	{"already_S_OF_F_1" , 1},
            	{"S_OF_F_1" , 2},
            	{"relevant_evt_OF_F_1" , 3},
            	{"failF_OF_F_1" , 4},
            	{"required_OF_F_2" , 5},
            	{"already_S_OF_F_2" , 6},
            	{"S_OF_F_2" , 7},
            	{"relevant_evt_OF_F_2" , 8},
            	{"failF_OF_F_2" , 9},
            	{"required_OF_F_3" , 10},
            	{"already_S_OF_F_3" , 11},
            	{"S_OF_F_3" , 12},
            	{"relevant_evt_OF_F_3" , 13},
            	{"failF_OF_F_3" , 14},
            	{"required_OF_F_4" , 15},
            	{"already_S_OF_F_4" , 16},
            	{"S_OF_F_4" , 17},
            	{"relevant_evt_OF_F_4" , 18},
            	{"failF_OF_F_4" , 19},
            	{"required_OF_THEN_1" , 20},
            	{"already_S_OF_THEN_1" , 21},
            	{"S_OF_THEN_1" , 22},
            	{"relevant_evt_OF_THEN_1" , 23},
            	{"required_OF_THEN_3" , 24},
            	{"already_S_OF_THEN_3" , 25},
            	{"S_OF_THEN_3" , 26},
            	{"relevant_evt_OF_THEN_3" , 27},
            	{"required_OF_THEN_4" , 28},
            	{"already_S_OF_THEN_4" , 29},
            	{"S_OF_THEN_4" , 30},
            	{"relevant_evt_OF_THEN_4" , 31},
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
            bool REINITIALISATION_OF_required_OF_THEN_1 ;
            bool REINITIALISATION_OF_S_OF_THEN_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_THEN_1 ;
            bool REINITIALISATION_OF_required_OF_THEN_3 ;
            bool REINITIALISATION_OF_S_OF_THEN_3 ;
            bool REINITIALISATION_OF_relevant_evt_OF_THEN_3 ;
            bool REINITIALISATION_OF_required_OF_THEN_4 ;
            bool REINITIALISATION_OF_S_OF_THEN_4 ;
            bool REINITIALISATION_OF_relevant_evt_OF_THEN_4 ;
            bool REINITIALISATION_OF_required_OF_UE_1 ;
            bool REINITIALISATION_OF_S_OF_UE_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_UE_1 ;
            
		/* ---------- DECLARATION OF CONSTANTS ------------ */
			double const lambda_OF_F_1 = 0.01;
			bool const force_relevant_events_OF_THEN_1 = false;
			double const mu_OF_F_1 = 0.1;
			std::string const calculate_required_OF_F_2 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_F_4 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_F_3 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_F_1 = false;
			bool const Profil1_OF___ARBRE__EIRM = true;
			bool const force_relevant_events_OF_F_2 = false;
			bool const force_relevant_events_OF_F_3 = false;
			double const lambda_OF_F_2 = 0.01;
			bool const force_relevant_events_OF_F_4 = false;
			double const lambda_OF_F_3 = 0.01;
			double const mu_OF_F_2 = 0.1;
			double const lambda_OF_F_4 = 0.01;
			double const mu_OF_F_3 = 0.1;
			std::string const step_down_OF_THEN_3 = "rep_second";
			std::string const step_down_OF_THEN_4 = "rep_second";
			double const mu_OF_F_4 = 0.1;
			std::string const calculate_required_OF_UE_1 = "fn_fathers_and_trig";
			std::string const step_down_OF_THEN_1 = "rep_second";
			bool const repairable_system_OF_OPTIONS = true;
			std::string const calculate_required_OF_THEN_3 = "fn_fathers_and_trig";
			std::string const trimming_option_OF_OPTIONS = "maximum";
			std::string const calculate_required_OF_THEN_4 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_F_1 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_F_2 = false;
			bool const failF_FROZEN_OF_F_4 = false;
			bool const trimming_OF_OPTIONS = false;
			bool const failF_FROZEN_OF_F_3 = false;
			std::string const calculate_required_OF_THEN_1 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_THEN_3 = false;
			bool const force_relevant_events_OF_THEN_4 = false;
			bool const force_relevant_events_OF_F_1 = false;
			bool const force_relevant_events_OF_UE_1 = true;
		
            /* ---------- DECLARATION OF OCCURRENCE RULES FIRING FLAGS ------------ */
            bool FIRE_xx10_OF_F_1;
            bool FIRE_xx11_OF_F_1;
            bool FIRE_xx10_OF_F_2;
            bool FIRE_xx11_OF_F_2;
            bool FIRE_xx10_OF_F_3;
            bool FIRE_xx11_OF_F_3;
            bool FIRE_xx10_OF_F_4;
            bool FIRE_xx11_OF_F_4;

            int required_OF_F_1 = 0 ;
            int already_S_OF_F_1 = 1 ;
            int S_OF_F_1 = 2 ;
            int relevant_evt_OF_F_1 = 3 ;
            int failF_OF_F_1 = 4 ;
            int required_OF_F_2 = 5 ;
            int already_S_OF_F_2 = 6 ;
            int S_OF_F_2 = 7 ;
            int relevant_evt_OF_F_2 = 8 ;
            int failF_OF_F_2 = 9 ;
            int required_OF_F_3 = 10 ;
            int already_S_OF_F_3 = 11 ;
            int S_OF_F_3 = 12 ;
            int relevant_evt_OF_F_3 = 13 ;
            int failF_OF_F_3 = 14 ;
            int required_OF_F_4 = 15 ;
            int already_S_OF_F_4 = 16 ;
            int S_OF_F_4 = 17 ;
            int relevant_evt_OF_F_4 = 18 ;
            int failF_OF_F_4 = 19 ;
            int required_OF_THEN_1 = 20 ;
            int already_S_OF_THEN_1 = 21 ;
            int S_OF_THEN_1 = 22 ;
            int relevant_evt_OF_THEN_1 = 23 ;
            int required_OF_THEN_3 = 24 ;
            int already_S_OF_THEN_3 = 25 ;
            int S_OF_THEN_3 = 26 ;
            int relevant_evt_OF_THEN_3 = 27 ;
            int required_OF_THEN_4 = 28 ;
            int already_S_OF_THEN_4 = 29 ;
            int S_OF_THEN_4 = 30 ;
            int relevant_evt_OF_THEN_4 = 31 ;
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