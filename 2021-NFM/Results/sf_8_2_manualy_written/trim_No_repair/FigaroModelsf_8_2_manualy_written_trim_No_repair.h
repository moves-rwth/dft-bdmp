
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
        class FigaroProgram_sf_8_2_manualy_written_trim_No_repair: public storm::figaro::FigaroProgram{
        public:
        FigaroProgram_sf_8_2_manualy_written_trim_No_repair(): FigaroProgram(//            std::map<std::string, size_t> mFigaroboolelementindex =
                    {  
            	{"required_OF_E1_1" , 0},
            	{"already_S_OF_E1_1" , 1},
            	{"S_OF_E1_1" , 2},
            	{"relevant_evt_OF_E1_1" , 3},
            	{"failF_OF_E1_1" , 4},
            	{"required_OF_E1_2" , 5},
            	{"already_S_OF_E1_2" , 6},
            	{"S_OF_E1_2" , 7},
            	{"relevant_evt_OF_E1_2" , 8},
            	{"failF_OF_E1_2" , 9},
            	{"required_OF_E1_3" , 10},
            	{"already_S_OF_E1_3" , 11},
            	{"S_OF_E1_3" , 12},
            	{"relevant_evt_OF_E1_3" , 13},
            	{"failF_OF_E1_3" , 14},
            	{"required_OF_E1_4" , 15},
            	{"already_S_OF_E1_4" , 16},
            	{"S_OF_E1_4" , 17},
            	{"relevant_evt_OF_E1_4" , 18},
            	{"failF_OF_E1_4" , 19},
            	{"required_OF_E1_5" , 20},
            	{"already_S_OF_E1_5" , 21},
            	{"S_OF_E1_5" , 22},
            	{"relevant_evt_OF_E1_5" , 23},
            	{"failF_OF_E1_5" , 24},
            	{"required_OF_E1_6" , 25},
            	{"already_S_OF_E1_6" , 26},
            	{"S_OF_E1_6" , 27},
            	{"relevant_evt_OF_E1_6" , 28},
            	{"failF_OF_E1_6" , 29},
            	{"required_OF_E1_7" , 30},
            	{"already_S_OF_E1_7" , 31},
            	{"S_OF_E1_7" , 32},
            	{"relevant_evt_OF_E1_7" , 33},
            	{"failF_OF_E1_7" , 34},
            	{"required_OF_E1_8" , 35},
            	{"already_S_OF_E1_8" , 36},
            	{"S_OF_E1_8" , 37},
            	{"relevant_evt_OF_E1_8" , 38},
            	{"failF_OF_E1_8" , 39},
            	{"required_OF_E2_1" , 40},
            	{"already_S_OF_E2_1" , 41},
            	{"S_OF_E2_1" , 42},
            	{"relevant_evt_OF_E2_1" , 43},
            	{"failF_OF_E2_1" , 44},
            	{"required_OF_E2_2" , 45},
            	{"already_S_OF_E2_2" , 46},
            	{"S_OF_E2_2" , 47},
            	{"relevant_evt_OF_E2_2" , 48},
            	{"failF_OF_E2_2" , 49},
            	{"required_OF_E2_3" , 50},
            	{"already_S_OF_E2_3" , 51},
            	{"S_OF_E2_3" , 52},
            	{"relevant_evt_OF_E2_3" , 53},
            	{"failF_OF_E2_3" , 54},
            	{"required_OF_E2_4" , 55},
            	{"already_S_OF_E2_4" , 56},
            	{"S_OF_E2_4" , 57},
            	{"relevant_evt_OF_E2_4" , 58},
            	{"failF_OF_E2_4" , 59},
            	{"required_OF_E2_5" , 60},
            	{"already_S_OF_E2_5" , 61},
            	{"S_OF_E2_5" , 62},
            	{"relevant_evt_OF_E2_5" , 63},
            	{"failF_OF_E2_5" , 64},
            	{"required_OF_E2_6" , 65},
            	{"already_S_OF_E2_6" , 66},
            	{"S_OF_E2_6" , 67},
            	{"relevant_evt_OF_E2_6" , 68},
            	{"failF_OF_E2_6" , 69},
            	{"required_OF_E2_7" , 70},
            	{"already_S_OF_E2_7" , 71},
            	{"S_OF_E2_7" , 72},
            	{"relevant_evt_OF_E2_7" , 73},
            	{"failF_OF_E2_7" , 74},
            	{"required_OF_E2_8" , 75},
            	{"already_S_OF_E2_8" , 76},
            	{"S_OF_E2_8" , 77},
            	{"relevant_evt_OF_E2_8" , 78},
            	{"failF_OF_E2_8" , 79},
            	{"required_OF_E3_1" , 80},
            	{"already_S_OF_E3_1" , 81},
            	{"S_OF_E3_1" , 82},
            	{"relevant_evt_OF_E3_1" , 83},
            	{"failF_OF_E3_1" , 84},
            	{"required_OF_E3_2" , 85},
            	{"already_S_OF_E3_2" , 86},
            	{"S_OF_E3_2" , 87},
            	{"relevant_evt_OF_E3_2" , 88},
            	{"failF_OF_E3_2" , 89},
            	{"required_OF_E3_3" , 90},
            	{"already_S_OF_E3_3" , 91},
            	{"S_OF_E3_3" , 92},
            	{"relevant_evt_OF_E3_3" , 93},
            	{"failF_OF_E3_3" , 94},
            	{"required_OF_E3_4" , 95},
            	{"already_S_OF_E3_4" , 96},
            	{"S_OF_E3_4" , 97},
            	{"relevant_evt_OF_E3_4" , 98},
            	{"failF_OF_E3_4" , 99},
            	{"required_OF_E3_5" , 100},
            	{"already_S_OF_E3_5" , 101},
            	{"S_OF_E3_5" , 102},
            	{"relevant_evt_OF_E3_5" , 103},
            	{"failF_OF_E3_5" , 104},
            	{"required_OF_E3_6" , 105},
            	{"already_S_OF_E3_6" , 106},
            	{"S_OF_E3_6" , 107},
            	{"relevant_evt_OF_E3_6" , 108},
            	{"failF_OF_E3_6" , 109},
            	{"required_OF_E3_7" , 110},
            	{"already_S_OF_E3_7" , 111},
            	{"S_OF_E3_7" , 112},
            	{"relevant_evt_OF_E3_7" , 113},
            	{"failF_OF_E3_7" , 114},
            	{"required_OF_E3_8" , 115},
            	{"already_S_OF_E3_8" , 116},
            	{"S_OF_E3_8" , 117},
            	{"relevant_evt_OF_E3_8" , 118},
            	{"failF_OF_E3_8" , 119},
            	{"required_OF_E4_1" , 120},
            	{"already_S_OF_E4_1" , 121},
            	{"S_OF_E4_1" , 122},
            	{"relevant_evt_OF_E4_1" , 123},
            	{"failF_OF_E4_1" , 124},
            	{"required_OF_E4_2" , 125},
            	{"already_S_OF_E4_2" , 126},
            	{"S_OF_E4_2" , 127},
            	{"relevant_evt_OF_E4_2" , 128},
            	{"failF_OF_E4_2" , 129},
            	{"required_OF_E4_3" , 130},
            	{"already_S_OF_E4_3" , 131},
            	{"S_OF_E4_3" , 132},
            	{"relevant_evt_OF_E4_3" , 133},
            	{"failF_OF_E4_3" , 134},
            	{"required_OF_E4_4" , 135},
            	{"already_S_OF_E4_4" , 136},
            	{"S_OF_E4_4" , 137},
            	{"relevant_evt_OF_E4_4" , 138},
            	{"failF_OF_E4_4" , 139},
            	{"required_OF_E4_5" , 140},
            	{"already_S_OF_E4_5" , 141},
            	{"S_OF_E4_5" , 142},
            	{"relevant_evt_OF_E4_5" , 143},
            	{"failF_OF_E4_5" , 144},
            	{"required_OF_E4_6" , 145},
            	{"already_S_OF_E4_6" , 146},
            	{"S_OF_E4_6" , 147},
            	{"relevant_evt_OF_E4_6" , 148},
            	{"failF_OF_E4_6" , 149},
            	{"required_OF_E4_7" , 150},
            	{"already_S_OF_E4_7" , 151},
            	{"S_OF_E4_7" , 152},
            	{"relevant_evt_OF_E4_7" , 153},
            	{"failF_OF_E4_7" , 154},
            	{"required_OF_E4_8" , 155},
            	{"already_S_OF_E4_8" , 156},
            	{"S_OF_E4_8" , 157},
            	{"relevant_evt_OF_E4_8" , 158},
            	{"failF_OF_E4_8" , 159},
            	{"required_OF_EC1_1" , 160},
            	{"already_S_OF_EC1_1" , 161},
            	{"S_OF_EC1_1" , 162},
            	{"relevant_evt_OF_EC1_1" , 163},
            	{"failF_OF_EC1_1" , 164},
            	{"required_OF_EC1_2" , 165},
            	{"already_S_OF_EC1_2" , 166},
            	{"S_OF_EC1_2" , 167},
            	{"relevant_evt_OF_EC1_2" , 168},
            	{"failF_OF_EC1_2" , 169},
            	{"required_OF_EC1_3" , 170},
            	{"already_S_OF_EC1_3" , 171},
            	{"S_OF_EC1_3" , 172},
            	{"relevant_evt_OF_EC1_3" , 173},
            	{"failF_OF_EC1_3" , 174},
            	{"required_OF_EC1_4" , 175},
            	{"already_S_OF_EC1_4" , 176},
            	{"S_OF_EC1_4" , 177},
            	{"relevant_evt_OF_EC1_4" , 178},
            	{"failF_OF_EC1_4" , 179},
            	{"required_OF_EC1_5" , 180},
            	{"already_S_OF_EC1_5" , 181},
            	{"S_OF_EC1_5" , 182},
            	{"relevant_evt_OF_EC1_5" , 183},
            	{"failF_OF_EC1_5" , 184},
            	{"required_OF_EC1_6" , 185},
            	{"already_S_OF_EC1_6" , 186},
            	{"S_OF_EC1_6" , 187},
            	{"relevant_evt_OF_EC1_6" , 188},
            	{"failF_OF_EC1_6" , 189},
            	{"required_OF_EC1_7" , 190},
            	{"already_S_OF_EC1_7" , 191},
            	{"S_OF_EC1_7" , 192},
            	{"relevant_evt_OF_EC1_7" , 193},
            	{"failF_OF_EC1_7" , 194},
            	{"required_OF_EC1_8" , 195},
            	{"already_S_OF_EC1_8" , 196},
            	{"S_OF_EC1_8" , 197},
            	{"relevant_evt_OF_EC1_8" , 198},
            	{"failF_OF_EC1_8" , 199},
            	{"required_OF_EC2_1" , 200},
            	{"already_S_OF_EC2_1" , 201},
            	{"S_OF_EC2_1" , 202},
            	{"relevant_evt_OF_EC2_1" , 203},
            	{"failF_OF_EC2_1" , 204},
            	{"required_OF_EC2_2" , 205},
            	{"already_S_OF_EC2_2" , 206},
            	{"S_OF_EC2_2" , 207},
            	{"relevant_evt_OF_EC2_2" , 208},
            	{"failF_OF_EC2_2" , 209},
            	{"required_OF_EC2_3" , 210},
            	{"already_S_OF_EC2_3" , 211},
            	{"S_OF_EC2_3" , 212},
            	{"relevant_evt_OF_EC2_3" , 213},
            	{"failF_OF_EC2_3" , 214},
            	{"required_OF_EC2_4" , 215},
            	{"already_S_OF_EC2_4" , 216},
            	{"S_OF_EC2_4" , 217},
            	{"relevant_evt_OF_EC2_4" , 218},
            	{"failF_OF_EC2_4" , 219},
            	{"required_OF_EC2_5" , 220},
            	{"already_S_OF_EC2_5" , 221},
            	{"S_OF_EC2_5" , 222},
            	{"relevant_evt_OF_EC2_5" , 223},
            	{"failF_OF_EC2_5" , 224},
            	{"required_OF_EC2_6" , 225},
            	{"already_S_OF_EC2_6" , 226},
            	{"S_OF_EC2_6" , 227},
            	{"relevant_evt_OF_EC2_6" , 228},
            	{"failF_OF_EC2_6" , 229},
            	{"required_OF_EC2_7" , 230},
            	{"already_S_OF_EC2_7" , 231},
            	{"S_OF_EC2_7" , 232},
            	{"relevant_evt_OF_EC2_7" , 233},
            	{"failF_OF_EC2_7" , 234},
            	{"required_OF_EC2_8" , 235},
            	{"already_S_OF_EC2_8" , 236},
            	{"S_OF_EC2_8" , 237},
            	{"relevant_evt_OF_EC2_8" , 238},
            	{"failF_OF_EC2_8" , 239},
            	{"required_OF_EC3_1" , 240},
            	{"already_S_OF_EC3_1" , 241},
            	{"S_OF_EC3_1" , 242},
            	{"relevant_evt_OF_EC3_1" , 243},
            	{"failF_OF_EC3_1" , 244},
            	{"required_OF_EC3_2" , 245},
            	{"already_S_OF_EC3_2" , 246},
            	{"S_OF_EC3_2" , 247},
            	{"relevant_evt_OF_EC3_2" , 248},
            	{"failF_OF_EC3_2" , 249},
            	{"required_OF_EC3_3" , 250},
            	{"already_S_OF_EC3_3" , 251},
            	{"S_OF_EC3_3" , 252},
            	{"relevant_evt_OF_EC3_3" , 253},
            	{"failF_OF_EC3_3" , 254},
            	{"required_OF_EC3_4" , 255},
            	{"already_S_OF_EC3_4" , 256},
            	{"S_OF_EC3_4" , 257},
            	{"relevant_evt_OF_EC3_4" , 258},
            	{"failF_OF_EC3_4" , 259},
            	{"required_OF_EC3_5" , 260},
            	{"already_S_OF_EC3_5" , 261},
            	{"S_OF_EC3_5" , 262},
            	{"relevant_evt_OF_EC3_5" , 263},
            	{"failF_OF_EC3_5" , 264},
            	{"required_OF_EC3_6" , 265},
            	{"already_S_OF_EC3_6" , 266},
            	{"S_OF_EC3_6" , 267},
            	{"relevant_evt_OF_EC3_6" , 268},
            	{"failF_OF_EC3_6" , 269},
            	{"required_OF_EC3_7" , 270},
            	{"already_S_OF_EC3_7" , 271},
            	{"S_OF_EC3_7" , 272},
            	{"relevant_evt_OF_EC3_7" , 273},
            	{"failF_OF_EC3_7" , 274},
            	{"required_OF_EC3_8" , 275},
            	{"already_S_OF_EC3_8" , 276},
            	{"S_OF_EC3_8" , 277},
            	{"relevant_evt_OF_EC3_8" , 278},
            	{"failF_OF_EC3_8" , 279},
            	{"required_OF_Filter_1" , 280},
            	{"already_S_OF_Filter_1" , 281},
            	{"S_OF_Filter_1" , 282},
            	{"relevant_evt_OF_Filter_1" , 283},
            	{"required_OF_Filter_2" , 284},
            	{"already_S_OF_Filter_2" , 285},
            	{"S_OF_Filter_2" , 286},
            	{"relevant_evt_OF_Filter_2" , 287},
            	{"required_OF_Filter_3" , 288},
            	{"already_S_OF_Filter_3" , 289},
            	{"S_OF_Filter_3" , 290},
            	{"relevant_evt_OF_Filter_3" , 291},
            	{"required_OF_Filter_4" , 292},
            	{"already_S_OF_Filter_4" , 293},
            	{"S_OF_Filter_4" , 294},
            	{"relevant_evt_OF_Filter_4" , 295},
            	{"required_OF_Filter_5" , 296},
            	{"already_S_OF_Filter_5" , 297},
            	{"S_OF_Filter_5" , 298},
            	{"relevant_evt_OF_Filter_5" , 299},
            	{"required_OF_Filter_6" , 300},
            	{"already_S_OF_Filter_6" , 301},
            	{"S_OF_Filter_6" , 302},
            	{"relevant_evt_OF_Filter_6" , 303},
            	{"required_OF_Filter_7" , 304},
            	{"already_S_OF_Filter_7" , 305},
            	{"S_OF_Filter_7" , 306},
            	{"relevant_evt_OF_Filter_7" , 307},
            	{"required_OF_Filter_8" , 308},
            	{"already_S_OF_Filter_8" , 309},
            	{"S_OF_Filter_8" , 310},
            	{"relevant_evt_OF_Filter_8" , 311},
            	{"required_OF_System" , 312},
            	{"already_S_OF_System" , 313},
            	{"S_OF_System" , 314},
            	{"relevant_evt_OF_System" , 315},
            	{"required_OF_UE_1" , 316},
            	{"already_S_OF_UE_1" , 317},
            	{"S_OF_UE_1" , 318},
            	{"relevant_evt_OF_UE_1" , 319},
            	{"required_OF_fault_cfg_1_1" , 320},
            	{"already_S_OF_fault_cfg_1_1" , 321},
            	{"S_OF_fault_cfg_1_1" , 322},
            	{"relevant_evt_OF_fault_cfg_1_1" , 323},
            	{"required_OF_fault_cfg_1_2" , 324},
            	{"already_S_OF_fault_cfg_1_2" , 325},
            	{"S_OF_fault_cfg_1_2" , 326},
            	{"relevant_evt_OF_fault_cfg_1_2" , 327},
            	{"required_OF_fault_cfg_1_3" , 328},
            	{"already_S_OF_fault_cfg_1_3" , 329},
            	{"S_OF_fault_cfg_1_3" , 330},
            	{"relevant_evt_OF_fault_cfg_1_3" , 331},
            	{"required_OF_fault_cfg_1_4" , 332},
            	{"already_S_OF_fault_cfg_1_4" , 333},
            	{"S_OF_fault_cfg_1_4" , 334},
            	{"relevant_evt_OF_fault_cfg_1_4" , 335},
            	{"required_OF_fault_cfg_1_5" , 336},
            	{"already_S_OF_fault_cfg_1_5" , 337},
            	{"S_OF_fault_cfg_1_5" , 338},
            	{"relevant_evt_OF_fault_cfg_1_5" , 339},
            	{"required_OF_fault_cfg_1_6" , 340},
            	{"already_S_OF_fault_cfg_1_6" , 341},
            	{"S_OF_fault_cfg_1_6" , 342},
            	{"relevant_evt_OF_fault_cfg_1_6" , 343},
            	{"required_OF_fault_cfg_1_7" , 344},
            	{"already_S_OF_fault_cfg_1_7" , 345},
            	{"S_OF_fault_cfg_1_7" , 346},
            	{"relevant_evt_OF_fault_cfg_1_7" , 347},
            	{"required_OF_fault_cfg_1_8" , 348},
            	{"already_S_OF_fault_cfg_1_8" , 349},
            	{"S_OF_fault_cfg_1_8" , 350},
            	{"relevant_evt_OF_fault_cfg_1_8" , 351},
            	{"required_OF_fault_cfg_3_1" , 352},
            	{"already_S_OF_fault_cfg_3_1" , 353},
            	{"S_OF_fault_cfg_3_1" , 354},
            	{"relevant_evt_OF_fault_cfg_3_1" , 355},
            	{"required_OF_fault_cfg_3_2" , 356},
            	{"already_S_OF_fault_cfg_3_2" , 357},
            	{"S_OF_fault_cfg_3_2" , 358},
            	{"relevant_evt_OF_fault_cfg_3_2" , 359},
            	{"required_OF_fault_cfg_3_3" , 360},
            	{"already_S_OF_fault_cfg_3_3" , 361},
            	{"S_OF_fault_cfg_3_3" , 362},
            	{"relevant_evt_OF_fault_cfg_3_3" , 363},
            	{"required_OF_fault_cfg_3_4" , 364},
            	{"already_S_OF_fault_cfg_3_4" , 365},
            	{"S_OF_fault_cfg_3_4" , 366},
            	{"relevant_evt_OF_fault_cfg_3_4" , 367},
            	{"required_OF_fault_cfg_3_5" , 368},
            	{"already_S_OF_fault_cfg_3_5" , 369},
            	{"S_OF_fault_cfg_3_5" , 370},
            	{"relevant_evt_OF_fault_cfg_3_5" , 371},
            	{"required_OF_fault_cfg_3_6" , 372},
            	{"already_S_OF_fault_cfg_3_6" , 373},
            	{"S_OF_fault_cfg_3_6" , 374},
            	{"relevant_evt_OF_fault_cfg_3_6" , 375},
            	{"required_OF_fault_cfg_3_7" , 376},
            	{"already_S_OF_fault_cfg_3_7" , 377},
            	{"S_OF_fault_cfg_3_7" , 378},
            	{"relevant_evt_OF_fault_cfg_3_7" , 379},
            	{"required_OF_fault_cfg_3_8" , 380},
            	{"already_S_OF_fault_cfg_3_8" , 381},
            	{"S_OF_fault_cfg_3_8" , 382},
            	{"relevant_evt_OF_fault_cfg_3_8" , 383},
            	{"required_OF_fault_cfg_4_1" , 384},
            	{"already_S_OF_fault_cfg_4_1" , 385},
            	{"S_OF_fault_cfg_4_1" , 386},
            	{"relevant_evt_OF_fault_cfg_4_1" , 387},
            	{"required_OF_fault_cfg_4_2" , 388},
            	{"already_S_OF_fault_cfg_4_2" , 389},
            	{"S_OF_fault_cfg_4_2" , 390},
            	{"relevant_evt_OF_fault_cfg_4_2" , 391},
            	{"required_OF_fault_cfg_4_3" , 392},
            	{"already_S_OF_fault_cfg_4_3" , 393},
            	{"S_OF_fault_cfg_4_3" , 394},
            	{"relevant_evt_OF_fault_cfg_4_3" , 395},
            	{"required_OF_fault_cfg_4_4" , 396},
            	{"already_S_OF_fault_cfg_4_4" , 397},
            	{"S_OF_fault_cfg_4_4" , 398},
            	{"relevant_evt_OF_fault_cfg_4_4" , 399},
            	{"required_OF_fault_cfg_4_5" , 400},
            	{"already_S_OF_fault_cfg_4_5" , 401},
            	{"S_OF_fault_cfg_4_5" , 402},
            	{"relevant_evt_OF_fault_cfg_4_5" , 403},
            	{"required_OF_fault_cfg_4_6" , 404},
            	{"already_S_OF_fault_cfg_4_6" , 405},
            	{"S_OF_fault_cfg_4_6" , 406},
            	{"relevant_evt_OF_fault_cfg_4_6" , 407},
            	{"required_OF_fault_cfg_4_7" , 408},
            	{"already_S_OF_fault_cfg_4_7" , 409},
            	{"S_OF_fault_cfg_4_7" , 410},
            	{"relevant_evt_OF_fault_cfg_4_7" , 411},
            	{"required_OF_fault_cfg_4_8" , 412},
            	{"already_S_OF_fault_cfg_4_8" , 413},
            	{"S_OF_fault_cfg_4_8" , 414},
            	{"relevant_evt_OF_fault_cfg_4_8" , 415},
            	{"required_OF_gate_1_1" , 416},
            	{"already_S_OF_gate_1_1" , 417},
            	{"S_OF_gate_1_1" , 418},
            	{"relevant_evt_OF_gate_1_1" , 419},
            	{"required_OF_gate_1_2" , 420},
            	{"already_S_OF_gate_1_2" , 421},
            	{"S_OF_gate_1_2" , 422},
            	{"relevant_evt_OF_gate_1_2" , 423},
            	{"required_OF_gate_1_3" , 424},
            	{"already_S_OF_gate_1_3" , 425},
            	{"S_OF_gate_1_3" , 426},
            	{"relevant_evt_OF_gate_1_3" , 427},
            	{"required_OF_gate_1_4" , 428},
            	{"already_S_OF_gate_1_4" , 429},
            	{"S_OF_gate_1_4" , 430},
            	{"relevant_evt_OF_gate_1_4" , 431},
            	{"required_OF_gate_1_5" , 432},
            	{"already_S_OF_gate_1_5" , 433},
            	{"S_OF_gate_1_5" , 434},
            	{"relevant_evt_OF_gate_1_5" , 435},
            	{"required_OF_gate_1_6" , 436},
            	{"already_S_OF_gate_1_6" , 437},
            	{"S_OF_gate_1_6" , 438},
            	{"relevant_evt_OF_gate_1_6" , 439},
            	{"required_OF_gate_1_7" , 440},
            	{"already_S_OF_gate_1_7" , 441},
            	{"S_OF_gate_1_7" , 442},
            	{"relevant_evt_OF_gate_1_7" , 443},
            	{"required_OF_gate_1_8" , 444},
            	{"already_S_OF_gate_1_8" , 445},
            	{"S_OF_gate_1_8" , 446},
            	{"relevant_evt_OF_gate_1_8" , 447},
            	{"required_OF_gate_2_1" , 448},
            	{"already_S_OF_gate_2_1" , 449},
            	{"S_OF_gate_2_1" , 450},
            	{"relevant_evt_OF_gate_2_1" , 451},
            	{"required_OF_gate_2_2" , 452},
            	{"already_S_OF_gate_2_2" , 453},
            	{"S_OF_gate_2_2" , 454},
            	{"relevant_evt_OF_gate_2_2" , 455},
            	{"required_OF_gate_2_3" , 456},
            	{"already_S_OF_gate_2_3" , 457},
            	{"S_OF_gate_2_3" , 458},
            	{"relevant_evt_OF_gate_2_3" , 459},
            	{"required_OF_gate_2_4" , 460},
            	{"already_S_OF_gate_2_4" , 461},
            	{"S_OF_gate_2_4" , 462},
            	{"relevant_evt_OF_gate_2_4" , 463},
            	{"required_OF_gate_2_5" , 464},
            	{"already_S_OF_gate_2_5" , 465},
            	{"S_OF_gate_2_5" , 466},
            	{"relevant_evt_OF_gate_2_5" , 467},
            	{"required_OF_gate_2_6" , 468},
            	{"already_S_OF_gate_2_6" , 469},
            	{"S_OF_gate_2_6" , 470},
            	{"relevant_evt_OF_gate_2_6" , 471},
            	{"required_OF_gate_2_7" , 472},
            	{"already_S_OF_gate_2_7" , 473},
            	{"S_OF_gate_2_7" , 474},
            	{"relevant_evt_OF_gate_2_7" , 475},
            	{"required_OF_gate_2_8" , 476},
            	{"already_S_OF_gate_2_8" , 477},
            	{"S_OF_gate_2_8" , 478},
            	{"relevant_evt_OF_gate_2_8" , 479}},

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
                    480 ,
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
            bool REINITIALISATION_OF_required_OF_E1_1 ;
            bool REINITIALISATION_OF_S_OF_E1_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_E1_1 ;
            bool REINITIALISATION_OF_required_OF_E1_2 ;
            bool REINITIALISATION_OF_S_OF_E1_2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_E1_2 ;
            bool REINITIALISATION_OF_required_OF_E1_3 ;
            bool REINITIALISATION_OF_S_OF_E1_3 ;
            bool REINITIALISATION_OF_relevant_evt_OF_E1_3 ;
            bool REINITIALISATION_OF_required_OF_E1_4 ;
            bool REINITIALISATION_OF_S_OF_E1_4 ;
            bool REINITIALISATION_OF_relevant_evt_OF_E1_4 ;
            bool REINITIALISATION_OF_required_OF_E1_5 ;
            bool REINITIALISATION_OF_S_OF_E1_5 ;
            bool REINITIALISATION_OF_relevant_evt_OF_E1_5 ;
            bool REINITIALISATION_OF_required_OF_E1_6 ;
            bool REINITIALISATION_OF_S_OF_E1_6 ;
            bool REINITIALISATION_OF_relevant_evt_OF_E1_6 ;
            bool REINITIALISATION_OF_required_OF_E1_7 ;
            bool REINITIALISATION_OF_S_OF_E1_7 ;
            bool REINITIALISATION_OF_relevant_evt_OF_E1_7 ;
            bool REINITIALISATION_OF_required_OF_E1_8 ;
            bool REINITIALISATION_OF_S_OF_E1_8 ;
            bool REINITIALISATION_OF_relevant_evt_OF_E1_8 ;
            bool REINITIALISATION_OF_required_OF_E2_1 ;
            bool REINITIALISATION_OF_S_OF_E2_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_E2_1 ;
            bool REINITIALISATION_OF_required_OF_E2_2 ;
            bool REINITIALISATION_OF_S_OF_E2_2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_E2_2 ;
            bool REINITIALISATION_OF_required_OF_E2_3 ;
            bool REINITIALISATION_OF_S_OF_E2_3 ;
            bool REINITIALISATION_OF_relevant_evt_OF_E2_3 ;
            bool REINITIALISATION_OF_required_OF_E2_4 ;
            bool REINITIALISATION_OF_S_OF_E2_4 ;
            bool REINITIALISATION_OF_relevant_evt_OF_E2_4 ;
            bool REINITIALISATION_OF_required_OF_E2_5 ;
            bool REINITIALISATION_OF_S_OF_E2_5 ;
            bool REINITIALISATION_OF_relevant_evt_OF_E2_5 ;
            bool REINITIALISATION_OF_required_OF_E2_6 ;
            bool REINITIALISATION_OF_S_OF_E2_6 ;
            bool REINITIALISATION_OF_relevant_evt_OF_E2_6 ;
            bool REINITIALISATION_OF_required_OF_E2_7 ;
            bool REINITIALISATION_OF_S_OF_E2_7 ;
            bool REINITIALISATION_OF_relevant_evt_OF_E2_7 ;
            bool REINITIALISATION_OF_required_OF_E2_8 ;
            bool REINITIALISATION_OF_S_OF_E2_8 ;
            bool REINITIALISATION_OF_relevant_evt_OF_E2_8 ;
            bool REINITIALISATION_OF_required_OF_E3_1 ;
            bool REINITIALISATION_OF_S_OF_E3_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_E3_1 ;
            bool REINITIALISATION_OF_required_OF_E3_2 ;
            bool REINITIALISATION_OF_S_OF_E3_2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_E3_2 ;
            bool REINITIALISATION_OF_required_OF_E3_3 ;
            bool REINITIALISATION_OF_S_OF_E3_3 ;
            bool REINITIALISATION_OF_relevant_evt_OF_E3_3 ;
            bool REINITIALISATION_OF_required_OF_E3_4 ;
            bool REINITIALISATION_OF_S_OF_E3_4 ;
            bool REINITIALISATION_OF_relevant_evt_OF_E3_4 ;
            bool REINITIALISATION_OF_required_OF_E3_5 ;
            bool REINITIALISATION_OF_S_OF_E3_5 ;
            bool REINITIALISATION_OF_relevant_evt_OF_E3_5 ;
            bool REINITIALISATION_OF_required_OF_E3_6 ;
            bool REINITIALISATION_OF_S_OF_E3_6 ;
            bool REINITIALISATION_OF_relevant_evt_OF_E3_6 ;
            bool REINITIALISATION_OF_required_OF_E3_7 ;
            bool REINITIALISATION_OF_S_OF_E3_7 ;
            bool REINITIALISATION_OF_relevant_evt_OF_E3_7 ;
            bool REINITIALISATION_OF_required_OF_E3_8 ;
            bool REINITIALISATION_OF_S_OF_E3_8 ;
            bool REINITIALISATION_OF_relevant_evt_OF_E3_8 ;
            bool REINITIALISATION_OF_required_OF_E4_1 ;
            bool REINITIALISATION_OF_S_OF_E4_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_E4_1 ;
            bool REINITIALISATION_OF_required_OF_E4_2 ;
            bool REINITIALISATION_OF_S_OF_E4_2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_E4_2 ;
            bool REINITIALISATION_OF_required_OF_E4_3 ;
            bool REINITIALISATION_OF_S_OF_E4_3 ;
            bool REINITIALISATION_OF_relevant_evt_OF_E4_3 ;
            bool REINITIALISATION_OF_required_OF_E4_4 ;
            bool REINITIALISATION_OF_S_OF_E4_4 ;
            bool REINITIALISATION_OF_relevant_evt_OF_E4_4 ;
            bool REINITIALISATION_OF_required_OF_E4_5 ;
            bool REINITIALISATION_OF_S_OF_E4_5 ;
            bool REINITIALISATION_OF_relevant_evt_OF_E4_5 ;
            bool REINITIALISATION_OF_required_OF_E4_6 ;
            bool REINITIALISATION_OF_S_OF_E4_6 ;
            bool REINITIALISATION_OF_relevant_evt_OF_E4_6 ;
            bool REINITIALISATION_OF_required_OF_E4_7 ;
            bool REINITIALISATION_OF_S_OF_E4_7 ;
            bool REINITIALISATION_OF_relevant_evt_OF_E4_7 ;
            bool REINITIALISATION_OF_required_OF_E4_8 ;
            bool REINITIALISATION_OF_S_OF_E4_8 ;
            bool REINITIALISATION_OF_relevant_evt_OF_E4_8 ;
            bool REINITIALISATION_OF_required_OF_EC1_1 ;
            bool REINITIALISATION_OF_S_OF_EC1_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_EC1_1 ;
            bool REINITIALISATION_OF_required_OF_EC1_2 ;
            bool REINITIALISATION_OF_S_OF_EC1_2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_EC1_2 ;
            bool REINITIALISATION_OF_required_OF_EC1_3 ;
            bool REINITIALISATION_OF_S_OF_EC1_3 ;
            bool REINITIALISATION_OF_relevant_evt_OF_EC1_3 ;
            bool REINITIALISATION_OF_required_OF_EC1_4 ;
            bool REINITIALISATION_OF_S_OF_EC1_4 ;
            bool REINITIALISATION_OF_relevant_evt_OF_EC1_4 ;
            bool REINITIALISATION_OF_required_OF_EC1_5 ;
            bool REINITIALISATION_OF_S_OF_EC1_5 ;
            bool REINITIALISATION_OF_relevant_evt_OF_EC1_5 ;
            bool REINITIALISATION_OF_required_OF_EC1_6 ;
            bool REINITIALISATION_OF_S_OF_EC1_6 ;
            bool REINITIALISATION_OF_relevant_evt_OF_EC1_6 ;
            bool REINITIALISATION_OF_required_OF_EC1_7 ;
            bool REINITIALISATION_OF_S_OF_EC1_7 ;
            bool REINITIALISATION_OF_relevant_evt_OF_EC1_7 ;
            bool REINITIALISATION_OF_required_OF_EC1_8 ;
            bool REINITIALISATION_OF_S_OF_EC1_8 ;
            bool REINITIALISATION_OF_relevant_evt_OF_EC1_8 ;
            bool REINITIALISATION_OF_required_OF_EC2_1 ;
            bool REINITIALISATION_OF_S_OF_EC2_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_EC2_1 ;
            bool REINITIALISATION_OF_required_OF_EC2_2 ;
            bool REINITIALISATION_OF_S_OF_EC2_2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_EC2_2 ;
            bool REINITIALISATION_OF_required_OF_EC2_3 ;
            bool REINITIALISATION_OF_S_OF_EC2_3 ;
            bool REINITIALISATION_OF_relevant_evt_OF_EC2_3 ;
            bool REINITIALISATION_OF_required_OF_EC2_4 ;
            bool REINITIALISATION_OF_S_OF_EC2_4 ;
            bool REINITIALISATION_OF_relevant_evt_OF_EC2_4 ;
            bool REINITIALISATION_OF_required_OF_EC2_5 ;
            bool REINITIALISATION_OF_S_OF_EC2_5 ;
            bool REINITIALISATION_OF_relevant_evt_OF_EC2_5 ;
            bool REINITIALISATION_OF_required_OF_EC2_6 ;
            bool REINITIALISATION_OF_S_OF_EC2_6 ;
            bool REINITIALISATION_OF_relevant_evt_OF_EC2_6 ;
            bool REINITIALISATION_OF_required_OF_EC2_7 ;
            bool REINITIALISATION_OF_S_OF_EC2_7 ;
            bool REINITIALISATION_OF_relevant_evt_OF_EC2_7 ;
            bool REINITIALISATION_OF_required_OF_EC2_8 ;
            bool REINITIALISATION_OF_S_OF_EC2_8 ;
            bool REINITIALISATION_OF_relevant_evt_OF_EC2_8 ;
            bool REINITIALISATION_OF_required_OF_EC3_1 ;
            bool REINITIALISATION_OF_S_OF_EC3_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_EC3_1 ;
            bool REINITIALISATION_OF_required_OF_EC3_2 ;
            bool REINITIALISATION_OF_S_OF_EC3_2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_EC3_2 ;
            bool REINITIALISATION_OF_required_OF_EC3_3 ;
            bool REINITIALISATION_OF_S_OF_EC3_3 ;
            bool REINITIALISATION_OF_relevant_evt_OF_EC3_3 ;
            bool REINITIALISATION_OF_required_OF_EC3_4 ;
            bool REINITIALISATION_OF_S_OF_EC3_4 ;
            bool REINITIALISATION_OF_relevant_evt_OF_EC3_4 ;
            bool REINITIALISATION_OF_required_OF_EC3_5 ;
            bool REINITIALISATION_OF_S_OF_EC3_5 ;
            bool REINITIALISATION_OF_relevant_evt_OF_EC3_5 ;
            bool REINITIALISATION_OF_required_OF_EC3_6 ;
            bool REINITIALISATION_OF_S_OF_EC3_6 ;
            bool REINITIALISATION_OF_relevant_evt_OF_EC3_6 ;
            bool REINITIALISATION_OF_required_OF_EC3_7 ;
            bool REINITIALISATION_OF_S_OF_EC3_7 ;
            bool REINITIALISATION_OF_relevant_evt_OF_EC3_7 ;
            bool REINITIALISATION_OF_required_OF_EC3_8 ;
            bool REINITIALISATION_OF_S_OF_EC3_8 ;
            bool REINITIALISATION_OF_relevant_evt_OF_EC3_8 ;
            bool REINITIALISATION_OF_required_OF_Filter_1 ;
            bool REINITIALISATION_OF_S_OF_Filter_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_Filter_1 ;
            bool REINITIALISATION_OF_required_OF_Filter_2 ;
            bool REINITIALISATION_OF_S_OF_Filter_2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_Filter_2 ;
            bool REINITIALISATION_OF_required_OF_Filter_3 ;
            bool REINITIALISATION_OF_S_OF_Filter_3 ;
            bool REINITIALISATION_OF_relevant_evt_OF_Filter_3 ;
            bool REINITIALISATION_OF_required_OF_Filter_4 ;
            bool REINITIALISATION_OF_S_OF_Filter_4 ;
            bool REINITIALISATION_OF_relevant_evt_OF_Filter_4 ;
            bool REINITIALISATION_OF_required_OF_Filter_5 ;
            bool REINITIALISATION_OF_S_OF_Filter_5 ;
            bool REINITIALISATION_OF_relevant_evt_OF_Filter_5 ;
            bool REINITIALISATION_OF_required_OF_Filter_6 ;
            bool REINITIALISATION_OF_S_OF_Filter_6 ;
            bool REINITIALISATION_OF_relevant_evt_OF_Filter_6 ;
            bool REINITIALISATION_OF_required_OF_Filter_7 ;
            bool REINITIALISATION_OF_S_OF_Filter_7 ;
            bool REINITIALISATION_OF_relevant_evt_OF_Filter_7 ;
            bool REINITIALISATION_OF_required_OF_Filter_8 ;
            bool REINITIALISATION_OF_S_OF_Filter_8 ;
            bool REINITIALISATION_OF_relevant_evt_OF_Filter_8 ;
            bool REINITIALISATION_OF_required_OF_System ;
            bool REINITIALISATION_OF_S_OF_System ;
            bool REINITIALISATION_OF_relevant_evt_OF_System ;
            bool REINITIALISATION_OF_required_OF_UE_1 ;
            bool REINITIALISATION_OF_S_OF_UE_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_UE_1 ;
            bool REINITIALISATION_OF_required_OF_fault_cfg_1_1 ;
            bool REINITIALISATION_OF_S_OF_fault_cfg_1_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_fault_cfg_1_1 ;
            bool REINITIALISATION_OF_required_OF_fault_cfg_1_2 ;
            bool REINITIALISATION_OF_S_OF_fault_cfg_1_2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_fault_cfg_1_2 ;
            bool REINITIALISATION_OF_required_OF_fault_cfg_1_3 ;
            bool REINITIALISATION_OF_S_OF_fault_cfg_1_3 ;
            bool REINITIALISATION_OF_relevant_evt_OF_fault_cfg_1_3 ;
            bool REINITIALISATION_OF_required_OF_fault_cfg_1_4 ;
            bool REINITIALISATION_OF_S_OF_fault_cfg_1_4 ;
            bool REINITIALISATION_OF_relevant_evt_OF_fault_cfg_1_4 ;
            bool REINITIALISATION_OF_required_OF_fault_cfg_1_5 ;
            bool REINITIALISATION_OF_S_OF_fault_cfg_1_5 ;
            bool REINITIALISATION_OF_relevant_evt_OF_fault_cfg_1_5 ;
            bool REINITIALISATION_OF_required_OF_fault_cfg_1_6 ;
            bool REINITIALISATION_OF_S_OF_fault_cfg_1_6 ;
            bool REINITIALISATION_OF_relevant_evt_OF_fault_cfg_1_6 ;
            bool REINITIALISATION_OF_required_OF_fault_cfg_1_7 ;
            bool REINITIALISATION_OF_S_OF_fault_cfg_1_7 ;
            bool REINITIALISATION_OF_relevant_evt_OF_fault_cfg_1_7 ;
            bool REINITIALISATION_OF_required_OF_fault_cfg_1_8 ;
            bool REINITIALISATION_OF_S_OF_fault_cfg_1_8 ;
            bool REINITIALISATION_OF_relevant_evt_OF_fault_cfg_1_8 ;
            bool REINITIALISATION_OF_required_OF_fault_cfg_3_1 ;
            bool REINITIALISATION_OF_S_OF_fault_cfg_3_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_fault_cfg_3_1 ;
            bool REINITIALISATION_OF_required_OF_fault_cfg_3_2 ;
            bool REINITIALISATION_OF_S_OF_fault_cfg_3_2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_fault_cfg_3_2 ;
            bool REINITIALISATION_OF_required_OF_fault_cfg_3_3 ;
            bool REINITIALISATION_OF_S_OF_fault_cfg_3_3 ;
            bool REINITIALISATION_OF_relevant_evt_OF_fault_cfg_3_3 ;
            bool REINITIALISATION_OF_required_OF_fault_cfg_3_4 ;
            bool REINITIALISATION_OF_S_OF_fault_cfg_3_4 ;
            bool REINITIALISATION_OF_relevant_evt_OF_fault_cfg_3_4 ;
            bool REINITIALISATION_OF_required_OF_fault_cfg_3_5 ;
            bool REINITIALISATION_OF_S_OF_fault_cfg_3_5 ;
            bool REINITIALISATION_OF_relevant_evt_OF_fault_cfg_3_5 ;
            bool REINITIALISATION_OF_required_OF_fault_cfg_3_6 ;
            bool REINITIALISATION_OF_S_OF_fault_cfg_3_6 ;
            bool REINITIALISATION_OF_relevant_evt_OF_fault_cfg_3_6 ;
            bool REINITIALISATION_OF_required_OF_fault_cfg_3_7 ;
            bool REINITIALISATION_OF_S_OF_fault_cfg_3_7 ;
            bool REINITIALISATION_OF_relevant_evt_OF_fault_cfg_3_7 ;
            bool REINITIALISATION_OF_required_OF_fault_cfg_3_8 ;
            bool REINITIALISATION_OF_S_OF_fault_cfg_3_8 ;
            bool REINITIALISATION_OF_relevant_evt_OF_fault_cfg_3_8 ;
            bool REINITIALISATION_OF_required_OF_fault_cfg_4_1 ;
            bool REINITIALISATION_OF_S_OF_fault_cfg_4_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_fault_cfg_4_1 ;
            bool REINITIALISATION_OF_required_OF_fault_cfg_4_2 ;
            bool REINITIALISATION_OF_S_OF_fault_cfg_4_2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_fault_cfg_4_2 ;
            bool REINITIALISATION_OF_required_OF_fault_cfg_4_3 ;
            bool REINITIALISATION_OF_S_OF_fault_cfg_4_3 ;
            bool REINITIALISATION_OF_relevant_evt_OF_fault_cfg_4_3 ;
            bool REINITIALISATION_OF_required_OF_fault_cfg_4_4 ;
            bool REINITIALISATION_OF_S_OF_fault_cfg_4_4 ;
            bool REINITIALISATION_OF_relevant_evt_OF_fault_cfg_4_4 ;
            bool REINITIALISATION_OF_required_OF_fault_cfg_4_5 ;
            bool REINITIALISATION_OF_S_OF_fault_cfg_4_5 ;
            bool REINITIALISATION_OF_relevant_evt_OF_fault_cfg_4_5 ;
            bool REINITIALISATION_OF_required_OF_fault_cfg_4_6 ;
            bool REINITIALISATION_OF_S_OF_fault_cfg_4_6 ;
            bool REINITIALISATION_OF_relevant_evt_OF_fault_cfg_4_6 ;
            bool REINITIALISATION_OF_required_OF_fault_cfg_4_7 ;
            bool REINITIALISATION_OF_S_OF_fault_cfg_4_7 ;
            bool REINITIALISATION_OF_relevant_evt_OF_fault_cfg_4_7 ;
            bool REINITIALISATION_OF_required_OF_fault_cfg_4_8 ;
            bool REINITIALISATION_OF_S_OF_fault_cfg_4_8 ;
            bool REINITIALISATION_OF_relevant_evt_OF_fault_cfg_4_8 ;
            bool REINITIALISATION_OF_required_OF_gate_1_1 ;
            bool REINITIALISATION_OF_S_OF_gate_1_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_gate_1_1 ;
            bool REINITIALISATION_OF_required_OF_gate_1_2 ;
            bool REINITIALISATION_OF_S_OF_gate_1_2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_gate_1_2 ;
            bool REINITIALISATION_OF_required_OF_gate_1_3 ;
            bool REINITIALISATION_OF_S_OF_gate_1_3 ;
            bool REINITIALISATION_OF_relevant_evt_OF_gate_1_3 ;
            bool REINITIALISATION_OF_required_OF_gate_1_4 ;
            bool REINITIALISATION_OF_S_OF_gate_1_4 ;
            bool REINITIALISATION_OF_relevant_evt_OF_gate_1_4 ;
            bool REINITIALISATION_OF_required_OF_gate_1_5 ;
            bool REINITIALISATION_OF_S_OF_gate_1_5 ;
            bool REINITIALISATION_OF_relevant_evt_OF_gate_1_5 ;
            bool REINITIALISATION_OF_required_OF_gate_1_6 ;
            bool REINITIALISATION_OF_S_OF_gate_1_6 ;
            bool REINITIALISATION_OF_relevant_evt_OF_gate_1_6 ;
            bool REINITIALISATION_OF_required_OF_gate_1_7 ;
            bool REINITIALISATION_OF_S_OF_gate_1_7 ;
            bool REINITIALISATION_OF_relevant_evt_OF_gate_1_7 ;
            bool REINITIALISATION_OF_required_OF_gate_1_8 ;
            bool REINITIALISATION_OF_S_OF_gate_1_8 ;
            bool REINITIALISATION_OF_relevant_evt_OF_gate_1_8 ;
            bool REINITIALISATION_OF_required_OF_gate_2_1 ;
            bool REINITIALISATION_OF_S_OF_gate_2_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_gate_2_1 ;
            bool REINITIALISATION_OF_required_OF_gate_2_2 ;
            bool REINITIALISATION_OF_S_OF_gate_2_2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_gate_2_2 ;
            bool REINITIALISATION_OF_required_OF_gate_2_3 ;
            bool REINITIALISATION_OF_S_OF_gate_2_3 ;
            bool REINITIALISATION_OF_relevant_evt_OF_gate_2_3 ;
            bool REINITIALISATION_OF_required_OF_gate_2_4 ;
            bool REINITIALISATION_OF_S_OF_gate_2_4 ;
            bool REINITIALISATION_OF_relevant_evt_OF_gate_2_4 ;
            bool REINITIALISATION_OF_required_OF_gate_2_5 ;
            bool REINITIALISATION_OF_S_OF_gate_2_5 ;
            bool REINITIALISATION_OF_relevant_evt_OF_gate_2_5 ;
            bool REINITIALISATION_OF_required_OF_gate_2_6 ;
            bool REINITIALISATION_OF_S_OF_gate_2_6 ;
            bool REINITIALISATION_OF_relevant_evt_OF_gate_2_6 ;
            bool REINITIALISATION_OF_required_OF_gate_2_7 ;
            bool REINITIALISATION_OF_S_OF_gate_2_7 ;
            bool REINITIALISATION_OF_relevant_evt_OF_gate_2_7 ;
            bool REINITIALISATION_OF_required_OF_gate_2_8 ;
            bool REINITIALISATION_OF_S_OF_gate_2_8 ;
            bool REINITIALISATION_OF_relevant_evt_OF_gate_2_8 ;
            
		/* ---------- DECLARATION OF CONSTANTS ------------ */
			std::string const calculate_required_OF_E2_1 = "fn_fathers_and_trig";
			bool const Profil1_OF___ARBRE__EIRM = true;
			bool const force_relevant_events_OF_E4_3 = false;
			bool const force_relevant_events_OF_gate_1_6 = false;
			std::string const calculate_required_OF_fault_cfg_1_8 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_gate_2_1 = false;
			double const mu_OF_E3_5 = 0.1;
			double const lambda_OF_EC1_3 = 0.2;
			bool const force_relevant_events_OF_E1_6 = false;
			bool const force_relevant_events_OF_E1_1 = false;
			bool const force_relevant_events_OF_E3_1 = false;
			double const lambda_OF_EC2_7 = 0.2;
			std::string const calculate_required_OF_gate_1_5 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_Filter_2 = false;
			double const lambda_OF_E4_8 = 0.2;
			bool const force_relevant_events_OF_E1_5 = false;
			bool const force_relevant_events_OF_EC1_8 = false;
			double const lambda_OF_E3_6 = 0.2;
			bool const failF_FROZEN_OF_E3_5 = false;
			std::string const calculate_required_OF_fault_cfg_1_4 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_EC1_3 = false;
			std::string const step_down_OF_fault_cfg_3_5 = "rep_any";
			double const mu_OF_E4_1 = 0.1;
			std::string const calculate_required_OF_EC1_5 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_E2_1 = false;
			std::string const step_down_OF_gate_2_8 = "rep_any";
			std::string const step_down_OF_fault_cfg_3_3 = "rep_any";
			std::string const calculate_required_OF_E3_5 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_fault_cfg_1_7 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_fault_cfg_1_8 = false;
			double const lambda_OF_E2_8 = 0.3;
			double const mu_OF_E3_2 = 0.1;
			std::string const calculate_required_OF_fault_cfg_1_3 = "fn_fathers_and_trig";
			std::string const step_down_OF_gate_2_5 = "rep_any";
			double const mu_OF_E2_3 = 0.1;
			bool const failF_FROZEN_OF_E4_1 = false;
			bool const force_relevant_events_OF_Filter_3 = false;
			double const lambda_OF_E2_5 = 0.3;
			bool const force_relevant_events_OF_gate_1_5 = false;
			std::string const calculate_required_OF_E3_4 = "fn_fathers_and_trig";
			double const mu_OF_EC1_6 = 0.1;
			std::string const step_down_OF_gate_2_1 = "rep_any";
			bool const failF_FROZEN_OF_E3_2 = false;
			double const lambda_OF_E3_5 = 0.2;
			std::string const calculate_required_OF_E1_7 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_E2_3 = false;
			double const mu_OF_EC1_4 = 0.1;
			bool const force_relevant_events_OF_fault_cfg_1_4 = false;
			double const lambda_OF_E2_4 = 0.3;
			bool const force_relevant_events_OF_EC1_5 = false;
			bool const failF_FROZEN_OF_EC1_6 = false;
			std::string const calculate_required_OF_E3_2 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_E3_5 = false;
			std::string const calculate_required_OF_E2_3 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_fault_cfg_1_7 = false;
			std::string const calculate_required_OF_fault_cfg_4_8 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_EC1_4 = false;
			double const lambda_OF_E3_4 = 0.2;
			double const lambda_OF_E1_6 = 0.25;
			double const lambda_OF_E1_1 = 0.25;
			bool const force_relevant_events_OF_EC3_1 = false;
			double const lambda_OF_E1_5 = 0.25;
			std::string const calculate_required_OF_E2_4 = "fn_fathers_and_trig";
			double const lambda_OF_E4_1 = 0.2;
			std::string const step_down_OF_fault_cfg_1_2 = "rep_any";
			double const mu_OF_E1_4 = 0.1;
			std::string const calculate_required_OF_EC1_6 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_fault_cfg_1_1 = "fn_fathers_and_trig";
			double const mu_OF_EC3_6 = 0.1;
			bool const force_relevant_events_OF_E3_4 = false;
			double const lambda_OF_E3_2 = 0.2;
			double const mu_OF_EC3_5 = 0.1;
			bool const force_relevant_events_OF_E1_7 = false;
			std::string const calculate_required_OF_fault_cfg_3_1 = "fn_fathers_and_trig";
			std::string const step_down_OF_fault_cfg_3_6 = "rep_any";
			bool const failF_FROZEN_OF_E1_4 = false;
			std::string const step_down_OF_gate_1_5 = "rep_any";
			double const mu_OF_E4_3 = 0.1;
			bool const trim_article_OF___ARBRE__EIRM = false;
			double const lambda_OF_EC1_6 = 0.2;
			bool const force_relevant_events_OF_E3_2 = false;
			std::string const calculate_required_OF_fault_cfg_4_2 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_E3_3 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_E2_3 = false;
			std::string const step_down_OF_fault_cfg_1_4 = "rep_any";
			bool const failF_FROZEN_OF_EC3_5 = false;
			bool const force_relevant_events_OF_fault_cfg_4_8 = false;
			std::string const calculate_required_OF_E1_4 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_EC1_1 = false;
			double const mu_OF_E1_6 = 0.1;
			double const mu_OF_E1_1 = 0.1;
			double const mu_OF_E3_1 = 0.1;
			bool const force_relevant_events_OF_E2_4 = false;
			bool const failF_FROZEN_OF_E4_3 = false;
			double const mu_OF_E1_3 = 0.1;
			std::string const calculate_required_OF_EC1_7 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_EC1_6 = false;
			std::string const calculate_required_OF_Filter_8 = "fn_fathers_and_trig";
			std::string const step_down_OF_fault_cfg_1_7 = "rep_any";
			std::string const calculate_required_OF_EC3_5 = "fn_fathers_and_trig";
			double const mu_OF_EC1_8 = 0.1;
			bool const force_relevant_events_OF_fault_cfg_1_1 = false;
			std::string const step_down_OF_fault_cfg_1_3 = "rep_any";
			std::string const calculate_required_OF_Filter_6 = "fn_fathers_and_trig";
			double const lambda_OF_E3_3 = 0.2;
			std::string const calculate_required_OF_E4_3 = "fn_fathers_and_trig";
			double const mu_OF_E2_6 = 0.1;
			double const lambda_OF_E2_7 = 0.3;
			bool const force_relevant_events_OF_fault_cfg_3_1 = false;
			bool const force_relevant_events_OF_gate_2_2 = false;
			bool const failF_FROZEN_OF_E1_6 = false;
			bool const failF_FROZEN_OF_E1_1 = false;
			bool const failF_FROZEN_OF_E3_1 = false;
			bool const failF_FROZEN_OF_E1_3 = false;
			double const mu_OF_E2_1 = 0.1;
			std::string const calculate_required_OF_E2_2 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_EC1_8 = false;
			bool const force_relevant_events_OF_E3_3 = false;
			double const lambda_OF_EC3_5 = 0.2;
			std::string const calculate_required_OF_E3_1 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_E2_6 = false;
			std::string const calculate_required_OF_E1_3 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_gate_1_8 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_E1_4 = false;
			std::string const calculate_required_OF_EC2_8 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_E2_1 = false;
			double const lambda_OF_E4_3 = 0.2;
			double const mu_OF_EC3_7 = 0.1;
			std::string const calculate_required_OF_fault_cfg_4_7 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_gate_2_7 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_EC1_7 = false;
			bool const force_relevant_events_OF_Filter_8 = false;
			bool const force_relevant_events_OF_EC3_5 = false;
			std::string const calculate_required_OF_E2_6 = "fn_fathers_and_trig";
			double const lambda_OF_E3_1 = 0.2;
			bool const failF_FROZEN_OF_EC3_7 = false;
			double const mu_OF_EC2_1 = 0.1;
			double const mu_OF_EC1_5 = 0.1;
			bool const force_relevant_events_OF_E2_2 = false;
			double const lambda_OF_EC1_8 = 0.2;
			std::string const step_down_OF_fault_cfg_1_6 = "rep_any";
			bool const force_relevant_events_OF_EC2_4 = false;
			std::string const calculate_required_OF_Filter_3 = "fn_fathers_and_trig";
			std::string const step_down_OF_fault_cfg_3_1 = "rep_any";
			double const mu_OF_EC3_1 = 0.1;
			std::string const calculate_required_OF_EC3_7 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_E1_3 = false;
			bool const force_relevant_events_OF_gate_1_8 = false;
			bool const force_relevant_events_OF_EC2_8 = false;
			bool const failF_FROZEN_OF_EC2_1 = false;
			bool const failF_FROZEN_OF_EC1_5 = false;
			bool const force_relevant_events_OF_gate_2_7 = false;
			bool const force_relevant_events_OF_fault_cfg_4_7 = false;
			std::string const step_down_OF_fault_cfg_3_4 = "rep_any";
			double const mu_OF_E3_4 = 0.1;
			std::string const calculate_required_OF_gate_1_4 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_gate_1_3 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_E4_7 = false;
			bool const failF_FROZEN_OF_EC3_1 = false;
			bool const force_relevant_events_OF_E2_6 = false;
			double const mu_OF_E1_7 = 0.1;
			double const mu_OF_E2_8 = 0.1;
			bool const force_relevant_events_OF_UE_1 = true;
			std::string const calculate_required_OF_EC2_1 = "fn_fathers_and_trig";
			double const lambda_OF_EC3_7 = 0.2;
			bool const failF_FROZEN_OF_E3_4 = false;
			double const mu_OF_E2_5 = 0.1;
			std::string const calculate_required_OF_EC3_1 = "fn_fathers_and_trig";
			double const mu_OF_E4_4 = 0.1;
			double const lambda_OF_E1_4 = 0.25;
			bool const failF_FROZEN_OF_E1_7 = false;
			bool const failF_FROZEN_OF_E2_8 = false;
			std::string const step_down_OF_gate_1_6 = "rep_any";
			double const mu_OF_EC1_1 = 0.1;
			double const mu_OF_EC2_2 = 0.1;
			bool const force_relevant_events_OF_EC3_7 = false;
			std::string const calculate_required_OF_gate_1_1 = "fn_fathers_and_trig";
			double const mu_OF_E2_4 = 0.1;
			double const mu_OF_E3_8 = 0.1;
			double const lambda_OF_EC1_5 = 0.2;
			double const lambda_OF_EC2_1 = 0.2;
			bool const failF_FROZEN_OF_E2_5 = false;
			bool const failF_FROZEN_OF_E4_4 = false;
			std::string const calculate_required_OF_E2_8 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_gate_1_4 = false;
			bool const force_relevant_events_OF_gate_1_3 = false;
			double const lambda_OF_EC3_1 = 0.2;
			bool const failF_FROZEN_OF_EC1_1 = false;
			bool const failF_FROZEN_OF_EC2_2 = false;
			bool const failF_FROZEN_OF_E2_4 = false;
			std::string const calculate_required_OF_Filter_4 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_EC2_1 = false;
			std::string const calculate_required_OF_E2_5 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_gate_2_3 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_E3_8 = false;
			std::string const calculate_required_OF_E4_4 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_gate_2_4 = false;
			double const mu_OF_E3_3 = 0.1;
			double const lambda_OF_E1_3 = 0.25;
			std::string const calculate_required_OF_EC1_1 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_EC2_2 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_gate_1_2 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_E3_8 = "fn_fathers_and_trig";
			std::string const step_down_OF_fault_cfg_1_8 = "rep_any";
			bool const force_relevant_events_OF_gate_1_1 = false;
			double const mu_OF_EC1_7 = 0.1;
			bool const force_relevant_events_OF_EC2_3 = false;
			bool const failF_FROZEN_OF_E3_3 = false;
			double const lambda_OF_E4_4 = 0.2;
			std::string const calculate_required_OF_gate_2_2 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_E2_8 = false;
			bool const force_relevant_events_OF_E3_7 = false;
			bool const no_trim_OF___ARBRE__EIRM = false;
			double const lambda_OF_EC1_1 = 0.2;
			double const mu_OF_E4_6 = 0.1;
			double const lambda_OF_EC2_2 = 0.2;
			bool const force_relevant_events_OF_Filter_4 = false;
			bool const failF_FROZEN_OF_EC1_7 = false;
			double const mu_OF_EC3_4 = 0.1;
			bool const force_relevant_events_OF_E2_5 = false;
			double const lambda_OF_E3_8 = 0.2;
			bool const force_relevant_events_OF_gate_2_3 = false;
			std::string const calculate_required_OF_Filter_5 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_E4_4 = false;
			double const mu_OF_E2_2 = 0.1;
			std::string const step_down_OF_gate_1_4 = "rep_any";
			std::string const calculate_required_OF_fault_cfg_4_3 = "fn_fathers_and_trig";
			std::string const step_down_OF_gate_1_3 = "rep_any";
			double const mu_OF_EC2_4 = 0.1;
			bool const force_relevant_events_OF_EC2_2 = false;
			std::string const calculate_required_OF_fault_cfg_3_7 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_gate_1_2 = false;
			bool const failF_FROZEN_OF_E4_6 = false;
			double const mu_OF_EC2_8 = 0.1;
			bool const force_relevant_events_OF_E3_8 = false;
			bool const failF_FROZEN_OF_EC3_4 = false;
			std::string const calculate_required_OF_fault_cfg_1_5 = "fn_fathers_and_trig";
			std::string const trimming_option_OF_OPTIONS = "maximum";
			bool const failF_FROZEN_OF_E2_2 = false;
			bool const failF_FROZEN_OF_EC2_4 = false;
			double const mu_OF_E4_7 = 0.1;
			std::string const calculate_required_OF_E4_6 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_fault_cfg_3_8 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_EC3_4 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_EC2_8 = false;
			double const lambda_OF_EC1_7 = 0.2;
			std::string const calculate_required_OF_EC2_4 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_Filter_5 = false;
			bool const failF_FROZEN_OF_E4_7 = false;
			std::string const calculate_required_OF_gate_2_8 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_fault_cfg_3_3 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_fault_cfg_4_3 = false;
			std::string const calculate_required_OF_E2_7 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_fault_cfg_3_7 = false;
			double const lambda_OF_E4_6 = 0.2;
			std::string const step_down_OF_gate_2_3 = "rep_any";
			double const lambda_OF_EC3_4 = 0.2;
			bool const force_relevant_events_OF_fault_cfg_1_5 = false;
			double const lambda_OF_E1_7 = 0.25;
			std::string const calculate_required_OF_E4_7 = "fn_fathers_and_trig";
			double const lambda_OF_EC2_4 = 0.2;
			bool const repairable_system_OF_OPTIONS = false;
			bool const force_relevant_events_OF_E4_6 = false;
			std::string const calculate_required_OF_EC3_3 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_fault_cfg_3_8 = false;
			double const lambda_OF_EC2_8 = 0.2;
			bool const force_relevant_events_OF_EC3_4 = false;
			double const mu_OF_E4_2 = 0.1;
			std::string const step_down_OF_fault_cfg_1_1 = "rep_any";
			double const lambda_OF_E2_1 = 0.3;
			bool const force_relevant_events_OF_fault_cfg_3_5 = false;
			bool const force_relevant_events_OF_EC2_6 = false;
			double const mu_OF_EC3_8 = 0.1;
			std::string const step_down_OF_gate_2_2 = "rep_any";
			double const lambda_OF_E4_7 = 0.2;
			bool const force_relevant_events_OF_gate_2_8 = false;
			bool const force_relevant_events_OF_EC3_2 = false;
			bool const force_relevant_events_OF_fault_cfg_3_3 = false;
			bool const force_relevant_events_OF_E2_7 = false;
			std::string const calculate_required_OF_EC2_7 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_E4_2 = false;
			bool const force_relevant_events_OF_fault_cfg_4_1 = false;
			std::string const calculate_required_OF_E4_8 = "fn_fathers_and_trig";
			double const lambda_OF_EC3_3 = 0.2;
			bool const trimming_OF_OPTIONS = true;
			bool const failF_FROZEN_OF_EC3_8 = false;
			std::string const calculate_required_OF_E3_6 = "fn_fathers_and_trig";
			double const mu_OF_EC2_3 = 0.1;
			double const mu_OF_E4_5 = 0.1;
			std::string const calculate_required_OF_E1_8 = "fn_fathers_and_trig";
			double const mu_OF_EC1_2 = 0.1;
			double const mu_OF_E3_7 = 0.1;
			std::string const step_down_OF_fault_cfg_3_7 = "rep_any";
			std::string const calculate_required_OF_E4_2 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_EC3_3 = false;
			bool const force_relevant_events_OF_EC2_5 = false;
			std::string const step_down_OF_fault_cfg_1_5 = "rep_any";
			std::string const calculate_required_OF_EC3_8 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_gate_2_4 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_fault_cfg_3_6 = "fn_fathers_and_trig";
			bool const no_repair_OF___ARBRE__EIRM = true;
			bool const failF_FROZEN_OF_EC2_3 = false;
			bool const failF_FROZEN_OF_E4_5 = false;
			bool const failF_FROZEN_OF_EC1_2 = false;
			bool const failF_FROZEN_OF_E3_7 = false;
			std::string const step_down_OF_fault_cfg_3_8 = "rep_any";
			std::string const calculate_required_OF_fault_cfg_4_6 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_gate_2_6 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_fault_cfg_3_2 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_EC2_7 = false;
			double const lambda_OF_E4_2 = 0.2;
			std::string const calculate_required_OF_EC2_3 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_E4_5 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_E4_8 = false;
			double const mu_OF_E1_2 = 0.1;
			std::string const calculate_required_OF_System = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_fault_cfg_1_2 = false;
			double const lambda_OF_EC3_8 = 0.2;
			std::string const calculate_required_OF_EC1_2 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_E3_7 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_E3_6 = false;
			bool const force_relevant_events_OF_E1_8 = false;
			std::string const step_down_OF_gate_1_8 = "rep_any";
			std::string const calculate_required_OF_fault_cfg_4_4 = "fn_fathers_and_trig";
			std::string const step_down_OF_gate_2_7 = "rep_any";
			bool const force_relevant_events_OF_E4_2 = false;
			bool const failF_FROZEN_OF_E1_2 = false;
			bool const force_relevant_events_OF_EC3_8 = false;
			bool const force_relevant_events_OF_fault_cfg_3_6 = false;
			std::string const calculate_required_OF_gate_1_7 = "fn_fathers_and_trig";
			double const lambda_OF_E2_3 = 0.3;
			double const lambda_OF_E4_5 = 0.2;
			double const lambda_OF_EC2_3 = 0.2;
			std::string const calculate_required_OF_Filter_7 = "fn_fathers_and_trig";
			double const lambda_OF_EC1_2 = 0.2;
			double const lambda_OF_E3_7 = 0.2;
			std::string const calculate_required_OF_E4_1 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_fault_cfg_4_6 = false;
			std::string const calculate_required_OF_E1_2 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_gate_2_6 = false;
			bool const force_relevant_events_OF_fault_cfg_3_2 = false;
			bool const force_relevant_events_OF_E4_5 = false;
			bool const force_relevant_events_OF_System = false;
			bool const force_relevant_events_OF_EC1_2 = false;
			std::string const calculate_required_OF_UE_1 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_fault_cfg_1_3 = false;
			bool const force_relevant_events_OF_fault_cfg_4_4 = false;
			double const mu_OF_EC2_6 = 0.1;
			bool const force_relevant_events_OF_gate_1_7 = false;
			std::string const calculate_required_OF_EC1_4 = "fn_fathers_and_trig";
			double const mu_OF_EC3_2 = 0.1;
			std::string const calculate_required_OF_Filter_1 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_Filter_7 = false;
			std::string const calculate_required_OF_fault_cfg_1_6 = "fn_fathers_and_trig";
			double const mu_OF_E2_7 = 0.1;
			bool const force_relevant_events_OF_E4_1 = false;
			bool const force_relevant_events_OF_E1_2 = false;
			bool const failF_FROZEN_OF_EC2_6 = false;
			std::string const step_down_OF_gate_2_4 = "rep_any";
			double const lambda_OF_E1_8 = 0.25;
			std::string const calculate_required_OF_fault_cfg_3_4 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_EC3_2 = false;
			bool const failF_FROZEN_OF_EC3_6 = false;
			std::string const step_down_OF_gate_1_1 = "rep_any";
			bool const failF_FROZEN_OF_E2_7 = false;
			double const lambda_OF_EC1_4 = 0.2;
			std::string const calculate_required_OF_fault_cfg_3_5 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_EC2_6 = "fn_fathers_and_trig";
			double const mu_OF_EC3_3 = 0.1;
			double const mu_OF_EC2_5 = 0.1;
			std::string const step_down_OF_fault_cfg_3_2 = "rep_any";
			std::string const step_down_OF_gate_2_6 = "rep_any";
			std::string const calculate_required_OF_fault_cfg_4_5 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_EC3_2 = "fn_fathers_and_trig";
			double const lambda_OF_E2_2 = 0.3;
			std::string const calculate_required_OF_EC3_6 = "fn_fathers_and_trig";
			double const mu_OF_E1_5 = 0.1;
			bool const force_relevant_events_OF_EC1_4 = false;
			std::string const calculate_required_OF_gate_2_5 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_fault_cfg_4_1 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_Filter_1 = false;
			bool const force_relevant_events_OF_fault_cfg_1_6 = false;
			bool const failF_FROZEN_OF_EC3_3 = false;
			double const mu_OF_EC1_3 = 0.1;
			bool const failF_FROZEN_OF_EC2_5 = false;
			std::string const calculate_required_OF_gate_1_6 = "fn_fathers_and_trig";
			double const mu_OF_EC2_7 = 0.1;
			double const mu_OF_E4_8 = 0.1;
			double const lambda_OF_EC2_6 = 0.2;
			bool const failF_FROZEN_OF_E1_5 = false;
			std::string const calculate_required_OF_gate_2_1 = "fn_fathers_and_trig";
			std::string const step_down_OF_gate_1_7 = "rep_any";
			double const mu_OF_E3_6 = 0.1;
			std::string const step_down_OF_gate_1_2 = "rep_any";
			double const mu_OF_E1_8 = 0.1;
			double const lambda_OF_E2_6 = 0.3;
			double const lambda_OF_EC3_2 = 0.2;
			bool const force_relevant_events_OF_fault_cfg_3_4 = false;
			double const lambda_OF_EC3_6 = 0.2;
			std::string const calculate_required_OF_EC2_5 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_fault_cfg_4_2 = false;
			bool const failF_FROZEN_OF_EC1_3 = false;
			std::string const calculate_required_OF_E1_6 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_E1_1 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_EC2_7 = false;
			std::string const calculate_required_OF_Filter_2 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_E1_5 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_E4_8 = false;
			std::string const calculate_required_OF_EC1_8 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_fault_cfg_4_5 = false;
			bool const failF_FROZEN_OF_E3_6 = false;
			bool const force_relevant_events_OF_EC3_6 = false;
			bool const failF_FROZEN_OF_E1_8 = false;
			std::string const calculate_required_OF_EC1_3 = "fn_fathers_and_trig";
			double const lambda_OF_E1_2 = 0.25;
			bool const force_relevant_events_OF_gate_2_5 = false;
			bool const force_relevant_events_OF_Filter_6 = false;
			double const lambda_OF_EC2_5 = 0.2;
			std::string const calculate_required_OF_fault_cfg_1_2 = "fn_fathers_and_trig";
		
            /* ---------- DECLARATION OF OCCURRENCE RULES FIRING FLAGS ------------ */
            bool FIRE_xx10_OF_E1_1;
            bool FIRE_xx10_OF_E1_2;
            bool FIRE_xx10_OF_E1_3;
            bool FIRE_xx10_OF_E1_4;
            bool FIRE_xx10_OF_E1_5;
            bool FIRE_xx10_OF_E1_6;
            bool FIRE_xx10_OF_E1_7;
            bool FIRE_xx10_OF_E1_8;
            bool FIRE_xx10_OF_E2_1;
            bool FIRE_xx10_OF_E2_2;
            bool FIRE_xx10_OF_E2_3;
            bool FIRE_xx10_OF_E2_4;
            bool FIRE_xx10_OF_E2_5;
            bool FIRE_xx10_OF_E2_6;
            bool FIRE_xx10_OF_E2_7;
            bool FIRE_xx10_OF_E2_8;
            bool FIRE_xx10_OF_E3_1;
            bool FIRE_xx10_OF_E3_2;
            bool FIRE_xx10_OF_E3_3;
            bool FIRE_xx10_OF_E3_4;
            bool FIRE_xx10_OF_E3_5;
            bool FIRE_xx10_OF_E3_6;
            bool FIRE_xx10_OF_E3_7;
            bool FIRE_xx10_OF_E3_8;
            bool FIRE_xx10_OF_E4_1;
            bool FIRE_xx10_OF_E4_2;
            bool FIRE_xx10_OF_E4_3;
            bool FIRE_xx10_OF_E4_4;
            bool FIRE_xx10_OF_E4_5;
            bool FIRE_xx10_OF_E4_6;
            bool FIRE_xx10_OF_E4_7;
            bool FIRE_xx10_OF_E4_8;
            bool FIRE_xx10_OF_EC1_1;
            bool FIRE_xx10_OF_EC1_2;
            bool FIRE_xx10_OF_EC1_3;
            bool FIRE_xx10_OF_EC1_4;
            bool FIRE_xx10_OF_EC1_5;
            bool FIRE_xx10_OF_EC1_6;
            bool FIRE_xx10_OF_EC1_7;
            bool FIRE_xx10_OF_EC1_8;
            bool FIRE_xx10_OF_EC2_1;
            bool FIRE_xx10_OF_EC2_2;
            bool FIRE_xx10_OF_EC2_3;
            bool FIRE_xx10_OF_EC2_4;
            bool FIRE_xx10_OF_EC2_5;
            bool FIRE_xx10_OF_EC2_6;
            bool FIRE_xx10_OF_EC2_7;
            bool FIRE_xx10_OF_EC2_8;
            bool FIRE_xx10_OF_EC3_1;
            bool FIRE_xx10_OF_EC3_2;
            bool FIRE_xx10_OF_EC3_3;
            bool FIRE_xx10_OF_EC3_4;
            bool FIRE_xx10_OF_EC3_5;
            bool FIRE_xx10_OF_EC3_6;
            bool FIRE_xx10_OF_EC3_7;
            bool FIRE_xx10_OF_EC3_8;

            int required_OF_E1_1 = 0 ;
            int already_S_OF_E1_1 = 1 ;
            int S_OF_E1_1 = 2 ;
            int relevant_evt_OF_E1_1 = 3 ;
            int failF_OF_E1_1 = 4 ;
            int required_OF_E1_2 = 5 ;
            int already_S_OF_E1_2 = 6 ;
            int S_OF_E1_2 = 7 ;
            int relevant_evt_OF_E1_2 = 8 ;
            int failF_OF_E1_2 = 9 ;
            int required_OF_E1_3 = 10 ;
            int already_S_OF_E1_3 = 11 ;
            int S_OF_E1_3 = 12 ;
            int relevant_evt_OF_E1_3 = 13 ;
            int failF_OF_E1_3 = 14 ;
            int required_OF_E1_4 = 15 ;
            int already_S_OF_E1_4 = 16 ;
            int S_OF_E1_4 = 17 ;
            int relevant_evt_OF_E1_4 = 18 ;
            int failF_OF_E1_4 = 19 ;
            int required_OF_E1_5 = 20 ;
            int already_S_OF_E1_5 = 21 ;
            int S_OF_E1_5 = 22 ;
            int relevant_evt_OF_E1_5 = 23 ;
            int failF_OF_E1_5 = 24 ;
            int required_OF_E1_6 = 25 ;
            int already_S_OF_E1_6 = 26 ;
            int S_OF_E1_6 = 27 ;
            int relevant_evt_OF_E1_6 = 28 ;
            int failF_OF_E1_6 = 29 ;
            int required_OF_E1_7 = 30 ;
            int already_S_OF_E1_7 = 31 ;
            int S_OF_E1_7 = 32 ;
            int relevant_evt_OF_E1_7 = 33 ;
            int failF_OF_E1_7 = 34 ;
            int required_OF_E1_8 = 35 ;
            int already_S_OF_E1_8 = 36 ;
            int S_OF_E1_8 = 37 ;
            int relevant_evt_OF_E1_8 = 38 ;
            int failF_OF_E1_8 = 39 ;
            int required_OF_E2_1 = 40 ;
            int already_S_OF_E2_1 = 41 ;
            int S_OF_E2_1 = 42 ;
            int relevant_evt_OF_E2_1 = 43 ;
            int failF_OF_E2_1 = 44 ;
            int required_OF_E2_2 = 45 ;
            int already_S_OF_E2_2 = 46 ;
            int S_OF_E2_2 = 47 ;
            int relevant_evt_OF_E2_2 = 48 ;
            int failF_OF_E2_2 = 49 ;
            int required_OF_E2_3 = 50 ;
            int already_S_OF_E2_3 = 51 ;
            int S_OF_E2_3 = 52 ;
            int relevant_evt_OF_E2_3 = 53 ;
            int failF_OF_E2_3 = 54 ;
            int required_OF_E2_4 = 55 ;
            int already_S_OF_E2_4 = 56 ;
            int S_OF_E2_4 = 57 ;
            int relevant_evt_OF_E2_4 = 58 ;
            int failF_OF_E2_4 = 59 ;
            int required_OF_E2_5 = 60 ;
            int already_S_OF_E2_5 = 61 ;
            int S_OF_E2_5 = 62 ;
            int relevant_evt_OF_E2_5 = 63 ;
            int failF_OF_E2_5 = 64 ;
            int required_OF_E2_6 = 65 ;
            int already_S_OF_E2_6 = 66 ;
            int S_OF_E2_6 = 67 ;
            int relevant_evt_OF_E2_6 = 68 ;
            int failF_OF_E2_6 = 69 ;
            int required_OF_E2_7 = 70 ;
            int already_S_OF_E2_7 = 71 ;
            int S_OF_E2_7 = 72 ;
            int relevant_evt_OF_E2_7 = 73 ;
            int failF_OF_E2_7 = 74 ;
            int required_OF_E2_8 = 75 ;
            int already_S_OF_E2_8 = 76 ;
            int S_OF_E2_8 = 77 ;
            int relevant_evt_OF_E2_8 = 78 ;
            int failF_OF_E2_8 = 79 ;
            int required_OF_E3_1 = 80 ;
            int already_S_OF_E3_1 = 81 ;
            int S_OF_E3_1 = 82 ;
            int relevant_evt_OF_E3_1 = 83 ;
            int failF_OF_E3_1 = 84 ;
            int required_OF_E3_2 = 85 ;
            int already_S_OF_E3_2 = 86 ;
            int S_OF_E3_2 = 87 ;
            int relevant_evt_OF_E3_2 = 88 ;
            int failF_OF_E3_2 = 89 ;
            int required_OF_E3_3 = 90 ;
            int already_S_OF_E3_3 = 91 ;
            int S_OF_E3_3 = 92 ;
            int relevant_evt_OF_E3_3 = 93 ;
            int failF_OF_E3_3 = 94 ;
            int required_OF_E3_4 = 95 ;
            int already_S_OF_E3_4 = 96 ;
            int S_OF_E3_4 = 97 ;
            int relevant_evt_OF_E3_4 = 98 ;
            int failF_OF_E3_4 = 99 ;
            int required_OF_E3_5 = 100 ;
            int already_S_OF_E3_5 = 101 ;
            int S_OF_E3_5 = 102 ;
            int relevant_evt_OF_E3_5 = 103 ;
            int failF_OF_E3_5 = 104 ;
            int required_OF_E3_6 = 105 ;
            int already_S_OF_E3_6 = 106 ;
            int S_OF_E3_6 = 107 ;
            int relevant_evt_OF_E3_6 = 108 ;
            int failF_OF_E3_6 = 109 ;
            int required_OF_E3_7 = 110 ;
            int already_S_OF_E3_7 = 111 ;
            int S_OF_E3_7 = 112 ;
            int relevant_evt_OF_E3_7 = 113 ;
            int failF_OF_E3_7 = 114 ;
            int required_OF_E3_8 = 115 ;
            int already_S_OF_E3_8 = 116 ;
            int S_OF_E3_8 = 117 ;
            int relevant_evt_OF_E3_8 = 118 ;
            int failF_OF_E3_8 = 119 ;
            int required_OF_E4_1 = 120 ;
            int already_S_OF_E4_1 = 121 ;
            int S_OF_E4_1 = 122 ;
            int relevant_evt_OF_E4_1 = 123 ;
            int failF_OF_E4_1 = 124 ;
            int required_OF_E4_2 = 125 ;
            int already_S_OF_E4_2 = 126 ;
            int S_OF_E4_2 = 127 ;
            int relevant_evt_OF_E4_2 = 128 ;
            int failF_OF_E4_2 = 129 ;
            int required_OF_E4_3 = 130 ;
            int already_S_OF_E4_3 = 131 ;
            int S_OF_E4_3 = 132 ;
            int relevant_evt_OF_E4_3 = 133 ;
            int failF_OF_E4_3 = 134 ;
            int required_OF_E4_4 = 135 ;
            int already_S_OF_E4_4 = 136 ;
            int S_OF_E4_4 = 137 ;
            int relevant_evt_OF_E4_4 = 138 ;
            int failF_OF_E4_4 = 139 ;
            int required_OF_E4_5 = 140 ;
            int already_S_OF_E4_5 = 141 ;
            int S_OF_E4_5 = 142 ;
            int relevant_evt_OF_E4_5 = 143 ;
            int failF_OF_E4_5 = 144 ;
            int required_OF_E4_6 = 145 ;
            int already_S_OF_E4_6 = 146 ;
            int S_OF_E4_6 = 147 ;
            int relevant_evt_OF_E4_6 = 148 ;
            int failF_OF_E4_6 = 149 ;
            int required_OF_E4_7 = 150 ;
            int already_S_OF_E4_7 = 151 ;
            int S_OF_E4_7 = 152 ;
            int relevant_evt_OF_E4_7 = 153 ;
            int failF_OF_E4_7 = 154 ;
            int required_OF_E4_8 = 155 ;
            int already_S_OF_E4_8 = 156 ;
            int S_OF_E4_8 = 157 ;
            int relevant_evt_OF_E4_8 = 158 ;
            int failF_OF_E4_8 = 159 ;
            int required_OF_EC1_1 = 160 ;
            int already_S_OF_EC1_1 = 161 ;
            int S_OF_EC1_1 = 162 ;
            int relevant_evt_OF_EC1_1 = 163 ;
            int failF_OF_EC1_1 = 164 ;
            int required_OF_EC1_2 = 165 ;
            int already_S_OF_EC1_2 = 166 ;
            int S_OF_EC1_2 = 167 ;
            int relevant_evt_OF_EC1_2 = 168 ;
            int failF_OF_EC1_2 = 169 ;
            int required_OF_EC1_3 = 170 ;
            int already_S_OF_EC1_3 = 171 ;
            int S_OF_EC1_3 = 172 ;
            int relevant_evt_OF_EC1_3 = 173 ;
            int failF_OF_EC1_3 = 174 ;
            int required_OF_EC1_4 = 175 ;
            int already_S_OF_EC1_4 = 176 ;
            int S_OF_EC1_4 = 177 ;
            int relevant_evt_OF_EC1_4 = 178 ;
            int failF_OF_EC1_4 = 179 ;
            int required_OF_EC1_5 = 180 ;
            int already_S_OF_EC1_5 = 181 ;
            int S_OF_EC1_5 = 182 ;
            int relevant_evt_OF_EC1_5 = 183 ;
            int failF_OF_EC1_5 = 184 ;
            int required_OF_EC1_6 = 185 ;
            int already_S_OF_EC1_6 = 186 ;
            int S_OF_EC1_6 = 187 ;
            int relevant_evt_OF_EC1_6 = 188 ;
            int failF_OF_EC1_6 = 189 ;
            int required_OF_EC1_7 = 190 ;
            int already_S_OF_EC1_7 = 191 ;
            int S_OF_EC1_7 = 192 ;
            int relevant_evt_OF_EC1_7 = 193 ;
            int failF_OF_EC1_7 = 194 ;
            int required_OF_EC1_8 = 195 ;
            int already_S_OF_EC1_8 = 196 ;
            int S_OF_EC1_8 = 197 ;
            int relevant_evt_OF_EC1_8 = 198 ;
            int failF_OF_EC1_8 = 199 ;
            int required_OF_EC2_1 = 200 ;
            int already_S_OF_EC2_1 = 201 ;
            int S_OF_EC2_1 = 202 ;
            int relevant_evt_OF_EC2_1 = 203 ;
            int failF_OF_EC2_1 = 204 ;
            int required_OF_EC2_2 = 205 ;
            int already_S_OF_EC2_2 = 206 ;
            int S_OF_EC2_2 = 207 ;
            int relevant_evt_OF_EC2_2 = 208 ;
            int failF_OF_EC2_2 = 209 ;
            int required_OF_EC2_3 = 210 ;
            int already_S_OF_EC2_3 = 211 ;
            int S_OF_EC2_3 = 212 ;
            int relevant_evt_OF_EC2_3 = 213 ;
            int failF_OF_EC2_3 = 214 ;
            int required_OF_EC2_4 = 215 ;
            int already_S_OF_EC2_4 = 216 ;
            int S_OF_EC2_4 = 217 ;
            int relevant_evt_OF_EC2_4 = 218 ;
            int failF_OF_EC2_4 = 219 ;
            int required_OF_EC2_5 = 220 ;
            int already_S_OF_EC2_5 = 221 ;
            int S_OF_EC2_5 = 222 ;
            int relevant_evt_OF_EC2_5 = 223 ;
            int failF_OF_EC2_5 = 224 ;
            int required_OF_EC2_6 = 225 ;
            int already_S_OF_EC2_6 = 226 ;
            int S_OF_EC2_6 = 227 ;
            int relevant_evt_OF_EC2_6 = 228 ;
            int failF_OF_EC2_6 = 229 ;
            int required_OF_EC2_7 = 230 ;
            int already_S_OF_EC2_7 = 231 ;
            int S_OF_EC2_7 = 232 ;
            int relevant_evt_OF_EC2_7 = 233 ;
            int failF_OF_EC2_7 = 234 ;
            int required_OF_EC2_8 = 235 ;
            int already_S_OF_EC2_8 = 236 ;
            int S_OF_EC2_8 = 237 ;
            int relevant_evt_OF_EC2_8 = 238 ;
            int failF_OF_EC2_8 = 239 ;
            int required_OF_EC3_1 = 240 ;
            int already_S_OF_EC3_1 = 241 ;
            int S_OF_EC3_1 = 242 ;
            int relevant_evt_OF_EC3_1 = 243 ;
            int failF_OF_EC3_1 = 244 ;
            int required_OF_EC3_2 = 245 ;
            int already_S_OF_EC3_2 = 246 ;
            int S_OF_EC3_2 = 247 ;
            int relevant_evt_OF_EC3_2 = 248 ;
            int failF_OF_EC3_2 = 249 ;
            int required_OF_EC3_3 = 250 ;
            int already_S_OF_EC3_3 = 251 ;
            int S_OF_EC3_3 = 252 ;
            int relevant_evt_OF_EC3_3 = 253 ;
            int failF_OF_EC3_3 = 254 ;
            int required_OF_EC3_4 = 255 ;
            int already_S_OF_EC3_4 = 256 ;
            int S_OF_EC3_4 = 257 ;
            int relevant_evt_OF_EC3_4 = 258 ;
            int failF_OF_EC3_4 = 259 ;
            int required_OF_EC3_5 = 260 ;
            int already_S_OF_EC3_5 = 261 ;
            int S_OF_EC3_5 = 262 ;
            int relevant_evt_OF_EC3_5 = 263 ;
            int failF_OF_EC3_5 = 264 ;
            int required_OF_EC3_6 = 265 ;
            int already_S_OF_EC3_6 = 266 ;
            int S_OF_EC3_6 = 267 ;
            int relevant_evt_OF_EC3_6 = 268 ;
            int failF_OF_EC3_6 = 269 ;
            int required_OF_EC3_7 = 270 ;
            int already_S_OF_EC3_7 = 271 ;
            int S_OF_EC3_7 = 272 ;
            int relevant_evt_OF_EC3_7 = 273 ;
            int failF_OF_EC3_7 = 274 ;
            int required_OF_EC3_8 = 275 ;
            int already_S_OF_EC3_8 = 276 ;
            int S_OF_EC3_8 = 277 ;
            int relevant_evt_OF_EC3_8 = 278 ;
            int failF_OF_EC3_8 = 279 ;
            int required_OF_Filter_1 = 280 ;
            int already_S_OF_Filter_1 = 281 ;
            int S_OF_Filter_1 = 282 ;
            int relevant_evt_OF_Filter_1 = 283 ;
            int required_OF_Filter_2 = 284 ;
            int already_S_OF_Filter_2 = 285 ;
            int S_OF_Filter_2 = 286 ;
            int relevant_evt_OF_Filter_2 = 287 ;
            int required_OF_Filter_3 = 288 ;
            int already_S_OF_Filter_3 = 289 ;
            int S_OF_Filter_3 = 290 ;
            int relevant_evt_OF_Filter_3 = 291 ;
            int required_OF_Filter_4 = 292 ;
            int already_S_OF_Filter_4 = 293 ;
            int S_OF_Filter_4 = 294 ;
            int relevant_evt_OF_Filter_4 = 295 ;
            int required_OF_Filter_5 = 296 ;
            int already_S_OF_Filter_5 = 297 ;
            int S_OF_Filter_5 = 298 ;
            int relevant_evt_OF_Filter_5 = 299 ;
            int required_OF_Filter_6 = 300 ;
            int already_S_OF_Filter_6 = 301 ;
            int S_OF_Filter_6 = 302 ;
            int relevant_evt_OF_Filter_6 = 303 ;
            int required_OF_Filter_7 = 304 ;
            int already_S_OF_Filter_7 = 305 ;
            int S_OF_Filter_7 = 306 ;
            int relevant_evt_OF_Filter_7 = 307 ;
            int required_OF_Filter_8 = 308 ;
            int already_S_OF_Filter_8 = 309 ;
            int S_OF_Filter_8 = 310 ;
            int relevant_evt_OF_Filter_8 = 311 ;
            int required_OF_System = 312 ;
            int already_S_OF_System = 313 ;
            int S_OF_System = 314 ;
            int relevant_evt_OF_System = 315 ;
            int required_OF_UE_1 = 316 ;
            int already_S_OF_UE_1 = 317 ;
            int S_OF_UE_1 = 318 ;
            int relevant_evt_OF_UE_1 = 319 ;
            int required_OF_fault_cfg_1_1 = 320 ;
            int already_S_OF_fault_cfg_1_1 = 321 ;
            int S_OF_fault_cfg_1_1 = 322 ;
            int relevant_evt_OF_fault_cfg_1_1 = 323 ;
            int required_OF_fault_cfg_1_2 = 324 ;
            int already_S_OF_fault_cfg_1_2 = 325 ;
            int S_OF_fault_cfg_1_2 = 326 ;
            int relevant_evt_OF_fault_cfg_1_2 = 327 ;
            int required_OF_fault_cfg_1_3 = 328 ;
            int already_S_OF_fault_cfg_1_3 = 329 ;
            int S_OF_fault_cfg_1_3 = 330 ;
            int relevant_evt_OF_fault_cfg_1_3 = 331 ;
            int required_OF_fault_cfg_1_4 = 332 ;
            int already_S_OF_fault_cfg_1_4 = 333 ;
            int S_OF_fault_cfg_1_4 = 334 ;
            int relevant_evt_OF_fault_cfg_1_4 = 335 ;
            int required_OF_fault_cfg_1_5 = 336 ;
            int already_S_OF_fault_cfg_1_5 = 337 ;
            int S_OF_fault_cfg_1_5 = 338 ;
            int relevant_evt_OF_fault_cfg_1_5 = 339 ;
            int required_OF_fault_cfg_1_6 = 340 ;
            int already_S_OF_fault_cfg_1_6 = 341 ;
            int S_OF_fault_cfg_1_6 = 342 ;
            int relevant_evt_OF_fault_cfg_1_6 = 343 ;
            int required_OF_fault_cfg_1_7 = 344 ;
            int already_S_OF_fault_cfg_1_7 = 345 ;
            int S_OF_fault_cfg_1_7 = 346 ;
            int relevant_evt_OF_fault_cfg_1_7 = 347 ;
            int required_OF_fault_cfg_1_8 = 348 ;
            int already_S_OF_fault_cfg_1_8 = 349 ;
            int S_OF_fault_cfg_1_8 = 350 ;
            int relevant_evt_OF_fault_cfg_1_8 = 351 ;
            int required_OF_fault_cfg_3_1 = 352 ;
            int already_S_OF_fault_cfg_3_1 = 353 ;
            int S_OF_fault_cfg_3_1 = 354 ;
            int relevant_evt_OF_fault_cfg_3_1 = 355 ;
            int required_OF_fault_cfg_3_2 = 356 ;
            int already_S_OF_fault_cfg_3_2 = 357 ;
            int S_OF_fault_cfg_3_2 = 358 ;
            int relevant_evt_OF_fault_cfg_3_2 = 359 ;
            int required_OF_fault_cfg_3_3 = 360 ;
            int already_S_OF_fault_cfg_3_3 = 361 ;
            int S_OF_fault_cfg_3_3 = 362 ;
            int relevant_evt_OF_fault_cfg_3_3 = 363 ;
            int required_OF_fault_cfg_3_4 = 364 ;
            int already_S_OF_fault_cfg_3_4 = 365 ;
            int S_OF_fault_cfg_3_4 = 366 ;
            int relevant_evt_OF_fault_cfg_3_4 = 367 ;
            int required_OF_fault_cfg_3_5 = 368 ;
            int already_S_OF_fault_cfg_3_5 = 369 ;
            int S_OF_fault_cfg_3_5 = 370 ;
            int relevant_evt_OF_fault_cfg_3_5 = 371 ;
            int required_OF_fault_cfg_3_6 = 372 ;
            int already_S_OF_fault_cfg_3_6 = 373 ;
            int S_OF_fault_cfg_3_6 = 374 ;
            int relevant_evt_OF_fault_cfg_3_6 = 375 ;
            int required_OF_fault_cfg_3_7 = 376 ;
            int already_S_OF_fault_cfg_3_7 = 377 ;
            int S_OF_fault_cfg_3_7 = 378 ;
            int relevant_evt_OF_fault_cfg_3_7 = 379 ;
            int required_OF_fault_cfg_3_8 = 380 ;
            int already_S_OF_fault_cfg_3_8 = 381 ;
            int S_OF_fault_cfg_3_8 = 382 ;
            int relevant_evt_OF_fault_cfg_3_8 = 383 ;
            int required_OF_fault_cfg_4_1 = 384 ;
            int already_S_OF_fault_cfg_4_1 = 385 ;
            int S_OF_fault_cfg_4_1 = 386 ;
            int relevant_evt_OF_fault_cfg_4_1 = 387 ;
            int required_OF_fault_cfg_4_2 = 388 ;
            int already_S_OF_fault_cfg_4_2 = 389 ;
            int S_OF_fault_cfg_4_2 = 390 ;
            int relevant_evt_OF_fault_cfg_4_2 = 391 ;
            int required_OF_fault_cfg_4_3 = 392 ;
            int already_S_OF_fault_cfg_4_3 = 393 ;
            int S_OF_fault_cfg_4_3 = 394 ;
            int relevant_evt_OF_fault_cfg_4_3 = 395 ;
            int required_OF_fault_cfg_4_4 = 396 ;
            int already_S_OF_fault_cfg_4_4 = 397 ;
            int S_OF_fault_cfg_4_4 = 398 ;
            int relevant_evt_OF_fault_cfg_4_4 = 399 ;
            int required_OF_fault_cfg_4_5 = 400 ;
            int already_S_OF_fault_cfg_4_5 = 401 ;
            int S_OF_fault_cfg_4_5 = 402 ;
            int relevant_evt_OF_fault_cfg_4_5 = 403 ;
            int required_OF_fault_cfg_4_6 = 404 ;
            int already_S_OF_fault_cfg_4_6 = 405 ;
            int S_OF_fault_cfg_4_6 = 406 ;
            int relevant_evt_OF_fault_cfg_4_6 = 407 ;
            int required_OF_fault_cfg_4_7 = 408 ;
            int already_S_OF_fault_cfg_4_7 = 409 ;
            int S_OF_fault_cfg_4_7 = 410 ;
            int relevant_evt_OF_fault_cfg_4_7 = 411 ;
            int required_OF_fault_cfg_4_8 = 412 ;
            int already_S_OF_fault_cfg_4_8 = 413 ;
            int S_OF_fault_cfg_4_8 = 414 ;
            int relevant_evt_OF_fault_cfg_4_8 = 415 ;
            int required_OF_gate_1_1 = 416 ;
            int already_S_OF_gate_1_1 = 417 ;
            int S_OF_gate_1_1 = 418 ;
            int relevant_evt_OF_gate_1_1 = 419 ;
            int required_OF_gate_1_2 = 420 ;
            int already_S_OF_gate_1_2 = 421 ;
            int S_OF_gate_1_2 = 422 ;
            int relevant_evt_OF_gate_1_2 = 423 ;
            int required_OF_gate_1_3 = 424 ;
            int already_S_OF_gate_1_3 = 425 ;
            int S_OF_gate_1_3 = 426 ;
            int relevant_evt_OF_gate_1_3 = 427 ;
            int required_OF_gate_1_4 = 428 ;
            int already_S_OF_gate_1_4 = 429 ;
            int S_OF_gate_1_4 = 430 ;
            int relevant_evt_OF_gate_1_4 = 431 ;
            int required_OF_gate_1_5 = 432 ;
            int already_S_OF_gate_1_5 = 433 ;
            int S_OF_gate_1_5 = 434 ;
            int relevant_evt_OF_gate_1_5 = 435 ;
            int required_OF_gate_1_6 = 436 ;
            int already_S_OF_gate_1_6 = 437 ;
            int S_OF_gate_1_6 = 438 ;
            int relevant_evt_OF_gate_1_6 = 439 ;
            int required_OF_gate_1_7 = 440 ;
            int already_S_OF_gate_1_7 = 441 ;
            int S_OF_gate_1_7 = 442 ;
            int relevant_evt_OF_gate_1_7 = 443 ;
            int required_OF_gate_1_8 = 444 ;
            int already_S_OF_gate_1_8 = 445 ;
            int S_OF_gate_1_8 = 446 ;
            int relevant_evt_OF_gate_1_8 = 447 ;
            int required_OF_gate_2_1 = 448 ;
            int already_S_OF_gate_2_1 = 449 ;
            int S_OF_gate_2_1 = 450 ;
            int relevant_evt_OF_gate_2_1 = 451 ;
            int required_OF_gate_2_2 = 452 ;
            int already_S_OF_gate_2_2 = 453 ;
            int S_OF_gate_2_2 = 454 ;
            int relevant_evt_OF_gate_2_2 = 455 ;
            int required_OF_gate_2_3 = 456 ;
            int already_S_OF_gate_2_3 = 457 ;
            int S_OF_gate_2_3 = 458 ;
            int relevant_evt_OF_gate_2_3 = 459 ;
            int required_OF_gate_2_4 = 460 ;
            int already_S_OF_gate_2_4 = 461 ;
            int S_OF_gate_2_4 = 462 ;
            int relevant_evt_OF_gate_2_4 = 463 ;
            int required_OF_gate_2_5 = 464 ;
            int already_S_OF_gate_2_5 = 465 ;
            int S_OF_gate_2_5 = 466 ;
            int relevant_evt_OF_gate_2_5 = 467 ;
            int required_OF_gate_2_6 = 468 ;
            int already_S_OF_gate_2_6 = 469 ;
            int S_OF_gate_2_6 = 470 ;
            int relevant_evt_OF_gate_2_6 = 471 ;
            int required_OF_gate_2_7 = 472 ;
            int already_S_OF_gate_2_7 = 473 ;
            int S_OF_gate_2_7 = 474 ;
            int relevant_evt_OF_gate_2_7 = 475 ;
            int required_OF_gate_2_8 = 476 ;
            int already_S_OF_gate_2_8 = 477 ;
            int S_OF_gate_2_8 = 478 ;
            int relevant_evt_OF_gate_2_8 = 479 ;




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