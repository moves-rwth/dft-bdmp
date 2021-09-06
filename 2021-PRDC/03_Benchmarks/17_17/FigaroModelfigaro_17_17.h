
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
        class FigaroProgram_figaro_17_17: public storm::figaro::FigaroProgram{
        public:
        FigaroProgram_figaro_17_17(): FigaroProgram(//            std::map<std::string, size_t> mFigaroboolelementindex =
                    {  
            	{"required_OF_A1" , 0},
            	{"already_S_OF_A1" , 1},
            	{"S_OF_A1" , 2},
            	{"relevant_evt_OF_A1" , 3},
            	{"failF_OF_A1" , 4},
            	{"required_OF_A10" , 5},
            	{"already_S_OF_A10" , 6},
            	{"S_OF_A10" , 7},
            	{"relevant_evt_OF_A10" , 8},
            	{"failI_OF_A10" , 9},
            	{"to_be_fired_OF_A10" , 10},
            	{"already_standby_OF_A10" , 11},
            	{"already_required_OF_A10" , 12},
            	{"required_OF_A11" , 13},
            	{"already_S_OF_A11" , 14},
            	{"S_OF_A11" , 15},
            	{"relevant_evt_OF_A11" , 16},
            	{"failF_OF_A11" , 17},
            	{"required_OF_A12" , 18},
            	{"already_S_OF_A12" , 19},
            	{"S_OF_A12" , 20},
            	{"relevant_evt_OF_A12" , 21},
            	{"failF_OF_A12" , 22},
            	{"required_OF_A13" , 23},
            	{"already_S_OF_A13" , 24},
            	{"S_OF_A13" , 25},
            	{"relevant_evt_OF_A13" , 26},
            	{"failI_OF_A13" , 27},
            	{"to_be_fired_OF_A13" , 28},
            	{"already_standby_OF_A13" , 29},
            	{"already_required_OF_A13" , 30},
            	{"required_OF_A14" , 31},
            	{"already_S_OF_A14" , 32},
            	{"S_OF_A14" , 33},
            	{"relevant_evt_OF_A14" , 34},
            	{"failI_OF_A14" , 35},
            	{"to_be_fired_OF_A14" , 36},
            	{"already_standby_OF_A14" , 37},
            	{"already_required_OF_A14" , 38},
            	{"required_OF_A15" , 39},
            	{"already_S_OF_A15" , 40},
            	{"S_OF_A15" , 41},
            	{"relevant_evt_OF_A15" , 42},
            	{"failF_OF_A15" , 43},
            	{"required_OF_A16" , 44},
            	{"already_S_OF_A16" , 45},
            	{"S_OF_A16" , 46},
            	{"relevant_evt_OF_A16" , 47},
            	{"failF_OF_A16" , 48},
            	{"required_OF_A17" , 49},
            	{"already_S_OF_A17" , 50},
            	{"S_OF_A17" , 51},
            	{"relevant_evt_OF_A17" , 52},
            	{"required_OF_A18" , 53},
            	{"already_S_OF_A18" , 54},
            	{"S_OF_A18" , 55},
            	{"relevant_evt_OF_A18" , 56},
            	{"required_OF_A19" , 57},
            	{"already_S_OF_A19" , 58},
            	{"S_OF_A19" , 59},
            	{"relevant_evt_OF_A19" , 60},
            	{"failF_OF_A19" , 61},
            	{"required_OF_A2" , 62},
            	{"already_S_OF_A2" , 63},
            	{"S_OF_A2" , 64},
            	{"relevant_evt_OF_A2" , 65},
            	{"failI_OF_A2" , 66},
            	{"to_be_fired_OF_A2" , 67},
            	{"already_standby_OF_A2" , 68},
            	{"already_required_OF_A2" , 69},
            	{"required_OF_A20" , 70},
            	{"already_S_OF_A20" , 71},
            	{"S_OF_A20" , 72},
            	{"relevant_evt_OF_A20" , 73},
            	{"failF_OF_A20" , 74},
            	{"required_OF_A21" , 75},
            	{"already_S_OF_A21" , 76},
            	{"S_OF_A21" , 77},
            	{"relevant_evt_OF_A21" , 78},
            	{"required_OF_A22" , 79},
            	{"already_S_OF_A22" , 80},
            	{"S_OF_A22" , 81},
            	{"relevant_evt_OF_A22" , 82},
            	{"required_OF_A23" , 83},
            	{"already_S_OF_A23" , 84},
            	{"S_OF_A23" , 85},
            	{"relevant_evt_OF_A23" , 86},
            	{"required_OF_A3" , 87},
            	{"already_S_OF_A3" , 88},
            	{"S_OF_A3" , 89},
            	{"relevant_evt_OF_A3" , 90},
            	{"failF_OF_A3" , 91},
            	{"required_OF_A4" , 92},
            	{"already_S_OF_A4" , 93},
            	{"S_OF_A4" , 94},
            	{"relevant_evt_OF_A4" , 95},
            	{"failI_OF_A4" , 96},
            	{"to_be_fired_OF_A4" , 97},
            	{"already_standby_OF_A4" , 98},
            	{"already_required_OF_A4" , 99},
            	{"required_OF_A5" , 100},
            	{"already_S_OF_A5" , 101},
            	{"S_OF_A5" , 102},
            	{"relevant_evt_OF_A5" , 103},
            	{"required_OF_A6" , 104},
            	{"already_S_OF_A6" , 105},
            	{"S_OF_A6" , 106},
            	{"relevant_evt_OF_A6" , 107},
            	{"required_OF_A7" , 108},
            	{"already_S_OF_A7" , 109},
            	{"S_OF_A7" , 110},
            	{"relevant_evt_OF_A7" , 111},
            	{"failF_OF_A7" , 112},
            	{"required_OF_A8" , 113},
            	{"already_S_OF_A8" , 114},
            	{"S_OF_A8" , 115},
            	{"relevant_evt_OF_A8" , 116},
            	{"required_OF_A9" , 117},
            	{"already_S_OF_A9" , 118},
            	{"S_OF_A9" , 119},
            	{"relevant_evt_OF_A9" , 120},
            	{"failI_OF_A9" , 121},
            	{"to_be_fired_OF_A9" , 122},
            	{"already_standby_OF_A9" , 123},
            	{"already_required_OF_A9" , 124},
            	{"required_OF_UE_1" , 125},
            	{"already_S_OF_UE_1" , 126},
            	{"S_OF_UE_1" , 127},
            	{"relevant_evt_OF_UE_1" , 128}},

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
                    129 ,
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
            bool REINITIALISATION_OF_required_OF_A1 ;
            bool REINITIALISATION_OF_S_OF_A1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A1 ;
            bool REINITIALISATION_OF_required_OF_A10 ;
            bool REINITIALISATION_OF_S_OF_A10 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A10 ;
            bool REINITIALISATION_OF_to_be_fired_OF_A10 ;
            bool REINITIALISATION_OF_required_OF_A11 ;
            bool REINITIALISATION_OF_S_OF_A11 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A11 ;
            bool REINITIALISATION_OF_required_OF_A12 ;
            bool REINITIALISATION_OF_S_OF_A12 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A12 ;
            bool REINITIALISATION_OF_required_OF_A13 ;
            bool REINITIALISATION_OF_S_OF_A13 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A13 ;
            bool REINITIALISATION_OF_to_be_fired_OF_A13 ;
            bool REINITIALISATION_OF_required_OF_A14 ;
            bool REINITIALISATION_OF_S_OF_A14 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A14 ;
            bool REINITIALISATION_OF_to_be_fired_OF_A14 ;
            bool REINITIALISATION_OF_required_OF_A15 ;
            bool REINITIALISATION_OF_S_OF_A15 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A15 ;
            bool REINITIALISATION_OF_required_OF_A16 ;
            bool REINITIALISATION_OF_S_OF_A16 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A16 ;
            bool REINITIALISATION_OF_required_OF_A17 ;
            bool REINITIALISATION_OF_S_OF_A17 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A17 ;
            bool REINITIALISATION_OF_required_OF_A18 ;
            bool REINITIALISATION_OF_S_OF_A18 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A18 ;
            bool REINITIALISATION_OF_required_OF_A19 ;
            bool REINITIALISATION_OF_S_OF_A19 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A19 ;
            bool REINITIALISATION_OF_required_OF_A2 ;
            bool REINITIALISATION_OF_S_OF_A2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A2 ;
            bool REINITIALISATION_OF_to_be_fired_OF_A2 ;
            bool REINITIALISATION_OF_required_OF_A20 ;
            bool REINITIALISATION_OF_S_OF_A20 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A20 ;
            bool REINITIALISATION_OF_required_OF_A21 ;
            bool REINITIALISATION_OF_S_OF_A21 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A21 ;
            bool REINITIALISATION_OF_required_OF_A22 ;
            bool REINITIALISATION_OF_S_OF_A22 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A22 ;
            bool REINITIALISATION_OF_required_OF_A23 ;
            bool REINITIALISATION_OF_S_OF_A23 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A23 ;
            bool REINITIALISATION_OF_required_OF_A3 ;
            bool REINITIALISATION_OF_S_OF_A3 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A3 ;
            bool REINITIALISATION_OF_required_OF_A4 ;
            bool REINITIALISATION_OF_S_OF_A4 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A4 ;
            bool REINITIALISATION_OF_to_be_fired_OF_A4 ;
            bool REINITIALISATION_OF_required_OF_A5 ;
            bool REINITIALISATION_OF_S_OF_A5 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A5 ;
            bool REINITIALISATION_OF_required_OF_A6 ;
            bool REINITIALISATION_OF_S_OF_A6 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A6 ;
            bool REINITIALISATION_OF_required_OF_A7 ;
            bool REINITIALISATION_OF_S_OF_A7 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A7 ;
            bool REINITIALISATION_OF_required_OF_A8 ;
            bool REINITIALISATION_OF_S_OF_A8 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A8 ;
            bool REINITIALISATION_OF_required_OF_A9 ;
            bool REINITIALISATION_OF_S_OF_A9 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A9 ;
            bool REINITIALISATION_OF_to_be_fired_OF_A9 ;
            bool REINITIALISATION_OF_required_OF_UE_1 ;
            bool REINITIALISATION_OF_S_OF_UE_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_UE_1 ;
            
		/* ---------- DECLARATION OF CONSTANTS ------------ */
			double const mu_OF_A2 = 0.1;
			double const mu_OF_A7 = 0.1;
			double const gamma_OF_A4 = 0.5;
			bool const force_relevant_events_OF_A18 = false;
			std::string const calculate_required_OF_A20 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A21 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A14 = "fn_fathers_and_trig";
			std::string const trimming_option_OF_OPTIONS = "maximum";
			bool const force_relevant_events_OF_A10 = false;
			std::string const calculate_required_OF_A16 = "fn_fathers_and_trig";
			std::string const trigger_kind_OF_t_1 = "fn_fathers_and_trig";
			double const gamma_OF_A14 = 0.5;
			std::string const calculate_required_OF_A17 = "fn_fathers_and_trig";
			double const lambda_OF_A15 = 0.01;
			std::string const calculate_required_OF_A19 = "fn_fathers_and_trig";
			double const mu_OF_A14 = 0.1;
			std::string const when_to_check_OF_A10 = "not_req_to_req";
			bool const failI_FROZEN_OF_A4 = false;
			std::string const trigger_kind_OF_t_2 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_A7 = false;
			bool const trimming_OF_OPTIONS = false;
			bool const failF_FROZEN_OF_A1 = false;
			std::string const calculate_required_OF_A10 = "fn_fathers_and_trig";
			double const mu_OF_A19 = 0.1;
			bool const force_relevant_events_OF_A23 = false;
			double const gamma_OF_A10 = 0.5;
			bool const force_relevant_events_OF_A3 = false;
			bool const failF_FROZEN_OF_A20 = false;
			bool const force_relevant_events_OF_A22 = false;
			std::string const calculate_required_OF_A12 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_A16 = false;
			double const mu_OF_A1 = 0.1;
			double const mu_OF_A4 = 0.1;
			std::string const calculate_required_OF_UE_1 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_A19 = false;
			bool const force_relevant_events_OF_A11 = false;
			double const mu_OF_A12 = 0.1;
			double const mu_OF_A20 = 0.1;
			double const lambda_OF_A7 = 0.01;
			bool const failI_FROZEN_OF_A10 = false;
			std::string const calculate_required_OF_A23 = "fn_fathers_and_trig";
			bool const Profil1_OF___ARBRE__EIRM = true;
			std::string const calculate_required_OF_A3 = "fn_fathers_and_trig";
			double const mu_OF_A16 = 0.1;
			double const lambda_OF_A1 = 0.01;
			std::string const calculate_required_OF_A22 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A18 = "fn_fathers_and_trig";
			double const mu_OF_A3 = 0.1;
			std::string const trigger_kind_OF_t_3_1 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A8 = false;
			double const lambda_OF_A20 = 0.01;
			std::string const calculate_required_OF_A11 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A15 = false;
			bool const failF_FROZEN_OF_A12 = false;
			double const lambda_OF_A16 = 0.01;
			bool const force_relevant_events_OF_A7 = false;
			double const mu_OF_A10 = 0.1;
			double const lambda_OF_A19 = 0.01;
			bool const force_relevant_events_OF_UE_1 = true;
			bool const force_relevant_events_OF_A9 = false;
			bool const failF_FROZEN_OF_A3 = false;
			std::string const calculate_required_OF_A8 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A15 = "fn_fathers_and_trig";
			bool const failI_FROZEN_OF_A9 = false;
			std::string const when_to_check_OF_A9 = "not_req_to_req";
			bool const force_relevant_events_OF_A5 = false;
			bool const repairable_system_OF_OPTIONS = true;
			double const mu_OF_A15 = 0.1;
			bool const failF_FROZEN_OF_A11 = false;
			double const lambda_OF_A12 = 0.01;
			std::string const calculate_required_OF_A6 = "always_false";
			std::string const calculate_required_OF_A9 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A13 = false;
			bool const force_relevant_events_OF_A2 = false;
			double const gamma_OF_A9 = 0.5;
			std::string const trigger_kind_OF_t_3 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A1 = false;
			bool const failI_FROZEN_OF_A13 = false;
			bool const force_relevant_events_OF_A4 = false;
			std::string const when_to_check_OF_A13 = "not_req_to_req";
			double const mu_OF_A9 = 0.1;
			bool const failI_FROZEN_OF_A2 = false;
			double const mu_OF_A11 = 0.1;
			double const lambda_OF_A3 = 0.01;
			std::string const calculate_required_OF_A5 = "fn_fathers_and_trig";
			std::string const when_to_check_OF_A2 = "not_req_to_req";
			bool const failF_FROZEN_OF_A15 = false;
			bool const force_relevant_events_OF_A12 = false;
			bool const force_relevant_events_OF_A20 = false;
			std::string const when_to_check_OF_A4 = "not_req_to_req";
			std::string const calculate_required_OF_A13 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A21 = false;
			bool const force_relevant_events_OF_A14 = false;
			bool const force_relevant_events_OF_A16 = false;
			std::string const calculate_required_OF_A2 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A7 = "fn_fathers_and_trig";
			double const gamma_OF_A13 = 0.5;
			double const lambda_OF_A11 = 0.01;
			bool const force_relevant_events_OF_A17 = false;
			std::string const calculate_required_OF_A1 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A4 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A6 = false;
			bool const failI_FROZEN_OF_A14 = false;
			double const gamma_OF_A2 = 0.5;
			double const mu_OF_A13 = 0.1;
			std::string const when_to_check_OF_A14 = "not_req_to_req";
			bool const force_relevant_events_OF_A19 = false;
		
            /* ---------- DECLARATION OF OCCURRENCE RULES FIRING FLAGS ------------ */
            bool FIRE_xx10_OF_A1;
            bool FIRE_xx11_OF_A1;
            bool FIRE_xx23_OF_A10_INS_2;
            bool FIRE_xx23_OF_A10_INS_3;
            bool FIRE_xx24_OF_A10;
            bool FIRE_xx10_OF_A11;
            bool FIRE_xx11_OF_A11;
            bool FIRE_xx10_OF_A12;
            bool FIRE_xx11_OF_A12;
            bool FIRE_xx23_OF_A13_INS_9;
            bool FIRE_xx23_OF_A13_INS_10;
            bool FIRE_xx24_OF_A13;
            bool FIRE_xx23_OF_A14_INS_12;
            bool FIRE_xx23_OF_A14_INS_13;
            bool FIRE_xx24_OF_A14;
            bool FIRE_xx10_OF_A15;
            bool FIRE_xx11_OF_A15;
            bool FIRE_xx10_OF_A16;
            bool FIRE_xx11_OF_A16;
            bool FIRE_xx10_OF_A19;
            bool FIRE_xx11_OF_A19;
            bool FIRE_xx23_OF_A2_INS_21;
            bool FIRE_xx23_OF_A2_INS_22;
            bool FIRE_xx24_OF_A2;
            bool FIRE_xx10_OF_A20;
            bool FIRE_xx11_OF_A20;
            bool FIRE_xx10_OF_A3;
            bool FIRE_xx11_OF_A3;
            bool FIRE_xx23_OF_A4_INS_28;
            bool FIRE_xx23_OF_A4_INS_29;
            bool FIRE_xx24_OF_A4;
            bool FIRE_xx10_OF_A7;
            bool FIRE_xx11_OF_A7;
            bool FIRE_xx23_OF_A9_INS_33;
            bool FIRE_xx23_OF_A9_INS_34;
            bool FIRE_xx24_OF_A9;

            int required_OF_A1 = 0 ;
            int already_S_OF_A1 = 1 ;
            int S_OF_A1 = 2 ;
            int relevant_evt_OF_A1 = 3 ;
            int failF_OF_A1 = 4 ;
            int required_OF_A10 = 5 ;
            int already_S_OF_A10 = 6 ;
            int S_OF_A10 = 7 ;
            int relevant_evt_OF_A10 = 8 ;
            int failI_OF_A10 = 9 ;
            int to_be_fired_OF_A10 = 10 ;
            int already_standby_OF_A10 = 11 ;
            int already_required_OF_A10 = 12 ;
            int required_OF_A11 = 13 ;
            int already_S_OF_A11 = 14 ;
            int S_OF_A11 = 15 ;
            int relevant_evt_OF_A11 = 16 ;
            int failF_OF_A11 = 17 ;
            int required_OF_A12 = 18 ;
            int already_S_OF_A12 = 19 ;
            int S_OF_A12 = 20 ;
            int relevant_evt_OF_A12 = 21 ;
            int failF_OF_A12 = 22 ;
            int required_OF_A13 = 23 ;
            int already_S_OF_A13 = 24 ;
            int S_OF_A13 = 25 ;
            int relevant_evt_OF_A13 = 26 ;
            int failI_OF_A13 = 27 ;
            int to_be_fired_OF_A13 = 28 ;
            int already_standby_OF_A13 = 29 ;
            int already_required_OF_A13 = 30 ;
            int required_OF_A14 = 31 ;
            int already_S_OF_A14 = 32 ;
            int S_OF_A14 = 33 ;
            int relevant_evt_OF_A14 = 34 ;
            int failI_OF_A14 = 35 ;
            int to_be_fired_OF_A14 = 36 ;
            int already_standby_OF_A14 = 37 ;
            int already_required_OF_A14 = 38 ;
            int required_OF_A15 = 39 ;
            int already_S_OF_A15 = 40 ;
            int S_OF_A15 = 41 ;
            int relevant_evt_OF_A15 = 42 ;
            int failF_OF_A15 = 43 ;
            int required_OF_A16 = 44 ;
            int already_S_OF_A16 = 45 ;
            int S_OF_A16 = 46 ;
            int relevant_evt_OF_A16 = 47 ;
            int failF_OF_A16 = 48 ;
            int required_OF_A17 = 49 ;
            int already_S_OF_A17 = 50 ;
            int S_OF_A17 = 51 ;
            int relevant_evt_OF_A17 = 52 ;
            int required_OF_A18 = 53 ;
            int already_S_OF_A18 = 54 ;
            int S_OF_A18 = 55 ;
            int relevant_evt_OF_A18 = 56 ;
            int required_OF_A19 = 57 ;
            int already_S_OF_A19 = 58 ;
            int S_OF_A19 = 59 ;
            int relevant_evt_OF_A19 = 60 ;
            int failF_OF_A19 = 61 ;
            int required_OF_A2 = 62 ;
            int already_S_OF_A2 = 63 ;
            int S_OF_A2 = 64 ;
            int relevant_evt_OF_A2 = 65 ;
            int failI_OF_A2 = 66 ;
            int to_be_fired_OF_A2 = 67 ;
            int already_standby_OF_A2 = 68 ;
            int already_required_OF_A2 = 69 ;
            int required_OF_A20 = 70 ;
            int already_S_OF_A20 = 71 ;
            int S_OF_A20 = 72 ;
            int relevant_evt_OF_A20 = 73 ;
            int failF_OF_A20 = 74 ;
            int required_OF_A21 = 75 ;
            int already_S_OF_A21 = 76 ;
            int S_OF_A21 = 77 ;
            int relevant_evt_OF_A21 = 78 ;
            int required_OF_A22 = 79 ;
            int already_S_OF_A22 = 80 ;
            int S_OF_A22 = 81 ;
            int relevant_evt_OF_A22 = 82 ;
            int required_OF_A23 = 83 ;
            int already_S_OF_A23 = 84 ;
            int S_OF_A23 = 85 ;
            int relevant_evt_OF_A23 = 86 ;
            int required_OF_A3 = 87 ;
            int already_S_OF_A3 = 88 ;
            int S_OF_A3 = 89 ;
            int relevant_evt_OF_A3 = 90 ;
            int failF_OF_A3 = 91 ;
            int required_OF_A4 = 92 ;
            int already_S_OF_A4 = 93 ;
            int S_OF_A4 = 94 ;
            int relevant_evt_OF_A4 = 95 ;
            int failI_OF_A4 = 96 ;
            int to_be_fired_OF_A4 = 97 ;
            int already_standby_OF_A4 = 98 ;
            int already_required_OF_A4 = 99 ;
            int required_OF_A5 = 100 ;
            int already_S_OF_A5 = 101 ;
            int S_OF_A5 = 102 ;
            int relevant_evt_OF_A5 = 103 ;
            int required_OF_A6 = 104 ;
            int already_S_OF_A6 = 105 ;
            int S_OF_A6 = 106 ;
            int relevant_evt_OF_A6 = 107 ;
            int required_OF_A7 = 108 ;
            int already_S_OF_A7 = 109 ;
            int S_OF_A7 = 110 ;
            int relevant_evt_OF_A7 = 111 ;
            int failF_OF_A7 = 112 ;
            int required_OF_A8 = 113 ;
            int already_S_OF_A8 = 114 ;
            int S_OF_A8 = 115 ;
            int relevant_evt_OF_A8 = 116 ;
            int required_OF_A9 = 117 ;
            int already_S_OF_A9 = 118 ;
            int S_OF_A9 = 119 ;
            int relevant_evt_OF_A9 = 120 ;
            int failI_OF_A9 = 121 ;
            int to_be_fired_OF_A9 = 122 ;
            int already_standby_OF_A9 = 123 ;
            int already_required_OF_A9 = 124 ;
            int required_OF_UE_1 = 125 ;
            int already_S_OF_UE_1 = 126 ;
            int S_OF_UE_1 = 127 ;
            int relevant_evt_OF_UE_1 = 128 ;




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