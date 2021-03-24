
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
        class FigaroProgram_RailwayCabinet_Trim_No_repair: public storm::figaro::FigaroProgram{
        public:
        FigaroProgram_RailwayCabinet_Trim_No_repair(): FigaroProgram(//            std::map<std::string, size_t> mFigaroboolelementindex =
                    {  
            	{"required_OF_HC1_fail" , 0},
            	{"already_S_OF_HC1_fail" , 1},
            	{"S_OF_HC1_fail" , 2},
            	{"relevant_evt_OF_HC1_fail" , 3},
            	{"failF_OF_HC1_fail" , 4},
            	{"required_OF_HC1_fail_DC" , 5},
            	{"already_S_OF_HC1_fail_DC" , 6},
            	{"S_OF_HC1_fail_DC" , 7},
            	{"relevant_evt_OF_HC1_fail_DC" , 8},
            	{"failF_OF_HC1_fail_DC" , 9},
            	{"required_OF_HC2_fail" , 10},
            	{"already_S_OF_HC2_fail" , 11},
            	{"S_OF_HC2_fail" , 12},
            	{"relevant_evt_OF_HC2_fail" , 13},
            	{"failF_OF_HC2_fail" , 14},
            	{"required_OF_HC2_fail_DC" , 15},
            	{"already_S_OF_HC2_fail_DC" , 16},
            	{"S_OF_HC2_fail_DC" , 17},
            	{"relevant_evt_OF_HC2_fail_DC" , 18},
            	{"failF_OF_HC2_fail_DC" , 19},
            	{"required_OF_HC3_fail" , 20},
            	{"already_S_OF_HC3_fail" , 21},
            	{"S_OF_HC3_fail" , 22},
            	{"relevant_evt_OF_HC3_fail" , 23},
            	{"failF_OF_HC3_fail" , 24},
            	{"required_OF_HC3_fail_DC" , 25},
            	{"already_S_OF_HC3_fail_DC" , 26},
            	{"S_OF_HC3_fail_DC" , 27},
            	{"relevant_evt_OF_HC3_fail_DC" , 28},
            	{"failF_OF_HC3_fail_DC" , 29},
            	{"required_OF_HC4_fail" , 30},
            	{"already_S_OF_HC4_fail" , 31},
            	{"S_OF_HC4_fail" , 32},
            	{"relevant_evt_OF_HC4_fail" , 33},
            	{"failF_OF_HC4_fail" , 34},
            	{"required_OF_HC4_fail_DC" , 35},
            	{"already_S_OF_HC4_fail_DC" , 36},
            	{"S_OF_HC4_fail_DC" , 37},
            	{"relevant_evt_OF_HC4_fail_DC" , 38},
            	{"failF_OF_HC4_fail_DC" , 39},
            	{"required_OF_HC_fail_DC" , 40},
            	{"already_S_OF_HC_fail_DC" , 41},
            	{"S_OF_HC_fail_DC" , 42},
            	{"relevant_evt_OF_HC_fail_DC" , 43},
            	{"required_OF_RC1_fail" , 44},
            	{"already_S_OF_RC1_fail" , 45},
            	{"S_OF_RC1_fail" , 46},
            	{"relevant_evt_OF_RC1_fail" , 47},
            	{"failF_OF_RC1_fail" , 48},
            	{"required_OF_RC1_fail_DC" , 49},
            	{"already_S_OF_RC1_fail_DC" , 50},
            	{"S_OF_RC1_fail_DC" , 51},
            	{"relevant_evt_OF_RC1_fail_DC" , 52},
            	{"failF_OF_RC1_fail_DC" , 53},
            	{"required_OF_RC2_fail" , 54},
            	{"already_S_OF_RC2_fail" , 55},
            	{"S_OF_RC2_fail" , 56},
            	{"relevant_evt_OF_RC2_fail" , 57},
            	{"failF_OF_RC2_fail" , 58},
            	{"required_OF_RC2_fail_DC" , 59},
            	{"already_S_OF_RC2_fail_DC" , 60},
            	{"S_OF_RC2_fail_DC" , 61},
            	{"relevant_evt_OF_RC2_fail_DC" , 62},
            	{"failF_OF_RC2_fail_DC" , 63},
            	{"required_OF_RC3_fail" , 64},
            	{"already_S_OF_RC3_fail" , 65},
            	{"S_OF_RC3_fail" , 66},
            	{"relevant_evt_OF_RC3_fail" , 67},
            	{"failF_OF_RC3_fail" , 68},
            	{"required_OF_RC3_fail_DC" , 69},
            	{"already_S_OF_RC3_fail_DC" , 70},
            	{"S_OF_RC3_fail_DC" , 71},
            	{"relevant_evt_OF_RC3_fail_DC" , 72},
            	{"failF_OF_RC3_fail_DC" , 73},
            	{"required_OF_RC4_fail" , 74},
            	{"already_S_OF_RC4_fail" , 75},
            	{"S_OF_RC4_fail" , 76},
            	{"relevant_evt_OF_RC4_fail" , 77},
            	{"failF_OF_RC4_fail" , 78},
            	{"required_OF_RC4_fail_DC" , 79},
            	{"already_S_OF_RC4_fail_DC" , 80},
            	{"S_OF_RC4_fail_DC" , 81},
            	{"relevant_evt_OF_RC4_fail_DC" , 82},
            	{"failF_OF_RC4_fail_DC" , 83},
            	{"required_OF_RC_fail_DC" , 84},
            	{"already_S_OF_RC_fail_DC" , 85},
            	{"S_OF_RC_fail_DC" , 86},
            	{"relevant_evt_OF_RC_fail_DC" , 87},
            	{"required_OF_System" , 88},
            	{"already_S_OF_System" , 89},
            	{"S_OF_System" , 90},
            	{"relevant_evt_OF_System" , 91},
            	{"required_OF_Two_HC_fail" , 92},
            	{"already_S_OF_Two_HC_fail" , 93},
            	{"S_OF_Two_HC_fail" , 94},
            	{"relevant_evt_OF_Two_HC_fail" , 95},
            	{"required_OF_Two_RC_HC_fail_DC" , 96},
            	{"already_S_OF_Two_RC_HC_fail_DC" , 97},
            	{"S_OF_Two_RC_HC_fail_DC" , 98},
            	{"relevant_evt_OF_Two_RC_HC_fail_DC" , 99},
            	{"required_OF_Two_RC_fail" , 100},
            	{"already_S_OF_Two_RC_fail" , 101},
            	{"S_OF_Two_RC_fail" , 102},
            	{"relevant_evt_OF_Two_RC_fail" , 103},
            	{"required_OF_UE_1" , 104},
            	{"already_S_OF_UE_1" , 105},
            	{"S_OF_UE_1" , 106},
            	{"relevant_evt_OF_UE_1" , 107}},

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
                    108 ,
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
            bool REINITIALISATION_OF_required_OF_HC1_fail ;
            bool REINITIALISATION_OF_S_OF_HC1_fail ;
            bool REINITIALISATION_OF_relevant_evt_OF_HC1_fail ;
            bool REINITIALISATION_OF_required_OF_HC1_fail_DC ;
            bool REINITIALISATION_OF_S_OF_HC1_fail_DC ;
            bool REINITIALISATION_OF_relevant_evt_OF_HC1_fail_DC ;
            bool REINITIALISATION_OF_required_OF_HC2_fail ;
            bool REINITIALISATION_OF_S_OF_HC2_fail ;
            bool REINITIALISATION_OF_relevant_evt_OF_HC2_fail ;
            bool REINITIALISATION_OF_required_OF_HC2_fail_DC ;
            bool REINITIALISATION_OF_S_OF_HC2_fail_DC ;
            bool REINITIALISATION_OF_relevant_evt_OF_HC2_fail_DC ;
            bool REINITIALISATION_OF_required_OF_HC3_fail ;
            bool REINITIALISATION_OF_S_OF_HC3_fail ;
            bool REINITIALISATION_OF_relevant_evt_OF_HC3_fail ;
            bool REINITIALISATION_OF_required_OF_HC3_fail_DC ;
            bool REINITIALISATION_OF_S_OF_HC3_fail_DC ;
            bool REINITIALISATION_OF_relevant_evt_OF_HC3_fail_DC ;
            bool REINITIALISATION_OF_required_OF_HC4_fail ;
            bool REINITIALISATION_OF_S_OF_HC4_fail ;
            bool REINITIALISATION_OF_relevant_evt_OF_HC4_fail ;
            bool REINITIALISATION_OF_required_OF_HC4_fail_DC ;
            bool REINITIALISATION_OF_S_OF_HC4_fail_DC ;
            bool REINITIALISATION_OF_relevant_evt_OF_HC4_fail_DC ;
            bool REINITIALISATION_OF_required_OF_HC_fail_DC ;
            bool REINITIALISATION_OF_S_OF_HC_fail_DC ;
            bool REINITIALISATION_OF_relevant_evt_OF_HC_fail_DC ;
            bool REINITIALISATION_OF_required_OF_RC1_fail ;
            bool REINITIALISATION_OF_S_OF_RC1_fail ;
            bool REINITIALISATION_OF_relevant_evt_OF_RC1_fail ;
            bool REINITIALISATION_OF_required_OF_RC1_fail_DC ;
            bool REINITIALISATION_OF_S_OF_RC1_fail_DC ;
            bool REINITIALISATION_OF_relevant_evt_OF_RC1_fail_DC ;
            bool REINITIALISATION_OF_required_OF_RC2_fail ;
            bool REINITIALISATION_OF_S_OF_RC2_fail ;
            bool REINITIALISATION_OF_relevant_evt_OF_RC2_fail ;
            bool REINITIALISATION_OF_required_OF_RC2_fail_DC ;
            bool REINITIALISATION_OF_S_OF_RC2_fail_DC ;
            bool REINITIALISATION_OF_relevant_evt_OF_RC2_fail_DC ;
            bool REINITIALISATION_OF_required_OF_RC3_fail ;
            bool REINITIALISATION_OF_S_OF_RC3_fail ;
            bool REINITIALISATION_OF_relevant_evt_OF_RC3_fail ;
            bool REINITIALISATION_OF_required_OF_RC3_fail_DC ;
            bool REINITIALISATION_OF_S_OF_RC3_fail_DC ;
            bool REINITIALISATION_OF_relevant_evt_OF_RC3_fail_DC ;
            bool REINITIALISATION_OF_required_OF_RC4_fail ;
            bool REINITIALISATION_OF_S_OF_RC4_fail ;
            bool REINITIALISATION_OF_relevant_evt_OF_RC4_fail ;
            bool REINITIALISATION_OF_required_OF_RC4_fail_DC ;
            bool REINITIALISATION_OF_S_OF_RC4_fail_DC ;
            bool REINITIALISATION_OF_relevant_evt_OF_RC4_fail_DC ;
            bool REINITIALISATION_OF_required_OF_RC_fail_DC ;
            bool REINITIALISATION_OF_S_OF_RC_fail_DC ;
            bool REINITIALISATION_OF_relevant_evt_OF_RC_fail_DC ;
            bool REINITIALISATION_OF_required_OF_System ;
            bool REINITIALISATION_OF_S_OF_System ;
            bool REINITIALISATION_OF_relevant_evt_OF_System ;
            bool REINITIALISATION_OF_required_OF_Two_HC_fail ;
            bool REINITIALISATION_OF_S_OF_Two_HC_fail ;
            bool REINITIALISATION_OF_relevant_evt_OF_Two_HC_fail ;
            bool REINITIALISATION_OF_required_OF_Two_RC_HC_fail_DC ;
            bool REINITIALISATION_OF_S_OF_Two_RC_HC_fail_DC ;
            bool REINITIALISATION_OF_relevant_evt_OF_Two_RC_HC_fail_DC ;
            bool REINITIALISATION_OF_required_OF_Two_RC_fail ;
            bool REINITIALISATION_OF_S_OF_Two_RC_fail ;
            bool REINITIALISATION_OF_relevant_evt_OF_Two_RC_fail ;
            bool REINITIALISATION_OF_required_OF_UE_1 ;
            bool REINITIALISATION_OF_S_OF_UE_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_UE_1 ;
            
		/* ---------- DECLARATION OF CONSTANTS ------------ */
			double const lambda_OF_HC4_fail = 0.0253;
			double const lambda_OF_HC1_fail_DC = 0.0253;
			bool const failF_FROZEN_OF_RC1_fail_DC = false;
			bool const force_relevant_events_OF_RC4_fail = false;
			std::string const calculate_required_OF_RC2_fail = "fn_fathers_and_trig";
			double const lambda_OF_RC2_fail_DC = 0.01;
			bool const force_relevant_events_OF_Two_RC_fail = false;
			bool const force_relevant_events_OF_HC1_fail = false;
			double const mu_OF_HC4_fail = 0.1;
			double const lambda_OF_HC4_fail_DC = 0.0253;
			bool const force_relevant_events_OF_RC4_fail_DC = false;
			double const mu_OF_HC1_fail_DC = 0.1;
			bool const force_relevant_events_OF_HC_fail_DC = false;
			std::string const calculate_required_OF_HC3_fail_DC = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_RC_fail_DC = false;
			double const mu_OF_RC2_fail_DC = 0.1;
			bool const force_relevant_events_OF_HC2_fail_DC = false;
			double const lambda_OF_HC3_fail = 0.0253;
			bool const failF_FROZEN_OF_HC3_fail_DC = false;
			std::string const calculate_required_OF_RC3_fail = "fn_fathers_and_trig";
			double const mu_OF_HC4_fail_DC = 0.1;
			int const K_OF_Two_HC_fail = 2;
			std::string const calculate_required_OF_Two_RC_HC_fail_DC = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_RC1_fail_DC = false;
			std::string const calculate_required_OF_UE_1 = "fn_fathers_and_trig";
			bool const repairable_system_OF_OPTIONS = false;
			bool const failF_FROZEN_OF_RC4_fail = false;
			double const mu_OF_HC3_fail = 0.1;
			std::string const calculate_required_OF_HC2_fail = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_RC2_fail = false;
			bool const trimming_OF_OPTIONS = true;
			bool const failF_FROZEN_OF_HC1_fail = false;
			bool const failF_FROZEN_OF_RC4_fail_DC = false;
			bool const trim_article_OF___ARBRE__EIRM = false;
			std::string const trimming_option_OF_OPTIONS = "maximum";
			bool const force_relevant_events_OF_HC3_fail_DC = false;
			bool const failF_FROZEN_OF_HC2_fail_DC = false;
			std::string const calculate_required_OF_HC4_fail = "fn_fathers_and_trig";
			std::string const calculate_required_OF_HC1_fail_DC = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_RC3_fail = false;
			std::string const calculate_required_OF_RC2_fail_DC = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_Two_RC_HC_fail_DC = false;
			bool const failF_FROZEN_OF_HC4_fail = false;
			double const lambda_OF_RC3_fail_DC = 0.01;
			std::string const calculate_required_OF_HC4_fail_DC = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_RC2_fail = false;
			bool const failF_FROZEN_OF_RC2_fail_DC = false;
			bool const force_relevant_events_OF_HC2_fail = false;
			bool const failF_FROZEN_OF_HC4_fail_DC = false;
			bool const force_relevant_events_OF_UE_1 = true;
			std::string const calculate_required_OF_HC3_fail = "fn_fathers_and_trig";
			double const mu_OF_RC3_fail_DC = 0.1;
			bool const Profil1_OF___ARBRE__EIRM = true;
			double const mu_OF_RC1_fail = 0.1;
			bool const failF_FROZEN_OF_RC3_fail = false;
			bool const force_relevant_events_OF_HC4_fail = false;
			bool const force_relevant_events_OF_HC1_fail_DC = false;
			std::string const calculate_required_OF_System = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_RC2_fail_DC = false;
			bool const failF_FROZEN_OF_HC2_fail = false;
			bool const force_relevant_events_OF_HC4_fail_DC = false;
			int const K_OF_Two_RC_fail = 2;
			std::string const calculate_required_OF_Two_HC_fail = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_HC3_fail = false;
			bool const no_trim_OF___ARBRE__EIRM = false;
			std::string const calculate_required_OF_RC3_fail_DC = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_HC1_fail_DC = false;
			std::string const calculate_required_OF_RC1_fail = "fn_fathers_and_trig";
			double const lambda_OF_RC1_fail = 0.01;
			bool const force_relevant_events_OF_System = false;
			bool const failF_FROZEN_OF_RC3_fail_DC = false;
			double const lambda_OF_HC1_fail = 0.0253;
			double const lambda_OF_RC4_fail_DC = 0.01;
			double const mu_OF_RC4_fail = 0.1;
			bool const failF_FROZEN_OF_HC3_fail = false;
			bool const force_relevant_events_OF_Two_HC_fail = false;
			double const mu_OF_HC1_fail = 0.1;
			double const mu_OF_RC4_fail_DC = 0.1;
			double const lambda_OF_RC1_fail_DC = 0.01;
			bool const force_relevant_events_OF_RC3_fail_DC = false;
			bool const force_relevant_events_OF_RC1_fail = false;
			double const mu_OF_HC2_fail_DC = 0.1;
			double const lambda_OF_RC2_fail = 0.01;
			double const mu_OF_RC1_fail_DC = 0.1;
			double const lambda_OF_HC3_fail_DC = 0.0253;
			double const mu_OF_RC2_fail = 0.1;
			std::string const calculate_required_OF_RC4_fail = "fn_fathers_and_trig";
			double const lambda_OF_RC3_fail = 0.01;
			double const lambda_OF_RC4_fail = 0.01;
			double const mu_OF_HC3_fail_DC = 0.1;
			bool const failF_FROZEN_OF_RC1_fail = false;
			std::string const calculate_required_OF_Two_RC_fail = "fn_fathers_and_trig";
			std::string const calculate_required_OF_HC1_fail = "fn_fathers_and_trig";
			std::string const calculate_required_OF_RC4_fail_DC = "fn_fathers_and_trig";
			std::string const calculate_required_OF_HC_fail_DC = "fn_fathers_and_trig";
			double const lambda_OF_HC2_fail = 0.0253;
			double const mu_OF_RC3_fail = 0.1;
			bool const no_repair_OF___ARBRE__EIRM = true;
			std::string const calculate_required_OF_RC_fail_DC = "fn_fathers_and_trig";
			std::string const calculate_required_OF_HC2_fail_DC = "fn_fathers_and_trig";
			double const lambda_OF_HC2_fail_DC = 0.0253;
			double const mu_OF_HC2_fail = 0.1;
			std::string const calculate_required_OF_RC1_fail_DC = "fn_fathers_and_trig";
		
            /* ---------- DECLARATION OF OCCURRENCE RULES FIRING FLAGS ------------ */
            bool FIRE_xx10_OF_HC1_fail;
            bool FIRE_xx10_OF_HC1_fail_DC;
            bool FIRE_xx10_OF_HC2_fail;
            bool FIRE_xx10_OF_HC2_fail_DC;
            bool FIRE_xx10_OF_HC3_fail;
            bool FIRE_xx10_OF_HC3_fail_DC;
            bool FIRE_xx10_OF_HC4_fail;
            bool FIRE_xx10_OF_HC4_fail_DC;
            bool FIRE_xx10_OF_RC1_fail;
            bool FIRE_xx10_OF_RC1_fail_DC;
            bool FIRE_xx10_OF_RC2_fail;
            bool FIRE_xx10_OF_RC2_fail_DC;
            bool FIRE_xx10_OF_RC3_fail;
            bool FIRE_xx10_OF_RC3_fail_DC;
            bool FIRE_xx10_OF_RC4_fail;
            bool FIRE_xx10_OF_RC4_fail_DC;

            int required_OF_HC1_fail = 0 ;
            int already_S_OF_HC1_fail = 1 ;
            int S_OF_HC1_fail = 2 ;
            int relevant_evt_OF_HC1_fail = 3 ;
            int failF_OF_HC1_fail = 4 ;
            int required_OF_HC1_fail_DC = 5 ;
            int already_S_OF_HC1_fail_DC = 6 ;
            int S_OF_HC1_fail_DC = 7 ;
            int relevant_evt_OF_HC1_fail_DC = 8 ;
            int failF_OF_HC1_fail_DC = 9 ;
            int required_OF_HC2_fail = 10 ;
            int already_S_OF_HC2_fail = 11 ;
            int S_OF_HC2_fail = 12 ;
            int relevant_evt_OF_HC2_fail = 13 ;
            int failF_OF_HC2_fail = 14 ;
            int required_OF_HC2_fail_DC = 15 ;
            int already_S_OF_HC2_fail_DC = 16 ;
            int S_OF_HC2_fail_DC = 17 ;
            int relevant_evt_OF_HC2_fail_DC = 18 ;
            int failF_OF_HC2_fail_DC = 19 ;
            int required_OF_HC3_fail = 20 ;
            int already_S_OF_HC3_fail = 21 ;
            int S_OF_HC3_fail = 22 ;
            int relevant_evt_OF_HC3_fail = 23 ;
            int failF_OF_HC3_fail = 24 ;
            int required_OF_HC3_fail_DC = 25 ;
            int already_S_OF_HC3_fail_DC = 26 ;
            int S_OF_HC3_fail_DC = 27 ;
            int relevant_evt_OF_HC3_fail_DC = 28 ;
            int failF_OF_HC3_fail_DC = 29 ;
            int required_OF_HC4_fail = 30 ;
            int already_S_OF_HC4_fail = 31 ;
            int S_OF_HC4_fail = 32 ;
            int relevant_evt_OF_HC4_fail = 33 ;
            int failF_OF_HC4_fail = 34 ;
            int required_OF_HC4_fail_DC = 35 ;
            int already_S_OF_HC4_fail_DC = 36 ;
            int S_OF_HC4_fail_DC = 37 ;
            int relevant_evt_OF_HC4_fail_DC = 38 ;
            int failF_OF_HC4_fail_DC = 39 ;
            int required_OF_HC_fail_DC = 40 ;
            int already_S_OF_HC_fail_DC = 41 ;
            int S_OF_HC_fail_DC = 42 ;
            int relevant_evt_OF_HC_fail_DC = 43 ;
            int required_OF_RC1_fail = 44 ;
            int already_S_OF_RC1_fail = 45 ;
            int S_OF_RC1_fail = 46 ;
            int relevant_evt_OF_RC1_fail = 47 ;
            int failF_OF_RC1_fail = 48 ;
            int required_OF_RC1_fail_DC = 49 ;
            int already_S_OF_RC1_fail_DC = 50 ;
            int S_OF_RC1_fail_DC = 51 ;
            int relevant_evt_OF_RC1_fail_DC = 52 ;
            int failF_OF_RC1_fail_DC = 53 ;
            int required_OF_RC2_fail = 54 ;
            int already_S_OF_RC2_fail = 55 ;
            int S_OF_RC2_fail = 56 ;
            int relevant_evt_OF_RC2_fail = 57 ;
            int failF_OF_RC2_fail = 58 ;
            int required_OF_RC2_fail_DC = 59 ;
            int already_S_OF_RC2_fail_DC = 60 ;
            int S_OF_RC2_fail_DC = 61 ;
            int relevant_evt_OF_RC2_fail_DC = 62 ;
            int failF_OF_RC2_fail_DC = 63 ;
            int required_OF_RC3_fail = 64 ;
            int already_S_OF_RC3_fail = 65 ;
            int S_OF_RC3_fail = 66 ;
            int relevant_evt_OF_RC3_fail = 67 ;
            int failF_OF_RC3_fail = 68 ;
            int required_OF_RC3_fail_DC = 69 ;
            int already_S_OF_RC3_fail_DC = 70 ;
            int S_OF_RC3_fail_DC = 71 ;
            int relevant_evt_OF_RC3_fail_DC = 72 ;
            int failF_OF_RC3_fail_DC = 73 ;
            int required_OF_RC4_fail = 74 ;
            int already_S_OF_RC4_fail = 75 ;
            int S_OF_RC4_fail = 76 ;
            int relevant_evt_OF_RC4_fail = 77 ;
            int failF_OF_RC4_fail = 78 ;
            int required_OF_RC4_fail_DC = 79 ;
            int already_S_OF_RC4_fail_DC = 80 ;
            int S_OF_RC4_fail_DC = 81 ;
            int relevant_evt_OF_RC4_fail_DC = 82 ;
            int failF_OF_RC4_fail_DC = 83 ;
            int required_OF_RC_fail_DC = 84 ;
            int already_S_OF_RC_fail_DC = 85 ;
            int S_OF_RC_fail_DC = 86 ;
            int relevant_evt_OF_RC_fail_DC = 87 ;
            int required_OF_System = 88 ;
            int already_S_OF_System = 89 ;
            int S_OF_System = 90 ;
            int relevant_evt_OF_System = 91 ;
            int required_OF_Two_HC_fail = 92 ;
            int already_S_OF_Two_HC_fail = 93 ;
            int S_OF_Two_HC_fail = 94 ;
            int relevant_evt_OF_Two_HC_fail = 95 ;
            int required_OF_Two_RC_HC_fail_DC = 96 ;
            int already_S_OF_Two_RC_HC_fail_DC = 97 ;
            int S_OF_Two_RC_HC_fail_DC = 98 ;
            int relevant_evt_OF_Two_RC_HC_fail_DC = 99 ;
            int required_OF_Two_RC_fail = 100 ;
            int already_S_OF_Two_RC_fail = 101 ;
            int S_OF_Two_RC_fail = 102 ;
            int relevant_evt_OF_Two_RC_fail = 103 ;
            int required_OF_UE_1 = 104 ;
            int already_S_OF_UE_1 = 105 ;
            int S_OF_UE_1 = 106 ;
            int relevant_evt_OF_UE_1 = 107 ;




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