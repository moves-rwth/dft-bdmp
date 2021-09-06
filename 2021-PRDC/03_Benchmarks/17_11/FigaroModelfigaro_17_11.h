
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
        class FigaroProgram_figaro_17_11: public storm::figaro::FigaroProgram{
        public:
        FigaroProgram_figaro_17_11(): FigaroProgram(//            std::map<std::string, size_t> mFigaroboolelementindex =
                    {  
            	{"required_OF_AND_1" , 0},
            	{"already_S_OF_AND_1" , 1},
            	{"S_OF_AND_1" , 2},
            	{"relevant_evt_OF_AND_1" , 3},
            	{"required_OF_F_1" , 4},
            	{"already_S_OF_F_1" , 5},
            	{"S_OF_F_1" , 6},
            	{"relevant_evt_OF_F_1" , 7},
            	{"failF_OF_F_1" , 8},
            	{"required_OF_F_2" , 9},
            	{"already_S_OF_F_2" , 10},
            	{"S_OF_F_2" , 11},
            	{"relevant_evt_OF_F_2" , 12},
            	{"failF_OF_F_2" , 13},
            	{"required_OF_OR_1" , 14},
            	{"already_S_OF_OR_1" , 15},
            	{"S_OF_OR_1" , 16},
            	{"relevant_evt_OF_OR_1" , 17},
            	{"required_OF_SF_1" , 18},
            	{"already_S_OF_SF_1" , 19},
            	{"S_OF_SF_1" , 20},
            	{"relevant_evt_OF_SF_1" , 21},
            	{"failF_OF_SF_1" , 22},
            	{"failS_OF_SF_1" , 23},
            	{"required_OF_UE_1" , 24},
            	{"already_S_OF_UE_1" , 25},
            	{"S_OF_UE_1" , 26},
            	{"relevant_evt_OF_UE_1" , 27}},

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
                    28 ,
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
            bool REINITIALISATION_OF_required_OF_F_1 ;
            bool REINITIALISATION_OF_S_OF_F_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_F_1 ;
            bool REINITIALISATION_OF_required_OF_F_2 ;
            bool REINITIALISATION_OF_S_OF_F_2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_F_2 ;
            bool REINITIALISATION_OF_required_OF_OR_1 ;
            bool REINITIALISATION_OF_S_OF_OR_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_OR_1 ;
            bool REINITIALISATION_OF_required_OF_SF_1 ;
            bool REINITIALISATION_OF_S_OF_SF_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_SF_1 ;
            bool REINITIALISATION_OF_required_OF_UE_1 ;
            bool REINITIALISATION_OF_S_OF_UE_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_UE_1 ;
            
		/* ---------- DECLARATION OF CONSTANTS ------------ */
			bool const force_relevant_events_OF_F_2 = false;
			bool const No_repair_OF___ARBRE__EIRM = false;
			double const lambda_OF_SF_1 = 0.01;
			double const standby_lambda_OF_SF_1 = 0.001;
			bool const force_relevant_events_OF_F_1 = false;
			std::string const calculate_required_OF_AND_1 = "fn_fathers_and_trig";
			bool const repairable_system_OF_OPTIONS = true;
			bool const trimming_OF_OPTIONS = false;
			std::string const calculate_required_OF_SF_1 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_SF_1 = false;
			bool const Profil1_OF___ARBRE__EIRM = true;
			std::string const trimming_option_OF_OPTIONS = "maximum";
			double const mu_OF_SF_1 = 0.1;
			double const lambda_OF_F_2 = 0.01;
			bool const force_relevant_events_OF_OR_1 = false;
			double const lambda_OF_F_1 = 0.01;
			std::string const calculate_required_OF_F_2 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_F_2 = false;
			bool const force_relevant_events_OF_UE_1 = true;
			double const mu_OF_F_2 = 0.1;
			std::string const trigger_kind_OF_t_1 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_AND_1 = false;
			std::string const calculate_required_OF_F_1 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_UE_1 = "fn_fathers_and_trig";
			bool const failS_FROZEN_OF_SF_1 = false;
			bool const failF_FROZEN_OF_F_1 = false;
			double const mu_OF_F_1 = 0.1;
			bool const force_relevant_events_OF_SF_1 = false;
			std::string const calculate_required_OF_OR_1 = "fn_fathers_and_trig";
		
            /* ---------- DECLARATION OF OCCURRENCE RULES FIRING FLAGS ------------ */
            bool FIRE_xx10_OF_F_1;
            bool FIRE_xx11_OF_F_1;
            bool FIRE_xx10_OF_F_2;
            bool FIRE_xx11_OF_F_2;
            bool FIRE_xx17_OF_SF_1;
            bool FIRE_xx18_OF_SF_1;
            bool FIRE_xx19_OF_SF_1;

            int required_OF_AND_1 = 0 ;
            int already_S_OF_AND_1 = 1 ;
            int S_OF_AND_1 = 2 ;
            int relevant_evt_OF_AND_1 = 3 ;
            int required_OF_F_1 = 4 ;
            int already_S_OF_F_1 = 5 ;
            int S_OF_F_1 = 6 ;
            int relevant_evt_OF_F_1 = 7 ;
            int failF_OF_F_1 = 8 ;
            int required_OF_F_2 = 9 ;
            int already_S_OF_F_2 = 10 ;
            int S_OF_F_2 = 11 ;
            int relevant_evt_OF_F_2 = 12 ;
            int failF_OF_F_2 = 13 ;
            int required_OF_OR_1 = 14 ;
            int already_S_OF_OR_1 = 15 ;
            int S_OF_OR_1 = 16 ;
            int relevant_evt_OF_OR_1 = 17 ;
            int required_OF_SF_1 = 18 ;
            int already_S_OF_SF_1 = 19 ;
            int S_OF_SF_1 = 20 ;
            int relevant_evt_OF_SF_1 = 21 ;
            int failF_OF_SF_1 = 22 ;
            int failS_OF_SF_1 = 23 ;
            int required_OF_UE_1 = 24 ;
            int already_S_OF_UE_1 = 25 ;
            int S_OF_UE_1 = 26 ;
            int relevant_evt_OF_UE_1 = 27 ;




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