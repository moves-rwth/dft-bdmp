
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
        class FigaroProgram_figaro_11_inst_and: public storm::figaro::FigaroProgram{
        public:
        FigaroProgram_figaro_11_inst_and(): FigaroProgram(//            std::map<std::string, size_t> mFigaroboolelementindex =
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
            	{"required_OF_I_1" , 9},
            	{"already_S_OF_I_1" , 10},
            	{"S_OF_I_1" , 11},
            	{"relevant_evt_OF_I_1" , 12},
            	{"failI_OF_I_1" , 13},
            	{"to_be_fired_OF_I_1" , 14},
            	{"already_standby_OF_I_1" , 15},
            	{"already_required_OF_I_1" , 16},
            	{"required_OF_UE_1" , 17},
            	{"already_S_OF_UE_1" , 18},
            	{"S_OF_UE_1" , 19},
            	{"relevant_evt_OF_UE_1" , 20}},

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
                    21 ,
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
            bool REINITIALISATION_OF_required_OF_I_1 ;
            bool REINITIALISATION_OF_S_OF_I_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_I_1 ;
            bool REINITIALISATION_OF_to_be_fired_OF_I_1 ;
            bool REINITIALISATION_OF_required_OF_UE_1 ;
            bool REINITIALISATION_OF_S_OF_UE_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_UE_1 ;
            
		/* ---------- DECLARATION OF CONSTANTS ------------ */
			std::string const calculate_required_OF_UE_1 = "fn_fathers_and_trig";
			double const gamma_OF_I_1 = 0.5;
			std::string const trigger_kind_OF_t_1 = "fn_fathers_and_trig";
			double const mu_OF_I_1 = 0.1;
			bool const force_relevant_events_OF_F_1 = false;
			bool const failF_FROZEN_OF_F_1 = false;
			bool const force_relevant_events_OF_AND_1 = false;
			std::string const calculate_required_OF_F_1 = "fn_fathers_and_trig";
			bool const repairable_system_OF_OPTIONS = true;
			bool const trimming_OF_OPTIONS = false;
			std::string const calculate_required_OF_AND_1 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_I_1 = false;
			bool const force_relevant_events_OF_UE_1 = true;
			bool const Profil1_OF___ARBRE__EIRM = true;
			std::string const when_to_check_OF_I_1 = "not_req_to_req";
			double const lambda_OF_F_1 = 0.01;
			std::string const calculate_required_OF_I_1 = "fn_fathers_and_trig";
			bool const failI_FROZEN_OF_I_1 = false;
			std::string const trimming_option_OF_OPTIONS = "maximum";
			double const mu_OF_F_1 = 0.1;
		
            /* ---------- DECLARATION OF OCCURRENCE RULES FIRING FLAGS ------------ */
            bool FIRE_xx10_OF_F_1;
            bool FIRE_xx11_OF_F_1;
            bool FIRE_xx23_OF_I_1_INS_2;
            bool FIRE_xx23_OF_I_1_INS_3;
            bool FIRE_xx24_OF_I_1;

            int required_OF_AND_1 = 0 ;
            int already_S_OF_AND_1 = 1 ;
            int S_OF_AND_1 = 2 ;
            int relevant_evt_OF_AND_1 = 3 ;
            int required_OF_F_1 = 4 ;
            int already_S_OF_F_1 = 5 ;
            int S_OF_F_1 = 6 ;
            int relevant_evt_OF_F_1 = 7 ;
            int failF_OF_F_1 = 8 ;
            int required_OF_I_1 = 9 ;
            int already_S_OF_I_1 = 10 ;
            int S_OF_I_1 = 11 ;
            int relevant_evt_OF_I_1 = 12 ;
            int failI_OF_I_1 = 13 ;
            int to_be_fired_OF_I_1 = 14 ;
            int already_standby_OF_I_1 = 15 ;
            int already_required_OF_I_1 = 16 ;
            int required_OF_UE_1 = 17 ;
            int already_S_OF_UE_1 = 18 ;
            int S_OF_UE_1 = 19 ;
            int relevant_evt_OF_UE_1 = 20 ;




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