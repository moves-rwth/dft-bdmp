
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
        class FigaroProgram_NPPS_No_trim_No_repair: public storm::figaro::FigaroProgram{
        public:
        FigaroProgram_NPPS_No_trim_No_repair(): FigaroProgram(//            std::map<std::string, size_t> mFigaroboolelementindex =
                    {  
            	{"required_OF_AND_3" , 0},
            	{"already_S_OF_AND_3" , 1},
            	{"S_OF_AND_3" , 2},
            	{"relevant_evt_OF_AND_3" , 3},
            	{"required_OF_BATTERY_A_lost" , 4},
            	{"already_S_OF_BATTERY_A_lost" , 5},
            	{"S_OF_BATTERY_A_lost" , 6},
            	{"relevant_evt_OF_BATTERY_A_lost" , 7},
            	{"required_OF_BATTERY_B_lost" , 8},
            	{"already_S_OF_BATTERY_B_lost" , 9},
            	{"S_OF_BATTERY_B_lost" , 10},
            	{"relevant_evt_OF_BATTERY_B_lost" , 11},
            	{"required_OF_BAT_A1" , 12},
            	{"already_S_OF_BAT_A1" , 13},
            	{"S_OF_BAT_A1" , 14},
            	{"relevant_evt_OF_BAT_A1" , 15},
            	{"failF_OF_BAT_A1" , 16},
            	{"required_OF_BAT_A2" , 17},
            	{"already_S_OF_BAT_A2" , 18},
            	{"S_OF_BAT_A2" , 19},
            	{"relevant_evt_OF_BAT_A2" , 20},
            	{"failF_OF_BAT_A2" , 21},
            	{"required_OF_BAT_B1" , 22},
            	{"already_S_OF_BAT_B1" , 23},
            	{"S_OF_BAT_B1" , 24},
            	{"relevant_evt_OF_BAT_B1" , 25},
            	{"failF_OF_BAT_B1" , 26},
            	{"required_OF_BAT_B2" , 27},
            	{"already_S_OF_BAT_B2" , 28},
            	{"S_OF_BAT_B2" , 29},
            	{"relevant_evt_OF_BAT_B2" , 30},
            	{"failF_OF_BAT_B2" , 31},
            	{"required_OF_CB_LGD2_unable" , 32},
            	{"already_S_OF_CB_LGD2_unable" , 33},
            	{"S_OF_CB_LGD2_unable" , 34},
            	{"relevant_evt_OF_CB_LGD2_unable" , 35},
            	{"required_OF_CB_LGF2_unable" , 36},
            	{"already_S_OF_CB_LGF2_unable" , 37},
            	{"S_OF_CB_LGF2_unable" , 38},
            	{"relevant_evt_OF_CB_LGF2_unable" , 39},
            	{"required_OF_CB_LHA12_unable" , 40},
            	{"already_S_OF_CB_LHA12_unable" , 41},
            	{"S_OF_CB_LHA12_unable" , 42},
            	{"relevant_evt_OF_CB_LHA12_unable" , 43},
            	{"required_OF_CB_LHA3_unable" , 44},
            	{"already_S_OF_CB_LHA3_unable" , 45},
            	{"S_OF_CB_LHA3_unable" , 46},
            	{"relevant_evt_OF_CB_LHA3_unable" , 47},
            	{"required_OF_CB_LHB12_unable" , 48},
            	{"already_S_OF_CB_LHB12_unable" , 49},
            	{"S_OF_CB_LHB12_unable" , 50},
            	{"relevant_evt_OF_CB_LHB12_unable" , 51},
            	{"required_OF_CCF_DG" , 52},
            	{"already_S_OF_CCF_DG" , 53},
            	{"S_OF_CCF_DG" , 54},
            	{"relevant_evt_OF_CCF_DG" , 55},
            	{"failF_OF_CCF_DG" , 56},
            	{"required_OF_CCF_GEV_LGR" , 57},
            	{"already_S_OF_CCF_GEV_LGR" , 58},
            	{"S_OF_CCF_GEV_LGR" , 59},
            	{"relevant_evt_OF_CCF_GEV_LGR" , 60},
            	{"failF_OF_CCF_GEV_LGR" , 61},
            	{"required_OF_DGA_long" , 62},
            	{"already_S_OF_DGA_long" , 63},
            	{"S_OF_DGA_long" , 64},
            	{"relevant_evt_OF_DGA_long" , 65},
            	{"failF_OF_DGA_long" , 66},
            	{"required_OF_DGA_lost" , 67},
            	{"already_S_OF_DGA_lost" , 68},
            	{"S_OF_DGA_lost" , 69},
            	{"relevant_evt_OF_DGA_lost" , 70},
            	{"required_OF_DGA_short" , 71},
            	{"already_S_OF_DGA_short" , 72},
            	{"S_OF_DGA_short" , 73},
            	{"relevant_evt_OF_DGA_short" , 74},
            	{"failF_OF_DGA_short" , 75},
            	{"required_OF_DGB_long" , 76},
            	{"already_S_OF_DGB_long" , 77},
            	{"S_OF_DGB_long" , 78},
            	{"relevant_evt_OF_DGB_long" , 79},
            	{"failF_OF_DGB_long" , 80},
            	{"required_OF_DGB_lost" , 81},
            	{"already_S_OF_DGB_lost" , 82},
            	{"S_OF_DGB_lost" , 83},
            	{"relevant_evt_OF_DGB_lost" , 84},
            	{"required_OF_DGB_short" , 85},
            	{"already_S_OF_DGB_short" , 86},
            	{"S_OF_DGB_short" , 87},
            	{"relevant_evt_OF_DGB_short" , 88},
            	{"failF_OF_DGB_short" , 89},
            	{"required_OF_GEV" , 90},
            	{"already_S_OF_GEV" , 91},
            	{"S_OF_GEV" , 92},
            	{"relevant_evt_OF_GEV" , 93},
            	{"failF_OF_GEV" , 94},
            	{"required_OF_GRID" , 95},
            	{"already_S_OF_GRID" , 96},
            	{"S_OF_GRID" , 97},
            	{"relevant_evt_OF_GRID" , 98},
            	{"failF_OF_GRID" , 99},
            	{"required_OF_InFnHouse" , 100},
            	{"already_S_OF_InFnHouse" , 101},
            	{"S_OF_InFnHouse" , 102},
            	{"relevant_evt_OF_InFnHouse" , 103},
            	{"failF_OF_InFnHouse" , 104},
            	{"required_OF_LBA" , 105},
            	{"already_S_OF_LBA" , 106},
            	{"S_OF_LBA" , 107},
            	{"relevant_evt_OF_LBA" , 108},
            	{"failF_OF_LBA" , 109},
            	{"required_OF_LBA_lost" , 110},
            	{"already_S_OF_LBA_lost" , 111},
            	{"S_OF_LBA_lost" , 112},
            	{"relevant_evt_OF_LBA_lost" , 113},
            	{"required_OF_LBA_not_fed" , 114},
            	{"already_S_OF_LBA_not_fed" , 115},
            	{"S_OF_LBA_not_fed" , 116},
            	{"relevant_evt_OF_LBA_not_fed" , 117},
            	{"required_OF_LBAline1_lost" , 118},
            	{"already_S_OF_LBAline1_lost" , 119},
            	{"S_OF_LBAline1_lost" , 120},
            	{"relevant_evt_OF_LBAline1_lost" , 121},
            	{"required_OF_LBAline2_lost" , 122},
            	{"already_S_OF_LBAline2_lost" , 123},
            	{"S_OF_LBAline2_lost" , 124},
            	{"relevant_evt_OF_LBAline2_lost" , 125},
            	{"required_OF_LBAothers_lost" , 126},
            	{"already_S_OF_LBAothers_lost" , 127},
            	{"S_OF_LBAothers_lost" , 128},
            	{"relevant_evt_OF_LBAothers_lost" , 129},
            	{"required_OF_LBB" , 130},
            	{"already_S_OF_LBB" , 131},
            	{"S_OF_LBB" , 132},
            	{"relevant_evt_OF_LBB" , 133},
            	{"failF_OF_LBB" , 134},
            	{"required_OF_LBB_lost" , 135},
            	{"already_S_OF_LBB_lost" , 136},
            	{"S_OF_LBB_lost" , 137},
            	{"relevant_evt_OF_LBB_lost" , 138},
            	{"required_OF_LBB_not_fed" , 139},
            	{"already_S_OF_LBB_not_fed" , 140},
            	{"S_OF_LBB_not_fed" , 141},
            	{"relevant_evt_OF_LBB_not_fed" , 142},
            	{"required_OF_LBBline1_lost" , 143},
            	{"already_S_OF_LBBline1_lost" , 144},
            	{"S_OF_LBBline1_lost" , 145},
            	{"relevant_evt_OF_LBBline1_lost" , 146},
            	{"required_OF_LBBline2_lost" , 147},
            	{"already_S_OF_LBBline2_lost" , 148},
            	{"S_OF_LBBline2_lost" , 149},
            	{"relevant_evt_OF_LBBline2_lost" , 150},
            	{"required_OF_LGA" , 151},
            	{"already_S_OF_LGA" , 152},
            	{"S_OF_LGA" , 153},
            	{"relevant_evt_OF_LGA" , 154},
            	{"failF_OF_LGA" , 155},
            	{"required_OF_LGB" , 156},
            	{"already_S_OF_LGB" , 157},
            	{"S_OF_LGB" , 158},
            	{"relevant_evt_OF_LGB" , 159},
            	{"failF_OF_LGB" , 160},
            	{"required_OF_LGD" , 161},
            	{"already_S_OF_LGD" , 162},
            	{"S_OF_LGD" , 163},
            	{"relevant_evt_OF_LGD" , 164},
            	{"failF_OF_LGD" , 165},
            	{"required_OF_LGD_not_fed" , 166},
            	{"already_S_OF_LGD_not_fed" , 167},
            	{"S_OF_LGD_not_fed" , 168},
            	{"relevant_evt_OF_LGD_not_fed" , 169},
            	{"required_OF_LGE" , 170},
            	{"already_S_OF_LGE" , 171},
            	{"S_OF_LGE" , 172},
            	{"relevant_evt_OF_LGE" , 173},
            	{"failF_OF_LGE" , 174},
            	{"required_OF_LGF" , 175},
            	{"already_S_OF_LGF" , 176},
            	{"S_OF_LGF" , 177},
            	{"relevant_evt_OF_LGF" , 178},
            	{"failF_OF_LGF" , 179},
            	{"required_OF_LGF_not_fed" , 180},
            	{"already_S_OF_LGF_not_fed" , 181},
            	{"S_OF_LGF_not_fed" , 182},
            	{"relevant_evt_OF_LGF_not_fed" , 183},
            	{"required_OF_LGR" , 184},
            	{"already_S_OF_LGR" , 185},
            	{"S_OF_LGR" , 186},
            	{"relevant_evt_OF_LGR" , 187},
            	{"failF_OF_LGR" , 188},
            	{"required_OF_LHA" , 189},
            	{"already_S_OF_LHA" , 190},
            	{"S_OF_LHA" , 191},
            	{"relevant_evt_OF_LHA" , 192},
            	{"failF_OF_LHA" , 193},
            	{"required_OF_LHA_and_LHB_lost" , 194},
            	{"already_S_OF_LHA_and_LHB_lost" , 195},
            	{"S_OF_LHA_and_LHB_lost" , 196},
            	{"relevant_evt_OF_LHA_and_LHB_lost" , 197},
            	{"required_OF_LHA_lost" , 198},
            	{"already_S_OF_LHA_lost" , 199},
            	{"S_OF_LHA_lost" , 200},
            	{"relevant_evt_OF_LHA_lost" , 201},
            	{"required_OF_LHA_not_fed" , 202},
            	{"already_S_OF_LHA_not_fed" , 203},
            	{"S_OF_LHA_not_fed" , 204},
            	{"relevant_evt_OF_LHA_not_fed" , 205},
            	{"required_OF_LHB" , 206},
            	{"already_S_OF_LHB" , 207},
            	{"S_OF_LHB" , 208},
            	{"relevant_evt_OF_LHB" , 209},
            	{"failF_OF_LHB" , 210},
            	{"required_OF_LHB_lost" , 211},
            	{"already_S_OF_LHB_lost" , 212},
            	{"S_OF_LHB_lost" , 213},
            	{"relevant_evt_OF_LHB_lost" , 214},
            	{"required_OF_LHB_not_fed" , 215},
            	{"already_S_OF_LHB_not_fed" , 216},
            	{"S_OF_LHB_not_fed" , 217},
            	{"relevant_evt_OF_LHB_not_fed" , 218},
            	{"required_OF_LKE" , 219},
            	{"already_S_OF_LKE" , 220},
            	{"S_OF_LKE" , 221},
            	{"relevant_evt_OF_LKE" , 222},
            	{"failF_OF_LKE" , 223},
            	{"required_OF_LKI" , 224},
            	{"already_S_OF_LKI" , 225},
            	{"S_OF_LKI" , 226},
            	{"relevant_evt_OF_LKI" , 227},
            	{"failF_OF_LKI" , 228},
            	{"required_OF_LLA" , 229},
            	{"already_S_OF_LLA" , 230},
            	{"S_OF_LLA" , 231},
            	{"relevant_evt_OF_LLA" , 232},
            	{"failF_OF_LLA" , 233},
            	{"required_OF_LLD" , 234},
            	{"already_S_OF_LLD" , 235},
            	{"S_OF_LLD" , 236},
            	{"relevant_evt_OF_LLD" , 237},
            	{"failF_OF_LLD" , 238},
            	{"required_OF_OR_14" , 239},
            	{"already_S_OF_OR_14" , 240},
            	{"S_OF_OR_14" , 241},
            	{"relevant_evt_OF_OR_14" , 242},
            	{"required_OF_OnDemHouse" , 243},
            	{"already_S_OF_OnDemHouse" , 244},
            	{"S_OF_OnDemHouse" , 245},
            	{"relevant_evt_OF_OnDemHouse" , 246},
            	{"failI_OF_OnDemHouse" , 247},
            	{"to_be_fired_OF_OnDemHouse" , 248},
            	{"already_standby_OF_OnDemHouse" , 249},
            	{"already_required_OF_OnDemHouse" , 250},
            	{"required_OF_RC_CB_LGD2" , 251},
            	{"already_S_OF_RC_CB_LGD2" , 252},
            	{"S_OF_RC_CB_LGD2" , 253},
            	{"relevant_evt_OF_RC_CB_LGD2" , 254},
            	{"failI_OF_RC_CB_LGD2" , 255},
            	{"to_be_fired_OF_RC_CB_LGD2" , 256},
            	{"already_standby_OF_RC_CB_LGD2" , 257},
            	{"already_required_OF_RC_CB_LGD2" , 258},
            	{"required_OF_RC_CB_LGD2_" , 259},
            	{"already_S_OF_RC_CB_LGD2_" , 260},
            	{"S_OF_RC_CB_LGD2_" , 261},
            	{"relevant_evt_OF_RC_CB_LGD2_" , 262},
            	{"required_OF_RC_CB_LGF2" , 263},
            	{"already_S_OF_RC_CB_LGF2" , 264},
            	{"S_OF_RC_CB_LGF2" , 265},
            	{"relevant_evt_OF_RC_CB_LGF2" , 266},
            	{"failI_OF_RC_CB_LGF2" , 267},
            	{"to_be_fired_OF_RC_CB_LGF2" , 268},
            	{"already_standby_OF_RC_CB_LGF2" , 269},
            	{"already_required_OF_RC_CB_LGF2" , 270},
            	{"required_OF_RC_CB_LGF2_" , 271},
            	{"already_S_OF_RC_CB_LGF2_" , 272},
            	{"S_OF_RC_CB_LGF2_" , 273},
            	{"relevant_evt_OF_RC_CB_LGF2_" , 274},
            	{"required_OF_RC_CB_LHA2" , 275},
            	{"already_S_OF_RC_CB_LHA2" , 276},
            	{"S_OF_RC_CB_LHA2" , 277},
            	{"relevant_evt_OF_RC_CB_LHA2" , 278},
            	{"failI_OF_RC_CB_LHA2" , 279},
            	{"to_be_fired_OF_RC_CB_LHA2" , 280},
            	{"already_standby_OF_RC_CB_LHA2" , 281},
            	{"already_required_OF_RC_CB_LHA2" , 282},
            	{"required_OF_RC_CB_LHA2_" , 283},
            	{"already_S_OF_RC_CB_LHA2_" , 284},
            	{"S_OF_RC_CB_LHA2_" , 285},
            	{"relevant_evt_OF_RC_CB_LHA2_" , 286},
            	{"required_OF_RC_CB_LHA3" , 287},
            	{"already_S_OF_RC_CB_LHA3" , 288},
            	{"S_OF_RC_CB_LHA3" , 289},
            	{"relevant_evt_OF_RC_CB_LHA3" , 290},
            	{"failI_OF_RC_CB_LHA3" , 291},
            	{"to_be_fired_OF_RC_CB_LHA3" , 292},
            	{"already_standby_OF_RC_CB_LHA3" , 293},
            	{"already_required_OF_RC_CB_LHA3" , 294},
            	{"required_OF_RC_CB_LHA3_" , 295},
            	{"already_S_OF_RC_CB_LHA3_" , 296},
            	{"S_OF_RC_CB_LHA3_" , 297},
            	{"relevant_evt_OF_RC_CB_LHA3_" , 298},
            	{"required_OF_RC_CB_LHB2" , 299},
            	{"already_S_OF_RC_CB_LHB2" , 300},
            	{"S_OF_RC_CB_LHB2" , 301},
            	{"relevant_evt_OF_RC_CB_LHB2" , 302},
            	{"failI_OF_RC_CB_LHB2" , 303},
            	{"to_be_fired_OF_RC_CB_LHB2" , 304},
            	{"already_standby_OF_RC_CB_LHB2" , 305},
            	{"already_required_OF_RC_CB_LHB2" , 306},
            	{"required_OF_RC_CB_LHB2_" , 307},
            	{"already_S_OF_RC_CB_LHB2_" , 308},
            	{"S_OF_RC_CB_LHB2_" , 309},
            	{"relevant_evt_OF_RC_CB_LHB2_" , 310},
            	{"required_OF_RDA1" , 311},
            	{"already_S_OF_RDA1" , 312},
            	{"S_OF_RDA1" , 313},
            	{"relevant_evt_OF_RDA1" , 314},
            	{"failF_OF_RDA1" , 315},
            	{"required_OF_RDA2" , 316},
            	{"already_S_OF_RDA2" , 317},
            	{"S_OF_RDA2" , 318},
            	{"relevant_evt_OF_RDA2" , 319},
            	{"failF_OF_RDA2" , 320},
            	{"required_OF_RDB1" , 321},
            	{"already_S_OF_RDB1" , 322},
            	{"S_OF_RDB1" , 323},
            	{"relevant_evt_OF_RDB1" , 324},
            	{"failF_OF_RDB1" , 325},
            	{"required_OF_RDB2" , 326},
            	{"already_S_OF_RDB2" , 327},
            	{"S_OF_RDB2" , 328},
            	{"relevant_evt_OF_RDB2" , 329},
            	{"failF_OF_RDB2" , 330},
            	{"required_OF_RO_CB_LHA1" , 331},
            	{"already_S_OF_RO_CB_LHA1" , 332},
            	{"S_OF_RO_CB_LHA1" , 333},
            	{"relevant_evt_OF_RO_CB_LHA1" , 334},
            	{"failI_OF_RO_CB_LHA1" , 335},
            	{"to_be_fired_OF_RO_CB_LHA1" , 336},
            	{"already_standby_OF_RO_CB_LHA1" , 337},
            	{"already_required_OF_RO_CB_LHA1" , 338},
            	{"required_OF_RO_CB_LHA1_" , 339},
            	{"already_S_OF_RO_CB_LHA1_" , 340},
            	{"S_OF_RO_CB_LHA1_" , 341},
            	{"relevant_evt_OF_RO_CB_LHA1_" , 342},
            	{"required_OF_RO_CB_LHA2" , 343},
            	{"already_S_OF_RO_CB_LHA2" , 344},
            	{"S_OF_RO_CB_LHA2" , 345},
            	{"relevant_evt_OF_RO_CB_LHA2" , 346},
            	{"failI_OF_RO_CB_LHA2" , 347},
            	{"to_be_fired_OF_RO_CB_LHA2" , 348},
            	{"already_standby_OF_RO_CB_LHA2" , 349},
            	{"already_required_OF_RO_CB_LHA2" , 350},
            	{"required_OF_RO_CB_LHA2_" , 351},
            	{"already_S_OF_RO_CB_LHA2_" , 352},
            	{"S_OF_RO_CB_LHA2_" , 353},
            	{"relevant_evt_OF_RO_CB_LHA2_" , 354},
            	{"required_OF_RO_CB_LHB1" , 355},
            	{"already_S_OF_RO_CB_LHB1" , 356},
            	{"S_OF_RO_CB_LHB1" , 357},
            	{"relevant_evt_OF_RO_CB_LHB1" , 358},
            	{"failI_OF_RO_CB_LHB1" , 359},
            	{"to_be_fired_OF_RO_CB_LHB1" , 360},
            	{"already_standby_OF_RO_CB_LHB1" , 361},
            	{"already_required_OF_RO_CB_LHB1" , 362},
            	{"required_OF_RO_CB_LHB1_" , 363},
            	{"already_S_OF_RO_CB_LHB1_" , 364},
            	{"S_OF_RO_CB_LHB1_" , 365},
            	{"relevant_evt_OF_RO_CB_LHB1_" , 366},
            	{"required_OF_SH_CB_GEV" , 367},
            	{"already_S_OF_SH_CB_GEV" , 368},
            	{"S_OF_SH_CB_GEV" , 369},
            	{"relevant_evt_OF_SH_CB_GEV" , 370},
            	{"failF_OF_SH_CB_GEV" , 371},
            	{"required_OF_SH_CB_LBA1" , 372},
            	{"already_S_OF_SH_CB_LBA1" , 373},
            	{"S_OF_SH_CB_LBA1" , 374},
            	{"relevant_evt_OF_SH_CB_LBA1" , 375},
            	{"failF_OF_SH_CB_LBA1" , 376},
            	{"required_OF_SH_CB_LBA2" , 377},
            	{"already_S_OF_SH_CB_LBA2" , 378},
            	{"S_OF_SH_CB_LBA2" , 379},
            	{"relevant_evt_OF_SH_CB_LBA2" , 380},
            	{"failF_OF_SH_CB_LBA2" , 381},
            	{"required_OF_SH_CB_LBB1" , 382},
            	{"already_S_OF_SH_CB_LBB1" , 383},
            	{"S_OF_SH_CB_LBB1" , 384},
            	{"relevant_evt_OF_SH_CB_LBB1" , 385},
            	{"failF_OF_SH_CB_LBB1" , 386},
            	{"required_OF_SH_CB_LBB2" , 387},
            	{"already_S_OF_SH_CB_LBB2" , 388},
            	{"S_OF_SH_CB_LBB2" , 389},
            	{"relevant_evt_OF_SH_CB_LBB2" , 390},
            	{"failF_OF_SH_CB_LBB2" , 391},
            	{"required_OF_SH_CB_LGA" , 392},
            	{"already_S_OF_SH_CB_LGA" , 393},
            	{"S_OF_SH_CB_LGA" , 394},
            	{"relevant_evt_OF_SH_CB_LGA" , 395},
            	{"failF_OF_SH_CB_LGA" , 396},
            	{"required_OF_SH_CB_LGB" , 397},
            	{"already_S_OF_SH_CB_LGB" , 398},
            	{"S_OF_SH_CB_LGB" , 399},
            	{"relevant_evt_OF_SH_CB_LGB" , 400},
            	{"failF_OF_SH_CB_LGB" , 401},
            	{"required_OF_SH_CB_LGD1" , 402},
            	{"already_S_OF_SH_CB_LGD1" , 403},
            	{"S_OF_SH_CB_LGD1" , 404},
            	{"relevant_evt_OF_SH_CB_LGD1" , 405},
            	{"failF_OF_SH_CB_LGD1" , 406},
            	{"required_OF_SH_CB_LGD2" , 407},
            	{"already_S_OF_SH_CB_LGD2" , 408},
            	{"S_OF_SH_CB_LGD2" , 409},
            	{"relevant_evt_OF_SH_CB_LGD2" , 410},
            	{"failF_OF_SH_CB_LGD2" , 411},
            	{"required_OF_SH_CB_LGE1" , 412},
            	{"already_S_OF_SH_CB_LGE1" , 413},
            	{"S_OF_SH_CB_LGE1" , 414},
            	{"relevant_evt_OF_SH_CB_LGE1" , 415},
            	{"failF_OF_SH_CB_LGE1" , 416},
            	{"required_OF_SH_CB_LGF1" , 417},
            	{"already_S_OF_SH_CB_LGF1" , 418},
            	{"S_OF_SH_CB_LGF1" , 419},
            	{"relevant_evt_OF_SH_CB_LGF1" , 420},
            	{"failF_OF_SH_CB_LGF1" , 421},
            	{"required_OF_SH_CB_LGF2" , 422},
            	{"already_S_OF_SH_CB_LGF2" , 423},
            	{"S_OF_SH_CB_LGF2" , 424},
            	{"relevant_evt_OF_SH_CB_LGF2" , 425},
            	{"failF_OF_SH_CB_LGF2" , 426},
            	{"required_OF_SH_CB_LHA1" , 427},
            	{"already_S_OF_SH_CB_LHA1" , 428},
            	{"S_OF_SH_CB_LHA1" , 429},
            	{"relevant_evt_OF_SH_CB_LHA1" , 430},
            	{"failF_OF_SH_CB_LHA1" , 431},
            	{"required_OF_SH_CB_LHA2" , 432},
            	{"already_S_OF_SH_CB_LHA2" , 433},
            	{"S_OF_SH_CB_LHA2" , 434},
            	{"relevant_evt_OF_SH_CB_LHA2" , 435},
            	{"failF_OF_SH_CB_LHA2" , 436},
            	{"required_OF_SH_CB_LHA3" , 437},
            	{"already_S_OF_SH_CB_LHA3" , 438},
            	{"S_OF_SH_CB_LHA3" , 439},
            	{"relevant_evt_OF_SH_CB_LHA3" , 440},
            	{"failF_OF_SH_CB_LHA3" , 441},
            	{"required_OF_SH_CB_LHB1" , 442},
            	{"already_S_OF_SH_CB_LHB1" , 443},
            	{"S_OF_SH_CB_LHB1" , 444},
            	{"relevant_evt_OF_SH_CB_LHB1" , 445},
            	{"failF_OF_SH_CB_LHB1" , 446},
            	{"required_OF_SH_CB_LHB2" , 447},
            	{"already_S_OF_SH_CB_LHB2" , 448},
            	{"S_OF_SH_CB_LHB2" , 449},
            	{"relevant_evt_OF_SH_CB_LHB2" , 450},
            	{"failF_OF_SH_CB_LHB2" , 451},
            	{"required_OF_SH_CB_RDA1" , 452},
            	{"already_S_OF_SH_CB_RDA1" , 453},
            	{"S_OF_SH_CB_RDA1" , 454},
            	{"relevant_evt_OF_SH_CB_RDA1" , 455},
            	{"failF_OF_SH_CB_RDA1" , 456},
            	{"required_OF_SH_CB_RDA2" , 457},
            	{"already_S_OF_SH_CB_RDA2" , 458},
            	{"S_OF_SH_CB_RDA2" , 459},
            	{"relevant_evt_OF_SH_CB_RDA2" , 460},
            	{"failF_OF_SH_CB_RDA2" , 461},
            	{"required_OF_SH_CB_RDB1" , 462},
            	{"already_S_OF_SH_CB_RDB1" , 463},
            	{"S_OF_SH_CB_RDB1" , 464},
            	{"relevant_evt_OF_SH_CB_RDB1" , 465},
            	{"failF_OF_SH_CB_RDB1" , 466},
            	{"required_OF_SH_CB_RDB2" , 467},
            	{"already_S_OF_SH_CB_RDB2" , 468},
            	{"S_OF_SH_CB_RDB2" , 469},
            	{"relevant_evt_OF_SH_CB_RDB2" , 470},
            	{"failF_OF_SH_CB_RDB2" , 471},
            	{"required_OF_SH_CB_TUA1" , 472},
            	{"already_S_OF_SH_CB_TUA1" , 473},
            	{"S_OF_SH_CB_TUA1" , 474},
            	{"relevant_evt_OF_SH_CB_TUA1" , 475},
            	{"failF_OF_SH_CB_TUA1" , 476},
            	{"required_OF_SH_CB_TUA2" , 477},
            	{"already_S_OF_SH_CB_TUA2" , 478},
            	{"S_OF_SH_CB_TUA2" , 479},
            	{"relevant_evt_OF_SH_CB_TUA2" , 480},
            	{"failF_OF_SH_CB_TUA2" , 481},
            	{"required_OF_SH_CB_TUB1" , 482},
            	{"already_S_OF_SH_CB_TUB1" , 483},
            	{"S_OF_SH_CB_TUB1" , 484},
            	{"relevant_evt_OF_SH_CB_TUB1" , 485},
            	{"failF_OF_SH_CB_TUB1" , 486},
            	{"required_OF_SH_CB_TUB2" , 487},
            	{"already_S_OF_SH_CB_TUB2" , 488},
            	{"S_OF_SH_CB_TUB2" , 489},
            	{"relevant_evt_OF_SH_CB_TUB2" , 490},
            	{"failF_OF_SH_CB_TUB2" , 491},
            	{"required_OF_SH_CB_line_GEV" , 492},
            	{"already_S_OF_SH_CB_line_GEV" , 493},
            	{"S_OF_SH_CB_line_GEV" , 494},
            	{"relevant_evt_OF_SH_CB_line_GEV" , 495},
            	{"failF_OF_SH_CB_line_GEV" , 496},
            	{"required_OF_SH_CB_line_LGR" , 497},
            	{"already_S_OF_SH_CB_line_LGR" , 498},
            	{"S_OF_SH_CB_line_LGR" , 499},
            	{"relevant_evt_OF_SH_CB_line_LGR" , 500},
            	{"failF_OF_SH_CB_line_LGR" , 501},
            	{"required_OF_SH_GEV_or_LGR" , 502},
            	{"already_S_OF_SH_GEV_or_LGR" , 503},
            	{"S_OF_SH_GEV_or_LGR" , 504},
            	{"relevant_evt_OF_SH_GEV_or_LGR" , 505},
            	{"required_OF_SUBSTATION" , 506},
            	{"already_S_OF_SUBSTATION" , 507},
            	{"S_OF_SUBSTATION" , 508},
            	{"relevant_evt_OF_SUBSTATION" , 509},
            	{"failF_OF_SUBSTATION" , 510},
            	{"required_OF_TA" , 511},
            	{"already_S_OF_TA" , 512},
            	{"S_OF_TA" , 513},
            	{"relevant_evt_OF_TA" , 514},
            	{"failF_OF_TA" , 515},
            	{"required_OF_TAC" , 516},
            	{"already_S_OF_TAC" , 517},
            	{"S_OF_TAC" , 518},
            	{"relevant_evt_OF_TAC" , 519},
            	{"failF_OF_TAC" , 520},
            	{"required_OF_TA_lost" , 521},
            	{"already_S_OF_TA_lost" , 522},
            	{"S_OF_TA_lost" , 523},
            	{"relevant_evt_OF_TA_lost" , 524},
            	{"required_OF_TP" , 525},
            	{"already_S_OF_TP" , 526},
            	{"S_OF_TP" , 527},
            	{"relevant_evt_OF_TP" , 528},
            	{"failF_OF_TP" , 529},
            	{"required_OF_TS" , 530},
            	{"already_S_OF_TS" , 531},
            	{"S_OF_TS" , 532},
            	{"relevant_evt_OF_TS" , 533},
            	{"failF_OF_TS" , 534},
            	{"required_OF_TS_lost" , 535},
            	{"already_S_OF_TS_lost" , 536},
            	{"S_OF_TS_lost" , 537},
            	{"relevant_evt_OF_TS_lost" , 538},
            	{"required_OF_TS_not_fed" , 539},
            	{"already_S_OF_TS_not_fed" , 540},
            	{"S_OF_TS_not_fed" , 541},
            	{"relevant_evt_OF_TS_not_fed" , 542},
            	{"required_OF_TUA1" , 543},
            	{"already_S_OF_TUA1" , 544},
            	{"S_OF_TUA1" , 545},
            	{"relevant_evt_OF_TUA1" , 546},
            	{"failF_OF_TUA1" , 547},
            	{"required_OF_TUA2" , 548},
            	{"already_S_OF_TUA2" , 549},
            	{"S_OF_TUA2" , 550},
            	{"relevant_evt_OF_TUA2" , 551},
            	{"failF_OF_TUA2" , 552},
            	{"required_OF_TUB1" , 553},
            	{"already_S_OF_TUB1" , 554},
            	{"S_OF_TUB1" , 555},
            	{"relevant_evt_OF_TUB1" , 556},
            	{"failF_OF_TUB1" , 557},
            	{"required_OF_TUB2" , 558},
            	{"already_S_OF_TUB2" , 559},
            	{"S_OF_TUB2" , 560},
            	{"relevant_evt_OF_TUB2" , 561},
            	{"failF_OF_TUB2" , 562},
            	{"required_OF_UE_1" , 563},
            	{"already_S_OF_UE_1" , 564},
            	{"S_OF_UE_1" , 565},
            	{"relevant_evt_OF_UE_1" , 566},
            	{"required_OF_UNIT" , 567},
            	{"already_S_OF_UNIT" , 568},
            	{"S_OF_UNIT" , 569},
            	{"relevant_evt_OF_UNIT" , 570},
            	{"failF_OF_UNIT" , 571},
            	{"required_OF_demand_CCF_DG" , 572},
            	{"already_S_OF_demand_CCF_DG" , 573},
            	{"S_OF_demand_CCF_DG" , 574},
            	{"relevant_evt_OF_demand_CCF_DG" , 575},
            	{"failI_OF_demand_CCF_DG" , 576},
            	{"to_be_fired_OF_demand_CCF_DG" , 577},
            	{"already_standby_OF_demand_CCF_DG" , 578},
            	{"already_required_OF_demand_CCF_DG" , 579},
            	{"required_OF_demand_DGA" , 580},
            	{"already_S_OF_demand_DGA" , 581},
            	{"S_OF_demand_DGA" , 582},
            	{"relevant_evt_OF_demand_DGA" , 583},
            	{"failI_OF_demand_DGA" , 584},
            	{"to_be_fired_OF_demand_DGA" , 585},
            	{"already_standby_OF_demand_DGA" , 586},
            	{"already_required_OF_demand_DGA" , 587},
            	{"required_OF_demand_DGB" , 588},
            	{"already_S_OF_demand_DGB" , 589},
            	{"S_OF_demand_DGB" , 590},
            	{"relevant_evt_OF_demand_DGB" , 591},
            	{"failI_OF_demand_DGB" , 592},
            	{"to_be_fired_OF_demand_DGB" , 593},
            	{"already_standby_OF_demand_DGB" , 594},
            	{"already_required_OF_demand_DGB" , 595},
            	{"required_OF_demand_TAC" , 596},
            	{"already_S_OF_demand_TAC" , 597},
            	{"S_OF_demand_TAC" , 598},
            	{"relevant_evt_OF_demand_TAC" , 599},
            	{"failI_OF_demand_TAC" , 600},
            	{"to_be_fired_OF_demand_TAC" , 601},
            	{"already_standby_OF_demand_TAC" , 602},
            	{"already_required_OF_demand_TAC" , 603},
            	{"required_OF_loss_of_houseload_operation" , 604},
            	{"already_S_OF_loss_of_houseload_operation" , 605},
            	{"S_OF_loss_of_houseload_operation" , 606},
            	{"relevant_evt_OF_loss_of_houseload_operation" , 607},
            	{"required_OF_loss_of_supply_by_DGA" , 608},
            	{"already_S_OF_loss_of_supply_by_DGA" , 609},
            	{"S_OF_loss_of_supply_by_DGA" , 610},
            	{"relevant_evt_OF_loss_of_supply_by_DGA" , 611},
            	{"required_OF_loss_of_supply_by_DGA_and_TAC" , 612},
            	{"already_S_OF_loss_of_supply_by_DGA_and_TAC" , 613},
            	{"S_OF_loss_of_supply_by_DGA_and_TAC" , 614},
            	{"relevant_evt_OF_loss_of_supply_by_DGA_and_TAC" , 615},
            	{"required_OF_loss_of_supply_by_DGB" , 616},
            	{"already_S_OF_loss_of_supply_by_DGB" , 617},
            	{"S_OF_loss_of_supply_by_DGB" , 618},
            	{"relevant_evt_OF_loss_of_supply_by_DGB" , 619},
            	{"required_OF_loss_of_supply_by_GEV" , 620},
            	{"already_S_OF_loss_of_supply_by_GEV" , 621},
            	{"S_OF_loss_of_supply_by_GEV" , 622},
            	{"relevant_evt_OF_loss_of_supply_by_GEV" , 623},
            	{"required_OF_loss_of_supply_by_LGD" , 624},
            	{"already_S_OF_loss_of_supply_by_LGD" , 625},
            	{"S_OF_loss_of_supply_by_LGD" , 626},
            	{"relevant_evt_OF_loss_of_supply_by_LGD" , 627},
            	{"required_OF_loss_of_supply_by_LGF" , 628},
            	{"already_S_OF_loss_of_supply_by_LGF" , 629},
            	{"S_OF_loss_of_supply_by_LGF" , 630},
            	{"relevant_evt_OF_loss_of_supply_by_LGF" , 631},
            	{"required_OF_loss_of_supply_by_LGR" , 632},
            	{"already_S_OF_loss_of_supply_by_LGR" , 633},
            	{"S_OF_loss_of_supply_by_LGR" , 634},
            	{"relevant_evt_OF_loss_of_supply_by_LGR" , 635},
            	{"required_OF_loss_of_supply_by_TA" , 636},
            	{"already_S_OF_loss_of_supply_by_TA" , 637},
            	{"S_OF_loss_of_supply_by_TA" , 638},
            	{"relevant_evt_OF_loss_of_supply_by_TA" , 639},
            	{"required_OF_loss_of_supply_by_TA1" , 640},
            	{"already_S_OF_loss_of_supply_by_TA1" , 641},
            	{"S_OF_loss_of_supply_by_TA1" , 642},
            	{"relevant_evt_OF_loss_of_supply_by_TA1" , 643},
            	{"required_OF_loss_of_supply_by_TAC" , 644},
            	{"already_S_OF_loss_of_supply_by_TAC" , 645},
            	{"S_OF_loss_of_supply_by_TAC" , 646},
            	{"relevant_evt_OF_loss_of_supply_by_TAC" , 647},
            	{"required_OF_loss_of_supply_by_TS" , 648},
            	{"already_S_OF_loss_of_supply_by_TS" , 649},
            	{"S_OF_loss_of_supply_by_TS" , 650},
            	{"relevant_evt_OF_loss_of_supply_by_TS" , 651},
            	{"required_OF_loss_of_supply_by_TS1" , 652},
            	{"already_S_OF_loss_of_supply_by_TS1" , 653},
            	{"S_OF_loss_of_supply_by_TS1" , 654},
            	{"relevant_evt_OF_loss_of_supply_by_TS1" , 655},
            	{"required_OF_loss_of_supply_by_UNIT" , 656},
            	{"already_S_OF_loss_of_supply_by_UNIT" , 657},
            	{"S_OF_loss_of_supply_by_UNIT" , 658},
            	{"relevant_evt_OF_loss_of_supply_by_UNIT" , 659}},

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
                    660 ,
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
            bool REINITIALISATION_OF_required_OF_AND_3 ;
            bool REINITIALISATION_OF_S_OF_AND_3 ;
            bool REINITIALISATION_OF_relevant_evt_OF_AND_3 ;
            bool REINITIALISATION_OF_required_OF_BATTERY_A_lost ;
            bool REINITIALISATION_OF_S_OF_BATTERY_A_lost ;
            bool REINITIALISATION_OF_relevant_evt_OF_BATTERY_A_lost ;
            bool REINITIALISATION_OF_required_OF_BATTERY_B_lost ;
            bool REINITIALISATION_OF_S_OF_BATTERY_B_lost ;
            bool REINITIALISATION_OF_relevant_evt_OF_BATTERY_B_lost ;
            bool REINITIALISATION_OF_required_OF_BAT_A1 ;
            bool REINITIALISATION_OF_S_OF_BAT_A1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_BAT_A1 ;
            bool REINITIALISATION_OF_required_OF_BAT_A2 ;
            bool REINITIALISATION_OF_S_OF_BAT_A2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_BAT_A2 ;
            bool REINITIALISATION_OF_required_OF_BAT_B1 ;
            bool REINITIALISATION_OF_S_OF_BAT_B1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_BAT_B1 ;
            bool REINITIALISATION_OF_required_OF_BAT_B2 ;
            bool REINITIALISATION_OF_S_OF_BAT_B2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_BAT_B2 ;
            bool REINITIALISATION_OF_required_OF_CB_LGD2_unable ;
            bool REINITIALISATION_OF_S_OF_CB_LGD2_unable ;
            bool REINITIALISATION_OF_relevant_evt_OF_CB_LGD2_unable ;
            bool REINITIALISATION_OF_required_OF_CB_LGF2_unable ;
            bool REINITIALISATION_OF_S_OF_CB_LGF2_unable ;
            bool REINITIALISATION_OF_relevant_evt_OF_CB_LGF2_unable ;
            bool REINITIALISATION_OF_required_OF_CB_LHA12_unable ;
            bool REINITIALISATION_OF_S_OF_CB_LHA12_unable ;
            bool REINITIALISATION_OF_relevant_evt_OF_CB_LHA12_unable ;
            bool REINITIALISATION_OF_required_OF_CB_LHA3_unable ;
            bool REINITIALISATION_OF_S_OF_CB_LHA3_unable ;
            bool REINITIALISATION_OF_relevant_evt_OF_CB_LHA3_unable ;
            bool REINITIALISATION_OF_required_OF_CB_LHB12_unable ;
            bool REINITIALISATION_OF_S_OF_CB_LHB12_unable ;
            bool REINITIALISATION_OF_relevant_evt_OF_CB_LHB12_unable ;
            bool REINITIALISATION_OF_required_OF_CCF_DG ;
            bool REINITIALISATION_OF_S_OF_CCF_DG ;
            bool REINITIALISATION_OF_relevant_evt_OF_CCF_DG ;
            bool REINITIALISATION_OF_required_OF_CCF_GEV_LGR ;
            bool REINITIALISATION_OF_S_OF_CCF_GEV_LGR ;
            bool REINITIALISATION_OF_relevant_evt_OF_CCF_GEV_LGR ;
            bool REINITIALISATION_OF_required_OF_DGA_long ;
            bool REINITIALISATION_OF_S_OF_DGA_long ;
            bool REINITIALISATION_OF_relevant_evt_OF_DGA_long ;
            bool REINITIALISATION_OF_required_OF_DGA_lost ;
            bool REINITIALISATION_OF_S_OF_DGA_lost ;
            bool REINITIALISATION_OF_relevant_evt_OF_DGA_lost ;
            bool REINITIALISATION_OF_required_OF_DGA_short ;
            bool REINITIALISATION_OF_S_OF_DGA_short ;
            bool REINITIALISATION_OF_relevant_evt_OF_DGA_short ;
            bool REINITIALISATION_OF_required_OF_DGB_long ;
            bool REINITIALISATION_OF_S_OF_DGB_long ;
            bool REINITIALISATION_OF_relevant_evt_OF_DGB_long ;
            bool REINITIALISATION_OF_required_OF_DGB_lost ;
            bool REINITIALISATION_OF_S_OF_DGB_lost ;
            bool REINITIALISATION_OF_relevant_evt_OF_DGB_lost ;
            bool REINITIALISATION_OF_required_OF_DGB_short ;
            bool REINITIALISATION_OF_S_OF_DGB_short ;
            bool REINITIALISATION_OF_relevant_evt_OF_DGB_short ;
            bool REINITIALISATION_OF_required_OF_GEV ;
            bool REINITIALISATION_OF_S_OF_GEV ;
            bool REINITIALISATION_OF_relevant_evt_OF_GEV ;
            bool REINITIALISATION_OF_required_OF_GRID ;
            bool REINITIALISATION_OF_S_OF_GRID ;
            bool REINITIALISATION_OF_relevant_evt_OF_GRID ;
            bool REINITIALISATION_OF_required_OF_InFnHouse ;
            bool REINITIALISATION_OF_S_OF_InFnHouse ;
            bool REINITIALISATION_OF_relevant_evt_OF_InFnHouse ;
            bool REINITIALISATION_OF_required_OF_LBA ;
            bool REINITIALISATION_OF_S_OF_LBA ;
            bool REINITIALISATION_OF_relevant_evt_OF_LBA ;
            bool REINITIALISATION_OF_required_OF_LBA_lost ;
            bool REINITIALISATION_OF_S_OF_LBA_lost ;
            bool REINITIALISATION_OF_relevant_evt_OF_LBA_lost ;
            bool REINITIALISATION_OF_required_OF_LBA_not_fed ;
            bool REINITIALISATION_OF_S_OF_LBA_not_fed ;
            bool REINITIALISATION_OF_relevant_evt_OF_LBA_not_fed ;
            bool REINITIALISATION_OF_required_OF_LBAline1_lost ;
            bool REINITIALISATION_OF_S_OF_LBAline1_lost ;
            bool REINITIALISATION_OF_relevant_evt_OF_LBAline1_lost ;
            bool REINITIALISATION_OF_required_OF_LBAline2_lost ;
            bool REINITIALISATION_OF_S_OF_LBAline2_lost ;
            bool REINITIALISATION_OF_relevant_evt_OF_LBAline2_lost ;
            bool REINITIALISATION_OF_required_OF_LBAothers_lost ;
            bool REINITIALISATION_OF_S_OF_LBAothers_lost ;
            bool REINITIALISATION_OF_relevant_evt_OF_LBAothers_lost ;
            bool REINITIALISATION_OF_required_OF_LBB ;
            bool REINITIALISATION_OF_S_OF_LBB ;
            bool REINITIALISATION_OF_relevant_evt_OF_LBB ;
            bool REINITIALISATION_OF_required_OF_LBB_lost ;
            bool REINITIALISATION_OF_S_OF_LBB_lost ;
            bool REINITIALISATION_OF_relevant_evt_OF_LBB_lost ;
            bool REINITIALISATION_OF_required_OF_LBB_not_fed ;
            bool REINITIALISATION_OF_S_OF_LBB_not_fed ;
            bool REINITIALISATION_OF_relevant_evt_OF_LBB_not_fed ;
            bool REINITIALISATION_OF_required_OF_LBBline1_lost ;
            bool REINITIALISATION_OF_S_OF_LBBline1_lost ;
            bool REINITIALISATION_OF_relevant_evt_OF_LBBline1_lost ;
            bool REINITIALISATION_OF_required_OF_LBBline2_lost ;
            bool REINITIALISATION_OF_S_OF_LBBline2_lost ;
            bool REINITIALISATION_OF_relevant_evt_OF_LBBline2_lost ;
            bool REINITIALISATION_OF_required_OF_LGA ;
            bool REINITIALISATION_OF_S_OF_LGA ;
            bool REINITIALISATION_OF_relevant_evt_OF_LGA ;
            bool REINITIALISATION_OF_required_OF_LGB ;
            bool REINITIALISATION_OF_S_OF_LGB ;
            bool REINITIALISATION_OF_relevant_evt_OF_LGB ;
            bool REINITIALISATION_OF_required_OF_LGD ;
            bool REINITIALISATION_OF_S_OF_LGD ;
            bool REINITIALISATION_OF_relevant_evt_OF_LGD ;
            bool REINITIALISATION_OF_required_OF_LGD_not_fed ;
            bool REINITIALISATION_OF_S_OF_LGD_not_fed ;
            bool REINITIALISATION_OF_relevant_evt_OF_LGD_not_fed ;
            bool REINITIALISATION_OF_required_OF_LGE ;
            bool REINITIALISATION_OF_S_OF_LGE ;
            bool REINITIALISATION_OF_relevant_evt_OF_LGE ;
            bool REINITIALISATION_OF_required_OF_LGF ;
            bool REINITIALISATION_OF_S_OF_LGF ;
            bool REINITIALISATION_OF_relevant_evt_OF_LGF ;
            bool REINITIALISATION_OF_required_OF_LGF_not_fed ;
            bool REINITIALISATION_OF_S_OF_LGF_not_fed ;
            bool REINITIALISATION_OF_relevant_evt_OF_LGF_not_fed ;
            bool REINITIALISATION_OF_required_OF_LGR ;
            bool REINITIALISATION_OF_S_OF_LGR ;
            bool REINITIALISATION_OF_relevant_evt_OF_LGR ;
            bool REINITIALISATION_OF_required_OF_LHA ;
            bool REINITIALISATION_OF_S_OF_LHA ;
            bool REINITIALISATION_OF_relevant_evt_OF_LHA ;
            bool REINITIALISATION_OF_required_OF_LHA_and_LHB_lost ;
            bool REINITIALISATION_OF_S_OF_LHA_and_LHB_lost ;
            bool REINITIALISATION_OF_relevant_evt_OF_LHA_and_LHB_lost ;
            bool REINITIALISATION_OF_required_OF_LHA_lost ;
            bool REINITIALISATION_OF_S_OF_LHA_lost ;
            bool REINITIALISATION_OF_relevant_evt_OF_LHA_lost ;
            bool REINITIALISATION_OF_required_OF_LHA_not_fed ;
            bool REINITIALISATION_OF_S_OF_LHA_not_fed ;
            bool REINITIALISATION_OF_relevant_evt_OF_LHA_not_fed ;
            bool REINITIALISATION_OF_required_OF_LHB ;
            bool REINITIALISATION_OF_S_OF_LHB ;
            bool REINITIALISATION_OF_relevant_evt_OF_LHB ;
            bool REINITIALISATION_OF_required_OF_LHB_lost ;
            bool REINITIALISATION_OF_S_OF_LHB_lost ;
            bool REINITIALISATION_OF_relevant_evt_OF_LHB_lost ;
            bool REINITIALISATION_OF_required_OF_LHB_not_fed ;
            bool REINITIALISATION_OF_S_OF_LHB_not_fed ;
            bool REINITIALISATION_OF_relevant_evt_OF_LHB_not_fed ;
            bool REINITIALISATION_OF_required_OF_LKE ;
            bool REINITIALISATION_OF_S_OF_LKE ;
            bool REINITIALISATION_OF_relevant_evt_OF_LKE ;
            bool REINITIALISATION_OF_required_OF_LKI ;
            bool REINITIALISATION_OF_S_OF_LKI ;
            bool REINITIALISATION_OF_relevant_evt_OF_LKI ;
            bool REINITIALISATION_OF_required_OF_LLA ;
            bool REINITIALISATION_OF_S_OF_LLA ;
            bool REINITIALISATION_OF_relevant_evt_OF_LLA ;
            bool REINITIALISATION_OF_required_OF_LLD ;
            bool REINITIALISATION_OF_S_OF_LLD ;
            bool REINITIALISATION_OF_relevant_evt_OF_LLD ;
            bool REINITIALISATION_OF_required_OF_OR_14 ;
            bool REINITIALISATION_OF_S_OF_OR_14 ;
            bool REINITIALISATION_OF_relevant_evt_OF_OR_14 ;
            bool REINITIALISATION_OF_required_OF_OnDemHouse ;
            bool REINITIALISATION_OF_S_OF_OnDemHouse ;
            bool REINITIALISATION_OF_relevant_evt_OF_OnDemHouse ;
            bool REINITIALISATION_OF_to_be_fired_OF_OnDemHouse ;
            bool REINITIALISATION_OF_required_OF_RC_CB_LGD2 ;
            bool REINITIALISATION_OF_S_OF_RC_CB_LGD2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_RC_CB_LGD2 ;
            bool REINITIALISATION_OF_to_be_fired_OF_RC_CB_LGD2 ;
            bool REINITIALISATION_OF_required_OF_RC_CB_LGD2_ ;
            bool REINITIALISATION_OF_S_OF_RC_CB_LGD2_ ;
            bool REINITIALISATION_OF_relevant_evt_OF_RC_CB_LGD2_ ;
            bool REINITIALISATION_OF_required_OF_RC_CB_LGF2 ;
            bool REINITIALISATION_OF_S_OF_RC_CB_LGF2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_RC_CB_LGF2 ;
            bool REINITIALISATION_OF_to_be_fired_OF_RC_CB_LGF2 ;
            bool REINITIALISATION_OF_required_OF_RC_CB_LGF2_ ;
            bool REINITIALISATION_OF_S_OF_RC_CB_LGF2_ ;
            bool REINITIALISATION_OF_relevant_evt_OF_RC_CB_LGF2_ ;
            bool REINITIALISATION_OF_required_OF_RC_CB_LHA2 ;
            bool REINITIALISATION_OF_S_OF_RC_CB_LHA2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_RC_CB_LHA2 ;
            bool REINITIALISATION_OF_to_be_fired_OF_RC_CB_LHA2 ;
            bool REINITIALISATION_OF_required_OF_RC_CB_LHA2_ ;
            bool REINITIALISATION_OF_S_OF_RC_CB_LHA2_ ;
            bool REINITIALISATION_OF_relevant_evt_OF_RC_CB_LHA2_ ;
            bool REINITIALISATION_OF_required_OF_RC_CB_LHA3 ;
            bool REINITIALISATION_OF_S_OF_RC_CB_LHA3 ;
            bool REINITIALISATION_OF_relevant_evt_OF_RC_CB_LHA3 ;
            bool REINITIALISATION_OF_to_be_fired_OF_RC_CB_LHA3 ;
            bool REINITIALISATION_OF_required_OF_RC_CB_LHA3_ ;
            bool REINITIALISATION_OF_S_OF_RC_CB_LHA3_ ;
            bool REINITIALISATION_OF_relevant_evt_OF_RC_CB_LHA3_ ;
            bool REINITIALISATION_OF_required_OF_RC_CB_LHB2 ;
            bool REINITIALISATION_OF_S_OF_RC_CB_LHB2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_RC_CB_LHB2 ;
            bool REINITIALISATION_OF_to_be_fired_OF_RC_CB_LHB2 ;
            bool REINITIALISATION_OF_required_OF_RC_CB_LHB2_ ;
            bool REINITIALISATION_OF_S_OF_RC_CB_LHB2_ ;
            bool REINITIALISATION_OF_relevant_evt_OF_RC_CB_LHB2_ ;
            bool REINITIALISATION_OF_required_OF_RDA1 ;
            bool REINITIALISATION_OF_S_OF_RDA1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_RDA1 ;
            bool REINITIALISATION_OF_required_OF_RDA2 ;
            bool REINITIALISATION_OF_S_OF_RDA2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_RDA2 ;
            bool REINITIALISATION_OF_required_OF_RDB1 ;
            bool REINITIALISATION_OF_S_OF_RDB1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_RDB1 ;
            bool REINITIALISATION_OF_required_OF_RDB2 ;
            bool REINITIALISATION_OF_S_OF_RDB2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_RDB2 ;
            bool REINITIALISATION_OF_required_OF_RO_CB_LHA1 ;
            bool REINITIALISATION_OF_S_OF_RO_CB_LHA1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_RO_CB_LHA1 ;
            bool REINITIALISATION_OF_to_be_fired_OF_RO_CB_LHA1 ;
            bool REINITIALISATION_OF_required_OF_RO_CB_LHA1_ ;
            bool REINITIALISATION_OF_S_OF_RO_CB_LHA1_ ;
            bool REINITIALISATION_OF_relevant_evt_OF_RO_CB_LHA1_ ;
            bool REINITIALISATION_OF_required_OF_RO_CB_LHA2 ;
            bool REINITIALISATION_OF_S_OF_RO_CB_LHA2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_RO_CB_LHA2 ;
            bool REINITIALISATION_OF_to_be_fired_OF_RO_CB_LHA2 ;
            bool REINITIALISATION_OF_required_OF_RO_CB_LHA2_ ;
            bool REINITIALISATION_OF_S_OF_RO_CB_LHA2_ ;
            bool REINITIALISATION_OF_relevant_evt_OF_RO_CB_LHA2_ ;
            bool REINITIALISATION_OF_required_OF_RO_CB_LHB1 ;
            bool REINITIALISATION_OF_S_OF_RO_CB_LHB1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_RO_CB_LHB1 ;
            bool REINITIALISATION_OF_to_be_fired_OF_RO_CB_LHB1 ;
            bool REINITIALISATION_OF_required_OF_RO_CB_LHB1_ ;
            bool REINITIALISATION_OF_S_OF_RO_CB_LHB1_ ;
            bool REINITIALISATION_OF_relevant_evt_OF_RO_CB_LHB1_ ;
            bool REINITIALISATION_OF_required_OF_SH_CB_GEV ;
            bool REINITIALISATION_OF_S_OF_SH_CB_GEV ;
            bool REINITIALISATION_OF_relevant_evt_OF_SH_CB_GEV ;
            bool REINITIALISATION_OF_required_OF_SH_CB_LBA1 ;
            bool REINITIALISATION_OF_S_OF_SH_CB_LBA1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_SH_CB_LBA1 ;
            bool REINITIALISATION_OF_required_OF_SH_CB_LBA2 ;
            bool REINITIALISATION_OF_S_OF_SH_CB_LBA2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_SH_CB_LBA2 ;
            bool REINITIALISATION_OF_required_OF_SH_CB_LBB1 ;
            bool REINITIALISATION_OF_S_OF_SH_CB_LBB1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_SH_CB_LBB1 ;
            bool REINITIALISATION_OF_required_OF_SH_CB_LBB2 ;
            bool REINITIALISATION_OF_S_OF_SH_CB_LBB2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_SH_CB_LBB2 ;
            bool REINITIALISATION_OF_required_OF_SH_CB_LGA ;
            bool REINITIALISATION_OF_S_OF_SH_CB_LGA ;
            bool REINITIALISATION_OF_relevant_evt_OF_SH_CB_LGA ;
            bool REINITIALISATION_OF_required_OF_SH_CB_LGB ;
            bool REINITIALISATION_OF_S_OF_SH_CB_LGB ;
            bool REINITIALISATION_OF_relevant_evt_OF_SH_CB_LGB ;
            bool REINITIALISATION_OF_required_OF_SH_CB_LGD1 ;
            bool REINITIALISATION_OF_S_OF_SH_CB_LGD1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_SH_CB_LGD1 ;
            bool REINITIALISATION_OF_required_OF_SH_CB_LGD2 ;
            bool REINITIALISATION_OF_S_OF_SH_CB_LGD2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_SH_CB_LGD2 ;
            bool REINITIALISATION_OF_required_OF_SH_CB_LGE1 ;
            bool REINITIALISATION_OF_S_OF_SH_CB_LGE1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_SH_CB_LGE1 ;
            bool REINITIALISATION_OF_required_OF_SH_CB_LGF1 ;
            bool REINITIALISATION_OF_S_OF_SH_CB_LGF1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_SH_CB_LGF1 ;
            bool REINITIALISATION_OF_required_OF_SH_CB_LGF2 ;
            bool REINITIALISATION_OF_S_OF_SH_CB_LGF2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_SH_CB_LGF2 ;
            bool REINITIALISATION_OF_required_OF_SH_CB_LHA1 ;
            bool REINITIALISATION_OF_S_OF_SH_CB_LHA1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_SH_CB_LHA1 ;
            bool REINITIALISATION_OF_required_OF_SH_CB_LHA2 ;
            bool REINITIALISATION_OF_S_OF_SH_CB_LHA2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_SH_CB_LHA2 ;
            bool REINITIALISATION_OF_required_OF_SH_CB_LHA3 ;
            bool REINITIALISATION_OF_S_OF_SH_CB_LHA3 ;
            bool REINITIALISATION_OF_relevant_evt_OF_SH_CB_LHA3 ;
            bool REINITIALISATION_OF_required_OF_SH_CB_LHB1 ;
            bool REINITIALISATION_OF_S_OF_SH_CB_LHB1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_SH_CB_LHB1 ;
            bool REINITIALISATION_OF_required_OF_SH_CB_LHB2 ;
            bool REINITIALISATION_OF_S_OF_SH_CB_LHB2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_SH_CB_LHB2 ;
            bool REINITIALISATION_OF_required_OF_SH_CB_RDA1 ;
            bool REINITIALISATION_OF_S_OF_SH_CB_RDA1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_SH_CB_RDA1 ;
            bool REINITIALISATION_OF_required_OF_SH_CB_RDA2 ;
            bool REINITIALISATION_OF_S_OF_SH_CB_RDA2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_SH_CB_RDA2 ;
            bool REINITIALISATION_OF_required_OF_SH_CB_RDB1 ;
            bool REINITIALISATION_OF_S_OF_SH_CB_RDB1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_SH_CB_RDB1 ;
            bool REINITIALISATION_OF_required_OF_SH_CB_RDB2 ;
            bool REINITIALISATION_OF_S_OF_SH_CB_RDB2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_SH_CB_RDB2 ;
            bool REINITIALISATION_OF_required_OF_SH_CB_TUA1 ;
            bool REINITIALISATION_OF_S_OF_SH_CB_TUA1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_SH_CB_TUA1 ;
            bool REINITIALISATION_OF_required_OF_SH_CB_TUA2 ;
            bool REINITIALISATION_OF_S_OF_SH_CB_TUA2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_SH_CB_TUA2 ;
            bool REINITIALISATION_OF_required_OF_SH_CB_TUB1 ;
            bool REINITIALISATION_OF_S_OF_SH_CB_TUB1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_SH_CB_TUB1 ;
            bool REINITIALISATION_OF_required_OF_SH_CB_TUB2 ;
            bool REINITIALISATION_OF_S_OF_SH_CB_TUB2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_SH_CB_TUB2 ;
            bool REINITIALISATION_OF_required_OF_SH_CB_line_GEV ;
            bool REINITIALISATION_OF_S_OF_SH_CB_line_GEV ;
            bool REINITIALISATION_OF_relevant_evt_OF_SH_CB_line_GEV ;
            bool REINITIALISATION_OF_required_OF_SH_CB_line_LGR ;
            bool REINITIALISATION_OF_S_OF_SH_CB_line_LGR ;
            bool REINITIALISATION_OF_relevant_evt_OF_SH_CB_line_LGR ;
            bool REINITIALISATION_OF_required_OF_SH_GEV_or_LGR ;
            bool REINITIALISATION_OF_S_OF_SH_GEV_or_LGR ;
            bool REINITIALISATION_OF_relevant_evt_OF_SH_GEV_or_LGR ;
            bool REINITIALISATION_OF_required_OF_SUBSTATION ;
            bool REINITIALISATION_OF_S_OF_SUBSTATION ;
            bool REINITIALISATION_OF_relevant_evt_OF_SUBSTATION ;
            bool REINITIALISATION_OF_required_OF_TA ;
            bool REINITIALISATION_OF_S_OF_TA ;
            bool REINITIALISATION_OF_relevant_evt_OF_TA ;
            bool REINITIALISATION_OF_required_OF_TAC ;
            bool REINITIALISATION_OF_S_OF_TAC ;
            bool REINITIALISATION_OF_relevant_evt_OF_TAC ;
            bool REINITIALISATION_OF_required_OF_TA_lost ;
            bool REINITIALISATION_OF_S_OF_TA_lost ;
            bool REINITIALISATION_OF_relevant_evt_OF_TA_lost ;
            bool REINITIALISATION_OF_required_OF_TP ;
            bool REINITIALISATION_OF_S_OF_TP ;
            bool REINITIALISATION_OF_relevant_evt_OF_TP ;
            bool REINITIALISATION_OF_required_OF_TS ;
            bool REINITIALISATION_OF_S_OF_TS ;
            bool REINITIALISATION_OF_relevant_evt_OF_TS ;
            bool REINITIALISATION_OF_required_OF_TS_lost ;
            bool REINITIALISATION_OF_S_OF_TS_lost ;
            bool REINITIALISATION_OF_relevant_evt_OF_TS_lost ;
            bool REINITIALISATION_OF_required_OF_TS_not_fed ;
            bool REINITIALISATION_OF_S_OF_TS_not_fed ;
            bool REINITIALISATION_OF_relevant_evt_OF_TS_not_fed ;
            bool REINITIALISATION_OF_required_OF_TUA1 ;
            bool REINITIALISATION_OF_S_OF_TUA1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_TUA1 ;
            bool REINITIALISATION_OF_required_OF_TUA2 ;
            bool REINITIALISATION_OF_S_OF_TUA2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_TUA2 ;
            bool REINITIALISATION_OF_required_OF_TUB1 ;
            bool REINITIALISATION_OF_S_OF_TUB1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_TUB1 ;
            bool REINITIALISATION_OF_required_OF_TUB2 ;
            bool REINITIALISATION_OF_S_OF_TUB2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_TUB2 ;
            bool REINITIALISATION_OF_required_OF_UE_1 ;
            bool REINITIALISATION_OF_S_OF_UE_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_UE_1 ;
            bool REINITIALISATION_OF_required_OF_UNIT ;
            bool REINITIALISATION_OF_S_OF_UNIT ;
            bool REINITIALISATION_OF_relevant_evt_OF_UNIT ;
            bool REINITIALISATION_OF_required_OF_demand_CCF_DG ;
            bool REINITIALISATION_OF_S_OF_demand_CCF_DG ;
            bool REINITIALISATION_OF_relevant_evt_OF_demand_CCF_DG ;
            bool REINITIALISATION_OF_to_be_fired_OF_demand_CCF_DG ;
            bool REINITIALISATION_OF_required_OF_demand_DGA ;
            bool REINITIALISATION_OF_S_OF_demand_DGA ;
            bool REINITIALISATION_OF_relevant_evt_OF_demand_DGA ;
            bool REINITIALISATION_OF_to_be_fired_OF_demand_DGA ;
            bool REINITIALISATION_OF_required_OF_demand_DGB ;
            bool REINITIALISATION_OF_S_OF_demand_DGB ;
            bool REINITIALISATION_OF_relevant_evt_OF_demand_DGB ;
            bool REINITIALISATION_OF_to_be_fired_OF_demand_DGB ;
            bool REINITIALISATION_OF_required_OF_demand_TAC ;
            bool REINITIALISATION_OF_S_OF_demand_TAC ;
            bool REINITIALISATION_OF_relevant_evt_OF_demand_TAC ;
            bool REINITIALISATION_OF_to_be_fired_OF_demand_TAC ;
            bool REINITIALISATION_OF_required_OF_loss_of_houseload_operation ;
            bool REINITIALISATION_OF_S_OF_loss_of_houseload_operation ;
            bool REINITIALISATION_OF_relevant_evt_OF_loss_of_houseload_operation ;
            bool REINITIALISATION_OF_required_OF_loss_of_supply_by_DGA ;
            bool REINITIALISATION_OF_S_OF_loss_of_supply_by_DGA ;
            bool REINITIALISATION_OF_relevant_evt_OF_loss_of_supply_by_DGA ;
            bool REINITIALISATION_OF_required_OF_loss_of_supply_by_DGA_and_TAC ;
            bool REINITIALISATION_OF_S_OF_loss_of_supply_by_DGA_and_TAC ;
            bool REINITIALISATION_OF_relevant_evt_OF_loss_of_supply_by_DGA_and_TAC ;
            bool REINITIALISATION_OF_required_OF_loss_of_supply_by_DGB ;
            bool REINITIALISATION_OF_S_OF_loss_of_supply_by_DGB ;
            bool REINITIALISATION_OF_relevant_evt_OF_loss_of_supply_by_DGB ;
            bool REINITIALISATION_OF_required_OF_loss_of_supply_by_GEV ;
            bool REINITIALISATION_OF_S_OF_loss_of_supply_by_GEV ;
            bool REINITIALISATION_OF_relevant_evt_OF_loss_of_supply_by_GEV ;
            bool REINITIALISATION_OF_required_OF_loss_of_supply_by_LGD ;
            bool REINITIALISATION_OF_S_OF_loss_of_supply_by_LGD ;
            bool REINITIALISATION_OF_relevant_evt_OF_loss_of_supply_by_LGD ;
            bool REINITIALISATION_OF_required_OF_loss_of_supply_by_LGF ;
            bool REINITIALISATION_OF_S_OF_loss_of_supply_by_LGF ;
            bool REINITIALISATION_OF_relevant_evt_OF_loss_of_supply_by_LGF ;
            bool REINITIALISATION_OF_required_OF_loss_of_supply_by_LGR ;
            bool REINITIALISATION_OF_S_OF_loss_of_supply_by_LGR ;
            bool REINITIALISATION_OF_relevant_evt_OF_loss_of_supply_by_LGR ;
            bool REINITIALISATION_OF_required_OF_loss_of_supply_by_TA ;
            bool REINITIALISATION_OF_S_OF_loss_of_supply_by_TA ;
            bool REINITIALISATION_OF_relevant_evt_OF_loss_of_supply_by_TA ;
            bool REINITIALISATION_OF_required_OF_loss_of_supply_by_TA1 ;
            bool REINITIALISATION_OF_S_OF_loss_of_supply_by_TA1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_loss_of_supply_by_TA1 ;
            bool REINITIALISATION_OF_required_OF_loss_of_supply_by_TAC ;
            bool REINITIALISATION_OF_S_OF_loss_of_supply_by_TAC ;
            bool REINITIALISATION_OF_relevant_evt_OF_loss_of_supply_by_TAC ;
            bool REINITIALISATION_OF_required_OF_loss_of_supply_by_TS ;
            bool REINITIALISATION_OF_S_OF_loss_of_supply_by_TS ;
            bool REINITIALISATION_OF_relevant_evt_OF_loss_of_supply_by_TS ;
            bool REINITIALISATION_OF_required_OF_loss_of_supply_by_TS1 ;
            bool REINITIALISATION_OF_S_OF_loss_of_supply_by_TS1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_loss_of_supply_by_TS1 ;
            bool REINITIALISATION_OF_required_OF_loss_of_supply_by_UNIT ;
            bool REINITIALISATION_OF_S_OF_loss_of_supply_by_UNIT ;
            bool REINITIALISATION_OF_relevant_evt_OF_loss_of_supply_by_UNIT ;
            
		/* ---------- DECLARATION OF CONSTANTS ------------ */
			double const mu_OF_BAT_A1 = 0.001;
			std::string const calculate_required_OF_SH_CB_TUA1 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_loss_of_supply_by_GEV = false;
			double const gamma_OF_RC_CB_LHA3 = 0.0002;
			bool const failF_FROZEN_OF_SH_CB_LHB2 = false;
			std::string const calculate_required_OF_RC_CB_LHA3_ = "fn_fathers_and_trig";
			std::string const calculate_required_OF_loss_of_houseload_operation = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_DGB_short = false;
			std::string const calculate_required_OF_LGE = "fn_fathers_and_trig";
			double const lambda_OF_UNIT = 0.0001;
			double const lambda_OF_TUB2 = 2e-07;
			double const gamma_OF_demand_TAC = 0.002;
			double const lambda_OF_SH_CB_LBB2 = 1e-06;
			bool const force_relevant_events_OF_TUA1 = false;
			double const lambda_OF_CCF_GEV_LGR = 1e-06;
			double const mu_OF_DGB_short = 0.1;
			std::string const calculate_required_OF_BATTERY_B_lost = "fn_fathers_and_trig";
			double const lambda_OF_SH_CB_LGE1 = 5e-07;
			std::string const trigger_kind_OF_t_5 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_TUB1 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_LGD = false;
			double const lambda_OF_BAT_A2 = 2;
			std::string const calculate_required_OF_LGF = "fn_fathers_and_trig";
			double const mu_OF_TUA1 = 0.1;
			double const lambda_OF_LLA = 5e-07;
			double const mu_OF_SH_CB_LHB1 = 0.2;
			bool const force_relevant_events_OF_SH_CB_LGF1 = false;
			std::string const calculate_required_OF_LGR = "fn_fathers_and_trig";
			double const mu_OF_LBA = 0.02;
			bool const failF_FROZEN_OF_SH_CB_line_GEV = false;
			double const mu_OF_SH_CB_LGD2 = 0.2;
			double const mu_OF_SH_CB_GEV = 0.2;
			std::string const calculate_required_OF_loss_of_supply_by_DGA_and_TAC = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_loss_of_supply_by_TA1 = false;
			bool const trimming_OF_OPTIONS = false;
			bool const failF_FROZEN_OF_BAT_B2 = false;
			bool const force_relevant_events_OF_SH_CB_LBA2 = false;
			bool const force_relevant_events_OF_loss_of_supply_by_LGD = false;
			bool const failF_FROZEN_OF_LLA = false;
			std::string const calculate_required_OF_loss_of_supply_by_TS1 = "fn_fathers_and_trig";
			double const mu_OF_SH_CB_LGA = 0.2;
			std::string const trigger_kind_OF_t_3 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_LBB = false;
			std::string const calculate_required_OF_OR_14 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_loss_of_supply_by_UNIT = "fn_fathers_and_trig";
			double const mu_OF_SH_CB_LHA1 = 0.2;
			std::string const calculate_required_OF_SH_CB_LHA3 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_CB_LHA12_unable = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_SH_CB_line_LGR = false;
			std::string const trigger_kind_OF_t_6 = "fn_fathers_and_trig";
			double const lambda_OF_GRID = 1e-05;
			double const lambda_OF_SUBSTATION = 1e-06;
			double const lambda_OF_SH_CB_RDB2 = 1e-06;
			std::string const calculate_required_OF_SH_CB_LGB = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_LBBline1_lost = false;
			bool const CCFlinesQuickRepair_OF___ARBRE__EIRM = false;
			double const lambda_OF_SH_CB_TUA1 = 5e-07;
			bool const trim_article_OF___ARBRE__EIRM = false;
			bool const failF_FROZEN_OF_SH_CB_RDA1 = false;
			bool const failF_FROZEN_OF_RDB1 = false;
			bool const force_relevant_events_OF_RO_CB_LHB1_ = false;
			std::string const calculate_required_OF_loss_of_supply_by_GEV = "fn_fathers_and_trig";
			double const lambda_OF_DGA_long = 0.0005;
			std::string const calculate_required_OF_DGB_short = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_LHA_lost = false;
			double const mu_OF_demand_DGA = 0.005;
			bool const failF_FROZEN_OF_LGE = false;
			bool const force_relevant_events_OF_LHA_not_fed = false;
			std::string const calculate_required_OF_TUA1 = "fn_fathers_and_trig";
			double const mu_OF_SH_CB_LHA2 = 0.2;
			bool const failF_FROZEN_OF_LKI = false;
			bool const force_relevant_events_OF_LBAline2_lost = false;
			bool const force_relevant_events_OF_SH_CB_LBB2 = false;
			double const lambda_OF_RDB2 = 1e-06;
			bool const failF_FROZEN_OF_TUB1 = false;
			bool const force_relevant_events_OF_CCF_GEV_LGR = false;
			double const lambda_OF_LKE = 5e-07;
			std::string const calculate_required_OF_SH_CB_LGF1 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_LGF = false;
			std::string const when_to_check_OF_demand_CCF_DG = "not_req_to_req";
			bool const force_relevant_events_OF_SH_CB_TUA2 = false;
			std::string const calculate_required_OF_loss_of_supply_by_TA1 = "fn_fathers_and_trig";
			double const lambda_OF_SH_CB_LHA3 = 5e-07;
			std::string const when_to_check_OF_RC_CB_LHB2 = "not_req_to_req";
			bool const failI_FROZEN_OF_RC_CB_LHA3 = false;
			bool const failF_FROZEN_OF_LGR = false;
			std::string const calculate_required_OF_SH_CB_LBA2 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_loss_of_supply_by_LGD = "fn_fathers_and_trig";
			double const lambda_OF_SH_CB_LBA1 = 1e-06;
			double const lambda_OF_RDA1 = 1e-06;
			std::string const when_to_check_OF_RC_CB_LGF2 = "not_req_to_req";
			double const mu_OF_RC_CB_LGD2 = 0.2;
			double const lambda_OF_RDA2 = 1e-06;
			bool const force_relevant_events_OF_SH_CB_LGD1 = false;
			bool const force_relevant_events_OF_demand_CCF_DG = false;
			double const lambda_OF_SH_CB_GEV = 1e-07;
			bool const force_relevant_events_OF_RC_CB_LHB2 = false;
			bool const failF_FROZEN_OF_SH_CB_LHA3 = false;
			double const lambda_OF_SH_CB_LGB = 5e-07;
			bool const force_relevant_events_OF_TS = false;
			double const lambda_OF_LGR = 2e-05;
			bool const force_relevant_events_OF_RC_CB_LGF2 = false;
			double const gamma_OF_demand_DGB = 0.002;
			std::string const calculate_required_OF_LBBline1_lost = "fn_fathers_and_trig";
			std::string const trigger_kind_OF_t_6_1 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_LBB_lost = false;
			bool const failF_FROZEN_OF_SH_CB_LGB = false;
			double const mu_OF_SH_CB_LHB2 = 0.2;
			double const lambda_OF_TS = 5e-06;
			std::string const calculate_required_OF_RO_CB_LHB1_ = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_SUBSTATION = false;
			bool const force_relevant_events_OF_SH_CB_RDB2 = false;
			bool const force_relevant_events_OF_loss_of_supply_by_TS = false;
			std::string const calculate_required_OF_LHA_lost = "fn_fathers_and_trig";
			double const mu_OF_RO_CB_LHA1 = 0.2;
			bool const failI_FROZEN_OF_demand_TAC = false;
			std::string const when_to_check_OF_RC_CB_LHA2 = "not_req_to_req";
			bool const failF_FROZEN_OF_DGB_short = false;
			std::string const calculate_required_OF_LHA_not_fed = "fn_fathers_and_trig";
			double const gamma_OF_demand_DGA = 0.002;
			double const mu_OF_RO_CB_LHA2 = 0.2;
			bool const failF_FROZEN_OF_TUA1 = false;
			bool const force_relevant_events_OF_BAT_A2 = false;
			bool const force_relevant_events_OF_RC_CB_LHA2 = false;
			double const mu_OF_SH_CB_LGE1 = 0.2;
			double const lambda_OF_SH_CB_LGF1 = 5e-07;
			std::string const calculate_required_OF_LBAline2_lost = "fn_fathers_and_trig";
			std::string const calculate_required_OF_SH_CB_LBB2 = "fn_fathers_and_trig";
			double const gamma_OF_OnDemHouse = 0.2;
			bool const force_relevant_events_OF_LGD_not_fed = false;
			double const mu_OF_SH_CB_line_GEV = 0.2;
			std::string const calculate_required_OF_CCF_GEV_LGR = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_LHB = false;
			std::string const calculate_required_OF_SH_CB_TUA2 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_SH_CB_LGF1 = false;
			double const lambda_OF_LGA = 2e-07;
			bool const force_relevant_events_OF_RDB2 = false;
			double const mu_OF_SH_CB_line_LGR = 0.2;
			std::string const calculate_required_OF_SH_CB_LGD1 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_SH_CB_LBA2 = false;
			std::string const calculate_required_OF_demand_CCF_DG = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_LBB = false;
			std::string const calculate_required_OF_RC_CB_LHB2 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_loss_of_supply_by_TAC = false;
			std::string const calculate_required_OF_TS = "fn_fathers_and_trig";
			std::string const calculate_required_OF_RC_CB_LGF2 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_RDA1 = false;
			bool const force_relevant_events_OF_SH_CB_LBA1 = false;
			bool const force_relevant_events_OF_RDA2 = false;
			double const mu_OF_SH_CB_RDA1 = 0.2;
			double const mu_OF_RDB2 = 0.3333333;
			double const lambda_OF_LGB = 2e-07;
			double const mu_OF_OnDemHouse = 0.001;
			std::string const trimming_option_OF_OPTIONS = "maximum";
			double const mu_OF_SH_CB_TUA1 = 0.2;
			std::string const calculate_required_OF_SUBSTATION = "fn_fathers_and_trig";
			std::string const calculate_required_OF_SH_CB_RDB2 = "fn_fathers_and_trig";
			std::string const when_to_check_OF_RO_CB_LHB1 = "not_req_to_req";
			std::string const calculate_required_OF_loss_of_supply_by_TS = "fn_fathers_and_trig";
			double const lambda_OF_SH_CB_TUB2 = 5e-07;
			bool const force_relevant_events_OF_LLD = false;
			double const mu_OF_RDA1 = 0.3333333;
			double const mu_OF_SUBSTATION = 0.05;
			bool const force_relevant_events_OF_TA = false;
			double const mu_OF_RDB1 = 0.3333333;
			bool const force_relevant_events_OF_GRID = false;
			double const mu_OF_InFnHouse = 0.001;
			std::string const trigger_kind_OF_t_4 = "fn_fathers_and_trig";
			double const mu_OF_LHA = 0.02;
			double const mu_OF_TS = 0.005;
			bool const No_trim_OF___ARBRE__EIRM = true;
			double const mu_OF_GRID = 0.1;
			std::string const calculate_required_OF_BAT_A2 = "fn_fathers_and_trig";
			double const lambda_OF_TA = 5e-06;
			std::string const calculate_required_OF_RC_CB_LHA2 = "fn_fathers_and_trig";
			double const lambda_OF_DGB_short = 0.002;
			std::string const calculate_required_OF_LGD_not_fed = "fn_fathers_and_trig";
			double const lambda_OF_SH_CB_TUA2 = 5e-07;
			double const mu_OF_LGR = 0.2;
			bool const failF_FROZEN_OF_SH_CB_LBB2 = false;
			std::string const calculate_required_OF_LHB = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_TUB2 = false;
			std::string const when_to_check_OF_demand_DGB = "not_req_to_req";
			bool const failF_FROZEN_OF_CCF_GEV_LGR = false;
			bool const force_relevant_events_OF_LBA_not_fed = false;
			double const lambda_OF_SH_CB_LGD1 = 5e-07;
			std::string const trigger_kind_OF_t_2 = "fn_fathers_and_trig";
			std::string const step_down_OF_CB_LGF2_unable = "rep_any";
			double const lambda_OF_SH_CB_line_GEV = 1e-07;
			std::string const calculate_required_OF_RDB2 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_SH_CB_TUA2 = false;
			double const mu_OF_LGB = 0.02;
			double const mu_OF_SH_CB_LHA3 = 0.2;
			double const mu_OF_TUB2 = 0.1;
			bool const force_relevant_events_OF_demand_DGB = false;
			std::string const trigger_kind_OF_t_1_1 = "fn_fathers_and_trig";
			double const lambda_OF_DGB_long = 0.0005;
			std::string const calculate_required_OF_loss_of_supply_by_TAC = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_SH_CB_LGD1 = false;
			bool const force_relevant_events_OF_TAC = false;
			double const lambda_OF_SH_CB_line_LGR = 1e-07;
			std::string const calculate_required_OF_SH_CB_LBA1 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_RDA1 = "fn_fathers_and_trig";
			bool const failI_FROZEN_OF_demand_DGB = false;
			std::string const calculate_required_OF_RDA2 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_SH_CB_TUB1 = false;
			bool const failF_FROZEN_OF_TS = false;
			double const mu_OF_SH_CB_LGB = 0.2;
			bool const force_relevant_events_OF_CB_LGF2_unable = false;
			bool const force_relevant_events_OF_RC_CB_LGD2_ = false;
			std::string const calculate_required_OF_LBB_lost = "always_true";
			bool const force_relevant_events_OF_LBB_not_fed = false;
			bool const No_repair_OF___ARBRE__EIRM = true;
			bool const force_relevant_events_OF_RC_CB_LHB2_ = false;
			std::string const calculate_required_OF_LLD = "fn_fathers_and_trig";
			std::string const calculate_required_OF_TA = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_SUBSTATION = false;
			bool const failF_FROZEN_OF_SH_CB_RDB2 = false;
			std::string const calculate_required_OF_GRID = "fn_fathers_and_trig";
			std::string const calculate_required_OF_LKI = "fn_fathers_and_trig";
			double const mu_OF_LGD = 0.02;
			bool const force_relevant_events_OF_GEV = false;
			std::string const calculate_required_OF_RO_CB_LHB1 = "fn_fathers_and_trig";
			double const lambda_OF_SH_CB_RDB1 = 1e-06;
			double const mu_OF_LLA = 0.02;
			bool const failF_FROZEN_OF_BAT_A2 = false;
			double const mu_OF_SH_CB_LGF1 = 0.2;
			std::string const calculate_required_OF_TUB2 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_DGA_lost = false;
			bool const force_relevant_events_OF_SH_GEV_or_LGR = false;
			std::string const calculate_required_OF_LBA_not_fed = "fn_fathers_and_trig";
			double const mu_OF_SH_CB_LBA2 = 0.2;
			bool const failF_FROZEN_OF_LHB = false;
			std::string const step_down_OF_CB_LGD2_unable = "rep_any";
			std::string const calculate_required_OF_demand_DGB = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_RDB2 = false;
			double const lambda_OF_InFnHouse = 0.1;
			bool const force_relevant_events_OF_loss_of_supply_by_LGR = false;
			std::string const calculate_required_OF_TAC = "fn_fathers_and_trig";
			double const lambda_OF_TUA2 = 2e-07;
			bool const force_relevant_events_OF_DGA_long = false;
			std::string const calculate_required_OF_SH_CB_TUB1 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_SH_CB_LBA1 = false;
			std::string const calculate_required_OF_CB_LGF2_unable = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_RDA1 = false;
			bool const force_relevant_events_OF_CB_LGD2_unable = false;
			bool const failF_FROZEN_OF_RDA2 = false;
			std::string const calculate_required_OF_RC_CB_LGD2_ = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_SH_CB_LHB1 = false;
			std::string const calculate_required_OF_LBB_not_fed = "fn_fathers_and_trig";
			double const mu_OF_LGE = 0.02;
			std::string const calculate_required_OF_RC_CB_LHB2_ = "fn_fathers_and_trig";
			double const lambda_OF_LKI = 5e-07;
			bool const failF_FROZEN_OF_LLD = false;
			bool const force_relevant_events_OF_SH_CB_LHA1 = false;
			double const mu_OF_SH_CB_TUB2 = 0.2;
			std::string const calculate_required_OF_GEV = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_TA = false;
			bool const force_relevant_events_OF_LBBline2_lost = false;
			std::string const when_to_check_OF_RC_CB_LHA3 = "not_req_to_req";
			bool const failF_FROZEN_OF_GRID = false;
			double const mu_OF_LGF = 0.02;
			double const mu_OF_TAC = 0.005;
			double const lambda_OF_SH_CB_LBB1 = 1e-06;
			bool const force_relevant_events_OF_loss_of_supply_by_LGF = false;
			bool const force_relevant_events_OF_RC_CB_LHA3 = false;
			bool const repairable_system_OF_OPTIONS = false;
			double const mu_OF_LKE = 0.02;
			double const lambda_OF_SH_CB_RDA2 = 1e-06;
			bool const force_relevant_events_OF_LGF_not_fed = false;
			bool const force_relevant_events_OF_SH_CB_RDB1 = false;
			std::string const calculate_required_OF_DGA_lost = "fn_fathers_and_trig";
			double const mu_OF_SH_CB_TUA2 = 0.2;
			std::string const calculate_required_OF_SH_GEV_or_LGR = "fn_fathers_and_trig";
			std::string const calculate_required_OF_LBB = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_TUB2 = false;
			double const mu_OF_BAT_B1 = 0.001;
			bool const force_relevant_events_OF_loss_of_supply_by_TA = false;
			double const mu_OF_SH_CB_LGD1 = 0.2;
			double const lambda_OF_BAT_A1 = 2;
			std::string const calculate_required_OF_loss_of_supply_by_LGR = "fn_fathers_and_trig";
			double const mu_OF_RC_CB_LHB2 = 0.2;
			double const lambda_OF_SH_CB_TUB1 = 5e-07;
			std::string const when_to_check_OF_demand_TAC = "not_req_to_req";
			double const mu_OF_RC_CB_LGF2 = 0.2;
			bool const force_relevant_events_OF_RO_CB_LHA1_ = false;
			std::string const calculate_required_OF_DGA_long = "fn_fathers_and_trig";
			std::string const trigger_kind_OF_t_7 = "fn_fathers_and_trig";
			bool const Without_CCFlines_OF___ARBRE__EIRM = false;
			bool const force_relevant_events_OF_LBAline1_lost = false;
			bool const failF_FROZEN_OF_TAC = false;
			std::string const calculate_required_OF_CB_LGD2_unable = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_SH_CB_TUB1 = false;
			std::string const calculate_required_OF_SH_CB_LHB1 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_demand_TAC = false;
			std::string const calculate_required_OF_TA_lost = "always_true";
			bool const force_relevant_events_OF_LGA = false;
			std::string const trigger_kind_OF_t_2_1 = "fn_fathers_and_trig";
			double const mu_OF_SH_CB_RDB2 = 0.2;
			bool const force_relevant_events_OF_BATTERY_A_lost = false;
			std::string const calculate_required_OF_SH_CB_LHA1 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_LBBline2_lost = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_CB_LHA3_unable = false;
			bool const force_relevant_events_OF_LGB = false;
			bool const failF_FROZEN_OF_GEV = false;
			bool const force_relevant_events_OF_SH_CB_LGF2 = false;
			bool const force_relevant_events_OF_TP = false;
			double const mu_OF_RC_CB_LHA2 = 0.2;
			double const mu_OF_DGA_long = 0.005;
			std::string const calculate_required_OF_loss_of_supply_by_LGF = "fn_fathers_and_trig";
			std::string const calculate_required_OF_RC_CB_LHA3 = "fn_fathers_and_trig";
			double const lambda_OF_LHA = 2e-07;
			double const lambda_OF_LBB = 5e-07;
			std::string const calculate_required_OF_LGF_not_fed = "fn_fathers_and_trig";
			double const lambda_OF_GEV = 2e-05;
			std::string const calculate_required_OF_SH_CB_RDB1 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_SH_CB_LBB1 = false;
			double const lambda_OF_TP = 5e-06;
			std::string const calculate_required_OF_loss_of_supply_by_TA = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_SH_CB_RDA2 = false;
			bool const Profil1_OF___ARBRE__EIRM = true;
			bool const failI_FROZEN_OF_RO_CB_LHA1 = false;
			bool const force_relevant_events_OF_RC_CB_LGF2_ = false;
			double const mu_OF_SH_CB_LBA1 = 0.2;
			std::string const calculate_required_OF_RO_CB_LHA1_ = "fn_fathers_and_trig";
			bool const failI_FROZEN_OF_OnDemHouse = false;
			std::string const calculate_required_OF_LBAline1_lost = "fn_fathers_and_trig";
			double const lambda_OF_SH_CB_LHB1 = 5e-07;
			bool const force_relevant_events_OF_SH_CB_LGE1 = false;
			bool const failF_FROZEN_OF_DGA_long = false;
			double const mu_OF_CCF_GEV_LGR = 0.005;
			bool const force_relevant_events_OF_InFnHouse = false;
			std::string const calculate_required_OF_demand_TAC = "fn_fathers_and_trig";
			std::string const calculate_required_OF_LGA = "fn_fathers_and_trig";
			double const lambda_OF_TAC = 0.001;
			double const mu_OF_RDA2 = 0.3333333;
			bool const failF_FROZEN_OF_SH_CB_LHB1 = false;
			bool const force_relevant_events_OF_LBA = false;
			std::string const calculate_required_OF_BATTERY_A_lost = "fn_fathers_and_trig";
			double const mu_OF_BAT_B2 = 0.001;
			double const mu_OF_RO_CB_LHB1 = 0.2;
			std::string const step_down_OF_CB_LHB12_unable = "rep_any";
			bool const failF_FROZEN_OF_SH_CB_LHA1 = false;
			std::string const calculate_required_OF_CB_LHA3_unable = "fn_fathers_and_trig";
			std::string const calculate_required_OF_LGB = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_loss_of_supply_by_DGA = false;
			std::string const calculate_required_OF_SH_CB_LGF2 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_TP = "fn_fathers_and_trig";
			double const lambda_OF_LGD = 2e-07;
			double const lambda_OF_BAT_B1 = 2;
			bool const force_relevant_events_OF_DGB_long = false;
			bool const force_relevant_events_OF_TS_not_fed = false;
			double const mu_OF_demand_TAC = 0.005;
			std::string const calculate_required_OF_SH_CB_LBB1 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_CB_LHB12_unable = false;
			std::string const trigger_kind_OF_t_1 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_TS_lost = false;
			bool const failF_FROZEN_OF_SH_CB_RDB1 = false;
			bool const force_relevant_events_OF_BAT_A1 = false;
			std::string const calculate_required_OF_SH_CB_RDA2 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_AND_3 = false;
			std::string const calculate_required_OF_LBA_lost = "always_true";
			std::string const trigger_kind_OF_t_7_1 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_RC_CB_LGF2_ = "fn_fathers_and_trig";
			double const mu_OF_SH_CB_TUB1 = 0.2;
			bool const force_relevant_events_OF_TA_lost = false;
			std::string const calculate_required_OF_SH_CB_LGE1 = "fn_fathers_and_trig";
			std::string const when_to_check_OF_demand_DGA = "not_req_to_req";
			std::string const calculate_required_OF_InFnHouse = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_DGA_short = false;
			std::string const calculate_required_OF_LBA = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_LKE = false;
			bool const failF_FROZEN_OF_LGA = false;
			bool const force_relevant_events_OF_demand_DGA = false;
			bool const force_relevant_events_OF_TUA2 = false;
			double const mu_OF_DGA_short = 0.1;
			double const lambda_OF_LGE = 2e-07;
			double const mu_OF_GEV = 0.2;
			double const lambda_OF_SH_CB_LGF2 = 5e-07;
			bool const failI_FROZEN_OF_demand_DGA = false;
			std::string const calculate_required_OF_SH_CB_RDA1 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_loss_of_supply_by_DGA = "fn_fathers_and_trig";
			double const mu_OF_TUA2 = 0.1;
			bool const failF_FROZEN_OF_LGB = false;
			bool const failF_FROZEN_OF_SH_CB_LGF2 = false;
			double const mu_OF_LHB = 0.02;
			double const lambda_OF_TUB1 = 2e-07;
			bool const failF_FROZEN_OF_TP = false;
			std::string const calculate_required_OF_DGB_long = "fn_fathers_and_trig";
			double const lambda_OF_LGF = 2e-07;
			std::string const calculate_required_OF_TS_not_fed = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_DGB_lost = false;
			std::string const calculate_required_OF_CB_LHB12_unable = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_loss_of_supply_by_DGB = false;
			double const mu_OF_TA = 0.005;
			std::string const calculate_required_OF_TS_lost = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_SH_CB_LBB1 = false;
			std::string const calculate_required_OF_BAT_A1 = "fn_fathers_and_trig";
			double const gamma_OF_RC_CB_LGD2 = 0.0002;
			bool const force_relevant_events_OF_UE_1 = true;
			std::string const calculate_required_OF_AND_3 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_SH_CB_RDA2 = false;
			double const gamma_OF_demand_CCF_DG = 0.0002;
			double const gamma_OF_RC_CB_LHB2 = 0.0002;
			double const gamma_OF_RC_CB_LGF2 = 0.0002;
			double const lambda_OF_LLD = 5e-07;
			std::string const trigger_kind_OF_t_5_1 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_LHB_lost = false;
			double const mu_OF_LLD = 0.02;
			double const lambda_OF_LBA = 5e-07;
			double const lambda_OF_BAT_B2 = 2;
			std::string const calculate_required_OF_DGA_short = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_SH_CB_GEV = false;
			double const mu_OF_DGB_long = 0.005;
			bool const force_relevant_events_OF_SH_CB_LGD2 = false;
			bool const failF_FROZEN_OF_SH_CB_LGE1 = false;
			bool const failF_FROZEN_OF_InFnHouse = false;
			double const mu_OF_LKI = 0.02;
			bool const force_relevant_events_OF_SH_CB_LGA = false;
			std::string const calculate_required_OF_LKE = "fn_fathers_and_trig";
			std::string const calculate_required_OF_demand_DGA = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_LBA = false;
			std::string const calculate_required_OF_TUA2 = "fn_fathers_and_trig";
			double const gamma_OF_RO_CB_LHA1 = 0.0002;
			double const mu_OF_demand_DGB = 0.005;
			double const lambda_OF_TUA1 = 2e-07;
			double const gamma_OF_RO_CB_LHA2 = 0.0002;
			double const mu_OF_SH_CB_LBB2 = 0.2;
			double const mu_OF_RC_CB_LHA3 = 0.2;
			bool const force_relevant_events_OF_BAT_B1 = false;
			double const gamma_OF_RC_CB_LHA2 = 0.0002;
			double const mu_OF_SH_CB_RDB1 = 0.2;
			std::string const calculate_required_OF_DGB_lost = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_DGB_long = false;
			std::string const calculate_required_OF_loss_of_supply_by_DGB = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_SH_CB_TUA1 = false;
			bool const force_relevant_events_OF_LBA_lost = false;
			bool const force_relevant_events_OF_SH_CB_TUB2 = false;
			bool const failF_FROZEN_OF_BAT_A1 = false;
			bool const force_relevant_events_OF_SH_CB_LHA2 = false;
			bool const force_relevant_events_OF_UNIT = false;
			bool const force_relevant_events_OF_LHA = false;
			std::string const when_to_check_OF_RC_CB_LGD2 = "not_req_to_req";
			std::string const step_down_OF_CB_LHA3_unable = "rep_any";
			double const mu_OF_UNIT = 0.1;
			bool const force_relevant_events_OF_CCF_DG = false;
			std::string const calculate_required_OF_LHB_lost = "fn_fathers_and_trig";
			std::string const calculate_required_OF_SH_CB_LGD2 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_SH_CB_GEV = "fn_fathers_and_trig";
			std::string const calculate_required_OF_SH_CB_LGA = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_RC_CB_LGD2 = false;
			bool const failF_FROZEN_OF_DGA_short = false;
			bool const force_relevant_events_OF_RO_CB_LHA2_ = false;
			double const lambda_OF_SH_CB_RDA1 = 1e-06;
			bool const failF_FROZEN_OF_LKE = false;
			double const lambda_OF_RDB1 = 1e-06;
			bool const failI_FROZEN_OF_RC_CB_LGD2 = false;
			bool const force_relevant_events_OF_LBAothers_lost = false;
			bool const failF_FROZEN_OF_TUA2 = false;
			double const lambda_OF_CCF_DG = 5e-05;
			bool const failI_FROZEN_OF_demand_CCF_DG = false;
			double const mu_OF_SH_CB_LGF2 = 0.2;
			double const gamma_OF_RO_CB_LHB1 = 0.0002;
			bool const failI_FROZEN_OF_RC_CB_LHB2 = false;
			std::string const when_to_check_OF_RO_CB_LHA1 = "not_req_to_req";
			std::string const calculate_required_OF_BAT_B1 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_SH_CB_LHB2 = false;
			bool const failI_FROZEN_OF_RC_CB_LGF2 = false;
			double const mu_OF_LBB = 0.02;
			std::string const when_to_check_OF_OnDemHouse = "not_req_to_req";
			bool const force_relevant_events_OF_LHB_not_fed = false;
			bool const force_relevant_events_OF_RC_CB_LHA2_ = false;
			double const mu_OF_SH_CB_LBB1 = 0.2;
			bool const force_relevant_events_OF_RO_CB_LHA1 = false;
			std::string const when_to_check_OF_RO_CB_LHA2 = "not_req_to_req";
			bool const force_relevant_events_OF_OnDemHouse = false;
			std::string const calculate_required_OF_SH_CB_TUB2 = "fn_fathers_and_trig";
			double const mu_OF_SH_CB_RDA2 = 0.2;
			bool const force_relevant_events_OF_LGD = false;
			std::string const calculate_required_OF_SH_CB_LHA2 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_RO_CB_LHA2 = false;
			std::string const calculate_required_OF_UNIT = "fn_fathers_and_trig";
			std::string const calculate_required_OF_LHA = "fn_fathers_and_trig";
			bool const failI_FROZEN_OF_RO_CB_LHA2 = false;
			bool const force_relevant_events_OF_SH_CB_line_GEV = false;
			double const lambda_OF_SH_CB_LGD2 = 5e-07;
			bool const force_relevant_events_OF_BAT_B2 = false;
			std::string const calculate_required_OF_CCF_DG = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_LLA = false;
			double const lambda_OF_SH_CB_LGA = 5e-07;
			bool const failI_FROZEN_OF_RC_CB_LHA2 = false;
			double const mu_OF_BAT_A2 = 0.001;
			double const lambda_OF_SH_CB_LHA1 = 5e-07;
			std::string const calculate_required_OF_RC_CB_LGD2 = "fn_fathers_and_trig";
			double const mu_OF_CCF_DG = 0.0025;
			std::string const calculate_required_OF_RO_CB_LHA2_ = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_SH_CB_GEV = false;
			bool const failF_FROZEN_OF_SH_CB_LGD2 = false;
			bool const force_relevant_events_OF_SH_CB_line_LGR = false;
			bool const failF_FROZEN_OF_SH_CB_LGA = false;
			bool const force_relevant_events_OF_LHA_and_LHB_lost = false;
			std::string const calculate_required_OF_LBAothers_lost = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_SH_CB_RDA1 = false;
			double const lambda_OF_DGA_short = 0.002;
			double const mu_OF_demand_CCF_DG = 0.0025;
			bool const force_relevant_events_OF_RDB1 = false;
			std::string const calculate_required_OF_SH_CB_LHB2 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_SH_CB_TUA1 = false;
			std::string const calculate_required_OF_LHB_not_fed = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_BAT_B1 = false;
			bool const force_relevant_events_OF_loss_of_houseload_operation = false;
			bool const force_relevant_events_OF_RC_CB_LHA3_ = false;
			std::string const calculate_required_OF_RC_CB_LHA2_ = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_LGE = false;
			std::string const calculate_required_OF_RO_CB_LHA1 = "fn_fathers_and_trig";
			double const lambda_OF_LHB = 2e-07;
			std::string const calculate_required_OF_OnDemHouse = "fn_fathers_and_trig";
			double const lambda_OF_SH_CB_LHA2 = 5e-07;
			bool const force_relevant_events_OF_LKI = false;
			std::string const calculate_required_OF_UE_1 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_BATTERY_B_lost = false;
			std::string const calculate_required_OF_LGD = "fn_fathers_and_trig";
			std::string const calculate_required_OF_RO_CB_LHA2 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_RO_CB_LHB1 = false;
			bool const failF_FROZEN_OF_SH_CB_TUB2 = false;
			bool const force_relevant_events_OF_TUB1 = false;
			double const mu_OF_TP = 0.005;
			double const lambda_OF_SH_CB_LBA2 = 1e-06;
			bool const failF_FROZEN_OF_SH_CB_LHA2 = false;
			bool const force_relevant_events_OF_LGF = false;
			bool const failF_FROZEN_OF_UNIT = false;
			std::string const step_down_OF_CB_LHA12_unable = "rep_any";
			bool const failI_FROZEN_OF_RO_CB_LHB1 = false;
			double const mu_OF_LGA = 0.02;
			std::string const calculate_required_OF_SH_CB_line_GEV = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_LHA = false;
			std::string const calculate_required_OF_BAT_B2 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_LGR = false;
			std::string const calculate_required_OF_LLA = "fn_fathers_and_trig";
			double const mu_OF_TUB1 = 0.1;
			bool const force_relevant_events_OF_loss_of_supply_by_DGA_and_TAC = false;
			bool const failF_FROZEN_OF_CCF_DG = false;
			bool const force_relevant_events_OF_loss_of_supply_by_TS1 = false;
			std::string const calculate_required_OF_SH_CB_line_LGR = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_OR_14 = false;
			bool const force_relevant_events_OF_loss_of_supply_by_UNIT = false;
			bool const force_relevant_events_OF_SH_CB_LHA3 = false;
			std::string const calculate_required_OF_LHA_and_LHB_lost = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_CB_LHA12_unable = false;
			bool const force_relevant_events_OF_SH_CB_LGB = false;
			double const lambda_OF_SH_CB_LHB2 = 5e-07;
			std::string const calculate_required_OF_RDB1 = "fn_fathers_and_trig";
		
            /* ---------- DECLARATION OF OCCURRENCE RULES FIRING FLAGS ------------ */
            bool FIRE_xx10_OF_BAT_A1;
            bool FIRE_xx10_OF_BAT_A2;
            bool FIRE_xx10_OF_BAT_B1;
            bool FIRE_xx10_OF_BAT_B2;
            bool FIRE_xx10_OF_CCF_DG;
            bool FIRE_xx10_OF_CCF_GEV_LGR;
            bool FIRE_xx10_OF_DGA_long;
            bool FIRE_xx10_OF_DGA_short;
            bool FIRE_xx10_OF_DGB_long;
            bool FIRE_xx10_OF_DGB_short;
            bool FIRE_xx10_OF_GEV;
            bool FIRE_xx10_OF_GRID;
            bool FIRE_xx10_OF_InFnHouse;
            bool FIRE_xx10_OF_LBA;
            bool FIRE_xx10_OF_LBB;
            bool FIRE_xx10_OF_LGA;
            bool FIRE_xx10_OF_LGB;
            bool FIRE_xx10_OF_LGD;
            bool FIRE_xx10_OF_LGE;
            bool FIRE_xx10_OF_LGF;
            bool FIRE_xx10_OF_LGR;
            bool FIRE_xx10_OF_LHA;
            bool FIRE_xx10_OF_LHB;
            bool FIRE_xx10_OF_LKE;
            bool FIRE_xx10_OF_LKI;
            bool FIRE_xx10_OF_LLA;
            bool FIRE_xx10_OF_LLD;
            bool FIRE_xx23_OF_OnDemHouse_INS_27;
            bool FIRE_xx23_OF_OnDemHouse_INS_28;
            bool FIRE_xx23_OF_RC_CB_LGD2_INS_29;
            bool FIRE_xx23_OF_RC_CB_LGD2_INS_30;
            bool FIRE_xx23_OF_RC_CB_LGF2_INS_31;
            bool FIRE_xx23_OF_RC_CB_LGF2_INS_32;
            bool FIRE_xx23_OF_RC_CB_LHA2_INS_33;
            bool FIRE_xx23_OF_RC_CB_LHA2_INS_34;
            bool FIRE_xx23_OF_RC_CB_LHA3_INS_35;
            bool FIRE_xx23_OF_RC_CB_LHA3_INS_36;
            bool FIRE_xx23_OF_RC_CB_LHB2_INS_37;
            bool FIRE_xx23_OF_RC_CB_LHB2_INS_38;
            bool FIRE_xx10_OF_RDA1;
            bool FIRE_xx10_OF_RDA2;
            bool FIRE_xx10_OF_RDB1;
            bool FIRE_xx10_OF_RDB2;
            bool FIRE_xx23_OF_RO_CB_LHA1_INS_43;
            bool FIRE_xx23_OF_RO_CB_LHA1_INS_44;
            bool FIRE_xx23_OF_RO_CB_LHA2_INS_45;
            bool FIRE_xx23_OF_RO_CB_LHA2_INS_46;
            bool FIRE_xx23_OF_RO_CB_LHB1_INS_47;
            bool FIRE_xx23_OF_RO_CB_LHB1_INS_48;
            bool FIRE_xx10_OF_SH_CB_GEV;
            bool FIRE_xx10_OF_SH_CB_LBA1;
            bool FIRE_xx10_OF_SH_CB_LBA2;
            bool FIRE_xx10_OF_SH_CB_LBB1;
            bool FIRE_xx10_OF_SH_CB_LBB2;
            bool FIRE_xx10_OF_SH_CB_LGA;
            bool FIRE_xx10_OF_SH_CB_LGB;
            bool FIRE_xx10_OF_SH_CB_LGD1;
            bool FIRE_xx10_OF_SH_CB_LGD2;
            bool FIRE_xx10_OF_SH_CB_LGE1;
            bool FIRE_xx10_OF_SH_CB_LGF1;
            bool FIRE_xx10_OF_SH_CB_LGF2;
            bool FIRE_xx10_OF_SH_CB_LHA1;
            bool FIRE_xx10_OF_SH_CB_LHA2;
            bool FIRE_xx10_OF_SH_CB_LHA3;
            bool FIRE_xx10_OF_SH_CB_LHB1;
            bool FIRE_xx10_OF_SH_CB_LHB2;
            bool FIRE_xx10_OF_SH_CB_RDA1;
            bool FIRE_xx10_OF_SH_CB_RDA2;
            bool FIRE_xx10_OF_SH_CB_RDB1;
            bool FIRE_xx10_OF_SH_CB_RDB2;
            bool FIRE_xx10_OF_SH_CB_TUA1;
            bool FIRE_xx10_OF_SH_CB_TUA2;
            bool FIRE_xx10_OF_SH_CB_TUB1;
            bool FIRE_xx10_OF_SH_CB_TUB2;
            bool FIRE_xx10_OF_SH_CB_line_GEV;
            bool FIRE_xx10_OF_SH_CB_line_LGR;
            bool FIRE_xx10_OF_SUBSTATION;
            bool FIRE_xx10_OF_TA;
            bool FIRE_xx10_OF_TAC;
            bool FIRE_xx10_OF_TP;
            bool FIRE_xx10_OF_TS;
            bool FIRE_xx10_OF_TUA1;
            bool FIRE_xx10_OF_TUA2;
            bool FIRE_xx10_OF_TUB1;
            bool FIRE_xx10_OF_TUB2;
            bool FIRE_xx10_OF_UNIT;
            bool FIRE_xx23_OF_demand_CCF_DG_INS_86;
            bool FIRE_xx23_OF_demand_CCF_DG_INS_87;
            bool FIRE_xx23_OF_demand_DGA_INS_88;
            bool FIRE_xx23_OF_demand_DGA_INS_89;
            bool FIRE_xx23_OF_demand_DGB_INS_90;
            bool FIRE_xx23_OF_demand_DGB_INS_91;
            bool FIRE_xx23_OF_demand_TAC_INS_92;
            bool FIRE_xx23_OF_demand_TAC_INS_93;

            int required_OF_AND_3 = 0 ;
            int already_S_OF_AND_3 = 1 ;
            int S_OF_AND_3 = 2 ;
            int relevant_evt_OF_AND_3 = 3 ;
            int required_OF_BATTERY_A_lost = 4 ;
            int already_S_OF_BATTERY_A_lost = 5 ;
            int S_OF_BATTERY_A_lost = 6 ;
            int relevant_evt_OF_BATTERY_A_lost = 7 ;
            int required_OF_BATTERY_B_lost = 8 ;
            int already_S_OF_BATTERY_B_lost = 9 ;
            int S_OF_BATTERY_B_lost = 10 ;
            int relevant_evt_OF_BATTERY_B_lost = 11 ;
            int required_OF_BAT_A1 = 12 ;
            int already_S_OF_BAT_A1 = 13 ;
            int S_OF_BAT_A1 = 14 ;
            int relevant_evt_OF_BAT_A1 = 15 ;
            int failF_OF_BAT_A1 = 16 ;
            int required_OF_BAT_A2 = 17 ;
            int already_S_OF_BAT_A2 = 18 ;
            int S_OF_BAT_A2 = 19 ;
            int relevant_evt_OF_BAT_A2 = 20 ;
            int failF_OF_BAT_A2 = 21 ;
            int required_OF_BAT_B1 = 22 ;
            int already_S_OF_BAT_B1 = 23 ;
            int S_OF_BAT_B1 = 24 ;
            int relevant_evt_OF_BAT_B1 = 25 ;
            int failF_OF_BAT_B1 = 26 ;
            int required_OF_BAT_B2 = 27 ;
            int already_S_OF_BAT_B2 = 28 ;
            int S_OF_BAT_B2 = 29 ;
            int relevant_evt_OF_BAT_B2 = 30 ;
            int failF_OF_BAT_B2 = 31 ;
            int required_OF_CB_LGD2_unable = 32 ;
            int already_S_OF_CB_LGD2_unable = 33 ;
            int S_OF_CB_LGD2_unable = 34 ;
            int relevant_evt_OF_CB_LGD2_unable = 35 ;
            int required_OF_CB_LGF2_unable = 36 ;
            int already_S_OF_CB_LGF2_unable = 37 ;
            int S_OF_CB_LGF2_unable = 38 ;
            int relevant_evt_OF_CB_LGF2_unable = 39 ;
            int required_OF_CB_LHA12_unable = 40 ;
            int already_S_OF_CB_LHA12_unable = 41 ;
            int S_OF_CB_LHA12_unable = 42 ;
            int relevant_evt_OF_CB_LHA12_unable = 43 ;
            int required_OF_CB_LHA3_unable = 44 ;
            int already_S_OF_CB_LHA3_unable = 45 ;
            int S_OF_CB_LHA3_unable = 46 ;
            int relevant_evt_OF_CB_LHA3_unable = 47 ;
            int required_OF_CB_LHB12_unable = 48 ;
            int already_S_OF_CB_LHB12_unable = 49 ;
            int S_OF_CB_LHB12_unable = 50 ;
            int relevant_evt_OF_CB_LHB12_unable = 51 ;
            int required_OF_CCF_DG = 52 ;
            int already_S_OF_CCF_DG = 53 ;
            int S_OF_CCF_DG = 54 ;
            int relevant_evt_OF_CCF_DG = 55 ;
            int failF_OF_CCF_DG = 56 ;
            int required_OF_CCF_GEV_LGR = 57 ;
            int already_S_OF_CCF_GEV_LGR = 58 ;
            int S_OF_CCF_GEV_LGR = 59 ;
            int relevant_evt_OF_CCF_GEV_LGR = 60 ;
            int failF_OF_CCF_GEV_LGR = 61 ;
            int required_OF_DGA_long = 62 ;
            int already_S_OF_DGA_long = 63 ;
            int S_OF_DGA_long = 64 ;
            int relevant_evt_OF_DGA_long = 65 ;
            int failF_OF_DGA_long = 66 ;
            int required_OF_DGA_lost = 67 ;
            int already_S_OF_DGA_lost = 68 ;
            int S_OF_DGA_lost = 69 ;
            int relevant_evt_OF_DGA_lost = 70 ;
            int required_OF_DGA_short = 71 ;
            int already_S_OF_DGA_short = 72 ;
            int S_OF_DGA_short = 73 ;
            int relevant_evt_OF_DGA_short = 74 ;
            int failF_OF_DGA_short = 75 ;
            int required_OF_DGB_long = 76 ;
            int already_S_OF_DGB_long = 77 ;
            int S_OF_DGB_long = 78 ;
            int relevant_evt_OF_DGB_long = 79 ;
            int failF_OF_DGB_long = 80 ;
            int required_OF_DGB_lost = 81 ;
            int already_S_OF_DGB_lost = 82 ;
            int S_OF_DGB_lost = 83 ;
            int relevant_evt_OF_DGB_lost = 84 ;
            int required_OF_DGB_short = 85 ;
            int already_S_OF_DGB_short = 86 ;
            int S_OF_DGB_short = 87 ;
            int relevant_evt_OF_DGB_short = 88 ;
            int failF_OF_DGB_short = 89 ;
            int required_OF_GEV = 90 ;
            int already_S_OF_GEV = 91 ;
            int S_OF_GEV = 92 ;
            int relevant_evt_OF_GEV = 93 ;
            int failF_OF_GEV = 94 ;
            int required_OF_GRID = 95 ;
            int already_S_OF_GRID = 96 ;
            int S_OF_GRID = 97 ;
            int relevant_evt_OF_GRID = 98 ;
            int failF_OF_GRID = 99 ;
            int required_OF_InFnHouse = 100 ;
            int already_S_OF_InFnHouse = 101 ;
            int S_OF_InFnHouse = 102 ;
            int relevant_evt_OF_InFnHouse = 103 ;
            int failF_OF_InFnHouse = 104 ;
            int required_OF_LBA = 105 ;
            int already_S_OF_LBA = 106 ;
            int S_OF_LBA = 107 ;
            int relevant_evt_OF_LBA = 108 ;
            int failF_OF_LBA = 109 ;
            int required_OF_LBA_lost = 110 ;
            int already_S_OF_LBA_lost = 111 ;
            int S_OF_LBA_lost = 112 ;
            int relevant_evt_OF_LBA_lost = 113 ;
            int required_OF_LBA_not_fed = 114 ;
            int already_S_OF_LBA_not_fed = 115 ;
            int S_OF_LBA_not_fed = 116 ;
            int relevant_evt_OF_LBA_not_fed = 117 ;
            int required_OF_LBAline1_lost = 118 ;
            int already_S_OF_LBAline1_lost = 119 ;
            int S_OF_LBAline1_lost = 120 ;
            int relevant_evt_OF_LBAline1_lost = 121 ;
            int required_OF_LBAline2_lost = 122 ;
            int already_S_OF_LBAline2_lost = 123 ;
            int S_OF_LBAline2_lost = 124 ;
            int relevant_evt_OF_LBAline2_lost = 125 ;
            int required_OF_LBAothers_lost = 126 ;
            int already_S_OF_LBAothers_lost = 127 ;
            int S_OF_LBAothers_lost = 128 ;
            int relevant_evt_OF_LBAothers_lost = 129 ;
            int required_OF_LBB = 130 ;
            int already_S_OF_LBB = 131 ;
            int S_OF_LBB = 132 ;
            int relevant_evt_OF_LBB = 133 ;
            int failF_OF_LBB = 134 ;
            int required_OF_LBB_lost = 135 ;
            int already_S_OF_LBB_lost = 136 ;
            int S_OF_LBB_lost = 137 ;
            int relevant_evt_OF_LBB_lost = 138 ;
            int required_OF_LBB_not_fed = 139 ;
            int already_S_OF_LBB_not_fed = 140 ;
            int S_OF_LBB_not_fed = 141 ;
            int relevant_evt_OF_LBB_not_fed = 142 ;
            int required_OF_LBBline1_lost = 143 ;
            int already_S_OF_LBBline1_lost = 144 ;
            int S_OF_LBBline1_lost = 145 ;
            int relevant_evt_OF_LBBline1_lost = 146 ;
            int required_OF_LBBline2_lost = 147 ;
            int already_S_OF_LBBline2_lost = 148 ;
            int S_OF_LBBline2_lost = 149 ;
            int relevant_evt_OF_LBBline2_lost = 150 ;
            int required_OF_LGA = 151 ;
            int already_S_OF_LGA = 152 ;
            int S_OF_LGA = 153 ;
            int relevant_evt_OF_LGA = 154 ;
            int failF_OF_LGA = 155 ;
            int required_OF_LGB = 156 ;
            int already_S_OF_LGB = 157 ;
            int S_OF_LGB = 158 ;
            int relevant_evt_OF_LGB = 159 ;
            int failF_OF_LGB = 160 ;
            int required_OF_LGD = 161 ;
            int already_S_OF_LGD = 162 ;
            int S_OF_LGD = 163 ;
            int relevant_evt_OF_LGD = 164 ;
            int failF_OF_LGD = 165 ;
            int required_OF_LGD_not_fed = 166 ;
            int already_S_OF_LGD_not_fed = 167 ;
            int S_OF_LGD_not_fed = 168 ;
            int relevant_evt_OF_LGD_not_fed = 169 ;
            int required_OF_LGE = 170 ;
            int already_S_OF_LGE = 171 ;
            int S_OF_LGE = 172 ;
            int relevant_evt_OF_LGE = 173 ;
            int failF_OF_LGE = 174 ;
            int required_OF_LGF = 175 ;
            int already_S_OF_LGF = 176 ;
            int S_OF_LGF = 177 ;
            int relevant_evt_OF_LGF = 178 ;
            int failF_OF_LGF = 179 ;
            int required_OF_LGF_not_fed = 180 ;
            int already_S_OF_LGF_not_fed = 181 ;
            int S_OF_LGF_not_fed = 182 ;
            int relevant_evt_OF_LGF_not_fed = 183 ;
            int required_OF_LGR = 184 ;
            int already_S_OF_LGR = 185 ;
            int S_OF_LGR = 186 ;
            int relevant_evt_OF_LGR = 187 ;
            int failF_OF_LGR = 188 ;
            int required_OF_LHA = 189 ;
            int already_S_OF_LHA = 190 ;
            int S_OF_LHA = 191 ;
            int relevant_evt_OF_LHA = 192 ;
            int failF_OF_LHA = 193 ;
            int required_OF_LHA_and_LHB_lost = 194 ;
            int already_S_OF_LHA_and_LHB_lost = 195 ;
            int S_OF_LHA_and_LHB_lost = 196 ;
            int relevant_evt_OF_LHA_and_LHB_lost = 197 ;
            int required_OF_LHA_lost = 198 ;
            int already_S_OF_LHA_lost = 199 ;
            int S_OF_LHA_lost = 200 ;
            int relevant_evt_OF_LHA_lost = 201 ;
            int required_OF_LHA_not_fed = 202 ;
            int already_S_OF_LHA_not_fed = 203 ;
            int S_OF_LHA_not_fed = 204 ;
            int relevant_evt_OF_LHA_not_fed = 205 ;
            int required_OF_LHB = 206 ;
            int already_S_OF_LHB = 207 ;
            int S_OF_LHB = 208 ;
            int relevant_evt_OF_LHB = 209 ;
            int failF_OF_LHB = 210 ;
            int required_OF_LHB_lost = 211 ;
            int already_S_OF_LHB_lost = 212 ;
            int S_OF_LHB_lost = 213 ;
            int relevant_evt_OF_LHB_lost = 214 ;
            int required_OF_LHB_not_fed = 215 ;
            int already_S_OF_LHB_not_fed = 216 ;
            int S_OF_LHB_not_fed = 217 ;
            int relevant_evt_OF_LHB_not_fed = 218 ;
            int required_OF_LKE = 219 ;
            int already_S_OF_LKE = 220 ;
            int S_OF_LKE = 221 ;
            int relevant_evt_OF_LKE = 222 ;
            int failF_OF_LKE = 223 ;
            int required_OF_LKI = 224 ;
            int already_S_OF_LKI = 225 ;
            int S_OF_LKI = 226 ;
            int relevant_evt_OF_LKI = 227 ;
            int failF_OF_LKI = 228 ;
            int required_OF_LLA = 229 ;
            int already_S_OF_LLA = 230 ;
            int S_OF_LLA = 231 ;
            int relevant_evt_OF_LLA = 232 ;
            int failF_OF_LLA = 233 ;
            int required_OF_LLD = 234 ;
            int already_S_OF_LLD = 235 ;
            int S_OF_LLD = 236 ;
            int relevant_evt_OF_LLD = 237 ;
            int failF_OF_LLD = 238 ;
            int required_OF_OR_14 = 239 ;
            int already_S_OF_OR_14 = 240 ;
            int S_OF_OR_14 = 241 ;
            int relevant_evt_OF_OR_14 = 242 ;
            int required_OF_OnDemHouse = 243 ;
            int already_S_OF_OnDemHouse = 244 ;
            int S_OF_OnDemHouse = 245 ;
            int relevant_evt_OF_OnDemHouse = 246 ;
            int failI_OF_OnDemHouse = 247 ;
            int to_be_fired_OF_OnDemHouse = 248 ;
            int already_standby_OF_OnDemHouse = 249 ;
            int already_required_OF_OnDemHouse = 250 ;
            int required_OF_RC_CB_LGD2 = 251 ;
            int already_S_OF_RC_CB_LGD2 = 252 ;
            int S_OF_RC_CB_LGD2 = 253 ;
            int relevant_evt_OF_RC_CB_LGD2 = 254 ;
            int failI_OF_RC_CB_LGD2 = 255 ;
            int to_be_fired_OF_RC_CB_LGD2 = 256 ;
            int already_standby_OF_RC_CB_LGD2 = 257 ;
            int already_required_OF_RC_CB_LGD2 = 258 ;
            int required_OF_RC_CB_LGD2_ = 259 ;
            int already_S_OF_RC_CB_LGD2_ = 260 ;
            int S_OF_RC_CB_LGD2_ = 261 ;
            int relevant_evt_OF_RC_CB_LGD2_ = 262 ;
            int required_OF_RC_CB_LGF2 = 263 ;
            int already_S_OF_RC_CB_LGF2 = 264 ;
            int S_OF_RC_CB_LGF2 = 265 ;
            int relevant_evt_OF_RC_CB_LGF2 = 266 ;
            int failI_OF_RC_CB_LGF2 = 267 ;
            int to_be_fired_OF_RC_CB_LGF2 = 268 ;
            int already_standby_OF_RC_CB_LGF2 = 269 ;
            int already_required_OF_RC_CB_LGF2 = 270 ;
            int required_OF_RC_CB_LGF2_ = 271 ;
            int already_S_OF_RC_CB_LGF2_ = 272 ;
            int S_OF_RC_CB_LGF2_ = 273 ;
            int relevant_evt_OF_RC_CB_LGF2_ = 274 ;
            int required_OF_RC_CB_LHA2 = 275 ;
            int already_S_OF_RC_CB_LHA2 = 276 ;
            int S_OF_RC_CB_LHA2 = 277 ;
            int relevant_evt_OF_RC_CB_LHA2 = 278 ;
            int failI_OF_RC_CB_LHA2 = 279 ;
            int to_be_fired_OF_RC_CB_LHA2 = 280 ;
            int already_standby_OF_RC_CB_LHA2 = 281 ;
            int already_required_OF_RC_CB_LHA2 = 282 ;
            int required_OF_RC_CB_LHA2_ = 283 ;
            int already_S_OF_RC_CB_LHA2_ = 284 ;
            int S_OF_RC_CB_LHA2_ = 285 ;
            int relevant_evt_OF_RC_CB_LHA2_ = 286 ;
            int required_OF_RC_CB_LHA3 = 287 ;
            int already_S_OF_RC_CB_LHA3 = 288 ;
            int S_OF_RC_CB_LHA3 = 289 ;
            int relevant_evt_OF_RC_CB_LHA3 = 290 ;
            int failI_OF_RC_CB_LHA3 = 291 ;
            int to_be_fired_OF_RC_CB_LHA3 = 292 ;
            int already_standby_OF_RC_CB_LHA3 = 293 ;
            int already_required_OF_RC_CB_LHA3 = 294 ;
            int required_OF_RC_CB_LHA3_ = 295 ;
            int already_S_OF_RC_CB_LHA3_ = 296 ;
            int S_OF_RC_CB_LHA3_ = 297 ;
            int relevant_evt_OF_RC_CB_LHA3_ = 298 ;
            int required_OF_RC_CB_LHB2 = 299 ;
            int already_S_OF_RC_CB_LHB2 = 300 ;
            int S_OF_RC_CB_LHB2 = 301 ;
            int relevant_evt_OF_RC_CB_LHB2 = 302 ;
            int failI_OF_RC_CB_LHB2 = 303 ;
            int to_be_fired_OF_RC_CB_LHB2 = 304 ;
            int already_standby_OF_RC_CB_LHB2 = 305 ;
            int already_required_OF_RC_CB_LHB2 = 306 ;
            int required_OF_RC_CB_LHB2_ = 307 ;
            int already_S_OF_RC_CB_LHB2_ = 308 ;
            int S_OF_RC_CB_LHB2_ = 309 ;
            int relevant_evt_OF_RC_CB_LHB2_ = 310 ;
            int required_OF_RDA1 = 311 ;
            int already_S_OF_RDA1 = 312 ;
            int S_OF_RDA1 = 313 ;
            int relevant_evt_OF_RDA1 = 314 ;
            int failF_OF_RDA1 = 315 ;
            int required_OF_RDA2 = 316 ;
            int already_S_OF_RDA2 = 317 ;
            int S_OF_RDA2 = 318 ;
            int relevant_evt_OF_RDA2 = 319 ;
            int failF_OF_RDA2 = 320 ;
            int required_OF_RDB1 = 321 ;
            int already_S_OF_RDB1 = 322 ;
            int S_OF_RDB1 = 323 ;
            int relevant_evt_OF_RDB1 = 324 ;
            int failF_OF_RDB1 = 325 ;
            int required_OF_RDB2 = 326 ;
            int already_S_OF_RDB2 = 327 ;
            int S_OF_RDB2 = 328 ;
            int relevant_evt_OF_RDB2 = 329 ;
            int failF_OF_RDB2 = 330 ;
            int required_OF_RO_CB_LHA1 = 331 ;
            int already_S_OF_RO_CB_LHA1 = 332 ;
            int S_OF_RO_CB_LHA1 = 333 ;
            int relevant_evt_OF_RO_CB_LHA1 = 334 ;
            int failI_OF_RO_CB_LHA1 = 335 ;
            int to_be_fired_OF_RO_CB_LHA1 = 336 ;
            int already_standby_OF_RO_CB_LHA1 = 337 ;
            int already_required_OF_RO_CB_LHA1 = 338 ;
            int required_OF_RO_CB_LHA1_ = 339 ;
            int already_S_OF_RO_CB_LHA1_ = 340 ;
            int S_OF_RO_CB_LHA1_ = 341 ;
            int relevant_evt_OF_RO_CB_LHA1_ = 342 ;
            int required_OF_RO_CB_LHA2 = 343 ;
            int already_S_OF_RO_CB_LHA2 = 344 ;
            int S_OF_RO_CB_LHA2 = 345 ;
            int relevant_evt_OF_RO_CB_LHA2 = 346 ;
            int failI_OF_RO_CB_LHA2 = 347 ;
            int to_be_fired_OF_RO_CB_LHA2 = 348 ;
            int already_standby_OF_RO_CB_LHA2 = 349 ;
            int already_required_OF_RO_CB_LHA2 = 350 ;
            int required_OF_RO_CB_LHA2_ = 351 ;
            int already_S_OF_RO_CB_LHA2_ = 352 ;
            int S_OF_RO_CB_LHA2_ = 353 ;
            int relevant_evt_OF_RO_CB_LHA2_ = 354 ;
            int required_OF_RO_CB_LHB1 = 355 ;
            int already_S_OF_RO_CB_LHB1 = 356 ;
            int S_OF_RO_CB_LHB1 = 357 ;
            int relevant_evt_OF_RO_CB_LHB1 = 358 ;
            int failI_OF_RO_CB_LHB1 = 359 ;
            int to_be_fired_OF_RO_CB_LHB1 = 360 ;
            int already_standby_OF_RO_CB_LHB1 = 361 ;
            int already_required_OF_RO_CB_LHB1 = 362 ;
            int required_OF_RO_CB_LHB1_ = 363 ;
            int already_S_OF_RO_CB_LHB1_ = 364 ;
            int S_OF_RO_CB_LHB1_ = 365 ;
            int relevant_evt_OF_RO_CB_LHB1_ = 366 ;
            int required_OF_SH_CB_GEV = 367 ;
            int already_S_OF_SH_CB_GEV = 368 ;
            int S_OF_SH_CB_GEV = 369 ;
            int relevant_evt_OF_SH_CB_GEV = 370 ;
            int failF_OF_SH_CB_GEV = 371 ;
            int required_OF_SH_CB_LBA1 = 372 ;
            int already_S_OF_SH_CB_LBA1 = 373 ;
            int S_OF_SH_CB_LBA1 = 374 ;
            int relevant_evt_OF_SH_CB_LBA1 = 375 ;
            int failF_OF_SH_CB_LBA1 = 376 ;
            int required_OF_SH_CB_LBA2 = 377 ;
            int already_S_OF_SH_CB_LBA2 = 378 ;
            int S_OF_SH_CB_LBA2 = 379 ;
            int relevant_evt_OF_SH_CB_LBA2 = 380 ;
            int failF_OF_SH_CB_LBA2 = 381 ;
            int required_OF_SH_CB_LBB1 = 382 ;
            int already_S_OF_SH_CB_LBB1 = 383 ;
            int S_OF_SH_CB_LBB1 = 384 ;
            int relevant_evt_OF_SH_CB_LBB1 = 385 ;
            int failF_OF_SH_CB_LBB1 = 386 ;
            int required_OF_SH_CB_LBB2 = 387 ;
            int already_S_OF_SH_CB_LBB2 = 388 ;
            int S_OF_SH_CB_LBB2 = 389 ;
            int relevant_evt_OF_SH_CB_LBB2 = 390 ;
            int failF_OF_SH_CB_LBB2 = 391 ;
            int required_OF_SH_CB_LGA = 392 ;
            int already_S_OF_SH_CB_LGA = 393 ;
            int S_OF_SH_CB_LGA = 394 ;
            int relevant_evt_OF_SH_CB_LGA = 395 ;
            int failF_OF_SH_CB_LGA = 396 ;
            int required_OF_SH_CB_LGB = 397 ;
            int already_S_OF_SH_CB_LGB = 398 ;
            int S_OF_SH_CB_LGB = 399 ;
            int relevant_evt_OF_SH_CB_LGB = 400 ;
            int failF_OF_SH_CB_LGB = 401 ;
            int required_OF_SH_CB_LGD1 = 402 ;
            int already_S_OF_SH_CB_LGD1 = 403 ;
            int S_OF_SH_CB_LGD1 = 404 ;
            int relevant_evt_OF_SH_CB_LGD1 = 405 ;
            int failF_OF_SH_CB_LGD1 = 406 ;
            int required_OF_SH_CB_LGD2 = 407 ;
            int already_S_OF_SH_CB_LGD2 = 408 ;
            int S_OF_SH_CB_LGD2 = 409 ;
            int relevant_evt_OF_SH_CB_LGD2 = 410 ;
            int failF_OF_SH_CB_LGD2 = 411 ;
            int required_OF_SH_CB_LGE1 = 412 ;
            int already_S_OF_SH_CB_LGE1 = 413 ;
            int S_OF_SH_CB_LGE1 = 414 ;
            int relevant_evt_OF_SH_CB_LGE1 = 415 ;
            int failF_OF_SH_CB_LGE1 = 416 ;
            int required_OF_SH_CB_LGF1 = 417 ;
            int already_S_OF_SH_CB_LGF1 = 418 ;
            int S_OF_SH_CB_LGF1 = 419 ;
            int relevant_evt_OF_SH_CB_LGF1 = 420 ;
            int failF_OF_SH_CB_LGF1 = 421 ;
            int required_OF_SH_CB_LGF2 = 422 ;
            int already_S_OF_SH_CB_LGF2 = 423 ;
            int S_OF_SH_CB_LGF2 = 424 ;
            int relevant_evt_OF_SH_CB_LGF2 = 425 ;
            int failF_OF_SH_CB_LGF2 = 426 ;
            int required_OF_SH_CB_LHA1 = 427 ;
            int already_S_OF_SH_CB_LHA1 = 428 ;
            int S_OF_SH_CB_LHA1 = 429 ;
            int relevant_evt_OF_SH_CB_LHA1 = 430 ;
            int failF_OF_SH_CB_LHA1 = 431 ;
            int required_OF_SH_CB_LHA2 = 432 ;
            int already_S_OF_SH_CB_LHA2 = 433 ;
            int S_OF_SH_CB_LHA2 = 434 ;
            int relevant_evt_OF_SH_CB_LHA2 = 435 ;
            int failF_OF_SH_CB_LHA2 = 436 ;
            int required_OF_SH_CB_LHA3 = 437 ;
            int already_S_OF_SH_CB_LHA3 = 438 ;
            int S_OF_SH_CB_LHA3 = 439 ;
            int relevant_evt_OF_SH_CB_LHA3 = 440 ;
            int failF_OF_SH_CB_LHA3 = 441 ;
            int required_OF_SH_CB_LHB1 = 442 ;
            int already_S_OF_SH_CB_LHB1 = 443 ;
            int S_OF_SH_CB_LHB1 = 444 ;
            int relevant_evt_OF_SH_CB_LHB1 = 445 ;
            int failF_OF_SH_CB_LHB1 = 446 ;
            int required_OF_SH_CB_LHB2 = 447 ;
            int already_S_OF_SH_CB_LHB2 = 448 ;
            int S_OF_SH_CB_LHB2 = 449 ;
            int relevant_evt_OF_SH_CB_LHB2 = 450 ;
            int failF_OF_SH_CB_LHB2 = 451 ;
            int required_OF_SH_CB_RDA1 = 452 ;
            int already_S_OF_SH_CB_RDA1 = 453 ;
            int S_OF_SH_CB_RDA1 = 454 ;
            int relevant_evt_OF_SH_CB_RDA1 = 455 ;
            int failF_OF_SH_CB_RDA1 = 456 ;
            int required_OF_SH_CB_RDA2 = 457 ;
            int already_S_OF_SH_CB_RDA2 = 458 ;
            int S_OF_SH_CB_RDA2 = 459 ;
            int relevant_evt_OF_SH_CB_RDA2 = 460 ;
            int failF_OF_SH_CB_RDA2 = 461 ;
            int required_OF_SH_CB_RDB1 = 462 ;
            int already_S_OF_SH_CB_RDB1 = 463 ;
            int S_OF_SH_CB_RDB1 = 464 ;
            int relevant_evt_OF_SH_CB_RDB1 = 465 ;
            int failF_OF_SH_CB_RDB1 = 466 ;
            int required_OF_SH_CB_RDB2 = 467 ;
            int already_S_OF_SH_CB_RDB2 = 468 ;
            int S_OF_SH_CB_RDB2 = 469 ;
            int relevant_evt_OF_SH_CB_RDB2 = 470 ;
            int failF_OF_SH_CB_RDB2 = 471 ;
            int required_OF_SH_CB_TUA1 = 472 ;
            int already_S_OF_SH_CB_TUA1 = 473 ;
            int S_OF_SH_CB_TUA1 = 474 ;
            int relevant_evt_OF_SH_CB_TUA1 = 475 ;
            int failF_OF_SH_CB_TUA1 = 476 ;
            int required_OF_SH_CB_TUA2 = 477 ;
            int already_S_OF_SH_CB_TUA2 = 478 ;
            int S_OF_SH_CB_TUA2 = 479 ;
            int relevant_evt_OF_SH_CB_TUA2 = 480 ;
            int failF_OF_SH_CB_TUA2 = 481 ;
            int required_OF_SH_CB_TUB1 = 482 ;
            int already_S_OF_SH_CB_TUB1 = 483 ;
            int S_OF_SH_CB_TUB1 = 484 ;
            int relevant_evt_OF_SH_CB_TUB1 = 485 ;
            int failF_OF_SH_CB_TUB1 = 486 ;
            int required_OF_SH_CB_TUB2 = 487 ;
            int already_S_OF_SH_CB_TUB2 = 488 ;
            int S_OF_SH_CB_TUB2 = 489 ;
            int relevant_evt_OF_SH_CB_TUB2 = 490 ;
            int failF_OF_SH_CB_TUB2 = 491 ;
            int required_OF_SH_CB_line_GEV = 492 ;
            int already_S_OF_SH_CB_line_GEV = 493 ;
            int S_OF_SH_CB_line_GEV = 494 ;
            int relevant_evt_OF_SH_CB_line_GEV = 495 ;
            int failF_OF_SH_CB_line_GEV = 496 ;
            int required_OF_SH_CB_line_LGR = 497 ;
            int already_S_OF_SH_CB_line_LGR = 498 ;
            int S_OF_SH_CB_line_LGR = 499 ;
            int relevant_evt_OF_SH_CB_line_LGR = 500 ;
            int failF_OF_SH_CB_line_LGR = 501 ;
            int required_OF_SH_GEV_or_LGR = 502 ;
            int already_S_OF_SH_GEV_or_LGR = 503 ;
            int S_OF_SH_GEV_or_LGR = 504 ;
            int relevant_evt_OF_SH_GEV_or_LGR = 505 ;
            int required_OF_SUBSTATION = 506 ;
            int already_S_OF_SUBSTATION = 507 ;
            int S_OF_SUBSTATION = 508 ;
            int relevant_evt_OF_SUBSTATION = 509 ;
            int failF_OF_SUBSTATION = 510 ;
            int required_OF_TA = 511 ;
            int already_S_OF_TA = 512 ;
            int S_OF_TA = 513 ;
            int relevant_evt_OF_TA = 514 ;
            int failF_OF_TA = 515 ;
            int required_OF_TAC = 516 ;
            int already_S_OF_TAC = 517 ;
            int S_OF_TAC = 518 ;
            int relevant_evt_OF_TAC = 519 ;
            int failF_OF_TAC = 520 ;
            int required_OF_TA_lost = 521 ;
            int already_S_OF_TA_lost = 522 ;
            int S_OF_TA_lost = 523 ;
            int relevant_evt_OF_TA_lost = 524 ;
            int required_OF_TP = 525 ;
            int already_S_OF_TP = 526 ;
            int S_OF_TP = 527 ;
            int relevant_evt_OF_TP = 528 ;
            int failF_OF_TP = 529 ;
            int required_OF_TS = 530 ;
            int already_S_OF_TS = 531 ;
            int S_OF_TS = 532 ;
            int relevant_evt_OF_TS = 533 ;
            int failF_OF_TS = 534 ;
            int required_OF_TS_lost = 535 ;
            int already_S_OF_TS_lost = 536 ;
            int S_OF_TS_lost = 537 ;
            int relevant_evt_OF_TS_lost = 538 ;
            int required_OF_TS_not_fed = 539 ;
            int already_S_OF_TS_not_fed = 540 ;
            int S_OF_TS_not_fed = 541 ;
            int relevant_evt_OF_TS_not_fed = 542 ;
            int required_OF_TUA1 = 543 ;
            int already_S_OF_TUA1 = 544 ;
            int S_OF_TUA1 = 545 ;
            int relevant_evt_OF_TUA1 = 546 ;
            int failF_OF_TUA1 = 547 ;
            int required_OF_TUA2 = 548 ;
            int already_S_OF_TUA2 = 549 ;
            int S_OF_TUA2 = 550 ;
            int relevant_evt_OF_TUA2 = 551 ;
            int failF_OF_TUA2 = 552 ;
            int required_OF_TUB1 = 553 ;
            int already_S_OF_TUB1 = 554 ;
            int S_OF_TUB1 = 555 ;
            int relevant_evt_OF_TUB1 = 556 ;
            int failF_OF_TUB1 = 557 ;
            int required_OF_TUB2 = 558 ;
            int already_S_OF_TUB2 = 559 ;
            int S_OF_TUB2 = 560 ;
            int relevant_evt_OF_TUB2 = 561 ;
            int failF_OF_TUB2 = 562 ;
            int required_OF_UE_1 = 563 ;
            int already_S_OF_UE_1 = 564 ;
            int S_OF_UE_1 = 565 ;
            int relevant_evt_OF_UE_1 = 566 ;
            int required_OF_UNIT = 567 ;
            int already_S_OF_UNIT = 568 ;
            int S_OF_UNIT = 569 ;
            int relevant_evt_OF_UNIT = 570 ;
            int failF_OF_UNIT = 571 ;
            int required_OF_demand_CCF_DG = 572 ;
            int already_S_OF_demand_CCF_DG = 573 ;
            int S_OF_demand_CCF_DG = 574 ;
            int relevant_evt_OF_demand_CCF_DG = 575 ;
            int failI_OF_demand_CCF_DG = 576 ;
            int to_be_fired_OF_demand_CCF_DG = 577 ;
            int already_standby_OF_demand_CCF_DG = 578 ;
            int already_required_OF_demand_CCF_DG = 579 ;
            int required_OF_demand_DGA = 580 ;
            int already_S_OF_demand_DGA = 581 ;
            int S_OF_demand_DGA = 582 ;
            int relevant_evt_OF_demand_DGA = 583 ;
            int failI_OF_demand_DGA = 584 ;
            int to_be_fired_OF_demand_DGA = 585 ;
            int already_standby_OF_demand_DGA = 586 ;
            int already_required_OF_demand_DGA = 587 ;
            int required_OF_demand_DGB = 588 ;
            int already_S_OF_demand_DGB = 589 ;
            int S_OF_demand_DGB = 590 ;
            int relevant_evt_OF_demand_DGB = 591 ;
            int failI_OF_demand_DGB = 592 ;
            int to_be_fired_OF_demand_DGB = 593 ;
            int already_standby_OF_demand_DGB = 594 ;
            int already_required_OF_demand_DGB = 595 ;
            int required_OF_demand_TAC = 596 ;
            int already_S_OF_demand_TAC = 597 ;
            int S_OF_demand_TAC = 598 ;
            int relevant_evt_OF_demand_TAC = 599 ;
            int failI_OF_demand_TAC = 600 ;
            int to_be_fired_OF_demand_TAC = 601 ;
            int already_standby_OF_demand_TAC = 602 ;
            int already_required_OF_demand_TAC = 603 ;
            int required_OF_loss_of_houseload_operation = 604 ;
            int already_S_OF_loss_of_houseload_operation = 605 ;
            int S_OF_loss_of_houseload_operation = 606 ;
            int relevant_evt_OF_loss_of_houseload_operation = 607 ;
            int required_OF_loss_of_supply_by_DGA = 608 ;
            int already_S_OF_loss_of_supply_by_DGA = 609 ;
            int S_OF_loss_of_supply_by_DGA = 610 ;
            int relevant_evt_OF_loss_of_supply_by_DGA = 611 ;
            int required_OF_loss_of_supply_by_DGA_and_TAC = 612 ;
            int already_S_OF_loss_of_supply_by_DGA_and_TAC = 613 ;
            int S_OF_loss_of_supply_by_DGA_and_TAC = 614 ;
            int relevant_evt_OF_loss_of_supply_by_DGA_and_TAC = 615 ;
            int required_OF_loss_of_supply_by_DGB = 616 ;
            int already_S_OF_loss_of_supply_by_DGB = 617 ;
            int S_OF_loss_of_supply_by_DGB = 618 ;
            int relevant_evt_OF_loss_of_supply_by_DGB = 619 ;
            int required_OF_loss_of_supply_by_GEV = 620 ;
            int already_S_OF_loss_of_supply_by_GEV = 621 ;
            int S_OF_loss_of_supply_by_GEV = 622 ;
            int relevant_evt_OF_loss_of_supply_by_GEV = 623 ;
            int required_OF_loss_of_supply_by_LGD = 624 ;
            int already_S_OF_loss_of_supply_by_LGD = 625 ;
            int S_OF_loss_of_supply_by_LGD = 626 ;
            int relevant_evt_OF_loss_of_supply_by_LGD = 627 ;
            int required_OF_loss_of_supply_by_LGF = 628 ;
            int already_S_OF_loss_of_supply_by_LGF = 629 ;
            int S_OF_loss_of_supply_by_LGF = 630 ;
            int relevant_evt_OF_loss_of_supply_by_LGF = 631 ;
            int required_OF_loss_of_supply_by_LGR = 632 ;
            int already_S_OF_loss_of_supply_by_LGR = 633 ;
            int S_OF_loss_of_supply_by_LGR = 634 ;
            int relevant_evt_OF_loss_of_supply_by_LGR = 635 ;
            int required_OF_loss_of_supply_by_TA = 636 ;
            int already_S_OF_loss_of_supply_by_TA = 637 ;
            int S_OF_loss_of_supply_by_TA = 638 ;
            int relevant_evt_OF_loss_of_supply_by_TA = 639 ;
            int required_OF_loss_of_supply_by_TA1 = 640 ;
            int already_S_OF_loss_of_supply_by_TA1 = 641 ;
            int S_OF_loss_of_supply_by_TA1 = 642 ;
            int relevant_evt_OF_loss_of_supply_by_TA1 = 643 ;
            int required_OF_loss_of_supply_by_TAC = 644 ;
            int already_S_OF_loss_of_supply_by_TAC = 645 ;
            int S_OF_loss_of_supply_by_TAC = 646 ;
            int relevant_evt_OF_loss_of_supply_by_TAC = 647 ;
            int required_OF_loss_of_supply_by_TS = 648 ;
            int already_S_OF_loss_of_supply_by_TS = 649 ;
            int S_OF_loss_of_supply_by_TS = 650 ;
            int relevant_evt_OF_loss_of_supply_by_TS = 651 ;
            int required_OF_loss_of_supply_by_TS1 = 652 ;
            int already_S_OF_loss_of_supply_by_TS1 = 653 ;
            int S_OF_loss_of_supply_by_TS1 = 654 ;
            int relevant_evt_OF_loss_of_supply_by_TS1 = 655 ;
            int required_OF_loss_of_supply_by_UNIT = 656 ;
            int already_S_OF_loss_of_supply_by_UNIT = 657 ;
            int S_OF_loss_of_supply_by_UNIT = 658 ;
            int relevant_evt_OF_loss_of_supply_by_UNIT = 659 ;




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