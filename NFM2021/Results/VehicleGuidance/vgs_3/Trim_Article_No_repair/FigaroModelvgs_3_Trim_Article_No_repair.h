
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
        class FigaroProgram_vgs_3_Trim_Article_No_repair: public storm::figaro::FigaroProgram{
        public:
        FigaroProgram_vgs_3_Trim_Article_No_repair(): FigaroProgram(//            std::map<std::string, size_t> mFigaroboolelementindex =
                    {  
            	{"required_OF_A0" , 0},
            	{"already_S_OF_A0" , 1},
            	{"S_OF_A0" , 2},
            	{"relevant_evt_OF_A0" , 3},
            	{"required_OF_A1" , 4},
            	{"already_S_OF_A1" , 5},
            	{"S_OF_A1" , 6},
            	{"relevant_evt_OF_A1" , 7},
            	{"failF_OF_A1" , 8},
            	{"required_OF_A10" , 9},
            	{"already_S_OF_A10" , 10},
            	{"S_OF_A10" , 11},
            	{"relevant_evt_OF_A10" , 12},
            	{"failF_OF_A10" , 13},
            	{"required_OF_A100" , 14},
            	{"already_S_OF_A100" , 15},
            	{"S_OF_A100" , 16},
            	{"relevant_evt_OF_A100" , 17},
            	{"failF_OF_A100" , 18},
            	{"required_OF_A101" , 19},
            	{"already_S_OF_A101" , 20},
            	{"S_OF_A101" , 21},
            	{"relevant_evt_OF_A101" , 22},
            	{"required_OF_A103" , 23},
            	{"already_S_OF_A103" , 24},
            	{"S_OF_A103" , 25},
            	{"relevant_evt_OF_A103" , 26},
            	{"required_OF_A11" , 27},
            	{"already_S_OF_A11" , 28},
            	{"S_OF_A11" , 29},
            	{"relevant_evt_OF_A11" , 30},
            	{"required_OF_A13" , 31},
            	{"already_S_OF_A13" , 32},
            	{"S_OF_A13" , 33},
            	{"relevant_evt_OF_A13" , 34},
            	{"failF_OF_A13" , 35},
            	{"required_OF_A14" , 36},
            	{"already_S_OF_A14" , 37},
            	{"S_OF_A14" , 38},
            	{"relevant_evt_OF_A14" , 39},
            	{"required_OF_A16" , 40},
            	{"already_S_OF_A16" , 41},
            	{"S_OF_A16" , 42},
            	{"relevant_evt_OF_A16" , 43},
            	{"failF_OF_A16" , 44},
            	{"required_OF_A17" , 45},
            	{"already_S_OF_A17" , 46},
            	{"S_OF_A17" , 47},
            	{"relevant_evt_OF_A17" , 48},
            	{"required_OF_A19" , 49},
            	{"already_S_OF_A19" , 50},
            	{"S_OF_A19" , 51},
            	{"relevant_evt_OF_A19" , 52},
            	{"failF_OF_A19" , 53},
            	{"required_OF_A2" , 54},
            	{"already_S_OF_A2" , 55},
            	{"S_OF_A2" , 56},
            	{"relevant_evt_OF_A2" , 57},
            	{"required_OF_A20" , 58},
            	{"already_S_OF_A20" , 59},
            	{"S_OF_A20" , 60},
            	{"relevant_evt_OF_A20" , 61},
            	{"required_OF_A22" , 62},
            	{"already_S_OF_A22" , 63},
            	{"S_OF_A22" , 64},
            	{"relevant_evt_OF_A22" , 65},
            	{"failF_OF_A22" , 66},
            	{"required_OF_A23" , 67},
            	{"already_S_OF_A23" , 68},
            	{"S_OF_A23" , 69},
            	{"relevant_evt_OF_A23" , 70},
            	{"required_OF_A25" , 71},
            	{"already_S_OF_A25" , 72},
            	{"S_OF_A25" , 73},
            	{"relevant_evt_OF_A25" , 74},
            	{"failF_OF_A25" , 75},
            	{"required_OF_A26" , 76},
            	{"already_S_OF_A26" , 77},
            	{"S_OF_A26" , 78},
            	{"relevant_evt_OF_A26" , 79},
            	{"required_OF_A28" , 80},
            	{"already_S_OF_A28" , 81},
            	{"S_OF_A28" , 82},
            	{"relevant_evt_OF_A28" , 83},
            	{"failF_OF_A28" , 84},
            	{"required_OF_A29" , 85},
            	{"already_S_OF_A29" , 86},
            	{"S_OF_A29" , 87},
            	{"relevant_evt_OF_A29" , 88},
            	{"failF_OF_A29" , 89},
            	{"required_OF_A30" , 90},
            	{"already_S_OF_A30" , 91},
            	{"S_OF_A30" , 92},
            	{"relevant_evt_OF_A30" , 93},
            	{"required_OF_A32" , 94},
            	{"already_S_OF_A32" , 95},
            	{"S_OF_A32" , 96},
            	{"relevant_evt_OF_A32" , 97},
            	{"failF_OF_A32" , 98},
            	{"required_OF_A33" , 99},
            	{"already_S_OF_A33" , 100},
            	{"S_OF_A33" , 101},
            	{"relevant_evt_OF_A33" , 102},
            	{"failF_OF_A33" , 103},
            	{"required_OF_A34" , 104},
            	{"already_S_OF_A34" , 105},
            	{"S_OF_A34" , 106},
            	{"relevant_evt_OF_A34" , 107},
            	{"required_OF_A36" , 108},
            	{"already_S_OF_A36" , 109},
            	{"S_OF_A36" , 110},
            	{"relevant_evt_OF_A36" , 111},
            	{"required_OF_A37" , 112},
            	{"already_S_OF_A37" , 113},
            	{"S_OF_A37" , 114},
            	{"relevant_evt_OF_A37" , 115},
            	{"required_OF_A38" , 116},
            	{"already_S_OF_A38" , 117},
            	{"S_OF_A38" , 118},
            	{"relevant_evt_OF_A38" , 119},
            	{"required_OF_A39" , 120},
            	{"already_S_OF_A39" , 121},
            	{"S_OF_A39" , 122},
            	{"relevant_evt_OF_A39" , 123},
            	{"required_OF_A4" , 124},
            	{"already_S_OF_A4" , 125},
            	{"S_OF_A4" , 126},
            	{"relevant_evt_OF_A4" , 127},
            	{"failF_OF_A4" , 128},
            	{"required_OF_A40" , 129},
            	{"already_S_OF_A40" , 130},
            	{"S_OF_A40" , 131},
            	{"relevant_evt_OF_A40" , 132},
            	{"required_OF_A41" , 133},
            	{"already_S_OF_A41" , 134},
            	{"S_OF_A41" , 135},
            	{"relevant_evt_OF_A41" , 136},
            	{"required_OF_A42" , 137},
            	{"already_S_OF_A42" , 138},
            	{"S_OF_A42" , 139},
            	{"relevant_evt_OF_A42" , 140},
            	{"required_OF_A43" , 141},
            	{"already_S_OF_A43" , 142},
            	{"S_OF_A43" , 143},
            	{"relevant_evt_OF_A43" , 144},
            	{"required_OF_A44" , 145},
            	{"already_S_OF_A44" , 146},
            	{"S_OF_A44" , 147},
            	{"relevant_evt_OF_A44" , 148},
            	{"required_OF_A45" , 149},
            	{"already_S_OF_A45" , 150},
            	{"S_OF_A45" , 151},
            	{"relevant_evt_OF_A45" , 152},
            	{"required_OF_A46" , 153},
            	{"already_S_OF_A46" , 154},
            	{"S_OF_A46" , 155},
            	{"relevant_evt_OF_A46" , 156},
            	{"required_OF_A47" , 157},
            	{"already_S_OF_A47" , 158},
            	{"S_OF_A47" , 159},
            	{"relevant_evt_OF_A47" , 160},
            	{"required_OF_A48" , 161},
            	{"already_S_OF_A48" , 162},
            	{"S_OF_A48" , 163},
            	{"relevant_evt_OF_A48" , 164},
            	{"required_OF_A49" , 165},
            	{"already_S_OF_A49" , 166},
            	{"S_OF_A49" , 167},
            	{"relevant_evt_OF_A49" , 168},
            	{"required_OF_A5" , 169},
            	{"already_S_OF_A5" , 170},
            	{"S_OF_A5" , 171},
            	{"relevant_evt_OF_A5" , 172},
            	{"required_OF_A50" , 173},
            	{"already_S_OF_A50" , 174},
            	{"S_OF_A50" , 175},
            	{"relevant_evt_OF_A50" , 176},
            	{"required_OF_A51" , 177},
            	{"already_S_OF_A51" , 178},
            	{"S_OF_A51" , 179},
            	{"relevant_evt_OF_A51" , 180},
            	{"required_OF_A52" , 181},
            	{"already_S_OF_A52" , 182},
            	{"S_OF_A52" , 183},
            	{"relevant_evt_OF_A52" , 184},
            	{"required_OF_A53" , 185},
            	{"already_S_OF_A53" , 186},
            	{"S_OF_A53" , 187},
            	{"relevant_evt_OF_A53" , 188},
            	{"required_OF_A54" , 189},
            	{"already_S_OF_A54" , 190},
            	{"S_OF_A54" , 191},
            	{"relevant_evt_OF_A54" , 192},
            	{"required_OF_A55" , 193},
            	{"already_S_OF_A55" , 194},
            	{"S_OF_A55" , 195},
            	{"relevant_evt_OF_A55" , 196},
            	{"required_OF_A56" , 197},
            	{"already_S_OF_A56" , 198},
            	{"S_OF_A56" , 199},
            	{"relevant_evt_OF_A56" , 200},
            	{"failF_OF_A56" , 201},
            	{"required_OF_A57" , 202},
            	{"already_S_OF_A57" , 203},
            	{"S_OF_A57" , 204},
            	{"relevant_evt_OF_A57" , 205},
            	{"required_OF_A58" , 206},
            	{"already_S_OF_A58" , 207},
            	{"S_OF_A58" , 208},
            	{"relevant_evt_OF_A58" , 209},
            	{"required_OF_A59" , 210},
            	{"already_S_OF_A59" , 211},
            	{"S_OF_A59" , 212},
            	{"relevant_evt_OF_A59" , 213},
            	{"required_OF_A60" , 214},
            	{"already_S_OF_A60" , 215},
            	{"S_OF_A60" , 216},
            	{"relevant_evt_OF_A60" , 217},
            	{"failF_OF_A60" , 218},
            	{"required_OF_A61" , 219},
            	{"already_S_OF_A61" , 220},
            	{"S_OF_A61" , 221},
            	{"relevant_evt_OF_A61" , 222},
            	{"failF_OF_A61" , 223},
            	{"required_OF_A62" , 224},
            	{"already_S_OF_A62" , 225},
            	{"S_OF_A62" , 226},
            	{"relevant_evt_OF_A62" , 227},
            	{"failF_OF_A62" , 228},
            	{"required_OF_A63" , 229},
            	{"already_S_OF_A63" , 230},
            	{"S_OF_A63" , 231},
            	{"relevant_evt_OF_A63" , 232},
            	{"required_OF_A65" , 233},
            	{"already_S_OF_A65" , 234},
            	{"S_OF_A65" , 235},
            	{"relevant_evt_OF_A65" , 236},
            	{"failF_OF_A65" , 237},
            	{"required_OF_A66" , 238},
            	{"already_S_OF_A66" , 239},
            	{"S_OF_A66" , 240},
            	{"relevant_evt_OF_A66" , 241},
            	{"failF_OF_A66" , 242},
            	{"required_OF_A67" , 243},
            	{"already_S_OF_A67" , 244},
            	{"S_OF_A67" , 245},
            	{"relevant_evt_OF_A67" , 246},
            	{"failF_OF_A67" , 247},
            	{"required_OF_A68" , 248},
            	{"already_S_OF_A68" , 249},
            	{"S_OF_A68" , 250},
            	{"relevant_evt_OF_A68" , 251},
            	{"required_OF_A7" , 252},
            	{"already_S_OF_A7" , 253},
            	{"S_OF_A7" , 254},
            	{"relevant_evt_OF_A7" , 255},
            	{"failF_OF_A7" , 256},
            	{"required_OF_A70" , 257},
            	{"already_S_OF_A70" , 258},
            	{"S_OF_A70" , 259},
            	{"relevant_evt_OF_A70" , 260},
            	{"required_OF_A71" , 261},
            	{"already_S_OF_A71" , 262},
            	{"S_OF_A71" , 263},
            	{"relevant_evt_OF_A71" , 264},
            	{"failF_OF_A71" , 265},
            	{"required_OF_A72" , 266},
            	{"already_S_OF_A72" , 267},
            	{"S_OF_A72" , 268},
            	{"relevant_evt_OF_A72" , 269},
            	{"failF_OF_A72" , 270},
            	{"required_OF_A73" , 271},
            	{"already_S_OF_A73" , 272},
            	{"S_OF_A73" , 273},
            	{"relevant_evt_OF_A73" , 274},
            	{"failF_OF_A73" , 275},
            	{"required_OF_A74" , 276},
            	{"already_S_OF_A74" , 277},
            	{"S_OF_A74" , 278},
            	{"relevant_evt_OF_A74" , 279},
            	{"required_OF_A76" , 280},
            	{"already_S_OF_A76" , 281},
            	{"S_OF_A76" , 282},
            	{"relevant_evt_OF_A76" , 283},
            	{"failF_OF_A76" , 284},
            	{"required_OF_A77" , 285},
            	{"already_S_OF_A77" , 286},
            	{"S_OF_A77" , 287},
            	{"relevant_evt_OF_A77" , 288},
            	{"failF_OF_A77" , 289},
            	{"required_OF_A78" , 290},
            	{"already_S_OF_A78" , 291},
            	{"S_OF_A78" , 292},
            	{"relevant_evt_OF_A78" , 293},
            	{"failF_OF_A78" , 294},
            	{"required_OF_A79" , 295},
            	{"already_S_OF_A79" , 296},
            	{"S_OF_A79" , 297},
            	{"relevant_evt_OF_A79" , 298},
            	{"required_OF_A8" , 299},
            	{"already_S_OF_A8" , 300},
            	{"S_OF_A8" , 301},
            	{"relevant_evt_OF_A8" , 302},
            	{"required_OF_A81" , 303},
            	{"already_S_OF_A81" , 304},
            	{"S_OF_A81" , 305},
            	{"relevant_evt_OF_A81" , 306},
            	{"required_OF_A82" , 307},
            	{"already_S_OF_A82" , 308},
            	{"S_OF_A82" , 309},
            	{"relevant_evt_OF_A82" , 310},
            	{"failF_OF_A82" , 311},
            	{"required_OF_A83" , 312},
            	{"already_S_OF_A83" , 313},
            	{"S_OF_A83" , 314},
            	{"relevant_evt_OF_A83" , 315},
            	{"failF_OF_A83" , 316},
            	{"required_OF_A84" , 317},
            	{"already_S_OF_A84" , 318},
            	{"S_OF_A84" , 319},
            	{"relevant_evt_OF_A84" , 320},
            	{"failF_OF_A84" , 321},
            	{"required_OF_A85" , 322},
            	{"already_S_OF_A85" , 323},
            	{"S_OF_A85" , 324},
            	{"relevant_evt_OF_A85" , 325},
            	{"required_OF_A87" , 326},
            	{"already_S_OF_A87" , 327},
            	{"S_OF_A87" , 328},
            	{"relevant_evt_OF_A87" , 329},
            	{"failF_OF_A87" , 330},
            	{"required_OF_A88" , 331},
            	{"already_S_OF_A88" , 332},
            	{"S_OF_A88" , 333},
            	{"relevant_evt_OF_A88" , 334},
            	{"failF_OF_A88" , 335},
            	{"required_OF_A89" , 336},
            	{"already_S_OF_A89" , 337},
            	{"S_OF_A89" , 338},
            	{"relevant_evt_OF_A89" , 339},
            	{"failF_OF_A89" , 340},
            	{"required_OF_A90" , 341},
            	{"already_S_OF_A90" , 342},
            	{"S_OF_A90" , 343},
            	{"relevant_evt_OF_A90" , 344},
            	{"required_OF_A92" , 345},
            	{"already_S_OF_A92" , 346},
            	{"S_OF_A92" , 347},
            	{"relevant_evt_OF_A92" , 348},
            	{"required_OF_A93" , 349},
            	{"already_S_OF_A93" , 350},
            	{"S_OF_A93" , 351},
            	{"relevant_evt_OF_A93" , 352},
            	{"failF_OF_A93" , 353},
            	{"required_OF_A94" , 354},
            	{"already_S_OF_A94" , 355},
            	{"S_OF_A94" , 356},
            	{"relevant_evt_OF_A94" , 357},
            	{"failF_OF_A94" , 358},
            	{"required_OF_A95" , 359},
            	{"already_S_OF_A95" , 360},
            	{"S_OF_A95" , 361},
            	{"relevant_evt_OF_A95" , 362},
            	{"failF_OF_A95" , 363},
            	{"required_OF_A96" , 364},
            	{"already_S_OF_A96" , 365},
            	{"S_OF_A96" , 366},
            	{"relevant_evt_OF_A96" , 367},
            	{"required_OF_A98" , 368},
            	{"already_S_OF_A98" , 369},
            	{"S_OF_A98" , 370},
            	{"relevant_evt_OF_A98" , 371},
            	{"failF_OF_A98" , 372},
            	{"required_OF_A99" , 373},
            	{"already_S_OF_A99" , 374},
            	{"S_OF_A99" , 375},
            	{"relevant_evt_OF_A99" , 376},
            	{"failF_OF_A99" , 377},
            	{"required_OF_UE_1" , 378},
            	{"already_S_OF_UE_1" , 379},
            	{"S_OF_UE_1" , 380},
            	{"relevant_evt_OF_UE_1" , 381},
            	{"required_OF_f_A36" , 382},
            	{"already_S_OF_f_A36" , 383},
            	{"S_OF_f_A36" , 384},
            	{"relevant_evt_OF_f_A36" , 385},
            	{"failF_OF_f_A36" , 386},
            	{"required_OF_f_A37" , 387},
            	{"already_S_OF_f_A37" , 388},
            	{"S_OF_f_A37" , 389},
            	{"relevant_evt_OF_f_A37" , 390},
            	{"failF_OF_f_A37" , 391},
            	{"required_OF_f_A38" , 392},
            	{"already_S_OF_f_A38" , 393},
            	{"S_OF_f_A38" , 394},
            	{"relevant_evt_OF_f_A38" , 395},
            	{"failF_OF_f_A38" , 396},
            	{"required_OF_f_A39" , 397},
            	{"already_S_OF_f_A39" , 398},
            	{"S_OF_f_A39" , 399},
            	{"relevant_evt_OF_f_A39" , 400},
            	{"failF_OF_f_A39" , 401},
            	{"required_OF_f_A40" , 402},
            	{"already_S_OF_f_A40" , 403},
            	{"S_OF_f_A40" , 404},
            	{"relevant_evt_OF_f_A40" , 405},
            	{"failF_OF_f_A40" , 406},
            	{"required_OF_f_A42" , 407},
            	{"already_S_OF_f_A42" , 408},
            	{"S_OF_f_A42" , 409},
            	{"relevant_evt_OF_f_A42" , 410},
            	{"failF_OF_f_A42" , 411},
            	{"required_OF_f_A43" , 412},
            	{"already_S_OF_f_A43" , 413},
            	{"S_OF_f_A43" , 414},
            	{"relevant_evt_OF_f_A43" , 415},
            	{"failF_OF_f_A43" , 416},
            	{"required_OF_f_A45" , 417},
            	{"already_S_OF_f_A45" , 418},
            	{"S_OF_f_A45" , 419},
            	{"relevant_evt_OF_f_A45" , 420},
            	{"failF_OF_f_A45" , 421},
            	{"required_OF_f_A46" , 422},
            	{"already_S_OF_f_A46" , 423},
            	{"S_OF_f_A46" , 424},
            	{"relevant_evt_OF_f_A46" , 425},
            	{"failF_OF_f_A46" , 426},
            	{"required_OF_f_A47" , 427},
            	{"already_S_OF_f_A47" , 428},
            	{"S_OF_f_A47" , 429},
            	{"relevant_evt_OF_f_A47" , 430},
            	{"failF_OF_f_A47" , 431},
            	{"required_OF_f_A48" , 432},
            	{"already_S_OF_f_A48" , 433},
            	{"S_OF_f_A48" , 434},
            	{"relevant_evt_OF_f_A48" , 435},
            	{"failF_OF_f_A48" , 436},
            	{"required_OF_f_A49" , 437},
            	{"already_S_OF_f_A49" , 438},
            	{"S_OF_f_A49" , 439},
            	{"relevant_evt_OF_f_A49" , 440},
            	{"failF_OF_f_A49" , 441},
            	{"required_OF_f_A50" , 442},
            	{"already_S_OF_f_A50" , 443},
            	{"S_OF_f_A50" , 444},
            	{"relevant_evt_OF_f_A50" , 445},
            	{"failF_OF_f_A50" , 446},
            	{"required_OF_f_A51" , 447},
            	{"already_S_OF_f_A51" , 448},
            	{"S_OF_f_A51" , 449},
            	{"relevant_evt_OF_f_A51" , 450},
            	{"failF_OF_f_A51" , 451},
            	{"required_OF_f_A52" , 452},
            	{"already_S_OF_f_A52" , 453},
            	{"S_OF_f_A52" , 454},
            	{"relevant_evt_OF_f_A52" , 455},
            	{"failF_OF_f_A52" , 456},
            	{"required_OF_f_A53" , 457},
            	{"already_S_OF_f_A53" , 458},
            	{"S_OF_f_A53" , 459},
            	{"relevant_evt_OF_f_A53" , 460},
            	{"failF_OF_f_A53" , 461},
            	{"required_OF_i_A36" , 462},
            	{"already_S_OF_i_A36" , 463},
            	{"S_OF_i_A36" , 464},
            	{"relevant_evt_OF_i_A36" , 465},
            	{"failI_OF_i_A36" , 466},
            	{"to_be_fired_OF_i_A36" , 467},
            	{"already_standby_OF_i_A36" , 468},
            	{"already_required_OF_i_A36" , 469},
            	{"required_OF_i_A37" , 470},
            	{"already_S_OF_i_A37" , 471},
            	{"S_OF_i_A37" , 472},
            	{"relevant_evt_OF_i_A37" , 473},
            	{"failI_OF_i_A37" , 474},
            	{"to_be_fired_OF_i_A37" , 475},
            	{"already_standby_OF_i_A37" , 476},
            	{"already_required_OF_i_A37" , 477},
            	{"required_OF_i_A38" , 478},
            	{"already_S_OF_i_A38" , 479},
            	{"S_OF_i_A38" , 480},
            	{"relevant_evt_OF_i_A38" , 481},
            	{"failI_OF_i_A38" , 482},
            	{"to_be_fired_OF_i_A38" , 483},
            	{"already_standby_OF_i_A38" , 484},
            	{"already_required_OF_i_A38" , 485},
            	{"required_OF_i_A39" , 486},
            	{"already_S_OF_i_A39" , 487},
            	{"S_OF_i_A39" , 488},
            	{"relevant_evt_OF_i_A39" , 489},
            	{"failI_OF_i_A39" , 490},
            	{"to_be_fired_OF_i_A39" , 491},
            	{"already_standby_OF_i_A39" , 492},
            	{"already_required_OF_i_A39" , 493},
            	{"required_OF_i_A40" , 494},
            	{"already_S_OF_i_A40" , 495},
            	{"S_OF_i_A40" , 496},
            	{"relevant_evt_OF_i_A40" , 497},
            	{"failI_OF_i_A40" , 498},
            	{"to_be_fired_OF_i_A40" , 499},
            	{"already_standby_OF_i_A40" , 500},
            	{"already_required_OF_i_A40" , 501},
            	{"required_OF_i_A42" , 502},
            	{"already_S_OF_i_A42" , 503},
            	{"S_OF_i_A42" , 504},
            	{"relevant_evt_OF_i_A42" , 505},
            	{"failI_OF_i_A42" , 506},
            	{"to_be_fired_OF_i_A42" , 507},
            	{"already_standby_OF_i_A42" , 508},
            	{"already_required_OF_i_A42" , 509},
            	{"required_OF_i_A43" , 510},
            	{"already_S_OF_i_A43" , 511},
            	{"S_OF_i_A43" , 512},
            	{"relevant_evt_OF_i_A43" , 513},
            	{"failI_OF_i_A43" , 514},
            	{"to_be_fired_OF_i_A43" , 515},
            	{"already_standby_OF_i_A43" , 516},
            	{"already_required_OF_i_A43" , 517},
            	{"required_OF_i_A45" , 518},
            	{"already_S_OF_i_A45" , 519},
            	{"S_OF_i_A45" , 520},
            	{"relevant_evt_OF_i_A45" , 521},
            	{"failI_OF_i_A45" , 522},
            	{"to_be_fired_OF_i_A45" , 523},
            	{"already_standby_OF_i_A45" , 524},
            	{"already_required_OF_i_A45" , 525},
            	{"required_OF_i_A46" , 526},
            	{"already_S_OF_i_A46" , 527},
            	{"S_OF_i_A46" , 528},
            	{"relevant_evt_OF_i_A46" , 529},
            	{"failI_OF_i_A46" , 530},
            	{"to_be_fired_OF_i_A46" , 531},
            	{"already_standby_OF_i_A46" , 532},
            	{"already_required_OF_i_A46" , 533},
            	{"required_OF_i_A47" , 534},
            	{"already_S_OF_i_A47" , 535},
            	{"S_OF_i_A47" , 536},
            	{"relevant_evt_OF_i_A47" , 537},
            	{"failI_OF_i_A47" , 538},
            	{"to_be_fired_OF_i_A47" , 539},
            	{"already_standby_OF_i_A47" , 540},
            	{"already_required_OF_i_A47" , 541},
            	{"required_OF_i_A48" , 542},
            	{"already_S_OF_i_A48" , 543},
            	{"S_OF_i_A48" , 544},
            	{"relevant_evt_OF_i_A48" , 545},
            	{"failI_OF_i_A48" , 546},
            	{"to_be_fired_OF_i_A48" , 547},
            	{"already_standby_OF_i_A48" , 548},
            	{"already_required_OF_i_A48" , 549},
            	{"required_OF_i_A49" , 550},
            	{"already_S_OF_i_A49" , 551},
            	{"S_OF_i_A49" , 552},
            	{"relevant_evt_OF_i_A49" , 553},
            	{"failI_OF_i_A49" , 554},
            	{"to_be_fired_OF_i_A49" , 555},
            	{"already_standby_OF_i_A49" , 556},
            	{"already_required_OF_i_A49" , 557},
            	{"required_OF_i_A50" , 558},
            	{"already_S_OF_i_A50" , 559},
            	{"S_OF_i_A50" , 560},
            	{"relevant_evt_OF_i_A50" , 561},
            	{"failI_OF_i_A50" , 562},
            	{"to_be_fired_OF_i_A50" , 563},
            	{"already_standby_OF_i_A50" , 564},
            	{"already_required_OF_i_A50" , 565},
            	{"required_OF_i_A51" , 566},
            	{"already_S_OF_i_A51" , 567},
            	{"S_OF_i_A51" , 568},
            	{"relevant_evt_OF_i_A51" , 569},
            	{"failI_OF_i_A51" , 570},
            	{"to_be_fired_OF_i_A51" , 571},
            	{"already_standby_OF_i_A51" , 572},
            	{"already_required_OF_i_A51" , 573},
            	{"required_OF_i_A52" , 574},
            	{"already_S_OF_i_A52" , 575},
            	{"S_OF_i_A52" , 576},
            	{"relevant_evt_OF_i_A52" , 577},
            	{"failI_OF_i_A52" , 578},
            	{"to_be_fired_OF_i_A52" , 579},
            	{"already_standby_OF_i_A52" , 580},
            	{"already_required_OF_i_A52" , 581},
            	{"required_OF_i_A53" , 582},
            	{"already_S_OF_i_A53" , 583},
            	{"S_OF_i_A53" , 584},
            	{"relevant_evt_OF_i_A53" , 585},
            	{"failI_OF_i_A53" , 586},
            	{"to_be_fired_OF_i_A53" , 587},
            	{"already_standby_OF_i_A53" , 588},
            	{"already_required_OF_i_A53" , 589}},

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
                    590 ,
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
            bool REINITIALISATION_OF_required_OF_A0 ;
            bool REINITIALISATION_OF_S_OF_A0 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A0 ;
            bool REINITIALISATION_OF_required_OF_A1 ;
            bool REINITIALISATION_OF_S_OF_A1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A1 ;
            bool REINITIALISATION_OF_required_OF_A10 ;
            bool REINITIALISATION_OF_S_OF_A10 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A10 ;
            bool REINITIALISATION_OF_required_OF_A100 ;
            bool REINITIALISATION_OF_S_OF_A100 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A100 ;
            bool REINITIALISATION_OF_required_OF_A101 ;
            bool REINITIALISATION_OF_S_OF_A101 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A101 ;
            bool REINITIALISATION_OF_required_OF_A103 ;
            bool REINITIALISATION_OF_S_OF_A103 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A103 ;
            bool REINITIALISATION_OF_required_OF_A11 ;
            bool REINITIALISATION_OF_S_OF_A11 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A11 ;
            bool REINITIALISATION_OF_required_OF_A13 ;
            bool REINITIALISATION_OF_S_OF_A13 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A13 ;
            bool REINITIALISATION_OF_required_OF_A14 ;
            bool REINITIALISATION_OF_S_OF_A14 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A14 ;
            bool REINITIALISATION_OF_required_OF_A16 ;
            bool REINITIALISATION_OF_S_OF_A16 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A16 ;
            bool REINITIALISATION_OF_required_OF_A17 ;
            bool REINITIALISATION_OF_S_OF_A17 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A17 ;
            bool REINITIALISATION_OF_required_OF_A19 ;
            bool REINITIALISATION_OF_S_OF_A19 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A19 ;
            bool REINITIALISATION_OF_required_OF_A2 ;
            bool REINITIALISATION_OF_S_OF_A2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A2 ;
            bool REINITIALISATION_OF_required_OF_A20 ;
            bool REINITIALISATION_OF_S_OF_A20 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A20 ;
            bool REINITIALISATION_OF_required_OF_A22 ;
            bool REINITIALISATION_OF_S_OF_A22 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A22 ;
            bool REINITIALISATION_OF_required_OF_A23 ;
            bool REINITIALISATION_OF_S_OF_A23 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A23 ;
            bool REINITIALISATION_OF_required_OF_A25 ;
            bool REINITIALISATION_OF_S_OF_A25 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A25 ;
            bool REINITIALISATION_OF_required_OF_A26 ;
            bool REINITIALISATION_OF_S_OF_A26 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A26 ;
            bool REINITIALISATION_OF_required_OF_A28 ;
            bool REINITIALISATION_OF_S_OF_A28 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A28 ;
            bool REINITIALISATION_OF_required_OF_A29 ;
            bool REINITIALISATION_OF_S_OF_A29 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A29 ;
            bool REINITIALISATION_OF_required_OF_A30 ;
            bool REINITIALISATION_OF_S_OF_A30 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A30 ;
            bool REINITIALISATION_OF_required_OF_A32 ;
            bool REINITIALISATION_OF_S_OF_A32 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A32 ;
            bool REINITIALISATION_OF_required_OF_A33 ;
            bool REINITIALISATION_OF_S_OF_A33 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A33 ;
            bool REINITIALISATION_OF_required_OF_A34 ;
            bool REINITIALISATION_OF_S_OF_A34 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A34 ;
            bool REINITIALISATION_OF_required_OF_A36 ;
            bool REINITIALISATION_OF_S_OF_A36 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A36 ;
            bool REINITIALISATION_OF_required_OF_A37 ;
            bool REINITIALISATION_OF_S_OF_A37 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A37 ;
            bool REINITIALISATION_OF_required_OF_A38 ;
            bool REINITIALISATION_OF_S_OF_A38 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A38 ;
            bool REINITIALISATION_OF_required_OF_A39 ;
            bool REINITIALISATION_OF_S_OF_A39 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A39 ;
            bool REINITIALISATION_OF_required_OF_A4 ;
            bool REINITIALISATION_OF_S_OF_A4 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A4 ;
            bool REINITIALISATION_OF_required_OF_A40 ;
            bool REINITIALISATION_OF_S_OF_A40 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A40 ;
            bool REINITIALISATION_OF_required_OF_A41 ;
            bool REINITIALISATION_OF_S_OF_A41 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A41 ;
            bool REINITIALISATION_OF_required_OF_A42 ;
            bool REINITIALISATION_OF_S_OF_A42 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A42 ;
            bool REINITIALISATION_OF_required_OF_A43 ;
            bool REINITIALISATION_OF_S_OF_A43 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A43 ;
            bool REINITIALISATION_OF_required_OF_A44 ;
            bool REINITIALISATION_OF_S_OF_A44 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A44 ;
            bool REINITIALISATION_OF_required_OF_A45 ;
            bool REINITIALISATION_OF_S_OF_A45 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A45 ;
            bool REINITIALISATION_OF_required_OF_A46 ;
            bool REINITIALISATION_OF_S_OF_A46 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A46 ;
            bool REINITIALISATION_OF_required_OF_A47 ;
            bool REINITIALISATION_OF_S_OF_A47 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A47 ;
            bool REINITIALISATION_OF_required_OF_A48 ;
            bool REINITIALISATION_OF_S_OF_A48 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A48 ;
            bool REINITIALISATION_OF_required_OF_A49 ;
            bool REINITIALISATION_OF_S_OF_A49 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A49 ;
            bool REINITIALISATION_OF_required_OF_A5 ;
            bool REINITIALISATION_OF_S_OF_A5 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A5 ;
            bool REINITIALISATION_OF_required_OF_A50 ;
            bool REINITIALISATION_OF_S_OF_A50 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A50 ;
            bool REINITIALISATION_OF_required_OF_A51 ;
            bool REINITIALISATION_OF_S_OF_A51 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A51 ;
            bool REINITIALISATION_OF_required_OF_A52 ;
            bool REINITIALISATION_OF_S_OF_A52 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A52 ;
            bool REINITIALISATION_OF_required_OF_A53 ;
            bool REINITIALISATION_OF_S_OF_A53 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A53 ;
            bool REINITIALISATION_OF_required_OF_A54 ;
            bool REINITIALISATION_OF_S_OF_A54 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A54 ;
            bool REINITIALISATION_OF_required_OF_A55 ;
            bool REINITIALISATION_OF_S_OF_A55 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A55 ;
            bool REINITIALISATION_OF_required_OF_A56 ;
            bool REINITIALISATION_OF_S_OF_A56 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A56 ;
            bool REINITIALISATION_OF_required_OF_A57 ;
            bool REINITIALISATION_OF_S_OF_A57 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A57 ;
            bool REINITIALISATION_OF_required_OF_A58 ;
            bool REINITIALISATION_OF_S_OF_A58 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A58 ;
            bool REINITIALISATION_OF_required_OF_A59 ;
            bool REINITIALISATION_OF_S_OF_A59 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A59 ;
            bool REINITIALISATION_OF_required_OF_A60 ;
            bool REINITIALISATION_OF_S_OF_A60 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A60 ;
            bool REINITIALISATION_OF_required_OF_A61 ;
            bool REINITIALISATION_OF_S_OF_A61 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A61 ;
            bool REINITIALISATION_OF_required_OF_A62 ;
            bool REINITIALISATION_OF_S_OF_A62 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A62 ;
            bool REINITIALISATION_OF_required_OF_A63 ;
            bool REINITIALISATION_OF_S_OF_A63 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A63 ;
            bool REINITIALISATION_OF_required_OF_A65 ;
            bool REINITIALISATION_OF_S_OF_A65 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A65 ;
            bool REINITIALISATION_OF_required_OF_A66 ;
            bool REINITIALISATION_OF_S_OF_A66 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A66 ;
            bool REINITIALISATION_OF_required_OF_A67 ;
            bool REINITIALISATION_OF_S_OF_A67 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A67 ;
            bool REINITIALISATION_OF_required_OF_A68 ;
            bool REINITIALISATION_OF_S_OF_A68 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A68 ;
            bool REINITIALISATION_OF_required_OF_A7 ;
            bool REINITIALISATION_OF_S_OF_A7 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A7 ;
            bool REINITIALISATION_OF_required_OF_A70 ;
            bool REINITIALISATION_OF_S_OF_A70 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A70 ;
            bool REINITIALISATION_OF_required_OF_A71 ;
            bool REINITIALISATION_OF_S_OF_A71 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A71 ;
            bool REINITIALISATION_OF_required_OF_A72 ;
            bool REINITIALISATION_OF_S_OF_A72 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A72 ;
            bool REINITIALISATION_OF_required_OF_A73 ;
            bool REINITIALISATION_OF_S_OF_A73 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A73 ;
            bool REINITIALISATION_OF_required_OF_A74 ;
            bool REINITIALISATION_OF_S_OF_A74 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A74 ;
            bool REINITIALISATION_OF_required_OF_A76 ;
            bool REINITIALISATION_OF_S_OF_A76 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A76 ;
            bool REINITIALISATION_OF_required_OF_A77 ;
            bool REINITIALISATION_OF_S_OF_A77 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A77 ;
            bool REINITIALISATION_OF_required_OF_A78 ;
            bool REINITIALISATION_OF_S_OF_A78 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A78 ;
            bool REINITIALISATION_OF_required_OF_A79 ;
            bool REINITIALISATION_OF_S_OF_A79 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A79 ;
            bool REINITIALISATION_OF_required_OF_A8 ;
            bool REINITIALISATION_OF_S_OF_A8 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A8 ;
            bool REINITIALISATION_OF_required_OF_A81 ;
            bool REINITIALISATION_OF_S_OF_A81 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A81 ;
            bool REINITIALISATION_OF_required_OF_A82 ;
            bool REINITIALISATION_OF_S_OF_A82 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A82 ;
            bool REINITIALISATION_OF_required_OF_A83 ;
            bool REINITIALISATION_OF_S_OF_A83 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A83 ;
            bool REINITIALISATION_OF_required_OF_A84 ;
            bool REINITIALISATION_OF_S_OF_A84 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A84 ;
            bool REINITIALISATION_OF_required_OF_A85 ;
            bool REINITIALISATION_OF_S_OF_A85 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A85 ;
            bool REINITIALISATION_OF_required_OF_A87 ;
            bool REINITIALISATION_OF_S_OF_A87 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A87 ;
            bool REINITIALISATION_OF_required_OF_A88 ;
            bool REINITIALISATION_OF_S_OF_A88 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A88 ;
            bool REINITIALISATION_OF_required_OF_A89 ;
            bool REINITIALISATION_OF_S_OF_A89 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A89 ;
            bool REINITIALISATION_OF_required_OF_A90 ;
            bool REINITIALISATION_OF_S_OF_A90 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A90 ;
            bool REINITIALISATION_OF_required_OF_A92 ;
            bool REINITIALISATION_OF_S_OF_A92 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A92 ;
            bool REINITIALISATION_OF_required_OF_A93 ;
            bool REINITIALISATION_OF_S_OF_A93 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A93 ;
            bool REINITIALISATION_OF_required_OF_A94 ;
            bool REINITIALISATION_OF_S_OF_A94 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A94 ;
            bool REINITIALISATION_OF_required_OF_A95 ;
            bool REINITIALISATION_OF_S_OF_A95 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A95 ;
            bool REINITIALISATION_OF_required_OF_A96 ;
            bool REINITIALISATION_OF_S_OF_A96 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A96 ;
            bool REINITIALISATION_OF_required_OF_A98 ;
            bool REINITIALISATION_OF_S_OF_A98 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A98 ;
            bool REINITIALISATION_OF_required_OF_A99 ;
            bool REINITIALISATION_OF_S_OF_A99 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A99 ;
            bool REINITIALISATION_OF_required_OF_UE_1 ;
            bool REINITIALISATION_OF_S_OF_UE_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_UE_1 ;
            bool REINITIALISATION_OF_required_OF_f_A36 ;
            bool REINITIALISATION_OF_S_OF_f_A36 ;
            bool REINITIALISATION_OF_relevant_evt_OF_f_A36 ;
            bool REINITIALISATION_OF_required_OF_f_A37 ;
            bool REINITIALISATION_OF_S_OF_f_A37 ;
            bool REINITIALISATION_OF_relevant_evt_OF_f_A37 ;
            bool REINITIALISATION_OF_required_OF_f_A38 ;
            bool REINITIALISATION_OF_S_OF_f_A38 ;
            bool REINITIALISATION_OF_relevant_evt_OF_f_A38 ;
            bool REINITIALISATION_OF_required_OF_f_A39 ;
            bool REINITIALISATION_OF_S_OF_f_A39 ;
            bool REINITIALISATION_OF_relevant_evt_OF_f_A39 ;
            bool REINITIALISATION_OF_required_OF_f_A40 ;
            bool REINITIALISATION_OF_S_OF_f_A40 ;
            bool REINITIALISATION_OF_relevant_evt_OF_f_A40 ;
            bool REINITIALISATION_OF_required_OF_f_A42 ;
            bool REINITIALISATION_OF_S_OF_f_A42 ;
            bool REINITIALISATION_OF_relevant_evt_OF_f_A42 ;
            bool REINITIALISATION_OF_required_OF_f_A43 ;
            bool REINITIALISATION_OF_S_OF_f_A43 ;
            bool REINITIALISATION_OF_relevant_evt_OF_f_A43 ;
            bool REINITIALISATION_OF_required_OF_f_A45 ;
            bool REINITIALISATION_OF_S_OF_f_A45 ;
            bool REINITIALISATION_OF_relevant_evt_OF_f_A45 ;
            bool REINITIALISATION_OF_required_OF_f_A46 ;
            bool REINITIALISATION_OF_S_OF_f_A46 ;
            bool REINITIALISATION_OF_relevant_evt_OF_f_A46 ;
            bool REINITIALISATION_OF_required_OF_f_A47 ;
            bool REINITIALISATION_OF_S_OF_f_A47 ;
            bool REINITIALISATION_OF_relevant_evt_OF_f_A47 ;
            bool REINITIALISATION_OF_required_OF_f_A48 ;
            bool REINITIALISATION_OF_S_OF_f_A48 ;
            bool REINITIALISATION_OF_relevant_evt_OF_f_A48 ;
            bool REINITIALISATION_OF_required_OF_f_A49 ;
            bool REINITIALISATION_OF_S_OF_f_A49 ;
            bool REINITIALISATION_OF_relevant_evt_OF_f_A49 ;
            bool REINITIALISATION_OF_required_OF_f_A50 ;
            bool REINITIALISATION_OF_S_OF_f_A50 ;
            bool REINITIALISATION_OF_relevant_evt_OF_f_A50 ;
            bool REINITIALISATION_OF_required_OF_f_A51 ;
            bool REINITIALISATION_OF_S_OF_f_A51 ;
            bool REINITIALISATION_OF_relevant_evt_OF_f_A51 ;
            bool REINITIALISATION_OF_required_OF_f_A52 ;
            bool REINITIALISATION_OF_S_OF_f_A52 ;
            bool REINITIALISATION_OF_relevant_evt_OF_f_A52 ;
            bool REINITIALISATION_OF_required_OF_f_A53 ;
            bool REINITIALISATION_OF_S_OF_f_A53 ;
            bool REINITIALISATION_OF_relevant_evt_OF_f_A53 ;
            bool REINITIALISATION_OF_required_OF_i_A36 ;
            bool REINITIALISATION_OF_S_OF_i_A36 ;
            bool REINITIALISATION_OF_relevant_evt_OF_i_A36 ;
            bool REINITIALISATION_OF_to_be_fired_OF_i_A36 ;
            bool REINITIALISATION_OF_required_OF_i_A37 ;
            bool REINITIALISATION_OF_S_OF_i_A37 ;
            bool REINITIALISATION_OF_relevant_evt_OF_i_A37 ;
            bool REINITIALISATION_OF_to_be_fired_OF_i_A37 ;
            bool REINITIALISATION_OF_required_OF_i_A38 ;
            bool REINITIALISATION_OF_S_OF_i_A38 ;
            bool REINITIALISATION_OF_relevant_evt_OF_i_A38 ;
            bool REINITIALISATION_OF_to_be_fired_OF_i_A38 ;
            bool REINITIALISATION_OF_required_OF_i_A39 ;
            bool REINITIALISATION_OF_S_OF_i_A39 ;
            bool REINITIALISATION_OF_relevant_evt_OF_i_A39 ;
            bool REINITIALISATION_OF_to_be_fired_OF_i_A39 ;
            bool REINITIALISATION_OF_required_OF_i_A40 ;
            bool REINITIALISATION_OF_S_OF_i_A40 ;
            bool REINITIALISATION_OF_relevant_evt_OF_i_A40 ;
            bool REINITIALISATION_OF_to_be_fired_OF_i_A40 ;
            bool REINITIALISATION_OF_required_OF_i_A42 ;
            bool REINITIALISATION_OF_S_OF_i_A42 ;
            bool REINITIALISATION_OF_relevant_evt_OF_i_A42 ;
            bool REINITIALISATION_OF_to_be_fired_OF_i_A42 ;
            bool REINITIALISATION_OF_required_OF_i_A43 ;
            bool REINITIALISATION_OF_S_OF_i_A43 ;
            bool REINITIALISATION_OF_relevant_evt_OF_i_A43 ;
            bool REINITIALISATION_OF_to_be_fired_OF_i_A43 ;
            bool REINITIALISATION_OF_required_OF_i_A45 ;
            bool REINITIALISATION_OF_S_OF_i_A45 ;
            bool REINITIALISATION_OF_relevant_evt_OF_i_A45 ;
            bool REINITIALISATION_OF_to_be_fired_OF_i_A45 ;
            bool REINITIALISATION_OF_required_OF_i_A46 ;
            bool REINITIALISATION_OF_S_OF_i_A46 ;
            bool REINITIALISATION_OF_relevant_evt_OF_i_A46 ;
            bool REINITIALISATION_OF_to_be_fired_OF_i_A46 ;
            bool REINITIALISATION_OF_required_OF_i_A47 ;
            bool REINITIALISATION_OF_S_OF_i_A47 ;
            bool REINITIALISATION_OF_relevant_evt_OF_i_A47 ;
            bool REINITIALISATION_OF_to_be_fired_OF_i_A47 ;
            bool REINITIALISATION_OF_required_OF_i_A48 ;
            bool REINITIALISATION_OF_S_OF_i_A48 ;
            bool REINITIALISATION_OF_relevant_evt_OF_i_A48 ;
            bool REINITIALISATION_OF_to_be_fired_OF_i_A48 ;
            bool REINITIALISATION_OF_required_OF_i_A49 ;
            bool REINITIALISATION_OF_S_OF_i_A49 ;
            bool REINITIALISATION_OF_relevant_evt_OF_i_A49 ;
            bool REINITIALISATION_OF_to_be_fired_OF_i_A49 ;
            bool REINITIALISATION_OF_required_OF_i_A50 ;
            bool REINITIALISATION_OF_S_OF_i_A50 ;
            bool REINITIALISATION_OF_relevant_evt_OF_i_A50 ;
            bool REINITIALISATION_OF_to_be_fired_OF_i_A50 ;
            bool REINITIALISATION_OF_required_OF_i_A51 ;
            bool REINITIALISATION_OF_S_OF_i_A51 ;
            bool REINITIALISATION_OF_relevant_evt_OF_i_A51 ;
            bool REINITIALISATION_OF_to_be_fired_OF_i_A51 ;
            bool REINITIALISATION_OF_required_OF_i_A52 ;
            bool REINITIALISATION_OF_S_OF_i_A52 ;
            bool REINITIALISATION_OF_relevant_evt_OF_i_A52 ;
            bool REINITIALISATION_OF_to_be_fired_OF_i_A52 ;
            bool REINITIALISATION_OF_required_OF_i_A53 ;
            bool REINITIALISATION_OF_S_OF_i_A53 ;
            bool REINITIALISATION_OF_relevant_evt_OF_i_A53 ;
            bool REINITIALISATION_OF_to_be_fired_OF_i_A53 ;
            
		/* ---------- DECLARATION OF CONSTANTS ------------ */
			std::string const calculate_required_OF_A61 = "fn_fathers_and_trig";
			double const mu_OF_f_A47 = 0.1;
			double const lambda_OF_A32 = 2e-07;
			bool const force_relevant_events_OF_A20 = false;
			double const lambda_OF_f_A50 = 0;
			std::string const calculate_required_OF_f_A46 = "fn_fathers_and_trig";
			double const lambda_OF_A25 = 2e-07;
			bool const force_relevant_events_OF_A4 = false;
			std::string const trigger_kind_OF_t_dep_12 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A101 = false;
			std::string const calculate_required_OF_i_A50 = "fn_fathers_and_trig";
			double const mu_OF_f_A36 = 0.1;
			std::string const calculate_required_OF_A13 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_i_A38 = false;
			std::string const calculate_required_OF_A84 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A71 = false;
			std::string const calculate_required_OF_f_A37 = "fn_fathers_and_trig";
			double const lambda_OF_A93 = 9.9e-06;
			double const mu_OF_A61 = 0.1;
			double const lambda_OF_A84 = 1e-06;
			std::string const when_to_check_OF_i_A42 = "not_req_to_req";
			bool const force_relevant_events_OF_A70 = false;
			double const mu_OF_f_A46 = 0.1;
			std::string const calculate_required_OF_A40 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_i_A40 = "fn_fathers_and_trig";
			std::string const trigger_kind_OF_t_seq_5 = "equal_to_S_trig";
			double const lambda_OF_f_A39 = 0;
			bool const failI_FROZEN_OF_i_A52 = false;
			double const lambda_OF_f_A38 = 0;
			double const mu_OF_i_A50 = 0.1;
			bool const failF_FROZEN_OF_A89 = false;
			std::string const trigger_kind_OF_t_dep_11 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_i_A43 = false;
			bool const force_relevant_events_OF_A39 = false;
			double const mu_OF_f_A37 = 0.1;
			bool const force_relevant_events_OF_A99 = false;
			std::string const calculate_required_OF_A32 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_A4 = false;
			double const mu_OF_f_A42 = 0.1;
			std::string const calculate_required_OF_A50 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A48 = false;
			bool const force_relevant_events_OF_A96 = false;
			double const mu_OF_A29 = 0.1;
			bool const force_relevant_events_OF_A74 = false;
			double const lambda_OF_A19 = 0;
			bool const failF_FROZEN_OF_A71 = false;
			double const lambda_OF_A72 = 1e-07;
			bool const failI_FROZEN_OF_i_A46 = false;
			double const mu_OF_A32 = 0.1;
			bool const force_relevant_events_OF_A5 = false;
			double const mu_OF_A7 = 0.1;
			std::string const trigger_kind_OF_t_seq_4 = "equal_to_S_trig";
			double const lambda_OF_A89 = 1e-06;
			bool const failF_FROZEN_OF_A73 = false;
			bool const failF_FROZEN_OF_A93 = false;
			std::string const calculate_required_OF_i_A51 = "fn_fathers_and_trig";
			double const mu_OF_A25 = 0.1;
			double const lambda_OF_A7 = 0;
			double const lambda_OF_A71 = 9.99e-05;
			bool const force_relevant_events_OF_i_A39 = false;
			double const lambda_OF_A62 = 1e-05;
			double const lambda_OF_A76 = 9.99e-06;
			bool const force_relevant_events_OF_i_A36 = false;
			bool const failF_FROZEN_OF_A99 = false;
			bool const force_relevant_events_OF_f_A40 = false;
			bool const force_relevant_events_OF_A56 = false;
			std::string const calculate_required_OF_i_A37 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_f_A51 = false;
			bool const force_relevant_events_OF_A26 = false;
			bool const force_relevant_events_OF_A37 = false;
			bool const force_relevant_events_OF_i_A45 = false;
			bool const force_relevant_events_OF_i_A48 = false;
			double const mu_OF_i_A51 = 0.1;
			std::string const calculate_required_OF_A33 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A63 = "fn_fathers_and_trig";
			std::string const trigger_kind_OF_t_dep_9 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A52 = false;
			std::string const calculate_required_OF_A53 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A59 = "fn_fathers_and_trig";
			std::string const when_to_check_OF_i_A49 = "not_req_to_req";
			double const mu_OF_i_A37 = 0.1;
			bool const force_relevant_events_OF_A43 = false;
			bool const force_relevant_events_OF_A51 = false;
			double const lambda_OF_f_A45 = 0;
			bool const force_relevant_events_OF_A94 = false;
			std::string const calculate_required_OF_f_A52 = "fn_fathers_and_trig";
			bool const no_repair_OF___ARBRE__EIRM = true;
			std::string const calculate_required_OF_A39 = "fn_fathers_and_trig";
			double const mu_OF_A33 = 0.1;
			bool const force_relevant_events_OF_f_A47 = false;
			std::string const calculate_required_OF_A87 = "equal_to_S_trig";
			std::string const calculate_required_OF_A82 = "equal_to_S_trig";
			bool const failF_FROZEN_OF_A28 = false;
			std::string const calculate_required_OF_f_A43 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_f_A36 = false;
			bool const failF_FROZEN_OF_A78 = false;
			bool const failF_FROZEN_OF_f_A40 = false;
			bool const failF_FROZEN_OF_f_A48 = false;
			std::string const calculate_required_OF_A10 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_A56 = false;
			bool const failF_FROZEN_OF_f_A51 = false;
			std::string const calculate_required_OF_A96 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A74 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A1 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A60 = false;
			bool const force_relevant_events_OF_A61 = false;
			std::string const calculate_required_OF_A76 = "equal_to_S_trig";
			std::string const calculate_required_OF_A41 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_f_A46 = false;
			std::string const trigger_kind_OF_t_dep_15 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_i_A50 = false;
			double const mu_OF_f_A43 = 0.1;
			std::string const calculate_required_OF_f_A49 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A13 = false;
			double const gamma_OF_i_A42 = 1;
			double const mu_OF_A1 = 0.1;
			bool const force_relevant_events_OF_f_A37 = false;
			std::string const trigger_kind_OF_t_seq_2 = "equal_to_S_trig";
			std::string const when_to_check_OF_i_A43 = "not_req_to_req";
			bool const force_relevant_events_OF_A40 = false;
			std::string const calculate_required_OF_A37 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_i_A40 = false;
			std::string const calculate_required_OF_A77 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_f_A42 = false;
			std::string const when_to_check_OF_i_A52 = "not_req_to_req";
			double const lambda_OF_A56 = 1e-07;
			double const mu_OF_f_A49 = 0.1;
			std::string const calculate_required_OF_UE_1 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_f_A36 = false;
			std::string const calculate_required_OF_A38 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A98 = "equal_to_S_trig";
			bool const failF_FROZEN_OF_A60 = false;
			bool const failI_FROZEN_OF_i_A47 = false;
			bool const failI_FROZEN_OF_i_A49 = false;
			bool const failF_FROZEN_OF_A61 = false;
			double const mu_OF_A62 = 0.1;
			bool const force_relevant_events_OF_A32 = false;
			bool const force_relevant_events_OF_A30 = false;
			std::string const calculate_required_OF_A43 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A51 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A8 = "fn_fathers_and_trig";
			double const mu_OF_A77 = 0.1;
			double const mu_OF_A87 = 0.1;
			double const mu_OF_A16 = 0.1;
			bool const force_relevant_events_OF_A50 = false;
			double const mu_OF_A82 = 0.1;
			double const lambda_OF_A94 = 1e-07;
			bool const failF_FROZEN_OF_A13 = false;
			std::string const calculate_required_OF_f_A47 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_A84 = false;
			double const lambda_OF_A16 = 0;
			bool const failF_FROZEN_OF_f_A37 = false;
			std::string const when_to_check_OF_i_A46 = "not_req_to_req";
			std::string const when_to_check_OF_i_A36 = "not_req_to_req";
			double const mu_OF_A76 = 0.1;
			double const mu_OF_f_A50 = 0.1;
			bool const force_relevant_events_OF_i_A51 = false;
			std::string const calculate_required_OF_A68 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A65 = "equal_to_S_trig";
			bool const failI_FROZEN_OF_i_A38 = false;
			std::string const calculate_required_OF_f_A39 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_f_A38 = "fn_fathers_and_trig";
			std::string const when_to_check_OF_i_A45 = "not_req_to_req";
			std::string const when_to_check_OF_i_A48 = "not_req_to_req";
			std::string const calculate_required_OF_A34 = "fn_fathers_and_trig";
			std::string const trigger_kind_OF_t_dep_0 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A103 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A81 = false;
			std::string const calculate_required_OF_i_A42 = "fn_fathers_and_trig";
			double const lambda_OF_A65 = 6e-06;
			std::string const calculate_required_OF_A55 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_i_A37 = false;
			double const lambda_OF_f_A48 = 0;
			double const mu_OF_A100 = 0.1;
			double const mu_OF_f_A39 = 0.1;
			double const mu_OF_f_A38 = 0.1;
			bool const failI_FROZEN_OF_i_A43 = false;
			bool const force_relevant_events_OF_A33 = false;
			double const lambda_OF_A66 = 4e-06;
			std::string const calculate_required_OF_A46 = "fn_fathers_and_trig";
			double const gamma_OF_i_A49 = 1;
			bool const failF_FROZEN_OF_A72 = false;
			bool const force_relevant_events_OF_A63 = false;
			double const mu_OF_A98 = 0.1;
			bool const force_relevant_events_OF_A53 = false;
			bool const force_relevant_events_OF_A59 = false;
			std::string const calculate_required_OF_f_A42 = "fn_fathers_and_trig";
			double const mu_OF_i_A42 = 0.1;
			std::string const calculate_required_OF_A42 = "fn_fathers_and_trig";
			double const lambda_OF_A77 = 1e-08;
			bool const force_relevant_events_OF_f_A52 = false;
			std::string const calculate_required_OF_A92 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A29 = "fn_fathers_and_trig";
			double const mu_OF_A22 = 0.1;
			std::string const trigger_kind_OF_t_seq_3 = "equal_to_S_trig";
			double const lambda_OF_A61 = 4e-05;
			std::string const calculate_required_OF_i_A53 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A7 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A30 = "fn_fathers_and_trig";
			double const mu_OF_A19 = 0.1;
			bool const force_relevant_events_OF_A36 = false;
			std::string const calculate_required_OF_A25 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_f_A43 = false;
			bool const force_relevant_events_OF_A10 = false;
			double const lambda_OF_A73 = 1e-05;
			bool const force_relevant_events_OF_A1 = false;
			double const mu_OF_A65 = 0.1;
			bool const failI_FROZEN_OF_i_A39 = false;
			bool const failI_FROZEN_OF_i_A36 = false;
			bool const failF_FROZEN_OF_A33 = false;
			bool const force_relevant_events_OF_A41 = false;
			double const mu_OF_i_A53 = 0.1;
			bool const force_relevant_events_OF_A79 = false;
			bool const failI_FROZEN_OF_i_A45 = false;
			bool const failI_FROZEN_OF_i_A48 = false;
			bool const force_relevant_events_OF_f_A49 = false;
			std::string const when_to_check_OF_i_A40 = "not_req_to_req";
			double const gamma_OF_i_A43 = 1;
			std::string const calculate_required_OF_A88 = "fn_fathers_and_trig";
			double const mu_OF_A66 = 0.1;
			std::string const calculate_required_OF_f_A45 = "fn_fathers_and_trig";
			double const lambda_OF_f_A53 = 0;
			bool const failF_FROZEN_OF_f_A52 = false;
			double const gamma_OF_i_A52 = 1;
			std::string const calculate_required_OF_A71 = "equal_to_S_trig";
			std::string const calculate_required_OF_A81 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A77 = false;
			bool const force_relevant_events_OF_A87 = false;
			std::string const calculate_required_OF_A93 = "equal_to_S_trig";
			double const mu_OF_A88 = 0.1;
			bool const failF_FROZEN_OF_A10 = false;
			double const mu_OF_f_A45 = 0.1;
			bool const force_relevant_events_OF_A38 = false;
			bool const failF_FROZEN_OF_A1 = false;
			double const lambda_OF_A33 = 1e-07;
			std::string const when_to_check_OF_i_A47 = "not_req_to_req";
			std::string const calculate_required_OF_A47 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A8 = false;
			bool const force_relevant_events_OF_f_A50 = false;
			double const lambda_OF_A78 = 1e-05;
			bool const failF_FROZEN_OF_f_A49 = false;
			double const mu_OF_i_A49 = 0.1;
			std::string const when_to_check_OF_i_A51 = "not_req_to_req";
			double const gamma_OF_i_A46 = 1;
			double const gamma_OF_i_A36 = 1;
			std::string const trigger_kind_OF_t_dep_6 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A36 = "fn_fathers_and_trig";
			double const gamma_OF_i_A45 = 1;
			double const gamma_OF_i_A48 = 1;
			bool const failI_FROZEN_OF_i_A50 = false;
			bool const force_relevant_events_OF_A17 = false;
			bool const force_relevant_events_OF_A68 = false;
			bool const failF_FROZEN_OF_A77 = false;
			bool const force_relevant_events_OF_f_A39 = false;
			bool const force_relevant_events_OF_f_A38 = false;
			std::string const when_to_check_OF_i_A38 = "not_req_to_req";
			bool const force_relevant_events_OF_A34 = false;
			double const mu_OF_A4 = 0.1;
			double const lambda_OF_A1 = 1e-07;
			std::string const calculate_required_OF_A23 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A103 = false;
			std::string const calculate_required_OF_A79 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_i_A42 = false;
			bool const failI_FROZEN_OF_i_A40 = false;
			bool const force_relevant_events_OF_A55 = false;
			double const lambda_OF_A4 = 0;
			double const mu_OF_A71 = 0.1;
			double const lambda_OF_A28 = 2e-07;
			std::string const trigger_kind_OF_t_seq_0 = "equal_to_S_trig";
			std::string const calculate_required_OF_A45 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_A94 = false;
			std::string const calculate_required_OF_i_A52 = "fn_fathers_and_trig";
			double const mu_OF_A93 = 0.1;
			double const mu_OF_A73 = 0.1;
			double const lambda_OF_A88 = 1e-08;
			bool const force_relevant_events_OF_A44 = false;
			bool const force_relevant_events_OF_A46 = false;
			int const K_OF_A54 = 3;
			std::string const calculate_required_OF_A62 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_f_A47 = false;
			double const lambda_OF_A67 = 1e-05;
			double const mu_OF_i_A43 = 0.1;
			std::string const calculate_required_OF_A16 = "fn_fathers_and_trig";
			std::string const trigger_kind_OF_t_dep_7 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A42 = false;
			std::string const calculate_required_OF_A95 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A2 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A92 = false;
			bool const force_relevant_events_OF_A29 = false;
			double const mu_OF_i_A52 = 0.1;
			bool const failF_FROZEN_OF_f_A39 = false;
			std::string const calculate_required_OF_A58 = "fn_fathers_and_trig";
			bool const repairable_system_OF_OPTIONS = false;
			bool const force_relevant_events_OF_i_A53 = false;
			bool const force_relevant_events_OF_A7 = false;
			bool const Profil1_OF___ARBRE__EIRM = true;
			bool const failF_FROZEN_OF_f_A46 = false;
			std::string const calculate_required_OF_f_A50 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A25 = false;
			bool const failI_FROZEN_OF_i_A51 = false;
			double const mu_OF_A95 = 0.1;
			std::string const calculate_required_OF_A78 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A60 = "equal_to_S_trig";
			std::string const when_to_check_OF_i_A39 = "not_req_to_req";
			double const gamma_OF_i_A40 = 1;
			std::string const calculate_required_OF_A17 = "fn_fathers_and_trig";
			bool const trim_article_OF___ARBRE__EIRM = true;
			bool const failI_FROZEN_OF_i_A37 = false;
			std::string const calculate_required_OF_A100 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_f_A42 = false;
			double const mu_OF_i_A46 = 0.1;
			std::string const calculate_required_OF_A83 = "fn_fathers_and_trig";
			double const mu_OF_i_A36 = 0.1;
			bool const force_relevant_events_OF_A88 = false;
			double const mu_OF_A28 = 0.1;
			bool const force_relevant_events_OF_f_A45 = false;
			bool const failF_FROZEN_OF_A29 = false;
			double const mu_OF_A78 = 0.1;
			double const mu_OF_f_A48 = 0.1;
			double const mu_OF_i_A45 = 0.1;
			bool const failF_FROZEN_OF_A32 = false;
			bool const failF_FROZEN_OF_A7 = false;
			double const lambda_OF_f_A40 = 0;
			double const lambda_OF_f_A51 = 0;
			std::string const calculate_required_OF_A22 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_A25 = false;
			double const mu_OF_A83 = 0.1;
			std::string const calculate_required_OF_A44 = "fn_fathers_and_trig";
			double const gamma_OF_i_A47 = 1;
			std::string const calculate_required_OF_A19 = "fn_fathers_and_trig";
			bool const no_trim_OF___ARBRE__EIRM = false;
			double const gamma_OF_i_A51 = 1;
			bool const force_relevant_events_OF_A47 = false;
			std::string const trigger_kind_OF_t_dep_10 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A67 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A49 = "fn_fathers_and_trig";
			double const lambda_OF_A29 = 1e-07;
			bool const failF_FROZEN_OF_A88 = false;
			bool const failF_FROZEN_OF_f_A45 = false;
			std::string const calculate_required_OF_f_A53 = "fn_fathers_and_trig";
			double const lambda_OF_f_A47 = 0;
			bool const force_relevant_events_OF_A57 = false;
			double const gamma_OF_i_A37 = 1;
			double const gamma_OF_i_A38 = 1;
			std::string const calculate_required_OF_A90 = "fn_fathers_and_trig";
			double const mu_OF_A60 = 0.1;
			std::string const when_to_check_OF_i_A50 = "not_req_to_req";
			std::string const calculate_required_OF_A54 = "fn_fathers_and_trig";
			double const mu_OF_A67 = 0.1;
			std::string const calculate_required_OF_A66 = "fn_fathers_and_trig";
			double const lambda_OF_f_A36 = 0;
			bool const force_relevant_events_OF_A93 = false;
			bool const force_relevant_events_OF_A73 = false;
			bool const force_relevant_events_OF_A23 = false;
			double const mu_OF_f_A53 = 0.1;
			double const mu_OF_A13 = 0.1;
			std::string const trigger_kind_OF_t_seq_7 = "equal_to_S_trig";
			double const mu_OF_A84 = 0.1;
			double const lambda_OF_f_A46 = 0;
			bool const trimming_OF_OPTIONS = true;
			bool const force_relevant_events_OF_A45 = false;
			double const lambda_OF_A13 = 0;
			bool const force_relevant_events_OF_i_A52 = false;
			double const mu_OF_i_A40 = 0.1;
			std::string const trigger_kind_OF_t_dep_5 = "fn_fathers_and_trig";
			double const lambda_OF_f_A37 = 0;
			bool const force_relevant_events_OF_A62 = false;
			double const lambda_OF_A82 = 9.9e-06;
			std::string const calculate_required_OF_A11 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A72 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A14 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A16 = false;
			std::string const when_to_check_OF_i_A53 = "not_req_to_req";
			std::string const calculate_required_OF_A0 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A82 = false;
			bool const failF_FROZEN_OF_f_A43 = false;
			std::string const calculate_required_OF_i_A47 = "fn_fathers_and_trig";
			std::string const trigger_kind_OF_t_dep_3 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_i_A49 = "fn_fathers_and_trig";
			double const lambda_OF_f_A42 = 0;
			bool const force_relevant_events_OF_A95 = false;
			bool const force_relevant_events_OF_A2 = false;
			std::string const calculate_required_OF_A89 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A58 = false;
			bool const force_relevant_events_OF_A76 = false;
			std::string const calculate_required_OF_A85 = "fn_fathers_and_trig";
			double const mu_OF_A72 = 0.1;
			std::string const calculate_required_OF_A20 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_i_A46 = false;
			double const mu_OF_i_A47 = 0.1;
			double const gamma_OF_i_A39 = 1;
			std::string const calculate_required_OF_A4 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A28 = false;
			std::string const calculate_required_OF_A101 = "fn_fathers_and_trig";
			double const mu_OF_A89 = 0.1;
			bool const force_relevant_events_OF_A78 = false;
			bool const force_relevant_events_OF_f_A48 = false;
			std::string const calculate_required_OF_i_A38 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A57 = "fn_fathers_and_trig";
			std::string const trigger_kind_OF_t_dep_8 = "fn_fathers_and_trig";
			std::string const trimming_option_OF_OPTIONS = "according_to_article";
			bool const failF_FROZEN_OF_A62 = false;
			bool const failI_FROZEN_OF_i_A42 = false;
			std::string const trigger_kind_OF_t_dep_13 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A70 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A100 = false;
			std::string const when_to_check_OF_i_A37 = "not_req_to_req";
			bool const failF_FROZEN_OF_A87 = false;
			bool const failF_FROZEN_OF_A16 = false;
			bool const force_relevant_events_OF_A83 = false;
			std::string const calculate_required_OF_A73 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_A82 = false;
			bool const failF_FROZEN_OF_A95 = false;
			double const mu_OF_i_A38 = 0.1;
			bool const force_relevant_events_OF_A98 = false;
			std::string const calculate_required_OF_i_A43 = "fn_fathers_and_trig";
			std::string const trigger_kind_OF_t_dep_4 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_UE_1 = true;
			bool const failF_FROZEN_OF_A76 = false;
			std::string const trigger_kind_OF_t_seq_6 = "equal_to_S_trig";
			std::string const calculate_required_OF_A99 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_f_A50 = false;
			bool const force_relevant_events_OF_A22 = false;
			std::string const trigger_kind_OF_t_seq_1 = "equal_to_S_trig";
			std::string const calculate_required_OF_A48 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A19 = false;
			bool const failI_FROZEN_OF_i_A53 = false;
			double const mu_OF_f_A52 = 0.1;
			std::string const trigger_kind_OF_t_dep_2 = "fn_fathers_and_trig";
			double const lambda_OF_A60 = 6e-05;
			double const mu_OF_A99 = 0.1;
			bool const force_relevant_events_OF_A67 = false;
			bool const force_relevant_events_OF_A49 = false;
			bool const failF_FROZEN_OF_A100 = false;
			bool const force_relevant_events_OF_A65 = false;
			std::string const calculate_required_OF_A5 = "fn_fathers_and_trig";
			double const lambda_OF_A95 = 1e-06;
			double const lambda_OF_A87 = 9.9e-07;
			bool const failF_FROZEN_OF_A83 = false;
			bool const failF_FROZEN_OF_f_A38 = false;
			double const lambda_OF_f_A52 = 0;
			double const gamma_OF_i_A50 = 1;
			bool const force_relevant_events_OF_f_A53 = false;
			double const mu_OF_A10 = 0.1;
			bool const force_relevant_events_OF_A84 = false;
			bool const failF_FROZEN_OF_A98 = false;
			bool const force_relevant_events_OF_A90 = false;
			std::string const calculate_required_OF_i_A39 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_i_A46 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_i_A36 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A54 = false;
			double const lambda_OF_f_A43 = 0;
			std::string const calculate_required_OF_A28 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A66 = false;
			double const lambda_OF_A10 = 0;
			std::string const calculate_required_OF_f_A40 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_f_A48 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A56 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_A22 = false;
			std::string const calculate_required_OF_f_A51 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A26 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_i_A45 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_i_A48 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_A19 = false;
			double const mu_OF_i_A39 = 0.1;
			std::string const calculate_required_OF_A52 = "fn_fathers_and_trig";
			double const lambda_OF_A100 = 1e-06;
			double const lambda_OF_f_A49 = 0;
			bool const failF_FROZEN_OF_A67 = false;
			double const mu_OF_f_A40 = 0.1;
			double const lambda_OF_A83 = 1e-07;
			double const mu_OF_A56 = 0.1;
			double const mu_OF_f_A51 = 0.1;
			bool const failF_FROZEN_OF_A65 = false;
			double const mu_OF_i_A48 = 0.1;
			double const gamma_OF_i_A53 = 1;
			std::string const calculate_required_OF_A94 = "fn_fathers_and_trig";
			std::string const trigger_kind_OF_t_dep_1 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A11 = false;
			bool const failF_FROZEN_OF_f_A53 = false;
			bool const force_relevant_events_OF_A72 = false;
			bool const force_relevant_events_OF_A14 = false;
			bool const force_relevant_events_OF_A0 = false;
			double const lambda_OF_A98 = 9.9e-07;
			bool const force_relevant_events_OF_i_A47 = false;
			bool const force_relevant_events_OF_i_A49 = false;
			double const lambda_OF_A99 = 1e-08;
			bool const force_relevant_events_OF_A89 = false;
			double const lambda_OF_A22 = 1e-07;
			bool const failF_FROZEN_OF_A66 = false;
			std::string const calculate_required_OF_f_A36 = "fn_fathers_and_trig";
			double const mu_OF_A94 = 0.1;
			std::string const trigger_kind_OF_t_dep_14 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A85 = false;
		
            /* ---------- DECLARATION OF OCCURRENCE RULES FIRING FLAGS ------------ */
            bool FIRE_xx10_OF_A1;
            bool FIRE_xx10_OF_A10;
            bool FIRE_xx10_OF_A100;
            bool FIRE_xx10_OF_A13;
            bool FIRE_xx10_OF_A16;
            bool FIRE_xx10_OF_A19;
            bool FIRE_xx10_OF_A22;
            bool FIRE_xx10_OF_A25;
            bool FIRE_xx10_OF_A28;
            bool FIRE_xx10_OF_A29;
            bool FIRE_xx10_OF_A32;
            bool FIRE_xx10_OF_A33;
            bool FIRE_xx10_OF_A4;
            bool FIRE_xx10_OF_A56;
            bool FIRE_xx10_OF_A60;
            bool FIRE_xx10_OF_A61;
            bool FIRE_xx10_OF_A62;
            bool FIRE_xx10_OF_A65;
            bool FIRE_xx10_OF_A66;
            bool FIRE_xx10_OF_A67;
            bool FIRE_xx10_OF_A7;
            bool FIRE_xx10_OF_A71;
            bool FIRE_xx10_OF_A72;
            bool FIRE_xx10_OF_A73;
            bool FIRE_xx10_OF_A76;
            bool FIRE_xx10_OF_A77;
            bool FIRE_xx10_OF_A78;
            bool FIRE_xx10_OF_A82;
            bool FIRE_xx10_OF_A83;
            bool FIRE_xx10_OF_A84;
            bool FIRE_xx10_OF_A87;
            bool FIRE_xx10_OF_A88;
            bool FIRE_xx10_OF_A89;
            bool FIRE_xx10_OF_A93;
            bool FIRE_xx10_OF_A94;
            bool FIRE_xx10_OF_A95;
            bool FIRE_xx10_OF_A98;
            bool FIRE_xx10_OF_A99;
            bool FIRE_xx10_OF_f_A36;
            bool FIRE_xx10_OF_f_A37;
            bool FIRE_xx10_OF_f_A38;
            bool FIRE_xx10_OF_f_A39;
            bool FIRE_xx10_OF_f_A40;
            bool FIRE_xx10_OF_f_A42;
            bool FIRE_xx10_OF_f_A43;
            bool FIRE_xx10_OF_f_A45;
            bool FIRE_xx10_OF_f_A46;
            bool FIRE_xx10_OF_f_A47;
            bool FIRE_xx10_OF_f_A48;
            bool FIRE_xx10_OF_f_A49;
            bool FIRE_xx10_OF_f_A50;
            bool FIRE_xx10_OF_f_A51;
            bool FIRE_xx10_OF_f_A52;
            bool FIRE_xx10_OF_f_A53;
            bool FIRE_xx23_OF_i_A36_INS_54;
            bool FIRE_xx23_OF_i_A36_INS_55;
            bool FIRE_xx23_OF_i_A37_INS_56;
            bool FIRE_xx23_OF_i_A37_INS_57;
            bool FIRE_xx23_OF_i_A38_INS_58;
            bool FIRE_xx23_OF_i_A38_INS_59;
            bool FIRE_xx23_OF_i_A39_INS_60;
            bool FIRE_xx23_OF_i_A39_INS_61;
            bool FIRE_xx23_OF_i_A40_INS_62;
            bool FIRE_xx23_OF_i_A40_INS_63;
            bool FIRE_xx23_OF_i_A42_INS_64;
            bool FIRE_xx23_OF_i_A42_INS_65;
            bool FIRE_xx23_OF_i_A43_INS_66;
            bool FIRE_xx23_OF_i_A43_INS_67;
            bool FIRE_xx23_OF_i_A45_INS_68;
            bool FIRE_xx23_OF_i_A45_INS_69;
            bool FIRE_xx23_OF_i_A46_INS_70;
            bool FIRE_xx23_OF_i_A46_INS_71;
            bool FIRE_xx23_OF_i_A47_INS_72;
            bool FIRE_xx23_OF_i_A47_INS_73;
            bool FIRE_xx23_OF_i_A48_INS_74;
            bool FIRE_xx23_OF_i_A48_INS_75;
            bool FIRE_xx23_OF_i_A49_INS_76;
            bool FIRE_xx23_OF_i_A49_INS_77;
            bool FIRE_xx23_OF_i_A50_INS_78;
            bool FIRE_xx23_OF_i_A50_INS_79;
            bool FIRE_xx23_OF_i_A51_INS_80;
            bool FIRE_xx23_OF_i_A51_INS_81;
            bool FIRE_xx23_OF_i_A52_INS_82;
            bool FIRE_xx23_OF_i_A52_INS_83;
            bool FIRE_xx23_OF_i_A53_INS_84;
            bool FIRE_xx23_OF_i_A53_INS_85;

            int required_OF_A0 = 0 ;
            int already_S_OF_A0 = 1 ;
            int S_OF_A0 = 2 ;
            int relevant_evt_OF_A0 = 3 ;
            int required_OF_A1 = 4 ;
            int already_S_OF_A1 = 5 ;
            int S_OF_A1 = 6 ;
            int relevant_evt_OF_A1 = 7 ;
            int failF_OF_A1 = 8 ;
            int required_OF_A10 = 9 ;
            int already_S_OF_A10 = 10 ;
            int S_OF_A10 = 11 ;
            int relevant_evt_OF_A10 = 12 ;
            int failF_OF_A10 = 13 ;
            int required_OF_A100 = 14 ;
            int already_S_OF_A100 = 15 ;
            int S_OF_A100 = 16 ;
            int relevant_evt_OF_A100 = 17 ;
            int failF_OF_A100 = 18 ;
            int required_OF_A101 = 19 ;
            int already_S_OF_A101 = 20 ;
            int S_OF_A101 = 21 ;
            int relevant_evt_OF_A101 = 22 ;
            int required_OF_A103 = 23 ;
            int already_S_OF_A103 = 24 ;
            int S_OF_A103 = 25 ;
            int relevant_evt_OF_A103 = 26 ;
            int required_OF_A11 = 27 ;
            int already_S_OF_A11 = 28 ;
            int S_OF_A11 = 29 ;
            int relevant_evt_OF_A11 = 30 ;
            int required_OF_A13 = 31 ;
            int already_S_OF_A13 = 32 ;
            int S_OF_A13 = 33 ;
            int relevant_evt_OF_A13 = 34 ;
            int failF_OF_A13 = 35 ;
            int required_OF_A14 = 36 ;
            int already_S_OF_A14 = 37 ;
            int S_OF_A14 = 38 ;
            int relevant_evt_OF_A14 = 39 ;
            int required_OF_A16 = 40 ;
            int already_S_OF_A16 = 41 ;
            int S_OF_A16 = 42 ;
            int relevant_evt_OF_A16 = 43 ;
            int failF_OF_A16 = 44 ;
            int required_OF_A17 = 45 ;
            int already_S_OF_A17 = 46 ;
            int S_OF_A17 = 47 ;
            int relevant_evt_OF_A17 = 48 ;
            int required_OF_A19 = 49 ;
            int already_S_OF_A19 = 50 ;
            int S_OF_A19 = 51 ;
            int relevant_evt_OF_A19 = 52 ;
            int failF_OF_A19 = 53 ;
            int required_OF_A2 = 54 ;
            int already_S_OF_A2 = 55 ;
            int S_OF_A2 = 56 ;
            int relevant_evt_OF_A2 = 57 ;
            int required_OF_A20 = 58 ;
            int already_S_OF_A20 = 59 ;
            int S_OF_A20 = 60 ;
            int relevant_evt_OF_A20 = 61 ;
            int required_OF_A22 = 62 ;
            int already_S_OF_A22 = 63 ;
            int S_OF_A22 = 64 ;
            int relevant_evt_OF_A22 = 65 ;
            int failF_OF_A22 = 66 ;
            int required_OF_A23 = 67 ;
            int already_S_OF_A23 = 68 ;
            int S_OF_A23 = 69 ;
            int relevant_evt_OF_A23 = 70 ;
            int required_OF_A25 = 71 ;
            int already_S_OF_A25 = 72 ;
            int S_OF_A25 = 73 ;
            int relevant_evt_OF_A25 = 74 ;
            int failF_OF_A25 = 75 ;
            int required_OF_A26 = 76 ;
            int already_S_OF_A26 = 77 ;
            int S_OF_A26 = 78 ;
            int relevant_evt_OF_A26 = 79 ;
            int required_OF_A28 = 80 ;
            int already_S_OF_A28 = 81 ;
            int S_OF_A28 = 82 ;
            int relevant_evt_OF_A28 = 83 ;
            int failF_OF_A28 = 84 ;
            int required_OF_A29 = 85 ;
            int already_S_OF_A29 = 86 ;
            int S_OF_A29 = 87 ;
            int relevant_evt_OF_A29 = 88 ;
            int failF_OF_A29 = 89 ;
            int required_OF_A30 = 90 ;
            int already_S_OF_A30 = 91 ;
            int S_OF_A30 = 92 ;
            int relevant_evt_OF_A30 = 93 ;
            int required_OF_A32 = 94 ;
            int already_S_OF_A32 = 95 ;
            int S_OF_A32 = 96 ;
            int relevant_evt_OF_A32 = 97 ;
            int failF_OF_A32 = 98 ;
            int required_OF_A33 = 99 ;
            int already_S_OF_A33 = 100 ;
            int S_OF_A33 = 101 ;
            int relevant_evt_OF_A33 = 102 ;
            int failF_OF_A33 = 103 ;
            int required_OF_A34 = 104 ;
            int already_S_OF_A34 = 105 ;
            int S_OF_A34 = 106 ;
            int relevant_evt_OF_A34 = 107 ;
            int required_OF_A36 = 108 ;
            int already_S_OF_A36 = 109 ;
            int S_OF_A36 = 110 ;
            int relevant_evt_OF_A36 = 111 ;
            int required_OF_A37 = 112 ;
            int already_S_OF_A37 = 113 ;
            int S_OF_A37 = 114 ;
            int relevant_evt_OF_A37 = 115 ;
            int required_OF_A38 = 116 ;
            int already_S_OF_A38 = 117 ;
            int S_OF_A38 = 118 ;
            int relevant_evt_OF_A38 = 119 ;
            int required_OF_A39 = 120 ;
            int already_S_OF_A39 = 121 ;
            int S_OF_A39 = 122 ;
            int relevant_evt_OF_A39 = 123 ;
            int required_OF_A4 = 124 ;
            int already_S_OF_A4 = 125 ;
            int S_OF_A4 = 126 ;
            int relevant_evt_OF_A4 = 127 ;
            int failF_OF_A4 = 128 ;
            int required_OF_A40 = 129 ;
            int already_S_OF_A40 = 130 ;
            int S_OF_A40 = 131 ;
            int relevant_evt_OF_A40 = 132 ;
            int required_OF_A41 = 133 ;
            int already_S_OF_A41 = 134 ;
            int S_OF_A41 = 135 ;
            int relevant_evt_OF_A41 = 136 ;
            int required_OF_A42 = 137 ;
            int already_S_OF_A42 = 138 ;
            int S_OF_A42 = 139 ;
            int relevant_evt_OF_A42 = 140 ;
            int required_OF_A43 = 141 ;
            int already_S_OF_A43 = 142 ;
            int S_OF_A43 = 143 ;
            int relevant_evt_OF_A43 = 144 ;
            int required_OF_A44 = 145 ;
            int already_S_OF_A44 = 146 ;
            int S_OF_A44 = 147 ;
            int relevant_evt_OF_A44 = 148 ;
            int required_OF_A45 = 149 ;
            int already_S_OF_A45 = 150 ;
            int S_OF_A45 = 151 ;
            int relevant_evt_OF_A45 = 152 ;
            int required_OF_A46 = 153 ;
            int already_S_OF_A46 = 154 ;
            int S_OF_A46 = 155 ;
            int relevant_evt_OF_A46 = 156 ;
            int required_OF_A47 = 157 ;
            int already_S_OF_A47 = 158 ;
            int S_OF_A47 = 159 ;
            int relevant_evt_OF_A47 = 160 ;
            int required_OF_A48 = 161 ;
            int already_S_OF_A48 = 162 ;
            int S_OF_A48 = 163 ;
            int relevant_evt_OF_A48 = 164 ;
            int required_OF_A49 = 165 ;
            int already_S_OF_A49 = 166 ;
            int S_OF_A49 = 167 ;
            int relevant_evt_OF_A49 = 168 ;
            int required_OF_A5 = 169 ;
            int already_S_OF_A5 = 170 ;
            int S_OF_A5 = 171 ;
            int relevant_evt_OF_A5 = 172 ;
            int required_OF_A50 = 173 ;
            int already_S_OF_A50 = 174 ;
            int S_OF_A50 = 175 ;
            int relevant_evt_OF_A50 = 176 ;
            int required_OF_A51 = 177 ;
            int already_S_OF_A51 = 178 ;
            int S_OF_A51 = 179 ;
            int relevant_evt_OF_A51 = 180 ;
            int required_OF_A52 = 181 ;
            int already_S_OF_A52 = 182 ;
            int S_OF_A52 = 183 ;
            int relevant_evt_OF_A52 = 184 ;
            int required_OF_A53 = 185 ;
            int already_S_OF_A53 = 186 ;
            int S_OF_A53 = 187 ;
            int relevant_evt_OF_A53 = 188 ;
            int required_OF_A54 = 189 ;
            int already_S_OF_A54 = 190 ;
            int S_OF_A54 = 191 ;
            int relevant_evt_OF_A54 = 192 ;
            int required_OF_A55 = 193 ;
            int already_S_OF_A55 = 194 ;
            int S_OF_A55 = 195 ;
            int relevant_evt_OF_A55 = 196 ;
            int required_OF_A56 = 197 ;
            int already_S_OF_A56 = 198 ;
            int S_OF_A56 = 199 ;
            int relevant_evt_OF_A56 = 200 ;
            int failF_OF_A56 = 201 ;
            int required_OF_A57 = 202 ;
            int already_S_OF_A57 = 203 ;
            int S_OF_A57 = 204 ;
            int relevant_evt_OF_A57 = 205 ;
            int required_OF_A58 = 206 ;
            int already_S_OF_A58 = 207 ;
            int S_OF_A58 = 208 ;
            int relevant_evt_OF_A58 = 209 ;
            int required_OF_A59 = 210 ;
            int already_S_OF_A59 = 211 ;
            int S_OF_A59 = 212 ;
            int relevant_evt_OF_A59 = 213 ;
            int required_OF_A60 = 214 ;
            int already_S_OF_A60 = 215 ;
            int S_OF_A60 = 216 ;
            int relevant_evt_OF_A60 = 217 ;
            int failF_OF_A60 = 218 ;
            int required_OF_A61 = 219 ;
            int already_S_OF_A61 = 220 ;
            int S_OF_A61 = 221 ;
            int relevant_evt_OF_A61 = 222 ;
            int failF_OF_A61 = 223 ;
            int required_OF_A62 = 224 ;
            int already_S_OF_A62 = 225 ;
            int S_OF_A62 = 226 ;
            int relevant_evt_OF_A62 = 227 ;
            int failF_OF_A62 = 228 ;
            int required_OF_A63 = 229 ;
            int already_S_OF_A63 = 230 ;
            int S_OF_A63 = 231 ;
            int relevant_evt_OF_A63 = 232 ;
            int required_OF_A65 = 233 ;
            int already_S_OF_A65 = 234 ;
            int S_OF_A65 = 235 ;
            int relevant_evt_OF_A65 = 236 ;
            int failF_OF_A65 = 237 ;
            int required_OF_A66 = 238 ;
            int already_S_OF_A66 = 239 ;
            int S_OF_A66 = 240 ;
            int relevant_evt_OF_A66 = 241 ;
            int failF_OF_A66 = 242 ;
            int required_OF_A67 = 243 ;
            int already_S_OF_A67 = 244 ;
            int S_OF_A67 = 245 ;
            int relevant_evt_OF_A67 = 246 ;
            int failF_OF_A67 = 247 ;
            int required_OF_A68 = 248 ;
            int already_S_OF_A68 = 249 ;
            int S_OF_A68 = 250 ;
            int relevant_evt_OF_A68 = 251 ;
            int required_OF_A7 = 252 ;
            int already_S_OF_A7 = 253 ;
            int S_OF_A7 = 254 ;
            int relevant_evt_OF_A7 = 255 ;
            int failF_OF_A7 = 256 ;
            int required_OF_A70 = 257 ;
            int already_S_OF_A70 = 258 ;
            int S_OF_A70 = 259 ;
            int relevant_evt_OF_A70 = 260 ;
            int required_OF_A71 = 261 ;
            int already_S_OF_A71 = 262 ;
            int S_OF_A71 = 263 ;
            int relevant_evt_OF_A71 = 264 ;
            int failF_OF_A71 = 265 ;
            int required_OF_A72 = 266 ;
            int already_S_OF_A72 = 267 ;
            int S_OF_A72 = 268 ;
            int relevant_evt_OF_A72 = 269 ;
            int failF_OF_A72 = 270 ;
            int required_OF_A73 = 271 ;
            int already_S_OF_A73 = 272 ;
            int S_OF_A73 = 273 ;
            int relevant_evt_OF_A73 = 274 ;
            int failF_OF_A73 = 275 ;
            int required_OF_A74 = 276 ;
            int already_S_OF_A74 = 277 ;
            int S_OF_A74 = 278 ;
            int relevant_evt_OF_A74 = 279 ;
            int required_OF_A76 = 280 ;
            int already_S_OF_A76 = 281 ;
            int S_OF_A76 = 282 ;
            int relevant_evt_OF_A76 = 283 ;
            int failF_OF_A76 = 284 ;
            int required_OF_A77 = 285 ;
            int already_S_OF_A77 = 286 ;
            int S_OF_A77 = 287 ;
            int relevant_evt_OF_A77 = 288 ;
            int failF_OF_A77 = 289 ;
            int required_OF_A78 = 290 ;
            int already_S_OF_A78 = 291 ;
            int S_OF_A78 = 292 ;
            int relevant_evt_OF_A78 = 293 ;
            int failF_OF_A78 = 294 ;
            int required_OF_A79 = 295 ;
            int already_S_OF_A79 = 296 ;
            int S_OF_A79 = 297 ;
            int relevant_evt_OF_A79 = 298 ;
            int required_OF_A8 = 299 ;
            int already_S_OF_A8 = 300 ;
            int S_OF_A8 = 301 ;
            int relevant_evt_OF_A8 = 302 ;
            int required_OF_A81 = 303 ;
            int already_S_OF_A81 = 304 ;
            int S_OF_A81 = 305 ;
            int relevant_evt_OF_A81 = 306 ;
            int required_OF_A82 = 307 ;
            int already_S_OF_A82 = 308 ;
            int S_OF_A82 = 309 ;
            int relevant_evt_OF_A82 = 310 ;
            int failF_OF_A82 = 311 ;
            int required_OF_A83 = 312 ;
            int already_S_OF_A83 = 313 ;
            int S_OF_A83 = 314 ;
            int relevant_evt_OF_A83 = 315 ;
            int failF_OF_A83 = 316 ;
            int required_OF_A84 = 317 ;
            int already_S_OF_A84 = 318 ;
            int S_OF_A84 = 319 ;
            int relevant_evt_OF_A84 = 320 ;
            int failF_OF_A84 = 321 ;
            int required_OF_A85 = 322 ;
            int already_S_OF_A85 = 323 ;
            int S_OF_A85 = 324 ;
            int relevant_evt_OF_A85 = 325 ;
            int required_OF_A87 = 326 ;
            int already_S_OF_A87 = 327 ;
            int S_OF_A87 = 328 ;
            int relevant_evt_OF_A87 = 329 ;
            int failF_OF_A87 = 330 ;
            int required_OF_A88 = 331 ;
            int already_S_OF_A88 = 332 ;
            int S_OF_A88 = 333 ;
            int relevant_evt_OF_A88 = 334 ;
            int failF_OF_A88 = 335 ;
            int required_OF_A89 = 336 ;
            int already_S_OF_A89 = 337 ;
            int S_OF_A89 = 338 ;
            int relevant_evt_OF_A89 = 339 ;
            int failF_OF_A89 = 340 ;
            int required_OF_A90 = 341 ;
            int already_S_OF_A90 = 342 ;
            int S_OF_A90 = 343 ;
            int relevant_evt_OF_A90 = 344 ;
            int required_OF_A92 = 345 ;
            int already_S_OF_A92 = 346 ;
            int S_OF_A92 = 347 ;
            int relevant_evt_OF_A92 = 348 ;
            int required_OF_A93 = 349 ;
            int already_S_OF_A93 = 350 ;
            int S_OF_A93 = 351 ;
            int relevant_evt_OF_A93 = 352 ;
            int failF_OF_A93 = 353 ;
            int required_OF_A94 = 354 ;
            int already_S_OF_A94 = 355 ;
            int S_OF_A94 = 356 ;
            int relevant_evt_OF_A94 = 357 ;
            int failF_OF_A94 = 358 ;
            int required_OF_A95 = 359 ;
            int already_S_OF_A95 = 360 ;
            int S_OF_A95 = 361 ;
            int relevant_evt_OF_A95 = 362 ;
            int failF_OF_A95 = 363 ;
            int required_OF_A96 = 364 ;
            int already_S_OF_A96 = 365 ;
            int S_OF_A96 = 366 ;
            int relevant_evt_OF_A96 = 367 ;
            int required_OF_A98 = 368 ;
            int already_S_OF_A98 = 369 ;
            int S_OF_A98 = 370 ;
            int relevant_evt_OF_A98 = 371 ;
            int failF_OF_A98 = 372 ;
            int required_OF_A99 = 373 ;
            int already_S_OF_A99 = 374 ;
            int S_OF_A99 = 375 ;
            int relevant_evt_OF_A99 = 376 ;
            int failF_OF_A99 = 377 ;
            int required_OF_UE_1 = 378 ;
            int already_S_OF_UE_1 = 379 ;
            int S_OF_UE_1 = 380 ;
            int relevant_evt_OF_UE_1 = 381 ;
            int required_OF_f_A36 = 382 ;
            int already_S_OF_f_A36 = 383 ;
            int S_OF_f_A36 = 384 ;
            int relevant_evt_OF_f_A36 = 385 ;
            int failF_OF_f_A36 = 386 ;
            int required_OF_f_A37 = 387 ;
            int already_S_OF_f_A37 = 388 ;
            int S_OF_f_A37 = 389 ;
            int relevant_evt_OF_f_A37 = 390 ;
            int failF_OF_f_A37 = 391 ;
            int required_OF_f_A38 = 392 ;
            int already_S_OF_f_A38 = 393 ;
            int S_OF_f_A38 = 394 ;
            int relevant_evt_OF_f_A38 = 395 ;
            int failF_OF_f_A38 = 396 ;
            int required_OF_f_A39 = 397 ;
            int already_S_OF_f_A39 = 398 ;
            int S_OF_f_A39 = 399 ;
            int relevant_evt_OF_f_A39 = 400 ;
            int failF_OF_f_A39 = 401 ;
            int required_OF_f_A40 = 402 ;
            int already_S_OF_f_A40 = 403 ;
            int S_OF_f_A40 = 404 ;
            int relevant_evt_OF_f_A40 = 405 ;
            int failF_OF_f_A40 = 406 ;
            int required_OF_f_A42 = 407 ;
            int already_S_OF_f_A42 = 408 ;
            int S_OF_f_A42 = 409 ;
            int relevant_evt_OF_f_A42 = 410 ;
            int failF_OF_f_A42 = 411 ;
            int required_OF_f_A43 = 412 ;
            int already_S_OF_f_A43 = 413 ;
            int S_OF_f_A43 = 414 ;
            int relevant_evt_OF_f_A43 = 415 ;
            int failF_OF_f_A43 = 416 ;
            int required_OF_f_A45 = 417 ;
            int already_S_OF_f_A45 = 418 ;
            int S_OF_f_A45 = 419 ;
            int relevant_evt_OF_f_A45 = 420 ;
            int failF_OF_f_A45 = 421 ;
            int required_OF_f_A46 = 422 ;
            int already_S_OF_f_A46 = 423 ;
            int S_OF_f_A46 = 424 ;
            int relevant_evt_OF_f_A46 = 425 ;
            int failF_OF_f_A46 = 426 ;
            int required_OF_f_A47 = 427 ;
            int already_S_OF_f_A47 = 428 ;
            int S_OF_f_A47 = 429 ;
            int relevant_evt_OF_f_A47 = 430 ;
            int failF_OF_f_A47 = 431 ;
            int required_OF_f_A48 = 432 ;
            int already_S_OF_f_A48 = 433 ;
            int S_OF_f_A48 = 434 ;
            int relevant_evt_OF_f_A48 = 435 ;
            int failF_OF_f_A48 = 436 ;
            int required_OF_f_A49 = 437 ;
            int already_S_OF_f_A49 = 438 ;
            int S_OF_f_A49 = 439 ;
            int relevant_evt_OF_f_A49 = 440 ;
            int failF_OF_f_A49 = 441 ;
            int required_OF_f_A50 = 442 ;
            int already_S_OF_f_A50 = 443 ;
            int S_OF_f_A50 = 444 ;
            int relevant_evt_OF_f_A50 = 445 ;
            int failF_OF_f_A50 = 446 ;
            int required_OF_f_A51 = 447 ;
            int already_S_OF_f_A51 = 448 ;
            int S_OF_f_A51 = 449 ;
            int relevant_evt_OF_f_A51 = 450 ;
            int failF_OF_f_A51 = 451 ;
            int required_OF_f_A52 = 452 ;
            int already_S_OF_f_A52 = 453 ;
            int S_OF_f_A52 = 454 ;
            int relevant_evt_OF_f_A52 = 455 ;
            int failF_OF_f_A52 = 456 ;
            int required_OF_f_A53 = 457 ;
            int already_S_OF_f_A53 = 458 ;
            int S_OF_f_A53 = 459 ;
            int relevant_evt_OF_f_A53 = 460 ;
            int failF_OF_f_A53 = 461 ;
            int required_OF_i_A36 = 462 ;
            int already_S_OF_i_A36 = 463 ;
            int S_OF_i_A36 = 464 ;
            int relevant_evt_OF_i_A36 = 465 ;
            int failI_OF_i_A36 = 466 ;
            int to_be_fired_OF_i_A36 = 467 ;
            int already_standby_OF_i_A36 = 468 ;
            int already_required_OF_i_A36 = 469 ;
            int required_OF_i_A37 = 470 ;
            int already_S_OF_i_A37 = 471 ;
            int S_OF_i_A37 = 472 ;
            int relevant_evt_OF_i_A37 = 473 ;
            int failI_OF_i_A37 = 474 ;
            int to_be_fired_OF_i_A37 = 475 ;
            int already_standby_OF_i_A37 = 476 ;
            int already_required_OF_i_A37 = 477 ;
            int required_OF_i_A38 = 478 ;
            int already_S_OF_i_A38 = 479 ;
            int S_OF_i_A38 = 480 ;
            int relevant_evt_OF_i_A38 = 481 ;
            int failI_OF_i_A38 = 482 ;
            int to_be_fired_OF_i_A38 = 483 ;
            int already_standby_OF_i_A38 = 484 ;
            int already_required_OF_i_A38 = 485 ;
            int required_OF_i_A39 = 486 ;
            int already_S_OF_i_A39 = 487 ;
            int S_OF_i_A39 = 488 ;
            int relevant_evt_OF_i_A39 = 489 ;
            int failI_OF_i_A39 = 490 ;
            int to_be_fired_OF_i_A39 = 491 ;
            int already_standby_OF_i_A39 = 492 ;
            int already_required_OF_i_A39 = 493 ;
            int required_OF_i_A40 = 494 ;
            int already_S_OF_i_A40 = 495 ;
            int S_OF_i_A40 = 496 ;
            int relevant_evt_OF_i_A40 = 497 ;
            int failI_OF_i_A40 = 498 ;
            int to_be_fired_OF_i_A40 = 499 ;
            int already_standby_OF_i_A40 = 500 ;
            int already_required_OF_i_A40 = 501 ;
            int required_OF_i_A42 = 502 ;
            int already_S_OF_i_A42 = 503 ;
            int S_OF_i_A42 = 504 ;
            int relevant_evt_OF_i_A42 = 505 ;
            int failI_OF_i_A42 = 506 ;
            int to_be_fired_OF_i_A42 = 507 ;
            int already_standby_OF_i_A42 = 508 ;
            int already_required_OF_i_A42 = 509 ;
            int required_OF_i_A43 = 510 ;
            int already_S_OF_i_A43 = 511 ;
            int S_OF_i_A43 = 512 ;
            int relevant_evt_OF_i_A43 = 513 ;
            int failI_OF_i_A43 = 514 ;
            int to_be_fired_OF_i_A43 = 515 ;
            int already_standby_OF_i_A43 = 516 ;
            int already_required_OF_i_A43 = 517 ;
            int required_OF_i_A45 = 518 ;
            int already_S_OF_i_A45 = 519 ;
            int S_OF_i_A45 = 520 ;
            int relevant_evt_OF_i_A45 = 521 ;
            int failI_OF_i_A45 = 522 ;
            int to_be_fired_OF_i_A45 = 523 ;
            int already_standby_OF_i_A45 = 524 ;
            int already_required_OF_i_A45 = 525 ;
            int required_OF_i_A46 = 526 ;
            int already_S_OF_i_A46 = 527 ;
            int S_OF_i_A46 = 528 ;
            int relevant_evt_OF_i_A46 = 529 ;
            int failI_OF_i_A46 = 530 ;
            int to_be_fired_OF_i_A46 = 531 ;
            int already_standby_OF_i_A46 = 532 ;
            int already_required_OF_i_A46 = 533 ;
            int required_OF_i_A47 = 534 ;
            int already_S_OF_i_A47 = 535 ;
            int S_OF_i_A47 = 536 ;
            int relevant_evt_OF_i_A47 = 537 ;
            int failI_OF_i_A47 = 538 ;
            int to_be_fired_OF_i_A47 = 539 ;
            int already_standby_OF_i_A47 = 540 ;
            int already_required_OF_i_A47 = 541 ;
            int required_OF_i_A48 = 542 ;
            int already_S_OF_i_A48 = 543 ;
            int S_OF_i_A48 = 544 ;
            int relevant_evt_OF_i_A48 = 545 ;
            int failI_OF_i_A48 = 546 ;
            int to_be_fired_OF_i_A48 = 547 ;
            int already_standby_OF_i_A48 = 548 ;
            int already_required_OF_i_A48 = 549 ;
            int required_OF_i_A49 = 550 ;
            int already_S_OF_i_A49 = 551 ;
            int S_OF_i_A49 = 552 ;
            int relevant_evt_OF_i_A49 = 553 ;
            int failI_OF_i_A49 = 554 ;
            int to_be_fired_OF_i_A49 = 555 ;
            int already_standby_OF_i_A49 = 556 ;
            int already_required_OF_i_A49 = 557 ;
            int required_OF_i_A50 = 558 ;
            int already_S_OF_i_A50 = 559 ;
            int S_OF_i_A50 = 560 ;
            int relevant_evt_OF_i_A50 = 561 ;
            int failI_OF_i_A50 = 562 ;
            int to_be_fired_OF_i_A50 = 563 ;
            int already_standby_OF_i_A50 = 564 ;
            int already_required_OF_i_A50 = 565 ;
            int required_OF_i_A51 = 566 ;
            int already_S_OF_i_A51 = 567 ;
            int S_OF_i_A51 = 568 ;
            int relevant_evt_OF_i_A51 = 569 ;
            int failI_OF_i_A51 = 570 ;
            int to_be_fired_OF_i_A51 = 571 ;
            int already_standby_OF_i_A51 = 572 ;
            int already_required_OF_i_A51 = 573 ;
            int required_OF_i_A52 = 574 ;
            int already_S_OF_i_A52 = 575 ;
            int S_OF_i_A52 = 576 ;
            int relevant_evt_OF_i_A52 = 577 ;
            int failI_OF_i_A52 = 578 ;
            int to_be_fired_OF_i_A52 = 579 ;
            int already_standby_OF_i_A52 = 580 ;
            int already_required_OF_i_A52 = 581 ;
            int required_OF_i_A53 = 582 ;
            int already_S_OF_i_A53 = 583 ;
            int S_OF_i_A53 = 584 ;
            int relevant_evt_OF_i_A53 = 585 ;
            int failI_OF_i_A53 = 586 ;
            int to_be_fired_OF_i_A53 = 587 ;
            int already_standby_OF_i_A53 = 588 ;
            int already_required_OF_i_A53 = 589 ;




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