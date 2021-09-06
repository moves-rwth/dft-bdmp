
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
        class FigaroProgram_figaro_17_20: public storm::figaro::FigaroProgram{
        public:
        FigaroProgram_figaro_17_20(): FigaroProgram(//            std::map<std::string, size_t> mFigaroboolelementindex =
                    {  
            	{"required_OF_UE_1" , 0},
            	{"already_S_OF_UE_1" , 1},
            	{"S_OF_UE_1" , 2},
            	{"relevant_evt_OF_UE_1" , 3},
            	{"required_OF_a1" , 4},
            	{"already_S_OF_a1" , 5},
            	{"S_OF_a1" , 6},
            	{"relevant_evt_OF_a1" , 7},
            	{"failF_OF_a1" , 8},
            	{"required_OF_a10" , 9},
            	{"already_S_OF_a10" , 10},
            	{"S_OF_a10" , 11},
            	{"relevant_evt_OF_a10" , 12},
            	{"required_OF_a2" , 13},
            	{"already_S_OF_a2" , 14},
            	{"S_OF_a2" , 15},
            	{"relevant_evt_OF_a2" , 16},
            	{"failF_OF_a2" , 17},
            	{"required_OF_a3" , 18},
            	{"already_S_OF_a3" , 19},
            	{"S_OF_a3" , 20},
            	{"relevant_evt_OF_a3" , 21},
            	{"failF_OF_a3" , 22},
            	{"required_OF_a4" , 23},
            	{"already_S_OF_a4" , 24},
            	{"S_OF_a4" , 25},
            	{"relevant_evt_OF_a4" , 26},
            	{"failF_OF_a4" , 27},
            	{"required_OF_a5" , 28},
            	{"already_S_OF_a5" , 29},
            	{"S_OF_a5" , 30},
            	{"relevant_evt_OF_a5" , 31},
            	{"required_OF_a6" , 32},
            	{"already_S_OF_a6" , 33},
            	{"S_OF_a6" , 34},
            	{"relevant_evt_OF_a6" , 35},
            	{"required_OF_a7" , 36},
            	{"already_S_OF_a7" , 37},
            	{"S_OF_a7" , 38},
            	{"relevant_evt_OF_a7" , 39},
            	{"failF_OF_a7" , 40},
            	{"required_OF_a8" , 41},
            	{"already_S_OF_a8" , 42},
            	{"S_OF_a8" , 43},
            	{"relevant_evt_OF_a8" , 44},
            	{"required_OF_a9" , 45},
            	{"already_S_OF_a9" , 46},
            	{"S_OF_a9" , 47},
            	{"relevant_evt_OF_a9" , 48},
            	{"group_loss_OF_a9" , 49}},

//            std::map<std::string, size_t> mFigaroelementfailureindex =
                    {  { "exp0",0}},

//            std::map<std::string, size_t> mFigarofloatelementindex =
                     { },

//            std::map<std::string, size_t> mFigarointelementindex =
                     {  
            	{"nb_OK_OF_a9" , 0},
            	{"nb_being_repaired_OF_a9" , 1}},

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
                    50 ,
//             numBoolFailureState = 
                    1 ,
//            static int const numFloatState = 
                    0 ,
//            static int const numIntState = 
                    2 ,
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
            bool REINITIALISATION_OF_required_OF_UE_1 ;
            bool REINITIALISATION_OF_S_OF_UE_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_UE_1 ;
            bool REINITIALISATION_OF_required_OF_a1 ;
            bool REINITIALISATION_OF_S_OF_a1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_a1 ;
            bool REINITIALISATION_OF_required_OF_a10 ;
            bool REINITIALISATION_OF_S_OF_a10 ;
            bool REINITIALISATION_OF_relevant_evt_OF_a10 ;
            bool REINITIALISATION_OF_required_OF_a2 ;
            bool REINITIALISATION_OF_S_OF_a2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_a2 ;
            bool REINITIALISATION_OF_required_OF_a3 ;
            bool REINITIALISATION_OF_S_OF_a3 ;
            bool REINITIALISATION_OF_relevant_evt_OF_a3 ;
            bool REINITIALISATION_OF_required_OF_a4 ;
            bool REINITIALISATION_OF_S_OF_a4 ;
            bool REINITIALISATION_OF_relevant_evt_OF_a4 ;
            bool REINITIALISATION_OF_required_OF_a5 ;
            bool REINITIALISATION_OF_S_OF_a5 ;
            bool REINITIALISATION_OF_relevant_evt_OF_a5 ;
            bool REINITIALISATION_OF_required_OF_a6 ;
            bool REINITIALISATION_OF_S_OF_a6 ;
            bool REINITIALISATION_OF_relevant_evt_OF_a6 ;
            bool REINITIALISATION_OF_required_OF_a7 ;
            bool REINITIALISATION_OF_S_OF_a7 ;
            bool REINITIALISATION_OF_relevant_evt_OF_a7 ;
            bool REINITIALISATION_OF_required_OF_a8 ;
            bool REINITIALISATION_OF_S_OF_a8 ;
            bool REINITIALISATION_OF_relevant_evt_OF_a8 ;
            bool REINITIALISATION_OF_required_OF_a9 ;
            bool REINITIALISATION_OF_S_OF_a9 ;
            bool REINITIALISATION_OF_relevant_evt_OF_a9 ;
            
		/* ---------- DECLARATION OF CONSTANTS ------------ */
			std::string const calculate_required_OF_a5 = "fn_fathers_and_trig";
			double const lambda_OF_a1 = 0.01;
			bool const force_relevant_events_OF_a8 = false;
			double const mu_OF_a2 = 0.1;
			int const number_of_repairmen_OF_a9 = 8;
			bool const failF_FROZEN_OF_a1 = false;
			double const mu_OF_a3 = 0.1;
			std::string const calculate_required_OF_a6 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_a3 = false;
			std::string const calculate_required_OF_a10 = "fn_fathers_and_trig";
			double const mu_OF_a4 = 0.1;
			double const mu_OF_a7 = 0.1;
			bool const force_relevant_events_OF_a2 = false;
			std::string const calculate_required_OF_a1 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_UE_1 = "fn_fathers_and_trig";
			std::string const trimming_option_OF_OPTIONS = "maximum";
			bool const force_relevant_events_OF_a4 = false;
			bool const force_relevant_events_OF_a7 = false;
			std::string const trigger_kind_OF_t_1 = "fn_fathers_and_trig";
			int const min_acceptable_OF_a9 = 6;
			bool const force_relevant_events_OF_a5 = false;
			std::string const calculate_required_OF_a9 = "fn_fathers_and_trig";
			int const number_of_items_OF_a9 = 8;
			bool const force_relevant_events_OF_UE_1 = true;
			bool const force_relevant_events_OF_a6 = false;
			double const mu_OF_a1 = 0.1;
			double const lambda_OF_a3 = 0.01;
			double const lambda_OF_a2 = 0.01;
			bool const Version_1_OF___ARBRE__EIRM = true;
			bool const force_relevant_events_OF_a10 = false;
			double const lambda_OF_a4 = 0.01;
			bool const failF_FROZEN_OF_a3 = false;
			double const lambda_OF_a7 = 0.01;
			bool const force_relevant_events_OF_a1 = false;
			bool const failF_FROZEN_OF_a2 = false;
			bool const trimming_OF_OPTIONS = false;
			std::string const calculate_required_OF_a8 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_a4 = false;
			double const lambda_OF_a9 = 0.1;
			std::string const calculate_required_OF_a3 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_a2 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_a7 = false;
			double const mu_OF_a9 = 0.1;
			std::string const calculate_required_OF_a4 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_a7 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_a9 = false;
			bool const repairable_system_OF_OPTIONS = true;
			bool const augmented_repair_times_OF___ARBRE__EIRM = false;
		
            /* ---------- DECLARATION OF OCCURRENCE RULES FIRING FLAGS ------------ */
            bool FIRE_xx10_OF_a1;
            bool FIRE_xx11_OF_a1;
            bool FIRE_xx10_OF_a2;
            bool FIRE_xx11_OF_a2;
            bool FIRE_xx10_OF_a3;
            bool FIRE_xx11_OF_a3;
            bool FIRE_xx10_OF_a4;
            bool FIRE_xx11_OF_a4;
            bool FIRE_xx10_OF_a7;
            bool FIRE_xx11_OF_a7;
            bool FIRE_xx15_OF_a9;
            bool FIRE_xx16_OF_a9;

            int required_OF_UE_1 = 0 ;
            int already_S_OF_UE_1 = 1 ;
            int S_OF_UE_1 = 2 ;
            int relevant_evt_OF_UE_1 = 3 ;
            int required_OF_a1 = 4 ;
            int already_S_OF_a1 = 5 ;
            int S_OF_a1 = 6 ;
            int relevant_evt_OF_a1 = 7 ;
            int failF_OF_a1 = 8 ;
            int required_OF_a10 = 9 ;
            int already_S_OF_a10 = 10 ;
            int S_OF_a10 = 11 ;
            int relevant_evt_OF_a10 = 12 ;
            int required_OF_a2 = 13 ;
            int already_S_OF_a2 = 14 ;
            int S_OF_a2 = 15 ;
            int relevant_evt_OF_a2 = 16 ;
            int failF_OF_a2 = 17 ;
            int required_OF_a3 = 18 ;
            int already_S_OF_a3 = 19 ;
            int S_OF_a3 = 20 ;
            int relevant_evt_OF_a3 = 21 ;
            int failF_OF_a3 = 22 ;
            int required_OF_a4 = 23 ;
            int already_S_OF_a4 = 24 ;
            int S_OF_a4 = 25 ;
            int relevant_evt_OF_a4 = 26 ;
            int failF_OF_a4 = 27 ;
            int required_OF_a5 = 28 ;
            int already_S_OF_a5 = 29 ;
            int S_OF_a5 = 30 ;
            int relevant_evt_OF_a5 = 31 ;
            int required_OF_a6 = 32 ;
            int already_S_OF_a6 = 33 ;
            int S_OF_a6 = 34 ;
            int relevant_evt_OF_a6 = 35 ;
            int required_OF_a7 = 36 ;
            int already_S_OF_a7 = 37 ;
            int S_OF_a7 = 38 ;
            int relevant_evt_OF_a7 = 39 ;
            int failF_OF_a7 = 40 ;
            int required_OF_a8 = 41 ;
            int already_S_OF_a8 = 42 ;
            int S_OF_a8 = 43 ;
            int relevant_evt_OF_a8 = 44 ;
            int required_OF_a9 = 45 ;
            int already_S_OF_a9 = 46 ;
            int S_OF_a9 = 47 ;
            int relevant_evt_OF_a9 = 48 ;
            int group_loss_OF_a9 = 49 ;


            int nb_OK_OF_a9 = 0 ;
            int nb_being_repaired_OF_a9 = 1 ;


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