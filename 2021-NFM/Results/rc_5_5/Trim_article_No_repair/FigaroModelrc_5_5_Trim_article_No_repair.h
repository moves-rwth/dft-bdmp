
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
        class FigaroProgram_rc_5_5_Trim_article_No_repair: public storm::figaro::FigaroProgram{
        public:
        FigaroProgram_rc_5_5_Trim_article_No_repair(): FigaroProgram(//            std::map<std::string, size_t> mFigaroboolelementindex =
                    {  
            	{"required_OF_System" , 0},
            	{"already_S_OF_System" , 1},
            	{"S_OF_System" , 2},
            	{"relevant_evt_OF_System" , 3},
            	{"required_OF_UE_1" , 4},
            	{"already_S_OF_UE_1" , 5},
            	{"S_OF_UE_1" , 6},
            	{"relevant_evt_OF_UE_1" , 7},
            	{"required_OF__SA_1" , 8},
            	{"already_S_OF__SA_1" , 9},
            	{"S_OF__SA_1" , 10},
            	{"relevant_evt_OF__SA_1" , 11},
            	{"required_OF__SA_2" , 12},
            	{"already_S_OF__SA_2" , 13},
            	{"S_OF__SA_2" , 14},
            	{"relevant_evt_OF__SA_2" , 15},
            	{"required_OF__SA_3" , 16},
            	{"already_S_OF__SA_3" , 17},
            	{"S_OF__SA_3" , 18},
            	{"relevant_evt_OF__SA_3" , 19},
            	{"required_OF__SA_4" , 20},
            	{"already_S_OF__SA_4" , 21},
            	{"S_OF__SA_4" , 22},
            	{"relevant_evt_OF__SA_4" , 23},
            	{"required_OF__SA_5" , 24},
            	{"already_S_OF__SA_5" , 25},
            	{"S_OF__SA_5" , 26},
            	{"relevant_evt_OF__SA_5" , 27},
            	{"required_OF__SB_1" , 28},
            	{"already_S_OF__SB_1" , 29},
            	{"S_OF__SB_1" , 30},
            	{"relevant_evt_OF__SB_1" , 31},
            	{"required_OF__SB_2" , 32},
            	{"already_S_OF__SB_2" , 33},
            	{"S_OF__SB_2" , 34},
            	{"relevant_evt_OF__SB_2" , 35},
            	{"required_OF__SB_3" , 36},
            	{"already_S_OF__SB_3" , 37},
            	{"S_OF__SB_3" , 38},
            	{"relevant_evt_OF__SB_3" , 39},
            	{"required_OF__SB_4" , 40},
            	{"already_S_OF__SB_4" , 41},
            	{"S_OF__SB_4" , 42},
            	{"relevant_evt_OF__SB_4" , 43},
            	{"required_OF__SB_5" , 44},
            	{"already_S_OF__SB_5" , 45},
            	{"S_OF__SB_5" , 46},
            	{"relevant_evt_OF__SB_5" , 47},
            	{"required_OF__SC_1" , 48},
            	{"already_S_OF__SC_1" , 49},
            	{"S_OF__SC_1" , 50},
            	{"relevant_evt_OF__SC_1" , 51},
            	{"required_OF__SC_2" , 52},
            	{"already_S_OF__SC_2" , 53},
            	{"S_OF__SC_2" , 54},
            	{"relevant_evt_OF__SC_2" , 55},
            	{"required_OF__SC_3" , 56},
            	{"already_S_OF__SC_3" , 57},
            	{"S_OF__SC_3" , 58},
            	{"relevant_evt_OF__SC_3" , 59},
            	{"required_OF__SC_4" , 60},
            	{"already_S_OF__SC_4" , 61},
            	{"S_OF__SC_4" , 62},
            	{"relevant_evt_OF__SC_4" , 63},
            	{"required_OF__SC_5" , 64},
            	{"already_S_OF__SC_5" , 65},
            	{"S_OF__SC_5" , 66},
            	{"relevant_evt_OF__SC_5" , 67},
            	{"required_OF__SD_1" , 68},
            	{"already_S_OF__SD_1" , 69},
            	{"S_OF__SD_1" , 70},
            	{"relevant_evt_OF__SD_1" , 71},
            	{"required_OF__SD_2" , 72},
            	{"already_S_OF__SD_2" , 73},
            	{"S_OF__SD_2" , 74},
            	{"relevant_evt_OF__SD_2" , 75},
            	{"required_OF__SD_3" , 76},
            	{"already_S_OF__SD_3" , 77},
            	{"S_OF__SD_3" , 78},
            	{"relevant_evt_OF__SD_3" , 79},
            	{"required_OF__SD_4" , 80},
            	{"already_S_OF__SD_4" , 81},
            	{"S_OF__SD_4" , 82},
            	{"relevant_evt_OF__SD_4" , 83},
            	{"required_OF__SD_5" , 84},
            	{"already_S_OF__SD_5" , 85},
            	{"S_OF__SD_5" , 86},
            	{"relevant_evt_OF__SD_5" , 87},
            	{"required_OF_barrier_1" , 88},
            	{"already_S_OF_barrier_1" , 89},
            	{"S_OF_barrier_1" , 90},
            	{"relevant_evt_OF_barrier_1" , 91},
            	{"required_OF_barrier_2" , 92},
            	{"already_S_OF_barrier_2" , 93},
            	{"S_OF_barrier_2" , 94},
            	{"relevant_evt_OF_barrier_2" , 95},
            	{"required_OF_barrier_3" , 96},
            	{"already_S_OF_barrier_3" , 97},
            	{"S_OF_barrier_3" , 98},
            	{"relevant_evt_OF_barrier_3" , 99},
            	{"required_OF_barrier_4" , 100},
            	{"already_S_OF_barrier_4" , 101},
            	{"S_OF_barrier_4" , 102},
            	{"relevant_evt_OF_barrier_4" , 103},
            	{"required_OF_barrier_5" , 104},
            	{"already_S_OF_barrier_5" , 105},
            	{"S_OF_barrier_5" , 106},
            	{"relevant_evt_OF_barrier_5" , 107},
            	{"required_OF_barriers" , 108},
            	{"already_S_OF_barriers" , 109},
            	{"S_OF_barriers" , 110},
            	{"relevant_evt_OF_barriers" , 111},
            	{"required_OF_controller" , 112},
            	{"already_S_OF_controller" , 113},
            	{"S_OF_controller" , 114},
            	{"relevant_evt_OF_controller" , 115},
            	{"failF_OF_controller" , 116},
            	{"required_OF_motor_1" , 117},
            	{"already_S_OF_motor_1" , 118},
            	{"S_OF_motor_1" , 119},
            	{"relevant_evt_OF_motor_1" , 120},
            	{"required_OF_motor_2" , 121},
            	{"already_S_OF_motor_2" , 122},
            	{"S_OF_motor_2" , 123},
            	{"relevant_evt_OF_motor_2" , 124},
            	{"required_OF_motor_3" , 125},
            	{"already_S_OF_motor_3" , 126},
            	{"S_OF_motor_3" , 127},
            	{"relevant_evt_OF_motor_3" , 128},
            	{"required_OF_motor_4" , 129},
            	{"already_S_OF_motor_4" , 130},
            	{"S_OF_motor_4" , 131},
            	{"relevant_evt_OF_motor_4" , 132},
            	{"required_OF_motor_5" , 133},
            	{"already_S_OF_motor_5" , 134},
            	{"S_OF_motor_5" , 135},
            	{"relevant_evt_OF_motor_5" , 136},
            	{"required_OF_mp1" , 137},
            	{"already_S_OF_mp1" , 138},
            	{"S_OF_mp1" , 139},
            	{"relevant_evt_OF_mp1" , 140},
            	{"failF_OF_mp1" , 141},
            	{"required_OF_mp2" , 142},
            	{"already_S_OF_mp2" , 143},
            	{"S_OF_mp2" , 144},
            	{"relevant_evt_OF_mp2" , 145},
            	{"failF_OF_mp2" , 146},
            	{"required_OF_mp3" , 147},
            	{"already_S_OF_mp3" , 148},
            	{"S_OF_mp3" , 149},
            	{"relevant_evt_OF_mp3" , 150},
            	{"failF_OF_mp3" , 151},
            	{"required_OF_mp4" , 152},
            	{"already_S_OF_mp4" , 153},
            	{"S_OF_mp4" , 154},
            	{"relevant_evt_OF_mp4" , 155},
            	{"failF_OF_mp4" , 156},
            	{"required_OF_mp5" , 157},
            	{"already_S_OF_mp5" , 158},
            	{"S_OF_mp5" , 159},
            	{"relevant_evt_OF_mp5" , 160},
            	{"failF_OF_mp5" , 161},
            	{"required_OF_sensor_1" , 162},
            	{"already_S_OF_sensor_1" , 163},
            	{"S_OF_sensor_1" , 164},
            	{"relevant_evt_OF_sensor_1" , 165},
            	{"required_OF_ms1" , 166},
            	{"already_S_OF_ms1" , 167},
            	{"S_OF_ms1" , 168},
            	{"relevant_evt_OF_ms1" , 169},
            	{"failF_OF_ms1" , 170},
            	{"required_OF_ms2" , 171},
            	{"already_S_OF_ms2" , 172},
            	{"S_OF_ms2" , 173},
            	{"relevant_evt_OF_ms2" , 174},
            	{"failF_OF_ms2" , 175},
            	{"required_OF_ms3" , 176},
            	{"already_S_OF_ms3" , 177},
            	{"S_OF_ms3" , 178},
            	{"relevant_evt_OF_ms3" , 179},
            	{"failF_OF_ms3" , 180},
            	{"required_OF_ms4" , 181},
            	{"already_S_OF_ms4" , 182},
            	{"S_OF_ms4" , 183},
            	{"relevant_evt_OF_ms4" , 184},
            	{"failF_OF_ms4" , 185},
            	{"required_OF_ms5" , 186},
            	{"already_S_OF_ms5" , 187},
            	{"S_OF_ms5" , 188},
            	{"relevant_evt_OF_ms5" , 189},
            	{"failF_OF_ms5" , 190},
            	{"required_OF_network_1" , 191},
            	{"already_S_OF_network_1" , 192},
            	{"S_OF_network_1" , 193},
            	{"relevant_evt_OF_network_1" , 194},
            	{"failF_OF_network_1" , 195},
            	{"required_OF_network_2" , 196},
            	{"already_S_OF_network_2" , 197},
            	{"S_OF_network_2" , 198},
            	{"relevant_evt_OF_network_2" , 199},
            	{"failF_OF_network_2" , 200},
            	{"required_OF_network_3" , 201},
            	{"already_S_OF_network_3" , 202},
            	{"S_OF_network_3" , 203},
            	{"relevant_evt_OF_network_3" , 204},
            	{"failF_OF_network_3" , 205},
            	{"required_OF_network_4" , 206},
            	{"already_S_OF_network_4" , 207},
            	{"S_OF_network_4" , 208},
            	{"relevant_evt_OF_network_4" , 209},
            	{"failF_OF_network_4" , 210},
            	{"required_OF_network_5" , 211},
            	{"already_S_OF_network_5" , 212},
            	{"S_OF_network_5" , 213},
            	{"relevant_evt_OF_network_5" , 214},
            	{"failF_OF_network_5" , 215},
            	{"required_OF_sA_1" , 216},
            	{"already_S_OF_sA_1" , 217},
            	{"S_OF_sA_1" , 218},
            	{"relevant_evt_OF_sA_1" , 219},
            	{"failF_OF_sA_1" , 220},
            	{"required_OF_sA_1_I" , 221},
            	{"already_S_OF_sA_1_I" , 222},
            	{"S_OF_sA_1_I" , 223},
            	{"relevant_evt_OF_sA_1_I" , 224},
            	{"failI_OF_sA_1_I" , 225},
            	{"to_be_fired_OF_sA_1_I" , 226},
            	{"already_standby_OF_sA_1_I" , 227},
            	{"already_required_OF_sA_1_I" , 228},
            	{"required_OF_sA_2" , 229},
            	{"already_S_OF_sA_2" , 230},
            	{"S_OF_sA_2" , 231},
            	{"relevant_evt_OF_sA_2" , 232},
            	{"failF_OF_sA_2" , 233},
            	{"required_OF_sA_2_I" , 234},
            	{"already_S_OF_sA_2_I" , 235},
            	{"S_OF_sA_2_I" , 236},
            	{"relevant_evt_OF_sA_2_I" , 237},
            	{"failI_OF_sA_2_I" , 238},
            	{"to_be_fired_OF_sA_2_I" , 239},
            	{"already_standby_OF_sA_2_I" , 240},
            	{"already_required_OF_sA_2_I" , 241},
            	{"required_OF_sA_3" , 242},
            	{"already_S_OF_sA_3" , 243},
            	{"S_OF_sA_3" , 244},
            	{"relevant_evt_OF_sA_3" , 245},
            	{"failF_OF_sA_3" , 246},
            	{"required_OF_sA_3_I" , 247},
            	{"already_S_OF_sA_3_I" , 248},
            	{"S_OF_sA_3_I" , 249},
            	{"relevant_evt_OF_sA_3_I" , 250},
            	{"failI_OF_sA_3_I" , 251},
            	{"to_be_fired_OF_sA_3_I" , 252},
            	{"already_standby_OF_sA_3_I" , 253},
            	{"already_required_OF_sA_3_I" , 254},
            	{"required_OF_sA_4" , 255},
            	{"already_S_OF_sA_4" , 256},
            	{"S_OF_sA_4" , 257},
            	{"relevant_evt_OF_sA_4" , 258},
            	{"failF_OF_sA_4" , 259},
            	{"required_OF_sA_4_I" , 260},
            	{"already_S_OF_sA_4_I" , 261},
            	{"S_OF_sA_4_I" , 262},
            	{"relevant_evt_OF_sA_4_I" , 263},
            	{"failI_OF_sA_4_I" , 264},
            	{"to_be_fired_OF_sA_4_I" , 265},
            	{"already_standby_OF_sA_4_I" , 266},
            	{"already_required_OF_sA_4_I" , 267},
            	{"required_OF_sA_5" , 268},
            	{"already_S_OF_sA_5" , 269},
            	{"S_OF_sA_5" , 270},
            	{"relevant_evt_OF_sA_5" , 271},
            	{"failF_OF_sA_5" , 272},
            	{"required_OF_sA_5_I" , 273},
            	{"already_S_OF_sA_5_I" , 274},
            	{"S_OF_sA_5_I" , 275},
            	{"relevant_evt_OF_sA_5_I" , 276},
            	{"failI_OF_sA_5_I" , 277},
            	{"to_be_fired_OF_sA_5_I" , 278},
            	{"already_standby_OF_sA_5_I" , 279},
            	{"already_required_OF_sA_5_I" , 280},
            	{"required_OF_sB_1" , 281},
            	{"already_S_OF_sB_1" , 282},
            	{"S_OF_sB_1" , 283},
            	{"relevant_evt_OF_sB_1" , 284},
            	{"failF_OF_sB_1" , 285},
            	{"required_OF_sB_1_I" , 286},
            	{"already_S_OF_sB_1_I" , 287},
            	{"S_OF_sB_1_I" , 288},
            	{"relevant_evt_OF_sB_1_I" , 289},
            	{"failI_OF_sB_1_I" , 290},
            	{"to_be_fired_OF_sB_1_I" , 291},
            	{"already_standby_OF_sB_1_I" , 292},
            	{"already_required_OF_sB_1_I" , 293},
            	{"required_OF_sB_2" , 294},
            	{"already_S_OF_sB_2" , 295},
            	{"S_OF_sB_2" , 296},
            	{"relevant_evt_OF_sB_2" , 297},
            	{"failF_OF_sB_2" , 298},
            	{"required_OF_sB_2_I" , 299},
            	{"already_S_OF_sB_2_I" , 300},
            	{"S_OF_sB_2_I" , 301},
            	{"relevant_evt_OF_sB_2_I" , 302},
            	{"failI_OF_sB_2_I" , 303},
            	{"to_be_fired_OF_sB_2_I" , 304},
            	{"already_standby_OF_sB_2_I" , 305},
            	{"already_required_OF_sB_2_I" , 306},
            	{"required_OF_sB_3" , 307},
            	{"already_S_OF_sB_3" , 308},
            	{"S_OF_sB_3" , 309},
            	{"relevant_evt_OF_sB_3" , 310},
            	{"failF_OF_sB_3" , 311},
            	{"required_OF_sB_3_I" , 312},
            	{"already_S_OF_sB_3_I" , 313},
            	{"S_OF_sB_3_I" , 314},
            	{"relevant_evt_OF_sB_3_I" , 315},
            	{"failI_OF_sB_3_I" , 316},
            	{"to_be_fired_OF_sB_3_I" , 317},
            	{"already_standby_OF_sB_3_I" , 318},
            	{"already_required_OF_sB_3_I" , 319},
            	{"required_OF_sB_4" , 320},
            	{"already_S_OF_sB_4" , 321},
            	{"S_OF_sB_4" , 322},
            	{"relevant_evt_OF_sB_4" , 323},
            	{"failF_OF_sB_4" , 324},
            	{"required_OF_sB_4_I" , 325},
            	{"already_S_OF_sB_4_I" , 326},
            	{"S_OF_sB_4_I" , 327},
            	{"relevant_evt_OF_sB_4_I" , 328},
            	{"failI_OF_sB_4_I" , 329},
            	{"to_be_fired_OF_sB_4_I" , 330},
            	{"already_standby_OF_sB_4_I" , 331},
            	{"already_required_OF_sB_4_I" , 332},
            	{"required_OF_sB_5" , 333},
            	{"already_S_OF_sB_5" , 334},
            	{"S_OF_sB_5" , 335},
            	{"relevant_evt_OF_sB_5" , 336},
            	{"failF_OF_sB_5" , 337},
            	{"required_OF_sB_5_I" , 338},
            	{"already_S_OF_sB_5_I" , 339},
            	{"S_OF_sB_5_I" , 340},
            	{"relevant_evt_OF_sB_5_I" , 341},
            	{"failI_OF_sB_5_I" , 342},
            	{"to_be_fired_OF_sB_5_I" , 343},
            	{"already_standby_OF_sB_5_I" , 344},
            	{"already_required_OF_sB_5_I" , 345},
            	{"required_OF_sC_1" , 346},
            	{"already_S_OF_sC_1" , 347},
            	{"S_OF_sC_1" , 348},
            	{"relevant_evt_OF_sC_1" , 349},
            	{"failF_OF_sC_1" , 350},
            	{"required_OF_sC_1_I" , 351},
            	{"already_S_OF_sC_1_I" , 352},
            	{"S_OF_sC_1_I" , 353},
            	{"relevant_evt_OF_sC_1_I" , 354},
            	{"failI_OF_sC_1_I" , 355},
            	{"to_be_fired_OF_sC_1_I" , 356},
            	{"already_standby_OF_sC_1_I" , 357},
            	{"already_required_OF_sC_1_I" , 358},
            	{"required_OF_sC_2" , 359},
            	{"already_S_OF_sC_2" , 360},
            	{"S_OF_sC_2" , 361},
            	{"relevant_evt_OF_sC_2" , 362},
            	{"failF_OF_sC_2" , 363},
            	{"required_OF_sC_2_I" , 364},
            	{"already_S_OF_sC_2_I" , 365},
            	{"S_OF_sC_2_I" , 366},
            	{"relevant_evt_OF_sC_2_I" , 367},
            	{"failI_OF_sC_2_I" , 368},
            	{"to_be_fired_OF_sC_2_I" , 369},
            	{"already_standby_OF_sC_2_I" , 370},
            	{"already_required_OF_sC_2_I" , 371},
            	{"required_OF_sC_3" , 372},
            	{"already_S_OF_sC_3" , 373},
            	{"S_OF_sC_3" , 374},
            	{"relevant_evt_OF_sC_3" , 375},
            	{"failF_OF_sC_3" , 376},
            	{"required_OF_sC_3_I" , 377},
            	{"already_S_OF_sC_3_I" , 378},
            	{"S_OF_sC_3_I" , 379},
            	{"relevant_evt_OF_sC_3_I" , 380},
            	{"failI_OF_sC_3_I" , 381},
            	{"to_be_fired_OF_sC_3_I" , 382},
            	{"already_standby_OF_sC_3_I" , 383},
            	{"already_required_OF_sC_3_I" , 384},
            	{"required_OF_sC_4" , 385},
            	{"already_S_OF_sC_4" , 386},
            	{"S_OF_sC_4" , 387},
            	{"relevant_evt_OF_sC_4" , 388},
            	{"failF_OF_sC_4" , 389},
            	{"required_OF_sC_4_I" , 390},
            	{"already_S_OF_sC_4_I" , 391},
            	{"S_OF_sC_4_I" , 392},
            	{"relevant_evt_OF_sC_4_I" , 393},
            	{"failI_OF_sC_4_I" , 394},
            	{"to_be_fired_OF_sC_4_I" , 395},
            	{"already_standby_OF_sC_4_I" , 396},
            	{"already_required_OF_sC_4_I" , 397},
            	{"required_OF_sC_5" , 398},
            	{"already_S_OF_sC_5" , 399},
            	{"S_OF_sC_5" , 400},
            	{"relevant_evt_OF_sC_5" , 401},
            	{"failF_OF_sC_5" , 402},
            	{"required_OF_sC_5_I" , 403},
            	{"already_S_OF_sC_5_I" , 404},
            	{"S_OF_sC_5_I" , 405},
            	{"relevant_evt_OF_sC_5_I" , 406},
            	{"failI_OF_sC_5_I" , 407},
            	{"to_be_fired_OF_sC_5_I" , 408},
            	{"already_standby_OF_sC_5_I" , 409},
            	{"already_required_OF_sC_5_I" , 410},
            	{"required_OF_sD_1" , 411},
            	{"already_S_OF_sD_1" , 412},
            	{"S_OF_sD_1" , 413},
            	{"relevant_evt_OF_sD_1" , 414},
            	{"failF_OF_sD_1" , 415},
            	{"required_OF_sD_1_I" , 416},
            	{"already_S_OF_sD_1_I" , 417},
            	{"S_OF_sD_1_I" , 418},
            	{"relevant_evt_OF_sD_1_I" , 419},
            	{"failI_OF_sD_1_I" , 420},
            	{"to_be_fired_OF_sD_1_I" , 421},
            	{"already_standby_OF_sD_1_I" , 422},
            	{"already_required_OF_sD_1_I" , 423},
            	{"required_OF_sD_2" , 424},
            	{"already_S_OF_sD_2" , 425},
            	{"S_OF_sD_2" , 426},
            	{"relevant_evt_OF_sD_2" , 427},
            	{"failF_OF_sD_2" , 428},
            	{"required_OF_sD_2_I" , 429},
            	{"already_S_OF_sD_2_I" , 430},
            	{"S_OF_sD_2_I" , 431},
            	{"relevant_evt_OF_sD_2_I" , 432},
            	{"failI_OF_sD_2_I" , 433},
            	{"to_be_fired_OF_sD_2_I" , 434},
            	{"already_standby_OF_sD_2_I" , 435},
            	{"already_required_OF_sD_2_I" , 436},
            	{"required_OF_sD_3" , 437},
            	{"already_S_OF_sD_3" , 438},
            	{"S_OF_sD_3" , 439},
            	{"relevant_evt_OF_sD_3" , 440},
            	{"failF_OF_sD_3" , 441},
            	{"required_OF_sD_3_I" , 442},
            	{"already_S_OF_sD_3_I" , 443},
            	{"S_OF_sD_3_I" , 444},
            	{"relevant_evt_OF_sD_3_I" , 445},
            	{"failI_OF_sD_3_I" , 446},
            	{"to_be_fired_OF_sD_3_I" , 447},
            	{"already_standby_OF_sD_3_I" , 448},
            	{"already_required_OF_sD_3_I" , 449},
            	{"required_OF_sD_4" , 450},
            	{"already_S_OF_sD_4" , 451},
            	{"S_OF_sD_4" , 452},
            	{"relevant_evt_OF_sD_4" , 453},
            	{"failF_OF_sD_4" , 454},
            	{"required_OF_sD_4_I" , 455},
            	{"already_S_OF_sD_4_I" , 456},
            	{"S_OF_sD_4_I" , 457},
            	{"relevant_evt_OF_sD_4_I" , 458},
            	{"failI_OF_sD_4_I" , 459},
            	{"to_be_fired_OF_sD_4_I" , 460},
            	{"already_standby_OF_sD_4_I" , 461},
            	{"already_required_OF_sD_4_I" , 462},
            	{"required_OF_sD_5" , 463},
            	{"already_S_OF_sD_5" , 464},
            	{"S_OF_sD_5" , 465},
            	{"relevant_evt_OF_sD_5" , 466},
            	{"failF_OF_sD_5" , 467},
            	{"required_OF_sD_5_I" , 468},
            	{"already_S_OF_sD_5_I" , 469},
            	{"S_OF_sD_5_I" , 470},
            	{"relevant_evt_OF_sD_5_I" , 471},
            	{"failI_OF_sD_5_I" , 472},
            	{"to_be_fired_OF_sD_5_I" , 473},
            	{"already_standby_OF_sD_5_I" , 474},
            	{"already_required_OF_sD_5_I" , 475},
            	{"required_OF_sensor_2" , 476},
            	{"already_S_OF_sensor_2" , 477},
            	{"S_OF_sensor_2" , 478},
            	{"relevant_evt_OF_sensor_2" , 479},
            	{"required_OF_sensor_3" , 480},
            	{"already_S_OF_sensor_3" , 481},
            	{"S_OF_sensor_3" , 482},
            	{"relevant_evt_OF_sensor_3" , 483},
            	{"required_OF_sensor_4" , 484},
            	{"already_S_OF_sensor_4" , 485},
            	{"S_OF_sensor_4" , 486},
            	{"relevant_evt_OF_sensor_4" , 487},
            	{"required_OF_sensor_5" , 488},
            	{"already_S_OF_sensor_5" , 489},
            	{"S_OF_sensor_5" , 490},
            	{"relevant_evt_OF_sensor_5" , 491},
            	{"required_OF_sensors" , 492},
            	{"already_S_OF_sensors" , 493},
            	{"S_OF_sensors" , 494},
            	{"relevant_evt_OF_sensors" , 495},
            	{"required_OF_sw_1" , 496},
            	{"already_S_OF_sw_1" , 497},
            	{"S_OF_sw_1" , 498},
            	{"relevant_evt_OF_sw_1" , 499},
            	{"failF_OF_sw_1" , 500},
            	{"required_OF_sw_2" , 501},
            	{"already_S_OF_sw_2" , 502},
            	{"S_OF_sw_2" , 503},
            	{"relevant_evt_OF_sw_2" , 504},
            	{"failF_OF_sw_2" , 505},
            	{"required_OF_sw_3" , 506},
            	{"already_S_OF_sw_3" , 507},
            	{"S_OF_sw_3" , 508},
            	{"relevant_evt_OF_sw_3" , 509},
            	{"failF_OF_sw_3" , 510},
            	{"required_OF_sw_4" , 511},
            	{"already_S_OF_sw_4" , 512},
            	{"S_OF_sw_4" , 513},
            	{"relevant_evt_OF_sw_4" , 514},
            	{"failF_OF_sw_4" , 515},
            	{"required_OF_sw_5" , 516},
            	{"already_S_OF_sw_5" , 517},
            	{"S_OF_sw_5" , 518},
            	{"relevant_evt_OF_sw_5" , 519},
            	{"failF_OF_sw_5" , 520},
            	{"required_OF_switch_1" , 521},
            	{"already_S_OF_switch_1" , 522},
            	{"S_OF_switch_1" , 523},
            	{"relevant_evt_OF_switch_1" , 524},
            	{"required_OF_switch_2" , 525},
            	{"already_S_OF_switch_2" , 526},
            	{"S_OF_switch_2" , 527},
            	{"relevant_evt_OF_switch_2" , 528},
            	{"required_OF_switch_3" , 529},
            	{"already_S_OF_switch_3" , 530},
            	{"S_OF_switch_3" , 531},
            	{"relevant_evt_OF_switch_3" , 532},
            	{"required_OF_switch_4" , 533},
            	{"already_S_OF_switch_4" , 534},
            	{"S_OF_switch_4" , 535},
            	{"relevant_evt_OF_switch_4" , 536},
            	{"required_OF_switch_5" , 537},
            	{"already_S_OF_switch_5" , 538},
            	{"S_OF_switch_5" , 539},
            	{"relevant_evt_OF_switch_5" , 540}},

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
                    541 ,
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
            bool REINITIALISATION_OF_required_OF_System ;
            bool REINITIALISATION_OF_S_OF_System ;
            bool REINITIALISATION_OF_relevant_evt_OF_System ;
            bool REINITIALISATION_OF_required_OF_UE_1 ;
            bool REINITIALISATION_OF_S_OF_UE_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_UE_1 ;
            bool REINITIALISATION_OF_required_OF__SA_1 ;
            bool REINITIALISATION_OF_S_OF__SA_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF__SA_1 ;
            bool REINITIALISATION_OF_required_OF__SA_2 ;
            bool REINITIALISATION_OF_S_OF__SA_2 ;
            bool REINITIALISATION_OF_relevant_evt_OF__SA_2 ;
            bool REINITIALISATION_OF_required_OF__SA_3 ;
            bool REINITIALISATION_OF_S_OF__SA_3 ;
            bool REINITIALISATION_OF_relevant_evt_OF__SA_3 ;
            bool REINITIALISATION_OF_required_OF__SA_4 ;
            bool REINITIALISATION_OF_S_OF__SA_4 ;
            bool REINITIALISATION_OF_relevant_evt_OF__SA_4 ;
            bool REINITIALISATION_OF_required_OF__SA_5 ;
            bool REINITIALISATION_OF_S_OF__SA_5 ;
            bool REINITIALISATION_OF_relevant_evt_OF__SA_5 ;
            bool REINITIALISATION_OF_required_OF__SB_1 ;
            bool REINITIALISATION_OF_S_OF__SB_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF__SB_1 ;
            bool REINITIALISATION_OF_required_OF__SB_2 ;
            bool REINITIALISATION_OF_S_OF__SB_2 ;
            bool REINITIALISATION_OF_relevant_evt_OF__SB_2 ;
            bool REINITIALISATION_OF_required_OF__SB_3 ;
            bool REINITIALISATION_OF_S_OF__SB_3 ;
            bool REINITIALISATION_OF_relevant_evt_OF__SB_3 ;
            bool REINITIALISATION_OF_required_OF__SB_4 ;
            bool REINITIALISATION_OF_S_OF__SB_4 ;
            bool REINITIALISATION_OF_relevant_evt_OF__SB_4 ;
            bool REINITIALISATION_OF_required_OF__SB_5 ;
            bool REINITIALISATION_OF_S_OF__SB_5 ;
            bool REINITIALISATION_OF_relevant_evt_OF__SB_5 ;
            bool REINITIALISATION_OF_required_OF__SC_1 ;
            bool REINITIALISATION_OF_S_OF__SC_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF__SC_1 ;
            bool REINITIALISATION_OF_required_OF__SC_2 ;
            bool REINITIALISATION_OF_S_OF__SC_2 ;
            bool REINITIALISATION_OF_relevant_evt_OF__SC_2 ;
            bool REINITIALISATION_OF_required_OF__SC_3 ;
            bool REINITIALISATION_OF_S_OF__SC_3 ;
            bool REINITIALISATION_OF_relevant_evt_OF__SC_3 ;
            bool REINITIALISATION_OF_required_OF__SC_4 ;
            bool REINITIALISATION_OF_S_OF__SC_4 ;
            bool REINITIALISATION_OF_relevant_evt_OF__SC_4 ;
            bool REINITIALISATION_OF_required_OF__SC_5 ;
            bool REINITIALISATION_OF_S_OF__SC_5 ;
            bool REINITIALISATION_OF_relevant_evt_OF__SC_5 ;
            bool REINITIALISATION_OF_required_OF__SD_1 ;
            bool REINITIALISATION_OF_S_OF__SD_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF__SD_1 ;
            bool REINITIALISATION_OF_required_OF__SD_2 ;
            bool REINITIALISATION_OF_S_OF__SD_2 ;
            bool REINITIALISATION_OF_relevant_evt_OF__SD_2 ;
            bool REINITIALISATION_OF_required_OF__SD_3 ;
            bool REINITIALISATION_OF_S_OF__SD_3 ;
            bool REINITIALISATION_OF_relevant_evt_OF__SD_3 ;
            bool REINITIALISATION_OF_required_OF__SD_4 ;
            bool REINITIALISATION_OF_S_OF__SD_4 ;
            bool REINITIALISATION_OF_relevant_evt_OF__SD_4 ;
            bool REINITIALISATION_OF_required_OF__SD_5 ;
            bool REINITIALISATION_OF_S_OF__SD_5 ;
            bool REINITIALISATION_OF_relevant_evt_OF__SD_5 ;
            bool REINITIALISATION_OF_required_OF_barrier_1 ;
            bool REINITIALISATION_OF_S_OF_barrier_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_barrier_1 ;
            bool REINITIALISATION_OF_required_OF_barrier_2 ;
            bool REINITIALISATION_OF_S_OF_barrier_2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_barrier_2 ;
            bool REINITIALISATION_OF_required_OF_barrier_3 ;
            bool REINITIALISATION_OF_S_OF_barrier_3 ;
            bool REINITIALISATION_OF_relevant_evt_OF_barrier_3 ;
            bool REINITIALISATION_OF_required_OF_barrier_4 ;
            bool REINITIALISATION_OF_S_OF_barrier_4 ;
            bool REINITIALISATION_OF_relevant_evt_OF_barrier_4 ;
            bool REINITIALISATION_OF_required_OF_barrier_5 ;
            bool REINITIALISATION_OF_S_OF_barrier_5 ;
            bool REINITIALISATION_OF_relevant_evt_OF_barrier_5 ;
            bool REINITIALISATION_OF_required_OF_barriers ;
            bool REINITIALISATION_OF_S_OF_barriers ;
            bool REINITIALISATION_OF_relevant_evt_OF_barriers ;
            bool REINITIALISATION_OF_required_OF_controller ;
            bool REINITIALISATION_OF_S_OF_controller ;
            bool REINITIALISATION_OF_relevant_evt_OF_controller ;
            bool REINITIALISATION_OF_required_OF_motor_1 ;
            bool REINITIALISATION_OF_S_OF_motor_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_motor_1 ;
            bool REINITIALISATION_OF_required_OF_motor_2 ;
            bool REINITIALISATION_OF_S_OF_motor_2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_motor_2 ;
            bool REINITIALISATION_OF_required_OF_motor_3 ;
            bool REINITIALISATION_OF_S_OF_motor_3 ;
            bool REINITIALISATION_OF_relevant_evt_OF_motor_3 ;
            bool REINITIALISATION_OF_required_OF_motor_4 ;
            bool REINITIALISATION_OF_S_OF_motor_4 ;
            bool REINITIALISATION_OF_relevant_evt_OF_motor_4 ;
            bool REINITIALISATION_OF_required_OF_motor_5 ;
            bool REINITIALISATION_OF_S_OF_motor_5 ;
            bool REINITIALISATION_OF_relevant_evt_OF_motor_5 ;
            bool REINITIALISATION_OF_required_OF_mp1 ;
            bool REINITIALISATION_OF_S_OF_mp1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_mp1 ;
            bool REINITIALISATION_OF_required_OF_mp2 ;
            bool REINITIALISATION_OF_S_OF_mp2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_mp2 ;
            bool REINITIALISATION_OF_required_OF_mp3 ;
            bool REINITIALISATION_OF_S_OF_mp3 ;
            bool REINITIALISATION_OF_relevant_evt_OF_mp3 ;
            bool REINITIALISATION_OF_required_OF_mp4 ;
            bool REINITIALISATION_OF_S_OF_mp4 ;
            bool REINITIALISATION_OF_relevant_evt_OF_mp4 ;
            bool REINITIALISATION_OF_required_OF_mp5 ;
            bool REINITIALISATION_OF_S_OF_mp5 ;
            bool REINITIALISATION_OF_relevant_evt_OF_mp5 ;
            bool REINITIALISATION_OF_required_OF_sensor_1 ;
            bool REINITIALISATION_OF_S_OF_sensor_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_sensor_1 ;
            bool REINITIALISATION_OF_required_OF_ms1 ;
            bool REINITIALISATION_OF_S_OF_ms1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_ms1 ;
            bool REINITIALISATION_OF_required_OF_ms2 ;
            bool REINITIALISATION_OF_S_OF_ms2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_ms2 ;
            bool REINITIALISATION_OF_required_OF_ms3 ;
            bool REINITIALISATION_OF_S_OF_ms3 ;
            bool REINITIALISATION_OF_relevant_evt_OF_ms3 ;
            bool REINITIALISATION_OF_required_OF_ms4 ;
            bool REINITIALISATION_OF_S_OF_ms4 ;
            bool REINITIALISATION_OF_relevant_evt_OF_ms4 ;
            bool REINITIALISATION_OF_required_OF_ms5 ;
            bool REINITIALISATION_OF_S_OF_ms5 ;
            bool REINITIALISATION_OF_relevant_evt_OF_ms5 ;
            bool REINITIALISATION_OF_required_OF_network_1 ;
            bool REINITIALISATION_OF_S_OF_network_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_network_1 ;
            bool REINITIALISATION_OF_required_OF_network_2 ;
            bool REINITIALISATION_OF_S_OF_network_2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_network_2 ;
            bool REINITIALISATION_OF_required_OF_network_3 ;
            bool REINITIALISATION_OF_S_OF_network_3 ;
            bool REINITIALISATION_OF_relevant_evt_OF_network_3 ;
            bool REINITIALISATION_OF_required_OF_network_4 ;
            bool REINITIALISATION_OF_S_OF_network_4 ;
            bool REINITIALISATION_OF_relevant_evt_OF_network_4 ;
            bool REINITIALISATION_OF_required_OF_network_5 ;
            bool REINITIALISATION_OF_S_OF_network_5 ;
            bool REINITIALISATION_OF_relevant_evt_OF_network_5 ;
            bool REINITIALISATION_OF_required_OF_sA_1 ;
            bool REINITIALISATION_OF_S_OF_sA_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_sA_1 ;
            bool REINITIALISATION_OF_required_OF_sA_1_I ;
            bool REINITIALISATION_OF_S_OF_sA_1_I ;
            bool REINITIALISATION_OF_relevant_evt_OF_sA_1_I ;
            bool REINITIALISATION_OF_to_be_fired_OF_sA_1_I ;
            bool REINITIALISATION_OF_required_OF_sA_2 ;
            bool REINITIALISATION_OF_S_OF_sA_2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_sA_2 ;
            bool REINITIALISATION_OF_required_OF_sA_2_I ;
            bool REINITIALISATION_OF_S_OF_sA_2_I ;
            bool REINITIALISATION_OF_relevant_evt_OF_sA_2_I ;
            bool REINITIALISATION_OF_to_be_fired_OF_sA_2_I ;
            bool REINITIALISATION_OF_required_OF_sA_3 ;
            bool REINITIALISATION_OF_S_OF_sA_3 ;
            bool REINITIALISATION_OF_relevant_evt_OF_sA_3 ;
            bool REINITIALISATION_OF_required_OF_sA_3_I ;
            bool REINITIALISATION_OF_S_OF_sA_3_I ;
            bool REINITIALISATION_OF_relevant_evt_OF_sA_3_I ;
            bool REINITIALISATION_OF_to_be_fired_OF_sA_3_I ;
            bool REINITIALISATION_OF_required_OF_sA_4 ;
            bool REINITIALISATION_OF_S_OF_sA_4 ;
            bool REINITIALISATION_OF_relevant_evt_OF_sA_4 ;
            bool REINITIALISATION_OF_required_OF_sA_4_I ;
            bool REINITIALISATION_OF_S_OF_sA_4_I ;
            bool REINITIALISATION_OF_relevant_evt_OF_sA_4_I ;
            bool REINITIALISATION_OF_to_be_fired_OF_sA_4_I ;
            bool REINITIALISATION_OF_required_OF_sA_5 ;
            bool REINITIALISATION_OF_S_OF_sA_5 ;
            bool REINITIALISATION_OF_relevant_evt_OF_sA_5 ;
            bool REINITIALISATION_OF_required_OF_sA_5_I ;
            bool REINITIALISATION_OF_S_OF_sA_5_I ;
            bool REINITIALISATION_OF_relevant_evt_OF_sA_5_I ;
            bool REINITIALISATION_OF_to_be_fired_OF_sA_5_I ;
            bool REINITIALISATION_OF_required_OF_sB_1 ;
            bool REINITIALISATION_OF_S_OF_sB_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_sB_1 ;
            bool REINITIALISATION_OF_required_OF_sB_1_I ;
            bool REINITIALISATION_OF_S_OF_sB_1_I ;
            bool REINITIALISATION_OF_relevant_evt_OF_sB_1_I ;
            bool REINITIALISATION_OF_to_be_fired_OF_sB_1_I ;
            bool REINITIALISATION_OF_required_OF_sB_2 ;
            bool REINITIALISATION_OF_S_OF_sB_2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_sB_2 ;
            bool REINITIALISATION_OF_required_OF_sB_2_I ;
            bool REINITIALISATION_OF_S_OF_sB_2_I ;
            bool REINITIALISATION_OF_relevant_evt_OF_sB_2_I ;
            bool REINITIALISATION_OF_to_be_fired_OF_sB_2_I ;
            bool REINITIALISATION_OF_required_OF_sB_3 ;
            bool REINITIALISATION_OF_S_OF_sB_3 ;
            bool REINITIALISATION_OF_relevant_evt_OF_sB_3 ;
            bool REINITIALISATION_OF_required_OF_sB_3_I ;
            bool REINITIALISATION_OF_S_OF_sB_3_I ;
            bool REINITIALISATION_OF_relevant_evt_OF_sB_3_I ;
            bool REINITIALISATION_OF_to_be_fired_OF_sB_3_I ;
            bool REINITIALISATION_OF_required_OF_sB_4 ;
            bool REINITIALISATION_OF_S_OF_sB_4 ;
            bool REINITIALISATION_OF_relevant_evt_OF_sB_4 ;
            bool REINITIALISATION_OF_required_OF_sB_4_I ;
            bool REINITIALISATION_OF_S_OF_sB_4_I ;
            bool REINITIALISATION_OF_relevant_evt_OF_sB_4_I ;
            bool REINITIALISATION_OF_to_be_fired_OF_sB_4_I ;
            bool REINITIALISATION_OF_required_OF_sB_5 ;
            bool REINITIALISATION_OF_S_OF_sB_5 ;
            bool REINITIALISATION_OF_relevant_evt_OF_sB_5 ;
            bool REINITIALISATION_OF_required_OF_sB_5_I ;
            bool REINITIALISATION_OF_S_OF_sB_5_I ;
            bool REINITIALISATION_OF_relevant_evt_OF_sB_5_I ;
            bool REINITIALISATION_OF_to_be_fired_OF_sB_5_I ;
            bool REINITIALISATION_OF_required_OF_sC_1 ;
            bool REINITIALISATION_OF_S_OF_sC_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_sC_1 ;
            bool REINITIALISATION_OF_required_OF_sC_1_I ;
            bool REINITIALISATION_OF_S_OF_sC_1_I ;
            bool REINITIALISATION_OF_relevant_evt_OF_sC_1_I ;
            bool REINITIALISATION_OF_to_be_fired_OF_sC_1_I ;
            bool REINITIALISATION_OF_required_OF_sC_2 ;
            bool REINITIALISATION_OF_S_OF_sC_2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_sC_2 ;
            bool REINITIALISATION_OF_required_OF_sC_2_I ;
            bool REINITIALISATION_OF_S_OF_sC_2_I ;
            bool REINITIALISATION_OF_relevant_evt_OF_sC_2_I ;
            bool REINITIALISATION_OF_to_be_fired_OF_sC_2_I ;
            bool REINITIALISATION_OF_required_OF_sC_3 ;
            bool REINITIALISATION_OF_S_OF_sC_3 ;
            bool REINITIALISATION_OF_relevant_evt_OF_sC_3 ;
            bool REINITIALISATION_OF_required_OF_sC_3_I ;
            bool REINITIALISATION_OF_S_OF_sC_3_I ;
            bool REINITIALISATION_OF_relevant_evt_OF_sC_3_I ;
            bool REINITIALISATION_OF_to_be_fired_OF_sC_3_I ;
            bool REINITIALISATION_OF_required_OF_sC_4 ;
            bool REINITIALISATION_OF_S_OF_sC_4 ;
            bool REINITIALISATION_OF_relevant_evt_OF_sC_4 ;
            bool REINITIALISATION_OF_required_OF_sC_4_I ;
            bool REINITIALISATION_OF_S_OF_sC_4_I ;
            bool REINITIALISATION_OF_relevant_evt_OF_sC_4_I ;
            bool REINITIALISATION_OF_to_be_fired_OF_sC_4_I ;
            bool REINITIALISATION_OF_required_OF_sC_5 ;
            bool REINITIALISATION_OF_S_OF_sC_5 ;
            bool REINITIALISATION_OF_relevant_evt_OF_sC_5 ;
            bool REINITIALISATION_OF_required_OF_sC_5_I ;
            bool REINITIALISATION_OF_S_OF_sC_5_I ;
            bool REINITIALISATION_OF_relevant_evt_OF_sC_5_I ;
            bool REINITIALISATION_OF_to_be_fired_OF_sC_5_I ;
            bool REINITIALISATION_OF_required_OF_sD_1 ;
            bool REINITIALISATION_OF_S_OF_sD_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_sD_1 ;
            bool REINITIALISATION_OF_required_OF_sD_1_I ;
            bool REINITIALISATION_OF_S_OF_sD_1_I ;
            bool REINITIALISATION_OF_relevant_evt_OF_sD_1_I ;
            bool REINITIALISATION_OF_to_be_fired_OF_sD_1_I ;
            bool REINITIALISATION_OF_required_OF_sD_2 ;
            bool REINITIALISATION_OF_S_OF_sD_2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_sD_2 ;
            bool REINITIALISATION_OF_required_OF_sD_2_I ;
            bool REINITIALISATION_OF_S_OF_sD_2_I ;
            bool REINITIALISATION_OF_relevant_evt_OF_sD_2_I ;
            bool REINITIALISATION_OF_to_be_fired_OF_sD_2_I ;
            bool REINITIALISATION_OF_required_OF_sD_3 ;
            bool REINITIALISATION_OF_S_OF_sD_3 ;
            bool REINITIALISATION_OF_relevant_evt_OF_sD_3 ;
            bool REINITIALISATION_OF_required_OF_sD_3_I ;
            bool REINITIALISATION_OF_S_OF_sD_3_I ;
            bool REINITIALISATION_OF_relevant_evt_OF_sD_3_I ;
            bool REINITIALISATION_OF_to_be_fired_OF_sD_3_I ;
            bool REINITIALISATION_OF_required_OF_sD_4 ;
            bool REINITIALISATION_OF_S_OF_sD_4 ;
            bool REINITIALISATION_OF_relevant_evt_OF_sD_4 ;
            bool REINITIALISATION_OF_required_OF_sD_4_I ;
            bool REINITIALISATION_OF_S_OF_sD_4_I ;
            bool REINITIALISATION_OF_relevant_evt_OF_sD_4_I ;
            bool REINITIALISATION_OF_to_be_fired_OF_sD_4_I ;
            bool REINITIALISATION_OF_required_OF_sD_5 ;
            bool REINITIALISATION_OF_S_OF_sD_5 ;
            bool REINITIALISATION_OF_relevant_evt_OF_sD_5 ;
            bool REINITIALISATION_OF_required_OF_sD_5_I ;
            bool REINITIALISATION_OF_S_OF_sD_5_I ;
            bool REINITIALISATION_OF_relevant_evt_OF_sD_5_I ;
            bool REINITIALISATION_OF_to_be_fired_OF_sD_5_I ;
            bool REINITIALISATION_OF_required_OF_sensor_2 ;
            bool REINITIALISATION_OF_S_OF_sensor_2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_sensor_2 ;
            bool REINITIALISATION_OF_required_OF_sensor_3 ;
            bool REINITIALISATION_OF_S_OF_sensor_3 ;
            bool REINITIALISATION_OF_relevant_evt_OF_sensor_3 ;
            bool REINITIALISATION_OF_required_OF_sensor_4 ;
            bool REINITIALISATION_OF_S_OF_sensor_4 ;
            bool REINITIALISATION_OF_relevant_evt_OF_sensor_4 ;
            bool REINITIALISATION_OF_required_OF_sensor_5 ;
            bool REINITIALISATION_OF_S_OF_sensor_5 ;
            bool REINITIALISATION_OF_relevant_evt_OF_sensor_5 ;
            bool REINITIALISATION_OF_required_OF_sensors ;
            bool REINITIALISATION_OF_S_OF_sensors ;
            bool REINITIALISATION_OF_relevant_evt_OF_sensors ;
            bool REINITIALISATION_OF_required_OF_sw_1 ;
            bool REINITIALISATION_OF_S_OF_sw_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_sw_1 ;
            bool REINITIALISATION_OF_required_OF_sw_2 ;
            bool REINITIALISATION_OF_S_OF_sw_2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_sw_2 ;
            bool REINITIALISATION_OF_required_OF_sw_3 ;
            bool REINITIALISATION_OF_S_OF_sw_3 ;
            bool REINITIALISATION_OF_relevant_evt_OF_sw_3 ;
            bool REINITIALISATION_OF_required_OF_sw_4 ;
            bool REINITIALISATION_OF_S_OF_sw_4 ;
            bool REINITIALISATION_OF_relevant_evt_OF_sw_4 ;
            bool REINITIALISATION_OF_required_OF_sw_5 ;
            bool REINITIALISATION_OF_S_OF_sw_5 ;
            bool REINITIALISATION_OF_relevant_evt_OF_sw_5 ;
            bool REINITIALISATION_OF_required_OF_switch_1 ;
            bool REINITIALISATION_OF_S_OF_switch_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_switch_1 ;
            bool REINITIALISATION_OF_required_OF_switch_2 ;
            bool REINITIALISATION_OF_S_OF_switch_2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_switch_2 ;
            bool REINITIALISATION_OF_required_OF_switch_3 ;
            bool REINITIALISATION_OF_S_OF_switch_3 ;
            bool REINITIALISATION_OF_relevant_evt_OF_switch_3 ;
            bool REINITIALISATION_OF_required_OF_switch_4 ;
            bool REINITIALISATION_OF_S_OF_switch_4 ;
            bool REINITIALISATION_OF_relevant_evt_OF_switch_4 ;
            bool REINITIALISATION_OF_required_OF_switch_5 ;
            bool REINITIALISATION_OF_S_OF_switch_5 ;
            bool REINITIALISATION_OF_relevant_evt_OF_switch_5 ;
            
		/* ---------- DECLARATION OF CONSTANTS ------------ */
			double const gamma_OF_sA_1_I = 1;
			std::string const when_to_check_OF_sC_2_I = "not_req_to_req";
			std::string const calculate_required_OF__SB_4 = "fn_fathers_and_trig";
			double const mu_OF_sD_2_I = 0.1;
			double const mu_OF_sD_3_I = 0.1;
			double const lambda_OF_sD_4 = 0.05;
			std::string const calculate_required_OF__SA_2 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_sB_1_I = false;
			double const lambda_OF_sB_4 = 0.05;
			double const mu_OF_sA_2 = 0.1;
			double const mu_OF_ms1 = 0.1;
			double const lambda_OF_sA_2 = 0.05;
			double const lambda_OF_sw_2 = 0.015;
			bool const failF_FROZEN_OF_sB_3 = false;
			std::string const when_to_check_OF_sA_3_I = "not_req_to_req";
			double const mu_OF_sB_4_I = 0.1;
			std::string const step_down_OF_switch_5 = "rep_any";
			std::string const calculate_required_OF_sA_1_I = "fn_fathers_and_trig";
			std::string const calculate_required_OF_sB_5 = "fn_fathers_and_trig";
			double const mu_OF_controller = 0.1;
			int const K_OF_sensor_4 = 2;
			bool const failF_FROZEN_OF_ms5 = false;
			std::string const calculate_required_OF_sensors = "fn_fathers_and_trig";
			bool const force_relevant_events_OF__SC_3 = false;
			double const mu_OF_sD_5_I = 0.1;
			int const K_OF_sensor_2 = 2;
			std::string const calculate_required_OF_sensor_4 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_mp3 = "fn_fathers_and_trig";
			bool const repairable_system_OF_OPTIONS = false;
			std::string const trimming_option_OF_OPTIONS = "according_to_article";
			std::string const calculate_required_OF_sensor_2 = "fn_fathers_and_trig";
			std::string const trigger_kind_OF_t_2_C1 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_sB_3 = false;
			double const lambda_OF_ms1 = 0.08;
			double const lambda_OF_sC_1 = 0.05;
			std::string const calculate_required_OF__SB_3 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_motor_4 = "fn_fathers_and_trig";
			std::string const trigger_kind_OF_t_4_C4 = "fn_fathers_and_trig";
			double const mu_OF_mp4 = 0.1;
			int const K_OF_sensor_3 = 2;
			double const mu_OF_sB_2 = 0.1;
			bool const force_relevant_events_OF__SC_4 = false;
			std::string const calculate_required_OF_sensor_3 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_sD_5 = false;
			std::string const when_to_check_OF_sD_1_I = "not_req_to_req";
			std::string const trigger_kind_OF_t_1_C2 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_sC_4 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_barrier_4 = false;
			double const mu_OF_network_2 = 0.1;
			double const mu_OF_sA_1 = 0.1;
			bool const failF_FROZEN_OF_sA_3 = false;
			bool const force_relevant_events_OF_switch_2 = false;
			double const lambda_OF_sA_1 = 0.05;
			bool const force_relevant_events_OF_barrier_5 = false;
			double const mu_OF_sC_5 = 0.1;
			bool const failF_FROZEN_OF_sD_3 = false;
			bool const force_relevant_events_OF_sD_5 = false;
			std::string const calculate_required_OF_UE_1 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_barrier_3 = "fn_fathers_and_trig";
			double const mu_OF_sC_3 = 0.1;
			double const lambda_OF_ms2 = 0.08;
			double const mu_OF_network_1 = 0.1;
			double const gamma_OF_sD_3_I = 1;
			double const gamma_OF_sD_2_I = 1;
			bool const failF_FROZEN_OF_sw_2 = false;
			std::string const calculate_required_OF_sA_5 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_sD_1 = "fn_fathers_and_trig";
			double const lambda_OF_sC_3 = 0.05;
			bool const force_relevant_events_OF_sA_3 = false;
			std::string const calculate_required_OF_switch_3 = "fn_fathers_and_trig";
			std::string const trigger_kind_OF_t_1_C1 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_mp2 = "fn_fathers_and_trig";
			std::string const trigger_kind_OF_t_1_C4 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_sA_5_I = false;
			bool const force_relevant_events_OF_motor_3 = false;
			std::string const calculate_required_OF_sB_2_I = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_sD_3 = false;
			double const gamma_OF_sB_4_I = 1;
			std::string const calculate_required_OF_sC_2 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_sC_3_I = false;
			double const mu_OF_sB_1 = 0.1;
			std::string const calculate_required_OF_sD_4 = "fn_fathers_and_trig";
			double const lambda_OF_controller = 0.03;
			double const lambda_OF_sB_1 = 0.05;
			std::string const calculate_required_OF_sD_2_I = "fn_fathers_and_trig";
			std::string const calculate_required_OF_sD_3_I = "fn_fathers_and_trig";
			std::string const calculate_required_OF_switch_1 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_sw_2 = false;
			std::string const calculate_required_OF_sA_2 = "fn_fathers_and_trig";
			double const gamma_OF_sD_5_I = 1;
			std::string const calculate_required_OF__SD_2 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_ms1 = "fn_fathers_and_trig";
			std::string const trigger_kind_OF_t_1 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_sB_4_I = "fn_fathers_and_trig";
			double const mu_OF_sB_1_I = 0.1;
			double const gamma_OF_sC_5_I = 1;
			std::string const calculate_required_OF_controller = "fn_fathers_and_trig";
			double const mu_OF_sD_4_I = 0.1;
			bool const trimming_OF_OPTIONS = true;
			bool const failI_FROZEN_OF_sA_1_I = false;
			std::string const calculate_required_OF__SB_2 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_sD_5_I = "fn_fathers_and_trig";
			double const lambda_OF_ms4 = 0.08;
			double const mu_OF_sw_5 = 0.1;
			double const lambda_OF_sw_1 = 0.015;
			std::string const calculate_required_OF_sA_4_I = "fn_fathers_and_trig";
			std::string const when_to_check_OF_sC_4_I = "not_req_to_req";
			std::string const calculate_required_OF_sC_1 = "fn_fathers_and_trig";
			double const gamma_OF_sC_2_I = 1;
			std::string const trigger_kind_OF_t_2 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_sB_3_I = false;
			double const lambda_OF_network_2 = 0.03;
			bool const force_relevant_events_OF_sC_1_I = false;
			std::string const calculate_required_OF_barriers = "fn_fathers_and_trig";
			std::string const calculate_required_OF_mp4 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_network_3 = false;
			double const lambda_OF_sw_3 = 0.015;
			std::string const when_to_check_OF_sC_3_I = "not_req_to_req";
			std::string const calculate_required_OF_network_2 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_sA_1 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_sB_4 = false;
			bool const force_relevant_events_OF_motor_5 = false;
			std::string const calculate_required_OF_System = "fn_fathers_and_trig";
			int const K_OF_sensor_1 = 2;
			std::string const calculate_required_OF_sC_5 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_network_4 = false;
			std::string const calculate_required_OF_sensor_1 = "fn_fathers_and_trig";
			double const mu_OF_sA_2_I = 0.1;
			std::string const calculate_required_OF_sC_3 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_network_1 = "fn_fathers_and_trig";
			std::string const step_down_OF_switch_1 = "rep_any";
			double const gamma_OF_sD_1_I = 1;
			std::string const calculate_required_OF__SD_1 = "fn_fathers_and_trig";
			double const mu_OF_mp5 = 0.1;
			bool const force_relevant_events_OF__SB_1 = false;
			std::string const calculate_required_OF_switch_5 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF__SD_5 = false;
			bool const failF_FROZEN_OF_sC_1 = false;
			std::string const calculate_required_OF_sB_1 = "fn_fathers_and_trig";
			double const gamma_OF_sB_1_I = 1;
			std::string const when_to_check_OF_sC_1_I = "not_req_to_req";
			bool const failF_FROZEN_OF_sw_1 = false;
			double const gamma_OF_sD_4_I = 1;
			double const mu_OF_sA_5_I = 0.1;
			std::string const calculate_required_OF__SB_5 = "fn_fathers_and_trig";
			bool const failI_FROZEN_OF_sD_3_I = false;
			bool const failI_FROZEN_OF_sD_2_I = false;
			std::string const calculate_required_OF__SC_2 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF__SD_4 = false;
			bool const failF_FROZEN_OF_sw_3 = false;
			std::string const calculate_required_OF_sB_1_I = "fn_fathers_and_trig";
			std::string const calculate_required_OF__SA_3 = "fn_fathers_and_trig";
			bool const failI_FROZEN_OF_sB_4_I = false;
			std::string const calculate_required_OF_sD_4_I = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_sw_1 = false;
			std::string const calculate_required_OF_sw_5 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_barrier_2 = "fn_fathers_and_trig";
			bool const failI_FROZEN_OF_sD_5_I = false;
			bool const force_relevant_events_OF__SA_5 = false;
			int const K_OF_sensor_5 = 2;
			std::string const when_to_check_OF_sB_2_I = "not_req_to_req";
			bool const force_relevant_events_OF_ms3 = false;
			std::string const trigger_kind_OF_t_5 = "fn_fathers_and_trig";
			double const mu_OF_sB_3_I = 0.1;
			double const lambda_OF_sC_2 = 0.05;
			double const gamma_OF_sA_2_I = 1;
			std::string const trigger_kind_OF_t_1_C3 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_barrier_4 = "fn_fathers_and_trig";
			std::string const when_to_check_OF_sB_5_I = "not_req_to_req";
			std::string const when_to_check_OF_sA_4_I = "not_req_to_req";
			std::string const calculate_required_OF_mp1 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_sA_2_I = "fn_fathers_and_trig";
			bool const force_relevant_events_OF__SA_4 = false;
			double const gamma_OF_sA_5_I = 1;
			bool const failF_FROZEN_OF_sD_2 = false;
			double const gamma_OF_sC_3_I = 1;
			std::string const calculate_required_OF__SA_1 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_mp5 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_sw_5 = false;
			bool const failF_FROZEN_OF_sA_4 = false;
			double const mu_OF_sC_5_I = 0.1;
			std::string const calculate_required_OF__SC_5 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_switch_4 = false;
			std::string const calculate_required_OF_sA_5_I = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_ms5 = false;
			bool const force_relevant_events_OF_sD_2 = false;
			double const mu_OF_ms2 = 0.1;
			bool const failF_FROZEN_OF_network_5 = false;
			double const lambda_OF_sB_2 = 0.05;
			double const mu_OF_sC_2_I = 0.1;
			std::string const calculate_required_OF_sw_4 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_sA_4 = false;
			bool const force_relevant_events_OF_motor_2 = false;
			bool const force_relevant_events_OF_barrier_1 = false;
			bool const failI_FROZEN_OF_sB_1_I = false;
			std::string const trigger_kind_OF_t_2_C2 = "fn_fathers_and_trig";
			bool const failI_FROZEN_OF_sD_4_I = false;
			double const mu_OF_sA_3_I = 0.1;
			bool const force_relevant_events_OF_sC_4_I = false;
			bool const force_relevant_events_OF_motor_1 = false;
			double const gamma_OF_sB_3_I = 1;
			double const lambda_OF_sC_5 = 0.05;
			bool const failF_FROZEN_OF_sB_5 = false;
			bool const failF_FROZEN_OF_mp1 = false;
			bool const force_relevant_events_OF__SB_4 = false;
			bool const force_relevant_events_OF__SA_2 = false;
			bool const failF_FROZEN_OF_mp3 = false;
			double const mu_OF_ms4 = 0.1;
			bool const force_relevant_events_OF_sA_1_I = false;
			bool const force_relevant_events_OF_sB_5 = false;
			double const lambda_OF_network_4 = 0.03;
			double const mu_OF_sD_1_I = 0.1;
			std::string const calculate_required_OF__SD_3 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_sensors = false;
			bool const force_relevant_events_OF_sensor_4 = false;
			bool const failF_FROZEN_OF_sw_4 = false;
			bool const force_relevant_events_OF_mp3 = false;
			bool const force_relevant_events_OF_sensor_2 = false;
			bool const failF_FROZEN_OF_sC_4 = false;
			bool const force_relevant_events_OF__SB_3 = false;
			double const lambda_OF_ms3 = 0.08;
			bool const failI_FROZEN_OF_sA_2_I = false;
			bool const force_relevant_events_OF_motor_4 = false;
			bool const force_relevant_events_OF_sensor_3 = false;
			std::string const trigger_kind_OF_t_4 = "fn_fathers_and_trig";
			std::string const trigger_kind_OF_t_5_C2 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_sC_5_I = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_sC_4 = false;
			bool const failF_FROZEN_OF_sA_5 = false;
			bool const failF_FROZEN_OF_sD_1 = false;
			std::string const calculate_required_OF_sB_2 = "fn_fathers_and_trig";
			double const gamma_OF_sA_3_I = 1;
			double const mu_OF_sB_3 = 0.1;
			bool const failF_FROZEN_OF_mp2 = false;
			std::string const calculate_required_OF_ms2 = "fn_fathers_and_trig";
			bool const failI_FROZEN_OF_sA_5_I = false;
			std::string const calculate_required_OF_sC_2_I = "fn_fathers_and_trig";
			double const lambda_OF_sB_3 = 0.05;
			bool const failF_FROZEN_OF_sC_2 = false;
			bool const failF_FROZEN_OF_sD_4 = false;
			double const mu_OF_ms5 = 0.1;
			std::string const when_to_check_OF_sA_1_I = "not_req_to_req";
			bool const force_relevant_events_OF_barrier_3 = false;
			bool const force_relevant_events_OF_sA_5 = false;
			bool const force_relevant_events_OF_network_3 = false;
			bool const failF_FROZEN_OF_sA_2 = false;
			bool const force_relevant_events_OF_sD_1 = false;
			std::string const calculate_required_OF_sA_3_I = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_ms1 = false;
			std::string const trigger_kind_OF_t_3_C4 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_switch_3 = false;
			bool const force_relevant_events_OF_mp2 = false;
			bool const force_relevant_events_OF_sB_2_I = false;
			bool const force_relevant_events_OF_sD_4 = false;
			bool const failF_FROZEN_OF_controller = false;
			std::string const trigger_kind_OF_t_4_C1 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_sB_4 = false;
			double const mu_OF_sC_4_I = 0.1;
			bool const force_relevant_events_OF_sD_3_I = false;
			bool const force_relevant_events_OF_sD_2_I = false;
			bool const force_relevant_events_OF_switch_1 = false;
			double const lambda_OF_ms5 = 0.08;
			double const mu_OF_sD_5 = 0.1;
			bool const force_relevant_events_OF_sA_2 = false;
			bool const force_relevant_events_OF__SD_2 = false;
			double const lambda_OF_sD_5 = 0.05;
			bool const failI_FROZEN_OF_sB_3_I = false;
			std::string const trigger_kind_OF_t_3_C3 = "fn_fathers_and_trig";
			double const mu_OF_sA_3 = 0.1;
			bool const force_relevant_events_OF_sB_4_I = false;
			std::string const calculate_required_OF_ms4 = "fn_fathers_and_trig";
			double const lambda_OF_sA_3 = 0.05;
			bool const failF_FROZEN_OF_mp4 = false;
			std::string const calculate_required_OF_sD_1_I = "fn_fathers_and_trig";
			double const mu_OF_sD_3 = 0.1;
			double const mu_OF_sC_3_I = 0.1;
			bool const failF_FROZEN_OF_sB_2 = false;
			bool const force_relevant_events_OF__SB_2 = false;
			double const lambda_OF_sD_3 = 0.05;
			bool const force_relevant_events_OF_sB_5_I = false;
			bool const failF_FROZEN_OF_ms2 = false;
			bool const force_relevant_events_OF_sA_4_I = false;
			bool const force_relevant_events_OF_sC_1 = false;
			double const mu_OF_sw_2 = 0.1;
			bool const failF_FROZEN_OF_network_2 = false;
			double const lambda_OF_sw_5 = 0.015;
			bool const failF_FROZEN_OF_sA_1 = false;
			bool const force_relevant_events_OF_barriers = false;
			bool const no_trim_OF___ARBRE__EIRM = false;
			bool const force_relevant_events_OF__SC_1 = false;
			bool const force_relevant_events_OF_mp4 = false;
			bool const failF_FROZEN_OF_sC_5 = false;
			bool const force_relevant_events_OF_sw_3 = false;
			std::string const calculate_required_OF__SC_3 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_sC_3 = false;
			bool const failF_FROZEN_OF_network_1 = false;
			bool const failI_FROZEN_OF_sC_5_I = false;
			bool const force_relevant_events_OF_network_2 = false;
			std::string const when_to_check_OF_sD_2_I = "not_req_to_req";
			std::string const when_to_check_OF_sD_3_I = "not_req_to_req";
			bool const force_relevant_events_OF_sA_1 = false;
			std::string const calculate_required_OF_sB_3 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_System = false;
			double const mu_OF_sC_1_I = 0.1;
			bool const force_relevant_events_OF_sC_5 = false;
			bool const failI_FROZEN_OF_sC_2_I = false;
			bool const failF_FROZEN_OF_sB_1 = false;
			double const lambda_OF_mp3 = 0.08;
			bool const force_relevant_events_OF_sensor_1 = false;
			std::string const when_to_check_OF_sB_4_I = "not_req_to_req";
			std::string const calculate_required_OF_ms5 = "fn_fathers_and_trig";
			std::string const calculate_required_OF__SC_4 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_sC_3 = false;
			bool const force_relevant_events_OF_network_1 = false;
			double const gamma_OF_sC_4_I = 1;
			bool const trim_article_OF___ARBRE__EIRM = true;
			std::string const when_to_check_OF_sD_5_I = "not_req_to_req";
			bool const force_relevant_events_OF__SD_1 = false;
			bool const failI_FROZEN_OF_sA_3_I = false;
			std::string const trigger_kind_OF_t_3_C1 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_switch_5 = false;
			std::string const calculate_required_OF_switch_2 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_sB_1 = false;
			double const mu_OF_network_3 = 0.1;
			std::string const calculate_required_OF_barrier_5 = "fn_fathers_and_trig";
			double const mu_OF_network_4 = 0.1;
			std::string const calculate_required_OF_sC_4_I = "fn_fathers_and_trig";
			std::string const calculate_required_OF_sD_5 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF__SB_5 = false;
			bool const force_relevant_events_OF__SC_2 = false;
			double const mu_OF_sB_2_I = 0.1;
			bool const force_relevant_events_OF_UE_1 = true;
			std::string const trigger_kind_OF_t_2_C4 = "fn_fathers_and_trig";
			double const mu_OF_sB_4 = 0.1;
			std::string const calculate_required_OF_sA_3 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF__SA_3 = false;
			std::string const calculate_required_OF_motor_3 = "fn_fathers_and_trig";
			double const lambda_OF_sw_4 = 0.015;
			bool const force_relevant_events_OF_sD_4_I = false;
			std::string const calculate_required_OF_sD_3 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_sC_3_I = "fn_fathers_and_trig";
			bool const failI_FROZEN_OF_sD_1_I = false;
			bool const force_relevant_events_OF_sw_5 = false;
			double const lambda_OF_mp2 = 0.08;
			bool const force_relevant_events_OF_barrier_2 = false;
			std::string const calculate_required_OF_sw_2 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_sensor_5 = false;
			double const mu_OF_sB_5_I = 0.1;
			double const mu_OF_sA_4_I = 0.1;
			double const mu_OF_sC_1 = 0.1;
			double const gamma_OF_sC_1_I = 1;
			bool const force_relevant_events_OF_network_5 = false;
			double const mu_OF_sw_1 = 0.1;
			std::string const trigger_kind_OF_t_4_C2 = "fn_fathers_and_trig";
			std::string const step_down_OF_switch_4 = "rep_any";
			std::string const calculate_required_OF_sB_3_I = "fn_fathers_and_trig";
			std::string const calculate_required_OF_sC_1_I = "fn_fathers_and_trig";
			double const mu_OF_sw_3 = 0.1;
			bool const failF_FROZEN_OF_mp5 = false;
			double const mu_OF_ms3 = 0.1;
			bool const Profil1_OF___ARBRE__EIRM = true;
			double const lambda_OF_network_3 = 0.03;
			std::string const when_to_check_OF_sB_1_I = "not_req_to_req";
			bool const force_relevant_events_OF_mp1 = false;
			std::string const step_down_OF_switch_2 = "rep_any";
			bool const force_relevant_events_OF_sA_2_I = false;
			std::string const when_to_check_OF_sD_4_I = "not_req_to_req";
			double const lambda_OF_mp4 = 0.08;
			double const gamma_OF_sB_2_I = 1;
			bool const force_relevant_events_OF__SA_1 = false;
			bool const force_relevant_events_OF_mp5 = false;
			std::string const calculate_required_OF_motor_5 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_network_3 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_network_4 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF__SC_5 = false;
			bool const failI_FROZEN_OF_sC_4_I = false;
			std::string const trigger_kind_OF_t_3_C2 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_sw_4 = false;
			std::string const calculate_required_OF_sB_4 = "fn_fathers_and_trig";
			bool const no_repair_OF___ARBRE__EIRM = true;
			std::string const calculate_required_OF__SB_1 = "fn_fathers_and_trig";
			double const gamma_OF_sB_5_I = 1;
			std::string const calculate_required_OF__SD_5 = "fn_fathers_and_trig";
			double const gamma_OF_sA_4_I = 1;
			bool const failI_FROZEN_OF_sC_3_I = false;
			double const mu_OF_sD_2 = 0.1;
			std::string const when_to_check_OF_sA_2_I = "not_req_to_req";
			std::string const calculate_required_OF__SD_4 = "fn_fathers_and_trig";
			double const lambda_OF_sD_2 = 0.05;
			std::string const calculate_required_OF_sB_5_I = "fn_fathers_and_trig";
			std::string const trigger_kind_OF_t_5_C1 = "fn_fathers_and_trig";
			double const mu_OF_sA_4 = 0.1;
			double const lambda_OF_sA_4 = 0.05;
			std::string const calculate_required_OF_sw_1 = "fn_fathers_and_trig";
			std::string const trigger_kind_OF_t_5_C4 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_sC_2 = false;
			std::string const calculate_required_OF__SC_1 = "fn_fathers_and_trig";
			double const mu_OF_network_5 = 0.1;
			std::string const calculate_required_OF__SA_5 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_network_4 = false;
			std::string const when_to_check_OF_sA_5_I = "not_req_to_req";
			bool const force_relevant_events_OF_ms1 = false;
			std::string const calculate_required_OF_sw_3 = "fn_fathers_and_trig";
			std::string const trigger_kind_OF_t_3 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF__SD_3 = false;
			std::string const calculate_required_OF_ms3 = "fn_fathers_and_trig";
			double const lambda_OF_network_1 = 0.03;
			bool const failI_FROZEN_OF_sC_1_I = false;
			bool const force_relevant_events_OF_controller = false;
			bool const force_relevant_events_OF_sD_5_I = false;
			std::string const step_down_OF_switch_3 = "rep_any";
			double const mu_OF_sA_1_I = 0.1;
			double const mu_OF_sB_5 = 0.1;
			double const mu_OF_mp1 = 0.1;
			double const lambda_OF_sB_5 = 0.05;
			bool const force_relevant_events_OF_sC_5_I = false;
			double const mu_OF_mp3 = 0.1;
			bool const force_relevant_events_OF_sB_2 = false;
			std::string const calculate_required_OF__SA_4 = "fn_fathers_and_trig";
			std::string const when_to_check_OF_sB_3_I = "not_req_to_req";
			bool const force_relevant_events_OF_ms2 = false;
			bool const force_relevant_events_OF_sC_2_I = false;
			bool const failI_FROZEN_OF_sB_2_I = false;
			double const lambda_OF_mp1 = 0.08;
			double const mu_OF_sw_4 = 0.1;
			bool const force_relevant_events_OF_sA_3_I = false;
			double const mu_OF_sC_4 = 0.1;
			double const lambda_OF_mp5 = 0.08;
			std::string const calculate_required_OF_switch_4 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_ms3 = false;
			double const lambda_OF_sC_4 = 0.05;
			std::string const calculate_required_OF_sD_2 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_ms4 = false;
			double const lambda_OF_network_5 = 0.03;
			std::string const calculate_required_OF_sA_4 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_motor_2 = "fn_fathers_and_trig";
			bool const failI_FROZEN_OF_sB_5_I = false;
			std::string const trigger_kind_OF_t_4_C3 = "fn_fathers_and_trig";
			bool const failI_FROZEN_OF_sA_4_I = false;
			std::string const calculate_required_OF_barrier_1 = "fn_fathers_and_trig";
			std::string const trigger_kind_OF_t_5_C3 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_sensor_5 = "fn_fathers_and_trig";
			double const mu_OF_sA_5 = 0.1;
			double const mu_OF_sD_1 = 0.1;
			std::string const when_to_check_OF_sC_5_I = "not_req_to_req";
			std::string const trigger_kind_OF_t_2_C3 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_motor_1 = "fn_fathers_and_trig";
			double const lambda_OF_sA_5 = 0.05;
			double const lambda_OF_sD_1 = 0.05;
			bool const force_relevant_events_OF_ms4 = false;
			double const mu_OF_mp2 = 0.1;
			std::string const calculate_required_OF_network_5 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_sD_1_I = false;
			double const mu_OF_sC_2 = 0.1;
			double const mu_OF_sD_4 = 0.1;
		
            /* ---------- DECLARATION OF OCCURRENCE RULES FIRING FLAGS ------------ */
            bool FIRE_xx10_OF_controller;
            bool FIRE_xx10_OF_mp1;
            bool FIRE_xx10_OF_mp2;
            bool FIRE_xx10_OF_mp3;
            bool FIRE_xx10_OF_mp4;
            bool FIRE_xx10_OF_mp5;
            bool FIRE_xx10_OF_ms1;
            bool FIRE_xx10_OF_ms2;
            bool FIRE_xx10_OF_ms3;
            bool FIRE_xx10_OF_ms4;
            bool FIRE_xx10_OF_ms5;
            bool FIRE_xx10_OF_network_1;
            bool FIRE_xx10_OF_network_2;
            bool FIRE_xx10_OF_network_3;
            bool FIRE_xx10_OF_network_4;
            bool FIRE_xx10_OF_network_5;
            bool FIRE_xx10_OF_sA_1;
            bool FIRE_xx23_OF_sA_1_I_INS_17;
            bool FIRE_xx23_OF_sA_1_I_INS_18;
            bool FIRE_xx10_OF_sA_2;
            bool FIRE_xx23_OF_sA_2_I_INS_20;
            bool FIRE_xx23_OF_sA_2_I_INS_21;
            bool FIRE_xx10_OF_sA_3;
            bool FIRE_xx23_OF_sA_3_I_INS_23;
            bool FIRE_xx23_OF_sA_3_I_INS_24;
            bool FIRE_xx10_OF_sA_4;
            bool FIRE_xx23_OF_sA_4_I_INS_26;
            bool FIRE_xx23_OF_sA_4_I_INS_27;
            bool FIRE_xx10_OF_sA_5;
            bool FIRE_xx23_OF_sA_5_I_INS_29;
            bool FIRE_xx23_OF_sA_5_I_INS_30;
            bool FIRE_xx10_OF_sB_1;
            bool FIRE_xx23_OF_sB_1_I_INS_32;
            bool FIRE_xx23_OF_sB_1_I_INS_33;
            bool FIRE_xx10_OF_sB_2;
            bool FIRE_xx23_OF_sB_2_I_INS_35;
            bool FIRE_xx23_OF_sB_2_I_INS_36;
            bool FIRE_xx10_OF_sB_3;
            bool FIRE_xx23_OF_sB_3_I_INS_38;
            bool FIRE_xx23_OF_sB_3_I_INS_39;
            bool FIRE_xx10_OF_sB_4;
            bool FIRE_xx23_OF_sB_4_I_INS_41;
            bool FIRE_xx23_OF_sB_4_I_INS_42;
            bool FIRE_xx10_OF_sB_5;
            bool FIRE_xx23_OF_sB_5_I_INS_44;
            bool FIRE_xx23_OF_sB_5_I_INS_45;
            bool FIRE_xx10_OF_sC_1;
            bool FIRE_xx23_OF_sC_1_I_INS_47;
            bool FIRE_xx23_OF_sC_1_I_INS_48;
            bool FIRE_xx10_OF_sC_2;
            bool FIRE_xx23_OF_sC_2_I_INS_50;
            bool FIRE_xx23_OF_sC_2_I_INS_51;
            bool FIRE_xx10_OF_sC_3;
            bool FIRE_xx23_OF_sC_3_I_INS_53;
            bool FIRE_xx23_OF_sC_3_I_INS_54;
            bool FIRE_xx10_OF_sC_4;
            bool FIRE_xx23_OF_sC_4_I_INS_56;
            bool FIRE_xx23_OF_sC_4_I_INS_57;
            bool FIRE_xx10_OF_sC_5;
            bool FIRE_xx23_OF_sC_5_I_INS_59;
            bool FIRE_xx23_OF_sC_5_I_INS_60;
            bool FIRE_xx10_OF_sD_1;
            bool FIRE_xx23_OF_sD_1_I_INS_62;
            bool FIRE_xx23_OF_sD_1_I_INS_63;
            bool FIRE_xx10_OF_sD_2;
            bool FIRE_xx23_OF_sD_2_I_INS_65;
            bool FIRE_xx23_OF_sD_2_I_INS_66;
            bool FIRE_xx10_OF_sD_3;
            bool FIRE_xx23_OF_sD_3_I_INS_68;
            bool FIRE_xx23_OF_sD_3_I_INS_69;
            bool FIRE_xx10_OF_sD_4;
            bool FIRE_xx23_OF_sD_4_I_INS_71;
            bool FIRE_xx23_OF_sD_4_I_INS_72;
            bool FIRE_xx10_OF_sD_5;
            bool FIRE_xx23_OF_sD_5_I_INS_74;
            bool FIRE_xx23_OF_sD_5_I_INS_75;
            bool FIRE_xx10_OF_sw_1;
            bool FIRE_xx10_OF_sw_2;
            bool FIRE_xx10_OF_sw_3;
            bool FIRE_xx10_OF_sw_4;
            bool FIRE_xx10_OF_sw_5;

            int required_OF_System = 0 ;
            int already_S_OF_System = 1 ;
            int S_OF_System = 2 ;
            int relevant_evt_OF_System = 3 ;
            int required_OF_UE_1 = 4 ;
            int already_S_OF_UE_1 = 5 ;
            int S_OF_UE_1 = 6 ;
            int relevant_evt_OF_UE_1 = 7 ;
            int required_OF__SA_1 = 8 ;
            int already_S_OF__SA_1 = 9 ;
            int S_OF__SA_1 = 10 ;
            int relevant_evt_OF__SA_1 = 11 ;
            int required_OF__SA_2 = 12 ;
            int already_S_OF__SA_2 = 13 ;
            int S_OF__SA_2 = 14 ;
            int relevant_evt_OF__SA_2 = 15 ;
            int required_OF__SA_3 = 16 ;
            int already_S_OF__SA_3 = 17 ;
            int S_OF__SA_3 = 18 ;
            int relevant_evt_OF__SA_3 = 19 ;
            int required_OF__SA_4 = 20 ;
            int already_S_OF__SA_4 = 21 ;
            int S_OF__SA_4 = 22 ;
            int relevant_evt_OF__SA_4 = 23 ;
            int required_OF__SA_5 = 24 ;
            int already_S_OF__SA_5 = 25 ;
            int S_OF__SA_5 = 26 ;
            int relevant_evt_OF__SA_5 = 27 ;
            int required_OF__SB_1 = 28 ;
            int already_S_OF__SB_1 = 29 ;
            int S_OF__SB_1 = 30 ;
            int relevant_evt_OF__SB_1 = 31 ;
            int required_OF__SB_2 = 32 ;
            int already_S_OF__SB_2 = 33 ;
            int S_OF__SB_2 = 34 ;
            int relevant_evt_OF__SB_2 = 35 ;
            int required_OF__SB_3 = 36 ;
            int already_S_OF__SB_3 = 37 ;
            int S_OF__SB_3 = 38 ;
            int relevant_evt_OF__SB_3 = 39 ;
            int required_OF__SB_4 = 40 ;
            int already_S_OF__SB_4 = 41 ;
            int S_OF__SB_4 = 42 ;
            int relevant_evt_OF__SB_4 = 43 ;
            int required_OF__SB_5 = 44 ;
            int already_S_OF__SB_5 = 45 ;
            int S_OF__SB_5 = 46 ;
            int relevant_evt_OF__SB_5 = 47 ;
            int required_OF__SC_1 = 48 ;
            int already_S_OF__SC_1 = 49 ;
            int S_OF__SC_1 = 50 ;
            int relevant_evt_OF__SC_1 = 51 ;
            int required_OF__SC_2 = 52 ;
            int already_S_OF__SC_2 = 53 ;
            int S_OF__SC_2 = 54 ;
            int relevant_evt_OF__SC_2 = 55 ;
            int required_OF__SC_3 = 56 ;
            int already_S_OF__SC_3 = 57 ;
            int S_OF__SC_3 = 58 ;
            int relevant_evt_OF__SC_3 = 59 ;
            int required_OF__SC_4 = 60 ;
            int already_S_OF__SC_4 = 61 ;
            int S_OF__SC_4 = 62 ;
            int relevant_evt_OF__SC_4 = 63 ;
            int required_OF__SC_5 = 64 ;
            int already_S_OF__SC_5 = 65 ;
            int S_OF__SC_5 = 66 ;
            int relevant_evt_OF__SC_5 = 67 ;
            int required_OF__SD_1 = 68 ;
            int already_S_OF__SD_1 = 69 ;
            int S_OF__SD_1 = 70 ;
            int relevant_evt_OF__SD_1 = 71 ;
            int required_OF__SD_2 = 72 ;
            int already_S_OF__SD_2 = 73 ;
            int S_OF__SD_2 = 74 ;
            int relevant_evt_OF__SD_2 = 75 ;
            int required_OF__SD_3 = 76 ;
            int already_S_OF__SD_3 = 77 ;
            int S_OF__SD_3 = 78 ;
            int relevant_evt_OF__SD_3 = 79 ;
            int required_OF__SD_4 = 80 ;
            int already_S_OF__SD_4 = 81 ;
            int S_OF__SD_4 = 82 ;
            int relevant_evt_OF__SD_4 = 83 ;
            int required_OF__SD_5 = 84 ;
            int already_S_OF__SD_5 = 85 ;
            int S_OF__SD_5 = 86 ;
            int relevant_evt_OF__SD_5 = 87 ;
            int required_OF_barrier_1 = 88 ;
            int already_S_OF_barrier_1 = 89 ;
            int S_OF_barrier_1 = 90 ;
            int relevant_evt_OF_barrier_1 = 91 ;
            int required_OF_barrier_2 = 92 ;
            int already_S_OF_barrier_2 = 93 ;
            int S_OF_barrier_2 = 94 ;
            int relevant_evt_OF_barrier_2 = 95 ;
            int required_OF_barrier_3 = 96 ;
            int already_S_OF_barrier_3 = 97 ;
            int S_OF_barrier_3 = 98 ;
            int relevant_evt_OF_barrier_3 = 99 ;
            int required_OF_barrier_4 = 100 ;
            int already_S_OF_barrier_4 = 101 ;
            int S_OF_barrier_4 = 102 ;
            int relevant_evt_OF_barrier_4 = 103 ;
            int required_OF_barrier_5 = 104 ;
            int already_S_OF_barrier_5 = 105 ;
            int S_OF_barrier_5 = 106 ;
            int relevant_evt_OF_barrier_5 = 107 ;
            int required_OF_barriers = 108 ;
            int already_S_OF_barriers = 109 ;
            int S_OF_barriers = 110 ;
            int relevant_evt_OF_barriers = 111 ;
            int required_OF_controller = 112 ;
            int already_S_OF_controller = 113 ;
            int S_OF_controller = 114 ;
            int relevant_evt_OF_controller = 115 ;
            int failF_OF_controller = 116 ;
            int required_OF_motor_1 = 117 ;
            int already_S_OF_motor_1 = 118 ;
            int S_OF_motor_1 = 119 ;
            int relevant_evt_OF_motor_1 = 120 ;
            int required_OF_motor_2 = 121 ;
            int already_S_OF_motor_2 = 122 ;
            int S_OF_motor_2 = 123 ;
            int relevant_evt_OF_motor_2 = 124 ;
            int required_OF_motor_3 = 125 ;
            int already_S_OF_motor_3 = 126 ;
            int S_OF_motor_3 = 127 ;
            int relevant_evt_OF_motor_3 = 128 ;
            int required_OF_motor_4 = 129 ;
            int already_S_OF_motor_4 = 130 ;
            int S_OF_motor_4 = 131 ;
            int relevant_evt_OF_motor_4 = 132 ;
            int required_OF_motor_5 = 133 ;
            int already_S_OF_motor_5 = 134 ;
            int S_OF_motor_5 = 135 ;
            int relevant_evt_OF_motor_5 = 136 ;
            int required_OF_mp1 = 137 ;
            int already_S_OF_mp1 = 138 ;
            int S_OF_mp1 = 139 ;
            int relevant_evt_OF_mp1 = 140 ;
            int failF_OF_mp1 = 141 ;
            int required_OF_mp2 = 142 ;
            int already_S_OF_mp2 = 143 ;
            int S_OF_mp2 = 144 ;
            int relevant_evt_OF_mp2 = 145 ;
            int failF_OF_mp2 = 146 ;
            int required_OF_mp3 = 147 ;
            int already_S_OF_mp3 = 148 ;
            int S_OF_mp3 = 149 ;
            int relevant_evt_OF_mp3 = 150 ;
            int failF_OF_mp3 = 151 ;
            int required_OF_mp4 = 152 ;
            int already_S_OF_mp4 = 153 ;
            int S_OF_mp4 = 154 ;
            int relevant_evt_OF_mp4 = 155 ;
            int failF_OF_mp4 = 156 ;
            int required_OF_mp5 = 157 ;
            int already_S_OF_mp5 = 158 ;
            int S_OF_mp5 = 159 ;
            int relevant_evt_OF_mp5 = 160 ;
            int failF_OF_mp5 = 161 ;
            int required_OF_sensor_1 = 162 ;
            int already_S_OF_sensor_1 = 163 ;
            int S_OF_sensor_1 = 164 ;
            int relevant_evt_OF_sensor_1 = 165 ;
            int required_OF_ms1 = 166 ;
            int already_S_OF_ms1 = 167 ;
            int S_OF_ms1 = 168 ;
            int relevant_evt_OF_ms1 = 169 ;
            int failF_OF_ms1 = 170 ;
            int required_OF_ms2 = 171 ;
            int already_S_OF_ms2 = 172 ;
            int S_OF_ms2 = 173 ;
            int relevant_evt_OF_ms2 = 174 ;
            int failF_OF_ms2 = 175 ;
            int required_OF_ms3 = 176 ;
            int already_S_OF_ms3 = 177 ;
            int S_OF_ms3 = 178 ;
            int relevant_evt_OF_ms3 = 179 ;
            int failF_OF_ms3 = 180 ;
            int required_OF_ms4 = 181 ;
            int already_S_OF_ms4 = 182 ;
            int S_OF_ms4 = 183 ;
            int relevant_evt_OF_ms4 = 184 ;
            int failF_OF_ms4 = 185 ;
            int required_OF_ms5 = 186 ;
            int already_S_OF_ms5 = 187 ;
            int S_OF_ms5 = 188 ;
            int relevant_evt_OF_ms5 = 189 ;
            int failF_OF_ms5 = 190 ;
            int required_OF_network_1 = 191 ;
            int already_S_OF_network_1 = 192 ;
            int S_OF_network_1 = 193 ;
            int relevant_evt_OF_network_1 = 194 ;
            int failF_OF_network_1 = 195 ;
            int required_OF_network_2 = 196 ;
            int already_S_OF_network_2 = 197 ;
            int S_OF_network_2 = 198 ;
            int relevant_evt_OF_network_2 = 199 ;
            int failF_OF_network_2 = 200 ;
            int required_OF_network_3 = 201 ;
            int already_S_OF_network_3 = 202 ;
            int S_OF_network_3 = 203 ;
            int relevant_evt_OF_network_3 = 204 ;
            int failF_OF_network_3 = 205 ;
            int required_OF_network_4 = 206 ;
            int already_S_OF_network_4 = 207 ;
            int S_OF_network_4 = 208 ;
            int relevant_evt_OF_network_4 = 209 ;
            int failF_OF_network_4 = 210 ;
            int required_OF_network_5 = 211 ;
            int already_S_OF_network_5 = 212 ;
            int S_OF_network_5 = 213 ;
            int relevant_evt_OF_network_5 = 214 ;
            int failF_OF_network_5 = 215 ;
            int required_OF_sA_1 = 216 ;
            int already_S_OF_sA_1 = 217 ;
            int S_OF_sA_1 = 218 ;
            int relevant_evt_OF_sA_1 = 219 ;
            int failF_OF_sA_1 = 220 ;
            int required_OF_sA_1_I = 221 ;
            int already_S_OF_sA_1_I = 222 ;
            int S_OF_sA_1_I = 223 ;
            int relevant_evt_OF_sA_1_I = 224 ;
            int failI_OF_sA_1_I = 225 ;
            int to_be_fired_OF_sA_1_I = 226 ;
            int already_standby_OF_sA_1_I = 227 ;
            int already_required_OF_sA_1_I = 228 ;
            int required_OF_sA_2 = 229 ;
            int already_S_OF_sA_2 = 230 ;
            int S_OF_sA_2 = 231 ;
            int relevant_evt_OF_sA_2 = 232 ;
            int failF_OF_sA_2 = 233 ;
            int required_OF_sA_2_I = 234 ;
            int already_S_OF_sA_2_I = 235 ;
            int S_OF_sA_2_I = 236 ;
            int relevant_evt_OF_sA_2_I = 237 ;
            int failI_OF_sA_2_I = 238 ;
            int to_be_fired_OF_sA_2_I = 239 ;
            int already_standby_OF_sA_2_I = 240 ;
            int already_required_OF_sA_2_I = 241 ;
            int required_OF_sA_3 = 242 ;
            int already_S_OF_sA_3 = 243 ;
            int S_OF_sA_3 = 244 ;
            int relevant_evt_OF_sA_3 = 245 ;
            int failF_OF_sA_3 = 246 ;
            int required_OF_sA_3_I = 247 ;
            int already_S_OF_sA_3_I = 248 ;
            int S_OF_sA_3_I = 249 ;
            int relevant_evt_OF_sA_3_I = 250 ;
            int failI_OF_sA_3_I = 251 ;
            int to_be_fired_OF_sA_3_I = 252 ;
            int already_standby_OF_sA_3_I = 253 ;
            int already_required_OF_sA_3_I = 254 ;
            int required_OF_sA_4 = 255 ;
            int already_S_OF_sA_4 = 256 ;
            int S_OF_sA_4 = 257 ;
            int relevant_evt_OF_sA_4 = 258 ;
            int failF_OF_sA_4 = 259 ;
            int required_OF_sA_4_I = 260 ;
            int already_S_OF_sA_4_I = 261 ;
            int S_OF_sA_4_I = 262 ;
            int relevant_evt_OF_sA_4_I = 263 ;
            int failI_OF_sA_4_I = 264 ;
            int to_be_fired_OF_sA_4_I = 265 ;
            int already_standby_OF_sA_4_I = 266 ;
            int already_required_OF_sA_4_I = 267 ;
            int required_OF_sA_5 = 268 ;
            int already_S_OF_sA_5 = 269 ;
            int S_OF_sA_5 = 270 ;
            int relevant_evt_OF_sA_5 = 271 ;
            int failF_OF_sA_5 = 272 ;
            int required_OF_sA_5_I = 273 ;
            int already_S_OF_sA_5_I = 274 ;
            int S_OF_sA_5_I = 275 ;
            int relevant_evt_OF_sA_5_I = 276 ;
            int failI_OF_sA_5_I = 277 ;
            int to_be_fired_OF_sA_5_I = 278 ;
            int already_standby_OF_sA_5_I = 279 ;
            int already_required_OF_sA_5_I = 280 ;
            int required_OF_sB_1 = 281 ;
            int already_S_OF_sB_1 = 282 ;
            int S_OF_sB_1 = 283 ;
            int relevant_evt_OF_sB_1 = 284 ;
            int failF_OF_sB_1 = 285 ;
            int required_OF_sB_1_I = 286 ;
            int already_S_OF_sB_1_I = 287 ;
            int S_OF_sB_1_I = 288 ;
            int relevant_evt_OF_sB_1_I = 289 ;
            int failI_OF_sB_1_I = 290 ;
            int to_be_fired_OF_sB_1_I = 291 ;
            int already_standby_OF_sB_1_I = 292 ;
            int already_required_OF_sB_1_I = 293 ;
            int required_OF_sB_2 = 294 ;
            int already_S_OF_sB_2 = 295 ;
            int S_OF_sB_2 = 296 ;
            int relevant_evt_OF_sB_2 = 297 ;
            int failF_OF_sB_2 = 298 ;
            int required_OF_sB_2_I = 299 ;
            int already_S_OF_sB_2_I = 300 ;
            int S_OF_sB_2_I = 301 ;
            int relevant_evt_OF_sB_2_I = 302 ;
            int failI_OF_sB_2_I = 303 ;
            int to_be_fired_OF_sB_2_I = 304 ;
            int already_standby_OF_sB_2_I = 305 ;
            int already_required_OF_sB_2_I = 306 ;
            int required_OF_sB_3 = 307 ;
            int already_S_OF_sB_3 = 308 ;
            int S_OF_sB_3 = 309 ;
            int relevant_evt_OF_sB_3 = 310 ;
            int failF_OF_sB_3 = 311 ;
            int required_OF_sB_3_I = 312 ;
            int already_S_OF_sB_3_I = 313 ;
            int S_OF_sB_3_I = 314 ;
            int relevant_evt_OF_sB_3_I = 315 ;
            int failI_OF_sB_3_I = 316 ;
            int to_be_fired_OF_sB_3_I = 317 ;
            int already_standby_OF_sB_3_I = 318 ;
            int already_required_OF_sB_3_I = 319 ;
            int required_OF_sB_4 = 320 ;
            int already_S_OF_sB_4 = 321 ;
            int S_OF_sB_4 = 322 ;
            int relevant_evt_OF_sB_4 = 323 ;
            int failF_OF_sB_4 = 324 ;
            int required_OF_sB_4_I = 325 ;
            int already_S_OF_sB_4_I = 326 ;
            int S_OF_sB_4_I = 327 ;
            int relevant_evt_OF_sB_4_I = 328 ;
            int failI_OF_sB_4_I = 329 ;
            int to_be_fired_OF_sB_4_I = 330 ;
            int already_standby_OF_sB_4_I = 331 ;
            int already_required_OF_sB_4_I = 332 ;
            int required_OF_sB_5 = 333 ;
            int already_S_OF_sB_5 = 334 ;
            int S_OF_sB_5 = 335 ;
            int relevant_evt_OF_sB_5 = 336 ;
            int failF_OF_sB_5 = 337 ;
            int required_OF_sB_5_I = 338 ;
            int already_S_OF_sB_5_I = 339 ;
            int S_OF_sB_5_I = 340 ;
            int relevant_evt_OF_sB_5_I = 341 ;
            int failI_OF_sB_5_I = 342 ;
            int to_be_fired_OF_sB_5_I = 343 ;
            int already_standby_OF_sB_5_I = 344 ;
            int already_required_OF_sB_5_I = 345 ;
            int required_OF_sC_1 = 346 ;
            int already_S_OF_sC_1 = 347 ;
            int S_OF_sC_1 = 348 ;
            int relevant_evt_OF_sC_1 = 349 ;
            int failF_OF_sC_1 = 350 ;
            int required_OF_sC_1_I = 351 ;
            int already_S_OF_sC_1_I = 352 ;
            int S_OF_sC_1_I = 353 ;
            int relevant_evt_OF_sC_1_I = 354 ;
            int failI_OF_sC_1_I = 355 ;
            int to_be_fired_OF_sC_1_I = 356 ;
            int already_standby_OF_sC_1_I = 357 ;
            int already_required_OF_sC_1_I = 358 ;
            int required_OF_sC_2 = 359 ;
            int already_S_OF_sC_2 = 360 ;
            int S_OF_sC_2 = 361 ;
            int relevant_evt_OF_sC_2 = 362 ;
            int failF_OF_sC_2 = 363 ;
            int required_OF_sC_2_I = 364 ;
            int already_S_OF_sC_2_I = 365 ;
            int S_OF_sC_2_I = 366 ;
            int relevant_evt_OF_sC_2_I = 367 ;
            int failI_OF_sC_2_I = 368 ;
            int to_be_fired_OF_sC_2_I = 369 ;
            int already_standby_OF_sC_2_I = 370 ;
            int already_required_OF_sC_2_I = 371 ;
            int required_OF_sC_3 = 372 ;
            int already_S_OF_sC_3 = 373 ;
            int S_OF_sC_3 = 374 ;
            int relevant_evt_OF_sC_3 = 375 ;
            int failF_OF_sC_3 = 376 ;
            int required_OF_sC_3_I = 377 ;
            int already_S_OF_sC_3_I = 378 ;
            int S_OF_sC_3_I = 379 ;
            int relevant_evt_OF_sC_3_I = 380 ;
            int failI_OF_sC_3_I = 381 ;
            int to_be_fired_OF_sC_3_I = 382 ;
            int already_standby_OF_sC_3_I = 383 ;
            int already_required_OF_sC_3_I = 384 ;
            int required_OF_sC_4 = 385 ;
            int already_S_OF_sC_4 = 386 ;
            int S_OF_sC_4 = 387 ;
            int relevant_evt_OF_sC_4 = 388 ;
            int failF_OF_sC_4 = 389 ;
            int required_OF_sC_4_I = 390 ;
            int already_S_OF_sC_4_I = 391 ;
            int S_OF_sC_4_I = 392 ;
            int relevant_evt_OF_sC_4_I = 393 ;
            int failI_OF_sC_4_I = 394 ;
            int to_be_fired_OF_sC_4_I = 395 ;
            int already_standby_OF_sC_4_I = 396 ;
            int already_required_OF_sC_4_I = 397 ;
            int required_OF_sC_5 = 398 ;
            int already_S_OF_sC_5 = 399 ;
            int S_OF_sC_5 = 400 ;
            int relevant_evt_OF_sC_5 = 401 ;
            int failF_OF_sC_5 = 402 ;
            int required_OF_sC_5_I = 403 ;
            int already_S_OF_sC_5_I = 404 ;
            int S_OF_sC_5_I = 405 ;
            int relevant_evt_OF_sC_5_I = 406 ;
            int failI_OF_sC_5_I = 407 ;
            int to_be_fired_OF_sC_5_I = 408 ;
            int already_standby_OF_sC_5_I = 409 ;
            int already_required_OF_sC_5_I = 410 ;
            int required_OF_sD_1 = 411 ;
            int already_S_OF_sD_1 = 412 ;
            int S_OF_sD_1 = 413 ;
            int relevant_evt_OF_sD_1 = 414 ;
            int failF_OF_sD_1 = 415 ;
            int required_OF_sD_1_I = 416 ;
            int already_S_OF_sD_1_I = 417 ;
            int S_OF_sD_1_I = 418 ;
            int relevant_evt_OF_sD_1_I = 419 ;
            int failI_OF_sD_1_I = 420 ;
            int to_be_fired_OF_sD_1_I = 421 ;
            int already_standby_OF_sD_1_I = 422 ;
            int already_required_OF_sD_1_I = 423 ;
            int required_OF_sD_2 = 424 ;
            int already_S_OF_sD_2 = 425 ;
            int S_OF_sD_2 = 426 ;
            int relevant_evt_OF_sD_2 = 427 ;
            int failF_OF_sD_2 = 428 ;
            int required_OF_sD_2_I = 429 ;
            int already_S_OF_sD_2_I = 430 ;
            int S_OF_sD_2_I = 431 ;
            int relevant_evt_OF_sD_2_I = 432 ;
            int failI_OF_sD_2_I = 433 ;
            int to_be_fired_OF_sD_2_I = 434 ;
            int already_standby_OF_sD_2_I = 435 ;
            int already_required_OF_sD_2_I = 436 ;
            int required_OF_sD_3 = 437 ;
            int already_S_OF_sD_3 = 438 ;
            int S_OF_sD_3 = 439 ;
            int relevant_evt_OF_sD_3 = 440 ;
            int failF_OF_sD_3 = 441 ;
            int required_OF_sD_3_I = 442 ;
            int already_S_OF_sD_3_I = 443 ;
            int S_OF_sD_3_I = 444 ;
            int relevant_evt_OF_sD_3_I = 445 ;
            int failI_OF_sD_3_I = 446 ;
            int to_be_fired_OF_sD_3_I = 447 ;
            int already_standby_OF_sD_3_I = 448 ;
            int already_required_OF_sD_3_I = 449 ;
            int required_OF_sD_4 = 450 ;
            int already_S_OF_sD_4 = 451 ;
            int S_OF_sD_4 = 452 ;
            int relevant_evt_OF_sD_4 = 453 ;
            int failF_OF_sD_4 = 454 ;
            int required_OF_sD_4_I = 455 ;
            int already_S_OF_sD_4_I = 456 ;
            int S_OF_sD_4_I = 457 ;
            int relevant_evt_OF_sD_4_I = 458 ;
            int failI_OF_sD_4_I = 459 ;
            int to_be_fired_OF_sD_4_I = 460 ;
            int already_standby_OF_sD_4_I = 461 ;
            int already_required_OF_sD_4_I = 462 ;
            int required_OF_sD_5 = 463 ;
            int already_S_OF_sD_5 = 464 ;
            int S_OF_sD_5 = 465 ;
            int relevant_evt_OF_sD_5 = 466 ;
            int failF_OF_sD_5 = 467 ;
            int required_OF_sD_5_I = 468 ;
            int already_S_OF_sD_5_I = 469 ;
            int S_OF_sD_5_I = 470 ;
            int relevant_evt_OF_sD_5_I = 471 ;
            int failI_OF_sD_5_I = 472 ;
            int to_be_fired_OF_sD_5_I = 473 ;
            int already_standby_OF_sD_5_I = 474 ;
            int already_required_OF_sD_5_I = 475 ;
            int required_OF_sensor_2 = 476 ;
            int already_S_OF_sensor_2 = 477 ;
            int S_OF_sensor_2 = 478 ;
            int relevant_evt_OF_sensor_2 = 479 ;
            int required_OF_sensor_3 = 480 ;
            int already_S_OF_sensor_3 = 481 ;
            int S_OF_sensor_3 = 482 ;
            int relevant_evt_OF_sensor_3 = 483 ;
            int required_OF_sensor_4 = 484 ;
            int already_S_OF_sensor_4 = 485 ;
            int S_OF_sensor_4 = 486 ;
            int relevant_evt_OF_sensor_4 = 487 ;
            int required_OF_sensor_5 = 488 ;
            int already_S_OF_sensor_5 = 489 ;
            int S_OF_sensor_5 = 490 ;
            int relevant_evt_OF_sensor_5 = 491 ;
            int required_OF_sensors = 492 ;
            int already_S_OF_sensors = 493 ;
            int S_OF_sensors = 494 ;
            int relevant_evt_OF_sensors = 495 ;
            int required_OF_sw_1 = 496 ;
            int already_S_OF_sw_1 = 497 ;
            int S_OF_sw_1 = 498 ;
            int relevant_evt_OF_sw_1 = 499 ;
            int failF_OF_sw_1 = 500 ;
            int required_OF_sw_2 = 501 ;
            int already_S_OF_sw_2 = 502 ;
            int S_OF_sw_2 = 503 ;
            int relevant_evt_OF_sw_2 = 504 ;
            int failF_OF_sw_2 = 505 ;
            int required_OF_sw_3 = 506 ;
            int already_S_OF_sw_3 = 507 ;
            int S_OF_sw_3 = 508 ;
            int relevant_evt_OF_sw_3 = 509 ;
            int failF_OF_sw_3 = 510 ;
            int required_OF_sw_4 = 511 ;
            int already_S_OF_sw_4 = 512 ;
            int S_OF_sw_4 = 513 ;
            int relevant_evt_OF_sw_4 = 514 ;
            int failF_OF_sw_4 = 515 ;
            int required_OF_sw_5 = 516 ;
            int already_S_OF_sw_5 = 517 ;
            int S_OF_sw_5 = 518 ;
            int relevant_evt_OF_sw_5 = 519 ;
            int failF_OF_sw_5 = 520 ;
            int required_OF_switch_1 = 521 ;
            int already_S_OF_switch_1 = 522 ;
            int S_OF_switch_1 = 523 ;
            int relevant_evt_OF_switch_1 = 524 ;
            int required_OF_switch_2 = 525 ;
            int already_S_OF_switch_2 = 526 ;
            int S_OF_switch_2 = 527 ;
            int relevant_evt_OF_switch_2 = 528 ;
            int required_OF_switch_3 = 529 ;
            int already_S_OF_switch_3 = 530 ;
            int S_OF_switch_3 = 531 ;
            int relevant_evt_OF_switch_3 = 532 ;
            int required_OF_switch_4 = 533 ;
            int already_S_OF_switch_4 = 534 ;
            int S_OF_switch_4 = 535 ;
            int relevant_evt_OF_switch_4 = 536 ;
            int required_OF_switch_5 = 537 ;
            int already_S_OF_switch_5 = 538 ;
            int S_OF_switch_5 = 539 ;
            int relevant_evt_OF_switch_5 = 540 ;




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