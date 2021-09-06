
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
        class FigaroProgram_figaro_12_test: public storm::figaro::FigaroProgram{
        public:
        FigaroProgram_figaro_12_test(): FigaroProgram(//            std::map<std::string, size_t> mFigaroboolelementindex =
                    {  
            	{"required_OF_AND_2" , 0},
            	{"already_S_OF_AND_2" , 1},
            	{"S_OF_AND_2" , 2},
            	{"relevant_evt_OF_AND_2" , 3},
            	{"required_OF_AND_3" , 4},
            	{"already_S_OF_AND_3" , 5},
            	{"S_OF_AND_3" , 6},
            	{"relevant_evt_OF_AND_3" , 7},
            	{"required_OF_F_1" , 8},
            	{"already_S_OF_F_1" , 9},
            	{"S_OF_F_1" , 10},
            	{"relevant_evt_OF_F_1" , 11},
            	{"failF_OF_F_1" , 12},
            	{"required_OF_I_1" , 13},
            	{"already_S_OF_I_1" , 14},
            	{"S_OF_I_1" , 15},
            	{"relevant_evt_OF_I_1" , 16},
            	{"failI_OF_I_1" , 17},
            	{"to_be_fired_OF_I_1" , 18},
            	{"already_standby_OF_I_1" , 19},
            	{"already_required_OF_I_1" , 20},
            	{"required_OF_I_2" , 21},
            	{"already_S_OF_I_2" , 22},
            	{"S_OF_I_2" , 23},
            	{"relevant_evt_OF_I_2" , 24},
            	{"failI_OF_I_2" , 25},
            	{"to_be_fired_OF_I_2" , 26},
            	{"already_standby_OF_I_2" , 27},
            	{"already_required_OF_I_2" , 28},
            	{"required_OF_OR_1" , 29},
            	{"already_S_OF_OR_1" , 30},
            	{"S_OF_OR_1" , 31},
            	{"relevant_evt_OF_OR_1" , 32},
            	{"required_OF_SF_1" , 33},
            	{"already_S_OF_SF_1" , 34},
            	{"S_OF_SF_1" , 35},
            	{"relevant_evt_OF_SF_1" , 36},
            	{"failF_OF_SF_1" , 37},
            	{"failS_OF_SF_1" , 38},
            	{"required_OF_SF_2" , 39},
            	{"already_S_OF_SF_2" , 40},
            	{"S_OF_SF_2" , 41},
            	{"relevant_evt_OF_SF_2" , 42},
            	{"failF_OF_SF_2" , 43},
            	{"failS_OF_SF_2" , 44},
            	{"required_OF_SF_3" , 45},
            	{"already_S_OF_SF_3" , 46},
            	{"S_OF_SF_3" , 47},
            	{"relevant_evt_OF_SF_3" , 48},
            	{"failF_OF_SF_3" , 49},
            	{"failS_OF_SF_3" , 50},
            	{"required_OF_UE_1" , 51},
            	{"already_S_OF_UE_1" , 52},
            	{"S_OF_UE_1" , 53},
            	{"relevant_evt_OF_UE_1" , 54}},

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
                    55 ,
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
            bool REINITIALISATION_OF_required_OF_AND_2 ;
            bool REINITIALISATION_OF_S_OF_AND_2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_AND_2 ;
            bool REINITIALISATION_OF_required_OF_AND_3 ;
            bool REINITIALISATION_OF_S_OF_AND_3 ;
            bool REINITIALISATION_OF_relevant_evt_OF_AND_3 ;
            bool REINITIALISATION_OF_required_OF_F_1 ;
            bool REINITIALISATION_OF_S_OF_F_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_F_1 ;
            bool REINITIALISATION_OF_required_OF_I_1 ;
            bool REINITIALISATION_OF_S_OF_I_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_I_1 ;
            bool REINITIALISATION_OF_to_be_fired_OF_I_1 ;
            bool REINITIALISATION_OF_required_OF_I_2 ;
            bool REINITIALISATION_OF_S_OF_I_2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_I_2 ;
            bool REINITIALISATION_OF_to_be_fired_OF_I_2 ;
            bool REINITIALISATION_OF_required_OF_OR_1 ;
            bool REINITIALISATION_OF_S_OF_OR_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_OR_1 ;
            bool REINITIALISATION_OF_required_OF_SF_1 ;
            bool REINITIALISATION_OF_S_OF_SF_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_SF_1 ;
            bool REINITIALISATION_OF_required_OF_SF_2 ;
            bool REINITIALISATION_OF_S_OF_SF_2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_SF_2 ;
            bool REINITIALISATION_OF_required_OF_SF_3 ;
            bool REINITIALISATION_OF_S_OF_SF_3 ;
            bool REINITIALISATION_OF_relevant_evt_OF_SF_3 ;
            bool REINITIALISATION_OF_required_OF_UE_1 ;
            bool REINITIALISATION_OF_S_OF_UE_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_UE_1 ;
            
		/* ---------- DECLARATION OF CONSTANTS ------------ */
			std::string const calculate_required_OF_UE_1 = "fn_fathers_and_trig";
			double const gamma_OF_I_2 = 0.5;
			std::string const calculate_required_OF_SF_1 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_AND_3 = false;
			std::string const calculate_required_OF_OR_1 = "fn_fathers_and_trig";
			double const lambda_OF_SF_2 = 0.01;
			bool const failS_FROZEN_OF_SF_2 = false;
			double const standby_lambda_OF_SF_1 = 0.001;
			double const gamma_OF_I_1 = 0.5;
			std::string const calculate_required_OF_AND_3 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_AND_2 = false;
			std::string const trigger_kind_OF_t_1 = "fn_fathers_and_trig";
			double const mu_OF_I_1 = 0.1;
			bool const failS_FROZEN_OF_SF_1 = false;
			double const mu_OF_SF_2 = 0.01;
			bool const force_relevant_events_OF_F_1 = false;
			bool const failF_FROZEN_OF_F_1 = false;
			double const lambda_OF_SF_1 = 0.01;
			std::string const calculate_required_OF_AND_2 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_F_1 = "fn_fathers_and_trig";
			bool const repairable_system_OF_OPTIONS = true;
			bool const force_relevant_events_OF_I_2 = false;
			bool const trimming_OF_OPTIONS = false;
			std::string const when_to_check_OF_I_2 = "not_req_to_req";
			bool const force_relevant_events_OF_I_1 = false;
			std::string const calculate_required_OF_I_2 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_UE_1 = true;
			bool const force_relevant_events_OF_SF_3 = false;
			bool const failF_FROZEN_OF_SF_3 = false;
			std::string const when_to_check_OF_I_1 = "not_req_to_req";
			double const mu_OF_SF_1 = 0.1;
			bool const Profil1_OF___ARBRE__EIRM = true;
			double const lambda_OF_F_1 = 0.01;
			bool const failI_FROZEN_OF_I_2 = false;
			std::string const calculate_required_OF_SF_3 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_I_1 = "fn_fathers_and_trig";
			double const standby_lambda_OF_SF_3 = 0.001;
			bool const failI_FROZEN_OF_I_1 = false;
			bool const force_relevant_events_OF_SF_2 = false;
			bool const failF_FROZEN_OF_SF_2 = false;
			bool const failS_FROZEN_OF_SF_3 = false;
			double const mu_OF_I_2 = 0.01;
			std::string const calculate_required_OF_SF_2 = "fn_fathers_and_trig";
			double const lambda_OF_SF_3 = 0.01;
			bool const force_relevant_events_OF_SF_1 = false;
			bool const failF_FROZEN_OF_SF_1 = false;
			double const standby_lambda_OF_SF_2 = 0.001;
			std::string const trimming_option_OF_OPTIONS = "maximum";
			double const mu_OF_F_1 = 0.1;
			bool const force_relevant_events_OF_OR_1 = false;
			double const mu_OF_SF_3 = 0.01;
		
            /* ---------- DECLARATION OF OCCURRENCE RULES FIRING FLAGS ------------ */
            bool FIRE_xx10_OF_F_1;
            bool FIRE_xx11_OF_F_1;
            bool FIRE_xx23_OF_I_1_INS_2;
            bool FIRE_xx23_OF_I_1_INS_3;
            bool FIRE_xx24_OF_I_1;
            bool FIRE_xx23_OF_I_2_INS_5;
            bool FIRE_xx23_OF_I_2_INS_6;
            bool FIRE_xx24_OF_I_2;
            bool FIRE_xx17_OF_SF_1;
            bool FIRE_xx18_OF_SF_1;
            bool FIRE_xx19_OF_SF_1;
            bool FIRE_xx17_OF_SF_2;
            bool FIRE_xx18_OF_SF_2;
            bool FIRE_xx19_OF_SF_2;
            bool FIRE_xx17_OF_SF_3;
            bool FIRE_xx18_OF_SF_3;
            bool FIRE_xx19_OF_SF_3;

            int required_OF_AND_2 = 0 ;
            int already_S_OF_AND_2 = 1 ;
            int S_OF_AND_2 = 2 ;
            int relevant_evt_OF_AND_2 = 3 ;
            int required_OF_AND_3 = 4 ;
            int already_S_OF_AND_3 = 5 ;
            int S_OF_AND_3 = 6 ;
            int relevant_evt_OF_AND_3 = 7 ;
            int required_OF_F_1 = 8 ;
            int already_S_OF_F_1 = 9 ;
            int S_OF_F_1 = 10 ;
            int relevant_evt_OF_F_1 = 11 ;
            int failF_OF_F_1 = 12 ;
            int required_OF_I_1 = 13 ;
            int already_S_OF_I_1 = 14 ;
            int S_OF_I_1 = 15 ;
            int relevant_evt_OF_I_1 = 16 ;
            int failI_OF_I_1 = 17 ;
            int to_be_fired_OF_I_1 = 18 ;
            int already_standby_OF_I_1 = 19 ;
            int already_required_OF_I_1 = 20 ;
            int required_OF_I_2 = 21 ;
            int already_S_OF_I_2 = 22 ;
            int S_OF_I_2 = 23 ;
            int relevant_evt_OF_I_2 = 24 ;
            int failI_OF_I_2 = 25 ;
            int to_be_fired_OF_I_2 = 26 ;
            int already_standby_OF_I_2 = 27 ;
            int already_required_OF_I_2 = 28 ;
            int required_OF_OR_1 = 29 ;
            int already_S_OF_OR_1 = 30 ;
            int S_OF_OR_1 = 31 ;
            int relevant_evt_OF_OR_1 = 32 ;
            int required_OF_SF_1 = 33 ;
            int already_S_OF_SF_1 = 34 ;
            int S_OF_SF_1 = 35 ;
            int relevant_evt_OF_SF_1 = 36 ;
            int failF_OF_SF_1 = 37 ;
            int failS_OF_SF_1 = 38 ;
            int required_OF_SF_2 = 39 ;
            int already_S_OF_SF_2 = 40 ;
            int S_OF_SF_2 = 41 ;
            int relevant_evt_OF_SF_2 = 42 ;
            int failF_OF_SF_2 = 43 ;
            int failS_OF_SF_2 = 44 ;
            int required_OF_SF_3 = 45 ;
            int already_S_OF_SF_3 = 46 ;
            int S_OF_SF_3 = 47 ;
            int relevant_evt_OF_SF_3 = 48 ;
            int failF_OF_SF_3 = 49 ;
            int failS_OF_SF_3 = 50 ;
            int required_OF_UE_1 = 51 ;
            int already_S_OF_UE_1 = 52 ;
            int S_OF_UE_1 = 53 ;
            int relevant_evt_OF_UE_1 = 54 ;




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