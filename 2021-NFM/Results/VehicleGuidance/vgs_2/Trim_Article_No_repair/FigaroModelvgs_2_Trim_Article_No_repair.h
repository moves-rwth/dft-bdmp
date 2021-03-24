
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
        class FigaroProgram_vgs_2_Trim_Article_No_repair: public storm::figaro::FigaroProgram{
        public:
        FigaroProgram_vgs_2_Trim_Article_No_repair(): FigaroProgram(//            std::map<std::string, size_t> mFigaroboolelementindex =
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
            	{"required_OF_A102" , 18},
            	{"already_S_OF_A102" , 19},
            	{"S_OF_A102" , 20},
            	{"relevant_evt_OF_A102" , 21},
            	{"failF_OF_A102" , 22},
            	{"required_OF_A103" , 23},
            	{"already_S_OF_A103" , 24},
            	{"S_OF_A103" , 25},
            	{"relevant_evt_OF_A103" , 26},
            	{"failF_OF_A103" , 27},
            	{"required_OF_A104" , 28},
            	{"already_S_OF_A104" , 29},
            	{"S_OF_A104" , 30},
            	{"relevant_evt_OF_A104" , 31},
            	{"failF_OF_A104" , 32},
            	{"required_OF_A105" , 33},
            	{"already_S_OF_A105" , 34},
            	{"S_OF_A105" , 35},
            	{"relevant_evt_OF_A105" , 36},
            	{"required_OF_A107" , 37},
            	{"already_S_OF_A107" , 38},
            	{"S_OF_A107" , 39},
            	{"relevant_evt_OF_A107" , 40},
            	{"required_OF_A108" , 41},
            	{"already_S_OF_A108" , 42},
            	{"S_OF_A108" , 43},
            	{"relevant_evt_OF_A108" , 44},
            	{"failF_OF_A108" , 45},
            	{"required_OF_A109" , 46},
            	{"already_S_OF_A109" , 47},
            	{"S_OF_A109" , 48},
            	{"relevant_evt_OF_A109" , 49},
            	{"failF_OF_A109" , 50},
            	{"required_OF_A11" , 51},
            	{"already_S_OF_A11" , 52},
            	{"S_OF_A11" , 53},
            	{"relevant_evt_OF_A11" , 54},
            	{"required_OF_A110" , 55},
            	{"already_S_OF_A110" , 56},
            	{"S_OF_A110" , 57},
            	{"relevant_evt_OF_A110" , 58},
            	{"failF_OF_A110" , 59},
            	{"required_OF_A111" , 60},
            	{"already_S_OF_A111" , 61},
            	{"S_OF_A111" , 62},
            	{"relevant_evt_OF_A111" , 63},
            	{"required_OF_A113" , 64},
            	{"already_S_OF_A113" , 65},
            	{"S_OF_A113" , 66},
            	{"relevant_evt_OF_A113" , 67},
            	{"failF_OF_A113" , 68},
            	{"required_OF_A114" , 69},
            	{"already_S_OF_A114" , 70},
            	{"S_OF_A114" , 71},
            	{"relevant_evt_OF_A114" , 72},
            	{"failF_OF_A114" , 73},
            	{"required_OF_A115" , 74},
            	{"already_S_OF_A115" , 75},
            	{"S_OF_A115" , 76},
            	{"relevant_evt_OF_A115" , 77},
            	{"failF_OF_A115" , 78},
            	{"required_OF_A116" , 79},
            	{"already_S_OF_A116" , 80},
            	{"S_OF_A116" , 81},
            	{"relevant_evt_OF_A116" , 82},
            	{"required_OF_A118" , 83},
            	{"already_S_OF_A118" , 84},
            	{"S_OF_A118" , 85},
            	{"relevant_evt_OF_A118" , 86},
            	{"required_OF_A119" , 87},
            	{"already_S_OF_A119" , 88},
            	{"S_OF_A119" , 89},
            	{"relevant_evt_OF_A119" , 90},
            	{"failF_OF_A119" , 91},
            	{"required_OF_A120" , 92},
            	{"already_S_OF_A120" , 93},
            	{"S_OF_A120" , 94},
            	{"relevant_evt_OF_A120" , 95},
            	{"failF_OF_A120" , 96},
            	{"required_OF_A121" , 97},
            	{"already_S_OF_A121" , 98},
            	{"S_OF_A121" , 99},
            	{"relevant_evt_OF_A121" , 100},
            	{"failF_OF_A121" , 101},
            	{"required_OF_A122" , 102},
            	{"already_S_OF_A122" , 103},
            	{"S_OF_A122" , 104},
            	{"relevant_evt_OF_A122" , 105},
            	{"required_OF_A124" , 106},
            	{"already_S_OF_A124" , 107},
            	{"S_OF_A124" , 108},
            	{"relevant_evt_OF_A124" , 109},
            	{"failF_OF_A124" , 110},
            	{"required_OF_A125" , 111},
            	{"already_S_OF_A125" , 112},
            	{"S_OF_A125" , 113},
            	{"relevant_evt_OF_A125" , 114},
            	{"failF_OF_A125" , 115},
            	{"required_OF_A126" , 116},
            	{"already_S_OF_A126" , 117},
            	{"S_OF_A126" , 118},
            	{"relevant_evt_OF_A126" , 119},
            	{"failF_OF_A126" , 120},
            	{"required_OF_A127" , 121},
            	{"already_S_OF_A127" , 122},
            	{"S_OF_A127" , 123},
            	{"relevant_evt_OF_A127" , 124},
            	{"required_OF_A129" , 125},
            	{"already_S_OF_A129" , 126},
            	{"S_OF_A129" , 127},
            	{"relevant_evt_OF_A129" , 128},
            	{"required_OF_A13" , 129},
            	{"already_S_OF_A13" , 130},
            	{"S_OF_A13" , 131},
            	{"relevant_evt_OF_A13" , 132},
            	{"failF_OF_A13" , 133},
            	{"required_OF_A14" , 134},
            	{"already_S_OF_A14" , 135},
            	{"S_OF_A14" , 136},
            	{"relevant_evt_OF_A14" , 137},
            	{"required_OF_A16" , 138},
            	{"already_S_OF_A16" , 139},
            	{"S_OF_A16" , 140},
            	{"relevant_evt_OF_A16" , 141},
            	{"failF_OF_A16" , 142},
            	{"required_OF_A17" , 143},
            	{"already_S_OF_A17" , 144},
            	{"S_OF_A17" , 145},
            	{"relevant_evt_OF_A17" , 146},
            	{"required_OF_A19" , 147},
            	{"already_S_OF_A19" , 148},
            	{"S_OF_A19" , 149},
            	{"relevant_evt_OF_A19" , 150},
            	{"failF_OF_A19" , 151},
            	{"required_OF_A2" , 152},
            	{"already_S_OF_A2" , 153},
            	{"S_OF_A2" , 154},
            	{"relevant_evt_OF_A2" , 155},
            	{"required_OF_A20" , 156},
            	{"already_S_OF_A20" , 157},
            	{"S_OF_A20" , 158},
            	{"relevant_evt_OF_A20" , 159},
            	{"required_OF_A22" , 160},
            	{"already_S_OF_A22" , 161},
            	{"S_OF_A22" , 162},
            	{"relevant_evt_OF_A22" , 163},
            	{"failF_OF_A22" , 164},
            	{"required_OF_A23" , 165},
            	{"already_S_OF_A23" , 166},
            	{"S_OF_A23" , 167},
            	{"relevant_evt_OF_A23" , 168},
            	{"required_OF_A25" , 169},
            	{"already_S_OF_A25" , 170},
            	{"S_OF_A25" , 171},
            	{"relevant_evt_OF_A25" , 172},
            	{"failF_OF_A25" , 173},
            	{"required_OF_A26" , 174},
            	{"already_S_OF_A26" , 175},
            	{"S_OF_A26" , 176},
            	{"relevant_evt_OF_A26" , 177},
            	{"required_OF_A28" , 178},
            	{"already_S_OF_A28" , 179},
            	{"S_OF_A28" , 180},
            	{"relevant_evt_OF_A28" , 181},
            	{"failF_OF_A28" , 182},
            	{"required_OF_A29" , 183},
            	{"already_S_OF_A29" , 184},
            	{"S_OF_A29" , 185},
            	{"relevant_evt_OF_A29" , 186},
            	{"failF_OF_A29" , 187},
            	{"required_OF_A30" , 188},
            	{"already_S_OF_A30" , 189},
            	{"S_OF_A30" , 190},
            	{"relevant_evt_OF_A30" , 191},
            	{"required_OF_A31" , 192},
            	{"already_S_OF_A31" , 193},
            	{"S_OF_A31" , 194},
            	{"relevant_evt_OF_A31" , 195},
            	{"required_OF_A33" , 196},
            	{"already_S_OF_A33" , 197},
            	{"S_OF_A33" , 198},
            	{"relevant_evt_OF_A33" , 199},
            	{"failF_OF_A33" , 200},
            	{"required_OF_A34" , 201},
            	{"already_S_OF_A34" , 202},
            	{"S_OF_A34" , 203},
            	{"relevant_evt_OF_A34" , 204},
            	{"required_OF_A36" , 205},
            	{"already_S_OF_A36" , 206},
            	{"S_OF_A36" , 207},
            	{"relevant_evt_OF_A36" , 208},
            	{"failF_OF_A36" , 209},
            	{"required_OF_A37" , 210},
            	{"already_S_OF_A37" , 211},
            	{"S_OF_A37" , 212},
            	{"relevant_evt_OF_A37" , 213},
            	{"required_OF_A39" , 214},
            	{"already_S_OF_A39" , 215},
            	{"S_OF_A39" , 216},
            	{"relevant_evt_OF_A39" , 217},
            	{"failF_OF_A39" , 218},
            	{"required_OF_A4" , 219},
            	{"already_S_OF_A4" , 220},
            	{"S_OF_A4" , 221},
            	{"relevant_evt_OF_A4" , 222},
            	{"failF_OF_A4" , 223},
            	{"required_OF_A40" , 224},
            	{"already_S_OF_A40" , 225},
            	{"S_OF_A40" , 226},
            	{"relevant_evt_OF_A40" , 227},
            	{"required_OF_A41" , 228},
            	{"already_S_OF_A41" , 229},
            	{"S_OF_A41" , 230},
            	{"relevant_evt_OF_A41" , 231},
            	{"required_OF_A43" , 232},
            	{"already_S_OF_A43" , 233},
            	{"S_OF_A43" , 234},
            	{"relevant_evt_OF_A43" , 235},
            	{"required_OF_A44" , 236},
            	{"already_S_OF_A44" , 237},
            	{"S_OF_A44" , 238},
            	{"relevant_evt_OF_A44" , 239},
            	{"required_OF_A45" , 240},
            	{"already_S_OF_A45" , 241},
            	{"S_OF_A45" , 242},
            	{"relevant_evt_OF_A45" , 243},
            	{"required_OF_A46" , 244},
            	{"already_S_OF_A46" , 245},
            	{"S_OF_A46" , 246},
            	{"relevant_evt_OF_A46" , 247},
            	{"required_OF_A47" , 248},
            	{"already_S_OF_A47" , 249},
            	{"S_OF_A47" , 250},
            	{"relevant_evt_OF_A47" , 251},
            	{"required_OF_A48" , 252},
            	{"already_S_OF_A48" , 253},
            	{"S_OF_A48" , 254},
            	{"relevant_evt_OF_A48" , 255},
            	{"required_OF_A49" , 256},
            	{"already_S_OF_A49" , 257},
            	{"S_OF_A49" , 258},
            	{"relevant_evt_OF_A49" , 259},
            	{"required_OF_A5" , 260},
            	{"already_S_OF_A5" , 261},
            	{"S_OF_A5" , 262},
            	{"relevant_evt_OF_A5" , 263},
            	{"required_OF_A50" , 264},
            	{"already_S_OF_A50" , 265},
            	{"S_OF_A50" , 266},
            	{"relevant_evt_OF_A50" , 267},
            	{"required_OF_A51" , 268},
            	{"already_S_OF_A51" , 269},
            	{"S_OF_A51" , 270},
            	{"relevant_evt_OF_A51" , 271},
            	{"required_OF_A52" , 272},
            	{"already_S_OF_A52" , 273},
            	{"S_OF_A52" , 274},
            	{"relevant_evt_OF_A52" , 275},
            	{"required_OF_A53" , 276},
            	{"already_S_OF_A53" , 277},
            	{"S_OF_A53" , 278},
            	{"relevant_evt_OF_A53" , 279},
            	{"required_OF_A54" , 280},
            	{"already_S_OF_A54" , 281},
            	{"S_OF_A54" , 282},
            	{"relevant_evt_OF_A54" , 283},
            	{"required_OF_A55" , 284},
            	{"already_S_OF_A55" , 285},
            	{"S_OF_A55" , 286},
            	{"relevant_evt_OF_A55" , 287},
            	{"required_OF_A56" , 288},
            	{"already_S_OF_A56" , 289},
            	{"S_OF_A56" , 290},
            	{"relevant_evt_OF_A56" , 291},
            	{"required_OF_A57" , 292},
            	{"already_S_OF_A57" , 293},
            	{"S_OF_A57" , 294},
            	{"relevant_evt_OF_A57" , 295},
            	{"required_OF_A58" , 296},
            	{"already_S_OF_A58" , 297},
            	{"S_OF_A58" , 298},
            	{"relevant_evt_OF_A58" , 299},
            	{"required_OF_A59" , 300},
            	{"already_S_OF_A59" , 301},
            	{"S_OF_A59" , 302},
            	{"relevant_evt_OF_A59" , 303},
            	{"required_OF_A60" , 304},
            	{"already_S_OF_A60" , 305},
            	{"S_OF_A60" , 306},
            	{"relevant_evt_OF_A60" , 307},
            	{"required_OF_A61" , 308},
            	{"already_S_OF_A61" , 309},
            	{"S_OF_A61" , 310},
            	{"relevant_evt_OF_A61" , 311},
            	{"required_OF_A62" , 312},
            	{"already_S_OF_A62" , 313},
            	{"S_OF_A62" , 314},
            	{"relevant_evt_OF_A62" , 315},
            	{"required_OF_A63" , 316},
            	{"already_S_OF_A63" , 317},
            	{"S_OF_A63" , 318},
            	{"relevant_evt_OF_A63" , 319},
            	{"required_OF_A64" , 320},
            	{"already_S_OF_A64" , 321},
            	{"S_OF_A64" , 322},
            	{"relevant_evt_OF_A64" , 323},
            	{"required_OF_A65" , 324},
            	{"already_S_OF_A65" , 325},
            	{"S_OF_A65" , 326},
            	{"relevant_evt_OF_A65" , 327},
            	{"required_OF_A66" , 328},
            	{"already_S_OF_A66" , 329},
            	{"S_OF_A66" , 330},
            	{"relevant_evt_OF_A66" , 331},
            	{"required_OF_A67" , 332},
            	{"already_S_OF_A67" , 333},
            	{"S_OF_A67" , 334},
            	{"relevant_evt_OF_A67" , 335},
            	{"failF_OF_A67" , 336},
            	{"required_OF_A68" , 337},
            	{"already_S_OF_A68" , 338},
            	{"S_OF_A68" , 339},
            	{"relevant_evt_OF_A68" , 340},
            	{"failF_OF_A68" , 341},
            	{"required_OF_A69" , 342},
            	{"already_S_OF_A69" , 343},
            	{"S_OF_A69" , 344},
            	{"relevant_evt_OF_A69" , 345},
            	{"required_OF_A7" , 346},
            	{"already_S_OF_A7" , 347},
            	{"S_OF_A7" , 348},
            	{"relevant_evt_OF_A7" , 349},
            	{"failF_OF_A7" , 350},
            	{"required_OF_A70" , 351},
            	{"already_S_OF_A70" , 352},
            	{"S_OF_A70" , 353},
            	{"relevant_evt_OF_A70" , 354},
            	{"required_OF_A71" , 355},
            	{"already_S_OF_A71" , 356},
            	{"S_OF_A71" , 357},
            	{"relevant_evt_OF_A71" , 358},
            	{"required_OF_A72" , 359},
            	{"already_S_OF_A72" , 360},
            	{"S_OF_A72" , 361},
            	{"relevant_evt_OF_A72" , 362},
            	{"required_OF_A73" , 363},
            	{"already_S_OF_A73" , 364},
            	{"S_OF_A73" , 365},
            	{"relevant_evt_OF_A73" , 366},
            	{"required_OF_A74" , 367},
            	{"already_S_OF_A74" , 368},
            	{"S_OF_A74" , 369},
            	{"relevant_evt_OF_A74" , 370},
            	{"required_OF_A75" , 371},
            	{"already_S_OF_A75" , 372},
            	{"S_OF_A75" , 373},
            	{"relevant_evt_OF_A75" , 374},
            	{"failF_OF_A75" , 375},
            	{"required_OF_A76" , 376},
            	{"already_S_OF_A76" , 377},
            	{"S_OF_A76" , 378},
            	{"relevant_evt_OF_A76" , 379},
            	{"failF_OF_A76" , 380},
            	{"required_OF_A77" , 381},
            	{"already_S_OF_A77" , 382},
            	{"S_OF_A77" , 383},
            	{"relevant_evt_OF_A77" , 384},
            	{"failF_OF_A77" , 385},
            	{"required_OF_A78" , 386},
            	{"already_S_OF_A78" , 387},
            	{"S_OF_A78" , 388},
            	{"relevant_evt_OF_A78" , 389},
            	{"required_OF_A8" , 390},
            	{"already_S_OF_A8" , 391},
            	{"S_OF_A8" , 392},
            	{"relevant_evt_OF_A8" , 393},
            	{"required_OF_A80" , 394},
            	{"already_S_OF_A80" , 395},
            	{"S_OF_A80" , 396},
            	{"relevant_evt_OF_A80" , 397},
            	{"failF_OF_A80" , 398},
            	{"required_OF_A81" , 399},
            	{"already_S_OF_A81" , 400},
            	{"S_OF_A81" , 401},
            	{"relevant_evt_OF_A81" , 402},
            	{"failF_OF_A81" , 403},
            	{"required_OF_A82" , 404},
            	{"already_S_OF_A82" , 405},
            	{"S_OF_A82" , 406},
            	{"relevant_evt_OF_A82" , 407},
            	{"failF_OF_A82" , 408},
            	{"required_OF_A83" , 409},
            	{"already_S_OF_A83" , 410},
            	{"S_OF_A83" , 411},
            	{"relevant_evt_OF_A83" , 412},
            	{"required_OF_A85" , 413},
            	{"already_S_OF_A85" , 414},
            	{"S_OF_A85" , 415},
            	{"relevant_evt_OF_A85" , 416},
            	{"required_OF_A86" , 417},
            	{"already_S_OF_A86" , 418},
            	{"S_OF_A86" , 419},
            	{"relevant_evt_OF_A86" , 420},
            	{"failF_OF_A86" , 421},
            	{"required_OF_A87" , 422},
            	{"already_S_OF_A87" , 423},
            	{"S_OF_A87" , 424},
            	{"relevant_evt_OF_A87" , 425},
            	{"failF_OF_A87" , 426},
            	{"required_OF_A88" , 427},
            	{"already_S_OF_A88" , 428},
            	{"S_OF_A88" , 429},
            	{"relevant_evt_OF_A88" , 430},
            	{"failF_OF_A88" , 431},
            	{"required_OF_A89" , 432},
            	{"already_S_OF_A89" , 433},
            	{"S_OF_A89" , 434},
            	{"relevant_evt_OF_A89" , 435},
            	{"required_OF_A91" , 436},
            	{"already_S_OF_A91" , 437},
            	{"S_OF_A91" , 438},
            	{"relevant_evt_OF_A91" , 439},
            	{"failF_OF_A91" , 440},
            	{"required_OF_A92" , 441},
            	{"already_S_OF_A92" , 442},
            	{"S_OF_A92" , 443},
            	{"relevant_evt_OF_A92" , 444},
            	{"failF_OF_A92" , 445},
            	{"required_OF_A93" , 446},
            	{"already_S_OF_A93" , 447},
            	{"S_OF_A93" , 448},
            	{"relevant_evt_OF_A93" , 449},
            	{"failF_OF_A93" , 450},
            	{"required_OF_A94" , 451},
            	{"already_S_OF_A94" , 452},
            	{"S_OF_A94" , 453},
            	{"relevant_evt_OF_A94" , 454},
            	{"required_OF_A96" , 455},
            	{"already_S_OF_A96" , 456},
            	{"S_OF_A96" , 457},
            	{"relevant_evt_OF_A96" , 458},
            	{"required_OF_A97" , 459},
            	{"already_S_OF_A97" , 460},
            	{"S_OF_A97" , 461},
            	{"relevant_evt_OF_A97" , 462},
            	{"failF_OF_A97" , 463},
            	{"required_OF_A98" , 464},
            	{"already_S_OF_A98" , 465},
            	{"S_OF_A98" , 466},
            	{"relevant_evt_OF_A98" , 467},
            	{"failF_OF_A98" , 468},
            	{"required_OF_A99" , 469},
            	{"already_S_OF_A99" , 470},
            	{"S_OF_A99" , 471},
            	{"relevant_evt_OF_A99" , 472},
            	{"failF_OF_A99" , 473},
            	{"required_OF_UE_1" , 474},
            	{"already_S_OF_UE_1" , 475},
            	{"S_OF_UE_1" , 476},
            	{"relevant_evt_OF_UE_1" , 477},
            	{"required_OF_f_A43" , 478},
            	{"already_S_OF_f_A43" , 479},
            	{"S_OF_f_A43" , 480},
            	{"relevant_evt_OF_f_A43" , 481},
            	{"failF_OF_f_A43" , 482},
            	{"required_OF_f_A44" , 483},
            	{"already_S_OF_f_A44" , 484},
            	{"S_OF_f_A44" , 485},
            	{"relevant_evt_OF_f_A44" , 486},
            	{"failF_OF_f_A44" , 487},
            	{"required_OF_f_A45" , 488},
            	{"already_S_OF_f_A45" , 489},
            	{"S_OF_f_A45" , 490},
            	{"relevant_evt_OF_f_A45" , 491},
            	{"failF_OF_f_A45" , 492},
            	{"required_OF_f_A46" , 493},
            	{"already_S_OF_f_A46" , 494},
            	{"S_OF_f_A46" , 495},
            	{"relevant_evt_OF_f_A46" , 496},
            	{"failF_OF_f_A46" , 497},
            	{"required_OF_f_A47" , 498},
            	{"already_S_OF_f_A47" , 499},
            	{"S_OF_f_A47" , 500},
            	{"relevant_evt_OF_f_A47" , 501},
            	{"failF_OF_f_A47" , 502},
            	{"required_OF_f_A48" , 503},
            	{"already_S_OF_f_A48" , 504},
            	{"S_OF_f_A48" , 505},
            	{"relevant_evt_OF_f_A48" , 506},
            	{"failF_OF_f_A48" , 507},
            	{"required_OF_f_A49" , 508},
            	{"already_S_OF_f_A49" , 509},
            	{"S_OF_f_A49" , 510},
            	{"relevant_evt_OF_f_A49" , 511},
            	{"failF_OF_f_A49" , 512},
            	{"required_OF_f_A51" , 513},
            	{"already_S_OF_f_A51" , 514},
            	{"S_OF_f_A51" , 515},
            	{"relevant_evt_OF_f_A51" , 516},
            	{"failF_OF_f_A51" , 517},
            	{"required_OF_f_A52" , 518},
            	{"already_S_OF_f_A52" , 519},
            	{"S_OF_f_A52" , 520},
            	{"relevant_evt_OF_f_A52" , 521},
            	{"failF_OF_f_A52" , 522},
            	{"required_OF_f_A54" , 523},
            	{"already_S_OF_f_A54" , 524},
            	{"S_OF_f_A54" , 525},
            	{"relevant_evt_OF_f_A54" , 526},
            	{"failF_OF_f_A54" , 527},
            	{"required_OF_f_A55" , 528},
            	{"already_S_OF_f_A55" , 529},
            	{"S_OF_f_A55" , 530},
            	{"relevant_evt_OF_f_A55" , 531},
            	{"failF_OF_f_A55" , 532},
            	{"required_OF_f_A57" , 533},
            	{"already_S_OF_f_A57" , 534},
            	{"S_OF_f_A57" , 535},
            	{"relevant_evt_OF_f_A57" , 536},
            	{"failF_OF_f_A57" , 537},
            	{"required_OF_f_A58" , 538},
            	{"already_S_OF_f_A58" , 539},
            	{"S_OF_f_A58" , 540},
            	{"relevant_evt_OF_f_A58" , 541},
            	{"failF_OF_f_A58" , 542},
            	{"required_OF_f_A59" , 543},
            	{"already_S_OF_f_A59" , 544},
            	{"S_OF_f_A59" , 545},
            	{"relevant_evt_OF_f_A59" , 546},
            	{"failF_OF_f_A59" , 547},
            	{"required_OF_f_A60" , 548},
            	{"already_S_OF_f_A60" , 549},
            	{"S_OF_f_A60" , 550},
            	{"relevant_evt_OF_f_A60" , 551},
            	{"failF_OF_f_A60" , 552},
            	{"required_OF_f_A61" , 553},
            	{"already_S_OF_f_A61" , 554},
            	{"S_OF_f_A61" , 555},
            	{"relevant_evt_OF_f_A61" , 556},
            	{"failF_OF_f_A61" , 557},
            	{"required_OF_f_A62" , 558},
            	{"already_S_OF_f_A62" , 559},
            	{"S_OF_f_A62" , 560},
            	{"relevant_evt_OF_f_A62" , 561},
            	{"failF_OF_f_A62" , 562},
            	{"required_OF_f_A63" , 563},
            	{"already_S_OF_f_A63" , 564},
            	{"S_OF_f_A63" , 565},
            	{"relevant_evt_OF_f_A63" , 566},
            	{"failF_OF_f_A63" , 567},
            	{"required_OF_f_A64" , 568},
            	{"already_S_OF_f_A64" , 569},
            	{"S_OF_f_A64" , 570},
            	{"relevant_evt_OF_f_A64" , 571},
            	{"failF_OF_f_A64" , 572},
            	{"required_OF_f_A65" , 573},
            	{"already_S_OF_f_A65" , 574},
            	{"S_OF_f_A65" , 575},
            	{"relevant_evt_OF_f_A65" , 576},
            	{"failF_OF_f_A65" , 577},
            	{"required_OF_f_A66" , 578},
            	{"already_S_OF_f_A66" , 579},
            	{"S_OF_f_A66" , 580},
            	{"relevant_evt_OF_f_A66" , 581},
            	{"failF_OF_f_A66" , 582},
            	{"required_OF_i_A43" , 583},
            	{"already_S_OF_i_A43" , 584},
            	{"S_OF_i_A43" , 585},
            	{"relevant_evt_OF_i_A43" , 586},
            	{"failI_OF_i_A43" , 587},
            	{"to_be_fired_OF_i_A43" , 588},
            	{"already_standby_OF_i_A43" , 589},
            	{"already_required_OF_i_A43" , 590},
            	{"required_OF_i_A44" , 591},
            	{"already_S_OF_i_A44" , 592},
            	{"S_OF_i_A44" , 593},
            	{"relevant_evt_OF_i_A44" , 594},
            	{"failI_OF_i_A44" , 595},
            	{"to_be_fired_OF_i_A44" , 596},
            	{"already_standby_OF_i_A44" , 597},
            	{"already_required_OF_i_A44" , 598},
            	{"required_OF_i_A45" , 599},
            	{"already_S_OF_i_A45" , 600},
            	{"S_OF_i_A45" , 601},
            	{"relevant_evt_OF_i_A45" , 602},
            	{"failI_OF_i_A45" , 603},
            	{"to_be_fired_OF_i_A45" , 604},
            	{"already_standby_OF_i_A45" , 605},
            	{"already_required_OF_i_A45" , 606},
            	{"required_OF_i_A46" , 607},
            	{"already_S_OF_i_A46" , 608},
            	{"S_OF_i_A46" , 609},
            	{"relevant_evt_OF_i_A46" , 610},
            	{"failI_OF_i_A46" , 611},
            	{"to_be_fired_OF_i_A46" , 612},
            	{"already_standby_OF_i_A46" , 613},
            	{"already_required_OF_i_A46" , 614},
            	{"required_OF_i_A47" , 615},
            	{"already_S_OF_i_A47" , 616},
            	{"S_OF_i_A47" , 617},
            	{"relevant_evt_OF_i_A47" , 618},
            	{"failI_OF_i_A47" , 619},
            	{"to_be_fired_OF_i_A47" , 620},
            	{"already_standby_OF_i_A47" , 621},
            	{"already_required_OF_i_A47" , 622},
            	{"required_OF_i_A48" , 623},
            	{"already_S_OF_i_A48" , 624},
            	{"S_OF_i_A48" , 625},
            	{"relevant_evt_OF_i_A48" , 626},
            	{"failI_OF_i_A48" , 627},
            	{"to_be_fired_OF_i_A48" , 628},
            	{"already_standby_OF_i_A48" , 629},
            	{"already_required_OF_i_A48" , 630},
            	{"required_OF_i_A49" , 631},
            	{"already_S_OF_i_A49" , 632},
            	{"S_OF_i_A49" , 633},
            	{"relevant_evt_OF_i_A49" , 634},
            	{"failI_OF_i_A49" , 635},
            	{"to_be_fired_OF_i_A49" , 636},
            	{"already_standby_OF_i_A49" , 637},
            	{"already_required_OF_i_A49" , 638},
            	{"required_OF_i_A51" , 639},
            	{"already_S_OF_i_A51" , 640},
            	{"S_OF_i_A51" , 641},
            	{"relevant_evt_OF_i_A51" , 642},
            	{"failI_OF_i_A51" , 643},
            	{"to_be_fired_OF_i_A51" , 644},
            	{"already_standby_OF_i_A51" , 645},
            	{"already_required_OF_i_A51" , 646},
            	{"required_OF_i_A52" , 647},
            	{"already_S_OF_i_A52" , 648},
            	{"S_OF_i_A52" , 649},
            	{"relevant_evt_OF_i_A52" , 650},
            	{"failI_OF_i_A52" , 651},
            	{"to_be_fired_OF_i_A52" , 652},
            	{"already_standby_OF_i_A52" , 653},
            	{"already_required_OF_i_A52" , 654},
            	{"required_OF_i_A54" , 655},
            	{"already_S_OF_i_A54" , 656},
            	{"S_OF_i_A54" , 657},
            	{"relevant_evt_OF_i_A54" , 658},
            	{"failI_OF_i_A54" , 659},
            	{"to_be_fired_OF_i_A54" , 660},
            	{"already_standby_OF_i_A54" , 661},
            	{"already_required_OF_i_A54" , 662},
            	{"required_OF_i_A55" , 663},
            	{"already_S_OF_i_A55" , 664},
            	{"S_OF_i_A55" , 665},
            	{"relevant_evt_OF_i_A55" , 666},
            	{"failI_OF_i_A55" , 667},
            	{"to_be_fired_OF_i_A55" , 668},
            	{"already_standby_OF_i_A55" , 669},
            	{"already_required_OF_i_A55" , 670},
            	{"required_OF_i_A57" , 671},
            	{"already_S_OF_i_A57" , 672},
            	{"S_OF_i_A57" , 673},
            	{"relevant_evt_OF_i_A57" , 674},
            	{"failI_OF_i_A57" , 675},
            	{"to_be_fired_OF_i_A57" , 676},
            	{"already_standby_OF_i_A57" , 677},
            	{"already_required_OF_i_A57" , 678},
            	{"required_OF_i_A58" , 679},
            	{"already_S_OF_i_A58" , 680},
            	{"S_OF_i_A58" , 681},
            	{"relevant_evt_OF_i_A58" , 682},
            	{"failI_OF_i_A58" , 683},
            	{"to_be_fired_OF_i_A58" , 684},
            	{"already_standby_OF_i_A58" , 685},
            	{"already_required_OF_i_A58" , 686},
            	{"required_OF_i_A59" , 687},
            	{"already_S_OF_i_A59" , 688},
            	{"S_OF_i_A59" , 689},
            	{"relevant_evt_OF_i_A59" , 690},
            	{"failI_OF_i_A59" , 691},
            	{"to_be_fired_OF_i_A59" , 692},
            	{"already_standby_OF_i_A59" , 693},
            	{"already_required_OF_i_A59" , 694},
            	{"required_OF_i_A60" , 695},
            	{"already_S_OF_i_A60" , 696},
            	{"S_OF_i_A60" , 697},
            	{"relevant_evt_OF_i_A60" , 698},
            	{"failI_OF_i_A60" , 699},
            	{"to_be_fired_OF_i_A60" , 700},
            	{"already_standby_OF_i_A60" , 701},
            	{"already_required_OF_i_A60" , 702},
            	{"required_OF_i_A61" , 703},
            	{"already_S_OF_i_A61" , 704},
            	{"S_OF_i_A61" , 705},
            	{"relevant_evt_OF_i_A61" , 706},
            	{"failI_OF_i_A61" , 707},
            	{"to_be_fired_OF_i_A61" , 708},
            	{"already_standby_OF_i_A61" , 709},
            	{"already_required_OF_i_A61" , 710},
            	{"required_OF_i_A62" , 711},
            	{"already_S_OF_i_A62" , 712},
            	{"S_OF_i_A62" , 713},
            	{"relevant_evt_OF_i_A62" , 714},
            	{"failI_OF_i_A62" , 715},
            	{"to_be_fired_OF_i_A62" , 716},
            	{"already_standby_OF_i_A62" , 717},
            	{"already_required_OF_i_A62" , 718},
            	{"required_OF_i_A63" , 719},
            	{"already_S_OF_i_A63" , 720},
            	{"S_OF_i_A63" , 721},
            	{"relevant_evt_OF_i_A63" , 722},
            	{"failI_OF_i_A63" , 723},
            	{"to_be_fired_OF_i_A63" , 724},
            	{"already_standby_OF_i_A63" , 725},
            	{"already_required_OF_i_A63" , 726},
            	{"required_OF_i_A64" , 727},
            	{"already_S_OF_i_A64" , 728},
            	{"S_OF_i_A64" , 729},
            	{"relevant_evt_OF_i_A64" , 730},
            	{"failI_OF_i_A64" , 731},
            	{"to_be_fired_OF_i_A64" , 732},
            	{"already_standby_OF_i_A64" , 733},
            	{"already_required_OF_i_A64" , 734},
            	{"required_OF_i_A65" , 735},
            	{"already_S_OF_i_A65" , 736},
            	{"S_OF_i_A65" , 737},
            	{"relevant_evt_OF_i_A65" , 738},
            	{"failI_OF_i_A65" , 739},
            	{"to_be_fired_OF_i_A65" , 740},
            	{"already_standby_OF_i_A65" , 741},
            	{"already_required_OF_i_A65" , 742},
            	{"required_OF_i_A66" , 743},
            	{"already_S_OF_i_A66" , 744},
            	{"S_OF_i_A66" , 745},
            	{"relevant_evt_OF_i_A66" , 746},
            	{"failI_OF_i_A66" , 747},
            	{"to_be_fired_OF_i_A66" , 748},
            	{"already_standby_OF_i_A66" , 749},
            	{"already_required_OF_i_A66" , 750}},

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
                    751 ,
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
            bool REINITIALISATION_OF_required_OF_A102 ;
            bool REINITIALISATION_OF_S_OF_A102 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A102 ;
            bool REINITIALISATION_OF_required_OF_A103 ;
            bool REINITIALISATION_OF_S_OF_A103 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A103 ;
            bool REINITIALISATION_OF_required_OF_A104 ;
            bool REINITIALISATION_OF_S_OF_A104 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A104 ;
            bool REINITIALISATION_OF_required_OF_A105 ;
            bool REINITIALISATION_OF_S_OF_A105 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A105 ;
            bool REINITIALISATION_OF_required_OF_A107 ;
            bool REINITIALISATION_OF_S_OF_A107 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A107 ;
            bool REINITIALISATION_OF_required_OF_A108 ;
            bool REINITIALISATION_OF_S_OF_A108 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A108 ;
            bool REINITIALISATION_OF_required_OF_A109 ;
            bool REINITIALISATION_OF_S_OF_A109 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A109 ;
            bool REINITIALISATION_OF_required_OF_A11 ;
            bool REINITIALISATION_OF_S_OF_A11 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A11 ;
            bool REINITIALISATION_OF_required_OF_A110 ;
            bool REINITIALISATION_OF_S_OF_A110 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A110 ;
            bool REINITIALISATION_OF_required_OF_A111 ;
            bool REINITIALISATION_OF_S_OF_A111 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A111 ;
            bool REINITIALISATION_OF_required_OF_A113 ;
            bool REINITIALISATION_OF_S_OF_A113 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A113 ;
            bool REINITIALISATION_OF_required_OF_A114 ;
            bool REINITIALISATION_OF_S_OF_A114 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A114 ;
            bool REINITIALISATION_OF_required_OF_A115 ;
            bool REINITIALISATION_OF_S_OF_A115 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A115 ;
            bool REINITIALISATION_OF_required_OF_A116 ;
            bool REINITIALISATION_OF_S_OF_A116 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A116 ;
            bool REINITIALISATION_OF_required_OF_A118 ;
            bool REINITIALISATION_OF_S_OF_A118 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A118 ;
            bool REINITIALISATION_OF_required_OF_A119 ;
            bool REINITIALISATION_OF_S_OF_A119 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A119 ;
            bool REINITIALISATION_OF_required_OF_A120 ;
            bool REINITIALISATION_OF_S_OF_A120 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A120 ;
            bool REINITIALISATION_OF_required_OF_A121 ;
            bool REINITIALISATION_OF_S_OF_A121 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A121 ;
            bool REINITIALISATION_OF_required_OF_A122 ;
            bool REINITIALISATION_OF_S_OF_A122 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A122 ;
            bool REINITIALISATION_OF_required_OF_A124 ;
            bool REINITIALISATION_OF_S_OF_A124 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A124 ;
            bool REINITIALISATION_OF_required_OF_A125 ;
            bool REINITIALISATION_OF_S_OF_A125 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A125 ;
            bool REINITIALISATION_OF_required_OF_A126 ;
            bool REINITIALISATION_OF_S_OF_A126 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A126 ;
            bool REINITIALISATION_OF_required_OF_A127 ;
            bool REINITIALISATION_OF_S_OF_A127 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A127 ;
            bool REINITIALISATION_OF_required_OF_A129 ;
            bool REINITIALISATION_OF_S_OF_A129 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A129 ;
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
            bool REINITIALISATION_OF_required_OF_A31 ;
            bool REINITIALISATION_OF_S_OF_A31 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A31 ;
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
            bool REINITIALISATION_OF_required_OF_A64 ;
            bool REINITIALISATION_OF_S_OF_A64 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A64 ;
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
            bool REINITIALISATION_OF_required_OF_A69 ;
            bool REINITIALISATION_OF_S_OF_A69 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A69 ;
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
            bool REINITIALISATION_OF_required_OF_A75 ;
            bool REINITIALISATION_OF_S_OF_A75 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A75 ;
            bool REINITIALISATION_OF_required_OF_A76 ;
            bool REINITIALISATION_OF_S_OF_A76 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A76 ;
            bool REINITIALISATION_OF_required_OF_A77 ;
            bool REINITIALISATION_OF_S_OF_A77 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A77 ;
            bool REINITIALISATION_OF_required_OF_A78 ;
            bool REINITIALISATION_OF_S_OF_A78 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A78 ;
            bool REINITIALISATION_OF_required_OF_A8 ;
            bool REINITIALISATION_OF_S_OF_A8 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A8 ;
            bool REINITIALISATION_OF_required_OF_A80 ;
            bool REINITIALISATION_OF_S_OF_A80 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A80 ;
            bool REINITIALISATION_OF_required_OF_A81 ;
            bool REINITIALISATION_OF_S_OF_A81 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A81 ;
            bool REINITIALISATION_OF_required_OF_A82 ;
            bool REINITIALISATION_OF_S_OF_A82 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A82 ;
            bool REINITIALISATION_OF_required_OF_A83 ;
            bool REINITIALISATION_OF_S_OF_A83 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A83 ;
            bool REINITIALISATION_OF_required_OF_A85 ;
            bool REINITIALISATION_OF_S_OF_A85 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A85 ;
            bool REINITIALISATION_OF_required_OF_A86 ;
            bool REINITIALISATION_OF_S_OF_A86 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A86 ;
            bool REINITIALISATION_OF_required_OF_A87 ;
            bool REINITIALISATION_OF_S_OF_A87 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A87 ;
            bool REINITIALISATION_OF_required_OF_A88 ;
            bool REINITIALISATION_OF_S_OF_A88 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A88 ;
            bool REINITIALISATION_OF_required_OF_A89 ;
            bool REINITIALISATION_OF_S_OF_A89 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A89 ;
            bool REINITIALISATION_OF_required_OF_A91 ;
            bool REINITIALISATION_OF_S_OF_A91 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A91 ;
            bool REINITIALISATION_OF_required_OF_A92 ;
            bool REINITIALISATION_OF_S_OF_A92 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A92 ;
            bool REINITIALISATION_OF_required_OF_A93 ;
            bool REINITIALISATION_OF_S_OF_A93 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A93 ;
            bool REINITIALISATION_OF_required_OF_A94 ;
            bool REINITIALISATION_OF_S_OF_A94 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A94 ;
            bool REINITIALISATION_OF_required_OF_A96 ;
            bool REINITIALISATION_OF_S_OF_A96 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A96 ;
            bool REINITIALISATION_OF_required_OF_A97 ;
            bool REINITIALISATION_OF_S_OF_A97 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A97 ;
            bool REINITIALISATION_OF_required_OF_A98 ;
            bool REINITIALISATION_OF_S_OF_A98 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A98 ;
            bool REINITIALISATION_OF_required_OF_A99 ;
            bool REINITIALISATION_OF_S_OF_A99 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A99 ;
            bool REINITIALISATION_OF_required_OF_UE_1 ;
            bool REINITIALISATION_OF_S_OF_UE_1 ;
            bool REINITIALISATION_OF_relevant_evt_OF_UE_1 ;
            bool REINITIALISATION_OF_required_OF_f_A43 ;
            bool REINITIALISATION_OF_S_OF_f_A43 ;
            bool REINITIALISATION_OF_relevant_evt_OF_f_A43 ;
            bool REINITIALISATION_OF_required_OF_f_A44 ;
            bool REINITIALISATION_OF_S_OF_f_A44 ;
            bool REINITIALISATION_OF_relevant_evt_OF_f_A44 ;
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
            bool REINITIALISATION_OF_required_OF_f_A51 ;
            bool REINITIALISATION_OF_S_OF_f_A51 ;
            bool REINITIALISATION_OF_relevant_evt_OF_f_A51 ;
            bool REINITIALISATION_OF_required_OF_f_A52 ;
            bool REINITIALISATION_OF_S_OF_f_A52 ;
            bool REINITIALISATION_OF_relevant_evt_OF_f_A52 ;
            bool REINITIALISATION_OF_required_OF_f_A54 ;
            bool REINITIALISATION_OF_S_OF_f_A54 ;
            bool REINITIALISATION_OF_relevant_evt_OF_f_A54 ;
            bool REINITIALISATION_OF_required_OF_f_A55 ;
            bool REINITIALISATION_OF_S_OF_f_A55 ;
            bool REINITIALISATION_OF_relevant_evt_OF_f_A55 ;
            bool REINITIALISATION_OF_required_OF_f_A57 ;
            bool REINITIALISATION_OF_S_OF_f_A57 ;
            bool REINITIALISATION_OF_relevant_evt_OF_f_A57 ;
            bool REINITIALISATION_OF_required_OF_f_A58 ;
            bool REINITIALISATION_OF_S_OF_f_A58 ;
            bool REINITIALISATION_OF_relevant_evt_OF_f_A58 ;
            bool REINITIALISATION_OF_required_OF_f_A59 ;
            bool REINITIALISATION_OF_S_OF_f_A59 ;
            bool REINITIALISATION_OF_relevant_evt_OF_f_A59 ;
            bool REINITIALISATION_OF_required_OF_f_A60 ;
            bool REINITIALISATION_OF_S_OF_f_A60 ;
            bool REINITIALISATION_OF_relevant_evt_OF_f_A60 ;
            bool REINITIALISATION_OF_required_OF_f_A61 ;
            bool REINITIALISATION_OF_S_OF_f_A61 ;
            bool REINITIALISATION_OF_relevant_evt_OF_f_A61 ;
            bool REINITIALISATION_OF_required_OF_f_A62 ;
            bool REINITIALISATION_OF_S_OF_f_A62 ;
            bool REINITIALISATION_OF_relevant_evt_OF_f_A62 ;
            bool REINITIALISATION_OF_required_OF_f_A63 ;
            bool REINITIALISATION_OF_S_OF_f_A63 ;
            bool REINITIALISATION_OF_relevant_evt_OF_f_A63 ;
            bool REINITIALISATION_OF_required_OF_f_A64 ;
            bool REINITIALISATION_OF_S_OF_f_A64 ;
            bool REINITIALISATION_OF_relevant_evt_OF_f_A64 ;
            bool REINITIALISATION_OF_required_OF_f_A65 ;
            bool REINITIALISATION_OF_S_OF_f_A65 ;
            bool REINITIALISATION_OF_relevant_evt_OF_f_A65 ;
            bool REINITIALISATION_OF_required_OF_f_A66 ;
            bool REINITIALISATION_OF_S_OF_f_A66 ;
            bool REINITIALISATION_OF_relevant_evt_OF_f_A66 ;
            bool REINITIALISATION_OF_required_OF_i_A43 ;
            bool REINITIALISATION_OF_S_OF_i_A43 ;
            bool REINITIALISATION_OF_relevant_evt_OF_i_A43 ;
            bool REINITIALISATION_OF_to_be_fired_OF_i_A43 ;
            bool REINITIALISATION_OF_required_OF_i_A44 ;
            bool REINITIALISATION_OF_S_OF_i_A44 ;
            bool REINITIALISATION_OF_relevant_evt_OF_i_A44 ;
            bool REINITIALISATION_OF_to_be_fired_OF_i_A44 ;
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
            bool REINITIALISATION_OF_required_OF_i_A51 ;
            bool REINITIALISATION_OF_S_OF_i_A51 ;
            bool REINITIALISATION_OF_relevant_evt_OF_i_A51 ;
            bool REINITIALISATION_OF_to_be_fired_OF_i_A51 ;
            bool REINITIALISATION_OF_required_OF_i_A52 ;
            bool REINITIALISATION_OF_S_OF_i_A52 ;
            bool REINITIALISATION_OF_relevant_evt_OF_i_A52 ;
            bool REINITIALISATION_OF_to_be_fired_OF_i_A52 ;
            bool REINITIALISATION_OF_required_OF_i_A54 ;
            bool REINITIALISATION_OF_S_OF_i_A54 ;
            bool REINITIALISATION_OF_relevant_evt_OF_i_A54 ;
            bool REINITIALISATION_OF_to_be_fired_OF_i_A54 ;
            bool REINITIALISATION_OF_required_OF_i_A55 ;
            bool REINITIALISATION_OF_S_OF_i_A55 ;
            bool REINITIALISATION_OF_relevant_evt_OF_i_A55 ;
            bool REINITIALISATION_OF_to_be_fired_OF_i_A55 ;
            bool REINITIALISATION_OF_required_OF_i_A57 ;
            bool REINITIALISATION_OF_S_OF_i_A57 ;
            bool REINITIALISATION_OF_relevant_evt_OF_i_A57 ;
            bool REINITIALISATION_OF_to_be_fired_OF_i_A57 ;
            bool REINITIALISATION_OF_required_OF_i_A58 ;
            bool REINITIALISATION_OF_S_OF_i_A58 ;
            bool REINITIALISATION_OF_relevant_evt_OF_i_A58 ;
            bool REINITIALISATION_OF_to_be_fired_OF_i_A58 ;
            bool REINITIALISATION_OF_required_OF_i_A59 ;
            bool REINITIALISATION_OF_S_OF_i_A59 ;
            bool REINITIALISATION_OF_relevant_evt_OF_i_A59 ;
            bool REINITIALISATION_OF_to_be_fired_OF_i_A59 ;
            bool REINITIALISATION_OF_required_OF_i_A60 ;
            bool REINITIALISATION_OF_S_OF_i_A60 ;
            bool REINITIALISATION_OF_relevant_evt_OF_i_A60 ;
            bool REINITIALISATION_OF_to_be_fired_OF_i_A60 ;
            bool REINITIALISATION_OF_required_OF_i_A61 ;
            bool REINITIALISATION_OF_S_OF_i_A61 ;
            bool REINITIALISATION_OF_relevant_evt_OF_i_A61 ;
            bool REINITIALISATION_OF_to_be_fired_OF_i_A61 ;
            bool REINITIALISATION_OF_required_OF_i_A62 ;
            bool REINITIALISATION_OF_S_OF_i_A62 ;
            bool REINITIALISATION_OF_relevant_evt_OF_i_A62 ;
            bool REINITIALISATION_OF_to_be_fired_OF_i_A62 ;
            bool REINITIALISATION_OF_required_OF_i_A63 ;
            bool REINITIALISATION_OF_S_OF_i_A63 ;
            bool REINITIALISATION_OF_relevant_evt_OF_i_A63 ;
            bool REINITIALISATION_OF_to_be_fired_OF_i_A63 ;
            bool REINITIALISATION_OF_required_OF_i_A64 ;
            bool REINITIALISATION_OF_S_OF_i_A64 ;
            bool REINITIALISATION_OF_relevant_evt_OF_i_A64 ;
            bool REINITIALISATION_OF_to_be_fired_OF_i_A64 ;
            bool REINITIALISATION_OF_required_OF_i_A65 ;
            bool REINITIALISATION_OF_S_OF_i_A65 ;
            bool REINITIALISATION_OF_relevant_evt_OF_i_A65 ;
            bool REINITIALISATION_OF_to_be_fired_OF_i_A65 ;
            bool REINITIALISATION_OF_required_OF_i_A66 ;
            bool REINITIALISATION_OF_S_OF_i_A66 ;
            bool REINITIALISATION_OF_relevant_evt_OF_i_A66 ;
            bool REINITIALISATION_OF_to_be_fired_OF_i_A66 ;
            
		/* ---------- DECLARATION OF CONSTANTS ------------ */
			bool const force_relevant_events_OF_A104 = false;
			std::string const calculate_required_OF_A61 = "fn_fathers_and_trig";
			double const mu_OF_f_A47 = 0.1;
			bool const force_relevant_events_OF_A20 = false;
			std::string const when_to_check_OF_i_A61 = "not_req_to_req";
			std::string const calculate_required_OF_f_A46 = "fn_fathers_and_trig";
			double const mu_OF_A108 = 0.1;
			double const lambda_OF_A67 = 1e-07;
			bool const force_relevant_events_OF_A4 = false;
			std::string const trigger_kind_OF_t_dep_12 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_f_A55 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A13 = "fn_fathers_and_trig";
			std::string const trigger_kind_OF_t_dep_17 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_i_A62 = "fn_fathers_and_trig";
			double const mu_OF_A68 = 0.1;
			std::string const when_to_check_OF_i_A54 = "not_req_to_req";
			double const lambda_OF_A98 = 4e-05;
			bool const force_relevant_events_OF_A71 = false;
			bool const force_relevant_events_OF_A97 = false;
			double const mu_OF_A121 = 0.1;
			std::string const when_to_check_OF_i_A59 = "not_req_to_req";
			std::string const when_to_check_OF_i_A58 = "not_req_to_req";
			bool const force_relevant_events_OF_A70 = false;
			bool const force_relevant_events_OF_A129 = false;
			double const mu_OF_f_A46 = 0.1;
			std::string const calculate_required_OF_A40 = "fn_fathers_and_trig";
			std::string const trigger_kind_OF_t_seq_5 = "equal_to_S_trig";
			bool const failI_FROZEN_OF_i_A52 = false;
			double const mu_OF_A103 = 0.1;
			std::string const calculate_required_OF_A86 = "equal_to_S_trig";
			double const mu_OF_f_A55 = 0.1;
			bool const force_relevant_events_OF_A120 = false;
			bool const force_relevant_events_OF_f_A58 = false;
			std::string const trigger_kind_OF_t_dep_11 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_i_A43 = false;
			bool const force_relevant_events_OF_A39 = false;
			double const gamma_OF_i_A64 = 1;
			std::string const trigger_kind_OF_t_dep_16 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_A125 = false;
			bool const force_relevant_events_OF_A99 = false;
			bool const failF_FROZEN_OF_A104 = false;
			std::string const calculate_required_OF_A114 = "fn_fathers_and_trig";
			bool const failI_FROZEN_OF_i_A57 = false;
			bool const failF_FROZEN_OF_A4 = false;
			std::string const calculate_required_OF_f_A44 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A116 = false;
			double const lambda_OF_A33 = 2e-07;
			bool const force_relevant_events_OF_A48 = false;
			std::string const calculate_required_OF_A50 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A96 = false;
			bool const force_relevant_events_OF_A126 = false;
			double const mu_OF_A29 = 0.1;
			bool const force_relevant_events_OF_A74 = false;
			double const lambda_OF_A19 = 0;
			double const mu_OF_A124 = 0.1;
			bool const failI_FROZEN_OF_i_A46 = false;
			bool const failF_FROZEN_OF_A97 = false;
			bool const failF_FROZEN_OF_A113 = false;
			bool const failI_FROZEN_OF_i_A60 = false;
			double const mu_OF_A7 = 0.1;
			bool const force_relevant_events_OF_A5 = false;
			std::string const trigger_kind_OF_t_seq_4 = "equal_to_S_trig";
			bool const failF_FROZEN_OF_A93 = false;
			std::string const calculate_required_OF_i_A51 = "fn_fathers_and_trig";
			double const mu_OF_A25 = 0.1;
			bool const failI_FROZEN_OF_i_A44 = false;
			std::string const calculate_required_OF_A69 = "fn_fathers_and_trig";
			double const mu_OF_f_A62 = 0.1;
			bool const failI_FROZEN_OF_i_A61 = false;
			bool const force_relevant_events_OF_A64 = false;
			double const lambda_OF_A7 = 0;
			std::string const trigger_kind_OF_t_dep_20 = "fn_fathers_and_trig";
			double const lambda_OF_A36 = 2e-07;
			bool const force_relevant_events_OF_i_A55 = false;
			bool const failF_FROZEN_OF_A99 = false;
			bool const force_relevant_events_OF_A56 = false;
			bool const force_relevant_events_OF_f_A51 = false;
			bool const force_relevant_events_OF_A26 = false;
			bool const force_relevant_events_OF_A37 = false;
			bool const force_relevant_events_OF_i_A45 = false;
			bool const force_relevant_events_OF_i_A48 = false;
			double const mu_OF_i_A51 = 0.1;
			double const mu_OF_A86 = 0.1;
			std::string const calculate_required_OF_A33 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A115 = false;
			bool const force_relevant_events_OF_f_A60 = false;
			double const gamma_OF_i_A57 = 1;
			double const mu_OF_f_A54 = 0.1;
			std::string const calculate_required_OF_A63 = "fn_fathers_and_trig";
			std::string const trigger_kind_OF_t_dep_9 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A52 = false;
			std::string const calculate_required_OF_A53 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A59 = "fn_fathers_and_trig";
			double const mu_OF_A81 = 0.1;
			std::string const calculate_required_OF_A120 = "fn_fathers_and_trig";
			double const mu_OF_f_A66 = 0.1;
			std::string const when_to_check_OF_i_A66 = "not_req_to_req";
			std::string const when_to_check_OF_i_A49 = "not_req_to_req";
			double const lambda_OF_A113 = 9.9e-07;
			bool const force_relevant_events_OF_A43 = false;
			std::string const calculate_required_OF_f_A64 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A51 = false;
			double const lambda_OF_f_A45 = 0;
			bool const force_relevant_events_OF_A94 = false;
			double const lambda_OF_f_A54 = 0;
			double const lambda_OF_A120 = 1e-07;
			std::string const calculate_required_OF_f_A52 = "fn_fathers_and_trig";
			double const mu_OF_f_A65 = 0.1;
			std::string const calculate_required_OF_A39 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_i_A65 = false;
			std::string const trigger_kind_OF_t_seq_8 = "equal_to_S_trig";
			bool const no_repair_OF___ARBRE__EIRM = true;
			double const mu_OF_A33 = 0.1;
			double const lambda_OF_f_A66 = 0;
			bool const force_relevant_events_OF_f_A47 = false;
			double const gamma_OF_i_A60 = 1;
			bool const force_relevant_events_OF_A108 = false;
			double const lambda_OF_f_A65 = 0;
			bool const failF_FROZEN_OF_A28 = false;
			double const lambda_OF_A114 = 1e-08;
			std::string const calculate_required_OF_f_A43 = "fn_fathers_and_trig";
			double const gamma_OF_i_A44 = 1;
			bool const failF_FROZEN_OF_f_A48 = false;
			std::string const calculate_required_OF_A10 = "fn_fathers_and_trig";
			double const mu_OF_i_A64 = 0.1;
			bool const failF_FROZEN_OF_f_A51 = false;
			double const gamma_OF_i_A61 = 1;
			std::string const calculate_required_OF_A96 = "fn_fathers_and_trig";
			bool const failI_FROZEN_OF_i_A62 = false;
			std::string const calculate_required_OF_A74 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A1 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A60 = false;
			bool const force_relevant_events_OF_A61 = false;
			std::string const calculate_required_OF_A110 = "fn_fathers_and_trig";
			double const lambda_OF_A126 = 1e-06;
			std::string const calculate_required_OF_A41 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_f_A46 = false;
			double const gamma_OF_i_A54 = 1;
			std::string const trigger_kind_OF_t_dep_15 = "fn_fathers_and_trig";
			double const mu_OF_A36 = 0.1;
			bool const force_relevant_events_OF_f_A55 = false;
			double const mu_OF_f_A43 = 0.1;
			std::string const calculate_required_OF_f_A49 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A13 = false;
			double const gamma_OF_i_A58 = 1;
			double const mu_OF_A1 = 0.1;
			std::string const trigger_kind_OF_t_seq_2 = "equal_to_S_trig";
			std::string const when_to_check_OF_i_A43 = "not_req_to_req";
			std::string const calculate_required_OF_i_A55 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A40 = false;
			std::string const calculate_required_OF_A37 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A77 = "fn_fathers_and_trig";
			std::string const when_to_check_OF_i_A52 = "not_req_to_req";
			double const mu_OF_f_A49 = 0.1;
			std::string const calculate_required_OF_UE_1 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_f_A59 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A115 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_f_A63 = false;
			std::string const calculate_required_OF_i_A63 = "fn_fathers_and_trig";
			double const lambda_OF_A115 = 1e-06;
			bool const force_relevant_events_OF_A124 = false;
			double const lambda_OF_A75 = 9.9e-06;
			bool const failI_FROZEN_OF_i_A47 = false;
			bool const failI_FROZEN_OF_i_A66 = false;
			bool const failI_FROZEN_OF_i_A49 = false;
			bool const force_relevant_events_OF_A30 = false;
			std::string const calculate_required_OF_A43 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A75 = false;
			std::string const calculate_required_OF_A51 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A8 = "fn_fathers_and_trig";
			double const mu_OF_A77 = 0.1;
			double const mu_OF_A87 = 0.1;
			bool const force_relevant_events_OF_f_A44 = false;
			std::string const calculate_required_OF_A91 = "equal_to_S_trig";
			double const mu_OF_A16 = 0.1;
			bool const force_relevant_events_OF_A50 = false;
			double const mu_OF_A82 = 0.1;
			double const mu_OF_A109 = 0.1;
			bool const force_relevant_events_OF_f_A62 = false;
			bool const failF_FROZEN_OF_A13 = false;
			double const mu_OF_i_A57 = 0.1;
			std::string const calculate_required_OF_f_A47 = "fn_fathers_and_trig";
			double const mu_OF_i_A63 = 0.1;
			double const lambda_OF_A119 = 9.9e-06;
			double const lambda_OF_A16 = 0;
			std::string const when_to_check_OF_i_A46 = "not_req_to_req";
			double const mu_OF_A76 = 0.1;
			bool const force_relevant_events_OF_i_A51 = false;
			std::string const calculate_required_OF_A68 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A86 = false;
			std::string const when_to_check_OF_i_A45 = "not_req_to_req";
			std::string const when_to_check_OF_i_A48 = "not_req_to_req";
			std::string const calculate_required_OF_A34 = "fn_fathers_and_trig";
			std::string const when_to_check_OF_i_A44 = "not_req_to_req";
			std::string const calculate_required_OF_A121 = "fn_fathers_and_trig";
			std::string const trigger_kind_OF_t_dep_0 = "fn_fathers_and_trig";
			double const mu_OF_i_A60 = 0.1;
			std::string const calculate_required_OF_A103 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_A124 = false;
			std::string const calculate_required_OF_i_A59 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A81 = false;
			std::string const calculate_required_OF_i_A58 = "fn_fathers_and_trig";
			std::string const trigger_kind_OF_t_dep_19 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A55 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_A114 = false;
			bool const failF_FROZEN_OF_A75 = false;
			double const lambda_OF_f_A48 = 0;
			bool const failF_FROZEN_OF_f_A44 = false;
			bool const force_relevant_events_OF_A102 = false;
			bool const failI_FROZEN_OF_i_A43 = false;
			bool const force_relevant_events_OF_A33 = false;
			double const lambda_OF_f_A61 = 0;
			std::string const when_to_check_OF_i_A65 = "not_req_to_req";
			std::string const calculate_required_OF_A46 = "fn_fathers_and_trig";
			double const gamma_OF_i_A66 = 1;
			double const gamma_OF_i_A49 = 1;
			double const mu_OF_i_A54 = 0.1;
			bool const force_relevant_events_OF_A63 = false;
			bool const force_relevant_events_OF_A122 = false;
			double const mu_OF_A98 = 0.1;
			double const lambda_OF_A104 = 1e-05;
			bool const force_relevant_events_OF_A53 = false;
			bool const force_relevant_events_OF_A59 = false;
			double const mu_OF_i_A59 = 0.1;
			double const mu_OF_i_A58 = 0.1;
			bool const force_relevant_events_OF_f_A64 = false;
			bool const failF_FROZEN_OF_A119 = false;
			bool const force_relevant_events_OF_f_A52 = false;
			std::string const calculate_required_OF_A92 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A29 = "fn_fathers_and_trig";
			double const mu_OF_A22 = 0.1;
			double const mu_OF_A91 = 0.1;
			std::string const trigger_kind_OF_t_seq_3 = "equal_to_S_trig";
			std::string const calculate_required_OF_A7 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A118 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A30 = "fn_fathers_and_trig";
			double const mu_OF_A19 = 0.1;
			double const lambda_OF_A22 = 0;
			bool const force_relevant_events_OF_A36 = false;
			std::string const calculate_required_OF_A25 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_f_A43 = false;
			std::string const calculate_required_OF_f_A62 = "fn_fathers_and_trig";
			double const lambda_OF_A124 = 9.9e-07;
			bool const force_relevant_events_OF_A10 = false;
			double const mu_OF_A92 = 0.1;
			bool const force_relevant_events_OF_A80 = false;
			bool const force_relevant_events_OF_A1 = false;
			std::string const when_to_check_OF_i_A62 = "not_req_to_req";
			bool const failF_FROZEN_OF_A102 = false;
			double const lambda_OF_f_A63 = 0;
			bool const force_relevant_events_OF_A110 = false;
			bool const failF_FROZEN_OF_A33 = false;
			bool const force_relevant_events_OF_A41 = false;
			bool const failI_FROZEN_OF_i_A55 = false;
			double const mu_OF_f_A57 = 0.1;
			bool const failI_FROZEN_OF_i_A45 = false;
			bool const failI_FROZEN_OF_i_A48 = false;
			bool const force_relevant_events_OF_f_A49 = false;
			bool const failF_FROZEN_OF_A120 = false;
			bool const failF_FROZEN_OF_f_A58 = false;
			double const gamma_OF_i_A43 = 1;
			std::string const calculate_required_OF_A88 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_f_A64 = false;
			std::string const calculate_required_OF_f_A45 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_f_A52 = false;
			double const lambda_OF_f_A57 = 0;
			bool const failF_FROZEN_OF_A39 = false;
			std::string const calculate_required_OF_f_A54 = "fn_fathers_and_trig";
			double const gamma_OF_i_A52 = 1;
			std::string const calculate_required_OF_A81 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_f_A66 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A97 = "equal_to_S_trig";
			std::string const calculate_required_OF_A113 = "equal_to_S_trig";
			bool const force_relevant_events_OF_A77 = false;
			std::string const calculate_required_OF_f_A65 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A87 = false;
			bool const force_relevant_events_OF_A109 = false;
			bool const failI_FROZEN_OF_i_A65 = false;
			double const mu_OF_A88 = 0.1;
			bool const force_relevant_events_OF_f_A59 = false;
			bool const failF_FROZEN_OF_A10 = false;
			double const mu_OF_f_A45 = 0.1;
			bool const failF_FROZEN_OF_A80 = false;
			bool const failF_FROZEN_OF_A126 = false;
			bool const failF_FROZEN_OF_A1 = false;
			bool const force_relevant_events_OF_i_A63 = false;
			std::string const calculate_required_OF_A122 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_A110 = false;
			std::string const when_to_check_OF_i_A47 = "not_req_to_req";
			std::string const calculate_required_OF_A125 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A47 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A8 = false;
			std::string const calculate_required_OF_i_A64 = "fn_fathers_and_trig";
			double const mu_OF_i_A66 = 0.1;
			bool const failF_FROZEN_OF_f_A49 = false;
			std::string const when_to_check_OF_i_A51 = "not_req_to_req";
			double const mu_OF_i_A49 = 0.1;
			double const lambda_OF_A108 = 9.9e-06;
			double const gamma_OF_i_A46 = 1;
			double const lambda_OF_A92 = 1e-08;
			std::string const trigger_kind_OF_t_dep_6 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A31 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A36 = "fn_fathers_and_trig";
			double const gamma_OF_i_A45 = 1;
			double const gamma_OF_i_A48 = 1;
			double const mu_OF_A125 = 0.1;
			double const mu_OF_A104 = 0.1;
			bool const force_relevant_events_OF_A17 = false;
			bool const force_relevant_events_OF_A68 = false;
			bool const failF_FROZEN_OF_A77 = false;
			bool const force_relevant_events_OF_A34 = false;
			std::string const calculate_required_OF_A93 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A121 = false;
			double const mu_OF_A4 = 0.1;
			double const lambda_OF_A1 = 1e-07;
			bool const failF_FROZEN_OF_A115 = false;
			bool const failF_FROZEN_OF_f_A59 = false;
			bool const force_relevant_events_OF_i_A54 = false;
			bool const failF_FROZEN_OF_f_A60 = false;
			std::string const calculate_required_OF_A23 = "fn_fathers_and_trig";
			double const lambda_OF_A110 = 1e-06;
			double const lambda_OF_A80 = 9.9e-07;
			bool const force_relevant_events_OF_A103 = false;
			bool const force_relevant_events_OF_i_A59 = false;
			bool const force_relevant_events_OF_i_A58 = false;
			bool const force_relevant_events_OF_A55 = false;
			double const lambda_OF_A4 = 0;
			std::string const trigger_kind_OF_t_seq_0 = "equal_to_S_trig";
			double const gamma_OF_i_A65 = 1;
			double const mu_OF_A97 = 0.1;
			double const mu_OF_A113 = 0.1;
			std::string const calculate_required_OF_A45 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_i_A52 = "fn_fathers_and_trig";
			double const mu_OF_A93 = 0.1;
			bool const force_relevant_events_OF_A44 = false;
			bool const force_relevant_events_OF_A46 = false;
			std::string const calculate_required_OF_A62 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_f_A47 = false;
			bool const failF_FROZEN_OF_A108 = false;
			std::string const calculate_required_OF_A87 = "fn_fathers_and_trig";
			double const lambda_OF_A81 = 1e-08;
			double const mu_OF_i_A43 = 0.1;
			std::string const calculate_required_OF_A16 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A109 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A82 = "fn_fathers_and_trig";
			std::string const trigger_kind_OF_t_dep_7 = "fn_fathers_and_trig";
			double const lambda_OF_A77 = 1e-06;
			double const lambda_OF_f_A58 = 0;
			double const lambda_OF_A87 = 1e-07;
			std::string const calculate_required_OF_A2 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A92 = false;
			bool const force_relevant_events_OF_A29 = false;
			std::string const calculate_required_OF_i_A57 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_A68 = false;
			double const lambda_OF_A109 = 1e-07;
			double const mu_OF_i_A52 = 0.1;
			bool const failF_FROZEN_OF_A121 = false;
			std::string const calculate_required_OF_A58 = "fn_fathers_and_trig";
			bool const repairable_system_OF_OPTIONS = false;
			bool const Profil1_OF___ARBRE__EIRM = true;
			bool const force_relevant_events_OF_A7 = false;
			std::string const calculate_required_OF_A76 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A118 = false;
			bool const failF_FROZEN_OF_f_A46 = false;
			bool const force_relevant_events_OF_A25 = false;
			double const gamma_OF_i_A62 = 1;
			bool const failF_FROZEN_OF_A103 = false;
			bool const failI_FROZEN_OF_i_A51 = false;
			bool const failF_FROZEN_OF_f_A55 = false;
			double const lambda_OF_A125 = 1e-08;
			std::string const calculate_required_OF_i_A60 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A78 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A127 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_i_A44 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_f_A61 = "fn_fathers_and_trig";
			double const lambda_OF_A86 = 9.9e-06;
			std::string const calculate_required_OF_i_A61 = "fn_fathers_and_trig";
			std::string const when_to_check_OF_i_A55 = "not_req_to_req";
			std::string const calculate_required_OF_A17 = "fn_fathers_and_trig";
			bool const trim_article_OF___ARBRE__EIRM = true;
			std::string const calculate_required_OF_A100 = "fn_fathers_and_trig";
			double const mu_OF_i_A46 = 0.1;
			std::string const calculate_required_OF_A83 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A88 = false;
			double const lambda_OF_A68 = 1e-07;
			double const mu_OF_A28 = 0.1;
			bool const force_relevant_events_OF_f_A45 = false;
			bool const failF_FROZEN_OF_A92 = false;
			bool const failF_FROZEN_OF_A29 = false;
			double const mu_OF_f_A48 = 0.1;
			bool const force_relevant_events_OF_f_A54 = false;
			std::string const calculate_required_OF_i_A54 = "fn_fathers_and_trig";
			double const lambda_OF_A121 = 1e-06;
			double const mu_OF_i_A45 = 0.1;
			std::string const calculate_required_OF_A98 = "fn_fathers_and_trig";
			double const mu_OF_i_A44 = 0.1;
			bool const force_relevant_events_OF_f_A66 = false;
			double const mu_OF_f_A61 = 0.1;
			double const mu_OF_i_A61 = 0.1;
			std::string const calculate_required_OF_A105 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_A7 = false;
			bool const force_relevant_events_OF_f_A65 = false;
			double const lambda_OF_f_A51 = 0;
			std::string const calculate_required_OF_A22 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_A25 = false;
			std::string const calculate_required_OF_A111 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_f_A62 = false;
			std::string const calculate_required_OF_A44 = "fn_fathers_and_trig";
			double const gamma_OF_i_A47 = 1;
			std::string const calculate_required_OF_A19 = "fn_fathers_and_trig";
			double const lambda_OF_f_A60 = 0;
			bool const no_trim_OF___ARBRE__EIRM = false;
			std::string const calculate_required_OF_f_A63 = "fn_fathers_and_trig";
			double const mu_OF_i_A65 = 0.1;
			double const gamma_OF_i_A51 = 1;
			std::string const calculate_required_OF_A124 = "equal_to_S_trig";
			bool const force_relevant_events_OF_A125 = false;
			bool const force_relevant_events_OF_A47 = false;
			std::string const calculate_required_OF_A107 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_i_A64 = false;
			std::string const trigger_kind_OF_t_dep_10 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A67 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A49 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A75 = "equal_to_S_trig";
			std::string const calculate_required_OF_A65 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_A86 = false;
			double const lambda_OF_A29 = 1e-07;
			bool const failF_FROZEN_OF_A88 = false;
			bool const failF_FROZEN_OF_f_A45 = false;
			bool const failF_FROZEN_OF_f_A54 = false;
			double const lambda_OF_f_A47 = 0;
			std::string const calculate_required_OF_f_A57 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A31 = false;
			bool const force_relevant_events_OF_A57 = false;
			double const mu_OF_f_A63 = 0.1;
			bool const failF_FROZEN_OF_A81 = false;
			bool const failF_FROZEN_OF_f_A66 = false;
			bool const force_relevant_events_OF_A113 = false;
			std::string const calculate_required_OF_A54 = "fn_fathers_and_trig";
			double const mu_OF_A67 = 0.1;
			std::string const calculate_required_OF_A66 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A119 = "equal_to_S_trig";
			double const lambda_OF_A97 = 6e-05;
			bool const failF_FROZEN_OF_f_A65 = false;
			bool const force_relevant_events_OF_A93 = false;
			bool const force_relevant_events_OF_A73 = false;
			std::string const trigger_kind_OF_t_seq_9 = "equal_to_S_trig";
			bool const force_relevant_events_OF_A23 = false;
			double const mu_OF_A13 = 0.1;
			double const mu_OF_i_A62 = 0.1;
			std::string const trigger_kind_OF_t_seq_7 = "equal_to_S_trig";
			double const lambda_OF_A99 = 1e-05;
			double const lambda_OF_f_A46 = 0;
			bool const trimming_OF_OPTIONS = true;
			double const lambda_OF_f_A55 = 0;
			bool const force_relevant_events_OF_A45 = false;
			double const lambda_OF_A13 = 0;
			bool const force_relevant_events_OF_i_A52 = false;
			double const lambda_OF_A88 = 1e-06;
			bool const failI_FROZEN_OF_i_A63 = false;
			std::string const trigger_kind_OF_t_dep_5 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A102 = "equal_to_S_trig";
			bool const force_relevant_events_OF_A62 = false;
			std::string const calculate_required_OF_A11 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A72 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A14 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A16 = false;
			bool const failF_FROZEN_OF_A36 = false;
			std::string const calculate_required_OF_A0 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A82 = false;
			bool const failF_FROZEN_OF_f_A43 = false;
			std::string const calculate_required_OF_i_A47 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_i_A66 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_i_A49 = "fn_fathers_and_trig";
			std::string const trigger_kind_OF_t_dep_3 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_i_A57 = false;
			bool const force_relevant_events_OF_A2 = false;
			std::string const calculate_required_OF_A89 = "fn_fathers_and_trig";
			double const mu_OF_A114 = 0.1;
			double const lambda_OF_A102 = 6e-06;
			double const mu_OF_A75 = 0.1;
			double const lambda_OF_A39 = 2e-07;
			bool const force_relevant_events_OF_A58 = false;
			double const mu_OF_f_A44 = 0.1;
			bool const force_relevant_events_OF_A76 = false;
			std::string const calculate_required_OF_A85 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A104 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A20 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_i_A46 = false;
			double const mu_OF_i_A47 = 0.1;
			double const lambda_OF_f_A44 = 0;
			double const lambda_OF_A25 = 0;
			std::string const calculate_required_OF_A4 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A28 = false;
			bool const force_relevant_events_OF_i_A60 = false;
			double const lambda_OF_f_A62 = 0;
			bool const force_relevant_events_OF_A78 = false;
			bool const force_relevant_events_OF_f_A48 = false;
			double const mu_OF_A119 = 0.1;
			bool const force_relevant_events_OF_A127 = false;
			double const gamma_OF_i_A55 = 1;
			bool const failI_FROZEN_OF_i_A54 = false;
			std::string const calculate_required_OF_A80 = "equal_to_S_trig";
			bool const force_relevant_events_OF_i_A44 = false;
			std::string const calculate_required_OF_A57 = "fn_fathers_and_trig";
			std::string const trigger_kind_OF_t_dep_8 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_f_A61 = false;
			std::string const trimming_option_OF_OPTIONS = "according_to_article";
			std::string const calculate_required_OF_A71 = "fn_fathers_and_trig";
			bool const failI_FROZEN_OF_i_A59 = false;
			bool const failI_FROZEN_OF_i_A58 = false;
			bool const force_relevant_events_OF_i_A61 = false;
			std::string const trigger_kind_OF_t_dep_13 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A70 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A100 = false;
			std::string const calculate_required_OF_A129 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_A87 = false;
			bool const failF_FROZEN_OF_A16 = false;
			bool const force_relevant_events_OF_A83 = false;
			std::string const calculate_required_OF_A73 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_A109 = false;
			bool const failF_FROZEN_OF_A82 = false;
			double const gamma_OF_i_A63 = 1;
			std::string const calculate_required_OF_f_A58 = "fn_fathers_and_trig";
			double const lambda_OF_A93 = 1e-06;
			bool const force_relevant_events_OF_A98 = false;
			std::string const calculate_required_OF_i_A43 = "fn_fathers_and_trig";
			std::string const trigger_kind_OF_t_dep_4 = "fn_fathers_and_trig";
			double const mu_OF_A102 = 0.1;
			bool const force_relevant_events_OF_A105 = false;
			bool const force_relevant_events_OF_UE_1 = true;
			bool const failF_FROZEN_OF_A76 = false;
			std::string const trigger_kind_OF_t_seq_6 = "equal_to_S_trig";
			std::string const calculate_required_OF_A99 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A22 = false;
			bool const force_relevant_events_OF_A91 = false;
			bool const force_relevant_events_OF_A111 = false;
			std::string const when_to_check_OF_i_A64 = "not_req_to_req";
			double const mu_OF_A120 = 0.1;
			double const mu_OF_f_A58 = 0.1;
			std::string const calculate_required_OF_A116 = "fn_fathers_and_trig";
			std::string const trigger_kind_OF_t_seq_1 = "equal_to_S_trig";
			std::string const calculate_required_OF_A48 = "fn_fathers_and_trig";
			double const mu_OF_f_A64 = 0.1;
			bool const force_relevant_events_OF_A19 = false;
			double const mu_OF_f_A52 = 0.1;
			bool const force_relevant_events_OF_f_A63 = false;
			std::string const calculate_required_OF_A126 = "fn_fathers_and_trig";
			double const mu_OF_A39 = 0.1;
			std::string const trigger_kind_OF_t_dep_2 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_f_A61 = false;
			bool const force_relevant_events_OF_A107 = false;
			double const mu_OF_A99 = 0.1;
			bool const force_relevant_events_OF_A67 = false;
			bool const force_relevant_events_OF_A49 = false;
			double const lambda_OF_A82 = 1e-06;
			double const lambda_OF_f_A64 = 0;
			bool const force_relevant_events_OF_A65 = false;
			bool const force_relevant_events_OF_A69 = false;
			std::string const calculate_required_OF_A5 = "fn_fathers_and_trig";
			double const lambda_OF_f_A52 = 0;
			std::string const trigger_kind_OF_t_dep_18 = "fn_fathers_and_trig";
			double const gamma_OF_i_A59 = 1;
			double const mu_OF_A10 = 0.1;
			int const K_OF_A30 = 3;
			bool const force_relevant_events_OF_f_A57 = false;
			bool const force_relevant_events_OF_i_A62 = false;
			bool const failF_FROZEN_OF_A98 = false;
			double const mu_OF_A126 = 0.1;
			std::string const calculate_required_OF_A64 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A108 = "equal_to_S_trig";
			double const lambda_OF_A76 = 1e-07;
			double const mu_OF_A80 = 0.1;
			std::string const calculate_required_OF_i_A46 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A54 = false;
			double const mu_OF_A110 = 0.1;
			std::string const calculate_required_OF_A28 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A66 = false;
			double const lambda_OF_f_A43 = 0;
			double const lambda_OF_A10 = 0;
			std::string const calculate_required_OF_f_A48 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A56 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_A22 = false;
			std::string const calculate_required_OF_f_A51 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A26 = "fn_fathers_and_trig";
			double const lambda_OF_A28 = 1e-07;
			bool const failF_FROZEN_OF_A91 = false;
			std::string const calculate_required_OF_i_A45 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_i_A48 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_A19 = false;
			std::string const calculate_required_OF_f_A60 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A52 = "fn_fathers_and_trig";
			double const lambda_OF_f_A49 = 0;
			double const mu_OF_i_A55 = 0.1;
			bool const failF_FROZEN_OF_A67 = false;
			bool const force_relevant_events_OF_A114 = false;
			double const mu_OF_f_A51 = 0.1;
			std::string const when_to_check_OF_i_A57 = "not_req_to_req";
			double const lambda_OF_A103 = 4e-06;
			double const mu_OF_i_A48 = 0.1;
			std::string const calculate_required_OF_A94 = "fn_fathers_and_trig";
			std::string const trigger_kind_OF_t_dep_1 = "fn_fathers_and_trig";
			std::string const when_to_check_OF_i_A63 = "not_req_to_req";
			std::string const calculate_required_OF_i_A65 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A11 = false;
			double const mu_OF_f_A59 = 0.1;
			double const mu_OF_A115 = 0.1;
			bool const force_relevant_events_OF_A72 = false;
			bool const failF_FROZEN_OF_f_A57 = false;
			bool const force_relevant_events_OF_A14 = false;
			bool const failI_FROZEN_OF_i_A64 = false;
			double const mu_OF_f_A60 = 0.1;
			bool const force_relevant_events_OF_A0 = false;
			bool const force_relevant_events_OF_i_A66 = false;
			bool const force_relevant_events_OF_i_A47 = false;
			bool const force_relevant_events_OF_i_A49 = false;
			bool const force_relevant_events_OF_A89 = false;
			bool const force_relevant_events_OF_A119 = false;
			double const lambda_OF_f_A59 = 0;
			std::string const when_to_check_OF_i_A60 = "not_req_to_req";
			double const lambda_OF_A91 = 9.9e-07;
			std::string const trigger_kind_OF_t_dep_14 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A60 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A85 = false;
		
            /* ---------- DECLARATION OF OCCURRENCE RULES FIRING FLAGS ------------ */
            bool FIRE_xx10_OF_A1;
            bool FIRE_xx10_OF_A10;
            bool FIRE_xx10_OF_A102;
            bool FIRE_xx10_OF_A103;
            bool FIRE_xx10_OF_A104;
            bool FIRE_xx10_OF_A108;
            bool FIRE_xx10_OF_A109;
            bool FIRE_xx10_OF_A110;
            bool FIRE_xx10_OF_A113;
            bool FIRE_xx10_OF_A114;
            bool FIRE_xx10_OF_A115;
            bool FIRE_xx10_OF_A119;
            bool FIRE_xx10_OF_A120;
            bool FIRE_xx10_OF_A121;
            bool FIRE_xx10_OF_A124;
            bool FIRE_xx10_OF_A125;
            bool FIRE_xx10_OF_A126;
            bool FIRE_xx10_OF_A13;
            bool FIRE_xx10_OF_A16;
            bool FIRE_xx10_OF_A19;
            bool FIRE_xx10_OF_A22;
            bool FIRE_xx10_OF_A25;
            bool FIRE_xx10_OF_A28;
            bool FIRE_xx10_OF_A29;
            bool FIRE_xx10_OF_A33;
            bool FIRE_xx10_OF_A36;
            bool FIRE_xx10_OF_A39;
            bool FIRE_xx10_OF_A4;
            bool FIRE_xx10_OF_A67;
            bool FIRE_xx10_OF_A68;
            bool FIRE_xx10_OF_A7;
            bool FIRE_xx10_OF_A75;
            bool FIRE_xx10_OF_A76;
            bool FIRE_xx10_OF_A77;
            bool FIRE_xx10_OF_A80;
            bool FIRE_xx10_OF_A81;
            bool FIRE_xx10_OF_A82;
            bool FIRE_xx10_OF_A86;
            bool FIRE_xx10_OF_A87;
            bool FIRE_xx10_OF_A88;
            bool FIRE_xx10_OF_A91;
            bool FIRE_xx10_OF_A92;
            bool FIRE_xx10_OF_A93;
            bool FIRE_xx10_OF_A97;
            bool FIRE_xx10_OF_A98;
            bool FIRE_xx10_OF_A99;
            bool FIRE_xx10_OF_f_A43;
            bool FIRE_xx10_OF_f_A44;
            bool FIRE_xx10_OF_f_A45;
            bool FIRE_xx10_OF_f_A46;
            bool FIRE_xx10_OF_f_A47;
            bool FIRE_xx10_OF_f_A48;
            bool FIRE_xx10_OF_f_A49;
            bool FIRE_xx10_OF_f_A51;
            bool FIRE_xx10_OF_f_A52;
            bool FIRE_xx10_OF_f_A54;
            bool FIRE_xx10_OF_f_A55;
            bool FIRE_xx10_OF_f_A57;
            bool FIRE_xx10_OF_f_A58;
            bool FIRE_xx10_OF_f_A59;
            bool FIRE_xx10_OF_f_A60;
            bool FIRE_xx10_OF_f_A61;
            bool FIRE_xx10_OF_f_A62;
            bool FIRE_xx10_OF_f_A63;
            bool FIRE_xx10_OF_f_A64;
            bool FIRE_xx10_OF_f_A65;
            bool FIRE_xx10_OF_f_A66;
            bool FIRE_xx23_OF_i_A43_INS_67;
            bool FIRE_xx23_OF_i_A43_INS_68;
            bool FIRE_xx23_OF_i_A44_INS_69;
            bool FIRE_xx23_OF_i_A44_INS_70;
            bool FIRE_xx23_OF_i_A45_INS_71;
            bool FIRE_xx23_OF_i_A45_INS_72;
            bool FIRE_xx23_OF_i_A46_INS_73;
            bool FIRE_xx23_OF_i_A46_INS_74;
            bool FIRE_xx23_OF_i_A47_INS_75;
            bool FIRE_xx23_OF_i_A47_INS_76;
            bool FIRE_xx23_OF_i_A48_INS_77;
            bool FIRE_xx23_OF_i_A48_INS_78;
            bool FIRE_xx23_OF_i_A49_INS_79;
            bool FIRE_xx23_OF_i_A49_INS_80;
            bool FIRE_xx23_OF_i_A51_INS_81;
            bool FIRE_xx23_OF_i_A51_INS_82;
            bool FIRE_xx23_OF_i_A52_INS_83;
            bool FIRE_xx23_OF_i_A52_INS_84;
            bool FIRE_xx23_OF_i_A54_INS_85;
            bool FIRE_xx23_OF_i_A54_INS_86;
            bool FIRE_xx23_OF_i_A55_INS_87;
            bool FIRE_xx23_OF_i_A55_INS_88;
            bool FIRE_xx23_OF_i_A57_INS_89;
            bool FIRE_xx23_OF_i_A57_INS_90;
            bool FIRE_xx23_OF_i_A58_INS_91;
            bool FIRE_xx23_OF_i_A58_INS_92;
            bool FIRE_xx23_OF_i_A59_INS_93;
            bool FIRE_xx23_OF_i_A59_INS_94;
            bool FIRE_xx23_OF_i_A60_INS_95;
            bool FIRE_xx23_OF_i_A60_INS_96;
            bool FIRE_xx23_OF_i_A61_INS_97;
            bool FIRE_xx23_OF_i_A61_INS_98;
            bool FIRE_xx23_OF_i_A62_INS_99;
            bool FIRE_xx23_OF_i_A62_INS_100;
            bool FIRE_xx23_OF_i_A63_INS_101;
            bool FIRE_xx23_OF_i_A63_INS_102;
            bool FIRE_xx23_OF_i_A64_INS_103;
            bool FIRE_xx23_OF_i_A64_INS_104;
            bool FIRE_xx23_OF_i_A65_INS_105;
            bool FIRE_xx23_OF_i_A65_INS_106;
            bool FIRE_xx23_OF_i_A66_INS_107;
            bool FIRE_xx23_OF_i_A66_INS_108;

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
            int required_OF_A102 = 18 ;
            int already_S_OF_A102 = 19 ;
            int S_OF_A102 = 20 ;
            int relevant_evt_OF_A102 = 21 ;
            int failF_OF_A102 = 22 ;
            int required_OF_A103 = 23 ;
            int already_S_OF_A103 = 24 ;
            int S_OF_A103 = 25 ;
            int relevant_evt_OF_A103 = 26 ;
            int failF_OF_A103 = 27 ;
            int required_OF_A104 = 28 ;
            int already_S_OF_A104 = 29 ;
            int S_OF_A104 = 30 ;
            int relevant_evt_OF_A104 = 31 ;
            int failF_OF_A104 = 32 ;
            int required_OF_A105 = 33 ;
            int already_S_OF_A105 = 34 ;
            int S_OF_A105 = 35 ;
            int relevant_evt_OF_A105 = 36 ;
            int required_OF_A107 = 37 ;
            int already_S_OF_A107 = 38 ;
            int S_OF_A107 = 39 ;
            int relevant_evt_OF_A107 = 40 ;
            int required_OF_A108 = 41 ;
            int already_S_OF_A108 = 42 ;
            int S_OF_A108 = 43 ;
            int relevant_evt_OF_A108 = 44 ;
            int failF_OF_A108 = 45 ;
            int required_OF_A109 = 46 ;
            int already_S_OF_A109 = 47 ;
            int S_OF_A109 = 48 ;
            int relevant_evt_OF_A109 = 49 ;
            int failF_OF_A109 = 50 ;
            int required_OF_A11 = 51 ;
            int already_S_OF_A11 = 52 ;
            int S_OF_A11 = 53 ;
            int relevant_evt_OF_A11 = 54 ;
            int required_OF_A110 = 55 ;
            int already_S_OF_A110 = 56 ;
            int S_OF_A110 = 57 ;
            int relevant_evt_OF_A110 = 58 ;
            int failF_OF_A110 = 59 ;
            int required_OF_A111 = 60 ;
            int already_S_OF_A111 = 61 ;
            int S_OF_A111 = 62 ;
            int relevant_evt_OF_A111 = 63 ;
            int required_OF_A113 = 64 ;
            int already_S_OF_A113 = 65 ;
            int S_OF_A113 = 66 ;
            int relevant_evt_OF_A113 = 67 ;
            int failF_OF_A113 = 68 ;
            int required_OF_A114 = 69 ;
            int already_S_OF_A114 = 70 ;
            int S_OF_A114 = 71 ;
            int relevant_evt_OF_A114 = 72 ;
            int failF_OF_A114 = 73 ;
            int required_OF_A115 = 74 ;
            int already_S_OF_A115 = 75 ;
            int S_OF_A115 = 76 ;
            int relevant_evt_OF_A115 = 77 ;
            int failF_OF_A115 = 78 ;
            int required_OF_A116 = 79 ;
            int already_S_OF_A116 = 80 ;
            int S_OF_A116 = 81 ;
            int relevant_evt_OF_A116 = 82 ;
            int required_OF_A118 = 83 ;
            int already_S_OF_A118 = 84 ;
            int S_OF_A118 = 85 ;
            int relevant_evt_OF_A118 = 86 ;
            int required_OF_A119 = 87 ;
            int already_S_OF_A119 = 88 ;
            int S_OF_A119 = 89 ;
            int relevant_evt_OF_A119 = 90 ;
            int failF_OF_A119 = 91 ;
            int required_OF_A120 = 92 ;
            int already_S_OF_A120 = 93 ;
            int S_OF_A120 = 94 ;
            int relevant_evt_OF_A120 = 95 ;
            int failF_OF_A120 = 96 ;
            int required_OF_A121 = 97 ;
            int already_S_OF_A121 = 98 ;
            int S_OF_A121 = 99 ;
            int relevant_evt_OF_A121 = 100 ;
            int failF_OF_A121 = 101 ;
            int required_OF_A122 = 102 ;
            int already_S_OF_A122 = 103 ;
            int S_OF_A122 = 104 ;
            int relevant_evt_OF_A122 = 105 ;
            int required_OF_A124 = 106 ;
            int already_S_OF_A124 = 107 ;
            int S_OF_A124 = 108 ;
            int relevant_evt_OF_A124 = 109 ;
            int failF_OF_A124 = 110 ;
            int required_OF_A125 = 111 ;
            int already_S_OF_A125 = 112 ;
            int S_OF_A125 = 113 ;
            int relevant_evt_OF_A125 = 114 ;
            int failF_OF_A125 = 115 ;
            int required_OF_A126 = 116 ;
            int already_S_OF_A126 = 117 ;
            int S_OF_A126 = 118 ;
            int relevant_evt_OF_A126 = 119 ;
            int failF_OF_A126 = 120 ;
            int required_OF_A127 = 121 ;
            int already_S_OF_A127 = 122 ;
            int S_OF_A127 = 123 ;
            int relevant_evt_OF_A127 = 124 ;
            int required_OF_A129 = 125 ;
            int already_S_OF_A129 = 126 ;
            int S_OF_A129 = 127 ;
            int relevant_evt_OF_A129 = 128 ;
            int required_OF_A13 = 129 ;
            int already_S_OF_A13 = 130 ;
            int S_OF_A13 = 131 ;
            int relevant_evt_OF_A13 = 132 ;
            int failF_OF_A13 = 133 ;
            int required_OF_A14 = 134 ;
            int already_S_OF_A14 = 135 ;
            int S_OF_A14 = 136 ;
            int relevant_evt_OF_A14 = 137 ;
            int required_OF_A16 = 138 ;
            int already_S_OF_A16 = 139 ;
            int S_OF_A16 = 140 ;
            int relevant_evt_OF_A16 = 141 ;
            int failF_OF_A16 = 142 ;
            int required_OF_A17 = 143 ;
            int already_S_OF_A17 = 144 ;
            int S_OF_A17 = 145 ;
            int relevant_evt_OF_A17 = 146 ;
            int required_OF_A19 = 147 ;
            int already_S_OF_A19 = 148 ;
            int S_OF_A19 = 149 ;
            int relevant_evt_OF_A19 = 150 ;
            int failF_OF_A19 = 151 ;
            int required_OF_A2 = 152 ;
            int already_S_OF_A2 = 153 ;
            int S_OF_A2 = 154 ;
            int relevant_evt_OF_A2 = 155 ;
            int required_OF_A20 = 156 ;
            int already_S_OF_A20 = 157 ;
            int S_OF_A20 = 158 ;
            int relevant_evt_OF_A20 = 159 ;
            int required_OF_A22 = 160 ;
            int already_S_OF_A22 = 161 ;
            int S_OF_A22 = 162 ;
            int relevant_evt_OF_A22 = 163 ;
            int failF_OF_A22 = 164 ;
            int required_OF_A23 = 165 ;
            int already_S_OF_A23 = 166 ;
            int S_OF_A23 = 167 ;
            int relevant_evt_OF_A23 = 168 ;
            int required_OF_A25 = 169 ;
            int already_S_OF_A25 = 170 ;
            int S_OF_A25 = 171 ;
            int relevant_evt_OF_A25 = 172 ;
            int failF_OF_A25 = 173 ;
            int required_OF_A26 = 174 ;
            int already_S_OF_A26 = 175 ;
            int S_OF_A26 = 176 ;
            int relevant_evt_OF_A26 = 177 ;
            int required_OF_A28 = 178 ;
            int already_S_OF_A28 = 179 ;
            int S_OF_A28 = 180 ;
            int relevant_evt_OF_A28 = 181 ;
            int failF_OF_A28 = 182 ;
            int required_OF_A29 = 183 ;
            int already_S_OF_A29 = 184 ;
            int S_OF_A29 = 185 ;
            int relevant_evt_OF_A29 = 186 ;
            int failF_OF_A29 = 187 ;
            int required_OF_A30 = 188 ;
            int already_S_OF_A30 = 189 ;
            int S_OF_A30 = 190 ;
            int relevant_evt_OF_A30 = 191 ;
            int required_OF_A31 = 192 ;
            int already_S_OF_A31 = 193 ;
            int S_OF_A31 = 194 ;
            int relevant_evt_OF_A31 = 195 ;
            int required_OF_A33 = 196 ;
            int already_S_OF_A33 = 197 ;
            int S_OF_A33 = 198 ;
            int relevant_evt_OF_A33 = 199 ;
            int failF_OF_A33 = 200 ;
            int required_OF_A34 = 201 ;
            int already_S_OF_A34 = 202 ;
            int S_OF_A34 = 203 ;
            int relevant_evt_OF_A34 = 204 ;
            int required_OF_A36 = 205 ;
            int already_S_OF_A36 = 206 ;
            int S_OF_A36 = 207 ;
            int relevant_evt_OF_A36 = 208 ;
            int failF_OF_A36 = 209 ;
            int required_OF_A37 = 210 ;
            int already_S_OF_A37 = 211 ;
            int S_OF_A37 = 212 ;
            int relevant_evt_OF_A37 = 213 ;
            int required_OF_A39 = 214 ;
            int already_S_OF_A39 = 215 ;
            int S_OF_A39 = 216 ;
            int relevant_evt_OF_A39 = 217 ;
            int failF_OF_A39 = 218 ;
            int required_OF_A4 = 219 ;
            int already_S_OF_A4 = 220 ;
            int S_OF_A4 = 221 ;
            int relevant_evt_OF_A4 = 222 ;
            int failF_OF_A4 = 223 ;
            int required_OF_A40 = 224 ;
            int already_S_OF_A40 = 225 ;
            int S_OF_A40 = 226 ;
            int relevant_evt_OF_A40 = 227 ;
            int required_OF_A41 = 228 ;
            int already_S_OF_A41 = 229 ;
            int S_OF_A41 = 230 ;
            int relevant_evt_OF_A41 = 231 ;
            int required_OF_A43 = 232 ;
            int already_S_OF_A43 = 233 ;
            int S_OF_A43 = 234 ;
            int relevant_evt_OF_A43 = 235 ;
            int required_OF_A44 = 236 ;
            int already_S_OF_A44 = 237 ;
            int S_OF_A44 = 238 ;
            int relevant_evt_OF_A44 = 239 ;
            int required_OF_A45 = 240 ;
            int already_S_OF_A45 = 241 ;
            int S_OF_A45 = 242 ;
            int relevant_evt_OF_A45 = 243 ;
            int required_OF_A46 = 244 ;
            int already_S_OF_A46 = 245 ;
            int S_OF_A46 = 246 ;
            int relevant_evt_OF_A46 = 247 ;
            int required_OF_A47 = 248 ;
            int already_S_OF_A47 = 249 ;
            int S_OF_A47 = 250 ;
            int relevant_evt_OF_A47 = 251 ;
            int required_OF_A48 = 252 ;
            int already_S_OF_A48 = 253 ;
            int S_OF_A48 = 254 ;
            int relevant_evt_OF_A48 = 255 ;
            int required_OF_A49 = 256 ;
            int already_S_OF_A49 = 257 ;
            int S_OF_A49 = 258 ;
            int relevant_evt_OF_A49 = 259 ;
            int required_OF_A5 = 260 ;
            int already_S_OF_A5 = 261 ;
            int S_OF_A5 = 262 ;
            int relevant_evt_OF_A5 = 263 ;
            int required_OF_A50 = 264 ;
            int already_S_OF_A50 = 265 ;
            int S_OF_A50 = 266 ;
            int relevant_evt_OF_A50 = 267 ;
            int required_OF_A51 = 268 ;
            int already_S_OF_A51 = 269 ;
            int S_OF_A51 = 270 ;
            int relevant_evt_OF_A51 = 271 ;
            int required_OF_A52 = 272 ;
            int already_S_OF_A52 = 273 ;
            int S_OF_A52 = 274 ;
            int relevant_evt_OF_A52 = 275 ;
            int required_OF_A53 = 276 ;
            int already_S_OF_A53 = 277 ;
            int S_OF_A53 = 278 ;
            int relevant_evt_OF_A53 = 279 ;
            int required_OF_A54 = 280 ;
            int already_S_OF_A54 = 281 ;
            int S_OF_A54 = 282 ;
            int relevant_evt_OF_A54 = 283 ;
            int required_OF_A55 = 284 ;
            int already_S_OF_A55 = 285 ;
            int S_OF_A55 = 286 ;
            int relevant_evt_OF_A55 = 287 ;
            int required_OF_A56 = 288 ;
            int already_S_OF_A56 = 289 ;
            int S_OF_A56 = 290 ;
            int relevant_evt_OF_A56 = 291 ;
            int required_OF_A57 = 292 ;
            int already_S_OF_A57 = 293 ;
            int S_OF_A57 = 294 ;
            int relevant_evt_OF_A57 = 295 ;
            int required_OF_A58 = 296 ;
            int already_S_OF_A58 = 297 ;
            int S_OF_A58 = 298 ;
            int relevant_evt_OF_A58 = 299 ;
            int required_OF_A59 = 300 ;
            int already_S_OF_A59 = 301 ;
            int S_OF_A59 = 302 ;
            int relevant_evt_OF_A59 = 303 ;
            int required_OF_A60 = 304 ;
            int already_S_OF_A60 = 305 ;
            int S_OF_A60 = 306 ;
            int relevant_evt_OF_A60 = 307 ;
            int required_OF_A61 = 308 ;
            int already_S_OF_A61 = 309 ;
            int S_OF_A61 = 310 ;
            int relevant_evt_OF_A61 = 311 ;
            int required_OF_A62 = 312 ;
            int already_S_OF_A62 = 313 ;
            int S_OF_A62 = 314 ;
            int relevant_evt_OF_A62 = 315 ;
            int required_OF_A63 = 316 ;
            int already_S_OF_A63 = 317 ;
            int S_OF_A63 = 318 ;
            int relevant_evt_OF_A63 = 319 ;
            int required_OF_A64 = 320 ;
            int already_S_OF_A64 = 321 ;
            int S_OF_A64 = 322 ;
            int relevant_evt_OF_A64 = 323 ;
            int required_OF_A65 = 324 ;
            int already_S_OF_A65 = 325 ;
            int S_OF_A65 = 326 ;
            int relevant_evt_OF_A65 = 327 ;
            int required_OF_A66 = 328 ;
            int already_S_OF_A66 = 329 ;
            int S_OF_A66 = 330 ;
            int relevant_evt_OF_A66 = 331 ;
            int required_OF_A67 = 332 ;
            int already_S_OF_A67 = 333 ;
            int S_OF_A67 = 334 ;
            int relevant_evt_OF_A67 = 335 ;
            int failF_OF_A67 = 336 ;
            int required_OF_A68 = 337 ;
            int already_S_OF_A68 = 338 ;
            int S_OF_A68 = 339 ;
            int relevant_evt_OF_A68 = 340 ;
            int failF_OF_A68 = 341 ;
            int required_OF_A69 = 342 ;
            int already_S_OF_A69 = 343 ;
            int S_OF_A69 = 344 ;
            int relevant_evt_OF_A69 = 345 ;
            int required_OF_A7 = 346 ;
            int already_S_OF_A7 = 347 ;
            int S_OF_A7 = 348 ;
            int relevant_evt_OF_A7 = 349 ;
            int failF_OF_A7 = 350 ;
            int required_OF_A70 = 351 ;
            int already_S_OF_A70 = 352 ;
            int S_OF_A70 = 353 ;
            int relevant_evt_OF_A70 = 354 ;
            int required_OF_A71 = 355 ;
            int already_S_OF_A71 = 356 ;
            int S_OF_A71 = 357 ;
            int relevant_evt_OF_A71 = 358 ;
            int required_OF_A72 = 359 ;
            int already_S_OF_A72 = 360 ;
            int S_OF_A72 = 361 ;
            int relevant_evt_OF_A72 = 362 ;
            int required_OF_A73 = 363 ;
            int already_S_OF_A73 = 364 ;
            int S_OF_A73 = 365 ;
            int relevant_evt_OF_A73 = 366 ;
            int required_OF_A74 = 367 ;
            int already_S_OF_A74 = 368 ;
            int S_OF_A74 = 369 ;
            int relevant_evt_OF_A74 = 370 ;
            int required_OF_A75 = 371 ;
            int already_S_OF_A75 = 372 ;
            int S_OF_A75 = 373 ;
            int relevant_evt_OF_A75 = 374 ;
            int failF_OF_A75 = 375 ;
            int required_OF_A76 = 376 ;
            int already_S_OF_A76 = 377 ;
            int S_OF_A76 = 378 ;
            int relevant_evt_OF_A76 = 379 ;
            int failF_OF_A76 = 380 ;
            int required_OF_A77 = 381 ;
            int already_S_OF_A77 = 382 ;
            int S_OF_A77 = 383 ;
            int relevant_evt_OF_A77 = 384 ;
            int failF_OF_A77 = 385 ;
            int required_OF_A78 = 386 ;
            int already_S_OF_A78 = 387 ;
            int S_OF_A78 = 388 ;
            int relevant_evt_OF_A78 = 389 ;
            int required_OF_A8 = 390 ;
            int already_S_OF_A8 = 391 ;
            int S_OF_A8 = 392 ;
            int relevant_evt_OF_A8 = 393 ;
            int required_OF_A80 = 394 ;
            int already_S_OF_A80 = 395 ;
            int S_OF_A80 = 396 ;
            int relevant_evt_OF_A80 = 397 ;
            int failF_OF_A80 = 398 ;
            int required_OF_A81 = 399 ;
            int already_S_OF_A81 = 400 ;
            int S_OF_A81 = 401 ;
            int relevant_evt_OF_A81 = 402 ;
            int failF_OF_A81 = 403 ;
            int required_OF_A82 = 404 ;
            int already_S_OF_A82 = 405 ;
            int S_OF_A82 = 406 ;
            int relevant_evt_OF_A82 = 407 ;
            int failF_OF_A82 = 408 ;
            int required_OF_A83 = 409 ;
            int already_S_OF_A83 = 410 ;
            int S_OF_A83 = 411 ;
            int relevant_evt_OF_A83 = 412 ;
            int required_OF_A85 = 413 ;
            int already_S_OF_A85 = 414 ;
            int S_OF_A85 = 415 ;
            int relevant_evt_OF_A85 = 416 ;
            int required_OF_A86 = 417 ;
            int already_S_OF_A86 = 418 ;
            int S_OF_A86 = 419 ;
            int relevant_evt_OF_A86 = 420 ;
            int failF_OF_A86 = 421 ;
            int required_OF_A87 = 422 ;
            int already_S_OF_A87 = 423 ;
            int S_OF_A87 = 424 ;
            int relevant_evt_OF_A87 = 425 ;
            int failF_OF_A87 = 426 ;
            int required_OF_A88 = 427 ;
            int already_S_OF_A88 = 428 ;
            int S_OF_A88 = 429 ;
            int relevant_evt_OF_A88 = 430 ;
            int failF_OF_A88 = 431 ;
            int required_OF_A89 = 432 ;
            int already_S_OF_A89 = 433 ;
            int S_OF_A89 = 434 ;
            int relevant_evt_OF_A89 = 435 ;
            int required_OF_A91 = 436 ;
            int already_S_OF_A91 = 437 ;
            int S_OF_A91 = 438 ;
            int relevant_evt_OF_A91 = 439 ;
            int failF_OF_A91 = 440 ;
            int required_OF_A92 = 441 ;
            int already_S_OF_A92 = 442 ;
            int S_OF_A92 = 443 ;
            int relevant_evt_OF_A92 = 444 ;
            int failF_OF_A92 = 445 ;
            int required_OF_A93 = 446 ;
            int already_S_OF_A93 = 447 ;
            int S_OF_A93 = 448 ;
            int relevant_evt_OF_A93 = 449 ;
            int failF_OF_A93 = 450 ;
            int required_OF_A94 = 451 ;
            int already_S_OF_A94 = 452 ;
            int S_OF_A94 = 453 ;
            int relevant_evt_OF_A94 = 454 ;
            int required_OF_A96 = 455 ;
            int already_S_OF_A96 = 456 ;
            int S_OF_A96 = 457 ;
            int relevant_evt_OF_A96 = 458 ;
            int required_OF_A97 = 459 ;
            int already_S_OF_A97 = 460 ;
            int S_OF_A97 = 461 ;
            int relevant_evt_OF_A97 = 462 ;
            int failF_OF_A97 = 463 ;
            int required_OF_A98 = 464 ;
            int already_S_OF_A98 = 465 ;
            int S_OF_A98 = 466 ;
            int relevant_evt_OF_A98 = 467 ;
            int failF_OF_A98 = 468 ;
            int required_OF_A99 = 469 ;
            int already_S_OF_A99 = 470 ;
            int S_OF_A99 = 471 ;
            int relevant_evt_OF_A99 = 472 ;
            int failF_OF_A99 = 473 ;
            int required_OF_UE_1 = 474 ;
            int already_S_OF_UE_1 = 475 ;
            int S_OF_UE_1 = 476 ;
            int relevant_evt_OF_UE_1 = 477 ;
            int required_OF_f_A43 = 478 ;
            int already_S_OF_f_A43 = 479 ;
            int S_OF_f_A43 = 480 ;
            int relevant_evt_OF_f_A43 = 481 ;
            int failF_OF_f_A43 = 482 ;
            int required_OF_f_A44 = 483 ;
            int already_S_OF_f_A44 = 484 ;
            int S_OF_f_A44 = 485 ;
            int relevant_evt_OF_f_A44 = 486 ;
            int failF_OF_f_A44 = 487 ;
            int required_OF_f_A45 = 488 ;
            int already_S_OF_f_A45 = 489 ;
            int S_OF_f_A45 = 490 ;
            int relevant_evt_OF_f_A45 = 491 ;
            int failF_OF_f_A45 = 492 ;
            int required_OF_f_A46 = 493 ;
            int already_S_OF_f_A46 = 494 ;
            int S_OF_f_A46 = 495 ;
            int relevant_evt_OF_f_A46 = 496 ;
            int failF_OF_f_A46 = 497 ;
            int required_OF_f_A47 = 498 ;
            int already_S_OF_f_A47 = 499 ;
            int S_OF_f_A47 = 500 ;
            int relevant_evt_OF_f_A47 = 501 ;
            int failF_OF_f_A47 = 502 ;
            int required_OF_f_A48 = 503 ;
            int already_S_OF_f_A48 = 504 ;
            int S_OF_f_A48 = 505 ;
            int relevant_evt_OF_f_A48 = 506 ;
            int failF_OF_f_A48 = 507 ;
            int required_OF_f_A49 = 508 ;
            int already_S_OF_f_A49 = 509 ;
            int S_OF_f_A49 = 510 ;
            int relevant_evt_OF_f_A49 = 511 ;
            int failF_OF_f_A49 = 512 ;
            int required_OF_f_A51 = 513 ;
            int already_S_OF_f_A51 = 514 ;
            int S_OF_f_A51 = 515 ;
            int relevant_evt_OF_f_A51 = 516 ;
            int failF_OF_f_A51 = 517 ;
            int required_OF_f_A52 = 518 ;
            int already_S_OF_f_A52 = 519 ;
            int S_OF_f_A52 = 520 ;
            int relevant_evt_OF_f_A52 = 521 ;
            int failF_OF_f_A52 = 522 ;
            int required_OF_f_A54 = 523 ;
            int already_S_OF_f_A54 = 524 ;
            int S_OF_f_A54 = 525 ;
            int relevant_evt_OF_f_A54 = 526 ;
            int failF_OF_f_A54 = 527 ;
            int required_OF_f_A55 = 528 ;
            int already_S_OF_f_A55 = 529 ;
            int S_OF_f_A55 = 530 ;
            int relevant_evt_OF_f_A55 = 531 ;
            int failF_OF_f_A55 = 532 ;
            int required_OF_f_A57 = 533 ;
            int already_S_OF_f_A57 = 534 ;
            int S_OF_f_A57 = 535 ;
            int relevant_evt_OF_f_A57 = 536 ;
            int failF_OF_f_A57 = 537 ;
            int required_OF_f_A58 = 538 ;
            int already_S_OF_f_A58 = 539 ;
            int S_OF_f_A58 = 540 ;
            int relevant_evt_OF_f_A58 = 541 ;
            int failF_OF_f_A58 = 542 ;
            int required_OF_f_A59 = 543 ;
            int already_S_OF_f_A59 = 544 ;
            int S_OF_f_A59 = 545 ;
            int relevant_evt_OF_f_A59 = 546 ;
            int failF_OF_f_A59 = 547 ;
            int required_OF_f_A60 = 548 ;
            int already_S_OF_f_A60 = 549 ;
            int S_OF_f_A60 = 550 ;
            int relevant_evt_OF_f_A60 = 551 ;
            int failF_OF_f_A60 = 552 ;
            int required_OF_f_A61 = 553 ;
            int already_S_OF_f_A61 = 554 ;
            int S_OF_f_A61 = 555 ;
            int relevant_evt_OF_f_A61 = 556 ;
            int failF_OF_f_A61 = 557 ;
            int required_OF_f_A62 = 558 ;
            int already_S_OF_f_A62 = 559 ;
            int S_OF_f_A62 = 560 ;
            int relevant_evt_OF_f_A62 = 561 ;
            int failF_OF_f_A62 = 562 ;
            int required_OF_f_A63 = 563 ;
            int already_S_OF_f_A63 = 564 ;
            int S_OF_f_A63 = 565 ;
            int relevant_evt_OF_f_A63 = 566 ;
            int failF_OF_f_A63 = 567 ;
            int required_OF_f_A64 = 568 ;
            int already_S_OF_f_A64 = 569 ;
            int S_OF_f_A64 = 570 ;
            int relevant_evt_OF_f_A64 = 571 ;
            int failF_OF_f_A64 = 572 ;
            int required_OF_f_A65 = 573 ;
            int already_S_OF_f_A65 = 574 ;
            int S_OF_f_A65 = 575 ;
            int relevant_evt_OF_f_A65 = 576 ;
            int failF_OF_f_A65 = 577 ;
            int required_OF_f_A66 = 578 ;
            int already_S_OF_f_A66 = 579 ;
            int S_OF_f_A66 = 580 ;
            int relevant_evt_OF_f_A66 = 581 ;
            int failF_OF_f_A66 = 582 ;
            int required_OF_i_A43 = 583 ;
            int already_S_OF_i_A43 = 584 ;
            int S_OF_i_A43 = 585 ;
            int relevant_evt_OF_i_A43 = 586 ;
            int failI_OF_i_A43 = 587 ;
            int to_be_fired_OF_i_A43 = 588 ;
            int already_standby_OF_i_A43 = 589 ;
            int already_required_OF_i_A43 = 590 ;
            int required_OF_i_A44 = 591 ;
            int already_S_OF_i_A44 = 592 ;
            int S_OF_i_A44 = 593 ;
            int relevant_evt_OF_i_A44 = 594 ;
            int failI_OF_i_A44 = 595 ;
            int to_be_fired_OF_i_A44 = 596 ;
            int already_standby_OF_i_A44 = 597 ;
            int already_required_OF_i_A44 = 598 ;
            int required_OF_i_A45 = 599 ;
            int already_S_OF_i_A45 = 600 ;
            int S_OF_i_A45 = 601 ;
            int relevant_evt_OF_i_A45 = 602 ;
            int failI_OF_i_A45 = 603 ;
            int to_be_fired_OF_i_A45 = 604 ;
            int already_standby_OF_i_A45 = 605 ;
            int already_required_OF_i_A45 = 606 ;
            int required_OF_i_A46 = 607 ;
            int already_S_OF_i_A46 = 608 ;
            int S_OF_i_A46 = 609 ;
            int relevant_evt_OF_i_A46 = 610 ;
            int failI_OF_i_A46 = 611 ;
            int to_be_fired_OF_i_A46 = 612 ;
            int already_standby_OF_i_A46 = 613 ;
            int already_required_OF_i_A46 = 614 ;
            int required_OF_i_A47 = 615 ;
            int already_S_OF_i_A47 = 616 ;
            int S_OF_i_A47 = 617 ;
            int relevant_evt_OF_i_A47 = 618 ;
            int failI_OF_i_A47 = 619 ;
            int to_be_fired_OF_i_A47 = 620 ;
            int already_standby_OF_i_A47 = 621 ;
            int already_required_OF_i_A47 = 622 ;
            int required_OF_i_A48 = 623 ;
            int already_S_OF_i_A48 = 624 ;
            int S_OF_i_A48 = 625 ;
            int relevant_evt_OF_i_A48 = 626 ;
            int failI_OF_i_A48 = 627 ;
            int to_be_fired_OF_i_A48 = 628 ;
            int already_standby_OF_i_A48 = 629 ;
            int already_required_OF_i_A48 = 630 ;
            int required_OF_i_A49 = 631 ;
            int already_S_OF_i_A49 = 632 ;
            int S_OF_i_A49 = 633 ;
            int relevant_evt_OF_i_A49 = 634 ;
            int failI_OF_i_A49 = 635 ;
            int to_be_fired_OF_i_A49 = 636 ;
            int already_standby_OF_i_A49 = 637 ;
            int already_required_OF_i_A49 = 638 ;
            int required_OF_i_A51 = 639 ;
            int already_S_OF_i_A51 = 640 ;
            int S_OF_i_A51 = 641 ;
            int relevant_evt_OF_i_A51 = 642 ;
            int failI_OF_i_A51 = 643 ;
            int to_be_fired_OF_i_A51 = 644 ;
            int already_standby_OF_i_A51 = 645 ;
            int already_required_OF_i_A51 = 646 ;
            int required_OF_i_A52 = 647 ;
            int already_S_OF_i_A52 = 648 ;
            int S_OF_i_A52 = 649 ;
            int relevant_evt_OF_i_A52 = 650 ;
            int failI_OF_i_A52 = 651 ;
            int to_be_fired_OF_i_A52 = 652 ;
            int already_standby_OF_i_A52 = 653 ;
            int already_required_OF_i_A52 = 654 ;
            int required_OF_i_A54 = 655 ;
            int already_S_OF_i_A54 = 656 ;
            int S_OF_i_A54 = 657 ;
            int relevant_evt_OF_i_A54 = 658 ;
            int failI_OF_i_A54 = 659 ;
            int to_be_fired_OF_i_A54 = 660 ;
            int already_standby_OF_i_A54 = 661 ;
            int already_required_OF_i_A54 = 662 ;
            int required_OF_i_A55 = 663 ;
            int already_S_OF_i_A55 = 664 ;
            int S_OF_i_A55 = 665 ;
            int relevant_evt_OF_i_A55 = 666 ;
            int failI_OF_i_A55 = 667 ;
            int to_be_fired_OF_i_A55 = 668 ;
            int already_standby_OF_i_A55 = 669 ;
            int already_required_OF_i_A55 = 670 ;
            int required_OF_i_A57 = 671 ;
            int already_S_OF_i_A57 = 672 ;
            int S_OF_i_A57 = 673 ;
            int relevant_evt_OF_i_A57 = 674 ;
            int failI_OF_i_A57 = 675 ;
            int to_be_fired_OF_i_A57 = 676 ;
            int already_standby_OF_i_A57 = 677 ;
            int already_required_OF_i_A57 = 678 ;
            int required_OF_i_A58 = 679 ;
            int already_S_OF_i_A58 = 680 ;
            int S_OF_i_A58 = 681 ;
            int relevant_evt_OF_i_A58 = 682 ;
            int failI_OF_i_A58 = 683 ;
            int to_be_fired_OF_i_A58 = 684 ;
            int already_standby_OF_i_A58 = 685 ;
            int already_required_OF_i_A58 = 686 ;
            int required_OF_i_A59 = 687 ;
            int already_S_OF_i_A59 = 688 ;
            int S_OF_i_A59 = 689 ;
            int relevant_evt_OF_i_A59 = 690 ;
            int failI_OF_i_A59 = 691 ;
            int to_be_fired_OF_i_A59 = 692 ;
            int already_standby_OF_i_A59 = 693 ;
            int already_required_OF_i_A59 = 694 ;
            int required_OF_i_A60 = 695 ;
            int already_S_OF_i_A60 = 696 ;
            int S_OF_i_A60 = 697 ;
            int relevant_evt_OF_i_A60 = 698 ;
            int failI_OF_i_A60 = 699 ;
            int to_be_fired_OF_i_A60 = 700 ;
            int already_standby_OF_i_A60 = 701 ;
            int already_required_OF_i_A60 = 702 ;
            int required_OF_i_A61 = 703 ;
            int already_S_OF_i_A61 = 704 ;
            int S_OF_i_A61 = 705 ;
            int relevant_evt_OF_i_A61 = 706 ;
            int failI_OF_i_A61 = 707 ;
            int to_be_fired_OF_i_A61 = 708 ;
            int already_standby_OF_i_A61 = 709 ;
            int already_required_OF_i_A61 = 710 ;
            int required_OF_i_A62 = 711 ;
            int already_S_OF_i_A62 = 712 ;
            int S_OF_i_A62 = 713 ;
            int relevant_evt_OF_i_A62 = 714 ;
            int failI_OF_i_A62 = 715 ;
            int to_be_fired_OF_i_A62 = 716 ;
            int already_standby_OF_i_A62 = 717 ;
            int already_required_OF_i_A62 = 718 ;
            int required_OF_i_A63 = 719 ;
            int already_S_OF_i_A63 = 720 ;
            int S_OF_i_A63 = 721 ;
            int relevant_evt_OF_i_A63 = 722 ;
            int failI_OF_i_A63 = 723 ;
            int to_be_fired_OF_i_A63 = 724 ;
            int already_standby_OF_i_A63 = 725 ;
            int already_required_OF_i_A63 = 726 ;
            int required_OF_i_A64 = 727 ;
            int already_S_OF_i_A64 = 728 ;
            int S_OF_i_A64 = 729 ;
            int relevant_evt_OF_i_A64 = 730 ;
            int failI_OF_i_A64 = 731 ;
            int to_be_fired_OF_i_A64 = 732 ;
            int already_standby_OF_i_A64 = 733 ;
            int already_required_OF_i_A64 = 734 ;
            int required_OF_i_A65 = 735 ;
            int already_S_OF_i_A65 = 736 ;
            int S_OF_i_A65 = 737 ;
            int relevant_evt_OF_i_A65 = 738 ;
            int failI_OF_i_A65 = 739 ;
            int to_be_fired_OF_i_A65 = 740 ;
            int already_standby_OF_i_A65 = 741 ;
            int already_required_OF_i_A65 = 742 ;
            int required_OF_i_A66 = 743 ;
            int already_S_OF_i_A66 = 744 ;
            int S_OF_i_A66 = 745 ;
            int relevant_evt_OF_i_A66 = 746 ;
            int failI_OF_i_A66 = 747 ;
            int to_be_fired_OF_i_A66 = 748 ;
            int already_standby_OF_i_A66 = 749 ;
            int already_required_OF_i_A66 = 750 ;




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