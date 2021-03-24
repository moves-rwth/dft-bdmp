
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
        class FigaroProgram_vgs_5_Trim_Article_repair: public storm::figaro::FigaroProgram{
        public:
        FigaroProgram_vgs_5_Trim_Article_repair(): FigaroProgram(//            std::map<std::string, size_t> mFigaroboolelementindex =
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
            	{"required_OF_A11" , 41},
            	{"already_S_OF_A11" , 42},
            	{"S_OF_A11" , 43},
            	{"relevant_evt_OF_A11" , 44},
            	{"required_OF_A13" , 45},
            	{"already_S_OF_A13" , 46},
            	{"S_OF_A13" , 47},
            	{"relevant_evt_OF_A13" , 48},
            	{"failF_OF_A13" , 49},
            	{"required_OF_A14" , 50},
            	{"already_S_OF_A14" , 51},
            	{"S_OF_A14" , 52},
            	{"relevant_evt_OF_A14" , 53},
            	{"required_OF_A16" , 54},
            	{"already_S_OF_A16" , 55},
            	{"S_OF_A16" , 56},
            	{"relevant_evt_OF_A16" , 57},
            	{"failF_OF_A16" , 58},
            	{"required_OF_A17" , 59},
            	{"already_S_OF_A17" , 60},
            	{"S_OF_A17" , 61},
            	{"relevant_evt_OF_A17" , 62},
            	{"required_OF_A19" , 63},
            	{"already_S_OF_A19" , 64},
            	{"S_OF_A19" , 65},
            	{"relevant_evt_OF_A19" , 66},
            	{"failF_OF_A19" , 67},
            	{"required_OF_A2" , 68},
            	{"already_S_OF_A2" , 69},
            	{"S_OF_A2" , 70},
            	{"relevant_evt_OF_A2" , 71},
            	{"required_OF_A20" , 72},
            	{"already_S_OF_A20" , 73},
            	{"S_OF_A20" , 74},
            	{"relevant_evt_OF_A20" , 75},
            	{"required_OF_A22" , 76},
            	{"already_S_OF_A22" , 77},
            	{"S_OF_A22" , 78},
            	{"relevant_evt_OF_A22" , 79},
            	{"failF_OF_A22" , 80},
            	{"required_OF_A23" , 81},
            	{"already_S_OF_A23" , 82},
            	{"S_OF_A23" , 83},
            	{"relevant_evt_OF_A23" , 84},
            	{"required_OF_A25" , 85},
            	{"already_S_OF_A25" , 86},
            	{"S_OF_A25" , 87},
            	{"relevant_evt_OF_A25" , 88},
            	{"failF_OF_A25" , 89},
            	{"required_OF_A26" , 90},
            	{"already_S_OF_A26" , 91},
            	{"S_OF_A26" , 92},
            	{"relevant_evt_OF_A26" , 93},
            	{"required_OF_A28" , 94},
            	{"already_S_OF_A28" , 95},
            	{"S_OF_A28" , 96},
            	{"relevant_evt_OF_A28" , 97},
            	{"failF_OF_A28" , 98},
            	{"required_OF_A29" , 99},
            	{"already_S_OF_A29" , 100},
            	{"S_OF_A29" , 101},
            	{"relevant_evt_OF_A29" , 102},
            	{"failF_OF_A29" , 103},
            	{"required_OF_A30" , 104},
            	{"already_S_OF_A30" , 105},
            	{"S_OF_A30" , 106},
            	{"relevant_evt_OF_A30" , 107},
            	{"required_OF_A31" , 108},
            	{"already_S_OF_A31" , 109},
            	{"S_OF_A31" , 110},
            	{"relevant_evt_OF_A31" , 111},
            	{"required_OF_A33" , 112},
            	{"already_S_OF_A33" , 113},
            	{"S_OF_A33" , 114},
            	{"relevant_evt_OF_A33" , 115},
            	{"failF_OF_A33" , 116},
            	{"required_OF_A34" , 117},
            	{"already_S_OF_A34" , 118},
            	{"S_OF_A34" , 119},
            	{"relevant_evt_OF_A34" , 120},
            	{"required_OF_A36" , 121},
            	{"already_S_OF_A36" , 122},
            	{"S_OF_A36" , 123},
            	{"relevant_evt_OF_A36" , 124},
            	{"failF_OF_A36" , 125},
            	{"required_OF_A37" , 126},
            	{"already_S_OF_A37" , 127},
            	{"S_OF_A37" , 128},
            	{"relevant_evt_OF_A37" , 129},
            	{"required_OF_A39" , 130},
            	{"already_S_OF_A39" , 131},
            	{"S_OF_A39" , 132},
            	{"relevant_evt_OF_A39" , 133},
            	{"failF_OF_A39" , 134},
            	{"required_OF_A4" , 135},
            	{"already_S_OF_A4" , 136},
            	{"S_OF_A4" , 137},
            	{"relevant_evt_OF_A4" , 138},
            	{"failF_OF_A4" , 139},
            	{"required_OF_A40" , 140},
            	{"already_S_OF_A40" , 141},
            	{"S_OF_A40" , 142},
            	{"relevant_evt_OF_A40" , 143},
            	{"required_OF_A41" , 144},
            	{"already_S_OF_A41" , 145},
            	{"S_OF_A41" , 146},
            	{"relevant_evt_OF_A41" , 147},
            	{"required_OF_A43" , 148},
            	{"already_S_OF_A43" , 149},
            	{"S_OF_A43" , 150},
            	{"relevant_evt_OF_A43" , 151},
            	{"required_OF_A44" , 152},
            	{"already_S_OF_A44" , 153},
            	{"S_OF_A44" , 154},
            	{"relevant_evt_OF_A44" , 155},
            	{"required_OF_A45" , 156},
            	{"already_S_OF_A45" , 157},
            	{"S_OF_A45" , 158},
            	{"relevant_evt_OF_A45" , 159},
            	{"required_OF_A46" , 160},
            	{"already_S_OF_A46" , 161},
            	{"S_OF_A46" , 162},
            	{"relevant_evt_OF_A46" , 163},
            	{"required_OF_A47" , 164},
            	{"already_S_OF_A47" , 165},
            	{"S_OF_A47" , 166},
            	{"relevant_evt_OF_A47" , 167},
            	{"required_OF_A48" , 168},
            	{"already_S_OF_A48" , 169},
            	{"S_OF_A48" , 170},
            	{"relevant_evt_OF_A48" , 171},
            	{"required_OF_A49" , 172},
            	{"already_S_OF_A49" , 173},
            	{"S_OF_A49" , 174},
            	{"relevant_evt_OF_A49" , 175},
            	{"required_OF_A5" , 176},
            	{"already_S_OF_A5" , 177},
            	{"S_OF_A5" , 178},
            	{"relevant_evt_OF_A5" , 179},
            	{"required_OF_A50" , 180},
            	{"already_S_OF_A50" , 181},
            	{"S_OF_A50" , 182},
            	{"relevant_evt_OF_A50" , 183},
            	{"required_OF_A51" , 184},
            	{"already_S_OF_A51" , 185},
            	{"S_OF_A51" , 186},
            	{"relevant_evt_OF_A51" , 187},
            	{"required_OF_A52" , 188},
            	{"already_S_OF_A52" , 189},
            	{"S_OF_A52" , 190},
            	{"relevant_evt_OF_A52" , 191},
            	{"required_OF_A53" , 192},
            	{"already_S_OF_A53" , 193},
            	{"S_OF_A53" , 194},
            	{"relevant_evt_OF_A53" , 195},
            	{"required_OF_A54" , 196},
            	{"already_S_OF_A54" , 197},
            	{"S_OF_A54" , 198},
            	{"relevant_evt_OF_A54" , 199},
            	{"required_OF_A55" , 200},
            	{"already_S_OF_A55" , 201},
            	{"S_OF_A55" , 202},
            	{"relevant_evt_OF_A55" , 203},
            	{"required_OF_A56" , 204},
            	{"already_S_OF_A56" , 205},
            	{"S_OF_A56" , 206},
            	{"relevant_evt_OF_A56" , 207},
            	{"required_OF_A57" , 208},
            	{"already_S_OF_A57" , 209},
            	{"S_OF_A57" , 210},
            	{"relevant_evt_OF_A57" , 211},
            	{"required_OF_A58" , 212},
            	{"already_S_OF_A58" , 213},
            	{"S_OF_A58" , 214},
            	{"relevant_evt_OF_A58" , 215},
            	{"required_OF_A59" , 216},
            	{"already_S_OF_A59" , 217},
            	{"S_OF_A59" , 218},
            	{"relevant_evt_OF_A59" , 219},
            	{"required_OF_A60" , 220},
            	{"already_S_OF_A60" , 221},
            	{"S_OF_A60" , 222},
            	{"relevant_evt_OF_A60" , 223},
            	{"required_OF_A61" , 224},
            	{"already_S_OF_A61" , 225},
            	{"S_OF_A61" , 226},
            	{"relevant_evt_OF_A61" , 227},
            	{"required_OF_A62" , 228},
            	{"already_S_OF_A62" , 229},
            	{"S_OF_A62" , 230},
            	{"relevant_evt_OF_A62" , 231},
            	{"required_OF_A63" , 232},
            	{"already_S_OF_A63" , 233},
            	{"S_OF_A63" , 234},
            	{"relevant_evt_OF_A63" , 235},
            	{"required_OF_A64" , 236},
            	{"already_S_OF_A64" , 237},
            	{"S_OF_A64" , 238},
            	{"relevant_evt_OF_A64" , 239},
            	{"required_OF_A65" , 240},
            	{"already_S_OF_A65" , 241},
            	{"S_OF_A65" , 242},
            	{"relevant_evt_OF_A65" , 243},
            	{"required_OF_A66" , 244},
            	{"already_S_OF_A66" , 245},
            	{"S_OF_A66" , 246},
            	{"relevant_evt_OF_A66" , 247},
            	{"required_OF_A67" , 248},
            	{"already_S_OF_A67" , 249},
            	{"S_OF_A67" , 250},
            	{"relevant_evt_OF_A67" , 251},
            	{"failF_OF_A67" , 252},
            	{"required_OF_A68" , 253},
            	{"already_S_OF_A68" , 254},
            	{"S_OF_A68" , 255},
            	{"relevant_evt_OF_A68" , 256},
            	{"failF_OF_A68" , 257},
            	{"required_OF_A69" , 258},
            	{"already_S_OF_A69" , 259},
            	{"S_OF_A69" , 260},
            	{"relevant_evt_OF_A69" , 261},
            	{"required_OF_A7" , 262},
            	{"already_S_OF_A7" , 263},
            	{"S_OF_A7" , 264},
            	{"relevant_evt_OF_A7" , 265},
            	{"failF_OF_A7" , 266},
            	{"required_OF_A70" , 267},
            	{"already_S_OF_A70" , 268},
            	{"S_OF_A70" , 269},
            	{"relevant_evt_OF_A70" , 270},
            	{"required_OF_A71" , 271},
            	{"already_S_OF_A71" , 272},
            	{"S_OF_A71" , 273},
            	{"relevant_evt_OF_A71" , 274},
            	{"required_OF_A72" , 275},
            	{"already_S_OF_A72" , 276},
            	{"S_OF_A72" , 277},
            	{"relevant_evt_OF_A72" , 278},
            	{"required_OF_A73" , 279},
            	{"already_S_OF_A73" , 280},
            	{"S_OF_A73" , 281},
            	{"relevant_evt_OF_A73" , 282},
            	{"required_OF_A74" , 283},
            	{"already_S_OF_A74" , 284},
            	{"S_OF_A74" , 285},
            	{"relevant_evt_OF_A74" , 286},
            	{"required_OF_A75" , 287},
            	{"already_S_OF_A75" , 288},
            	{"S_OF_A75" , 289},
            	{"relevant_evt_OF_A75" , 290},
            	{"failF_OF_A75" , 291},
            	{"required_OF_A76" , 292},
            	{"already_S_OF_A76" , 293},
            	{"S_OF_A76" , 294},
            	{"relevant_evt_OF_A76" , 295},
            	{"failF_OF_A76" , 296},
            	{"required_OF_A77" , 297},
            	{"already_S_OF_A77" , 298},
            	{"S_OF_A77" , 299},
            	{"relevant_evt_OF_A77" , 300},
            	{"failF_OF_A77" , 301},
            	{"required_OF_A78" , 302},
            	{"already_S_OF_A78" , 303},
            	{"S_OF_A78" , 304},
            	{"relevant_evt_OF_A78" , 305},
            	{"required_OF_A8" , 306},
            	{"already_S_OF_A8" , 307},
            	{"S_OF_A8" , 308},
            	{"relevant_evt_OF_A8" , 309},
            	{"required_OF_A80" , 310},
            	{"already_S_OF_A80" , 311},
            	{"S_OF_A80" , 312},
            	{"relevant_evt_OF_A80" , 313},
            	{"failF_OF_A80" , 314},
            	{"required_OF_A81" , 315},
            	{"already_S_OF_A81" , 316},
            	{"S_OF_A81" , 317},
            	{"relevant_evt_OF_A81" , 318},
            	{"failF_OF_A81" , 319},
            	{"required_OF_A82" , 320},
            	{"already_S_OF_A82" , 321},
            	{"S_OF_A82" , 322},
            	{"relevant_evt_OF_A82" , 323},
            	{"failF_OF_A82" , 324},
            	{"required_OF_A83" , 325},
            	{"already_S_OF_A83" , 326},
            	{"S_OF_A83" , 327},
            	{"relevant_evt_OF_A83" , 328},
            	{"required_OF_A85" , 329},
            	{"already_S_OF_A85" , 330},
            	{"S_OF_A85" , 331},
            	{"relevant_evt_OF_A85" , 332},
            	{"required_OF_A86" , 333},
            	{"already_S_OF_A86" , 334},
            	{"S_OF_A86" , 335},
            	{"relevant_evt_OF_A86" , 336},
            	{"failF_OF_A86" , 337},
            	{"required_OF_A87" , 338},
            	{"already_S_OF_A87" , 339},
            	{"S_OF_A87" , 340},
            	{"relevant_evt_OF_A87" , 341},
            	{"failF_OF_A87" , 342},
            	{"required_OF_A88" , 343},
            	{"already_S_OF_A88" , 344},
            	{"S_OF_A88" , 345},
            	{"relevant_evt_OF_A88" , 346},
            	{"failF_OF_A88" , 347},
            	{"required_OF_A89" , 348},
            	{"already_S_OF_A89" , 349},
            	{"S_OF_A89" , 350},
            	{"relevant_evt_OF_A89" , 351},
            	{"required_OF_A91" , 352},
            	{"already_S_OF_A91" , 353},
            	{"S_OF_A91" , 354},
            	{"relevant_evt_OF_A91" , 355},
            	{"failF_OF_A91" , 356},
            	{"required_OF_A92" , 357},
            	{"already_S_OF_A92" , 358},
            	{"S_OF_A92" , 359},
            	{"relevant_evt_OF_A92" , 360},
            	{"failF_OF_A92" , 361},
            	{"required_OF_A93" , 362},
            	{"already_S_OF_A93" , 363},
            	{"S_OF_A93" , 364},
            	{"relevant_evt_OF_A93" , 365},
            	{"failF_OF_A93" , 366},
            	{"required_OF_A94" , 367},
            	{"already_S_OF_A94" , 368},
            	{"S_OF_A94" , 369},
            	{"relevant_evt_OF_A94" , 370},
            	{"required_OF_A96" , 371},
            	{"already_S_OF_A96" , 372},
            	{"S_OF_A96" , 373},
            	{"relevant_evt_OF_A96" , 374},
            	{"required_OF_A97" , 375},
            	{"already_S_OF_A97" , 376},
            	{"S_OF_A97" , 377},
            	{"relevant_evt_OF_A97" , 378},
            	{"failF_OF_A97" , 379},
            	{"required_OF_A98" , 380},
            	{"already_S_OF_A98" , 381},
            	{"S_OF_A98" , 382},
            	{"relevant_evt_OF_A98" , 383},
            	{"failF_OF_A98" , 384},
            	{"required_OF_A99" , 385},
            	{"already_S_OF_A99" , 386},
            	{"S_OF_A99" , 387},
            	{"relevant_evt_OF_A99" , 388},
            	{"failF_OF_A99" , 389},
            	{"required_OF_UE_1" , 390},
            	{"already_S_OF_UE_1" , 391},
            	{"S_OF_UE_1" , 392},
            	{"relevant_evt_OF_UE_1" , 393},
            	{"required_OF_f_A43" , 394},
            	{"already_S_OF_f_A43" , 395},
            	{"S_OF_f_A43" , 396},
            	{"relevant_evt_OF_f_A43" , 397},
            	{"failF_OF_f_A43" , 398},
            	{"required_OF_f_A44" , 399},
            	{"already_S_OF_f_A44" , 400},
            	{"S_OF_f_A44" , 401},
            	{"relevant_evt_OF_f_A44" , 402},
            	{"failF_OF_f_A44" , 403},
            	{"required_OF_f_A45" , 404},
            	{"already_S_OF_f_A45" , 405},
            	{"S_OF_f_A45" , 406},
            	{"relevant_evt_OF_f_A45" , 407},
            	{"failF_OF_f_A45" , 408},
            	{"required_OF_f_A46" , 409},
            	{"already_S_OF_f_A46" , 410},
            	{"S_OF_f_A46" , 411},
            	{"relevant_evt_OF_f_A46" , 412},
            	{"failF_OF_f_A46" , 413},
            	{"required_OF_f_A47" , 414},
            	{"already_S_OF_f_A47" , 415},
            	{"S_OF_f_A47" , 416},
            	{"relevant_evt_OF_f_A47" , 417},
            	{"failF_OF_f_A47" , 418},
            	{"required_OF_f_A48" , 419},
            	{"already_S_OF_f_A48" , 420},
            	{"S_OF_f_A48" , 421},
            	{"relevant_evt_OF_f_A48" , 422},
            	{"failF_OF_f_A48" , 423},
            	{"required_OF_f_A49" , 424},
            	{"already_S_OF_f_A49" , 425},
            	{"S_OF_f_A49" , 426},
            	{"relevant_evt_OF_f_A49" , 427},
            	{"failF_OF_f_A49" , 428},
            	{"required_OF_f_A51" , 429},
            	{"already_S_OF_f_A51" , 430},
            	{"S_OF_f_A51" , 431},
            	{"relevant_evt_OF_f_A51" , 432},
            	{"failF_OF_f_A51" , 433},
            	{"required_OF_f_A52" , 434},
            	{"already_S_OF_f_A52" , 435},
            	{"S_OF_f_A52" , 436},
            	{"relevant_evt_OF_f_A52" , 437},
            	{"failF_OF_f_A52" , 438},
            	{"required_OF_f_A54" , 439},
            	{"already_S_OF_f_A54" , 440},
            	{"S_OF_f_A54" , 441},
            	{"relevant_evt_OF_f_A54" , 442},
            	{"failF_OF_f_A54" , 443},
            	{"required_OF_f_A55" , 444},
            	{"already_S_OF_f_A55" , 445},
            	{"S_OF_f_A55" , 446},
            	{"relevant_evt_OF_f_A55" , 447},
            	{"failF_OF_f_A55" , 448},
            	{"required_OF_f_A57" , 449},
            	{"already_S_OF_f_A57" , 450},
            	{"S_OF_f_A57" , 451},
            	{"relevant_evt_OF_f_A57" , 452},
            	{"failF_OF_f_A57" , 453},
            	{"required_OF_f_A58" , 454},
            	{"already_S_OF_f_A58" , 455},
            	{"S_OF_f_A58" , 456},
            	{"relevant_evt_OF_f_A58" , 457},
            	{"failF_OF_f_A58" , 458},
            	{"required_OF_f_A59" , 459},
            	{"already_S_OF_f_A59" , 460},
            	{"S_OF_f_A59" , 461},
            	{"relevant_evt_OF_f_A59" , 462},
            	{"failF_OF_f_A59" , 463},
            	{"required_OF_f_A60" , 464},
            	{"already_S_OF_f_A60" , 465},
            	{"S_OF_f_A60" , 466},
            	{"relevant_evt_OF_f_A60" , 467},
            	{"failF_OF_f_A60" , 468},
            	{"required_OF_f_A61" , 469},
            	{"already_S_OF_f_A61" , 470},
            	{"S_OF_f_A61" , 471},
            	{"relevant_evt_OF_f_A61" , 472},
            	{"failF_OF_f_A61" , 473},
            	{"required_OF_f_A62" , 474},
            	{"already_S_OF_f_A62" , 475},
            	{"S_OF_f_A62" , 476},
            	{"relevant_evt_OF_f_A62" , 477},
            	{"failF_OF_f_A62" , 478},
            	{"required_OF_f_A63" , 479},
            	{"already_S_OF_f_A63" , 480},
            	{"S_OF_f_A63" , 481},
            	{"relevant_evt_OF_f_A63" , 482},
            	{"failF_OF_f_A63" , 483},
            	{"required_OF_f_A64" , 484},
            	{"already_S_OF_f_A64" , 485},
            	{"S_OF_f_A64" , 486},
            	{"relevant_evt_OF_f_A64" , 487},
            	{"failF_OF_f_A64" , 488},
            	{"required_OF_f_A65" , 489},
            	{"already_S_OF_f_A65" , 490},
            	{"S_OF_f_A65" , 491},
            	{"relevant_evt_OF_f_A65" , 492},
            	{"failF_OF_f_A65" , 493},
            	{"required_OF_f_A66" , 494},
            	{"already_S_OF_f_A66" , 495},
            	{"S_OF_f_A66" , 496},
            	{"relevant_evt_OF_f_A66" , 497},
            	{"failF_OF_f_A66" , 498},
            	{"required_OF_i_A43" , 499},
            	{"already_S_OF_i_A43" , 500},
            	{"S_OF_i_A43" , 501},
            	{"relevant_evt_OF_i_A43" , 502},
            	{"failI_OF_i_A43" , 503},
            	{"to_be_fired_OF_i_A43" , 504},
            	{"already_standby_OF_i_A43" , 505},
            	{"already_required_OF_i_A43" , 506},
            	{"required_OF_i_A44" , 507},
            	{"already_S_OF_i_A44" , 508},
            	{"S_OF_i_A44" , 509},
            	{"relevant_evt_OF_i_A44" , 510},
            	{"failI_OF_i_A44" , 511},
            	{"to_be_fired_OF_i_A44" , 512},
            	{"already_standby_OF_i_A44" , 513},
            	{"already_required_OF_i_A44" , 514},
            	{"required_OF_i_A45" , 515},
            	{"already_S_OF_i_A45" , 516},
            	{"S_OF_i_A45" , 517},
            	{"relevant_evt_OF_i_A45" , 518},
            	{"failI_OF_i_A45" , 519},
            	{"to_be_fired_OF_i_A45" , 520},
            	{"already_standby_OF_i_A45" , 521},
            	{"already_required_OF_i_A45" , 522},
            	{"required_OF_i_A46" , 523},
            	{"already_S_OF_i_A46" , 524},
            	{"S_OF_i_A46" , 525},
            	{"relevant_evt_OF_i_A46" , 526},
            	{"failI_OF_i_A46" , 527},
            	{"to_be_fired_OF_i_A46" , 528},
            	{"already_standby_OF_i_A46" , 529},
            	{"already_required_OF_i_A46" , 530},
            	{"required_OF_i_A47" , 531},
            	{"already_S_OF_i_A47" , 532},
            	{"S_OF_i_A47" , 533},
            	{"relevant_evt_OF_i_A47" , 534},
            	{"failI_OF_i_A47" , 535},
            	{"to_be_fired_OF_i_A47" , 536},
            	{"already_standby_OF_i_A47" , 537},
            	{"already_required_OF_i_A47" , 538},
            	{"required_OF_i_A48" , 539},
            	{"already_S_OF_i_A48" , 540},
            	{"S_OF_i_A48" , 541},
            	{"relevant_evt_OF_i_A48" , 542},
            	{"failI_OF_i_A48" , 543},
            	{"to_be_fired_OF_i_A48" , 544},
            	{"already_standby_OF_i_A48" , 545},
            	{"already_required_OF_i_A48" , 546},
            	{"required_OF_i_A49" , 547},
            	{"already_S_OF_i_A49" , 548},
            	{"S_OF_i_A49" , 549},
            	{"relevant_evt_OF_i_A49" , 550},
            	{"failI_OF_i_A49" , 551},
            	{"to_be_fired_OF_i_A49" , 552},
            	{"already_standby_OF_i_A49" , 553},
            	{"already_required_OF_i_A49" , 554},
            	{"required_OF_i_A51" , 555},
            	{"already_S_OF_i_A51" , 556},
            	{"S_OF_i_A51" , 557},
            	{"relevant_evt_OF_i_A51" , 558},
            	{"failI_OF_i_A51" , 559},
            	{"to_be_fired_OF_i_A51" , 560},
            	{"already_standby_OF_i_A51" , 561},
            	{"already_required_OF_i_A51" , 562},
            	{"required_OF_i_A52" , 563},
            	{"already_S_OF_i_A52" , 564},
            	{"S_OF_i_A52" , 565},
            	{"relevant_evt_OF_i_A52" , 566},
            	{"failI_OF_i_A52" , 567},
            	{"to_be_fired_OF_i_A52" , 568},
            	{"already_standby_OF_i_A52" , 569},
            	{"already_required_OF_i_A52" , 570},
            	{"required_OF_i_A54" , 571},
            	{"already_S_OF_i_A54" , 572},
            	{"S_OF_i_A54" , 573},
            	{"relevant_evt_OF_i_A54" , 574},
            	{"failI_OF_i_A54" , 575},
            	{"to_be_fired_OF_i_A54" , 576},
            	{"already_standby_OF_i_A54" , 577},
            	{"already_required_OF_i_A54" , 578},
            	{"required_OF_i_A55" , 579},
            	{"already_S_OF_i_A55" , 580},
            	{"S_OF_i_A55" , 581},
            	{"relevant_evt_OF_i_A55" , 582},
            	{"failI_OF_i_A55" , 583},
            	{"to_be_fired_OF_i_A55" , 584},
            	{"already_standby_OF_i_A55" , 585},
            	{"already_required_OF_i_A55" , 586},
            	{"required_OF_i_A57" , 587},
            	{"already_S_OF_i_A57" , 588},
            	{"S_OF_i_A57" , 589},
            	{"relevant_evt_OF_i_A57" , 590},
            	{"failI_OF_i_A57" , 591},
            	{"to_be_fired_OF_i_A57" , 592},
            	{"already_standby_OF_i_A57" , 593},
            	{"already_required_OF_i_A57" , 594},
            	{"required_OF_i_A58" , 595},
            	{"already_S_OF_i_A58" , 596},
            	{"S_OF_i_A58" , 597},
            	{"relevant_evt_OF_i_A58" , 598},
            	{"failI_OF_i_A58" , 599},
            	{"to_be_fired_OF_i_A58" , 600},
            	{"already_standby_OF_i_A58" , 601},
            	{"already_required_OF_i_A58" , 602},
            	{"required_OF_i_A59" , 603},
            	{"already_S_OF_i_A59" , 604},
            	{"S_OF_i_A59" , 605},
            	{"relevant_evt_OF_i_A59" , 606},
            	{"failI_OF_i_A59" , 607},
            	{"to_be_fired_OF_i_A59" , 608},
            	{"already_standby_OF_i_A59" , 609},
            	{"already_required_OF_i_A59" , 610},
            	{"required_OF_i_A60" , 611},
            	{"already_S_OF_i_A60" , 612},
            	{"S_OF_i_A60" , 613},
            	{"relevant_evt_OF_i_A60" , 614},
            	{"failI_OF_i_A60" , 615},
            	{"to_be_fired_OF_i_A60" , 616},
            	{"already_standby_OF_i_A60" , 617},
            	{"already_required_OF_i_A60" , 618},
            	{"required_OF_i_A61" , 619},
            	{"already_S_OF_i_A61" , 620},
            	{"S_OF_i_A61" , 621},
            	{"relevant_evt_OF_i_A61" , 622},
            	{"failI_OF_i_A61" , 623},
            	{"to_be_fired_OF_i_A61" , 624},
            	{"already_standby_OF_i_A61" , 625},
            	{"already_required_OF_i_A61" , 626},
            	{"required_OF_i_A62" , 627},
            	{"already_S_OF_i_A62" , 628},
            	{"S_OF_i_A62" , 629},
            	{"relevant_evt_OF_i_A62" , 630},
            	{"failI_OF_i_A62" , 631},
            	{"to_be_fired_OF_i_A62" , 632},
            	{"already_standby_OF_i_A62" , 633},
            	{"already_required_OF_i_A62" , 634},
            	{"required_OF_i_A63" , 635},
            	{"already_S_OF_i_A63" , 636},
            	{"S_OF_i_A63" , 637},
            	{"relevant_evt_OF_i_A63" , 638},
            	{"failI_OF_i_A63" , 639},
            	{"to_be_fired_OF_i_A63" , 640},
            	{"already_standby_OF_i_A63" , 641},
            	{"already_required_OF_i_A63" , 642},
            	{"required_OF_i_A64" , 643},
            	{"already_S_OF_i_A64" , 644},
            	{"S_OF_i_A64" , 645},
            	{"relevant_evt_OF_i_A64" , 646},
            	{"failI_OF_i_A64" , 647},
            	{"to_be_fired_OF_i_A64" , 648},
            	{"already_standby_OF_i_A64" , 649},
            	{"already_required_OF_i_A64" , 650},
            	{"required_OF_i_A65" , 651},
            	{"already_S_OF_i_A65" , 652},
            	{"S_OF_i_A65" , 653},
            	{"relevant_evt_OF_i_A65" , 654},
            	{"failI_OF_i_A65" , 655},
            	{"to_be_fired_OF_i_A65" , 656},
            	{"already_standby_OF_i_A65" , 657},
            	{"already_required_OF_i_A65" , 658},
            	{"required_OF_i_A66" , 659},
            	{"already_S_OF_i_A66" , 660},
            	{"S_OF_i_A66" , 661},
            	{"relevant_evt_OF_i_A66" , 662},
            	{"failI_OF_i_A66" , 663},
            	{"to_be_fired_OF_i_A66" , 664},
            	{"already_standby_OF_i_A66" , 665},
            	{"already_required_OF_i_A66" , 666}},

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
                    667 ,
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
			double const lambda_OF_A67 = 1e-07;
			bool const force_relevant_events_OF_A4 = false;
			std::string const trigger_kind_OF_t_dep_12 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_f_A55 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A13 = "fn_fathers_and_trig";
			std::string const trigger_kind_OF_t_dep_17 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_i_A62 = "fn_fathers_and_trig";
			double const lambda_OF_A97 = 9.9e-06;
			double const mu_OF_A68 = 0.1;
			std::string const when_to_check_OF_i_A54 = "not_req_to_req";
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
			bool const failI_FROZEN_OF_i_A57 = false;
			bool const failF_FROZEN_OF_A4 = false;
			std::string const calculate_required_OF_f_A44 = "fn_fathers_and_trig";
			double const lambda_OF_A33 = 2e-07;
			std::string const calculate_required_OF_A50 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A48 = false;
			bool const force_relevant_events_OF_A96 = false;
			double const mu_OF_A29 = 0.1;
			bool const force_relevant_events_OF_A74 = false;
			double const lambda_OF_A19 = 0;
			bool const failI_FROZEN_OF_i_A46 = false;
			bool const failF_FROZEN_OF_A97 = false;
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
			double const lambda_OF_A104 = 1e-06;
			double const lambda_OF_A36 = 2e-07;
			bool const force_relevant_events_OF_i_A55 = false;
			bool const failF_FROZEN_OF_A99 = false;
			double const lambda_OF_A77 = 1e-05;
			bool const force_relevant_events_OF_A56 = false;
			bool const force_relevant_events_OF_f_A51 = false;
			bool const force_relevant_events_OF_A26 = false;
			bool const force_relevant_events_OF_A37 = false;
			double const lambda_OF_A82 = 1e-05;
			bool const force_relevant_events_OF_i_A45 = false;
			bool const force_relevant_events_OF_i_A48 = false;
			double const mu_OF_i_A51 = 0.1;
			double const mu_OF_A86 = 0.1;
			std::string const calculate_required_OF_A33 = "fn_fathers_and_trig";
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
			double const lambda_OF_f_A65 = 0;
			double const lambda_OF_A99 = 1e-06;
			bool const failF_FROZEN_OF_A28 = false;
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
			bool const failF_FROZEN_OF_f_A63 = false;
			std::string const calculate_required_OF_i_A63 = "fn_fathers_and_trig";
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
			std::string const calculate_required_OF_A30 = "fn_fathers_and_trig";
			double const mu_OF_A19 = 0.1;
			double const lambda_OF_A22 = 0;
			bool const force_relevant_events_OF_A36 = false;
			std::string const calculate_required_OF_A25 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_f_A43 = false;
			double const lambda_OF_A80 = 9.9e-06;
			std::string const calculate_required_OF_f_A62 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A10 = false;
			double const mu_OF_A92 = 0.1;
			bool const force_relevant_events_OF_A80 = false;
			bool const force_relevant_events_OF_A1 = false;
			std::string const when_to_check_OF_i_A62 = "not_req_to_req";
			bool const failF_FROZEN_OF_A102 = false;
			double const lambda_OF_f_A63 = 0;
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
			double const lambda_OF_A103 = 1e-08;
			bool const force_relevant_events_OF_A77 = false;
			std::string const calculate_required_OF_f_A65 = "fn_fathers_and_trig";
			double const lambda_OF_A81 = 1e-07;
			bool const force_relevant_events_OF_A87 = false;
			bool const failI_FROZEN_OF_i_A65 = false;
			double const mu_OF_A88 = 0.1;
			bool const force_relevant_events_OF_f_A59 = false;
			bool const failF_FROZEN_OF_A10 = false;
			double const mu_OF_f_A45 = 0.1;
			bool const failF_FROZEN_OF_A80 = false;
			bool const force_relevant_events_OF_i_A63 = false;
			bool const failF_FROZEN_OF_A1 = false;
			double const lambda_OF_A102 = 9.9e-07;
			std::string const when_to_check_OF_i_A47 = "not_req_to_req";
			std::string const calculate_required_OF_A47 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A8 = false;
			std::string const calculate_required_OF_i_A64 = "fn_fathers_and_trig";
			double const mu_OF_i_A66 = 0.1;
			bool const failF_FROZEN_OF_f_A49 = false;
			std::string const when_to_check_OF_i_A51 = "not_req_to_req";
			double const mu_OF_i_A49 = 0.1;
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
			bool const failF_FROZEN_OF_f_A59 = false;
			bool const force_relevant_events_OF_i_A54 = false;
			bool const failF_FROZEN_OF_f_A60 = false;
			std::string const calculate_required_OF_A23 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A103 = false;
			bool const force_relevant_events_OF_i_A59 = false;
			bool const force_relevant_events_OF_i_A58 = false;
			bool const force_relevant_events_OF_A55 = false;
			double const lambda_OF_A4 = 0;
			std::string const trigger_kind_OF_t_seq_0 = "equal_to_S_trig";
			double const gamma_OF_i_A65 = 1;
			double const mu_OF_A97 = 0.1;
			std::string const calculate_required_OF_A45 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_i_A52 = "fn_fathers_and_trig";
			double const mu_OF_A93 = 0.1;
			bool const force_relevant_events_OF_A44 = false;
			bool const force_relevant_events_OF_A46 = false;
			std::string const calculate_required_OF_A62 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_f_A47 = false;
			std::string const calculate_required_OF_A87 = "fn_fathers_and_trig";
			double const mu_OF_i_A43 = 0.1;
			std::string const calculate_required_OF_A16 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A82 = "fn_fathers_and_trig";
			std::string const trigger_kind_OF_t_dep_7 = "fn_fathers_and_trig";
			double const lambda_OF_f_A58 = 0;
			double const lambda_OF_A87 = 1e-07;
			std::string const calculate_required_OF_A2 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A92 = false;
			bool const force_relevant_events_OF_A29 = false;
			std::string const calculate_required_OF_i_A57 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_A68 = false;
			double const mu_OF_i_A52 = 0.1;
			std::string const calculate_required_OF_A58 = "fn_fathers_and_trig";
			bool const Profil1_OF___ARBRE__EIRM = true;
			bool const force_relevant_events_OF_A7 = false;
			std::string const calculate_required_OF_A76 = "fn_fathers_and_trig";
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
			double const mu_OF_i_A45 = 0.1;
			std::string const calculate_required_OF_A98 = "fn_fathers_and_trig";
			double const mu_OF_i_A44 = 0.1;
			bool const force_relevant_events_OF_f_A66 = false;
			double const mu_OF_f_A61 = 0.1;
			double const mu_OF_i_A61 = 0.1;
			std::string const calculate_required_OF_A105 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_A7 = false;
			double const lambda_OF_A75 = 9.9e-05;
			bool const force_relevant_events_OF_f_A65 = false;
			double const lambda_OF_f_A51 = 0;
			std::string const calculate_required_OF_A22 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_A25 = false;
			bool const failF_FROZEN_OF_f_A62 = false;
			std::string const calculate_required_OF_A44 = "fn_fathers_and_trig";
			double const gamma_OF_i_A47 = 1;
			std::string const calculate_required_OF_A19 = "fn_fathers_and_trig";
			double const lambda_OF_f_A60 = 0;
			bool const no_trim_OF___ARBRE__EIRM = false;
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
			std::string const calculate_required_OF_A54 = "fn_fathers_and_trig";
			double const mu_OF_A67 = 0.1;
			std::string const calculate_required_OF_A66 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_f_A65 = false;
			bool const force_relevant_events_OF_A93 = false;
			bool const force_relevant_events_OF_A73 = false;
			bool const force_relevant_events_OF_A23 = false;
			double const mu_OF_A13 = 0.1;
			double const mu_OF_i_A62 = 0.1;
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
			bool const failF_FROZEN_OF_f_A43 = false;
			std::string const calculate_required_OF_A0 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A82 = false;
			std::string const calculate_required_OF_i_A47 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_i_A66 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_i_A49 = "fn_fathers_and_trig";
			std::string const trigger_kind_OF_t_dep_3 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_i_A57 = false;
			bool const force_relevant_events_OF_A2 = false;
			std::string const calculate_required_OF_A89 = "fn_fathers_and_trig";
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
			std::string const calculate_required_OF_A99 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A22 = false;
			bool const force_relevant_events_OF_A91 = false;
			std::string const when_to_check_OF_i_A64 = "not_req_to_req";
			double const mu_OF_f_A58 = 0.1;
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
			double const lambda_OF_A76 = 1e-06;
			std::string const calculate_required_OF_i_A46 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A54 = false;
			double const lambda_OF_f_A43 = 0;
			std::string const calculate_required_OF_A28 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A66 = false;
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
			double const mu_OF_f_A51 = 0.1;
			std::string const when_to_check_OF_i_A57 = "not_req_to_req";
			double const mu_OF_i_A48 = 0.1;
			std::string const calculate_required_OF_A94 = "fn_fathers_and_trig";
			std::string const trigger_kind_OF_t_dep_1 = "fn_fathers_and_trig";
			std::string const when_to_check_OF_i_A63 = "not_req_to_req";
			std::string const calculate_required_OF_i_A65 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A11 = false;
			double const lambda_OF_A98 = 1e-07;
			double const mu_OF_f_A59 = 0.1;
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
            bool FIRE_xx23_OF_i_A43_INS_110;
            bool FIRE_xx23_OF_i_A43_INS_111;
            bool FIRE_xx24_OF_i_A43;
            bool FIRE_xx23_OF_i_A44_INS_113;
            bool FIRE_xx23_OF_i_A44_INS_114;
            bool FIRE_xx24_OF_i_A44;
            bool FIRE_xx23_OF_i_A45_INS_116;
            bool FIRE_xx23_OF_i_A45_INS_117;
            bool FIRE_xx24_OF_i_A45;
            bool FIRE_xx23_OF_i_A46_INS_119;
            bool FIRE_xx23_OF_i_A46_INS_120;
            bool FIRE_xx24_OF_i_A46;
            bool FIRE_xx23_OF_i_A47_INS_122;
            bool FIRE_xx23_OF_i_A47_INS_123;
            bool FIRE_xx24_OF_i_A47;
            bool FIRE_xx23_OF_i_A48_INS_125;
            bool FIRE_xx23_OF_i_A48_INS_126;
            bool FIRE_xx24_OF_i_A48;
            bool FIRE_xx23_OF_i_A49_INS_128;
            bool FIRE_xx23_OF_i_A49_INS_129;
            bool FIRE_xx24_OF_i_A49;
            bool FIRE_xx23_OF_i_A51_INS_131;
            bool FIRE_xx23_OF_i_A51_INS_132;
            bool FIRE_xx24_OF_i_A51;
            bool FIRE_xx23_OF_i_A52_INS_134;
            bool FIRE_xx23_OF_i_A52_INS_135;
            bool FIRE_xx24_OF_i_A52;
            bool FIRE_xx23_OF_i_A54_INS_137;
            bool FIRE_xx23_OF_i_A54_INS_138;
            bool FIRE_xx24_OF_i_A54;
            bool FIRE_xx23_OF_i_A55_INS_140;
            bool FIRE_xx23_OF_i_A55_INS_141;
            bool FIRE_xx24_OF_i_A55;
            bool FIRE_xx23_OF_i_A57_INS_143;
            bool FIRE_xx23_OF_i_A57_INS_144;
            bool FIRE_xx24_OF_i_A57;
            bool FIRE_xx23_OF_i_A58_INS_146;
            bool FIRE_xx23_OF_i_A58_INS_147;
            bool FIRE_xx24_OF_i_A58;
            bool FIRE_xx23_OF_i_A59_INS_149;
            bool FIRE_xx23_OF_i_A59_INS_150;
            bool FIRE_xx24_OF_i_A59;
            bool FIRE_xx23_OF_i_A60_INS_152;
            bool FIRE_xx23_OF_i_A60_INS_153;
            bool FIRE_xx24_OF_i_A60;
            bool FIRE_xx23_OF_i_A61_INS_155;
            bool FIRE_xx23_OF_i_A61_INS_156;
            bool FIRE_xx24_OF_i_A61;
            bool FIRE_xx23_OF_i_A62_INS_158;
            bool FIRE_xx23_OF_i_A62_INS_159;
            bool FIRE_xx24_OF_i_A62;
            bool FIRE_xx23_OF_i_A63_INS_161;
            bool FIRE_xx23_OF_i_A63_INS_162;
            bool FIRE_xx24_OF_i_A63;
            bool FIRE_xx23_OF_i_A64_INS_164;
            bool FIRE_xx23_OF_i_A64_INS_165;
            bool FIRE_xx24_OF_i_A64;
            bool FIRE_xx23_OF_i_A65_INS_167;
            bool FIRE_xx23_OF_i_A65_INS_168;
            bool FIRE_xx24_OF_i_A65;
            bool FIRE_xx23_OF_i_A66_INS_170;
            bool FIRE_xx23_OF_i_A66_INS_171;
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
            int required_OF_A11 = 41 ;
            int already_S_OF_A11 = 42 ;
            int S_OF_A11 = 43 ;
            int relevant_evt_OF_A11 = 44 ;
            int required_OF_A13 = 45 ;
            int already_S_OF_A13 = 46 ;
            int S_OF_A13 = 47 ;
            int relevant_evt_OF_A13 = 48 ;
            int failF_OF_A13 = 49 ;
            int required_OF_A14 = 50 ;
            int already_S_OF_A14 = 51 ;
            int S_OF_A14 = 52 ;
            int relevant_evt_OF_A14 = 53 ;
            int required_OF_A16 = 54 ;
            int already_S_OF_A16 = 55 ;
            int S_OF_A16 = 56 ;
            int relevant_evt_OF_A16 = 57 ;
            int failF_OF_A16 = 58 ;
            int required_OF_A17 = 59 ;
            int already_S_OF_A17 = 60 ;
            int S_OF_A17 = 61 ;
            int relevant_evt_OF_A17 = 62 ;
            int required_OF_A19 = 63 ;
            int already_S_OF_A19 = 64 ;
            int S_OF_A19 = 65 ;
            int relevant_evt_OF_A19 = 66 ;
            int failF_OF_A19 = 67 ;
            int required_OF_A2 = 68 ;
            int already_S_OF_A2 = 69 ;
            int S_OF_A2 = 70 ;
            int relevant_evt_OF_A2 = 71 ;
            int required_OF_A20 = 72 ;
            int already_S_OF_A20 = 73 ;
            int S_OF_A20 = 74 ;
            int relevant_evt_OF_A20 = 75 ;
            int required_OF_A22 = 76 ;
            int already_S_OF_A22 = 77 ;
            int S_OF_A22 = 78 ;
            int relevant_evt_OF_A22 = 79 ;
            int failF_OF_A22 = 80 ;
            int required_OF_A23 = 81 ;
            int already_S_OF_A23 = 82 ;
            int S_OF_A23 = 83 ;
            int relevant_evt_OF_A23 = 84 ;
            int required_OF_A25 = 85 ;
            int already_S_OF_A25 = 86 ;
            int S_OF_A25 = 87 ;
            int relevant_evt_OF_A25 = 88 ;
            int failF_OF_A25 = 89 ;
            int required_OF_A26 = 90 ;
            int already_S_OF_A26 = 91 ;
            int S_OF_A26 = 92 ;
            int relevant_evt_OF_A26 = 93 ;
            int required_OF_A28 = 94 ;
            int already_S_OF_A28 = 95 ;
            int S_OF_A28 = 96 ;
            int relevant_evt_OF_A28 = 97 ;
            int failF_OF_A28 = 98 ;
            int required_OF_A29 = 99 ;
            int already_S_OF_A29 = 100 ;
            int S_OF_A29 = 101 ;
            int relevant_evt_OF_A29 = 102 ;
            int failF_OF_A29 = 103 ;
            int required_OF_A30 = 104 ;
            int already_S_OF_A30 = 105 ;
            int S_OF_A30 = 106 ;
            int relevant_evt_OF_A30 = 107 ;
            int required_OF_A31 = 108 ;
            int already_S_OF_A31 = 109 ;
            int S_OF_A31 = 110 ;
            int relevant_evt_OF_A31 = 111 ;
            int required_OF_A33 = 112 ;
            int already_S_OF_A33 = 113 ;
            int S_OF_A33 = 114 ;
            int relevant_evt_OF_A33 = 115 ;
            int failF_OF_A33 = 116 ;
            int required_OF_A34 = 117 ;
            int already_S_OF_A34 = 118 ;
            int S_OF_A34 = 119 ;
            int relevant_evt_OF_A34 = 120 ;
            int required_OF_A36 = 121 ;
            int already_S_OF_A36 = 122 ;
            int S_OF_A36 = 123 ;
            int relevant_evt_OF_A36 = 124 ;
            int failF_OF_A36 = 125 ;
            int required_OF_A37 = 126 ;
            int already_S_OF_A37 = 127 ;
            int S_OF_A37 = 128 ;
            int relevant_evt_OF_A37 = 129 ;
            int required_OF_A39 = 130 ;
            int already_S_OF_A39 = 131 ;
            int S_OF_A39 = 132 ;
            int relevant_evt_OF_A39 = 133 ;
            int failF_OF_A39 = 134 ;
            int required_OF_A4 = 135 ;
            int already_S_OF_A4 = 136 ;
            int S_OF_A4 = 137 ;
            int relevant_evt_OF_A4 = 138 ;
            int failF_OF_A4 = 139 ;
            int required_OF_A40 = 140 ;
            int already_S_OF_A40 = 141 ;
            int S_OF_A40 = 142 ;
            int relevant_evt_OF_A40 = 143 ;
            int required_OF_A41 = 144 ;
            int already_S_OF_A41 = 145 ;
            int S_OF_A41 = 146 ;
            int relevant_evt_OF_A41 = 147 ;
            int required_OF_A43 = 148 ;
            int already_S_OF_A43 = 149 ;
            int S_OF_A43 = 150 ;
            int relevant_evt_OF_A43 = 151 ;
            int required_OF_A44 = 152 ;
            int already_S_OF_A44 = 153 ;
            int S_OF_A44 = 154 ;
            int relevant_evt_OF_A44 = 155 ;
            int required_OF_A45 = 156 ;
            int already_S_OF_A45 = 157 ;
            int S_OF_A45 = 158 ;
            int relevant_evt_OF_A45 = 159 ;
            int required_OF_A46 = 160 ;
            int already_S_OF_A46 = 161 ;
            int S_OF_A46 = 162 ;
            int relevant_evt_OF_A46 = 163 ;
            int required_OF_A47 = 164 ;
            int already_S_OF_A47 = 165 ;
            int S_OF_A47 = 166 ;
            int relevant_evt_OF_A47 = 167 ;
            int required_OF_A48 = 168 ;
            int already_S_OF_A48 = 169 ;
            int S_OF_A48 = 170 ;
            int relevant_evt_OF_A48 = 171 ;
            int required_OF_A49 = 172 ;
            int already_S_OF_A49 = 173 ;
            int S_OF_A49 = 174 ;
            int relevant_evt_OF_A49 = 175 ;
            int required_OF_A5 = 176 ;
            int already_S_OF_A5 = 177 ;
            int S_OF_A5 = 178 ;
            int relevant_evt_OF_A5 = 179 ;
            int required_OF_A50 = 180 ;
            int already_S_OF_A50 = 181 ;
            int S_OF_A50 = 182 ;
            int relevant_evt_OF_A50 = 183 ;
            int required_OF_A51 = 184 ;
            int already_S_OF_A51 = 185 ;
            int S_OF_A51 = 186 ;
            int relevant_evt_OF_A51 = 187 ;
            int required_OF_A52 = 188 ;
            int already_S_OF_A52 = 189 ;
            int S_OF_A52 = 190 ;
            int relevant_evt_OF_A52 = 191 ;
            int required_OF_A53 = 192 ;
            int already_S_OF_A53 = 193 ;
            int S_OF_A53 = 194 ;
            int relevant_evt_OF_A53 = 195 ;
            int required_OF_A54 = 196 ;
            int already_S_OF_A54 = 197 ;
            int S_OF_A54 = 198 ;
            int relevant_evt_OF_A54 = 199 ;
            int required_OF_A55 = 200 ;
            int already_S_OF_A55 = 201 ;
            int S_OF_A55 = 202 ;
            int relevant_evt_OF_A55 = 203 ;
            int required_OF_A56 = 204 ;
            int already_S_OF_A56 = 205 ;
            int S_OF_A56 = 206 ;
            int relevant_evt_OF_A56 = 207 ;
            int required_OF_A57 = 208 ;
            int already_S_OF_A57 = 209 ;
            int S_OF_A57 = 210 ;
            int relevant_evt_OF_A57 = 211 ;
            int required_OF_A58 = 212 ;
            int already_S_OF_A58 = 213 ;
            int S_OF_A58 = 214 ;
            int relevant_evt_OF_A58 = 215 ;
            int required_OF_A59 = 216 ;
            int already_S_OF_A59 = 217 ;
            int S_OF_A59 = 218 ;
            int relevant_evt_OF_A59 = 219 ;
            int required_OF_A60 = 220 ;
            int already_S_OF_A60 = 221 ;
            int S_OF_A60 = 222 ;
            int relevant_evt_OF_A60 = 223 ;
            int required_OF_A61 = 224 ;
            int already_S_OF_A61 = 225 ;
            int S_OF_A61 = 226 ;
            int relevant_evt_OF_A61 = 227 ;
            int required_OF_A62 = 228 ;
            int already_S_OF_A62 = 229 ;
            int S_OF_A62 = 230 ;
            int relevant_evt_OF_A62 = 231 ;
            int required_OF_A63 = 232 ;
            int already_S_OF_A63 = 233 ;
            int S_OF_A63 = 234 ;
            int relevant_evt_OF_A63 = 235 ;
            int required_OF_A64 = 236 ;
            int already_S_OF_A64 = 237 ;
            int S_OF_A64 = 238 ;
            int relevant_evt_OF_A64 = 239 ;
            int required_OF_A65 = 240 ;
            int already_S_OF_A65 = 241 ;
            int S_OF_A65 = 242 ;
            int relevant_evt_OF_A65 = 243 ;
            int required_OF_A66 = 244 ;
            int already_S_OF_A66 = 245 ;
            int S_OF_A66 = 246 ;
            int relevant_evt_OF_A66 = 247 ;
            int required_OF_A67 = 248 ;
            int already_S_OF_A67 = 249 ;
            int S_OF_A67 = 250 ;
            int relevant_evt_OF_A67 = 251 ;
            int failF_OF_A67 = 252 ;
            int required_OF_A68 = 253 ;
            int already_S_OF_A68 = 254 ;
            int S_OF_A68 = 255 ;
            int relevant_evt_OF_A68 = 256 ;
            int failF_OF_A68 = 257 ;
            int required_OF_A69 = 258 ;
            int already_S_OF_A69 = 259 ;
            int S_OF_A69 = 260 ;
            int relevant_evt_OF_A69 = 261 ;
            int required_OF_A7 = 262 ;
            int already_S_OF_A7 = 263 ;
            int S_OF_A7 = 264 ;
            int relevant_evt_OF_A7 = 265 ;
            int failF_OF_A7 = 266 ;
            int required_OF_A70 = 267 ;
            int already_S_OF_A70 = 268 ;
            int S_OF_A70 = 269 ;
            int relevant_evt_OF_A70 = 270 ;
            int required_OF_A71 = 271 ;
            int already_S_OF_A71 = 272 ;
            int S_OF_A71 = 273 ;
            int relevant_evt_OF_A71 = 274 ;
            int required_OF_A72 = 275 ;
            int already_S_OF_A72 = 276 ;
            int S_OF_A72 = 277 ;
            int relevant_evt_OF_A72 = 278 ;
            int required_OF_A73 = 279 ;
            int already_S_OF_A73 = 280 ;
            int S_OF_A73 = 281 ;
            int relevant_evt_OF_A73 = 282 ;
            int required_OF_A74 = 283 ;
            int already_S_OF_A74 = 284 ;
            int S_OF_A74 = 285 ;
            int relevant_evt_OF_A74 = 286 ;
            int required_OF_A75 = 287 ;
            int already_S_OF_A75 = 288 ;
            int S_OF_A75 = 289 ;
            int relevant_evt_OF_A75 = 290 ;
            int failF_OF_A75 = 291 ;
            int required_OF_A76 = 292 ;
            int already_S_OF_A76 = 293 ;
            int S_OF_A76 = 294 ;
            int relevant_evt_OF_A76 = 295 ;
            int failF_OF_A76 = 296 ;
            int required_OF_A77 = 297 ;
            int already_S_OF_A77 = 298 ;
            int S_OF_A77 = 299 ;
            int relevant_evt_OF_A77 = 300 ;
            int failF_OF_A77 = 301 ;
            int required_OF_A78 = 302 ;
            int already_S_OF_A78 = 303 ;
            int S_OF_A78 = 304 ;
            int relevant_evt_OF_A78 = 305 ;
            int required_OF_A8 = 306 ;
            int already_S_OF_A8 = 307 ;
            int S_OF_A8 = 308 ;
            int relevant_evt_OF_A8 = 309 ;
            int required_OF_A80 = 310 ;
            int already_S_OF_A80 = 311 ;
            int S_OF_A80 = 312 ;
            int relevant_evt_OF_A80 = 313 ;
            int failF_OF_A80 = 314 ;
            int required_OF_A81 = 315 ;
            int already_S_OF_A81 = 316 ;
            int S_OF_A81 = 317 ;
            int relevant_evt_OF_A81 = 318 ;
            int failF_OF_A81 = 319 ;
            int required_OF_A82 = 320 ;
            int already_S_OF_A82 = 321 ;
            int S_OF_A82 = 322 ;
            int relevant_evt_OF_A82 = 323 ;
            int failF_OF_A82 = 324 ;
            int required_OF_A83 = 325 ;
            int already_S_OF_A83 = 326 ;
            int S_OF_A83 = 327 ;
            int relevant_evt_OF_A83 = 328 ;
            int required_OF_A85 = 329 ;
            int already_S_OF_A85 = 330 ;
            int S_OF_A85 = 331 ;
            int relevant_evt_OF_A85 = 332 ;
            int required_OF_A86 = 333 ;
            int already_S_OF_A86 = 334 ;
            int S_OF_A86 = 335 ;
            int relevant_evt_OF_A86 = 336 ;
            int failF_OF_A86 = 337 ;
            int required_OF_A87 = 338 ;
            int already_S_OF_A87 = 339 ;
            int S_OF_A87 = 340 ;
            int relevant_evt_OF_A87 = 341 ;
            int failF_OF_A87 = 342 ;
            int required_OF_A88 = 343 ;
            int already_S_OF_A88 = 344 ;
            int S_OF_A88 = 345 ;
            int relevant_evt_OF_A88 = 346 ;
            int failF_OF_A88 = 347 ;
            int required_OF_A89 = 348 ;
            int already_S_OF_A89 = 349 ;
            int S_OF_A89 = 350 ;
            int relevant_evt_OF_A89 = 351 ;
            int required_OF_A91 = 352 ;
            int already_S_OF_A91 = 353 ;
            int S_OF_A91 = 354 ;
            int relevant_evt_OF_A91 = 355 ;
            int failF_OF_A91 = 356 ;
            int required_OF_A92 = 357 ;
            int already_S_OF_A92 = 358 ;
            int S_OF_A92 = 359 ;
            int relevant_evt_OF_A92 = 360 ;
            int failF_OF_A92 = 361 ;
            int required_OF_A93 = 362 ;
            int already_S_OF_A93 = 363 ;
            int S_OF_A93 = 364 ;
            int relevant_evt_OF_A93 = 365 ;
            int failF_OF_A93 = 366 ;
            int required_OF_A94 = 367 ;
            int already_S_OF_A94 = 368 ;
            int S_OF_A94 = 369 ;
            int relevant_evt_OF_A94 = 370 ;
            int required_OF_A96 = 371 ;
            int already_S_OF_A96 = 372 ;
            int S_OF_A96 = 373 ;
            int relevant_evt_OF_A96 = 374 ;
            int required_OF_A97 = 375 ;
            int already_S_OF_A97 = 376 ;
            int S_OF_A97 = 377 ;
            int relevant_evt_OF_A97 = 378 ;
            int failF_OF_A97 = 379 ;
            int required_OF_A98 = 380 ;
            int already_S_OF_A98 = 381 ;
            int S_OF_A98 = 382 ;
            int relevant_evt_OF_A98 = 383 ;
            int failF_OF_A98 = 384 ;
            int required_OF_A99 = 385 ;
            int already_S_OF_A99 = 386 ;
            int S_OF_A99 = 387 ;
            int relevant_evt_OF_A99 = 388 ;
            int failF_OF_A99 = 389 ;
            int required_OF_UE_1 = 390 ;
            int already_S_OF_UE_1 = 391 ;
            int S_OF_UE_1 = 392 ;
            int relevant_evt_OF_UE_1 = 393 ;
            int required_OF_f_A43 = 394 ;
            int already_S_OF_f_A43 = 395 ;
            int S_OF_f_A43 = 396 ;
            int relevant_evt_OF_f_A43 = 397 ;
            int failF_OF_f_A43 = 398 ;
            int required_OF_f_A44 = 399 ;
            int already_S_OF_f_A44 = 400 ;
            int S_OF_f_A44 = 401 ;
            int relevant_evt_OF_f_A44 = 402 ;
            int failF_OF_f_A44 = 403 ;
            int required_OF_f_A45 = 404 ;
            int already_S_OF_f_A45 = 405 ;
            int S_OF_f_A45 = 406 ;
            int relevant_evt_OF_f_A45 = 407 ;
            int failF_OF_f_A45 = 408 ;
            int required_OF_f_A46 = 409 ;
            int already_S_OF_f_A46 = 410 ;
            int S_OF_f_A46 = 411 ;
            int relevant_evt_OF_f_A46 = 412 ;
            int failF_OF_f_A46 = 413 ;
            int required_OF_f_A47 = 414 ;
            int already_S_OF_f_A47 = 415 ;
            int S_OF_f_A47 = 416 ;
            int relevant_evt_OF_f_A47 = 417 ;
            int failF_OF_f_A47 = 418 ;
            int required_OF_f_A48 = 419 ;
            int already_S_OF_f_A48 = 420 ;
            int S_OF_f_A48 = 421 ;
            int relevant_evt_OF_f_A48 = 422 ;
            int failF_OF_f_A48 = 423 ;
            int required_OF_f_A49 = 424 ;
            int already_S_OF_f_A49 = 425 ;
            int S_OF_f_A49 = 426 ;
            int relevant_evt_OF_f_A49 = 427 ;
            int failF_OF_f_A49 = 428 ;
            int required_OF_f_A51 = 429 ;
            int already_S_OF_f_A51 = 430 ;
            int S_OF_f_A51 = 431 ;
            int relevant_evt_OF_f_A51 = 432 ;
            int failF_OF_f_A51 = 433 ;
            int required_OF_f_A52 = 434 ;
            int already_S_OF_f_A52 = 435 ;
            int S_OF_f_A52 = 436 ;
            int relevant_evt_OF_f_A52 = 437 ;
            int failF_OF_f_A52 = 438 ;
            int required_OF_f_A54 = 439 ;
            int already_S_OF_f_A54 = 440 ;
            int S_OF_f_A54 = 441 ;
            int relevant_evt_OF_f_A54 = 442 ;
            int failF_OF_f_A54 = 443 ;
            int required_OF_f_A55 = 444 ;
            int already_S_OF_f_A55 = 445 ;
            int S_OF_f_A55 = 446 ;
            int relevant_evt_OF_f_A55 = 447 ;
            int failF_OF_f_A55 = 448 ;
            int required_OF_f_A57 = 449 ;
            int already_S_OF_f_A57 = 450 ;
            int S_OF_f_A57 = 451 ;
            int relevant_evt_OF_f_A57 = 452 ;
            int failF_OF_f_A57 = 453 ;
            int required_OF_f_A58 = 454 ;
            int already_S_OF_f_A58 = 455 ;
            int S_OF_f_A58 = 456 ;
            int relevant_evt_OF_f_A58 = 457 ;
            int failF_OF_f_A58 = 458 ;
            int required_OF_f_A59 = 459 ;
            int already_S_OF_f_A59 = 460 ;
            int S_OF_f_A59 = 461 ;
            int relevant_evt_OF_f_A59 = 462 ;
            int failF_OF_f_A59 = 463 ;
            int required_OF_f_A60 = 464 ;
            int already_S_OF_f_A60 = 465 ;
            int S_OF_f_A60 = 466 ;
            int relevant_evt_OF_f_A60 = 467 ;
            int failF_OF_f_A60 = 468 ;
            int required_OF_f_A61 = 469 ;
            int already_S_OF_f_A61 = 470 ;
            int S_OF_f_A61 = 471 ;
            int relevant_evt_OF_f_A61 = 472 ;
            int failF_OF_f_A61 = 473 ;
            int required_OF_f_A62 = 474 ;
            int already_S_OF_f_A62 = 475 ;
            int S_OF_f_A62 = 476 ;
            int relevant_evt_OF_f_A62 = 477 ;
            int failF_OF_f_A62 = 478 ;
            int required_OF_f_A63 = 479 ;
            int already_S_OF_f_A63 = 480 ;
            int S_OF_f_A63 = 481 ;
            int relevant_evt_OF_f_A63 = 482 ;
            int failF_OF_f_A63 = 483 ;
            int required_OF_f_A64 = 484 ;
            int already_S_OF_f_A64 = 485 ;
            int S_OF_f_A64 = 486 ;
            int relevant_evt_OF_f_A64 = 487 ;
            int failF_OF_f_A64 = 488 ;
            int required_OF_f_A65 = 489 ;
            int already_S_OF_f_A65 = 490 ;
            int S_OF_f_A65 = 491 ;
            int relevant_evt_OF_f_A65 = 492 ;
            int failF_OF_f_A65 = 493 ;
            int required_OF_f_A66 = 494 ;
            int already_S_OF_f_A66 = 495 ;
            int S_OF_f_A66 = 496 ;
            int relevant_evt_OF_f_A66 = 497 ;
            int failF_OF_f_A66 = 498 ;
            int required_OF_i_A43 = 499 ;
            int already_S_OF_i_A43 = 500 ;
            int S_OF_i_A43 = 501 ;
            int relevant_evt_OF_i_A43 = 502 ;
            int failI_OF_i_A43 = 503 ;
            int to_be_fired_OF_i_A43 = 504 ;
            int already_standby_OF_i_A43 = 505 ;
            int already_required_OF_i_A43 = 506 ;
            int required_OF_i_A44 = 507 ;
            int already_S_OF_i_A44 = 508 ;
            int S_OF_i_A44 = 509 ;
            int relevant_evt_OF_i_A44 = 510 ;
            int failI_OF_i_A44 = 511 ;
            int to_be_fired_OF_i_A44 = 512 ;
            int already_standby_OF_i_A44 = 513 ;
            int already_required_OF_i_A44 = 514 ;
            int required_OF_i_A45 = 515 ;
            int already_S_OF_i_A45 = 516 ;
            int S_OF_i_A45 = 517 ;
            int relevant_evt_OF_i_A45 = 518 ;
            int failI_OF_i_A45 = 519 ;
            int to_be_fired_OF_i_A45 = 520 ;
            int already_standby_OF_i_A45 = 521 ;
            int already_required_OF_i_A45 = 522 ;
            int required_OF_i_A46 = 523 ;
            int already_S_OF_i_A46 = 524 ;
            int S_OF_i_A46 = 525 ;
            int relevant_evt_OF_i_A46 = 526 ;
            int failI_OF_i_A46 = 527 ;
            int to_be_fired_OF_i_A46 = 528 ;
            int already_standby_OF_i_A46 = 529 ;
            int already_required_OF_i_A46 = 530 ;
            int required_OF_i_A47 = 531 ;
            int already_S_OF_i_A47 = 532 ;
            int S_OF_i_A47 = 533 ;
            int relevant_evt_OF_i_A47 = 534 ;
            int failI_OF_i_A47 = 535 ;
            int to_be_fired_OF_i_A47 = 536 ;
            int already_standby_OF_i_A47 = 537 ;
            int already_required_OF_i_A47 = 538 ;
            int required_OF_i_A48 = 539 ;
            int already_S_OF_i_A48 = 540 ;
            int S_OF_i_A48 = 541 ;
            int relevant_evt_OF_i_A48 = 542 ;
            int failI_OF_i_A48 = 543 ;
            int to_be_fired_OF_i_A48 = 544 ;
            int already_standby_OF_i_A48 = 545 ;
            int already_required_OF_i_A48 = 546 ;
            int required_OF_i_A49 = 547 ;
            int already_S_OF_i_A49 = 548 ;
            int S_OF_i_A49 = 549 ;
            int relevant_evt_OF_i_A49 = 550 ;
            int failI_OF_i_A49 = 551 ;
            int to_be_fired_OF_i_A49 = 552 ;
            int already_standby_OF_i_A49 = 553 ;
            int already_required_OF_i_A49 = 554 ;
            int required_OF_i_A51 = 555 ;
            int already_S_OF_i_A51 = 556 ;
            int S_OF_i_A51 = 557 ;
            int relevant_evt_OF_i_A51 = 558 ;
            int failI_OF_i_A51 = 559 ;
            int to_be_fired_OF_i_A51 = 560 ;
            int already_standby_OF_i_A51 = 561 ;
            int already_required_OF_i_A51 = 562 ;
            int required_OF_i_A52 = 563 ;
            int already_S_OF_i_A52 = 564 ;
            int S_OF_i_A52 = 565 ;
            int relevant_evt_OF_i_A52 = 566 ;
            int failI_OF_i_A52 = 567 ;
            int to_be_fired_OF_i_A52 = 568 ;
            int already_standby_OF_i_A52 = 569 ;
            int already_required_OF_i_A52 = 570 ;
            int required_OF_i_A54 = 571 ;
            int already_S_OF_i_A54 = 572 ;
            int S_OF_i_A54 = 573 ;
            int relevant_evt_OF_i_A54 = 574 ;
            int failI_OF_i_A54 = 575 ;
            int to_be_fired_OF_i_A54 = 576 ;
            int already_standby_OF_i_A54 = 577 ;
            int already_required_OF_i_A54 = 578 ;
            int required_OF_i_A55 = 579 ;
            int already_S_OF_i_A55 = 580 ;
            int S_OF_i_A55 = 581 ;
            int relevant_evt_OF_i_A55 = 582 ;
            int failI_OF_i_A55 = 583 ;
            int to_be_fired_OF_i_A55 = 584 ;
            int already_standby_OF_i_A55 = 585 ;
            int already_required_OF_i_A55 = 586 ;
            int required_OF_i_A57 = 587 ;
            int already_S_OF_i_A57 = 588 ;
            int S_OF_i_A57 = 589 ;
            int relevant_evt_OF_i_A57 = 590 ;
            int failI_OF_i_A57 = 591 ;
            int to_be_fired_OF_i_A57 = 592 ;
            int already_standby_OF_i_A57 = 593 ;
            int already_required_OF_i_A57 = 594 ;
            int required_OF_i_A58 = 595 ;
            int already_S_OF_i_A58 = 596 ;
            int S_OF_i_A58 = 597 ;
            int relevant_evt_OF_i_A58 = 598 ;
            int failI_OF_i_A58 = 599 ;
            int to_be_fired_OF_i_A58 = 600 ;
            int already_standby_OF_i_A58 = 601 ;
            int already_required_OF_i_A58 = 602 ;
            int required_OF_i_A59 = 603 ;
            int already_S_OF_i_A59 = 604 ;
            int S_OF_i_A59 = 605 ;
            int relevant_evt_OF_i_A59 = 606 ;
            int failI_OF_i_A59 = 607 ;
            int to_be_fired_OF_i_A59 = 608 ;
            int already_standby_OF_i_A59 = 609 ;
            int already_required_OF_i_A59 = 610 ;
            int required_OF_i_A60 = 611 ;
            int already_S_OF_i_A60 = 612 ;
            int S_OF_i_A60 = 613 ;
            int relevant_evt_OF_i_A60 = 614 ;
            int failI_OF_i_A60 = 615 ;
            int to_be_fired_OF_i_A60 = 616 ;
            int already_standby_OF_i_A60 = 617 ;
            int already_required_OF_i_A60 = 618 ;
            int required_OF_i_A61 = 619 ;
            int already_S_OF_i_A61 = 620 ;
            int S_OF_i_A61 = 621 ;
            int relevant_evt_OF_i_A61 = 622 ;
            int failI_OF_i_A61 = 623 ;
            int to_be_fired_OF_i_A61 = 624 ;
            int already_standby_OF_i_A61 = 625 ;
            int already_required_OF_i_A61 = 626 ;
            int required_OF_i_A62 = 627 ;
            int already_S_OF_i_A62 = 628 ;
            int S_OF_i_A62 = 629 ;
            int relevant_evt_OF_i_A62 = 630 ;
            int failI_OF_i_A62 = 631 ;
            int to_be_fired_OF_i_A62 = 632 ;
            int already_standby_OF_i_A62 = 633 ;
            int already_required_OF_i_A62 = 634 ;
            int required_OF_i_A63 = 635 ;
            int already_S_OF_i_A63 = 636 ;
            int S_OF_i_A63 = 637 ;
            int relevant_evt_OF_i_A63 = 638 ;
            int failI_OF_i_A63 = 639 ;
            int to_be_fired_OF_i_A63 = 640 ;
            int already_standby_OF_i_A63 = 641 ;
            int already_required_OF_i_A63 = 642 ;
            int required_OF_i_A64 = 643 ;
            int already_S_OF_i_A64 = 644 ;
            int S_OF_i_A64 = 645 ;
            int relevant_evt_OF_i_A64 = 646 ;
            int failI_OF_i_A64 = 647 ;
            int to_be_fired_OF_i_A64 = 648 ;
            int already_standby_OF_i_A64 = 649 ;
            int already_required_OF_i_A64 = 650 ;
            int required_OF_i_A65 = 651 ;
            int already_S_OF_i_A65 = 652 ;
            int S_OF_i_A65 = 653 ;
            int relevant_evt_OF_i_A65 = 654 ;
            int failI_OF_i_A65 = 655 ;
            int to_be_fired_OF_i_A65 = 656 ;
            int already_standby_OF_i_A65 = 657 ;
            int already_required_OF_i_A65 = 658 ;
            int required_OF_i_A66 = 659 ;
            int already_S_OF_i_A66 = 660 ;
            int S_OF_i_A66 = 661 ;
            int relevant_evt_OF_i_A66 = 662 ;
            int failI_OF_i_A66 = 663 ;
            int to_be_fired_OF_i_A66 = 664 ;
            int already_standby_OF_i_A66 = 665 ;
            int already_required_OF_i_A66 = 666 ;




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