
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
        class FigaroProgram_vgs_4_Trim_Article_repair: public storm::figaro::FigaroProgram{
        public:
        FigaroProgram_vgs_4_Trim_Article_repair(): FigaroProgram(//            std::map<std::string, size_t> mFigaroboolelementindex =
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
            	{"required_OF_A100" , 9},
            	{"already_S_OF_A100" , 10},
            	{"S_OF_A100" , 11},
            	{"relevant_evt_OF_A100" , 12},
            	{"failF_OF_A100" , 13},
            	{"required_OF_A101" , 14},
            	{"already_S_OF_A101" , 15},
            	{"S_OF_A101" , 16},
            	{"relevant_evt_OF_A101" , 17},
            	{"failF_OF_A101" , 18},
            	{"required_OF_A102" , 19},
            	{"already_S_OF_A102" , 20},
            	{"S_OF_A102" , 21},
            	{"relevant_evt_OF_A102" , 22},
            	{"failF_OF_A102" , 23},
            	{"required_OF_A103" , 24},
            	{"already_S_OF_A103" , 25},
            	{"S_OF_A103" , 26},
            	{"relevant_evt_OF_A103" , 27},
            	{"required_OF_A105" , 28},
            	{"already_S_OF_A105" , 29},
            	{"S_OF_A105" , 30},
            	{"relevant_evt_OF_A105" , 31},
            	{"required_OF_A11" , 32},
            	{"already_S_OF_A11" , 33},
            	{"S_OF_A11" , 34},
            	{"relevant_evt_OF_A11" , 35},
            	{"failF_OF_A11" , 36},
            	{"failS_OF_A11" , 37},
            	{"required_OF_A12" , 38},
            	{"already_S_OF_A12" , 39},
            	{"S_OF_A12" , 40},
            	{"relevant_evt_OF_A12" , 41},
            	{"required_OF_A14" , 42},
            	{"already_S_OF_A14" , 43},
            	{"S_OF_A14" , 44},
            	{"relevant_evt_OF_A14" , 45},
            	{"failF_OF_A14" , 46},
            	{"failS_OF_A14" , 47},
            	{"required_OF_A15" , 48},
            	{"already_S_OF_A15" , 49},
            	{"S_OF_A15" , 50},
            	{"relevant_evt_OF_A15" , 51},
            	{"required_OF_A17" , 52},
            	{"already_S_OF_A17" , 53},
            	{"S_OF_A17" , 54},
            	{"relevant_evt_OF_A17" , 55},
            	{"failF_OF_A17" , 56},
            	{"required_OF_A18" , 57},
            	{"already_S_OF_A18" , 58},
            	{"S_OF_A18" , 59},
            	{"relevant_evt_OF_A18" , 60},
            	{"required_OF_A2" , 61},
            	{"already_S_OF_A2" , 62},
            	{"S_OF_A2" , 63},
            	{"relevant_evt_OF_A2" , 64},
            	{"required_OF_A20" , 65},
            	{"already_S_OF_A20" , 66},
            	{"S_OF_A20" , 67},
            	{"relevant_evt_OF_A20" , 68},
            	{"failF_OF_A20" , 69},
            	{"required_OF_A21" , 70},
            	{"already_S_OF_A21" , 71},
            	{"S_OF_A21" , 72},
            	{"relevant_evt_OF_A21" , 73},
            	{"required_OF_A23" , 74},
            	{"already_S_OF_A23" , 75},
            	{"S_OF_A23" , 76},
            	{"relevant_evt_OF_A23" , 77},
            	{"failF_OF_A23" , 78},
            	{"required_OF_A24" , 79},
            	{"already_S_OF_A24" , 80},
            	{"S_OF_A24" , 81},
            	{"relevant_evt_OF_A24" , 82},
            	{"required_OF_A26" , 83},
            	{"already_S_OF_A26" , 84},
            	{"S_OF_A26" , 85},
            	{"relevant_evt_OF_A26" , 86},
            	{"failF_OF_A26" , 87},
            	{"required_OF_A27" , 88},
            	{"already_S_OF_A27" , 89},
            	{"S_OF_A27" , 90},
            	{"relevant_evt_OF_A27" , 91},
            	{"required_OF_A29" , 92},
            	{"already_S_OF_A29" , 93},
            	{"S_OF_A29" , 94},
            	{"relevant_evt_OF_A29" , 95},
            	{"failF_OF_A29" , 96},
            	{"required_OF_A3" , 97},
            	{"already_S_OF_A3" , 98},
            	{"S_OF_A3" , 99},
            	{"relevant_evt_OF_A3" , 100},
            	{"required_OF_A30" , 101},
            	{"already_S_OF_A30" , 102},
            	{"S_OF_A30" , 103},
            	{"relevant_evt_OF_A30" , 104},
            	{"required_OF_A31" , 105},
            	{"already_S_OF_A31" , 106},
            	{"S_OF_A31" , 107},
            	{"relevant_evt_OF_A31" , 108},
            	{"required_OF_A33" , 109},
            	{"already_S_OF_A33" , 110},
            	{"S_OF_A33" , 111},
            	{"relevant_evt_OF_A33" , 112},
            	{"failF_OF_A33" , 113},
            	{"required_OF_A34" , 114},
            	{"already_S_OF_A34" , 115},
            	{"S_OF_A34" , 116},
            	{"relevant_evt_OF_A34" , 117},
            	{"required_OF_A36" , 118},
            	{"already_S_OF_A36" , 119},
            	{"S_OF_A36" , 120},
            	{"relevant_evt_OF_A36" , 121},
            	{"required_OF_A37" , 122},
            	{"already_S_OF_A37" , 123},
            	{"S_OF_A37" , 124},
            	{"relevant_evt_OF_A37" , 125},
            	{"required_OF_A38" , 126},
            	{"already_S_OF_A38" , 127},
            	{"S_OF_A38" , 128},
            	{"relevant_evt_OF_A38" , 129},
            	{"required_OF_A39" , 130},
            	{"already_S_OF_A39" , 131},
            	{"S_OF_A39" , 132},
            	{"relevant_evt_OF_A39" , 133},
            	{"required_OF_A40" , 134},
            	{"already_S_OF_A40" , 135},
            	{"S_OF_A40" , 136},
            	{"relevant_evt_OF_A40" , 137},
            	{"required_OF_A41" , 138},
            	{"already_S_OF_A41" , 139},
            	{"S_OF_A41" , 140},
            	{"relevant_evt_OF_A41" , 141},
            	{"required_OF_A42" , 142},
            	{"already_S_OF_A42" , 143},
            	{"S_OF_A42" , 144},
            	{"relevant_evt_OF_A42" , 145},
            	{"required_OF_A43" , 146},
            	{"already_S_OF_A43" , 147},
            	{"S_OF_A43" , 148},
            	{"relevant_evt_OF_A43" , 149},
            	{"required_OF_A44" , 150},
            	{"already_S_OF_A44" , 151},
            	{"S_OF_A44" , 152},
            	{"relevant_evt_OF_A44" , 153},
            	{"required_OF_A45" , 154},
            	{"already_S_OF_A45" , 155},
            	{"S_OF_A45" , 156},
            	{"relevant_evt_OF_A45" , 157},
            	{"required_OF_A46" , 158},
            	{"already_S_OF_A46" , 159},
            	{"S_OF_A46" , 160},
            	{"relevant_evt_OF_A46" , 161},
            	{"required_OF_A47" , 162},
            	{"already_S_OF_A47" , 163},
            	{"S_OF_A47" , 164},
            	{"relevant_evt_OF_A47" , 165},
            	{"required_OF_A48" , 166},
            	{"already_S_OF_A48" , 167},
            	{"S_OF_A48" , 168},
            	{"relevant_evt_OF_A48" , 169},
            	{"required_OF_A49" , 170},
            	{"already_S_OF_A49" , 171},
            	{"S_OF_A49" , 172},
            	{"relevant_evt_OF_A49" , 173},
            	{"required_OF_A5" , 174},
            	{"already_S_OF_A5" , 175},
            	{"S_OF_A5" , 176},
            	{"relevant_evt_OF_A5" , 177},
            	{"failF_OF_A5" , 178},
            	{"required_OF_A50" , 179},
            	{"already_S_OF_A50" , 180},
            	{"S_OF_A50" , 181},
            	{"relevant_evt_OF_A50" , 182},
            	{"required_OF_A51" , 183},
            	{"already_S_OF_A51" , 184},
            	{"S_OF_A51" , 185},
            	{"relevant_evt_OF_A51" , 186},
            	{"required_OF_A52" , 187},
            	{"already_S_OF_A52" , 188},
            	{"S_OF_A52" , 189},
            	{"relevant_evt_OF_A52" , 190},
            	{"required_OF_A53" , 191},
            	{"already_S_OF_A53" , 192},
            	{"S_OF_A53" , 193},
            	{"relevant_evt_OF_A53" , 194},
            	{"required_OF_A54" , 195},
            	{"already_S_OF_A54" , 196},
            	{"S_OF_A54" , 197},
            	{"relevant_evt_OF_A54" , 198},
            	{"failF_OF_A54" , 199},
            	{"required_OF_A55" , 200},
            	{"already_S_OF_A55" , 201},
            	{"S_OF_A55" , 202},
            	{"relevant_evt_OF_A55" , 203},
            	{"required_OF_A56" , 204},
            	{"already_S_OF_A56" , 205},
            	{"S_OF_A56" , 206},
            	{"relevant_evt_OF_A56" , 207},
            	{"failF_OF_A56" , 208},
            	{"required_OF_A57" , 209},
            	{"already_S_OF_A57" , 210},
            	{"S_OF_A57" , 211},
            	{"relevant_evt_OF_A57" , 212},
            	{"failF_OF_A57" , 213},
            	{"required_OF_A58" , 214},
            	{"already_S_OF_A58" , 215},
            	{"S_OF_A58" , 216},
            	{"relevant_evt_OF_A58" , 217},
            	{"required_OF_A59" , 218},
            	{"already_S_OF_A59" , 219},
            	{"S_OF_A59" , 220},
            	{"relevant_evt_OF_A59" , 221},
            	{"required_OF_A6" , 222},
            	{"already_S_OF_A6" , 223},
            	{"S_OF_A6" , 224},
            	{"relevant_evt_OF_A6" , 225},
            	{"required_OF_A60" , 226},
            	{"already_S_OF_A60" , 227},
            	{"S_OF_A60" , 228},
            	{"relevant_evt_OF_A60" , 229},
            	{"required_OF_A61" , 230},
            	{"already_S_OF_A61" , 231},
            	{"S_OF_A61" , 232},
            	{"relevant_evt_OF_A61" , 233},
            	{"required_OF_A62" , 234},
            	{"already_S_OF_A62" , 235},
            	{"S_OF_A62" , 236},
            	{"relevant_evt_OF_A62" , 237},
            	{"failF_OF_A62" , 238},
            	{"required_OF_A63" , 239},
            	{"already_S_OF_A63" , 240},
            	{"S_OF_A63" , 241},
            	{"relevant_evt_OF_A63" , 242},
            	{"failF_OF_A63" , 243},
            	{"required_OF_A64" , 244},
            	{"already_S_OF_A64" , 245},
            	{"S_OF_A64" , 246},
            	{"relevant_evt_OF_A64" , 247},
            	{"failF_OF_A64" , 248},
            	{"required_OF_A65" , 249},
            	{"already_S_OF_A65" , 250},
            	{"S_OF_A65" , 251},
            	{"relevant_evt_OF_A65" , 252},
            	{"required_OF_A67" , 253},
            	{"already_S_OF_A67" , 254},
            	{"S_OF_A67" , 255},
            	{"relevant_evt_OF_A67" , 256},
            	{"failF_OF_A67" , 257},
            	{"required_OF_A68" , 258},
            	{"already_S_OF_A68" , 259},
            	{"S_OF_A68" , 260},
            	{"relevant_evt_OF_A68" , 261},
            	{"failF_OF_A68" , 262},
            	{"required_OF_A69" , 263},
            	{"already_S_OF_A69" , 264},
            	{"S_OF_A69" , 265},
            	{"relevant_evt_OF_A69" , 266},
            	{"failF_OF_A69" , 267},
            	{"required_OF_A70" , 268},
            	{"already_S_OF_A70" , 269},
            	{"S_OF_A70" , 270},
            	{"relevant_evt_OF_A70" , 271},
            	{"required_OF_A72" , 272},
            	{"already_S_OF_A72" , 273},
            	{"S_OF_A72" , 274},
            	{"relevant_evt_OF_A72" , 275},
            	{"required_OF_A73" , 276},
            	{"already_S_OF_A73" , 277},
            	{"S_OF_A73" , 278},
            	{"relevant_evt_OF_A73" , 279},
            	{"failF_OF_A73" , 280},
            	{"failS_OF_A73" , 281},
            	{"required_OF_A74" , 282},
            	{"already_S_OF_A74" , 283},
            	{"S_OF_A74" , 284},
            	{"relevant_evt_OF_A74" , 285},
            	{"failF_OF_A74" , 286},
            	{"failS_OF_A74" , 287},
            	{"required_OF_A75" , 288},
            	{"already_S_OF_A75" , 289},
            	{"S_OF_A75" , 290},
            	{"relevant_evt_OF_A75" , 291},
            	{"failF_OF_A75" , 292},
            	{"failS_OF_A75" , 293},
            	{"required_OF_A76" , 294},
            	{"already_S_OF_A76" , 295},
            	{"S_OF_A76" , 296},
            	{"relevant_evt_OF_A76" , 297},
            	{"required_OF_A78" , 298},
            	{"already_S_OF_A78" , 299},
            	{"S_OF_A78" , 300},
            	{"relevant_evt_OF_A78" , 301},
            	{"failF_OF_A78" , 302},
            	{"failS_OF_A78" , 303},
            	{"required_OF_A79" , 304},
            	{"already_S_OF_A79" , 305},
            	{"S_OF_A79" , 306},
            	{"relevant_evt_OF_A79" , 307},
            	{"failF_OF_A79" , 308},
            	{"failS_OF_A79" , 309},
            	{"required_OF_A8" , 310},
            	{"already_S_OF_A8" , 311},
            	{"S_OF_A8" , 312},
            	{"relevant_evt_OF_A8" , 313},
            	{"failF_OF_A8" , 314},
            	{"required_OF_A80" , 315},
            	{"already_S_OF_A80" , 316},
            	{"S_OF_A80" , 317},
            	{"relevant_evt_OF_A80" , 318},
            	{"failF_OF_A80" , 319},
            	{"failS_OF_A80" , 320},
            	{"required_OF_A81" , 321},
            	{"already_S_OF_A81" , 322},
            	{"S_OF_A81" , 323},
            	{"relevant_evt_OF_A81" , 324},
            	{"required_OF_A83" , 325},
            	{"already_S_OF_A83" , 326},
            	{"S_OF_A83" , 327},
            	{"relevant_evt_OF_A83" , 328},
            	{"required_OF_A84" , 329},
            	{"already_S_OF_A84" , 330},
            	{"S_OF_A84" , 331},
            	{"relevant_evt_OF_A84" , 332},
            	{"failF_OF_A84" , 333},
            	{"required_OF_A85" , 334},
            	{"already_S_OF_A85" , 335},
            	{"S_OF_A85" , 336},
            	{"relevant_evt_OF_A85" , 337},
            	{"failF_OF_A85" , 338},
            	{"required_OF_A86" , 339},
            	{"already_S_OF_A86" , 340},
            	{"S_OF_A86" , 341},
            	{"relevant_evt_OF_A86" , 342},
            	{"failF_OF_A86" , 343},
            	{"required_OF_A87" , 344},
            	{"already_S_OF_A87" , 345},
            	{"S_OF_A87" , 346},
            	{"relevant_evt_OF_A87" , 347},
            	{"required_OF_A89" , 348},
            	{"already_S_OF_A89" , 349},
            	{"S_OF_A89" , 350},
            	{"relevant_evt_OF_A89" , 351},
            	{"failF_OF_A89" , 352},
            	{"required_OF_A9" , 353},
            	{"already_S_OF_A9" , 354},
            	{"S_OF_A9" , 355},
            	{"relevant_evt_OF_A9" , 356},
            	{"required_OF_A90" , 357},
            	{"already_S_OF_A90" , 358},
            	{"S_OF_A90" , 359},
            	{"relevant_evt_OF_A90" , 360},
            	{"failF_OF_A90" , 361},
            	{"required_OF_A91" , 362},
            	{"already_S_OF_A91" , 363},
            	{"S_OF_A91" , 364},
            	{"relevant_evt_OF_A91" , 365},
            	{"failF_OF_A91" , 366},
            	{"required_OF_A92" , 367},
            	{"already_S_OF_A92" , 368},
            	{"S_OF_A92" , 369},
            	{"relevant_evt_OF_A92" , 370},
            	{"required_OF_A94" , 371},
            	{"already_S_OF_A94" , 372},
            	{"S_OF_A94" , 373},
            	{"relevant_evt_OF_A94" , 374},
            	{"required_OF_A95" , 375},
            	{"already_S_OF_A95" , 376},
            	{"S_OF_A95" , 377},
            	{"relevant_evt_OF_A95" , 378},
            	{"failF_OF_A95" , 379},
            	{"required_OF_A96" , 380},
            	{"already_S_OF_A96" , 381},
            	{"S_OF_A96" , 382},
            	{"relevant_evt_OF_A96" , 383},
            	{"failF_OF_A96" , 384},
            	{"required_OF_A97" , 385},
            	{"already_S_OF_A97" , 386},
            	{"S_OF_A97" , 387},
            	{"relevant_evt_OF_A97" , 388},
            	{"failF_OF_A97" , 389},
            	{"required_OF_A98" , 390},
            	{"already_S_OF_A98" , 391},
            	{"S_OF_A98" , 392},
            	{"relevant_evt_OF_A98" , 393},
            	{"required_OF_UE_1" , 394},
            	{"already_S_OF_UE_1" , 395},
            	{"S_OF_UE_1" , 396},
            	{"relevant_evt_OF_UE_1" , 397},
            	{"required_OF_f_A36" , 398},
            	{"already_S_OF_f_A36" , 399},
            	{"S_OF_f_A36" , 400},
            	{"relevant_evt_OF_f_A36" , 401},
            	{"failF_OF_f_A36" , 402},
            	{"required_OF_f_A37" , 403},
            	{"already_S_OF_f_A37" , 404},
            	{"S_OF_f_A37" , 405},
            	{"relevant_evt_OF_f_A37" , 406},
            	{"failF_OF_f_A37" , 407},
            	{"required_OF_f_A38" , 408},
            	{"already_S_OF_f_A38" , 409},
            	{"S_OF_f_A38" , 410},
            	{"relevant_evt_OF_f_A38" , 411},
            	{"failF_OF_f_A38" , 412},
            	{"required_OF_f_A39" , 413},
            	{"already_S_OF_f_A39" , 414},
            	{"S_OF_f_A39" , 415},
            	{"relevant_evt_OF_f_A39" , 416},
            	{"failF_OF_f_A39" , 417},
            	{"required_OF_f_A40" , 418},
            	{"already_S_OF_f_A40" , 419},
            	{"S_OF_f_A40" , 420},
            	{"relevant_evt_OF_f_A40" , 421},
            	{"failF_OF_f_A40" , 422},
            	{"required_OF_f_A42" , 423},
            	{"already_S_OF_f_A42" , 424},
            	{"S_OF_f_A42" , 425},
            	{"relevant_evt_OF_f_A42" , 426},
            	{"failF_OF_f_A42" , 427},
            	{"required_OF_f_A43" , 428},
            	{"already_S_OF_f_A43" , 429},
            	{"S_OF_f_A43" , 430},
            	{"relevant_evt_OF_f_A43" , 431},
            	{"failF_OF_f_A43" , 432},
            	{"required_OF_f_A45" , 433},
            	{"already_S_OF_f_A45" , 434},
            	{"S_OF_f_A45" , 435},
            	{"relevant_evt_OF_f_A45" , 436},
            	{"failF_OF_f_A45" , 437},
            	{"required_OF_f_A46" , 438},
            	{"already_S_OF_f_A46" , 439},
            	{"S_OF_f_A46" , 440},
            	{"relevant_evt_OF_f_A46" , 441},
            	{"failF_OF_f_A46" , 442},
            	{"required_OF_f_A47" , 443},
            	{"already_S_OF_f_A47" , 444},
            	{"S_OF_f_A47" , 445},
            	{"relevant_evt_OF_f_A47" , 446},
            	{"failF_OF_f_A47" , 447},
            	{"required_OF_f_A48" , 448},
            	{"already_S_OF_f_A48" , 449},
            	{"S_OF_f_A48" , 450},
            	{"relevant_evt_OF_f_A48" , 451},
            	{"failF_OF_f_A48" , 452},
            	{"required_OF_f_A49" , 453},
            	{"already_S_OF_f_A49" , 454},
            	{"S_OF_f_A49" , 455},
            	{"relevant_evt_OF_f_A49" , 456},
            	{"failF_OF_f_A49" , 457},
            	{"required_OF_f_A50" , 458},
            	{"already_S_OF_f_A50" , 459},
            	{"S_OF_f_A50" , 460},
            	{"relevant_evt_OF_f_A50" , 461},
            	{"failF_OF_f_A50" , 462},
            	{"required_OF_f_A51" , 463},
            	{"already_S_OF_f_A51" , 464},
            	{"S_OF_f_A51" , 465},
            	{"relevant_evt_OF_f_A51" , 466},
            	{"failF_OF_f_A51" , 467},
            	{"required_OF_f_A52" , 468},
            	{"already_S_OF_f_A52" , 469},
            	{"S_OF_f_A52" , 470},
            	{"relevant_evt_OF_f_A52" , 471},
            	{"failF_OF_f_A52" , 472},
            	{"required_OF_f_A53" , 473},
            	{"already_S_OF_f_A53" , 474},
            	{"S_OF_f_A53" , 475},
            	{"relevant_evt_OF_f_A53" , 476},
            	{"failF_OF_f_A53" , 477},
            	{"required_OF_i_A36" , 478},
            	{"already_S_OF_i_A36" , 479},
            	{"S_OF_i_A36" , 480},
            	{"relevant_evt_OF_i_A36" , 481},
            	{"failI_OF_i_A36" , 482},
            	{"to_be_fired_OF_i_A36" , 483},
            	{"already_standby_OF_i_A36" , 484},
            	{"already_required_OF_i_A36" , 485},
            	{"required_OF_i_A37" , 486},
            	{"already_S_OF_i_A37" , 487},
            	{"S_OF_i_A37" , 488},
            	{"relevant_evt_OF_i_A37" , 489},
            	{"failI_OF_i_A37" , 490},
            	{"to_be_fired_OF_i_A37" , 491},
            	{"already_standby_OF_i_A37" , 492},
            	{"already_required_OF_i_A37" , 493},
            	{"required_OF_i_A38" , 494},
            	{"already_S_OF_i_A38" , 495},
            	{"S_OF_i_A38" , 496},
            	{"relevant_evt_OF_i_A38" , 497},
            	{"failI_OF_i_A38" , 498},
            	{"to_be_fired_OF_i_A38" , 499},
            	{"already_standby_OF_i_A38" , 500},
            	{"already_required_OF_i_A38" , 501},
            	{"required_OF_i_A39" , 502},
            	{"already_S_OF_i_A39" , 503},
            	{"S_OF_i_A39" , 504},
            	{"relevant_evt_OF_i_A39" , 505},
            	{"failI_OF_i_A39" , 506},
            	{"to_be_fired_OF_i_A39" , 507},
            	{"already_standby_OF_i_A39" , 508},
            	{"already_required_OF_i_A39" , 509},
            	{"required_OF_i_A40" , 510},
            	{"already_S_OF_i_A40" , 511},
            	{"S_OF_i_A40" , 512},
            	{"relevant_evt_OF_i_A40" , 513},
            	{"failI_OF_i_A40" , 514},
            	{"to_be_fired_OF_i_A40" , 515},
            	{"already_standby_OF_i_A40" , 516},
            	{"already_required_OF_i_A40" , 517},
            	{"required_OF_i_A42" , 518},
            	{"already_S_OF_i_A42" , 519},
            	{"S_OF_i_A42" , 520},
            	{"relevant_evt_OF_i_A42" , 521},
            	{"failI_OF_i_A42" , 522},
            	{"to_be_fired_OF_i_A42" , 523},
            	{"already_standby_OF_i_A42" , 524},
            	{"already_required_OF_i_A42" , 525},
            	{"required_OF_i_A43" , 526},
            	{"already_S_OF_i_A43" , 527},
            	{"S_OF_i_A43" , 528},
            	{"relevant_evt_OF_i_A43" , 529},
            	{"failI_OF_i_A43" , 530},
            	{"to_be_fired_OF_i_A43" , 531},
            	{"already_standby_OF_i_A43" , 532},
            	{"already_required_OF_i_A43" , 533},
            	{"required_OF_i_A45" , 534},
            	{"already_S_OF_i_A45" , 535},
            	{"S_OF_i_A45" , 536},
            	{"relevant_evt_OF_i_A45" , 537},
            	{"failI_OF_i_A45" , 538},
            	{"to_be_fired_OF_i_A45" , 539},
            	{"already_standby_OF_i_A45" , 540},
            	{"already_required_OF_i_A45" , 541},
            	{"required_OF_i_A46" , 542},
            	{"already_S_OF_i_A46" , 543},
            	{"S_OF_i_A46" , 544},
            	{"relevant_evt_OF_i_A46" , 545},
            	{"failI_OF_i_A46" , 546},
            	{"to_be_fired_OF_i_A46" , 547},
            	{"already_standby_OF_i_A46" , 548},
            	{"already_required_OF_i_A46" , 549},
            	{"required_OF_i_A47" , 550},
            	{"already_S_OF_i_A47" , 551},
            	{"S_OF_i_A47" , 552},
            	{"relevant_evt_OF_i_A47" , 553},
            	{"failI_OF_i_A47" , 554},
            	{"to_be_fired_OF_i_A47" , 555},
            	{"already_standby_OF_i_A47" , 556},
            	{"already_required_OF_i_A47" , 557},
            	{"required_OF_i_A48" , 558},
            	{"already_S_OF_i_A48" , 559},
            	{"S_OF_i_A48" , 560},
            	{"relevant_evt_OF_i_A48" , 561},
            	{"failI_OF_i_A48" , 562},
            	{"to_be_fired_OF_i_A48" , 563},
            	{"already_standby_OF_i_A48" , 564},
            	{"already_required_OF_i_A48" , 565},
            	{"required_OF_i_A49" , 566},
            	{"already_S_OF_i_A49" , 567},
            	{"S_OF_i_A49" , 568},
            	{"relevant_evt_OF_i_A49" , 569},
            	{"failI_OF_i_A49" , 570},
            	{"to_be_fired_OF_i_A49" , 571},
            	{"already_standby_OF_i_A49" , 572},
            	{"already_required_OF_i_A49" , 573},
            	{"required_OF_i_A50" , 574},
            	{"already_S_OF_i_A50" , 575},
            	{"S_OF_i_A50" , 576},
            	{"relevant_evt_OF_i_A50" , 577},
            	{"failI_OF_i_A50" , 578},
            	{"to_be_fired_OF_i_A50" , 579},
            	{"already_standby_OF_i_A50" , 580},
            	{"already_required_OF_i_A50" , 581},
            	{"required_OF_i_A51" , 582},
            	{"already_S_OF_i_A51" , 583},
            	{"S_OF_i_A51" , 584},
            	{"relevant_evt_OF_i_A51" , 585},
            	{"failI_OF_i_A51" , 586},
            	{"to_be_fired_OF_i_A51" , 587},
            	{"already_standby_OF_i_A51" , 588},
            	{"already_required_OF_i_A51" , 589},
            	{"required_OF_i_A52" , 590},
            	{"already_S_OF_i_A52" , 591},
            	{"S_OF_i_A52" , 592},
            	{"relevant_evt_OF_i_A52" , 593},
            	{"failI_OF_i_A52" , 594},
            	{"to_be_fired_OF_i_A52" , 595},
            	{"already_standby_OF_i_A52" , 596},
            	{"already_required_OF_i_A52" , 597},
            	{"required_OF_i_A53" , 598},
            	{"already_S_OF_i_A53" , 599},
            	{"S_OF_i_A53" , 600},
            	{"relevant_evt_OF_i_A53" , 601},
            	{"failI_OF_i_A53" , 602},
            	{"to_be_fired_OF_i_A53" , 603},
            	{"already_standby_OF_i_A53" , 604},
            	{"already_required_OF_i_A53" , 605}},

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
                    606 ,
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
            bool REINITIALISATION_OF_required_OF_A100 ;
            bool REINITIALISATION_OF_S_OF_A100 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A100 ;
            bool REINITIALISATION_OF_required_OF_A101 ;
            bool REINITIALISATION_OF_S_OF_A101 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A101 ;
            bool REINITIALISATION_OF_required_OF_A102 ;
            bool REINITIALISATION_OF_S_OF_A102 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A102 ;
            bool REINITIALISATION_OF_required_OF_A103 ;
            bool REINITIALISATION_OF_S_OF_A103 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A103 ;
            bool REINITIALISATION_OF_required_OF_A105 ;
            bool REINITIALISATION_OF_S_OF_A105 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A105 ;
            bool REINITIALISATION_OF_required_OF_A11 ;
            bool REINITIALISATION_OF_S_OF_A11 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A11 ;
            bool REINITIALISATION_OF_required_OF_A12 ;
            bool REINITIALISATION_OF_S_OF_A12 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A12 ;
            bool REINITIALISATION_OF_required_OF_A14 ;
            bool REINITIALISATION_OF_S_OF_A14 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A14 ;
            bool REINITIALISATION_OF_required_OF_A15 ;
            bool REINITIALISATION_OF_S_OF_A15 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A15 ;
            bool REINITIALISATION_OF_required_OF_A17 ;
            bool REINITIALISATION_OF_S_OF_A17 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A17 ;
            bool REINITIALISATION_OF_required_OF_A18 ;
            bool REINITIALISATION_OF_S_OF_A18 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A18 ;
            bool REINITIALISATION_OF_required_OF_A2 ;
            bool REINITIALISATION_OF_S_OF_A2 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A2 ;
            bool REINITIALISATION_OF_required_OF_A20 ;
            bool REINITIALISATION_OF_S_OF_A20 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A20 ;
            bool REINITIALISATION_OF_required_OF_A21 ;
            bool REINITIALISATION_OF_S_OF_A21 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A21 ;
            bool REINITIALISATION_OF_required_OF_A23 ;
            bool REINITIALISATION_OF_S_OF_A23 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A23 ;
            bool REINITIALISATION_OF_required_OF_A24 ;
            bool REINITIALISATION_OF_S_OF_A24 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A24 ;
            bool REINITIALISATION_OF_required_OF_A26 ;
            bool REINITIALISATION_OF_S_OF_A26 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A26 ;
            bool REINITIALISATION_OF_required_OF_A27 ;
            bool REINITIALISATION_OF_S_OF_A27 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A27 ;
            bool REINITIALISATION_OF_required_OF_A29 ;
            bool REINITIALISATION_OF_S_OF_A29 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A29 ;
            bool REINITIALISATION_OF_required_OF_A3 ;
            bool REINITIALISATION_OF_S_OF_A3 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A3 ;
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
            bool REINITIALISATION_OF_required_OF_A38 ;
            bool REINITIALISATION_OF_S_OF_A38 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A38 ;
            bool REINITIALISATION_OF_required_OF_A39 ;
            bool REINITIALISATION_OF_S_OF_A39 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A39 ;
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
            bool REINITIALISATION_OF_required_OF_A6 ;
            bool REINITIALISATION_OF_S_OF_A6 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A6 ;
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
            bool REINITIALISATION_OF_required_OF_A67 ;
            bool REINITIALISATION_OF_S_OF_A67 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A67 ;
            bool REINITIALISATION_OF_required_OF_A68 ;
            bool REINITIALISATION_OF_S_OF_A68 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A68 ;
            bool REINITIALISATION_OF_required_OF_A69 ;
            bool REINITIALISATION_OF_S_OF_A69 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A69 ;
            bool REINITIALISATION_OF_required_OF_A70 ;
            bool REINITIALISATION_OF_S_OF_A70 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A70 ;
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
            bool REINITIALISATION_OF_required_OF_A78 ;
            bool REINITIALISATION_OF_S_OF_A78 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A78 ;
            bool REINITIALISATION_OF_required_OF_A79 ;
            bool REINITIALISATION_OF_S_OF_A79 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A79 ;
            bool REINITIALISATION_OF_required_OF_A8 ;
            bool REINITIALISATION_OF_S_OF_A8 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A8 ;
            bool REINITIALISATION_OF_required_OF_A80 ;
            bool REINITIALISATION_OF_S_OF_A80 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A80 ;
            bool REINITIALISATION_OF_required_OF_A81 ;
            bool REINITIALISATION_OF_S_OF_A81 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A81 ;
            bool REINITIALISATION_OF_required_OF_A83 ;
            bool REINITIALISATION_OF_S_OF_A83 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A83 ;
            bool REINITIALISATION_OF_required_OF_A84 ;
            bool REINITIALISATION_OF_S_OF_A84 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A84 ;
            bool REINITIALISATION_OF_required_OF_A85 ;
            bool REINITIALISATION_OF_S_OF_A85 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A85 ;
            bool REINITIALISATION_OF_required_OF_A86 ;
            bool REINITIALISATION_OF_S_OF_A86 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A86 ;
            bool REINITIALISATION_OF_required_OF_A87 ;
            bool REINITIALISATION_OF_S_OF_A87 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A87 ;
            bool REINITIALISATION_OF_required_OF_A89 ;
            bool REINITIALISATION_OF_S_OF_A89 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A89 ;
            bool REINITIALISATION_OF_required_OF_A9 ;
            bool REINITIALISATION_OF_S_OF_A9 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A9 ;
            bool REINITIALISATION_OF_required_OF_A90 ;
            bool REINITIALISATION_OF_S_OF_A90 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A90 ;
            bool REINITIALISATION_OF_required_OF_A91 ;
            bool REINITIALISATION_OF_S_OF_A91 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A91 ;
            bool REINITIALISATION_OF_required_OF_A92 ;
            bool REINITIALISATION_OF_S_OF_A92 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A92 ;
            bool REINITIALISATION_OF_required_OF_A94 ;
            bool REINITIALISATION_OF_S_OF_A94 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A94 ;
            bool REINITIALISATION_OF_required_OF_A95 ;
            bool REINITIALISATION_OF_S_OF_A95 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A95 ;
            bool REINITIALISATION_OF_required_OF_A96 ;
            bool REINITIALISATION_OF_S_OF_A96 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A96 ;
            bool REINITIALISATION_OF_required_OF_A97 ;
            bool REINITIALISATION_OF_S_OF_A97 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A97 ;
            bool REINITIALISATION_OF_required_OF_A98 ;
            bool REINITIALISATION_OF_S_OF_A98 ;
            bool REINITIALISATION_OF_relevant_evt_OF_A98 ;
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
			bool const force_relevant_events_OF_A20 = false;
			double const lambda_OF_A8 = 0;
			double const lambda_OF_f_A50 = 0;
			std::string const calculate_required_OF_f_A46 = "fn_fathers_and_trig";
			std::string const trigger_kind_OF_t_dep_12 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A101 = false;
			std::string const calculate_required_OF_i_A50 = "fn_fathers_and_trig";
			double const mu_OF_f_A36 = 0.1;
			bool const force_relevant_events_OF_i_A38 = false;
			double const mu_OF_A68 = 0.1;
			double const standby_lambda_OF_A73 = 0;
			bool const force_relevant_events_OF_A97 = false;
			std::string const calculate_required_OF_f_A37 = "fn_fathers_and_trig";
			double const lambda_OF_A73 = 9.9e-06;
			std::string const when_to_check_OF_i_A42 = "not_req_to_req";
			bool const failF_FROZEN_OF_A11 = false;
			bool const force_relevant_events_OF_A70 = false;
			bool const failF_FROZEN_OF_A14 = false;
			double const lambda_OF_A17 = 0;
			double const mu_OF_f_A46 = 0.1;
			std::string const calculate_required_OF_A40 = "fn_fathers_and_trig";
			double const lambda_OF_A54 = 1e-07;
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
			bool const repairable_system_OF_OPTIONS = true;
			double const mu_OF_f_A37 = 0.1;
			bool const failF_FROZEN_OF_A85 = false;
			std::string const calculate_required_OF_A75 = "fn_fathers_and_trig";
			double const mu_OF_f_A42 = 0.1;
			bool const failF_FROZEN_OF_A101 = false;
			double const lambda_OF_A33 = 2e-07;
			std::string const calculate_required_OF_A50 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A48 = false;
			double const lambda_OF_A95 = 9.9e-06;
			bool const force_relevant_events_OF_A96 = false;
			double const mu_OF_A29 = 0.1;
			bool const failF_FROZEN_OF_A57 = false;
			bool const force_relevant_events_OF_A74 = false;
			bool const failI_FROZEN_OF_i_A46 = false;
			bool const failF_FROZEN_OF_A97 = false;
			bool const force_relevant_events_OF_A5 = false;
			std::string const trigger_kind_OF_t_seq_4 = "equal_to_S_trig";
			std::string const calculate_required_OF_i_A51 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_A73 = false;
			std::string const calculate_required_OF_A69 = "fn_fathers_and_trig";
			bool const failS_FROZEN_OF_A80 = false;
			bool const failS_FROZEN_OF_A74 = false;
			double const lambda_OF_A89 = 9.9e-07;
			bool const force_relevant_events_OF_A64 = false;
			double const standby_lambda_OF_A78 = 0;
			double const lambda_OF_A85 = 1e-07;
			bool const force_relevant_events_OF_i_A39 = false;
			bool const force_relevant_events_OF_i_A36 = false;
			bool const force_relevant_events_OF_f_A40 = false;
			bool const force_relevant_events_OF_A56 = false;
			std::string const calculate_required_OF_i_A37 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_f_A51 = false;
			bool const force_relevant_events_OF_A26 = false;
			bool const force_relevant_events_OF_A37 = false;
			bool const force_relevant_events_OF_i_A45 = false;
			bool const force_relevant_events_OF_i_A48 = false;
			double const mu_OF_i_A51 = 0.1;
			double const mu_OF_A86 = 0.1;
			double const lambda_OF_A62 = 9.9e-05;
			std::string const calculate_required_OF_A102 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A33 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A63 = "fn_fathers_and_trig";
			double const lambda_OF_A97 = 1e-06;
			std::string const trigger_kind_OF_t_dep_9 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A52 = false;
			std::string const calculate_required_OF_A53 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A59 = "fn_fathers_and_trig";
			std::string const when_to_check_OF_i_A49 = "not_req_to_req";
			double const mu_OF_i_A37 = 0.1;
			bool const force_relevant_events_OF_A43 = false;
			bool const force_relevant_events_OF_A51 = false;
			double const lambda_OF_f_A45 = 0;
			bool const failF_FROZEN_OF_A5 = false;
			bool const force_relevant_events_OF_A94 = false;
			std::string const calculate_required_OF_f_A52 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A39 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A21 = "fn_fathers_and_trig";
			double const mu_OF_A33 = 0.1;
			std::string const calculate_required_OF_A62 = "equal_to_S_trig";
			bool const force_relevant_events_OF_f_A47 = false;
			bool const failF_FROZEN_OF_A64 = false;
			double const mu_OF_A63 = 0.1;
			std::string const calculate_required_OF_f_A43 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_f_A36 = false;
			std::string const calculate_required_OF_A95 = "equal_to_S_trig";
			bool const failF_FROZEN_OF_A78 = false;
			bool const failF_FROZEN_OF_f_A40 = false;
			bool const failF_FROZEN_OF_f_A48 = false;
			bool const failF_FROZEN_OF_A56 = false;
			bool const failF_FROZEN_OF_f_A51 = false;
			bool const failF_FROZEN_OF_A26 = false;
			std::string const calculate_required_OF_A96 = "fn_fathers_and_trig";
			double const lambda_OF_A67 = 9.9e-06;
			std::string const calculate_required_OF_A80 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A74 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A1 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A60 = false;
			bool const force_relevant_events_OF_A61 = false;
			double const lambda_OF_A96 = 1e-07;
			double const lambda_OF_A74 = 1e-07;
			std::string const calculate_required_OF_A41 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_f_A46 = false;
			std::string const trigger_kind_OF_t_dep_15 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_i_A50 = false;
			double const mu_OF_f_A43 = 0.1;
			double const lambda_OF_A84 = 9.9e-06;
			std::string const calculate_required_OF_f_A49 = "fn_fathers_and_trig";
			double const gamma_OF_i_A42 = 1;
			double const mu_OF_A1 = 0.1;
			bool const force_relevant_events_OF_f_A37 = false;
			std::string const trigger_kind_OF_t_seq_2 = "equal_to_S_trig";
			std::string const when_to_check_OF_i_A43 = "not_req_to_req";
			double const mu_OF_A23 = 0.1;
			bool const force_relevant_events_OF_A40 = false;
			std::string const calculate_required_OF_A37 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_i_A40 = false;
			std::string const calculate_required_OF_A100 = "equal_to_S_trig";
			double const mu_OF_A79 = 0.1;
			bool const force_relevant_events_OF_f_A42 = false;
			std::string const when_to_check_OF_i_A52 = "not_req_to_req";
			double const lambda_OF_A56 = 1e-07;
			double const mu_OF_f_A49 = 0.1;
			std::string const calculate_required_OF_UE_1 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_f_A36 = false;
			double const lambda_OF_A78 = 9.9e-07;
			std::string const calculate_required_OF_A38 = "fn_fathers_and_trig";
			bool const failI_FROZEN_OF_i_A47 = false;
			bool const failI_FROZEN_OF_i_A49 = false;
			double const mu_OF_A62 = 0.1;
			bool const force_relevant_events_OF_A30 = false;
			std::string const calculate_required_OF_A43 = "fn_fathers_and_trig";
			double const standby_lambda_OF_A11 = 0;
			std::string const calculate_required_OF_A51 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A75 = false;
			std::string const calculate_required_OF_A8 = "fn_fathers_and_trig";
			double const standby_lambda_OF_A14 = 0;
			bool const force_relevant_events_OF_A50 = false;
			std::string const calculate_required_OF_A24 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_f_A47 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_A84 = false;
			bool const failF_FROZEN_OF_A90 = false;
			std::string const calculate_required_OF_A9 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_f_A37 = false;
			std::string const when_to_check_OF_i_A46 = "not_req_to_req";
			std::string const when_to_check_OF_i_A36 = "not_req_to_req";
			std::string const calculate_required_OF_A67 = "equal_to_S_trig";
			double const lambda_OF_A29 = 2e-07;
			double const mu_OF_f_A50 = 0.1;
			bool const force_relevant_events_OF_i_A51 = false;
			std::string const calculate_required_OF_A68 = "fn_fathers_and_trig";
			bool const failI_FROZEN_OF_i_A38 = false;
			bool const force_relevant_events_OF_A86 = false;
			std::string const calculate_required_OF_f_A39 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_f_A38 = "fn_fathers_and_trig";
			std::string const when_to_check_OF_i_A45 = "not_req_to_req";
			std::string const when_to_check_OF_i_A48 = "not_req_to_req";
			std::string const calculate_required_OF_A34 = "fn_fathers_and_trig";
			std::string const trigger_kind_OF_t_dep_0 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A3 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A103 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A81 = false;
			std::string const calculate_required_OF_i_A42 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A55 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_i_A37 = false;
			double const mu_OF_A17 = 0.1;
			bool const failF_FROZEN_OF_A75 = false;
			double const lambda_OF_f_A48 = 0;
			std::string const calculate_required_OF_A12 = "fn_fathers_and_trig";
			double const mu_OF_A100 = 0.1;
			double const mu_OF_f_A39 = 0.1;
			bool const force_relevant_events_OF_A102 = false;
			double const mu_OF_f_A38 = 0.1;
			bool const failI_FROZEN_OF_i_A43 = false;
			bool const force_relevant_events_OF_A33 = false;
			std::string const calculate_required_OF_A46 = "fn_fathers_and_trig";
			double const gamma_OF_i_A49 = 1;
			bool const force_relevant_events_OF_A63 = false;
			bool const force_relevant_events_OF_A53 = false;
			bool const force_relevant_events_OF_A59 = false;
			std::string const calculate_required_OF_f_A42 = "fn_fathers_and_trig";
			double const mu_OF_i_A42 = 0.1;
			std::string const calculate_required_OF_A42 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_f_A52 = false;
			std::string const calculate_required_OF_A92 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A29 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A21 = false;
			double const mu_OF_A91 = 0.1;
			bool const failF_FROZEN_OF_A69 = false;
			std::string const trigger_kind_OF_t_seq_3 = "equal_to_S_trig";
			bool const failF_FROZEN_OF_A20 = false;
			std::string const calculate_required_OF_i_A53 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A30 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A6 = false;
			bool const force_relevant_events_OF_A36 = false;
			double const standby_lambda_OF_A74 = 0;
			bool const force_relevant_events_OF_f_A43 = false;
			double const lambda_OF_A75 = 1e-06;
			std::string const calculate_required_OF_A89 = "equal_to_S_trig";
			bool const force_relevant_events_OF_A80 = false;
			bool const force_relevant_events_OF_A1 = false;
			bool const failF_FROZEN_OF_A102 = false;
			bool const failI_FROZEN_OF_i_A39 = false;
			bool const failI_FROZEN_OF_i_A36 = false;
			bool const failF_FROZEN_OF_A33 = false;
			int const K_OF_A2 = 3;
			bool const force_relevant_events_OF_A41 = false;
			double const mu_OF_i_A53 = 0.1;
			bool const failF_FROZEN_OF_A63 = false;
			bool const force_relevant_events_OF_A79 = false;
			bool const failI_FROZEN_OF_i_A45 = false;
			bool const failI_FROZEN_OF_i_A48 = false;
			bool const force_relevant_events_OF_f_A49 = false;
			std::string const calculate_required_OF_A86 = "fn_fathers_and_trig";
			std::string const when_to_check_OF_i_A40 = "not_req_to_req";
			double const gamma_OF_i_A43 = 1;
			double const mu_OF_A54 = 0.1;
			double const lambda_OF_A86 = 1e-06;
			std::string const calculate_required_OF_f_A45 = "fn_fathers_and_trig";
			double const lambda_OF_f_A53 = 0;
			bool const failF_FROZEN_OF_f_A52 = false;
			double const gamma_OF_i_A52 = 1;
			std::string const calculate_required_OF_A81 = "fn_fathers_and_trig";
			bool const failS_FROZEN_OF_A79 = false;
			bool const force_relevant_events_OF_A87 = false;
			std::string const calculate_required_OF_A73 = "equal_to_S_trig";
			double const mu_OF_f_A45 = 0.1;
			double const lambda_OF_A102 = 1e-06;
			bool const force_relevant_events_OF_A38 = false;
			bool const failF_FROZEN_OF_A96 = false;
			bool const failF_FROZEN_OF_A80 = false;
			bool const failF_FROZEN_OF_A74 = false;
			bool const failF_FROZEN_OF_A1 = false;
			double const lambda_OF_A63 = 1e-06;
			std::string const when_to_check_OF_i_A47 = "not_req_to_req";
			double const lambda_OF_A64 = 1e-05;
			std::string const calculate_required_OF_A47 = "fn_fathers_and_trig";
			double const mu_OF_A11 = 0.1;
			bool const force_relevant_events_OF_A8 = false;
			bool const force_relevant_events_OF_f_A50 = false;
			double const mu_OF_A14 = 0.1;
			bool const failF_FROZEN_OF_f_A49 = false;
			std::string const when_to_check_OF_i_A51 = "not_req_to_req";
			double const mu_OF_i_A49 = 0.1;
			bool const force_relevant_events_OF_A24 = false;
			double const gamma_OF_i_A46 = 1;
			double const gamma_OF_i_A36 = 1;
			std::string const trigger_kind_OF_t_dep_6 = "fn_fathers_and_trig";
			double const lambda_OF_A11 = 0;
			std::string const calculate_required_OF_A6 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A9 = false;
			double const lambda_OF_A14 = 0;
			std::string const calculate_required_OF_A31 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A36 = "fn_fathers_and_trig";
			double const gamma_OF_i_A45 = 1;
			double const gamma_OF_i_A48 = 1;
			bool const failI_FROZEN_OF_i_A50 = false;
			double const mu_OF_A85 = 0.1;
			bool const force_relevant_events_OF_A17 = false;
			bool const force_relevant_events_OF_A68 = false;
			bool const force_relevant_events_OF_f_A39 = false;
			bool const force_relevant_events_OF_f_A38 = false;
			std::string const when_to_check_OF_i_A38 = "not_req_to_req";
			bool const force_relevant_events_OF_A34 = false;
			double const lambda_OF_A80 = 1e-06;
			double const lambda_OF_A1 = 1e-07;
			std::string const calculate_required_OF_A23 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A3 = false;
			double const lambda_OF_A20 = 0;
			bool const force_relevant_events_OF_A103 = false;
			double const mu_OF_A57 = 0.1;
			std::string const calculate_required_OF_A79 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_i_A42 = false;
			bool const failI_FROZEN_OF_i_A40 = false;
			double const lambda_OF_A23 = 1e-07;
			bool const force_relevant_events_OF_A55 = false;
			std::string const trigger_kind_OF_t_seq_0 = "equal_to_S_trig";
			double const mu_OF_A97 = 0.1;
			std::string const calculate_required_OF_A45 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A78 = "equal_to_S_trig";
			std::string const calculate_required_OF_A27 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A12 = false;
			bool const failF_FROZEN_OF_A8 = false;
			std::string const calculate_required_OF_i_A52 = "fn_fathers_and_trig";
			double const mu_OF_A73 = 0.1;
			bool const force_relevant_events_OF_A44 = false;
			bool const force_relevant_events_OF_A46 = false;
			bool const failF_FROZEN_OF_f_A47 = false;
			std::string const calculate_required_OF_A87 = "fn_fathers_and_trig";
			double const mu_OF_i_A43 = 0.1;
			std::string const trigger_kind_OF_t_dep_7 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A42 = false;
			std::string const calculate_required_OF_A2 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A92 = false;
			bool const force_relevant_events_OF_A29 = false;
			bool const failF_FROZEN_OF_A68 = false;
			double const mu_OF_i_A52 = 0.1;
			bool const failF_FROZEN_OF_f_A39 = false;
			double const standby_lambda_OF_A75 = 0;
			std::string const calculate_required_OF_A58 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_i_A53 = false;
			std::string const calculate_required_OF_A76 = "fn_fathers_and_trig";
			bool const Profil1_OF___ARBRE__EIRM = true;
			bool const failF_FROZEN_OF_f_A46 = false;
			std::string const calculate_required_OF_f_A50 = "fn_fathers_and_trig";
			bool const failI_FROZEN_OF_i_A51 = false;
			double const mu_OF_A95 = 0.1;
			std::string const when_to_check_OF_i_A39 = "not_req_to_req";
			double const gamma_OF_i_A40 = 1;
			std::string const calculate_required_OF_A17 = "fn_fathers_and_trig";
			bool const trim_article_OF___ARBRE__EIRM = true;
			bool const failI_FROZEN_OF_i_A37 = false;
			double const mu_OF_A64 = 0.1;
			double const lambda_OF_A5 = 0;
			bool const failF_FROZEN_OF_f_A42 = false;
			double const mu_OF_i_A46 = 0.1;
			std::string const calculate_required_OF_A83 = "fn_fathers_and_trig";
			double const mu_OF_i_A36 = 0.1;
			double const lambda_OF_A68 = 1e-07;
			bool const force_relevant_events_OF_f_A45 = false;
			bool const failF_FROZEN_OF_A29 = false;
			double const mu_OF_A78 = 0.1;
			double const mu_OF_f_A48 = 0.1;
			std::string const calculate_required_OF_A84 = "equal_to_S_trig";
			double const mu_OF_i_A45 = 0.1;
			std::string const calculate_required_OF_A98 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A105 = "fn_fathers_and_trig";
			double const lambda_OF_A79 = 1e-08;
			double const lambda_OF_f_A40 = 0;
			double const lambda_OF_f_A51 = 0;
			std::string const calculate_required_OF_A91 = "fn_fathers_and_trig";
			std::string const step_down_OF_A59 = "rep_any";
			std::string const calculate_required_OF_A44 = "fn_fathers_and_trig";
			double const gamma_OF_i_A47 = 1;
			std::string const calculate_required_OF_A15 = "fn_fathers_and_trig";
			double const lambda_OF_A69 = 1e-05;
			bool const no_trim_OF___ARBRE__EIRM = false;
			double const gamma_OF_i_A51 = 1;
			bool const failS_FROZEN_OF_A11 = false;
			bool const force_relevant_events_OF_A47 = false;
			bool const failS_FROZEN_OF_A14 = false;
			std::string const trigger_kind_OF_t_dep_10 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A49 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A65 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_A86 = false;
			bool const no_repair_OF___ARBRE__EIRM = false;
			bool const failF_FROZEN_OF_f_A45 = false;
			std::string const calculate_required_OF_f_A53 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A18 = "fn_fathers_and_trig";
			double const lambda_OF_f_A47 = 0;
			bool const force_relevant_events_OF_A31 = false;
			bool const force_relevant_events_OF_A57 = false;
			double const gamma_OF_i_A37 = 1;
			double const standby_lambda_OF_A80 = 0;
			double const gamma_OF_i_A38 = 1;
			std::string const calculate_required_OF_A90 = "fn_fathers_and_trig";
			std::string const when_to_check_OF_i_A50 = "not_req_to_req";
			std::string const calculate_required_OF_A54 = "fn_fathers_and_trig";
			double const mu_OF_A67 = 0.1;
			double const lambda_OF_f_A36 = 0;
			bool const force_relevant_events_OF_A73 = false;
			double const standby_lambda_OF_A79 = 0;
			bool const force_relevant_events_OF_A23 = false;
			double const mu_OF_f_A53 = 0.1;
			std::string const trigger_kind_OF_t_seq_7 = "equal_to_S_trig";
			double const mu_OF_A84 = 0.1;
			double const lambda_OF_f_A46 = 0;
			double const mu_OF_A90 = 0.1;
			bool const trimming_OF_OPTIONS = true;
			bool const force_relevant_events_OF_A45 = false;
			bool const force_relevant_events_OF_A27 = false;
			bool const failS_FROZEN_OF_A73 = false;
			bool const force_relevant_events_OF_i_A52 = false;
			double const mu_OF_i_A40 = 0.1;
			std::string const trigger_kind_OF_t_dep_5 = "fn_fathers_and_trig";
			double const lambda_OF_f_A37 = 0;
			bool const force_relevant_events_OF_A62 = false;
			std::string const calculate_required_OF_A11 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A72 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A14 = "fn_fathers_and_trig";
			std::string const when_to_check_OF_i_A53 = "not_req_to_req";
			std::string const calculate_required_OF_A0 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_f_A43 = false;
			std::string const calculate_required_OF_i_A47 = "fn_fathers_and_trig";
			std::string const trigger_kind_OF_t_dep_3 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_i_A49 = "fn_fathers_and_trig";
			double const lambda_OF_f_A42 = 0;
			bool const force_relevant_events_OF_A95 = false;
			bool const force_relevant_events_OF_A2 = false;
			double const mu_OF_A75 = 0.1;
			bool const force_relevant_events_OF_A58 = false;
			bool const force_relevant_events_OF_A76 = false;
			std::string const calculate_required_OF_A85 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_A23 = false;
			bool const failF_FROZEN_OF_A79 = false;
			std::string const calculate_required_OF_A20 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_i_A46 = false;
			double const mu_OF_i_A47 = 0.1;
			double const gamma_OF_i_A39 = 1;
			std::string const calculate_required_OF_A101 = "fn_fathers_and_trig";
			double const mu_OF_A89 = 0.1;
			bool const force_relevant_events_OF_A78 = false;
			bool const force_relevant_events_OF_f_A48 = false;
			std::string const calculate_required_OF_i_A38 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A57 = "fn_fathers_and_trig";
			std::string const trigger_kind_OF_t_dep_8 = "fn_fathers_and_trig";
			std::string const trimming_option_OF_OPTIONS = "according_to_article";
			double const mu_OF_A69 = 0.1;
			bool const failF_FROZEN_OF_A62 = false;
			bool const failI_FROZEN_OF_i_A42 = false;
			std::string const calculate_required_OF_A97 = "fn_fathers_and_trig";
			double const lambda_OF_A57 = 1e-07;
			std::string const trigger_kind_OF_t_dep_13 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A70 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A100 = false;
			double const mu_OF_A20 = 0.1;
			double const lambda_OF_A90 = 1e-08;
			std::string const when_to_check_OF_i_A37 = "not_req_to_req";
			bool const force_relevant_events_OF_A83 = false;
			std::string const trigger_kind_OF_t_0 = "fn_fathers_and_trig";
			bool const failS_FROZEN_OF_A78 = false;
			double const mu_OF_A101 = 0.1;
			bool const failF_FROZEN_OF_A95 = false;
			double const mu_OF_i_A38 = 0.1;
			bool const force_relevant_events_OF_A98 = false;
			std::string const calculate_required_OF_i_A43 = "fn_fathers_and_trig";
			std::string const trigger_kind_OF_t_dep_4 = "fn_fathers_and_trig";
			double const mu_OF_A102 = 0.1;
			bool const force_relevant_events_OF_A105 = false;
			bool const force_relevant_events_OF_UE_1 = true;
			std::string const trigger_kind_OF_t_seq_6 = "equal_to_S_trig";
			bool const failF_FROZEN_OF_f_A50 = false;
			double const lambda_OF_A26 = 2e-07;
			bool const force_relevant_events_OF_A91 = false;
			bool const force_relevant_events_OF_A15 = false;
			std::string const calculate_required_OF_A48 = "fn_fathers_and_trig";
			std::string const trigger_kind_OF_t_seq_1 = "equal_to_S_trig";
			bool const failI_FROZEN_OF_i_A53 = false;
			double const mu_OF_f_A52 = 0.1;
			std::string const trigger_kind_OF_t_dep_2 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A67 = false;
			bool const failF_FROZEN_OF_A17 = false;
			bool const force_relevant_events_OF_A49 = false;
			bool const failF_FROZEN_OF_A100 = false;
			bool const force_relevant_events_OF_A65 = false;
			bool const force_relevant_events_OF_A69 = false;
			std::string const calculate_required_OF_A5 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_f_A38 = false;
			double const lambda_OF_f_A52 = 0;
			double const gamma_OF_i_A50 = 1;
			bool const force_relevant_events_OF_f_A53 = false;
			bool const force_relevant_events_OF_A18 = false;
			bool const force_relevant_events_OF_A84 = false;
			double const mu_OF_A96 = 0.1;
			std::string const calculate_required_OF_A64 = "fn_fathers_and_trig";
			double const mu_OF_A74 = 0.1;
			double const mu_OF_A80 = 0.1;
			bool const force_relevant_events_OF_A90 = false;
			std::string const calculate_required_OF_i_A39 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_i_A46 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_i_A36 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A54 = false;
			double const lambda_OF_f_A43 = 0;
			std::string const calculate_required_OF_f_A40 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_f_A48 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A56 = "fn_fathers_and_trig";
			double const mu_OF_A5 = 0.1;
			std::string const calculate_required_OF_f_A51 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A26 = "fn_fathers_and_trig";
			bool const failF_FROZEN_OF_A91 = false;
			std::string const calculate_required_OF_i_A45 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_i_A48 = "fn_fathers_and_trig";
			double const lambda_OF_A101 = 1e-08;
			double const mu_OF_i_A39 = 0.1;
			std::string const calculate_required_OF_A52 = "fn_fathers_and_trig";
			double const lambda_OF_f_A49 = 0;
			bool const failF_FROZEN_OF_A67 = false;
			double const mu_OF_f_A40 = 0.1;
			double const mu_OF_A56 = 0.1;
			double const mu_OF_f_A51 = 0.1;
			double const mu_OF_A26 = 0.1;
			double const mu_OF_i_A48 = 0.1;
			double const lambda_OF_A100 = 9.9e-07;
			double const gamma_OF_i_A53 = 1;
			std::string const calculate_required_OF_A94 = "fn_fathers_and_trig";
			std::string const trigger_kind_OF_t_dep_1 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A11 = false;
			bool const failF_FROZEN_OF_f_A53 = false;
			bool const force_relevant_events_OF_A72 = false;
			bool const force_relevant_events_OF_A14 = false;
			bool const force_relevant_events_OF_A0 = false;
			bool const force_relevant_events_OF_i_A47 = false;
			bool const force_relevant_events_OF_i_A49 = false;
			bool const force_relevant_events_OF_A89 = false;
			bool const failF_FROZEN_OF_A54 = false;
			bool const failS_FROZEN_OF_A75 = false;
			double const lambda_OF_A91 = 1e-06;
			std::string const calculate_required_OF_f_A36 = "fn_fathers_and_trig";
			double const mu_OF_A8 = 0.1;
			std::string const trigger_kind_OF_t_dep_14 = "fn_fathers_and_trig";
			std::string const calculate_required_OF_A60 = "fn_fathers_and_trig";
			bool const force_relevant_events_OF_A85 = false;
		
            /* ---------- DECLARATION OF OCCURRENCE RULES FIRING FLAGS ------------ */
            bool FIRE_xx10_OF_A1;
            bool FIRE_xx11_OF_A1;
            bool FIRE_xx10_OF_A100;
            bool FIRE_xx11_OF_A100;
            bool FIRE_xx10_OF_A101;
            bool FIRE_xx11_OF_A101;
            bool FIRE_xx10_OF_A102;
            bool FIRE_xx11_OF_A102;
            bool FIRE_xx17_OF_A11;
            bool FIRE_xx18_OF_A11;
            bool FIRE_xx19_OF_A11;
            bool FIRE_xx17_OF_A14;
            bool FIRE_xx18_OF_A14;
            bool FIRE_xx19_OF_A14;
            bool FIRE_xx10_OF_A17;
            bool FIRE_xx11_OF_A17;
            bool FIRE_xx10_OF_A20;
            bool FIRE_xx11_OF_A20;
            bool FIRE_xx10_OF_A23;
            bool FIRE_xx11_OF_A23;
            bool FIRE_xx10_OF_A26;
            bool FIRE_xx11_OF_A26;
            bool FIRE_xx10_OF_A29;
            bool FIRE_xx11_OF_A29;
            bool FIRE_xx10_OF_A33;
            bool FIRE_xx11_OF_A33;
            bool FIRE_xx10_OF_A5;
            bool FIRE_xx11_OF_A5;
            bool FIRE_xx10_OF_A54;
            bool FIRE_xx11_OF_A54;
            bool FIRE_xx10_OF_A56;
            bool FIRE_xx11_OF_A56;
            bool FIRE_xx10_OF_A57;
            bool FIRE_xx11_OF_A57;
            bool FIRE_xx10_OF_A62;
            bool FIRE_xx11_OF_A62;
            bool FIRE_xx10_OF_A63;
            bool FIRE_xx11_OF_A63;
            bool FIRE_xx10_OF_A64;
            bool FIRE_xx11_OF_A64;
            bool FIRE_xx10_OF_A67;
            bool FIRE_xx11_OF_A67;
            bool FIRE_xx10_OF_A68;
            bool FIRE_xx11_OF_A68;
            bool FIRE_xx10_OF_A69;
            bool FIRE_xx11_OF_A69;
            bool FIRE_xx17_OF_A73;
            bool FIRE_xx18_OF_A73;
            bool FIRE_xx19_OF_A73;
            bool FIRE_xx17_OF_A74;
            bool FIRE_xx18_OF_A74;
            bool FIRE_xx19_OF_A74;
            bool FIRE_xx17_OF_A75;
            bool FIRE_xx18_OF_A75;
            bool FIRE_xx19_OF_A75;
            bool FIRE_xx17_OF_A78;
            bool FIRE_xx18_OF_A78;
            bool FIRE_xx19_OF_A78;
            bool FIRE_xx17_OF_A79;
            bool FIRE_xx18_OF_A79;
            bool FIRE_xx19_OF_A79;
            bool FIRE_xx10_OF_A8;
            bool FIRE_xx11_OF_A8;
            bool FIRE_xx17_OF_A80;
            bool FIRE_xx18_OF_A80;
            bool FIRE_xx19_OF_A80;
            bool FIRE_xx10_OF_A84;
            bool FIRE_xx11_OF_A84;
            bool FIRE_xx10_OF_A85;
            bool FIRE_xx11_OF_A85;
            bool FIRE_xx10_OF_A86;
            bool FIRE_xx11_OF_A86;
            bool FIRE_xx10_OF_A89;
            bool FIRE_xx11_OF_A89;
            bool FIRE_xx10_OF_A90;
            bool FIRE_xx11_OF_A90;
            bool FIRE_xx10_OF_A91;
            bool FIRE_xx11_OF_A91;
            bool FIRE_xx10_OF_A95;
            bool FIRE_xx11_OF_A95;
            bool FIRE_xx10_OF_A96;
            bool FIRE_xx11_OF_A96;
            bool FIRE_xx10_OF_A97;
            bool FIRE_xx11_OF_A97;
            bool FIRE_xx10_OF_f_A36;
            bool FIRE_xx11_OF_f_A36;
            bool FIRE_xx10_OF_f_A37;
            bool FIRE_xx11_OF_f_A37;
            bool FIRE_xx10_OF_f_A38;
            bool FIRE_xx11_OF_f_A38;
            bool FIRE_xx10_OF_f_A39;
            bool FIRE_xx11_OF_f_A39;
            bool FIRE_xx10_OF_f_A40;
            bool FIRE_xx11_OF_f_A40;
            bool FIRE_xx10_OF_f_A42;
            bool FIRE_xx11_OF_f_A42;
            bool FIRE_xx10_OF_f_A43;
            bool FIRE_xx11_OF_f_A43;
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
            bool FIRE_xx10_OF_f_A50;
            bool FIRE_xx11_OF_f_A50;
            bool FIRE_xx10_OF_f_A51;
            bool FIRE_xx11_OF_f_A51;
            bool FIRE_xx10_OF_f_A52;
            bool FIRE_xx11_OF_f_A52;
            bool FIRE_xx10_OF_f_A53;
            bool FIRE_xx11_OF_f_A53;
            bool FIRE_xx23_OF_i_A36_INS_116;
            bool FIRE_xx23_OF_i_A36_INS_117;
            bool FIRE_xx24_OF_i_A36;
            bool FIRE_xx23_OF_i_A37_INS_119;
            bool FIRE_xx23_OF_i_A37_INS_120;
            bool FIRE_xx24_OF_i_A37;
            bool FIRE_xx23_OF_i_A38_INS_122;
            bool FIRE_xx23_OF_i_A38_INS_123;
            bool FIRE_xx24_OF_i_A38;
            bool FIRE_xx23_OF_i_A39_INS_125;
            bool FIRE_xx23_OF_i_A39_INS_126;
            bool FIRE_xx24_OF_i_A39;
            bool FIRE_xx23_OF_i_A40_INS_128;
            bool FIRE_xx23_OF_i_A40_INS_129;
            bool FIRE_xx24_OF_i_A40;
            bool FIRE_xx23_OF_i_A42_INS_131;
            bool FIRE_xx23_OF_i_A42_INS_132;
            bool FIRE_xx24_OF_i_A42;
            bool FIRE_xx23_OF_i_A43_INS_134;
            bool FIRE_xx23_OF_i_A43_INS_135;
            bool FIRE_xx24_OF_i_A43;
            bool FIRE_xx23_OF_i_A45_INS_137;
            bool FIRE_xx23_OF_i_A45_INS_138;
            bool FIRE_xx24_OF_i_A45;
            bool FIRE_xx23_OF_i_A46_INS_140;
            bool FIRE_xx23_OF_i_A46_INS_141;
            bool FIRE_xx24_OF_i_A46;
            bool FIRE_xx23_OF_i_A47_INS_143;
            bool FIRE_xx23_OF_i_A47_INS_144;
            bool FIRE_xx24_OF_i_A47;
            bool FIRE_xx23_OF_i_A48_INS_146;
            bool FIRE_xx23_OF_i_A48_INS_147;
            bool FIRE_xx24_OF_i_A48;
            bool FIRE_xx23_OF_i_A49_INS_149;
            bool FIRE_xx23_OF_i_A49_INS_150;
            bool FIRE_xx24_OF_i_A49;
            bool FIRE_xx23_OF_i_A50_INS_152;
            bool FIRE_xx23_OF_i_A50_INS_153;
            bool FIRE_xx24_OF_i_A50;
            bool FIRE_xx23_OF_i_A51_INS_155;
            bool FIRE_xx23_OF_i_A51_INS_156;
            bool FIRE_xx24_OF_i_A51;
            bool FIRE_xx23_OF_i_A52_INS_158;
            bool FIRE_xx23_OF_i_A52_INS_159;
            bool FIRE_xx24_OF_i_A52;
            bool FIRE_xx23_OF_i_A53_INS_161;
            bool FIRE_xx23_OF_i_A53_INS_162;
            bool FIRE_xx24_OF_i_A53;

            int required_OF_A0 = 0 ;
            int already_S_OF_A0 = 1 ;
            int S_OF_A0 = 2 ;
            int relevant_evt_OF_A0 = 3 ;
            int required_OF_A1 = 4 ;
            int already_S_OF_A1 = 5 ;
            int S_OF_A1 = 6 ;
            int relevant_evt_OF_A1 = 7 ;
            int failF_OF_A1 = 8 ;
            int required_OF_A100 = 9 ;
            int already_S_OF_A100 = 10 ;
            int S_OF_A100 = 11 ;
            int relevant_evt_OF_A100 = 12 ;
            int failF_OF_A100 = 13 ;
            int required_OF_A101 = 14 ;
            int already_S_OF_A101 = 15 ;
            int S_OF_A101 = 16 ;
            int relevant_evt_OF_A101 = 17 ;
            int failF_OF_A101 = 18 ;
            int required_OF_A102 = 19 ;
            int already_S_OF_A102 = 20 ;
            int S_OF_A102 = 21 ;
            int relevant_evt_OF_A102 = 22 ;
            int failF_OF_A102 = 23 ;
            int required_OF_A103 = 24 ;
            int already_S_OF_A103 = 25 ;
            int S_OF_A103 = 26 ;
            int relevant_evt_OF_A103 = 27 ;
            int required_OF_A105 = 28 ;
            int already_S_OF_A105 = 29 ;
            int S_OF_A105 = 30 ;
            int relevant_evt_OF_A105 = 31 ;
            int required_OF_A11 = 32 ;
            int already_S_OF_A11 = 33 ;
            int S_OF_A11 = 34 ;
            int relevant_evt_OF_A11 = 35 ;
            int failF_OF_A11 = 36 ;
            int failS_OF_A11 = 37 ;
            int required_OF_A12 = 38 ;
            int already_S_OF_A12 = 39 ;
            int S_OF_A12 = 40 ;
            int relevant_evt_OF_A12 = 41 ;
            int required_OF_A14 = 42 ;
            int already_S_OF_A14 = 43 ;
            int S_OF_A14 = 44 ;
            int relevant_evt_OF_A14 = 45 ;
            int failF_OF_A14 = 46 ;
            int failS_OF_A14 = 47 ;
            int required_OF_A15 = 48 ;
            int already_S_OF_A15 = 49 ;
            int S_OF_A15 = 50 ;
            int relevant_evt_OF_A15 = 51 ;
            int required_OF_A17 = 52 ;
            int already_S_OF_A17 = 53 ;
            int S_OF_A17 = 54 ;
            int relevant_evt_OF_A17 = 55 ;
            int failF_OF_A17 = 56 ;
            int required_OF_A18 = 57 ;
            int already_S_OF_A18 = 58 ;
            int S_OF_A18 = 59 ;
            int relevant_evt_OF_A18 = 60 ;
            int required_OF_A2 = 61 ;
            int already_S_OF_A2 = 62 ;
            int S_OF_A2 = 63 ;
            int relevant_evt_OF_A2 = 64 ;
            int required_OF_A20 = 65 ;
            int already_S_OF_A20 = 66 ;
            int S_OF_A20 = 67 ;
            int relevant_evt_OF_A20 = 68 ;
            int failF_OF_A20 = 69 ;
            int required_OF_A21 = 70 ;
            int already_S_OF_A21 = 71 ;
            int S_OF_A21 = 72 ;
            int relevant_evt_OF_A21 = 73 ;
            int required_OF_A23 = 74 ;
            int already_S_OF_A23 = 75 ;
            int S_OF_A23 = 76 ;
            int relevant_evt_OF_A23 = 77 ;
            int failF_OF_A23 = 78 ;
            int required_OF_A24 = 79 ;
            int already_S_OF_A24 = 80 ;
            int S_OF_A24 = 81 ;
            int relevant_evt_OF_A24 = 82 ;
            int required_OF_A26 = 83 ;
            int already_S_OF_A26 = 84 ;
            int S_OF_A26 = 85 ;
            int relevant_evt_OF_A26 = 86 ;
            int failF_OF_A26 = 87 ;
            int required_OF_A27 = 88 ;
            int already_S_OF_A27 = 89 ;
            int S_OF_A27 = 90 ;
            int relevant_evt_OF_A27 = 91 ;
            int required_OF_A29 = 92 ;
            int already_S_OF_A29 = 93 ;
            int S_OF_A29 = 94 ;
            int relevant_evt_OF_A29 = 95 ;
            int failF_OF_A29 = 96 ;
            int required_OF_A3 = 97 ;
            int already_S_OF_A3 = 98 ;
            int S_OF_A3 = 99 ;
            int relevant_evt_OF_A3 = 100 ;
            int required_OF_A30 = 101 ;
            int already_S_OF_A30 = 102 ;
            int S_OF_A30 = 103 ;
            int relevant_evt_OF_A30 = 104 ;
            int required_OF_A31 = 105 ;
            int already_S_OF_A31 = 106 ;
            int S_OF_A31 = 107 ;
            int relevant_evt_OF_A31 = 108 ;
            int required_OF_A33 = 109 ;
            int already_S_OF_A33 = 110 ;
            int S_OF_A33 = 111 ;
            int relevant_evt_OF_A33 = 112 ;
            int failF_OF_A33 = 113 ;
            int required_OF_A34 = 114 ;
            int already_S_OF_A34 = 115 ;
            int S_OF_A34 = 116 ;
            int relevant_evt_OF_A34 = 117 ;
            int required_OF_A36 = 118 ;
            int already_S_OF_A36 = 119 ;
            int S_OF_A36 = 120 ;
            int relevant_evt_OF_A36 = 121 ;
            int required_OF_A37 = 122 ;
            int already_S_OF_A37 = 123 ;
            int S_OF_A37 = 124 ;
            int relevant_evt_OF_A37 = 125 ;
            int required_OF_A38 = 126 ;
            int already_S_OF_A38 = 127 ;
            int S_OF_A38 = 128 ;
            int relevant_evt_OF_A38 = 129 ;
            int required_OF_A39 = 130 ;
            int already_S_OF_A39 = 131 ;
            int S_OF_A39 = 132 ;
            int relevant_evt_OF_A39 = 133 ;
            int required_OF_A40 = 134 ;
            int already_S_OF_A40 = 135 ;
            int S_OF_A40 = 136 ;
            int relevant_evt_OF_A40 = 137 ;
            int required_OF_A41 = 138 ;
            int already_S_OF_A41 = 139 ;
            int S_OF_A41 = 140 ;
            int relevant_evt_OF_A41 = 141 ;
            int required_OF_A42 = 142 ;
            int already_S_OF_A42 = 143 ;
            int S_OF_A42 = 144 ;
            int relevant_evt_OF_A42 = 145 ;
            int required_OF_A43 = 146 ;
            int already_S_OF_A43 = 147 ;
            int S_OF_A43 = 148 ;
            int relevant_evt_OF_A43 = 149 ;
            int required_OF_A44 = 150 ;
            int already_S_OF_A44 = 151 ;
            int S_OF_A44 = 152 ;
            int relevant_evt_OF_A44 = 153 ;
            int required_OF_A45 = 154 ;
            int already_S_OF_A45 = 155 ;
            int S_OF_A45 = 156 ;
            int relevant_evt_OF_A45 = 157 ;
            int required_OF_A46 = 158 ;
            int already_S_OF_A46 = 159 ;
            int S_OF_A46 = 160 ;
            int relevant_evt_OF_A46 = 161 ;
            int required_OF_A47 = 162 ;
            int already_S_OF_A47 = 163 ;
            int S_OF_A47 = 164 ;
            int relevant_evt_OF_A47 = 165 ;
            int required_OF_A48 = 166 ;
            int already_S_OF_A48 = 167 ;
            int S_OF_A48 = 168 ;
            int relevant_evt_OF_A48 = 169 ;
            int required_OF_A49 = 170 ;
            int already_S_OF_A49 = 171 ;
            int S_OF_A49 = 172 ;
            int relevant_evt_OF_A49 = 173 ;
            int required_OF_A5 = 174 ;
            int already_S_OF_A5 = 175 ;
            int S_OF_A5 = 176 ;
            int relevant_evt_OF_A5 = 177 ;
            int failF_OF_A5 = 178 ;
            int required_OF_A50 = 179 ;
            int already_S_OF_A50 = 180 ;
            int S_OF_A50 = 181 ;
            int relevant_evt_OF_A50 = 182 ;
            int required_OF_A51 = 183 ;
            int already_S_OF_A51 = 184 ;
            int S_OF_A51 = 185 ;
            int relevant_evt_OF_A51 = 186 ;
            int required_OF_A52 = 187 ;
            int already_S_OF_A52 = 188 ;
            int S_OF_A52 = 189 ;
            int relevant_evt_OF_A52 = 190 ;
            int required_OF_A53 = 191 ;
            int already_S_OF_A53 = 192 ;
            int S_OF_A53 = 193 ;
            int relevant_evt_OF_A53 = 194 ;
            int required_OF_A54 = 195 ;
            int already_S_OF_A54 = 196 ;
            int S_OF_A54 = 197 ;
            int relevant_evt_OF_A54 = 198 ;
            int failF_OF_A54 = 199 ;
            int required_OF_A55 = 200 ;
            int already_S_OF_A55 = 201 ;
            int S_OF_A55 = 202 ;
            int relevant_evt_OF_A55 = 203 ;
            int required_OF_A56 = 204 ;
            int already_S_OF_A56 = 205 ;
            int S_OF_A56 = 206 ;
            int relevant_evt_OF_A56 = 207 ;
            int failF_OF_A56 = 208 ;
            int required_OF_A57 = 209 ;
            int already_S_OF_A57 = 210 ;
            int S_OF_A57 = 211 ;
            int relevant_evt_OF_A57 = 212 ;
            int failF_OF_A57 = 213 ;
            int required_OF_A58 = 214 ;
            int already_S_OF_A58 = 215 ;
            int S_OF_A58 = 216 ;
            int relevant_evt_OF_A58 = 217 ;
            int required_OF_A59 = 218 ;
            int already_S_OF_A59 = 219 ;
            int S_OF_A59 = 220 ;
            int relevant_evt_OF_A59 = 221 ;
            int required_OF_A6 = 222 ;
            int already_S_OF_A6 = 223 ;
            int S_OF_A6 = 224 ;
            int relevant_evt_OF_A6 = 225 ;
            int required_OF_A60 = 226 ;
            int already_S_OF_A60 = 227 ;
            int S_OF_A60 = 228 ;
            int relevant_evt_OF_A60 = 229 ;
            int required_OF_A61 = 230 ;
            int already_S_OF_A61 = 231 ;
            int S_OF_A61 = 232 ;
            int relevant_evt_OF_A61 = 233 ;
            int required_OF_A62 = 234 ;
            int already_S_OF_A62 = 235 ;
            int S_OF_A62 = 236 ;
            int relevant_evt_OF_A62 = 237 ;
            int failF_OF_A62 = 238 ;
            int required_OF_A63 = 239 ;
            int already_S_OF_A63 = 240 ;
            int S_OF_A63 = 241 ;
            int relevant_evt_OF_A63 = 242 ;
            int failF_OF_A63 = 243 ;
            int required_OF_A64 = 244 ;
            int already_S_OF_A64 = 245 ;
            int S_OF_A64 = 246 ;
            int relevant_evt_OF_A64 = 247 ;
            int failF_OF_A64 = 248 ;
            int required_OF_A65 = 249 ;
            int already_S_OF_A65 = 250 ;
            int S_OF_A65 = 251 ;
            int relevant_evt_OF_A65 = 252 ;
            int required_OF_A67 = 253 ;
            int already_S_OF_A67 = 254 ;
            int S_OF_A67 = 255 ;
            int relevant_evt_OF_A67 = 256 ;
            int failF_OF_A67 = 257 ;
            int required_OF_A68 = 258 ;
            int already_S_OF_A68 = 259 ;
            int S_OF_A68 = 260 ;
            int relevant_evt_OF_A68 = 261 ;
            int failF_OF_A68 = 262 ;
            int required_OF_A69 = 263 ;
            int already_S_OF_A69 = 264 ;
            int S_OF_A69 = 265 ;
            int relevant_evt_OF_A69 = 266 ;
            int failF_OF_A69 = 267 ;
            int required_OF_A70 = 268 ;
            int already_S_OF_A70 = 269 ;
            int S_OF_A70 = 270 ;
            int relevant_evt_OF_A70 = 271 ;
            int required_OF_A72 = 272 ;
            int already_S_OF_A72 = 273 ;
            int S_OF_A72 = 274 ;
            int relevant_evt_OF_A72 = 275 ;
            int required_OF_A73 = 276 ;
            int already_S_OF_A73 = 277 ;
            int S_OF_A73 = 278 ;
            int relevant_evt_OF_A73 = 279 ;
            int failF_OF_A73 = 280 ;
            int failS_OF_A73 = 281 ;
            int required_OF_A74 = 282 ;
            int already_S_OF_A74 = 283 ;
            int S_OF_A74 = 284 ;
            int relevant_evt_OF_A74 = 285 ;
            int failF_OF_A74 = 286 ;
            int failS_OF_A74 = 287 ;
            int required_OF_A75 = 288 ;
            int already_S_OF_A75 = 289 ;
            int S_OF_A75 = 290 ;
            int relevant_evt_OF_A75 = 291 ;
            int failF_OF_A75 = 292 ;
            int failS_OF_A75 = 293 ;
            int required_OF_A76 = 294 ;
            int already_S_OF_A76 = 295 ;
            int S_OF_A76 = 296 ;
            int relevant_evt_OF_A76 = 297 ;
            int required_OF_A78 = 298 ;
            int already_S_OF_A78 = 299 ;
            int S_OF_A78 = 300 ;
            int relevant_evt_OF_A78 = 301 ;
            int failF_OF_A78 = 302 ;
            int failS_OF_A78 = 303 ;
            int required_OF_A79 = 304 ;
            int already_S_OF_A79 = 305 ;
            int S_OF_A79 = 306 ;
            int relevant_evt_OF_A79 = 307 ;
            int failF_OF_A79 = 308 ;
            int failS_OF_A79 = 309 ;
            int required_OF_A8 = 310 ;
            int already_S_OF_A8 = 311 ;
            int S_OF_A8 = 312 ;
            int relevant_evt_OF_A8 = 313 ;
            int failF_OF_A8 = 314 ;
            int required_OF_A80 = 315 ;
            int already_S_OF_A80 = 316 ;
            int S_OF_A80 = 317 ;
            int relevant_evt_OF_A80 = 318 ;
            int failF_OF_A80 = 319 ;
            int failS_OF_A80 = 320 ;
            int required_OF_A81 = 321 ;
            int already_S_OF_A81 = 322 ;
            int S_OF_A81 = 323 ;
            int relevant_evt_OF_A81 = 324 ;
            int required_OF_A83 = 325 ;
            int already_S_OF_A83 = 326 ;
            int S_OF_A83 = 327 ;
            int relevant_evt_OF_A83 = 328 ;
            int required_OF_A84 = 329 ;
            int already_S_OF_A84 = 330 ;
            int S_OF_A84 = 331 ;
            int relevant_evt_OF_A84 = 332 ;
            int failF_OF_A84 = 333 ;
            int required_OF_A85 = 334 ;
            int already_S_OF_A85 = 335 ;
            int S_OF_A85 = 336 ;
            int relevant_evt_OF_A85 = 337 ;
            int failF_OF_A85 = 338 ;
            int required_OF_A86 = 339 ;
            int already_S_OF_A86 = 340 ;
            int S_OF_A86 = 341 ;
            int relevant_evt_OF_A86 = 342 ;
            int failF_OF_A86 = 343 ;
            int required_OF_A87 = 344 ;
            int already_S_OF_A87 = 345 ;
            int S_OF_A87 = 346 ;
            int relevant_evt_OF_A87 = 347 ;
            int required_OF_A89 = 348 ;
            int already_S_OF_A89 = 349 ;
            int S_OF_A89 = 350 ;
            int relevant_evt_OF_A89 = 351 ;
            int failF_OF_A89 = 352 ;
            int required_OF_A9 = 353 ;
            int already_S_OF_A9 = 354 ;
            int S_OF_A9 = 355 ;
            int relevant_evt_OF_A9 = 356 ;
            int required_OF_A90 = 357 ;
            int already_S_OF_A90 = 358 ;
            int S_OF_A90 = 359 ;
            int relevant_evt_OF_A90 = 360 ;
            int failF_OF_A90 = 361 ;
            int required_OF_A91 = 362 ;
            int already_S_OF_A91 = 363 ;
            int S_OF_A91 = 364 ;
            int relevant_evt_OF_A91 = 365 ;
            int failF_OF_A91 = 366 ;
            int required_OF_A92 = 367 ;
            int already_S_OF_A92 = 368 ;
            int S_OF_A92 = 369 ;
            int relevant_evt_OF_A92 = 370 ;
            int required_OF_A94 = 371 ;
            int already_S_OF_A94 = 372 ;
            int S_OF_A94 = 373 ;
            int relevant_evt_OF_A94 = 374 ;
            int required_OF_A95 = 375 ;
            int already_S_OF_A95 = 376 ;
            int S_OF_A95 = 377 ;
            int relevant_evt_OF_A95 = 378 ;
            int failF_OF_A95 = 379 ;
            int required_OF_A96 = 380 ;
            int already_S_OF_A96 = 381 ;
            int S_OF_A96 = 382 ;
            int relevant_evt_OF_A96 = 383 ;
            int failF_OF_A96 = 384 ;
            int required_OF_A97 = 385 ;
            int already_S_OF_A97 = 386 ;
            int S_OF_A97 = 387 ;
            int relevant_evt_OF_A97 = 388 ;
            int failF_OF_A97 = 389 ;
            int required_OF_A98 = 390 ;
            int already_S_OF_A98 = 391 ;
            int S_OF_A98 = 392 ;
            int relevant_evt_OF_A98 = 393 ;
            int required_OF_UE_1 = 394 ;
            int already_S_OF_UE_1 = 395 ;
            int S_OF_UE_1 = 396 ;
            int relevant_evt_OF_UE_1 = 397 ;
            int required_OF_f_A36 = 398 ;
            int already_S_OF_f_A36 = 399 ;
            int S_OF_f_A36 = 400 ;
            int relevant_evt_OF_f_A36 = 401 ;
            int failF_OF_f_A36 = 402 ;
            int required_OF_f_A37 = 403 ;
            int already_S_OF_f_A37 = 404 ;
            int S_OF_f_A37 = 405 ;
            int relevant_evt_OF_f_A37 = 406 ;
            int failF_OF_f_A37 = 407 ;
            int required_OF_f_A38 = 408 ;
            int already_S_OF_f_A38 = 409 ;
            int S_OF_f_A38 = 410 ;
            int relevant_evt_OF_f_A38 = 411 ;
            int failF_OF_f_A38 = 412 ;
            int required_OF_f_A39 = 413 ;
            int already_S_OF_f_A39 = 414 ;
            int S_OF_f_A39 = 415 ;
            int relevant_evt_OF_f_A39 = 416 ;
            int failF_OF_f_A39 = 417 ;
            int required_OF_f_A40 = 418 ;
            int already_S_OF_f_A40 = 419 ;
            int S_OF_f_A40 = 420 ;
            int relevant_evt_OF_f_A40 = 421 ;
            int failF_OF_f_A40 = 422 ;
            int required_OF_f_A42 = 423 ;
            int already_S_OF_f_A42 = 424 ;
            int S_OF_f_A42 = 425 ;
            int relevant_evt_OF_f_A42 = 426 ;
            int failF_OF_f_A42 = 427 ;
            int required_OF_f_A43 = 428 ;
            int already_S_OF_f_A43 = 429 ;
            int S_OF_f_A43 = 430 ;
            int relevant_evt_OF_f_A43 = 431 ;
            int failF_OF_f_A43 = 432 ;
            int required_OF_f_A45 = 433 ;
            int already_S_OF_f_A45 = 434 ;
            int S_OF_f_A45 = 435 ;
            int relevant_evt_OF_f_A45 = 436 ;
            int failF_OF_f_A45 = 437 ;
            int required_OF_f_A46 = 438 ;
            int already_S_OF_f_A46 = 439 ;
            int S_OF_f_A46 = 440 ;
            int relevant_evt_OF_f_A46 = 441 ;
            int failF_OF_f_A46 = 442 ;
            int required_OF_f_A47 = 443 ;
            int already_S_OF_f_A47 = 444 ;
            int S_OF_f_A47 = 445 ;
            int relevant_evt_OF_f_A47 = 446 ;
            int failF_OF_f_A47 = 447 ;
            int required_OF_f_A48 = 448 ;
            int already_S_OF_f_A48 = 449 ;
            int S_OF_f_A48 = 450 ;
            int relevant_evt_OF_f_A48 = 451 ;
            int failF_OF_f_A48 = 452 ;
            int required_OF_f_A49 = 453 ;
            int already_S_OF_f_A49 = 454 ;
            int S_OF_f_A49 = 455 ;
            int relevant_evt_OF_f_A49 = 456 ;
            int failF_OF_f_A49 = 457 ;
            int required_OF_f_A50 = 458 ;
            int already_S_OF_f_A50 = 459 ;
            int S_OF_f_A50 = 460 ;
            int relevant_evt_OF_f_A50 = 461 ;
            int failF_OF_f_A50 = 462 ;
            int required_OF_f_A51 = 463 ;
            int already_S_OF_f_A51 = 464 ;
            int S_OF_f_A51 = 465 ;
            int relevant_evt_OF_f_A51 = 466 ;
            int failF_OF_f_A51 = 467 ;
            int required_OF_f_A52 = 468 ;
            int already_S_OF_f_A52 = 469 ;
            int S_OF_f_A52 = 470 ;
            int relevant_evt_OF_f_A52 = 471 ;
            int failF_OF_f_A52 = 472 ;
            int required_OF_f_A53 = 473 ;
            int already_S_OF_f_A53 = 474 ;
            int S_OF_f_A53 = 475 ;
            int relevant_evt_OF_f_A53 = 476 ;
            int failF_OF_f_A53 = 477 ;
            int required_OF_i_A36 = 478 ;
            int already_S_OF_i_A36 = 479 ;
            int S_OF_i_A36 = 480 ;
            int relevant_evt_OF_i_A36 = 481 ;
            int failI_OF_i_A36 = 482 ;
            int to_be_fired_OF_i_A36 = 483 ;
            int already_standby_OF_i_A36 = 484 ;
            int already_required_OF_i_A36 = 485 ;
            int required_OF_i_A37 = 486 ;
            int already_S_OF_i_A37 = 487 ;
            int S_OF_i_A37 = 488 ;
            int relevant_evt_OF_i_A37 = 489 ;
            int failI_OF_i_A37 = 490 ;
            int to_be_fired_OF_i_A37 = 491 ;
            int already_standby_OF_i_A37 = 492 ;
            int already_required_OF_i_A37 = 493 ;
            int required_OF_i_A38 = 494 ;
            int already_S_OF_i_A38 = 495 ;
            int S_OF_i_A38 = 496 ;
            int relevant_evt_OF_i_A38 = 497 ;
            int failI_OF_i_A38 = 498 ;
            int to_be_fired_OF_i_A38 = 499 ;
            int already_standby_OF_i_A38 = 500 ;
            int already_required_OF_i_A38 = 501 ;
            int required_OF_i_A39 = 502 ;
            int already_S_OF_i_A39 = 503 ;
            int S_OF_i_A39 = 504 ;
            int relevant_evt_OF_i_A39 = 505 ;
            int failI_OF_i_A39 = 506 ;
            int to_be_fired_OF_i_A39 = 507 ;
            int already_standby_OF_i_A39 = 508 ;
            int already_required_OF_i_A39 = 509 ;
            int required_OF_i_A40 = 510 ;
            int already_S_OF_i_A40 = 511 ;
            int S_OF_i_A40 = 512 ;
            int relevant_evt_OF_i_A40 = 513 ;
            int failI_OF_i_A40 = 514 ;
            int to_be_fired_OF_i_A40 = 515 ;
            int already_standby_OF_i_A40 = 516 ;
            int already_required_OF_i_A40 = 517 ;
            int required_OF_i_A42 = 518 ;
            int already_S_OF_i_A42 = 519 ;
            int S_OF_i_A42 = 520 ;
            int relevant_evt_OF_i_A42 = 521 ;
            int failI_OF_i_A42 = 522 ;
            int to_be_fired_OF_i_A42 = 523 ;
            int already_standby_OF_i_A42 = 524 ;
            int already_required_OF_i_A42 = 525 ;
            int required_OF_i_A43 = 526 ;
            int already_S_OF_i_A43 = 527 ;
            int S_OF_i_A43 = 528 ;
            int relevant_evt_OF_i_A43 = 529 ;
            int failI_OF_i_A43 = 530 ;
            int to_be_fired_OF_i_A43 = 531 ;
            int already_standby_OF_i_A43 = 532 ;
            int already_required_OF_i_A43 = 533 ;
            int required_OF_i_A45 = 534 ;
            int already_S_OF_i_A45 = 535 ;
            int S_OF_i_A45 = 536 ;
            int relevant_evt_OF_i_A45 = 537 ;
            int failI_OF_i_A45 = 538 ;
            int to_be_fired_OF_i_A45 = 539 ;
            int already_standby_OF_i_A45 = 540 ;
            int already_required_OF_i_A45 = 541 ;
            int required_OF_i_A46 = 542 ;
            int already_S_OF_i_A46 = 543 ;
            int S_OF_i_A46 = 544 ;
            int relevant_evt_OF_i_A46 = 545 ;
            int failI_OF_i_A46 = 546 ;
            int to_be_fired_OF_i_A46 = 547 ;
            int already_standby_OF_i_A46 = 548 ;
            int already_required_OF_i_A46 = 549 ;
            int required_OF_i_A47 = 550 ;
            int already_S_OF_i_A47 = 551 ;
            int S_OF_i_A47 = 552 ;
            int relevant_evt_OF_i_A47 = 553 ;
            int failI_OF_i_A47 = 554 ;
            int to_be_fired_OF_i_A47 = 555 ;
            int already_standby_OF_i_A47 = 556 ;
            int already_required_OF_i_A47 = 557 ;
            int required_OF_i_A48 = 558 ;
            int already_S_OF_i_A48 = 559 ;
            int S_OF_i_A48 = 560 ;
            int relevant_evt_OF_i_A48 = 561 ;
            int failI_OF_i_A48 = 562 ;
            int to_be_fired_OF_i_A48 = 563 ;
            int already_standby_OF_i_A48 = 564 ;
            int already_required_OF_i_A48 = 565 ;
            int required_OF_i_A49 = 566 ;
            int already_S_OF_i_A49 = 567 ;
            int S_OF_i_A49 = 568 ;
            int relevant_evt_OF_i_A49 = 569 ;
            int failI_OF_i_A49 = 570 ;
            int to_be_fired_OF_i_A49 = 571 ;
            int already_standby_OF_i_A49 = 572 ;
            int already_required_OF_i_A49 = 573 ;
            int required_OF_i_A50 = 574 ;
            int already_S_OF_i_A50 = 575 ;
            int S_OF_i_A50 = 576 ;
            int relevant_evt_OF_i_A50 = 577 ;
            int failI_OF_i_A50 = 578 ;
            int to_be_fired_OF_i_A50 = 579 ;
            int already_standby_OF_i_A50 = 580 ;
            int already_required_OF_i_A50 = 581 ;
            int required_OF_i_A51 = 582 ;
            int already_S_OF_i_A51 = 583 ;
            int S_OF_i_A51 = 584 ;
            int relevant_evt_OF_i_A51 = 585 ;
            int failI_OF_i_A51 = 586 ;
            int to_be_fired_OF_i_A51 = 587 ;
            int already_standby_OF_i_A51 = 588 ;
            int already_required_OF_i_A51 = 589 ;
            int required_OF_i_A52 = 590 ;
            int already_S_OF_i_A52 = 591 ;
            int S_OF_i_A52 = 592 ;
            int relevant_evt_OF_i_A52 = 593 ;
            int failI_OF_i_A52 = 594 ;
            int to_be_fired_OF_i_A52 = 595 ;
            int already_standby_OF_i_A52 = 596 ;
            int already_required_OF_i_A52 = 597 ;
            int required_OF_i_A53 = 598 ;
            int already_S_OF_i_A53 = 599 ;
            int S_OF_i_A53 = 600 ;
            int relevant_evt_OF_i_A53 = 601 ;
            int failI_OF_i_A53 = 602 ;
            int to_be_fired_OF_i_A53 = 603 ;
            int already_standby_OF_i_A53 = 604 ;
            int already_required_OF_i_A53 = 605 ;




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