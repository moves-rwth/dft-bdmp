
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
        class FigaroProgram_DuelProcessorReactorRegulation_No_trim_repair: public storm::figaro::FigaroProgram{
        public:
        FigaroProgram_DuelProcessorReactorRegulation_No_trim_repair(): FigaroProgram(//            std::map<std::string, size_t> mFigaroboolelementindex =
                    {  
            	{"required_OF_ADA27_A" , 0},
            	{"already_S_OF_ADA27_A" , 1},
            	{"S_OF_ADA27_A" , 2},
            	{"relevant_evt_OF_ADA27_A" , 3},
            	{"failF_OF_ADA27_A" , 4},
            	{"required_OF_ADA27_B" , 5},
            	{"already_S_OF_ADA27_B" , 6},
            	{"S_OF_ADA27_B" , 7},
            	{"relevant_evt_OF_ADA27_B" , 8},
            	{"failF_OF_ADA27_B" , 9},
            	{"required_OF_ANAMB_P16_A" , 10},
            	{"already_S_OF_ANAMB_P16_A" , 11},
            	{"S_OF_ANAMB_P16_A" , 12},
            	{"relevant_evt_OF_ANAMB_P16_A" , 13},
            	{"failF_OF_ANAMB_P16_A" , 14},
            	{"required_OF_ANAMB_P16_B" , 15},
            	{"already_S_OF_ANAMB_P16_B" , 16},
            	{"S_OF_ANAMB_P16_B" , 17},
            	{"relevant_evt_OF_ANAMB_P16_B" , 18},
            	{"failF_OF_ANAMB_P16_B" , 19},
            	{"required_OF_ANAMB_P17_A" , 20},
            	{"already_S_OF_ANAMB_P17_A" , 21},
            	{"S_OF_ANAMB_P17_A" , 22},
            	{"relevant_evt_OF_ANAMB_P17_A" , 23},
            	{"failF_OF_ANAMB_P17_A" , 24},
            	{"required_OF_ANAMB_P17_B" , 25},
            	{"already_S_OF_ANAMB_P17_B" , 26},
            	{"S_OF_ANAMB_P17_B" , 27},
            	{"relevant_evt_OF_ANAMB_P17_B" , 28},
            	{"failF_OF_ANAMB_P17_B" , 29},
            	{"required_OF_CPU86_102_A" , 30},
            	{"already_S_OF_CPU86_102_A" , 31},
            	{"S_OF_CPU86_102_A" , 32},
            	{"relevant_evt_OF_CPU86_102_A" , 33},
            	{"failF_OF_CPU86_102_A" , 34},
            	{"required_OF_CPU86_102_B" , 35},
            	{"already_S_OF_CPU86_102_B" , 36},
            	{"S_OF_CPU86_102_B" , 37},
            	{"relevant_evt_OF_CPU86_102_B" , 38},
            	{"failF_OF_CPU86_102_B" , 39},
            	{"required_OF_CPU86_105_A" , 40},
            	{"already_S_OF_CPU86_105_A" , 41},
            	{"S_OF_CPU86_105_A" , 42},
            	{"relevant_evt_OF_CPU86_105_A" , 43},
            	{"failF_OF_CPU86_105_A" , 44},
            	{"required_OF_CPU86_105_B" , 45},
            	{"already_S_OF_CPU86_105_B" , 46},
            	{"S_OF_CPU86_105_B" , 47},
            	{"relevant_evt_OF_CPU86_105_B" , 48},
            	{"failF_OF_CPU86_105_B" , 49},
            	{"required_OF_CTU" , 50},
            	{"already_S_OF_CTU" , 51},
            	{"S_OF_CTU" , 52},
            	{"relevant_evt_OF_CTU" , 53},
            	{"failF_OF_CTU" , 54},
            	{"required_OF_DIFIT31_A" , 55},
            	{"already_S_OF_DIFIT31_A" , 56},
            	{"S_OF_DIFIT31_A" , 57},
            	{"relevant_evt_OF_DIFIT31_A" , 58},
            	{"failF_OF_DIFIT31_A" , 59},
            	{"required_OF_DIFIT31_B" , 60},
            	{"already_S_OF_DIFIT31_B" , 61},
            	{"S_OF_DIFIT31_B" , 62},
            	{"relevant_evt_OF_DIFIT31_B" , 63},
            	{"failF_OF_DIFIT31_B" , 64},
            	{"required_OF_DIFIT32_A" , 65},
            	{"already_S_OF_DIFIT32_A" , 66},
            	{"S_OF_DIFIT32_A" , 67},
            	{"relevant_evt_OF_DIFIT32_A" , 68},
            	{"failF_OF_DIFIT32_A" , 69},
            	{"required_OF_DIFIT32_B" , 70},
            	{"already_S_OF_DIFIT32_B" , 71},
            	{"S_OF_DIFIT32_B" , 72},
            	{"relevant_evt_OF_DIFIT32_B" , 73},
            	{"failF_OF_DIFIT32_B" , 74},
            	{"required_OF_DOSC_1_DCHS4_A" , 75},
            	{"already_S_OF_DOSC_1_DCHS4_A" , 76},
            	{"S_OF_DOSC_1_DCHS4_A" , 77},
            	{"relevant_evt_OF_DOSC_1_DCHS4_A" , 78},
            	{"failF_OF_DOSC_1_DCHS4_A" , 79},
            	{"required_OF_DOSC_1_DCHS4_B" , 80},
            	{"already_S_OF_DOSC_1_DCHS4_B" , 81},
            	{"S_OF_DOSC_1_DCHS4_B" , 82},
            	{"relevant_evt_OF_DOSC_1_DCHS4_B" , 83},
            	{"failF_OF_DOSC_1_DCHS4_B" , 84},
            	{"required_OF_DOSC_1_DCHS5_A" , 85},
            	{"already_S_OF_DOSC_1_DCHS5_A" , 86},
            	{"S_OF_DOSC_1_DCHS5_A" , 87},
            	{"relevant_evt_OF_DOSC_1_DCHS5_A" , 88},
            	{"failF_OF_DOSC_1_DCHS5_A" , 89},
            	{"required_OF_DOSC_1_DCHS5_B" , 90},
            	{"already_S_OF_DOSC_1_DCHS5_B" , 91},
            	{"S_OF_DOSC_1_DCHS5_B" , 92},
            	{"relevant_evt_OF_DOSC_1_DCHS5_B" , 93},
            	{"failF_OF_DOSC_1_DCHS5_B" , 94},
            	{"required_OF_DPBMB_P31_A" , 95},
            	{"already_S_OF_DPBMB_P31_A" , 96},
            	{"S_OF_DPBMB_P31_A" , 97},
            	{"relevant_evt_OF_DPBMB_P31_A" , 98},
            	{"failF_OF_DPBMB_P31_A" , 99},
            	{"required_OF_DPBMB_P31_B" , 100},
            	{"already_S_OF_DPBMB_P31_B" , 101},
            	{"S_OF_DPBMB_P31_B" , 102},
            	{"relevant_evt_OF_DPBMB_P31_B" , 103},
            	{"failF_OF_DPBMB_P31_B" , 104},
            	{"required_OF_DPBMB_P32_A" , 105},
            	{"already_S_OF_DPBMB_P32_A" , 106},
            	{"S_OF_DPBMB_P32_A" , 107},
            	{"relevant_evt_OF_DPBMB_P32_A" , 108},
            	{"failF_OF_DPBMB_P32_A" , 109},
            	{"required_OF_DPBMB_P32_B" , 110},
            	{"already_S_OF_DPBMB_P32_B" , 111},
            	{"S_OF_DPBMB_P32_B" , 112},
            	{"relevant_evt_OF_DPBMB_P32_B" , 113},
            	{"failF_OF_DPBMB_P32_B" , 114},
            	{"required_OF_HS_136F" , 115},
            	{"already_S_OF_HS_136F" , 116},
            	{"S_OF_HS_136F" , 117},
            	{"relevant_evt_OF_HS_136F" , 118},
            	{"failF_OF_HS_136F" , 119},
            	{"required_OF_HS_138F" , 120},
            	{"already_S_OF_HS_138F" , 121},
            	{"S_OF_HS_138F" , 122},
            	{"relevant_evt_OF_HS_138F" , 123},
            	{"failF_OF_HS_138F" , 124},
            	{"required_OF_HS_139F" , 125},
            	{"already_S_OF_HS_139F" , 126},
            	{"S_OF_HS_139F" , 127},
            	{"relevant_evt_OF_HS_139F" , 128},
            	{"failF_OF_HS_139F" , 129},
            	{"required_OF_ISOCTX31_A" , 130},
            	{"already_S_OF_ISOCTX31_A" , 131},
            	{"S_OF_ISOCTX31_A" , 132},
            	{"relevant_evt_OF_ISOCTX31_A" , 133},
            	{"failF_OF_ISOCTX31_A" , 134},
            	{"required_OF_ISOCTX31_B" , 135},
            	{"already_S_OF_ISOCTX31_B" , 136},
            	{"S_OF_ISOCTX31_B" , 137},
            	{"relevant_evt_OF_ISOCTX31_B" , 138},
            	{"failF_OF_ISOCTX31_B" , 139},
            	{"required_OF_ISOCTX32_A" , 140},
            	{"already_S_OF_ISOCTX32_A" , 141},
            	{"S_OF_ISOCTX32_A" , 142},
            	{"relevant_evt_OF_ISOCTX32_A" , 143},
            	{"failF_OF_ISOCTX32_A" , 144},
            	{"required_OF_ISOCTX32_B" , 145},
            	{"already_S_OF_ISOCTX32_B" , 146},
            	{"S_OF_ISOCTX32_B" , 147},
            	{"relevant_evt_OF_ISOCTX32_B" , 148},
            	{"failF_OF_ISOCTX32_B" , 149},
            	{"required_OF_MEM527_A" , 150},
            	{"already_S_OF_MEM527_A" , 151},
            	{"S_OF_MEM527_A" , 152},
            	{"relevant_evt_OF_MEM527_A" , 153},
            	{"failF_OF_MEM527_A" , 154},
            	{"required_OF_MEM527_B" , 155},
            	{"already_S_OF_MEM527_B" , 156},
            	{"S_OF_MEM527_B" , 157},
            	{"relevant_evt_OF_MEM527_B" , 158},
            	{"failF_OF_MEM527_B" , 159},
            	{"required_OF_OE" , 160},
            	{"already_S_OF_OE" , 161},
            	{"S_OF_OE" , 162},
            	{"relevant_evt_OF_OE" , 163},
            	{"failF_OF_OE" , 164},
            	{"required_OF_PROC_GATE_A" , 165},
            	{"already_S_OF_PROC_GATE_A" , 166},
            	{"S_OF_PROC_GATE_A" , 167},
            	{"relevant_evt_OF_PROC_GATE_A" , 168},
            	{"required_OF_PROC_GATE_B" , 169},
            	{"already_S_OF_PROC_GATE_B" , 170},
            	{"S_OF_PROC_GATE_B" , 171},
            	{"relevant_evt_OF_PROC_GATE_B" , 172},
            	{"required_OF_RLYS_1" , 173},
            	{"already_S_OF_RLYS_1" , 174},
            	{"S_OF_RLYS_1" , 175},
            	{"relevant_evt_OF_RLYS_1" , 176},
            	{"failF_OF_RLYS_1" , 177},
            	{"required_OF_RORB31_A" , 178},
            	{"already_S_OF_RORB31_A" , 179},
            	{"S_OF_RORB31_A" , 180},
            	{"relevant_evt_OF_RORB31_A" , 181},
            	{"failF_OF_RORB31_A" , 182},
            	{"required_OF_RORB31_B" , 183},
            	{"already_S_OF_RORB31_B" , 184},
            	{"S_OF_RORB31_B" , 185},
            	{"relevant_evt_OF_RORB31_B" , 186},
            	{"failF_OF_RORB31_B" , 187},
            	{"required_OF_RORB32_A" , 188},
            	{"already_S_OF_RORB32_A" , 189},
            	{"S_OF_RORB32_A" , 190},
            	{"relevant_evt_OF_RORB32_A" , 191},
            	{"failF_OF_RORB32_A" , 192},
            	{"required_OF_RORB32_B" , 193},
            	{"already_S_OF_RORB32_B" , 194},
            	{"S_OF_RORB32_B" , 195},
            	{"relevant_evt_OF_RORB32_B" , 196},
            	{"failF_OF_RORB32_B" , 197},
            	{"required_OF_SM_271_A" , 198},
            	{"already_S_OF_SM_271_A" , 199},
            	{"S_OF_SM_271_A" , 200},
            	{"relevant_evt_OF_SM_271_A" , 201},
            	{"failF_OF_SM_271_A" , 202},
            	{"required_OF_SM_271_B" , 203},
            	{"already_S_OF_SM_271_B" , 204},
            	{"S_OF_SM_271_B" , 205},
            	{"relevant_evt_OF_SM_271_B" , 206},
            	{"failF_OF_SM_271_B" , 207},
            	{"required_OF_RRS_Failure" , 208},
            	{"already_S_OF_RRS_Failure" , 209},
            	{"S_OF_RRS_Failure" , 210},
            	{"relevant_evt_OF_RRS_Failure" , 211},
            	{"required_OF_UE_1" , 212},
            	{"already_S_OF_UE_1" , 213},
            	{"S_OF_UE_1" , 214},
            	{"relevant_evt_OF_UE_1" , 215},
            	{"required_OF_Auto_Switching_Failure_A" , 216},
            	{"already_S_OF_Auto_Switching_Failure_A" , 217},
            	{"S_OF_Auto_Switching_Failure_A" , 218},
            	{"relevant_evt_OF_Auto_Switching_Failure_A" , 219},
            	{"required_OF_Auto_Switching_Failure_B" , 220},
            	{"already_S_OF_Auto_Switching_Failure_B" , 221},
            	{"S_OF_Auto_Switching_Failure_B" , 222},
            	{"relevant_evt_OF_Auto_Switching_Failure_B" , 223},
            	{"required_OF_Loss_Of_Control_in_Auto_Mode" , 224},
            	{"already_S_OF_Loss_Of_Control_in_Auto_Mode" , 225},
            	{"S_OF_Loss_Of_Control_in_Auto_Mode" , 226},
            	{"relevant_evt_OF_Loss_Of_Control_in_Auto_Mode" , 227},
            	{"required_OF_Loss_Of_Control_With_A" , 228},
            	{"already_S_OF_Loss_Of_Control_With_A" , 229},
            	{"S_OF_Loss_Of_Control_With_A" , 230},
            	{"relevant_evt_OF_Loss_Of_Control_With_A" , 231},
            	{"required_OF_Loss_Of_Control_With_B" , 232},
            	{"already_S_OF_Loss_Of_Control_With_B" , 233},
            	{"S_OF_Loss_Of_Control_With_B" , 234},
            	{"relevant_evt_OF_Loss_Of_Control_With_B" , 235},
            	{"required_OF_dummy" , 236},
            	{"already_S_OF_dummy" , 237},
            	{"S_OF_dummy" , 238},
            	{"relevant_evt_OF_dummy" , 239},
            	{"required_OF_A_B_Failure_Together" , 240},
            	{"already_S_OF_A_B_Failure_Together" , 241},
            	{"S_OF_A_B_Failure_Together" , 242},
            	{"relevant_evt_OF_A_B_Failure_Together" , 243},
            	{"required_OF_Hand_Switch_Failure" , 244},
            	{"already_S_OF_Hand_Switch_Failure" , 245},
            	{"S_OF_Hand_Switch_Failure" , 246},
            	{"relevant_evt_OF_Hand_Switch_Failure" , 247},
            	{"required_OF_System_A_Failure" , 248},
            	{"already_S_OF_System_A_Failure" , 249},
            	{"S_OF_System_A_Failure" , 250},
            	{"relevant_evt_OF_System_A_Failure" , 251},
            	{"required_OF_System_B_Failure" , 252},
            	{"already_S_OF_System_B_Failure" , 253},
            	{"S_OF_System_B_Failure" , 254},
            	{"relevant_evt_OF_System_B_Failure" , 255}},

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
                    256 ,
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
            bool REINITIALISATION_OF_required_OF_ADA27_A ;
            bool REINITIALISATION_OF_S_OF_ADA27_A ;
            bool REINITIALISATION_OF_relevant_evt_OF_ADA27_A ;
            bool REINITIALISATION_OF_required_OF_ADA27_B ;
            bool REINITIALISATION_OF_S_OF_ADA27_B ;
            bool REINITIALISATION_OF_relevant_evt_OF_ADA27_B ;
            bool REINITIALISATION_OF_required_OF_ANAMB_P16_A ;
            bool REINITIALISATION_OF_S_OF_ANAMB_P16_A ;
            bool REINITIALISATION_OF_relevant_evt_OF_ANAMB_P16_A ;
            bool REINITIALISATION_OF_required_OF_ANAMB_P16_B ;
            bool REINITIALISATION_OF_S_OF_ANAMB_P16_B ;
            bool REINITIALISATION_OF_relevant_evt_OF_ANAMB_P16_B ;
            bool REINITIALISATION_OF_required_OF_ANAMB_P17_A ;
            bool REINITIALISATION_OF_S_OF_ANAMB_P17_A ;
            bool REINITIALISATION_OF_relevant_evt_OF_ANAMB_P17_A ;
            bool REINITIALISATION_OF_required_OF_ANAMB_P17_B ;
            bool REINITIALISATION_OF_S_OF_ANAMB_P17_B ;
            bool REINITIALISATION_OF_relevant_evt_OF_ANAMB_P17_B ;
            bool REINITIALISATION_OF_required_OF_CPU86_102_A ;
            bool REINITIALISATION_OF_S_OF_CPU86_102_A ;
            bool REINITIALISATION_OF_relevant_evt_OF_CPU86_102_A ;
            bool REINITIALISATION_OF_required_OF_CPU86_102_B ;
            bool REINITIALISATION_OF_S_OF_CPU86_102_B ;
            bool REINITIALISATION_OF_relevant_evt_OF_CPU86_102_B ;
            bool REINITIALISATION_OF_required_OF_CPU86_105_A ;
            bool REINITIALISATION_OF_S_OF_CPU86_105_A ;
            bool REINITIALISATION_OF_relevant_evt_OF_CPU86_105_A ;
            bool REINITIALISATION_OF_required_OF_CPU86_105_B ;
            bool REINITIALISATION_OF_S_OF_CPU86_105_B ;
            bool REINITIALISATION_OF_relevant_evt_OF_CPU86_105_B ;
            bool REINITIALISATION_OF_required_OF_CTU ;
            bool REINITIALISATION_OF_S_OF_CTU ;
            bool REINITIALISATION_OF_relevant_evt_OF_CTU ;
            bool REINITIALISATION_OF_required_OF_DIFIT31_A ;
            bool REINITIALISATION_OF_S_OF_DIFIT31_A ;
            bool REINITIALISATION_OF_relevant_evt_OF_DIFIT31_A ;
            bool REINITIALISATION_OF_required_OF_DIFIT31_B ;
            bool REINITIALISATION_OF_S_OF_DIFIT31_B ;
            bool REINITIALISATION_OF_relevant_evt_OF_DIFIT31_B ;
            bool REINITIALISATION_OF_required_OF_DIFIT32_A ;
            bool REINITIALISATION_OF_S_OF_DIFIT32_A ;
            bool REINITIALISATION_OF_relevant_evt_OF_DIFIT32_A ;
            bool REINITIALISATION_OF_required_OF_DIFIT32_B ;
            bool REINITIALISATION_OF_S_OF_DIFIT32_B ;
            bool REINITIALISATION_OF_relevant_evt_OF_DIFIT32_B ;
            bool REINITIALISATION_OF_required_OF_DOSC_1_DCHS4_A ;
            bool REINITIALISATION_OF_S_OF_DOSC_1_DCHS4_A ;
            bool REINITIALISATION_OF_relevant_evt_OF_DOSC_1_DCHS4_A ;
            bool REINITIALISATION_OF_required_OF_DOSC_1_DCHS4_B ;
            bool REINITIALISATION_OF_S_OF_DOSC_1_DCHS4_B ;
            bool REINITIALISATION_OF_relevant_evt_OF_DOSC_1_DCHS4_B ;
            bool REINITIALISATION_OF_required_OF_DOSC_1_DCHS5_A ;
            bool REINITIALISATION_OF_S_OF_DOSC_1_DCHS5_A ;
            bool REINITIALISATION_OF_relevant_evt_OF_DOSC_1_DCHS5_A ;
            bool REINITIALISATION_OF_required_OF_DOSC_1_DCHS5_B ;
            bool REINITIALISATION_OF_S_OF_DOSC_1_DCHS5_B ;
            bool REINITIALISATION_OF_relevant_evt_OF_DOSC_1_DCHS5_B ;
            bool REINITIALISATION_OF_required_OF_DPBMB_P31_A ;
            bool REINITIALISATION_OF_S_OF_DPBMB_P31_A ;
            bool REINITIALISATION_OF_relevant_evt_OF_DPBMB_P31_A ;
            bool REINITIALISATION_OF_required_OF_DPBMB_P31_B ;
            bool REINITIALISATION_OF_S_OF_DPBMB_P31_B ;
            bool REINITIALISATION_OF_relevant_evt_OF_DPBMB_P31_B ;
            bool REINITIALISATION_OF_required_OF_DPBMB_P32_A ;
            bool REINITIALISATION_OF_S_OF_DPBMB_P32_A ;
            bool REINITIALISATION_OF_relevant_evt_OF_DPBMB_P32_A ;
            bool REINITIALISATION_OF_required_OF_DPBMB_P32_B ;
            bool REINITIALISATION_OF_S_OF_DPBMB_P32_B ;
            bool REINITIALISATION_OF_relevant_evt_OF_DPBMB_P32_B ;
            bool REINITIALISATION_OF_required_OF_HS_136F ;
            bool REINITIALISATION_OF_S_OF_HS_136F ;
            bool REINITIALISATION_OF_relevant_evt_OF_HS_136F ;
            bool REINITIALISATION_OF_required_OF_HS_138F ;
            bool REINITIALISATION_OF_S_OF_HS_138F ;
            bool REINITIALISATION_OF_relevant_evt_OF_HS_138F ;
            bool REINITIALISATION_OF_required_OF_HS_139F ;
            bool REINITIALISATION_OF_S_OF_HS_139F ;
            bool REINITIALISATION_OF_relevant_evt_OF_HS_139F ;
            bool REINITIALISATION_OF_required_OF_ISOCTX31_A ;
            bool REINITIALISATION_OF_S_OF_ISOCTX31_A ;
            bool REINITIALISATION_OF_relevant_evt_OF_ISOCTX31_A ;
            bool REINITIALISATION_OF_required_OF_ISOCTX31_B ;
            bool REINITIALISATION_OF_S_OF_ISOCTX31_B ;
            bool REINITIALISATION_OF_relevant_evt_OF_ISOCTX31_B ;
            bool REINITIALISATION_OF_required_OF_ISOCTX32_A ;
            bool REINITIALISATION_OF_S_OF_ISOCTX32_A ;
            bool REINITIALISATION_OF_relevant_evt_OF_ISOCTX32_A ;
            bool REINITIALISATION_OF_required_OF_ISOCTX32_B ;
            bool REINITIALISATION_OF_S_OF_ISOCTX32_B ;
            bool REINITIALISATION_OF_relevant_evt_OF_ISOCTX32_B ;
            bool REINITIALISATION_OF_required_OF_MEM527_A ;
            bool REINITIALISATION_OF_S_OF_MEM527_A ;
            bool REINITIALISATION_OF_relevant_evt_OF_MEM527_A ;
            bool REINITIALISATION_OF_required_OF_MEM527_B ;
            bool REINITIALISATION_OF_S_OF_MEM527_B ;
            bool REINITIALISATION_OF_relevant_evt_OF_MEM527_B ;
            bool REINITIALISATION_OF_required_OF_OE ;
            bool REINITIALISATION_OF_S_OF_OE ;
            bool REINITIALISATION_OF_relevant_evt_OF_OE ;
            bool REINITIALISATION_OF_required_OF_PROC_GATE_A ;
            bool REINITIALISATION_OF_S_OF_PROC_GATE_A ;
            bool REINITIALISATION_OF_relevant_evt_OF_PROC_GATE_A ;
            bool REINITIALISATION_OF_required_OF_PROC_GATE_B ;
            bool REINITIALISATION_OF_S_OF_PROC_GATE_B ;
            bool REINITIALISATION_OF_relevant_evt_OF_PROC_GATE_B ;
            bool REINITIALISATION_OF_required_OF_RLYS_1 ;
            bool REINITIALISATION_OF_S_OF_RLYS_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_RLYS_1 ;
            bool REINITIALISATION_OF_required_OF_RORB31_A ;
            bool REINITIALISATION_OF_S_OF_RORB31_A ;
            bool REINITIALISATION_OF_relevant_evt_OF_RORB31_A ;
            bool REINITIALISATION_OF_required_OF_RORB31_B ;
            bool REINITIALISATION_OF_S_OF_RORB31_B ;
            bool REINITIALISATION_OF_relevant_evt_OF_RORB31_B ;
            bool REINITIALISATION_OF_required_OF_RORB32_A ;
            bool REINITIALISATION_OF_S_OF_RORB32_A ;
            bool REINITIALISATION_OF_relevant_evt_OF_RORB32_A ;
            bool REINITIALISATION_OF_required_OF_RORB32_B ;
            bool REINITIALISATION_OF_S_OF_RORB32_B ;
            bool REINITIALISATION_OF_relevant_evt_OF_RORB32_B ;
            bool REINITIALISATION_OF_required_OF_SM_271_A ;
            bool REINITIALISATION_OF_S_OF_SM_271_A ;
            bool REINITIALISATION_OF_relevant_evt_OF_SM_271_A ;
            bool REINITIALISATION_OF_required_OF_SM_271_B ;
            bool REINITIALISATION_OF_S_OF_SM_271_B ;
            bool REINITIALISATION_OF_relevant_evt_OF_SM_271_B ;
            bool REINITIALISATION_OF_required_OF_RRS_Failure ;
            bool REINITIALISATION_OF_S_OF_RRS_Failure ;
            bool REINITIALISATION_OF_relevant_evt_OF_RRS_Failure ;
            bool REINITIALISATION_OF_required_OF_UE_1 ;
            bool REINITIALISATION_OF_S_OF_UE_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_UE_1 ;
            bool REINITIALISATION_OF_required_OF_Auto_Switching_Failure_A ;
            bool REINITIALISATION_OF_S_OF_Auto_Switching_Failure_A ;
            bool REINITIALISATION_OF_relevant_evt_OF_Auto_Switching_Failure_A ;
            bool REINITIALISATION_OF_required_OF_Auto_Switching_Failure_B ;
            bool REINITIALISATION_OF_S_OF_Auto_Switching_Failure_B ;
            bool REINITIALISATION_OF_relevant_evt_OF_Auto_Switching_Failure_B ;
            bool REINITIALISATION_OF_required_OF_Loss_Of_Control_in_Auto_Mode ;
            bool REINITIALISATION_OF_S_OF_Loss_Of_Control_in_Auto_Mode ;
            bool REINITIALISATION_OF_relevant_evt_OF_Loss_Of_Control_in_Auto_Mode ;
            bool REINITIALISATION_OF_required_OF_Loss_Of_Control_With_A ;
            bool REINITIALISATION_OF_S_OF_Loss_Of_Control_With_A ;
            bool REINITIALISATION_OF_relevant_evt_OF_Loss_Of_Control_With_A ;
            bool REINITIALISATION_OF_required_OF_Loss_Of_Control_With_B ;
            bool REINITIALISATION_OF_S_OF_Loss_Of_Control_With_B ;
            bool REINITIALISATION_OF_relevant_evt_OF_Loss_Of_Control_With_B ;
            bool REINITIALISATION_OF_required_OF_dummy ;
            bool REINITIALISATION_OF_S_OF_dummy ;
            bool REINITIALISATION_OF_relevant_evt_OF_dummy ;
            bool REINITIALISATION_OF_required_OF_A_B_Failure_Together ;
            bool REINITIALISATION_OF_S_OF_A_B_Failure_Together ;
            bool REINITIALISATION_OF_relevant_evt_OF_A_B_Failure_Together ;
            bool REINITIALISATION_OF_required_OF_Hand_Switch_Failure ;
            bool REINITIALISATION_OF_S_OF_Hand_Switch_Failure ;
            bool REINITIALISATION_OF_relevant_evt_OF_Hand_Switch_Failure ;
            bool REINITIALISATION_OF_required_OF_System_A_Failure ;
            bool REINITIALISATION_OF_S_OF_System_A_Failure ;
            bool REINITIALISATION_OF_relevant_evt_OF_System_A_Failure ;
            bool REINITIALISATION_OF_required_OF_System_B_Failure ;
            bool REINITIALISATION_OF_S_OF_System_B_Failure ;
            bool REINITIALISATION_OF_relevant_evt_OF_System_B_Failure ;
            
		/* ---------- DECLARATION OF CONSTANTS ------------ */
			bool const force_relevant_events_OF_DIFIT32_A = false;
			bool const repairable_system_OF_OPTIONS = true;
			bool const force_relevant_events_OF_DPBMB_P31_A = false;
			std::string const calculate_required_OF_Loss_Of_Control_in_Auto_Mode = "fn_fathers_and_trig";
			double const mu_OF_DOSC_1_DCHS4_B = 0.041;
			double const mu_OF_SM_271_A = 0.041;
			bool const force_relevant_events_OF_MEM527_A = false;
			double const lambda_OF_ANAMB_P17_B = 3.2e-07;
			std::string const calculate_required_OF_ISOCTX31_B = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_MEM527_B = false;
			bool const force_relevant_events_OF_CPU86_105_B = false;
			std::string const calculate_required_OF_DOSC_1_DCHS4_A = "fn_fathers_and_trig";
			double const lambda_OF_DOSC_1_DCHS4_B = 7e-06;
			bool const failF_FROZEN_OF_ISOCTX32_B = false;
			bool const no_repair_OF___ARBRE__EIRM = false;
			double const mu_OF_DIFIT32_A = 0.041;
			double const mu_OF_DPBMB_P31_A = 0.041;
			double const mu_OF_HS_136F = 1e-200;
			bool const failF_FROZEN_OF_DPBMB_P31_B = false;
			bool const force_relevant_events_OF_ISOCTX32_B = false;
			std::string const calculate_required_OF_RORB32_A = "fn_fathers_and_trig";
			std::string const calculate_required_OF_HS_139F = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_System_A_Failure = false;
			bool const force_relevant_events_OF_A_B_Failure_Together = false;
			double const lambda_OF_DIFIT31_B = 1e-05;
			double const mu_OF_CTU = 1;
			double const mu_OF_MEM527_B = 0.041;
			double const mu_OF_ISOCTX32_B = 0.041;
			double const mu_OF_DPBMB_P31_B = 0.041;
			std::string const calculate_required_OF_RRS_Failure = "fn_fathers_and_trig";
			double const lambda_OF_DOSC_1_DCHS5_B = 7e-06;
			bool const failF_FROZEN_OF_ANAMB_P16_B = false;
			double const lambda_OF_MEM527_A = 3.9e-06;
			bool const force_relevant_events_OF_ANAMB_P16_B = false;
			std::string const calculate_required_OF_CPU86_102_A = "fn_fathers_and_trig";
			std::string const calculate_required_OF_dummy = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_DPBMB_P32_A = false;
			double const lambda_OF_MEM527_B = 3.9e-06;
			bool const failF_FROZEN_OF_DIFIT31_B = false;
			std::string const calculate_required_OF_UE_1 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_ADA27_B = "fn_fathers_and_trig";
			std::string const calculate_required_OF_RORB32_B = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_DIFIT31_B = false;
			bool const failF_FROZEN_OF_DPBMB_P32_B = false;
			double const mu_OF_ANAMB_P16_B = 0.041;
			double const lambda_OF_CPU86_105_A = 9.5e-06;
			double const lambda_OF_ISOCTX31_A = 8.1e-06;
			bool const force_relevant_events_OF_DPBMB_P32_B = false;
			double const mu_OF_OE = 1e-200;
			double const lambda_OF_CPU86_102_B = 9.5e-06;
			double const lambda_OF_HS_136F = 0.001;
			double const lambda_OF_DOSC_1_DCHS5_A = 7e-06;
			double const mu_OF_DPBMB_P32_A = 0.041;
			double const mu_OF_DIFIT31_B = 0.041;
			bool const force_relevant_events_OF_SM_271_A = false;
			std::string const calculate_required_OF_Loss_Of_Control_With_B = "fn_fathers_and_trig";
			double const lambda_OF_ADA27_A = 6.7e-06;
			double const lambda_OF_CPU86_105_B = 9.5e-06;
			std::string const calculate_required_OF_PROC_GATE_B = "fn_fathers_and_trig";
			std::string const calculate_required_OF_Loss_Of_Control_With_A = "fn_fathers_and_trig";
			double const mu_OF_DPBMB_P32_B = 0.041;
			bool const failF_FROZEN_OF_DIFIT32_B = false;
			double const lambda_OF_CPU86_102_A = 9.5e-06;
			bool const failF_FROZEN_OF_ANAMB_P16_A = false;
			bool const force_relevant_events_OF_ANAMB_P16_A = false;
			bool const failF_FROZEN_OF_CTU = false;
			std::string const calculate_required_OF_PROC_GATE_A = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_ANAMB_P17_B = false;
			double const lambda_OF_ISOCTX32_B = 8.1e-06;
			std::string const calculate_required_OF_ADA27_A = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_CTU = false;
			bool const failF_FROZEN_OF_DOSC_1_DCHS5_B = false;
			std::string const calculate_required_OF_OE = "fn_fathers_and_trig";
			std::string const calculate_required_OF_System_B_Failure = "fn_fathers_and_trig";
			std::string const calculate_required_OF_RORB31_A = "fn_fathers_and_trig";
			double const mu_OF_ANAMB_P16_A = 0.041;
			std::string const calculate_required_OF_ISOCTX31_A = "fn_fathers_and_trig";
			double const lambda_OF_RORB31_B = 2.9e-06;
			bool const force_relevant_events_OF_DOSC_1_DCHS5_B = false;
			double const lambda_OF_DPBMB_P31_A = 4.9e-07;
			bool const force_relevant_events_OF_DPBMB_P31_B = false;
			std::string const calculate_required_OF_CPU86_105_A = "fn_fathers_and_trig";
			double const mu_OF_ANAMB_P17_B = 0.041;
			bool const failF_FROZEN_OF_RORB31_B = false;
			bool const no_trim_OF___ARBRE__EIRM = true;
			double const mu_OF_DOSC_1_DCHS5_B = 0.041;
			std::string const calculate_required_OF_DIFIT31_A = "fn_fathers_and_trig";
			std::string const calculate_required_OF_CPU86_102_B = "fn_fathers_and_trig";
			std::string const calculate_required_OF_DIFIT32_A = "fn_fathers_and_trig";
			double const lambda_OF_CTU = 5.4e-06;
			bool const failF_FROZEN_OF_DOSC_1_DCHS4_A = false;
			std::string const calculate_required_OF_DPBMB_P31_A = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_RORB31_B = false;
			std::string const calculate_required_OF_MEM527_A = "fn_fathers_and_trig";
			double const lambda_OF_RORB32_A = 2.9e-06;
			double const lambda_OF_SM_271_A = 4.4e-06;
			bool const force_relevant_events_OF_DOSC_1_DCHS4_A = false;
			std::string const calculate_required_OF_CPU86_105_B = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_DOSC_1_DCHS5_A = false;
			std::string const calculate_required_OF_HS_136F = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_HS_139F = false;
			std::string const calculate_required_OF_MEM527_B = "fn_fathers_and_trig";
			std::string const calculate_required_OF_RLYS_1 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_RORB32_A = false;
			double const lambda_OF_DIFIT32_B = 1e-05;
			double const mu_OF_RORB31_B = 0.041;
			bool const force_relevant_events_OF_Auto_Switching_Failure_A = false;
			bool const Profil1_OF___ARBRE__EIRM = true;
			bool const force_relevant_events_OF_DOSC_1_DCHS5_A = false;
			bool const force_relevant_events_OF_HS_139F = false;
			std::string const calculate_required_OF_ISOCTX32_B = "fn_fathers_and_trig";
			std::string const calculate_required_OF_System_A_Failure = "fn_fathers_and_trig";
			double const mu_OF_DOSC_1_DCHS4_A = 0.041;
			bool const force_relevant_events_OF_DPBMB_P32_A = false;
			bool const force_relevant_events_OF_CPU86_105_A = false;
			double const lambda_OF_DOSC_1_DCHS4_A = 7e-06;
			double const mu_OF_DOSC_1_DCHS5_A = 0.041;
			bool const failF_FROZEN_OF_SM_271_B = false;
			bool const failF_FROZEN_OF_ANAMB_P17_A = false;
			bool const force_relevant_events_OF_SM_271_B = false;
			bool const force_relevant_events_OF_ANAMB_P17_A = false;
			bool const force_relevant_events_OF_RRS_Failure = false;
			double const lambda_OF_RORB32_B = 2.9e-06;
			bool const failF_FROZEN_OF_HS_138F = false;
			double const lambda_OF_OE = 0.1;
			bool const force_relevant_events_OF_Auto_Switching_Failure_B = false;
			std::string const calculate_required_OF_ANAMB_P16_B = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_ISOCTX32_A = false;
			bool const force_relevant_events_OF_HS_138F = false;
			double const mu_OF_SM_271_B = 0.041;
			bool const failF_FROZEN_OF_ADA27_B = false;
			double const mu_OF_ANAMB_P17_A = 0.041;
			double const mu_OF_RLYS_1 = 1;
			bool const force_relevant_events_OF_DIFIT32_B = false;
			bool const failF_FROZEN_OF_RORB32_B = false;
			bool const force_relevant_events_OF_Hand_Switch_Failure = false;
			bool const force_relevant_events_OF_ISOCTX32_A = false;
			bool const force_relevant_events_OF_ADA27_B = false;
			std::string const calculate_required_OF_DIFIT31_B = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_ANAMB_P17_B = false;
			double const mu_OF_DIFIT32_B = 0.041;
			double const mu_OF_ISOCTX32_A = 0.041;
			bool const trimming_OF_OPTIONS = false;
			double const mu_OF_ADA27_B = 0.041;
			double const lambda_OF_ANAMB_P16_B = 3.2e-07;
			std::string const calculate_required_OF_DOSC_1_DCHS4_B = "fn_fathers_and_trig";
			std::string const calculate_required_OF_SM_271_A = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_PROC_GATE_B = false;
			double const lambda_OF_DIFIT31_A = 1e-05;
			double const lambda_OF_SM_271_B = 4.4e-06;
			double const lambda_OF_RORB31_A = 2.9e-06;
			bool const failF_FROZEN_OF_ISOCTX31_B = false;
			bool const force_relevant_events_OF_Loss_Of_Control_in_Auto_Mode = false;
			std::string const calculate_required_OF_ANAMB_P16_A = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_ISOCTX31_B = false;
			double const lambda_OF_DPBMB_P31_B = 4.9e-07;
			bool const failF_FROZEN_OF_RORB31_A = false;
			std::string const calculate_required_OF_CTU = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_System_B_Failure = false;
			bool const force_relevant_events_OF_RORB32_A = false;
			std::string const step_down_OF_Auto_Switching_Failure_A = "rep_any";
			std::string const calculate_required_OF_A_B_Failure_Together = "fn_fathers_and_trig";
			std::string const calculate_required_OF_DOSC_1_DCHS5_B = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_CPU86_105_A = false;
			std::string const calculate_required_OF_DPBMB_P31_B = "fn_fathers_and_trig";
			double const mu_OF_HS_139F = 1e-200;
			double const mu_OF_ISOCTX31_B = 0.041;
			double const lambda_OF_RLYS_1 = 0.00052;
			bool const failF_FROZEN_OF_DIFIT31_A = false;
			bool const failF_FROZEN_OF_CPU86_102_B = false;
			bool const failF_FROZEN_OF_DPBMB_P31_A = false;
			double const lambda_OF_ANAMB_P16_A = 3.2e-07;
			double const mu_OF_RORB32_A = 0.041;
			std::string const trigger_kind_OF_t_1 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_MEM527_A = false;
			bool const force_relevant_events_OF_DIFIT31_A = false;
			bool const force_relevant_events_OF_CPU86_102_B = false;
			std::string const calculate_required_OF_RORB31_B = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_MEM527_B = false;
			bool const failF_FROZEN_OF_CPU86_105_B = false;
			bool const failF_FROZEN_OF_HS_136F = false;
			bool const failF_FROZEN_OF_RLYS_1 = false;
			double const mu_OF_CPU86_105_A = 0.041;
			bool const failF_FROZEN_OF_CPU86_102_A = false;
			bool const force_relevant_events_OF_RLYS_1 = false;
			bool const force_relevant_events_OF_HS_136F = false;
			double const lambda_OF_DPBMB_P32_A = 4.9e-07;
			double const mu_OF_DIFIT31_A = 0.041;
			double const mu_OF_CPU86_102_B = 0.041;
			bool const force_relevant_events_OF_CPU86_102_A = false;
			double const lambda_OF_ISOCTX32_A = 8.1e-06;
			std::string const calculate_required_OF_Auto_Switching_Failure_A = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_dummy = false;
			std::string const calculate_required_OF_DOSC_1_DCHS5_A = "fn_fathers_and_trig";
			double const mu_OF_MEM527_A = 0.041;
			std::string const step_down_OF_Auto_Switching_Failure_B = "rep_any";
			double const mu_OF_HS_138F = 1e-200;
			double const lambda_OF_DPBMB_P32_B = 4.9e-07;
			double const mu_OF_CPU86_105_B = 0.041;
			std::string const calculate_required_OF_DPBMB_P32_A = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_RORB32_B = false;
			double const mu_OF_CPU86_102_A = 0.041;
			std::string const trimming_option_OF_OPTIONS = "maximum";
			std::string const calculate_required_OF_DPBMB_P32_B = "fn_fathers_and_trig";
			double const mu_OF_RORB32_B = 0.041;
			double const lambda_OF_ADA27_B = 6.7e-06;
			std::string const calculate_required_OF_ANAMB_P17_A = "fn_fathers_and_trig";
			std::string const calculate_required_OF_SM_271_B = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_Loss_Of_Control_With_B = false;
			double const lambda_OF_HS_139F = 0.001;
			bool const force_relevant_events_OF_Loss_Of_Control_With_A = false;
			double const lambda_OF_DIFIT32_A = 1e-05;
			std::string const calculate_required_OF_Auto_Switching_Failure_B = "fn_fathers_and_trig";
			std::string const calculate_required_OF_HS_138F = "fn_fathers_and_trig";
			double const lambda_OF_ISOCTX31_B = 8.1e-06;
			std::string const calculate_required_OF_Hand_Switch_Failure = "fn_fathers_and_trig";
			std::string const calculate_required_OF_DIFIT32_B = "fn_fathers_and_trig";
			std::string const calculate_required_OF_ISOCTX32_A = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_ADA27_A = false;
			bool const force_relevant_events_OF_PROC_GATE_A = false;
			bool const failF_FROZEN_OF_OE = false;
			bool const force_relevant_events_OF_ADA27_A = false;
			double const lambda_OF_ANAMB_P17_A = 3.2e-07;
			bool const failF_FROZEN_OF_ISOCTX31_A = false;
			bool const trim_article_OF___ARBRE__EIRM = false;
			bool const force_relevant_events_OF_OE = false;
			std::string const calculate_required_OF_ANAMB_P17_B = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_RORB31_A = false;
			bool const failF_FROZEN_OF_DOSC_1_DCHS4_B = false;
			bool const failF_FROZEN_OF_SM_271_A = false;
			bool const force_relevant_events_OF_ISOCTX31_A = false;
			bool const force_relevant_events_OF_UE_1 = true;
			bool const force_relevant_events_OF_DOSC_1_DCHS4_B = false;
			double const mu_OF_ADA27_A = 0.041;
			double const lambda_OF_HS_138F = 0.001;
			bool const failF_FROZEN_OF_DIFIT32_A = false;
			double const mu_OF_RORB31_A = 0.041;
			double const mu_OF_ISOCTX31_A = 0.041;
		
            /* ---------- DECLARATION OF OCCURRENCE RULES FIRING FLAGS ------------ */
            bool FIRE_xx10_OF_ADA27_A;
            bool FIRE_xx11_OF_ADA27_A;
            bool FIRE_xx10_OF_ADA27_B;
            bool FIRE_xx11_OF_ADA27_B;
            bool FIRE_xx10_OF_ANAMB_P16_A;
            bool FIRE_xx11_OF_ANAMB_P16_A;
            bool FIRE_xx10_OF_ANAMB_P16_B;
            bool FIRE_xx11_OF_ANAMB_P16_B;
            bool FIRE_xx10_OF_ANAMB_P17_A;
            bool FIRE_xx11_OF_ANAMB_P17_A;
            bool FIRE_xx10_OF_ANAMB_P17_B;
            bool FIRE_xx11_OF_ANAMB_P17_B;
            bool FIRE_xx10_OF_CPU86_102_A;
            bool FIRE_xx11_OF_CPU86_102_A;
            bool FIRE_xx10_OF_CPU86_102_B;
            bool FIRE_xx11_OF_CPU86_102_B;
            bool FIRE_xx10_OF_CPU86_105_A;
            bool FIRE_xx11_OF_CPU86_105_A;
            bool FIRE_xx10_OF_CPU86_105_B;
            bool FIRE_xx11_OF_CPU86_105_B;
            bool FIRE_xx10_OF_CTU;
            bool FIRE_xx11_OF_CTU;
            bool FIRE_xx10_OF_DIFIT31_A;
            bool FIRE_xx11_OF_DIFIT31_A;
            bool FIRE_xx10_OF_DIFIT31_B;
            bool FIRE_xx11_OF_DIFIT31_B;
            bool FIRE_xx10_OF_DIFIT32_A;
            bool FIRE_xx11_OF_DIFIT32_A;
            bool FIRE_xx10_OF_DIFIT32_B;
            bool FIRE_xx11_OF_DIFIT32_B;
            bool FIRE_xx10_OF_DOSC_1_DCHS4_A;
            bool FIRE_xx11_OF_DOSC_1_DCHS4_A;
            bool FIRE_xx10_OF_DOSC_1_DCHS4_B;
            bool FIRE_xx11_OF_DOSC_1_DCHS4_B;
            bool FIRE_xx10_OF_DOSC_1_DCHS5_A;
            bool FIRE_xx11_OF_DOSC_1_DCHS5_A;
            bool FIRE_xx10_OF_DOSC_1_DCHS5_B;
            bool FIRE_xx11_OF_DOSC_1_DCHS5_B;
            bool FIRE_xx10_OF_DPBMB_P31_A;
            bool FIRE_xx11_OF_DPBMB_P31_A;
            bool FIRE_xx10_OF_DPBMB_P31_B;
            bool FIRE_xx11_OF_DPBMB_P31_B;
            bool FIRE_xx10_OF_DPBMB_P32_A;
            bool FIRE_xx11_OF_DPBMB_P32_A;
            bool FIRE_xx10_OF_DPBMB_P32_B;
            bool FIRE_xx11_OF_DPBMB_P32_B;
            bool FIRE_xx10_OF_HS_136F;
            bool FIRE_xx11_OF_HS_136F;
            bool FIRE_xx10_OF_HS_138F;
            bool FIRE_xx11_OF_HS_138F;
            bool FIRE_xx10_OF_HS_139F;
            bool FIRE_xx11_OF_HS_139F;
            bool FIRE_xx10_OF_ISOCTX31_A;
            bool FIRE_xx11_OF_ISOCTX31_A;
            bool FIRE_xx10_OF_ISOCTX31_B;
            bool FIRE_xx11_OF_ISOCTX31_B;
            bool FIRE_xx10_OF_ISOCTX32_A;
            bool FIRE_xx11_OF_ISOCTX32_A;
            bool FIRE_xx10_OF_ISOCTX32_B;
            bool FIRE_xx11_OF_ISOCTX32_B;
            bool FIRE_xx10_OF_MEM527_A;
            bool FIRE_xx11_OF_MEM527_A;
            bool FIRE_xx10_OF_MEM527_B;
            bool FIRE_xx11_OF_MEM527_B;
            bool FIRE_xx10_OF_OE;
            bool FIRE_xx11_OF_OE;
            bool FIRE_xx10_OF_RLYS_1;
            bool FIRE_xx11_OF_RLYS_1;
            bool FIRE_xx10_OF_RORB31_A;
            bool FIRE_xx11_OF_RORB31_A;
            bool FIRE_xx10_OF_RORB31_B;
            bool FIRE_xx11_OF_RORB31_B;
            bool FIRE_xx10_OF_RORB32_A;
            bool FIRE_xx11_OF_RORB32_A;
            bool FIRE_xx10_OF_RORB32_B;
            bool FIRE_xx11_OF_RORB32_B;
            bool FIRE_xx10_OF_SM_271_A;
            bool FIRE_xx11_OF_SM_271_A;
            bool FIRE_xx10_OF_SM_271_B;
            bool FIRE_xx11_OF_SM_271_B;

            int required_OF_ADA27_A = 0 ;
            int already_S_OF_ADA27_A = 1 ;
            int S_OF_ADA27_A = 2 ;
            int relevant_evt_OF_ADA27_A = 3 ;
            int failF_OF_ADA27_A = 4 ;
            int required_OF_ADA27_B = 5 ;
            int already_S_OF_ADA27_B = 6 ;
            int S_OF_ADA27_B = 7 ;
            int relevant_evt_OF_ADA27_B = 8 ;
            int failF_OF_ADA27_B = 9 ;
            int required_OF_ANAMB_P16_A = 10 ;
            int already_S_OF_ANAMB_P16_A = 11 ;
            int S_OF_ANAMB_P16_A = 12 ;
            int relevant_evt_OF_ANAMB_P16_A = 13 ;
            int failF_OF_ANAMB_P16_A = 14 ;
            int required_OF_ANAMB_P16_B = 15 ;
            int already_S_OF_ANAMB_P16_B = 16 ;
            int S_OF_ANAMB_P16_B = 17 ;
            int relevant_evt_OF_ANAMB_P16_B = 18 ;
            int failF_OF_ANAMB_P16_B = 19 ;
            int required_OF_ANAMB_P17_A = 20 ;
            int already_S_OF_ANAMB_P17_A = 21 ;
            int S_OF_ANAMB_P17_A = 22 ;
            int relevant_evt_OF_ANAMB_P17_A = 23 ;
            int failF_OF_ANAMB_P17_A = 24 ;
            int required_OF_ANAMB_P17_B = 25 ;
            int already_S_OF_ANAMB_P17_B = 26 ;
            int S_OF_ANAMB_P17_B = 27 ;
            int relevant_evt_OF_ANAMB_P17_B = 28 ;
            int failF_OF_ANAMB_P17_B = 29 ;
            int required_OF_CPU86_102_A = 30 ;
            int already_S_OF_CPU86_102_A = 31 ;
            int S_OF_CPU86_102_A = 32 ;
            int relevant_evt_OF_CPU86_102_A = 33 ;
            int failF_OF_CPU86_102_A = 34 ;
            int required_OF_CPU86_102_B = 35 ;
            int already_S_OF_CPU86_102_B = 36 ;
            int S_OF_CPU86_102_B = 37 ;
            int relevant_evt_OF_CPU86_102_B = 38 ;
            int failF_OF_CPU86_102_B = 39 ;
            int required_OF_CPU86_105_A = 40 ;
            int already_S_OF_CPU86_105_A = 41 ;
            int S_OF_CPU86_105_A = 42 ;
            int relevant_evt_OF_CPU86_105_A = 43 ;
            int failF_OF_CPU86_105_A = 44 ;
            int required_OF_CPU86_105_B = 45 ;
            int already_S_OF_CPU86_105_B = 46 ;
            int S_OF_CPU86_105_B = 47 ;
            int relevant_evt_OF_CPU86_105_B = 48 ;
            int failF_OF_CPU86_105_B = 49 ;
            int required_OF_CTU = 50 ;
            int already_S_OF_CTU = 51 ;
            int S_OF_CTU = 52 ;
            int relevant_evt_OF_CTU = 53 ;
            int failF_OF_CTU = 54 ;
            int required_OF_DIFIT31_A = 55 ;
            int already_S_OF_DIFIT31_A = 56 ;
            int S_OF_DIFIT31_A = 57 ;
            int relevant_evt_OF_DIFIT31_A = 58 ;
            int failF_OF_DIFIT31_A = 59 ;
            int required_OF_DIFIT31_B = 60 ;
            int already_S_OF_DIFIT31_B = 61 ;
            int S_OF_DIFIT31_B = 62 ;
            int relevant_evt_OF_DIFIT31_B = 63 ;
            int failF_OF_DIFIT31_B = 64 ;
            int required_OF_DIFIT32_A = 65 ;
            int already_S_OF_DIFIT32_A = 66 ;
            int S_OF_DIFIT32_A = 67 ;
            int relevant_evt_OF_DIFIT32_A = 68 ;
            int failF_OF_DIFIT32_A = 69 ;
            int required_OF_DIFIT32_B = 70 ;
            int already_S_OF_DIFIT32_B = 71 ;
            int S_OF_DIFIT32_B = 72 ;
            int relevant_evt_OF_DIFIT32_B = 73 ;
            int failF_OF_DIFIT32_B = 74 ;
            int required_OF_DOSC_1_DCHS4_A = 75 ;
            int already_S_OF_DOSC_1_DCHS4_A = 76 ;
            int S_OF_DOSC_1_DCHS4_A = 77 ;
            int relevant_evt_OF_DOSC_1_DCHS4_A = 78 ;
            int failF_OF_DOSC_1_DCHS4_A = 79 ;
            int required_OF_DOSC_1_DCHS4_B = 80 ;
            int already_S_OF_DOSC_1_DCHS4_B = 81 ;
            int S_OF_DOSC_1_DCHS4_B = 82 ;
            int relevant_evt_OF_DOSC_1_DCHS4_B = 83 ;
            int failF_OF_DOSC_1_DCHS4_B = 84 ;
            int required_OF_DOSC_1_DCHS5_A = 85 ;
            int already_S_OF_DOSC_1_DCHS5_A = 86 ;
            int S_OF_DOSC_1_DCHS5_A = 87 ;
            int relevant_evt_OF_DOSC_1_DCHS5_A = 88 ;
            int failF_OF_DOSC_1_DCHS5_A = 89 ;
            int required_OF_DOSC_1_DCHS5_B = 90 ;
            int already_S_OF_DOSC_1_DCHS5_B = 91 ;
            int S_OF_DOSC_1_DCHS5_B = 92 ;
            int relevant_evt_OF_DOSC_1_DCHS5_B = 93 ;
            int failF_OF_DOSC_1_DCHS5_B = 94 ;
            int required_OF_DPBMB_P31_A = 95 ;
            int already_S_OF_DPBMB_P31_A = 96 ;
            int S_OF_DPBMB_P31_A = 97 ;
            int relevant_evt_OF_DPBMB_P31_A = 98 ;
            int failF_OF_DPBMB_P31_A = 99 ;
            int required_OF_DPBMB_P31_B = 100 ;
            int already_S_OF_DPBMB_P31_B = 101 ;
            int S_OF_DPBMB_P31_B = 102 ;
            int relevant_evt_OF_DPBMB_P31_B = 103 ;
            int failF_OF_DPBMB_P31_B = 104 ;
            int required_OF_DPBMB_P32_A = 105 ;
            int already_S_OF_DPBMB_P32_A = 106 ;
            int S_OF_DPBMB_P32_A = 107 ;
            int relevant_evt_OF_DPBMB_P32_A = 108 ;
            int failF_OF_DPBMB_P32_A = 109 ;
            int required_OF_DPBMB_P32_B = 110 ;
            int already_S_OF_DPBMB_P32_B = 111 ;
            int S_OF_DPBMB_P32_B = 112 ;
            int relevant_evt_OF_DPBMB_P32_B = 113 ;
            int failF_OF_DPBMB_P32_B = 114 ;
            int required_OF_HS_136F = 115 ;
            int already_S_OF_HS_136F = 116 ;
            int S_OF_HS_136F = 117 ;
            int relevant_evt_OF_HS_136F = 118 ;
            int failF_OF_HS_136F = 119 ;
            int required_OF_HS_138F = 120 ;
            int already_S_OF_HS_138F = 121 ;
            int S_OF_HS_138F = 122 ;
            int relevant_evt_OF_HS_138F = 123 ;
            int failF_OF_HS_138F = 124 ;
            int required_OF_HS_139F = 125 ;
            int already_S_OF_HS_139F = 126 ;
            int S_OF_HS_139F = 127 ;
            int relevant_evt_OF_HS_139F = 128 ;
            int failF_OF_HS_139F = 129 ;
            int required_OF_ISOCTX31_A = 130 ;
            int already_S_OF_ISOCTX31_A = 131 ;
            int S_OF_ISOCTX31_A = 132 ;
            int relevant_evt_OF_ISOCTX31_A = 133 ;
            int failF_OF_ISOCTX31_A = 134 ;
            int required_OF_ISOCTX31_B = 135 ;
            int already_S_OF_ISOCTX31_B = 136 ;
            int S_OF_ISOCTX31_B = 137 ;
            int relevant_evt_OF_ISOCTX31_B = 138 ;
            int failF_OF_ISOCTX31_B = 139 ;
            int required_OF_ISOCTX32_A = 140 ;
            int already_S_OF_ISOCTX32_A = 141 ;
            int S_OF_ISOCTX32_A = 142 ;
            int relevant_evt_OF_ISOCTX32_A = 143 ;
            int failF_OF_ISOCTX32_A = 144 ;
            int required_OF_ISOCTX32_B = 145 ;
            int already_S_OF_ISOCTX32_B = 146 ;
            int S_OF_ISOCTX32_B = 147 ;
            int relevant_evt_OF_ISOCTX32_B = 148 ;
            int failF_OF_ISOCTX32_B = 149 ;
            int required_OF_MEM527_A = 150 ;
            int already_S_OF_MEM527_A = 151 ;
            int S_OF_MEM527_A = 152 ;
            int relevant_evt_OF_MEM527_A = 153 ;
            int failF_OF_MEM527_A = 154 ;
            int required_OF_MEM527_B = 155 ;
            int already_S_OF_MEM527_B = 156 ;
            int S_OF_MEM527_B = 157 ;
            int relevant_evt_OF_MEM527_B = 158 ;
            int failF_OF_MEM527_B = 159 ;
            int required_OF_OE = 160 ;
            int already_S_OF_OE = 161 ;
            int S_OF_OE = 162 ;
            int relevant_evt_OF_OE = 163 ;
            int failF_OF_OE = 164 ;
            int required_OF_PROC_GATE_A = 165 ;
            int already_S_OF_PROC_GATE_A = 166 ;
            int S_OF_PROC_GATE_A = 167 ;
            int relevant_evt_OF_PROC_GATE_A = 168 ;
            int required_OF_PROC_GATE_B = 169 ;
            int already_S_OF_PROC_GATE_B = 170 ;
            int S_OF_PROC_GATE_B = 171 ;
            int relevant_evt_OF_PROC_GATE_B = 172 ;
            int required_OF_RLYS_1 = 173 ;
            int already_S_OF_RLYS_1 = 174 ;
            int S_OF_RLYS_1 = 175 ;
            int relevant_evt_OF_RLYS_1 = 176 ;
            int failF_OF_RLYS_1 = 177 ;
            int required_OF_RORB31_A = 178 ;
            int already_S_OF_RORB31_A = 179 ;
            int S_OF_RORB31_A = 180 ;
            int relevant_evt_OF_RORB31_A = 181 ;
            int failF_OF_RORB31_A = 182 ;
            int required_OF_RORB31_B = 183 ;
            int already_S_OF_RORB31_B = 184 ;
            int S_OF_RORB31_B = 185 ;
            int relevant_evt_OF_RORB31_B = 186 ;
            int failF_OF_RORB31_B = 187 ;
            int required_OF_RORB32_A = 188 ;
            int already_S_OF_RORB32_A = 189 ;
            int S_OF_RORB32_A = 190 ;
            int relevant_evt_OF_RORB32_A = 191 ;
            int failF_OF_RORB32_A = 192 ;
            int required_OF_RORB32_B = 193 ;
            int already_S_OF_RORB32_B = 194 ;
            int S_OF_RORB32_B = 195 ;
            int relevant_evt_OF_RORB32_B = 196 ;
            int failF_OF_RORB32_B = 197 ;
            int required_OF_SM_271_A = 198 ;
            int already_S_OF_SM_271_A = 199 ;
            int S_OF_SM_271_A = 200 ;
            int relevant_evt_OF_SM_271_A = 201 ;
            int failF_OF_SM_271_A = 202 ;
            int required_OF_SM_271_B = 203 ;
            int already_S_OF_SM_271_B = 204 ;
            int S_OF_SM_271_B = 205 ;
            int relevant_evt_OF_SM_271_B = 206 ;
            int failF_OF_SM_271_B = 207 ;
            int required_OF_RRS_Failure = 208 ;
            int already_S_OF_RRS_Failure = 209 ;
            int S_OF_RRS_Failure = 210 ;
            int relevant_evt_OF_RRS_Failure = 211 ;
            int required_OF_UE_1 = 212 ;
            int already_S_OF_UE_1 = 213 ;
            int S_OF_UE_1 = 214 ;
            int relevant_evt_OF_UE_1 = 215 ;
            int required_OF_Auto_Switching_Failure_A = 216 ;
            int already_S_OF_Auto_Switching_Failure_A = 217 ;
            int S_OF_Auto_Switching_Failure_A = 218 ;
            int relevant_evt_OF_Auto_Switching_Failure_A = 219 ;
            int required_OF_Auto_Switching_Failure_B = 220 ;
            int already_S_OF_Auto_Switching_Failure_B = 221 ;
            int S_OF_Auto_Switching_Failure_B = 222 ;
            int relevant_evt_OF_Auto_Switching_Failure_B = 223 ;
            int required_OF_Loss_Of_Control_in_Auto_Mode = 224 ;
            int already_S_OF_Loss_Of_Control_in_Auto_Mode = 225 ;
            int S_OF_Loss_Of_Control_in_Auto_Mode = 226 ;
            int relevant_evt_OF_Loss_Of_Control_in_Auto_Mode = 227 ;
            int required_OF_Loss_Of_Control_With_A = 228 ;
            int already_S_OF_Loss_Of_Control_With_A = 229 ;
            int S_OF_Loss_Of_Control_With_A = 230 ;
            int relevant_evt_OF_Loss_Of_Control_With_A = 231 ;
            int required_OF_Loss_Of_Control_With_B = 232 ;
            int already_S_OF_Loss_Of_Control_With_B = 233 ;
            int S_OF_Loss_Of_Control_With_B = 234 ;
            int relevant_evt_OF_Loss_Of_Control_With_B = 235 ;
            int required_OF_dummy = 236 ;
            int already_S_OF_dummy = 237 ;
            int S_OF_dummy = 238 ;
            int relevant_evt_OF_dummy = 239 ;
            int required_OF_A_B_Failure_Together = 240 ;
            int already_S_OF_A_B_Failure_Together = 241 ;
            int S_OF_A_B_Failure_Together = 242 ;
            int relevant_evt_OF_A_B_Failure_Together = 243 ;
            int required_OF_Hand_Switch_Failure = 244 ;
            int already_S_OF_Hand_Switch_Failure = 245 ;
            int S_OF_Hand_Switch_Failure = 246 ;
            int relevant_evt_OF_Hand_Switch_Failure = 247 ;
            int required_OF_System_A_Failure = 248 ;
            int already_S_OF_System_A_Failure = 249 ;
            int S_OF_System_A_Failure = 250 ;
            int relevant_evt_OF_System_A_Failure = 251 ;
            int required_OF_System_B_Failure = 252 ;
            int already_S_OF_System_B_Failure = 253 ;
            int S_OF_System_B_Failure = 254 ;
            int relevant_evt_OF_System_B_Failure = 255 ;




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