
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
        class FigaroProgram_vgs_6_Trim_Article_repair: public storm::figaro::FigaroProgram{
        public:
        FigaroProgram_vgs_6_Trim_Article_repair(): FigaroProgram(//            std::map<std::string, size_t> mFigaroboolelementindex =
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
            	{"required_OF_A13" , 87},
            	{"already_S_OF_A13" , 88},
            	{"S_OF_A13" , 89},
            	{"relevant_evt_OF_A13" , 90},
            	{"failF_OF_A13" , 91},
            	{"required_OF_A14" , 92},
            	{"already_S_OF_A14" , 93},
            	{"S_OF_A14" , 94},
            	{"relevant_evt_OF_A14" , 95},
            	{"required_OF_A16" , 96},
            	{"already_S_OF_A16" , 97},
            	{"S_OF_A16" , 98},
            	{"relevant_evt_OF_A16" , 99},
            	{"failF_OF_A16" , 100},
            	{"required_OF_A17" , 101},
            	{"already_S_OF_A17" , 102},
            	{"S_OF_A17" , 103},
            	{"relevant_evt_OF_A17" , 104},
            	{"required_OF_A19" , 105},
            	{"already_S_OF_A19" , 106},
            	{"S_OF_A19" , 107},
            	{"relevant_evt_OF_A19" , 108},
            	{"failF_OF_A19" , 109},
            	{"required_OF_A2" , 110},
            	{"already_S_OF_A2" , 111},
            	{"S_OF_A2" , 112},
            	{"relevant_evt_OF_A2" , 113},
            	{"required_OF_A20" , 114},
            	{"already_S_OF_A20" , 115},
            	{"S_OF_A20" , 116},
            	{"relevant_evt_OF_A20" , 117},
            	{"required_OF_A22" , 118},
            	{"already_S_OF_A22" , 119},
            	{"S_OF_A22" , 120},
            	{"relevant_evt_OF_A22" , 121},
            	{"failF_OF_A22" , 122},
            	{"required_OF_A23" , 123},
            	{"already_S_OF_A23" , 124},
            	{"S_OF_A23" , 125},
            	{"relevant_evt_OF_A23" , 126},
            	{"required_OF_A25" , 127},
            	{"already_S_OF_A25" , 128},
            	{"S_OF_A25" , 129},
            	{"relevant_evt_OF_A25" , 130},
            	{"failF_OF_A25" , 131},
            	{"required_OF_A26" , 132},
            	{"already_S_OF_A26" , 133},
            	{"S_OF_A26" , 134},
            	{"relevant_evt_OF_A26" , 135},
            	{"required_OF_A28" , 136},
            	{"already_S_OF_A28" , 137},
            	{"S_OF_A28" , 138},
            	{"relevant_evt_OF_A28" , 139},
            	{"failF_OF_A28" , 140},
            	{"required_OF_A29" , 141},
            	{"already_S_OF_A29" , 142},
            	{"S_OF_A29" , 143},
            	{"relevant_evt_OF_A29" , 144},
            	{"failF_OF_A29" , 145},
            	{"required_OF_A30" , 146},
            	{"already_S_OF_A30" , 147},
            	{"S_OF_A30" , 148},
            	{"relevant_evt_OF_A30" , 149},
            	{"required_OF_A31" , 150},
            	{"already_S_OF_A31" , 151},
            	{"S_OF_A31" , 152},
            	{"relevant_evt_OF_A31" , 153},
            	{"required_OF_A33" , 154},
            	{"already_S_OF_A33" , 155},
            	{"S_OF_A33" , 156},
            	{"relevant_evt_OF_A33" , 157},
            	{"failF_OF_A33" , 158},
            	{"required_OF_A34" , 159},
            	{"already_S_OF_A34" , 160},
            	{"S_OF_A34" , 161},
            	{"relevant_evt_OF_A34" , 162},
            	{"required_OF_A36" , 163},
            	{"already_S_OF_A36" , 164},
            	{"S_OF_A36" , 165},
            	{"relevant_evt_OF_A36" , 166},
            	{"failF_OF_A36" , 167},
            	{"required_OF_A37" , 168},
            	{"already_S_OF_A37" , 169},
            	{"S_OF_A37" , 170},
            	{"relevant_evt_OF_A37" , 171},
            	{"required_OF_A39" , 172},
            	{"already_S_OF_A39" , 173},
            	{"S_OF_A39" , 174},
            	{"relevant_evt_OF_A39" , 175},
            	{"failF_OF_A39" , 176},
            	{"required_OF_A4" , 177},
            	{"already_S_OF_A4" , 178},
            	{"S_OF_A4" , 179},
            	{"relevant_evt_OF_A4" , 180},
            	{"failF_OF_A4" , 181},
            	{"required_OF_A40" , 182},
            	{"already_S_OF_A40" , 183},
            	{"S_OF_A40" , 184},
            	{"relevant_evt_OF_A40" , 185},
            	{"required_OF_A41" , 186},
            	{"already_S_OF_A41" , 187},
            	{"S_OF_A41" , 188},
            	{"relevant_evt_OF_A41" , 189},
            	{"required_OF_A43" , 190},
            	{"already_S_OF_A43" , 191},
            	{"S_OF_A43" , 192},
            	{"relevant_evt_OF_A43" , 193},
            	{"required_OF_A44" , 194},
            	{"already_S_OF_A44" , 195},
            	{"S_OF_A44" , 196},
            	{"relevant_evt_OF_A44" , 197},
            	{"required_OF_A45" , 198},
            	{"already_S_OF_A45" , 199},
            	{"S_OF_A45" , 200},
            	{"relevant_evt_OF_A45" , 201},
            	{"required_OF_A46" , 202},
            	{"already_S_OF_A46" , 203},
            	{"S_OF_A46" , 204},
            	{"relevant_evt_OF_A46" , 205},
            	{"required_OF_A47" , 206},
            	{"already_S_OF_A47" , 207},
            	{"S_OF_A47" , 208},
            	{"relevant_evt_OF_A47" , 209},
            	{"required_OF_A48" , 210},
            	{"already_S_OF_A48" , 211},
            	{"S_OF_A48" , 212},
            	{"relevant_evt_OF_A48" , 213},
            	{"required_OF_A49" , 214},
            	{"already_S_OF_A49" , 215},
            	{"S_OF_A49" , 216},
            	{"relevant_evt_OF_A49" , 217},
            	{"required_OF_A5" , 218},
            	{"already_S_OF_A5" , 219},
            	{"S_OF_A5" , 220},
            	{"relevant_evt_OF_A5" , 221},
            	{"required_OF_A50" , 222},
            	{"already_S_OF_A50" , 223},
            	{"S_OF_A50" , 224},
            	{"relevant_evt_OF_A50" , 225},
            	{"required_OF_A51" , 226},
            	{"already_S_OF_A51" , 227},
            	{"S_OF_A51" , 228},
            	{"relevant_evt_OF_A51" , 229},
            	{"required_OF_A52" , 230},
            	{"already_S_OF_A52" , 231},
            	{"S_OF_A52" , 232},
            	{"relevant_evt_OF_A52" , 233},
            	{"required_OF_A53" , 234},
            	{"already_S_OF_A53" , 235},
            	{"S_OF_A53" , 236},
            	{"relevant_evt_OF_A53" , 237},
            	{"required_OF_A54" , 238},
            	{"already_S_OF_A54" , 239},
            	{"S_OF_A54" , 240},
            	{"relevant_evt_OF_A54" , 241},
            	{"required_OF_A55" , 242},
            	{"already_S_OF_A55" , 243},
            	{"S_OF_A55" , 244},
            	{"relevant_evt_OF_A55" , 245},
            	{"required_OF_A56" , 246},
            	{"already_S_OF_A56" , 247},
            	{"S_OF_A56" , 248},
            	{"relevant_evt_OF_A56" , 249},
            	{"required_OF_A57" , 250},
            	{"already_S_OF_A57" , 251},
            	{"S_OF_A57" , 252},
            	{"relevant_evt_OF_A57" , 253},
            	{"required_OF_A58" , 254},
            	{"already_S_OF_A58" , 255},
            	{"S_OF_A58" , 256},
            	{"relevant_evt_OF_A58" , 257},
            	{"required_OF_A59" , 258},
            	{"already_S_OF_A59" , 259},
            	{"S_OF_A59" , 260},
            	{"relevant_evt_OF_A59" , 261},
            	{"required_OF_A60" , 262},
            	{"already_S_OF_A60" , 263},
            	{"S_OF_A60" , 264},
            	{"relevant_evt_OF_A60" , 265},
            	{"required_OF_A61" , 266},
            	{"already_S_OF_A61" , 267},
            	{"S_OF_A61" , 268},
            	{"relevant_evt_OF_A61" , 269},
            	{"required_OF_A62" , 270},
            	{"already_S_OF_A62" , 271},
            	{"S_OF_A62" , 272},
            	{"relevant_evt_OF_A62" , 273},
            	{"required_OF_A63" , 274},
            	{"already_S_OF_A63" , 275},
            	{"S_OF_A63" , 276},
            	{"relevant_evt_OF_A63" , 277},
            	{"required_OF_A64" , 278},
            	{"already_S_OF_A64" , 279},
            	{"S_OF_A64" , 280},
            	{"relevant_evt_OF_A64" , 281},
            	{"required_OF_A65" , 282},
            	{"already_S_OF_A65" , 283},
            	{"S_OF_A65" , 284},
            	{"relevant_evt_OF_A65" , 285},
            	{"required_OF_A66" , 286},
            	{"already_S_OF_A66" , 287},
            	{"S_OF_A66" , 288},
            	{"relevant_evt_OF_A66" , 289},
            	{"required_OF_A67" , 290},
            	{"already_S_OF_A67" , 291},
            	{"S_OF_A67" , 292},
            	{"relevant_evt_OF_A67" , 293},
            	{"failF_OF_A67" , 294},
            	{"required_OF_A68" , 295},
            	{"already_S_OF_A68" , 296},
            	{"S_OF_A68" , 297},
            	{"relevant_evt_OF_A68" , 298},
            	{"failF_OF_A68" , 299},
            	{"required_OF_A69" , 300},
            	{"already_S_OF_A69" , 301},
            	{"S_OF_A69" , 302},
            	{"relevant_evt_OF_A69" , 303},
            	{"required_OF_A7" , 304},
            	{"already_S_OF_A7" , 305},
            	{"S_OF_A7" , 306},
            	{"relevant_evt_OF_A7" , 307},
            	{"failF_OF_A7" , 308},
            	{"required_OF_A70" , 309},
            	{"already_S_OF_A70" , 310},
            	{"S_OF_A70" , 311},
            	{"relevant_evt_OF_A70" , 312},
            	{"required_OF_A71" , 313},
            	{"already_S_OF_A71" , 314},
            	{"S_OF_A71" , 315},
            	{"relevant_evt_OF_A71" , 316},
            	{"required_OF_A72" , 317},
            	{"already_S_OF_A72" , 318},
            	{"S_OF_A72" , 319},
            	{"relevant_evt_OF_A72" , 320},
            	{"required_OF_A73" , 321},
            	{"already_S_OF_A73" , 322},
            	{"S_OF_A73" , 323},
            	{"relevant_evt_OF_A73" , 324},
            	{"required_OF_A74" , 325},
            	{"already_S_OF_A74" , 326},
            	{"S_OF_A74" , 327},
            	{"relevant_evt_OF_A74" , 328},
            	{"required_OF_A75" , 329},
            	{"already_S_OF_A75" , 330},
            	{"S_OF_A75" , 331},
            	{"relevant_evt_OF_A75" , 332},
            	{"failF_OF_A75" , 333},
            	{"required_OF_A76" , 334},
            	{"already_S_OF_A76" , 335},
            	{"S_OF_A76" , 336},
            	{"relevant_evt_OF_A76" , 337},
            	{"failF_OF_A76" , 338},
            	{"required_OF_A77" , 339},
            	{"already_S_OF_A77" , 340},
            	{"S_OF_A77" , 341},
            	{"relevant_evt_OF_A77" , 342},
            	{"failF_OF_A77" , 343},
            	{"required_OF_A78" , 344},
            	{"already_S_OF_A78" , 345},
            	{"S_OF_A78" , 346},
            	{"relevant_evt_OF_A78" , 347},
            	{"required_OF_A8" , 348},
            	{"already_S_OF_A8" , 349},
            	{"S_OF_A8" , 350},
            	{"relevant_evt_OF_A8" , 351},
            	{"required_OF_A80" , 352},
            	{"already_S_OF_A80" , 353},
            	{"S_OF_A80" , 354},
            	{"relevant_evt_OF_A80" , 355},
            	{"failF_OF_A80" , 356},
            	{"required_OF_A81" , 357},
            	{"already_S_OF_A81" , 358},
            	{"S_OF_A81" , 359},
            	{"relevant_evt_OF_A81" , 360},
            	{"failF_OF_A81" , 361},
            	{"required_OF_A82" , 362},
            	{"already_S_OF_A82" , 363},
            	{"S_OF_A82" , 364},
            	{"relevant_evt_OF_A82" , 365},
            	{"failF_OF_A82" , 366},
            	{"required_OF_A83" , 367},
            	{"already_S_OF_A83" , 368},
            	{"S_OF_A83" , 369},
            	{"relevant_evt_OF_A83" , 370},
            	{"required_OF_A85" , 371},
            	{"already_S_OF_A85" , 372},
            	{"S_OF_A85" , 373},
            	{"relevant_evt_OF_A85" , 374},
            	{"required_OF_A86" , 375},
            	{"already_S_OF_A86" , 376},
            	{"S_OF_A86" , 377},
            	{"relevant_evt_OF_A86" , 378},
            	{"failF_OF_A86" , 379},
            	{"required_OF_A87" , 380},
            	{"already_S_OF_A87" , 381},
            	{"S_OF_A87" , 382},
            	{"relevant_evt_OF_A87" , 383},
            	{"failF_OF_A87" , 384},
            	{"required_OF_A88" , 385},
            	{"already_S_OF_A88" , 386},
            	{"S_OF_A88" , 387},
            	{"relevant_evt_OF_A88" , 388},
            	{"failF_OF_A88" , 389},
            	{"required_OF_A89" , 390},
            	{"already_S_OF_A89" , 391},
            	{"S_OF_A89" , 392},
            	{"relevant_evt_OF_A89" , 393},
            	{"required_OF_A91" , 394},
            	{"already_S_OF_A91" , 395},
            	{"S_OF_A91" , 396},
            	{"relevant_evt_OF_A91" , 397},
            	{"failF_OF_A91" , 398},
            	{"required_OF_A92" , 399},
            	{"already_S_OF_A92" , 400},
            	{"S_OF_A92" , 401},
            	{"relevant_evt_OF_A92" , 402},
            	{"failF_OF_A92" , 403},
            	{"required_OF_A93" , 404},
            	{"already_S_OF_A93" , 405},
            	{"S_OF_A93" , 406},
            	{"relevant_evt_OF_A93" , 407},
            	{"failF_OF_A93" , 408},
            	{"required_OF_A94" , 409},
            	{"already_S_OF_A94" , 410},
            	{"S_OF_A94" , 411},
            	{"relevant_evt_OF_A94" , 412},
            	{"required_OF_A96" , 413},
            	{"already_S_OF_A96" , 414},
            	{"S_OF_A96" , 415},
            	{"relevant_evt_OF_A96" , 416},
            	{"required_OF_A97" , 417},
            	{"already_S_OF_A97" , 418},
            	{"S_OF_A97" , 419},
            	{"relevant_evt_OF_A97" , 420},
            	{"failF_OF_A97" , 421},
            	{"required_OF_A98" , 422},
            	{"already_S_OF_A98" , 423},
            	{"S_OF_A98" , 424},
            	{"relevant_evt_OF_A98" , 425},
            	{"failF_OF_A98" , 426},
            	{"required_OF_A99" , 427},
            	{"already_S_OF_A99" , 428},
            	{"S_OF_A99" , 429},
            	{"relevant_evt_OF_A99" , 430},
            	{"failF_OF_A99" , 431},
            	{"required_OF_UE_1" , 432},
            	{"already_S_OF_UE_1" , 433},
            	{"S_OF_UE_1" , 434},
            	{"relevant_evt_OF_UE_1" , 435},
            	{"required_OF_f_A43" , 436},
            	{"already_S_OF_f_A43" , 437},
            	{"S_OF_f_A43" , 438},
            	{"relevant_evt_OF_f_A43" , 439},
            	{"failF_OF_f_A43" , 440},
            	{"required_OF_f_A44" , 441},
            	{"already_S_OF_f_A44" , 442},
            	{"S_OF_f_A44" , 443},
            	{"relevant_evt_OF_f_A44" , 444},
            	{"failF_OF_f_A44" , 445},
            	{"required_OF_f_A45" , 446},
            	{"already_S_OF_f_A45" , 447},
            	{"S_OF_f_A45" , 448},
            	{"relevant_evt_OF_f_A45" , 449},
            	{"failF_OF_f_A45" , 450},
            	{"required_OF_f_A46" , 451},
            	{"already_S_OF_f_A46" , 452},
            	{"S_OF_f_A46" , 453},
            	{"relevant_evt_OF_f_A46" , 454},
            	{"failF_OF_f_A46" , 455},
            	{"required_OF_f_A47" , 456},
            	{"already_S_OF_f_A47" , 457},
            	{"S_OF_f_A47" , 458},
            	{"relevant_evt_OF_f_A47" , 459},
            	{"failF_OF_f_A47" , 460},
            	{"required_OF_f_A48" , 461},
            	{"already_S_OF_f_A48" , 462},
            	{"S_OF_f_A48" , 463},
            	{"relevant_evt_OF_f_A48" , 464},
            	{"failF_OF_f_A48" , 465},
            	{"required_OF_f_A49" , 466},
            	{"already_S_OF_f_A49" , 467},
            	{"S_OF_f_A49" , 468},
            	{"relevant_evt_OF_f_A49" , 469},
            	{"failF_OF_f_A49" , 470},
            	{"required_OF_f_A51" , 471},
            	{"already_S_OF_f_A51" , 472},
            	{"S_OF_f_A51" , 473},
            	{"relevant_evt_OF_f_A51" , 474},
            	{"failF_OF_f_A51" , 475},
            	{"required_OF_f_A52" , 476},
            	{"already_S_OF_f_A52" , 477},
            	{"S_OF_f_A52" , 478},
            	{"relevant_evt_OF_f_A52" , 479},
            	{"failF_OF_f_A52" , 480},
            	{"required_OF_f_A54" , 481},
            	{"already_S_OF_f_A54" , 482},
            	{"S_OF_f_A54" , 483},
            	{"relevant_evt_OF_f_A54" , 484},
            	{"failF_OF_f_A54" , 485},
            	{"required_OF_f_A55" , 486},
            	{"already_S_OF_f_A55" , 487},
            	{"S_OF_f_A55" , 488},
            	{"relevant_evt_OF_f_A55" , 489},
            	{"failF_OF_f_A55" , 490},
            	{"required_OF_f_A57" , 491},
            	{"already_S_OF_f_A57" , 492},
            	{"S_OF_f_A57" , 493},
            	{"relevant_evt_OF_f_A57" , 494},
            	{"failF_OF_f_A57" , 495},
            	{"required_OF_f_A58" , 496},
            	{"already_S_OF_f_A58" , 497},
            	{"S_OF_f_A58" , 498},
            	{"relevant_evt_OF_f_A58" , 499},
            	{"failF_OF_f_A58" , 500},
            	{"required_OF_f_A59" , 501},
            	{"already_S_OF_f_A59" , 502},
            	{"S_OF_f_A59" , 503},
            	{"relevant_evt_OF_f_A59" , 504},
            	{"failF_OF_f_A59" , 505},
            	{"required_OF_f_A60" , 506},
            	{"already_S_OF_f_A60" , 507},
            	{"S_OF_f_A60" , 508},
            	{"relevant_evt_OF_f_A60" , 509},
            	{"failF_OF_f_A60" , 510},
            	{"required_OF_f_A61" , 511},
            	{"already_S_OF_f_A61" , 512},
            	{"S_OF_f_A61" , 513},
            	{"relevant_evt_OF_f_A61" , 514},
            	{"failF_OF_f_A61" , 515},
            	{"required_OF_f_A62" , 516},
            	{"already_S_OF_f_A62" , 517},
            	{"S_OF_f_A62" , 518},
            	{"relevant_evt_OF_f_A62" , 519},
            	{"failF_OF_f_A62" , 520},
            	{"required_OF_f_A63" , 521},
            	{"already_S_OF_f_A63" , 522},
            	{"S_OF_f_A63" , 523},
            	{"relevant_evt_OF_f_A63" , 524},
            	{"failF_OF_f_A63" , 525},
            	{"required_OF_f_A64" , 526},
            	{"already_S_OF_f_A64" , 527},
            	{"S_OF_f_A64" , 528},
            	{"relevant_evt_OF_f_A64" , 529},
            	{"failF_OF_f_A64" , 530},
            	{"required_OF_f_A65" , 531},
            	{"already_S_OF_f_A65" , 532},
            	{"S_OF_f_A65" , 533},
            	{"relevant_evt_OF_f_A65" , 534},
            	{"failF_OF_f_A65" , 535},
            	{"required_OF_f_A66" , 536},
            	{"already_S_OF_f_A66" , 537},
            	{"S_OF_f_A66" , 538},
            	{"relevant_evt_OF_f_A66" , 539},
            	{"failF_OF_f_A66" , 540},
            	{"required_OF_i_A43" , 541},
            	{"already_S_OF_i_A43" , 542},
            	{"S_OF_i_A43" , 543},
            	{"relevant_evt_OF_i_A43" , 544},
            	{"failI_OF_i_A43" , 545},
            	{"to_be_fired_OF_i_A43" , 546},
            	{"already_standby_OF_i_A43" , 547},
            	{"already_required_OF_i_A43" , 548},
            	{"required_OF_i_A44" , 549},
            	{"already_S_OF_i_A44" , 550},
            	{"S_OF_i_A44" , 551},
            	{"relevant_evt_OF_i_A44" , 552},
            	{"failI_OF_i_A44" , 553},
            	{"to_be_fired_OF_i_A44" , 554},
            	{"already_standby_OF_i_A44" , 555},
            	{"already_required_OF_i_A44" , 556},
            	{"required_OF_i_A45" , 557},
            	{"already_S_OF_i_A45" , 558},
            	{"S_OF_i_A45" , 559},
            	{"relevant_evt_OF_i_A45" , 560},
            	{"failI_OF_i_A45" , 561},
            	{"to_be_fired_OF_i_A45" , 562},
            	{"already_standby_OF_i_A45" , 563},
            	{"already_required_OF_i_A45" , 564},
            	{"required_OF_i_A46" , 565},
            	{"already_S_OF_i_A46" , 566},
            	{"S_OF_i_A46" , 567},
            	{"relevant_evt_OF_i_A46" , 568},
            	{"failI_OF_i_A46" , 569},
            	{"to_be_fired_OF_i_A46" , 570},
            	{"already_standby_OF_i_A46" , 571},
            	{"already_required_OF_i_A46" , 572},
            	{"required_OF_i_A47" , 573},
            	{"already_S_OF_i_A47" , 574},
            	{"S_OF_i_A47" , 575},
            	{"relevant_evt_OF_i_A47" , 576},
            	{"failI_OF_i_A47" , 577},
            	{"to_be_fired_OF_i_A47" , 578},
            	{"already_standby_OF_i_A47" , 579},
            	{"already_required_OF_i_A47" , 580},
            	{"required_OF_i_A48" , 581},
            	{"already_S_OF_i_A48" , 582},
            	{"S_OF_i_A48" , 583},
            	{"relevant_evt_OF_i_A48" , 584},
            	{"failI_OF_i_A48" , 585},
            	{"to_be_fired_OF_i_A48" , 586},
            	{"already_standby_OF_i_A48" , 587},
            	{"already_required_OF_i_A48" , 588},
            	{"required_OF_i_A49" , 589},
            	{"already_S_OF_i_A49" , 590},
            	{"S_OF_i_A49" , 591},
            	{"relevant_evt_OF_i_A49" , 592},
            	{"failI_OF_i_A49" , 593},
            	{"to_be_fired_OF_i_A49" , 594},
            	{"already_standby_OF_i_A49" , 595},
            	{"already_required_OF_i_A49" , 596},
            	{"required_OF_i_A51" , 597},
            	{"already_S_OF_i_A51" , 598},
            	{"S_OF_i_A51" , 599},
            	{"relevant_evt_OF_i_A51" , 600},
            	{"failI_OF_i_A51" , 601},
            	{"to_be_fired_OF_i_A51" , 602},
            	{"already_standby_OF_i_A51" , 603},
            	{"already_required_OF_i_A51" , 604},
            	{"required_OF_i_A52" , 605},
            	{"already_S_OF_i_A52" , 606},
            	{"S_OF_i_A52" , 607},
            	{"relevant_evt_OF_i_A52" , 608},
            	{"failI_OF_i_A52" , 609},
            	{"to_be_fired_OF_i_A52" , 610},
            	{"already_standby_OF_i_A52" , 611},
            	{"already_required_OF_i_A52" , 612},
            	{"required_OF_i_A54" , 613},
            	{"already_S_OF_i_A54" , 614},
            	{"S_OF_i_A54" , 615},
            	{"relevant_evt_OF_i_A54" , 616},
            	{"failI_OF_i_A54" , 617},
            	{"to_be_fired_OF_i_A54" , 618},
            	{"already_standby_OF_i_A54" , 619},
            	{"already_required_OF_i_A54" , 620},
            	{"required_OF_i_A55" , 621},
            	{"already_S_OF_i_A55" , 622},
            	{"S_OF_i_A55" , 623},
            	{"relevant_evt_OF_i_A55" , 624},
            	{"failI_OF_i_A55" , 625},
            	{"to_be_fired_OF_i_A55" , 626},
            	{"already_standby_OF_i_A55" , 627},
            	{"already_required_OF_i_A55" , 628},
            	{"required_OF_i_A57" , 629},
            	{"already_S_OF_i_A57" , 630},
            	{"S_OF_i_A57" , 631},
            	{"relevant_evt_OF_i_A57" , 632},
            	{"failI_OF_i_A57" , 633},
            	{"to_be_fired_OF_i_A57" , 634},
            	{"already_standby_OF_i_A57" , 635},
            	{"already_required_OF_i_A57" , 636},
            	{"required_OF_i_A58" , 637},
            	{"already_S_OF_i_A58" , 638},
            	{"S_OF_i_A58" , 639},
            	{"relevant_evt_OF_i_A58" , 640},
            	{"failI_OF_i_A58" , 641},
            	{"to_be_fired_OF_i_A58" , 642},
            	{"already_standby_OF_i_A58" , 643},
            	{"already_required_OF_i_A58" , 644},
            	{"required_OF_i_A59" , 645},
            	{"already_S_OF_i_A59" , 646},
            	{"S_OF_i_A59" , 647},
            	{"relevant_evt_OF_i_A59" , 648},
            	{"failI_OF_i_A59" , 649},
            	{"to_be_fired_OF_i_A59" , 650},
            	{"already_standby_OF_i_A59" , 651},
            	{"already_required_OF_i_A59" , 652},
            	{"required_OF_i_A60" , 653},
            	{"already_S_OF_i_A60" , 654},
            	{"S_OF_i_A60" , 655},
            	{"relevant_evt_OF_i_A60" , 656},
            	{"failI_OF_i_A60" , 657},
            	{"to_be_fired_OF_i_A60" , 658},
            	{"already_standby_OF_i_A60" , 659},
            	{"already_required_OF_i_A60" , 660},
            	{"required_OF_i_A61" , 661},
            	{"already_S_OF_i_A61" , 662},
            	{"S_OF_i_A61" , 663},
            	{"relevant_evt_OF_i_A61" , 664},
            	{"failI_OF_i_A61" , 665},
            	{"to_be_fired_OF_i_A61" , 666},
            	{"already_standby_OF_i_A61" , 667},
            	{"already_required_OF_i_A61" , 668},
            	{"required_OF_i_A62" , 669},
            	{"already_S_OF_i_A62" , 670},
            	{"S_OF_i_A62" , 671},
            	{"relevant_evt_OF_i_A62" , 672},
            	{"failI_OF_i_A62" , 673},
            	{"to_be_fired_OF_i_A62" , 674},
            	{"already_standby_OF_i_A62" , 675},
            	{"already_required_OF_i_A62" , 676},
            	{"required_OF_i_A63" , 677},
            	{"already_S_OF_i_A63" , 678},
            	{"S_OF_i_A63" , 679},
            	{"relevant_evt_OF_i_A63" , 680},
            	{"failI_OF_i_A63" , 681},
            	{"to_be_fired_OF_i_A63" , 682},
            	{"already_standby_OF_i_A63" , 683},
            	{"already_required_OF_i_A63" , 684},
            	{"required_OF_i_A64" , 685},
            	{"already_S_OF_i_A64" , 686},
            	{"S_OF_i_A64" , 687},
            	{"relevant_evt_OF_i_A64" , 688},
            	{"failI_OF_i_A64" , 689},
            	{"to_be_fired_OF_i_A64" , 690},
            	{"already_standby_OF_i_A64" , 691},
            	{"already_required_OF_i_A64" , 692},
            	{"required_OF_i_A65" , 693},
            	{"already_S_OF_i_A65" , 694},
            	{"S_OF_i_A65" , 695},
            	{"relevant_evt_OF_i_A65" , 696},
            	{"failI_OF_i_A65" , 697},
            	{"to_be_fired_OF_i_A65" , 698},
            	{"already_standby_OF_i_A65" , 699},
            	{"already_required_OF_i_A65" , 700},
            	{"required_OF_i_A66" , 701},
            	{"already_S_OF_i_A66" , 702},
            	{"S_OF_i_A66" , 703},
            	{"relevant_evt_OF_i_A66" , 704},
            	{"failI_OF_i_A66" , 705},
            	{"to_be_fired_OF_i_A66" , 706},
            	{"already_standby_OF_i_A66" , 707},
            	{"already_required_OF_i_A66" , 708}},

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
                    709 ,
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
			std::string const when_to_check_OF_i_A59 = "not_req_to_req";
			std::string const when_to_check_OF_i_A58 = "not_req_to_req";
			bool const force_relevant_events_OF_A70 = false;
			double const mu_OF_f_A46 = 0.1;
			std::string const calculate_required_OF_A40 = "fn_fathers_and_trig";
			std::string const trigger_kind_OF_t_seq_5 = "equal_to_S_trig";
			bool const failI_FROZEN_OF_i_A52 = false;
			double const mu_OF_A103 = 0.1;
			std::string const calculate_required_OF_A86 = "equal_to_S_trig";
			double const mu_OF_f_A55 = 0.1;
			bool const force_relevant_events_OF_f_A58 = false;
			std::string const trigger_kind_OF_t_dep_11 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_i_A43 = false;
			bool const force_relevant_events_OF_A39 = false;
			double const gamma_OF_i_A64 = 1;
			bool const repairable_system_OF_OPTIONS = true;
			std::string const trigger_kind_OF_t_dep_16 = "fn_fathers_and_trig";
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
			double const mu_OF_A29 = 0.1;
			bool const force_relevant_events_OF_A74 = false;
			double const lambda_OF_A19 = 0;
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
			std::string const calculate_required_OF_f_A52 = "fn_fathers_and_trig";
			double const mu_OF_f_A65 = 0.1;
			bool const force_relevant_events_OF_i_A65 = false;
			std::string const calculate_required_OF_A39 = "fn_fathers_and_trig";
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
			bool const no_tirm_OF___ARBRE__EIRM = false;
			std::string const when_to_check_OF_i_A52 = "not_req_to_req";
			double const mu_OF_f_A49 = 0.1;
			std::string const calculate_required_OF_UE_1 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_f_A59 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A115 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_f_A63 = false;
			std::string const calculate_required_OF_i_A63 = "fn_fathers_and_trig";
			double const lambda_OF_A115 = 1e-06;
			double const lambda_OF_A75 = 9.9e-06;
			bool const failI_FROZEN_OF_i_A66 = false;
			bool const failI_FROZEN_OF_i_A47 = false;
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
			double const mu_OF_A109 = 0.1;
			double const mu_OF_A82 = 0.1;
			bool const force_relevant_events_OF_f_A62 = false;
			bool const failF_FROZEN_OF_A13 = false;
			double const mu_OF_i_A57 = 0.1;
			std::string const calculate_required_OF_f_A47 = "fn_fathers_and_trig";
			double const mu_OF_i_A63 = 0.1;
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
			std::string const trigger_kind_OF_t_dep_0 = "fn_fathers_and_trig";
			double const mu_OF_i_A60 = 0.1;
			std::string const calculate_required_OF_A103 = "fn_fathers_and_trig";
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
			double const mu_OF_A98 = 0.1;
			double const lambda_OF_A104 = 1e-05;
			bool const force_relevant_events_OF_A53 = false;
			bool const force_relevant_events_OF_A59 = false;
			double const mu_OF_i_A59 = 0.1;
			double const mu_OF_i_A58 = 0.1;
			bool const force_relevant_events_OF_f_A64 = false;
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
			bool const force_relevant_events_OF_i_A63 = false;
			bool const failF_FROZEN_OF_A1 = false;
			bool const failF_FROZEN_OF_A110 = false;
			std::string const when_to_check_OF_i_A47 = "not_req_to_req";
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
			double const mu_OF_A104 = 0.1;
			bool const force_relevant_events_OF_A17 = false;
			bool const force_relevant_events_OF_A68 = false;
			bool const failF_FROZEN_OF_A77 = false;
			bool const force_relevant_events_OF_A34 = false;
			std::string const calculate_required_OF_A93 = "fn_fathers_and_trig";
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
			double const lambda_OF_A28 = 2e-07;
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
			std::string const calculate_required_OF_A58 = "fn_fathers_and_trig";
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
			std::string const calculate_required_OF_i_A60 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A78 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_i_A44 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_f_A61 = "fn_fathers_and_trig";
			double const lambda_OF_A86 = 9.9e-06;
			std::string const calculate_required_OF_i_A61 = "fn_fathers_and_trig";
			std::string const when_to_check_OF_i_A55 = "not_req_to_req";
			std::string const calculate_required_OF_A17 = "fn_fathers_and_trig";
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
			double const mu_OF_i_A45 = 0.1;
			std::string const calculate_required_OF_A98 = "fn_fathers_and_trig";
			double const mu_OF_i_A44 = 0.1;
			bool const force_relevant_events_OF_f_A66 = false;
			double const mu_OF_f_A61 = 0.1;
			double const mu_OF_i_A61 = 0.1;
			std::string const calculate_required_OF_A105 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_A7 = false;
			bool const force_relevant_events_OF_f_A65 = false;
			bool const tirm_article_OF___ARBRE__EIRM = true;
			double const lambda_OF_f_A51 = 0;
			std::string const calculate_required_OF_A22 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_A25 = false;
			std::string const calculate_required_OF_A111 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_f_A62 = false;
			std::string const calculate_required_OF_A44 = "fn_fathers_and_trig";
			double const gamma_OF_i_A47 = 1;
			std::string const calculate_required_OF_A19 = "fn_fathers_and_trig";
			double const lambda_OF_f_A60 = 0;
			std::string const calculate_required_OF_f_A63 = "fn_fathers_and_trig";
			double const mu_OF_i_A65 = 0.1;
			double const gamma_OF_i_A51 = 1;
			bool const force_relevant_events_OF_A47 = false;
			std::string const calculate_required_OF_A107 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_i_A64 = false;
			std::string const trigger_kind_OF_t_dep_10 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A67 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A49 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A75 = "equal_to_S_trig";
			std::string const calculate_required_OF_A65 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_A86 = false;
			bool const no_repair_OF___ARBRE__EIRM = false;
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
			double const lambda_OF_A97 = 6e-05;
			bool const failF_FROZEN_OF_f_A65 = false;
			bool const force_relevant_events_OF_A93 = false;
			bool const force_relevant_events_OF_A73 = false;
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
			double const mu_OF_f_A58 = 0.1;
			std::string const calculate_required_OF_A116 = "fn_fathers_and_trig";
			std::string const trigger_kind_OF_t_seq_1 = "equal_to_S_trig";
			std::string const calculate_required_OF_A48 = "fn_fathers_and_trig";
			double const mu_OF_f_A64 = 0.1;
			bool const force_relevant_events_OF_A19 = false;
			double const mu_OF_f_A52 = 0.1;
			bool const force_relevant_events_OF_f_A63 = false;
			std::string const trigger_kind_OF_t_dep_2 = "fn_fathers_and_trig";
			double const mu_OF_A39 = 0.1;
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
			std::string const calculate_required_OF_A64 = "fn_fathers_and_trig";
			double const mu_OF_A80 = 0.1;
			std::string const calculate_required_OF_A108 = "equal_to_S_trig";
			double const lambda_OF_A76 = 1e-07;
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
			double const lambda_OF_f_A59 = 0;
			std::string const when_to_check_OF_i_A60 = "not_req_to_req";
			double const lambda_OF_A91 = 9.9e-07;
			std::string const trigger_kind_OF_t_dep_14 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A60 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A85 = false;
		
            /* ---------- DECLARATION OF OCCURRENCE RULES FIRING FLAGS ------------ */
            bool FIRE_xx10_OF_A1;
            bool FIRE_xx11_OF_A1;
            bool FIRE_xx10_OF_A10;
            bool FIRE_xx11_OF_A10;
            bool FIRE_xx10_OF_A102;
            bool FIRE_xx11_OF_A102;
            bool FIRE_xx10_OF_A103;
            bool FIRE_xx11_OF_A103;
            bool FIRE_xx10_OF_A104;
            bool FIRE_xx11_OF_A104;
            bool FIRE_xx10_OF_A108;
            bool FIRE_xx11_OF_A108;
            bool FIRE_xx10_OF_A109;
            bool FIRE_xx11_OF_A109;
            bool FIRE_xx10_OF_A110;
            bool FIRE_xx11_OF_A110;
            bool FIRE_xx10_OF_A113;
            bool FIRE_xx11_OF_A113;
            bool FIRE_xx10_OF_A114;
            bool FIRE_xx11_OF_A114;
            bool FIRE_xx10_OF_A115;
            bool FIRE_xx11_OF_A115;
            bool FIRE_xx10_OF_A13;
            bool FIRE_xx11_OF_A13;
            bool FIRE_xx10_OF_A16;
            bool FIRE_xx11_OF_A16;
            bool FIRE_xx10_OF_A19;
            bool FIRE_xx11_OF_A19;
            bool FIRE_xx10_OF_A22;
            bool FIRE_xx11_OF_A22;
            bool FIRE_xx10_OF_A25;
            bool FIRE_xx11_OF_A25;
            bool FIRE_xx10_OF_A28;
            bool FIRE_xx11_OF_A28;
            bool FIRE_xx10_OF_A29;
            bool FIRE_xx11_OF_A29;
            bool FIRE_xx10_OF_A33;
            bool FIRE_xx11_OF_A33;
            bool FIRE_xx10_OF_A36;
            bool FIRE_xx11_OF_A36;
            bool FIRE_xx10_OF_A39;
            bool FIRE_xx11_OF_A39;
            bool FIRE_xx10_OF_A4;
            bool FIRE_xx11_OF_A4;
            bool FIRE_xx10_OF_A67;
            bool FIRE_xx11_OF_A67;
            bool FIRE_xx10_OF_A68;
            bool FIRE_xx11_OF_A68;
            bool FIRE_xx10_OF_A7;
            bool FIRE_xx11_OF_A7;
            bool FIRE_xx10_OF_A75;
            bool FIRE_xx11_OF_A75;
            bool FIRE_xx10_OF_A76;
            bool FIRE_xx11_OF_A76;
            bool FIRE_xx10_OF_A77;
            bool FIRE_xx11_OF_A77;
            bool FIRE_xx10_OF_A80;
            bool FIRE_xx11_OF_A80;
            bool FIRE_xx10_OF_A81;
            bool FIRE_xx11_OF_A81;
            bool FIRE_xx10_OF_A82;
            bool FIRE_xx11_OF_A82;
            bool FIRE_xx10_OF_A86;
            bool FIRE_xx11_OF_A86;
            bool FIRE_xx10_OF_A87;
            bool FIRE_xx11_OF_A87;
            bool FIRE_xx10_OF_A88;
            bool FIRE_xx11_OF_A88;
            bool FIRE_xx10_OF_A91;
            bool FIRE_xx11_OF_A91;
            bool FIRE_xx10_OF_A92;
            bool FIRE_xx11_OF_A92;
            bool FIRE_xx10_OF_A93;
            bool FIRE_xx11_OF_A93;
            bool FIRE_xx10_OF_A97;
            bool FIRE_xx11_OF_A97;
            bool FIRE_xx10_OF_A98;
            bool FIRE_xx11_OF_A98;
            bool FIRE_xx10_OF_A99;
            bool FIRE_xx11_OF_A99;
            bool FIRE_xx10_OF_f_A43;
            bool FIRE_xx11_OF_f_A43;
            bool FIRE_xx10_OF_f_A44;
            bool FIRE_xx11_OF_f_A44;
            bool FIRE_xx10_OF_f_A45;
            bool FIRE_xx11_OF_f_A45;
            bool FIRE_xx10_OF_f_A46;
            bool FIRE_xx11_OF_f_A46;
            bool FIRE_xx10_OF_f_A47;
            bool FIRE_xx11_OF_f_A47;
            bool FIRE_xx10_OF_f_A48;
            bool FIRE_xx11_OF_f_A48;
            bool FIRE_xx10_OF_f_A49;
            bool FIRE_xx11_OF_f_A49;
            bool FIRE_xx10_OF_f_A51;
            bool FIRE_xx11_OF_f_A51;
            bool FIRE_xx10_OF_f_A52;
            bool FIRE_xx11_OF_f_A52;
            bool FIRE_xx10_OF_f_A54;
            bool FIRE_xx11_OF_f_A54;
            bool FIRE_xx10_OF_f_A55;
            bool FIRE_xx11_OF_f_A55;
            bool FIRE_xx10_OF_f_A57;
            bool FIRE_xx11_OF_f_A57;
            bool FIRE_xx10_OF_f_A58;
            bool FIRE_xx11_OF_f_A58;
            bool FIRE_xx10_OF_f_A59;
            bool FIRE_xx11_OF_f_A59;
            bool FIRE_xx10_OF_f_A60;
            bool FIRE_xx11_OF_f_A60;
            bool FIRE_xx10_OF_f_A61;
            bool FIRE_xx11_OF_f_A61;
            bool FIRE_xx10_OF_f_A62;
            bool FIRE_xx11_OF_f_A62;
            bool FIRE_xx10_OF_f_A63;
            bool FIRE_xx11_OF_f_A63;
            bool FIRE_xx10_OF_f_A64;
            bool FIRE_xx11_OF_f_A64;
            bool FIRE_xx10_OF_f_A65;
            bool FIRE_xx11_OF_f_A65;
            bool FIRE_xx10_OF_f_A66;
            bool FIRE_xx11_OF_f_A66;
            bool FIRE_xx23_OF_i_A43_INS_122;
            bool FIRE_xx23_OF_i_A43_INS_123;
            bool FIRE_xx24_OF_i_A43;
            bool FIRE_xx23_OF_i_A44_INS_125;
            bool FIRE_xx23_OF_i_A44_INS_126;
            bool FIRE_xx24_OF_i_A44;
            bool FIRE_xx23_OF_i_A45_INS_128;
            bool FIRE_xx23_OF_i_A45_INS_129;
            bool FIRE_xx24_OF_i_A45;
            bool FIRE_xx23_OF_i_A46_INS_131;
            bool FIRE_xx23_OF_i_A46_INS_132;
            bool FIRE_xx24_OF_i_A46;
            bool FIRE_xx23_OF_i_A47_INS_134;
            bool FIRE_xx23_OF_i_A47_INS_135;
            bool FIRE_xx24_OF_i_A47;
            bool FIRE_xx23_OF_i_A48_INS_137;
            bool FIRE_xx23_OF_i_A48_INS_138;
            bool FIRE_xx24_OF_i_A48;
            bool FIRE_xx23_OF_i_A49_INS_140;
            bool FIRE_xx23_OF_i_A49_INS_141;
            bool FIRE_xx24_OF_i_A49;
            bool FIRE_xx23_OF_i_A51_INS_143;
            bool FIRE_xx23_OF_i_A51_INS_144;
            bool FIRE_xx24_OF_i_A51;
            bool FIRE_xx23_OF_i_A52_INS_146;
            bool FIRE_xx23_OF_i_A52_INS_147;
            bool FIRE_xx24_OF_i_A52;
            bool FIRE_xx23_OF_i_A54_INS_149;
            bool FIRE_xx23_OF_i_A54_INS_150;
            bool FIRE_xx24_OF_i_A54;
            bool FIRE_xx23_OF_i_A55_INS_152;
            bool FIRE_xx23_OF_i_A55_INS_153;
            bool FIRE_xx24_OF_i_A55;
            bool FIRE_xx23_OF_i_A57_INS_155;
            bool FIRE_xx23_OF_i_A57_INS_156;
            bool FIRE_xx24_OF_i_A57;
            bool FIRE_xx23_OF_i_A58_INS_158;
            bool FIRE_xx23_OF_i_A58_INS_159;
            bool FIRE_xx24_OF_i_A58;
            bool FIRE_xx23_OF_i_A59_INS_161;
            bool FIRE_xx23_OF_i_A59_INS_162;
            bool FIRE_xx24_OF_i_A59;
            bool FIRE_xx23_OF_i_A60_INS_164;
            bool FIRE_xx23_OF_i_A60_INS_165;
            bool FIRE_xx24_OF_i_A60;
            bool FIRE_xx23_OF_i_A61_INS_167;
            bool FIRE_xx23_OF_i_A61_INS_168;
            bool FIRE_xx24_OF_i_A61;
            bool FIRE_xx23_OF_i_A62_INS_170;
            bool FIRE_xx23_OF_i_A62_INS_171;
            bool FIRE_xx24_OF_i_A62;
            bool FIRE_xx23_OF_i_A63_INS_173;
            bool FIRE_xx23_OF_i_A63_INS_174;
            bool FIRE_xx24_OF_i_A63;
            bool FIRE_xx23_OF_i_A64_INS_176;
            bool FIRE_xx23_OF_i_A64_INS_177;
            bool FIRE_xx24_OF_i_A64;
            bool FIRE_xx23_OF_i_A65_INS_179;
            bool FIRE_xx23_OF_i_A65_INS_180;
            bool FIRE_xx24_OF_i_A65;
            bool FIRE_xx23_OF_i_A66_INS_182;
            bool FIRE_xx23_OF_i_A66_INS_183;
            bool FIRE_xx24_OF_i_A66;

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
            int required_OF_A13 = 87 ;
            int already_S_OF_A13 = 88 ;
            int S_OF_A13 = 89 ;
            int relevant_evt_OF_A13 = 90 ;
            int failF_OF_A13 = 91 ;
            int required_OF_A14 = 92 ;
            int already_S_OF_A14 = 93 ;
            int S_OF_A14 = 94 ;
            int relevant_evt_OF_A14 = 95 ;
            int required_OF_A16 = 96 ;
            int already_S_OF_A16 = 97 ;
            int S_OF_A16 = 98 ;
            int relevant_evt_OF_A16 = 99 ;
            int failF_OF_A16 = 100 ;
            int required_OF_A17 = 101 ;
            int already_S_OF_A17 = 102 ;
            int S_OF_A17 = 103 ;
            int relevant_evt_OF_A17 = 104 ;
            int required_OF_A19 = 105 ;
            int already_S_OF_A19 = 106 ;
            int S_OF_A19 = 107 ;
            int relevant_evt_OF_A19 = 108 ;
            int failF_OF_A19 = 109 ;
            int required_OF_A2 = 110 ;
            int already_S_OF_A2 = 111 ;
            int S_OF_A2 = 112 ;
            int relevant_evt_OF_A2 = 113 ;
            int required_OF_A20 = 114 ;
            int already_S_OF_A20 = 115 ;
            int S_OF_A20 = 116 ;
            int relevant_evt_OF_A20 = 117 ;
            int required_OF_A22 = 118 ;
            int already_S_OF_A22 = 119 ;
            int S_OF_A22 = 120 ;
            int relevant_evt_OF_A22 = 121 ;
            int failF_OF_A22 = 122 ;
            int required_OF_A23 = 123 ;
            int already_S_OF_A23 = 124 ;
            int S_OF_A23 = 125 ;
            int relevant_evt_OF_A23 = 126 ;
            int required_OF_A25 = 127 ;
            int already_S_OF_A25 = 128 ;
            int S_OF_A25 = 129 ;
            int relevant_evt_OF_A25 = 130 ;
            int failF_OF_A25 = 131 ;
            int required_OF_A26 = 132 ;
            int already_S_OF_A26 = 133 ;
            int S_OF_A26 = 134 ;
            int relevant_evt_OF_A26 = 135 ;
            int required_OF_A28 = 136 ;
            int already_S_OF_A28 = 137 ;
            int S_OF_A28 = 138 ;
            int relevant_evt_OF_A28 = 139 ;
            int failF_OF_A28 = 140 ;
            int required_OF_A29 = 141 ;
            int already_S_OF_A29 = 142 ;
            int S_OF_A29 = 143 ;
            int relevant_evt_OF_A29 = 144 ;
            int failF_OF_A29 = 145 ;
            int required_OF_A30 = 146 ;
            int already_S_OF_A30 = 147 ;
            int S_OF_A30 = 148 ;
            int relevant_evt_OF_A30 = 149 ;
            int required_OF_A31 = 150 ;
            int already_S_OF_A31 = 151 ;
            int S_OF_A31 = 152 ;
            int relevant_evt_OF_A31 = 153 ;
            int required_OF_A33 = 154 ;
            int already_S_OF_A33 = 155 ;
            int S_OF_A33 = 156 ;
            int relevant_evt_OF_A33 = 157 ;
            int failF_OF_A33 = 158 ;
            int required_OF_A34 = 159 ;
            int already_S_OF_A34 = 160 ;
            int S_OF_A34 = 161 ;
            int relevant_evt_OF_A34 = 162 ;
            int required_OF_A36 = 163 ;
            int already_S_OF_A36 = 164 ;
            int S_OF_A36 = 165 ;
            int relevant_evt_OF_A36 = 166 ;
            int failF_OF_A36 = 167 ;
            int required_OF_A37 = 168 ;
            int already_S_OF_A37 = 169 ;
            int S_OF_A37 = 170 ;
            int relevant_evt_OF_A37 = 171 ;
            int required_OF_A39 = 172 ;
            int already_S_OF_A39 = 173 ;
            int S_OF_A39 = 174 ;
            int relevant_evt_OF_A39 = 175 ;
            int failF_OF_A39 = 176 ;
            int required_OF_A4 = 177 ;
            int already_S_OF_A4 = 178 ;
            int S_OF_A4 = 179 ;
            int relevant_evt_OF_A4 = 180 ;
            int failF_OF_A4 = 181 ;
            int required_OF_A40 = 182 ;
            int already_S_OF_A40 = 183 ;
            int S_OF_A40 = 184 ;
            int relevant_evt_OF_A40 = 185 ;
            int required_OF_A41 = 186 ;
            int already_S_OF_A41 = 187 ;
            int S_OF_A41 = 188 ;
            int relevant_evt_OF_A41 = 189 ;
            int required_OF_A43 = 190 ;
            int already_S_OF_A43 = 191 ;
            int S_OF_A43 = 192 ;
            int relevant_evt_OF_A43 = 193 ;
            int required_OF_A44 = 194 ;
            int already_S_OF_A44 = 195 ;
            int S_OF_A44 = 196 ;
            int relevant_evt_OF_A44 = 197 ;
            int required_OF_A45 = 198 ;
            int already_S_OF_A45 = 199 ;
            int S_OF_A45 = 200 ;
            int relevant_evt_OF_A45 = 201 ;
            int required_OF_A46 = 202 ;
            int already_S_OF_A46 = 203 ;
            int S_OF_A46 = 204 ;
            int relevant_evt_OF_A46 = 205 ;
            int required_OF_A47 = 206 ;
            int already_S_OF_A47 = 207 ;
            int S_OF_A47 = 208 ;
            int relevant_evt_OF_A47 = 209 ;
            int required_OF_A48 = 210 ;
            int already_S_OF_A48 = 211 ;
            int S_OF_A48 = 212 ;
            int relevant_evt_OF_A48 = 213 ;
            int required_OF_A49 = 214 ;
            int already_S_OF_A49 = 215 ;
            int S_OF_A49 = 216 ;
            int relevant_evt_OF_A49 = 217 ;
            int required_OF_A5 = 218 ;
            int already_S_OF_A5 = 219 ;
            int S_OF_A5 = 220 ;
            int relevant_evt_OF_A5 = 221 ;
            int required_OF_A50 = 222 ;
            int already_S_OF_A50 = 223 ;
            int S_OF_A50 = 224 ;
            int relevant_evt_OF_A50 = 225 ;
            int required_OF_A51 = 226 ;
            int already_S_OF_A51 = 227 ;
            int S_OF_A51 = 228 ;
            int relevant_evt_OF_A51 = 229 ;
            int required_OF_A52 = 230 ;
            int already_S_OF_A52 = 231 ;
            int S_OF_A52 = 232 ;
            int relevant_evt_OF_A52 = 233 ;
            int required_OF_A53 = 234 ;
            int already_S_OF_A53 = 235 ;
            int S_OF_A53 = 236 ;
            int relevant_evt_OF_A53 = 237 ;
            int required_OF_A54 = 238 ;
            int already_S_OF_A54 = 239 ;
            int S_OF_A54 = 240 ;
            int relevant_evt_OF_A54 = 241 ;
            int required_OF_A55 = 242 ;
            int already_S_OF_A55 = 243 ;
            int S_OF_A55 = 244 ;
            int relevant_evt_OF_A55 = 245 ;
            int required_OF_A56 = 246 ;
            int already_S_OF_A56 = 247 ;
            int S_OF_A56 = 248 ;
            int relevant_evt_OF_A56 = 249 ;
            int required_OF_A57 = 250 ;
            int already_S_OF_A57 = 251 ;
            int S_OF_A57 = 252 ;
            int relevant_evt_OF_A57 = 253 ;
            int required_OF_A58 = 254 ;
            int already_S_OF_A58 = 255 ;
            int S_OF_A58 = 256 ;
            int relevant_evt_OF_A58 = 257 ;
            int required_OF_A59 = 258 ;
            int already_S_OF_A59 = 259 ;
            int S_OF_A59 = 260 ;
            int relevant_evt_OF_A59 = 261 ;
            int required_OF_A60 = 262 ;
            int already_S_OF_A60 = 263 ;
            int S_OF_A60 = 264 ;
            int relevant_evt_OF_A60 = 265 ;
            int required_OF_A61 = 266 ;
            int already_S_OF_A61 = 267 ;
            int S_OF_A61 = 268 ;
            int relevant_evt_OF_A61 = 269 ;
            int required_OF_A62 = 270 ;
            int already_S_OF_A62 = 271 ;
            int S_OF_A62 = 272 ;
            int relevant_evt_OF_A62 = 273 ;
            int required_OF_A63 = 274 ;
            int already_S_OF_A63 = 275 ;
            int S_OF_A63 = 276 ;
            int relevant_evt_OF_A63 = 277 ;
            int required_OF_A64 = 278 ;
            int already_S_OF_A64 = 279 ;
            int S_OF_A64 = 280 ;
            int relevant_evt_OF_A64 = 281 ;
            int required_OF_A65 = 282 ;
            int already_S_OF_A65 = 283 ;
            int S_OF_A65 = 284 ;
            int relevant_evt_OF_A65 = 285 ;
            int required_OF_A66 = 286 ;
            int already_S_OF_A66 = 287 ;
            int S_OF_A66 = 288 ;
            int relevant_evt_OF_A66 = 289 ;
            int required_OF_A67 = 290 ;
            int already_S_OF_A67 = 291 ;
            int S_OF_A67 = 292 ;
            int relevant_evt_OF_A67 = 293 ;
            int failF_OF_A67 = 294 ;
            int required_OF_A68 = 295 ;
            int already_S_OF_A68 = 296 ;
            int S_OF_A68 = 297 ;
            int relevant_evt_OF_A68 = 298 ;
            int failF_OF_A68 = 299 ;
            int required_OF_A69 = 300 ;
            int already_S_OF_A69 = 301 ;
            int S_OF_A69 = 302 ;
            int relevant_evt_OF_A69 = 303 ;
            int required_OF_A7 = 304 ;
            int already_S_OF_A7 = 305 ;
            int S_OF_A7 = 306 ;
            int relevant_evt_OF_A7 = 307 ;
            int failF_OF_A7 = 308 ;
            int required_OF_A70 = 309 ;
            int already_S_OF_A70 = 310 ;
            int S_OF_A70 = 311 ;
            int relevant_evt_OF_A70 = 312 ;
            int required_OF_A71 = 313 ;
            int already_S_OF_A71 = 314 ;
            int S_OF_A71 = 315 ;
            int relevant_evt_OF_A71 = 316 ;
            int required_OF_A72 = 317 ;
            int already_S_OF_A72 = 318 ;
            int S_OF_A72 = 319 ;
            int relevant_evt_OF_A72 = 320 ;
            int required_OF_A73 = 321 ;
            int already_S_OF_A73 = 322 ;
            int S_OF_A73 = 323 ;
            int relevant_evt_OF_A73 = 324 ;
            int required_OF_A74 = 325 ;
            int already_S_OF_A74 = 326 ;
            int S_OF_A74 = 327 ;
            int relevant_evt_OF_A74 = 328 ;
            int required_OF_A75 = 329 ;
            int already_S_OF_A75 = 330 ;
            int S_OF_A75 = 331 ;
            int relevant_evt_OF_A75 = 332 ;
            int failF_OF_A75 = 333 ;
            int required_OF_A76 = 334 ;
            int already_S_OF_A76 = 335 ;
            int S_OF_A76 = 336 ;
            int relevant_evt_OF_A76 = 337 ;
            int failF_OF_A76 = 338 ;
            int required_OF_A77 = 339 ;
            int already_S_OF_A77 = 340 ;
            int S_OF_A77 = 341 ;
            int relevant_evt_OF_A77 = 342 ;
            int failF_OF_A77 = 343 ;
            int required_OF_A78 = 344 ;
            int already_S_OF_A78 = 345 ;
            int S_OF_A78 = 346 ;
            int relevant_evt_OF_A78 = 347 ;
            int required_OF_A8 = 348 ;
            int already_S_OF_A8 = 349 ;
            int S_OF_A8 = 350 ;
            int relevant_evt_OF_A8 = 351 ;
            int required_OF_A80 = 352 ;
            int already_S_OF_A80 = 353 ;
            int S_OF_A80 = 354 ;
            int relevant_evt_OF_A80 = 355 ;
            int failF_OF_A80 = 356 ;
            int required_OF_A81 = 357 ;
            int already_S_OF_A81 = 358 ;
            int S_OF_A81 = 359 ;
            int relevant_evt_OF_A81 = 360 ;
            int failF_OF_A81 = 361 ;
            int required_OF_A82 = 362 ;
            int already_S_OF_A82 = 363 ;
            int S_OF_A82 = 364 ;
            int relevant_evt_OF_A82 = 365 ;
            int failF_OF_A82 = 366 ;
            int required_OF_A83 = 367 ;
            int already_S_OF_A83 = 368 ;
            int S_OF_A83 = 369 ;
            int relevant_evt_OF_A83 = 370 ;
            int required_OF_A85 = 371 ;
            int already_S_OF_A85 = 372 ;
            int S_OF_A85 = 373 ;
            int relevant_evt_OF_A85 = 374 ;
            int required_OF_A86 = 375 ;
            int already_S_OF_A86 = 376 ;
            int S_OF_A86 = 377 ;
            int relevant_evt_OF_A86 = 378 ;
            int failF_OF_A86 = 379 ;
            int required_OF_A87 = 380 ;
            int already_S_OF_A87 = 381 ;
            int S_OF_A87 = 382 ;
            int relevant_evt_OF_A87 = 383 ;
            int failF_OF_A87 = 384 ;
            int required_OF_A88 = 385 ;
            int already_S_OF_A88 = 386 ;
            int S_OF_A88 = 387 ;
            int relevant_evt_OF_A88 = 388 ;
            int failF_OF_A88 = 389 ;
            int required_OF_A89 = 390 ;
            int already_S_OF_A89 = 391 ;
            int S_OF_A89 = 392 ;
            int relevant_evt_OF_A89 = 393 ;
            int required_OF_A91 = 394 ;
            int already_S_OF_A91 = 395 ;
            int S_OF_A91 = 396 ;
            int relevant_evt_OF_A91 = 397 ;
            int failF_OF_A91 = 398 ;
            int required_OF_A92 = 399 ;
            int already_S_OF_A92 = 400 ;
            int S_OF_A92 = 401 ;
            int relevant_evt_OF_A92 = 402 ;
            int failF_OF_A92 = 403 ;
            int required_OF_A93 = 404 ;
            int already_S_OF_A93 = 405 ;
            int S_OF_A93 = 406 ;
            int relevant_evt_OF_A93 = 407 ;
            int failF_OF_A93 = 408 ;
            int required_OF_A94 = 409 ;
            int already_S_OF_A94 = 410 ;
            int S_OF_A94 = 411 ;
            int relevant_evt_OF_A94 = 412 ;
            int required_OF_A96 = 413 ;
            int already_S_OF_A96 = 414 ;
            int S_OF_A96 = 415 ;
            int relevant_evt_OF_A96 = 416 ;
            int required_OF_A97 = 417 ;
            int already_S_OF_A97 = 418 ;
            int S_OF_A97 = 419 ;
            int relevant_evt_OF_A97 = 420 ;
            int failF_OF_A97 = 421 ;
            int required_OF_A98 = 422 ;
            int already_S_OF_A98 = 423 ;
            int S_OF_A98 = 424 ;
            int relevant_evt_OF_A98 = 425 ;
            int failF_OF_A98 = 426 ;
            int required_OF_A99 = 427 ;
            int already_S_OF_A99 = 428 ;
            int S_OF_A99 = 429 ;
            int relevant_evt_OF_A99 = 430 ;
            int failF_OF_A99 = 431 ;
            int required_OF_UE_1 = 432 ;
            int already_S_OF_UE_1 = 433 ;
            int S_OF_UE_1 = 434 ;
            int relevant_evt_OF_UE_1 = 435 ;
            int required_OF_f_A43 = 436 ;
            int already_S_OF_f_A43 = 437 ;
            int S_OF_f_A43 = 438 ;
            int relevant_evt_OF_f_A43 = 439 ;
            int failF_OF_f_A43 = 440 ;
            int required_OF_f_A44 = 441 ;
            int already_S_OF_f_A44 = 442 ;
            int S_OF_f_A44 = 443 ;
            int relevant_evt_OF_f_A44 = 444 ;
            int failF_OF_f_A44 = 445 ;
            int required_OF_f_A45 = 446 ;
            int already_S_OF_f_A45 = 447 ;
            int S_OF_f_A45 = 448 ;
            int relevant_evt_OF_f_A45 = 449 ;
            int failF_OF_f_A45 = 450 ;
            int required_OF_f_A46 = 451 ;
            int already_S_OF_f_A46 = 452 ;
            int S_OF_f_A46 = 453 ;
            int relevant_evt_OF_f_A46 = 454 ;
            int failF_OF_f_A46 = 455 ;
            int required_OF_f_A47 = 456 ;
            int already_S_OF_f_A47 = 457 ;
            int S_OF_f_A47 = 458 ;
            int relevant_evt_OF_f_A47 = 459 ;
            int failF_OF_f_A47 = 460 ;
            int required_OF_f_A48 = 461 ;
            int already_S_OF_f_A48 = 462 ;
            int S_OF_f_A48 = 463 ;
            int relevant_evt_OF_f_A48 = 464 ;
            int failF_OF_f_A48 = 465 ;
            int required_OF_f_A49 = 466 ;
            int already_S_OF_f_A49 = 467 ;
            int S_OF_f_A49 = 468 ;
            int relevant_evt_OF_f_A49 = 469 ;
            int failF_OF_f_A49 = 470 ;
            int required_OF_f_A51 = 471 ;
            int already_S_OF_f_A51 = 472 ;
            int S_OF_f_A51 = 473 ;
            int relevant_evt_OF_f_A51 = 474 ;
            int failF_OF_f_A51 = 475 ;
            int required_OF_f_A52 = 476 ;
            int already_S_OF_f_A52 = 477 ;
            int S_OF_f_A52 = 478 ;
            int relevant_evt_OF_f_A52 = 479 ;
            int failF_OF_f_A52 = 480 ;
            int required_OF_f_A54 = 481 ;
            int already_S_OF_f_A54 = 482 ;
            int S_OF_f_A54 = 483 ;
            int relevant_evt_OF_f_A54 = 484 ;
            int failF_OF_f_A54 = 485 ;
            int required_OF_f_A55 = 486 ;
            int already_S_OF_f_A55 = 487 ;
            int S_OF_f_A55 = 488 ;
            int relevant_evt_OF_f_A55 = 489 ;
            int failF_OF_f_A55 = 490 ;
            int required_OF_f_A57 = 491 ;
            int already_S_OF_f_A57 = 492 ;
            int S_OF_f_A57 = 493 ;
            int relevant_evt_OF_f_A57 = 494 ;
            int failF_OF_f_A57 = 495 ;
            int required_OF_f_A58 = 496 ;
            int already_S_OF_f_A58 = 497 ;
            int S_OF_f_A58 = 498 ;
            int relevant_evt_OF_f_A58 = 499 ;
            int failF_OF_f_A58 = 500 ;
            int required_OF_f_A59 = 501 ;
            int already_S_OF_f_A59 = 502 ;
            int S_OF_f_A59 = 503 ;
            int relevant_evt_OF_f_A59 = 504 ;
            int failF_OF_f_A59 = 505 ;
            int required_OF_f_A60 = 506 ;
            int already_S_OF_f_A60 = 507 ;
            int S_OF_f_A60 = 508 ;
            int relevant_evt_OF_f_A60 = 509 ;
            int failF_OF_f_A60 = 510 ;
            int required_OF_f_A61 = 511 ;
            int already_S_OF_f_A61 = 512 ;
            int S_OF_f_A61 = 513 ;
            int relevant_evt_OF_f_A61 = 514 ;
            int failF_OF_f_A61 = 515 ;
            int required_OF_f_A62 = 516 ;
            int already_S_OF_f_A62 = 517 ;
            int S_OF_f_A62 = 518 ;
            int relevant_evt_OF_f_A62 = 519 ;
            int failF_OF_f_A62 = 520 ;
            int required_OF_f_A63 = 521 ;
            int already_S_OF_f_A63 = 522 ;
            int S_OF_f_A63 = 523 ;
            int relevant_evt_OF_f_A63 = 524 ;
            int failF_OF_f_A63 = 525 ;
            int required_OF_f_A64 = 526 ;
            int already_S_OF_f_A64 = 527 ;
            int S_OF_f_A64 = 528 ;
            int relevant_evt_OF_f_A64 = 529 ;
            int failF_OF_f_A64 = 530 ;
            int required_OF_f_A65 = 531 ;
            int already_S_OF_f_A65 = 532 ;
            int S_OF_f_A65 = 533 ;
            int relevant_evt_OF_f_A65 = 534 ;
            int failF_OF_f_A65 = 535 ;
            int required_OF_f_A66 = 536 ;
            int already_S_OF_f_A66 = 537 ;
            int S_OF_f_A66 = 538 ;
            int relevant_evt_OF_f_A66 = 539 ;
            int failF_OF_f_A66 = 540 ;
            int required_OF_i_A43 = 541 ;
            int already_S_OF_i_A43 = 542 ;
            int S_OF_i_A43 = 543 ;
            int relevant_evt_OF_i_A43 = 544 ;
            int failI_OF_i_A43 = 545 ;
            int to_be_fired_OF_i_A43 = 546 ;
            int already_standby_OF_i_A43 = 547 ;
            int already_required_OF_i_A43 = 548 ;
            int required_OF_i_A44 = 549 ;
            int already_S_OF_i_A44 = 550 ;
            int S_OF_i_A44 = 551 ;
            int relevant_evt_OF_i_A44 = 552 ;
            int failI_OF_i_A44 = 553 ;
            int to_be_fired_OF_i_A44 = 554 ;
            int already_standby_OF_i_A44 = 555 ;
            int already_required_OF_i_A44 = 556 ;
            int required_OF_i_A45 = 557 ;
            int already_S_OF_i_A45 = 558 ;
            int S_OF_i_A45 = 559 ;
            int relevant_evt_OF_i_A45 = 560 ;
            int failI_OF_i_A45 = 561 ;
            int to_be_fired_OF_i_A45 = 562 ;
            int already_standby_OF_i_A45 = 563 ;
            int already_required_OF_i_A45 = 564 ;
            int required_OF_i_A46 = 565 ;
            int already_S_OF_i_A46 = 566 ;
            int S_OF_i_A46 = 567 ;
            int relevant_evt_OF_i_A46 = 568 ;
            int failI_OF_i_A46 = 569 ;
            int to_be_fired_OF_i_A46 = 570 ;
            int already_standby_OF_i_A46 = 571 ;
            int already_required_OF_i_A46 = 572 ;
            int required_OF_i_A47 = 573 ;
            int already_S_OF_i_A47 = 574 ;
            int S_OF_i_A47 = 575 ;
            int relevant_evt_OF_i_A47 = 576 ;
            int failI_OF_i_A47 = 577 ;
            int to_be_fired_OF_i_A47 = 578 ;
            int already_standby_OF_i_A47 = 579 ;
            int already_required_OF_i_A47 = 580 ;
            int required_OF_i_A48 = 581 ;
            int already_S_OF_i_A48 = 582 ;
            int S_OF_i_A48 = 583 ;
            int relevant_evt_OF_i_A48 = 584 ;
            int failI_OF_i_A48 = 585 ;
            int to_be_fired_OF_i_A48 = 586 ;
            int already_standby_OF_i_A48 = 587 ;
            int already_required_OF_i_A48 = 588 ;
            int required_OF_i_A49 = 589 ;
            int already_S_OF_i_A49 = 590 ;
            int S_OF_i_A49 = 591 ;
            int relevant_evt_OF_i_A49 = 592 ;
            int failI_OF_i_A49 = 593 ;
            int to_be_fired_OF_i_A49 = 594 ;
            int already_standby_OF_i_A49 = 595 ;
            int already_required_OF_i_A49 = 596 ;
            int required_OF_i_A51 = 597 ;
            int already_S_OF_i_A51 = 598 ;
            int S_OF_i_A51 = 599 ;
            int relevant_evt_OF_i_A51 = 600 ;
            int failI_OF_i_A51 = 601 ;
            int to_be_fired_OF_i_A51 = 602 ;
            int already_standby_OF_i_A51 = 603 ;
            int already_required_OF_i_A51 = 604 ;
            int required_OF_i_A52 = 605 ;
            int already_S_OF_i_A52 = 606 ;
            int S_OF_i_A52 = 607 ;
            int relevant_evt_OF_i_A52 = 608 ;
            int failI_OF_i_A52 = 609 ;
            int to_be_fired_OF_i_A52 = 610 ;
            int already_standby_OF_i_A52 = 611 ;
            int already_required_OF_i_A52 = 612 ;
            int required_OF_i_A54 = 613 ;
            int already_S_OF_i_A54 = 614 ;
            int S_OF_i_A54 = 615 ;
            int relevant_evt_OF_i_A54 = 616 ;
            int failI_OF_i_A54 = 617 ;
            int to_be_fired_OF_i_A54 = 618 ;
            int already_standby_OF_i_A54 = 619 ;
            int already_required_OF_i_A54 = 620 ;
            int required_OF_i_A55 = 621 ;
            int already_S_OF_i_A55 = 622 ;
            int S_OF_i_A55 = 623 ;
            int relevant_evt_OF_i_A55 = 624 ;
            int failI_OF_i_A55 = 625 ;
            int to_be_fired_OF_i_A55 = 626 ;
            int already_standby_OF_i_A55 = 627 ;
            int already_required_OF_i_A55 = 628 ;
            int required_OF_i_A57 = 629 ;
            int already_S_OF_i_A57 = 630 ;
            int S_OF_i_A57 = 631 ;
            int relevant_evt_OF_i_A57 = 632 ;
            int failI_OF_i_A57 = 633 ;
            int to_be_fired_OF_i_A57 = 634 ;
            int already_standby_OF_i_A57 = 635 ;
            int already_required_OF_i_A57 = 636 ;
            int required_OF_i_A58 = 637 ;
            int already_S_OF_i_A58 = 638 ;
            int S_OF_i_A58 = 639 ;
            int relevant_evt_OF_i_A58 = 640 ;
            int failI_OF_i_A58 = 641 ;
            int to_be_fired_OF_i_A58 = 642 ;
            int already_standby_OF_i_A58 = 643 ;
            int already_required_OF_i_A58 = 644 ;
            int required_OF_i_A59 = 645 ;
            int already_S_OF_i_A59 = 646 ;
            int S_OF_i_A59 = 647 ;
            int relevant_evt_OF_i_A59 = 648 ;
            int failI_OF_i_A59 = 649 ;
            int to_be_fired_OF_i_A59 = 650 ;
            int already_standby_OF_i_A59 = 651 ;
            int already_required_OF_i_A59 = 652 ;
            int required_OF_i_A60 = 653 ;
            int already_S_OF_i_A60 = 654 ;
            int S_OF_i_A60 = 655 ;
            int relevant_evt_OF_i_A60 = 656 ;
            int failI_OF_i_A60 = 657 ;
            int to_be_fired_OF_i_A60 = 658 ;
            int already_standby_OF_i_A60 = 659 ;
            int already_required_OF_i_A60 = 660 ;
            int required_OF_i_A61 = 661 ;
            int already_S_OF_i_A61 = 662 ;
            int S_OF_i_A61 = 663 ;
            int relevant_evt_OF_i_A61 = 664 ;
            int failI_OF_i_A61 = 665 ;
            int to_be_fired_OF_i_A61 = 666 ;
            int already_standby_OF_i_A61 = 667 ;
            int already_required_OF_i_A61 = 668 ;
            int required_OF_i_A62 = 669 ;
            int already_S_OF_i_A62 = 670 ;
            int S_OF_i_A62 = 671 ;
            int relevant_evt_OF_i_A62 = 672 ;
            int failI_OF_i_A62 = 673 ;
            int to_be_fired_OF_i_A62 = 674 ;
            int already_standby_OF_i_A62 = 675 ;
            int already_required_OF_i_A62 = 676 ;
            int required_OF_i_A63 = 677 ;
            int already_S_OF_i_A63 = 678 ;
            int S_OF_i_A63 = 679 ;
            int relevant_evt_OF_i_A63 = 680 ;
            int failI_OF_i_A63 = 681 ;
            int to_be_fired_OF_i_A63 = 682 ;
            int already_standby_OF_i_A63 = 683 ;
            int already_required_OF_i_A63 = 684 ;
            int required_OF_i_A64 = 685 ;
            int already_S_OF_i_A64 = 686 ;
            int S_OF_i_A64 = 687 ;
            int relevant_evt_OF_i_A64 = 688 ;
            int failI_OF_i_A64 = 689 ;
            int to_be_fired_OF_i_A64 = 690 ;
            int already_standby_OF_i_A64 = 691 ;
            int already_required_OF_i_A64 = 692 ;
            int required_OF_i_A65 = 693 ;
            int already_S_OF_i_A65 = 694 ;
            int S_OF_i_A65 = 695 ;
            int relevant_evt_OF_i_A65 = 696 ;
            int failI_OF_i_A65 = 697 ;
            int to_be_fired_OF_i_A65 = 698 ;
            int already_standby_OF_i_A65 = 699 ;
            int already_required_OF_i_A65 = 700 ;
            int required_OF_i_A66 = 701 ;
            int already_S_OF_i_A66 = 702 ;
            int S_OF_i_A66 = 703 ;
            int relevant_evt_OF_i_A66 = 704 ;
            int failI_OF_i_A66 = 705 ;
            int to_be_fired_OF_i_A66 = 706 ;
            int already_standby_OF_i_A66 = 707 ;
            int already_required_OF_i_A66 = 708 ;




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