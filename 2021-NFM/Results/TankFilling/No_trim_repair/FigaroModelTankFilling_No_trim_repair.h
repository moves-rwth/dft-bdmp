
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
        class FigaroProgram_TankFilling_No_trim_repair: public storm::figaro::FigaroProgram{
        public:
        FigaroProgram_TankFilling_No_trim_repair(): FigaroProgram(//            std::map<std::string, size_t> mFigaroboolelementindex =
                    {  
            	{"required_OF_CCFV12" , 0},
            	{"already_S_OF_CCFV12" , 1},
            	{"S_OF_CCFV12" , 2},
            	{"relevant_evt_OF_CCFV12" , 3},
            	{"failF_OF_CCFV12" , 4},
            	{"required_OF_CCFVSOL12" , 5},
            	{"already_S_OF_CCFVSOL12" , 6},
            	{"S_OF_CCFVSOL12" , 7},
            	{"relevant_evt_OF_CCFVSOL12" , 8},
            	{"failF_OF_CCFVSOL12" , 9},
            	{"required_OF_Filling" , 10},
            	{"already_S_OF_Filling" , 11},
            	{"S_OF_Filling" , 12},
            	{"relevant_evt_OF_Filling" , 13},
            	{"failF_OF_Filling" , 14},
            	{"required_OF_LSH1" , 15},
            	{"already_S_OF_LSH1" , 16},
            	{"S_OF_LSH1" , 17},
            	{"relevant_evt_OF_LSH1" , 18},
            	{"failF_OF_LSH1" , 19},
            	{"required_OF_PSH1" , 20},
            	{"already_S_OF_PSH1" , 21},
            	{"S_OF_PSH1" , 22},
            	{"relevant_evt_OF_PSH1" , 23},
            	{"failF_OF_PSH1" , 24},
            	{"required_OF_R" , 25},
            	{"already_S_OF_R" , 26},
            	{"S_OF_R" , 27},
            	{"relevant_evt_OF_R" , 28},
            	{"required_OF_RL" , 29},
            	{"already_S_OF_RL" , 30},
            	{"S_OF_RL" , 31},
            	{"relevant_evt_OF_RL" , 32},
            	{"required_OF_RLL" , 33},
            	{"already_S_OF_RLL" , 34},
            	{"S_OF_RLL" , 35},
            	{"relevant_evt_OF_RLL" , 36},
            	{"required_OF_RLR" , 37},
            	{"already_S_OF_RLR" , 38},
            	{"S_OF_RLR" , 39},
            	{"relevant_evt_OF_RLR" , 40},
            	{"required_OF_System" , 41},
            	{"already_S_OF_System" , 42},
            	{"S_OF_System" , 43},
            	{"relevant_evt_OF_System" , 44},
            	{"required_OF_UE_1" , 45},
            	{"already_S_OF_UE_1" , 46},
            	{"S_OF_UE_1" , 47},
            	{"relevant_evt_OF_UE_1" , 48},
            	{"required_OF_V1" , 49},
            	{"already_S_OF_V1" , 50},
            	{"S_OF_V1" , 51},
            	{"relevant_evt_OF_V1" , 52},
            	{"failF_OF_V1" , 53},
            	{"required_OF_V2" , 54},
            	{"already_S_OF_V2" , 55},
            	{"S_OF_V2" , 56},
            	{"relevant_evt_OF_V2" , 57},
            	{"failF_OF_V2" , 58},
            	{"required_OF_VSOL1" , 59},
            	{"already_S_OF_VSOL1" , 60},
            	{"S_OF_VSOL1" , 61},
            	{"relevant_evt_OF_VSOL1" , 62},
            	{"failF_OF_VSOL1" , 63},
            	{"required_OF_VSOL2" , 64},
            	{"already_S_OF_VSOL2" , 65},
            	{"S_OF_VSOL2" , 66},
            	{"relevant_evt_OF_VSOL2" , 67},
            	{"failF_OF_VSOL2" , 68}},

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
            bool REINITIALISATION_OF_required_OF_CCFV12 ;
            bool REINITIALISATION_OF_S_OF_CCFV12 ;
            bool REINITIALISATION_OF_relevant_evt_OF_CCFV12 ;
            bool REINITIALISATION_OF_required_OF_CCFVSOL12 ;
            bool REINITIALISATION_OF_S_OF_CCFVSOL12 ;
            bool REINITIALISATION_OF_relevant_evt_OF_CCFVSOL12 ;
            bool REINITIALISATION_OF_required_OF_Filling ;
            bool REINITIALISATION_OF_S_OF_Filling ;
            bool REINITIALISATION_OF_relevant_evt_OF_Filling ;
            bool REINITIALISATION_OF_required_OF_LSH1 ;
            bool REINITIALISATION_OF_S_OF_LSH1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_LSH1 ;
            bool REINITIALISATION_OF_required_OF_PSH1 ;
            bool REINITIALISATION_OF_S_OF_PSH1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_PSH1 ;
            bool REINITIALISATION_OF_required_OF_R ;
            bool REINITIALISATION_OF_S_OF_R ;
            bool REINITIALISATION_OF_relevant_evt_OF_R ;
            bool REINITIALISATION_OF_required_OF_RL ;
            bool REINITIALISATION_OF_S_OF_RL ;
            bool REINITIALISATION_OF_relevant_evt_OF_RL ;
            bool REINITIALISATION_OF_required_OF_RLL ;
            bool REINITIALISATION_OF_S_OF_RLL ;
            bool REINITIALISATION_OF_relevant_evt_OF_RLL ;
            bool REINITIALISATION_OF_required_OF_RLR ;
            bool REINITIALISATION_OF_S_OF_RLR ;
            bool REINITIALISATION_OF_relevant_evt_OF_RLR ;
            bool REINITIALISATION_OF_required_OF_System ;
            bool REINITIALISATION_OF_S_OF_System ;
            bool REINITIALISATION_OF_relevant_evt_OF_System ;
            bool REINITIALISATION_OF_required_OF_UE_1 ;
            bool REINITIALISATION_OF_S_OF_UE_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_UE_1 ;
            bool REINITIALISATION_OF_required_OF_V1 ;
            bool REINITIALISATION_OF_S_OF_V1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_V1 ;
            bool REINITIALISATION_OF_required_OF_V2 ;
            bool REINITIALISATION_OF_S_OF_V2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_V2 ;
            bool REINITIALISATION_OF_required_OF_VSOL1 ;
            bool REINITIALISATION_OF_S_OF_VSOL1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_VSOL1 ;
            bool REINITIALISATION_OF_required_OF_VSOL2 ;
            bool REINITIALISATION_OF_S_OF_VSOL2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_VSOL2 ;
            
		/* ---------- DECLARATION OF CONSTANTS ------------ */
			std::string const calculate_required_OF_CCFVSOL12 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_VSOL2 = false;
			std::string const calculate_required_OF_VSOL1 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_R = "fn_fathers_and_trig";
			std::string const calculate_required_OF_V1 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_LSH1 = false;
			std::string const calculate_required_OF_V2 = "fn_fathers_and_trig";
			double const mu_OF_CCFV12 = 0.1;
			double const lambda_OF_Filling = 0.0001;
			double const mu_OF_CCFVSOL12 = 0.1;
			bool const Default_values_OF___ARBRE__EIRM = true;
			bool const failF_FROZEN_OF_CCFV12 = false;
			double const lambda_OF_LSH1 = 0.0001;
			bool const force_relevant_events_OF_RLL = false;
			bool const failF_FROZEN_OF_CCFVSOL12 = false;
			double const mu_OF_V2 = 0.1;
			double const mu_OF_VSOL1 = 0.1;
			double const mu_OF_V1 = 0.1;
			bool const repairable_system_OF_OPTIONS = true;
			bool const No_trim_OF___ARBRE__EIRM = true;
			bool const trim_article_OF___ARBRE__EIRM = false;
			bool const force_relevant_events_OF_PSH1 = false;
			std::string const calculate_required_OF_System = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_V1 = false;
			bool const failF_FROZEN_OF_VSOL1 = false;
			bool const force_relevant_events_OF_VSOL2 = false;
			bool const No_repair_OF___ARBRE__EIRM = false;
			bool const failF_FROZEN_OF_V2 = false;
			std::string const calculate_required_OF_Filling = "fn_fathers_and_trig";
			std::string const calculate_required_OF_UE_1 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_RLR = false;
			double const lambda_OF_PSH1 = 0.0001;
			std::string const trimming_option_OF_OPTIONS = "according_to_article";
			std::string const calculate_required_OF_LSH1 = "fn_fathers_and_trig";
			double const lambda_OF_VSOL2 = 0.0001;
			bool const force_relevant_events_OF_RL = false;
			bool const force_relevant_events_OF_CCFV12 = false;
			double const mu_OF_Filling = 0.1;
			bool const trimming_OF_OPTIONS = false;
			bool const force_relevant_events_OF_CCFVSOL12 = false;
			std::string const calculate_required_OF_RLL = "fn_fathers_and_trig";
			bool const Profil1_OF___ARBRE__EIRM = false;
			double const mu_OF_LSH1 = 0.1;
			bool const failF_FROZEN_OF_Filling = false;
			bool const force_relevant_events_OF_VSOL1 = false;
			double const lambda_OF_CCFV12 = 0.0001;
			bool const force_relevant_events_OF_R = false;
			bool const force_relevant_events_OF_V1 = false;
			std::string const calculate_required_OF_PSH1 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_V2 = false;
			bool const failF_FROZEN_OF_LSH1 = false;
			double const lambda_OF_CCFVSOL12 = 0.0001;
			std::string const calculate_required_OF_VSOL2 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_UE_1 = true;
			double const lambda_OF_VSOL1 = 0.0001;
			std::string const calculate_required_OF_RLR = "fn_fathers_and_trig";
			double const lambda_OF_V1 = 0.0001;
			double const mu_OF_PSH1 = 0.1;
			double const lambda_OF_V2 = 0.0001;
			double const mu_OF_VSOL2 = 0.1;
			std::string const calculate_required_OF_RL = "fn_fathers_and_trig";
			std::string const calculate_required_OF_CCFV12 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_System = false;
			bool const failF_FROZEN_OF_PSH1 = false;
			bool const force_relevant_events_OF_Filling = false;
		
            /* ---------- DECLARATION OF OCCURRENCE RULES FIRING FLAGS ------------ */
            bool FIRE_xx10_OF_CCFV12;
            bool FIRE_xx11_OF_CCFV12;
            bool FIRE_xx10_OF_CCFVSOL12;
            bool FIRE_xx11_OF_CCFVSOL12;
            bool FIRE_xx10_OF_Filling;
            bool FIRE_xx11_OF_Filling;
            bool FIRE_xx10_OF_LSH1;
            bool FIRE_xx11_OF_LSH1;
            bool FIRE_xx10_OF_PSH1;
            bool FIRE_xx11_OF_PSH1;
            bool FIRE_xx10_OF_V1;
            bool FIRE_xx11_OF_V1;
            bool FIRE_xx10_OF_V2;
            bool FIRE_xx11_OF_V2;
            bool FIRE_xx10_OF_VSOL1;
            bool FIRE_xx11_OF_VSOL1;
            bool FIRE_xx10_OF_VSOL2;
            bool FIRE_xx11_OF_VSOL2;

            int required_OF_CCFV12 = 0 ;
            int already_S_OF_CCFV12 = 1 ;
            int S_OF_CCFV12 = 2 ;
            int relevant_evt_OF_CCFV12 = 3 ;
            int failF_OF_CCFV12 = 4 ;
            int required_OF_CCFVSOL12 = 5 ;
            int already_S_OF_CCFVSOL12 = 6 ;
            int S_OF_CCFVSOL12 = 7 ;
            int relevant_evt_OF_CCFVSOL12 = 8 ;
            int failF_OF_CCFVSOL12 = 9 ;
            int required_OF_Filling = 10 ;
            int already_S_OF_Filling = 11 ;
            int S_OF_Filling = 12 ;
            int relevant_evt_OF_Filling = 13 ;
            int failF_OF_Filling = 14 ;
            int required_OF_LSH1 = 15 ;
            int already_S_OF_LSH1 = 16 ;
            int S_OF_LSH1 = 17 ;
            int relevant_evt_OF_LSH1 = 18 ;
            int failF_OF_LSH1 = 19 ;
            int required_OF_PSH1 = 20 ;
            int already_S_OF_PSH1 = 21 ;
            int S_OF_PSH1 = 22 ;
            int relevant_evt_OF_PSH1 = 23 ;
            int failF_OF_PSH1 = 24 ;
            int required_OF_R = 25 ;
            int already_S_OF_R = 26 ;
            int S_OF_R = 27 ;
            int relevant_evt_OF_R = 28 ;
            int required_OF_RL = 29 ;
            int already_S_OF_RL = 30 ;
            int S_OF_RL = 31 ;
            int relevant_evt_OF_RL = 32 ;
            int required_OF_RLL = 33 ;
            int already_S_OF_RLL = 34 ;
            int S_OF_RLL = 35 ;
            int relevant_evt_OF_RLL = 36 ;
            int required_OF_RLR = 37 ;
            int already_S_OF_RLR = 38 ;
            int S_OF_RLR = 39 ;
            int relevant_evt_OF_RLR = 40 ;
            int required_OF_System = 41 ;
            int already_S_OF_System = 42 ;
            int S_OF_System = 43 ;
            int relevant_evt_OF_System = 44 ;
            int required_OF_UE_1 = 45 ;
            int already_S_OF_UE_1 = 46 ;
            int S_OF_UE_1 = 47 ;
            int relevant_evt_OF_UE_1 = 48 ;
            int required_OF_V1 = 49 ;
            int already_S_OF_V1 = 50 ;
            int S_OF_V1 = 51 ;
            int relevant_evt_OF_V1 = 52 ;
            int failF_OF_V1 = 53 ;
            int required_OF_V2 = 54 ;
            int already_S_OF_V2 = 55 ;
            int S_OF_V2 = 56 ;
            int relevant_evt_OF_V2 = 57 ;
            int failF_OF_V2 = 58 ;
            int required_OF_VSOL1 = 59 ;
            int already_S_OF_VSOL1 = 60 ;
            int S_OF_VSOL1 = 61 ;
            int relevant_evt_OF_VSOL1 = 62 ;
            int failF_OF_VSOL1 = 63 ;
            int required_OF_VSOL2 = 64 ;
            int already_S_OF_VSOL2 = 65 ;
            int S_OF_VSOL2 = 66 ;
            int relevant_evt_OF_VSOL2 = 67 ;
            int failF_OF_VSOL2 = 68 ;




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