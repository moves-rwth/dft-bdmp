#include <iostream>
#include "FigaroModelvgs_8_Trim_Article_No_repair.h"

        using namespace std;





        namespace storm{
            namespace figaro{
                /* ---------- DECLARATION OF OCCURRENCE RULES FIRING FLAGS ------------ */
        //        storm::figaro::FigaroProgram_"+program_name+"::FigaroProgram_"+program_name+"()
        //        {
        //        for(int i=0; i < numBoolState; i++)
        //            boolState[i]=0;
        //
        //        }
        
void storm::figaro::FigaroProgram_vgs_8_Trim_Article_No_repair::init()
{
	//cout <<">>>>>>>>>>>>>>>>>>>> Initialization of variables <<<<<<<<<<<<<<<<<<<<<<<" << endl;

	REINITIALISATION_OF_required_OF_A0 = true;
	boolState[already_S_OF_A0] = false;
	REINITIALISATION_OF_S_OF_A0 = false;
	REINITIALISATION_OF_relevant_evt_OF_A0 = false;
	REINITIALISATION_OF_required_OF_A1 = true;
	boolState[already_S_OF_A1] = false;
	REINITIALISATION_OF_S_OF_A1 = false;
	REINITIALISATION_OF_relevant_evt_OF_A1 = false;
	REINITIALISATION_OF_required_OF_A10 = true;
	boolState[already_S_OF_A10] = false;
	REINITIALISATION_OF_S_OF_A10 = false;
	REINITIALISATION_OF_relevant_evt_OF_A10 = false;
	boolState[failF_OF_A10] = false;
	REINITIALISATION_OF_required_OF_A100 = true;
	boolState[already_S_OF_A100] = false;
	REINITIALISATION_OF_S_OF_A100 = false;
	REINITIALISATION_OF_relevant_evt_OF_A100 = false;
	boolState[failF_OF_A100] = false;
	REINITIALISATION_OF_required_OF_A101 = true;
	boolState[already_S_OF_A101] = false;
	REINITIALISATION_OF_S_OF_A101 = false;
	REINITIALISATION_OF_relevant_evt_OF_A101 = false;
	boolState[failF_OF_A101] = false;
	REINITIALISATION_OF_required_OF_A102 = true;
	boolState[already_S_OF_A102] = false;
	REINITIALISATION_OF_S_OF_A102 = false;
	REINITIALISATION_OF_relevant_evt_OF_A102 = false;
	boolState[failF_OF_A102] = false;
	REINITIALISATION_OF_required_OF_A103 = true;
	boolState[already_S_OF_A103] = false;
	REINITIALISATION_OF_S_OF_A103 = false;
	REINITIALISATION_OF_relevant_evt_OF_A103 = false;
	REINITIALISATION_OF_required_OF_A105 = true;
	boolState[already_S_OF_A105] = false;
	REINITIALISATION_OF_S_OF_A105 = false;
	REINITIALISATION_OF_relevant_evt_OF_A105 = false;
	boolState[failF_OF_A105] = false;
	REINITIALISATION_OF_required_OF_A106 = true;
	boolState[already_S_OF_A106] = false;
	REINITIALISATION_OF_S_OF_A106 = false;
	REINITIALISATION_OF_relevant_evt_OF_A106 = false;
	boolState[failF_OF_A106] = false;
	REINITIALISATION_OF_required_OF_A107 = true;
	boolState[already_S_OF_A107] = false;
	REINITIALISATION_OF_S_OF_A107 = false;
	REINITIALISATION_OF_relevant_evt_OF_A107 = false;
	REINITIALISATION_OF_required_OF_A109 = true;
	boolState[already_S_OF_A109] = false;
	REINITIALISATION_OF_S_OF_A109 = false;
	REINITIALISATION_OF_relevant_evt_OF_A109 = false;
	boolState[failF_OF_A109] = false;
	REINITIALISATION_OF_required_OF_A11 = true;
	boolState[already_S_OF_A11] = false;
	REINITIALISATION_OF_S_OF_A11 = false;
	REINITIALISATION_OF_relevant_evt_OF_A11 = false;
	REINITIALISATION_OF_required_OF_A110 = true;
	boolState[already_S_OF_A110] = false;
	REINITIALISATION_OF_S_OF_A110 = false;
	REINITIALISATION_OF_relevant_evt_OF_A110 = false;
	boolState[failF_OF_A110] = false;
	REINITIALISATION_OF_required_OF_A111 = true;
	boolState[already_S_OF_A111] = false;
	REINITIALISATION_OF_S_OF_A111 = false;
	REINITIALISATION_OF_relevant_evt_OF_A111 = false;
	boolState[failF_OF_A111] = false;
	REINITIALISATION_OF_required_OF_A112 = true;
	boolState[already_S_OF_A112] = false;
	REINITIALISATION_OF_S_OF_A112 = false;
	REINITIALISATION_OF_relevant_evt_OF_A112 = false;
	REINITIALISATION_OF_required_OF_A114 = true;
	boolState[already_S_OF_A114] = false;
	REINITIALISATION_OF_S_OF_A114 = false;
	REINITIALISATION_OF_relevant_evt_OF_A114 = false;
	boolState[failF_OF_A114] = false;
	REINITIALISATION_OF_required_OF_A115 = true;
	boolState[already_S_OF_A115] = false;
	REINITIALISATION_OF_S_OF_A115 = false;
	REINITIALISATION_OF_relevant_evt_OF_A115 = false;
	boolState[failF_OF_A115] = false;
	REINITIALISATION_OF_required_OF_A116 = true;
	boolState[already_S_OF_A116] = false;
	REINITIALISATION_OF_S_OF_A116 = false;
	REINITIALISATION_OF_relevant_evt_OF_A116 = false;
	REINITIALISATION_OF_required_OF_A118 = true;
	boolState[already_S_OF_A118] = false;
	REINITIALISATION_OF_S_OF_A118 = false;
	REINITIALISATION_OF_relevant_evt_OF_A118 = false;
	boolState[failF_OF_A118] = false;
	REINITIALISATION_OF_required_OF_A119 = true;
	boolState[already_S_OF_A119] = false;
	REINITIALISATION_OF_S_OF_A119 = false;
	REINITIALISATION_OF_relevant_evt_OF_A119 = false;
	boolState[failF_OF_A119] = false;
	REINITIALISATION_OF_required_OF_A120 = true;
	boolState[already_S_OF_A120] = false;
	REINITIALISATION_OF_S_OF_A120 = false;
	REINITIALISATION_OF_relevant_evt_OF_A120 = false;
	boolState[failF_OF_A120] = false;
	REINITIALISATION_OF_required_OF_A121 = true;
	boolState[already_S_OF_A121] = false;
	REINITIALISATION_OF_S_OF_A121 = false;
	REINITIALISATION_OF_relevant_evt_OF_A121 = false;
	REINITIALISATION_OF_required_OF_A123 = true;
	boolState[already_S_OF_A123] = false;
	REINITIALISATION_OF_S_OF_A123 = false;
	REINITIALISATION_OF_relevant_evt_OF_A123 = false;
	boolState[failF_OF_A123] = false;
	REINITIALISATION_OF_required_OF_A124 = true;
	boolState[already_S_OF_A124] = false;
	REINITIALISATION_OF_S_OF_A124 = false;
	REINITIALISATION_OF_relevant_evt_OF_A124 = false;
	boolState[failF_OF_A124] = false;
	REINITIALISATION_OF_required_OF_A125 = true;
	boolState[already_S_OF_A125] = false;
	REINITIALISATION_OF_S_OF_A125 = false;
	REINITIALISATION_OF_relevant_evt_OF_A125 = false;
	REINITIALISATION_OF_required_OF_A127 = true;
	boolState[already_S_OF_A127] = false;
	REINITIALISATION_OF_S_OF_A127 = false;
	REINITIALISATION_OF_relevant_evt_OF_A127 = false;
	boolState[failF_OF_A127] = false;
	REINITIALISATION_OF_required_OF_A128 = true;
	boolState[already_S_OF_A128] = false;
	REINITIALISATION_OF_S_OF_A128 = false;
	REINITIALISATION_OF_relevant_evt_OF_A128 = false;
	boolState[failF_OF_A128] = false;
	REINITIALISATION_OF_required_OF_A129 = true;
	boolState[already_S_OF_A129] = false;
	REINITIALISATION_OF_S_OF_A129 = false;
	REINITIALISATION_OF_relevant_evt_OF_A129 = false;
	boolState[failF_OF_A129] = false;
	REINITIALISATION_OF_required_OF_A13 = true;
	boolState[already_S_OF_A13] = false;
	REINITIALISATION_OF_S_OF_A13 = false;
	REINITIALISATION_OF_relevant_evt_OF_A13 = false;
	boolState[failF_OF_A13] = false;
	REINITIALISATION_OF_required_OF_A130 = true;
	boolState[already_S_OF_A130] = false;
	REINITIALISATION_OF_S_OF_A130 = false;
	REINITIALISATION_OF_relevant_evt_OF_A130 = false;
	REINITIALISATION_OF_required_OF_A132 = true;
	boolState[already_S_OF_A132] = false;
	REINITIALISATION_OF_S_OF_A132 = false;
	REINITIALISATION_OF_relevant_evt_OF_A132 = false;
	boolState[failF_OF_A132] = false;
	REINITIALISATION_OF_required_OF_A133 = true;
	boolState[already_S_OF_A133] = false;
	REINITIALISATION_OF_S_OF_A133 = false;
	REINITIALISATION_OF_relevant_evt_OF_A133 = false;
	boolState[failF_OF_A133] = false;
	REINITIALISATION_OF_required_OF_A134 = true;
	boolState[already_S_OF_A134] = false;
	REINITIALISATION_OF_S_OF_A134 = false;
	REINITIALISATION_OF_relevant_evt_OF_A134 = false;
	REINITIALISATION_OF_required_OF_A136 = true;
	boolState[already_S_OF_A136] = false;
	REINITIALISATION_OF_S_OF_A136 = false;
	REINITIALISATION_OF_relevant_evt_OF_A136 = false;
	boolState[failF_OF_A136] = false;
	REINITIALISATION_OF_required_OF_A137 = true;
	boolState[already_S_OF_A137] = false;
	REINITIALISATION_OF_S_OF_A137 = false;
	REINITIALISATION_OF_relevant_evt_OF_A137 = false;
	boolState[failF_OF_A137] = false;
	REINITIALISATION_OF_required_OF_A138 = true;
	boolState[already_S_OF_A138] = false;
	REINITIALISATION_OF_S_OF_A138 = false;
	REINITIALISATION_OF_relevant_evt_OF_A138 = false;
	boolState[failF_OF_A138] = false;
	REINITIALISATION_OF_required_OF_A139 = true;
	boolState[already_S_OF_A139] = false;
	REINITIALISATION_OF_S_OF_A139 = false;
	REINITIALISATION_OF_relevant_evt_OF_A139 = false;
	REINITIALISATION_OF_required_OF_A14 = true;
	boolState[already_S_OF_A14] = false;
	REINITIALISATION_OF_S_OF_A14 = false;
	REINITIALISATION_OF_relevant_evt_OF_A14 = false;
	REINITIALISATION_OF_required_OF_A141 = true;
	boolState[already_S_OF_A141] = false;
	REINITIALISATION_OF_S_OF_A141 = false;
	REINITIALISATION_OF_relevant_evt_OF_A141 = false;
	boolState[failF_OF_A141] = false;
	REINITIALISATION_OF_required_OF_A142 = true;
	boolState[already_S_OF_A142] = false;
	REINITIALISATION_OF_S_OF_A142 = false;
	REINITIALISATION_OF_relevant_evt_OF_A142 = false;
	boolState[failF_OF_A142] = false;
	REINITIALISATION_OF_required_OF_A143 = true;
	boolState[already_S_OF_A143] = false;
	REINITIALISATION_OF_S_OF_A143 = false;
	REINITIALISATION_OF_relevant_evt_OF_A143 = false;
	REINITIALISATION_OF_required_OF_A145 = true;
	boolState[already_S_OF_A145] = false;
	REINITIALISATION_OF_S_OF_A145 = false;
	REINITIALISATION_OF_relevant_evt_OF_A145 = false;
	boolState[failF_OF_A145] = false;
	REINITIALISATION_OF_required_OF_A146 = true;
	boolState[already_S_OF_A146] = false;
	REINITIALISATION_OF_S_OF_A146 = false;
	REINITIALISATION_OF_relevant_evt_OF_A146 = false;
	boolState[failF_OF_A146] = false;
	REINITIALISATION_OF_required_OF_A147 = true;
	boolState[already_S_OF_A147] = false;
	REINITIALISATION_OF_S_OF_A147 = false;
	REINITIALISATION_OF_relevant_evt_OF_A147 = false;
	boolState[failF_OF_A147] = false;
	REINITIALISATION_OF_required_OF_A148 = true;
	boolState[already_S_OF_A148] = false;
	REINITIALISATION_OF_S_OF_A148 = false;
	REINITIALISATION_OF_relevant_evt_OF_A148 = false;
	REINITIALISATION_OF_required_OF_A150 = true;
	boolState[already_S_OF_A150] = false;
	REINITIALISATION_OF_S_OF_A150 = false;
	REINITIALISATION_OF_relevant_evt_OF_A150 = false;
	boolState[failF_OF_A150] = false;
	REINITIALISATION_OF_required_OF_A151 = true;
	boolState[already_S_OF_A151] = false;
	REINITIALISATION_OF_S_OF_A151 = false;
	REINITIALISATION_OF_relevant_evt_OF_A151 = false;
	boolState[failF_OF_A151] = false;
	REINITIALISATION_OF_required_OF_A152 = true;
	boolState[already_S_OF_A152] = false;
	REINITIALISATION_OF_S_OF_A152 = false;
	REINITIALISATION_OF_relevant_evt_OF_A152 = false;
	REINITIALISATION_OF_required_OF_A154 = true;
	boolState[already_S_OF_A154] = false;
	REINITIALISATION_OF_S_OF_A154 = false;
	REINITIALISATION_OF_relevant_evt_OF_A154 = false;
	boolState[failF_OF_A154] = false;
	REINITIALISATION_OF_required_OF_A155 = true;
	boolState[already_S_OF_A155] = false;
	REINITIALISATION_OF_S_OF_A155 = false;
	REINITIALISATION_OF_relevant_evt_OF_A155 = false;
	boolState[failF_OF_A155] = false;
	REINITIALISATION_OF_required_OF_A156 = true;
	boolState[already_S_OF_A156] = false;
	REINITIALISATION_OF_S_OF_A156 = false;
	REINITIALISATION_OF_relevant_evt_OF_A156 = false;
	boolState[failF_OF_A156] = false;
	REINITIALISATION_OF_required_OF_A157 = true;
	boolState[already_S_OF_A157] = false;
	REINITIALISATION_OF_S_OF_A157 = false;
	REINITIALISATION_OF_relevant_evt_OF_A157 = false;
	REINITIALISATION_OF_required_OF_A159 = true;
	boolState[already_S_OF_A159] = false;
	REINITIALISATION_OF_S_OF_A159 = false;
	REINITIALISATION_OF_relevant_evt_OF_A159 = false;
	boolState[failF_OF_A159] = false;
	REINITIALISATION_OF_required_OF_A16 = true;
	boolState[already_S_OF_A16] = false;
	REINITIALISATION_OF_S_OF_A16 = false;
	REINITIALISATION_OF_relevant_evt_OF_A16 = false;
	boolState[failF_OF_A16] = false;
	REINITIALISATION_OF_required_OF_A160 = true;
	boolState[already_S_OF_A160] = false;
	REINITIALISATION_OF_S_OF_A160 = false;
	REINITIALISATION_OF_relevant_evt_OF_A160 = false;
	boolState[failF_OF_A160] = false;
	REINITIALISATION_OF_required_OF_A161 = true;
	boolState[already_S_OF_A161] = false;
	REINITIALISATION_OF_S_OF_A161 = false;
	REINITIALISATION_OF_relevant_evt_OF_A161 = false;
	REINITIALISATION_OF_required_OF_A163 = true;
	boolState[already_S_OF_A163] = false;
	REINITIALISATION_OF_S_OF_A163 = false;
	REINITIALISATION_OF_relevant_evt_OF_A163 = false;
	boolState[failF_OF_A163] = false;
	REINITIALISATION_OF_required_OF_A164 = true;
	boolState[already_S_OF_A164] = false;
	REINITIALISATION_OF_S_OF_A164 = false;
	REINITIALISATION_OF_relevant_evt_OF_A164 = false;
	boolState[failF_OF_A164] = false;
	REINITIALISATION_OF_required_OF_A165 = true;
	boolState[already_S_OF_A165] = false;
	REINITIALISATION_OF_S_OF_A165 = false;
	REINITIALISATION_OF_relevant_evt_OF_A165 = false;
	boolState[failF_OF_A165] = false;
	REINITIALISATION_OF_required_OF_A166 = true;
	boolState[already_S_OF_A166] = false;
	REINITIALISATION_OF_S_OF_A166 = false;
	REINITIALISATION_OF_relevant_evt_OF_A166 = false;
	REINITIALISATION_OF_required_OF_A168 = true;
	boolState[already_S_OF_A168] = false;
	REINITIALISATION_OF_S_OF_A168 = false;
	REINITIALISATION_OF_relevant_evt_OF_A168 = false;
	boolState[failF_OF_A168] = false;
	REINITIALISATION_OF_required_OF_A169 = true;
	boolState[already_S_OF_A169] = false;
	REINITIALISATION_OF_S_OF_A169 = false;
	REINITIALISATION_OF_relevant_evt_OF_A169 = false;
	boolState[failF_OF_A169] = false;
	REINITIALISATION_OF_required_OF_A17 = true;
	boolState[already_S_OF_A17] = false;
	REINITIALISATION_OF_S_OF_A17 = false;
	REINITIALISATION_OF_relevant_evt_OF_A17 = false;
	REINITIALISATION_OF_required_OF_A170 = true;
	boolState[already_S_OF_A170] = false;
	REINITIALISATION_OF_S_OF_A170 = false;
	REINITIALISATION_OF_relevant_evt_OF_A170 = false;
	boolState[failF_OF_A170] = false;
	REINITIALISATION_OF_required_OF_A171 = true;
	boolState[already_S_OF_A171] = false;
	REINITIALISATION_OF_S_OF_A171 = false;
	REINITIALISATION_OF_relevant_evt_OF_A171 = false;
	REINITIALISATION_OF_required_OF_A173 = true;
	boolState[already_S_OF_A173] = false;
	REINITIALISATION_OF_S_OF_A173 = false;
	REINITIALISATION_OF_relevant_evt_OF_A173 = false;
	REINITIALISATION_OF_required_OF_A174 = true;
	boolState[already_S_OF_A174] = false;
	REINITIALISATION_OF_S_OF_A174 = false;
	REINITIALISATION_OF_relevant_evt_OF_A174 = false;
	boolState[failF_OF_A174] = false;
	REINITIALISATION_OF_required_OF_A175 = true;
	boolState[already_S_OF_A175] = false;
	REINITIALISATION_OF_S_OF_A175 = false;
	REINITIALISATION_OF_relevant_evt_OF_A175 = false;
	boolState[failF_OF_A175] = false;
	REINITIALISATION_OF_required_OF_A176 = true;
	boolState[already_S_OF_A176] = false;
	REINITIALISATION_OF_S_OF_A176 = false;
	REINITIALISATION_OF_relevant_evt_OF_A176 = false;
	boolState[failF_OF_A176] = false;
	REINITIALISATION_OF_required_OF_A177 = true;
	boolState[already_S_OF_A177] = false;
	REINITIALISATION_OF_S_OF_A177 = false;
	REINITIALISATION_OF_relevant_evt_OF_A177 = false;
	REINITIALISATION_OF_required_OF_A179 = true;
	boolState[already_S_OF_A179] = false;
	REINITIALISATION_OF_S_OF_A179 = false;
	REINITIALISATION_OF_relevant_evt_OF_A179 = false;
	boolState[failF_OF_A179] = false;
	REINITIALISATION_OF_required_OF_A180 = true;
	boolState[already_S_OF_A180] = false;
	REINITIALISATION_OF_S_OF_A180 = false;
	REINITIALISATION_OF_relevant_evt_OF_A180 = false;
	boolState[failF_OF_A180] = false;
	REINITIALISATION_OF_required_OF_A181 = true;
	boolState[already_S_OF_A181] = false;
	REINITIALISATION_OF_S_OF_A181 = false;
	REINITIALISATION_OF_relevant_evt_OF_A181 = false;
	boolState[failF_OF_A181] = false;
	REINITIALISATION_OF_required_OF_A182 = true;
	boolState[already_S_OF_A182] = false;
	REINITIALISATION_OF_S_OF_A182 = false;
	REINITIALISATION_OF_relevant_evt_OF_A182 = false;
	REINITIALISATION_OF_required_OF_A184 = true;
	boolState[already_S_OF_A184] = false;
	REINITIALISATION_OF_S_OF_A184 = false;
	REINITIALISATION_OF_relevant_evt_OF_A184 = false;
	REINITIALISATION_OF_required_OF_A185 = true;
	boolState[already_S_OF_A185] = false;
	REINITIALISATION_OF_S_OF_A185 = false;
	REINITIALISATION_OF_relevant_evt_OF_A185 = false;
	REINITIALISATION_OF_required_OF_A186 = true;
	boolState[already_S_OF_A186] = false;
	REINITIALISATION_OF_S_OF_A186 = false;
	REINITIALISATION_OF_relevant_evt_OF_A186 = false;
	REINITIALISATION_OF_required_OF_A187 = true;
	boolState[already_S_OF_A187] = false;
	REINITIALISATION_OF_S_OF_A187 = false;
	REINITIALISATION_OF_relevant_evt_OF_A187 = false;
	REINITIALISATION_OF_required_OF_A188 = true;
	boolState[already_S_OF_A188] = false;
	REINITIALISATION_OF_S_OF_A188 = false;
	REINITIALISATION_OF_relevant_evt_OF_A188 = false;
	REINITIALISATION_OF_required_OF_A189 = true;
	boolState[already_S_OF_A189] = false;
	REINITIALISATION_OF_S_OF_A189 = false;
	REINITIALISATION_OF_relevant_evt_OF_A189 = false;
	REINITIALISATION_OF_required_OF_A19 = true;
	boolState[already_S_OF_A19] = false;
	REINITIALISATION_OF_S_OF_A19 = false;
	REINITIALISATION_OF_relevant_evt_OF_A19 = false;
	boolState[failF_OF_A19] = false;
	REINITIALISATION_OF_required_OF_A190 = true;
	boolState[already_S_OF_A190] = false;
	REINITIALISATION_OF_S_OF_A190 = false;
	REINITIALISATION_OF_relevant_evt_OF_A190 = false;
	REINITIALISATION_OF_required_OF_A191 = true;
	boolState[already_S_OF_A191] = false;
	REINITIALISATION_OF_S_OF_A191 = false;
	REINITIALISATION_OF_relevant_evt_OF_A191 = false;
	REINITIALISATION_OF_required_OF_A192 = true;
	boolState[already_S_OF_A192] = false;
	REINITIALISATION_OF_S_OF_A192 = false;
	REINITIALISATION_OF_relevant_evt_OF_A192 = false;
	REINITIALISATION_OF_required_OF_A193 = true;
	boolState[already_S_OF_A193] = false;
	REINITIALISATION_OF_S_OF_A193 = false;
	REINITIALISATION_OF_relevant_evt_OF_A193 = false;
	REINITIALISATION_OF_required_OF_A2 = true;
	boolState[already_S_OF_A2] = false;
	REINITIALISATION_OF_S_OF_A2 = false;
	REINITIALISATION_OF_relevant_evt_OF_A2 = false;
	REINITIALISATION_OF_required_OF_A20 = true;
	boolState[already_S_OF_A20] = false;
	REINITIALISATION_OF_S_OF_A20 = false;
	REINITIALISATION_OF_relevant_evt_OF_A20 = false;
	REINITIALISATION_OF_required_OF_A22 = true;
	boolState[already_S_OF_A22] = false;
	REINITIALISATION_OF_S_OF_A22 = false;
	REINITIALISATION_OF_relevant_evt_OF_A22 = false;
	boolState[failF_OF_A22] = false;
	REINITIALISATION_OF_required_OF_A23 = true;
	boolState[already_S_OF_A23] = false;
	REINITIALISATION_OF_S_OF_A23 = false;
	REINITIALISATION_OF_relevant_evt_OF_A23 = false;
	REINITIALISATION_OF_required_OF_A25 = true;
	boolState[already_S_OF_A25] = false;
	REINITIALISATION_OF_S_OF_A25 = false;
	REINITIALISATION_OF_relevant_evt_OF_A25 = false;
	boolState[failF_OF_A25] = false;
	REINITIALISATION_OF_required_OF_A26 = true;
	boolState[already_S_OF_A26] = false;
	REINITIALISATION_OF_S_OF_A26 = false;
	REINITIALISATION_OF_relevant_evt_OF_A26 = false;
	REINITIALISATION_OF_required_OF_A28 = true;
	boolState[already_S_OF_A28] = false;
	REINITIALISATION_OF_S_OF_A28 = false;
	REINITIALISATION_OF_relevant_evt_OF_A28 = false;
	boolState[failF_OF_A28] = false;
	REINITIALISATION_OF_required_OF_A29 = true;
	boolState[already_S_OF_A29] = false;
	REINITIALISATION_OF_S_OF_A29 = false;
	REINITIALISATION_OF_relevant_evt_OF_A29 = false;
	REINITIALISATION_OF_required_OF_A31 = true;
	boolState[already_S_OF_A31] = false;
	REINITIALISATION_OF_S_OF_A31 = false;
	REINITIALISATION_OF_relevant_evt_OF_A31 = false;
	boolState[failF_OF_A31] = false;
	REINITIALISATION_OF_required_OF_A32 = true;
	boolState[already_S_OF_A32] = false;
	REINITIALISATION_OF_S_OF_A32 = false;
	REINITIALISATION_OF_relevant_evt_OF_A32 = false;
	REINITIALISATION_OF_required_OF_A34 = true;
	boolState[already_S_OF_A34] = false;
	REINITIALISATION_OF_S_OF_A34 = false;
	REINITIALISATION_OF_relevant_evt_OF_A34 = false;
	boolState[failF_OF_A34] = false;
	REINITIALISATION_OF_required_OF_A35 = true;
	boolState[already_S_OF_A35] = false;
	REINITIALISATION_OF_S_OF_A35 = false;
	REINITIALISATION_OF_relevant_evt_OF_A35 = false;
	REINITIALISATION_OF_required_OF_A37 = true;
	boolState[already_S_OF_A37] = false;
	REINITIALISATION_OF_S_OF_A37 = false;
	REINITIALISATION_OF_relevant_evt_OF_A37 = false;
	boolState[failF_OF_A37] = false;
	REINITIALISATION_OF_required_OF_A38 = true;
	boolState[already_S_OF_A38] = false;
	REINITIALISATION_OF_S_OF_A38 = false;
	REINITIALISATION_OF_relevant_evt_OF_A38 = false;
	REINITIALISATION_OF_required_OF_A4 = true;
	boolState[already_S_OF_A4] = false;
	REINITIALISATION_OF_S_OF_A4 = false;
	REINITIALISATION_OF_relevant_evt_OF_A4 = false;
	boolState[failF_OF_A4] = false;
	REINITIALISATION_OF_required_OF_A40 = true;
	boolState[already_S_OF_A40] = false;
	REINITIALISATION_OF_S_OF_A40 = false;
	REINITIALISATION_OF_relevant_evt_OF_A40 = false;
	boolState[failF_OF_A40] = false;
	REINITIALISATION_OF_required_OF_A41 = true;
	boolState[already_S_OF_A41] = false;
	REINITIALISATION_OF_S_OF_A41 = false;
	REINITIALISATION_OF_relevant_evt_OF_A41 = false;
	REINITIALISATION_OF_required_OF_A43 = true;
	boolState[already_S_OF_A43] = false;
	REINITIALISATION_OF_S_OF_A43 = false;
	REINITIALISATION_OF_relevant_evt_OF_A43 = false;
	boolState[failF_OF_A43] = false;
	REINITIALISATION_OF_required_OF_A44 = true;
	boolState[already_S_OF_A44] = false;
	REINITIALISATION_OF_S_OF_A44 = false;
	REINITIALISATION_OF_relevant_evt_OF_A44 = false;
	REINITIALISATION_OF_required_OF_A45 = true;
	boolState[already_S_OF_A45] = false;
	REINITIALISATION_OF_S_OF_A45 = false;
	REINITIALISATION_OF_relevant_evt_OF_A45 = false;
	REINITIALISATION_OF_required_OF_A47 = true;
	boolState[already_S_OF_A47] = false;
	REINITIALISATION_OF_S_OF_A47 = false;
	REINITIALISATION_OF_relevant_evt_OF_A47 = false;
	boolState[failF_OF_A47] = false;
	REINITIALISATION_OF_required_OF_A48 = true;
	boolState[already_S_OF_A48] = false;
	REINITIALISATION_OF_S_OF_A48 = false;
	REINITIALISATION_OF_relevant_evt_OF_A48 = false;
	REINITIALISATION_OF_required_OF_A49 = true;
	boolState[already_S_OF_A49] = false;
	REINITIALISATION_OF_S_OF_A49 = false;
	REINITIALISATION_OF_relevant_evt_OF_A49 = false;
	REINITIALISATION_OF_required_OF_A5 = true;
	boolState[already_S_OF_A5] = false;
	REINITIALISATION_OF_S_OF_A5 = false;
	REINITIALISATION_OF_relevant_evt_OF_A5 = false;
	REINITIALISATION_OF_required_OF_A50 = true;
	boolState[already_S_OF_A50] = false;
	REINITIALISATION_OF_S_OF_A50 = false;
	REINITIALISATION_OF_relevant_evt_OF_A50 = false;
	REINITIALISATION_OF_required_OF_A52 = true;
	boolState[already_S_OF_A52] = false;
	REINITIALISATION_OF_S_OF_A52 = false;
	REINITIALISATION_OF_relevant_evt_OF_A52 = false;
	REINITIALISATION_OF_required_OF_A53 = true;
	boolState[already_S_OF_A53] = false;
	REINITIALISATION_OF_S_OF_A53 = false;
	REINITIALISATION_OF_relevant_evt_OF_A53 = false;
	REINITIALISATION_OF_required_OF_A54 = true;
	boolState[already_S_OF_A54] = false;
	REINITIALISATION_OF_S_OF_A54 = false;
	REINITIALISATION_OF_relevant_evt_OF_A54 = false;
	REINITIALISATION_OF_required_OF_A55 = true;
	boolState[already_S_OF_A55] = false;
	REINITIALISATION_OF_S_OF_A55 = false;
	REINITIALISATION_OF_relevant_evt_OF_A55 = false;
	REINITIALISATION_OF_required_OF_A56 = true;
	boolState[already_S_OF_A56] = false;
	REINITIALISATION_OF_S_OF_A56 = false;
	REINITIALISATION_OF_relevant_evt_OF_A56 = false;
	REINITIALISATION_OF_required_OF_A57 = true;
	boolState[already_S_OF_A57] = false;
	REINITIALISATION_OF_S_OF_A57 = false;
	REINITIALISATION_OF_relevant_evt_OF_A57 = false;
	REINITIALISATION_OF_required_OF_A58 = true;
	boolState[already_S_OF_A58] = false;
	REINITIALISATION_OF_S_OF_A58 = false;
	REINITIALISATION_OF_relevant_evt_OF_A58 = false;
	REINITIALISATION_OF_required_OF_A59 = true;
	boolState[already_S_OF_A59] = false;
	REINITIALISATION_OF_S_OF_A59 = false;
	REINITIALISATION_OF_relevant_evt_OF_A59 = false;
	REINITIALISATION_OF_required_OF_A60 = true;
	boolState[already_S_OF_A60] = false;
	REINITIALISATION_OF_S_OF_A60 = false;
	REINITIALISATION_OF_relevant_evt_OF_A60 = false;
	REINITIALISATION_OF_required_OF_A61 = true;
	boolState[already_S_OF_A61] = false;
	REINITIALISATION_OF_S_OF_A61 = false;
	REINITIALISATION_OF_relevant_evt_OF_A61 = false;
	REINITIALISATION_OF_required_OF_A62 = true;
	boolState[already_S_OF_A62] = false;
	REINITIALISATION_OF_S_OF_A62 = false;
	REINITIALISATION_OF_relevant_evt_OF_A62 = false;
	REINITIALISATION_OF_required_OF_A63 = true;
	boolState[already_S_OF_A63] = false;
	REINITIALISATION_OF_S_OF_A63 = false;
	REINITIALISATION_OF_relevant_evt_OF_A63 = false;
	REINITIALISATION_OF_required_OF_A64 = true;
	boolState[already_S_OF_A64] = false;
	REINITIALISATION_OF_S_OF_A64 = false;
	REINITIALISATION_OF_relevant_evt_OF_A64 = false;
	REINITIALISATION_OF_required_OF_A65 = true;
	boolState[already_S_OF_A65] = false;
	REINITIALISATION_OF_S_OF_A65 = false;
	REINITIALISATION_OF_relevant_evt_OF_A65 = false;
	REINITIALISATION_OF_required_OF_A66 = true;
	boolState[already_S_OF_A66] = false;
	REINITIALISATION_OF_S_OF_A66 = false;
	REINITIALISATION_OF_relevant_evt_OF_A66 = false;
	REINITIALISATION_OF_required_OF_A67 = true;
	boolState[already_S_OF_A67] = false;
	REINITIALISATION_OF_S_OF_A67 = false;
	REINITIALISATION_OF_relevant_evt_OF_A67 = false;
	REINITIALISATION_OF_required_OF_A68 = true;
	boolState[already_S_OF_A68] = false;
	REINITIALISATION_OF_S_OF_A68 = false;
	REINITIALISATION_OF_relevant_evt_OF_A68 = false;
	REINITIALISATION_OF_required_OF_A69 = true;
	boolState[already_S_OF_A69] = false;
	REINITIALISATION_OF_S_OF_A69 = false;
	REINITIALISATION_OF_relevant_evt_OF_A69 = false;
	REINITIALISATION_OF_required_OF_A7 = true;
	boolState[already_S_OF_A7] = false;
	REINITIALISATION_OF_S_OF_A7 = false;
	REINITIALISATION_OF_relevant_evt_OF_A7 = false;
	boolState[failF_OF_A7] = false;
	REINITIALISATION_OF_required_OF_A70 = true;
	boolState[already_S_OF_A70] = false;
	REINITIALISATION_OF_S_OF_A70 = false;
	REINITIALISATION_OF_relevant_evt_OF_A70 = false;
	REINITIALISATION_OF_required_OF_A71 = true;
	boolState[already_S_OF_A71] = false;
	REINITIALISATION_OF_S_OF_A71 = false;
	REINITIALISATION_OF_relevant_evt_OF_A71 = false;
	REINITIALISATION_OF_required_OF_A72 = true;
	boolState[already_S_OF_A72] = false;
	REINITIALISATION_OF_S_OF_A72 = false;
	REINITIALISATION_OF_relevant_evt_OF_A72 = false;
	REINITIALISATION_OF_required_OF_A73 = true;
	boolState[already_S_OF_A73] = false;
	REINITIALISATION_OF_S_OF_A73 = false;
	REINITIALISATION_OF_relevant_evt_OF_A73 = false;
	REINITIALISATION_OF_required_OF_A74 = true;
	boolState[already_S_OF_A74] = false;
	REINITIALISATION_OF_S_OF_A74 = false;
	REINITIALISATION_OF_relevant_evt_OF_A74 = false;
	REINITIALISATION_OF_required_OF_A75 = true;
	boolState[already_S_OF_A75] = false;
	REINITIALISATION_OF_S_OF_A75 = false;
	REINITIALISATION_OF_relevant_evt_OF_A75 = false;
	REINITIALISATION_OF_required_OF_A76 = true;
	boolState[already_S_OF_A76] = false;
	REINITIALISATION_OF_S_OF_A76 = false;
	REINITIALISATION_OF_relevant_evt_OF_A76 = false;
	REINITIALISATION_OF_required_OF_A77 = true;
	boolState[already_S_OF_A77] = false;
	REINITIALISATION_OF_S_OF_A77 = false;
	REINITIALISATION_OF_relevant_evt_OF_A77 = false;
	REINITIALISATION_OF_required_OF_A78 = true;
	boolState[already_S_OF_A78] = false;
	REINITIALISATION_OF_S_OF_A78 = false;
	REINITIALISATION_OF_relevant_evt_OF_A78 = false;
	REINITIALISATION_OF_required_OF_A79 = true;
	boolState[already_S_OF_A79] = false;
	REINITIALISATION_OF_S_OF_A79 = false;
	REINITIALISATION_OF_relevant_evt_OF_A79 = false;
	REINITIALISATION_OF_required_OF_A8 = true;
	boolState[already_S_OF_A8] = false;
	REINITIALISATION_OF_S_OF_A8 = false;
	REINITIALISATION_OF_relevant_evt_OF_A8 = false;
	REINITIALISATION_OF_required_OF_A80 = true;
	boolState[already_S_OF_A80] = false;
	REINITIALISATION_OF_S_OF_A80 = false;
	REINITIALISATION_OF_relevant_evt_OF_A80 = false;
	REINITIALISATION_OF_required_OF_A81 = true;
	boolState[already_S_OF_A81] = false;
	REINITIALISATION_OF_S_OF_A81 = false;
	REINITIALISATION_OF_relevant_evt_OF_A81 = false;
	REINITIALISATION_OF_required_OF_A82 = true;
	boolState[already_S_OF_A82] = false;
	REINITIALISATION_OF_S_OF_A82 = false;
	REINITIALISATION_OF_relevant_evt_OF_A82 = false;
	REINITIALISATION_OF_required_OF_A83 = true;
	boolState[already_S_OF_A83] = false;
	REINITIALISATION_OF_S_OF_A83 = false;
	REINITIALISATION_OF_relevant_evt_OF_A83 = false;
	boolState[failF_OF_A83] = false;
	REINITIALISATION_OF_required_OF_A84 = true;
	boolState[already_S_OF_A84] = false;
	REINITIALISATION_OF_S_OF_A84 = false;
	REINITIALISATION_OF_relevant_evt_OF_A84 = false;
	boolState[failF_OF_A84] = false;
	REINITIALISATION_OF_required_OF_A85 = true;
	boolState[already_S_OF_A85] = false;
	REINITIALISATION_OF_S_OF_A85 = false;
	REINITIALISATION_OF_relevant_evt_OF_A85 = false;
	boolState[failF_OF_A85] = false;
	REINITIALISATION_OF_required_OF_A86 = true;
	boolState[already_S_OF_A86] = false;
	REINITIALISATION_OF_S_OF_A86 = false;
	REINITIALISATION_OF_relevant_evt_OF_A86 = false;
	boolState[failF_OF_A86] = false;
	REINITIALISATION_OF_required_OF_A87 = true;
	boolState[already_S_OF_A87] = false;
	REINITIALISATION_OF_S_OF_A87 = false;
	REINITIALISATION_OF_relevant_evt_OF_A87 = false;
	boolState[failF_OF_A87] = false;
	REINITIALISATION_OF_required_OF_A88 = true;
	boolState[already_S_OF_A88] = false;
	REINITIALISATION_OF_S_OF_A88 = false;
	REINITIALISATION_OF_relevant_evt_OF_A88 = false;
	boolState[failF_OF_A88] = false;
	REINITIALISATION_OF_required_OF_A89 = true;
	boolState[already_S_OF_A89] = false;
	REINITIALISATION_OF_S_OF_A89 = false;
	REINITIALISATION_OF_relevant_evt_OF_A89 = false;
	boolState[failF_OF_A89] = false;
	REINITIALISATION_OF_required_OF_A90 = true;
	boolState[already_S_OF_A90] = false;
	REINITIALISATION_OF_S_OF_A90 = false;
	REINITIALISATION_OF_relevant_evt_OF_A90 = false;
	boolState[failF_OF_A90] = false;
	REINITIALISATION_OF_required_OF_A91 = true;
	boolState[already_S_OF_A91] = false;
	REINITIALISATION_OF_S_OF_A91 = false;
	REINITIALISATION_OF_relevant_evt_OF_A91 = false;
	boolState[failF_OF_A91] = false;
	REINITIALISATION_OF_required_OF_A92 = true;
	boolState[already_S_OF_A92] = false;
	REINITIALISATION_OF_S_OF_A92 = false;
	REINITIALISATION_OF_relevant_evt_OF_A92 = false;
	boolState[failF_OF_A92] = false;
	REINITIALISATION_OF_required_OF_A93 = true;
	boolState[already_S_OF_A93] = false;
	REINITIALISATION_OF_S_OF_A93 = false;
	REINITIALISATION_OF_relevant_evt_OF_A93 = false;
	boolState[failF_OF_A93] = false;
	REINITIALISATION_OF_required_OF_A94 = true;
	boolState[already_S_OF_A94] = false;
	REINITIALISATION_OF_S_OF_A94 = false;
	REINITIALISATION_OF_relevant_evt_OF_A94 = false;
	REINITIALISATION_OF_required_OF_A96 = true;
	boolState[already_S_OF_A96] = false;
	REINITIALISATION_OF_S_OF_A96 = false;
	REINITIALISATION_OF_relevant_evt_OF_A96 = false;
	boolState[failF_OF_A96] = false;
	REINITIALISATION_OF_required_OF_A97 = true;
	boolState[already_S_OF_A97] = false;
	REINITIALISATION_OF_S_OF_A97 = false;
	REINITIALISATION_OF_relevant_evt_OF_A97 = false;
	boolState[failF_OF_A97] = false;
	REINITIALISATION_OF_required_OF_A98 = true;
	boolState[already_S_OF_A98] = false;
	REINITIALISATION_OF_S_OF_A98 = false;
	REINITIALISATION_OF_relevant_evt_OF_A98 = false;
	REINITIALISATION_OF_required_OF_UE_1 = true;
	boolState[already_S_OF_UE_1] = false;
	REINITIALISATION_OF_S_OF_UE_1 = false;
	REINITIALISATION_OF_relevant_evt_OF_UE_1 = false;
	REINITIALISATION_OF_required_OF_f_A52 = true;
	boolState[already_S_OF_f_A52] = false;
	REINITIALISATION_OF_S_OF_f_A52 = false;
	REINITIALISATION_OF_relevant_evt_OF_f_A52 = false;
	boolState[failF_OF_f_A52] = false;
	REINITIALISATION_OF_required_OF_f_A53 = true;
	boolState[already_S_OF_f_A53] = false;
	REINITIALISATION_OF_S_OF_f_A53 = false;
	REINITIALISATION_OF_relevant_evt_OF_f_A53 = false;
	boolState[failF_OF_f_A53] = false;
	REINITIALISATION_OF_required_OF_f_A54 = true;
	boolState[already_S_OF_f_A54] = false;
	REINITIALISATION_OF_S_OF_f_A54 = false;
	REINITIALISATION_OF_relevant_evt_OF_f_A54 = false;
	boolState[failF_OF_f_A54] = false;
	REINITIALISATION_OF_required_OF_f_A55 = true;
	boolState[already_S_OF_f_A55] = false;
	REINITIALISATION_OF_S_OF_f_A55 = false;
	REINITIALISATION_OF_relevant_evt_OF_f_A55 = false;
	boolState[failF_OF_f_A55] = false;
	REINITIALISATION_OF_required_OF_f_A56 = true;
	boolState[already_S_OF_f_A56] = false;
	REINITIALISATION_OF_S_OF_f_A56 = false;
	REINITIALISATION_OF_relevant_evt_OF_f_A56 = false;
	boolState[failF_OF_f_A56] = false;
	REINITIALISATION_OF_required_OF_f_A57 = true;
	boolState[already_S_OF_f_A57] = false;
	REINITIALISATION_OF_S_OF_f_A57 = false;
	REINITIALISATION_OF_relevant_evt_OF_f_A57 = false;
	boolState[failF_OF_f_A57] = false;
	REINITIALISATION_OF_required_OF_f_A58 = true;
	boolState[already_S_OF_f_A58] = false;
	REINITIALISATION_OF_S_OF_f_A58 = false;
	REINITIALISATION_OF_relevant_evt_OF_f_A58 = false;
	boolState[failF_OF_f_A58] = false;
	REINITIALISATION_OF_required_OF_f_A60 = true;
	boolState[already_S_OF_f_A60] = false;
	REINITIALISATION_OF_S_OF_f_A60 = false;
	REINITIALISATION_OF_relevant_evt_OF_f_A60 = false;
	boolState[failF_OF_f_A60] = false;
	REINITIALISATION_OF_required_OF_f_A61 = true;
	boolState[already_S_OF_f_A61] = false;
	REINITIALISATION_OF_S_OF_f_A61 = false;
	REINITIALISATION_OF_relevant_evt_OF_f_A61 = false;
	boolState[failF_OF_f_A61] = false;
	REINITIALISATION_OF_required_OF_f_A63 = true;
	boolState[already_S_OF_f_A63] = false;
	REINITIALISATION_OF_S_OF_f_A63 = false;
	REINITIALISATION_OF_relevant_evt_OF_f_A63 = false;
	boolState[failF_OF_f_A63] = false;
	REINITIALISATION_OF_required_OF_f_A64 = true;
	boolState[already_S_OF_f_A64] = false;
	REINITIALISATION_OF_S_OF_f_A64 = false;
	REINITIALISATION_OF_relevant_evt_OF_f_A64 = false;
	boolState[failF_OF_f_A64] = false;
	REINITIALISATION_OF_required_OF_f_A66 = true;
	boolState[already_S_OF_f_A66] = false;
	REINITIALISATION_OF_S_OF_f_A66 = false;
	REINITIALISATION_OF_relevant_evt_OF_f_A66 = false;
	boolState[failF_OF_f_A66] = false;
	REINITIALISATION_OF_required_OF_f_A67 = true;
	boolState[already_S_OF_f_A67] = false;
	REINITIALISATION_OF_S_OF_f_A67 = false;
	REINITIALISATION_OF_relevant_evt_OF_f_A67 = false;
	boolState[failF_OF_f_A67] = false;
	REINITIALISATION_OF_required_OF_f_A68 = true;
	boolState[already_S_OF_f_A68] = false;
	REINITIALISATION_OF_S_OF_f_A68 = false;
	REINITIALISATION_OF_relevant_evt_OF_f_A68 = false;
	boolState[failF_OF_f_A68] = false;
	REINITIALISATION_OF_required_OF_f_A69 = true;
	boolState[already_S_OF_f_A69] = false;
	REINITIALISATION_OF_S_OF_f_A69 = false;
	REINITIALISATION_OF_relevant_evt_OF_f_A69 = false;
	boolState[failF_OF_f_A69] = false;
	REINITIALISATION_OF_required_OF_f_A70 = true;
	boolState[already_S_OF_f_A70] = false;
	REINITIALISATION_OF_S_OF_f_A70 = false;
	REINITIALISATION_OF_relevant_evt_OF_f_A70 = false;
	boolState[failF_OF_f_A70] = false;
	REINITIALISATION_OF_required_OF_f_A71 = true;
	boolState[already_S_OF_f_A71] = false;
	REINITIALISATION_OF_S_OF_f_A71 = false;
	REINITIALISATION_OF_relevant_evt_OF_f_A71 = false;
	boolState[failF_OF_f_A71] = false;
	REINITIALISATION_OF_required_OF_f_A72 = true;
	boolState[already_S_OF_f_A72] = false;
	REINITIALISATION_OF_S_OF_f_A72 = false;
	REINITIALISATION_OF_relevant_evt_OF_f_A72 = false;
	boolState[failF_OF_f_A72] = false;
	REINITIALISATION_OF_required_OF_f_A73 = true;
	boolState[already_S_OF_f_A73] = false;
	REINITIALISATION_OF_S_OF_f_A73 = false;
	REINITIALISATION_OF_relevant_evt_OF_f_A73 = false;
	boolState[failF_OF_f_A73] = false;
	REINITIALISATION_OF_required_OF_f_A74 = true;
	boolState[already_S_OF_f_A74] = false;
	REINITIALISATION_OF_S_OF_f_A74 = false;
	REINITIALISATION_OF_relevant_evt_OF_f_A74 = false;
	boolState[failF_OF_f_A74] = false;
	REINITIALISATION_OF_required_OF_f_A75 = true;
	boolState[already_S_OF_f_A75] = false;
	REINITIALISATION_OF_S_OF_f_A75 = false;
	REINITIALISATION_OF_relevant_evt_OF_f_A75 = false;
	boolState[failF_OF_f_A75] = false;
	REINITIALISATION_OF_required_OF_f_A76 = true;
	boolState[already_S_OF_f_A76] = false;
	REINITIALISATION_OF_S_OF_f_A76 = false;
	REINITIALISATION_OF_relevant_evt_OF_f_A76 = false;
	boolState[failF_OF_f_A76] = false;
	REINITIALISATION_OF_required_OF_f_A77 = true;
	boolState[already_S_OF_f_A77] = false;
	REINITIALISATION_OF_S_OF_f_A77 = false;
	REINITIALISATION_OF_relevant_evt_OF_f_A77 = false;
	boolState[failF_OF_f_A77] = false;
	REINITIALISATION_OF_required_OF_f_A81 = true;
	boolState[already_S_OF_f_A81] = false;
	REINITIALISATION_OF_S_OF_f_A81 = false;
	REINITIALISATION_OF_relevant_evt_OF_f_A81 = false;
	boolState[failF_OF_f_A81] = false;
	REINITIALISATION_OF_required_OF_i_A52 = true;
	boolState[already_S_OF_i_A52] = false;
	REINITIALISATION_OF_S_OF_i_A52 = false;
	REINITIALISATION_OF_relevant_evt_OF_i_A52 = false;
	boolState[failI_OF_i_A52] = false;
	REINITIALISATION_OF_to_be_fired_OF_i_A52 = false;
	boolState[already_standby_OF_i_A52] = false;
	boolState[already_required_OF_i_A52] = false;
	REINITIALISATION_OF_required_OF_i_A53 = true;
	boolState[already_S_OF_i_A53] = false;
	REINITIALISATION_OF_S_OF_i_A53 = false;
	REINITIALISATION_OF_relevant_evt_OF_i_A53 = false;
	boolState[failI_OF_i_A53] = false;
	REINITIALISATION_OF_to_be_fired_OF_i_A53 = false;
	boolState[already_standby_OF_i_A53] = false;
	boolState[already_required_OF_i_A53] = false;
	REINITIALISATION_OF_required_OF_i_A54 = true;
	boolState[already_S_OF_i_A54] = false;
	REINITIALISATION_OF_S_OF_i_A54 = false;
	REINITIALISATION_OF_relevant_evt_OF_i_A54 = false;
	boolState[failI_OF_i_A54] = false;
	REINITIALISATION_OF_to_be_fired_OF_i_A54 = false;
	boolState[already_standby_OF_i_A54] = false;
	boolState[already_required_OF_i_A54] = false;
	REINITIALISATION_OF_required_OF_i_A55 = true;
	boolState[already_S_OF_i_A55] = false;
	REINITIALISATION_OF_S_OF_i_A55 = false;
	REINITIALISATION_OF_relevant_evt_OF_i_A55 = false;
	boolState[failI_OF_i_A55] = false;
	REINITIALISATION_OF_to_be_fired_OF_i_A55 = false;
	boolState[already_standby_OF_i_A55] = false;
	boolState[already_required_OF_i_A55] = false;
	REINITIALISATION_OF_required_OF_i_A56 = true;
	boolState[already_S_OF_i_A56] = false;
	REINITIALISATION_OF_S_OF_i_A56 = false;
	REINITIALISATION_OF_relevant_evt_OF_i_A56 = false;
	boolState[failI_OF_i_A56] = false;
	REINITIALISATION_OF_to_be_fired_OF_i_A56 = false;
	boolState[already_standby_OF_i_A56] = false;
	boolState[already_required_OF_i_A56] = false;
	REINITIALISATION_OF_required_OF_i_A57 = true;
	boolState[already_S_OF_i_A57] = false;
	REINITIALISATION_OF_S_OF_i_A57 = false;
	REINITIALISATION_OF_relevant_evt_OF_i_A57 = false;
	boolState[failI_OF_i_A57] = false;
	REINITIALISATION_OF_to_be_fired_OF_i_A57 = false;
	boolState[already_standby_OF_i_A57] = false;
	boolState[already_required_OF_i_A57] = false;
	REINITIALISATION_OF_required_OF_i_A58 = true;
	boolState[already_S_OF_i_A58] = false;
	REINITIALISATION_OF_S_OF_i_A58 = false;
	REINITIALISATION_OF_relevant_evt_OF_i_A58 = false;
	boolState[failI_OF_i_A58] = false;
	REINITIALISATION_OF_to_be_fired_OF_i_A58 = false;
	boolState[already_standby_OF_i_A58] = false;
	boolState[already_required_OF_i_A58] = false;
	REINITIALISATION_OF_required_OF_i_A60 = true;
	boolState[already_S_OF_i_A60] = false;
	REINITIALISATION_OF_S_OF_i_A60 = false;
	REINITIALISATION_OF_relevant_evt_OF_i_A60 = false;
	boolState[failI_OF_i_A60] = false;
	REINITIALISATION_OF_to_be_fired_OF_i_A60 = false;
	boolState[already_standby_OF_i_A60] = false;
	boolState[already_required_OF_i_A60] = false;
	REINITIALISATION_OF_required_OF_i_A61 = true;
	boolState[already_S_OF_i_A61] = false;
	REINITIALISATION_OF_S_OF_i_A61 = false;
	REINITIALISATION_OF_relevant_evt_OF_i_A61 = false;
	boolState[failI_OF_i_A61] = false;
	REINITIALISATION_OF_to_be_fired_OF_i_A61 = false;
	boolState[already_standby_OF_i_A61] = false;
	boolState[already_required_OF_i_A61] = false;
	REINITIALISATION_OF_required_OF_i_A63 = true;
	boolState[already_S_OF_i_A63] = false;
	REINITIALISATION_OF_S_OF_i_A63 = false;
	REINITIALISATION_OF_relevant_evt_OF_i_A63 = false;
	boolState[failI_OF_i_A63] = false;
	REINITIALISATION_OF_to_be_fired_OF_i_A63 = false;
	boolState[already_standby_OF_i_A63] = false;
	boolState[already_required_OF_i_A63] = false;
	REINITIALISATION_OF_required_OF_i_A64 = true;
	boolState[already_S_OF_i_A64] = false;
	REINITIALISATION_OF_S_OF_i_A64 = false;
	REINITIALISATION_OF_relevant_evt_OF_i_A64 = false;
	boolState[failI_OF_i_A64] = false;
	REINITIALISATION_OF_to_be_fired_OF_i_A64 = false;
	boolState[already_standby_OF_i_A64] = false;
	boolState[already_required_OF_i_A64] = false;
	REINITIALISATION_OF_required_OF_i_A66 = true;
	boolState[already_S_OF_i_A66] = false;
	REINITIALISATION_OF_S_OF_i_A66 = false;
	REINITIALISATION_OF_relevant_evt_OF_i_A66 = false;
	boolState[failI_OF_i_A66] = false;
	REINITIALISATION_OF_to_be_fired_OF_i_A66 = false;
	boolState[already_standby_OF_i_A66] = false;
	boolState[already_required_OF_i_A66] = false;
	REINITIALISATION_OF_required_OF_i_A67 = true;
	boolState[already_S_OF_i_A67] = false;
	REINITIALISATION_OF_S_OF_i_A67 = false;
	REINITIALISATION_OF_relevant_evt_OF_i_A67 = false;
	boolState[failI_OF_i_A67] = false;
	REINITIALISATION_OF_to_be_fired_OF_i_A67 = false;
	boolState[already_standby_OF_i_A67] = false;
	boolState[already_required_OF_i_A67] = false;
	REINITIALISATION_OF_required_OF_i_A68 = true;
	boolState[already_S_OF_i_A68] = false;
	REINITIALISATION_OF_S_OF_i_A68 = false;
	REINITIALISATION_OF_relevant_evt_OF_i_A68 = false;
	boolState[failI_OF_i_A68] = false;
	REINITIALISATION_OF_to_be_fired_OF_i_A68 = false;
	boolState[already_standby_OF_i_A68] = false;
	boolState[already_required_OF_i_A68] = false;
	REINITIALISATION_OF_required_OF_i_A69 = true;
	boolState[already_S_OF_i_A69] = false;
	REINITIALISATION_OF_S_OF_i_A69 = false;
	REINITIALISATION_OF_relevant_evt_OF_i_A69 = false;
	boolState[failI_OF_i_A69] = false;
	REINITIALISATION_OF_to_be_fired_OF_i_A69 = false;
	boolState[already_standby_OF_i_A69] = false;
	boolState[already_required_OF_i_A69] = false;
	REINITIALISATION_OF_required_OF_i_A70 = true;
	boolState[already_S_OF_i_A70] = false;
	REINITIALISATION_OF_S_OF_i_A70 = false;
	REINITIALISATION_OF_relevant_evt_OF_i_A70 = false;
	boolState[failI_OF_i_A70] = false;
	REINITIALISATION_OF_to_be_fired_OF_i_A70 = false;
	boolState[already_standby_OF_i_A70] = false;
	boolState[already_required_OF_i_A70] = false;
	REINITIALISATION_OF_required_OF_i_A71 = true;
	boolState[already_S_OF_i_A71] = false;
	REINITIALISATION_OF_S_OF_i_A71 = false;
	REINITIALISATION_OF_relevant_evt_OF_i_A71 = false;
	boolState[failI_OF_i_A71] = false;
	REINITIALISATION_OF_to_be_fired_OF_i_A71 = false;
	boolState[already_standby_OF_i_A71] = false;
	boolState[already_required_OF_i_A71] = false;
	REINITIALISATION_OF_required_OF_i_A72 = true;
	boolState[already_S_OF_i_A72] = false;
	REINITIALISATION_OF_S_OF_i_A72 = false;
	REINITIALISATION_OF_relevant_evt_OF_i_A72 = false;
	boolState[failI_OF_i_A72] = false;
	REINITIALISATION_OF_to_be_fired_OF_i_A72 = false;
	boolState[already_standby_OF_i_A72] = false;
	boolState[already_required_OF_i_A72] = false;
	REINITIALISATION_OF_required_OF_i_A73 = true;
	boolState[already_S_OF_i_A73] = false;
	REINITIALISATION_OF_S_OF_i_A73 = false;
	REINITIALISATION_OF_relevant_evt_OF_i_A73 = false;
	boolState[failI_OF_i_A73] = false;
	REINITIALISATION_OF_to_be_fired_OF_i_A73 = false;
	boolState[already_standby_OF_i_A73] = false;
	boolState[already_required_OF_i_A73] = false;
	REINITIALISATION_OF_required_OF_i_A74 = true;
	boolState[already_S_OF_i_A74] = false;
	REINITIALISATION_OF_S_OF_i_A74 = false;
	REINITIALISATION_OF_relevant_evt_OF_i_A74 = false;
	boolState[failI_OF_i_A74] = false;
	REINITIALISATION_OF_to_be_fired_OF_i_A74 = false;
	boolState[already_standby_OF_i_A74] = false;
	boolState[already_required_OF_i_A74] = false;
	REINITIALISATION_OF_required_OF_i_A75 = true;
	boolState[already_S_OF_i_A75] = false;
	REINITIALISATION_OF_S_OF_i_A75 = false;
	REINITIALISATION_OF_relevant_evt_OF_i_A75 = false;
	boolState[failI_OF_i_A75] = false;
	REINITIALISATION_OF_to_be_fired_OF_i_A75 = false;
	boolState[already_standby_OF_i_A75] = false;
	boolState[already_required_OF_i_A75] = false;
	REINITIALISATION_OF_required_OF_i_A76 = true;
	boolState[already_S_OF_i_A76] = false;
	REINITIALISATION_OF_S_OF_i_A76 = false;
	REINITIALISATION_OF_relevant_evt_OF_i_A76 = false;
	boolState[failI_OF_i_A76] = false;
	REINITIALISATION_OF_to_be_fired_OF_i_A76 = false;
	boolState[already_standby_OF_i_A76] = false;
	boolState[already_required_OF_i_A76] = false;
	REINITIALISATION_OF_required_OF_i_A77 = true;
	boolState[already_S_OF_i_A77] = false;
	REINITIALISATION_OF_S_OF_i_A77 = false;
	REINITIALISATION_OF_relevant_evt_OF_i_A77 = false;
	boolState[failI_OF_i_A77] = false;
	REINITIALISATION_OF_to_be_fired_OF_i_A77 = false;
	boolState[already_standby_OF_i_A77] = false;
	boolState[already_required_OF_i_A77] = false;
	REINITIALISATION_OF_required_OF_i_A81 = true;
	boolState[already_S_OF_i_A81] = false;
	REINITIALISATION_OF_S_OF_i_A81 = false;
	REINITIALISATION_OF_relevant_evt_OF_i_A81 = false;
	boolState[failI_OF_i_A81] = false;
	REINITIALISATION_OF_to_be_fired_OF_i_A81 = false;
	boolState[already_standby_OF_i_A81] = false;
	boolState[already_required_OF_i_A81] = false;

	/* ---------- DECLARATION OF OCCURRENCE RULES FIRING FLAGS ------------ */
	FIRE_xx10_OF_A10 = false;
	FIRE_xx10_OF_A100 = false;
	FIRE_xx10_OF_A101 = false;
	FIRE_xx10_OF_A102 = false;
	FIRE_xx10_OF_A105 = false;
	FIRE_xx10_OF_A106 = false;
	FIRE_xx10_OF_A109 = false;
	FIRE_xx10_OF_A110 = false;
	FIRE_xx10_OF_A111 = false;
	FIRE_xx10_OF_A114 = false;
	FIRE_xx10_OF_A115 = false;
	FIRE_xx10_OF_A118 = false;
	FIRE_xx10_OF_A119 = false;
	FIRE_xx10_OF_A120 = false;
	FIRE_xx10_OF_A123 = false;
	FIRE_xx10_OF_A124 = false;
	FIRE_xx10_OF_A127 = false;
	FIRE_xx10_OF_A128 = false;
	FIRE_xx10_OF_A129 = false;
	FIRE_xx10_OF_A13 = false;
	FIRE_xx10_OF_A132 = false;
	FIRE_xx10_OF_A133 = false;
	FIRE_xx10_OF_A136 = false;
	FIRE_xx10_OF_A137 = false;
	FIRE_xx10_OF_A138 = false;
	FIRE_xx10_OF_A141 = false;
	FIRE_xx10_OF_A142 = false;
	FIRE_xx10_OF_A145 = false;
	FIRE_xx10_OF_A146 = false;
	FIRE_xx10_OF_A147 = false;
	FIRE_xx10_OF_A150 = false;
	FIRE_xx10_OF_A151 = false;
	FIRE_xx10_OF_A154 = false;
	FIRE_xx10_OF_A155 = false;
	FIRE_xx10_OF_A156 = false;
	FIRE_xx10_OF_A159 = false;
	FIRE_xx10_OF_A16 = false;
	FIRE_xx10_OF_A160 = false;
	FIRE_xx10_OF_A163 = false;
	FIRE_xx10_OF_A164 = false;
	FIRE_xx10_OF_A165 = false;
	FIRE_xx10_OF_A168 = false;
	FIRE_xx10_OF_A169 = false;
	FIRE_xx10_OF_A170 = false;
	FIRE_xx10_OF_A174 = false;
	FIRE_xx10_OF_A175 = false;
	FIRE_xx10_OF_A176 = false;
	FIRE_xx10_OF_A179 = false;
	FIRE_xx10_OF_A180 = false;
	FIRE_xx10_OF_A181 = false;
	FIRE_xx10_OF_A19 = false;
	FIRE_xx10_OF_A22 = false;
	FIRE_xx10_OF_A25 = false;
	FIRE_xx10_OF_A28 = false;
	FIRE_xx10_OF_A31 = false;
	FIRE_xx10_OF_A34 = false;
	FIRE_xx10_OF_A37 = false;
	FIRE_xx10_OF_A4 = false;
	FIRE_xx10_OF_A40 = false;
	FIRE_xx10_OF_A43 = false;
	FIRE_xx10_OF_A47 = false;
	FIRE_xx10_OF_A7 = false;
	FIRE_xx10_OF_A83 = false;
	FIRE_xx10_OF_A84 = false;
	FIRE_xx10_OF_A85 = false;
	FIRE_xx10_OF_A86 = false;
	FIRE_xx10_OF_A87 = false;
	FIRE_xx10_OF_A88 = false;
	FIRE_xx10_OF_A89 = false;
	FIRE_xx10_OF_A90 = false;
	FIRE_xx10_OF_A91 = false;
	FIRE_xx10_OF_A92 = false;
	FIRE_xx10_OF_A93 = false;
	FIRE_xx10_OF_A96 = false;
	FIRE_xx10_OF_A97 = false;
	FIRE_xx10_OF_f_A52 = false;
	FIRE_xx10_OF_f_A53 = false;
	FIRE_xx10_OF_f_A54 = false;
	FIRE_xx10_OF_f_A55 = false;
	FIRE_xx10_OF_f_A56 = false;
	FIRE_xx10_OF_f_A57 = false;
	FIRE_xx10_OF_f_A58 = false;
	FIRE_xx10_OF_f_A60 = false;
	FIRE_xx10_OF_f_A61 = false;
	FIRE_xx10_OF_f_A63 = false;
	FIRE_xx10_OF_f_A64 = false;
	FIRE_xx10_OF_f_A66 = false;
	FIRE_xx10_OF_f_A67 = false;
	FIRE_xx10_OF_f_A68 = false;
	FIRE_xx10_OF_f_A69 = false;
	FIRE_xx10_OF_f_A70 = false;
	FIRE_xx10_OF_f_A71 = false;
	FIRE_xx10_OF_f_A72 = false;
	FIRE_xx10_OF_f_A73 = false;
	FIRE_xx10_OF_f_A74 = false;
	FIRE_xx10_OF_f_A75 = false;
	FIRE_xx10_OF_f_A76 = false;
	FIRE_xx10_OF_f_A77 = false;
	FIRE_xx10_OF_f_A81 = false;
	FIRE_xx23_OF_i_A52_INS_99 = false;
	FIRE_xx23_OF_i_A52_INS_100 = false;
	FIRE_xx23_OF_i_A53_INS_101 = false;
	FIRE_xx23_OF_i_A53_INS_102 = false;
	FIRE_xx23_OF_i_A54_INS_103 = false;
	FIRE_xx23_OF_i_A54_INS_104 = false;
	FIRE_xx23_OF_i_A55_INS_105 = false;
	FIRE_xx23_OF_i_A55_INS_106 = false;
	FIRE_xx23_OF_i_A56_INS_107 = false;
	FIRE_xx23_OF_i_A56_INS_108 = false;
	FIRE_xx23_OF_i_A57_INS_109 = false;
	FIRE_xx23_OF_i_A57_INS_110 = false;
	FIRE_xx23_OF_i_A58_INS_111 = false;
	FIRE_xx23_OF_i_A58_INS_112 = false;
	FIRE_xx23_OF_i_A60_INS_113 = false;
	FIRE_xx23_OF_i_A60_INS_114 = false;
	FIRE_xx23_OF_i_A61_INS_115 = false;
	FIRE_xx23_OF_i_A61_INS_116 = false;
	FIRE_xx23_OF_i_A63_INS_117 = false;
	FIRE_xx23_OF_i_A63_INS_118 = false;
	FIRE_xx23_OF_i_A64_INS_119 = false;
	FIRE_xx23_OF_i_A64_INS_120 = false;
	FIRE_xx23_OF_i_A66_INS_121 = false;
	FIRE_xx23_OF_i_A66_INS_122 = false;
	FIRE_xx23_OF_i_A67_INS_123 = false;
	FIRE_xx23_OF_i_A67_INS_124 = false;
	FIRE_xx23_OF_i_A68_INS_125 = false;
	FIRE_xx23_OF_i_A68_INS_126 = false;
	FIRE_xx23_OF_i_A69_INS_127 = false;
	FIRE_xx23_OF_i_A69_INS_128 = false;
	FIRE_xx23_OF_i_A70_INS_129 = false;
	FIRE_xx23_OF_i_A70_INS_130 = false;
	FIRE_xx23_OF_i_A71_INS_131 = false;
	FIRE_xx23_OF_i_A71_INS_132 = false;
	FIRE_xx23_OF_i_A72_INS_133 = false;
	FIRE_xx23_OF_i_A72_INS_134 = false;
	FIRE_xx23_OF_i_A73_INS_135 = false;
	FIRE_xx23_OF_i_A73_INS_136 = false;
	FIRE_xx23_OF_i_A74_INS_137 = false;
	FIRE_xx23_OF_i_A74_INS_138 = false;
	FIRE_xx23_OF_i_A75_INS_139 = false;
	FIRE_xx23_OF_i_A75_INS_140 = false;
	FIRE_xx23_OF_i_A76_INS_141 = false;
	FIRE_xx23_OF_i_A76_INS_142 = false;
	FIRE_xx23_OF_i_A77_INS_143 = false;
	FIRE_xx23_OF_i_A77_INS_144 = false;
	FIRE_xx23_OF_i_A81_INS_145 = false;
	FIRE_xx23_OF_i_A81_INS_146 = false;

}

void storm::figaro::FigaroProgram_vgs_8_Trim_Article_No_repair::saveCurrentState()
{
	// cout <<">>>>>>>>>>>>>>>>>>>> Saving current state  <<<<<<<<<<<<<<<<<<<<<<<" << endl;
	backupBoolState = boolState ;
	backupFloatState = floatState ;
	backupIntState = intState ;
	backupEnumState = enumState ;
}

int storm::figaro::FigaroProgram_vgs_8_Trim_Article_No_repair::compareStates()
{
	// cout <<">>>>>>>>>>>>>>>>>>>> Comparing state with previous one (return number of differences) <<<<<<<<<<<<<<<<<<<<<<<" << endl;

	return (backupBoolState != boolState) + (backupFloatState != floatState) + (backupIntState != intState) + (backupEnumState != enumState); 
}

void storm::figaro::FigaroProgram_vgs_8_Trim_Article_No_repair::printState()
{
	//cout <<"\n==================== Print of the current state :  ====================" << endl;

	//cout << "Attribute :  boolState[required_OF_A0] | Value : " << boolState[required_OF_A0] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A0] | Value : " << boolState[already_S_OF_A0] << endl;
	//cout << "Attribute :  boolState[S_OF_A0] | Value : " << boolState[S_OF_A0] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A0] | Value : " << boolState[relevant_evt_OF_A0] << endl;
	//cout << "Attribute :  boolState[required_OF_A1] | Value : " << boolState[required_OF_A1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A1] | Value : " << boolState[already_S_OF_A1] << endl;
	//cout << "Attribute :  boolState[S_OF_A1] | Value : " << boolState[S_OF_A1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A1] | Value : " << boolState[relevant_evt_OF_A1] << endl;
	//cout << "Attribute :  boolState[required_OF_A10] | Value : " << boolState[required_OF_A10] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A10] | Value : " << boolState[already_S_OF_A10] << endl;
	//cout << "Attribute :  boolState[S_OF_A10] | Value : " << boolState[S_OF_A10] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A10] | Value : " << boolState[relevant_evt_OF_A10] << endl;
	//cout << "Attribute :  boolState[failF_OF_A10] | Value : " << boolState[failF_OF_A10] << endl;
	//cout << "Attribute :  boolState[required_OF_A100] | Value : " << boolState[required_OF_A100] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A100] | Value : " << boolState[already_S_OF_A100] << endl;
	//cout << "Attribute :  boolState[S_OF_A100] | Value : " << boolState[S_OF_A100] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A100] | Value : " << boolState[relevant_evt_OF_A100] << endl;
	//cout << "Attribute :  boolState[failF_OF_A100] | Value : " << boolState[failF_OF_A100] << endl;
	//cout << "Attribute :  boolState[required_OF_A101] | Value : " << boolState[required_OF_A101] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A101] | Value : " << boolState[already_S_OF_A101] << endl;
	//cout << "Attribute :  boolState[S_OF_A101] | Value : " << boolState[S_OF_A101] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A101] | Value : " << boolState[relevant_evt_OF_A101] << endl;
	//cout << "Attribute :  boolState[failF_OF_A101] | Value : " << boolState[failF_OF_A101] << endl;
	//cout << "Attribute :  boolState[required_OF_A102] | Value : " << boolState[required_OF_A102] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A102] | Value : " << boolState[already_S_OF_A102] << endl;
	//cout << "Attribute :  boolState[S_OF_A102] | Value : " << boolState[S_OF_A102] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A102] | Value : " << boolState[relevant_evt_OF_A102] << endl;
	//cout << "Attribute :  boolState[failF_OF_A102] | Value : " << boolState[failF_OF_A102] << endl;
	//cout << "Attribute :  boolState[required_OF_A103] | Value : " << boolState[required_OF_A103] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A103] | Value : " << boolState[already_S_OF_A103] << endl;
	//cout << "Attribute :  boolState[S_OF_A103] | Value : " << boolState[S_OF_A103] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A103] | Value : " << boolState[relevant_evt_OF_A103] << endl;
	//cout << "Attribute :  boolState[required_OF_A105] | Value : " << boolState[required_OF_A105] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A105] | Value : " << boolState[already_S_OF_A105] << endl;
	//cout << "Attribute :  boolState[S_OF_A105] | Value : " << boolState[S_OF_A105] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A105] | Value : " << boolState[relevant_evt_OF_A105] << endl;
	//cout << "Attribute :  boolState[failF_OF_A105] | Value : " << boolState[failF_OF_A105] << endl;
	//cout << "Attribute :  boolState[required_OF_A106] | Value : " << boolState[required_OF_A106] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A106] | Value : " << boolState[already_S_OF_A106] << endl;
	//cout << "Attribute :  boolState[S_OF_A106] | Value : " << boolState[S_OF_A106] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A106] | Value : " << boolState[relevant_evt_OF_A106] << endl;
	//cout << "Attribute :  boolState[failF_OF_A106] | Value : " << boolState[failF_OF_A106] << endl;
	//cout << "Attribute :  boolState[required_OF_A107] | Value : " << boolState[required_OF_A107] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A107] | Value : " << boolState[already_S_OF_A107] << endl;
	//cout << "Attribute :  boolState[S_OF_A107] | Value : " << boolState[S_OF_A107] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A107] | Value : " << boolState[relevant_evt_OF_A107] << endl;
	//cout << "Attribute :  boolState[required_OF_A109] | Value : " << boolState[required_OF_A109] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A109] | Value : " << boolState[already_S_OF_A109] << endl;
	//cout << "Attribute :  boolState[S_OF_A109] | Value : " << boolState[S_OF_A109] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A109] | Value : " << boolState[relevant_evt_OF_A109] << endl;
	//cout << "Attribute :  boolState[failF_OF_A109] | Value : " << boolState[failF_OF_A109] << endl;
	//cout << "Attribute :  boolState[required_OF_A11] | Value : " << boolState[required_OF_A11] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A11] | Value : " << boolState[already_S_OF_A11] << endl;
	//cout << "Attribute :  boolState[S_OF_A11] | Value : " << boolState[S_OF_A11] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A11] | Value : " << boolState[relevant_evt_OF_A11] << endl;
	//cout << "Attribute :  boolState[required_OF_A110] | Value : " << boolState[required_OF_A110] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A110] | Value : " << boolState[already_S_OF_A110] << endl;
	//cout << "Attribute :  boolState[S_OF_A110] | Value : " << boolState[S_OF_A110] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A110] | Value : " << boolState[relevant_evt_OF_A110] << endl;
	//cout << "Attribute :  boolState[failF_OF_A110] | Value : " << boolState[failF_OF_A110] << endl;
	//cout << "Attribute :  boolState[required_OF_A111] | Value : " << boolState[required_OF_A111] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A111] | Value : " << boolState[already_S_OF_A111] << endl;
	//cout << "Attribute :  boolState[S_OF_A111] | Value : " << boolState[S_OF_A111] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A111] | Value : " << boolState[relevant_evt_OF_A111] << endl;
	//cout << "Attribute :  boolState[failF_OF_A111] | Value : " << boolState[failF_OF_A111] << endl;
	//cout << "Attribute :  boolState[required_OF_A112] | Value : " << boolState[required_OF_A112] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A112] | Value : " << boolState[already_S_OF_A112] << endl;
	//cout << "Attribute :  boolState[S_OF_A112] | Value : " << boolState[S_OF_A112] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A112] | Value : " << boolState[relevant_evt_OF_A112] << endl;
	//cout << "Attribute :  boolState[required_OF_A114] | Value : " << boolState[required_OF_A114] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A114] | Value : " << boolState[already_S_OF_A114] << endl;
	//cout << "Attribute :  boolState[S_OF_A114] | Value : " << boolState[S_OF_A114] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A114] | Value : " << boolState[relevant_evt_OF_A114] << endl;
	//cout << "Attribute :  boolState[failF_OF_A114] | Value : " << boolState[failF_OF_A114] << endl;
	//cout << "Attribute :  boolState[required_OF_A115] | Value : " << boolState[required_OF_A115] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A115] | Value : " << boolState[already_S_OF_A115] << endl;
	//cout << "Attribute :  boolState[S_OF_A115] | Value : " << boolState[S_OF_A115] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A115] | Value : " << boolState[relevant_evt_OF_A115] << endl;
	//cout << "Attribute :  boolState[failF_OF_A115] | Value : " << boolState[failF_OF_A115] << endl;
	//cout << "Attribute :  boolState[required_OF_A116] | Value : " << boolState[required_OF_A116] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A116] | Value : " << boolState[already_S_OF_A116] << endl;
	//cout << "Attribute :  boolState[S_OF_A116] | Value : " << boolState[S_OF_A116] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A116] | Value : " << boolState[relevant_evt_OF_A116] << endl;
	//cout << "Attribute :  boolState[required_OF_A118] | Value : " << boolState[required_OF_A118] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A118] | Value : " << boolState[already_S_OF_A118] << endl;
	//cout << "Attribute :  boolState[S_OF_A118] | Value : " << boolState[S_OF_A118] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A118] | Value : " << boolState[relevant_evt_OF_A118] << endl;
	//cout << "Attribute :  boolState[failF_OF_A118] | Value : " << boolState[failF_OF_A118] << endl;
	//cout << "Attribute :  boolState[required_OF_A119] | Value : " << boolState[required_OF_A119] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A119] | Value : " << boolState[already_S_OF_A119] << endl;
	//cout << "Attribute :  boolState[S_OF_A119] | Value : " << boolState[S_OF_A119] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A119] | Value : " << boolState[relevant_evt_OF_A119] << endl;
	//cout << "Attribute :  boolState[failF_OF_A119] | Value : " << boolState[failF_OF_A119] << endl;
	//cout << "Attribute :  boolState[required_OF_A120] | Value : " << boolState[required_OF_A120] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A120] | Value : " << boolState[already_S_OF_A120] << endl;
	//cout << "Attribute :  boolState[S_OF_A120] | Value : " << boolState[S_OF_A120] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A120] | Value : " << boolState[relevant_evt_OF_A120] << endl;
	//cout << "Attribute :  boolState[failF_OF_A120] | Value : " << boolState[failF_OF_A120] << endl;
	//cout << "Attribute :  boolState[required_OF_A121] | Value : " << boolState[required_OF_A121] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A121] | Value : " << boolState[already_S_OF_A121] << endl;
	//cout << "Attribute :  boolState[S_OF_A121] | Value : " << boolState[S_OF_A121] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A121] | Value : " << boolState[relevant_evt_OF_A121] << endl;
	//cout << "Attribute :  boolState[required_OF_A123] | Value : " << boolState[required_OF_A123] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A123] | Value : " << boolState[already_S_OF_A123] << endl;
	//cout << "Attribute :  boolState[S_OF_A123] | Value : " << boolState[S_OF_A123] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A123] | Value : " << boolState[relevant_evt_OF_A123] << endl;
	//cout << "Attribute :  boolState[failF_OF_A123] | Value : " << boolState[failF_OF_A123] << endl;
	//cout << "Attribute :  boolState[required_OF_A124] | Value : " << boolState[required_OF_A124] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A124] | Value : " << boolState[already_S_OF_A124] << endl;
	//cout << "Attribute :  boolState[S_OF_A124] | Value : " << boolState[S_OF_A124] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A124] | Value : " << boolState[relevant_evt_OF_A124] << endl;
	//cout << "Attribute :  boolState[failF_OF_A124] | Value : " << boolState[failF_OF_A124] << endl;
	//cout << "Attribute :  boolState[required_OF_A125] | Value : " << boolState[required_OF_A125] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A125] | Value : " << boolState[already_S_OF_A125] << endl;
	//cout << "Attribute :  boolState[S_OF_A125] | Value : " << boolState[S_OF_A125] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A125] | Value : " << boolState[relevant_evt_OF_A125] << endl;
	//cout << "Attribute :  boolState[required_OF_A127] | Value : " << boolState[required_OF_A127] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A127] | Value : " << boolState[already_S_OF_A127] << endl;
	//cout << "Attribute :  boolState[S_OF_A127] | Value : " << boolState[S_OF_A127] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A127] | Value : " << boolState[relevant_evt_OF_A127] << endl;
	//cout << "Attribute :  boolState[failF_OF_A127] | Value : " << boolState[failF_OF_A127] << endl;
	//cout << "Attribute :  boolState[required_OF_A128] | Value : " << boolState[required_OF_A128] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A128] | Value : " << boolState[already_S_OF_A128] << endl;
	//cout << "Attribute :  boolState[S_OF_A128] | Value : " << boolState[S_OF_A128] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A128] | Value : " << boolState[relevant_evt_OF_A128] << endl;
	//cout << "Attribute :  boolState[failF_OF_A128] | Value : " << boolState[failF_OF_A128] << endl;
	//cout << "Attribute :  boolState[required_OF_A129] | Value : " << boolState[required_OF_A129] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A129] | Value : " << boolState[already_S_OF_A129] << endl;
	//cout << "Attribute :  boolState[S_OF_A129] | Value : " << boolState[S_OF_A129] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A129] | Value : " << boolState[relevant_evt_OF_A129] << endl;
	//cout << "Attribute :  boolState[failF_OF_A129] | Value : " << boolState[failF_OF_A129] << endl;
	//cout << "Attribute :  boolState[required_OF_A13] | Value : " << boolState[required_OF_A13] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A13] | Value : " << boolState[already_S_OF_A13] << endl;
	//cout << "Attribute :  boolState[S_OF_A13] | Value : " << boolState[S_OF_A13] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A13] | Value : " << boolState[relevant_evt_OF_A13] << endl;
	//cout << "Attribute :  boolState[failF_OF_A13] | Value : " << boolState[failF_OF_A13] << endl;
	//cout << "Attribute :  boolState[required_OF_A130] | Value : " << boolState[required_OF_A130] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A130] | Value : " << boolState[already_S_OF_A130] << endl;
	//cout << "Attribute :  boolState[S_OF_A130] | Value : " << boolState[S_OF_A130] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A130] | Value : " << boolState[relevant_evt_OF_A130] << endl;
	//cout << "Attribute :  boolState[required_OF_A132] | Value : " << boolState[required_OF_A132] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A132] | Value : " << boolState[already_S_OF_A132] << endl;
	//cout << "Attribute :  boolState[S_OF_A132] | Value : " << boolState[S_OF_A132] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A132] | Value : " << boolState[relevant_evt_OF_A132] << endl;
	//cout << "Attribute :  boolState[failF_OF_A132] | Value : " << boolState[failF_OF_A132] << endl;
	//cout << "Attribute :  boolState[required_OF_A133] | Value : " << boolState[required_OF_A133] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A133] | Value : " << boolState[already_S_OF_A133] << endl;
	//cout << "Attribute :  boolState[S_OF_A133] | Value : " << boolState[S_OF_A133] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A133] | Value : " << boolState[relevant_evt_OF_A133] << endl;
	//cout << "Attribute :  boolState[failF_OF_A133] | Value : " << boolState[failF_OF_A133] << endl;
	//cout << "Attribute :  boolState[required_OF_A134] | Value : " << boolState[required_OF_A134] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A134] | Value : " << boolState[already_S_OF_A134] << endl;
	//cout << "Attribute :  boolState[S_OF_A134] | Value : " << boolState[S_OF_A134] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A134] | Value : " << boolState[relevant_evt_OF_A134] << endl;
	//cout << "Attribute :  boolState[required_OF_A136] | Value : " << boolState[required_OF_A136] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A136] | Value : " << boolState[already_S_OF_A136] << endl;
	//cout << "Attribute :  boolState[S_OF_A136] | Value : " << boolState[S_OF_A136] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A136] | Value : " << boolState[relevant_evt_OF_A136] << endl;
	//cout << "Attribute :  boolState[failF_OF_A136] | Value : " << boolState[failF_OF_A136] << endl;
	//cout << "Attribute :  boolState[required_OF_A137] | Value : " << boolState[required_OF_A137] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A137] | Value : " << boolState[already_S_OF_A137] << endl;
	//cout << "Attribute :  boolState[S_OF_A137] | Value : " << boolState[S_OF_A137] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A137] | Value : " << boolState[relevant_evt_OF_A137] << endl;
	//cout << "Attribute :  boolState[failF_OF_A137] | Value : " << boolState[failF_OF_A137] << endl;
	//cout << "Attribute :  boolState[required_OF_A138] | Value : " << boolState[required_OF_A138] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A138] | Value : " << boolState[already_S_OF_A138] << endl;
	//cout << "Attribute :  boolState[S_OF_A138] | Value : " << boolState[S_OF_A138] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A138] | Value : " << boolState[relevant_evt_OF_A138] << endl;
	//cout << "Attribute :  boolState[failF_OF_A138] | Value : " << boolState[failF_OF_A138] << endl;
	//cout << "Attribute :  boolState[required_OF_A139] | Value : " << boolState[required_OF_A139] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A139] | Value : " << boolState[already_S_OF_A139] << endl;
	//cout << "Attribute :  boolState[S_OF_A139] | Value : " << boolState[S_OF_A139] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A139] | Value : " << boolState[relevant_evt_OF_A139] << endl;
	//cout << "Attribute :  boolState[required_OF_A14] | Value : " << boolState[required_OF_A14] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A14] | Value : " << boolState[already_S_OF_A14] << endl;
	//cout << "Attribute :  boolState[S_OF_A14] | Value : " << boolState[S_OF_A14] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A14] | Value : " << boolState[relevant_evt_OF_A14] << endl;
	//cout << "Attribute :  boolState[required_OF_A141] | Value : " << boolState[required_OF_A141] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A141] | Value : " << boolState[already_S_OF_A141] << endl;
	//cout << "Attribute :  boolState[S_OF_A141] | Value : " << boolState[S_OF_A141] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A141] | Value : " << boolState[relevant_evt_OF_A141] << endl;
	//cout << "Attribute :  boolState[failF_OF_A141] | Value : " << boolState[failF_OF_A141] << endl;
	//cout << "Attribute :  boolState[required_OF_A142] | Value : " << boolState[required_OF_A142] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A142] | Value : " << boolState[already_S_OF_A142] << endl;
	//cout << "Attribute :  boolState[S_OF_A142] | Value : " << boolState[S_OF_A142] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A142] | Value : " << boolState[relevant_evt_OF_A142] << endl;
	//cout << "Attribute :  boolState[failF_OF_A142] | Value : " << boolState[failF_OF_A142] << endl;
	//cout << "Attribute :  boolState[required_OF_A143] | Value : " << boolState[required_OF_A143] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A143] | Value : " << boolState[already_S_OF_A143] << endl;
	//cout << "Attribute :  boolState[S_OF_A143] | Value : " << boolState[S_OF_A143] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A143] | Value : " << boolState[relevant_evt_OF_A143] << endl;
	//cout << "Attribute :  boolState[required_OF_A145] | Value : " << boolState[required_OF_A145] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A145] | Value : " << boolState[already_S_OF_A145] << endl;
	//cout << "Attribute :  boolState[S_OF_A145] | Value : " << boolState[S_OF_A145] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A145] | Value : " << boolState[relevant_evt_OF_A145] << endl;
	//cout << "Attribute :  boolState[failF_OF_A145] | Value : " << boolState[failF_OF_A145] << endl;
	//cout << "Attribute :  boolState[required_OF_A146] | Value : " << boolState[required_OF_A146] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A146] | Value : " << boolState[already_S_OF_A146] << endl;
	//cout << "Attribute :  boolState[S_OF_A146] | Value : " << boolState[S_OF_A146] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A146] | Value : " << boolState[relevant_evt_OF_A146] << endl;
	//cout << "Attribute :  boolState[failF_OF_A146] | Value : " << boolState[failF_OF_A146] << endl;
	//cout << "Attribute :  boolState[required_OF_A147] | Value : " << boolState[required_OF_A147] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A147] | Value : " << boolState[already_S_OF_A147] << endl;
	//cout << "Attribute :  boolState[S_OF_A147] | Value : " << boolState[S_OF_A147] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A147] | Value : " << boolState[relevant_evt_OF_A147] << endl;
	//cout << "Attribute :  boolState[failF_OF_A147] | Value : " << boolState[failF_OF_A147] << endl;
	//cout << "Attribute :  boolState[required_OF_A148] | Value : " << boolState[required_OF_A148] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A148] | Value : " << boolState[already_S_OF_A148] << endl;
	//cout << "Attribute :  boolState[S_OF_A148] | Value : " << boolState[S_OF_A148] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A148] | Value : " << boolState[relevant_evt_OF_A148] << endl;
	//cout << "Attribute :  boolState[required_OF_A150] | Value : " << boolState[required_OF_A150] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A150] | Value : " << boolState[already_S_OF_A150] << endl;
	//cout << "Attribute :  boolState[S_OF_A150] | Value : " << boolState[S_OF_A150] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A150] | Value : " << boolState[relevant_evt_OF_A150] << endl;
	//cout << "Attribute :  boolState[failF_OF_A150] | Value : " << boolState[failF_OF_A150] << endl;
	//cout << "Attribute :  boolState[required_OF_A151] | Value : " << boolState[required_OF_A151] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A151] | Value : " << boolState[already_S_OF_A151] << endl;
	//cout << "Attribute :  boolState[S_OF_A151] | Value : " << boolState[S_OF_A151] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A151] | Value : " << boolState[relevant_evt_OF_A151] << endl;
	//cout << "Attribute :  boolState[failF_OF_A151] | Value : " << boolState[failF_OF_A151] << endl;
	//cout << "Attribute :  boolState[required_OF_A152] | Value : " << boolState[required_OF_A152] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A152] | Value : " << boolState[already_S_OF_A152] << endl;
	//cout << "Attribute :  boolState[S_OF_A152] | Value : " << boolState[S_OF_A152] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A152] | Value : " << boolState[relevant_evt_OF_A152] << endl;
	//cout << "Attribute :  boolState[required_OF_A154] | Value : " << boolState[required_OF_A154] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A154] | Value : " << boolState[already_S_OF_A154] << endl;
	//cout << "Attribute :  boolState[S_OF_A154] | Value : " << boolState[S_OF_A154] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A154] | Value : " << boolState[relevant_evt_OF_A154] << endl;
	//cout << "Attribute :  boolState[failF_OF_A154] | Value : " << boolState[failF_OF_A154] << endl;
	//cout << "Attribute :  boolState[required_OF_A155] | Value : " << boolState[required_OF_A155] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A155] | Value : " << boolState[already_S_OF_A155] << endl;
	//cout << "Attribute :  boolState[S_OF_A155] | Value : " << boolState[S_OF_A155] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A155] | Value : " << boolState[relevant_evt_OF_A155] << endl;
	//cout << "Attribute :  boolState[failF_OF_A155] | Value : " << boolState[failF_OF_A155] << endl;
	//cout << "Attribute :  boolState[required_OF_A156] | Value : " << boolState[required_OF_A156] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A156] | Value : " << boolState[already_S_OF_A156] << endl;
	//cout << "Attribute :  boolState[S_OF_A156] | Value : " << boolState[S_OF_A156] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A156] | Value : " << boolState[relevant_evt_OF_A156] << endl;
	//cout << "Attribute :  boolState[failF_OF_A156] | Value : " << boolState[failF_OF_A156] << endl;
	//cout << "Attribute :  boolState[required_OF_A157] | Value : " << boolState[required_OF_A157] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A157] | Value : " << boolState[already_S_OF_A157] << endl;
	//cout << "Attribute :  boolState[S_OF_A157] | Value : " << boolState[S_OF_A157] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A157] | Value : " << boolState[relevant_evt_OF_A157] << endl;
	//cout << "Attribute :  boolState[required_OF_A159] | Value : " << boolState[required_OF_A159] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A159] | Value : " << boolState[already_S_OF_A159] << endl;
	//cout << "Attribute :  boolState[S_OF_A159] | Value : " << boolState[S_OF_A159] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A159] | Value : " << boolState[relevant_evt_OF_A159] << endl;
	//cout << "Attribute :  boolState[failF_OF_A159] | Value : " << boolState[failF_OF_A159] << endl;
	//cout << "Attribute :  boolState[required_OF_A16] | Value : " << boolState[required_OF_A16] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A16] | Value : " << boolState[already_S_OF_A16] << endl;
	//cout << "Attribute :  boolState[S_OF_A16] | Value : " << boolState[S_OF_A16] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A16] | Value : " << boolState[relevant_evt_OF_A16] << endl;
	//cout << "Attribute :  boolState[failF_OF_A16] | Value : " << boolState[failF_OF_A16] << endl;
	//cout << "Attribute :  boolState[required_OF_A160] | Value : " << boolState[required_OF_A160] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A160] | Value : " << boolState[already_S_OF_A160] << endl;
	//cout << "Attribute :  boolState[S_OF_A160] | Value : " << boolState[S_OF_A160] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A160] | Value : " << boolState[relevant_evt_OF_A160] << endl;
	//cout << "Attribute :  boolState[failF_OF_A160] | Value : " << boolState[failF_OF_A160] << endl;
	//cout << "Attribute :  boolState[required_OF_A161] | Value : " << boolState[required_OF_A161] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A161] | Value : " << boolState[already_S_OF_A161] << endl;
	//cout << "Attribute :  boolState[S_OF_A161] | Value : " << boolState[S_OF_A161] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A161] | Value : " << boolState[relevant_evt_OF_A161] << endl;
	//cout << "Attribute :  boolState[required_OF_A163] | Value : " << boolState[required_OF_A163] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A163] | Value : " << boolState[already_S_OF_A163] << endl;
	//cout << "Attribute :  boolState[S_OF_A163] | Value : " << boolState[S_OF_A163] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A163] | Value : " << boolState[relevant_evt_OF_A163] << endl;
	//cout << "Attribute :  boolState[failF_OF_A163] | Value : " << boolState[failF_OF_A163] << endl;
	//cout << "Attribute :  boolState[required_OF_A164] | Value : " << boolState[required_OF_A164] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A164] | Value : " << boolState[already_S_OF_A164] << endl;
	//cout << "Attribute :  boolState[S_OF_A164] | Value : " << boolState[S_OF_A164] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A164] | Value : " << boolState[relevant_evt_OF_A164] << endl;
	//cout << "Attribute :  boolState[failF_OF_A164] | Value : " << boolState[failF_OF_A164] << endl;
	//cout << "Attribute :  boolState[required_OF_A165] | Value : " << boolState[required_OF_A165] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A165] | Value : " << boolState[already_S_OF_A165] << endl;
	//cout << "Attribute :  boolState[S_OF_A165] | Value : " << boolState[S_OF_A165] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A165] | Value : " << boolState[relevant_evt_OF_A165] << endl;
	//cout << "Attribute :  boolState[failF_OF_A165] | Value : " << boolState[failF_OF_A165] << endl;
	//cout << "Attribute :  boolState[required_OF_A166] | Value : " << boolState[required_OF_A166] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A166] | Value : " << boolState[already_S_OF_A166] << endl;
	//cout << "Attribute :  boolState[S_OF_A166] | Value : " << boolState[S_OF_A166] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A166] | Value : " << boolState[relevant_evt_OF_A166] << endl;
	//cout << "Attribute :  boolState[required_OF_A168] | Value : " << boolState[required_OF_A168] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A168] | Value : " << boolState[already_S_OF_A168] << endl;
	//cout << "Attribute :  boolState[S_OF_A168] | Value : " << boolState[S_OF_A168] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A168] | Value : " << boolState[relevant_evt_OF_A168] << endl;
	//cout << "Attribute :  boolState[failF_OF_A168] | Value : " << boolState[failF_OF_A168] << endl;
	//cout << "Attribute :  boolState[required_OF_A169] | Value : " << boolState[required_OF_A169] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A169] | Value : " << boolState[already_S_OF_A169] << endl;
	//cout << "Attribute :  boolState[S_OF_A169] | Value : " << boolState[S_OF_A169] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A169] | Value : " << boolState[relevant_evt_OF_A169] << endl;
	//cout << "Attribute :  boolState[failF_OF_A169] | Value : " << boolState[failF_OF_A169] << endl;
	//cout << "Attribute :  boolState[required_OF_A17] | Value : " << boolState[required_OF_A17] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A17] | Value : " << boolState[already_S_OF_A17] << endl;
	//cout << "Attribute :  boolState[S_OF_A17] | Value : " << boolState[S_OF_A17] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A17] | Value : " << boolState[relevant_evt_OF_A17] << endl;
	//cout << "Attribute :  boolState[required_OF_A170] | Value : " << boolState[required_OF_A170] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A170] | Value : " << boolState[already_S_OF_A170] << endl;
	//cout << "Attribute :  boolState[S_OF_A170] | Value : " << boolState[S_OF_A170] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A170] | Value : " << boolState[relevant_evt_OF_A170] << endl;
	//cout << "Attribute :  boolState[failF_OF_A170] | Value : " << boolState[failF_OF_A170] << endl;
	//cout << "Attribute :  boolState[required_OF_A171] | Value : " << boolState[required_OF_A171] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A171] | Value : " << boolState[already_S_OF_A171] << endl;
	//cout << "Attribute :  boolState[S_OF_A171] | Value : " << boolState[S_OF_A171] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A171] | Value : " << boolState[relevant_evt_OF_A171] << endl;
	//cout << "Attribute :  boolState[required_OF_A173] | Value : " << boolState[required_OF_A173] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A173] | Value : " << boolState[already_S_OF_A173] << endl;
	//cout << "Attribute :  boolState[S_OF_A173] | Value : " << boolState[S_OF_A173] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A173] | Value : " << boolState[relevant_evt_OF_A173] << endl;
	//cout << "Attribute :  boolState[required_OF_A174] | Value : " << boolState[required_OF_A174] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A174] | Value : " << boolState[already_S_OF_A174] << endl;
	//cout << "Attribute :  boolState[S_OF_A174] | Value : " << boolState[S_OF_A174] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A174] | Value : " << boolState[relevant_evt_OF_A174] << endl;
	//cout << "Attribute :  boolState[failF_OF_A174] | Value : " << boolState[failF_OF_A174] << endl;
	//cout << "Attribute :  boolState[required_OF_A175] | Value : " << boolState[required_OF_A175] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A175] | Value : " << boolState[already_S_OF_A175] << endl;
	//cout << "Attribute :  boolState[S_OF_A175] | Value : " << boolState[S_OF_A175] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A175] | Value : " << boolState[relevant_evt_OF_A175] << endl;
	//cout << "Attribute :  boolState[failF_OF_A175] | Value : " << boolState[failF_OF_A175] << endl;
	//cout << "Attribute :  boolState[required_OF_A176] | Value : " << boolState[required_OF_A176] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A176] | Value : " << boolState[already_S_OF_A176] << endl;
	//cout << "Attribute :  boolState[S_OF_A176] | Value : " << boolState[S_OF_A176] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A176] | Value : " << boolState[relevant_evt_OF_A176] << endl;
	//cout << "Attribute :  boolState[failF_OF_A176] | Value : " << boolState[failF_OF_A176] << endl;
	//cout << "Attribute :  boolState[required_OF_A177] | Value : " << boolState[required_OF_A177] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A177] | Value : " << boolState[already_S_OF_A177] << endl;
	//cout << "Attribute :  boolState[S_OF_A177] | Value : " << boolState[S_OF_A177] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A177] | Value : " << boolState[relevant_evt_OF_A177] << endl;
	//cout << "Attribute :  boolState[required_OF_A179] | Value : " << boolState[required_OF_A179] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A179] | Value : " << boolState[already_S_OF_A179] << endl;
	//cout << "Attribute :  boolState[S_OF_A179] | Value : " << boolState[S_OF_A179] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A179] | Value : " << boolState[relevant_evt_OF_A179] << endl;
	//cout << "Attribute :  boolState[failF_OF_A179] | Value : " << boolState[failF_OF_A179] << endl;
	//cout << "Attribute :  boolState[required_OF_A180] | Value : " << boolState[required_OF_A180] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A180] | Value : " << boolState[already_S_OF_A180] << endl;
	//cout << "Attribute :  boolState[S_OF_A180] | Value : " << boolState[S_OF_A180] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A180] | Value : " << boolState[relevant_evt_OF_A180] << endl;
	//cout << "Attribute :  boolState[failF_OF_A180] | Value : " << boolState[failF_OF_A180] << endl;
	//cout << "Attribute :  boolState[required_OF_A181] | Value : " << boolState[required_OF_A181] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A181] | Value : " << boolState[already_S_OF_A181] << endl;
	//cout << "Attribute :  boolState[S_OF_A181] | Value : " << boolState[S_OF_A181] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A181] | Value : " << boolState[relevant_evt_OF_A181] << endl;
	//cout << "Attribute :  boolState[failF_OF_A181] | Value : " << boolState[failF_OF_A181] << endl;
	//cout << "Attribute :  boolState[required_OF_A182] | Value : " << boolState[required_OF_A182] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A182] | Value : " << boolState[already_S_OF_A182] << endl;
	//cout << "Attribute :  boolState[S_OF_A182] | Value : " << boolState[S_OF_A182] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A182] | Value : " << boolState[relevant_evt_OF_A182] << endl;
	//cout << "Attribute :  boolState[required_OF_A184] | Value : " << boolState[required_OF_A184] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A184] | Value : " << boolState[already_S_OF_A184] << endl;
	//cout << "Attribute :  boolState[S_OF_A184] | Value : " << boolState[S_OF_A184] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A184] | Value : " << boolState[relevant_evt_OF_A184] << endl;
	//cout << "Attribute :  boolState[required_OF_A185] | Value : " << boolState[required_OF_A185] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A185] | Value : " << boolState[already_S_OF_A185] << endl;
	//cout << "Attribute :  boolState[S_OF_A185] | Value : " << boolState[S_OF_A185] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A185] | Value : " << boolState[relevant_evt_OF_A185] << endl;
	//cout << "Attribute :  boolState[required_OF_A186] | Value : " << boolState[required_OF_A186] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A186] | Value : " << boolState[already_S_OF_A186] << endl;
	//cout << "Attribute :  boolState[S_OF_A186] | Value : " << boolState[S_OF_A186] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A186] | Value : " << boolState[relevant_evt_OF_A186] << endl;
	//cout << "Attribute :  boolState[required_OF_A187] | Value : " << boolState[required_OF_A187] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A187] | Value : " << boolState[already_S_OF_A187] << endl;
	//cout << "Attribute :  boolState[S_OF_A187] | Value : " << boolState[S_OF_A187] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A187] | Value : " << boolState[relevant_evt_OF_A187] << endl;
	//cout << "Attribute :  boolState[required_OF_A188] | Value : " << boolState[required_OF_A188] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A188] | Value : " << boolState[already_S_OF_A188] << endl;
	//cout << "Attribute :  boolState[S_OF_A188] | Value : " << boolState[S_OF_A188] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A188] | Value : " << boolState[relevant_evt_OF_A188] << endl;
	//cout << "Attribute :  boolState[required_OF_A189] | Value : " << boolState[required_OF_A189] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A189] | Value : " << boolState[already_S_OF_A189] << endl;
	//cout << "Attribute :  boolState[S_OF_A189] | Value : " << boolState[S_OF_A189] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A189] | Value : " << boolState[relevant_evt_OF_A189] << endl;
	//cout << "Attribute :  boolState[required_OF_A19] | Value : " << boolState[required_OF_A19] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A19] | Value : " << boolState[already_S_OF_A19] << endl;
	//cout << "Attribute :  boolState[S_OF_A19] | Value : " << boolState[S_OF_A19] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A19] | Value : " << boolState[relevant_evt_OF_A19] << endl;
	//cout << "Attribute :  boolState[failF_OF_A19] | Value : " << boolState[failF_OF_A19] << endl;
	//cout << "Attribute :  boolState[required_OF_A190] | Value : " << boolState[required_OF_A190] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A190] | Value : " << boolState[already_S_OF_A190] << endl;
	//cout << "Attribute :  boolState[S_OF_A190] | Value : " << boolState[S_OF_A190] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A190] | Value : " << boolState[relevant_evt_OF_A190] << endl;
	//cout << "Attribute :  boolState[required_OF_A191] | Value : " << boolState[required_OF_A191] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A191] | Value : " << boolState[already_S_OF_A191] << endl;
	//cout << "Attribute :  boolState[S_OF_A191] | Value : " << boolState[S_OF_A191] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A191] | Value : " << boolState[relevant_evt_OF_A191] << endl;
	//cout << "Attribute :  boolState[required_OF_A192] | Value : " << boolState[required_OF_A192] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A192] | Value : " << boolState[already_S_OF_A192] << endl;
	//cout << "Attribute :  boolState[S_OF_A192] | Value : " << boolState[S_OF_A192] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A192] | Value : " << boolState[relevant_evt_OF_A192] << endl;
	//cout << "Attribute :  boolState[required_OF_A193] | Value : " << boolState[required_OF_A193] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A193] | Value : " << boolState[already_S_OF_A193] << endl;
	//cout << "Attribute :  boolState[S_OF_A193] | Value : " << boolState[S_OF_A193] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A193] | Value : " << boolState[relevant_evt_OF_A193] << endl;
	//cout << "Attribute :  boolState[required_OF_A2] | Value : " << boolState[required_OF_A2] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A2] | Value : " << boolState[already_S_OF_A2] << endl;
	//cout << "Attribute :  boolState[S_OF_A2] | Value : " << boolState[S_OF_A2] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A2] | Value : " << boolState[relevant_evt_OF_A2] << endl;
	//cout << "Attribute :  boolState[required_OF_A20] | Value : " << boolState[required_OF_A20] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A20] | Value : " << boolState[already_S_OF_A20] << endl;
	//cout << "Attribute :  boolState[S_OF_A20] | Value : " << boolState[S_OF_A20] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A20] | Value : " << boolState[relevant_evt_OF_A20] << endl;
	//cout << "Attribute :  boolState[required_OF_A22] | Value : " << boolState[required_OF_A22] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A22] | Value : " << boolState[already_S_OF_A22] << endl;
	//cout << "Attribute :  boolState[S_OF_A22] | Value : " << boolState[S_OF_A22] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A22] | Value : " << boolState[relevant_evt_OF_A22] << endl;
	//cout << "Attribute :  boolState[failF_OF_A22] | Value : " << boolState[failF_OF_A22] << endl;
	//cout << "Attribute :  boolState[required_OF_A23] | Value : " << boolState[required_OF_A23] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A23] | Value : " << boolState[already_S_OF_A23] << endl;
	//cout << "Attribute :  boolState[S_OF_A23] | Value : " << boolState[S_OF_A23] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A23] | Value : " << boolState[relevant_evt_OF_A23] << endl;
	//cout << "Attribute :  boolState[required_OF_A25] | Value : " << boolState[required_OF_A25] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A25] | Value : " << boolState[already_S_OF_A25] << endl;
	//cout << "Attribute :  boolState[S_OF_A25] | Value : " << boolState[S_OF_A25] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A25] | Value : " << boolState[relevant_evt_OF_A25] << endl;
	//cout << "Attribute :  boolState[failF_OF_A25] | Value : " << boolState[failF_OF_A25] << endl;
	//cout << "Attribute :  boolState[required_OF_A26] | Value : " << boolState[required_OF_A26] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A26] | Value : " << boolState[already_S_OF_A26] << endl;
	//cout << "Attribute :  boolState[S_OF_A26] | Value : " << boolState[S_OF_A26] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A26] | Value : " << boolState[relevant_evt_OF_A26] << endl;
	//cout << "Attribute :  boolState[required_OF_A28] | Value : " << boolState[required_OF_A28] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A28] | Value : " << boolState[already_S_OF_A28] << endl;
	//cout << "Attribute :  boolState[S_OF_A28] | Value : " << boolState[S_OF_A28] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A28] | Value : " << boolState[relevant_evt_OF_A28] << endl;
	//cout << "Attribute :  boolState[failF_OF_A28] | Value : " << boolState[failF_OF_A28] << endl;
	//cout << "Attribute :  boolState[required_OF_A29] | Value : " << boolState[required_OF_A29] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A29] | Value : " << boolState[already_S_OF_A29] << endl;
	//cout << "Attribute :  boolState[S_OF_A29] | Value : " << boolState[S_OF_A29] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A29] | Value : " << boolState[relevant_evt_OF_A29] << endl;
	//cout << "Attribute :  boolState[required_OF_A31] | Value : " << boolState[required_OF_A31] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A31] | Value : " << boolState[already_S_OF_A31] << endl;
	//cout << "Attribute :  boolState[S_OF_A31] | Value : " << boolState[S_OF_A31] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A31] | Value : " << boolState[relevant_evt_OF_A31] << endl;
	//cout << "Attribute :  boolState[failF_OF_A31] | Value : " << boolState[failF_OF_A31] << endl;
	//cout << "Attribute :  boolState[required_OF_A32] | Value : " << boolState[required_OF_A32] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A32] | Value : " << boolState[already_S_OF_A32] << endl;
	//cout << "Attribute :  boolState[S_OF_A32] | Value : " << boolState[S_OF_A32] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A32] | Value : " << boolState[relevant_evt_OF_A32] << endl;
	//cout << "Attribute :  boolState[required_OF_A34] | Value : " << boolState[required_OF_A34] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A34] | Value : " << boolState[already_S_OF_A34] << endl;
	//cout << "Attribute :  boolState[S_OF_A34] | Value : " << boolState[S_OF_A34] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A34] | Value : " << boolState[relevant_evt_OF_A34] << endl;
	//cout << "Attribute :  boolState[failF_OF_A34] | Value : " << boolState[failF_OF_A34] << endl;
	//cout << "Attribute :  boolState[required_OF_A35] | Value : " << boolState[required_OF_A35] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A35] | Value : " << boolState[already_S_OF_A35] << endl;
	//cout << "Attribute :  boolState[S_OF_A35] | Value : " << boolState[S_OF_A35] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A35] | Value : " << boolState[relevant_evt_OF_A35] << endl;
	//cout << "Attribute :  boolState[required_OF_A37] | Value : " << boolState[required_OF_A37] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A37] | Value : " << boolState[already_S_OF_A37] << endl;
	//cout << "Attribute :  boolState[S_OF_A37] | Value : " << boolState[S_OF_A37] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A37] | Value : " << boolState[relevant_evt_OF_A37] << endl;
	//cout << "Attribute :  boolState[failF_OF_A37] | Value : " << boolState[failF_OF_A37] << endl;
	//cout << "Attribute :  boolState[required_OF_A38] | Value : " << boolState[required_OF_A38] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A38] | Value : " << boolState[already_S_OF_A38] << endl;
	//cout << "Attribute :  boolState[S_OF_A38] | Value : " << boolState[S_OF_A38] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A38] | Value : " << boolState[relevant_evt_OF_A38] << endl;
	//cout << "Attribute :  boolState[required_OF_A4] | Value : " << boolState[required_OF_A4] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A4] | Value : " << boolState[already_S_OF_A4] << endl;
	//cout << "Attribute :  boolState[S_OF_A4] | Value : " << boolState[S_OF_A4] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A4] | Value : " << boolState[relevant_evt_OF_A4] << endl;
	//cout << "Attribute :  boolState[failF_OF_A4] | Value : " << boolState[failF_OF_A4] << endl;
	//cout << "Attribute :  boolState[required_OF_A40] | Value : " << boolState[required_OF_A40] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A40] | Value : " << boolState[already_S_OF_A40] << endl;
	//cout << "Attribute :  boolState[S_OF_A40] | Value : " << boolState[S_OF_A40] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A40] | Value : " << boolState[relevant_evt_OF_A40] << endl;
	//cout << "Attribute :  boolState[failF_OF_A40] | Value : " << boolState[failF_OF_A40] << endl;
	//cout << "Attribute :  boolState[required_OF_A41] | Value : " << boolState[required_OF_A41] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A41] | Value : " << boolState[already_S_OF_A41] << endl;
	//cout << "Attribute :  boolState[S_OF_A41] | Value : " << boolState[S_OF_A41] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A41] | Value : " << boolState[relevant_evt_OF_A41] << endl;
	//cout << "Attribute :  boolState[required_OF_A43] | Value : " << boolState[required_OF_A43] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A43] | Value : " << boolState[already_S_OF_A43] << endl;
	//cout << "Attribute :  boolState[S_OF_A43] | Value : " << boolState[S_OF_A43] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A43] | Value : " << boolState[relevant_evt_OF_A43] << endl;
	//cout << "Attribute :  boolState[failF_OF_A43] | Value : " << boolState[failF_OF_A43] << endl;
	//cout << "Attribute :  boolState[required_OF_A44] | Value : " << boolState[required_OF_A44] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A44] | Value : " << boolState[already_S_OF_A44] << endl;
	//cout << "Attribute :  boolState[S_OF_A44] | Value : " << boolState[S_OF_A44] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A44] | Value : " << boolState[relevant_evt_OF_A44] << endl;
	//cout << "Attribute :  boolState[required_OF_A45] | Value : " << boolState[required_OF_A45] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A45] | Value : " << boolState[already_S_OF_A45] << endl;
	//cout << "Attribute :  boolState[S_OF_A45] | Value : " << boolState[S_OF_A45] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A45] | Value : " << boolState[relevant_evt_OF_A45] << endl;
	//cout << "Attribute :  boolState[required_OF_A47] | Value : " << boolState[required_OF_A47] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A47] | Value : " << boolState[already_S_OF_A47] << endl;
	//cout << "Attribute :  boolState[S_OF_A47] | Value : " << boolState[S_OF_A47] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A47] | Value : " << boolState[relevant_evt_OF_A47] << endl;
	//cout << "Attribute :  boolState[failF_OF_A47] | Value : " << boolState[failF_OF_A47] << endl;
	//cout << "Attribute :  boolState[required_OF_A48] | Value : " << boolState[required_OF_A48] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A48] | Value : " << boolState[already_S_OF_A48] << endl;
	//cout << "Attribute :  boolState[S_OF_A48] | Value : " << boolState[S_OF_A48] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A48] | Value : " << boolState[relevant_evt_OF_A48] << endl;
	//cout << "Attribute :  boolState[required_OF_A49] | Value : " << boolState[required_OF_A49] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A49] | Value : " << boolState[already_S_OF_A49] << endl;
	//cout << "Attribute :  boolState[S_OF_A49] | Value : " << boolState[S_OF_A49] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A49] | Value : " << boolState[relevant_evt_OF_A49] << endl;
	//cout << "Attribute :  boolState[required_OF_A5] | Value : " << boolState[required_OF_A5] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A5] | Value : " << boolState[already_S_OF_A5] << endl;
	//cout << "Attribute :  boolState[S_OF_A5] | Value : " << boolState[S_OF_A5] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A5] | Value : " << boolState[relevant_evt_OF_A5] << endl;
	//cout << "Attribute :  boolState[required_OF_A50] | Value : " << boolState[required_OF_A50] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A50] | Value : " << boolState[already_S_OF_A50] << endl;
	//cout << "Attribute :  boolState[S_OF_A50] | Value : " << boolState[S_OF_A50] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A50] | Value : " << boolState[relevant_evt_OF_A50] << endl;
	//cout << "Attribute :  boolState[required_OF_A52] | Value : " << boolState[required_OF_A52] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A52] | Value : " << boolState[already_S_OF_A52] << endl;
	//cout << "Attribute :  boolState[S_OF_A52] | Value : " << boolState[S_OF_A52] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A52] | Value : " << boolState[relevant_evt_OF_A52] << endl;
	//cout << "Attribute :  boolState[required_OF_A53] | Value : " << boolState[required_OF_A53] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A53] | Value : " << boolState[already_S_OF_A53] << endl;
	//cout << "Attribute :  boolState[S_OF_A53] | Value : " << boolState[S_OF_A53] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A53] | Value : " << boolState[relevant_evt_OF_A53] << endl;
	//cout << "Attribute :  boolState[required_OF_A54] | Value : " << boolState[required_OF_A54] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A54] | Value : " << boolState[already_S_OF_A54] << endl;
	//cout << "Attribute :  boolState[S_OF_A54] | Value : " << boolState[S_OF_A54] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A54] | Value : " << boolState[relevant_evt_OF_A54] << endl;
	//cout << "Attribute :  boolState[required_OF_A55] | Value : " << boolState[required_OF_A55] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A55] | Value : " << boolState[already_S_OF_A55] << endl;
	//cout << "Attribute :  boolState[S_OF_A55] | Value : " << boolState[S_OF_A55] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A55] | Value : " << boolState[relevant_evt_OF_A55] << endl;
	//cout << "Attribute :  boolState[required_OF_A56] | Value : " << boolState[required_OF_A56] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A56] | Value : " << boolState[already_S_OF_A56] << endl;
	//cout << "Attribute :  boolState[S_OF_A56] | Value : " << boolState[S_OF_A56] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A56] | Value : " << boolState[relevant_evt_OF_A56] << endl;
	//cout << "Attribute :  boolState[required_OF_A57] | Value : " << boolState[required_OF_A57] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A57] | Value : " << boolState[already_S_OF_A57] << endl;
	//cout << "Attribute :  boolState[S_OF_A57] | Value : " << boolState[S_OF_A57] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A57] | Value : " << boolState[relevant_evt_OF_A57] << endl;
	//cout << "Attribute :  boolState[required_OF_A58] | Value : " << boolState[required_OF_A58] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A58] | Value : " << boolState[already_S_OF_A58] << endl;
	//cout << "Attribute :  boolState[S_OF_A58] | Value : " << boolState[S_OF_A58] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A58] | Value : " << boolState[relevant_evt_OF_A58] << endl;
	//cout << "Attribute :  boolState[required_OF_A59] | Value : " << boolState[required_OF_A59] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A59] | Value : " << boolState[already_S_OF_A59] << endl;
	//cout << "Attribute :  boolState[S_OF_A59] | Value : " << boolState[S_OF_A59] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A59] | Value : " << boolState[relevant_evt_OF_A59] << endl;
	//cout << "Attribute :  boolState[required_OF_A60] | Value : " << boolState[required_OF_A60] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A60] | Value : " << boolState[already_S_OF_A60] << endl;
	//cout << "Attribute :  boolState[S_OF_A60] | Value : " << boolState[S_OF_A60] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A60] | Value : " << boolState[relevant_evt_OF_A60] << endl;
	//cout << "Attribute :  boolState[required_OF_A61] | Value : " << boolState[required_OF_A61] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A61] | Value : " << boolState[already_S_OF_A61] << endl;
	//cout << "Attribute :  boolState[S_OF_A61] | Value : " << boolState[S_OF_A61] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A61] | Value : " << boolState[relevant_evt_OF_A61] << endl;
	//cout << "Attribute :  boolState[required_OF_A62] | Value : " << boolState[required_OF_A62] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A62] | Value : " << boolState[already_S_OF_A62] << endl;
	//cout << "Attribute :  boolState[S_OF_A62] | Value : " << boolState[S_OF_A62] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A62] | Value : " << boolState[relevant_evt_OF_A62] << endl;
	//cout << "Attribute :  boolState[required_OF_A63] | Value : " << boolState[required_OF_A63] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A63] | Value : " << boolState[already_S_OF_A63] << endl;
	//cout << "Attribute :  boolState[S_OF_A63] | Value : " << boolState[S_OF_A63] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A63] | Value : " << boolState[relevant_evt_OF_A63] << endl;
	//cout << "Attribute :  boolState[required_OF_A64] | Value : " << boolState[required_OF_A64] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A64] | Value : " << boolState[already_S_OF_A64] << endl;
	//cout << "Attribute :  boolState[S_OF_A64] | Value : " << boolState[S_OF_A64] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A64] | Value : " << boolState[relevant_evt_OF_A64] << endl;
	//cout << "Attribute :  boolState[required_OF_A65] | Value : " << boolState[required_OF_A65] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A65] | Value : " << boolState[already_S_OF_A65] << endl;
	//cout << "Attribute :  boolState[S_OF_A65] | Value : " << boolState[S_OF_A65] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A65] | Value : " << boolState[relevant_evt_OF_A65] << endl;
	//cout << "Attribute :  boolState[required_OF_A66] | Value : " << boolState[required_OF_A66] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A66] | Value : " << boolState[already_S_OF_A66] << endl;
	//cout << "Attribute :  boolState[S_OF_A66] | Value : " << boolState[S_OF_A66] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A66] | Value : " << boolState[relevant_evt_OF_A66] << endl;
	//cout << "Attribute :  boolState[required_OF_A67] | Value : " << boolState[required_OF_A67] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A67] | Value : " << boolState[already_S_OF_A67] << endl;
	//cout << "Attribute :  boolState[S_OF_A67] | Value : " << boolState[S_OF_A67] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A67] | Value : " << boolState[relevant_evt_OF_A67] << endl;
	//cout << "Attribute :  boolState[required_OF_A68] | Value : " << boolState[required_OF_A68] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A68] | Value : " << boolState[already_S_OF_A68] << endl;
	//cout << "Attribute :  boolState[S_OF_A68] | Value : " << boolState[S_OF_A68] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A68] | Value : " << boolState[relevant_evt_OF_A68] << endl;
	//cout << "Attribute :  boolState[required_OF_A69] | Value : " << boolState[required_OF_A69] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A69] | Value : " << boolState[already_S_OF_A69] << endl;
	//cout << "Attribute :  boolState[S_OF_A69] | Value : " << boolState[S_OF_A69] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A69] | Value : " << boolState[relevant_evt_OF_A69] << endl;
	//cout << "Attribute :  boolState[required_OF_A7] | Value : " << boolState[required_OF_A7] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A7] | Value : " << boolState[already_S_OF_A7] << endl;
	//cout << "Attribute :  boolState[S_OF_A7] | Value : " << boolState[S_OF_A7] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A7] | Value : " << boolState[relevant_evt_OF_A7] << endl;
	//cout << "Attribute :  boolState[failF_OF_A7] | Value : " << boolState[failF_OF_A7] << endl;
	//cout << "Attribute :  boolState[required_OF_A70] | Value : " << boolState[required_OF_A70] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A70] | Value : " << boolState[already_S_OF_A70] << endl;
	//cout << "Attribute :  boolState[S_OF_A70] | Value : " << boolState[S_OF_A70] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A70] | Value : " << boolState[relevant_evt_OF_A70] << endl;
	//cout << "Attribute :  boolState[required_OF_A71] | Value : " << boolState[required_OF_A71] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A71] | Value : " << boolState[already_S_OF_A71] << endl;
	//cout << "Attribute :  boolState[S_OF_A71] | Value : " << boolState[S_OF_A71] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A71] | Value : " << boolState[relevant_evt_OF_A71] << endl;
	//cout << "Attribute :  boolState[required_OF_A72] | Value : " << boolState[required_OF_A72] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A72] | Value : " << boolState[already_S_OF_A72] << endl;
	//cout << "Attribute :  boolState[S_OF_A72] | Value : " << boolState[S_OF_A72] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A72] | Value : " << boolState[relevant_evt_OF_A72] << endl;
	//cout << "Attribute :  boolState[required_OF_A73] | Value : " << boolState[required_OF_A73] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A73] | Value : " << boolState[already_S_OF_A73] << endl;
	//cout << "Attribute :  boolState[S_OF_A73] | Value : " << boolState[S_OF_A73] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A73] | Value : " << boolState[relevant_evt_OF_A73] << endl;
	//cout << "Attribute :  boolState[required_OF_A74] | Value : " << boolState[required_OF_A74] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A74] | Value : " << boolState[already_S_OF_A74] << endl;
	//cout << "Attribute :  boolState[S_OF_A74] | Value : " << boolState[S_OF_A74] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A74] | Value : " << boolState[relevant_evt_OF_A74] << endl;
	//cout << "Attribute :  boolState[required_OF_A75] | Value : " << boolState[required_OF_A75] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A75] | Value : " << boolState[already_S_OF_A75] << endl;
	//cout << "Attribute :  boolState[S_OF_A75] | Value : " << boolState[S_OF_A75] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A75] | Value : " << boolState[relevant_evt_OF_A75] << endl;
	//cout << "Attribute :  boolState[required_OF_A76] | Value : " << boolState[required_OF_A76] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A76] | Value : " << boolState[already_S_OF_A76] << endl;
	//cout << "Attribute :  boolState[S_OF_A76] | Value : " << boolState[S_OF_A76] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A76] | Value : " << boolState[relevant_evt_OF_A76] << endl;
	//cout << "Attribute :  boolState[required_OF_A77] | Value : " << boolState[required_OF_A77] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A77] | Value : " << boolState[already_S_OF_A77] << endl;
	//cout << "Attribute :  boolState[S_OF_A77] | Value : " << boolState[S_OF_A77] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A77] | Value : " << boolState[relevant_evt_OF_A77] << endl;
	//cout << "Attribute :  boolState[required_OF_A78] | Value : " << boolState[required_OF_A78] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A78] | Value : " << boolState[already_S_OF_A78] << endl;
	//cout << "Attribute :  boolState[S_OF_A78] | Value : " << boolState[S_OF_A78] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A78] | Value : " << boolState[relevant_evt_OF_A78] << endl;
	//cout << "Attribute :  boolState[required_OF_A79] | Value : " << boolState[required_OF_A79] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A79] | Value : " << boolState[already_S_OF_A79] << endl;
	//cout << "Attribute :  boolState[S_OF_A79] | Value : " << boolState[S_OF_A79] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A79] | Value : " << boolState[relevant_evt_OF_A79] << endl;
	//cout << "Attribute :  boolState[required_OF_A8] | Value : " << boolState[required_OF_A8] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A8] | Value : " << boolState[already_S_OF_A8] << endl;
	//cout << "Attribute :  boolState[S_OF_A8] | Value : " << boolState[S_OF_A8] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A8] | Value : " << boolState[relevant_evt_OF_A8] << endl;
	//cout << "Attribute :  boolState[required_OF_A80] | Value : " << boolState[required_OF_A80] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A80] | Value : " << boolState[already_S_OF_A80] << endl;
	//cout << "Attribute :  boolState[S_OF_A80] | Value : " << boolState[S_OF_A80] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A80] | Value : " << boolState[relevant_evt_OF_A80] << endl;
	//cout << "Attribute :  boolState[required_OF_A81] | Value : " << boolState[required_OF_A81] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A81] | Value : " << boolState[already_S_OF_A81] << endl;
	//cout << "Attribute :  boolState[S_OF_A81] | Value : " << boolState[S_OF_A81] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A81] | Value : " << boolState[relevant_evt_OF_A81] << endl;
	//cout << "Attribute :  boolState[required_OF_A82] | Value : " << boolState[required_OF_A82] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A82] | Value : " << boolState[already_S_OF_A82] << endl;
	//cout << "Attribute :  boolState[S_OF_A82] | Value : " << boolState[S_OF_A82] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A82] | Value : " << boolState[relevant_evt_OF_A82] << endl;
	//cout << "Attribute :  boolState[required_OF_A83] | Value : " << boolState[required_OF_A83] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A83] | Value : " << boolState[already_S_OF_A83] << endl;
	//cout << "Attribute :  boolState[S_OF_A83] | Value : " << boolState[S_OF_A83] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A83] | Value : " << boolState[relevant_evt_OF_A83] << endl;
	//cout << "Attribute :  boolState[failF_OF_A83] | Value : " << boolState[failF_OF_A83] << endl;
	//cout << "Attribute :  boolState[required_OF_A84] | Value : " << boolState[required_OF_A84] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A84] | Value : " << boolState[already_S_OF_A84] << endl;
	//cout << "Attribute :  boolState[S_OF_A84] | Value : " << boolState[S_OF_A84] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A84] | Value : " << boolState[relevant_evt_OF_A84] << endl;
	//cout << "Attribute :  boolState[failF_OF_A84] | Value : " << boolState[failF_OF_A84] << endl;
	//cout << "Attribute :  boolState[required_OF_A85] | Value : " << boolState[required_OF_A85] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A85] | Value : " << boolState[already_S_OF_A85] << endl;
	//cout << "Attribute :  boolState[S_OF_A85] | Value : " << boolState[S_OF_A85] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A85] | Value : " << boolState[relevant_evt_OF_A85] << endl;
	//cout << "Attribute :  boolState[failF_OF_A85] | Value : " << boolState[failF_OF_A85] << endl;
	//cout << "Attribute :  boolState[required_OF_A86] | Value : " << boolState[required_OF_A86] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A86] | Value : " << boolState[already_S_OF_A86] << endl;
	//cout << "Attribute :  boolState[S_OF_A86] | Value : " << boolState[S_OF_A86] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A86] | Value : " << boolState[relevant_evt_OF_A86] << endl;
	//cout << "Attribute :  boolState[failF_OF_A86] | Value : " << boolState[failF_OF_A86] << endl;
	//cout << "Attribute :  boolState[required_OF_A87] | Value : " << boolState[required_OF_A87] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A87] | Value : " << boolState[already_S_OF_A87] << endl;
	//cout << "Attribute :  boolState[S_OF_A87] | Value : " << boolState[S_OF_A87] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A87] | Value : " << boolState[relevant_evt_OF_A87] << endl;
	//cout << "Attribute :  boolState[failF_OF_A87] | Value : " << boolState[failF_OF_A87] << endl;
	//cout << "Attribute :  boolState[required_OF_A88] | Value : " << boolState[required_OF_A88] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A88] | Value : " << boolState[already_S_OF_A88] << endl;
	//cout << "Attribute :  boolState[S_OF_A88] | Value : " << boolState[S_OF_A88] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A88] | Value : " << boolState[relevant_evt_OF_A88] << endl;
	//cout << "Attribute :  boolState[failF_OF_A88] | Value : " << boolState[failF_OF_A88] << endl;
	//cout << "Attribute :  boolState[required_OF_A89] | Value : " << boolState[required_OF_A89] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A89] | Value : " << boolState[already_S_OF_A89] << endl;
	//cout << "Attribute :  boolState[S_OF_A89] | Value : " << boolState[S_OF_A89] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A89] | Value : " << boolState[relevant_evt_OF_A89] << endl;
	//cout << "Attribute :  boolState[failF_OF_A89] | Value : " << boolState[failF_OF_A89] << endl;
	//cout << "Attribute :  boolState[required_OF_A90] | Value : " << boolState[required_OF_A90] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A90] | Value : " << boolState[already_S_OF_A90] << endl;
	//cout << "Attribute :  boolState[S_OF_A90] | Value : " << boolState[S_OF_A90] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A90] | Value : " << boolState[relevant_evt_OF_A90] << endl;
	//cout << "Attribute :  boolState[failF_OF_A90] | Value : " << boolState[failF_OF_A90] << endl;
	//cout << "Attribute :  boolState[required_OF_A91] | Value : " << boolState[required_OF_A91] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A91] | Value : " << boolState[already_S_OF_A91] << endl;
	//cout << "Attribute :  boolState[S_OF_A91] | Value : " << boolState[S_OF_A91] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A91] | Value : " << boolState[relevant_evt_OF_A91] << endl;
	//cout << "Attribute :  boolState[failF_OF_A91] | Value : " << boolState[failF_OF_A91] << endl;
	//cout << "Attribute :  boolState[required_OF_A92] | Value : " << boolState[required_OF_A92] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A92] | Value : " << boolState[already_S_OF_A92] << endl;
	//cout << "Attribute :  boolState[S_OF_A92] | Value : " << boolState[S_OF_A92] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A92] | Value : " << boolState[relevant_evt_OF_A92] << endl;
	//cout << "Attribute :  boolState[failF_OF_A92] | Value : " << boolState[failF_OF_A92] << endl;
	//cout << "Attribute :  boolState[required_OF_A93] | Value : " << boolState[required_OF_A93] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A93] | Value : " << boolState[already_S_OF_A93] << endl;
	//cout << "Attribute :  boolState[S_OF_A93] | Value : " << boolState[S_OF_A93] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A93] | Value : " << boolState[relevant_evt_OF_A93] << endl;
	//cout << "Attribute :  boolState[failF_OF_A93] | Value : " << boolState[failF_OF_A93] << endl;
	//cout << "Attribute :  boolState[required_OF_A94] | Value : " << boolState[required_OF_A94] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A94] | Value : " << boolState[already_S_OF_A94] << endl;
	//cout << "Attribute :  boolState[S_OF_A94] | Value : " << boolState[S_OF_A94] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A94] | Value : " << boolState[relevant_evt_OF_A94] << endl;
	//cout << "Attribute :  boolState[required_OF_A96] | Value : " << boolState[required_OF_A96] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A96] | Value : " << boolState[already_S_OF_A96] << endl;
	//cout << "Attribute :  boolState[S_OF_A96] | Value : " << boolState[S_OF_A96] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A96] | Value : " << boolState[relevant_evt_OF_A96] << endl;
	//cout << "Attribute :  boolState[failF_OF_A96] | Value : " << boolState[failF_OF_A96] << endl;
	//cout << "Attribute :  boolState[required_OF_A97] | Value : " << boolState[required_OF_A97] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A97] | Value : " << boolState[already_S_OF_A97] << endl;
	//cout << "Attribute :  boolState[S_OF_A97] | Value : " << boolState[S_OF_A97] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A97] | Value : " << boolState[relevant_evt_OF_A97] << endl;
	//cout << "Attribute :  boolState[failF_OF_A97] | Value : " << boolState[failF_OF_A97] << endl;
	//cout << "Attribute :  boolState[required_OF_A98] | Value : " << boolState[required_OF_A98] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A98] | Value : " << boolState[already_S_OF_A98] << endl;
	//cout << "Attribute :  boolState[S_OF_A98] | Value : " << boolState[S_OF_A98] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A98] | Value : " << boolState[relevant_evt_OF_A98] << endl;
	//cout << "Attribute :  boolState[required_OF_UE_1] | Value : " << boolState[required_OF_UE_1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_UE_1] | Value : " << boolState[already_S_OF_UE_1] << endl;
	//cout << "Attribute :  boolState[S_OF_UE_1] | Value : " << boolState[S_OF_UE_1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_UE_1] | Value : " << boolState[relevant_evt_OF_UE_1] << endl;
	//cout << "Attribute :  boolState[required_OF_f_A52] | Value : " << boolState[required_OF_f_A52] << endl;
	//cout << "Attribute :  boolState[already_S_OF_f_A52] | Value : " << boolState[already_S_OF_f_A52] << endl;
	//cout << "Attribute :  boolState[S_OF_f_A52] | Value : " << boolState[S_OF_f_A52] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_f_A52] | Value : " << boolState[relevant_evt_OF_f_A52] << endl;
	//cout << "Attribute :  boolState[failF_OF_f_A52] | Value : " << boolState[failF_OF_f_A52] << endl;
	//cout << "Attribute :  boolState[required_OF_f_A53] | Value : " << boolState[required_OF_f_A53] << endl;
	//cout << "Attribute :  boolState[already_S_OF_f_A53] | Value : " << boolState[already_S_OF_f_A53] << endl;
	//cout << "Attribute :  boolState[S_OF_f_A53] | Value : " << boolState[S_OF_f_A53] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_f_A53] | Value : " << boolState[relevant_evt_OF_f_A53] << endl;
	//cout << "Attribute :  boolState[failF_OF_f_A53] | Value : " << boolState[failF_OF_f_A53] << endl;
	//cout << "Attribute :  boolState[required_OF_f_A54] | Value : " << boolState[required_OF_f_A54] << endl;
	//cout << "Attribute :  boolState[already_S_OF_f_A54] | Value : " << boolState[already_S_OF_f_A54] << endl;
	//cout << "Attribute :  boolState[S_OF_f_A54] | Value : " << boolState[S_OF_f_A54] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_f_A54] | Value : " << boolState[relevant_evt_OF_f_A54] << endl;
	//cout << "Attribute :  boolState[failF_OF_f_A54] | Value : " << boolState[failF_OF_f_A54] << endl;
	//cout << "Attribute :  boolState[required_OF_f_A55] | Value : " << boolState[required_OF_f_A55] << endl;
	//cout << "Attribute :  boolState[already_S_OF_f_A55] | Value : " << boolState[already_S_OF_f_A55] << endl;
	//cout << "Attribute :  boolState[S_OF_f_A55] | Value : " << boolState[S_OF_f_A55] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_f_A55] | Value : " << boolState[relevant_evt_OF_f_A55] << endl;
	//cout << "Attribute :  boolState[failF_OF_f_A55] | Value : " << boolState[failF_OF_f_A55] << endl;
	//cout << "Attribute :  boolState[required_OF_f_A56] | Value : " << boolState[required_OF_f_A56] << endl;
	//cout << "Attribute :  boolState[already_S_OF_f_A56] | Value : " << boolState[already_S_OF_f_A56] << endl;
	//cout << "Attribute :  boolState[S_OF_f_A56] | Value : " << boolState[S_OF_f_A56] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_f_A56] | Value : " << boolState[relevant_evt_OF_f_A56] << endl;
	//cout << "Attribute :  boolState[failF_OF_f_A56] | Value : " << boolState[failF_OF_f_A56] << endl;
	//cout << "Attribute :  boolState[required_OF_f_A57] | Value : " << boolState[required_OF_f_A57] << endl;
	//cout << "Attribute :  boolState[already_S_OF_f_A57] | Value : " << boolState[already_S_OF_f_A57] << endl;
	//cout << "Attribute :  boolState[S_OF_f_A57] | Value : " << boolState[S_OF_f_A57] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_f_A57] | Value : " << boolState[relevant_evt_OF_f_A57] << endl;
	//cout << "Attribute :  boolState[failF_OF_f_A57] | Value : " << boolState[failF_OF_f_A57] << endl;
	//cout << "Attribute :  boolState[required_OF_f_A58] | Value : " << boolState[required_OF_f_A58] << endl;
	//cout << "Attribute :  boolState[already_S_OF_f_A58] | Value : " << boolState[already_S_OF_f_A58] << endl;
	//cout << "Attribute :  boolState[S_OF_f_A58] | Value : " << boolState[S_OF_f_A58] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_f_A58] | Value : " << boolState[relevant_evt_OF_f_A58] << endl;
	//cout << "Attribute :  boolState[failF_OF_f_A58] | Value : " << boolState[failF_OF_f_A58] << endl;
	//cout << "Attribute :  boolState[required_OF_f_A60] | Value : " << boolState[required_OF_f_A60] << endl;
	//cout << "Attribute :  boolState[already_S_OF_f_A60] | Value : " << boolState[already_S_OF_f_A60] << endl;
	//cout << "Attribute :  boolState[S_OF_f_A60] | Value : " << boolState[S_OF_f_A60] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_f_A60] | Value : " << boolState[relevant_evt_OF_f_A60] << endl;
	//cout << "Attribute :  boolState[failF_OF_f_A60] | Value : " << boolState[failF_OF_f_A60] << endl;
	//cout << "Attribute :  boolState[required_OF_f_A61] | Value : " << boolState[required_OF_f_A61] << endl;
	//cout << "Attribute :  boolState[already_S_OF_f_A61] | Value : " << boolState[already_S_OF_f_A61] << endl;
	//cout << "Attribute :  boolState[S_OF_f_A61] | Value : " << boolState[S_OF_f_A61] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_f_A61] | Value : " << boolState[relevant_evt_OF_f_A61] << endl;
	//cout << "Attribute :  boolState[failF_OF_f_A61] | Value : " << boolState[failF_OF_f_A61] << endl;
	//cout << "Attribute :  boolState[required_OF_f_A63] | Value : " << boolState[required_OF_f_A63] << endl;
	//cout << "Attribute :  boolState[already_S_OF_f_A63] | Value : " << boolState[already_S_OF_f_A63] << endl;
	//cout << "Attribute :  boolState[S_OF_f_A63] | Value : " << boolState[S_OF_f_A63] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_f_A63] | Value : " << boolState[relevant_evt_OF_f_A63] << endl;
	//cout << "Attribute :  boolState[failF_OF_f_A63] | Value : " << boolState[failF_OF_f_A63] << endl;
	//cout << "Attribute :  boolState[required_OF_f_A64] | Value : " << boolState[required_OF_f_A64] << endl;
	//cout << "Attribute :  boolState[already_S_OF_f_A64] | Value : " << boolState[already_S_OF_f_A64] << endl;
	//cout << "Attribute :  boolState[S_OF_f_A64] | Value : " << boolState[S_OF_f_A64] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_f_A64] | Value : " << boolState[relevant_evt_OF_f_A64] << endl;
	//cout << "Attribute :  boolState[failF_OF_f_A64] | Value : " << boolState[failF_OF_f_A64] << endl;
	//cout << "Attribute :  boolState[required_OF_f_A66] | Value : " << boolState[required_OF_f_A66] << endl;
	//cout << "Attribute :  boolState[already_S_OF_f_A66] | Value : " << boolState[already_S_OF_f_A66] << endl;
	//cout << "Attribute :  boolState[S_OF_f_A66] | Value : " << boolState[S_OF_f_A66] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_f_A66] | Value : " << boolState[relevant_evt_OF_f_A66] << endl;
	//cout << "Attribute :  boolState[failF_OF_f_A66] | Value : " << boolState[failF_OF_f_A66] << endl;
	//cout << "Attribute :  boolState[required_OF_f_A67] | Value : " << boolState[required_OF_f_A67] << endl;
	//cout << "Attribute :  boolState[already_S_OF_f_A67] | Value : " << boolState[already_S_OF_f_A67] << endl;
	//cout << "Attribute :  boolState[S_OF_f_A67] | Value : " << boolState[S_OF_f_A67] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_f_A67] | Value : " << boolState[relevant_evt_OF_f_A67] << endl;
	//cout << "Attribute :  boolState[failF_OF_f_A67] | Value : " << boolState[failF_OF_f_A67] << endl;
	//cout << "Attribute :  boolState[required_OF_f_A68] | Value : " << boolState[required_OF_f_A68] << endl;
	//cout << "Attribute :  boolState[already_S_OF_f_A68] | Value : " << boolState[already_S_OF_f_A68] << endl;
	//cout << "Attribute :  boolState[S_OF_f_A68] | Value : " << boolState[S_OF_f_A68] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_f_A68] | Value : " << boolState[relevant_evt_OF_f_A68] << endl;
	//cout << "Attribute :  boolState[failF_OF_f_A68] | Value : " << boolState[failF_OF_f_A68] << endl;
	//cout << "Attribute :  boolState[required_OF_f_A69] | Value : " << boolState[required_OF_f_A69] << endl;
	//cout << "Attribute :  boolState[already_S_OF_f_A69] | Value : " << boolState[already_S_OF_f_A69] << endl;
	//cout << "Attribute :  boolState[S_OF_f_A69] | Value : " << boolState[S_OF_f_A69] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_f_A69] | Value : " << boolState[relevant_evt_OF_f_A69] << endl;
	//cout << "Attribute :  boolState[failF_OF_f_A69] | Value : " << boolState[failF_OF_f_A69] << endl;
	//cout << "Attribute :  boolState[required_OF_f_A70] | Value : " << boolState[required_OF_f_A70] << endl;
	//cout << "Attribute :  boolState[already_S_OF_f_A70] | Value : " << boolState[already_S_OF_f_A70] << endl;
	//cout << "Attribute :  boolState[S_OF_f_A70] | Value : " << boolState[S_OF_f_A70] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_f_A70] | Value : " << boolState[relevant_evt_OF_f_A70] << endl;
	//cout << "Attribute :  boolState[failF_OF_f_A70] | Value : " << boolState[failF_OF_f_A70] << endl;
	//cout << "Attribute :  boolState[required_OF_f_A71] | Value : " << boolState[required_OF_f_A71] << endl;
	//cout << "Attribute :  boolState[already_S_OF_f_A71] | Value : " << boolState[already_S_OF_f_A71] << endl;
	//cout << "Attribute :  boolState[S_OF_f_A71] | Value : " << boolState[S_OF_f_A71] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_f_A71] | Value : " << boolState[relevant_evt_OF_f_A71] << endl;
	//cout << "Attribute :  boolState[failF_OF_f_A71] | Value : " << boolState[failF_OF_f_A71] << endl;
	//cout << "Attribute :  boolState[required_OF_f_A72] | Value : " << boolState[required_OF_f_A72] << endl;
	//cout << "Attribute :  boolState[already_S_OF_f_A72] | Value : " << boolState[already_S_OF_f_A72] << endl;
	//cout << "Attribute :  boolState[S_OF_f_A72] | Value : " << boolState[S_OF_f_A72] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_f_A72] | Value : " << boolState[relevant_evt_OF_f_A72] << endl;
	//cout << "Attribute :  boolState[failF_OF_f_A72] | Value : " << boolState[failF_OF_f_A72] << endl;
	//cout << "Attribute :  boolState[required_OF_f_A73] | Value : " << boolState[required_OF_f_A73] << endl;
	//cout << "Attribute :  boolState[already_S_OF_f_A73] | Value : " << boolState[already_S_OF_f_A73] << endl;
	//cout << "Attribute :  boolState[S_OF_f_A73] | Value : " << boolState[S_OF_f_A73] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_f_A73] | Value : " << boolState[relevant_evt_OF_f_A73] << endl;
	//cout << "Attribute :  boolState[failF_OF_f_A73] | Value : " << boolState[failF_OF_f_A73] << endl;
	//cout << "Attribute :  boolState[required_OF_f_A74] | Value : " << boolState[required_OF_f_A74] << endl;
	//cout << "Attribute :  boolState[already_S_OF_f_A74] | Value : " << boolState[already_S_OF_f_A74] << endl;
	//cout << "Attribute :  boolState[S_OF_f_A74] | Value : " << boolState[S_OF_f_A74] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_f_A74] | Value : " << boolState[relevant_evt_OF_f_A74] << endl;
	//cout << "Attribute :  boolState[failF_OF_f_A74] | Value : " << boolState[failF_OF_f_A74] << endl;
	//cout << "Attribute :  boolState[required_OF_f_A75] | Value : " << boolState[required_OF_f_A75] << endl;
	//cout << "Attribute :  boolState[already_S_OF_f_A75] | Value : " << boolState[already_S_OF_f_A75] << endl;
	//cout << "Attribute :  boolState[S_OF_f_A75] | Value : " << boolState[S_OF_f_A75] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_f_A75] | Value : " << boolState[relevant_evt_OF_f_A75] << endl;
	//cout << "Attribute :  boolState[failF_OF_f_A75] | Value : " << boolState[failF_OF_f_A75] << endl;
	//cout << "Attribute :  boolState[required_OF_f_A76] | Value : " << boolState[required_OF_f_A76] << endl;
	//cout << "Attribute :  boolState[already_S_OF_f_A76] | Value : " << boolState[already_S_OF_f_A76] << endl;
	//cout << "Attribute :  boolState[S_OF_f_A76] | Value : " << boolState[S_OF_f_A76] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_f_A76] | Value : " << boolState[relevant_evt_OF_f_A76] << endl;
	//cout << "Attribute :  boolState[failF_OF_f_A76] | Value : " << boolState[failF_OF_f_A76] << endl;
	//cout << "Attribute :  boolState[required_OF_f_A77] | Value : " << boolState[required_OF_f_A77] << endl;
	//cout << "Attribute :  boolState[already_S_OF_f_A77] | Value : " << boolState[already_S_OF_f_A77] << endl;
	//cout << "Attribute :  boolState[S_OF_f_A77] | Value : " << boolState[S_OF_f_A77] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_f_A77] | Value : " << boolState[relevant_evt_OF_f_A77] << endl;
	//cout << "Attribute :  boolState[failF_OF_f_A77] | Value : " << boolState[failF_OF_f_A77] << endl;
	//cout << "Attribute :  boolState[required_OF_f_A81] | Value : " << boolState[required_OF_f_A81] << endl;
	//cout << "Attribute :  boolState[already_S_OF_f_A81] | Value : " << boolState[already_S_OF_f_A81] << endl;
	//cout << "Attribute :  boolState[S_OF_f_A81] | Value : " << boolState[S_OF_f_A81] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_f_A81] | Value : " << boolState[relevant_evt_OF_f_A81] << endl;
	//cout << "Attribute :  boolState[failF_OF_f_A81] | Value : " << boolState[failF_OF_f_A81] << endl;
	//cout << "Attribute :  boolState[required_OF_i_A52] | Value : " << boolState[required_OF_i_A52] << endl;
	//cout << "Attribute :  boolState[already_S_OF_i_A52] | Value : " << boolState[already_S_OF_i_A52] << endl;
	//cout << "Attribute :  boolState[S_OF_i_A52] | Value : " << boolState[S_OF_i_A52] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_i_A52] | Value : " << boolState[relevant_evt_OF_i_A52] << endl;
	//cout << "Attribute :  boolState[failI_OF_i_A52] | Value : " << boolState[failI_OF_i_A52] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_i_A52] | Value : " << boolState[to_be_fired_OF_i_A52] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_i_A52] | Value : " << boolState[already_standby_OF_i_A52] << endl;
	//cout << "Attribute :  boolState[already_required_OF_i_A52] | Value : " << boolState[already_required_OF_i_A52] << endl;
	//cout << "Attribute :  boolState[required_OF_i_A53] | Value : " << boolState[required_OF_i_A53] << endl;
	//cout << "Attribute :  boolState[already_S_OF_i_A53] | Value : " << boolState[already_S_OF_i_A53] << endl;
	//cout << "Attribute :  boolState[S_OF_i_A53] | Value : " << boolState[S_OF_i_A53] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_i_A53] | Value : " << boolState[relevant_evt_OF_i_A53] << endl;
	//cout << "Attribute :  boolState[failI_OF_i_A53] | Value : " << boolState[failI_OF_i_A53] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_i_A53] | Value : " << boolState[to_be_fired_OF_i_A53] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_i_A53] | Value : " << boolState[already_standby_OF_i_A53] << endl;
	//cout << "Attribute :  boolState[already_required_OF_i_A53] | Value : " << boolState[already_required_OF_i_A53] << endl;
	//cout << "Attribute :  boolState[required_OF_i_A54] | Value : " << boolState[required_OF_i_A54] << endl;
	//cout << "Attribute :  boolState[already_S_OF_i_A54] | Value : " << boolState[already_S_OF_i_A54] << endl;
	//cout << "Attribute :  boolState[S_OF_i_A54] | Value : " << boolState[S_OF_i_A54] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_i_A54] | Value : " << boolState[relevant_evt_OF_i_A54] << endl;
	//cout << "Attribute :  boolState[failI_OF_i_A54] | Value : " << boolState[failI_OF_i_A54] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_i_A54] | Value : " << boolState[to_be_fired_OF_i_A54] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_i_A54] | Value : " << boolState[already_standby_OF_i_A54] << endl;
	//cout << "Attribute :  boolState[already_required_OF_i_A54] | Value : " << boolState[already_required_OF_i_A54] << endl;
	//cout << "Attribute :  boolState[required_OF_i_A55] | Value : " << boolState[required_OF_i_A55] << endl;
	//cout << "Attribute :  boolState[already_S_OF_i_A55] | Value : " << boolState[already_S_OF_i_A55] << endl;
	//cout << "Attribute :  boolState[S_OF_i_A55] | Value : " << boolState[S_OF_i_A55] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_i_A55] | Value : " << boolState[relevant_evt_OF_i_A55] << endl;
	//cout << "Attribute :  boolState[failI_OF_i_A55] | Value : " << boolState[failI_OF_i_A55] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_i_A55] | Value : " << boolState[to_be_fired_OF_i_A55] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_i_A55] | Value : " << boolState[already_standby_OF_i_A55] << endl;
	//cout << "Attribute :  boolState[already_required_OF_i_A55] | Value : " << boolState[already_required_OF_i_A55] << endl;
	//cout << "Attribute :  boolState[required_OF_i_A56] | Value : " << boolState[required_OF_i_A56] << endl;
	//cout << "Attribute :  boolState[already_S_OF_i_A56] | Value : " << boolState[already_S_OF_i_A56] << endl;
	//cout << "Attribute :  boolState[S_OF_i_A56] | Value : " << boolState[S_OF_i_A56] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_i_A56] | Value : " << boolState[relevant_evt_OF_i_A56] << endl;
	//cout << "Attribute :  boolState[failI_OF_i_A56] | Value : " << boolState[failI_OF_i_A56] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_i_A56] | Value : " << boolState[to_be_fired_OF_i_A56] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_i_A56] | Value : " << boolState[already_standby_OF_i_A56] << endl;
	//cout << "Attribute :  boolState[already_required_OF_i_A56] | Value : " << boolState[already_required_OF_i_A56] << endl;
	//cout << "Attribute :  boolState[required_OF_i_A57] | Value : " << boolState[required_OF_i_A57] << endl;
	//cout << "Attribute :  boolState[already_S_OF_i_A57] | Value : " << boolState[already_S_OF_i_A57] << endl;
	//cout << "Attribute :  boolState[S_OF_i_A57] | Value : " << boolState[S_OF_i_A57] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_i_A57] | Value : " << boolState[relevant_evt_OF_i_A57] << endl;
	//cout << "Attribute :  boolState[failI_OF_i_A57] | Value : " << boolState[failI_OF_i_A57] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_i_A57] | Value : " << boolState[to_be_fired_OF_i_A57] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_i_A57] | Value : " << boolState[already_standby_OF_i_A57] << endl;
	//cout << "Attribute :  boolState[already_required_OF_i_A57] | Value : " << boolState[already_required_OF_i_A57] << endl;
	//cout << "Attribute :  boolState[required_OF_i_A58] | Value : " << boolState[required_OF_i_A58] << endl;
	//cout << "Attribute :  boolState[already_S_OF_i_A58] | Value : " << boolState[already_S_OF_i_A58] << endl;
	//cout << "Attribute :  boolState[S_OF_i_A58] | Value : " << boolState[S_OF_i_A58] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_i_A58] | Value : " << boolState[relevant_evt_OF_i_A58] << endl;
	//cout << "Attribute :  boolState[failI_OF_i_A58] | Value : " << boolState[failI_OF_i_A58] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_i_A58] | Value : " << boolState[to_be_fired_OF_i_A58] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_i_A58] | Value : " << boolState[already_standby_OF_i_A58] << endl;
	//cout << "Attribute :  boolState[already_required_OF_i_A58] | Value : " << boolState[already_required_OF_i_A58] << endl;
	//cout << "Attribute :  boolState[required_OF_i_A60] | Value : " << boolState[required_OF_i_A60] << endl;
	//cout << "Attribute :  boolState[already_S_OF_i_A60] | Value : " << boolState[already_S_OF_i_A60] << endl;
	//cout << "Attribute :  boolState[S_OF_i_A60] | Value : " << boolState[S_OF_i_A60] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_i_A60] | Value : " << boolState[relevant_evt_OF_i_A60] << endl;
	//cout << "Attribute :  boolState[failI_OF_i_A60] | Value : " << boolState[failI_OF_i_A60] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_i_A60] | Value : " << boolState[to_be_fired_OF_i_A60] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_i_A60] | Value : " << boolState[already_standby_OF_i_A60] << endl;
	//cout << "Attribute :  boolState[already_required_OF_i_A60] | Value : " << boolState[already_required_OF_i_A60] << endl;
	//cout << "Attribute :  boolState[required_OF_i_A61] | Value : " << boolState[required_OF_i_A61] << endl;
	//cout << "Attribute :  boolState[already_S_OF_i_A61] | Value : " << boolState[already_S_OF_i_A61] << endl;
	//cout << "Attribute :  boolState[S_OF_i_A61] | Value : " << boolState[S_OF_i_A61] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_i_A61] | Value : " << boolState[relevant_evt_OF_i_A61] << endl;
	//cout << "Attribute :  boolState[failI_OF_i_A61] | Value : " << boolState[failI_OF_i_A61] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_i_A61] | Value : " << boolState[to_be_fired_OF_i_A61] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_i_A61] | Value : " << boolState[already_standby_OF_i_A61] << endl;
	//cout << "Attribute :  boolState[already_required_OF_i_A61] | Value : " << boolState[already_required_OF_i_A61] << endl;
	//cout << "Attribute :  boolState[required_OF_i_A63] | Value : " << boolState[required_OF_i_A63] << endl;
	//cout << "Attribute :  boolState[already_S_OF_i_A63] | Value : " << boolState[already_S_OF_i_A63] << endl;
	//cout << "Attribute :  boolState[S_OF_i_A63] | Value : " << boolState[S_OF_i_A63] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_i_A63] | Value : " << boolState[relevant_evt_OF_i_A63] << endl;
	//cout << "Attribute :  boolState[failI_OF_i_A63] | Value : " << boolState[failI_OF_i_A63] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_i_A63] | Value : " << boolState[to_be_fired_OF_i_A63] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_i_A63] | Value : " << boolState[already_standby_OF_i_A63] << endl;
	//cout << "Attribute :  boolState[already_required_OF_i_A63] | Value : " << boolState[already_required_OF_i_A63] << endl;
	//cout << "Attribute :  boolState[required_OF_i_A64] | Value : " << boolState[required_OF_i_A64] << endl;
	//cout << "Attribute :  boolState[already_S_OF_i_A64] | Value : " << boolState[already_S_OF_i_A64] << endl;
	//cout << "Attribute :  boolState[S_OF_i_A64] | Value : " << boolState[S_OF_i_A64] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_i_A64] | Value : " << boolState[relevant_evt_OF_i_A64] << endl;
	//cout << "Attribute :  boolState[failI_OF_i_A64] | Value : " << boolState[failI_OF_i_A64] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_i_A64] | Value : " << boolState[to_be_fired_OF_i_A64] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_i_A64] | Value : " << boolState[already_standby_OF_i_A64] << endl;
	//cout << "Attribute :  boolState[already_required_OF_i_A64] | Value : " << boolState[already_required_OF_i_A64] << endl;
	//cout << "Attribute :  boolState[required_OF_i_A66] | Value : " << boolState[required_OF_i_A66] << endl;
	//cout << "Attribute :  boolState[already_S_OF_i_A66] | Value : " << boolState[already_S_OF_i_A66] << endl;
	//cout << "Attribute :  boolState[S_OF_i_A66] | Value : " << boolState[S_OF_i_A66] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_i_A66] | Value : " << boolState[relevant_evt_OF_i_A66] << endl;
	//cout << "Attribute :  boolState[failI_OF_i_A66] | Value : " << boolState[failI_OF_i_A66] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_i_A66] | Value : " << boolState[to_be_fired_OF_i_A66] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_i_A66] | Value : " << boolState[already_standby_OF_i_A66] << endl;
	//cout << "Attribute :  boolState[already_required_OF_i_A66] | Value : " << boolState[already_required_OF_i_A66] << endl;
	//cout << "Attribute :  boolState[required_OF_i_A67] | Value : " << boolState[required_OF_i_A67] << endl;
	//cout << "Attribute :  boolState[already_S_OF_i_A67] | Value : " << boolState[already_S_OF_i_A67] << endl;
	//cout << "Attribute :  boolState[S_OF_i_A67] | Value : " << boolState[S_OF_i_A67] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_i_A67] | Value : " << boolState[relevant_evt_OF_i_A67] << endl;
	//cout << "Attribute :  boolState[failI_OF_i_A67] | Value : " << boolState[failI_OF_i_A67] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_i_A67] | Value : " << boolState[to_be_fired_OF_i_A67] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_i_A67] | Value : " << boolState[already_standby_OF_i_A67] << endl;
	//cout << "Attribute :  boolState[already_required_OF_i_A67] | Value : " << boolState[already_required_OF_i_A67] << endl;
	//cout << "Attribute :  boolState[required_OF_i_A68] | Value : " << boolState[required_OF_i_A68] << endl;
	//cout << "Attribute :  boolState[already_S_OF_i_A68] | Value : " << boolState[already_S_OF_i_A68] << endl;
	//cout << "Attribute :  boolState[S_OF_i_A68] | Value : " << boolState[S_OF_i_A68] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_i_A68] | Value : " << boolState[relevant_evt_OF_i_A68] << endl;
	//cout << "Attribute :  boolState[failI_OF_i_A68] | Value : " << boolState[failI_OF_i_A68] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_i_A68] | Value : " << boolState[to_be_fired_OF_i_A68] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_i_A68] | Value : " << boolState[already_standby_OF_i_A68] << endl;
	//cout << "Attribute :  boolState[already_required_OF_i_A68] | Value : " << boolState[already_required_OF_i_A68] << endl;
	//cout << "Attribute :  boolState[required_OF_i_A69] | Value : " << boolState[required_OF_i_A69] << endl;
	//cout << "Attribute :  boolState[already_S_OF_i_A69] | Value : " << boolState[already_S_OF_i_A69] << endl;
	//cout << "Attribute :  boolState[S_OF_i_A69] | Value : " << boolState[S_OF_i_A69] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_i_A69] | Value : " << boolState[relevant_evt_OF_i_A69] << endl;
	//cout << "Attribute :  boolState[failI_OF_i_A69] | Value : " << boolState[failI_OF_i_A69] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_i_A69] | Value : " << boolState[to_be_fired_OF_i_A69] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_i_A69] | Value : " << boolState[already_standby_OF_i_A69] << endl;
	//cout << "Attribute :  boolState[already_required_OF_i_A69] | Value : " << boolState[already_required_OF_i_A69] << endl;
	//cout << "Attribute :  boolState[required_OF_i_A70] | Value : " << boolState[required_OF_i_A70] << endl;
	//cout << "Attribute :  boolState[already_S_OF_i_A70] | Value : " << boolState[already_S_OF_i_A70] << endl;
	//cout << "Attribute :  boolState[S_OF_i_A70] | Value : " << boolState[S_OF_i_A70] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_i_A70] | Value : " << boolState[relevant_evt_OF_i_A70] << endl;
	//cout << "Attribute :  boolState[failI_OF_i_A70] | Value : " << boolState[failI_OF_i_A70] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_i_A70] | Value : " << boolState[to_be_fired_OF_i_A70] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_i_A70] | Value : " << boolState[already_standby_OF_i_A70] << endl;
	//cout << "Attribute :  boolState[already_required_OF_i_A70] | Value : " << boolState[already_required_OF_i_A70] << endl;
	//cout << "Attribute :  boolState[required_OF_i_A71] | Value : " << boolState[required_OF_i_A71] << endl;
	//cout << "Attribute :  boolState[already_S_OF_i_A71] | Value : " << boolState[already_S_OF_i_A71] << endl;
	//cout << "Attribute :  boolState[S_OF_i_A71] | Value : " << boolState[S_OF_i_A71] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_i_A71] | Value : " << boolState[relevant_evt_OF_i_A71] << endl;
	//cout << "Attribute :  boolState[failI_OF_i_A71] | Value : " << boolState[failI_OF_i_A71] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_i_A71] | Value : " << boolState[to_be_fired_OF_i_A71] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_i_A71] | Value : " << boolState[already_standby_OF_i_A71] << endl;
	//cout << "Attribute :  boolState[already_required_OF_i_A71] | Value : " << boolState[already_required_OF_i_A71] << endl;
	//cout << "Attribute :  boolState[required_OF_i_A72] | Value : " << boolState[required_OF_i_A72] << endl;
	//cout << "Attribute :  boolState[already_S_OF_i_A72] | Value : " << boolState[already_S_OF_i_A72] << endl;
	//cout << "Attribute :  boolState[S_OF_i_A72] | Value : " << boolState[S_OF_i_A72] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_i_A72] | Value : " << boolState[relevant_evt_OF_i_A72] << endl;
	//cout << "Attribute :  boolState[failI_OF_i_A72] | Value : " << boolState[failI_OF_i_A72] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_i_A72] | Value : " << boolState[to_be_fired_OF_i_A72] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_i_A72] | Value : " << boolState[already_standby_OF_i_A72] << endl;
	//cout << "Attribute :  boolState[already_required_OF_i_A72] | Value : " << boolState[already_required_OF_i_A72] << endl;
	//cout << "Attribute :  boolState[required_OF_i_A73] | Value : " << boolState[required_OF_i_A73] << endl;
	//cout << "Attribute :  boolState[already_S_OF_i_A73] | Value : " << boolState[already_S_OF_i_A73] << endl;
	//cout << "Attribute :  boolState[S_OF_i_A73] | Value : " << boolState[S_OF_i_A73] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_i_A73] | Value : " << boolState[relevant_evt_OF_i_A73] << endl;
	//cout << "Attribute :  boolState[failI_OF_i_A73] | Value : " << boolState[failI_OF_i_A73] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_i_A73] | Value : " << boolState[to_be_fired_OF_i_A73] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_i_A73] | Value : " << boolState[already_standby_OF_i_A73] << endl;
	//cout << "Attribute :  boolState[already_required_OF_i_A73] | Value : " << boolState[already_required_OF_i_A73] << endl;
	//cout << "Attribute :  boolState[required_OF_i_A74] | Value : " << boolState[required_OF_i_A74] << endl;
	//cout << "Attribute :  boolState[already_S_OF_i_A74] | Value : " << boolState[already_S_OF_i_A74] << endl;
	//cout << "Attribute :  boolState[S_OF_i_A74] | Value : " << boolState[S_OF_i_A74] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_i_A74] | Value : " << boolState[relevant_evt_OF_i_A74] << endl;
	//cout << "Attribute :  boolState[failI_OF_i_A74] | Value : " << boolState[failI_OF_i_A74] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_i_A74] | Value : " << boolState[to_be_fired_OF_i_A74] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_i_A74] | Value : " << boolState[already_standby_OF_i_A74] << endl;
	//cout << "Attribute :  boolState[already_required_OF_i_A74] | Value : " << boolState[already_required_OF_i_A74] << endl;
	//cout << "Attribute :  boolState[required_OF_i_A75] | Value : " << boolState[required_OF_i_A75] << endl;
	//cout << "Attribute :  boolState[already_S_OF_i_A75] | Value : " << boolState[already_S_OF_i_A75] << endl;
	//cout << "Attribute :  boolState[S_OF_i_A75] | Value : " << boolState[S_OF_i_A75] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_i_A75] | Value : " << boolState[relevant_evt_OF_i_A75] << endl;
	//cout << "Attribute :  boolState[failI_OF_i_A75] | Value : " << boolState[failI_OF_i_A75] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_i_A75] | Value : " << boolState[to_be_fired_OF_i_A75] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_i_A75] | Value : " << boolState[already_standby_OF_i_A75] << endl;
	//cout << "Attribute :  boolState[already_required_OF_i_A75] | Value : " << boolState[already_required_OF_i_A75] << endl;
	//cout << "Attribute :  boolState[required_OF_i_A76] | Value : " << boolState[required_OF_i_A76] << endl;
	//cout << "Attribute :  boolState[already_S_OF_i_A76] | Value : " << boolState[already_S_OF_i_A76] << endl;
	//cout << "Attribute :  boolState[S_OF_i_A76] | Value : " << boolState[S_OF_i_A76] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_i_A76] | Value : " << boolState[relevant_evt_OF_i_A76] << endl;
	//cout << "Attribute :  boolState[failI_OF_i_A76] | Value : " << boolState[failI_OF_i_A76] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_i_A76] | Value : " << boolState[to_be_fired_OF_i_A76] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_i_A76] | Value : " << boolState[already_standby_OF_i_A76] << endl;
	//cout << "Attribute :  boolState[already_required_OF_i_A76] | Value : " << boolState[already_required_OF_i_A76] << endl;
	//cout << "Attribute :  boolState[required_OF_i_A77] | Value : " << boolState[required_OF_i_A77] << endl;
	//cout << "Attribute :  boolState[already_S_OF_i_A77] | Value : " << boolState[already_S_OF_i_A77] << endl;
	//cout << "Attribute :  boolState[S_OF_i_A77] | Value : " << boolState[S_OF_i_A77] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_i_A77] | Value : " << boolState[relevant_evt_OF_i_A77] << endl;
	//cout << "Attribute :  boolState[failI_OF_i_A77] | Value : " << boolState[failI_OF_i_A77] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_i_A77] | Value : " << boolState[to_be_fired_OF_i_A77] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_i_A77] | Value : " << boolState[already_standby_OF_i_A77] << endl;
	//cout << "Attribute :  boolState[already_required_OF_i_A77] | Value : " << boolState[already_required_OF_i_A77] << endl;
	//cout << "Attribute :  boolState[required_OF_i_A81] | Value : " << boolState[required_OF_i_A81] << endl;
	//cout << "Attribute :  boolState[already_S_OF_i_A81] | Value : " << boolState[already_S_OF_i_A81] << endl;
	//cout << "Attribute :  boolState[S_OF_i_A81] | Value : " << boolState[S_OF_i_A81] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_i_A81] | Value : " << boolState[relevant_evt_OF_i_A81] << endl;
	//cout << "Attribute :  boolState[failI_OF_i_A81] | Value : " << boolState[failI_OF_i_A81] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_i_A81] | Value : " << boolState[to_be_fired_OF_i_A81] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_i_A81] | Value : " << boolState[already_standby_OF_i_A81] << endl;
	//cout << "Attribute :  boolState[already_required_OF_i_A81] | Value : " << boolState[already_required_OF_i_A81] << endl;
}

bool storm::figaro::FigaroProgram_vgs_8_Trim_Article_No_repair::figaromodelhasinstransitions()
{
	return true;
}
void storm::figaro::FigaroProgram_vgs_8_Trim_Article_No_repair::doReinitialisations()
{
	boolState[required_OF_A0] = REINITIALISATION_OF_required_OF_A0;
	boolState[S_OF_A0] = REINITIALISATION_OF_S_OF_A0;
	boolState[relevant_evt_OF_A0] = REINITIALISATION_OF_relevant_evt_OF_A0;
	boolState[required_OF_A1] = REINITIALISATION_OF_required_OF_A1;
	boolState[S_OF_A1] = REINITIALISATION_OF_S_OF_A1;
	boolState[relevant_evt_OF_A1] = REINITIALISATION_OF_relevant_evt_OF_A1;
	boolState[required_OF_A10] = REINITIALISATION_OF_required_OF_A10;
	boolState[S_OF_A10] = REINITIALISATION_OF_S_OF_A10;
	boolState[relevant_evt_OF_A10] = REINITIALISATION_OF_relevant_evt_OF_A10;
	boolState[required_OF_A100] = REINITIALISATION_OF_required_OF_A100;
	boolState[S_OF_A100] = REINITIALISATION_OF_S_OF_A100;
	boolState[relevant_evt_OF_A100] = REINITIALISATION_OF_relevant_evt_OF_A100;
	boolState[required_OF_A101] = REINITIALISATION_OF_required_OF_A101;
	boolState[S_OF_A101] = REINITIALISATION_OF_S_OF_A101;
	boolState[relevant_evt_OF_A101] = REINITIALISATION_OF_relevant_evt_OF_A101;
	boolState[required_OF_A102] = REINITIALISATION_OF_required_OF_A102;
	boolState[S_OF_A102] = REINITIALISATION_OF_S_OF_A102;
	boolState[relevant_evt_OF_A102] = REINITIALISATION_OF_relevant_evt_OF_A102;
	boolState[required_OF_A103] = REINITIALISATION_OF_required_OF_A103;
	boolState[S_OF_A103] = REINITIALISATION_OF_S_OF_A103;
	boolState[relevant_evt_OF_A103] = REINITIALISATION_OF_relevant_evt_OF_A103;
	boolState[required_OF_A105] = REINITIALISATION_OF_required_OF_A105;
	boolState[S_OF_A105] = REINITIALISATION_OF_S_OF_A105;
	boolState[relevant_evt_OF_A105] = REINITIALISATION_OF_relevant_evt_OF_A105;
	boolState[required_OF_A106] = REINITIALISATION_OF_required_OF_A106;
	boolState[S_OF_A106] = REINITIALISATION_OF_S_OF_A106;
	boolState[relevant_evt_OF_A106] = REINITIALISATION_OF_relevant_evt_OF_A106;
	boolState[required_OF_A107] = REINITIALISATION_OF_required_OF_A107;
	boolState[S_OF_A107] = REINITIALISATION_OF_S_OF_A107;
	boolState[relevant_evt_OF_A107] = REINITIALISATION_OF_relevant_evt_OF_A107;
	boolState[required_OF_A109] = REINITIALISATION_OF_required_OF_A109;
	boolState[S_OF_A109] = REINITIALISATION_OF_S_OF_A109;
	boolState[relevant_evt_OF_A109] = REINITIALISATION_OF_relevant_evt_OF_A109;
	boolState[required_OF_A11] = REINITIALISATION_OF_required_OF_A11;
	boolState[S_OF_A11] = REINITIALISATION_OF_S_OF_A11;
	boolState[relevant_evt_OF_A11] = REINITIALISATION_OF_relevant_evt_OF_A11;
	boolState[required_OF_A110] = REINITIALISATION_OF_required_OF_A110;
	boolState[S_OF_A110] = REINITIALISATION_OF_S_OF_A110;
	boolState[relevant_evt_OF_A110] = REINITIALISATION_OF_relevant_evt_OF_A110;
	boolState[required_OF_A111] = REINITIALISATION_OF_required_OF_A111;
	boolState[S_OF_A111] = REINITIALISATION_OF_S_OF_A111;
	boolState[relevant_evt_OF_A111] = REINITIALISATION_OF_relevant_evt_OF_A111;
	boolState[required_OF_A112] = REINITIALISATION_OF_required_OF_A112;
	boolState[S_OF_A112] = REINITIALISATION_OF_S_OF_A112;
	boolState[relevant_evt_OF_A112] = REINITIALISATION_OF_relevant_evt_OF_A112;
	boolState[required_OF_A114] = REINITIALISATION_OF_required_OF_A114;
	boolState[S_OF_A114] = REINITIALISATION_OF_S_OF_A114;
	boolState[relevant_evt_OF_A114] = REINITIALISATION_OF_relevant_evt_OF_A114;
	boolState[required_OF_A115] = REINITIALISATION_OF_required_OF_A115;
	boolState[S_OF_A115] = REINITIALISATION_OF_S_OF_A115;
	boolState[relevant_evt_OF_A115] = REINITIALISATION_OF_relevant_evt_OF_A115;
	boolState[required_OF_A116] = REINITIALISATION_OF_required_OF_A116;
	boolState[S_OF_A116] = REINITIALISATION_OF_S_OF_A116;
	boolState[relevant_evt_OF_A116] = REINITIALISATION_OF_relevant_evt_OF_A116;
	boolState[required_OF_A118] = REINITIALISATION_OF_required_OF_A118;
	boolState[S_OF_A118] = REINITIALISATION_OF_S_OF_A118;
	boolState[relevant_evt_OF_A118] = REINITIALISATION_OF_relevant_evt_OF_A118;
	boolState[required_OF_A119] = REINITIALISATION_OF_required_OF_A119;
	boolState[S_OF_A119] = REINITIALISATION_OF_S_OF_A119;
	boolState[relevant_evt_OF_A119] = REINITIALISATION_OF_relevant_evt_OF_A119;
	boolState[required_OF_A120] = REINITIALISATION_OF_required_OF_A120;
	boolState[S_OF_A120] = REINITIALISATION_OF_S_OF_A120;
	boolState[relevant_evt_OF_A120] = REINITIALISATION_OF_relevant_evt_OF_A120;
	boolState[required_OF_A121] = REINITIALISATION_OF_required_OF_A121;
	boolState[S_OF_A121] = REINITIALISATION_OF_S_OF_A121;
	boolState[relevant_evt_OF_A121] = REINITIALISATION_OF_relevant_evt_OF_A121;
	boolState[required_OF_A123] = REINITIALISATION_OF_required_OF_A123;
	boolState[S_OF_A123] = REINITIALISATION_OF_S_OF_A123;
	boolState[relevant_evt_OF_A123] = REINITIALISATION_OF_relevant_evt_OF_A123;
	boolState[required_OF_A124] = REINITIALISATION_OF_required_OF_A124;
	boolState[S_OF_A124] = REINITIALISATION_OF_S_OF_A124;
	boolState[relevant_evt_OF_A124] = REINITIALISATION_OF_relevant_evt_OF_A124;
	boolState[required_OF_A125] = REINITIALISATION_OF_required_OF_A125;
	boolState[S_OF_A125] = REINITIALISATION_OF_S_OF_A125;
	boolState[relevant_evt_OF_A125] = REINITIALISATION_OF_relevant_evt_OF_A125;
	boolState[required_OF_A127] = REINITIALISATION_OF_required_OF_A127;
	boolState[S_OF_A127] = REINITIALISATION_OF_S_OF_A127;
	boolState[relevant_evt_OF_A127] = REINITIALISATION_OF_relevant_evt_OF_A127;
	boolState[required_OF_A128] = REINITIALISATION_OF_required_OF_A128;
	boolState[S_OF_A128] = REINITIALISATION_OF_S_OF_A128;
	boolState[relevant_evt_OF_A128] = REINITIALISATION_OF_relevant_evt_OF_A128;
	boolState[required_OF_A129] = REINITIALISATION_OF_required_OF_A129;
	boolState[S_OF_A129] = REINITIALISATION_OF_S_OF_A129;
	boolState[relevant_evt_OF_A129] = REINITIALISATION_OF_relevant_evt_OF_A129;
	boolState[required_OF_A13] = REINITIALISATION_OF_required_OF_A13;
	boolState[S_OF_A13] = REINITIALISATION_OF_S_OF_A13;
	boolState[relevant_evt_OF_A13] = REINITIALISATION_OF_relevant_evt_OF_A13;
	boolState[required_OF_A130] = REINITIALISATION_OF_required_OF_A130;
	boolState[S_OF_A130] = REINITIALISATION_OF_S_OF_A130;
	boolState[relevant_evt_OF_A130] = REINITIALISATION_OF_relevant_evt_OF_A130;
	boolState[required_OF_A132] = REINITIALISATION_OF_required_OF_A132;
	boolState[S_OF_A132] = REINITIALISATION_OF_S_OF_A132;
	boolState[relevant_evt_OF_A132] = REINITIALISATION_OF_relevant_evt_OF_A132;
	boolState[required_OF_A133] = REINITIALISATION_OF_required_OF_A133;
	boolState[S_OF_A133] = REINITIALISATION_OF_S_OF_A133;
	boolState[relevant_evt_OF_A133] = REINITIALISATION_OF_relevant_evt_OF_A133;
	boolState[required_OF_A134] = REINITIALISATION_OF_required_OF_A134;
	boolState[S_OF_A134] = REINITIALISATION_OF_S_OF_A134;
	boolState[relevant_evt_OF_A134] = REINITIALISATION_OF_relevant_evt_OF_A134;
	boolState[required_OF_A136] = REINITIALISATION_OF_required_OF_A136;
	boolState[S_OF_A136] = REINITIALISATION_OF_S_OF_A136;
	boolState[relevant_evt_OF_A136] = REINITIALISATION_OF_relevant_evt_OF_A136;
	boolState[required_OF_A137] = REINITIALISATION_OF_required_OF_A137;
	boolState[S_OF_A137] = REINITIALISATION_OF_S_OF_A137;
	boolState[relevant_evt_OF_A137] = REINITIALISATION_OF_relevant_evt_OF_A137;
	boolState[required_OF_A138] = REINITIALISATION_OF_required_OF_A138;
	boolState[S_OF_A138] = REINITIALISATION_OF_S_OF_A138;
	boolState[relevant_evt_OF_A138] = REINITIALISATION_OF_relevant_evt_OF_A138;
	boolState[required_OF_A139] = REINITIALISATION_OF_required_OF_A139;
	boolState[S_OF_A139] = REINITIALISATION_OF_S_OF_A139;
	boolState[relevant_evt_OF_A139] = REINITIALISATION_OF_relevant_evt_OF_A139;
	boolState[required_OF_A14] = REINITIALISATION_OF_required_OF_A14;
	boolState[S_OF_A14] = REINITIALISATION_OF_S_OF_A14;
	boolState[relevant_evt_OF_A14] = REINITIALISATION_OF_relevant_evt_OF_A14;
	boolState[required_OF_A141] = REINITIALISATION_OF_required_OF_A141;
	boolState[S_OF_A141] = REINITIALISATION_OF_S_OF_A141;
	boolState[relevant_evt_OF_A141] = REINITIALISATION_OF_relevant_evt_OF_A141;
	boolState[required_OF_A142] = REINITIALISATION_OF_required_OF_A142;
	boolState[S_OF_A142] = REINITIALISATION_OF_S_OF_A142;
	boolState[relevant_evt_OF_A142] = REINITIALISATION_OF_relevant_evt_OF_A142;
	boolState[required_OF_A143] = REINITIALISATION_OF_required_OF_A143;
	boolState[S_OF_A143] = REINITIALISATION_OF_S_OF_A143;
	boolState[relevant_evt_OF_A143] = REINITIALISATION_OF_relevant_evt_OF_A143;
	boolState[required_OF_A145] = REINITIALISATION_OF_required_OF_A145;
	boolState[S_OF_A145] = REINITIALISATION_OF_S_OF_A145;
	boolState[relevant_evt_OF_A145] = REINITIALISATION_OF_relevant_evt_OF_A145;
	boolState[required_OF_A146] = REINITIALISATION_OF_required_OF_A146;
	boolState[S_OF_A146] = REINITIALISATION_OF_S_OF_A146;
	boolState[relevant_evt_OF_A146] = REINITIALISATION_OF_relevant_evt_OF_A146;
	boolState[required_OF_A147] = REINITIALISATION_OF_required_OF_A147;
	boolState[S_OF_A147] = REINITIALISATION_OF_S_OF_A147;
	boolState[relevant_evt_OF_A147] = REINITIALISATION_OF_relevant_evt_OF_A147;
	boolState[required_OF_A148] = REINITIALISATION_OF_required_OF_A148;
	boolState[S_OF_A148] = REINITIALISATION_OF_S_OF_A148;
	boolState[relevant_evt_OF_A148] = REINITIALISATION_OF_relevant_evt_OF_A148;
	boolState[required_OF_A150] = REINITIALISATION_OF_required_OF_A150;
	boolState[S_OF_A150] = REINITIALISATION_OF_S_OF_A150;
	boolState[relevant_evt_OF_A150] = REINITIALISATION_OF_relevant_evt_OF_A150;
	boolState[required_OF_A151] = REINITIALISATION_OF_required_OF_A151;
	boolState[S_OF_A151] = REINITIALISATION_OF_S_OF_A151;
	boolState[relevant_evt_OF_A151] = REINITIALISATION_OF_relevant_evt_OF_A151;
	boolState[required_OF_A152] = REINITIALISATION_OF_required_OF_A152;
	boolState[S_OF_A152] = REINITIALISATION_OF_S_OF_A152;
	boolState[relevant_evt_OF_A152] = REINITIALISATION_OF_relevant_evt_OF_A152;
	boolState[required_OF_A154] = REINITIALISATION_OF_required_OF_A154;
	boolState[S_OF_A154] = REINITIALISATION_OF_S_OF_A154;
	boolState[relevant_evt_OF_A154] = REINITIALISATION_OF_relevant_evt_OF_A154;
	boolState[required_OF_A155] = REINITIALISATION_OF_required_OF_A155;
	boolState[S_OF_A155] = REINITIALISATION_OF_S_OF_A155;
	boolState[relevant_evt_OF_A155] = REINITIALISATION_OF_relevant_evt_OF_A155;
	boolState[required_OF_A156] = REINITIALISATION_OF_required_OF_A156;
	boolState[S_OF_A156] = REINITIALISATION_OF_S_OF_A156;
	boolState[relevant_evt_OF_A156] = REINITIALISATION_OF_relevant_evt_OF_A156;
	boolState[required_OF_A157] = REINITIALISATION_OF_required_OF_A157;
	boolState[S_OF_A157] = REINITIALISATION_OF_S_OF_A157;
	boolState[relevant_evt_OF_A157] = REINITIALISATION_OF_relevant_evt_OF_A157;
	boolState[required_OF_A159] = REINITIALISATION_OF_required_OF_A159;
	boolState[S_OF_A159] = REINITIALISATION_OF_S_OF_A159;
	boolState[relevant_evt_OF_A159] = REINITIALISATION_OF_relevant_evt_OF_A159;
	boolState[required_OF_A16] = REINITIALISATION_OF_required_OF_A16;
	boolState[S_OF_A16] = REINITIALISATION_OF_S_OF_A16;
	boolState[relevant_evt_OF_A16] = REINITIALISATION_OF_relevant_evt_OF_A16;
	boolState[required_OF_A160] = REINITIALISATION_OF_required_OF_A160;
	boolState[S_OF_A160] = REINITIALISATION_OF_S_OF_A160;
	boolState[relevant_evt_OF_A160] = REINITIALISATION_OF_relevant_evt_OF_A160;
	boolState[required_OF_A161] = REINITIALISATION_OF_required_OF_A161;
	boolState[S_OF_A161] = REINITIALISATION_OF_S_OF_A161;
	boolState[relevant_evt_OF_A161] = REINITIALISATION_OF_relevant_evt_OF_A161;
	boolState[required_OF_A163] = REINITIALISATION_OF_required_OF_A163;
	boolState[S_OF_A163] = REINITIALISATION_OF_S_OF_A163;
	boolState[relevant_evt_OF_A163] = REINITIALISATION_OF_relevant_evt_OF_A163;
	boolState[required_OF_A164] = REINITIALISATION_OF_required_OF_A164;
	boolState[S_OF_A164] = REINITIALISATION_OF_S_OF_A164;
	boolState[relevant_evt_OF_A164] = REINITIALISATION_OF_relevant_evt_OF_A164;
	boolState[required_OF_A165] = REINITIALISATION_OF_required_OF_A165;
	boolState[S_OF_A165] = REINITIALISATION_OF_S_OF_A165;
	boolState[relevant_evt_OF_A165] = REINITIALISATION_OF_relevant_evt_OF_A165;
	boolState[required_OF_A166] = REINITIALISATION_OF_required_OF_A166;
	boolState[S_OF_A166] = REINITIALISATION_OF_S_OF_A166;
	boolState[relevant_evt_OF_A166] = REINITIALISATION_OF_relevant_evt_OF_A166;
	boolState[required_OF_A168] = REINITIALISATION_OF_required_OF_A168;
	boolState[S_OF_A168] = REINITIALISATION_OF_S_OF_A168;
	boolState[relevant_evt_OF_A168] = REINITIALISATION_OF_relevant_evt_OF_A168;
	boolState[required_OF_A169] = REINITIALISATION_OF_required_OF_A169;
	boolState[S_OF_A169] = REINITIALISATION_OF_S_OF_A169;
	boolState[relevant_evt_OF_A169] = REINITIALISATION_OF_relevant_evt_OF_A169;
	boolState[required_OF_A17] = REINITIALISATION_OF_required_OF_A17;
	boolState[S_OF_A17] = REINITIALISATION_OF_S_OF_A17;
	boolState[relevant_evt_OF_A17] = REINITIALISATION_OF_relevant_evt_OF_A17;
	boolState[required_OF_A170] = REINITIALISATION_OF_required_OF_A170;
	boolState[S_OF_A170] = REINITIALISATION_OF_S_OF_A170;
	boolState[relevant_evt_OF_A170] = REINITIALISATION_OF_relevant_evt_OF_A170;
	boolState[required_OF_A171] = REINITIALISATION_OF_required_OF_A171;
	boolState[S_OF_A171] = REINITIALISATION_OF_S_OF_A171;
	boolState[relevant_evt_OF_A171] = REINITIALISATION_OF_relevant_evt_OF_A171;
	boolState[required_OF_A173] = REINITIALISATION_OF_required_OF_A173;
	boolState[S_OF_A173] = REINITIALISATION_OF_S_OF_A173;
	boolState[relevant_evt_OF_A173] = REINITIALISATION_OF_relevant_evt_OF_A173;
	boolState[required_OF_A174] = REINITIALISATION_OF_required_OF_A174;
	boolState[S_OF_A174] = REINITIALISATION_OF_S_OF_A174;
	boolState[relevant_evt_OF_A174] = REINITIALISATION_OF_relevant_evt_OF_A174;
	boolState[required_OF_A175] = REINITIALISATION_OF_required_OF_A175;
	boolState[S_OF_A175] = REINITIALISATION_OF_S_OF_A175;
	boolState[relevant_evt_OF_A175] = REINITIALISATION_OF_relevant_evt_OF_A175;
	boolState[required_OF_A176] = REINITIALISATION_OF_required_OF_A176;
	boolState[S_OF_A176] = REINITIALISATION_OF_S_OF_A176;
	boolState[relevant_evt_OF_A176] = REINITIALISATION_OF_relevant_evt_OF_A176;
	boolState[required_OF_A177] = REINITIALISATION_OF_required_OF_A177;
	boolState[S_OF_A177] = REINITIALISATION_OF_S_OF_A177;
	boolState[relevant_evt_OF_A177] = REINITIALISATION_OF_relevant_evt_OF_A177;
	boolState[required_OF_A179] = REINITIALISATION_OF_required_OF_A179;
	boolState[S_OF_A179] = REINITIALISATION_OF_S_OF_A179;
	boolState[relevant_evt_OF_A179] = REINITIALISATION_OF_relevant_evt_OF_A179;
	boolState[required_OF_A180] = REINITIALISATION_OF_required_OF_A180;
	boolState[S_OF_A180] = REINITIALISATION_OF_S_OF_A180;
	boolState[relevant_evt_OF_A180] = REINITIALISATION_OF_relevant_evt_OF_A180;
	boolState[required_OF_A181] = REINITIALISATION_OF_required_OF_A181;
	boolState[S_OF_A181] = REINITIALISATION_OF_S_OF_A181;
	boolState[relevant_evt_OF_A181] = REINITIALISATION_OF_relevant_evt_OF_A181;
	boolState[required_OF_A182] = REINITIALISATION_OF_required_OF_A182;
	boolState[S_OF_A182] = REINITIALISATION_OF_S_OF_A182;
	boolState[relevant_evt_OF_A182] = REINITIALISATION_OF_relevant_evt_OF_A182;
	boolState[required_OF_A184] = REINITIALISATION_OF_required_OF_A184;
	boolState[S_OF_A184] = REINITIALISATION_OF_S_OF_A184;
	boolState[relevant_evt_OF_A184] = REINITIALISATION_OF_relevant_evt_OF_A184;
	boolState[required_OF_A185] = REINITIALISATION_OF_required_OF_A185;
	boolState[S_OF_A185] = REINITIALISATION_OF_S_OF_A185;
	boolState[relevant_evt_OF_A185] = REINITIALISATION_OF_relevant_evt_OF_A185;
	boolState[required_OF_A186] = REINITIALISATION_OF_required_OF_A186;
	boolState[S_OF_A186] = REINITIALISATION_OF_S_OF_A186;
	boolState[relevant_evt_OF_A186] = REINITIALISATION_OF_relevant_evt_OF_A186;
	boolState[required_OF_A187] = REINITIALISATION_OF_required_OF_A187;
	boolState[S_OF_A187] = REINITIALISATION_OF_S_OF_A187;
	boolState[relevant_evt_OF_A187] = REINITIALISATION_OF_relevant_evt_OF_A187;
	boolState[required_OF_A188] = REINITIALISATION_OF_required_OF_A188;
	boolState[S_OF_A188] = REINITIALISATION_OF_S_OF_A188;
	boolState[relevant_evt_OF_A188] = REINITIALISATION_OF_relevant_evt_OF_A188;
	boolState[required_OF_A189] = REINITIALISATION_OF_required_OF_A189;
	boolState[S_OF_A189] = REINITIALISATION_OF_S_OF_A189;
	boolState[relevant_evt_OF_A189] = REINITIALISATION_OF_relevant_evt_OF_A189;
	boolState[required_OF_A19] = REINITIALISATION_OF_required_OF_A19;
	boolState[S_OF_A19] = REINITIALISATION_OF_S_OF_A19;
	boolState[relevant_evt_OF_A19] = REINITIALISATION_OF_relevant_evt_OF_A19;
	boolState[required_OF_A190] = REINITIALISATION_OF_required_OF_A190;
	boolState[S_OF_A190] = REINITIALISATION_OF_S_OF_A190;
	boolState[relevant_evt_OF_A190] = REINITIALISATION_OF_relevant_evt_OF_A190;
	boolState[required_OF_A191] = REINITIALISATION_OF_required_OF_A191;
	boolState[S_OF_A191] = REINITIALISATION_OF_S_OF_A191;
	boolState[relevant_evt_OF_A191] = REINITIALISATION_OF_relevant_evt_OF_A191;
	boolState[required_OF_A192] = REINITIALISATION_OF_required_OF_A192;
	boolState[S_OF_A192] = REINITIALISATION_OF_S_OF_A192;
	boolState[relevant_evt_OF_A192] = REINITIALISATION_OF_relevant_evt_OF_A192;
	boolState[required_OF_A193] = REINITIALISATION_OF_required_OF_A193;
	boolState[S_OF_A193] = REINITIALISATION_OF_S_OF_A193;
	boolState[relevant_evt_OF_A193] = REINITIALISATION_OF_relevant_evt_OF_A193;
	boolState[required_OF_A2] = REINITIALISATION_OF_required_OF_A2;
	boolState[S_OF_A2] = REINITIALISATION_OF_S_OF_A2;
	boolState[relevant_evt_OF_A2] = REINITIALISATION_OF_relevant_evt_OF_A2;
	boolState[required_OF_A20] = REINITIALISATION_OF_required_OF_A20;
	boolState[S_OF_A20] = REINITIALISATION_OF_S_OF_A20;
	boolState[relevant_evt_OF_A20] = REINITIALISATION_OF_relevant_evt_OF_A20;
	boolState[required_OF_A22] = REINITIALISATION_OF_required_OF_A22;
	boolState[S_OF_A22] = REINITIALISATION_OF_S_OF_A22;
	boolState[relevant_evt_OF_A22] = REINITIALISATION_OF_relevant_evt_OF_A22;
	boolState[required_OF_A23] = REINITIALISATION_OF_required_OF_A23;
	boolState[S_OF_A23] = REINITIALISATION_OF_S_OF_A23;
	boolState[relevant_evt_OF_A23] = REINITIALISATION_OF_relevant_evt_OF_A23;
	boolState[required_OF_A25] = REINITIALISATION_OF_required_OF_A25;
	boolState[S_OF_A25] = REINITIALISATION_OF_S_OF_A25;
	boolState[relevant_evt_OF_A25] = REINITIALISATION_OF_relevant_evt_OF_A25;
	boolState[required_OF_A26] = REINITIALISATION_OF_required_OF_A26;
	boolState[S_OF_A26] = REINITIALISATION_OF_S_OF_A26;
	boolState[relevant_evt_OF_A26] = REINITIALISATION_OF_relevant_evt_OF_A26;
	boolState[required_OF_A28] = REINITIALISATION_OF_required_OF_A28;
	boolState[S_OF_A28] = REINITIALISATION_OF_S_OF_A28;
	boolState[relevant_evt_OF_A28] = REINITIALISATION_OF_relevant_evt_OF_A28;
	boolState[required_OF_A29] = REINITIALISATION_OF_required_OF_A29;
	boolState[S_OF_A29] = REINITIALISATION_OF_S_OF_A29;
	boolState[relevant_evt_OF_A29] = REINITIALISATION_OF_relevant_evt_OF_A29;
	boolState[required_OF_A31] = REINITIALISATION_OF_required_OF_A31;
	boolState[S_OF_A31] = REINITIALISATION_OF_S_OF_A31;
	boolState[relevant_evt_OF_A31] = REINITIALISATION_OF_relevant_evt_OF_A31;
	boolState[required_OF_A32] = REINITIALISATION_OF_required_OF_A32;
	boolState[S_OF_A32] = REINITIALISATION_OF_S_OF_A32;
	boolState[relevant_evt_OF_A32] = REINITIALISATION_OF_relevant_evt_OF_A32;
	boolState[required_OF_A34] = REINITIALISATION_OF_required_OF_A34;
	boolState[S_OF_A34] = REINITIALISATION_OF_S_OF_A34;
	boolState[relevant_evt_OF_A34] = REINITIALISATION_OF_relevant_evt_OF_A34;
	boolState[required_OF_A35] = REINITIALISATION_OF_required_OF_A35;
	boolState[S_OF_A35] = REINITIALISATION_OF_S_OF_A35;
	boolState[relevant_evt_OF_A35] = REINITIALISATION_OF_relevant_evt_OF_A35;
	boolState[required_OF_A37] = REINITIALISATION_OF_required_OF_A37;
	boolState[S_OF_A37] = REINITIALISATION_OF_S_OF_A37;
	boolState[relevant_evt_OF_A37] = REINITIALISATION_OF_relevant_evt_OF_A37;
	boolState[required_OF_A38] = REINITIALISATION_OF_required_OF_A38;
	boolState[S_OF_A38] = REINITIALISATION_OF_S_OF_A38;
	boolState[relevant_evt_OF_A38] = REINITIALISATION_OF_relevant_evt_OF_A38;
	boolState[required_OF_A4] = REINITIALISATION_OF_required_OF_A4;
	boolState[S_OF_A4] = REINITIALISATION_OF_S_OF_A4;
	boolState[relevant_evt_OF_A4] = REINITIALISATION_OF_relevant_evt_OF_A4;
	boolState[required_OF_A40] = REINITIALISATION_OF_required_OF_A40;
	boolState[S_OF_A40] = REINITIALISATION_OF_S_OF_A40;
	boolState[relevant_evt_OF_A40] = REINITIALISATION_OF_relevant_evt_OF_A40;
	boolState[required_OF_A41] = REINITIALISATION_OF_required_OF_A41;
	boolState[S_OF_A41] = REINITIALISATION_OF_S_OF_A41;
	boolState[relevant_evt_OF_A41] = REINITIALISATION_OF_relevant_evt_OF_A41;
	boolState[required_OF_A43] = REINITIALISATION_OF_required_OF_A43;
	boolState[S_OF_A43] = REINITIALISATION_OF_S_OF_A43;
	boolState[relevant_evt_OF_A43] = REINITIALISATION_OF_relevant_evt_OF_A43;
	boolState[required_OF_A44] = REINITIALISATION_OF_required_OF_A44;
	boolState[S_OF_A44] = REINITIALISATION_OF_S_OF_A44;
	boolState[relevant_evt_OF_A44] = REINITIALISATION_OF_relevant_evt_OF_A44;
	boolState[required_OF_A45] = REINITIALISATION_OF_required_OF_A45;
	boolState[S_OF_A45] = REINITIALISATION_OF_S_OF_A45;
	boolState[relevant_evt_OF_A45] = REINITIALISATION_OF_relevant_evt_OF_A45;
	boolState[required_OF_A47] = REINITIALISATION_OF_required_OF_A47;
	boolState[S_OF_A47] = REINITIALISATION_OF_S_OF_A47;
	boolState[relevant_evt_OF_A47] = REINITIALISATION_OF_relevant_evt_OF_A47;
	boolState[required_OF_A48] = REINITIALISATION_OF_required_OF_A48;
	boolState[S_OF_A48] = REINITIALISATION_OF_S_OF_A48;
	boolState[relevant_evt_OF_A48] = REINITIALISATION_OF_relevant_evt_OF_A48;
	boolState[required_OF_A49] = REINITIALISATION_OF_required_OF_A49;
	boolState[S_OF_A49] = REINITIALISATION_OF_S_OF_A49;
	boolState[relevant_evt_OF_A49] = REINITIALISATION_OF_relevant_evt_OF_A49;
	boolState[required_OF_A5] = REINITIALISATION_OF_required_OF_A5;
	boolState[S_OF_A5] = REINITIALISATION_OF_S_OF_A5;
	boolState[relevant_evt_OF_A5] = REINITIALISATION_OF_relevant_evt_OF_A5;
	boolState[required_OF_A50] = REINITIALISATION_OF_required_OF_A50;
	boolState[S_OF_A50] = REINITIALISATION_OF_S_OF_A50;
	boolState[relevant_evt_OF_A50] = REINITIALISATION_OF_relevant_evt_OF_A50;
	boolState[required_OF_A52] = REINITIALISATION_OF_required_OF_A52;
	boolState[S_OF_A52] = REINITIALISATION_OF_S_OF_A52;
	boolState[relevant_evt_OF_A52] = REINITIALISATION_OF_relevant_evt_OF_A52;
	boolState[required_OF_A53] = REINITIALISATION_OF_required_OF_A53;
	boolState[S_OF_A53] = REINITIALISATION_OF_S_OF_A53;
	boolState[relevant_evt_OF_A53] = REINITIALISATION_OF_relevant_evt_OF_A53;
	boolState[required_OF_A54] = REINITIALISATION_OF_required_OF_A54;
	boolState[S_OF_A54] = REINITIALISATION_OF_S_OF_A54;
	boolState[relevant_evt_OF_A54] = REINITIALISATION_OF_relevant_evt_OF_A54;
	boolState[required_OF_A55] = REINITIALISATION_OF_required_OF_A55;
	boolState[S_OF_A55] = REINITIALISATION_OF_S_OF_A55;
	boolState[relevant_evt_OF_A55] = REINITIALISATION_OF_relevant_evt_OF_A55;
	boolState[required_OF_A56] = REINITIALISATION_OF_required_OF_A56;
	boolState[S_OF_A56] = REINITIALISATION_OF_S_OF_A56;
	boolState[relevant_evt_OF_A56] = REINITIALISATION_OF_relevant_evt_OF_A56;
	boolState[required_OF_A57] = REINITIALISATION_OF_required_OF_A57;
	boolState[S_OF_A57] = REINITIALISATION_OF_S_OF_A57;
	boolState[relevant_evt_OF_A57] = REINITIALISATION_OF_relevant_evt_OF_A57;
	boolState[required_OF_A58] = REINITIALISATION_OF_required_OF_A58;
	boolState[S_OF_A58] = REINITIALISATION_OF_S_OF_A58;
	boolState[relevant_evt_OF_A58] = REINITIALISATION_OF_relevant_evt_OF_A58;
	boolState[required_OF_A59] = REINITIALISATION_OF_required_OF_A59;
	boolState[S_OF_A59] = REINITIALISATION_OF_S_OF_A59;
	boolState[relevant_evt_OF_A59] = REINITIALISATION_OF_relevant_evt_OF_A59;
	boolState[required_OF_A60] = REINITIALISATION_OF_required_OF_A60;
	boolState[S_OF_A60] = REINITIALISATION_OF_S_OF_A60;
	boolState[relevant_evt_OF_A60] = REINITIALISATION_OF_relevant_evt_OF_A60;
	boolState[required_OF_A61] = REINITIALISATION_OF_required_OF_A61;
	boolState[S_OF_A61] = REINITIALISATION_OF_S_OF_A61;
	boolState[relevant_evt_OF_A61] = REINITIALISATION_OF_relevant_evt_OF_A61;
	boolState[required_OF_A62] = REINITIALISATION_OF_required_OF_A62;
	boolState[S_OF_A62] = REINITIALISATION_OF_S_OF_A62;
	boolState[relevant_evt_OF_A62] = REINITIALISATION_OF_relevant_evt_OF_A62;
	boolState[required_OF_A63] = REINITIALISATION_OF_required_OF_A63;
	boolState[S_OF_A63] = REINITIALISATION_OF_S_OF_A63;
	boolState[relevant_evt_OF_A63] = REINITIALISATION_OF_relevant_evt_OF_A63;
	boolState[required_OF_A64] = REINITIALISATION_OF_required_OF_A64;
	boolState[S_OF_A64] = REINITIALISATION_OF_S_OF_A64;
	boolState[relevant_evt_OF_A64] = REINITIALISATION_OF_relevant_evt_OF_A64;
	boolState[required_OF_A65] = REINITIALISATION_OF_required_OF_A65;
	boolState[S_OF_A65] = REINITIALISATION_OF_S_OF_A65;
	boolState[relevant_evt_OF_A65] = REINITIALISATION_OF_relevant_evt_OF_A65;
	boolState[required_OF_A66] = REINITIALISATION_OF_required_OF_A66;
	boolState[S_OF_A66] = REINITIALISATION_OF_S_OF_A66;
	boolState[relevant_evt_OF_A66] = REINITIALISATION_OF_relevant_evt_OF_A66;
	boolState[required_OF_A67] = REINITIALISATION_OF_required_OF_A67;
	boolState[S_OF_A67] = REINITIALISATION_OF_S_OF_A67;
	boolState[relevant_evt_OF_A67] = REINITIALISATION_OF_relevant_evt_OF_A67;
	boolState[required_OF_A68] = REINITIALISATION_OF_required_OF_A68;
	boolState[S_OF_A68] = REINITIALISATION_OF_S_OF_A68;
	boolState[relevant_evt_OF_A68] = REINITIALISATION_OF_relevant_evt_OF_A68;
	boolState[required_OF_A69] = REINITIALISATION_OF_required_OF_A69;
	boolState[S_OF_A69] = REINITIALISATION_OF_S_OF_A69;
	boolState[relevant_evt_OF_A69] = REINITIALISATION_OF_relevant_evt_OF_A69;
	boolState[required_OF_A7] = REINITIALISATION_OF_required_OF_A7;
	boolState[S_OF_A7] = REINITIALISATION_OF_S_OF_A7;
	boolState[relevant_evt_OF_A7] = REINITIALISATION_OF_relevant_evt_OF_A7;
	boolState[required_OF_A70] = REINITIALISATION_OF_required_OF_A70;
	boolState[S_OF_A70] = REINITIALISATION_OF_S_OF_A70;
	boolState[relevant_evt_OF_A70] = REINITIALISATION_OF_relevant_evt_OF_A70;
	boolState[required_OF_A71] = REINITIALISATION_OF_required_OF_A71;
	boolState[S_OF_A71] = REINITIALISATION_OF_S_OF_A71;
	boolState[relevant_evt_OF_A71] = REINITIALISATION_OF_relevant_evt_OF_A71;
	boolState[required_OF_A72] = REINITIALISATION_OF_required_OF_A72;
	boolState[S_OF_A72] = REINITIALISATION_OF_S_OF_A72;
	boolState[relevant_evt_OF_A72] = REINITIALISATION_OF_relevant_evt_OF_A72;
	boolState[required_OF_A73] = REINITIALISATION_OF_required_OF_A73;
	boolState[S_OF_A73] = REINITIALISATION_OF_S_OF_A73;
	boolState[relevant_evt_OF_A73] = REINITIALISATION_OF_relevant_evt_OF_A73;
	boolState[required_OF_A74] = REINITIALISATION_OF_required_OF_A74;
	boolState[S_OF_A74] = REINITIALISATION_OF_S_OF_A74;
	boolState[relevant_evt_OF_A74] = REINITIALISATION_OF_relevant_evt_OF_A74;
	boolState[required_OF_A75] = REINITIALISATION_OF_required_OF_A75;
	boolState[S_OF_A75] = REINITIALISATION_OF_S_OF_A75;
	boolState[relevant_evt_OF_A75] = REINITIALISATION_OF_relevant_evt_OF_A75;
	boolState[required_OF_A76] = REINITIALISATION_OF_required_OF_A76;
	boolState[S_OF_A76] = REINITIALISATION_OF_S_OF_A76;
	boolState[relevant_evt_OF_A76] = REINITIALISATION_OF_relevant_evt_OF_A76;
	boolState[required_OF_A77] = REINITIALISATION_OF_required_OF_A77;
	boolState[S_OF_A77] = REINITIALISATION_OF_S_OF_A77;
	boolState[relevant_evt_OF_A77] = REINITIALISATION_OF_relevant_evt_OF_A77;
	boolState[required_OF_A78] = REINITIALISATION_OF_required_OF_A78;
	boolState[S_OF_A78] = REINITIALISATION_OF_S_OF_A78;
	boolState[relevant_evt_OF_A78] = REINITIALISATION_OF_relevant_evt_OF_A78;
	boolState[required_OF_A79] = REINITIALISATION_OF_required_OF_A79;
	boolState[S_OF_A79] = REINITIALISATION_OF_S_OF_A79;
	boolState[relevant_evt_OF_A79] = REINITIALISATION_OF_relevant_evt_OF_A79;
	boolState[required_OF_A8] = REINITIALISATION_OF_required_OF_A8;
	boolState[S_OF_A8] = REINITIALISATION_OF_S_OF_A8;
	boolState[relevant_evt_OF_A8] = REINITIALISATION_OF_relevant_evt_OF_A8;
	boolState[required_OF_A80] = REINITIALISATION_OF_required_OF_A80;
	boolState[S_OF_A80] = REINITIALISATION_OF_S_OF_A80;
	boolState[relevant_evt_OF_A80] = REINITIALISATION_OF_relevant_evt_OF_A80;
	boolState[required_OF_A81] = REINITIALISATION_OF_required_OF_A81;
	boolState[S_OF_A81] = REINITIALISATION_OF_S_OF_A81;
	boolState[relevant_evt_OF_A81] = REINITIALISATION_OF_relevant_evt_OF_A81;
	boolState[required_OF_A82] = REINITIALISATION_OF_required_OF_A82;
	boolState[S_OF_A82] = REINITIALISATION_OF_S_OF_A82;
	boolState[relevant_evt_OF_A82] = REINITIALISATION_OF_relevant_evt_OF_A82;
	boolState[required_OF_A83] = REINITIALISATION_OF_required_OF_A83;
	boolState[S_OF_A83] = REINITIALISATION_OF_S_OF_A83;
	boolState[relevant_evt_OF_A83] = REINITIALISATION_OF_relevant_evt_OF_A83;
	boolState[required_OF_A84] = REINITIALISATION_OF_required_OF_A84;
	boolState[S_OF_A84] = REINITIALISATION_OF_S_OF_A84;
	boolState[relevant_evt_OF_A84] = REINITIALISATION_OF_relevant_evt_OF_A84;
	boolState[required_OF_A85] = REINITIALISATION_OF_required_OF_A85;
	boolState[S_OF_A85] = REINITIALISATION_OF_S_OF_A85;
	boolState[relevant_evt_OF_A85] = REINITIALISATION_OF_relevant_evt_OF_A85;
	boolState[required_OF_A86] = REINITIALISATION_OF_required_OF_A86;
	boolState[S_OF_A86] = REINITIALISATION_OF_S_OF_A86;
	boolState[relevant_evt_OF_A86] = REINITIALISATION_OF_relevant_evt_OF_A86;
	boolState[required_OF_A87] = REINITIALISATION_OF_required_OF_A87;
	boolState[S_OF_A87] = REINITIALISATION_OF_S_OF_A87;
	boolState[relevant_evt_OF_A87] = REINITIALISATION_OF_relevant_evt_OF_A87;
	boolState[required_OF_A88] = REINITIALISATION_OF_required_OF_A88;
	boolState[S_OF_A88] = REINITIALISATION_OF_S_OF_A88;
	boolState[relevant_evt_OF_A88] = REINITIALISATION_OF_relevant_evt_OF_A88;
	boolState[required_OF_A89] = REINITIALISATION_OF_required_OF_A89;
	boolState[S_OF_A89] = REINITIALISATION_OF_S_OF_A89;
	boolState[relevant_evt_OF_A89] = REINITIALISATION_OF_relevant_evt_OF_A89;
	boolState[required_OF_A90] = REINITIALISATION_OF_required_OF_A90;
	boolState[S_OF_A90] = REINITIALISATION_OF_S_OF_A90;
	boolState[relevant_evt_OF_A90] = REINITIALISATION_OF_relevant_evt_OF_A90;
	boolState[required_OF_A91] = REINITIALISATION_OF_required_OF_A91;
	boolState[S_OF_A91] = REINITIALISATION_OF_S_OF_A91;
	boolState[relevant_evt_OF_A91] = REINITIALISATION_OF_relevant_evt_OF_A91;
	boolState[required_OF_A92] = REINITIALISATION_OF_required_OF_A92;
	boolState[S_OF_A92] = REINITIALISATION_OF_S_OF_A92;
	boolState[relevant_evt_OF_A92] = REINITIALISATION_OF_relevant_evt_OF_A92;
	boolState[required_OF_A93] = REINITIALISATION_OF_required_OF_A93;
	boolState[S_OF_A93] = REINITIALISATION_OF_S_OF_A93;
	boolState[relevant_evt_OF_A93] = REINITIALISATION_OF_relevant_evt_OF_A93;
	boolState[required_OF_A94] = REINITIALISATION_OF_required_OF_A94;
	boolState[S_OF_A94] = REINITIALISATION_OF_S_OF_A94;
	boolState[relevant_evt_OF_A94] = REINITIALISATION_OF_relevant_evt_OF_A94;
	boolState[required_OF_A96] = REINITIALISATION_OF_required_OF_A96;
	boolState[S_OF_A96] = REINITIALISATION_OF_S_OF_A96;
	boolState[relevant_evt_OF_A96] = REINITIALISATION_OF_relevant_evt_OF_A96;
	boolState[required_OF_A97] = REINITIALISATION_OF_required_OF_A97;
	boolState[S_OF_A97] = REINITIALISATION_OF_S_OF_A97;
	boolState[relevant_evt_OF_A97] = REINITIALISATION_OF_relevant_evt_OF_A97;
	boolState[required_OF_A98] = REINITIALISATION_OF_required_OF_A98;
	boolState[S_OF_A98] = REINITIALISATION_OF_S_OF_A98;
	boolState[relevant_evt_OF_A98] = REINITIALISATION_OF_relevant_evt_OF_A98;
	boolState[required_OF_UE_1] = REINITIALISATION_OF_required_OF_UE_1;
	boolState[S_OF_UE_1] = REINITIALISATION_OF_S_OF_UE_1;
	boolState[relevant_evt_OF_UE_1] = REINITIALISATION_OF_relevant_evt_OF_UE_1;
	boolState[required_OF_f_A52] = REINITIALISATION_OF_required_OF_f_A52;
	boolState[S_OF_f_A52] = REINITIALISATION_OF_S_OF_f_A52;
	boolState[relevant_evt_OF_f_A52] = REINITIALISATION_OF_relevant_evt_OF_f_A52;
	boolState[required_OF_f_A53] = REINITIALISATION_OF_required_OF_f_A53;
	boolState[S_OF_f_A53] = REINITIALISATION_OF_S_OF_f_A53;
	boolState[relevant_evt_OF_f_A53] = REINITIALISATION_OF_relevant_evt_OF_f_A53;
	boolState[required_OF_f_A54] = REINITIALISATION_OF_required_OF_f_A54;
	boolState[S_OF_f_A54] = REINITIALISATION_OF_S_OF_f_A54;
	boolState[relevant_evt_OF_f_A54] = REINITIALISATION_OF_relevant_evt_OF_f_A54;
	boolState[required_OF_f_A55] = REINITIALISATION_OF_required_OF_f_A55;
	boolState[S_OF_f_A55] = REINITIALISATION_OF_S_OF_f_A55;
	boolState[relevant_evt_OF_f_A55] = REINITIALISATION_OF_relevant_evt_OF_f_A55;
	boolState[required_OF_f_A56] = REINITIALISATION_OF_required_OF_f_A56;
	boolState[S_OF_f_A56] = REINITIALISATION_OF_S_OF_f_A56;
	boolState[relevant_evt_OF_f_A56] = REINITIALISATION_OF_relevant_evt_OF_f_A56;
	boolState[required_OF_f_A57] = REINITIALISATION_OF_required_OF_f_A57;
	boolState[S_OF_f_A57] = REINITIALISATION_OF_S_OF_f_A57;
	boolState[relevant_evt_OF_f_A57] = REINITIALISATION_OF_relevant_evt_OF_f_A57;
	boolState[required_OF_f_A58] = REINITIALISATION_OF_required_OF_f_A58;
	boolState[S_OF_f_A58] = REINITIALISATION_OF_S_OF_f_A58;
	boolState[relevant_evt_OF_f_A58] = REINITIALISATION_OF_relevant_evt_OF_f_A58;
	boolState[required_OF_f_A60] = REINITIALISATION_OF_required_OF_f_A60;
	boolState[S_OF_f_A60] = REINITIALISATION_OF_S_OF_f_A60;
	boolState[relevant_evt_OF_f_A60] = REINITIALISATION_OF_relevant_evt_OF_f_A60;
	boolState[required_OF_f_A61] = REINITIALISATION_OF_required_OF_f_A61;
	boolState[S_OF_f_A61] = REINITIALISATION_OF_S_OF_f_A61;
	boolState[relevant_evt_OF_f_A61] = REINITIALISATION_OF_relevant_evt_OF_f_A61;
	boolState[required_OF_f_A63] = REINITIALISATION_OF_required_OF_f_A63;
	boolState[S_OF_f_A63] = REINITIALISATION_OF_S_OF_f_A63;
	boolState[relevant_evt_OF_f_A63] = REINITIALISATION_OF_relevant_evt_OF_f_A63;
	boolState[required_OF_f_A64] = REINITIALISATION_OF_required_OF_f_A64;
	boolState[S_OF_f_A64] = REINITIALISATION_OF_S_OF_f_A64;
	boolState[relevant_evt_OF_f_A64] = REINITIALISATION_OF_relevant_evt_OF_f_A64;
	boolState[required_OF_f_A66] = REINITIALISATION_OF_required_OF_f_A66;
	boolState[S_OF_f_A66] = REINITIALISATION_OF_S_OF_f_A66;
	boolState[relevant_evt_OF_f_A66] = REINITIALISATION_OF_relevant_evt_OF_f_A66;
	boolState[required_OF_f_A67] = REINITIALISATION_OF_required_OF_f_A67;
	boolState[S_OF_f_A67] = REINITIALISATION_OF_S_OF_f_A67;
	boolState[relevant_evt_OF_f_A67] = REINITIALISATION_OF_relevant_evt_OF_f_A67;
	boolState[required_OF_f_A68] = REINITIALISATION_OF_required_OF_f_A68;
	boolState[S_OF_f_A68] = REINITIALISATION_OF_S_OF_f_A68;
	boolState[relevant_evt_OF_f_A68] = REINITIALISATION_OF_relevant_evt_OF_f_A68;
	boolState[required_OF_f_A69] = REINITIALISATION_OF_required_OF_f_A69;
	boolState[S_OF_f_A69] = REINITIALISATION_OF_S_OF_f_A69;
	boolState[relevant_evt_OF_f_A69] = REINITIALISATION_OF_relevant_evt_OF_f_A69;
	boolState[required_OF_f_A70] = REINITIALISATION_OF_required_OF_f_A70;
	boolState[S_OF_f_A70] = REINITIALISATION_OF_S_OF_f_A70;
	boolState[relevant_evt_OF_f_A70] = REINITIALISATION_OF_relevant_evt_OF_f_A70;
	boolState[required_OF_f_A71] = REINITIALISATION_OF_required_OF_f_A71;
	boolState[S_OF_f_A71] = REINITIALISATION_OF_S_OF_f_A71;
	boolState[relevant_evt_OF_f_A71] = REINITIALISATION_OF_relevant_evt_OF_f_A71;
	boolState[required_OF_f_A72] = REINITIALISATION_OF_required_OF_f_A72;
	boolState[S_OF_f_A72] = REINITIALISATION_OF_S_OF_f_A72;
	boolState[relevant_evt_OF_f_A72] = REINITIALISATION_OF_relevant_evt_OF_f_A72;
	boolState[required_OF_f_A73] = REINITIALISATION_OF_required_OF_f_A73;
	boolState[S_OF_f_A73] = REINITIALISATION_OF_S_OF_f_A73;
	boolState[relevant_evt_OF_f_A73] = REINITIALISATION_OF_relevant_evt_OF_f_A73;
	boolState[required_OF_f_A74] = REINITIALISATION_OF_required_OF_f_A74;
	boolState[S_OF_f_A74] = REINITIALISATION_OF_S_OF_f_A74;
	boolState[relevant_evt_OF_f_A74] = REINITIALISATION_OF_relevant_evt_OF_f_A74;
	boolState[required_OF_f_A75] = REINITIALISATION_OF_required_OF_f_A75;
	boolState[S_OF_f_A75] = REINITIALISATION_OF_S_OF_f_A75;
	boolState[relevant_evt_OF_f_A75] = REINITIALISATION_OF_relevant_evt_OF_f_A75;
	boolState[required_OF_f_A76] = REINITIALISATION_OF_required_OF_f_A76;
	boolState[S_OF_f_A76] = REINITIALISATION_OF_S_OF_f_A76;
	boolState[relevant_evt_OF_f_A76] = REINITIALISATION_OF_relevant_evt_OF_f_A76;
	boolState[required_OF_f_A77] = REINITIALISATION_OF_required_OF_f_A77;
	boolState[S_OF_f_A77] = REINITIALISATION_OF_S_OF_f_A77;
	boolState[relevant_evt_OF_f_A77] = REINITIALISATION_OF_relevant_evt_OF_f_A77;
	boolState[required_OF_f_A81] = REINITIALISATION_OF_required_OF_f_A81;
	boolState[S_OF_f_A81] = REINITIALISATION_OF_S_OF_f_A81;
	boolState[relevant_evt_OF_f_A81] = REINITIALISATION_OF_relevant_evt_OF_f_A81;
	boolState[required_OF_i_A52] = REINITIALISATION_OF_required_OF_i_A52;
	boolState[S_OF_i_A52] = REINITIALISATION_OF_S_OF_i_A52;
	boolState[relevant_evt_OF_i_A52] = REINITIALISATION_OF_relevant_evt_OF_i_A52;
	boolState[to_be_fired_OF_i_A52] = REINITIALISATION_OF_to_be_fired_OF_i_A52;
	boolState[required_OF_i_A53] = REINITIALISATION_OF_required_OF_i_A53;
	boolState[S_OF_i_A53] = REINITIALISATION_OF_S_OF_i_A53;
	boolState[relevant_evt_OF_i_A53] = REINITIALISATION_OF_relevant_evt_OF_i_A53;
	boolState[to_be_fired_OF_i_A53] = REINITIALISATION_OF_to_be_fired_OF_i_A53;
	boolState[required_OF_i_A54] = REINITIALISATION_OF_required_OF_i_A54;
	boolState[S_OF_i_A54] = REINITIALISATION_OF_S_OF_i_A54;
	boolState[relevant_evt_OF_i_A54] = REINITIALISATION_OF_relevant_evt_OF_i_A54;
	boolState[to_be_fired_OF_i_A54] = REINITIALISATION_OF_to_be_fired_OF_i_A54;
	boolState[required_OF_i_A55] = REINITIALISATION_OF_required_OF_i_A55;
	boolState[S_OF_i_A55] = REINITIALISATION_OF_S_OF_i_A55;
	boolState[relevant_evt_OF_i_A55] = REINITIALISATION_OF_relevant_evt_OF_i_A55;
	boolState[to_be_fired_OF_i_A55] = REINITIALISATION_OF_to_be_fired_OF_i_A55;
	boolState[required_OF_i_A56] = REINITIALISATION_OF_required_OF_i_A56;
	boolState[S_OF_i_A56] = REINITIALISATION_OF_S_OF_i_A56;
	boolState[relevant_evt_OF_i_A56] = REINITIALISATION_OF_relevant_evt_OF_i_A56;
	boolState[to_be_fired_OF_i_A56] = REINITIALISATION_OF_to_be_fired_OF_i_A56;
	boolState[required_OF_i_A57] = REINITIALISATION_OF_required_OF_i_A57;
	boolState[S_OF_i_A57] = REINITIALISATION_OF_S_OF_i_A57;
	boolState[relevant_evt_OF_i_A57] = REINITIALISATION_OF_relevant_evt_OF_i_A57;
	boolState[to_be_fired_OF_i_A57] = REINITIALISATION_OF_to_be_fired_OF_i_A57;
	boolState[required_OF_i_A58] = REINITIALISATION_OF_required_OF_i_A58;
	boolState[S_OF_i_A58] = REINITIALISATION_OF_S_OF_i_A58;
	boolState[relevant_evt_OF_i_A58] = REINITIALISATION_OF_relevant_evt_OF_i_A58;
	boolState[to_be_fired_OF_i_A58] = REINITIALISATION_OF_to_be_fired_OF_i_A58;
	boolState[required_OF_i_A60] = REINITIALISATION_OF_required_OF_i_A60;
	boolState[S_OF_i_A60] = REINITIALISATION_OF_S_OF_i_A60;
	boolState[relevant_evt_OF_i_A60] = REINITIALISATION_OF_relevant_evt_OF_i_A60;
	boolState[to_be_fired_OF_i_A60] = REINITIALISATION_OF_to_be_fired_OF_i_A60;
	boolState[required_OF_i_A61] = REINITIALISATION_OF_required_OF_i_A61;
	boolState[S_OF_i_A61] = REINITIALISATION_OF_S_OF_i_A61;
	boolState[relevant_evt_OF_i_A61] = REINITIALISATION_OF_relevant_evt_OF_i_A61;
	boolState[to_be_fired_OF_i_A61] = REINITIALISATION_OF_to_be_fired_OF_i_A61;
	boolState[required_OF_i_A63] = REINITIALISATION_OF_required_OF_i_A63;
	boolState[S_OF_i_A63] = REINITIALISATION_OF_S_OF_i_A63;
	boolState[relevant_evt_OF_i_A63] = REINITIALISATION_OF_relevant_evt_OF_i_A63;
	boolState[to_be_fired_OF_i_A63] = REINITIALISATION_OF_to_be_fired_OF_i_A63;
	boolState[required_OF_i_A64] = REINITIALISATION_OF_required_OF_i_A64;
	boolState[S_OF_i_A64] = REINITIALISATION_OF_S_OF_i_A64;
	boolState[relevant_evt_OF_i_A64] = REINITIALISATION_OF_relevant_evt_OF_i_A64;
	boolState[to_be_fired_OF_i_A64] = REINITIALISATION_OF_to_be_fired_OF_i_A64;
	boolState[required_OF_i_A66] = REINITIALISATION_OF_required_OF_i_A66;
	boolState[S_OF_i_A66] = REINITIALISATION_OF_S_OF_i_A66;
	boolState[relevant_evt_OF_i_A66] = REINITIALISATION_OF_relevant_evt_OF_i_A66;
	boolState[to_be_fired_OF_i_A66] = REINITIALISATION_OF_to_be_fired_OF_i_A66;
	boolState[required_OF_i_A67] = REINITIALISATION_OF_required_OF_i_A67;
	boolState[S_OF_i_A67] = REINITIALISATION_OF_S_OF_i_A67;
	boolState[relevant_evt_OF_i_A67] = REINITIALISATION_OF_relevant_evt_OF_i_A67;
	boolState[to_be_fired_OF_i_A67] = REINITIALISATION_OF_to_be_fired_OF_i_A67;
	boolState[required_OF_i_A68] = REINITIALISATION_OF_required_OF_i_A68;
	boolState[S_OF_i_A68] = REINITIALISATION_OF_S_OF_i_A68;
	boolState[relevant_evt_OF_i_A68] = REINITIALISATION_OF_relevant_evt_OF_i_A68;
	boolState[to_be_fired_OF_i_A68] = REINITIALISATION_OF_to_be_fired_OF_i_A68;
	boolState[required_OF_i_A69] = REINITIALISATION_OF_required_OF_i_A69;
	boolState[S_OF_i_A69] = REINITIALISATION_OF_S_OF_i_A69;
	boolState[relevant_evt_OF_i_A69] = REINITIALISATION_OF_relevant_evt_OF_i_A69;
	boolState[to_be_fired_OF_i_A69] = REINITIALISATION_OF_to_be_fired_OF_i_A69;
	boolState[required_OF_i_A70] = REINITIALISATION_OF_required_OF_i_A70;
	boolState[S_OF_i_A70] = REINITIALISATION_OF_S_OF_i_A70;
	boolState[relevant_evt_OF_i_A70] = REINITIALISATION_OF_relevant_evt_OF_i_A70;
	boolState[to_be_fired_OF_i_A70] = REINITIALISATION_OF_to_be_fired_OF_i_A70;
	boolState[required_OF_i_A71] = REINITIALISATION_OF_required_OF_i_A71;
	boolState[S_OF_i_A71] = REINITIALISATION_OF_S_OF_i_A71;
	boolState[relevant_evt_OF_i_A71] = REINITIALISATION_OF_relevant_evt_OF_i_A71;
	boolState[to_be_fired_OF_i_A71] = REINITIALISATION_OF_to_be_fired_OF_i_A71;
	boolState[required_OF_i_A72] = REINITIALISATION_OF_required_OF_i_A72;
	boolState[S_OF_i_A72] = REINITIALISATION_OF_S_OF_i_A72;
	boolState[relevant_evt_OF_i_A72] = REINITIALISATION_OF_relevant_evt_OF_i_A72;
	boolState[to_be_fired_OF_i_A72] = REINITIALISATION_OF_to_be_fired_OF_i_A72;
	boolState[required_OF_i_A73] = REINITIALISATION_OF_required_OF_i_A73;
	boolState[S_OF_i_A73] = REINITIALISATION_OF_S_OF_i_A73;
	boolState[relevant_evt_OF_i_A73] = REINITIALISATION_OF_relevant_evt_OF_i_A73;
	boolState[to_be_fired_OF_i_A73] = REINITIALISATION_OF_to_be_fired_OF_i_A73;
	boolState[required_OF_i_A74] = REINITIALISATION_OF_required_OF_i_A74;
	boolState[S_OF_i_A74] = REINITIALISATION_OF_S_OF_i_A74;
	boolState[relevant_evt_OF_i_A74] = REINITIALISATION_OF_relevant_evt_OF_i_A74;
	boolState[to_be_fired_OF_i_A74] = REINITIALISATION_OF_to_be_fired_OF_i_A74;
	boolState[required_OF_i_A75] = REINITIALISATION_OF_required_OF_i_A75;
	boolState[S_OF_i_A75] = REINITIALISATION_OF_S_OF_i_A75;
	boolState[relevant_evt_OF_i_A75] = REINITIALISATION_OF_relevant_evt_OF_i_A75;
	boolState[to_be_fired_OF_i_A75] = REINITIALISATION_OF_to_be_fired_OF_i_A75;
	boolState[required_OF_i_A76] = REINITIALISATION_OF_required_OF_i_A76;
	boolState[S_OF_i_A76] = REINITIALISATION_OF_S_OF_i_A76;
	boolState[relevant_evt_OF_i_A76] = REINITIALISATION_OF_relevant_evt_OF_i_A76;
	boolState[to_be_fired_OF_i_A76] = REINITIALISATION_OF_to_be_fired_OF_i_A76;
	boolState[required_OF_i_A77] = REINITIALISATION_OF_required_OF_i_A77;
	boolState[S_OF_i_A77] = REINITIALISATION_OF_S_OF_i_A77;
	boolState[relevant_evt_OF_i_A77] = REINITIALISATION_OF_relevant_evt_OF_i_A77;
	boolState[to_be_fired_OF_i_A77] = REINITIALISATION_OF_to_be_fired_OF_i_A77;
	boolState[required_OF_i_A81] = REINITIALISATION_OF_required_OF_i_A81;
	boolState[S_OF_i_A81] = REINITIALISATION_OF_S_OF_i_A81;
	boolState[relevant_evt_OF_i_A81] = REINITIALISATION_OF_relevant_evt_OF_i_A81;
	boolState[to_be_fired_OF_i_A81] = REINITIALISATION_OF_to_be_fired_OF_i_A81;
}

void storm::figaro::FigaroProgram_vgs_8_Trim_Article_No_repair::fireOccurrence(int numFire)
{
	//cout <<">>>>>>>>>>>>>>>>>>>> Fire of occurrence #" << numFire << " <<<<<<<<<<<<<<<<<<<<<<<" << endl;

	if (numFire == 0)
	{
		FIRE_xx10_OF_A10 = true;
	}

	if (numFire == 1)
	{
		FIRE_xx10_OF_A100 = true;
	}

	if (numFire == 2)
	{
		FIRE_xx10_OF_A101 = true;
	}

	if (numFire == 3)
	{
		FIRE_xx10_OF_A102 = true;
	}

	if (numFire == 4)
	{
		FIRE_xx10_OF_A105 = true;
	}

	if (numFire == 5)
	{
		FIRE_xx10_OF_A106 = true;
	}

	if (numFire == 6)
	{
		FIRE_xx10_OF_A109 = true;
	}

	if (numFire == 7)
	{
		FIRE_xx10_OF_A110 = true;
	}

	if (numFire == 8)
	{
		FIRE_xx10_OF_A111 = true;
	}

	if (numFire == 9)
	{
		FIRE_xx10_OF_A114 = true;
	}

	if (numFire == 10)
	{
		FIRE_xx10_OF_A115 = true;
	}

	if (numFire == 11)
	{
		FIRE_xx10_OF_A118 = true;
	}

	if (numFire == 12)
	{
		FIRE_xx10_OF_A119 = true;
	}

	if (numFire == 13)
	{
		FIRE_xx10_OF_A120 = true;
	}

	if (numFire == 14)
	{
		FIRE_xx10_OF_A123 = true;
	}

	if (numFire == 15)
	{
		FIRE_xx10_OF_A124 = true;
	}

	if (numFire == 16)
	{
		FIRE_xx10_OF_A127 = true;
	}

	if (numFire == 17)
	{
		FIRE_xx10_OF_A128 = true;
	}

	if (numFire == 18)
	{
		FIRE_xx10_OF_A129 = true;
	}

	if (numFire == 19)
	{
		FIRE_xx10_OF_A13 = true;
	}

	if (numFire == 20)
	{
		FIRE_xx10_OF_A132 = true;
	}

	if (numFire == 21)
	{
		FIRE_xx10_OF_A133 = true;
	}

	if (numFire == 22)
	{
		FIRE_xx10_OF_A136 = true;
	}

	if (numFire == 23)
	{
		FIRE_xx10_OF_A137 = true;
	}

	if (numFire == 24)
	{
		FIRE_xx10_OF_A138 = true;
	}

	if (numFire == 25)
	{
		FIRE_xx10_OF_A141 = true;
	}

	if (numFire == 26)
	{
		FIRE_xx10_OF_A142 = true;
	}

	if (numFire == 27)
	{
		FIRE_xx10_OF_A145 = true;
	}

	if (numFire == 28)
	{
		FIRE_xx10_OF_A146 = true;
	}

	if (numFire == 29)
	{
		FIRE_xx10_OF_A147 = true;
	}

	if (numFire == 30)
	{
		FIRE_xx10_OF_A150 = true;
	}

	if (numFire == 31)
	{
		FIRE_xx10_OF_A151 = true;
	}

	if (numFire == 32)
	{
		FIRE_xx10_OF_A154 = true;
	}

	if (numFire == 33)
	{
		FIRE_xx10_OF_A155 = true;
	}

	if (numFire == 34)
	{
		FIRE_xx10_OF_A156 = true;
	}

	if (numFire == 35)
	{
		FIRE_xx10_OF_A159 = true;
	}

	if (numFire == 36)
	{
		FIRE_xx10_OF_A16 = true;
	}

	if (numFire == 37)
	{
		FIRE_xx10_OF_A160 = true;
	}

	if (numFire == 38)
	{
		FIRE_xx10_OF_A163 = true;
	}

	if (numFire == 39)
	{
		FIRE_xx10_OF_A164 = true;
	}

	if (numFire == 40)
	{
		FIRE_xx10_OF_A165 = true;
	}

	if (numFire == 41)
	{
		FIRE_xx10_OF_A168 = true;
	}

	if (numFire == 42)
	{
		FIRE_xx10_OF_A169 = true;
	}

	if (numFire == 43)
	{
		FIRE_xx10_OF_A170 = true;
	}

	if (numFire == 44)
	{
		FIRE_xx10_OF_A174 = true;
	}

	if (numFire == 45)
	{
		FIRE_xx10_OF_A175 = true;
	}

	if (numFire == 46)
	{
		FIRE_xx10_OF_A176 = true;
	}

	if (numFire == 47)
	{
		FIRE_xx10_OF_A179 = true;
	}

	if (numFire == 48)
	{
		FIRE_xx10_OF_A180 = true;
	}

	if (numFire == 49)
	{
		FIRE_xx10_OF_A181 = true;
	}

	if (numFire == 50)
	{
		FIRE_xx10_OF_A19 = true;
	}

	if (numFire == 51)
	{
		FIRE_xx10_OF_A22 = true;
	}

	if (numFire == 52)
	{
		FIRE_xx10_OF_A25 = true;
	}

	if (numFire == 53)
	{
		FIRE_xx10_OF_A28 = true;
	}

	if (numFire == 54)
	{
		FIRE_xx10_OF_A31 = true;
	}

	if (numFire == 55)
	{
		FIRE_xx10_OF_A34 = true;
	}

	if (numFire == 56)
	{
		FIRE_xx10_OF_A37 = true;
	}

	if (numFire == 57)
	{
		FIRE_xx10_OF_A4 = true;
	}

	if (numFire == 58)
	{
		FIRE_xx10_OF_A40 = true;
	}

	if (numFire == 59)
	{
		FIRE_xx10_OF_A43 = true;
	}

	if (numFire == 60)
	{
		FIRE_xx10_OF_A47 = true;
	}

	if (numFire == 61)
	{
		FIRE_xx10_OF_A7 = true;
	}

	if (numFire == 62)
	{
		FIRE_xx10_OF_A83 = true;
	}

	if (numFire == 63)
	{
		FIRE_xx10_OF_A84 = true;
	}

	if (numFire == 64)
	{
		FIRE_xx10_OF_A85 = true;
	}

	if (numFire == 65)
	{
		FIRE_xx10_OF_A86 = true;
	}

	if (numFire == 66)
	{
		FIRE_xx10_OF_A87 = true;
	}

	if (numFire == 67)
	{
		FIRE_xx10_OF_A88 = true;
	}

	if (numFire == 68)
	{
		FIRE_xx10_OF_A89 = true;
	}

	if (numFire == 69)
	{
		FIRE_xx10_OF_A90 = true;
	}

	if (numFire == 70)
	{
		FIRE_xx10_OF_A91 = true;
	}

	if (numFire == 71)
	{
		FIRE_xx10_OF_A92 = true;
	}

	if (numFire == 72)
	{
		FIRE_xx10_OF_A93 = true;
	}

	if (numFire == 73)
	{
		FIRE_xx10_OF_A96 = true;
	}

	if (numFire == 74)
	{
		FIRE_xx10_OF_A97 = true;
	}

	if (numFire == 75)
	{
		FIRE_xx10_OF_f_A52 = true;
	}

	if (numFire == 76)
	{
		FIRE_xx10_OF_f_A53 = true;
	}

	if (numFire == 77)
	{
		FIRE_xx10_OF_f_A54 = true;
	}

	if (numFire == 78)
	{
		FIRE_xx10_OF_f_A55 = true;
	}

	if (numFire == 79)
	{
		FIRE_xx10_OF_f_A56 = true;
	}

	if (numFire == 80)
	{
		FIRE_xx10_OF_f_A57 = true;
	}

	if (numFire == 81)
	{
		FIRE_xx10_OF_f_A58 = true;
	}

	if (numFire == 82)
	{
		FIRE_xx10_OF_f_A60 = true;
	}

	if (numFire == 83)
	{
		FIRE_xx10_OF_f_A61 = true;
	}

	if (numFire == 84)
	{
		FIRE_xx10_OF_f_A63 = true;
	}

	if (numFire == 85)
	{
		FIRE_xx10_OF_f_A64 = true;
	}

	if (numFire == 86)
	{
		FIRE_xx10_OF_f_A66 = true;
	}

	if (numFire == 87)
	{
		FIRE_xx10_OF_f_A67 = true;
	}

	if (numFire == 88)
	{
		FIRE_xx10_OF_f_A68 = true;
	}

	if (numFire == 89)
	{
		FIRE_xx10_OF_f_A69 = true;
	}

	if (numFire == 90)
	{
		FIRE_xx10_OF_f_A70 = true;
	}

	if (numFire == 91)
	{
		FIRE_xx10_OF_f_A71 = true;
	}

	if (numFire == 92)
	{
		FIRE_xx10_OF_f_A72 = true;
	}

	if (numFire == 93)
	{
		FIRE_xx10_OF_f_A73 = true;
	}

	if (numFire == 94)
	{
		FIRE_xx10_OF_f_A74 = true;
	}

	if (numFire == 95)
	{
		FIRE_xx10_OF_f_A75 = true;
	}

	if (numFire == 96)
	{
		FIRE_xx10_OF_f_A76 = true;
	}

	if (numFire == 97)
	{
		FIRE_xx10_OF_f_A77 = true;
	}

	if (numFire == 98)
	{
		FIRE_xx10_OF_f_A81 = true;
	}

	if (numFire == 99)
	{
		FIRE_xx23_OF_i_A52_INS_99 = true;
	}

	if (numFire == 100)
	{
		FIRE_xx23_OF_i_A52_INS_100 = true;
	}

	if (numFire == 101)
	{
		FIRE_xx23_OF_i_A53_INS_101 = true;
	}

	if (numFire == 102)
	{
		FIRE_xx23_OF_i_A53_INS_102 = true;
	}

	if (numFire == 103)
	{
		FIRE_xx23_OF_i_A54_INS_103 = true;
	}

	if (numFire == 104)
	{
		FIRE_xx23_OF_i_A54_INS_104 = true;
	}

	if (numFire == 105)
	{
		FIRE_xx23_OF_i_A55_INS_105 = true;
	}

	if (numFire == 106)
	{
		FIRE_xx23_OF_i_A55_INS_106 = true;
	}

	if (numFire == 107)
	{
		FIRE_xx23_OF_i_A56_INS_107 = true;
	}

	if (numFire == 108)
	{
		FIRE_xx23_OF_i_A56_INS_108 = true;
	}

	if (numFire == 109)
	{
		FIRE_xx23_OF_i_A57_INS_109 = true;
	}

	if (numFire == 110)
	{
		FIRE_xx23_OF_i_A57_INS_110 = true;
	}

	if (numFire == 111)
	{
		FIRE_xx23_OF_i_A58_INS_111 = true;
	}

	if (numFire == 112)
	{
		FIRE_xx23_OF_i_A58_INS_112 = true;
	}

	if (numFire == 113)
	{
		FIRE_xx23_OF_i_A60_INS_113 = true;
	}

	if (numFire == 114)
	{
		FIRE_xx23_OF_i_A60_INS_114 = true;
	}

	if (numFire == 115)
	{
		FIRE_xx23_OF_i_A61_INS_115 = true;
	}

	if (numFire == 116)
	{
		FIRE_xx23_OF_i_A61_INS_116 = true;
	}

	if (numFire == 117)
	{
		FIRE_xx23_OF_i_A63_INS_117 = true;
	}

	if (numFire == 118)
	{
		FIRE_xx23_OF_i_A63_INS_118 = true;
	}

	if (numFire == 119)
	{
		FIRE_xx23_OF_i_A64_INS_119 = true;
	}

	if (numFire == 120)
	{
		FIRE_xx23_OF_i_A64_INS_120 = true;
	}

	if (numFire == 121)
	{
		FIRE_xx23_OF_i_A66_INS_121 = true;
	}

	if (numFire == 122)
	{
		FIRE_xx23_OF_i_A66_INS_122 = true;
	}

	if (numFire == 123)
	{
		FIRE_xx23_OF_i_A67_INS_123 = true;
	}

	if (numFire == 124)
	{
		FIRE_xx23_OF_i_A67_INS_124 = true;
	}

	if (numFire == 125)
	{
		FIRE_xx23_OF_i_A68_INS_125 = true;
	}

	if (numFire == 126)
	{
		FIRE_xx23_OF_i_A68_INS_126 = true;
	}

	if (numFire == 127)
	{
		FIRE_xx23_OF_i_A69_INS_127 = true;
	}

	if (numFire == 128)
	{
		FIRE_xx23_OF_i_A69_INS_128 = true;
	}

	if (numFire == 129)
	{
		FIRE_xx23_OF_i_A70_INS_129 = true;
	}

	if (numFire == 130)
	{
		FIRE_xx23_OF_i_A70_INS_130 = true;
	}

	if (numFire == 131)
	{
		FIRE_xx23_OF_i_A71_INS_131 = true;
	}

	if (numFire == 132)
	{
		FIRE_xx23_OF_i_A71_INS_132 = true;
	}

	if (numFire == 133)
	{
		FIRE_xx23_OF_i_A72_INS_133 = true;
	}

	if (numFire == 134)
	{
		FIRE_xx23_OF_i_A72_INS_134 = true;
	}

	if (numFire == 135)
	{
		FIRE_xx23_OF_i_A73_INS_135 = true;
	}

	if (numFire == 136)
	{
		FIRE_xx23_OF_i_A73_INS_136 = true;
	}

	if (numFire == 137)
	{
		FIRE_xx23_OF_i_A74_INS_137 = true;
	}

	if (numFire == 138)
	{
		FIRE_xx23_OF_i_A74_INS_138 = true;
	}

	if (numFire == 139)
	{
		FIRE_xx23_OF_i_A75_INS_139 = true;
	}

	if (numFire == 140)
	{
		FIRE_xx23_OF_i_A75_INS_140 = true;
	}

	if (numFire == 141)
	{
		FIRE_xx23_OF_i_A76_INS_141 = true;
	}

	if (numFire == 142)
	{
		FIRE_xx23_OF_i_A76_INS_142 = true;
	}

	if (numFire == 143)
	{
		FIRE_xx23_OF_i_A77_INS_143 = true;
	}

	if (numFire == 144)
	{
		FIRE_xx23_OF_i_A77_INS_144 = true;
	}

	if (numFire == 145)
	{
		FIRE_xx23_OF_i_A81_INS_145 = true;
	}

	if (numFire == 146)
	{
		FIRE_xx23_OF_i_A81_INS_146 = true;
	}

/* ---------- DECLARATION OF OCCURRENCE RULES------------ */

	// Occurrence xx10_OF_A10
	if ((boolState[failF_OF_A10] == false) && (boolState[required_OF_A10] && boolState[relevant_evt_OF_A10])) 
	{
		 
		if (FIRE_xx10_OF_A10)
		{
			boolState[failF_OF_A10]  =  true;
			FIRE_xx10_OF_A10 = false;
		}
	}

	// Occurrence xx10_OF_A100
	if ((boolState[failF_OF_A100] == false) && (boolState[required_OF_A100] &&  boolState[relevant_evt_OF_A100])) 
	{
		 
		if (FIRE_xx10_OF_A100)
		{
			boolState[failF_OF_A100]  =  true;
			FIRE_xx10_OF_A100 = false;
		}
	}

	// Occurrence xx10_OF_A101
	if ((boolState[failF_OF_A101] == false) && (boolState[required_OF_A101] &&  boolState[relevant_evt_OF_A101])) 
	{
		 
		if (FIRE_xx10_OF_A101)
		{
			boolState[failF_OF_A101]  =  true;
			FIRE_xx10_OF_A101 = false;
		}
	}

	// Occurrence xx10_OF_A102
	if ((boolState[failF_OF_A102] == false) && (boolState[required_OF_A102] &&  boolState[relevant_evt_OF_A102])) 
	{
		 
		if (FIRE_xx10_OF_A102)
		{
			boolState[failF_OF_A102]  =  true;
			FIRE_xx10_OF_A102 = false;
		}
	}

	// Occurrence xx10_OF_A105
	if ((boolState[failF_OF_A105] == false) && (boolState[required_OF_A105] &&  boolState[relevant_evt_OF_A105])) 
	{
		 
		if (FIRE_xx10_OF_A105)
		{
			boolState[failF_OF_A105]  =  true;
			FIRE_xx10_OF_A105 = false;
		}
	}

	// Occurrence xx10_OF_A106
	if ((boolState[failF_OF_A106] == false) && (boolState[required_OF_A106] &&  boolState[relevant_evt_OF_A106])) 
	{
		 
		if (FIRE_xx10_OF_A106)
		{
			boolState[failF_OF_A106]  =  true;
			FIRE_xx10_OF_A106 = false;
		}
	}

	// Occurrence xx10_OF_A109
	if ((boolState[failF_OF_A109] == false) && (boolState[required_OF_A109] &&  boolState[relevant_evt_OF_A109])) 
	{
		 
		if (FIRE_xx10_OF_A109)
		{
			boolState[failF_OF_A109]  =  true;
			FIRE_xx10_OF_A109 = false;
		}
	}

	// Occurrence xx10_OF_A110
	if ((boolState[failF_OF_A110] == false) && (boolState[required_OF_A110] &&  boolState[relevant_evt_OF_A110])) 
	{
		 
		if (FIRE_xx10_OF_A110)
		{
			boolState[failF_OF_A110]  =  true;
			FIRE_xx10_OF_A110 = false;
		}
	}

	// Occurrence xx10_OF_A111
	if ((boolState[failF_OF_A111] == false) && (boolState[required_OF_A111] &&  boolState[relevant_evt_OF_A111])) 
	{
		 
		if (FIRE_xx10_OF_A111)
		{
			boolState[failF_OF_A111]  =  true;
			FIRE_xx10_OF_A111 = false;
		}
	}

	// Occurrence xx10_OF_A114
	if ((boolState[failF_OF_A114] == false) && (boolState[required_OF_A114] &&  boolState[relevant_evt_OF_A114])) 
	{
		 
		if (FIRE_xx10_OF_A114)
		{
			boolState[failF_OF_A114]  =  true;
			FIRE_xx10_OF_A114 = false;
		}
	}

	// Occurrence xx10_OF_A115
	if ((boolState[failF_OF_A115] == false) && (boolState[required_OF_A115] &&  boolState[relevant_evt_OF_A115])) 
	{
		 
		if (FIRE_xx10_OF_A115)
		{
			boolState[failF_OF_A115]  =  true;
			FIRE_xx10_OF_A115 = false;
		}
	}

	// Occurrence xx10_OF_A118
	if ((boolState[failF_OF_A118] == false) && (boolState[required_OF_A118] &&  boolState[relevant_evt_OF_A118])) 
	{
		 
		if (FIRE_xx10_OF_A118)
		{
			boolState[failF_OF_A118]  =  true;
			FIRE_xx10_OF_A118 = false;
		}
	}

	// Occurrence xx10_OF_A119
	if ((boolState[failF_OF_A119] == false) && (boolState[required_OF_A119] &&  boolState[relevant_evt_OF_A119])) 
	{
		 
		if (FIRE_xx10_OF_A119)
		{
			boolState[failF_OF_A119]  =  true;
			FIRE_xx10_OF_A119 = false;
		}
	}

	// Occurrence xx10_OF_A120
	if ((boolState[failF_OF_A120] == false) && (boolState[required_OF_A120] &&  boolState[relevant_evt_OF_A120])) 
	{
		 
		if (FIRE_xx10_OF_A120)
		{
			boolState[failF_OF_A120]  =  true;
			FIRE_xx10_OF_A120 = false;
		}
	}

	// Occurrence xx10_OF_A123
	if ((boolState[failF_OF_A123] == false) && (boolState[required_OF_A123] &&  boolState[relevant_evt_OF_A123])) 
	{
		 
		if (FIRE_xx10_OF_A123)
		{
			boolState[failF_OF_A123]  =  true;
			FIRE_xx10_OF_A123 = false;
		}
	}

	// Occurrence xx10_OF_A124
	if ((boolState[failF_OF_A124] == false) && (boolState[required_OF_A124] &&  boolState[relevant_evt_OF_A124])) 
	{
		 
		if (FIRE_xx10_OF_A124)
		{
			boolState[failF_OF_A124]  =  true;
			FIRE_xx10_OF_A124 = false;
		}
	}

	// Occurrence xx10_OF_A127
	if ((boolState[failF_OF_A127] == false) && (boolState[required_OF_A127] &&  boolState[relevant_evt_OF_A127])) 
	{
		 
		if (FIRE_xx10_OF_A127)
		{
			boolState[failF_OF_A127]  =  true;
			FIRE_xx10_OF_A127 = false;
		}
	}

	// Occurrence xx10_OF_A128
	if ((boolState[failF_OF_A128] == false) && (boolState[required_OF_A128] &&  boolState[relevant_evt_OF_A128])) 
	{
		 
		if (FIRE_xx10_OF_A128)
		{
			boolState[failF_OF_A128]  =  true;
			FIRE_xx10_OF_A128 = false;
		}
	}

	// Occurrence xx10_OF_A129
	if ((boolState[failF_OF_A129] == false) && (boolState[required_OF_A129] &&  boolState[relevant_evt_OF_A129])) 
	{
		 
		if (FIRE_xx10_OF_A129)
		{
			boolState[failF_OF_A129]  =  true;
			FIRE_xx10_OF_A129 = false;
		}
	}

	// Occurrence xx10_OF_A13
	if ((boolState[failF_OF_A13] == false) && (boolState[required_OF_A13] && boolState[relevant_evt_OF_A13])) 
	{
		 
		if (FIRE_xx10_OF_A13)
		{
			boolState[failF_OF_A13]  =  true;
			FIRE_xx10_OF_A13 = false;
		}
	}

	// Occurrence xx10_OF_A132
	if ((boolState[failF_OF_A132] == false) && (boolState[required_OF_A132] &&  boolState[relevant_evt_OF_A132])) 
	{
		 
		if (FIRE_xx10_OF_A132)
		{
			boolState[failF_OF_A132]  =  true;
			FIRE_xx10_OF_A132 = false;
		}
	}

	// Occurrence xx10_OF_A133
	if ((boolState[failF_OF_A133] == false) && (boolState[required_OF_A133] &&  boolState[relevant_evt_OF_A133])) 
	{
		 
		if (FIRE_xx10_OF_A133)
		{
			boolState[failF_OF_A133]  =  true;
			FIRE_xx10_OF_A133 = false;
		}
	}

	// Occurrence xx10_OF_A136
	if ((boolState[failF_OF_A136] == false) && (boolState[required_OF_A136] &&  boolState[relevant_evt_OF_A136])) 
	{
		 
		if (FIRE_xx10_OF_A136)
		{
			boolState[failF_OF_A136]  =  true;
			FIRE_xx10_OF_A136 = false;
		}
	}

	// Occurrence xx10_OF_A137
	if ((boolState[failF_OF_A137] == false) && (boolState[required_OF_A137] &&  boolState[relevant_evt_OF_A137])) 
	{
		 
		if (FIRE_xx10_OF_A137)
		{
			boolState[failF_OF_A137]  =  true;
			FIRE_xx10_OF_A137 = false;
		}
	}

	// Occurrence xx10_OF_A138
	if ((boolState[failF_OF_A138] == false) && (boolState[required_OF_A138] &&  boolState[relevant_evt_OF_A138])) 
	{
		 
		if (FIRE_xx10_OF_A138)
		{
			boolState[failF_OF_A138]  =  true;
			FIRE_xx10_OF_A138 = false;
		}
	}

	// Occurrence xx10_OF_A141
	if ((boolState[failF_OF_A141] == false) && (boolState[required_OF_A141] &&  boolState[relevant_evt_OF_A141])) 
	{
		 
		if (FIRE_xx10_OF_A141)
		{
			boolState[failF_OF_A141]  =  true;
			FIRE_xx10_OF_A141 = false;
		}
	}

	// Occurrence xx10_OF_A142
	if ((boolState[failF_OF_A142] == false) && (boolState[required_OF_A142] &&  boolState[relevant_evt_OF_A142])) 
	{
		 
		if (FIRE_xx10_OF_A142)
		{
			boolState[failF_OF_A142]  =  true;
			FIRE_xx10_OF_A142 = false;
		}
	}

	// Occurrence xx10_OF_A145
	if ((boolState[failF_OF_A145] == false) && (boolState[required_OF_A145] &&  boolState[relevant_evt_OF_A145])) 
	{
		 
		if (FIRE_xx10_OF_A145)
		{
			boolState[failF_OF_A145]  =  true;
			FIRE_xx10_OF_A145 = false;
		}
	}

	// Occurrence xx10_OF_A146
	if ((boolState[failF_OF_A146] == false) && (boolState[required_OF_A146] &&  boolState[relevant_evt_OF_A146])) 
	{
		 
		if (FIRE_xx10_OF_A146)
		{
			boolState[failF_OF_A146]  =  true;
			FIRE_xx10_OF_A146 = false;
		}
	}

	// Occurrence xx10_OF_A147
	if ((boolState[failF_OF_A147] == false) && (boolState[required_OF_A147] &&  boolState[relevant_evt_OF_A147])) 
	{
		 
		if (FIRE_xx10_OF_A147)
		{
			boolState[failF_OF_A147]  =  true;
			FIRE_xx10_OF_A147 = false;
		}
	}

	// Occurrence xx10_OF_A150
	if ((boolState[failF_OF_A150] == false) && (boolState[required_OF_A150] &&  boolState[relevant_evt_OF_A150])) 
	{
		 
		if (FIRE_xx10_OF_A150)
		{
			boolState[failF_OF_A150]  =  true;
			FIRE_xx10_OF_A150 = false;
		}
	}

	// Occurrence xx10_OF_A151
	if ((boolState[failF_OF_A151] == false) && (boolState[required_OF_A151] &&  boolState[relevant_evt_OF_A151])) 
	{
		 
		if (FIRE_xx10_OF_A151)
		{
			boolState[failF_OF_A151]  =  true;
			FIRE_xx10_OF_A151 = false;
		}
	}

	// Occurrence xx10_OF_A154
	if ((boolState[failF_OF_A154] == false) && (boolState[required_OF_A154] &&  boolState[relevant_evt_OF_A154])) 
	{
		 
		if (FIRE_xx10_OF_A154)
		{
			boolState[failF_OF_A154]  =  true;
			FIRE_xx10_OF_A154 = false;
		}
	}

	// Occurrence xx10_OF_A155
	if ((boolState[failF_OF_A155] == false) && (boolState[required_OF_A155] &&  boolState[relevant_evt_OF_A155])) 
	{
		 
		if (FIRE_xx10_OF_A155)
		{
			boolState[failF_OF_A155]  =  true;
			FIRE_xx10_OF_A155 = false;
		}
	}

	// Occurrence xx10_OF_A156
	if ((boolState[failF_OF_A156] == false) && (boolState[required_OF_A156] &&  boolState[relevant_evt_OF_A156])) 
	{
		 
		if (FIRE_xx10_OF_A156)
		{
			boolState[failF_OF_A156]  =  true;
			FIRE_xx10_OF_A156 = false;
		}
	}

	// Occurrence xx10_OF_A159
	if ((boolState[failF_OF_A159] == false) && (boolState[required_OF_A159] &&  boolState[relevant_evt_OF_A159])) 
	{
		 
		if (FIRE_xx10_OF_A159)
		{
			boolState[failF_OF_A159]  =  true;
			FIRE_xx10_OF_A159 = false;
		}
	}

	// Occurrence xx10_OF_A16
	if ((boolState[failF_OF_A16] == false) && (boolState[required_OF_A16] && boolState[relevant_evt_OF_A16])) 
	{
		 
		if (FIRE_xx10_OF_A16)
		{
			boolState[failF_OF_A16]  =  true;
			FIRE_xx10_OF_A16 = false;
		}
	}

	// Occurrence xx10_OF_A160
	if ((boolState[failF_OF_A160] == false) && (boolState[required_OF_A160] &&  boolState[relevant_evt_OF_A160])) 
	{
		 
		if (FIRE_xx10_OF_A160)
		{
			boolState[failF_OF_A160]  =  true;
			FIRE_xx10_OF_A160 = false;
		}
	}

	// Occurrence xx10_OF_A163
	if ((boolState[failF_OF_A163] == false) && (boolState[required_OF_A163] &&  boolState[relevant_evt_OF_A163])) 
	{
		 
		if (FIRE_xx10_OF_A163)
		{
			boolState[failF_OF_A163]  =  true;
			FIRE_xx10_OF_A163 = false;
		}
	}

	// Occurrence xx10_OF_A164
	if ((boolState[failF_OF_A164] == false) && (boolState[required_OF_A164] &&  boolState[relevant_evt_OF_A164])) 
	{
		 
		if (FIRE_xx10_OF_A164)
		{
			boolState[failF_OF_A164]  =  true;
			FIRE_xx10_OF_A164 = false;
		}
	}

	// Occurrence xx10_OF_A165
	if ((boolState[failF_OF_A165] == false) && (boolState[required_OF_A165] &&  boolState[relevant_evt_OF_A165])) 
	{
		 
		if (FIRE_xx10_OF_A165)
		{
			boolState[failF_OF_A165]  =  true;
			FIRE_xx10_OF_A165 = false;
		}
	}

	// Occurrence xx10_OF_A168
	if ((boolState[failF_OF_A168] == false) && (boolState[required_OF_A168] &&  boolState[relevant_evt_OF_A168])) 
	{
		 
		if (FIRE_xx10_OF_A168)
		{
			boolState[failF_OF_A168]  =  true;
			FIRE_xx10_OF_A168 = false;
		}
	}

	// Occurrence xx10_OF_A169
	if ((boolState[failF_OF_A169] == false) && (boolState[required_OF_A169] &&  boolState[relevant_evt_OF_A169])) 
	{
		 
		if (FIRE_xx10_OF_A169)
		{
			boolState[failF_OF_A169]  =  true;
			FIRE_xx10_OF_A169 = false;
		}
	}

	// Occurrence xx10_OF_A170
	if ((boolState[failF_OF_A170] == false) && (boolState[required_OF_A170] &&  boolState[relevant_evt_OF_A170])) 
	{
		 
		if (FIRE_xx10_OF_A170)
		{
			boolState[failF_OF_A170]  =  true;
			FIRE_xx10_OF_A170 = false;
		}
	}

	// Occurrence xx10_OF_A174
	if ((boolState[failF_OF_A174] == false) && (boolState[required_OF_A174] &&  boolState[relevant_evt_OF_A174])) 
	{
		 
		if (FIRE_xx10_OF_A174)
		{
			boolState[failF_OF_A174]  =  true;
			FIRE_xx10_OF_A174 = false;
		}
	}

	// Occurrence xx10_OF_A175
	if ((boolState[failF_OF_A175] == false) && (boolState[required_OF_A175] &&  boolState[relevant_evt_OF_A175])) 
	{
		 
		if (FIRE_xx10_OF_A175)
		{
			boolState[failF_OF_A175]  =  true;
			FIRE_xx10_OF_A175 = false;
		}
	}

	// Occurrence xx10_OF_A176
	if ((boolState[failF_OF_A176] == false) && (boolState[required_OF_A176] &&  boolState[relevant_evt_OF_A176])) 
	{
		 
		if (FIRE_xx10_OF_A176)
		{
			boolState[failF_OF_A176]  =  true;
			FIRE_xx10_OF_A176 = false;
		}
	}

	// Occurrence xx10_OF_A179
	if ((boolState[failF_OF_A179] == false) && (boolState[required_OF_A179] &&  boolState[relevant_evt_OF_A179])) 
	{
		 
		if (FIRE_xx10_OF_A179)
		{
			boolState[failF_OF_A179]  =  true;
			FIRE_xx10_OF_A179 = false;
		}
	}

	// Occurrence xx10_OF_A180
	if ((boolState[failF_OF_A180] == false) && (boolState[required_OF_A180] &&  boolState[relevant_evt_OF_A180])) 
	{
		 
		if (FIRE_xx10_OF_A180)
		{
			boolState[failF_OF_A180]  =  true;
			FIRE_xx10_OF_A180 = false;
		}
	}

	// Occurrence xx10_OF_A181
	if ((boolState[failF_OF_A181] == false) && (boolState[required_OF_A181] &&  boolState[relevant_evt_OF_A181])) 
	{
		 
		if (FIRE_xx10_OF_A181)
		{
			boolState[failF_OF_A181]  =  true;
			FIRE_xx10_OF_A181 = false;
		}
	}

	// Occurrence xx10_OF_A19
	if ((boolState[failF_OF_A19] == false) && (boolState[required_OF_A19] && boolState[relevant_evt_OF_A19])) 
	{
		 
		if (FIRE_xx10_OF_A19)
		{
			boolState[failF_OF_A19]  =  true;
			FIRE_xx10_OF_A19 = false;
		}
	}

	// Occurrence xx10_OF_A22
	if ((boolState[failF_OF_A22] == false) && (boolState[required_OF_A22] && boolState[relevant_evt_OF_A22])) 
	{
		 
		if (FIRE_xx10_OF_A22)
		{
			boolState[failF_OF_A22]  =  true;
			FIRE_xx10_OF_A22 = false;
		}
	}

	// Occurrence xx10_OF_A25
	if ((boolState[failF_OF_A25] == false) && (boolState[required_OF_A25] && boolState[relevant_evt_OF_A25])) 
	{
		 
		if (FIRE_xx10_OF_A25)
		{
			boolState[failF_OF_A25]  =  true;
			FIRE_xx10_OF_A25 = false;
		}
	}

	// Occurrence xx10_OF_A28
	if ((boolState[failF_OF_A28] == false) && (boolState[required_OF_A28] && boolState[relevant_evt_OF_A28])) 
	{
		 
		if (FIRE_xx10_OF_A28)
		{
			boolState[failF_OF_A28]  =  true;
			FIRE_xx10_OF_A28 = false;
		}
	}

	// Occurrence xx10_OF_A31
	if ((boolState[failF_OF_A31] == false) && (boolState[required_OF_A31] && boolState[relevant_evt_OF_A31])) 
	{
		 
		if (FIRE_xx10_OF_A31)
		{
			boolState[failF_OF_A31]  =  true;
			FIRE_xx10_OF_A31 = false;
		}
	}

	// Occurrence xx10_OF_A34
	if ((boolState[failF_OF_A34] == false) && (boolState[required_OF_A34] && boolState[relevant_evt_OF_A34])) 
	{
		 
		if (FIRE_xx10_OF_A34)
		{
			boolState[failF_OF_A34]  =  true;
			FIRE_xx10_OF_A34 = false;
		}
	}

	// Occurrence xx10_OF_A37
	if ((boolState[failF_OF_A37] == false) && (boolState[required_OF_A37] && boolState[relevant_evt_OF_A37])) 
	{
		 
		if (FIRE_xx10_OF_A37)
		{
			boolState[failF_OF_A37]  =  true;
			FIRE_xx10_OF_A37 = false;
		}
	}

	// Occurrence xx10_OF_A4
	if ((boolState[failF_OF_A4] == false) && (boolState[required_OF_A4] && boolState[relevant_evt_OF_A4])) 
	{
		 
		if (FIRE_xx10_OF_A4)
		{
			boolState[failF_OF_A4]  =  true;
			FIRE_xx10_OF_A4 = false;
		}
	}

	// Occurrence xx10_OF_A40
	if ((boolState[failF_OF_A40] == false) && (boolState[required_OF_A40] && boolState[relevant_evt_OF_A40])) 
	{
		 
		if (FIRE_xx10_OF_A40)
		{
			boolState[failF_OF_A40]  =  true;
			FIRE_xx10_OF_A40 = false;
		}
	}

	// Occurrence xx10_OF_A43
	if ((boolState[failF_OF_A43] == false) && (boolState[required_OF_A43] && boolState[relevant_evt_OF_A43])) 
	{
		 
		if (FIRE_xx10_OF_A43)
		{
			boolState[failF_OF_A43]  =  true;
			FIRE_xx10_OF_A43 = false;
		}
	}

	// Occurrence xx10_OF_A47
	if ((boolState[failF_OF_A47] == false) && (boolState[required_OF_A47] && boolState[relevant_evt_OF_A47])) 
	{
		 
		if (FIRE_xx10_OF_A47)
		{
			boolState[failF_OF_A47]  =  true;
			FIRE_xx10_OF_A47 = false;
		}
	}

	// Occurrence xx10_OF_A7
	if ((boolState[failF_OF_A7] == false) && (boolState[required_OF_A7] && boolState[relevant_evt_OF_A7])) 
	{
		 
		if (FIRE_xx10_OF_A7)
		{
			boolState[failF_OF_A7]  =  true;
			FIRE_xx10_OF_A7 = false;
		}
	}

	// Occurrence xx10_OF_A83
	if ((boolState[failF_OF_A83] == false) && (boolState[required_OF_A83] && boolState[relevant_evt_OF_A83])) 
	{
		 
		if (FIRE_xx10_OF_A83)
		{
			boolState[failF_OF_A83]  =  true;
			FIRE_xx10_OF_A83 = false;
		}
	}

	// Occurrence xx10_OF_A84
	if ((boolState[failF_OF_A84] == false) && (boolState[required_OF_A84] && boolState[relevant_evt_OF_A84])) 
	{
		 
		if (FIRE_xx10_OF_A84)
		{
			boolState[failF_OF_A84]  =  true;
			FIRE_xx10_OF_A84 = false;
		}
	}

	// Occurrence xx10_OF_A85
	if ((boolState[failF_OF_A85] == false) && (boolState[required_OF_A85] && boolState[relevant_evt_OF_A85])) 
	{
		 
		if (FIRE_xx10_OF_A85)
		{
			boolState[failF_OF_A85]  =  true;
			FIRE_xx10_OF_A85 = false;
		}
	}

	// Occurrence xx10_OF_A86
	if ((boolState[failF_OF_A86] == false) && (boolState[required_OF_A86] && boolState[relevant_evt_OF_A86])) 
	{
		 
		if (FIRE_xx10_OF_A86)
		{
			boolState[failF_OF_A86]  =  true;
			FIRE_xx10_OF_A86 = false;
		}
	}

	// Occurrence xx10_OF_A87
	if ((boolState[failF_OF_A87] == false) && (boolState[required_OF_A87] && boolState[relevant_evt_OF_A87])) 
	{
		 
		if (FIRE_xx10_OF_A87)
		{
			boolState[failF_OF_A87]  =  true;
			FIRE_xx10_OF_A87 = false;
		}
	}

	// Occurrence xx10_OF_A88
	if ((boolState[failF_OF_A88] == false) && (boolState[required_OF_A88] && boolState[relevant_evt_OF_A88])) 
	{
		 
		if (FIRE_xx10_OF_A88)
		{
			boolState[failF_OF_A88]  =  true;
			FIRE_xx10_OF_A88 = false;
		}
	}

	// Occurrence xx10_OF_A89
	if ((boolState[failF_OF_A89] == false) && (boolState[required_OF_A89] && boolState[relevant_evt_OF_A89])) 
	{
		 
		if (FIRE_xx10_OF_A89)
		{
			boolState[failF_OF_A89]  =  true;
			FIRE_xx10_OF_A89 = false;
		}
	}

	// Occurrence xx10_OF_A90
	if ((boolState[failF_OF_A90] == false) && (boolState[required_OF_A90] && boolState[relevant_evt_OF_A90])) 
	{
		 
		if (FIRE_xx10_OF_A90)
		{
			boolState[failF_OF_A90]  =  true;
			FIRE_xx10_OF_A90 = false;
		}
	}

	// Occurrence xx10_OF_A91
	if ((boolState[failF_OF_A91] == false) && (boolState[required_OF_A91] && boolState[relevant_evt_OF_A91])) 
	{
		 
		if (FIRE_xx10_OF_A91)
		{
			boolState[failF_OF_A91]  =  true;
			FIRE_xx10_OF_A91 = false;
		}
	}

	// Occurrence xx10_OF_A92
	if ((boolState[failF_OF_A92] == false) && (boolState[required_OF_A92] && boolState[relevant_evt_OF_A92])) 
	{
		 
		if (FIRE_xx10_OF_A92)
		{
			boolState[failF_OF_A92]  =  true;
			FIRE_xx10_OF_A92 = false;
		}
	}

	// Occurrence xx10_OF_A93
	if ((boolState[failF_OF_A93] == false) && (boolState[required_OF_A93] && boolState[relevant_evt_OF_A93])) 
	{
		 
		if (FIRE_xx10_OF_A93)
		{
			boolState[failF_OF_A93]  =  true;
			FIRE_xx10_OF_A93 = false;
		}
	}

	// Occurrence xx10_OF_A96
	if ((boolState[failF_OF_A96] == false) && (boolState[required_OF_A96] && boolState[relevant_evt_OF_A96])) 
	{
		 
		if (FIRE_xx10_OF_A96)
		{
			boolState[failF_OF_A96]  =  true;
			FIRE_xx10_OF_A96 = false;
		}
	}

	// Occurrence xx10_OF_A97
	if ((boolState[failF_OF_A97] == false) && (boolState[required_OF_A97] && boolState[relevant_evt_OF_A97])) 
	{
		 
		if (FIRE_xx10_OF_A97)
		{
			boolState[failF_OF_A97]  =  true;
			FIRE_xx10_OF_A97 = false;
		}
	}

	// Occurrence xx10_OF_f_A52
	if ((boolState[failF_OF_f_A52] == false) && (boolState[required_OF_f_A52] &&  boolState[relevant_evt_OF_f_A52])) 
	{
		 
		if (FIRE_xx10_OF_f_A52)
		{
			boolState[failF_OF_f_A52]  =  true;
			FIRE_xx10_OF_f_A52 = false;
		}
	}

	// Occurrence xx10_OF_f_A53
	if ((boolState[failF_OF_f_A53] == false) && (boolState[required_OF_f_A53] &&  boolState[relevant_evt_OF_f_A53])) 
	{
		 
		if (FIRE_xx10_OF_f_A53)
		{
			boolState[failF_OF_f_A53]  =  true;
			FIRE_xx10_OF_f_A53 = false;
		}
	}

	// Occurrence xx10_OF_f_A54
	if ((boolState[failF_OF_f_A54] == false) && (boolState[required_OF_f_A54] &&  boolState[relevant_evt_OF_f_A54])) 
	{
		 
		if (FIRE_xx10_OF_f_A54)
		{
			boolState[failF_OF_f_A54]  =  true;
			FIRE_xx10_OF_f_A54 = false;
		}
	}

	// Occurrence xx10_OF_f_A55
	if ((boolState[failF_OF_f_A55] == false) && (boolState[required_OF_f_A55] &&  boolState[relevant_evt_OF_f_A55])) 
	{
		 
		if (FIRE_xx10_OF_f_A55)
		{
			boolState[failF_OF_f_A55]  =  true;
			FIRE_xx10_OF_f_A55 = false;
		}
	}

	// Occurrence xx10_OF_f_A56
	if ((boolState[failF_OF_f_A56] == false) && (boolState[required_OF_f_A56] &&  boolState[relevant_evt_OF_f_A56])) 
	{
		 
		if (FIRE_xx10_OF_f_A56)
		{
			boolState[failF_OF_f_A56]  =  true;
			FIRE_xx10_OF_f_A56 = false;
		}
	}

	// Occurrence xx10_OF_f_A57
	if ((boolState[failF_OF_f_A57] == false) && (boolState[required_OF_f_A57] &&  boolState[relevant_evt_OF_f_A57])) 
	{
		 
		if (FIRE_xx10_OF_f_A57)
		{
			boolState[failF_OF_f_A57]  =  true;
			FIRE_xx10_OF_f_A57 = false;
		}
	}

	// Occurrence xx10_OF_f_A58
	if ((boolState[failF_OF_f_A58] == false) && (boolState[required_OF_f_A58] &&  boolState[relevant_evt_OF_f_A58])) 
	{
		 
		if (FIRE_xx10_OF_f_A58)
		{
			boolState[failF_OF_f_A58]  =  true;
			FIRE_xx10_OF_f_A58 = false;
		}
	}

	// Occurrence xx10_OF_f_A60
	if ((boolState[failF_OF_f_A60] == false) && (boolState[required_OF_f_A60] &&  boolState[relevant_evt_OF_f_A60])) 
	{
		 
		if (FIRE_xx10_OF_f_A60)
		{
			boolState[failF_OF_f_A60]  =  true;
			FIRE_xx10_OF_f_A60 = false;
		}
	}

	// Occurrence xx10_OF_f_A61
	if ((boolState[failF_OF_f_A61] == false) && (boolState[required_OF_f_A61] &&  boolState[relevant_evt_OF_f_A61])) 
	{
		 
		if (FIRE_xx10_OF_f_A61)
		{
			boolState[failF_OF_f_A61]  =  true;
			FIRE_xx10_OF_f_A61 = false;
		}
	}

	// Occurrence xx10_OF_f_A63
	if ((boolState[failF_OF_f_A63] == false) && (boolState[required_OF_f_A63] &&  boolState[relevant_evt_OF_f_A63])) 
	{
		 
		if (FIRE_xx10_OF_f_A63)
		{
			boolState[failF_OF_f_A63]  =  true;
			FIRE_xx10_OF_f_A63 = false;
		}
	}

	// Occurrence xx10_OF_f_A64
	if ((boolState[failF_OF_f_A64] == false) && (boolState[required_OF_f_A64] &&  boolState[relevant_evt_OF_f_A64])) 
	{
		 
		if (FIRE_xx10_OF_f_A64)
		{
			boolState[failF_OF_f_A64]  =  true;
			FIRE_xx10_OF_f_A64 = false;
		}
	}

	// Occurrence xx10_OF_f_A66
	if ((boolState[failF_OF_f_A66] == false) && (boolState[required_OF_f_A66] &&  boolState[relevant_evt_OF_f_A66])) 
	{
		 
		if (FIRE_xx10_OF_f_A66)
		{
			boolState[failF_OF_f_A66]  =  true;
			FIRE_xx10_OF_f_A66 = false;
		}
	}

	// Occurrence xx10_OF_f_A67
	if ((boolState[failF_OF_f_A67] == false) && (boolState[required_OF_f_A67] &&  boolState[relevant_evt_OF_f_A67])) 
	{
		 
		if (FIRE_xx10_OF_f_A67)
		{
			boolState[failF_OF_f_A67]  =  true;
			FIRE_xx10_OF_f_A67 = false;
		}
	}

	// Occurrence xx10_OF_f_A68
	if ((boolState[failF_OF_f_A68] == false) && (boolState[required_OF_f_A68] &&  boolState[relevant_evt_OF_f_A68])) 
	{
		 
		if (FIRE_xx10_OF_f_A68)
		{
			boolState[failF_OF_f_A68]  =  true;
			FIRE_xx10_OF_f_A68 = false;
		}
	}

	// Occurrence xx10_OF_f_A69
	if ((boolState[failF_OF_f_A69] == false) && (boolState[required_OF_f_A69] &&  boolState[relevant_evt_OF_f_A69])) 
	{
		 
		if (FIRE_xx10_OF_f_A69)
		{
			boolState[failF_OF_f_A69]  =  true;
			FIRE_xx10_OF_f_A69 = false;
		}
	}

	// Occurrence xx10_OF_f_A70
	if ((boolState[failF_OF_f_A70] == false) && (boolState[required_OF_f_A70] &&  boolState[relevant_evt_OF_f_A70])) 
	{
		 
		if (FIRE_xx10_OF_f_A70)
		{
			boolState[failF_OF_f_A70]  =  true;
			FIRE_xx10_OF_f_A70 = false;
		}
	}

	// Occurrence xx10_OF_f_A71
	if ((boolState[failF_OF_f_A71] == false) && (boolState[required_OF_f_A71] &&  boolState[relevant_evt_OF_f_A71])) 
	{
		 
		if (FIRE_xx10_OF_f_A71)
		{
			boolState[failF_OF_f_A71]  =  true;
			FIRE_xx10_OF_f_A71 = false;
		}
	}

	// Occurrence xx10_OF_f_A72
	if ((boolState[failF_OF_f_A72] == false) && (boolState[required_OF_f_A72] &&  boolState[relevant_evt_OF_f_A72])) 
	{
		 
		if (FIRE_xx10_OF_f_A72)
		{
			boolState[failF_OF_f_A72]  =  true;
			FIRE_xx10_OF_f_A72 = false;
		}
	}

	// Occurrence xx10_OF_f_A73
	if ((boolState[failF_OF_f_A73] == false) && (boolState[required_OF_f_A73] &&  boolState[relevant_evt_OF_f_A73])) 
	{
		 
		if (FIRE_xx10_OF_f_A73)
		{
			boolState[failF_OF_f_A73]  =  true;
			FIRE_xx10_OF_f_A73 = false;
		}
	}

	// Occurrence xx10_OF_f_A74
	if ((boolState[failF_OF_f_A74] == false) && (boolState[required_OF_f_A74] &&  boolState[relevant_evt_OF_f_A74])) 
	{
		 
		if (FIRE_xx10_OF_f_A74)
		{
			boolState[failF_OF_f_A74]  =  true;
			FIRE_xx10_OF_f_A74 = false;
		}
	}

	// Occurrence xx10_OF_f_A75
	if ((boolState[failF_OF_f_A75] == false) && (boolState[required_OF_f_A75] &&  boolState[relevant_evt_OF_f_A75])) 
	{
		 
		if (FIRE_xx10_OF_f_A75)
		{
			boolState[failF_OF_f_A75]  =  true;
			FIRE_xx10_OF_f_A75 = false;
		}
	}

	// Occurrence xx10_OF_f_A76
	if ((boolState[failF_OF_f_A76] == false) && (boolState[required_OF_f_A76] &&  boolState[relevant_evt_OF_f_A76])) 
	{
		 
		if (FIRE_xx10_OF_f_A76)
		{
			boolState[failF_OF_f_A76]  =  true;
			FIRE_xx10_OF_f_A76 = false;
		}
	}

	// Occurrence xx10_OF_f_A77
	if ((boolState[failF_OF_f_A77] == false) && (boolState[required_OF_f_A77] &&  boolState[relevant_evt_OF_f_A77])) 
	{
		 
		if (FIRE_xx10_OF_f_A77)
		{
			boolState[failF_OF_f_A77]  =  true;
			FIRE_xx10_OF_f_A77 = false;
		}
	}

	// Occurrence xx10_OF_f_A81
	if ((boolState[failF_OF_f_A81] == false) && (boolState[required_OF_f_A81] &&  boolState[relevant_evt_OF_f_A81])) 
	{
		 
		if (FIRE_xx10_OF_f_A81)
		{
			boolState[failF_OF_f_A81]  =  true;
			FIRE_xx10_OF_f_A81 = false;
		}
	}

	// Occurrence xx23_OF_i_A52

	if ((boolState[failI_OF_i_A52] == false) && (boolState[to_be_fired_OF_i_A52] &&
	boolState[relevant_evt_OF_i_A52])) 
	{
	
		
		if (FIRE_xx23_OF_i_A52_INS_99) 
		{
			boolState[failI_OF_i_A52]  =  true;
			boolState[already_standby_OF_i_A52]  =  false;
			boolState[already_required_OF_i_A52]  =  false;
			FIRE_xx23_OF_i_A52_INS_99 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A52] == false) && (boolState[to_be_fired_OF_i_A52] &&
	boolState[relevant_evt_OF_i_A52])) 
	{
	
		
		if (FIRE_xx23_OF_i_A52_INS_100) 
		{
			boolState[already_standby_OF_i_A52]  =  false;
			boolState[already_required_OF_i_A52]  =  false;
			FIRE_xx23_OF_i_A52_INS_100 = false;
		}
	
	}
	// Occurrence xx23_OF_i_A53

	if ((boolState[failI_OF_i_A53] == false) && (boolState[to_be_fired_OF_i_A53] &&
	boolState[relevant_evt_OF_i_A53])) 
	{
	
		
		if (FIRE_xx23_OF_i_A53_INS_101) 
		{
			boolState[failI_OF_i_A53]  =  true;
			boolState[already_standby_OF_i_A53]  =  false;
			boolState[already_required_OF_i_A53]  =  false;
			FIRE_xx23_OF_i_A53_INS_101 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A53] == false) && (boolState[to_be_fired_OF_i_A53] &&
	boolState[relevant_evt_OF_i_A53])) 
	{
	
		
		if (FIRE_xx23_OF_i_A53_INS_102) 
		{
			boolState[already_standby_OF_i_A53]  =  false;
			boolState[already_required_OF_i_A53]  =  false;
			FIRE_xx23_OF_i_A53_INS_102 = false;
		}
	
	}
	// Occurrence xx23_OF_i_A54

	if ((boolState[failI_OF_i_A54] == false) && (boolState[to_be_fired_OF_i_A54] &&
	boolState[relevant_evt_OF_i_A54])) 
	{
	
		
		if (FIRE_xx23_OF_i_A54_INS_103) 
		{
			boolState[failI_OF_i_A54]  =  true;
			boolState[already_standby_OF_i_A54]  =  false;
			boolState[already_required_OF_i_A54]  =  false;
			FIRE_xx23_OF_i_A54_INS_103 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A54] == false) && (boolState[to_be_fired_OF_i_A54] &&
	boolState[relevant_evt_OF_i_A54])) 
	{
	
		
		if (FIRE_xx23_OF_i_A54_INS_104) 
		{
			boolState[already_standby_OF_i_A54]  =  false;
			boolState[already_required_OF_i_A54]  =  false;
			FIRE_xx23_OF_i_A54_INS_104 = false;
		}
	
	}
	// Occurrence xx23_OF_i_A55

	if ((boolState[failI_OF_i_A55] == false) && (boolState[to_be_fired_OF_i_A55] &&
	boolState[relevant_evt_OF_i_A55])) 
	{
	
		
		if (FIRE_xx23_OF_i_A55_INS_105) 
		{
			boolState[failI_OF_i_A55]  =  true;
			boolState[already_standby_OF_i_A55]  =  false;
			boolState[already_required_OF_i_A55]  =  false;
			FIRE_xx23_OF_i_A55_INS_105 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A55] == false) && (boolState[to_be_fired_OF_i_A55] &&
	boolState[relevant_evt_OF_i_A55])) 
	{
	
		
		if (FIRE_xx23_OF_i_A55_INS_106) 
		{
			boolState[already_standby_OF_i_A55]  =  false;
			boolState[already_required_OF_i_A55]  =  false;
			FIRE_xx23_OF_i_A55_INS_106 = false;
		}
	
	}
	// Occurrence xx23_OF_i_A56

	if ((boolState[failI_OF_i_A56] == false) && (boolState[to_be_fired_OF_i_A56] &&
	boolState[relevant_evt_OF_i_A56])) 
	{
	
		
		if (FIRE_xx23_OF_i_A56_INS_107) 
		{
			boolState[failI_OF_i_A56]  =  true;
			boolState[already_standby_OF_i_A56]  =  false;
			boolState[already_required_OF_i_A56]  =  false;
			FIRE_xx23_OF_i_A56_INS_107 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A56] == false) && (boolState[to_be_fired_OF_i_A56] &&
	boolState[relevant_evt_OF_i_A56])) 
	{
	
		
		if (FIRE_xx23_OF_i_A56_INS_108) 
		{
			boolState[already_standby_OF_i_A56]  =  false;
			boolState[already_required_OF_i_A56]  =  false;
			FIRE_xx23_OF_i_A56_INS_108 = false;
		}
	
	}
	// Occurrence xx23_OF_i_A57

	if ((boolState[failI_OF_i_A57] == false) && (boolState[to_be_fired_OF_i_A57] &&
	boolState[relevant_evt_OF_i_A57])) 
	{
	
		
		if (FIRE_xx23_OF_i_A57_INS_109) 
		{
			boolState[failI_OF_i_A57]  =  true;
			boolState[already_standby_OF_i_A57]  =  false;
			boolState[already_required_OF_i_A57]  =  false;
			FIRE_xx23_OF_i_A57_INS_109 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A57] == false) && (boolState[to_be_fired_OF_i_A57] &&
	boolState[relevant_evt_OF_i_A57])) 
	{
	
		
		if (FIRE_xx23_OF_i_A57_INS_110) 
		{
			boolState[already_standby_OF_i_A57]  =  false;
			boolState[already_required_OF_i_A57]  =  false;
			FIRE_xx23_OF_i_A57_INS_110 = false;
		}
	
	}
	// Occurrence xx23_OF_i_A58

	if ((boolState[failI_OF_i_A58] == false) && (boolState[to_be_fired_OF_i_A58] &&
	boolState[relevant_evt_OF_i_A58])) 
	{
	
		
		if (FIRE_xx23_OF_i_A58_INS_111) 
		{
			boolState[failI_OF_i_A58]  =  true;
			boolState[already_standby_OF_i_A58]  =  false;
			boolState[already_required_OF_i_A58]  =  false;
			FIRE_xx23_OF_i_A58_INS_111 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A58] == false) && (boolState[to_be_fired_OF_i_A58] &&
	boolState[relevant_evt_OF_i_A58])) 
	{
	
		
		if (FIRE_xx23_OF_i_A58_INS_112) 
		{
			boolState[already_standby_OF_i_A58]  =  false;
			boolState[already_required_OF_i_A58]  =  false;
			FIRE_xx23_OF_i_A58_INS_112 = false;
		}
	
	}
	// Occurrence xx23_OF_i_A60

	if ((boolState[failI_OF_i_A60] == false) && (boolState[to_be_fired_OF_i_A60] &&
	boolState[relevant_evt_OF_i_A60])) 
	{
	
		
		if (FIRE_xx23_OF_i_A60_INS_113) 
		{
			boolState[failI_OF_i_A60]  =  true;
			boolState[already_standby_OF_i_A60]  =  false;
			boolState[already_required_OF_i_A60]  =  false;
			FIRE_xx23_OF_i_A60_INS_113 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A60] == false) && (boolState[to_be_fired_OF_i_A60] &&
	boolState[relevant_evt_OF_i_A60])) 
	{
	
		
		if (FIRE_xx23_OF_i_A60_INS_114) 
		{
			boolState[already_standby_OF_i_A60]  =  false;
			boolState[already_required_OF_i_A60]  =  false;
			FIRE_xx23_OF_i_A60_INS_114 = false;
		}
	
	}
	// Occurrence xx23_OF_i_A61

	if ((boolState[failI_OF_i_A61] == false) && (boolState[to_be_fired_OF_i_A61] &&
	boolState[relevant_evt_OF_i_A61])) 
	{
	
		
		if (FIRE_xx23_OF_i_A61_INS_115) 
		{
			boolState[failI_OF_i_A61]  =  true;
			boolState[already_standby_OF_i_A61]  =  false;
			boolState[already_required_OF_i_A61]  =  false;
			FIRE_xx23_OF_i_A61_INS_115 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A61] == false) && (boolState[to_be_fired_OF_i_A61] &&
	boolState[relevant_evt_OF_i_A61])) 
	{
	
		
		if (FIRE_xx23_OF_i_A61_INS_116) 
		{
			boolState[already_standby_OF_i_A61]  =  false;
			boolState[already_required_OF_i_A61]  =  false;
			FIRE_xx23_OF_i_A61_INS_116 = false;
		}
	
	}
	// Occurrence xx23_OF_i_A63

	if ((boolState[failI_OF_i_A63] == false) && (boolState[to_be_fired_OF_i_A63] &&
	boolState[relevant_evt_OF_i_A63])) 
	{
	
		
		if (FIRE_xx23_OF_i_A63_INS_117) 
		{
			boolState[failI_OF_i_A63]  =  true;
			boolState[already_standby_OF_i_A63]  =  false;
			boolState[already_required_OF_i_A63]  =  false;
			FIRE_xx23_OF_i_A63_INS_117 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A63] == false) && (boolState[to_be_fired_OF_i_A63] &&
	boolState[relevant_evt_OF_i_A63])) 
	{
	
		
		if (FIRE_xx23_OF_i_A63_INS_118) 
		{
			boolState[already_standby_OF_i_A63]  =  false;
			boolState[already_required_OF_i_A63]  =  false;
			FIRE_xx23_OF_i_A63_INS_118 = false;
		}
	
	}
	// Occurrence xx23_OF_i_A64

	if ((boolState[failI_OF_i_A64] == false) && (boolState[to_be_fired_OF_i_A64] &&
	boolState[relevant_evt_OF_i_A64])) 
	{
	
		
		if (FIRE_xx23_OF_i_A64_INS_119) 
		{
			boolState[failI_OF_i_A64]  =  true;
			boolState[already_standby_OF_i_A64]  =  false;
			boolState[already_required_OF_i_A64]  =  false;
			FIRE_xx23_OF_i_A64_INS_119 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A64] == false) && (boolState[to_be_fired_OF_i_A64] &&
	boolState[relevant_evt_OF_i_A64])) 
	{
	
		
		if (FIRE_xx23_OF_i_A64_INS_120) 
		{
			boolState[already_standby_OF_i_A64]  =  false;
			boolState[already_required_OF_i_A64]  =  false;
			FIRE_xx23_OF_i_A64_INS_120 = false;
		}
	
	}
	// Occurrence xx23_OF_i_A66

	if ((boolState[failI_OF_i_A66] == false) && (boolState[to_be_fired_OF_i_A66] &&
	boolState[relevant_evt_OF_i_A66])) 
	{
	
		
		if (FIRE_xx23_OF_i_A66_INS_121) 
		{
			boolState[failI_OF_i_A66]  =  true;
			boolState[already_standby_OF_i_A66]  =  false;
			boolState[already_required_OF_i_A66]  =  false;
			FIRE_xx23_OF_i_A66_INS_121 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A66] == false) && (boolState[to_be_fired_OF_i_A66] &&
	boolState[relevant_evt_OF_i_A66])) 
	{
	
		
		if (FIRE_xx23_OF_i_A66_INS_122) 
		{
			boolState[already_standby_OF_i_A66]  =  false;
			boolState[already_required_OF_i_A66]  =  false;
			FIRE_xx23_OF_i_A66_INS_122 = false;
		}
	
	}
	// Occurrence xx23_OF_i_A67

	if ((boolState[failI_OF_i_A67] == false) && (boolState[to_be_fired_OF_i_A67] &&
	boolState[relevant_evt_OF_i_A67])) 
	{
	
		
		if (FIRE_xx23_OF_i_A67_INS_123) 
		{
			boolState[failI_OF_i_A67]  =  true;
			boolState[already_standby_OF_i_A67]  =  false;
			boolState[already_required_OF_i_A67]  =  false;
			FIRE_xx23_OF_i_A67_INS_123 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A67] == false) && (boolState[to_be_fired_OF_i_A67] &&
	boolState[relevant_evt_OF_i_A67])) 
	{
	
		
		if (FIRE_xx23_OF_i_A67_INS_124) 
		{
			boolState[already_standby_OF_i_A67]  =  false;
			boolState[already_required_OF_i_A67]  =  false;
			FIRE_xx23_OF_i_A67_INS_124 = false;
		}
	
	}
	// Occurrence xx23_OF_i_A68

	if ((boolState[failI_OF_i_A68] == false) && (boolState[to_be_fired_OF_i_A68] &&
	boolState[relevant_evt_OF_i_A68])) 
	{
	
		
		if (FIRE_xx23_OF_i_A68_INS_125) 
		{
			boolState[failI_OF_i_A68]  =  true;
			boolState[already_standby_OF_i_A68]  =  false;
			boolState[already_required_OF_i_A68]  =  false;
			FIRE_xx23_OF_i_A68_INS_125 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A68] == false) && (boolState[to_be_fired_OF_i_A68] &&
	boolState[relevant_evt_OF_i_A68])) 
	{
	
		
		if (FIRE_xx23_OF_i_A68_INS_126) 
		{
			boolState[already_standby_OF_i_A68]  =  false;
			boolState[already_required_OF_i_A68]  =  false;
			FIRE_xx23_OF_i_A68_INS_126 = false;
		}
	
	}
	// Occurrence xx23_OF_i_A69

	if ((boolState[failI_OF_i_A69] == false) && (boolState[to_be_fired_OF_i_A69] &&
	boolState[relevant_evt_OF_i_A69])) 
	{
	
		
		if (FIRE_xx23_OF_i_A69_INS_127) 
		{
			boolState[failI_OF_i_A69]  =  true;
			boolState[already_standby_OF_i_A69]  =  false;
			boolState[already_required_OF_i_A69]  =  false;
			FIRE_xx23_OF_i_A69_INS_127 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A69] == false) && (boolState[to_be_fired_OF_i_A69] &&
	boolState[relevant_evt_OF_i_A69])) 
	{
	
		
		if (FIRE_xx23_OF_i_A69_INS_128) 
		{
			boolState[already_standby_OF_i_A69]  =  false;
			boolState[already_required_OF_i_A69]  =  false;
			FIRE_xx23_OF_i_A69_INS_128 = false;
		}
	
	}
	// Occurrence xx23_OF_i_A70

	if ((boolState[failI_OF_i_A70] == false) && (boolState[to_be_fired_OF_i_A70] &&
	boolState[relevant_evt_OF_i_A70])) 
	{
	
		
		if (FIRE_xx23_OF_i_A70_INS_129) 
		{
			boolState[failI_OF_i_A70]  =  true;
			boolState[already_standby_OF_i_A70]  =  false;
			boolState[already_required_OF_i_A70]  =  false;
			FIRE_xx23_OF_i_A70_INS_129 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A70] == false) && (boolState[to_be_fired_OF_i_A70] &&
	boolState[relevant_evt_OF_i_A70])) 
	{
	
		
		if (FIRE_xx23_OF_i_A70_INS_130) 
		{
			boolState[already_standby_OF_i_A70]  =  false;
			boolState[already_required_OF_i_A70]  =  false;
			FIRE_xx23_OF_i_A70_INS_130 = false;
		}
	
	}
	// Occurrence xx23_OF_i_A71

	if ((boolState[failI_OF_i_A71] == false) && (boolState[to_be_fired_OF_i_A71] &&
	boolState[relevant_evt_OF_i_A71])) 
	{
	
		
		if (FIRE_xx23_OF_i_A71_INS_131) 
		{
			boolState[failI_OF_i_A71]  =  true;
			boolState[already_standby_OF_i_A71]  =  false;
			boolState[already_required_OF_i_A71]  =  false;
			FIRE_xx23_OF_i_A71_INS_131 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A71] == false) && (boolState[to_be_fired_OF_i_A71] &&
	boolState[relevant_evt_OF_i_A71])) 
	{
	
		
		if (FIRE_xx23_OF_i_A71_INS_132) 
		{
			boolState[already_standby_OF_i_A71]  =  false;
			boolState[already_required_OF_i_A71]  =  false;
			FIRE_xx23_OF_i_A71_INS_132 = false;
		}
	
	}
	// Occurrence xx23_OF_i_A72

	if ((boolState[failI_OF_i_A72] == false) && (boolState[to_be_fired_OF_i_A72] &&
	boolState[relevant_evt_OF_i_A72])) 
	{
	
		
		if (FIRE_xx23_OF_i_A72_INS_133) 
		{
			boolState[failI_OF_i_A72]  =  true;
			boolState[already_standby_OF_i_A72]  =  false;
			boolState[already_required_OF_i_A72]  =  false;
			FIRE_xx23_OF_i_A72_INS_133 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A72] == false) && (boolState[to_be_fired_OF_i_A72] &&
	boolState[relevant_evt_OF_i_A72])) 
	{
	
		
		if (FIRE_xx23_OF_i_A72_INS_134) 
		{
			boolState[already_standby_OF_i_A72]  =  false;
			boolState[already_required_OF_i_A72]  =  false;
			FIRE_xx23_OF_i_A72_INS_134 = false;
		}
	
	}
	// Occurrence xx23_OF_i_A73

	if ((boolState[failI_OF_i_A73] == false) && (boolState[to_be_fired_OF_i_A73] &&
	boolState[relevant_evt_OF_i_A73])) 
	{
	
		
		if (FIRE_xx23_OF_i_A73_INS_135) 
		{
			boolState[failI_OF_i_A73]  =  true;
			boolState[already_standby_OF_i_A73]  =  false;
			boolState[already_required_OF_i_A73]  =  false;
			FIRE_xx23_OF_i_A73_INS_135 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A73] == false) && (boolState[to_be_fired_OF_i_A73] &&
	boolState[relevant_evt_OF_i_A73])) 
	{
	
		
		if (FIRE_xx23_OF_i_A73_INS_136) 
		{
			boolState[already_standby_OF_i_A73]  =  false;
			boolState[already_required_OF_i_A73]  =  false;
			FIRE_xx23_OF_i_A73_INS_136 = false;
		}
	
	}
	// Occurrence xx23_OF_i_A74

	if ((boolState[failI_OF_i_A74] == false) && (boolState[to_be_fired_OF_i_A74] &&
	boolState[relevant_evt_OF_i_A74])) 
	{
	
		
		if (FIRE_xx23_OF_i_A74_INS_137) 
		{
			boolState[failI_OF_i_A74]  =  true;
			boolState[already_standby_OF_i_A74]  =  false;
			boolState[already_required_OF_i_A74]  =  false;
			FIRE_xx23_OF_i_A74_INS_137 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A74] == false) && (boolState[to_be_fired_OF_i_A74] &&
	boolState[relevant_evt_OF_i_A74])) 
	{
	
		
		if (FIRE_xx23_OF_i_A74_INS_138) 
		{
			boolState[already_standby_OF_i_A74]  =  false;
			boolState[already_required_OF_i_A74]  =  false;
			FIRE_xx23_OF_i_A74_INS_138 = false;
		}
	
	}
	// Occurrence xx23_OF_i_A75

	if ((boolState[failI_OF_i_A75] == false) && (boolState[to_be_fired_OF_i_A75] &&
	boolState[relevant_evt_OF_i_A75])) 
	{
	
		
		if (FIRE_xx23_OF_i_A75_INS_139) 
		{
			boolState[failI_OF_i_A75]  =  true;
			boolState[already_standby_OF_i_A75]  =  false;
			boolState[already_required_OF_i_A75]  =  false;
			FIRE_xx23_OF_i_A75_INS_139 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A75] == false) && (boolState[to_be_fired_OF_i_A75] &&
	boolState[relevant_evt_OF_i_A75])) 
	{
	
		
		if (FIRE_xx23_OF_i_A75_INS_140) 
		{
			boolState[already_standby_OF_i_A75]  =  false;
			boolState[already_required_OF_i_A75]  =  false;
			FIRE_xx23_OF_i_A75_INS_140 = false;
		}
	
	}
	// Occurrence xx23_OF_i_A76

	if ((boolState[failI_OF_i_A76] == false) && (boolState[to_be_fired_OF_i_A76] &&
	boolState[relevant_evt_OF_i_A76])) 
	{
	
		
		if (FIRE_xx23_OF_i_A76_INS_141) 
		{
			boolState[failI_OF_i_A76]  =  true;
			boolState[already_standby_OF_i_A76]  =  false;
			boolState[already_required_OF_i_A76]  =  false;
			FIRE_xx23_OF_i_A76_INS_141 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A76] == false) && (boolState[to_be_fired_OF_i_A76] &&
	boolState[relevant_evt_OF_i_A76])) 
	{
	
		
		if (FIRE_xx23_OF_i_A76_INS_142) 
		{
			boolState[already_standby_OF_i_A76]  =  false;
			boolState[already_required_OF_i_A76]  =  false;
			FIRE_xx23_OF_i_A76_INS_142 = false;
		}
	
	}
	// Occurrence xx23_OF_i_A77

	if ((boolState[failI_OF_i_A77] == false) && (boolState[to_be_fired_OF_i_A77] &&
	boolState[relevant_evt_OF_i_A77])) 
	{
	
		
		if (FIRE_xx23_OF_i_A77_INS_143) 
		{
			boolState[failI_OF_i_A77]  =  true;
			boolState[already_standby_OF_i_A77]  =  false;
			boolState[already_required_OF_i_A77]  =  false;
			FIRE_xx23_OF_i_A77_INS_143 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A77] == false) && (boolState[to_be_fired_OF_i_A77] &&
	boolState[relevant_evt_OF_i_A77])) 
	{
	
		
		if (FIRE_xx23_OF_i_A77_INS_144) 
		{
			boolState[already_standby_OF_i_A77]  =  false;
			boolState[already_required_OF_i_A77]  =  false;
			FIRE_xx23_OF_i_A77_INS_144 = false;
		}
	
	}
	// Occurrence xx23_OF_i_A81

	if ((boolState[failI_OF_i_A81] == false) && (boolState[to_be_fired_OF_i_A81] &&
	boolState[relevant_evt_OF_i_A81])) 
	{
	
		
		if (FIRE_xx23_OF_i_A81_INS_145) 
		{
			boolState[failI_OF_i_A81]  =  true;
			boolState[already_standby_OF_i_A81]  =  false;
			boolState[already_required_OF_i_A81]  =  false;
			FIRE_xx23_OF_i_A81_INS_145 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A81] == false) && (boolState[to_be_fired_OF_i_A81] &&
	boolState[relevant_evt_OF_i_A81])) 
	{
	
		
		if (FIRE_xx23_OF_i_A81_INS_146) 
		{
			boolState[already_standby_OF_i_A81]  =  false;
			boolState[already_required_OF_i_A81]  =  false;
			FIRE_xx23_OF_i_A81_INS_146 = false;
		}
	
	}
}

std::vector<std::tuple<int, double, std::string, int>> storm::figaro::FigaroProgram_vgs_8_Trim_Article_No_repair::showFireableOccurrences()
{
	std::vector<std::tuple<int, double, std::string, int>> list = {};
	//cout <<"\n==================== List of fireable occurrences :  ====================" << endl;

	if ((boolState[failI_OF_i_A52] == false) && (boolState[to_be_fired_OF_i_A52] &&	boolState[relevant_evt_OF_i_A52]))
	{
		//cout << "99 :  INS_SUB_COUNT (1) |FAULT | failI  LABEL \"instantaneous failure i_A52\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A52]  =  TRUE,already_standby_OF_i_A52  =  FALSE,already_required_OF_i_A52  =  FALSE" << endl;
		list.push_back(make_tuple(99, 1, "INS", 1));
	}
	if ((boolState[failI_OF_i_A52] == false) && (boolState[to_be_fired_OF_i_A52] &&	boolState[relevant_evt_OF_i_A52]))
	{
		//cout << "100 :  INS_SUB_COUNT (1) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A52]  =  FALSE,already_required_OF_i_A52  =  FALSE" << endl;
		list.push_back(make_tuple(100, 0, "INS", 1));
	}
	if ((boolState[failI_OF_i_A53] == false) && (boolState[to_be_fired_OF_i_A53] &&	boolState[relevant_evt_OF_i_A53]))
	{
		//cout << "101 :  INS_SUB_COUNT (2) |FAULT | failI  LABEL \"instantaneous failure i_A53\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A53]  =  TRUE,already_standby_OF_i_A53  =  FALSE,already_required_OF_i_A53  =  FALSE" << endl;
		list.push_back(make_tuple(101, 1, "INS", 2));
	}
	if ((boolState[failI_OF_i_A53] == false) && (boolState[to_be_fired_OF_i_A53] &&	boolState[relevant_evt_OF_i_A53]))
	{
		//cout << "102 :  INS_SUB_COUNT (2) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A53]  =  FALSE,already_required_OF_i_A53  =  FALSE" << endl;
		list.push_back(make_tuple(102, 0, "INS", 2));
	}
	if ((boolState[failI_OF_i_A54] == false) && (boolState[to_be_fired_OF_i_A54] &&	boolState[relevant_evt_OF_i_A54]))
	{
		//cout << "103 :  INS_SUB_COUNT (3) |FAULT | failI  LABEL \"instantaneous failure i_A54\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A54]  =  TRUE,already_standby_OF_i_A54  =  FALSE,already_required_OF_i_A54  =  FALSE" << endl;
		list.push_back(make_tuple(103, 1, "INS", 3));
	}
	if ((boolState[failI_OF_i_A54] == false) && (boolState[to_be_fired_OF_i_A54] &&	boolState[relevant_evt_OF_i_A54]))
	{
		//cout << "104 :  INS_SUB_COUNT (3) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A54]  =  FALSE,already_required_OF_i_A54  =  FALSE" << endl;
		list.push_back(make_tuple(104, 0, "INS", 3));
	}
	if ((boolState[failI_OF_i_A55] == false) && (boolState[to_be_fired_OF_i_A55] &&	boolState[relevant_evt_OF_i_A55]))
	{
		//cout << "105 :  INS_SUB_COUNT (4) |FAULT | failI  LABEL \"instantaneous failure i_A55\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A55]  =  TRUE,already_standby_OF_i_A55  =  FALSE,already_required_OF_i_A55  =  FALSE" << endl;
		list.push_back(make_tuple(105, 1, "INS", 4));
	}
	if ((boolState[failI_OF_i_A55] == false) && (boolState[to_be_fired_OF_i_A55] &&	boolState[relevant_evt_OF_i_A55]))
	{
		//cout << "106 :  INS_SUB_COUNT (4) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A55]  =  FALSE,already_required_OF_i_A55  =  FALSE" << endl;
		list.push_back(make_tuple(106, 0, "INS", 4));
	}
	if ((boolState[failI_OF_i_A56] == false) && (boolState[to_be_fired_OF_i_A56] &&	boolState[relevant_evt_OF_i_A56]))
	{
		//cout << "107 :  INS_SUB_COUNT (5) |FAULT | failI  LABEL \"instantaneous failure i_A56\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A56]  =  TRUE,already_standby_OF_i_A56  =  FALSE,already_required_OF_i_A56  =  FALSE" << endl;
		list.push_back(make_tuple(107, 1, "INS", 5));
	}
	if ((boolState[failI_OF_i_A56] == false) && (boolState[to_be_fired_OF_i_A56] &&	boolState[relevant_evt_OF_i_A56]))
	{
		//cout << "108 :  INS_SUB_COUNT (5) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A56]  =  FALSE,already_required_OF_i_A56  =  FALSE" << endl;
		list.push_back(make_tuple(108, 0, "INS", 5));
	}
	if ((boolState[failI_OF_i_A57] == false) && (boolState[to_be_fired_OF_i_A57] &&	boolState[relevant_evt_OF_i_A57]))
	{
		//cout << "109 :  INS_SUB_COUNT (6) |FAULT | failI  LABEL \"instantaneous failure i_A57\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A57]  =  TRUE,already_standby_OF_i_A57  =  FALSE,already_required_OF_i_A57  =  FALSE" << endl;
		list.push_back(make_tuple(109, 1, "INS", 6));
	}
	if ((boolState[failI_OF_i_A57] == false) && (boolState[to_be_fired_OF_i_A57] &&	boolState[relevant_evt_OF_i_A57]))
	{
		//cout << "110 :  INS_SUB_COUNT (6) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A57]  =  FALSE,already_required_OF_i_A57  =  FALSE" << endl;
		list.push_back(make_tuple(110, 0, "INS", 6));
	}
	if ((boolState[failI_OF_i_A58] == false) && (boolState[to_be_fired_OF_i_A58] &&	boolState[relevant_evt_OF_i_A58]))
	{
		//cout << "111 :  INS_SUB_COUNT (7) |FAULT | failI  LABEL \"instantaneous failure i_A58\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A58]  =  TRUE,already_standby_OF_i_A58  =  FALSE,already_required_OF_i_A58  =  FALSE" << endl;
		list.push_back(make_tuple(111, 1, "INS", 7));
	}
	if ((boolState[failI_OF_i_A58] == false) && (boolState[to_be_fired_OF_i_A58] &&	boolState[relevant_evt_OF_i_A58]))
	{
		//cout << "112 :  INS_SUB_COUNT (7) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A58]  =  FALSE,already_required_OF_i_A58  =  FALSE" << endl;
		list.push_back(make_tuple(112, 0, "INS", 7));
	}
	if ((boolState[failI_OF_i_A60] == false) && (boolState[to_be_fired_OF_i_A60] &&	boolState[relevant_evt_OF_i_A60]))
	{
		//cout << "113 :  INS_SUB_COUNT (8) |FAULT | failI  LABEL \"instantaneous failure i_A60\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A60]  =  TRUE,already_standby_OF_i_A60  =  FALSE,already_required_OF_i_A60  =  FALSE" << endl;
		list.push_back(make_tuple(113, 1, "INS", 8));
	}
	if ((boolState[failI_OF_i_A60] == false) && (boolState[to_be_fired_OF_i_A60] &&	boolState[relevant_evt_OF_i_A60]))
	{
		//cout << "114 :  INS_SUB_COUNT (8) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A60]  =  FALSE,already_required_OF_i_A60  =  FALSE" << endl;
		list.push_back(make_tuple(114, 0, "INS", 8));
	}
	if ((boolState[failI_OF_i_A61] == false) && (boolState[to_be_fired_OF_i_A61] &&	boolState[relevant_evt_OF_i_A61]))
	{
		//cout << "115 :  INS_SUB_COUNT (9) |FAULT | failI  LABEL \"instantaneous failure i_A61\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A61]  =  TRUE,already_standby_OF_i_A61  =  FALSE,already_required_OF_i_A61  =  FALSE" << endl;
		list.push_back(make_tuple(115, 1, "INS", 9));
	}
	if ((boolState[failI_OF_i_A61] == false) && (boolState[to_be_fired_OF_i_A61] &&	boolState[relevant_evt_OF_i_A61]))
	{
		//cout << "116 :  INS_SUB_COUNT (9) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A61]  =  FALSE,already_required_OF_i_A61  =  FALSE" << endl;
		list.push_back(make_tuple(116, 0, "INS", 9));
	}
	if ((boolState[failI_OF_i_A63] == false) && (boolState[to_be_fired_OF_i_A63] &&	boolState[relevant_evt_OF_i_A63]))
	{
		//cout << "117 :  INS_SUB_COUNT (10) |FAULT | failI  LABEL \"instantaneous failure i_A63\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A63]  =  TRUE,already_standby_OF_i_A63  =  FALSE,already_required_OF_i_A63  =  FALSE" << endl;
		list.push_back(make_tuple(117, 1, "INS", 10));
	}
	if ((boolState[failI_OF_i_A63] == false) && (boolState[to_be_fired_OF_i_A63] &&	boolState[relevant_evt_OF_i_A63]))
	{
		//cout << "118 :  INS_SUB_COUNT (10) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A63]  =  FALSE,already_required_OF_i_A63  =  FALSE" << endl;
		list.push_back(make_tuple(118, 0, "INS", 10));
	}
	if ((boolState[failI_OF_i_A64] == false) && (boolState[to_be_fired_OF_i_A64] &&	boolState[relevant_evt_OF_i_A64]))
	{
		//cout << "119 :  INS_SUB_COUNT (11) |FAULT | failI  LABEL \"instantaneous failure i_A64\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A64]  =  TRUE,already_standby_OF_i_A64  =  FALSE,already_required_OF_i_A64  =  FALSE" << endl;
		list.push_back(make_tuple(119, 1, "INS", 11));
	}
	if ((boolState[failI_OF_i_A64] == false) && (boolState[to_be_fired_OF_i_A64] &&	boolState[relevant_evt_OF_i_A64]))
	{
		//cout << "120 :  INS_SUB_COUNT (11) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A64]  =  FALSE,already_required_OF_i_A64  =  FALSE" << endl;
		list.push_back(make_tuple(120, 0, "INS", 11));
	}
	if ((boolState[failI_OF_i_A66] == false) && (boolState[to_be_fired_OF_i_A66] &&	boolState[relevant_evt_OF_i_A66]))
	{
		//cout << "121 :  INS_SUB_COUNT (12) |FAULT | failI  LABEL \"instantaneous failure i_A66\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A66]  =  TRUE,already_standby_OF_i_A66  =  FALSE,already_required_OF_i_A66  =  FALSE" << endl;
		list.push_back(make_tuple(121, 1, "INS", 12));
	}
	if ((boolState[failI_OF_i_A66] == false) && (boolState[to_be_fired_OF_i_A66] &&	boolState[relevant_evt_OF_i_A66]))
	{
		//cout << "122 :  INS_SUB_COUNT (12) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A66]  =  FALSE,already_required_OF_i_A66  =  FALSE" << endl;
		list.push_back(make_tuple(122, 0, "INS", 12));
	}
	if ((boolState[failI_OF_i_A67] == false) && (boolState[to_be_fired_OF_i_A67] &&	boolState[relevant_evt_OF_i_A67]))
	{
		//cout << "123 :  INS_SUB_COUNT (13) |FAULT | failI  LABEL \"instantaneous failure i_A67\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A67]  =  TRUE,already_standby_OF_i_A67  =  FALSE,already_required_OF_i_A67  =  FALSE" << endl;
		list.push_back(make_tuple(123, 1, "INS", 13));
	}
	if ((boolState[failI_OF_i_A67] == false) && (boolState[to_be_fired_OF_i_A67] &&	boolState[relevant_evt_OF_i_A67]))
	{
		//cout << "124 :  INS_SUB_COUNT (13) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A67]  =  FALSE,already_required_OF_i_A67  =  FALSE" << endl;
		list.push_back(make_tuple(124, 0, "INS", 13));
	}
	if ((boolState[failI_OF_i_A68] == false) && (boolState[to_be_fired_OF_i_A68] &&	boolState[relevant_evt_OF_i_A68]))
	{
		//cout << "125 :  INS_SUB_COUNT (14) |FAULT | failI  LABEL \"instantaneous failure i_A68\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A68]  =  TRUE,already_standby_OF_i_A68  =  FALSE,already_required_OF_i_A68  =  FALSE" << endl;
		list.push_back(make_tuple(125, 1, "INS", 14));
	}
	if ((boolState[failI_OF_i_A68] == false) && (boolState[to_be_fired_OF_i_A68] &&	boolState[relevant_evt_OF_i_A68]))
	{
		//cout << "126 :  INS_SUB_COUNT (14) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A68]  =  FALSE,already_required_OF_i_A68  =  FALSE" << endl;
		list.push_back(make_tuple(126, 0, "INS", 14));
	}
	if ((boolState[failI_OF_i_A69] == false) && (boolState[to_be_fired_OF_i_A69] &&	boolState[relevant_evt_OF_i_A69]))
	{
		//cout << "127 :  INS_SUB_COUNT (15) |FAULT | failI  LABEL \"instantaneous failure i_A69\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A69]  =  TRUE,already_standby_OF_i_A69  =  FALSE,already_required_OF_i_A69  =  FALSE" << endl;
		list.push_back(make_tuple(127, 1, "INS", 15));
	}
	if ((boolState[failI_OF_i_A69] == false) && (boolState[to_be_fired_OF_i_A69] &&	boolState[relevant_evt_OF_i_A69]))
	{
		//cout << "128 :  INS_SUB_COUNT (15) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A69]  =  FALSE,already_required_OF_i_A69  =  FALSE" << endl;
		list.push_back(make_tuple(128, 0, "INS", 15));
	}
	if ((boolState[failI_OF_i_A70] == false) && (boolState[to_be_fired_OF_i_A70] &&	boolState[relevant_evt_OF_i_A70]))
	{
		//cout << "129 :  INS_SUB_COUNT (16) |FAULT | failI  LABEL \"instantaneous failure i_A70\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A70]  =  TRUE,already_standby_OF_i_A70  =  FALSE,already_required_OF_i_A70  =  FALSE" << endl;
		list.push_back(make_tuple(129, 1, "INS", 16));
	}
	if ((boolState[failI_OF_i_A70] == false) && (boolState[to_be_fired_OF_i_A70] &&	boolState[relevant_evt_OF_i_A70]))
	{
		//cout << "130 :  INS_SUB_COUNT (16) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A70]  =  FALSE,already_required_OF_i_A70  =  FALSE" << endl;
		list.push_back(make_tuple(130, 0, "INS", 16));
	}
	if ((boolState[failI_OF_i_A71] == false) && (boolState[to_be_fired_OF_i_A71] &&	boolState[relevant_evt_OF_i_A71]))
	{
		//cout << "131 :  INS_SUB_COUNT (17) |FAULT | failI  LABEL \"instantaneous failure i_A71\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A71]  =  TRUE,already_standby_OF_i_A71  =  FALSE,already_required_OF_i_A71  =  FALSE" << endl;
		list.push_back(make_tuple(131, 1, "INS", 17));
	}
	if ((boolState[failI_OF_i_A71] == false) && (boolState[to_be_fired_OF_i_A71] &&	boolState[relevant_evt_OF_i_A71]))
	{
		//cout << "132 :  INS_SUB_COUNT (17) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A71]  =  FALSE,already_required_OF_i_A71  =  FALSE" << endl;
		list.push_back(make_tuple(132, 0, "INS", 17));
	}
	if ((boolState[failI_OF_i_A72] == false) && (boolState[to_be_fired_OF_i_A72] &&	boolState[relevant_evt_OF_i_A72]))
	{
		//cout << "133 :  INS_SUB_COUNT (18) |FAULT | failI  LABEL \"instantaneous failure i_A72\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A72]  =  TRUE,already_standby_OF_i_A72  =  FALSE,already_required_OF_i_A72  =  FALSE" << endl;
		list.push_back(make_tuple(133, 1, "INS", 18));
	}
	if ((boolState[failI_OF_i_A72] == false) && (boolState[to_be_fired_OF_i_A72] &&	boolState[relevant_evt_OF_i_A72]))
	{
		//cout << "134 :  INS_SUB_COUNT (18) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A72]  =  FALSE,already_required_OF_i_A72  =  FALSE" << endl;
		list.push_back(make_tuple(134, 0, "INS", 18));
	}
	if ((boolState[failI_OF_i_A73] == false) && (boolState[to_be_fired_OF_i_A73] &&	boolState[relevant_evt_OF_i_A73]))
	{
		//cout << "135 :  INS_SUB_COUNT (19) |FAULT | failI  LABEL \"instantaneous failure i_A73\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A73]  =  TRUE,already_standby_OF_i_A73  =  FALSE,already_required_OF_i_A73  =  FALSE" << endl;
		list.push_back(make_tuple(135, 1, "INS", 19));
	}
	if ((boolState[failI_OF_i_A73] == false) && (boolState[to_be_fired_OF_i_A73] &&	boolState[relevant_evt_OF_i_A73]))
	{
		//cout << "136 :  INS_SUB_COUNT (19) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A73]  =  FALSE,already_required_OF_i_A73  =  FALSE" << endl;
		list.push_back(make_tuple(136, 0, "INS", 19));
	}
	if ((boolState[failI_OF_i_A74] == false) && (boolState[to_be_fired_OF_i_A74] &&	boolState[relevant_evt_OF_i_A74]))
	{
		//cout << "137 :  INS_SUB_COUNT (20) |FAULT | failI  LABEL \"instantaneous failure i_A74\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A74]  =  TRUE,already_standby_OF_i_A74  =  FALSE,already_required_OF_i_A74  =  FALSE" << endl;
		list.push_back(make_tuple(137, 1, "INS", 20));
	}
	if ((boolState[failI_OF_i_A74] == false) && (boolState[to_be_fired_OF_i_A74] &&	boolState[relevant_evt_OF_i_A74]))
	{
		//cout << "138 :  INS_SUB_COUNT (20) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A74]  =  FALSE,already_required_OF_i_A74  =  FALSE" << endl;
		list.push_back(make_tuple(138, 0, "INS", 20));
	}
	if ((boolState[failI_OF_i_A75] == false) && (boolState[to_be_fired_OF_i_A75] &&	boolState[relevant_evt_OF_i_A75]))
	{
		//cout << "139 :  INS_SUB_COUNT (21) |FAULT | failI  LABEL \"instantaneous failure i_A75\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A75]  =  TRUE,already_standby_OF_i_A75  =  FALSE,already_required_OF_i_A75  =  FALSE" << endl;
		list.push_back(make_tuple(139, 1, "INS", 21));
	}
	if ((boolState[failI_OF_i_A75] == false) && (boolState[to_be_fired_OF_i_A75] &&	boolState[relevant_evt_OF_i_A75]))
	{
		//cout << "140 :  INS_SUB_COUNT (21) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A75]  =  FALSE,already_required_OF_i_A75  =  FALSE" << endl;
		list.push_back(make_tuple(140, 0, "INS", 21));
	}
	if ((boolState[failI_OF_i_A76] == false) && (boolState[to_be_fired_OF_i_A76] &&	boolState[relevant_evt_OF_i_A76]))
	{
		//cout << "141 :  INS_SUB_COUNT (22) |FAULT | failI  LABEL \"instantaneous failure i_A76\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A76]  =  TRUE,already_standby_OF_i_A76  =  FALSE,already_required_OF_i_A76  =  FALSE" << endl;
		list.push_back(make_tuple(141, 1, "INS", 22));
	}
	if ((boolState[failI_OF_i_A76] == false) && (boolState[to_be_fired_OF_i_A76] &&	boolState[relevant_evt_OF_i_A76]))
	{
		//cout << "142 :  INS_SUB_COUNT (22) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A76]  =  FALSE,already_required_OF_i_A76  =  FALSE" << endl;
		list.push_back(make_tuple(142, 0, "INS", 22));
	}
	if ((boolState[failI_OF_i_A77] == false) && (boolState[to_be_fired_OF_i_A77] &&	boolState[relevant_evt_OF_i_A77]))
	{
		//cout << "143 :  INS_SUB_COUNT (23) |FAULT | failI  LABEL \"instantaneous failure i_A77\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A77]  =  TRUE,already_standby_OF_i_A77  =  FALSE,already_required_OF_i_A77  =  FALSE" << endl;
		list.push_back(make_tuple(143, 1, "INS", 23));
	}
	if ((boolState[failI_OF_i_A77] == false) && (boolState[to_be_fired_OF_i_A77] &&	boolState[relevant_evt_OF_i_A77]))
	{
		//cout << "144 :  INS_SUB_COUNT (23) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A77]  =  FALSE,already_required_OF_i_A77  =  FALSE" << endl;
		list.push_back(make_tuple(144, 0, "INS", 23));
	}
	if ((boolState[failI_OF_i_A81] == false) && (boolState[to_be_fired_OF_i_A81] &&	boolState[relevant_evt_OF_i_A81]))
	{
		//cout << "145 :  INS_SUB_COUNT (24) |FAULT | failI  LABEL \"instantaneous failure i_A81\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A81]  =  TRUE,already_standby_OF_i_A81  =  FALSE,already_required_OF_i_A81  =  FALSE" << endl;
		list.push_back(make_tuple(145, 1, "INS", 24));
	}
	if ((boolState[failI_OF_i_A81] == false) && (boolState[to_be_fired_OF_i_A81] &&	boolState[relevant_evt_OF_i_A81]))
	{
		//cout << "146 :  INS_SUB_COUNT (24) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A81]  =  FALSE,already_required_OF_i_A81  =  FALSE" << endl;
		list.push_back(make_tuple(146, 0, "INS", 24));
	}
        if (list.size() > 0)
        {
            ins_transition_found = true;
            return list;
        }
        else
        {
            ins_transition_found = false;
        }
     
	if ((boolState[failF_OF_A10] == false) && (boolState[required_OF_A10] && boolState[relevant_evt_OF_A10]))
	{
		//cout << "0 : xx10_OF_A10 : FAULT failF  LABEL \"failure in operation A10\"  DIST EXP (1e-08)  INDUCING boolState[failF_OF_A10]  =  TRUE" << endl;
		list.push_back(make_tuple(0, 1e-08, "EXP", 0));
	}
	if ((boolState[failF_OF_A100] == false) && (boolState[required_OF_A100] && boolState[relevant_evt_OF_A100]))
	{
		//cout << "1 : xx10_OF_A100 : FAULT failF  LABEL \"failure in operation A100\"  DIST EXP (9.9e-06)  INDUCING boolState[failF_OF_A100]  =  TRUE" << endl;
		list.push_back(make_tuple(1, 9.9e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_A101] == false) && (boolState[required_OF_A101] && boolState[relevant_evt_OF_A101]))
	{
		//cout << "2 : xx10_OF_A101 : FAULT failF  LABEL \"failure in operation A101\"  DIST EXP (1e-07)  INDUCING boolState[failF_OF_A101]  =  TRUE" << endl;
		list.push_back(make_tuple(2, 1e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_A102] == false) && (boolState[required_OF_A102] && boolState[relevant_evt_OF_A102]))
	{
		//cout << "3 : xx10_OF_A102 : FAULT failF  LABEL \"failure in operation A102\"  DIST EXP (1e-06)  INDUCING boolState[failF_OF_A102]  =  TRUE" << endl;
		list.push_back(make_tuple(3, 1e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_A105] == false) && (boolState[required_OF_A105] && boolState[relevant_evt_OF_A105]))
	{
		//cout << "4 : xx10_OF_A105 : FAULT failF  LABEL \"failure in operation A105\"  DIST EXP (9.9e-07)  INDUCING boolState[failF_OF_A105]  =  TRUE" << endl;
		list.push_back(make_tuple(4, 9.9e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_A106] == false) && (boolState[required_OF_A106] && boolState[relevant_evt_OF_A106]))
	{
		//cout << "5 : xx10_OF_A106 : FAULT failF  LABEL \"failure in operation A106\"  DIST EXP (1e-06)  INDUCING boolState[failF_OF_A106]  =  TRUE" << endl;
		list.push_back(make_tuple(5, 1e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_A109] == false) && (boolState[required_OF_A109] && boolState[relevant_evt_OF_A109]))
	{
		//cout << "6 : xx10_OF_A109 : FAULT failF  LABEL \"failure in operation A109\"  DIST EXP (9.9e-06)  INDUCING boolState[failF_OF_A109]  =  TRUE" << endl;
		list.push_back(make_tuple(6, 9.9e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_A110] == false) && (boolState[required_OF_A110] && boolState[relevant_evt_OF_A110]))
	{
		//cout << "7 : xx10_OF_A110 : FAULT failF  LABEL \"failure in operation A110\"  DIST EXP (1e-07)  INDUCING boolState[failF_OF_A110]  =  TRUE" << endl;
		list.push_back(make_tuple(7, 1e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_A111] == false) && (boolState[required_OF_A111] && boolState[relevant_evt_OF_A111]))
	{
		//cout << "8 : xx10_OF_A111 : FAULT failF  LABEL \"failure in operation A111\"  DIST EXP (1e-06)  INDUCING boolState[failF_OF_A111]  =  TRUE" << endl;
		list.push_back(make_tuple(8, 1e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_A114] == false) && (boolState[required_OF_A114] && boolState[relevant_evt_OF_A114]))
	{
		//cout << "9 : xx10_OF_A114 : FAULT failF  LABEL \"failure in operation A114\"  DIST EXP (9.9e-07)  INDUCING boolState[failF_OF_A114]  =  TRUE" << endl;
		list.push_back(make_tuple(9, 9.9e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_A115] == false) && (boolState[required_OF_A115] && boolState[relevant_evt_OF_A115]))
	{
		//cout << "10 : xx10_OF_A115 : FAULT failF  LABEL \"failure in operation A115\"  DIST EXP (1e-06)  INDUCING boolState[failF_OF_A115]  =  TRUE" << endl;
		list.push_back(make_tuple(10, 1e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_A118] == false) && (boolState[required_OF_A118] && boolState[relevant_evt_OF_A118]))
	{
		//cout << "11 : xx10_OF_A118 : FAULT failF  LABEL \"failure in operation A118\"  DIST EXP (9.9e-06)  INDUCING boolState[failF_OF_A118]  =  TRUE" << endl;
		list.push_back(make_tuple(11, 9.9e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_A119] == false) && (boolState[required_OF_A119] && boolState[relevant_evt_OF_A119]))
	{
		//cout << "12 : xx10_OF_A119 : FAULT failF  LABEL \"failure in operation A119\"  DIST EXP (1e-07)  INDUCING boolState[failF_OF_A119]  =  TRUE" << endl;
		list.push_back(make_tuple(12, 1e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_A120] == false) && (boolState[required_OF_A120] && boolState[relevant_evt_OF_A120]))
	{
		//cout << "13 : xx10_OF_A120 : FAULT failF  LABEL \"failure in operation A120\"  DIST EXP (1e-06)  INDUCING boolState[failF_OF_A120]  =  TRUE" << endl;
		list.push_back(make_tuple(13, 1e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_A123] == false) && (boolState[required_OF_A123] && boolState[relevant_evt_OF_A123]))
	{
		//cout << "14 : xx10_OF_A123 : FAULT failF  LABEL \"failure in operation A123\"  DIST EXP (9.9e-07)  INDUCING boolState[failF_OF_A123]  =  TRUE" << endl;
		list.push_back(make_tuple(14, 9.9e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_A124] == false) && (boolState[required_OF_A124] && boolState[relevant_evt_OF_A124]))
	{
		//cout << "15 : xx10_OF_A124 : FAULT failF  LABEL \"failure in operation A124\"  DIST EXP (1e-06)  INDUCING boolState[failF_OF_A124]  =  TRUE" << endl;
		list.push_back(make_tuple(15, 1e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_A127] == false) && (boolState[required_OF_A127] && boolState[relevant_evt_OF_A127]))
	{
		//cout << "16 : xx10_OF_A127 : FAULT failF  LABEL \"failure in operation A127\"  DIST EXP (6e-05)  INDUCING boolState[failF_OF_A127]  =  TRUE" << endl;
		list.push_back(make_tuple(16, 6e-05, "EXP", 0));
	}
	if ((boolState[failF_OF_A128] == false) && (boolState[required_OF_A128] && boolState[relevant_evt_OF_A128]))
	{
		//cout << "17 : xx10_OF_A128 : FAULT failF  LABEL \"failure in operation A128\"  DIST EXP (4e-05)  INDUCING boolState[failF_OF_A128]  =  TRUE" << endl;
		list.push_back(make_tuple(17, 4e-05, "EXP", 0));
	}
	if ((boolState[failF_OF_A129] == false) && (boolState[required_OF_A129] && boolState[relevant_evt_OF_A129]))
	{
		//cout << "18 : xx10_OF_A129 : FAULT failF  LABEL \"failure in operation A129\"  DIST EXP (1e-05)  INDUCING boolState[failF_OF_A129]  =  TRUE" << endl;
		list.push_back(make_tuple(18, 1e-05, "EXP", 0));
	}
	if ((boolState[failF_OF_A13] == false) && (boolState[required_OF_A13] && boolState[relevant_evt_OF_A13]))
	{
		//cout << "19 : xx10_OF_A13 : FAULT failF  LABEL \"failure in operation A13\"  DIST EXP (1e-08)  INDUCING boolState[failF_OF_A13]  =  TRUE" << endl;
		list.push_back(make_tuple(19, 1e-08, "EXP", 0));
	}
	if ((boolState[failF_OF_A132] == false) && (boolState[required_OF_A132] && boolState[relevant_evt_OF_A132]))
	{
		//cout << "20 : xx10_OF_A132 : FAULT failF  LABEL \"failure in operation A132\"  DIST EXP (6e-06)  INDUCING boolState[failF_OF_A132]  =  TRUE" << endl;
		list.push_back(make_tuple(20, 6e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_A133] == false) && (boolState[required_OF_A133] && boolState[relevant_evt_OF_A133]))
	{
		//cout << "21 : xx10_OF_A133 : FAULT failF  LABEL \"failure in operation A133\"  DIST EXP (1e-05)  INDUCING boolState[failF_OF_A133]  =  TRUE" << endl;
		list.push_back(make_tuple(21, 1e-05, "EXP", 0));
	}
	if ((boolState[failF_OF_A136] == false) && (boolState[required_OF_A136] && boolState[relevant_evt_OF_A136]))
	{
		//cout << "22 : xx10_OF_A136 : FAULT failF  LABEL \"failure in operation A136\"  DIST EXP (6e-05)  INDUCING boolState[failF_OF_A136]  =  TRUE" << endl;
		list.push_back(make_tuple(22, 6e-05, "EXP", 0));
	}
	if ((boolState[failF_OF_A137] == false) && (boolState[required_OF_A137] && boolState[relevant_evt_OF_A137]))
	{
		//cout << "23 : xx10_OF_A137 : FAULT failF  LABEL \"failure in operation A137\"  DIST EXP (4e-05)  INDUCING boolState[failF_OF_A137]  =  TRUE" << endl;
		list.push_back(make_tuple(23, 4e-05, "EXP", 0));
	}
	if ((boolState[failF_OF_A138] == false) && (boolState[required_OF_A138] && boolState[relevant_evt_OF_A138]))
	{
		//cout << "24 : xx10_OF_A138 : FAULT failF  LABEL \"failure in operation A138\"  DIST EXP (1e-05)  INDUCING boolState[failF_OF_A138]  =  TRUE" << endl;
		list.push_back(make_tuple(24, 1e-05, "EXP", 0));
	}
	if ((boolState[failF_OF_A141] == false) && (boolState[required_OF_A141] && boolState[relevant_evt_OF_A141]))
	{
		//cout << "25 : xx10_OF_A141 : FAULT failF  LABEL \"failure in operation A141\"  DIST EXP (6e-06)  INDUCING boolState[failF_OF_A141]  =  TRUE" << endl;
		list.push_back(make_tuple(25, 6e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_A142] == false) && (boolState[required_OF_A142] && boolState[relevant_evt_OF_A142]))
	{
		//cout << "26 : xx10_OF_A142 : FAULT failF  LABEL \"failure in operation A142\"  DIST EXP (1e-05)  INDUCING boolState[failF_OF_A142]  =  TRUE" << endl;
		list.push_back(make_tuple(26, 1e-05, "EXP", 0));
	}
	if ((boolState[failF_OF_A145] == false) && (boolState[required_OF_A145] && boolState[relevant_evt_OF_A145]))
	{
		//cout << "27 : xx10_OF_A145 : FAULT failF  LABEL \"failure in operation A145\"  DIST EXP (9.9e-06)  INDUCING boolState[failF_OF_A145]  =  TRUE" << endl;
		list.push_back(make_tuple(27, 9.9e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_A146] == false) && (boolState[required_OF_A146] && boolState[relevant_evt_OF_A146]))
	{
		//cout << "28 : xx10_OF_A146 : FAULT failF  LABEL \"failure in operation A146\"  DIST EXP (1e-07)  INDUCING boolState[failF_OF_A146]  =  TRUE" << endl;
		list.push_back(make_tuple(28, 1e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_A147] == false) && (boolState[required_OF_A147] && boolState[relevant_evt_OF_A147]))
	{
		//cout << "29 : xx10_OF_A147 : FAULT failF  LABEL \"failure in operation A147\"  DIST EXP (1e-06)  INDUCING boolState[failF_OF_A147]  =  TRUE" << endl;
		list.push_back(make_tuple(29, 1e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_A150] == false) && (boolState[required_OF_A150] && boolState[relevant_evt_OF_A150]))
	{
		//cout << "30 : xx10_OF_A150 : FAULT failF  LABEL \"failure in operation A150\"  DIST EXP (9.9e-07)  INDUCING boolState[failF_OF_A150]  =  TRUE" << endl;
		list.push_back(make_tuple(30, 9.9e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_A151] == false) && (boolState[required_OF_A151] && boolState[relevant_evt_OF_A151]))
	{
		//cout << "31 : xx10_OF_A151 : FAULT failF  LABEL \"failure in operation A151\"  DIST EXP (1e-06)  INDUCING boolState[failF_OF_A151]  =  TRUE" << endl;
		list.push_back(make_tuple(31, 1e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_A154] == false) && (boolState[required_OF_A154] && boolState[relevant_evt_OF_A154]))
	{
		//cout << "32 : xx10_OF_A154 : FAULT failF  LABEL \"failure in operation A154\"  DIST EXP (9.9e-06)  INDUCING boolState[failF_OF_A154]  =  TRUE" << endl;
		list.push_back(make_tuple(32, 9.9e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_A155] == false) && (boolState[required_OF_A155] && boolState[relevant_evt_OF_A155]))
	{
		//cout << "33 : xx10_OF_A155 : FAULT failF  LABEL \"failure in operation A155\"  DIST EXP (1e-07)  INDUCING boolState[failF_OF_A155]  =  TRUE" << endl;
		list.push_back(make_tuple(33, 1e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_A156] == false) && (boolState[required_OF_A156] && boolState[relevant_evt_OF_A156]))
	{
		//cout << "34 : xx10_OF_A156 : FAULT failF  LABEL \"failure in operation A156\"  DIST EXP (1e-06)  INDUCING boolState[failF_OF_A156]  =  TRUE" << endl;
		list.push_back(make_tuple(34, 1e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_A159] == false) && (boolState[required_OF_A159] && boolState[relevant_evt_OF_A159]))
	{
		//cout << "35 : xx10_OF_A159 : FAULT failF  LABEL \"failure in operation A159\"  DIST EXP (9.9e-07)  INDUCING boolState[failF_OF_A159]  =  TRUE" << endl;
		list.push_back(make_tuple(35, 9.9e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_A16] == false) && (boolState[required_OF_A16] && boolState[relevant_evt_OF_A16]))
	{
		//cout << "36 : xx10_OF_A16 : FAULT failF  LABEL \"failure in operation A16\"  DIST EXP (1e-08)  INDUCING boolState[failF_OF_A16]  =  TRUE" << endl;
		list.push_back(make_tuple(36, 1e-08, "EXP", 0));
	}
	if ((boolState[failF_OF_A160] == false) && (boolState[required_OF_A160] && boolState[relevant_evt_OF_A160]))
	{
		//cout << "37 : xx10_OF_A160 : FAULT failF  LABEL \"failure in operation A160\"  DIST EXP (1e-06)  INDUCING boolState[failF_OF_A160]  =  TRUE" << endl;
		list.push_back(make_tuple(37, 1e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_A163] == false) && (boolState[required_OF_A163] && boolState[relevant_evt_OF_A163]))
	{
		//cout << "38 : xx10_OF_A163 : FAULT failF  LABEL \"failure in operation A163\"  DIST EXP (9.9e-06)  INDUCING boolState[failF_OF_A163]  =  TRUE" << endl;
		list.push_back(make_tuple(38, 9.9e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_A164] == false) && (boolState[required_OF_A164] && boolState[relevant_evt_OF_A164]))
	{
		//cout << "39 : xx10_OF_A164 : FAULT failF  LABEL \"failure in operation A164\"  DIST EXP (1e-07)  INDUCING boolState[failF_OF_A164]  =  TRUE" << endl;
		list.push_back(make_tuple(39, 1e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_A165] == false) && (boolState[required_OF_A165] && boolState[relevant_evt_OF_A165]))
	{
		//cout << "40 : xx10_OF_A165 : FAULT failF  LABEL \"failure in operation A165\"  DIST EXP (1e-06)  INDUCING boolState[failF_OF_A165]  =  TRUE" << endl;
		list.push_back(make_tuple(40, 1e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_A168] == false) && (boolState[required_OF_A168] && boolState[relevant_evt_OF_A168]))
	{
		//cout << "41 : xx10_OF_A168 : FAULT failF  LABEL \"failure in operation A168\"  DIST EXP (9.9e-07)  INDUCING boolState[failF_OF_A168]  =  TRUE" << endl;
		list.push_back(make_tuple(41, 9.9e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_A169] == false) && (boolState[required_OF_A169] && boolState[relevant_evt_OF_A169]))
	{
		//cout << "42 : xx10_OF_A169 : FAULT failF  LABEL \"failure in operation A169\"  DIST EXP (1e-08)  INDUCING boolState[failF_OF_A169]  =  TRUE" << endl;
		list.push_back(make_tuple(42, 1e-08, "EXP", 0));
	}
	if ((boolState[failF_OF_A170] == false) && (boolState[required_OF_A170] && boolState[relevant_evt_OF_A170]))
	{
		//cout << "43 : xx10_OF_A170 : FAULT failF  LABEL \"failure in operation A170\"  DIST EXP (1e-06)  INDUCING boolState[failF_OF_A170]  =  TRUE" << endl;
		list.push_back(make_tuple(43, 1e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_A174] == false) && (boolState[required_OF_A174] && boolState[relevant_evt_OF_A174]))
	{
		//cout << "44 : xx10_OF_A174 : FAULT failF  LABEL \"failure in operation A174\"  DIST EXP (9.9e-06)  INDUCING boolState[failF_OF_A174]  =  TRUE" << endl;
		list.push_back(make_tuple(44, 9.9e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_A175] == false) && (boolState[required_OF_A175] && boolState[relevant_evt_OF_A175]))
	{
		//cout << "45 : xx10_OF_A175 : FAULT failF  LABEL \"failure in operation A175\"  DIST EXP (1e-07)  INDUCING boolState[failF_OF_A175]  =  TRUE" << endl;
		list.push_back(make_tuple(45, 1e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_A176] == false) && (boolState[required_OF_A176] && boolState[relevant_evt_OF_A176]))
	{
		//cout << "46 : xx10_OF_A176 : FAULT failF  LABEL \"failure in operation A176\"  DIST EXP (1e-06)  INDUCING boolState[failF_OF_A176]  =  TRUE" << endl;
		list.push_back(make_tuple(46, 1e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_A179] == false) && (boolState[required_OF_A179] && boolState[relevant_evt_OF_A179]))
	{
		//cout << "47 : xx10_OF_A179 : FAULT failF  LABEL \"failure in operation A179\"  DIST EXP (9.9e-07)  INDUCING boolState[failF_OF_A179]  =  TRUE" << endl;
		list.push_back(make_tuple(47, 9.9e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_A180] == false) && (boolState[required_OF_A180] && boolState[relevant_evt_OF_A180]))
	{
		//cout << "48 : xx10_OF_A180 : FAULT failF  LABEL \"failure in operation A180\"  DIST EXP (1e-08)  INDUCING boolState[failF_OF_A180]  =  TRUE" << endl;
		list.push_back(make_tuple(48, 1e-08, "EXP", 0));
	}
	if ((boolState[failF_OF_A181] == false) && (boolState[required_OF_A181] && boolState[relevant_evt_OF_A181]))
	{
		//cout << "49 : xx10_OF_A181 : FAULT failF  LABEL \"failure in operation A181\"  DIST EXP (1e-06)  INDUCING boolState[failF_OF_A181]  =  TRUE" << endl;
		list.push_back(make_tuple(49, 1e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_A19] == false) && (boolState[required_OF_A19] && boolState[relevant_evt_OF_A19]))
	{
		//cout << "50 : xx10_OF_A19 : FAULT failF  LABEL \"failure in operation A19\"  DIST EXP (1e-08)  INDUCING boolState[failF_OF_A19]  =  TRUE" << endl;
		list.push_back(make_tuple(50, 1e-08, "EXP", 0));
	}
	if ((boolState[failF_OF_A22] == false) && (boolState[required_OF_A22] && boolState[relevant_evt_OF_A22]))
	{
		//cout << "51 : xx10_OF_A22 : FAULT failF  LABEL \"failure in operation A22\"  DIST EXP (1e-08)  INDUCING boolState[failF_OF_A22]  =  TRUE" << endl;
		list.push_back(make_tuple(51, 1e-08, "EXP", 0));
	}
	if ((boolState[failF_OF_A25] == false) && (boolState[required_OF_A25] && boolState[relevant_evt_OF_A25]))
	{
		//cout << "52 : xx10_OF_A25 : FAULT failF  LABEL \"failure in operation A25\"  DIST EXP (1e-08)  INDUCING boolState[failF_OF_A25]  =  TRUE" << endl;
		list.push_back(make_tuple(52, 1e-08, "EXP", 0));
	}
	if ((boolState[failF_OF_A28] == false) && (boolState[required_OF_A28] && boolState[relevant_evt_OF_A28]))
	{
		//cout << "53 : xx10_OF_A28 : FAULT failF  LABEL \"failure in operation A28\"  DIST EXP (2e-07)  INDUCING boolState[failF_OF_A28]  =  TRUE" << endl;
		list.push_back(make_tuple(53, 2e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_A31] == false) && (boolState[required_OF_A31] && boolState[relevant_evt_OF_A31]))
	{
		//cout << "54 : xx10_OF_A31 : FAULT failF  LABEL \"failure in operation A31\"  DIST EXP (2e-07)  INDUCING boolState[failF_OF_A31]  =  TRUE" << endl;
		list.push_back(make_tuple(54, 2e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_A34] == false) && (boolState[required_OF_A34] && boolState[relevant_evt_OF_A34]))
	{
		//cout << "55 : xx10_OF_A34 : FAULT failF  LABEL \"failure in operation A34\"  DIST EXP (2e-07)  INDUCING boolState[failF_OF_A34]  =  TRUE" << endl;
		list.push_back(make_tuple(55, 2e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_A37] == false) && (boolState[required_OF_A37] && boolState[relevant_evt_OF_A37]))
	{
		//cout << "56 : xx10_OF_A37 : FAULT failF  LABEL \"failure in operation A37\"  DIST EXP (2e-07)  INDUCING boolState[failF_OF_A37]  =  TRUE" << endl;
		list.push_back(make_tuple(56, 2e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_A4] == false) && (boolState[required_OF_A4] && boolState[relevant_evt_OF_A4]))
	{
		//cout << "57 : xx10_OF_A4 : FAULT failF  LABEL \"failure in operation A4\"  DIST EXP (4e-06)  INDUCING boolState[failF_OF_A4]  =  TRUE" << endl;
		list.push_back(make_tuple(57, 4e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_A40] == false) && (boolState[required_OF_A40] && boolState[relevant_evt_OF_A40]))
	{
		//cout << "58 : xx10_OF_A40 : FAULT failF  LABEL \"failure in operation A40\"  DIST EXP (2e-07)  INDUCING boolState[failF_OF_A40]  =  TRUE" << endl;
		list.push_back(make_tuple(58, 2e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_A43] == false) && (boolState[required_OF_A43] && boolState[relevant_evt_OF_A43]))
	{
		//cout << "59 : xx10_OF_A43 : FAULT failF  LABEL \"failure in operation A43\"  DIST EXP (2e-07)  INDUCING boolState[failF_OF_A43]  =  TRUE" << endl;
		list.push_back(make_tuple(59, 2e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_A47] == false) && (boolState[required_OF_A47] && boolState[relevant_evt_OF_A47]))
	{
		//cout << "60 : xx10_OF_A47 : FAULT failF  LABEL \"failure in operation A47\"  DIST EXP (2e-07)  INDUCING boolState[failF_OF_A47]  =  TRUE" << endl;
		list.push_back(make_tuple(60, 2e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_A7] == false) && (boolState[required_OF_A7] && boolState[relevant_evt_OF_A7]))
	{
		//cout << "61 : xx10_OF_A7 : FAULT failF  LABEL \"failure in operation A7\"  DIST EXP (4e-06)  INDUCING boolState[failF_OF_A7]  =  TRUE" << endl;
		list.push_back(make_tuple(61, 4e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_A83] == false) && (boolState[required_OF_A83] && boolState[relevant_evt_OF_A83]))
	{
		//cout << "62 : xx10_OF_A83 : FAULT failF  LABEL \"failure in operation A83\"  DIST EXP (1e-07)  INDUCING boolState[failF_OF_A83]  =  TRUE" << endl;
		list.push_back(make_tuple(62, 1e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_A84] == false) && (boolState[required_OF_A84] && boolState[relevant_evt_OF_A84]))
	{
		//cout << "63 : xx10_OF_A84 : FAULT failF  LABEL \"failure in operation A84\"  DIST EXP (1e-07)  INDUCING boolState[failF_OF_A84]  =  TRUE" << endl;
		list.push_back(make_tuple(63, 1e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_A85] == false) && (boolState[required_OF_A85] && boolState[relevant_evt_OF_A85]))
	{
		//cout << "64 : xx10_OF_A85 : FAULT failF  LABEL \"failure in operation A85\"  DIST EXP (1e-07)  INDUCING boolState[failF_OF_A85]  =  TRUE" << endl;
		list.push_back(make_tuple(64, 1e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_A86] == false) && (boolState[required_OF_A86] && boolState[relevant_evt_OF_A86]))
	{
		//cout << "65 : xx10_OF_A86 : FAULT failF  LABEL \"failure in operation A86\"  DIST EXP (1e-07)  INDUCING boolState[failF_OF_A86]  =  TRUE" << endl;
		list.push_back(make_tuple(65, 1e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_A87] == false) && (boolState[required_OF_A87] && boolState[relevant_evt_OF_A87]))
	{
		//cout << "66 : xx10_OF_A87 : FAULT failF  LABEL \"failure in operation A87\"  DIST EXP (1e-07)  INDUCING boolState[failF_OF_A87]  =  TRUE" << endl;
		list.push_back(make_tuple(66, 1e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_A88] == false) && (boolState[required_OF_A88] && boolState[relevant_evt_OF_A88]))
	{
		//cout << "67 : xx10_OF_A88 : FAULT failF  LABEL \"failure in operation A88\"  DIST EXP (1e-07)  INDUCING boolState[failF_OF_A88]  =  TRUE" << endl;
		list.push_back(make_tuple(67, 1e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_A89] == false) && (boolState[required_OF_A89] && boolState[relevant_evt_OF_A89]))
	{
		//cout << "68 : xx10_OF_A89 : FAULT failF  LABEL \"failure in operation A89\"  DIST EXP (1e-07)  INDUCING boolState[failF_OF_A89]  =  TRUE" << endl;
		list.push_back(make_tuple(68, 1e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_A90] == false) && (boolState[required_OF_A90] && boolState[relevant_evt_OF_A90]))
	{
		//cout << "69 : xx10_OF_A90 : FAULT failF  LABEL \"failure in operation A90\"  DIST EXP (1e-07)  INDUCING boolState[failF_OF_A90]  =  TRUE" << endl;
		list.push_back(make_tuple(69, 1e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_A91] == false) && (boolState[required_OF_A91] && boolState[relevant_evt_OF_A91]))
	{
		//cout << "70 : xx10_OF_A91 : FAULT failF  LABEL \"failure in operation A91\"  DIST EXP (9.9e-06)  INDUCING boolState[failF_OF_A91]  =  TRUE" << endl;
		list.push_back(make_tuple(70, 9.9e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_A92] == false) && (boolState[required_OF_A92] && boolState[relevant_evt_OF_A92]))
	{
		//cout << "71 : xx10_OF_A92 : FAULT failF  LABEL \"failure in operation A92\"  DIST EXP (1e-07)  INDUCING boolState[failF_OF_A92]  =  TRUE" << endl;
		list.push_back(make_tuple(71, 1e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_A93] == false) && (boolState[required_OF_A93] && boolState[relevant_evt_OF_A93]))
	{
		//cout << "72 : xx10_OF_A93 : FAULT failF  LABEL \"failure in operation A93\"  DIST EXP (1e-06)  INDUCING boolState[failF_OF_A93]  =  TRUE" << endl;
		list.push_back(make_tuple(72, 1e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_A96] == false) && (boolState[required_OF_A96] && boolState[relevant_evt_OF_A96]))
	{
		//cout << "73 : xx10_OF_A96 : FAULT failF  LABEL \"failure in operation A96\"  DIST EXP (9.9e-07)  INDUCING boolState[failF_OF_A96]  =  TRUE" << endl;
		list.push_back(make_tuple(73, 9.9e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_A97] == false) && (boolState[required_OF_A97] && boolState[relevant_evt_OF_A97]))
	{
		//cout << "74 : xx10_OF_A97 : FAULT failF  LABEL \"failure in operation A97\"  DIST EXP (1e-06)  INDUCING boolState[failF_OF_A97]  =  TRUE" << endl;
		list.push_back(make_tuple(74, 1e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A52] == false) && (boolState[required_OF_f_A52] && boolState[relevant_evt_OF_f_A52]))
	{
		//cout << "75 : xx10_OF_f_A52 : FAULT failF  LABEL \"failure in operation f_A52\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A52]  =  TRUE" << endl;
		list.push_back(make_tuple(75, 0, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A53] == false) && (boolState[required_OF_f_A53] && boolState[relevant_evt_OF_f_A53]))
	{
		//cout << "76 : xx10_OF_f_A53 : FAULT failF  LABEL \"failure in operation f_A53\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A53]  =  TRUE" << endl;
		list.push_back(make_tuple(76, 0, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A54] == false) && (boolState[required_OF_f_A54] && boolState[relevant_evt_OF_f_A54]))
	{
		//cout << "77 : xx10_OF_f_A54 : FAULT failF  LABEL \"failure in operation f_A54\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A54]  =  TRUE" << endl;
		list.push_back(make_tuple(77, 0, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A55] == false) && (boolState[required_OF_f_A55] && boolState[relevant_evt_OF_f_A55]))
	{
		//cout << "78 : xx10_OF_f_A55 : FAULT failF  LABEL \"failure in operation f_A55\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A55]  =  TRUE" << endl;
		list.push_back(make_tuple(78, 0, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A56] == false) && (boolState[required_OF_f_A56] && boolState[relevant_evt_OF_f_A56]))
	{
		//cout << "79 : xx10_OF_f_A56 : FAULT failF  LABEL \"failure in operation f_A56\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A56]  =  TRUE" << endl;
		list.push_back(make_tuple(79, 0, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A57] == false) && (boolState[required_OF_f_A57] && boolState[relevant_evt_OF_f_A57]))
	{
		//cout << "80 : xx10_OF_f_A57 : FAULT failF  LABEL \"failure in operation f_A57\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A57]  =  TRUE" << endl;
		list.push_back(make_tuple(80, 0, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A58] == false) && (boolState[required_OF_f_A58] && boolState[relevant_evt_OF_f_A58]))
	{
		//cout << "81 : xx10_OF_f_A58 : FAULT failF  LABEL \"failure in operation f_A58\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A58]  =  TRUE" << endl;
		list.push_back(make_tuple(81, 0, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A60] == false) && (boolState[required_OF_f_A60] && boolState[relevant_evt_OF_f_A60]))
	{
		//cout << "82 : xx10_OF_f_A60 : FAULT failF  LABEL \"failure in operation f_A60\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A60]  =  TRUE" << endl;
		list.push_back(make_tuple(82, 0, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A61] == false) && (boolState[required_OF_f_A61] && boolState[relevant_evt_OF_f_A61]))
	{
		//cout << "83 : xx10_OF_f_A61 : FAULT failF  LABEL \"failure in operation f_A61\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A61]  =  TRUE" << endl;
		list.push_back(make_tuple(83, 0, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A63] == false) && (boolState[required_OF_f_A63] && boolState[relevant_evt_OF_f_A63]))
	{
		//cout << "84 : xx10_OF_f_A63 : FAULT failF  LABEL \"failure in operation f_A63\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A63]  =  TRUE" << endl;
		list.push_back(make_tuple(84, 0, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A64] == false) && (boolState[required_OF_f_A64] && boolState[relevant_evt_OF_f_A64]))
	{
		//cout << "85 : xx10_OF_f_A64 : FAULT failF  LABEL \"failure in operation f_A64\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A64]  =  TRUE" << endl;
		list.push_back(make_tuple(85, 0, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A66] == false) && (boolState[required_OF_f_A66] && boolState[relevant_evt_OF_f_A66]))
	{
		//cout << "86 : xx10_OF_f_A66 : FAULT failF  LABEL \"failure in operation f_A66\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A66]  =  TRUE" << endl;
		list.push_back(make_tuple(86, 0, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A67] == false) && (boolState[required_OF_f_A67] && boolState[relevant_evt_OF_f_A67]))
	{
		//cout << "87 : xx10_OF_f_A67 : FAULT failF  LABEL \"failure in operation f_A67\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A67]  =  TRUE" << endl;
		list.push_back(make_tuple(87, 0, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A68] == false) && (boolState[required_OF_f_A68] && boolState[relevant_evt_OF_f_A68]))
	{
		//cout << "88 : xx10_OF_f_A68 : FAULT failF  LABEL \"failure in operation f_A68\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A68]  =  TRUE" << endl;
		list.push_back(make_tuple(88, 0, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A69] == false) && (boolState[required_OF_f_A69] && boolState[relevant_evt_OF_f_A69]))
	{
		//cout << "89 : xx10_OF_f_A69 : FAULT failF  LABEL \"failure in operation f_A69\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A69]  =  TRUE" << endl;
		list.push_back(make_tuple(89, 0, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A70] == false) && (boolState[required_OF_f_A70] && boolState[relevant_evt_OF_f_A70]))
	{
		//cout << "90 : xx10_OF_f_A70 : FAULT failF  LABEL \"failure in operation f_A70\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A70]  =  TRUE" << endl;
		list.push_back(make_tuple(90, 0, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A71] == false) && (boolState[required_OF_f_A71] && boolState[relevant_evt_OF_f_A71]))
	{
		//cout << "91 : xx10_OF_f_A71 : FAULT failF  LABEL \"failure in operation f_A71\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A71]  =  TRUE" << endl;
		list.push_back(make_tuple(91, 0, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A72] == false) && (boolState[required_OF_f_A72] && boolState[relevant_evt_OF_f_A72]))
	{
		//cout << "92 : xx10_OF_f_A72 : FAULT failF  LABEL \"failure in operation f_A72\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A72]  =  TRUE" << endl;
		list.push_back(make_tuple(92, 0, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A73] == false) && (boolState[required_OF_f_A73] && boolState[relevant_evt_OF_f_A73]))
	{
		//cout << "93 : xx10_OF_f_A73 : FAULT failF  LABEL \"failure in operation f_A73\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A73]  =  TRUE" << endl;
		list.push_back(make_tuple(93, 0, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A74] == false) && (boolState[required_OF_f_A74] && boolState[relevant_evt_OF_f_A74]))
	{
		//cout << "94 : xx10_OF_f_A74 : FAULT failF  LABEL \"failure in operation f_A74\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A74]  =  TRUE" << endl;
		list.push_back(make_tuple(94, 0, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A75] == false) && (boolState[required_OF_f_A75] && boolState[relevant_evt_OF_f_A75]))
	{
		//cout << "95 : xx10_OF_f_A75 : FAULT failF  LABEL \"failure in operation f_A75\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A75]  =  TRUE" << endl;
		list.push_back(make_tuple(95, 0, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A76] == false) && (boolState[required_OF_f_A76] && boolState[relevant_evt_OF_f_A76]))
	{
		//cout << "96 : xx10_OF_f_A76 : FAULT failF  LABEL \"failure in operation f_A76\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A76]  =  TRUE" << endl;
		list.push_back(make_tuple(96, 0, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A77] == false) && (boolState[required_OF_f_A77] && boolState[relevant_evt_OF_f_A77]))
	{
		//cout << "97 : xx10_OF_f_A77 : FAULT failF  LABEL \"failure in operation f_A77\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A77]  =  TRUE" << endl;
		list.push_back(make_tuple(97, 0, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A81] == false) && (boolState[required_OF_f_A81] && boolState[relevant_evt_OF_f_A81]))
	{
		//cout << "98 : xx10_OF_f_A81 : FAULT failF  LABEL \"failure in operation f_A81\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A81]  =  TRUE" << endl;
		list.push_back(make_tuple(98, 0, "EXP", 0));
	}
	return list;
}


void storm::figaro::FigaroProgram_vgs_8_Trim_Article_No_repair::runOnceInteractionStep_initialization()
{
	if (boolState[failF_OF_A10] == true )
	{
		boolState[S_OF_A10]  =  true;
	}

	if (boolState[failF_OF_A100] == true )
	{
		boolState[S_OF_A100]  =  true;
	}

	if (boolState[failF_OF_A101] == true )
	{
		boolState[S_OF_A101]  =  true;
	}

	if (boolState[failF_OF_A102] == true )
	{
		boolState[S_OF_A102]  =  true;
	}

	if (boolState[failF_OF_A105] == true )
	{
		boolState[S_OF_A105]  =  true;
	}

	if (boolState[failF_OF_A106] == true )
	{
		boolState[S_OF_A106]  =  true;
	}

	if (boolState[failF_OF_A109] == true )
	{
		boolState[S_OF_A109]  =  true;
	}

	if (boolState[failF_OF_A110] == true )
	{
		boolState[S_OF_A110]  =  true;
	}

	if (boolState[failF_OF_A111] == true )
	{
		boolState[S_OF_A111]  =  true;
	}

	if (boolState[failF_OF_A114] == true )
	{
		boolState[S_OF_A114]  =  true;
	}

	if (boolState[failF_OF_A115] == true )
	{
		boolState[S_OF_A115]  =  true;
	}

	if (boolState[failF_OF_A118] == true )
	{
		boolState[S_OF_A118]  =  true;
	}

	if (boolState[failF_OF_A119] == true )
	{
		boolState[S_OF_A119]  =  true;
	}

	if (boolState[failF_OF_A120] == true )
	{
		boolState[S_OF_A120]  =  true;
	}

	if (boolState[failF_OF_A123] == true )
	{
		boolState[S_OF_A123]  =  true;
	}

	if (boolState[failF_OF_A124] == true )
	{
		boolState[S_OF_A124]  =  true;
	}

	if (boolState[failF_OF_A127] == true )
	{
		boolState[S_OF_A127]  =  true;
	}

	if (boolState[failF_OF_A128] == true )
	{
		boolState[S_OF_A128]  =  true;
	}

	if (boolState[failF_OF_A129] == true )
	{
		boolState[S_OF_A129]  =  true;
	}

	if (boolState[failF_OF_A13] == true )
	{
		boolState[S_OF_A13]  =  true;
	}

	if (boolState[failF_OF_A132] == true )
	{
		boolState[S_OF_A132]  =  true;
	}

	if (boolState[failF_OF_A133] == true )
	{
		boolState[S_OF_A133]  =  true;
	}

	if (boolState[failF_OF_A136] == true )
	{
		boolState[S_OF_A136]  =  true;
	}

	if (boolState[failF_OF_A137] == true )
	{
		boolState[S_OF_A137]  =  true;
	}

	if (boolState[failF_OF_A138] == true )
	{
		boolState[S_OF_A138]  =  true;
	}

	if (boolState[failF_OF_A141] == true )
	{
		boolState[S_OF_A141]  =  true;
	}

	if (boolState[failF_OF_A142] == true )
	{
		boolState[S_OF_A142]  =  true;
	}

	if (boolState[failF_OF_A145] == true )
	{
		boolState[S_OF_A145]  =  true;
	}

	if (boolState[failF_OF_A146] == true )
	{
		boolState[S_OF_A146]  =  true;
	}

	if (boolState[failF_OF_A147] == true )
	{
		boolState[S_OF_A147]  =  true;
	}

	if (boolState[failF_OF_A150] == true )
	{
		boolState[S_OF_A150]  =  true;
	}

	if (boolState[failF_OF_A151] == true )
	{
		boolState[S_OF_A151]  =  true;
	}

	if (boolState[failF_OF_A154] == true )
	{
		boolState[S_OF_A154]  =  true;
	}

	if (boolState[failF_OF_A155] == true )
	{
		boolState[S_OF_A155]  =  true;
	}

	if (boolState[failF_OF_A156] == true )
	{
		boolState[S_OF_A156]  =  true;
	}

	if (boolState[failF_OF_A159] == true )
	{
		boolState[S_OF_A159]  =  true;
	}

	if (boolState[failF_OF_A16] == true )
	{
		boolState[S_OF_A16]  =  true;
	}

	if (boolState[failF_OF_A160] == true )
	{
		boolState[S_OF_A160]  =  true;
	}

	if (boolState[failF_OF_A163] == true )
	{
		boolState[S_OF_A163]  =  true;
	}

	if (boolState[failF_OF_A164] == true )
	{
		boolState[S_OF_A164]  =  true;
	}

	if (boolState[failF_OF_A165] == true )
	{
		boolState[S_OF_A165]  =  true;
	}

	if (boolState[failF_OF_A168] == true )
	{
		boolState[S_OF_A168]  =  true;
	}

	if (boolState[failF_OF_A169] == true )
	{
		boolState[S_OF_A169]  =  true;
	}

	if (boolState[failF_OF_A170] == true )
	{
		boolState[S_OF_A170]  =  true;
	}

	if (boolState[failF_OF_A174] == true )
	{
		boolState[S_OF_A174]  =  true;
	}

	if (boolState[failF_OF_A175] == true )
	{
		boolState[S_OF_A175]  =  true;
	}

	if (boolState[failF_OF_A176] == true )
	{
		boolState[S_OF_A176]  =  true;
	}

	if (boolState[failF_OF_A179] == true )
	{
		boolState[S_OF_A179]  =  true;
	}

	if (boolState[failF_OF_A180] == true )
	{
		boolState[S_OF_A180]  =  true;
	}

	if (boolState[failF_OF_A181] == true )
	{
		boolState[S_OF_A181]  =  true;
	}

	if (boolState[failF_OF_A19] == true )
	{
		boolState[S_OF_A19]  =  true;
	}

	if (boolState[failF_OF_A22] == true )
	{
		boolState[S_OF_A22]  =  true;
	}

	if (boolState[failF_OF_A25] == true )
	{
		boolState[S_OF_A25]  =  true;
	}

	if (boolState[failF_OF_A28] == true )
	{
		boolState[S_OF_A28]  =  true;
	}

	if (boolState[failF_OF_A31] == true )
	{
		boolState[S_OF_A31]  =  true;
	}

	if (boolState[failF_OF_A34] == true )
	{
		boolState[S_OF_A34]  =  true;
	}

	if (boolState[failF_OF_A37] == true )
	{
		boolState[S_OF_A37]  =  true;
	}

	if (boolState[failF_OF_A4] == true )
	{
		boolState[S_OF_A4]  =  true;
	}

	if (boolState[failF_OF_A40] == true )
	{
		boolState[S_OF_A40]  =  true;
	}

	if (boolState[failF_OF_A43] == true )
	{
		boolState[S_OF_A43]  =  true;
	}

	if (boolState[failF_OF_A47] == true )
	{
		boolState[S_OF_A47]  =  true;
	}

	if (boolState[failF_OF_A7] == true )
	{
		boolState[S_OF_A7]  =  true;
	}

	if (boolState[failF_OF_A83] == true )
	{
		boolState[S_OF_A83]  =  true;
	}

	if (boolState[failF_OF_A84] == true )
	{
		boolState[S_OF_A84]  =  true;
	}

	if (boolState[failF_OF_A85] == true )
	{
		boolState[S_OF_A85]  =  true;
	}

	if (boolState[failF_OF_A86] == true )
	{
		boolState[S_OF_A86]  =  true;
	}

	if (boolState[failF_OF_A87] == true )
	{
		boolState[S_OF_A87]  =  true;
	}

	if (boolState[failF_OF_A88] == true )
	{
		boolState[S_OF_A88]  =  true;
	}

	if (boolState[failF_OF_A89] == true )
	{
		boolState[S_OF_A89]  =  true;
	}

	if (boolState[failF_OF_A90] == true )
	{
		boolState[S_OF_A90]  =  true;
	}

	if (boolState[failF_OF_A91] == true )
	{
		boolState[S_OF_A91]  =  true;
	}

	if (boolState[failF_OF_A92] == true )
	{
		boolState[S_OF_A92]  =  true;
	}

	if (boolState[failF_OF_A93] == true )
	{
		boolState[S_OF_A93]  =  true;
	}

	if (boolState[failF_OF_A96] == true )
	{
		boolState[S_OF_A96]  =  true;
	}

	if (boolState[failF_OF_A97] == true )
	{
		boolState[S_OF_A97]  =  true;
	}

	if (boolState[failF_OF_f_A52] == true )
	{
		boolState[S_OF_f_A52]  =  true;
	}

	if (boolState[failF_OF_f_A53] == true )
	{
		boolState[S_OF_f_A53]  =  true;
	}

	if (boolState[failF_OF_f_A54] == true )
	{
		boolState[S_OF_f_A54]  =  true;
	}

	if (boolState[failF_OF_f_A55] == true )
	{
		boolState[S_OF_f_A55]  =  true;
	}

	if (boolState[failF_OF_f_A56] == true )
	{
		boolState[S_OF_f_A56]  =  true;
	}

	if (boolState[failF_OF_f_A57] == true )
	{
		boolState[S_OF_f_A57]  =  true;
	}

	if (boolState[failF_OF_f_A58] == true )
	{
		boolState[S_OF_f_A58]  =  true;
	}

	if (boolState[failF_OF_f_A60] == true )
	{
		boolState[S_OF_f_A60]  =  true;
	}

	if (boolState[failF_OF_f_A61] == true )
	{
		boolState[S_OF_f_A61]  =  true;
	}

	if (boolState[failF_OF_f_A63] == true )
	{
		boolState[S_OF_f_A63]  =  true;
	}

	if (boolState[failF_OF_f_A64] == true )
	{
		boolState[S_OF_f_A64]  =  true;
	}

	if (boolState[failF_OF_f_A66] == true )
	{
		boolState[S_OF_f_A66]  =  true;
	}

	if (boolState[failF_OF_f_A67] == true )
	{
		boolState[S_OF_f_A67]  =  true;
	}

	if (boolState[failF_OF_f_A68] == true )
	{
		boolState[S_OF_f_A68]  =  true;
	}

	if (boolState[failF_OF_f_A69] == true )
	{
		boolState[S_OF_f_A69]  =  true;
	}

	if (boolState[failF_OF_f_A70] == true )
	{
		boolState[S_OF_f_A70]  =  true;
	}

	if (boolState[failF_OF_f_A71] == true )
	{
		boolState[S_OF_f_A71]  =  true;
	}

	if (boolState[failF_OF_f_A72] == true )
	{
		boolState[S_OF_f_A72]  =  true;
	}

	if (boolState[failF_OF_f_A73] == true )
	{
		boolState[S_OF_f_A73]  =  true;
	}

	if (boolState[failF_OF_f_A74] == true )
	{
		boolState[S_OF_f_A74]  =  true;
	}

	if (boolState[failF_OF_f_A75] == true )
	{
		boolState[S_OF_f_A75]  =  true;
	}

	if (boolState[failF_OF_f_A76] == true )
	{
		boolState[S_OF_f_A76]  =  true;
	}

	if (boolState[failF_OF_f_A77] == true )
	{
		boolState[S_OF_f_A77]  =  true;
	}

	if (boolState[failF_OF_f_A81] == true )
	{
		boolState[S_OF_f_A81]  =  true;
	}

	if (boolState[failI_OF_i_A52] == true )
	{
		boolState[S_OF_i_A52]  =  true;
	}

	if (boolState[failI_OF_i_A53] == true )
	{
		boolState[S_OF_i_A53]  =  true;
	}

	if (boolState[failI_OF_i_A54] == true )
	{
		boolState[S_OF_i_A54]  =  true;
	}

	if (boolState[failI_OF_i_A55] == true )
	{
		boolState[S_OF_i_A55]  =  true;
	}

	if (boolState[failI_OF_i_A56] == true )
	{
		boolState[S_OF_i_A56]  =  true;
	}

	if (boolState[failI_OF_i_A57] == true )
	{
		boolState[S_OF_i_A57]  =  true;
	}

	if (boolState[failI_OF_i_A58] == true )
	{
		boolState[S_OF_i_A58]  =  true;
	}

	if (boolState[failI_OF_i_A60] == true )
	{
		boolState[S_OF_i_A60]  =  true;
	}

	if (boolState[failI_OF_i_A61] == true )
	{
		boolState[S_OF_i_A61]  =  true;
	}

	if (boolState[failI_OF_i_A63] == true )
	{
		boolState[S_OF_i_A63]  =  true;
	}

	if (boolState[failI_OF_i_A64] == true )
	{
		boolState[S_OF_i_A64]  =  true;
	}

	if (boolState[failI_OF_i_A66] == true )
	{
		boolState[S_OF_i_A66]  =  true;
	}

	if (boolState[failI_OF_i_A67] == true )
	{
		boolState[S_OF_i_A67]  =  true;
	}

	if (boolState[failI_OF_i_A68] == true )
	{
		boolState[S_OF_i_A68]  =  true;
	}

	if (boolState[failI_OF_i_A69] == true )
	{
		boolState[S_OF_i_A69]  =  true;
	}

	if (boolState[failI_OF_i_A70] == true )
	{
		boolState[S_OF_i_A70]  =  true;
	}

	if (boolState[failI_OF_i_A71] == true )
	{
		boolState[S_OF_i_A71]  =  true;
	}

	if (boolState[failI_OF_i_A72] == true )
	{
		boolState[S_OF_i_A72]  =  true;
	}

	if (boolState[failI_OF_i_A73] == true )
	{
		boolState[S_OF_i_A73]  =  true;
	}

	if (boolState[failI_OF_i_A74] == true )
	{
		boolState[S_OF_i_A74]  =  true;
	}

	if (boolState[failI_OF_i_A75] == true )
	{
		boolState[S_OF_i_A75]  =  true;
	}

	if (boolState[failI_OF_i_A76] == true )
	{
		boolState[S_OF_i_A76]  =  true;
	}

	if (boolState[failI_OF_i_A77] == true )
	{
		boolState[S_OF_i_A77]  =  true;
	}

	if (boolState[failI_OF_i_A81] == true )
	{
		boolState[S_OF_i_A81]  =  true;
	}

}


void storm::figaro::FigaroProgram_vgs_8_Trim_Article_No_repair::runOnceInteractionStep_propagate_effect_S()
{
	if ((((((((((boolState[S_OF_A2] || boolState[S_OF_A23]) || boolState[S_OF_A26]) || boolState[S_OF_A29]) || boolState[S_OF_A32]) || boolState[S_OF_A35]) || boolState[S_OF_A38]) || boolState[S_OF_A41]) || boolState[S_OF_A44]) || boolState[S_OF_A45]) || boolState[S_OF_A50] )
	{
		boolState[S_OF_A0]  =  true;
	}

	if (boolState[S_OF_A62] && boolState[S_OF_A65] )
	{
		boolState[S_OF_A1]  =  true;
	}

	if (boolState[S_OF_A100] && boolState[S_OF_A102] )
	{
		boolState[S_OF_A103]  =  true;
	}

	if (boolState[S_OF_A105] && boolState[S_OF_A106] )
	{
		boolState[S_OF_A107]  =  true;
	}

	if (((boolState[S_OF_A10] || boolState[S_OF_A186]) || boolState[S_OF_A55]) || boolState[S_OF_A70] )
	{
		boolState[S_OF_A11]  =  true;
	}

	if (boolState[S_OF_A109] && boolState[S_OF_A111] )
	{
		boolState[S_OF_A112]  =  true;
	}

	if (boolState[S_OF_A114] && boolState[S_OF_A115] )
	{
		boolState[S_OF_A116]  =  true;
	}

	if (boolState[S_OF_A118] && boolState[S_OF_A120] )
	{
		boolState[S_OF_A121]  =  true;
	}

	if (boolState[S_OF_A123] && boolState[S_OF_A124] )
	{
		boolState[S_OF_A125]  =  true;
	}

	if (boolState[S_OF_A127] && boolState[S_OF_A129] )
	{
		boolState[S_OF_A130]  =  true;
	}

	if (boolState[S_OF_A132] && boolState[S_OF_A133] )
	{
		boolState[S_OF_A134]  =  true;
	}

	if (boolState[S_OF_A136] && boolState[S_OF_A138] )
	{
		boolState[S_OF_A139]  =  true;
	}

	if (((boolState[S_OF_A13] || boolState[S_OF_A187]) || boolState[S_OF_A54]) || boolState[S_OF_A63] )
	{
		boolState[S_OF_A14]  =  true;
	}

	if (boolState[S_OF_A141] && boolState[S_OF_A142] )
	{
		boolState[S_OF_A143]  =  true;
	}

	if (boolState[S_OF_A145] && boolState[S_OF_A147] )
	{
		boolState[S_OF_A148]  =  true;
	}

	if (boolState[S_OF_A150] && boolState[S_OF_A151] )
	{
		boolState[S_OF_A152]  =  true;
	}

	if (boolState[S_OF_A154] && boolState[S_OF_A156] )
	{
		boolState[S_OF_A157]  =  true;
	}

	if (boolState[S_OF_A159] && boolState[S_OF_A160] )
	{
		boolState[S_OF_A161]  =  true;
	}

	if (boolState[S_OF_A163] && boolState[S_OF_A165] )
	{
		boolState[S_OF_A166]  =  true;
	}

	if (((boolState[S_OF_A16] || boolState[S_OF_A188]) || boolState[S_OF_A57]) || boolState[S_OF_A71] )
	{
		boolState[S_OF_A17]  =  true;
	}

	if (boolState[S_OF_A168] && boolState[S_OF_A170] )
	{
		boolState[S_OF_A171]  =  true;
	}

	if (((boolState[S_OF_A164] || boolState[S_OF_A166]) || boolState[S_OF_A169]) || boolState[S_OF_A171] )
	{
		boolState[S_OF_A173]  =  true;
	}

	if (boolState[S_OF_A174] && boolState[S_OF_A176] )
	{
		boolState[S_OF_A177]  =  true;
	}

	if (boolState[S_OF_A179] && boolState[S_OF_A181] )
	{
		boolState[S_OF_A182]  =  true;
	}

	if (((boolState[S_OF_A175] || boolState[S_OF_A177]) || boolState[S_OF_A180]) || boolState[S_OF_A182] )
	{
		boolState[S_OF_A184]  =  true;
	}

	if (boolState[S_OF_A173] && boolState[S_OF_A184] )
	{
		boolState[S_OF_A185]  =  true;
	}

	if ((boolState[S_OF_A92] || boolState[S_OF_A94]) || boolState[S_OF_A98] )
	{
		boolState[S_OF_A186]  =  true;
	}

	if ((boolState[S_OF_A101] || boolState[S_OF_A103]) || boolState[S_OF_A107] )
	{
		boolState[S_OF_A187]  =  true;
	}

	if ((boolState[S_OF_A110] || boolState[S_OF_A112]) || boolState[S_OF_A116] )
	{
		boolState[S_OF_A188]  =  true;
	}

	if ((boolState[S_OF_A119] || boolState[S_OF_A121]) || boolState[S_OF_A125] )
	{
		boolState[S_OF_A189]  =  true;
	}

	if ((boolState[S_OF_A128] || boolState[S_OF_A130]) || boolState[S_OF_A134] )
	{
		boolState[S_OF_A190]  =  true;
	}

	if ((boolState[S_OF_A137] || boolState[S_OF_A139]) || boolState[S_OF_A143] )
	{
		boolState[S_OF_A191]  =  true;
	}

	if ((boolState[S_OF_A146] || boolState[S_OF_A148]) || boolState[S_OF_A152] )
	{
		boolState[S_OF_A192]  =  true;
	}

	if ((boolState[S_OF_A155] || boolState[S_OF_A157]) || boolState[S_OF_A161] )
	{
		boolState[S_OF_A193]  =  true;
	}

	if (boolState[S_OF_A82] )
	{
		boolState[S_OF_A2]  =  true;
	}

	if (((boolState[S_OF_A189] || boolState[S_OF_A19]) || boolState[S_OF_A56]) || boolState[S_OF_A66] )
	{
		boolState[S_OF_A20]  =  true;
	}

	if (((boolState[S_OF_A192] || boolState[S_OF_A22]) || boolState[S_OF_A68]) || boolState[S_OF_A78] )
	{
		boolState[S_OF_A23]  =  true;
	}

	if ((((((((((boolState[S_OF_A185] || boolState[S_OF_A193]) || boolState[S_OF_A25]) || boolState[S_OF_A67]) || boolState[S_OF_A72]) || boolState[S_OF_A73]) || boolState[S_OF_A74]) || boolState[S_OF_A75]) || boolState[S_OF_A76]) || boolState[S_OF_A77]) || boolState[S_OF_A81] )
	{
		boolState[S_OF_A26]  =  true;
	}

	if (boolState[S_OF_A28] )
	{
		boolState[S_OF_A29]  =  true;
	}

	if (boolState[S_OF_A31] )
	{
		boolState[S_OF_A32]  =  true;
	}

	if (boolState[S_OF_A34] )
	{
		boolState[S_OF_A35]  =  true;
	}

	if (boolState[S_OF_A37] )
	{
		boolState[S_OF_A38]  =  true;
	}

	if (boolState[S_OF_A40] )
	{
		boolState[S_OF_A41]  =  true;
	}

	if (boolState[S_OF_A49] && boolState[S_OF_A79] )
	{
		boolState[S_OF_A44]  =  true;
	}

	if (boolState[S_OF_A43] )
	{
		boolState[S_OF_A45]  =  true;
	}

	if (boolState[S_OF_A17] || boolState[S_OF_A20] )
	{
		boolState[S_OF_A48]  =  true;
	}

	if (boolState[S_OF_A5] || boolState[S_OF_A8] )
	{
		boolState[S_OF_A49]  =  true;
	}

	if (((boolState[S_OF_A190] || boolState[S_OF_A4]) || boolState[S_OF_A53]) || boolState[S_OF_A69] )
	{
		boolState[S_OF_A5]  =  true;
	}

	if (boolState[S_OF_A47] )
	{
		boolState[S_OF_A50]  =  true;
	}

	if (boolState[S_OF_f_A52] || boolState[S_OF_i_A52] )
	{
		boolState[S_OF_A52]  =  true;
	}

	if (boolState[S_OF_f_A53] || boolState[S_OF_i_A53] )
	{
		boolState[S_OF_A53]  =  true;
	}

	if (boolState[S_OF_f_A54] || boolState[S_OF_i_A54] )
	{
		boolState[S_OF_A54]  =  true;
	}

	if (boolState[S_OF_f_A55] || boolState[S_OF_i_A55] )
	{
		boolState[S_OF_A55]  =  true;
	}

	if (boolState[S_OF_f_A56] || boolState[S_OF_i_A56] )
	{
		boolState[S_OF_A56]  =  true;
	}

	if (boolState[S_OF_f_A57] || boolState[S_OF_i_A57] )
	{
		boolState[S_OF_A57]  =  true;
	}

	if (boolState[S_OF_f_A58] || boolState[S_OF_i_A58] )
	{
		boolState[S_OF_A58]  =  true;
	}

	if (boolState[S_OF_A58] )
	{
		boolState[S_OF_A59]  =  true;
	}

	if (boolState[S_OF_f_A60] || boolState[S_OF_i_A60] )
	{
		boolState[S_OF_A60]  =  true;
	}

	if (boolState[S_OF_f_A61] || boolState[S_OF_i_A61] )
	{
		boolState[S_OF_A61]  =  true;
	}

	if (boolState[S_OF_A61] )
	{
		boolState[S_OF_A62]  =  true;
	}

	if (boolState[S_OF_f_A63] || boolState[S_OF_i_A63] )
	{
		boolState[S_OF_A63]  =  true;
	}

	if (boolState[S_OF_f_A64] || boolState[S_OF_i_A64] )
	{
		boolState[S_OF_A64]  =  true;
	}

	if (boolState[S_OF_A64] )
	{
		boolState[S_OF_A65]  =  true;
	}

	if (boolState[S_OF_f_A66] || boolState[S_OF_i_A66] )
	{
		boolState[S_OF_A66]  =  true;
	}

	if (boolState[S_OF_f_A67] || boolState[S_OF_i_A67] )
	{
		boolState[S_OF_A67]  =  true;
	}

	if (boolState[S_OF_f_A68] || boolState[S_OF_i_A68] )
	{
		boolState[S_OF_A68]  =  true;
	}

	if (boolState[S_OF_f_A69] || boolState[S_OF_i_A69] )
	{
		boolState[S_OF_A69]  =  true;
	}

	if (boolState[S_OF_f_A70] || boolState[S_OF_i_A70] )
	{
		boolState[S_OF_A70]  =  true;
	}

	if (boolState[S_OF_f_A71] || boolState[S_OF_i_A71] )
	{
		boolState[S_OF_A71]  =  true;
	}

	if (boolState[S_OF_f_A72] || boolState[S_OF_i_A72] )
	{
		boolState[S_OF_A72]  =  true;
	}

	if (boolState[S_OF_f_A73] || boolState[S_OF_i_A73] )
	{
		boolState[S_OF_A73]  =  true;
	}

	if (boolState[S_OF_f_A74] || boolState[S_OF_i_A74] )
	{
		boolState[S_OF_A74]  =  true;
	}

	if (boolState[S_OF_f_A75] || boolState[S_OF_i_A75] )
	{
		boolState[S_OF_A75]  =  true;
	}

	if (boolState[S_OF_f_A76] || boolState[S_OF_i_A76] )
	{
		boolState[S_OF_A76]  =  true;
	}

	if (boolState[S_OF_f_A77] || boolState[S_OF_i_A77] )
	{
		boolState[S_OF_A77]  =  true;
	}

	if (boolState[S_OF_A1] && boolState[S_OF_A59] )
	{
		boolState[S_OF_A78]  =  true;
	}

	if (boolState[S_OF_A48] && boolState[S_OF_A80] )
	{
		boolState[S_OF_A79]  =  true;
	}

	if (((boolState[S_OF_A191] || boolState[S_OF_A52]) || boolState[S_OF_A60]) || boolState[S_OF_A7] )
	{
		boolState[S_OF_A8]  =  true;
	}

	if (boolState[S_OF_A11] || boolState[S_OF_A14] )
	{
		boolState[S_OF_A80]  =  true;
	}

	if (boolState[S_OF_f_A81] || boolState[S_OF_i_A81] )
	{
		boolState[S_OF_A81]  =  true;
	}

	if ((3 <= (boolState[S_OF_A83] + boolState[S_OF_A84] + boolState[S_OF_A85] + boolState[S_OF_A86] +  boolState[S_OF_A87] + boolState[S_OF_A88] + boolState[S_OF_A89] + boolState[S_OF_A90])) )
	{
		boolState[S_OF_A82]  =  true;
	}

	if (boolState[S_OF_A91] && boolState[S_OF_A93] )
	{
		boolState[S_OF_A94]  =  true;
	}

	if (boolState[S_OF_A96] && boolState[S_OF_A97] )
	{
		boolState[S_OF_A98]  =  true;
	}

	if (boolState[S_OF_A0] )
	{
		boolState[S_OF_UE_1]  =  true;
	}

}


void storm::figaro::FigaroProgram_vgs_8_Trim_Article_No_repair::runOnceInteractionStep_propagate_effect_required()
{
	if ( !boolState[required_OF_UE_1] )
	{
		boolState[required_OF_A0]  =  false;
	}

	if (boolState[relevant_evt_OF_UE_1] && ( !boolState[S_OF_UE_1]) )
	{
		boolState[relevant_evt_OF_A0]  =  true;
	}

	if ( !boolState[required_OF_A78] )
	{
		boolState[required_OF_A1]  =  false;
	}

	if (boolState[relevant_evt_OF_A78] && ( !boolState[S_OF_A78]) )
	{
		boolState[relevant_evt_OF_A1]  =  true;
	}

	if ( !boolState[required_OF_A11] )
	{
		boolState[required_OF_A10]  =  false;
	}

	if (boolState[relevant_evt_OF_A11] && ( !boolState[S_OF_A11]) )
	{
		boolState[relevant_evt_OF_A10]  =  true;
	}

	if ( !boolState[S_OF_A102] )
	{
		boolState[required_OF_A100]  =  false;
	}

	if (boolState[relevant_evt_OF_A103] && ( !boolState[S_OF_A103]) )
	{
		boolState[relevant_evt_OF_A100]  =  true;
	}

	if ( !boolState[required_OF_A187] )
	{
		boolState[required_OF_A101]  =  false;
	}

	if (boolState[relevant_evt_OF_A187] && ( !boolState[S_OF_A187]) )
	{
		boolState[relevant_evt_OF_A101]  =  true;
	}

	if ( !boolState[required_OF_A103] )
	{
		boolState[required_OF_A102]  =  false;
	}

	if ((boolState[relevant_evt_OF_A103] && ( !boolState[S_OF_A103])) || ( !boolState[S_OF_A100]) )
	{
		boolState[relevant_evt_OF_A102]  =  true;
	}

	if ( !boolState[required_OF_A187] )
	{
		boolState[required_OF_A103]  =  false;
	}

	if (boolState[relevant_evt_OF_A187] && ( !boolState[S_OF_A187]) )
	{
		boolState[relevant_evt_OF_A103]  =  true;
	}

	if ( !boolState[S_OF_A106] )
	{
		boolState[required_OF_A105]  =  false;
	}

	if (boolState[relevant_evt_OF_A107] && ( !boolState[S_OF_A107]) )
	{
		boolState[relevant_evt_OF_A105]  =  true;
	}

	if ( !boolState[required_OF_A107] )
	{
		boolState[required_OF_A106]  =  false;
	}

	if ((boolState[relevant_evt_OF_A107] && ( !boolState[S_OF_A107])) || ( !boolState[S_OF_A105]) )
	{
		boolState[relevant_evt_OF_A106]  =  true;
	}

	if ( !boolState[required_OF_A187] )
	{
		boolState[required_OF_A107]  =  false;
	}

	if (boolState[relevant_evt_OF_A187] && ( !boolState[S_OF_A187]) )
	{
		boolState[relevant_evt_OF_A107]  =  true;
	}

	if ( !boolState[S_OF_A111] )
	{
		boolState[required_OF_A109]  =  false;
	}

	if (boolState[relevant_evt_OF_A112] && ( !boolState[S_OF_A112]) )
	{
		boolState[relevant_evt_OF_A109]  =  true;
	}

	if ( !boolState[required_OF_A80] )
	{
		boolState[required_OF_A11]  =  false;
	}

	if ((boolState[relevant_evt_OF_A80] && ( !boolState[S_OF_A80])) || ( !boolState[S_OF_i_A54]) )
	{
		boolState[relevant_evt_OF_A11]  =  true;
	}

	if ( !boolState[required_OF_A188] )
	{
		boolState[required_OF_A110]  =  false;
	}

	if (boolState[relevant_evt_OF_A188] && ( !boolState[S_OF_A188]) )
	{
		boolState[relevant_evt_OF_A110]  =  true;
	}

	if ( !boolState[required_OF_A112] )
	{
		boolState[required_OF_A111]  =  false;
	}

	if ((boolState[relevant_evt_OF_A112] && ( !boolState[S_OF_A112])) || ( !boolState[S_OF_A109]) )
	{
		boolState[relevant_evt_OF_A111]  =  true;
	}

	if ( !boolState[required_OF_A188] )
	{
		boolState[required_OF_A112]  =  false;
	}

	if (boolState[relevant_evt_OF_A188] && ( !boolState[S_OF_A188]) )
	{
		boolState[relevant_evt_OF_A112]  =  true;
	}

	if ( !boolState[S_OF_A115] )
	{
		boolState[required_OF_A114]  =  false;
	}

	if (boolState[relevant_evt_OF_A116] && ( !boolState[S_OF_A116]) )
	{
		boolState[relevant_evt_OF_A114]  =  true;
	}

	if ( !boolState[required_OF_A116] )
	{
		boolState[required_OF_A115]  =  false;
	}

	if ((boolState[relevant_evt_OF_A116] && ( !boolState[S_OF_A116])) || ( !boolState[S_OF_A114]) )
	{
		boolState[relevant_evt_OF_A115]  =  true;
	}

	if ( !boolState[required_OF_A188] )
	{
		boolState[required_OF_A116]  =  false;
	}

	if (boolState[relevant_evt_OF_A188] && ( !boolState[S_OF_A188]) )
	{
		boolState[relevant_evt_OF_A116]  =  true;
	}

	if ( !boolState[S_OF_A120] )
	{
		boolState[required_OF_A118]  =  false;
	}

	if (boolState[relevant_evt_OF_A121] && ( !boolState[S_OF_A121]) )
	{
		boolState[relevant_evt_OF_A118]  =  true;
	}

	if ( !boolState[required_OF_A189] )
	{
		boolState[required_OF_A119]  =  false;
	}

	if (boolState[relevant_evt_OF_A189] && ( !boolState[S_OF_A189]) )
	{
		boolState[relevant_evt_OF_A119]  =  true;
	}

	if ( !boolState[required_OF_A121] )
	{
		boolState[required_OF_A120]  =  false;
	}

	if ((boolState[relevant_evt_OF_A121] && ( !boolState[S_OF_A121])) || ( !boolState[S_OF_A118]) )
	{
		boolState[relevant_evt_OF_A120]  =  true;
	}

	if ( !boolState[required_OF_A189] )
	{
		boolState[required_OF_A121]  =  false;
	}

	if (boolState[relevant_evt_OF_A189] && ( !boolState[S_OF_A189]) )
	{
		boolState[relevant_evt_OF_A121]  =  true;
	}

	if ( !boolState[S_OF_A124] )
	{
		boolState[required_OF_A123]  =  false;
	}

	if (boolState[relevant_evt_OF_A125] && ( !boolState[S_OF_A125]) )
	{
		boolState[relevant_evt_OF_A123]  =  true;
	}

	if ( !boolState[required_OF_A125] )
	{
		boolState[required_OF_A124]  =  false;
	}

	if ((boolState[relevant_evt_OF_A125] && ( !boolState[S_OF_A125])) || ( !boolState[S_OF_A123]) )
	{
		boolState[relevant_evt_OF_A124]  =  true;
	}

	if ( !boolState[required_OF_A189] )
	{
		boolState[required_OF_A125]  =  false;
	}

	if (boolState[relevant_evt_OF_A189] && ( !boolState[S_OF_A189]) )
	{
		boolState[relevant_evt_OF_A125]  =  true;
	}

	if ( !boolState[S_OF_A129] )
	{
		boolState[required_OF_A127]  =  false;
	}

	if (boolState[relevant_evt_OF_A130] && ( !boolState[S_OF_A130]) )
	{
		boolState[relevant_evt_OF_A127]  =  true;
	}

	if ( !boolState[required_OF_A190] )
	{
		boolState[required_OF_A128]  =  false;
	}

	if (boolState[relevant_evt_OF_A190] && ( !boolState[S_OF_A190]) )
	{
		boolState[relevant_evt_OF_A128]  =  true;
	}

	if ( !boolState[required_OF_A130] )
	{
		boolState[required_OF_A129]  =  false;
	}

	if ((boolState[relevant_evt_OF_A130] && ( !boolState[S_OF_A130])) || ( !boolState[S_OF_A127]) )
	{
		boolState[relevant_evt_OF_A129]  =  true;
	}

	if ( !boolState[required_OF_A14] )
	{
		boolState[required_OF_A13]  =  false;
	}

	if (boolState[relevant_evt_OF_A14] && ( !boolState[S_OF_A14]) )
	{
		boolState[relevant_evt_OF_A13]  =  true;
	}

	if ( !boolState[required_OF_A190] )
	{
		boolState[required_OF_A130]  =  false;
	}

	if (boolState[relevant_evt_OF_A190] && ( !boolState[S_OF_A190]) )
	{
		boolState[relevant_evt_OF_A130]  =  true;
	}

	if ( !boolState[S_OF_A133] )
	{
		boolState[required_OF_A132]  =  false;
	}

	if (boolState[relevant_evt_OF_A134] && ( !boolState[S_OF_A134]) )
	{
		boolState[relevant_evt_OF_A132]  =  true;
	}

	if ( !boolState[required_OF_A134] )
	{
		boolState[required_OF_A133]  =  false;
	}

	if ((boolState[relevant_evt_OF_A134] && ( !boolState[S_OF_A134])) || ( !boolState[S_OF_A132]) )
	{
		boolState[relevant_evt_OF_A133]  =  true;
	}

	if ( !boolState[required_OF_A190] )
	{
		boolState[required_OF_A134]  =  false;
	}

	if (boolState[relevant_evt_OF_A190] && ( !boolState[S_OF_A190]) )
	{
		boolState[relevant_evt_OF_A134]  =  true;
	}

	if ( !boolState[S_OF_A138] )
	{
		boolState[required_OF_A136]  =  false;
	}

	if (boolState[relevant_evt_OF_A139] && ( !boolState[S_OF_A139]) )
	{
		boolState[relevant_evt_OF_A136]  =  true;
	}

	if ( !boolState[required_OF_A191] )
	{
		boolState[required_OF_A137]  =  false;
	}

	if (boolState[relevant_evt_OF_A191] && ( !boolState[S_OF_A191]) )
	{
		boolState[relevant_evt_OF_A137]  =  true;
	}

	if ( !boolState[required_OF_A139] )
	{
		boolState[required_OF_A138]  =  false;
	}

	if ((boolState[relevant_evt_OF_A139] && ( !boolState[S_OF_A139])) || ( !boolState[S_OF_A136]) )
	{
		boolState[relevant_evt_OF_A138]  =  true;
	}

	if ( !boolState[required_OF_A191] )
	{
		boolState[required_OF_A139]  =  false;
	}

	if (boolState[relevant_evt_OF_A191] && ( !boolState[S_OF_A191]) )
	{
		boolState[relevant_evt_OF_A139]  =  true;
	}

	if ( !boolState[required_OF_A80] )
	{
		boolState[required_OF_A14]  =  false;
	}

	if ((boolState[relevant_evt_OF_A80] && ( !boolState[S_OF_A80])) || (( !boolState[S_OF_i_A55])   || ( !boolState[S_OF_i_A61])) )
	{
		boolState[relevant_evt_OF_A14]  =  true;
	}

	if ( !boolState[S_OF_A142] )
	{
		boolState[required_OF_A141]  =  false;
	}

	if (boolState[relevant_evt_OF_A143] && ( !boolState[S_OF_A143]) )
	{
		boolState[relevant_evt_OF_A141]  =  true;
	}

	if ( !boolState[required_OF_A143] )
	{
		boolState[required_OF_A142]  =  false;
	}

	if ((boolState[relevant_evt_OF_A143] && ( !boolState[S_OF_A143])) || ( !boolState[S_OF_A141]) )
	{
		boolState[relevant_evt_OF_A142]  =  true;
	}

	if ( !boolState[required_OF_A191] )
	{
		boolState[required_OF_A143]  =  false;
	}

	if (boolState[relevant_evt_OF_A191] && ( !boolState[S_OF_A191]) )
	{
		boolState[relevant_evt_OF_A143]  =  true;
	}

	if ( !boolState[S_OF_A147] )
	{
		boolState[required_OF_A145]  =  false;
	}

	if (boolState[relevant_evt_OF_A148] && ( !boolState[S_OF_A148]) )
	{
		boolState[relevant_evt_OF_A145]  =  true;
	}

	if ( !boolState[required_OF_A192] )
	{
		boolState[required_OF_A146]  =  false;
	}

	if (boolState[relevant_evt_OF_A192] && ( !boolState[S_OF_A192]) )
	{
		boolState[relevant_evt_OF_A146]  =  true;
	}

	if ( !boolState[required_OF_A148] )
	{
		boolState[required_OF_A147]  =  false;
	}

	if ((boolState[relevant_evt_OF_A148] && ( !boolState[S_OF_A148])) || ( !boolState[S_OF_A145]) )
	{
		boolState[relevant_evt_OF_A147]  =  true;
	}

	if ( !boolState[required_OF_A192] )
	{
		boolState[required_OF_A148]  =  false;
	}

	if (boolState[relevant_evt_OF_A192] && ( !boolState[S_OF_A192]) )
	{
		boolState[relevant_evt_OF_A148]  =  true;
	}

	if ( !boolState[S_OF_A151] )
	{
		boolState[required_OF_A150]  =  false;
	}

	if (boolState[relevant_evt_OF_A152] && ( !boolState[S_OF_A152]) )
	{
		boolState[relevant_evt_OF_A150]  =  true;
	}

	if ( !boolState[required_OF_A152] )
	{
		boolState[required_OF_A151]  =  false;
	}

	if ((boolState[relevant_evt_OF_A152] && ( !boolState[S_OF_A152])) || ( !boolState[S_OF_A150]) )
	{
		boolState[relevant_evt_OF_A151]  =  true;
	}

	if ( !boolState[required_OF_A192] )
	{
		boolState[required_OF_A152]  =  false;
	}

	if (boolState[relevant_evt_OF_A192] && ( !boolState[S_OF_A192]) )
	{
		boolState[relevant_evt_OF_A152]  =  true;
	}

	if ( !boolState[S_OF_A156] )
	{
		boolState[required_OF_A154]  =  false;
	}

	if (boolState[relevant_evt_OF_A157] && ( !boolState[S_OF_A157]) )
	{
		boolState[relevant_evt_OF_A154]  =  true;
	}

	if ( !boolState[required_OF_A193] )
	{
		boolState[required_OF_A155]  =  false;
	}

	if (boolState[relevant_evt_OF_A193] && ( !boolState[S_OF_A193]) )
	{
		boolState[relevant_evt_OF_A155]  =  true;
	}

	if ( !boolState[required_OF_A157] )
	{
		boolState[required_OF_A156]  =  false;
	}

	if ((boolState[relevant_evt_OF_A157] && ( !boolState[S_OF_A157])) || ( !boolState[S_OF_A154]) )
	{
		boolState[relevant_evt_OF_A156]  =  true;
	}

	if ( !boolState[required_OF_A193] )
	{
		boolState[required_OF_A157]  =  false;
	}

	if (boolState[relevant_evt_OF_A193] && ( !boolState[S_OF_A193]) )
	{
		boolState[relevant_evt_OF_A157]  =  true;
	}

	if ( !boolState[S_OF_A160] )
	{
		boolState[required_OF_A159]  =  false;
	}

	if (boolState[relevant_evt_OF_A161] && ( !boolState[S_OF_A161]) )
	{
		boolState[relevant_evt_OF_A159]  =  true;
	}

	if ( !boolState[required_OF_A17] )
	{
		boolState[required_OF_A16]  =  false;
	}

	if (boolState[relevant_evt_OF_A17] && ( !boolState[S_OF_A17]) )
	{
		boolState[relevant_evt_OF_A16]  =  true;
	}

	if ( !boolState[required_OF_A161] )
	{
		boolState[required_OF_A160]  =  false;
	}

	if ((boolState[relevant_evt_OF_A161] && ( !boolState[S_OF_A161])) || ( !boolState[S_OF_A159]) )
	{
		boolState[relevant_evt_OF_A160]  =  true;
	}

	if ( !boolState[required_OF_A193] )
	{
		boolState[required_OF_A161]  =  false;
	}

	if (boolState[relevant_evt_OF_A193] && ( !boolState[S_OF_A193]) )
	{
		boolState[relevant_evt_OF_A161]  =  true;
	}

	if ( !boolState[S_OF_A165] )
	{
		boolState[required_OF_A163]  =  false;
	}

	if (boolState[relevant_evt_OF_A166] && ( !boolState[S_OF_A166]) )
	{
		boolState[relevant_evt_OF_A163]  =  true;
	}

	if ( !boolState[required_OF_A173] )
	{
		boolState[required_OF_A164]  =  false;
	}

	if (boolState[relevant_evt_OF_A173] && ( !boolState[S_OF_A173]) )
	{
		boolState[relevant_evt_OF_A164]  =  true;
	}

	if ( !boolState[required_OF_A166] )
	{
		boolState[required_OF_A165]  =  false;
	}

	if ((boolState[relevant_evt_OF_A166] && ( !boolState[S_OF_A166])) || ( !boolState[S_OF_A163]) )
	{
		boolState[relevant_evt_OF_A165]  =  true;
	}

	if ( !boolState[required_OF_A173] )
	{
		boolState[required_OF_A166]  =  false;
	}

	if (boolState[relevant_evt_OF_A173] && ( !boolState[S_OF_A173]) )
	{
		boolState[relevant_evt_OF_A166]  =  true;
	}

	if ( !boolState[S_OF_A170] )
	{
		boolState[required_OF_A168]  =  false;
	}

	if (boolState[relevant_evt_OF_A171] && ( !boolState[S_OF_A171]) )
	{
		boolState[relevant_evt_OF_A168]  =  true;
	}

	if ( !boolState[required_OF_A173] )
	{
		boolState[required_OF_A169]  =  false;
	}

	if (boolState[relevant_evt_OF_A173] && ( !boolState[S_OF_A173]) )
	{
		boolState[relevant_evt_OF_A169]  =  true;
	}

	if ( !boolState[required_OF_A48] )
	{
		boolState[required_OF_A17]  =  false;
	}

	if ((boolState[relevant_evt_OF_A48] && ( !boolState[S_OF_A48])) || ( !boolState[S_OF_i_A56]) )
	{
		boolState[relevant_evt_OF_A17]  =  true;
	}

	if ( !boolState[required_OF_A171] )
	{
		boolState[required_OF_A170]  =  false;
	}

	if ((boolState[relevant_evt_OF_A171] && ( !boolState[S_OF_A171])) || ( !boolState[S_OF_A168]) )
	{
		boolState[relevant_evt_OF_A170]  =  true;
	}

	if ( !boolState[required_OF_A173] )
	{
		boolState[required_OF_A171]  =  false;
	}

	if (boolState[relevant_evt_OF_A173] && ( !boolState[S_OF_A173]) )
	{
		boolState[relevant_evt_OF_A171]  =  true;
	}

	if ( !boolState[required_OF_A185] )
	{
		boolState[required_OF_A173]  =  false;
	}

	if (boolState[relevant_evt_OF_A185] && ( !boolState[S_OF_A185]) )
	{
		boolState[relevant_evt_OF_A173]  =  true;
	}

	if ( !boolState[S_OF_A176] )
	{
		boolState[required_OF_A174]  =  false;
	}

	if (boolState[relevant_evt_OF_A177] && ( !boolState[S_OF_A177]) )
	{
		boolState[relevant_evt_OF_A174]  =  true;
	}

	if ( !boolState[required_OF_A184] )
	{
		boolState[required_OF_A175]  =  false;
	}

	if (boolState[relevant_evt_OF_A184] && ( !boolState[S_OF_A184]) )
	{
		boolState[relevant_evt_OF_A175]  =  true;
	}

	if ( !boolState[required_OF_A177] )
	{
		boolState[required_OF_A176]  =  false;
	}

	if ((boolState[relevant_evt_OF_A177] && ( !boolState[S_OF_A177])) || ( !boolState[S_OF_A174]) )
	{
		boolState[relevant_evt_OF_A176]  =  true;
	}

	if ( !boolState[required_OF_A184] )
	{
		boolState[required_OF_A177]  =  false;
	}

	if (boolState[relevant_evt_OF_A184] && ( !boolState[S_OF_A184]) )
	{
		boolState[relevant_evt_OF_A177]  =  true;
	}

	if ( !boolState[S_OF_A181] )
	{
		boolState[required_OF_A179]  =  false;
	}

	if (boolState[relevant_evt_OF_A182] && ( !boolState[S_OF_A182]) )
	{
		boolState[relevant_evt_OF_A179]  =  true;
	}

	if ( !boolState[required_OF_A184] )
	{
		boolState[required_OF_A180]  =  false;
	}

	if (boolState[relevant_evt_OF_A184] && ( !boolState[S_OF_A184]) )
	{
		boolState[relevant_evt_OF_A180]  =  true;
	}

	if ( !boolState[required_OF_A182] )
	{
		boolState[required_OF_A181]  =  false;
	}

	if ((boolState[relevant_evt_OF_A182] && ( !boolState[S_OF_A182])) || ( !boolState[S_OF_A179]) )
	{
		boolState[relevant_evt_OF_A181]  =  true;
	}

	if ( !boolState[required_OF_A184] )
	{
		boolState[required_OF_A182]  =  false;
	}

	if (boolState[relevant_evt_OF_A184] && ( !boolState[S_OF_A184]) )
	{
		boolState[relevant_evt_OF_A182]  =  true;
	}

	if ( !boolState[required_OF_A185] )
	{
		boolState[required_OF_A184]  =  false;
	}

	if (boolState[relevant_evt_OF_A185] && ( !boolState[S_OF_A185]) )
	{
		boolState[relevant_evt_OF_A184]  =  true;
	}

	if ( !boolState[required_OF_A26] )
	{
		boolState[required_OF_A185]  =  false;
	}

	if (boolState[relevant_evt_OF_A26] && ( !boolState[S_OF_A26]) )
	{
		boolState[relevant_evt_OF_A185]  =  true;
	}

	if ( !boolState[required_OF_A11] )
	{
		boolState[required_OF_A186]  =  false;
	}

	if (boolState[relevant_evt_OF_A11] && ( !boolState[S_OF_A11]) )
	{
		boolState[relevant_evt_OF_A186]  =  true;
	}

	if ( !boolState[required_OF_A14] )
	{
		boolState[required_OF_A187]  =  false;
	}

	if (boolState[relevant_evt_OF_A14] && ( !boolState[S_OF_A14]) )
	{
		boolState[relevant_evt_OF_A187]  =  true;
	}

	if ( !boolState[required_OF_A17] )
	{
		boolState[required_OF_A188]  =  false;
	}

	if (boolState[relevant_evt_OF_A17] && ( !boolState[S_OF_A17]) )
	{
		boolState[relevant_evt_OF_A188]  =  true;
	}

	if ( !boolState[required_OF_A20] )
	{
		boolState[required_OF_A189]  =  false;
	}

	if (boolState[relevant_evt_OF_A20] && ( !boolState[S_OF_A20]) )
	{
		boolState[relevant_evt_OF_A189]  =  true;
	}

	if ( !boolState[required_OF_A20] )
	{
		boolState[required_OF_A19]  =  false;
	}

	if (boolState[relevant_evt_OF_A20] && ( !boolState[S_OF_A20]) )
	{
		boolState[relevant_evt_OF_A19]  =  true;
	}

	if ( !boolState[required_OF_A5] )
	{
		boolState[required_OF_A190]  =  false;
	}

	if (boolState[relevant_evt_OF_A5] && ( !boolState[S_OF_A5]) )
	{
		boolState[relevant_evt_OF_A190]  =  true;
	}

	if ( !boolState[required_OF_A8] )
	{
		boolState[required_OF_A191]  =  false;
	}

	if (boolState[relevant_evt_OF_A8] && ( !boolState[S_OF_A8]) )
	{
		boolState[relevant_evt_OF_A191]  =  true;
	}

	if ( !boolState[required_OF_A23] )
	{
		boolState[required_OF_A192]  =  false;
	}

	if (boolState[relevant_evt_OF_A23] && ( !boolState[S_OF_A23]) )
	{
		boolState[relevant_evt_OF_A192]  =  true;
	}

	if ( !boolState[required_OF_A26] )
	{
		boolState[required_OF_A193]  =  false;
	}

	if (boolState[relevant_evt_OF_A26] && ( !boolState[S_OF_A26]) )
	{
		boolState[relevant_evt_OF_A193]  =  true;
	}

	if ( !boolState[required_OF_A0] )
	{
		boolState[required_OF_A2]  =  false;
	}

	if ((boolState[relevant_evt_OF_A0] && ( !boolState[S_OF_A0])) || ((( !boolState[S_OF_i_A69]) || ( !boolState[S_OF_i_A70])) || ( !boolState[S_OF_i_A71])) )
	{
		boolState[relevant_evt_OF_A2]  =  true;
	}

	if ( !boolState[required_OF_A48] )
	{
		boolState[required_OF_A20]  =  false;
	}

	if ((boolState[relevant_evt_OF_A48] && ( !boolState[S_OF_A48])) || (( !boolState[S_OF_i_A57])   || ( !boolState[S_OF_i_A64])) )
	{
		boolState[relevant_evt_OF_A20]  =  true;
	}

	if ( !boolState[required_OF_A23] )
	{
		boolState[required_OF_A22]  =  false;
	}

	if (boolState[relevant_evt_OF_A23] && ( !boolState[S_OF_A23]) )
	{
		boolState[relevant_evt_OF_A22]  =  true;
	}

	if ( !boolState[required_OF_A0] )
	{
		boolState[required_OF_A23]  =  false;
	}

	if ((boolState[relevant_evt_OF_A0] && ( !boolState[S_OF_A0])) || (((( !boolState[S_OF_i_A60])   || ( !boolState[S_OF_i_A63])) || ( !boolState[S_OF_i_A66])) || ( !boolState[S_OF_i_A67])) )
	{
		boolState[relevant_evt_OF_A23]  =  true;
	}

	if ( !boolState[required_OF_A26] )
	{
		boolState[required_OF_A25]  =  false;
	}

	if (boolState[relevant_evt_OF_A26] && ( !boolState[S_OF_A26]) )
	{
		boolState[relevant_evt_OF_A25]  =  true;
	}

	if ( !boolState[required_OF_A0] )
	{
		boolState[required_OF_A26]  =  false;
	}

	if ((boolState[relevant_evt_OF_A0] && ( !boolState[S_OF_A0])) || ( !boolState[S_OF_i_A68]) )
	{
		boolState[relevant_evt_OF_A26]  =  true;
	}

	if ( !boolState[required_OF_A29] )
	{
		boolState[required_OF_A28]  =  false;
	}

	if (boolState[relevant_evt_OF_A29] && ( !boolState[S_OF_A29]) )
	{
		boolState[relevant_evt_OF_A28]  =  true;
	}

	if ( !boolState[required_OF_A0] )
	{
		boolState[required_OF_A29]  =  false;
	}

	if ((boolState[relevant_evt_OF_A0] && ( !boolState[S_OF_A0])) || ( !boolState[S_OF_i_A72]) )
	{
		boolState[relevant_evt_OF_A29]  =  true;
	}

	if ( !boolState[required_OF_A32] )
	{
		boolState[required_OF_A31]  =  false;
	}

	if (boolState[relevant_evt_OF_A32] && ( !boolState[S_OF_A32]) )
	{
		boolState[relevant_evt_OF_A31]  =  true;
	}

	if ( !boolState[required_OF_A0] )
	{
		boolState[required_OF_A32]  =  false;
	}

	if ((boolState[relevant_evt_OF_A0] && ( !boolState[S_OF_A0])) || ( !boolState[S_OF_i_A73]) )
	{
		boolState[relevant_evt_OF_A32]  =  true;
	}

	if ( !boolState[required_OF_A35] )
	{
		boolState[required_OF_A34]  =  false;
	}

	if (boolState[relevant_evt_OF_A35] && ( !boolState[S_OF_A35]) )
	{
		boolState[relevant_evt_OF_A34]  =  true;
	}

	if ( !boolState[required_OF_A0] )
	{
		boolState[required_OF_A35]  =  false;
	}

	if ((boolState[relevant_evt_OF_A0] && ( !boolState[S_OF_A0])) || ( !boolState[S_OF_i_A74]) )
	{
		boolState[relevant_evt_OF_A35]  =  true;
	}

	if ( !boolState[required_OF_A38] )
	{
		boolState[required_OF_A37]  =  false;
	}

	if (boolState[relevant_evt_OF_A38] && ( !boolState[S_OF_A38]) )
	{
		boolState[relevant_evt_OF_A37]  =  true;
	}

	if ( !boolState[required_OF_A0] )
	{
		boolState[required_OF_A38]  =  false;
	}

	if ((boolState[relevant_evt_OF_A0] && ( !boolState[S_OF_A0])) || ( !boolState[S_OF_i_A75]) )
	{
		boolState[relevant_evt_OF_A38]  =  true;
	}

	if ( !boolState[required_OF_A5] )
	{
		boolState[required_OF_A4]  =  false;
	}

	if (boolState[relevant_evt_OF_A5] && ( !boolState[S_OF_A5]) )
	{
		boolState[relevant_evt_OF_A4]  =  true;
	}

	if ( !boolState[required_OF_A41] )
	{
		boolState[required_OF_A40]  =  false;
	}

	if (boolState[relevant_evt_OF_A41] && ( !boolState[S_OF_A41]) )
	{
		boolState[relevant_evt_OF_A40]  =  true;
	}

	if ( !boolState[required_OF_A0] )
	{
		boolState[required_OF_A41]  =  false;
	}

	if ((boolState[relevant_evt_OF_A0] && ( !boolState[S_OF_A0])) || ( !boolState[S_OF_i_A76]) )
	{
		boolState[relevant_evt_OF_A41]  =  true;
	}

	if ( !boolState[required_OF_A45] )
	{
		boolState[required_OF_A43]  =  false;
	}

	if (boolState[relevant_evt_OF_A45] && ( !boolState[S_OF_A45]) )
	{
		boolState[relevant_evt_OF_A43]  =  true;
	}

	if ( !boolState[required_OF_A0] )
	{
		boolState[required_OF_A44]  =  false;
	}

	if (boolState[relevant_evt_OF_A0] && ( !boolState[S_OF_A0]) )
	{
		boolState[relevant_evt_OF_A44]  =  true;
	}

	if ( !boolState[required_OF_A0] )
	{
		boolState[required_OF_A45]  =  false;
	}

	if ((boolState[relevant_evt_OF_A0] && ( !boolState[S_OF_A0])) || ( !boolState[S_OF_i_A77]) )
	{
		boolState[relevant_evt_OF_A45]  =  true;
	}

	if ( !boolState[required_OF_A50] )
	{
		boolState[required_OF_A47]  =  false;
	}

	if (boolState[relevant_evt_OF_A50] && ( !boolState[S_OF_A50]) )
	{
		boolState[relevant_evt_OF_A47]  =  true;
	}

	if ( !boolState[required_OF_A79] )
	{
		boolState[required_OF_A48]  =  false;
	}

	if (boolState[relevant_evt_OF_A79] && ( !boolState[S_OF_A79]) )
	{
		boolState[relevant_evt_OF_A48]  =  true;
	}

	if ( !boolState[required_OF_A44] )
	{
		boolState[required_OF_A49]  =  false;
	}

	if (boolState[relevant_evt_OF_A44] && ( !boolState[S_OF_A44]) )
	{
		boolState[relevant_evt_OF_A49]  =  true;
	}

	if ( !boolState[required_OF_A49] )
	{
		boolState[required_OF_A5]  =  false;
	}

	if ((boolState[relevant_evt_OF_A49] && ( !boolState[S_OF_A49])) || ( !boolState[S_OF_i_A52]) )
	{
		boolState[relevant_evt_OF_A5]  =  true;
	}

	if ( !boolState[required_OF_A0] )
	{
		boolState[required_OF_A50]  =  false;
	}

	if ((boolState[relevant_evt_OF_A0] && ( !boolState[S_OF_A0])) || ( !boolState[S_OF_i_A81]) )
	{
		boolState[relevant_evt_OF_A50]  =  true;
	}

	if ( !boolState[required_OF_A8] )
	{
		boolState[required_OF_A52]  =  false;
	}

	if (boolState[relevant_evt_OF_A8] && ( !boolState[S_OF_A8]) )
	{
		boolState[relevant_evt_OF_A52]  =  true;
	}

	if ( !boolState[required_OF_A5] )
	{
		boolState[required_OF_A53]  =  false;
	}

	if (boolState[relevant_evt_OF_A5] && ( !boolState[S_OF_A5]) )
	{
		boolState[relevant_evt_OF_A53]  =  true;
	}

	if ( !boolState[required_OF_A14] )
	{
		boolState[required_OF_A54]  =  false;
	}

	if (boolState[relevant_evt_OF_A14] && ( !boolState[S_OF_A14]) )
	{
		boolState[relevant_evt_OF_A54]  =  true;
	}

	if ( !boolState[required_OF_A11] )
	{
		boolState[required_OF_A55]  =  false;
	}

	if (boolState[relevant_evt_OF_A11] && ( !boolState[S_OF_A11]) )
	{
		boolState[relevant_evt_OF_A55]  =  true;
	}

	if ( !boolState[required_OF_A20] )
	{
		boolState[required_OF_A56]  =  false;
	}

	if (boolState[relevant_evt_OF_A20] && ( !boolState[S_OF_A20]) )
	{
		boolState[relevant_evt_OF_A56]  =  true;
	}

	if ( !boolState[required_OF_A17] )
	{
		boolState[required_OF_A57]  =  false;
	}

	if (boolState[relevant_evt_OF_A17] && ( !boolState[S_OF_A17]) )
	{
		boolState[relevant_evt_OF_A57]  =  true;
	}

	if ( !boolState[required_OF_A59] )
	{
		boolState[required_OF_A58]  =  false;
	}

	if (boolState[relevant_evt_OF_A59] && ( !boolState[S_OF_A59]) )
	{
		boolState[relevant_evt_OF_A58]  =  true;
	}

	if ( !boolState[required_OF_A78] )
	{
		boolState[required_OF_A59]  =  false;
	}

	if (boolState[relevant_evt_OF_A78] && ( !boolState[S_OF_A78]) )
	{
		boolState[relevant_evt_OF_A59]  =  true;
	}

	if ( !boolState[required_OF_A8] )
	{
		boolState[required_OF_A60]  =  false;
	}

	if (boolState[relevant_evt_OF_A8] && ( !boolState[S_OF_A8]) )
	{
		boolState[relevant_evt_OF_A60]  =  true;
	}

	if ( !boolState[required_OF_A62] )
	{
		boolState[required_OF_A61]  =  false;
	}

	if (boolState[relevant_evt_OF_A62] && ( !boolState[S_OF_A62]) )
	{
		boolState[relevant_evt_OF_A61]  =  true;
	}

	if ( !boolState[required_OF_A1] )
	{
		boolState[required_OF_A62]  =  false;
	}

	if (boolState[relevant_evt_OF_A1] && ( !boolState[S_OF_A1]) )
	{
		boolState[relevant_evt_OF_A62]  =  true;
	}

	if ( !boolState[required_OF_A14] )
	{
		boolState[required_OF_A63]  =  false;
	}

	if (boolState[relevant_evt_OF_A14] && ( !boolState[S_OF_A14]) )
	{
		boolState[relevant_evt_OF_A63]  =  true;
	}

	if ( !boolState[required_OF_A65] )
	{
		boolState[required_OF_A64]  =  false;
	}

	if (boolState[relevant_evt_OF_A65] && ( !boolState[S_OF_A65]) )
	{
		boolState[relevant_evt_OF_A64]  =  true;
	}

	if ( !boolState[required_OF_A1] )
	{
		boolState[required_OF_A65]  =  false;
	}

	if (boolState[relevant_evt_OF_A1] && ( !boolState[S_OF_A1]) )
	{
		boolState[relevant_evt_OF_A65]  =  true;
	}

	if ( !boolState[required_OF_A20] )
	{
		boolState[required_OF_A66]  =  false;
	}

	if (boolState[relevant_evt_OF_A20] && ( !boolState[S_OF_A20]) )
	{
		boolState[relevant_evt_OF_A66]  =  true;
	}

	if ( !boolState[required_OF_A26] )
	{
		boolState[required_OF_A67]  =  false;
	}

	if (boolState[relevant_evt_OF_A26] && ( !boolState[S_OF_A26]) )
	{
		boolState[relevant_evt_OF_A67]  =  true;
	}

	if ( !boolState[required_OF_A23] )
	{
		boolState[required_OF_A68]  =  false;
	}

	if (boolState[relevant_evt_OF_A23] && ( !boolState[S_OF_A23]) )
	{
		boolState[relevant_evt_OF_A68]  =  true;
	}

	if ( !boolState[required_OF_A5] )
	{
		boolState[required_OF_A69]  =  false;
	}

	if (boolState[relevant_evt_OF_A5] && ( !boolState[S_OF_A5]) )
	{
		boolState[relevant_evt_OF_A69]  =  true;
	}

	if ( !boolState[required_OF_A8] )
	{
		boolState[required_OF_A7]  =  false;
	}

	if (boolState[relevant_evt_OF_A8] && ( !boolState[S_OF_A8]) )
	{
		boolState[relevant_evt_OF_A7]  =  true;
	}

	if ( !boolState[required_OF_A11] )
	{
		boolState[required_OF_A70]  =  false;
	}

	if (boolState[relevant_evt_OF_A11] && ( !boolState[S_OF_A11]) )
	{
		boolState[relevant_evt_OF_A70]  =  true;
	}

	if ( !boolState[required_OF_A17] )
	{
		boolState[required_OF_A71]  =  false;
	}

	if (boolState[relevant_evt_OF_A17] && ( !boolState[S_OF_A17]) )
	{
		boolState[relevant_evt_OF_A71]  =  true;
	}

	if ( !boolState[required_OF_A26] )
	{
		boolState[required_OF_A72]  =  false;
	}

	if (boolState[relevant_evt_OF_A26] && ( !boolState[S_OF_A26]) )
	{
		boolState[relevant_evt_OF_A72]  =  true;
	}

	if ( !boolState[required_OF_A26] )
	{
		boolState[required_OF_A73]  =  false;
	}

	if (boolState[relevant_evt_OF_A26] && ( !boolState[S_OF_A26]) )
	{
		boolState[relevant_evt_OF_A73]  =  true;
	}

	if ( !boolState[required_OF_A26] )
	{
		boolState[required_OF_A74]  =  false;
	}

	if (boolState[relevant_evt_OF_A26] && ( !boolState[S_OF_A26]) )
	{
		boolState[relevant_evt_OF_A74]  =  true;
	}

	if ( !boolState[required_OF_A26] )
	{
		boolState[required_OF_A75]  =  false;
	}

	if (boolState[relevant_evt_OF_A26] && ( !boolState[S_OF_A26]) )
	{
		boolState[relevant_evt_OF_A75]  =  true;
	}

	if ( !boolState[required_OF_A26] )
	{
		boolState[required_OF_A76]  =  false;
	}

	if (boolState[relevant_evt_OF_A26] && ( !boolState[S_OF_A26]) )
	{
		boolState[relevant_evt_OF_A76]  =  true;
	}

	if ( !boolState[required_OF_A26] )
	{
		boolState[required_OF_A77]  =  false;
	}

	if (boolState[relevant_evt_OF_A26] && ( !boolState[S_OF_A26]) )
	{
		boolState[relevant_evt_OF_A77]  =  true;
	}

	if ( !boolState[required_OF_A23] )
	{
		boolState[required_OF_A78]  =  false;
	}

	if (boolState[relevant_evt_OF_A23] && ( !boolState[S_OF_A23]) )
	{
		boolState[relevant_evt_OF_A78]  =  true;
	}

	if ( !boolState[required_OF_A44] )
	{
		boolState[required_OF_A79]  =  false;
	}

	if (boolState[relevant_evt_OF_A44] && ( !boolState[S_OF_A44]) )
	{
		boolState[relevant_evt_OF_A79]  =  true;
	}

	if ( !boolState[required_OF_A49] )
	{
		boolState[required_OF_A8]  =  false;
	}

	if ((boolState[relevant_evt_OF_A49] && ( !boolState[S_OF_A49])) || (( !boolState[S_OF_i_A53])   || ( !boolState[S_OF_i_A58])) )
	{
		boolState[relevant_evt_OF_A8]  =  true;
	}

	if ( !boolState[required_OF_A79] )
	{
		boolState[required_OF_A80]  =  false;
	}

	if (boolState[relevant_evt_OF_A79] && ( !boolState[S_OF_A79]) )
	{
		boolState[relevant_evt_OF_A80]  =  true;
	}

	if ( !boolState[required_OF_A26] )
	{
		boolState[required_OF_A81]  =  false;
	}

	if (boolState[relevant_evt_OF_A26] && ( !boolState[S_OF_A26]) )
	{
		boolState[relevant_evt_OF_A81]  =  true;
	}

	if ( !boolState[required_OF_A2] )
	{
		boolState[required_OF_A82]  =  false;
	}

	if (boolState[relevant_evt_OF_A2] && ( !boolState[S_OF_A2]) )
	{
		boolState[relevant_evt_OF_A82]  =  true;
	}

	if ( !boolState[required_OF_A82] )
	{
		boolState[required_OF_A83]  =  false;
	}

	if (boolState[relevant_evt_OF_A82] && ( !boolState[S_OF_A82]) )
	{
		boolState[relevant_evt_OF_A83]  =  true;
	}

	if ( !boolState[required_OF_A82] )
	{
		boolState[required_OF_A84]  =  false;
	}

	if (boolState[relevant_evt_OF_A82] && ( !boolState[S_OF_A82]) )
	{
		boolState[relevant_evt_OF_A84]  =  true;
	}

	if ( !boolState[required_OF_A82] )
	{
		boolState[required_OF_A85]  =  false;
	}

	if (boolState[relevant_evt_OF_A82] && ( !boolState[S_OF_A82]) )
	{
		boolState[relevant_evt_OF_A85]  =  true;
	}

	if ( !boolState[required_OF_A82] )
	{
		boolState[required_OF_A86]  =  false;
	}

	if (boolState[relevant_evt_OF_A82] && ( !boolState[S_OF_A82]) )
	{
		boolState[relevant_evt_OF_A86]  =  true;
	}

	if ( !boolState[required_OF_A82] )
	{
		boolState[required_OF_A87]  =  false;
	}

	if (boolState[relevant_evt_OF_A82] && ( !boolState[S_OF_A82]) )
	{
		boolState[relevant_evt_OF_A87]  =  true;
	}

	if ( !boolState[required_OF_A82] )
	{
		boolState[required_OF_A88]  =  false;
	}

	if (boolState[relevant_evt_OF_A82] && ( !boolState[S_OF_A82]) )
	{
		boolState[relevant_evt_OF_A88]  =  true;
	}

	if ( !boolState[required_OF_A82] )
	{
		boolState[required_OF_A89]  =  false;
	}

	if (boolState[relevant_evt_OF_A82] && ( !boolState[S_OF_A82]) )
	{
		boolState[relevant_evt_OF_A89]  =  true;
	}

	if ( !boolState[required_OF_A82] )
	{
		boolState[required_OF_A90]  =  false;
	}

	if (boolState[relevant_evt_OF_A82] && ( !boolState[S_OF_A82]) )
	{
		boolState[relevant_evt_OF_A90]  =  true;
	}

	if ( !boolState[S_OF_A93] )
	{
		boolState[required_OF_A91]  =  false;
	}

	if (boolState[relevant_evt_OF_A94] && ( !boolState[S_OF_A94]) )
	{
		boolState[relevant_evt_OF_A91]  =  true;
	}

	if ( !boolState[required_OF_A186] )
	{
		boolState[required_OF_A92]  =  false;
	}

	if (boolState[relevant_evt_OF_A186] && ( !boolState[S_OF_A186]) )
	{
		boolState[relevant_evt_OF_A92]  =  true;
	}

	if ( !boolState[required_OF_A94] )
	{
		boolState[required_OF_A93]  =  false;
	}

	if ((boolState[relevant_evt_OF_A94] && ( !boolState[S_OF_A94])) || ( !boolState[S_OF_A91]) )
	{
		boolState[relevant_evt_OF_A93]  =  true;
	}

	if ( !boolState[required_OF_A186] )
	{
		boolState[required_OF_A94]  =  false;
	}

	if (boolState[relevant_evt_OF_A186] && ( !boolState[S_OF_A186]) )
	{
		boolState[relevant_evt_OF_A94]  =  true;
	}

	if ( !boolState[S_OF_A97] )
	{
		boolState[required_OF_A96]  =  false;
	}

	if (boolState[relevant_evt_OF_A98] && ( !boolState[S_OF_A98]) )
	{
		boolState[relevant_evt_OF_A96]  =  true;
	}

	if ( !boolState[required_OF_A98] )
	{
		boolState[required_OF_A97]  =  false;
	}

	if ((boolState[relevant_evt_OF_A98] && ( !boolState[S_OF_A98])) || ( !boolState[S_OF_A96]) )
	{
		boolState[relevant_evt_OF_A97]  =  true;
	}

	if ( !boolState[required_OF_A186] )
	{
		boolState[required_OF_A98]  =  false;
	}

	if (boolState[relevant_evt_OF_A186] && ( !boolState[S_OF_A186]) )
	{
		boolState[relevant_evt_OF_A98]  =  true;
	}



	boolState[relevant_evt_OF_UE_1]  =  true  ;

	if ( !boolState[required_OF_A52] )
	{
		boolState[required_OF_f_A52]  =  false;
	}

	if (boolState[relevant_evt_OF_A52] && ( !boolState[S_OF_A52]) )
	{
		boolState[relevant_evt_OF_f_A52]  =  true;
	}

	if ( !boolState[required_OF_A53] )
	{
		boolState[required_OF_f_A53]  =  false;
	}

	if (boolState[relevant_evt_OF_A53] && ( !boolState[S_OF_A53]) )
	{
		boolState[relevant_evt_OF_f_A53]  =  true;
	}

	if ( !boolState[required_OF_A54] )
	{
		boolState[required_OF_f_A54]  =  false;
	}

	if (boolState[relevant_evt_OF_A54] && ( !boolState[S_OF_A54]) )
	{
		boolState[relevant_evt_OF_f_A54]  =  true;
	}

	if ( !boolState[required_OF_A55] )
	{
		boolState[required_OF_f_A55]  =  false;
	}

	if (boolState[relevant_evt_OF_A55] && ( !boolState[S_OF_A55]) )
	{
		boolState[relevant_evt_OF_f_A55]  =  true;
	}

	if ( !boolState[required_OF_A56] )
	{
		boolState[required_OF_f_A56]  =  false;
	}

	if (boolState[relevant_evt_OF_A56] && ( !boolState[S_OF_A56]) )
	{
		boolState[relevant_evt_OF_f_A56]  =  true;
	}

	if ( !boolState[required_OF_A57] )
	{
		boolState[required_OF_f_A57]  =  false;
	}

	if (boolState[relevant_evt_OF_A57] && ( !boolState[S_OF_A57]) )
	{
		boolState[relevant_evt_OF_f_A57]  =  true;
	}

	if ( !boolState[required_OF_A58] )
	{
		boolState[required_OF_f_A58]  =  false;
	}

	if (boolState[relevant_evt_OF_A58] && ( !boolState[S_OF_A58]) )
	{
		boolState[relevant_evt_OF_f_A58]  =  true;
	}

	if ( !boolState[required_OF_A60] )
	{
		boolState[required_OF_f_A60]  =  false;
	}

	if (boolState[relevant_evt_OF_A60] && ( !boolState[S_OF_A60]) )
	{
		boolState[relevant_evt_OF_f_A60]  =  true;
	}

	if ( !boolState[required_OF_A61] )
	{
		boolState[required_OF_f_A61]  =  false;
	}

	if (boolState[relevant_evt_OF_A61] && ( !boolState[S_OF_A61]) )
	{
		boolState[relevant_evt_OF_f_A61]  =  true;
	}

	if ( !boolState[required_OF_A63] )
	{
		boolState[required_OF_f_A63]  =  false;
	}

	if (boolState[relevant_evt_OF_A63] && ( !boolState[S_OF_A63]) )
	{
		boolState[relevant_evt_OF_f_A63]  =  true;
	}

	if ( !boolState[required_OF_A64] )
	{
		boolState[required_OF_f_A64]  =  false;
	}

	if (boolState[relevant_evt_OF_A64] && ( !boolState[S_OF_A64]) )
	{
		boolState[relevant_evt_OF_f_A64]  =  true;
	}

	if ( !boolState[required_OF_A66] )
	{
		boolState[required_OF_f_A66]  =  false;
	}

	if (boolState[relevant_evt_OF_A66] && ( !boolState[S_OF_A66]) )
	{
		boolState[relevant_evt_OF_f_A66]  =  true;
	}

	if ( !boolState[required_OF_A67] )
	{
		boolState[required_OF_f_A67]  =  false;
	}

	if (boolState[relevant_evt_OF_A67] && ( !boolState[S_OF_A67]) )
	{
		boolState[relevant_evt_OF_f_A67]  =  true;
	}

	if ( !boolState[required_OF_A68] )
	{
		boolState[required_OF_f_A68]  =  false;
	}

	if (boolState[relevant_evt_OF_A68] && ( !boolState[S_OF_A68]) )
	{
		boolState[relevant_evt_OF_f_A68]  =  true;
	}

	if ( !boolState[required_OF_A69] )
	{
		boolState[required_OF_f_A69]  =  false;
	}

	if (boolState[relevant_evt_OF_A69] && ( !boolState[S_OF_A69]) )
	{
		boolState[relevant_evt_OF_f_A69]  =  true;
	}

	if ( !boolState[required_OF_A70] )
	{
		boolState[required_OF_f_A70]  =  false;
	}

	if (boolState[relevant_evt_OF_A70] && ( !boolState[S_OF_A70]) )
	{
		boolState[relevant_evt_OF_f_A70]  =  true;
	}

	if ( !boolState[required_OF_A71] )
	{
		boolState[required_OF_f_A71]  =  false;
	}

	if (boolState[relevant_evt_OF_A71] && ( !boolState[S_OF_A71]) )
	{
		boolState[relevant_evt_OF_f_A71]  =  true;
	}

	if ( !boolState[required_OF_A72] )
	{
		boolState[required_OF_f_A72]  =  false;
	}

	if (boolState[relevant_evt_OF_A72] && ( !boolState[S_OF_A72]) )
	{
		boolState[relevant_evt_OF_f_A72]  =  true;
	}

	if ( !boolState[required_OF_A73] )
	{
		boolState[required_OF_f_A73]  =  false;
	}

	if (boolState[relevant_evt_OF_A73] && ( !boolState[S_OF_A73]) )
	{
		boolState[relevant_evt_OF_f_A73]  =  true;
	}

	if ( !boolState[required_OF_A74] )
	{
		boolState[required_OF_f_A74]  =  false;
	}

	if (boolState[relevant_evt_OF_A74] && ( !boolState[S_OF_A74]) )
	{
		boolState[relevant_evt_OF_f_A74]  =  true;
	}

	if ( !boolState[required_OF_A75] )
	{
		boolState[required_OF_f_A75]  =  false;
	}

	if (boolState[relevant_evt_OF_A75] && ( !boolState[S_OF_A75]) )
	{
		boolState[relevant_evt_OF_f_A75]  =  true;
	}

	if ( !boolState[required_OF_A76] )
	{
		boolState[required_OF_f_A76]  =  false;
	}

	if (boolState[relevant_evt_OF_A76] && ( !boolState[S_OF_A76]) )
	{
		boolState[relevant_evt_OF_f_A76]  =  true;
	}

	if ( !boolState[required_OF_A77] )
	{
		boolState[required_OF_f_A77]  =  false;
	}

	if (boolState[relevant_evt_OF_A77] && ( !boolState[S_OF_A77]) )
	{
		boolState[relevant_evt_OF_f_A77]  =  true;
	}

	if ( !boolState[required_OF_A81] )
	{
		boolState[required_OF_f_A81]  =  false;
	}

	if (boolState[relevant_evt_OF_A81] && ( !boolState[S_OF_A81]) )
	{
		boolState[relevant_evt_OF_f_A81]  =  true;
	}

	if (( !boolState[required_OF_A52]) || ( !boolState[S_OF_A5]) )
	{
		boolState[required_OF_i_A52]  =  false;
	}

	if (boolState[relevant_evt_OF_A52] && ( !boolState[S_OF_A52]) )
	{
		boolState[relevant_evt_OF_i_A52]  =  true;
	}

	if (( !boolState[required_OF_A53]) || ( !boolState[S_OF_A8]) )
	{
		boolState[required_OF_i_A53]  =  false;
	}

	if (boolState[relevant_evt_OF_A53] && ( !boolState[S_OF_A53]) )
	{
		boolState[relevant_evt_OF_i_A53]  =  true;
	}

	if (( !boolState[required_OF_A54]) || ( !boolState[S_OF_A11]) )
	{
		boolState[required_OF_i_A54]  =  false;
	}

	if (boolState[relevant_evt_OF_A54] && ( !boolState[S_OF_A54]) )
	{
		boolState[relevant_evt_OF_i_A54]  =  true;
	}

	if (( !boolState[required_OF_A55]) || ( !boolState[S_OF_A14]) )
	{
		boolState[required_OF_i_A55]  =  false;
	}

	if (boolState[relevant_evt_OF_A55] && ( !boolState[S_OF_A55]) )
	{
		boolState[relevant_evt_OF_i_A55]  =  true;
	}

	if (( !boolState[required_OF_A56]) || ( !boolState[S_OF_A17]) )
	{
		boolState[required_OF_i_A56]  =  false;
	}

	if (boolState[relevant_evt_OF_A56] && ( !boolState[S_OF_A56]) )
	{
		boolState[relevant_evt_OF_i_A56]  =  true;
	}

	if (( !boolState[required_OF_A57]) || ( !boolState[S_OF_A20]) )
	{
		boolState[required_OF_i_A57]  =  false;
	}

	if (boolState[relevant_evt_OF_A57] && ( !boolState[S_OF_A57]) )
	{
		boolState[relevant_evt_OF_i_A57]  =  true;
	}

	if (( !boolState[required_OF_A58]) || ( !boolState[S_OF_A8]) )
	{
		boolState[required_OF_i_A58]  =  false;
	}

	if (boolState[relevant_evt_OF_A58] && ( !boolState[S_OF_A58]) )
	{
		boolState[relevant_evt_OF_i_A58]  =  true;
	}

	if (( !boolState[required_OF_A60]) || ( !boolState[S_OF_A23]) )
	{
		boolState[required_OF_i_A60]  =  false;
	}

	if (boolState[relevant_evt_OF_A60] && ( !boolState[S_OF_A60]) )
	{
		boolState[relevant_evt_OF_i_A60]  =  true;
	}

	if (( !boolState[required_OF_A61]) || ( !boolState[S_OF_A14]) )
	{
		boolState[required_OF_i_A61]  =  false;
	}

	if (boolState[relevant_evt_OF_A61] && ( !boolState[S_OF_A61]) )
	{
		boolState[relevant_evt_OF_i_A61]  =  true;
	}

	if (( !boolState[required_OF_A63]) || ( !boolState[S_OF_A23]) )
	{
		boolState[required_OF_i_A63]  =  false;
	}

	if (boolState[relevant_evt_OF_A63] && ( !boolState[S_OF_A63]) )
	{
		boolState[relevant_evt_OF_i_A63]  =  true;
	}

	if (( !boolState[required_OF_A64]) || ( !boolState[S_OF_A20]) )
	{
		boolState[required_OF_i_A64]  =  false;
	}

	if (boolState[relevant_evt_OF_A64] && ( !boolState[S_OF_A64]) )
	{
		boolState[relevant_evt_OF_i_A64]  =  true;
	}

	if (( !boolState[required_OF_A66]) || ( !boolState[S_OF_A23]) )
	{
		boolState[required_OF_i_A66]  =  false;
	}

	if (boolState[relevant_evt_OF_A66] && ( !boolState[S_OF_A66]) )
	{
		boolState[relevant_evt_OF_i_A66]  =  true;
	}

	if (( !boolState[required_OF_A67]) || ( !boolState[S_OF_A23]) )
	{
		boolState[required_OF_i_A67]  =  false;
	}

	if (boolState[relevant_evt_OF_A67] && ( !boolState[S_OF_A67]) )
	{
		boolState[relevant_evt_OF_i_A67]  =  true;
	}

	if (( !boolState[required_OF_A68]) || ( !boolState[S_OF_A26]) )
	{
		boolState[required_OF_i_A68]  =  false;
	}

	if (boolState[relevant_evt_OF_A68] && ( !boolState[S_OF_A68]) )
	{
		boolState[relevant_evt_OF_i_A68]  =  true;
	}

	if (( !boolState[required_OF_A69]) || ( !boolState[S_OF_A2]) )
	{
		boolState[required_OF_i_A69]  =  false;
	}

	if (boolState[relevant_evt_OF_A69] && ( !boolState[S_OF_A69]) )
	{
		boolState[relevant_evt_OF_i_A69]  =  true;
	}

	if (( !boolState[required_OF_A70]) || ( !boolState[S_OF_A2]) )
	{
		boolState[required_OF_i_A70]  =  false;
	}

	if (boolState[relevant_evt_OF_A70] && ( !boolState[S_OF_A70]) )
	{
		boolState[relevant_evt_OF_i_A70]  =  true;
	}

	if (( !boolState[required_OF_A71]) || ( !boolState[S_OF_A2]) )
	{
		boolState[required_OF_i_A71]  =  false;
	}

	if (boolState[relevant_evt_OF_A71] && ( !boolState[S_OF_A71]) )
	{
		boolState[relevant_evt_OF_i_A71]  =  true;
	}

	if (( !boolState[required_OF_A72]) || ( !boolState[S_OF_A29]) )
	{
		boolState[required_OF_i_A72]  =  false;
	}

	if (boolState[relevant_evt_OF_A72] && ( !boolState[S_OF_A72]) )
	{
		boolState[relevant_evt_OF_i_A72]  =  true;
	}

	if (( !boolState[required_OF_A73]) || ( !boolState[S_OF_A32]) )
	{
		boolState[required_OF_i_A73]  =  false;
	}

	if (boolState[relevant_evt_OF_A73] && ( !boolState[S_OF_A73]) )
	{
		boolState[relevant_evt_OF_i_A73]  =  true;
	}

	if (( !boolState[required_OF_A74]) || ( !boolState[S_OF_A35]) )
	{
		boolState[required_OF_i_A74]  =  false;
	}

	if (boolState[relevant_evt_OF_A74] && ( !boolState[S_OF_A74]) )
	{
		boolState[relevant_evt_OF_i_A74]  =  true;
	}

	if (( !boolState[required_OF_A75]) || ( !boolState[S_OF_A38]) )
	{
		boolState[required_OF_i_A75]  =  false;
	}

	if (boolState[relevant_evt_OF_A75] && ( !boolState[S_OF_A75]) )
	{
		boolState[relevant_evt_OF_i_A75]  =  true;
	}

	if (( !boolState[required_OF_A76]) || ( !boolState[S_OF_A41]) )
	{
		boolState[required_OF_i_A76]  =  false;
	}

	if (boolState[relevant_evt_OF_A76] && ( !boolState[S_OF_A76]) )
	{
		boolState[relevant_evt_OF_i_A76]  =  true;
	}

	if (( !boolState[required_OF_A77]) || ( !boolState[S_OF_A45]) )
	{
		boolState[required_OF_i_A77]  =  false;
	}

	if (boolState[relevant_evt_OF_A77] && ( !boolState[S_OF_A77]) )
	{
		boolState[relevant_evt_OF_i_A77]  =  true;
	}

	if (( !boolState[required_OF_A81]) || ( !boolState[S_OF_A50]) )
	{
		boolState[required_OF_i_A81]  =  false;
	}

	if (boolState[relevant_evt_OF_A81] && ( !boolState[S_OF_A81]) )
	{
		boolState[relevant_evt_OF_i_A81]  =  true;
	}

}


void storm::figaro::FigaroProgram_vgs_8_Trim_Article_No_repair::runOnceInteractionStep_propagate_leaves()
{


	boolState[already_S_OF_A0]  =  boolState[S_OF_A0]  ;



	boolState[already_S_OF_A1]  =  boolState[S_OF_A1]  ;



	boolState[already_S_OF_A10]  =  boolState[S_OF_A10]  ;



	boolState[already_S_OF_A100]  =  boolState[S_OF_A100]  ;



	boolState[already_S_OF_A101]  =  boolState[S_OF_A101]  ;



	boolState[already_S_OF_A102]  =  boolState[S_OF_A102]  ;



	boolState[already_S_OF_A103]  =  boolState[S_OF_A103]  ;



	boolState[already_S_OF_A105]  =  boolState[S_OF_A105]  ;



	boolState[already_S_OF_A106]  =  boolState[S_OF_A106]  ;



	boolState[already_S_OF_A107]  =  boolState[S_OF_A107]  ;



	boolState[already_S_OF_A109]  =  boolState[S_OF_A109]  ;



	boolState[already_S_OF_A11]  =  boolState[S_OF_A11]  ;



	boolState[already_S_OF_A110]  =  boolState[S_OF_A110]  ;



	boolState[already_S_OF_A111]  =  boolState[S_OF_A111]  ;



	boolState[already_S_OF_A112]  =  boolState[S_OF_A112]  ;



	boolState[already_S_OF_A114]  =  boolState[S_OF_A114]  ;



	boolState[already_S_OF_A115]  =  boolState[S_OF_A115]  ;



	boolState[already_S_OF_A116]  =  boolState[S_OF_A116]  ;



	boolState[already_S_OF_A118]  =  boolState[S_OF_A118]  ;



	boolState[already_S_OF_A119]  =  boolState[S_OF_A119]  ;



	boolState[already_S_OF_A120]  =  boolState[S_OF_A120]  ;



	boolState[already_S_OF_A121]  =  boolState[S_OF_A121]  ;



	boolState[already_S_OF_A123]  =  boolState[S_OF_A123]  ;



	boolState[already_S_OF_A124]  =  boolState[S_OF_A124]  ;



	boolState[already_S_OF_A125]  =  boolState[S_OF_A125]  ;



	boolState[already_S_OF_A127]  =  boolState[S_OF_A127]  ;



	boolState[already_S_OF_A128]  =  boolState[S_OF_A128]  ;



	boolState[already_S_OF_A129]  =  boolState[S_OF_A129]  ;



	boolState[already_S_OF_A13]  =  boolState[S_OF_A13]  ;



	boolState[already_S_OF_A130]  =  boolState[S_OF_A130]  ;



	boolState[already_S_OF_A132]  =  boolState[S_OF_A132]  ;



	boolState[already_S_OF_A133]  =  boolState[S_OF_A133]  ;



	boolState[already_S_OF_A134]  =  boolState[S_OF_A134]  ;



	boolState[already_S_OF_A136]  =  boolState[S_OF_A136]  ;



	boolState[already_S_OF_A137]  =  boolState[S_OF_A137]  ;



	boolState[already_S_OF_A138]  =  boolState[S_OF_A138]  ;



	boolState[already_S_OF_A139]  =  boolState[S_OF_A139]  ;



	boolState[already_S_OF_A14]  =  boolState[S_OF_A14]  ;



	boolState[already_S_OF_A141]  =  boolState[S_OF_A141]  ;



	boolState[already_S_OF_A142]  =  boolState[S_OF_A142]  ;



	boolState[already_S_OF_A143]  =  boolState[S_OF_A143]  ;



	boolState[already_S_OF_A145]  =  boolState[S_OF_A145]  ;



	boolState[already_S_OF_A146]  =  boolState[S_OF_A146]  ;



	boolState[already_S_OF_A147]  =  boolState[S_OF_A147]  ;



	boolState[already_S_OF_A148]  =  boolState[S_OF_A148]  ;



	boolState[already_S_OF_A150]  =  boolState[S_OF_A150]  ;



	boolState[already_S_OF_A151]  =  boolState[S_OF_A151]  ;



	boolState[already_S_OF_A152]  =  boolState[S_OF_A152]  ;



	boolState[already_S_OF_A154]  =  boolState[S_OF_A154]  ;



	boolState[already_S_OF_A155]  =  boolState[S_OF_A155]  ;



	boolState[already_S_OF_A156]  =  boolState[S_OF_A156]  ;



	boolState[already_S_OF_A157]  =  boolState[S_OF_A157]  ;



	boolState[already_S_OF_A159]  =  boolState[S_OF_A159]  ;



	boolState[already_S_OF_A16]  =  boolState[S_OF_A16]  ;



	boolState[already_S_OF_A160]  =  boolState[S_OF_A160]  ;



	boolState[already_S_OF_A161]  =  boolState[S_OF_A161]  ;



	boolState[already_S_OF_A163]  =  boolState[S_OF_A163]  ;



	boolState[already_S_OF_A164]  =  boolState[S_OF_A164]  ;



	boolState[already_S_OF_A165]  =  boolState[S_OF_A165]  ;



	boolState[already_S_OF_A166]  =  boolState[S_OF_A166]  ;



	boolState[already_S_OF_A168]  =  boolState[S_OF_A168]  ;



	boolState[already_S_OF_A169]  =  boolState[S_OF_A169]  ;



	boolState[already_S_OF_A17]  =  boolState[S_OF_A17]  ;



	boolState[already_S_OF_A170]  =  boolState[S_OF_A170]  ;



	boolState[already_S_OF_A171]  =  boolState[S_OF_A171]  ;



	boolState[already_S_OF_A173]  =  boolState[S_OF_A173]  ;



	boolState[already_S_OF_A174]  =  boolState[S_OF_A174]  ;



	boolState[already_S_OF_A175]  =  boolState[S_OF_A175]  ;



	boolState[already_S_OF_A176]  =  boolState[S_OF_A176]  ;



	boolState[already_S_OF_A177]  =  boolState[S_OF_A177]  ;



	boolState[already_S_OF_A179]  =  boolState[S_OF_A179]  ;



	boolState[already_S_OF_A180]  =  boolState[S_OF_A180]  ;



	boolState[already_S_OF_A181]  =  boolState[S_OF_A181]  ;



	boolState[already_S_OF_A182]  =  boolState[S_OF_A182]  ;



	boolState[already_S_OF_A184]  =  boolState[S_OF_A184]  ;



	boolState[already_S_OF_A185]  =  boolState[S_OF_A185]  ;



	boolState[already_S_OF_A186]  =  boolState[S_OF_A186]  ;



	boolState[already_S_OF_A187]  =  boolState[S_OF_A187]  ;



	boolState[already_S_OF_A188]  =  boolState[S_OF_A188]  ;



	boolState[already_S_OF_A189]  =  boolState[S_OF_A189]  ;



	boolState[already_S_OF_A19]  =  boolState[S_OF_A19]  ;



	boolState[already_S_OF_A190]  =  boolState[S_OF_A190]  ;



	boolState[already_S_OF_A191]  =  boolState[S_OF_A191]  ;



	boolState[already_S_OF_A192]  =  boolState[S_OF_A192]  ;



	boolState[already_S_OF_A193]  =  boolState[S_OF_A193]  ;



	boolState[already_S_OF_A2]  =  boolState[S_OF_A2]  ;



	boolState[already_S_OF_A20]  =  boolState[S_OF_A20]  ;



	boolState[already_S_OF_A22]  =  boolState[S_OF_A22]  ;



	boolState[already_S_OF_A23]  =  boolState[S_OF_A23]  ;



	boolState[already_S_OF_A25]  =  boolState[S_OF_A25]  ;



	boolState[already_S_OF_A26]  =  boolState[S_OF_A26]  ;



	boolState[already_S_OF_A28]  =  boolState[S_OF_A28]  ;



	boolState[already_S_OF_A29]  =  boolState[S_OF_A29]  ;



	boolState[already_S_OF_A31]  =  boolState[S_OF_A31]  ;



	boolState[already_S_OF_A32]  =  boolState[S_OF_A32]  ;



	boolState[already_S_OF_A34]  =  boolState[S_OF_A34]  ;



	boolState[already_S_OF_A35]  =  boolState[S_OF_A35]  ;



	boolState[already_S_OF_A37]  =  boolState[S_OF_A37]  ;



	boolState[already_S_OF_A38]  =  boolState[S_OF_A38]  ;



	boolState[already_S_OF_A4]  =  boolState[S_OF_A4]  ;



	boolState[already_S_OF_A40]  =  boolState[S_OF_A40]  ;



	boolState[already_S_OF_A41]  =  boolState[S_OF_A41]  ;



	boolState[already_S_OF_A43]  =  boolState[S_OF_A43]  ;



	boolState[already_S_OF_A44]  =  boolState[S_OF_A44]  ;



	boolState[already_S_OF_A45]  =  boolState[S_OF_A45]  ;



	boolState[already_S_OF_A47]  =  boolState[S_OF_A47]  ;



	boolState[already_S_OF_A48]  =  boolState[S_OF_A48]  ;



	boolState[already_S_OF_A49]  =  boolState[S_OF_A49]  ;



	boolState[already_S_OF_A5]  =  boolState[S_OF_A5]  ;



	boolState[already_S_OF_A50]  =  boolState[S_OF_A50]  ;



	boolState[already_S_OF_A52]  =  boolState[S_OF_A52]  ;



	boolState[already_S_OF_A53]  =  boolState[S_OF_A53]  ;



	boolState[already_S_OF_A54]  =  boolState[S_OF_A54]  ;



	boolState[already_S_OF_A55]  =  boolState[S_OF_A55]  ;



	boolState[already_S_OF_A56]  =  boolState[S_OF_A56]  ;



	boolState[already_S_OF_A57]  =  boolState[S_OF_A57]  ;



	boolState[already_S_OF_A58]  =  boolState[S_OF_A58]  ;



	boolState[already_S_OF_A59]  =  boolState[S_OF_A59]  ;



	boolState[already_S_OF_A60]  =  boolState[S_OF_A60]  ;



	boolState[already_S_OF_A61]  =  boolState[S_OF_A61]  ;



	boolState[already_S_OF_A62]  =  boolState[S_OF_A62]  ;



	boolState[already_S_OF_A63]  =  boolState[S_OF_A63]  ;



	boolState[already_S_OF_A64]  =  boolState[S_OF_A64]  ;



	boolState[already_S_OF_A65]  =  boolState[S_OF_A65]  ;



	boolState[already_S_OF_A66]  =  boolState[S_OF_A66]  ;



	boolState[already_S_OF_A67]  =  boolState[S_OF_A67]  ;



	boolState[already_S_OF_A68]  =  boolState[S_OF_A68]  ;



	boolState[already_S_OF_A69]  =  boolState[S_OF_A69]  ;



	boolState[already_S_OF_A7]  =  boolState[S_OF_A7]  ;



	boolState[already_S_OF_A70]  =  boolState[S_OF_A70]  ;



	boolState[already_S_OF_A71]  =  boolState[S_OF_A71]  ;



	boolState[already_S_OF_A72]  =  boolState[S_OF_A72]  ;



	boolState[already_S_OF_A73]  =  boolState[S_OF_A73]  ;



	boolState[already_S_OF_A74]  =  boolState[S_OF_A74]  ;



	boolState[already_S_OF_A75]  =  boolState[S_OF_A75]  ;



	boolState[already_S_OF_A76]  =  boolState[S_OF_A76]  ;



	boolState[already_S_OF_A77]  =  boolState[S_OF_A77]  ;



	boolState[already_S_OF_A78]  =  boolState[S_OF_A78]  ;



	boolState[already_S_OF_A79]  =  boolState[S_OF_A79]  ;



	boolState[already_S_OF_A8]  =  boolState[S_OF_A8]  ;



	boolState[already_S_OF_A80]  =  boolState[S_OF_A80]  ;



	boolState[already_S_OF_A81]  =  boolState[S_OF_A81]  ;



	boolState[already_S_OF_A82]  =  boolState[S_OF_A82]  ;



	boolState[already_S_OF_A83]  =  boolState[S_OF_A83]  ;



	boolState[already_S_OF_A84]  =  boolState[S_OF_A84]  ;



	boolState[already_S_OF_A85]  =  boolState[S_OF_A85]  ;



	boolState[already_S_OF_A86]  =  boolState[S_OF_A86]  ;



	boolState[already_S_OF_A87]  =  boolState[S_OF_A87]  ;



	boolState[already_S_OF_A88]  =  boolState[S_OF_A88]  ;



	boolState[already_S_OF_A89]  =  boolState[S_OF_A89]  ;



	boolState[already_S_OF_A90]  =  boolState[S_OF_A90]  ;



	boolState[already_S_OF_A91]  =  boolState[S_OF_A91]  ;



	boolState[already_S_OF_A92]  =  boolState[S_OF_A92]  ;



	boolState[already_S_OF_A93]  =  boolState[S_OF_A93]  ;



	boolState[already_S_OF_A94]  =  boolState[S_OF_A94]  ;



	boolState[already_S_OF_A96]  =  boolState[S_OF_A96]  ;



	boolState[already_S_OF_A97]  =  boolState[S_OF_A97]  ;



	boolState[already_S_OF_A98]  =  boolState[S_OF_A98]  ;



	boolState[already_S_OF_UE_1]  =  boolState[S_OF_UE_1]  ;



	boolState[already_S_OF_f_A52]  =  boolState[S_OF_f_A52]  ;



	boolState[already_S_OF_f_A53]  =  boolState[S_OF_f_A53]  ;



	boolState[already_S_OF_f_A54]  =  boolState[S_OF_f_A54]  ;



	boolState[already_S_OF_f_A55]  =  boolState[S_OF_f_A55]  ;



	boolState[already_S_OF_f_A56]  =  boolState[S_OF_f_A56]  ;



	boolState[already_S_OF_f_A57]  =  boolState[S_OF_f_A57]  ;



	boolState[already_S_OF_f_A58]  =  boolState[S_OF_f_A58]  ;



	boolState[already_S_OF_f_A60]  =  boolState[S_OF_f_A60]  ;



	boolState[already_S_OF_f_A61]  =  boolState[S_OF_f_A61]  ;



	boolState[already_S_OF_f_A63]  =  boolState[S_OF_f_A63]  ;



	boolState[already_S_OF_f_A64]  =  boolState[S_OF_f_A64]  ;



	boolState[already_S_OF_f_A66]  =  boolState[S_OF_f_A66]  ;



	boolState[already_S_OF_f_A67]  =  boolState[S_OF_f_A67]  ;



	boolState[already_S_OF_f_A68]  =  boolState[S_OF_f_A68]  ;



	boolState[already_S_OF_f_A69]  =  boolState[S_OF_f_A69]  ;



	boolState[already_S_OF_f_A70]  =  boolState[S_OF_f_A70]  ;



	boolState[already_S_OF_f_A71]  =  boolState[S_OF_f_A71]  ;



	boolState[already_S_OF_f_A72]  =  boolState[S_OF_f_A72]  ;



	boolState[already_S_OF_f_A73]  =  boolState[S_OF_f_A73]  ;



	boolState[already_S_OF_f_A74]  =  boolState[S_OF_f_A74]  ;



	boolState[already_S_OF_f_A75]  =  boolState[S_OF_f_A75]  ;



	boolState[already_S_OF_f_A76]  =  boolState[S_OF_f_A76]  ;



	boolState[already_S_OF_f_A77]  =  boolState[S_OF_f_A77]  ;



	boolState[already_S_OF_f_A81]  =  boolState[S_OF_f_A81]  ;



	boolState[already_S_OF_i_A52]  =  boolState[S_OF_i_A52]  ;

	if (( !boolState[required_OF_i_A52]) && (( !boolState[already_standby_OF_i_A52]) && ( !boolState[already_required_OF_i_A52])) )
	{
		boolState[already_standby_OF_i_A52]  =  true;
	}



	boolState[already_S_OF_i_A53]  =  boolState[S_OF_i_A53]  ;

	if (( !boolState[required_OF_i_A53]) && (( !boolState[already_standby_OF_i_A53]) && ( !boolState[already_required_OF_i_A53])) )
	{
		boolState[already_standby_OF_i_A53]  =  true;
	}



	boolState[already_S_OF_i_A54]  =  boolState[S_OF_i_A54]  ;

	if (( !boolState[required_OF_i_A54]) && (( !boolState[already_standby_OF_i_A54]) && ( !boolState[already_required_OF_i_A54])) )
	{
		boolState[already_standby_OF_i_A54]  =  true;
	}



	boolState[already_S_OF_i_A55]  =  boolState[S_OF_i_A55]  ;

	if (( !boolState[required_OF_i_A55]) && (( !boolState[already_standby_OF_i_A55]) && ( !boolState[already_required_OF_i_A55])) )
	{
		boolState[already_standby_OF_i_A55]  =  true;
	}



	boolState[already_S_OF_i_A56]  =  boolState[S_OF_i_A56]  ;

	if (( !boolState[required_OF_i_A56]) && (( !boolState[already_standby_OF_i_A56]) && ( !boolState[already_required_OF_i_A56])) )
	{
		boolState[already_standby_OF_i_A56]  =  true;
	}



	boolState[already_S_OF_i_A57]  =  boolState[S_OF_i_A57]  ;

	if (( !boolState[required_OF_i_A57]) && (( !boolState[already_standby_OF_i_A57]) && ( !boolState[already_required_OF_i_A57])) )
	{
		boolState[already_standby_OF_i_A57]  =  true;
	}



	boolState[already_S_OF_i_A58]  =  boolState[S_OF_i_A58]  ;

	if (( !boolState[required_OF_i_A58]) && (( !boolState[already_standby_OF_i_A58]) && ( !boolState[already_required_OF_i_A58])) )
	{
		boolState[already_standby_OF_i_A58]  =  true;
	}



	boolState[already_S_OF_i_A60]  =  boolState[S_OF_i_A60]  ;

	if (( !boolState[required_OF_i_A60]) && (( !boolState[already_standby_OF_i_A60]) && ( !boolState[already_required_OF_i_A60])) )
	{
		boolState[already_standby_OF_i_A60]  =  true;
	}



	boolState[already_S_OF_i_A61]  =  boolState[S_OF_i_A61]  ;

	if (( !boolState[required_OF_i_A61]) && (( !boolState[already_standby_OF_i_A61]) && ( !boolState[already_required_OF_i_A61])) )
	{
		boolState[already_standby_OF_i_A61]  =  true;
	}



	boolState[already_S_OF_i_A63]  =  boolState[S_OF_i_A63]  ;

	if (( !boolState[required_OF_i_A63]) && (( !boolState[already_standby_OF_i_A63]) && ( !boolState[already_required_OF_i_A63])) )
	{
		boolState[already_standby_OF_i_A63]  =  true;
	}



	boolState[already_S_OF_i_A64]  =  boolState[S_OF_i_A64]  ;

	if (( !boolState[required_OF_i_A64]) && (( !boolState[already_standby_OF_i_A64]) && ( !boolState[already_required_OF_i_A64])) )
	{
		boolState[already_standby_OF_i_A64]  =  true;
	}



	boolState[already_S_OF_i_A66]  =  boolState[S_OF_i_A66]  ;

	if (( !boolState[required_OF_i_A66]) && (( !boolState[already_standby_OF_i_A66]) && ( !boolState[already_required_OF_i_A66])) )
	{
		boolState[already_standby_OF_i_A66]  =  true;
	}



	boolState[already_S_OF_i_A67]  =  boolState[S_OF_i_A67]  ;

	if (( !boolState[required_OF_i_A67]) && (( !boolState[already_standby_OF_i_A67]) && ( !boolState[already_required_OF_i_A67])) )
	{
		boolState[already_standby_OF_i_A67]  =  true;
	}



	boolState[already_S_OF_i_A68]  =  boolState[S_OF_i_A68]  ;

	if (( !boolState[required_OF_i_A68]) && (( !boolState[already_standby_OF_i_A68]) && ( !boolState[already_required_OF_i_A68])) )
	{
		boolState[already_standby_OF_i_A68]  =  true;
	}



	boolState[already_S_OF_i_A69]  =  boolState[S_OF_i_A69]  ;

	if (( !boolState[required_OF_i_A69]) && (( !boolState[already_standby_OF_i_A69]) && ( !boolState[already_required_OF_i_A69])) )
	{
		boolState[already_standby_OF_i_A69]  =  true;
	}



	boolState[already_S_OF_i_A70]  =  boolState[S_OF_i_A70]  ;

	if (( !boolState[required_OF_i_A70]) && (( !boolState[already_standby_OF_i_A70]) && ( !boolState[already_required_OF_i_A70])) )
	{
		boolState[already_standby_OF_i_A70]  =  true;
	}



	boolState[already_S_OF_i_A71]  =  boolState[S_OF_i_A71]  ;

	if (( !boolState[required_OF_i_A71]) && (( !boolState[already_standby_OF_i_A71]) && ( !boolState[already_required_OF_i_A71])) )
	{
		boolState[already_standby_OF_i_A71]  =  true;
	}



	boolState[already_S_OF_i_A72]  =  boolState[S_OF_i_A72]  ;

	if (( !boolState[required_OF_i_A72]) && (( !boolState[already_standby_OF_i_A72]) && ( !boolState[already_required_OF_i_A72])) )
	{
		boolState[already_standby_OF_i_A72]  =  true;
	}



	boolState[already_S_OF_i_A73]  =  boolState[S_OF_i_A73]  ;

	if (( !boolState[required_OF_i_A73]) && (( !boolState[already_standby_OF_i_A73]) && ( !boolState[already_required_OF_i_A73])) )
	{
		boolState[already_standby_OF_i_A73]  =  true;
	}



	boolState[already_S_OF_i_A74]  =  boolState[S_OF_i_A74]  ;

	if (( !boolState[required_OF_i_A74]) && (( !boolState[already_standby_OF_i_A74]) && ( !boolState[already_required_OF_i_A74])) )
	{
		boolState[already_standby_OF_i_A74]  =  true;
	}



	boolState[already_S_OF_i_A75]  =  boolState[S_OF_i_A75]  ;

	if (( !boolState[required_OF_i_A75]) && (( !boolState[already_standby_OF_i_A75]) && ( !boolState[already_required_OF_i_A75])) )
	{
		boolState[already_standby_OF_i_A75]  =  true;
	}



	boolState[already_S_OF_i_A76]  =  boolState[S_OF_i_A76]  ;

	if (( !boolState[required_OF_i_A76]) && (( !boolState[already_standby_OF_i_A76]) && ( !boolState[already_required_OF_i_A76])) )
	{
		boolState[already_standby_OF_i_A76]  =  true;
	}



	boolState[already_S_OF_i_A77]  =  boolState[S_OF_i_A77]  ;

	if (( !boolState[required_OF_i_A77]) && (( !boolState[already_standby_OF_i_A77]) && ( !boolState[already_required_OF_i_A77])) )
	{
		boolState[already_standby_OF_i_A77]  =  true;
	}



	boolState[already_S_OF_i_A81]  =  boolState[S_OF_i_A81]  ;

	if (( !boolState[required_OF_i_A81]) && (( !boolState[already_standby_OF_i_A81]) && ( !boolState[already_required_OF_i_A81])) )
	{
		boolState[already_standby_OF_i_A81]  =  true;
	}

}


void storm::figaro::FigaroProgram_vgs_8_Trim_Article_No_repair::runOnceInteractionStep_tops()
{
	if (boolState[required_OF_i_A52] && boolState[already_standby_OF_i_A52] )
	{
		boolState[to_be_fired_OF_i_A52]  =  true;
	}

	if (boolState[required_OF_i_A53] && boolState[already_standby_OF_i_A53] )
	{
		boolState[to_be_fired_OF_i_A53]  =  true;
	}

	if (boolState[required_OF_i_A54] && boolState[already_standby_OF_i_A54] )
	{
		boolState[to_be_fired_OF_i_A54]  =  true;
	}

	if (boolState[required_OF_i_A55] && boolState[already_standby_OF_i_A55] )
	{
		boolState[to_be_fired_OF_i_A55]  =  true;
	}

	if (boolState[required_OF_i_A56] && boolState[already_standby_OF_i_A56] )
	{
		boolState[to_be_fired_OF_i_A56]  =  true;
	}

	if (boolState[required_OF_i_A57] && boolState[already_standby_OF_i_A57] )
	{
		boolState[to_be_fired_OF_i_A57]  =  true;
	}

	if (boolState[required_OF_i_A58] && boolState[already_standby_OF_i_A58] )
	{
		boolState[to_be_fired_OF_i_A58]  =  true;
	}

	if (boolState[required_OF_i_A60] && boolState[already_standby_OF_i_A60] )
	{
		boolState[to_be_fired_OF_i_A60]  =  true;
	}

	if (boolState[required_OF_i_A61] && boolState[already_standby_OF_i_A61] )
	{
		boolState[to_be_fired_OF_i_A61]  =  true;
	}

	if (boolState[required_OF_i_A63] && boolState[already_standby_OF_i_A63] )
	{
		boolState[to_be_fired_OF_i_A63]  =  true;
	}

	if (boolState[required_OF_i_A64] && boolState[already_standby_OF_i_A64] )
	{
		boolState[to_be_fired_OF_i_A64]  =  true;
	}

	if (boolState[required_OF_i_A66] && boolState[already_standby_OF_i_A66] )
	{
		boolState[to_be_fired_OF_i_A66]  =  true;
	}

	if (boolState[required_OF_i_A67] && boolState[already_standby_OF_i_A67] )
	{
		boolState[to_be_fired_OF_i_A67]  =  true;
	}

	if (boolState[required_OF_i_A68] && boolState[already_standby_OF_i_A68] )
	{
		boolState[to_be_fired_OF_i_A68]  =  true;
	}

	if (boolState[required_OF_i_A69] && boolState[already_standby_OF_i_A69] )
	{
		boolState[to_be_fired_OF_i_A69]  =  true;
	}

	if (boolState[required_OF_i_A70] && boolState[already_standby_OF_i_A70] )
	{
		boolState[to_be_fired_OF_i_A70]  =  true;
	}

	if (boolState[required_OF_i_A71] && boolState[already_standby_OF_i_A71] )
	{
		boolState[to_be_fired_OF_i_A71]  =  true;
	}

	if (boolState[required_OF_i_A72] && boolState[already_standby_OF_i_A72] )
	{
		boolState[to_be_fired_OF_i_A72]  =  true;
	}

	if (boolState[required_OF_i_A73] && boolState[already_standby_OF_i_A73] )
	{
		boolState[to_be_fired_OF_i_A73]  =  true;
	}

	if (boolState[required_OF_i_A74] && boolState[already_standby_OF_i_A74] )
	{
		boolState[to_be_fired_OF_i_A74]  =  true;
	}

	if (boolState[required_OF_i_A75] && boolState[already_standby_OF_i_A75] )
	{
		boolState[to_be_fired_OF_i_A75]  =  true;
	}

	if (boolState[required_OF_i_A76] && boolState[already_standby_OF_i_A76] )
	{
		boolState[to_be_fired_OF_i_A76]  =  true;
	}

	if (boolState[required_OF_i_A77] && boolState[already_standby_OF_i_A77] )
	{
		boolState[to_be_fired_OF_i_A77]  =  true;
	}

	if (boolState[required_OF_i_A81] && boolState[already_standby_OF_i_A81] )
	{
		boolState[to_be_fired_OF_i_A81]  =  true;
	}

}

void
storm::figaro::FigaroProgram_vgs_8_Trim_Article_No_repair::runInteractions() {
    int counter = 0;
        int comparator = 1;
        doReinitialisations();
        int max_interactions_loop = 200;
        counter = 0;
        comparator = 1;
        do
        {
            //cout << counter << endl;
            saveCurrentState();
		runOnceInteractionStep_initialization();

		comparator = compareStates();
            counter++;

        } while (comparator > 0 && counter < max_interactions_loop);
        if (comparator <= 0)
        {
            //cout << "==> Stabilisation of interactions at loop #" << counter << " for runInteractionStep_initialization() ." << endl;
        }
        else {
            //cout << "==> Maximum of interactions loop  reached : #" << counter <<" for runOnceInteractionStep_initialization()." << endl;
        }
         
        counter = 0;
        comparator = 1;
        do
        {
            //cout << counter << endl;
            saveCurrentState();
		runOnceInteractionStep_propagate_effect_S();

		comparator = compareStates();
            counter++;

        } while (comparator > 0 && counter < max_interactions_loop);
        if (comparator <= 0)
        {
            //cout << "==> Stabilisation of interactions at loop #" << counter << " for runInteractionStep_propagate_effect_S() ." << endl;
        }
        else {
            //cout << "==> Maximum of interactions loop  reached : #" << counter <<" for runOnceInteractionStep_propagate_effect_S()." << endl;
        }
         
        counter = 0;
        comparator = 1;
        do
        {
            //cout << counter << endl;
            saveCurrentState();
		runOnceInteractionStep_propagate_effect_required();

		comparator = compareStates();
            counter++;

        } while (comparator > 0 && counter < max_interactions_loop);
        if (comparator <= 0)
        {
            //cout << "==> Stabilisation of interactions at loop #" << counter << " for runInteractionStep_propagate_effect_required() ." << endl;
        }
        else {
            //cout << "==> Maximum of interactions loop  reached : #" << counter <<" for runOnceInteractionStep_propagate_effect_required()." << endl;
        }
         
        counter = 0;
        comparator = 1;
        do
        {
            //cout << counter << endl;
            saveCurrentState();
		runOnceInteractionStep_propagate_leaves();

		comparator = compareStates();
            counter++;

        } while (comparator > 0 && counter < max_interactions_loop);
        if (comparator <= 0)
        {
            //cout << "==> Stabilisation of interactions at loop #" << counter << " for runInteractionStep_propagate_leaves() ." << endl;
        }
        else {
            //cout << "==> Maximum of interactions loop  reached : #" << counter <<" for runOnceInteractionStep_propagate_leaves()." << endl;
        }
         
        counter = 0;
        comparator = 1;
        do
        {
            //cout << counter << endl;
            saveCurrentState();
		runOnceInteractionStep_tops();

		comparator = compareStates();
            counter++;

        } while (comparator > 0 && counter < max_interactions_loop);
        if (comparator <= 0)
        {
            //cout << "==> Stabilisation of interactions at loop #" << counter << " for runInteractionStep_tops() ." << endl;
        }
        else {
            //cout << "==> Maximum of interactions loop  reached : #" << counter <<" for runOnceInteractionStep_tops()." << endl;
        }
         
        // ------------------- Handling of FailureState element --------------------------------
    
	boolFailureState[exp0] = ( boolState[S_OF_UE_1] );
        //cout << endl;
    }void storm::figaro::FigaroProgram_vgs_8_Trim_Article_No_repair::printstatetuple(){

                std::cout<<"\n State information: (";
                for (int i=0; i<boolFailureState.size(); i++)
                    {
                    std::cout<<boolFailureState.at(i);
                    }
                std::cout<<")";

            }
        int_fast64_t storm::figaro::FigaroProgram_vgs_8_Trim_Article_No_repair::stateSize() const{
            return numBoolState;
}
        void storm::figaro::FigaroProgram_vgs_8_Trim_Article_No_repair::fireinsttransitiongroup(std::string user_input_ins)

            {
             std::vector<int> list_user_inputs = {};
            int user_input = -2;
            stringstream ss(user_input_ins);
            for (int i; ss >> i;) {
                list_user_inputs.push_back(i);
                if (ss.peek() == ',')
                    ss.ignore();
            }

            for (size_t i = 0; i < list_user_inputs.size(); i++)
                {
               //cout << list_user_inputs[i] << endl;
                user_input = list_user_inputs[i];
                if (user_input == -1) {
                    break;
                }
                fireOccurrence(user_input);
                }
            }

        }
    }
    