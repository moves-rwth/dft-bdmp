
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
        class FigaroProgram_figaro_17_22: public storm::figaro::FigaroProgram{
        public:
        FigaroProgram_figaro_17_22(): FigaroProgram(//            std::map<std::string, size_t> mFigaroboolelementindex =
                    {  
            	{"required_OF_AND_1" , 0},
            	{"already_S_OF_AND_1" , 1},
            	{"S_OF_AND_1" , 2},
            	{"relevant_evt_OF_AND_1" , 3},
            	{"required_OF_AND_2" , 4},
            	{"already_S_OF_AND_2" , 5},
            	{"S_OF_AND_2" , 6},
            	{"relevant_evt_OF_AND_2" , 7},
            	{"required_OF_B1" , 8},
            	{"already_S_OF_B1" , 9},
            	{"S_OF_B1" , 10},
            	{"relevant_evt_OF_B1" , 11},
            	{"failF_OF_B1" , 12},
            	{"required_OF_B2" , 13},
            	{"already_S_OF_B2" , 14},
            	{"S_OF_B2" , 15},
            	{"relevant_evt_OF_B2" , 16},
            	{"failF_OF_B2" , 17},
            	{"required_OF_B3" , 18},
            	{"already_S_OF_B3" , 19},
            	{"S_OF_B3" , 20},
            	{"relevant_evt_OF_B3" , 21},
            	{"failF_OF_B3" , 22},
            	{"required_OF_B4" , 23},
            	{"already_S_OF_B4" , 24},
            	{"S_OF_B4" , 25},
            	{"relevant_evt_OF_B4" , 26},
            	{"failF_OF_B4" , 27},
            	{"required_OF_C1" , 28},
            	{"already_S_OF_C1" , 29},
            	{"S_OF_C1" , 30},
            	{"relevant_evt_OF_C1" , 31},
            	{"failF_OF_C1" , 32},
            	{"required_OF_C2" , 33},
            	{"already_S_OF_C2" , 34},
            	{"S_OF_C2" , 35},
            	{"relevant_evt_OF_C2" , 36},
            	{"failF_OF_C2" , 37},
            	{"required_OF_C3" , 38},
            	{"already_S_OF_C3" , 39},
            	{"S_OF_C3" , 40},
            	{"relevant_evt_OF_C3" , 41},
            	{"failF_OF_C3" , 42},
            	{"required_OF_C4" , 43},
            	{"already_S_OF_C4" , 44},
            	{"S_OF_C4" , 45},
            	{"relevant_evt_OF_C4" , 46},
            	{"failF_OF_C4" , 47},
            	{"required_OF_G_A" , 48},
            	{"already_S_OF_G_A" , 49},
            	{"S_OF_G_A" , 50},
            	{"relevant_evt_OF_G_A" , 51},
            	{"group_loss_OF_G_A" , 52},
            	{"required_OF_OR_1" , 53},
            	{"already_S_OF_OR_1" , 54},
            	{"S_OF_OR_1" , 55},
            	{"relevant_evt_OF_OR_1" , 56},
            	{"required_OF_UE_1" , 57},
            	{"already_S_OF_UE_1" , 58},
            	{"S_OF_UE_1" , 59},
            	{"relevant_evt_OF_UE_1" , 60}},

//            std::map<std::string, size_t> mFigaroelementfailureindex =
                    {  { "exp0",0}},

//            std::map<std::string, size_t> mFigarofloatelementindex =
                     { },

//            std::map<std::string, size_t> mFigarointelementindex =
                     {  
            	{"nb_OK_OF_G_A" , 0},
            	{"nb_being_repaired_OF_G_A" , 1}},

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
                    61 ,
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
            bool REINITIALISATION_OF_required_OF_AND_1 ;
            bool REINITIALISATION_OF_S_OF_AND_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_AND_1 ;
            bool REINITIALISATION_OF_required_OF_AND_2 ;
            bool REINITIALISATION_OF_S_OF_AND_2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_AND_2 ;
            bool REINITIALISATION_OF_required_OF_B1 ;
            bool REINITIALISATION_OF_S_OF_B1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_B1 ;
            bool REINITIALISATION_OF_required_OF_B2 ;
            bool REINITIALISATION_OF_S_OF_B2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_B2 ;
            bool REINITIALISATION_OF_required_OF_B3 ;
            bool REINITIALISATION_OF_S_OF_B3 ;
            bool REINITIALISATION_OF_relevant_evt_OF_B3 ;
            bool REINITIALISATION_OF_required_OF_B4 ;
            bool REINITIALISATION_OF_S_OF_B4 ;
            bool REINITIALISATION_OF_relevant_evt_OF_B4 ;
            bool REINITIALISATION_OF_required_OF_C1 ;
            bool REINITIALISATION_OF_S_OF_C1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_C1 ;
            bool REINITIALISATION_OF_required_OF_C2 ;
            bool REINITIALISATION_OF_S_OF_C2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_C2 ;
            bool REINITIALISATION_OF_required_OF_C3 ;
            bool REINITIALISATION_OF_S_OF_C3 ;
            bool REINITIALISATION_OF_relevant_evt_OF_C3 ;
            bool REINITIALISATION_OF_required_OF_C4 ;
            bool REINITIALISATION_OF_S_OF_C4 ;
            bool REINITIALISATION_OF_relevant_evt_OF_C4 ;
            bool REINITIALISATION_OF_required_OF_G_A ;
            bool REINITIALISATION_OF_S_OF_G_A ;
            bool REINITIALISATION_OF_relevant_evt_OF_G_A ;
            bool REINITIALISATION_OF_required_OF_OR_1 ;
            bool REINITIALISATION_OF_S_OF_OR_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_OR_1 ;
            bool REINITIALISATION_OF_required_OF_UE_1 ;
            bool REINITIALISATION_OF_S_OF_UE_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_UE_1 ;
            
		/* ---------- DECLARATION OF CONSTANTS ------------ */
			int const number_of_repairmen_OF_G_A = 10;
			std::string const trigger_kind_OF_t_5 = "fn_fathers_and_trig";
			int const number_of_items_OF_G_A = 10;
			std::string const trigger_kind_OF_t_3 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_G_A = "fn_fathers_and_trig";
			double const mu_OF_G_A = 0.1;
			std::string const calculate_required_OF_B4 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_B1 = "fn_fathers_and_trig";
			double const mu_OF_B1 = 0.1;
			bool const force_relevant_events_OF_G_A = false;
			std::string const calculate_required_OF_B3 = "fn_fathers_and_trig";
			std::string const trimming_option_OF_OPTIONS = "maximum";
			bool const force_relevant_events_OF_UE_1 = true;
			double const mu_OF_B3 = 0.1;
			double const mu_OF_B4 = 0.1;
			bool const force_relevant_events_OF_B4 = false;
			bool const force_relevant_events_OF_B1 = false;
			std::string const trigger_kind_OF_t_6 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_AND_2 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_B3 = false;
			std::string const calculate_required_OF_B2 = "fn_fathers_and_trig";
			double const lambda_OF_G_A = 0.1;
			double const lambda_OF_B4 = 0.01;
			double const lambda_OF_B1 = 0.01;
			bool const force_relevant_events_OF_AND_2 = false;
			bool const Profil1_OF___ARBRE__EIRM = true;
			double const mu_OF_B2 = 0.1;
			bool const force_relevant_events_OF_B2 = false;
			double const lambda_OF_B3 = 0.01;
			std::string const calculate_required_OF_C2 = "fn_fathers_and_trig";
			std::string const trigger_kind_OF_t_1 = "fn_fathers_and_trig";
			bool const repairable_system_OF_OPTIONS = true;
			std::string const calculate_required_OF_C1 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_C4 = "fn_fathers_and_trig";
			double const mu_OF_C2 = 0.1;
			bool const force_relevant_events_OF_C2 = false;
			bool const failF_FROZEN_OF_B1 = false;
			std::string const calculate_required_OF_AND_1 = "fn_fathers_and_trig";
			double const lambda_OF_B2 = 0.01;
			std::string const calculate_required_OF_C3 = "fn_fathers_and_trig";
			double const mu_OF_C3 = 0.1;
			bool const failF_FROZEN_OF_B3 = false;
			bool const failF_FROZEN_OF_B4 = false;
			bool const force_relevant_events_OF_C1 = false;
			double const mu_OF_C1 = 0.1;
			bool const force_relevant_events_OF_C4 = false;
			std::string const calculate_required_OF_UE_1 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_C3 = false;
			bool const force_relevant_events_OF_AND_1 = false;
			double const lambda_OF_C2 = 0.01;
			int const min_acceptable_OF_G_A = 8;
			std::string const calculate_required_OF_OR_1 = "fn_fathers_and_trig";
			std::string const trigger_kind_OF_t_4 = "fn_fathers_and_trig";
			double const lambda_OF_C1 = 0.01;
			double const lambda_OF_C4 = 0.01;
			bool const failF_FROZEN_OF_B2 = false;
			double const lambda_OF_C3 = 0.01;
			bool const force_relevant_events_OF_OR_1 = false;
			bool const trimming_OF_OPTIONS = false;
			double const mu_OF_C4 = 0.1;
			bool const failF_FROZEN_OF_C2 = false;
			bool const failF_FROZEN_OF_C4 = false;
			bool const failF_FROZEN_OF_C3 = false;
			bool const failF_FROZEN_OF_C1 = false;
			std::string const trigger_kind_OF_t_2 = "fn_fathers_and_trig";
		
            /* ---------- DECLARATION OF OCCURRENCE RULES FIRING FLAGS ------------ */
            bool FIRE_xx10_OF_B1;
            bool FIRE_xx11_OF_B1;
            bool FIRE_xx10_OF_B2;
            bool FIRE_xx11_OF_B2;
            bool FIRE_xx10_OF_B3;
            bool FIRE_xx11_OF_B3;
            bool FIRE_xx10_OF_B4;
            bool FIRE_xx11_OF_B4;
            bool FIRE_xx10_OF_C1;
            bool FIRE_xx11_OF_C1;
            bool FIRE_xx10_OF_C2;
            bool FIRE_xx11_OF_C2;
            bool FIRE_xx10_OF_C3;
            bool FIRE_xx11_OF_C3;
            bool FIRE_xx10_OF_C4;
            bool FIRE_xx11_OF_C4;
            bool FIRE_xx15_OF_G_A;
            bool FIRE_xx16_OF_G_A;

            int required_OF_AND_1 = 0 ;
            int already_S_OF_AND_1 = 1 ;
            int S_OF_AND_1 = 2 ;
            int relevant_evt_OF_AND_1 = 3 ;
            int required_OF_AND_2 = 4 ;
            int already_S_OF_AND_2 = 5 ;
            int S_OF_AND_2 = 6 ;
            int relevant_evt_OF_AND_2 = 7 ;
            int required_OF_B1 = 8 ;
            int already_S_OF_B1 = 9 ;
            int S_OF_B1 = 10 ;
            int relevant_evt_OF_B1 = 11 ;
            int failF_OF_B1 = 12 ;
            int required_OF_B2 = 13 ;
            int already_S_OF_B2 = 14 ;
            int S_OF_B2 = 15 ;
            int relevant_evt_OF_B2 = 16 ;
            int failF_OF_B2 = 17 ;
            int required_OF_B3 = 18 ;
            int already_S_OF_B3 = 19 ;
            int S_OF_B3 = 20 ;
            int relevant_evt_OF_B3 = 21 ;
            int failF_OF_B3 = 22 ;
            int required_OF_B4 = 23 ;
            int already_S_OF_B4 = 24 ;
            int S_OF_B4 = 25 ;
            int relevant_evt_OF_B4 = 26 ;
            int failF_OF_B4 = 27 ;
            int required_OF_C1 = 28 ;
            int already_S_OF_C1 = 29 ;
            int S_OF_C1 = 30 ;
            int relevant_evt_OF_C1 = 31 ;
            int failF_OF_C1 = 32 ;
            int required_OF_C2 = 33 ;
            int already_S_OF_C2 = 34 ;
            int S_OF_C2 = 35 ;
            int relevant_evt_OF_C2 = 36 ;
            int failF_OF_C2 = 37 ;
            int required_OF_C3 = 38 ;
            int already_S_OF_C3 = 39 ;
            int S_OF_C3 = 40 ;
            int relevant_evt_OF_C3 = 41 ;
            int failF_OF_C3 = 42 ;
            int required_OF_C4 = 43 ;
            int already_S_OF_C4 = 44 ;
            int S_OF_C4 = 45 ;
            int relevant_evt_OF_C4 = 46 ;
            int failF_OF_C4 = 47 ;
            int required_OF_G_A = 48 ;
            int already_S_OF_G_A = 49 ;
            int S_OF_G_A = 50 ;
            int relevant_evt_OF_G_A = 51 ;
            int group_loss_OF_G_A = 52 ;
            int required_OF_OR_1 = 53 ;
            int already_S_OF_OR_1 = 54 ;
            int S_OF_OR_1 = 55 ;
            int relevant_evt_OF_OR_1 = 56 ;
            int required_OF_UE_1 = 57 ;
            int already_S_OF_UE_1 = 58 ;
            int S_OF_UE_1 = 59 ;
            int relevant_evt_OF_UE_1 = 60 ;


            int nb_OK_OF_G_A = 0 ;
            int nb_being_repaired_OF_G_A = 1 ;


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