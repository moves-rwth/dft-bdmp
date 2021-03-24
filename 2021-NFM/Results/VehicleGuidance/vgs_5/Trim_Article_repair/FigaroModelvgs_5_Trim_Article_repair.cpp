#include <iostream>
#include "FigaroModelvgs_5_Trim_Article_repair.h"

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
        
void storm::figaro::FigaroProgram_vgs_5_Trim_Article_repair::init()
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
	boolState[failF_OF_A1] = false;
	REINITIALISATION_OF_required_OF_A10 = true;
	boolState[already_S_OF_A10] = false;
	REINITIALISATION_OF_S_OF_A10 = false;
	REINITIALISATION_OF_relevant_evt_OF_A10 = false;
	boolState[failF_OF_A10] = false;
	REINITIALISATION_OF_required_OF_A100 = true;
	boolState[already_S_OF_A100] = false;
	REINITIALISATION_OF_S_OF_A100 = false;
	REINITIALISATION_OF_relevant_evt_OF_A100 = false;
	REINITIALISATION_OF_required_OF_A102 = true;
	boolState[already_S_OF_A102] = false;
	REINITIALISATION_OF_S_OF_A102 = false;
	REINITIALISATION_OF_relevant_evt_OF_A102 = false;
	boolState[failF_OF_A102] = false;
	REINITIALISATION_OF_required_OF_A103 = true;
	boolState[already_S_OF_A103] = false;
	REINITIALISATION_OF_S_OF_A103 = false;
	REINITIALISATION_OF_relevant_evt_OF_A103 = false;
	boolState[failF_OF_A103] = false;
	REINITIALISATION_OF_required_OF_A104 = true;
	boolState[already_S_OF_A104] = false;
	REINITIALISATION_OF_S_OF_A104 = false;
	REINITIALISATION_OF_relevant_evt_OF_A104 = false;
	boolState[failF_OF_A104] = false;
	REINITIALISATION_OF_required_OF_A105 = true;
	boolState[already_S_OF_A105] = false;
	REINITIALISATION_OF_S_OF_A105 = false;
	REINITIALISATION_OF_relevant_evt_OF_A105 = false;
	REINITIALISATION_OF_required_OF_A107 = true;
	boolState[already_S_OF_A107] = false;
	REINITIALISATION_OF_S_OF_A107 = false;
	REINITIALISATION_OF_relevant_evt_OF_A107 = false;
	REINITIALISATION_OF_required_OF_A11 = true;
	boolState[already_S_OF_A11] = false;
	REINITIALISATION_OF_S_OF_A11 = false;
	REINITIALISATION_OF_relevant_evt_OF_A11 = false;
	REINITIALISATION_OF_required_OF_A13 = true;
	boolState[already_S_OF_A13] = false;
	REINITIALISATION_OF_S_OF_A13 = false;
	REINITIALISATION_OF_relevant_evt_OF_A13 = false;
	boolState[failF_OF_A13] = false;
	REINITIALISATION_OF_required_OF_A14 = true;
	boolState[already_S_OF_A14] = false;
	REINITIALISATION_OF_S_OF_A14 = false;
	REINITIALISATION_OF_relevant_evt_OF_A14 = false;
	REINITIALISATION_OF_required_OF_A16 = true;
	boolState[already_S_OF_A16] = false;
	REINITIALISATION_OF_S_OF_A16 = false;
	REINITIALISATION_OF_relevant_evt_OF_A16 = false;
	boolState[failF_OF_A16] = false;
	REINITIALISATION_OF_required_OF_A17 = true;
	boolState[already_S_OF_A17] = false;
	REINITIALISATION_OF_S_OF_A17 = false;
	REINITIALISATION_OF_relevant_evt_OF_A17 = false;
	REINITIALISATION_OF_required_OF_A19 = true;
	boolState[already_S_OF_A19] = false;
	REINITIALISATION_OF_S_OF_A19 = false;
	REINITIALISATION_OF_relevant_evt_OF_A19 = false;
	boolState[failF_OF_A19] = false;
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
	boolState[failF_OF_A29] = false;
	REINITIALISATION_OF_required_OF_A30 = true;
	boolState[already_S_OF_A30] = false;
	REINITIALISATION_OF_S_OF_A30 = false;
	REINITIALISATION_OF_relevant_evt_OF_A30 = false;
	REINITIALISATION_OF_required_OF_A31 = true;
	boolState[already_S_OF_A31] = false;
	REINITIALISATION_OF_S_OF_A31 = false;
	REINITIALISATION_OF_relevant_evt_OF_A31 = false;
	REINITIALISATION_OF_required_OF_A33 = true;
	boolState[already_S_OF_A33] = false;
	REINITIALISATION_OF_S_OF_A33 = false;
	REINITIALISATION_OF_relevant_evt_OF_A33 = false;
	boolState[failF_OF_A33] = false;
	REINITIALISATION_OF_required_OF_A34 = true;
	boolState[already_S_OF_A34] = false;
	REINITIALISATION_OF_S_OF_A34 = false;
	REINITIALISATION_OF_relevant_evt_OF_A34 = false;
	REINITIALISATION_OF_required_OF_A36 = true;
	boolState[already_S_OF_A36] = false;
	REINITIALISATION_OF_S_OF_A36 = false;
	REINITIALISATION_OF_relevant_evt_OF_A36 = false;
	boolState[failF_OF_A36] = false;
	REINITIALISATION_OF_required_OF_A37 = true;
	boolState[already_S_OF_A37] = false;
	REINITIALISATION_OF_S_OF_A37 = false;
	REINITIALISATION_OF_relevant_evt_OF_A37 = false;
	REINITIALISATION_OF_required_OF_A39 = true;
	boolState[already_S_OF_A39] = false;
	REINITIALISATION_OF_S_OF_A39 = false;
	REINITIALISATION_OF_relevant_evt_OF_A39 = false;
	boolState[failF_OF_A39] = false;
	REINITIALISATION_OF_required_OF_A4 = true;
	boolState[already_S_OF_A4] = false;
	REINITIALISATION_OF_S_OF_A4 = false;
	REINITIALISATION_OF_relevant_evt_OF_A4 = false;
	boolState[failF_OF_A4] = false;
	REINITIALISATION_OF_required_OF_A40 = true;
	boolState[already_S_OF_A40] = false;
	REINITIALISATION_OF_S_OF_A40 = false;
	REINITIALISATION_OF_relevant_evt_OF_A40 = false;
	REINITIALISATION_OF_required_OF_A41 = true;
	boolState[already_S_OF_A41] = false;
	REINITIALISATION_OF_S_OF_A41 = false;
	REINITIALISATION_OF_relevant_evt_OF_A41 = false;
	REINITIALISATION_OF_required_OF_A43 = true;
	boolState[already_S_OF_A43] = false;
	REINITIALISATION_OF_S_OF_A43 = false;
	REINITIALISATION_OF_relevant_evt_OF_A43 = false;
	REINITIALISATION_OF_required_OF_A44 = true;
	boolState[already_S_OF_A44] = false;
	REINITIALISATION_OF_S_OF_A44 = false;
	REINITIALISATION_OF_relevant_evt_OF_A44 = false;
	REINITIALISATION_OF_required_OF_A45 = true;
	boolState[already_S_OF_A45] = false;
	REINITIALISATION_OF_S_OF_A45 = false;
	REINITIALISATION_OF_relevant_evt_OF_A45 = false;
	REINITIALISATION_OF_required_OF_A46 = true;
	boolState[already_S_OF_A46] = false;
	REINITIALISATION_OF_S_OF_A46 = false;
	REINITIALISATION_OF_relevant_evt_OF_A46 = false;
	REINITIALISATION_OF_required_OF_A47 = true;
	boolState[already_S_OF_A47] = false;
	REINITIALISATION_OF_S_OF_A47 = false;
	REINITIALISATION_OF_relevant_evt_OF_A47 = false;
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
	REINITIALISATION_OF_required_OF_A51 = true;
	boolState[already_S_OF_A51] = false;
	REINITIALISATION_OF_S_OF_A51 = false;
	REINITIALISATION_OF_relevant_evt_OF_A51 = false;
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
	boolState[failF_OF_A67] = false;
	REINITIALISATION_OF_required_OF_A68 = true;
	boolState[already_S_OF_A68] = false;
	REINITIALISATION_OF_S_OF_A68 = false;
	REINITIALISATION_OF_relevant_evt_OF_A68 = false;
	boolState[failF_OF_A68] = false;
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
	boolState[failF_OF_A75] = false;
	REINITIALISATION_OF_required_OF_A76 = true;
	boolState[already_S_OF_A76] = false;
	REINITIALISATION_OF_S_OF_A76 = false;
	REINITIALISATION_OF_relevant_evt_OF_A76 = false;
	boolState[failF_OF_A76] = false;
	REINITIALISATION_OF_required_OF_A77 = true;
	boolState[already_S_OF_A77] = false;
	REINITIALISATION_OF_S_OF_A77 = false;
	REINITIALISATION_OF_relevant_evt_OF_A77 = false;
	boolState[failF_OF_A77] = false;
	REINITIALISATION_OF_required_OF_A78 = true;
	boolState[already_S_OF_A78] = false;
	REINITIALISATION_OF_S_OF_A78 = false;
	REINITIALISATION_OF_relevant_evt_OF_A78 = false;
	REINITIALISATION_OF_required_OF_A8 = true;
	boolState[already_S_OF_A8] = false;
	REINITIALISATION_OF_S_OF_A8 = false;
	REINITIALISATION_OF_relevant_evt_OF_A8 = false;
	REINITIALISATION_OF_required_OF_A80 = true;
	boolState[already_S_OF_A80] = false;
	REINITIALISATION_OF_S_OF_A80 = false;
	REINITIALISATION_OF_relevant_evt_OF_A80 = false;
	boolState[failF_OF_A80] = false;
	REINITIALISATION_OF_required_OF_A81 = true;
	boolState[already_S_OF_A81] = false;
	REINITIALISATION_OF_S_OF_A81 = false;
	REINITIALISATION_OF_relevant_evt_OF_A81 = false;
	boolState[failF_OF_A81] = false;
	REINITIALISATION_OF_required_OF_A82 = true;
	boolState[already_S_OF_A82] = false;
	REINITIALISATION_OF_S_OF_A82 = false;
	REINITIALISATION_OF_relevant_evt_OF_A82 = false;
	boolState[failF_OF_A82] = false;
	REINITIALISATION_OF_required_OF_A83 = true;
	boolState[already_S_OF_A83] = false;
	REINITIALISATION_OF_S_OF_A83 = false;
	REINITIALISATION_OF_relevant_evt_OF_A83 = false;
	REINITIALISATION_OF_required_OF_A85 = true;
	boolState[already_S_OF_A85] = false;
	REINITIALISATION_OF_S_OF_A85 = false;
	REINITIALISATION_OF_relevant_evt_OF_A85 = false;
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
	REINITIALISATION_OF_required_OF_A97 = true;
	boolState[already_S_OF_A97] = false;
	REINITIALISATION_OF_S_OF_A97 = false;
	REINITIALISATION_OF_relevant_evt_OF_A97 = false;
	boolState[failF_OF_A97] = false;
	REINITIALISATION_OF_required_OF_A98 = true;
	boolState[already_S_OF_A98] = false;
	REINITIALISATION_OF_S_OF_A98 = false;
	REINITIALISATION_OF_relevant_evt_OF_A98 = false;
	boolState[failF_OF_A98] = false;
	REINITIALISATION_OF_required_OF_A99 = true;
	boolState[already_S_OF_A99] = false;
	REINITIALISATION_OF_S_OF_A99 = false;
	REINITIALISATION_OF_relevant_evt_OF_A99 = false;
	boolState[failF_OF_A99] = false;
	REINITIALISATION_OF_required_OF_UE_1 = true;
	boolState[already_S_OF_UE_1] = false;
	REINITIALISATION_OF_S_OF_UE_1 = false;
	REINITIALISATION_OF_relevant_evt_OF_UE_1 = false;
	REINITIALISATION_OF_required_OF_f_A43 = true;
	boolState[already_S_OF_f_A43] = false;
	REINITIALISATION_OF_S_OF_f_A43 = false;
	REINITIALISATION_OF_relevant_evt_OF_f_A43 = false;
	boolState[failF_OF_f_A43] = false;
	REINITIALISATION_OF_required_OF_f_A44 = true;
	boolState[already_S_OF_f_A44] = false;
	REINITIALISATION_OF_S_OF_f_A44 = false;
	REINITIALISATION_OF_relevant_evt_OF_f_A44 = false;
	boolState[failF_OF_f_A44] = false;
	REINITIALISATION_OF_required_OF_f_A45 = true;
	boolState[already_S_OF_f_A45] = false;
	REINITIALISATION_OF_S_OF_f_A45 = false;
	REINITIALISATION_OF_relevant_evt_OF_f_A45 = false;
	boolState[failF_OF_f_A45] = false;
	REINITIALISATION_OF_required_OF_f_A46 = true;
	boolState[already_S_OF_f_A46] = false;
	REINITIALISATION_OF_S_OF_f_A46 = false;
	REINITIALISATION_OF_relevant_evt_OF_f_A46 = false;
	boolState[failF_OF_f_A46] = false;
	REINITIALISATION_OF_required_OF_f_A47 = true;
	boolState[already_S_OF_f_A47] = false;
	REINITIALISATION_OF_S_OF_f_A47 = false;
	REINITIALISATION_OF_relevant_evt_OF_f_A47 = false;
	boolState[failF_OF_f_A47] = false;
	REINITIALISATION_OF_required_OF_f_A48 = true;
	boolState[already_S_OF_f_A48] = false;
	REINITIALISATION_OF_S_OF_f_A48 = false;
	REINITIALISATION_OF_relevant_evt_OF_f_A48 = false;
	boolState[failF_OF_f_A48] = false;
	REINITIALISATION_OF_required_OF_f_A49 = true;
	boolState[already_S_OF_f_A49] = false;
	REINITIALISATION_OF_S_OF_f_A49 = false;
	REINITIALISATION_OF_relevant_evt_OF_f_A49 = false;
	boolState[failF_OF_f_A49] = false;
	REINITIALISATION_OF_required_OF_f_A51 = true;
	boolState[already_S_OF_f_A51] = false;
	REINITIALISATION_OF_S_OF_f_A51 = false;
	REINITIALISATION_OF_relevant_evt_OF_f_A51 = false;
	boolState[failF_OF_f_A51] = false;
	REINITIALISATION_OF_required_OF_f_A52 = true;
	boolState[already_S_OF_f_A52] = false;
	REINITIALISATION_OF_S_OF_f_A52 = false;
	REINITIALISATION_OF_relevant_evt_OF_f_A52 = false;
	boolState[failF_OF_f_A52] = false;
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
	REINITIALISATION_OF_required_OF_f_A59 = true;
	boolState[already_S_OF_f_A59] = false;
	REINITIALISATION_OF_S_OF_f_A59 = false;
	REINITIALISATION_OF_relevant_evt_OF_f_A59 = false;
	boolState[failF_OF_f_A59] = false;
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
	REINITIALISATION_OF_required_OF_f_A62 = true;
	boolState[already_S_OF_f_A62] = false;
	REINITIALISATION_OF_S_OF_f_A62 = false;
	REINITIALISATION_OF_relevant_evt_OF_f_A62 = false;
	boolState[failF_OF_f_A62] = false;
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
	REINITIALISATION_OF_required_OF_f_A65 = true;
	boolState[already_S_OF_f_A65] = false;
	REINITIALISATION_OF_S_OF_f_A65 = false;
	REINITIALISATION_OF_relevant_evt_OF_f_A65 = false;
	boolState[failF_OF_f_A65] = false;
	REINITIALISATION_OF_required_OF_f_A66 = true;
	boolState[already_S_OF_f_A66] = false;
	REINITIALISATION_OF_S_OF_f_A66 = false;
	REINITIALISATION_OF_relevant_evt_OF_f_A66 = false;
	boolState[failF_OF_f_A66] = false;
	REINITIALISATION_OF_required_OF_i_A43 = true;
	boolState[already_S_OF_i_A43] = false;
	REINITIALISATION_OF_S_OF_i_A43 = false;
	REINITIALISATION_OF_relevant_evt_OF_i_A43 = false;
	boolState[failI_OF_i_A43] = false;
	REINITIALISATION_OF_to_be_fired_OF_i_A43 = false;
	boolState[already_standby_OF_i_A43] = false;
	boolState[already_required_OF_i_A43] = false;
	REINITIALISATION_OF_required_OF_i_A44 = true;
	boolState[already_S_OF_i_A44] = false;
	REINITIALISATION_OF_S_OF_i_A44 = false;
	REINITIALISATION_OF_relevant_evt_OF_i_A44 = false;
	boolState[failI_OF_i_A44] = false;
	REINITIALISATION_OF_to_be_fired_OF_i_A44 = false;
	boolState[already_standby_OF_i_A44] = false;
	boolState[already_required_OF_i_A44] = false;
	REINITIALISATION_OF_required_OF_i_A45 = true;
	boolState[already_S_OF_i_A45] = false;
	REINITIALISATION_OF_S_OF_i_A45 = false;
	REINITIALISATION_OF_relevant_evt_OF_i_A45 = false;
	boolState[failI_OF_i_A45] = false;
	REINITIALISATION_OF_to_be_fired_OF_i_A45 = false;
	boolState[already_standby_OF_i_A45] = false;
	boolState[already_required_OF_i_A45] = false;
	REINITIALISATION_OF_required_OF_i_A46 = true;
	boolState[already_S_OF_i_A46] = false;
	REINITIALISATION_OF_S_OF_i_A46 = false;
	REINITIALISATION_OF_relevant_evt_OF_i_A46 = false;
	boolState[failI_OF_i_A46] = false;
	REINITIALISATION_OF_to_be_fired_OF_i_A46 = false;
	boolState[already_standby_OF_i_A46] = false;
	boolState[already_required_OF_i_A46] = false;
	REINITIALISATION_OF_required_OF_i_A47 = true;
	boolState[already_S_OF_i_A47] = false;
	REINITIALISATION_OF_S_OF_i_A47 = false;
	REINITIALISATION_OF_relevant_evt_OF_i_A47 = false;
	boolState[failI_OF_i_A47] = false;
	REINITIALISATION_OF_to_be_fired_OF_i_A47 = false;
	boolState[already_standby_OF_i_A47] = false;
	boolState[already_required_OF_i_A47] = false;
	REINITIALISATION_OF_required_OF_i_A48 = true;
	boolState[already_S_OF_i_A48] = false;
	REINITIALISATION_OF_S_OF_i_A48 = false;
	REINITIALISATION_OF_relevant_evt_OF_i_A48 = false;
	boolState[failI_OF_i_A48] = false;
	REINITIALISATION_OF_to_be_fired_OF_i_A48 = false;
	boolState[already_standby_OF_i_A48] = false;
	boolState[already_required_OF_i_A48] = false;
	REINITIALISATION_OF_required_OF_i_A49 = true;
	boolState[already_S_OF_i_A49] = false;
	REINITIALISATION_OF_S_OF_i_A49 = false;
	REINITIALISATION_OF_relevant_evt_OF_i_A49 = false;
	boolState[failI_OF_i_A49] = false;
	REINITIALISATION_OF_to_be_fired_OF_i_A49 = false;
	boolState[already_standby_OF_i_A49] = false;
	boolState[already_required_OF_i_A49] = false;
	REINITIALISATION_OF_required_OF_i_A51 = true;
	boolState[already_S_OF_i_A51] = false;
	REINITIALISATION_OF_S_OF_i_A51 = false;
	REINITIALISATION_OF_relevant_evt_OF_i_A51 = false;
	boolState[failI_OF_i_A51] = false;
	REINITIALISATION_OF_to_be_fired_OF_i_A51 = false;
	boolState[already_standby_OF_i_A51] = false;
	boolState[already_required_OF_i_A51] = false;
	REINITIALISATION_OF_required_OF_i_A52 = true;
	boolState[already_S_OF_i_A52] = false;
	REINITIALISATION_OF_S_OF_i_A52 = false;
	REINITIALISATION_OF_relevant_evt_OF_i_A52 = false;
	boolState[failI_OF_i_A52] = false;
	REINITIALISATION_OF_to_be_fired_OF_i_A52 = false;
	boolState[already_standby_OF_i_A52] = false;
	boolState[already_required_OF_i_A52] = false;
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
	REINITIALISATION_OF_required_OF_i_A59 = true;
	boolState[already_S_OF_i_A59] = false;
	REINITIALISATION_OF_S_OF_i_A59 = false;
	REINITIALISATION_OF_relevant_evt_OF_i_A59 = false;
	boolState[failI_OF_i_A59] = false;
	REINITIALISATION_OF_to_be_fired_OF_i_A59 = false;
	boolState[already_standby_OF_i_A59] = false;
	boolState[already_required_OF_i_A59] = false;
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
	REINITIALISATION_OF_required_OF_i_A62 = true;
	boolState[already_S_OF_i_A62] = false;
	REINITIALISATION_OF_S_OF_i_A62 = false;
	REINITIALISATION_OF_relevant_evt_OF_i_A62 = false;
	boolState[failI_OF_i_A62] = false;
	REINITIALISATION_OF_to_be_fired_OF_i_A62 = false;
	boolState[already_standby_OF_i_A62] = false;
	boolState[already_required_OF_i_A62] = false;
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
	REINITIALISATION_OF_required_OF_i_A65 = true;
	boolState[already_S_OF_i_A65] = false;
	REINITIALISATION_OF_S_OF_i_A65 = false;
	REINITIALISATION_OF_relevant_evt_OF_i_A65 = false;
	boolState[failI_OF_i_A65] = false;
	REINITIALISATION_OF_to_be_fired_OF_i_A65 = false;
	boolState[already_standby_OF_i_A65] = false;
	boolState[already_required_OF_i_A65] = false;
	REINITIALISATION_OF_required_OF_i_A66 = true;
	boolState[already_S_OF_i_A66] = false;
	REINITIALISATION_OF_S_OF_i_A66 = false;
	REINITIALISATION_OF_relevant_evt_OF_i_A66 = false;
	boolState[failI_OF_i_A66] = false;
	REINITIALISATION_OF_to_be_fired_OF_i_A66 = false;
	boolState[already_standby_OF_i_A66] = false;
	boolState[already_required_OF_i_A66] = false;

	/* ---------- DECLARATION OF OCCURRENCE RULES FIRING FLAGS ------------ */
	FIRE_xx10_OF_A1 = false;
	FIRE_xx11_OF_A1 = false;
	FIRE_xx10_OF_A10 = false;
	FIRE_xx11_OF_A10 = false;
	FIRE_xx10_OF_A102 = false;
	FIRE_xx11_OF_A102 = false;
	FIRE_xx10_OF_A103 = false;
	FIRE_xx11_OF_A103 = false;
	FIRE_xx10_OF_A104 = false;
	FIRE_xx11_OF_A104 = false;
	FIRE_xx10_OF_A13 = false;
	FIRE_xx11_OF_A13 = false;
	FIRE_xx10_OF_A16 = false;
	FIRE_xx11_OF_A16 = false;
	FIRE_xx10_OF_A19 = false;
	FIRE_xx11_OF_A19 = false;
	FIRE_xx10_OF_A22 = false;
	FIRE_xx11_OF_A22 = false;
	FIRE_xx10_OF_A25 = false;
	FIRE_xx11_OF_A25 = false;
	FIRE_xx10_OF_A28 = false;
	FIRE_xx11_OF_A28 = false;
	FIRE_xx10_OF_A29 = false;
	FIRE_xx11_OF_A29 = false;
	FIRE_xx10_OF_A33 = false;
	FIRE_xx11_OF_A33 = false;
	FIRE_xx10_OF_A36 = false;
	FIRE_xx11_OF_A36 = false;
	FIRE_xx10_OF_A39 = false;
	FIRE_xx11_OF_A39 = false;
	FIRE_xx10_OF_A4 = false;
	FIRE_xx11_OF_A4 = false;
	FIRE_xx10_OF_A67 = false;
	FIRE_xx11_OF_A67 = false;
	FIRE_xx10_OF_A68 = false;
	FIRE_xx11_OF_A68 = false;
	FIRE_xx10_OF_A7 = false;
	FIRE_xx11_OF_A7 = false;
	FIRE_xx10_OF_A75 = false;
	FIRE_xx11_OF_A75 = false;
	FIRE_xx10_OF_A76 = false;
	FIRE_xx11_OF_A76 = false;
	FIRE_xx10_OF_A77 = false;
	FIRE_xx11_OF_A77 = false;
	FIRE_xx10_OF_A80 = false;
	FIRE_xx11_OF_A80 = false;
	FIRE_xx10_OF_A81 = false;
	FIRE_xx11_OF_A81 = false;
	FIRE_xx10_OF_A82 = false;
	FIRE_xx11_OF_A82 = false;
	FIRE_xx10_OF_A86 = false;
	FIRE_xx11_OF_A86 = false;
	FIRE_xx10_OF_A87 = false;
	FIRE_xx11_OF_A87 = false;
	FIRE_xx10_OF_A88 = false;
	FIRE_xx11_OF_A88 = false;
	FIRE_xx10_OF_A91 = false;
	FIRE_xx11_OF_A91 = false;
	FIRE_xx10_OF_A92 = false;
	FIRE_xx11_OF_A92 = false;
	FIRE_xx10_OF_A93 = false;
	FIRE_xx11_OF_A93 = false;
	FIRE_xx10_OF_A97 = false;
	FIRE_xx11_OF_A97 = false;
	FIRE_xx10_OF_A98 = false;
	FIRE_xx11_OF_A98 = false;
	FIRE_xx10_OF_A99 = false;
	FIRE_xx11_OF_A99 = false;
	FIRE_xx10_OF_f_A43 = false;
	FIRE_xx11_OF_f_A43 = false;
	FIRE_xx10_OF_f_A44 = false;
	FIRE_xx11_OF_f_A44 = false;
	FIRE_xx10_OF_f_A45 = false;
	FIRE_xx11_OF_f_A45 = false;
	FIRE_xx10_OF_f_A46 = false;
	FIRE_xx11_OF_f_A46 = false;
	FIRE_xx10_OF_f_A47 = false;
	FIRE_xx11_OF_f_A47 = false;
	FIRE_xx10_OF_f_A48 = false;
	FIRE_xx11_OF_f_A48 = false;
	FIRE_xx10_OF_f_A49 = false;
	FIRE_xx11_OF_f_A49 = false;
	FIRE_xx10_OF_f_A51 = false;
	FIRE_xx11_OF_f_A51 = false;
	FIRE_xx10_OF_f_A52 = false;
	FIRE_xx11_OF_f_A52 = false;
	FIRE_xx10_OF_f_A54 = false;
	FIRE_xx11_OF_f_A54 = false;
	FIRE_xx10_OF_f_A55 = false;
	FIRE_xx11_OF_f_A55 = false;
	FIRE_xx10_OF_f_A57 = false;
	FIRE_xx11_OF_f_A57 = false;
	FIRE_xx10_OF_f_A58 = false;
	FIRE_xx11_OF_f_A58 = false;
	FIRE_xx10_OF_f_A59 = false;
	FIRE_xx11_OF_f_A59 = false;
	FIRE_xx10_OF_f_A60 = false;
	FIRE_xx11_OF_f_A60 = false;
	FIRE_xx10_OF_f_A61 = false;
	FIRE_xx11_OF_f_A61 = false;
	FIRE_xx10_OF_f_A62 = false;
	FIRE_xx11_OF_f_A62 = false;
	FIRE_xx10_OF_f_A63 = false;
	FIRE_xx11_OF_f_A63 = false;
	FIRE_xx10_OF_f_A64 = false;
	FIRE_xx11_OF_f_A64 = false;
	FIRE_xx10_OF_f_A65 = false;
	FIRE_xx11_OF_f_A65 = false;
	FIRE_xx10_OF_f_A66 = false;
	FIRE_xx11_OF_f_A66 = false;
	FIRE_xx23_OF_i_A43_INS_110 = false;
	FIRE_xx23_OF_i_A43_INS_111 = false;
	FIRE_xx24_OF_i_A43 = false;
	FIRE_xx23_OF_i_A44_INS_113 = false;
	FIRE_xx23_OF_i_A44_INS_114 = false;
	FIRE_xx24_OF_i_A44 = false;
	FIRE_xx23_OF_i_A45_INS_116 = false;
	FIRE_xx23_OF_i_A45_INS_117 = false;
	FIRE_xx24_OF_i_A45 = false;
	FIRE_xx23_OF_i_A46_INS_119 = false;
	FIRE_xx23_OF_i_A46_INS_120 = false;
	FIRE_xx24_OF_i_A46 = false;
	FIRE_xx23_OF_i_A47_INS_122 = false;
	FIRE_xx23_OF_i_A47_INS_123 = false;
	FIRE_xx24_OF_i_A47 = false;
	FIRE_xx23_OF_i_A48_INS_125 = false;
	FIRE_xx23_OF_i_A48_INS_126 = false;
	FIRE_xx24_OF_i_A48 = false;
	FIRE_xx23_OF_i_A49_INS_128 = false;
	FIRE_xx23_OF_i_A49_INS_129 = false;
	FIRE_xx24_OF_i_A49 = false;
	FIRE_xx23_OF_i_A51_INS_131 = false;
	FIRE_xx23_OF_i_A51_INS_132 = false;
	FIRE_xx24_OF_i_A51 = false;
	FIRE_xx23_OF_i_A52_INS_134 = false;
	FIRE_xx23_OF_i_A52_INS_135 = false;
	FIRE_xx24_OF_i_A52 = false;
	FIRE_xx23_OF_i_A54_INS_137 = false;
	FIRE_xx23_OF_i_A54_INS_138 = false;
	FIRE_xx24_OF_i_A54 = false;
	FIRE_xx23_OF_i_A55_INS_140 = false;
	FIRE_xx23_OF_i_A55_INS_141 = false;
	FIRE_xx24_OF_i_A55 = false;
	FIRE_xx23_OF_i_A57_INS_143 = false;
	FIRE_xx23_OF_i_A57_INS_144 = false;
	FIRE_xx24_OF_i_A57 = false;
	FIRE_xx23_OF_i_A58_INS_146 = false;
	FIRE_xx23_OF_i_A58_INS_147 = false;
	FIRE_xx24_OF_i_A58 = false;
	FIRE_xx23_OF_i_A59_INS_149 = false;
	FIRE_xx23_OF_i_A59_INS_150 = false;
	FIRE_xx24_OF_i_A59 = false;
	FIRE_xx23_OF_i_A60_INS_152 = false;
	FIRE_xx23_OF_i_A60_INS_153 = false;
	FIRE_xx24_OF_i_A60 = false;
	FIRE_xx23_OF_i_A61_INS_155 = false;
	FIRE_xx23_OF_i_A61_INS_156 = false;
	FIRE_xx24_OF_i_A61 = false;
	FIRE_xx23_OF_i_A62_INS_158 = false;
	FIRE_xx23_OF_i_A62_INS_159 = false;
	FIRE_xx24_OF_i_A62 = false;
	FIRE_xx23_OF_i_A63_INS_161 = false;
	FIRE_xx23_OF_i_A63_INS_162 = false;
	FIRE_xx24_OF_i_A63 = false;
	FIRE_xx23_OF_i_A64_INS_164 = false;
	FIRE_xx23_OF_i_A64_INS_165 = false;
	FIRE_xx24_OF_i_A64 = false;
	FIRE_xx23_OF_i_A65_INS_167 = false;
	FIRE_xx23_OF_i_A65_INS_168 = false;
	FIRE_xx24_OF_i_A65 = false;
	FIRE_xx23_OF_i_A66_INS_170 = false;
	FIRE_xx23_OF_i_A66_INS_171 = false;
	FIRE_xx24_OF_i_A66 = false;

}

void storm::figaro::FigaroProgram_vgs_5_Trim_Article_repair::saveCurrentState()
{
	// cout <<">>>>>>>>>>>>>>>>>>>> Saving current state  <<<<<<<<<<<<<<<<<<<<<<<" << endl;
	backupBoolState = boolState ;
	backupFloatState = floatState ;
	backupIntState = intState ;
	backupEnumState = enumState ;
}

int storm::figaro::FigaroProgram_vgs_5_Trim_Article_repair::compareStates()
{
	// cout <<">>>>>>>>>>>>>>>>>>>> Comparing state with previous one (return number of differences) <<<<<<<<<<<<<<<<<<<<<<<" << endl;

	return (backupBoolState != boolState) + (backupFloatState != floatState) + (backupIntState != intState) + (backupEnumState != enumState); 
}

void storm::figaro::FigaroProgram_vgs_5_Trim_Article_repair::printState()
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
	//cout << "Attribute :  boolState[failF_OF_A1] | Value : " << boolState[failF_OF_A1] << endl;
	//cout << "Attribute :  boolState[required_OF_A10] | Value : " << boolState[required_OF_A10] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A10] | Value : " << boolState[already_S_OF_A10] << endl;
	//cout << "Attribute :  boolState[S_OF_A10] | Value : " << boolState[S_OF_A10] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A10] | Value : " << boolState[relevant_evt_OF_A10] << endl;
	//cout << "Attribute :  boolState[failF_OF_A10] | Value : " << boolState[failF_OF_A10] << endl;
	//cout << "Attribute :  boolState[required_OF_A100] | Value : " << boolState[required_OF_A100] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A100] | Value : " << boolState[already_S_OF_A100] << endl;
	//cout << "Attribute :  boolState[S_OF_A100] | Value : " << boolState[S_OF_A100] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A100] | Value : " << boolState[relevant_evt_OF_A100] << endl;
	//cout << "Attribute :  boolState[required_OF_A102] | Value : " << boolState[required_OF_A102] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A102] | Value : " << boolState[already_S_OF_A102] << endl;
	//cout << "Attribute :  boolState[S_OF_A102] | Value : " << boolState[S_OF_A102] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A102] | Value : " << boolState[relevant_evt_OF_A102] << endl;
	//cout << "Attribute :  boolState[failF_OF_A102] | Value : " << boolState[failF_OF_A102] << endl;
	//cout << "Attribute :  boolState[required_OF_A103] | Value : " << boolState[required_OF_A103] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A103] | Value : " << boolState[already_S_OF_A103] << endl;
	//cout << "Attribute :  boolState[S_OF_A103] | Value : " << boolState[S_OF_A103] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A103] | Value : " << boolState[relevant_evt_OF_A103] << endl;
	//cout << "Attribute :  boolState[failF_OF_A103] | Value : " << boolState[failF_OF_A103] << endl;
	//cout << "Attribute :  boolState[required_OF_A104] | Value : " << boolState[required_OF_A104] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A104] | Value : " << boolState[already_S_OF_A104] << endl;
	//cout << "Attribute :  boolState[S_OF_A104] | Value : " << boolState[S_OF_A104] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A104] | Value : " << boolState[relevant_evt_OF_A104] << endl;
	//cout << "Attribute :  boolState[failF_OF_A104] | Value : " << boolState[failF_OF_A104] << endl;
	//cout << "Attribute :  boolState[required_OF_A105] | Value : " << boolState[required_OF_A105] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A105] | Value : " << boolState[already_S_OF_A105] << endl;
	//cout << "Attribute :  boolState[S_OF_A105] | Value : " << boolState[S_OF_A105] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A105] | Value : " << boolState[relevant_evt_OF_A105] << endl;
	//cout << "Attribute :  boolState[required_OF_A107] | Value : " << boolState[required_OF_A107] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A107] | Value : " << boolState[already_S_OF_A107] << endl;
	//cout << "Attribute :  boolState[S_OF_A107] | Value : " << boolState[S_OF_A107] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A107] | Value : " << boolState[relevant_evt_OF_A107] << endl;
	//cout << "Attribute :  boolState[required_OF_A11] | Value : " << boolState[required_OF_A11] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A11] | Value : " << boolState[already_S_OF_A11] << endl;
	//cout << "Attribute :  boolState[S_OF_A11] | Value : " << boolState[S_OF_A11] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A11] | Value : " << boolState[relevant_evt_OF_A11] << endl;
	//cout << "Attribute :  boolState[required_OF_A13] | Value : " << boolState[required_OF_A13] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A13] | Value : " << boolState[already_S_OF_A13] << endl;
	//cout << "Attribute :  boolState[S_OF_A13] | Value : " << boolState[S_OF_A13] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A13] | Value : " << boolState[relevant_evt_OF_A13] << endl;
	//cout << "Attribute :  boolState[failF_OF_A13] | Value : " << boolState[failF_OF_A13] << endl;
	//cout << "Attribute :  boolState[required_OF_A14] | Value : " << boolState[required_OF_A14] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A14] | Value : " << boolState[already_S_OF_A14] << endl;
	//cout << "Attribute :  boolState[S_OF_A14] | Value : " << boolState[S_OF_A14] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A14] | Value : " << boolState[relevant_evt_OF_A14] << endl;
	//cout << "Attribute :  boolState[required_OF_A16] | Value : " << boolState[required_OF_A16] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A16] | Value : " << boolState[already_S_OF_A16] << endl;
	//cout << "Attribute :  boolState[S_OF_A16] | Value : " << boolState[S_OF_A16] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A16] | Value : " << boolState[relevant_evt_OF_A16] << endl;
	//cout << "Attribute :  boolState[failF_OF_A16] | Value : " << boolState[failF_OF_A16] << endl;
	//cout << "Attribute :  boolState[required_OF_A17] | Value : " << boolState[required_OF_A17] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A17] | Value : " << boolState[already_S_OF_A17] << endl;
	//cout << "Attribute :  boolState[S_OF_A17] | Value : " << boolState[S_OF_A17] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A17] | Value : " << boolState[relevant_evt_OF_A17] << endl;
	//cout << "Attribute :  boolState[required_OF_A19] | Value : " << boolState[required_OF_A19] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A19] | Value : " << boolState[already_S_OF_A19] << endl;
	//cout << "Attribute :  boolState[S_OF_A19] | Value : " << boolState[S_OF_A19] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A19] | Value : " << boolState[relevant_evt_OF_A19] << endl;
	//cout << "Attribute :  boolState[failF_OF_A19] | Value : " << boolState[failF_OF_A19] << endl;
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
	//cout << "Attribute :  boolState[failF_OF_A29] | Value : " << boolState[failF_OF_A29] << endl;
	//cout << "Attribute :  boolState[required_OF_A30] | Value : " << boolState[required_OF_A30] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A30] | Value : " << boolState[already_S_OF_A30] << endl;
	//cout << "Attribute :  boolState[S_OF_A30] | Value : " << boolState[S_OF_A30] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A30] | Value : " << boolState[relevant_evt_OF_A30] << endl;
	//cout << "Attribute :  boolState[required_OF_A31] | Value : " << boolState[required_OF_A31] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A31] | Value : " << boolState[already_S_OF_A31] << endl;
	//cout << "Attribute :  boolState[S_OF_A31] | Value : " << boolState[S_OF_A31] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A31] | Value : " << boolState[relevant_evt_OF_A31] << endl;
	//cout << "Attribute :  boolState[required_OF_A33] | Value : " << boolState[required_OF_A33] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A33] | Value : " << boolState[already_S_OF_A33] << endl;
	//cout << "Attribute :  boolState[S_OF_A33] | Value : " << boolState[S_OF_A33] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A33] | Value : " << boolState[relevant_evt_OF_A33] << endl;
	//cout << "Attribute :  boolState[failF_OF_A33] | Value : " << boolState[failF_OF_A33] << endl;
	//cout << "Attribute :  boolState[required_OF_A34] | Value : " << boolState[required_OF_A34] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A34] | Value : " << boolState[already_S_OF_A34] << endl;
	//cout << "Attribute :  boolState[S_OF_A34] | Value : " << boolState[S_OF_A34] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A34] | Value : " << boolState[relevant_evt_OF_A34] << endl;
	//cout << "Attribute :  boolState[required_OF_A36] | Value : " << boolState[required_OF_A36] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A36] | Value : " << boolState[already_S_OF_A36] << endl;
	//cout << "Attribute :  boolState[S_OF_A36] | Value : " << boolState[S_OF_A36] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A36] | Value : " << boolState[relevant_evt_OF_A36] << endl;
	//cout << "Attribute :  boolState[failF_OF_A36] | Value : " << boolState[failF_OF_A36] << endl;
	//cout << "Attribute :  boolState[required_OF_A37] | Value : " << boolState[required_OF_A37] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A37] | Value : " << boolState[already_S_OF_A37] << endl;
	//cout << "Attribute :  boolState[S_OF_A37] | Value : " << boolState[S_OF_A37] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A37] | Value : " << boolState[relevant_evt_OF_A37] << endl;
	//cout << "Attribute :  boolState[required_OF_A39] | Value : " << boolState[required_OF_A39] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A39] | Value : " << boolState[already_S_OF_A39] << endl;
	//cout << "Attribute :  boolState[S_OF_A39] | Value : " << boolState[S_OF_A39] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A39] | Value : " << boolState[relevant_evt_OF_A39] << endl;
	//cout << "Attribute :  boolState[failF_OF_A39] | Value : " << boolState[failF_OF_A39] << endl;
	//cout << "Attribute :  boolState[required_OF_A4] | Value : " << boolState[required_OF_A4] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A4] | Value : " << boolState[already_S_OF_A4] << endl;
	//cout << "Attribute :  boolState[S_OF_A4] | Value : " << boolState[S_OF_A4] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A4] | Value : " << boolState[relevant_evt_OF_A4] << endl;
	//cout << "Attribute :  boolState[failF_OF_A4] | Value : " << boolState[failF_OF_A4] << endl;
	//cout << "Attribute :  boolState[required_OF_A40] | Value : " << boolState[required_OF_A40] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A40] | Value : " << boolState[already_S_OF_A40] << endl;
	//cout << "Attribute :  boolState[S_OF_A40] | Value : " << boolState[S_OF_A40] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A40] | Value : " << boolState[relevant_evt_OF_A40] << endl;
	//cout << "Attribute :  boolState[required_OF_A41] | Value : " << boolState[required_OF_A41] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A41] | Value : " << boolState[already_S_OF_A41] << endl;
	//cout << "Attribute :  boolState[S_OF_A41] | Value : " << boolState[S_OF_A41] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A41] | Value : " << boolState[relevant_evt_OF_A41] << endl;
	//cout << "Attribute :  boolState[required_OF_A43] | Value : " << boolState[required_OF_A43] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A43] | Value : " << boolState[already_S_OF_A43] << endl;
	//cout << "Attribute :  boolState[S_OF_A43] | Value : " << boolState[S_OF_A43] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A43] | Value : " << boolState[relevant_evt_OF_A43] << endl;
	//cout << "Attribute :  boolState[required_OF_A44] | Value : " << boolState[required_OF_A44] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A44] | Value : " << boolState[already_S_OF_A44] << endl;
	//cout << "Attribute :  boolState[S_OF_A44] | Value : " << boolState[S_OF_A44] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A44] | Value : " << boolState[relevant_evt_OF_A44] << endl;
	//cout << "Attribute :  boolState[required_OF_A45] | Value : " << boolState[required_OF_A45] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A45] | Value : " << boolState[already_S_OF_A45] << endl;
	//cout << "Attribute :  boolState[S_OF_A45] | Value : " << boolState[S_OF_A45] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A45] | Value : " << boolState[relevant_evt_OF_A45] << endl;
	//cout << "Attribute :  boolState[required_OF_A46] | Value : " << boolState[required_OF_A46] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A46] | Value : " << boolState[already_S_OF_A46] << endl;
	//cout << "Attribute :  boolState[S_OF_A46] | Value : " << boolState[S_OF_A46] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A46] | Value : " << boolState[relevant_evt_OF_A46] << endl;
	//cout << "Attribute :  boolState[required_OF_A47] | Value : " << boolState[required_OF_A47] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A47] | Value : " << boolState[already_S_OF_A47] << endl;
	//cout << "Attribute :  boolState[S_OF_A47] | Value : " << boolState[S_OF_A47] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A47] | Value : " << boolState[relevant_evt_OF_A47] << endl;
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
	//cout << "Attribute :  boolState[required_OF_A51] | Value : " << boolState[required_OF_A51] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A51] | Value : " << boolState[already_S_OF_A51] << endl;
	//cout << "Attribute :  boolState[S_OF_A51] | Value : " << boolState[S_OF_A51] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A51] | Value : " << boolState[relevant_evt_OF_A51] << endl;
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
	//cout << "Attribute :  boolState[failF_OF_A67] | Value : " << boolState[failF_OF_A67] << endl;
	//cout << "Attribute :  boolState[required_OF_A68] | Value : " << boolState[required_OF_A68] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A68] | Value : " << boolState[already_S_OF_A68] << endl;
	//cout << "Attribute :  boolState[S_OF_A68] | Value : " << boolState[S_OF_A68] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A68] | Value : " << boolState[relevant_evt_OF_A68] << endl;
	//cout << "Attribute :  boolState[failF_OF_A68] | Value : " << boolState[failF_OF_A68] << endl;
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
	//cout << "Attribute :  boolState[failF_OF_A75] | Value : " << boolState[failF_OF_A75] << endl;
	//cout << "Attribute :  boolState[required_OF_A76] | Value : " << boolState[required_OF_A76] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A76] | Value : " << boolState[already_S_OF_A76] << endl;
	//cout << "Attribute :  boolState[S_OF_A76] | Value : " << boolState[S_OF_A76] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A76] | Value : " << boolState[relevant_evt_OF_A76] << endl;
	//cout << "Attribute :  boolState[failF_OF_A76] | Value : " << boolState[failF_OF_A76] << endl;
	//cout << "Attribute :  boolState[required_OF_A77] | Value : " << boolState[required_OF_A77] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A77] | Value : " << boolState[already_S_OF_A77] << endl;
	//cout << "Attribute :  boolState[S_OF_A77] | Value : " << boolState[S_OF_A77] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A77] | Value : " << boolState[relevant_evt_OF_A77] << endl;
	//cout << "Attribute :  boolState[failF_OF_A77] | Value : " << boolState[failF_OF_A77] << endl;
	//cout << "Attribute :  boolState[required_OF_A78] | Value : " << boolState[required_OF_A78] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A78] | Value : " << boolState[already_S_OF_A78] << endl;
	//cout << "Attribute :  boolState[S_OF_A78] | Value : " << boolState[S_OF_A78] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A78] | Value : " << boolState[relevant_evt_OF_A78] << endl;
	//cout << "Attribute :  boolState[required_OF_A8] | Value : " << boolState[required_OF_A8] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A8] | Value : " << boolState[already_S_OF_A8] << endl;
	//cout << "Attribute :  boolState[S_OF_A8] | Value : " << boolState[S_OF_A8] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A8] | Value : " << boolState[relevant_evt_OF_A8] << endl;
	//cout << "Attribute :  boolState[required_OF_A80] | Value : " << boolState[required_OF_A80] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A80] | Value : " << boolState[already_S_OF_A80] << endl;
	//cout << "Attribute :  boolState[S_OF_A80] | Value : " << boolState[S_OF_A80] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A80] | Value : " << boolState[relevant_evt_OF_A80] << endl;
	//cout << "Attribute :  boolState[failF_OF_A80] | Value : " << boolState[failF_OF_A80] << endl;
	//cout << "Attribute :  boolState[required_OF_A81] | Value : " << boolState[required_OF_A81] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A81] | Value : " << boolState[already_S_OF_A81] << endl;
	//cout << "Attribute :  boolState[S_OF_A81] | Value : " << boolState[S_OF_A81] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A81] | Value : " << boolState[relevant_evt_OF_A81] << endl;
	//cout << "Attribute :  boolState[failF_OF_A81] | Value : " << boolState[failF_OF_A81] << endl;
	//cout << "Attribute :  boolState[required_OF_A82] | Value : " << boolState[required_OF_A82] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A82] | Value : " << boolState[already_S_OF_A82] << endl;
	//cout << "Attribute :  boolState[S_OF_A82] | Value : " << boolState[S_OF_A82] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A82] | Value : " << boolState[relevant_evt_OF_A82] << endl;
	//cout << "Attribute :  boolState[failF_OF_A82] | Value : " << boolState[failF_OF_A82] << endl;
	//cout << "Attribute :  boolState[required_OF_A83] | Value : " << boolState[required_OF_A83] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A83] | Value : " << boolState[already_S_OF_A83] << endl;
	//cout << "Attribute :  boolState[S_OF_A83] | Value : " << boolState[S_OF_A83] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A83] | Value : " << boolState[relevant_evt_OF_A83] << endl;
	//cout << "Attribute :  boolState[required_OF_A85] | Value : " << boolState[required_OF_A85] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A85] | Value : " << boolState[already_S_OF_A85] << endl;
	//cout << "Attribute :  boolState[S_OF_A85] | Value : " << boolState[S_OF_A85] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A85] | Value : " << boolState[relevant_evt_OF_A85] << endl;
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
	//cout << "Attribute :  boolState[required_OF_A97] | Value : " << boolState[required_OF_A97] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A97] | Value : " << boolState[already_S_OF_A97] << endl;
	//cout << "Attribute :  boolState[S_OF_A97] | Value : " << boolState[S_OF_A97] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A97] | Value : " << boolState[relevant_evt_OF_A97] << endl;
	//cout << "Attribute :  boolState[failF_OF_A97] | Value : " << boolState[failF_OF_A97] << endl;
	//cout << "Attribute :  boolState[required_OF_A98] | Value : " << boolState[required_OF_A98] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A98] | Value : " << boolState[already_S_OF_A98] << endl;
	//cout << "Attribute :  boolState[S_OF_A98] | Value : " << boolState[S_OF_A98] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A98] | Value : " << boolState[relevant_evt_OF_A98] << endl;
	//cout << "Attribute :  boolState[failF_OF_A98] | Value : " << boolState[failF_OF_A98] << endl;
	//cout << "Attribute :  boolState[required_OF_A99] | Value : " << boolState[required_OF_A99] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A99] | Value : " << boolState[already_S_OF_A99] << endl;
	//cout << "Attribute :  boolState[S_OF_A99] | Value : " << boolState[S_OF_A99] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A99] | Value : " << boolState[relevant_evt_OF_A99] << endl;
	//cout << "Attribute :  boolState[failF_OF_A99] | Value : " << boolState[failF_OF_A99] << endl;
	//cout << "Attribute :  boolState[required_OF_UE_1] | Value : " << boolState[required_OF_UE_1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_UE_1] | Value : " << boolState[already_S_OF_UE_1] << endl;
	//cout << "Attribute :  boolState[S_OF_UE_1] | Value : " << boolState[S_OF_UE_1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_UE_1] | Value : " << boolState[relevant_evt_OF_UE_1] << endl;
	//cout << "Attribute :  boolState[required_OF_f_A43] | Value : " << boolState[required_OF_f_A43] << endl;
	//cout << "Attribute :  boolState[already_S_OF_f_A43] | Value : " << boolState[already_S_OF_f_A43] << endl;
	//cout << "Attribute :  boolState[S_OF_f_A43] | Value : " << boolState[S_OF_f_A43] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_f_A43] | Value : " << boolState[relevant_evt_OF_f_A43] << endl;
	//cout << "Attribute :  boolState[failF_OF_f_A43] | Value : " << boolState[failF_OF_f_A43] << endl;
	//cout << "Attribute :  boolState[required_OF_f_A44] | Value : " << boolState[required_OF_f_A44] << endl;
	//cout << "Attribute :  boolState[already_S_OF_f_A44] | Value : " << boolState[already_S_OF_f_A44] << endl;
	//cout << "Attribute :  boolState[S_OF_f_A44] | Value : " << boolState[S_OF_f_A44] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_f_A44] | Value : " << boolState[relevant_evt_OF_f_A44] << endl;
	//cout << "Attribute :  boolState[failF_OF_f_A44] | Value : " << boolState[failF_OF_f_A44] << endl;
	//cout << "Attribute :  boolState[required_OF_f_A45] | Value : " << boolState[required_OF_f_A45] << endl;
	//cout << "Attribute :  boolState[already_S_OF_f_A45] | Value : " << boolState[already_S_OF_f_A45] << endl;
	//cout << "Attribute :  boolState[S_OF_f_A45] | Value : " << boolState[S_OF_f_A45] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_f_A45] | Value : " << boolState[relevant_evt_OF_f_A45] << endl;
	//cout << "Attribute :  boolState[failF_OF_f_A45] | Value : " << boolState[failF_OF_f_A45] << endl;
	//cout << "Attribute :  boolState[required_OF_f_A46] | Value : " << boolState[required_OF_f_A46] << endl;
	//cout << "Attribute :  boolState[already_S_OF_f_A46] | Value : " << boolState[already_S_OF_f_A46] << endl;
	//cout << "Attribute :  boolState[S_OF_f_A46] | Value : " << boolState[S_OF_f_A46] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_f_A46] | Value : " << boolState[relevant_evt_OF_f_A46] << endl;
	//cout << "Attribute :  boolState[failF_OF_f_A46] | Value : " << boolState[failF_OF_f_A46] << endl;
	//cout << "Attribute :  boolState[required_OF_f_A47] | Value : " << boolState[required_OF_f_A47] << endl;
	//cout << "Attribute :  boolState[already_S_OF_f_A47] | Value : " << boolState[already_S_OF_f_A47] << endl;
	//cout << "Attribute :  boolState[S_OF_f_A47] | Value : " << boolState[S_OF_f_A47] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_f_A47] | Value : " << boolState[relevant_evt_OF_f_A47] << endl;
	//cout << "Attribute :  boolState[failF_OF_f_A47] | Value : " << boolState[failF_OF_f_A47] << endl;
	//cout << "Attribute :  boolState[required_OF_f_A48] | Value : " << boolState[required_OF_f_A48] << endl;
	//cout << "Attribute :  boolState[already_S_OF_f_A48] | Value : " << boolState[already_S_OF_f_A48] << endl;
	//cout << "Attribute :  boolState[S_OF_f_A48] | Value : " << boolState[S_OF_f_A48] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_f_A48] | Value : " << boolState[relevant_evt_OF_f_A48] << endl;
	//cout << "Attribute :  boolState[failF_OF_f_A48] | Value : " << boolState[failF_OF_f_A48] << endl;
	//cout << "Attribute :  boolState[required_OF_f_A49] | Value : " << boolState[required_OF_f_A49] << endl;
	//cout << "Attribute :  boolState[already_S_OF_f_A49] | Value : " << boolState[already_S_OF_f_A49] << endl;
	//cout << "Attribute :  boolState[S_OF_f_A49] | Value : " << boolState[S_OF_f_A49] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_f_A49] | Value : " << boolState[relevant_evt_OF_f_A49] << endl;
	//cout << "Attribute :  boolState[failF_OF_f_A49] | Value : " << boolState[failF_OF_f_A49] << endl;
	//cout << "Attribute :  boolState[required_OF_f_A51] | Value : " << boolState[required_OF_f_A51] << endl;
	//cout << "Attribute :  boolState[already_S_OF_f_A51] | Value : " << boolState[already_S_OF_f_A51] << endl;
	//cout << "Attribute :  boolState[S_OF_f_A51] | Value : " << boolState[S_OF_f_A51] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_f_A51] | Value : " << boolState[relevant_evt_OF_f_A51] << endl;
	//cout << "Attribute :  boolState[failF_OF_f_A51] | Value : " << boolState[failF_OF_f_A51] << endl;
	//cout << "Attribute :  boolState[required_OF_f_A52] | Value : " << boolState[required_OF_f_A52] << endl;
	//cout << "Attribute :  boolState[already_S_OF_f_A52] | Value : " << boolState[already_S_OF_f_A52] << endl;
	//cout << "Attribute :  boolState[S_OF_f_A52] | Value : " << boolState[S_OF_f_A52] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_f_A52] | Value : " << boolState[relevant_evt_OF_f_A52] << endl;
	//cout << "Attribute :  boolState[failF_OF_f_A52] | Value : " << boolState[failF_OF_f_A52] << endl;
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
	//cout << "Attribute :  boolState[required_OF_f_A59] | Value : " << boolState[required_OF_f_A59] << endl;
	//cout << "Attribute :  boolState[already_S_OF_f_A59] | Value : " << boolState[already_S_OF_f_A59] << endl;
	//cout << "Attribute :  boolState[S_OF_f_A59] | Value : " << boolState[S_OF_f_A59] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_f_A59] | Value : " << boolState[relevant_evt_OF_f_A59] << endl;
	//cout << "Attribute :  boolState[failF_OF_f_A59] | Value : " << boolState[failF_OF_f_A59] << endl;
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
	//cout << "Attribute :  boolState[required_OF_f_A62] | Value : " << boolState[required_OF_f_A62] << endl;
	//cout << "Attribute :  boolState[already_S_OF_f_A62] | Value : " << boolState[already_S_OF_f_A62] << endl;
	//cout << "Attribute :  boolState[S_OF_f_A62] | Value : " << boolState[S_OF_f_A62] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_f_A62] | Value : " << boolState[relevant_evt_OF_f_A62] << endl;
	//cout << "Attribute :  boolState[failF_OF_f_A62] | Value : " << boolState[failF_OF_f_A62] << endl;
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
	//cout << "Attribute :  boolState[required_OF_f_A65] | Value : " << boolState[required_OF_f_A65] << endl;
	//cout << "Attribute :  boolState[already_S_OF_f_A65] | Value : " << boolState[already_S_OF_f_A65] << endl;
	//cout << "Attribute :  boolState[S_OF_f_A65] | Value : " << boolState[S_OF_f_A65] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_f_A65] | Value : " << boolState[relevant_evt_OF_f_A65] << endl;
	//cout << "Attribute :  boolState[failF_OF_f_A65] | Value : " << boolState[failF_OF_f_A65] << endl;
	//cout << "Attribute :  boolState[required_OF_f_A66] | Value : " << boolState[required_OF_f_A66] << endl;
	//cout << "Attribute :  boolState[already_S_OF_f_A66] | Value : " << boolState[already_S_OF_f_A66] << endl;
	//cout << "Attribute :  boolState[S_OF_f_A66] | Value : " << boolState[S_OF_f_A66] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_f_A66] | Value : " << boolState[relevant_evt_OF_f_A66] << endl;
	//cout << "Attribute :  boolState[failF_OF_f_A66] | Value : " << boolState[failF_OF_f_A66] << endl;
	//cout << "Attribute :  boolState[required_OF_i_A43] | Value : " << boolState[required_OF_i_A43] << endl;
	//cout << "Attribute :  boolState[already_S_OF_i_A43] | Value : " << boolState[already_S_OF_i_A43] << endl;
	//cout << "Attribute :  boolState[S_OF_i_A43] | Value : " << boolState[S_OF_i_A43] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_i_A43] | Value : " << boolState[relevant_evt_OF_i_A43] << endl;
	//cout << "Attribute :  boolState[failI_OF_i_A43] | Value : " << boolState[failI_OF_i_A43] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_i_A43] | Value : " << boolState[to_be_fired_OF_i_A43] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_i_A43] | Value : " << boolState[already_standby_OF_i_A43] << endl;
	//cout << "Attribute :  boolState[already_required_OF_i_A43] | Value : " << boolState[already_required_OF_i_A43] << endl;
	//cout << "Attribute :  boolState[required_OF_i_A44] | Value : " << boolState[required_OF_i_A44] << endl;
	//cout << "Attribute :  boolState[already_S_OF_i_A44] | Value : " << boolState[already_S_OF_i_A44] << endl;
	//cout << "Attribute :  boolState[S_OF_i_A44] | Value : " << boolState[S_OF_i_A44] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_i_A44] | Value : " << boolState[relevant_evt_OF_i_A44] << endl;
	//cout << "Attribute :  boolState[failI_OF_i_A44] | Value : " << boolState[failI_OF_i_A44] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_i_A44] | Value : " << boolState[to_be_fired_OF_i_A44] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_i_A44] | Value : " << boolState[already_standby_OF_i_A44] << endl;
	//cout << "Attribute :  boolState[already_required_OF_i_A44] | Value : " << boolState[already_required_OF_i_A44] << endl;
	//cout << "Attribute :  boolState[required_OF_i_A45] | Value : " << boolState[required_OF_i_A45] << endl;
	//cout << "Attribute :  boolState[already_S_OF_i_A45] | Value : " << boolState[already_S_OF_i_A45] << endl;
	//cout << "Attribute :  boolState[S_OF_i_A45] | Value : " << boolState[S_OF_i_A45] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_i_A45] | Value : " << boolState[relevant_evt_OF_i_A45] << endl;
	//cout << "Attribute :  boolState[failI_OF_i_A45] | Value : " << boolState[failI_OF_i_A45] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_i_A45] | Value : " << boolState[to_be_fired_OF_i_A45] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_i_A45] | Value : " << boolState[already_standby_OF_i_A45] << endl;
	//cout << "Attribute :  boolState[already_required_OF_i_A45] | Value : " << boolState[already_required_OF_i_A45] << endl;
	//cout << "Attribute :  boolState[required_OF_i_A46] | Value : " << boolState[required_OF_i_A46] << endl;
	//cout << "Attribute :  boolState[already_S_OF_i_A46] | Value : " << boolState[already_S_OF_i_A46] << endl;
	//cout << "Attribute :  boolState[S_OF_i_A46] | Value : " << boolState[S_OF_i_A46] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_i_A46] | Value : " << boolState[relevant_evt_OF_i_A46] << endl;
	//cout << "Attribute :  boolState[failI_OF_i_A46] | Value : " << boolState[failI_OF_i_A46] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_i_A46] | Value : " << boolState[to_be_fired_OF_i_A46] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_i_A46] | Value : " << boolState[already_standby_OF_i_A46] << endl;
	//cout << "Attribute :  boolState[already_required_OF_i_A46] | Value : " << boolState[already_required_OF_i_A46] << endl;
	//cout << "Attribute :  boolState[required_OF_i_A47] | Value : " << boolState[required_OF_i_A47] << endl;
	//cout << "Attribute :  boolState[already_S_OF_i_A47] | Value : " << boolState[already_S_OF_i_A47] << endl;
	//cout << "Attribute :  boolState[S_OF_i_A47] | Value : " << boolState[S_OF_i_A47] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_i_A47] | Value : " << boolState[relevant_evt_OF_i_A47] << endl;
	//cout << "Attribute :  boolState[failI_OF_i_A47] | Value : " << boolState[failI_OF_i_A47] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_i_A47] | Value : " << boolState[to_be_fired_OF_i_A47] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_i_A47] | Value : " << boolState[already_standby_OF_i_A47] << endl;
	//cout << "Attribute :  boolState[already_required_OF_i_A47] | Value : " << boolState[already_required_OF_i_A47] << endl;
	//cout << "Attribute :  boolState[required_OF_i_A48] | Value : " << boolState[required_OF_i_A48] << endl;
	//cout << "Attribute :  boolState[already_S_OF_i_A48] | Value : " << boolState[already_S_OF_i_A48] << endl;
	//cout << "Attribute :  boolState[S_OF_i_A48] | Value : " << boolState[S_OF_i_A48] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_i_A48] | Value : " << boolState[relevant_evt_OF_i_A48] << endl;
	//cout << "Attribute :  boolState[failI_OF_i_A48] | Value : " << boolState[failI_OF_i_A48] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_i_A48] | Value : " << boolState[to_be_fired_OF_i_A48] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_i_A48] | Value : " << boolState[already_standby_OF_i_A48] << endl;
	//cout << "Attribute :  boolState[already_required_OF_i_A48] | Value : " << boolState[already_required_OF_i_A48] << endl;
	//cout << "Attribute :  boolState[required_OF_i_A49] | Value : " << boolState[required_OF_i_A49] << endl;
	//cout << "Attribute :  boolState[already_S_OF_i_A49] | Value : " << boolState[already_S_OF_i_A49] << endl;
	//cout << "Attribute :  boolState[S_OF_i_A49] | Value : " << boolState[S_OF_i_A49] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_i_A49] | Value : " << boolState[relevant_evt_OF_i_A49] << endl;
	//cout << "Attribute :  boolState[failI_OF_i_A49] | Value : " << boolState[failI_OF_i_A49] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_i_A49] | Value : " << boolState[to_be_fired_OF_i_A49] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_i_A49] | Value : " << boolState[already_standby_OF_i_A49] << endl;
	//cout << "Attribute :  boolState[already_required_OF_i_A49] | Value : " << boolState[already_required_OF_i_A49] << endl;
	//cout << "Attribute :  boolState[required_OF_i_A51] | Value : " << boolState[required_OF_i_A51] << endl;
	//cout << "Attribute :  boolState[already_S_OF_i_A51] | Value : " << boolState[already_S_OF_i_A51] << endl;
	//cout << "Attribute :  boolState[S_OF_i_A51] | Value : " << boolState[S_OF_i_A51] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_i_A51] | Value : " << boolState[relevant_evt_OF_i_A51] << endl;
	//cout << "Attribute :  boolState[failI_OF_i_A51] | Value : " << boolState[failI_OF_i_A51] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_i_A51] | Value : " << boolState[to_be_fired_OF_i_A51] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_i_A51] | Value : " << boolState[already_standby_OF_i_A51] << endl;
	//cout << "Attribute :  boolState[already_required_OF_i_A51] | Value : " << boolState[already_required_OF_i_A51] << endl;
	//cout << "Attribute :  boolState[required_OF_i_A52] | Value : " << boolState[required_OF_i_A52] << endl;
	//cout << "Attribute :  boolState[already_S_OF_i_A52] | Value : " << boolState[already_S_OF_i_A52] << endl;
	//cout << "Attribute :  boolState[S_OF_i_A52] | Value : " << boolState[S_OF_i_A52] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_i_A52] | Value : " << boolState[relevant_evt_OF_i_A52] << endl;
	//cout << "Attribute :  boolState[failI_OF_i_A52] | Value : " << boolState[failI_OF_i_A52] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_i_A52] | Value : " << boolState[to_be_fired_OF_i_A52] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_i_A52] | Value : " << boolState[already_standby_OF_i_A52] << endl;
	//cout << "Attribute :  boolState[already_required_OF_i_A52] | Value : " << boolState[already_required_OF_i_A52] << endl;
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
	//cout << "Attribute :  boolState[required_OF_i_A59] | Value : " << boolState[required_OF_i_A59] << endl;
	//cout << "Attribute :  boolState[already_S_OF_i_A59] | Value : " << boolState[already_S_OF_i_A59] << endl;
	//cout << "Attribute :  boolState[S_OF_i_A59] | Value : " << boolState[S_OF_i_A59] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_i_A59] | Value : " << boolState[relevant_evt_OF_i_A59] << endl;
	//cout << "Attribute :  boolState[failI_OF_i_A59] | Value : " << boolState[failI_OF_i_A59] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_i_A59] | Value : " << boolState[to_be_fired_OF_i_A59] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_i_A59] | Value : " << boolState[already_standby_OF_i_A59] << endl;
	//cout << "Attribute :  boolState[already_required_OF_i_A59] | Value : " << boolState[already_required_OF_i_A59] << endl;
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
	//cout << "Attribute :  boolState[required_OF_i_A62] | Value : " << boolState[required_OF_i_A62] << endl;
	//cout << "Attribute :  boolState[already_S_OF_i_A62] | Value : " << boolState[already_S_OF_i_A62] << endl;
	//cout << "Attribute :  boolState[S_OF_i_A62] | Value : " << boolState[S_OF_i_A62] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_i_A62] | Value : " << boolState[relevant_evt_OF_i_A62] << endl;
	//cout << "Attribute :  boolState[failI_OF_i_A62] | Value : " << boolState[failI_OF_i_A62] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_i_A62] | Value : " << boolState[to_be_fired_OF_i_A62] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_i_A62] | Value : " << boolState[already_standby_OF_i_A62] << endl;
	//cout << "Attribute :  boolState[already_required_OF_i_A62] | Value : " << boolState[already_required_OF_i_A62] << endl;
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
	//cout << "Attribute :  boolState[required_OF_i_A65] | Value : " << boolState[required_OF_i_A65] << endl;
	//cout << "Attribute :  boolState[already_S_OF_i_A65] | Value : " << boolState[already_S_OF_i_A65] << endl;
	//cout << "Attribute :  boolState[S_OF_i_A65] | Value : " << boolState[S_OF_i_A65] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_i_A65] | Value : " << boolState[relevant_evt_OF_i_A65] << endl;
	//cout << "Attribute :  boolState[failI_OF_i_A65] | Value : " << boolState[failI_OF_i_A65] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_i_A65] | Value : " << boolState[to_be_fired_OF_i_A65] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_i_A65] | Value : " << boolState[already_standby_OF_i_A65] << endl;
	//cout << "Attribute :  boolState[already_required_OF_i_A65] | Value : " << boolState[already_required_OF_i_A65] << endl;
	//cout << "Attribute :  boolState[required_OF_i_A66] | Value : " << boolState[required_OF_i_A66] << endl;
	//cout << "Attribute :  boolState[already_S_OF_i_A66] | Value : " << boolState[already_S_OF_i_A66] << endl;
	//cout << "Attribute :  boolState[S_OF_i_A66] | Value : " << boolState[S_OF_i_A66] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_i_A66] | Value : " << boolState[relevant_evt_OF_i_A66] << endl;
	//cout << "Attribute :  boolState[failI_OF_i_A66] | Value : " << boolState[failI_OF_i_A66] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_i_A66] | Value : " << boolState[to_be_fired_OF_i_A66] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_i_A66] | Value : " << boolState[already_standby_OF_i_A66] << endl;
	//cout << "Attribute :  boolState[already_required_OF_i_A66] | Value : " << boolState[already_required_OF_i_A66] << endl;
}

bool storm::figaro::FigaroProgram_vgs_5_Trim_Article_repair::figaromodelhasinstransitions()
{
	return true;
}
void storm::figaro::FigaroProgram_vgs_5_Trim_Article_repair::doReinitialisations()
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
	boolState[required_OF_A102] = REINITIALISATION_OF_required_OF_A102;
	boolState[S_OF_A102] = REINITIALISATION_OF_S_OF_A102;
	boolState[relevant_evt_OF_A102] = REINITIALISATION_OF_relevant_evt_OF_A102;
	boolState[required_OF_A103] = REINITIALISATION_OF_required_OF_A103;
	boolState[S_OF_A103] = REINITIALISATION_OF_S_OF_A103;
	boolState[relevant_evt_OF_A103] = REINITIALISATION_OF_relevant_evt_OF_A103;
	boolState[required_OF_A104] = REINITIALISATION_OF_required_OF_A104;
	boolState[S_OF_A104] = REINITIALISATION_OF_S_OF_A104;
	boolState[relevant_evt_OF_A104] = REINITIALISATION_OF_relevant_evt_OF_A104;
	boolState[required_OF_A105] = REINITIALISATION_OF_required_OF_A105;
	boolState[S_OF_A105] = REINITIALISATION_OF_S_OF_A105;
	boolState[relevant_evt_OF_A105] = REINITIALISATION_OF_relevant_evt_OF_A105;
	boolState[required_OF_A107] = REINITIALISATION_OF_required_OF_A107;
	boolState[S_OF_A107] = REINITIALISATION_OF_S_OF_A107;
	boolState[relevant_evt_OF_A107] = REINITIALISATION_OF_relevant_evt_OF_A107;
	boolState[required_OF_A11] = REINITIALISATION_OF_required_OF_A11;
	boolState[S_OF_A11] = REINITIALISATION_OF_S_OF_A11;
	boolState[relevant_evt_OF_A11] = REINITIALISATION_OF_relevant_evt_OF_A11;
	boolState[required_OF_A13] = REINITIALISATION_OF_required_OF_A13;
	boolState[S_OF_A13] = REINITIALISATION_OF_S_OF_A13;
	boolState[relevant_evt_OF_A13] = REINITIALISATION_OF_relevant_evt_OF_A13;
	boolState[required_OF_A14] = REINITIALISATION_OF_required_OF_A14;
	boolState[S_OF_A14] = REINITIALISATION_OF_S_OF_A14;
	boolState[relevant_evt_OF_A14] = REINITIALISATION_OF_relevant_evt_OF_A14;
	boolState[required_OF_A16] = REINITIALISATION_OF_required_OF_A16;
	boolState[S_OF_A16] = REINITIALISATION_OF_S_OF_A16;
	boolState[relevant_evt_OF_A16] = REINITIALISATION_OF_relevant_evt_OF_A16;
	boolState[required_OF_A17] = REINITIALISATION_OF_required_OF_A17;
	boolState[S_OF_A17] = REINITIALISATION_OF_S_OF_A17;
	boolState[relevant_evt_OF_A17] = REINITIALISATION_OF_relevant_evt_OF_A17;
	boolState[required_OF_A19] = REINITIALISATION_OF_required_OF_A19;
	boolState[S_OF_A19] = REINITIALISATION_OF_S_OF_A19;
	boolState[relevant_evt_OF_A19] = REINITIALISATION_OF_relevant_evt_OF_A19;
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
	boolState[required_OF_A30] = REINITIALISATION_OF_required_OF_A30;
	boolState[S_OF_A30] = REINITIALISATION_OF_S_OF_A30;
	boolState[relevant_evt_OF_A30] = REINITIALISATION_OF_relevant_evt_OF_A30;
	boolState[required_OF_A31] = REINITIALISATION_OF_required_OF_A31;
	boolState[S_OF_A31] = REINITIALISATION_OF_S_OF_A31;
	boolState[relevant_evt_OF_A31] = REINITIALISATION_OF_relevant_evt_OF_A31;
	boolState[required_OF_A33] = REINITIALISATION_OF_required_OF_A33;
	boolState[S_OF_A33] = REINITIALISATION_OF_S_OF_A33;
	boolState[relevant_evt_OF_A33] = REINITIALISATION_OF_relevant_evt_OF_A33;
	boolState[required_OF_A34] = REINITIALISATION_OF_required_OF_A34;
	boolState[S_OF_A34] = REINITIALISATION_OF_S_OF_A34;
	boolState[relevant_evt_OF_A34] = REINITIALISATION_OF_relevant_evt_OF_A34;
	boolState[required_OF_A36] = REINITIALISATION_OF_required_OF_A36;
	boolState[S_OF_A36] = REINITIALISATION_OF_S_OF_A36;
	boolState[relevant_evt_OF_A36] = REINITIALISATION_OF_relevant_evt_OF_A36;
	boolState[required_OF_A37] = REINITIALISATION_OF_required_OF_A37;
	boolState[S_OF_A37] = REINITIALISATION_OF_S_OF_A37;
	boolState[relevant_evt_OF_A37] = REINITIALISATION_OF_relevant_evt_OF_A37;
	boolState[required_OF_A39] = REINITIALISATION_OF_required_OF_A39;
	boolState[S_OF_A39] = REINITIALISATION_OF_S_OF_A39;
	boolState[relevant_evt_OF_A39] = REINITIALISATION_OF_relevant_evt_OF_A39;
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
	boolState[required_OF_A46] = REINITIALISATION_OF_required_OF_A46;
	boolState[S_OF_A46] = REINITIALISATION_OF_S_OF_A46;
	boolState[relevant_evt_OF_A46] = REINITIALISATION_OF_relevant_evt_OF_A46;
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
	boolState[required_OF_A51] = REINITIALISATION_OF_required_OF_A51;
	boolState[S_OF_A51] = REINITIALISATION_OF_S_OF_A51;
	boolState[relevant_evt_OF_A51] = REINITIALISATION_OF_relevant_evt_OF_A51;
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
	boolState[required_OF_A99] = REINITIALISATION_OF_required_OF_A99;
	boolState[S_OF_A99] = REINITIALISATION_OF_S_OF_A99;
	boolState[relevant_evt_OF_A99] = REINITIALISATION_OF_relevant_evt_OF_A99;
	boolState[required_OF_UE_1] = REINITIALISATION_OF_required_OF_UE_1;
	boolState[S_OF_UE_1] = REINITIALISATION_OF_S_OF_UE_1;
	boolState[relevant_evt_OF_UE_1] = REINITIALISATION_OF_relevant_evt_OF_UE_1;
	boolState[required_OF_f_A43] = REINITIALISATION_OF_required_OF_f_A43;
	boolState[S_OF_f_A43] = REINITIALISATION_OF_S_OF_f_A43;
	boolState[relevant_evt_OF_f_A43] = REINITIALISATION_OF_relevant_evt_OF_f_A43;
	boolState[required_OF_f_A44] = REINITIALISATION_OF_required_OF_f_A44;
	boolState[S_OF_f_A44] = REINITIALISATION_OF_S_OF_f_A44;
	boolState[relevant_evt_OF_f_A44] = REINITIALISATION_OF_relevant_evt_OF_f_A44;
	boolState[required_OF_f_A45] = REINITIALISATION_OF_required_OF_f_A45;
	boolState[S_OF_f_A45] = REINITIALISATION_OF_S_OF_f_A45;
	boolState[relevant_evt_OF_f_A45] = REINITIALISATION_OF_relevant_evt_OF_f_A45;
	boolState[required_OF_f_A46] = REINITIALISATION_OF_required_OF_f_A46;
	boolState[S_OF_f_A46] = REINITIALISATION_OF_S_OF_f_A46;
	boolState[relevant_evt_OF_f_A46] = REINITIALISATION_OF_relevant_evt_OF_f_A46;
	boolState[required_OF_f_A47] = REINITIALISATION_OF_required_OF_f_A47;
	boolState[S_OF_f_A47] = REINITIALISATION_OF_S_OF_f_A47;
	boolState[relevant_evt_OF_f_A47] = REINITIALISATION_OF_relevant_evt_OF_f_A47;
	boolState[required_OF_f_A48] = REINITIALISATION_OF_required_OF_f_A48;
	boolState[S_OF_f_A48] = REINITIALISATION_OF_S_OF_f_A48;
	boolState[relevant_evt_OF_f_A48] = REINITIALISATION_OF_relevant_evt_OF_f_A48;
	boolState[required_OF_f_A49] = REINITIALISATION_OF_required_OF_f_A49;
	boolState[S_OF_f_A49] = REINITIALISATION_OF_S_OF_f_A49;
	boolState[relevant_evt_OF_f_A49] = REINITIALISATION_OF_relevant_evt_OF_f_A49;
	boolState[required_OF_f_A51] = REINITIALISATION_OF_required_OF_f_A51;
	boolState[S_OF_f_A51] = REINITIALISATION_OF_S_OF_f_A51;
	boolState[relevant_evt_OF_f_A51] = REINITIALISATION_OF_relevant_evt_OF_f_A51;
	boolState[required_OF_f_A52] = REINITIALISATION_OF_required_OF_f_A52;
	boolState[S_OF_f_A52] = REINITIALISATION_OF_S_OF_f_A52;
	boolState[relevant_evt_OF_f_A52] = REINITIALISATION_OF_relevant_evt_OF_f_A52;
	boolState[required_OF_f_A54] = REINITIALISATION_OF_required_OF_f_A54;
	boolState[S_OF_f_A54] = REINITIALISATION_OF_S_OF_f_A54;
	boolState[relevant_evt_OF_f_A54] = REINITIALISATION_OF_relevant_evt_OF_f_A54;
	boolState[required_OF_f_A55] = REINITIALISATION_OF_required_OF_f_A55;
	boolState[S_OF_f_A55] = REINITIALISATION_OF_S_OF_f_A55;
	boolState[relevant_evt_OF_f_A55] = REINITIALISATION_OF_relevant_evt_OF_f_A55;
	boolState[required_OF_f_A57] = REINITIALISATION_OF_required_OF_f_A57;
	boolState[S_OF_f_A57] = REINITIALISATION_OF_S_OF_f_A57;
	boolState[relevant_evt_OF_f_A57] = REINITIALISATION_OF_relevant_evt_OF_f_A57;
	boolState[required_OF_f_A58] = REINITIALISATION_OF_required_OF_f_A58;
	boolState[S_OF_f_A58] = REINITIALISATION_OF_S_OF_f_A58;
	boolState[relevant_evt_OF_f_A58] = REINITIALISATION_OF_relevant_evt_OF_f_A58;
	boolState[required_OF_f_A59] = REINITIALISATION_OF_required_OF_f_A59;
	boolState[S_OF_f_A59] = REINITIALISATION_OF_S_OF_f_A59;
	boolState[relevant_evt_OF_f_A59] = REINITIALISATION_OF_relevant_evt_OF_f_A59;
	boolState[required_OF_f_A60] = REINITIALISATION_OF_required_OF_f_A60;
	boolState[S_OF_f_A60] = REINITIALISATION_OF_S_OF_f_A60;
	boolState[relevant_evt_OF_f_A60] = REINITIALISATION_OF_relevant_evt_OF_f_A60;
	boolState[required_OF_f_A61] = REINITIALISATION_OF_required_OF_f_A61;
	boolState[S_OF_f_A61] = REINITIALISATION_OF_S_OF_f_A61;
	boolState[relevant_evt_OF_f_A61] = REINITIALISATION_OF_relevant_evt_OF_f_A61;
	boolState[required_OF_f_A62] = REINITIALISATION_OF_required_OF_f_A62;
	boolState[S_OF_f_A62] = REINITIALISATION_OF_S_OF_f_A62;
	boolState[relevant_evt_OF_f_A62] = REINITIALISATION_OF_relevant_evt_OF_f_A62;
	boolState[required_OF_f_A63] = REINITIALISATION_OF_required_OF_f_A63;
	boolState[S_OF_f_A63] = REINITIALISATION_OF_S_OF_f_A63;
	boolState[relevant_evt_OF_f_A63] = REINITIALISATION_OF_relevant_evt_OF_f_A63;
	boolState[required_OF_f_A64] = REINITIALISATION_OF_required_OF_f_A64;
	boolState[S_OF_f_A64] = REINITIALISATION_OF_S_OF_f_A64;
	boolState[relevant_evt_OF_f_A64] = REINITIALISATION_OF_relevant_evt_OF_f_A64;
	boolState[required_OF_f_A65] = REINITIALISATION_OF_required_OF_f_A65;
	boolState[S_OF_f_A65] = REINITIALISATION_OF_S_OF_f_A65;
	boolState[relevant_evt_OF_f_A65] = REINITIALISATION_OF_relevant_evt_OF_f_A65;
	boolState[required_OF_f_A66] = REINITIALISATION_OF_required_OF_f_A66;
	boolState[S_OF_f_A66] = REINITIALISATION_OF_S_OF_f_A66;
	boolState[relevant_evt_OF_f_A66] = REINITIALISATION_OF_relevant_evt_OF_f_A66;
	boolState[required_OF_i_A43] = REINITIALISATION_OF_required_OF_i_A43;
	boolState[S_OF_i_A43] = REINITIALISATION_OF_S_OF_i_A43;
	boolState[relevant_evt_OF_i_A43] = REINITIALISATION_OF_relevant_evt_OF_i_A43;
	boolState[to_be_fired_OF_i_A43] = REINITIALISATION_OF_to_be_fired_OF_i_A43;
	boolState[required_OF_i_A44] = REINITIALISATION_OF_required_OF_i_A44;
	boolState[S_OF_i_A44] = REINITIALISATION_OF_S_OF_i_A44;
	boolState[relevant_evt_OF_i_A44] = REINITIALISATION_OF_relevant_evt_OF_i_A44;
	boolState[to_be_fired_OF_i_A44] = REINITIALISATION_OF_to_be_fired_OF_i_A44;
	boolState[required_OF_i_A45] = REINITIALISATION_OF_required_OF_i_A45;
	boolState[S_OF_i_A45] = REINITIALISATION_OF_S_OF_i_A45;
	boolState[relevant_evt_OF_i_A45] = REINITIALISATION_OF_relevant_evt_OF_i_A45;
	boolState[to_be_fired_OF_i_A45] = REINITIALISATION_OF_to_be_fired_OF_i_A45;
	boolState[required_OF_i_A46] = REINITIALISATION_OF_required_OF_i_A46;
	boolState[S_OF_i_A46] = REINITIALISATION_OF_S_OF_i_A46;
	boolState[relevant_evt_OF_i_A46] = REINITIALISATION_OF_relevant_evt_OF_i_A46;
	boolState[to_be_fired_OF_i_A46] = REINITIALISATION_OF_to_be_fired_OF_i_A46;
	boolState[required_OF_i_A47] = REINITIALISATION_OF_required_OF_i_A47;
	boolState[S_OF_i_A47] = REINITIALISATION_OF_S_OF_i_A47;
	boolState[relevant_evt_OF_i_A47] = REINITIALISATION_OF_relevant_evt_OF_i_A47;
	boolState[to_be_fired_OF_i_A47] = REINITIALISATION_OF_to_be_fired_OF_i_A47;
	boolState[required_OF_i_A48] = REINITIALISATION_OF_required_OF_i_A48;
	boolState[S_OF_i_A48] = REINITIALISATION_OF_S_OF_i_A48;
	boolState[relevant_evt_OF_i_A48] = REINITIALISATION_OF_relevant_evt_OF_i_A48;
	boolState[to_be_fired_OF_i_A48] = REINITIALISATION_OF_to_be_fired_OF_i_A48;
	boolState[required_OF_i_A49] = REINITIALISATION_OF_required_OF_i_A49;
	boolState[S_OF_i_A49] = REINITIALISATION_OF_S_OF_i_A49;
	boolState[relevant_evt_OF_i_A49] = REINITIALISATION_OF_relevant_evt_OF_i_A49;
	boolState[to_be_fired_OF_i_A49] = REINITIALISATION_OF_to_be_fired_OF_i_A49;
	boolState[required_OF_i_A51] = REINITIALISATION_OF_required_OF_i_A51;
	boolState[S_OF_i_A51] = REINITIALISATION_OF_S_OF_i_A51;
	boolState[relevant_evt_OF_i_A51] = REINITIALISATION_OF_relevant_evt_OF_i_A51;
	boolState[to_be_fired_OF_i_A51] = REINITIALISATION_OF_to_be_fired_OF_i_A51;
	boolState[required_OF_i_A52] = REINITIALISATION_OF_required_OF_i_A52;
	boolState[S_OF_i_A52] = REINITIALISATION_OF_S_OF_i_A52;
	boolState[relevant_evt_OF_i_A52] = REINITIALISATION_OF_relevant_evt_OF_i_A52;
	boolState[to_be_fired_OF_i_A52] = REINITIALISATION_OF_to_be_fired_OF_i_A52;
	boolState[required_OF_i_A54] = REINITIALISATION_OF_required_OF_i_A54;
	boolState[S_OF_i_A54] = REINITIALISATION_OF_S_OF_i_A54;
	boolState[relevant_evt_OF_i_A54] = REINITIALISATION_OF_relevant_evt_OF_i_A54;
	boolState[to_be_fired_OF_i_A54] = REINITIALISATION_OF_to_be_fired_OF_i_A54;
	boolState[required_OF_i_A55] = REINITIALISATION_OF_required_OF_i_A55;
	boolState[S_OF_i_A55] = REINITIALISATION_OF_S_OF_i_A55;
	boolState[relevant_evt_OF_i_A55] = REINITIALISATION_OF_relevant_evt_OF_i_A55;
	boolState[to_be_fired_OF_i_A55] = REINITIALISATION_OF_to_be_fired_OF_i_A55;
	boolState[required_OF_i_A57] = REINITIALISATION_OF_required_OF_i_A57;
	boolState[S_OF_i_A57] = REINITIALISATION_OF_S_OF_i_A57;
	boolState[relevant_evt_OF_i_A57] = REINITIALISATION_OF_relevant_evt_OF_i_A57;
	boolState[to_be_fired_OF_i_A57] = REINITIALISATION_OF_to_be_fired_OF_i_A57;
	boolState[required_OF_i_A58] = REINITIALISATION_OF_required_OF_i_A58;
	boolState[S_OF_i_A58] = REINITIALISATION_OF_S_OF_i_A58;
	boolState[relevant_evt_OF_i_A58] = REINITIALISATION_OF_relevant_evt_OF_i_A58;
	boolState[to_be_fired_OF_i_A58] = REINITIALISATION_OF_to_be_fired_OF_i_A58;
	boolState[required_OF_i_A59] = REINITIALISATION_OF_required_OF_i_A59;
	boolState[S_OF_i_A59] = REINITIALISATION_OF_S_OF_i_A59;
	boolState[relevant_evt_OF_i_A59] = REINITIALISATION_OF_relevant_evt_OF_i_A59;
	boolState[to_be_fired_OF_i_A59] = REINITIALISATION_OF_to_be_fired_OF_i_A59;
	boolState[required_OF_i_A60] = REINITIALISATION_OF_required_OF_i_A60;
	boolState[S_OF_i_A60] = REINITIALISATION_OF_S_OF_i_A60;
	boolState[relevant_evt_OF_i_A60] = REINITIALISATION_OF_relevant_evt_OF_i_A60;
	boolState[to_be_fired_OF_i_A60] = REINITIALISATION_OF_to_be_fired_OF_i_A60;
	boolState[required_OF_i_A61] = REINITIALISATION_OF_required_OF_i_A61;
	boolState[S_OF_i_A61] = REINITIALISATION_OF_S_OF_i_A61;
	boolState[relevant_evt_OF_i_A61] = REINITIALISATION_OF_relevant_evt_OF_i_A61;
	boolState[to_be_fired_OF_i_A61] = REINITIALISATION_OF_to_be_fired_OF_i_A61;
	boolState[required_OF_i_A62] = REINITIALISATION_OF_required_OF_i_A62;
	boolState[S_OF_i_A62] = REINITIALISATION_OF_S_OF_i_A62;
	boolState[relevant_evt_OF_i_A62] = REINITIALISATION_OF_relevant_evt_OF_i_A62;
	boolState[to_be_fired_OF_i_A62] = REINITIALISATION_OF_to_be_fired_OF_i_A62;
	boolState[required_OF_i_A63] = REINITIALISATION_OF_required_OF_i_A63;
	boolState[S_OF_i_A63] = REINITIALISATION_OF_S_OF_i_A63;
	boolState[relevant_evt_OF_i_A63] = REINITIALISATION_OF_relevant_evt_OF_i_A63;
	boolState[to_be_fired_OF_i_A63] = REINITIALISATION_OF_to_be_fired_OF_i_A63;
	boolState[required_OF_i_A64] = REINITIALISATION_OF_required_OF_i_A64;
	boolState[S_OF_i_A64] = REINITIALISATION_OF_S_OF_i_A64;
	boolState[relevant_evt_OF_i_A64] = REINITIALISATION_OF_relevant_evt_OF_i_A64;
	boolState[to_be_fired_OF_i_A64] = REINITIALISATION_OF_to_be_fired_OF_i_A64;
	boolState[required_OF_i_A65] = REINITIALISATION_OF_required_OF_i_A65;
	boolState[S_OF_i_A65] = REINITIALISATION_OF_S_OF_i_A65;
	boolState[relevant_evt_OF_i_A65] = REINITIALISATION_OF_relevant_evt_OF_i_A65;
	boolState[to_be_fired_OF_i_A65] = REINITIALISATION_OF_to_be_fired_OF_i_A65;
	boolState[required_OF_i_A66] = REINITIALISATION_OF_required_OF_i_A66;
	boolState[S_OF_i_A66] = REINITIALISATION_OF_S_OF_i_A66;
	boolState[relevant_evt_OF_i_A66] = REINITIALISATION_OF_relevant_evt_OF_i_A66;
	boolState[to_be_fired_OF_i_A66] = REINITIALISATION_OF_to_be_fired_OF_i_A66;
}

void storm::figaro::FigaroProgram_vgs_5_Trim_Article_repair::fireOccurrence(int numFire)
{
	//cout <<">>>>>>>>>>>>>>>>>>>> Fire of occurrence #" << numFire << " <<<<<<<<<<<<<<<<<<<<<<<" << endl;

	if (numFire == 0)
	{
		FIRE_xx10_OF_A1 = true;
	}

	if (numFire == 1)
	{
		FIRE_xx11_OF_A1 = true;
	}

	if (numFire == 2)
	{
		FIRE_xx10_OF_A10 = true;
	}

	if (numFire == 3)
	{
		FIRE_xx11_OF_A10 = true;
	}

	if (numFire == 4)
	{
		FIRE_xx10_OF_A102 = true;
	}

	if (numFire == 5)
	{
		FIRE_xx11_OF_A102 = true;
	}

	if (numFire == 6)
	{
		FIRE_xx10_OF_A103 = true;
	}

	if (numFire == 7)
	{
		FIRE_xx11_OF_A103 = true;
	}

	if (numFire == 8)
	{
		FIRE_xx10_OF_A104 = true;
	}

	if (numFire == 9)
	{
		FIRE_xx11_OF_A104 = true;
	}

	if (numFire == 10)
	{
		FIRE_xx10_OF_A13 = true;
	}

	if (numFire == 11)
	{
		FIRE_xx11_OF_A13 = true;
	}

	if (numFire == 12)
	{
		FIRE_xx10_OF_A16 = true;
	}

	if (numFire == 13)
	{
		FIRE_xx11_OF_A16 = true;
	}

	if (numFire == 14)
	{
		FIRE_xx10_OF_A19 = true;
	}

	if (numFire == 15)
	{
		FIRE_xx11_OF_A19 = true;
	}

	if (numFire == 16)
	{
		FIRE_xx10_OF_A22 = true;
	}

	if (numFire == 17)
	{
		FIRE_xx11_OF_A22 = true;
	}

	if (numFire == 18)
	{
		FIRE_xx10_OF_A25 = true;
	}

	if (numFire == 19)
	{
		FIRE_xx11_OF_A25 = true;
	}

	if (numFire == 20)
	{
		FIRE_xx10_OF_A28 = true;
	}

	if (numFire == 21)
	{
		FIRE_xx11_OF_A28 = true;
	}

	if (numFire == 22)
	{
		FIRE_xx10_OF_A29 = true;
	}

	if (numFire == 23)
	{
		FIRE_xx11_OF_A29 = true;
	}

	if (numFire == 24)
	{
		FIRE_xx10_OF_A33 = true;
	}

	if (numFire == 25)
	{
		FIRE_xx11_OF_A33 = true;
	}

	if (numFire == 26)
	{
		FIRE_xx10_OF_A36 = true;
	}

	if (numFire == 27)
	{
		FIRE_xx11_OF_A36 = true;
	}

	if (numFire == 28)
	{
		FIRE_xx10_OF_A39 = true;
	}

	if (numFire == 29)
	{
		FIRE_xx11_OF_A39 = true;
	}

	if (numFire == 30)
	{
		FIRE_xx10_OF_A4 = true;
	}

	if (numFire == 31)
	{
		FIRE_xx11_OF_A4 = true;
	}

	if (numFire == 32)
	{
		FIRE_xx10_OF_A67 = true;
	}

	if (numFire == 33)
	{
		FIRE_xx11_OF_A67 = true;
	}

	if (numFire == 34)
	{
		FIRE_xx10_OF_A68 = true;
	}

	if (numFire == 35)
	{
		FIRE_xx11_OF_A68 = true;
	}

	if (numFire == 36)
	{
		FIRE_xx10_OF_A7 = true;
	}

	if (numFire == 37)
	{
		FIRE_xx11_OF_A7 = true;
	}

	if (numFire == 38)
	{
		FIRE_xx10_OF_A75 = true;
	}

	if (numFire == 39)
	{
		FIRE_xx11_OF_A75 = true;
	}

	if (numFire == 40)
	{
		FIRE_xx10_OF_A76 = true;
	}

	if (numFire == 41)
	{
		FIRE_xx11_OF_A76 = true;
	}

	if (numFire == 42)
	{
		FIRE_xx10_OF_A77 = true;
	}

	if (numFire == 43)
	{
		FIRE_xx11_OF_A77 = true;
	}

	if (numFire == 44)
	{
		FIRE_xx10_OF_A80 = true;
	}

	if (numFire == 45)
	{
		FIRE_xx11_OF_A80 = true;
	}

	if (numFire == 46)
	{
		FIRE_xx10_OF_A81 = true;
	}

	if (numFire == 47)
	{
		FIRE_xx11_OF_A81 = true;
	}

	if (numFire == 48)
	{
		FIRE_xx10_OF_A82 = true;
	}

	if (numFire == 49)
	{
		FIRE_xx11_OF_A82 = true;
	}

	if (numFire == 50)
	{
		FIRE_xx10_OF_A86 = true;
	}

	if (numFire == 51)
	{
		FIRE_xx11_OF_A86 = true;
	}

	if (numFire == 52)
	{
		FIRE_xx10_OF_A87 = true;
	}

	if (numFire == 53)
	{
		FIRE_xx11_OF_A87 = true;
	}

	if (numFire == 54)
	{
		FIRE_xx10_OF_A88 = true;
	}

	if (numFire == 55)
	{
		FIRE_xx11_OF_A88 = true;
	}

	if (numFire == 56)
	{
		FIRE_xx10_OF_A91 = true;
	}

	if (numFire == 57)
	{
		FIRE_xx11_OF_A91 = true;
	}

	if (numFire == 58)
	{
		FIRE_xx10_OF_A92 = true;
	}

	if (numFire == 59)
	{
		FIRE_xx11_OF_A92 = true;
	}

	if (numFire == 60)
	{
		FIRE_xx10_OF_A93 = true;
	}

	if (numFire == 61)
	{
		FIRE_xx11_OF_A93 = true;
	}

	if (numFire == 62)
	{
		FIRE_xx10_OF_A97 = true;
	}

	if (numFire == 63)
	{
		FIRE_xx11_OF_A97 = true;
	}

	if (numFire == 64)
	{
		FIRE_xx10_OF_A98 = true;
	}

	if (numFire == 65)
	{
		FIRE_xx11_OF_A98 = true;
	}

	if (numFire == 66)
	{
		FIRE_xx10_OF_A99 = true;
	}

	if (numFire == 67)
	{
		FIRE_xx11_OF_A99 = true;
	}

	if (numFire == 68)
	{
		FIRE_xx10_OF_f_A43 = true;
	}

	if (numFire == 69)
	{
		FIRE_xx11_OF_f_A43 = true;
	}

	if (numFire == 70)
	{
		FIRE_xx10_OF_f_A44 = true;
	}

	if (numFire == 71)
	{
		FIRE_xx11_OF_f_A44 = true;
	}

	if (numFire == 72)
	{
		FIRE_xx10_OF_f_A45 = true;
	}

	if (numFire == 73)
	{
		FIRE_xx11_OF_f_A45 = true;
	}

	if (numFire == 74)
	{
		FIRE_xx10_OF_f_A46 = true;
	}

	if (numFire == 75)
	{
		FIRE_xx11_OF_f_A46 = true;
	}

	if (numFire == 76)
	{
		FIRE_xx10_OF_f_A47 = true;
	}

	if (numFire == 77)
	{
		FIRE_xx11_OF_f_A47 = true;
	}

	if (numFire == 78)
	{
		FIRE_xx10_OF_f_A48 = true;
	}

	if (numFire == 79)
	{
		FIRE_xx11_OF_f_A48 = true;
	}

	if (numFire == 80)
	{
		FIRE_xx10_OF_f_A49 = true;
	}

	if (numFire == 81)
	{
		FIRE_xx11_OF_f_A49 = true;
	}

	if (numFire == 82)
	{
		FIRE_xx10_OF_f_A51 = true;
	}

	if (numFire == 83)
	{
		FIRE_xx11_OF_f_A51 = true;
	}

	if (numFire == 84)
	{
		FIRE_xx10_OF_f_A52 = true;
	}

	if (numFire == 85)
	{
		FIRE_xx11_OF_f_A52 = true;
	}

	if (numFire == 86)
	{
		FIRE_xx10_OF_f_A54 = true;
	}

	if (numFire == 87)
	{
		FIRE_xx11_OF_f_A54 = true;
	}

	if (numFire == 88)
	{
		FIRE_xx10_OF_f_A55 = true;
	}

	if (numFire == 89)
	{
		FIRE_xx11_OF_f_A55 = true;
	}

	if (numFire == 90)
	{
		FIRE_xx10_OF_f_A57 = true;
	}

	if (numFire == 91)
	{
		FIRE_xx11_OF_f_A57 = true;
	}

	if (numFire == 92)
	{
		FIRE_xx10_OF_f_A58 = true;
	}

	if (numFire == 93)
	{
		FIRE_xx11_OF_f_A58 = true;
	}

	if (numFire == 94)
	{
		FIRE_xx10_OF_f_A59 = true;
	}

	if (numFire == 95)
	{
		FIRE_xx11_OF_f_A59 = true;
	}

	if (numFire == 96)
	{
		FIRE_xx10_OF_f_A60 = true;
	}

	if (numFire == 97)
	{
		FIRE_xx11_OF_f_A60 = true;
	}

	if (numFire == 98)
	{
		FIRE_xx10_OF_f_A61 = true;
	}

	if (numFire == 99)
	{
		FIRE_xx11_OF_f_A61 = true;
	}

	if (numFire == 100)
	{
		FIRE_xx10_OF_f_A62 = true;
	}

	if (numFire == 101)
	{
		FIRE_xx11_OF_f_A62 = true;
	}

	if (numFire == 102)
	{
		FIRE_xx10_OF_f_A63 = true;
	}

	if (numFire == 103)
	{
		FIRE_xx11_OF_f_A63 = true;
	}

	if (numFire == 104)
	{
		FIRE_xx10_OF_f_A64 = true;
	}

	if (numFire == 105)
	{
		FIRE_xx11_OF_f_A64 = true;
	}

	if (numFire == 106)
	{
		FIRE_xx10_OF_f_A65 = true;
	}

	if (numFire == 107)
	{
		FIRE_xx11_OF_f_A65 = true;
	}

	if (numFire == 108)
	{
		FIRE_xx10_OF_f_A66 = true;
	}

	if (numFire == 109)
	{
		FIRE_xx11_OF_f_A66 = true;
	}

	if (numFire == 110)
	{
		FIRE_xx23_OF_i_A43_INS_110 = true;
	}

	if (numFire == 111)
	{
		FIRE_xx23_OF_i_A43_INS_111 = true;
	}

	if (numFire == 112)
	{
		FIRE_xx24_OF_i_A43 = true;
	}

	if (numFire == 113)
	{
		FIRE_xx23_OF_i_A44_INS_113 = true;
	}

	if (numFire == 114)
	{
		FIRE_xx23_OF_i_A44_INS_114 = true;
	}

	if (numFire == 115)
	{
		FIRE_xx24_OF_i_A44 = true;
	}

	if (numFire == 116)
	{
		FIRE_xx23_OF_i_A45_INS_116 = true;
	}

	if (numFire == 117)
	{
		FIRE_xx23_OF_i_A45_INS_117 = true;
	}

	if (numFire == 118)
	{
		FIRE_xx24_OF_i_A45 = true;
	}

	if (numFire == 119)
	{
		FIRE_xx23_OF_i_A46_INS_119 = true;
	}

	if (numFire == 120)
	{
		FIRE_xx23_OF_i_A46_INS_120 = true;
	}

	if (numFire == 121)
	{
		FIRE_xx24_OF_i_A46 = true;
	}

	if (numFire == 122)
	{
		FIRE_xx23_OF_i_A47_INS_122 = true;
	}

	if (numFire == 123)
	{
		FIRE_xx23_OF_i_A47_INS_123 = true;
	}

	if (numFire == 124)
	{
		FIRE_xx24_OF_i_A47 = true;
	}

	if (numFire == 125)
	{
		FIRE_xx23_OF_i_A48_INS_125 = true;
	}

	if (numFire == 126)
	{
		FIRE_xx23_OF_i_A48_INS_126 = true;
	}

	if (numFire == 127)
	{
		FIRE_xx24_OF_i_A48 = true;
	}

	if (numFire == 128)
	{
		FIRE_xx23_OF_i_A49_INS_128 = true;
	}

	if (numFire == 129)
	{
		FIRE_xx23_OF_i_A49_INS_129 = true;
	}

	if (numFire == 130)
	{
		FIRE_xx24_OF_i_A49 = true;
	}

	if (numFire == 131)
	{
		FIRE_xx23_OF_i_A51_INS_131 = true;
	}

	if (numFire == 132)
	{
		FIRE_xx23_OF_i_A51_INS_132 = true;
	}

	if (numFire == 133)
	{
		FIRE_xx24_OF_i_A51 = true;
	}

	if (numFire == 134)
	{
		FIRE_xx23_OF_i_A52_INS_134 = true;
	}

	if (numFire == 135)
	{
		FIRE_xx23_OF_i_A52_INS_135 = true;
	}

	if (numFire == 136)
	{
		FIRE_xx24_OF_i_A52 = true;
	}

	if (numFire == 137)
	{
		FIRE_xx23_OF_i_A54_INS_137 = true;
	}

	if (numFire == 138)
	{
		FIRE_xx23_OF_i_A54_INS_138 = true;
	}

	if (numFire == 139)
	{
		FIRE_xx24_OF_i_A54 = true;
	}

	if (numFire == 140)
	{
		FIRE_xx23_OF_i_A55_INS_140 = true;
	}

	if (numFire == 141)
	{
		FIRE_xx23_OF_i_A55_INS_141 = true;
	}

	if (numFire == 142)
	{
		FIRE_xx24_OF_i_A55 = true;
	}

	if (numFire == 143)
	{
		FIRE_xx23_OF_i_A57_INS_143 = true;
	}

	if (numFire == 144)
	{
		FIRE_xx23_OF_i_A57_INS_144 = true;
	}

	if (numFire == 145)
	{
		FIRE_xx24_OF_i_A57 = true;
	}

	if (numFire == 146)
	{
		FIRE_xx23_OF_i_A58_INS_146 = true;
	}

	if (numFire == 147)
	{
		FIRE_xx23_OF_i_A58_INS_147 = true;
	}

	if (numFire == 148)
	{
		FIRE_xx24_OF_i_A58 = true;
	}

	if (numFire == 149)
	{
		FIRE_xx23_OF_i_A59_INS_149 = true;
	}

	if (numFire == 150)
	{
		FIRE_xx23_OF_i_A59_INS_150 = true;
	}

	if (numFire == 151)
	{
		FIRE_xx24_OF_i_A59 = true;
	}

	if (numFire == 152)
	{
		FIRE_xx23_OF_i_A60_INS_152 = true;
	}

	if (numFire == 153)
	{
		FIRE_xx23_OF_i_A60_INS_153 = true;
	}

	if (numFire == 154)
	{
		FIRE_xx24_OF_i_A60 = true;
	}

	if (numFire == 155)
	{
		FIRE_xx23_OF_i_A61_INS_155 = true;
	}

	if (numFire == 156)
	{
		FIRE_xx23_OF_i_A61_INS_156 = true;
	}

	if (numFire == 157)
	{
		FIRE_xx24_OF_i_A61 = true;
	}

	if (numFire == 158)
	{
		FIRE_xx23_OF_i_A62_INS_158 = true;
	}

	if (numFire == 159)
	{
		FIRE_xx23_OF_i_A62_INS_159 = true;
	}

	if (numFire == 160)
	{
		FIRE_xx24_OF_i_A62 = true;
	}

	if (numFire == 161)
	{
		FIRE_xx23_OF_i_A63_INS_161 = true;
	}

	if (numFire == 162)
	{
		FIRE_xx23_OF_i_A63_INS_162 = true;
	}

	if (numFire == 163)
	{
		FIRE_xx24_OF_i_A63 = true;
	}

	if (numFire == 164)
	{
		FIRE_xx23_OF_i_A64_INS_164 = true;
	}

	if (numFire == 165)
	{
		FIRE_xx23_OF_i_A64_INS_165 = true;
	}

	if (numFire == 166)
	{
		FIRE_xx24_OF_i_A64 = true;
	}

	if (numFire == 167)
	{
		FIRE_xx23_OF_i_A65_INS_167 = true;
	}

	if (numFire == 168)
	{
		FIRE_xx23_OF_i_A65_INS_168 = true;
	}

	if (numFire == 169)
	{
		FIRE_xx24_OF_i_A65 = true;
	}

	if (numFire == 170)
	{
		FIRE_xx23_OF_i_A66_INS_170 = true;
	}

	if (numFire == 171)
	{
		FIRE_xx23_OF_i_A66_INS_171 = true;
	}

	if (numFire == 172)
	{
		FIRE_xx24_OF_i_A66 = true;
	}

/* ---------- DECLARATION OF OCCURRENCE RULES------------ */

	// Occurrence xx10_OF_A1
	if ((boolState[failF_OF_A1] == false) && (boolState[required_OF_A1] && boolState[relevant_evt_OF_A1])) 
	{
		 
		if (FIRE_xx10_OF_A1)
		{
			boolState[failF_OF_A1]  =  true;
			FIRE_xx10_OF_A1 = false;
		}
	}

	// Occurrence xx11_OF_A1
	if (boolState[failF_OF_A1] == true) 
	{
		 
		if (FIRE_xx11_OF_A1)
		{
			boolState[failF_OF_A1]  =  false;
			FIRE_xx11_OF_A1 = false;
		}
	}

	// Occurrence xx10_OF_A10
	if ((boolState[failF_OF_A10] == false) && (boolState[required_OF_A10] && boolState[relevant_evt_OF_A10])) 
	{
		 
		if (FIRE_xx10_OF_A10)
		{
			boolState[failF_OF_A10]  =  true;
			FIRE_xx10_OF_A10 = false;
		}
	}

	// Occurrence xx11_OF_A10
	if (boolState[failF_OF_A10] == true) 
	{
		 
		if (FIRE_xx11_OF_A10)
		{
			boolState[failF_OF_A10]  =  false;
			FIRE_xx11_OF_A10 = false;
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

	// Occurrence xx11_OF_A102
	if (boolState[failF_OF_A102] == true) 
	{
		 
		if (FIRE_xx11_OF_A102)
		{
			boolState[failF_OF_A102]  =  false;
			FIRE_xx11_OF_A102 = false;
		}
	}

	// Occurrence xx10_OF_A103
	if ((boolState[failF_OF_A103] == false) && (boolState[required_OF_A103] &&  boolState[relevant_evt_OF_A103])) 
	{
		 
		if (FIRE_xx10_OF_A103)
		{
			boolState[failF_OF_A103]  =  true;
			FIRE_xx10_OF_A103 = false;
		}
	}

	// Occurrence xx11_OF_A103
	if (boolState[failF_OF_A103] == true) 
	{
		 
		if (FIRE_xx11_OF_A103)
		{
			boolState[failF_OF_A103]  =  false;
			FIRE_xx11_OF_A103 = false;
		}
	}

	// Occurrence xx10_OF_A104
	if ((boolState[failF_OF_A104] == false) && (boolState[required_OF_A104] &&  boolState[relevant_evt_OF_A104])) 
	{
		 
		if (FIRE_xx10_OF_A104)
		{
			boolState[failF_OF_A104]  =  true;
			FIRE_xx10_OF_A104 = false;
		}
	}

	// Occurrence xx11_OF_A104
	if (boolState[failF_OF_A104] == true) 
	{
		 
		if (FIRE_xx11_OF_A104)
		{
			boolState[failF_OF_A104]  =  false;
			FIRE_xx11_OF_A104 = false;
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

	// Occurrence xx11_OF_A13
	if (boolState[failF_OF_A13] == true) 
	{
		 
		if (FIRE_xx11_OF_A13)
		{
			boolState[failF_OF_A13]  =  false;
			FIRE_xx11_OF_A13 = false;
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

	// Occurrence xx11_OF_A16
	if (boolState[failF_OF_A16] == true) 
	{
		 
		if (FIRE_xx11_OF_A16)
		{
			boolState[failF_OF_A16]  =  false;
			FIRE_xx11_OF_A16 = false;
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

	// Occurrence xx11_OF_A19
	if (boolState[failF_OF_A19] == true) 
	{
		 
		if (FIRE_xx11_OF_A19)
		{
			boolState[failF_OF_A19]  =  false;
			FIRE_xx11_OF_A19 = false;
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

	// Occurrence xx11_OF_A22
	if (boolState[failF_OF_A22] == true) 
	{
		 
		if (FIRE_xx11_OF_A22)
		{
			boolState[failF_OF_A22]  =  false;
			FIRE_xx11_OF_A22 = false;
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

	// Occurrence xx11_OF_A25
	if (boolState[failF_OF_A25] == true) 
	{
		 
		if (FIRE_xx11_OF_A25)
		{
			boolState[failF_OF_A25]  =  false;
			FIRE_xx11_OF_A25 = false;
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

	// Occurrence xx11_OF_A28
	if (boolState[failF_OF_A28] == true) 
	{
		 
		if (FIRE_xx11_OF_A28)
		{
			boolState[failF_OF_A28]  =  false;
			FIRE_xx11_OF_A28 = false;
		}
	}

	// Occurrence xx10_OF_A29
	if ((boolState[failF_OF_A29] == false) && (boolState[required_OF_A29] && boolState[relevant_evt_OF_A29])) 
	{
		 
		if (FIRE_xx10_OF_A29)
		{
			boolState[failF_OF_A29]  =  true;
			FIRE_xx10_OF_A29 = false;
		}
	}

	// Occurrence xx11_OF_A29
	if (boolState[failF_OF_A29] == true) 
	{
		 
		if (FIRE_xx11_OF_A29)
		{
			boolState[failF_OF_A29]  =  false;
			FIRE_xx11_OF_A29 = false;
		}
	}

	// Occurrence xx10_OF_A33
	if ((boolState[failF_OF_A33] == false) && (boolState[required_OF_A33] && boolState[relevant_evt_OF_A33])) 
	{
		 
		if (FIRE_xx10_OF_A33)
		{
			boolState[failF_OF_A33]  =  true;
			FIRE_xx10_OF_A33 = false;
		}
	}

	// Occurrence xx11_OF_A33
	if (boolState[failF_OF_A33] == true) 
	{
		 
		if (FIRE_xx11_OF_A33)
		{
			boolState[failF_OF_A33]  =  false;
			FIRE_xx11_OF_A33 = false;
		}
	}

	// Occurrence xx10_OF_A36
	if ((boolState[failF_OF_A36] == false) && (boolState[required_OF_A36] && boolState[relevant_evt_OF_A36])) 
	{
		 
		if (FIRE_xx10_OF_A36)
		{
			boolState[failF_OF_A36]  =  true;
			FIRE_xx10_OF_A36 = false;
		}
	}

	// Occurrence xx11_OF_A36
	if (boolState[failF_OF_A36] == true) 
	{
		 
		if (FIRE_xx11_OF_A36)
		{
			boolState[failF_OF_A36]  =  false;
			FIRE_xx11_OF_A36 = false;
		}
	}

	// Occurrence xx10_OF_A39
	if ((boolState[failF_OF_A39] == false) && (boolState[required_OF_A39] && boolState[relevant_evt_OF_A39])) 
	{
		 
		if (FIRE_xx10_OF_A39)
		{
			boolState[failF_OF_A39]  =  true;
			FIRE_xx10_OF_A39 = false;
		}
	}

	// Occurrence xx11_OF_A39
	if (boolState[failF_OF_A39] == true) 
	{
		 
		if (FIRE_xx11_OF_A39)
		{
			boolState[failF_OF_A39]  =  false;
			FIRE_xx11_OF_A39 = false;
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

	// Occurrence xx11_OF_A4
	if (boolState[failF_OF_A4] == true) 
	{
		 
		if (FIRE_xx11_OF_A4)
		{
			boolState[failF_OF_A4]  =  false;
			FIRE_xx11_OF_A4 = false;
		}
	}

	// Occurrence xx10_OF_A67
	if ((boolState[failF_OF_A67] == false) && (boolState[required_OF_A67] && boolState[relevant_evt_OF_A67])) 
	{
		 
		if (FIRE_xx10_OF_A67)
		{
			boolState[failF_OF_A67]  =  true;
			FIRE_xx10_OF_A67 = false;
		}
	}

	// Occurrence xx11_OF_A67
	if (boolState[failF_OF_A67] == true) 
	{
		 
		if (FIRE_xx11_OF_A67)
		{
			boolState[failF_OF_A67]  =  false;
			FIRE_xx11_OF_A67 = false;
		}
	}

	// Occurrence xx10_OF_A68
	if ((boolState[failF_OF_A68] == false) && (boolState[required_OF_A68] && boolState[relevant_evt_OF_A68])) 
	{
		 
		if (FIRE_xx10_OF_A68)
		{
			boolState[failF_OF_A68]  =  true;
			FIRE_xx10_OF_A68 = false;
		}
	}

	// Occurrence xx11_OF_A68
	if (boolState[failF_OF_A68] == true) 
	{
		 
		if (FIRE_xx11_OF_A68)
		{
			boolState[failF_OF_A68]  =  false;
			FIRE_xx11_OF_A68 = false;
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

	// Occurrence xx11_OF_A7
	if (boolState[failF_OF_A7] == true) 
	{
		 
		if (FIRE_xx11_OF_A7)
		{
			boolState[failF_OF_A7]  =  false;
			FIRE_xx11_OF_A7 = false;
		}
	}

	// Occurrence xx10_OF_A75
	if ((boolState[failF_OF_A75] == false) && (boolState[required_OF_A75] && boolState[relevant_evt_OF_A75])) 
	{
		 
		if (FIRE_xx10_OF_A75)
		{
			boolState[failF_OF_A75]  =  true;
			FIRE_xx10_OF_A75 = false;
		}
	}

	// Occurrence xx11_OF_A75
	if (boolState[failF_OF_A75] == true) 
	{
		 
		if (FIRE_xx11_OF_A75)
		{
			boolState[failF_OF_A75]  =  false;
			FIRE_xx11_OF_A75 = false;
		}
	}

	// Occurrence xx10_OF_A76
	if ((boolState[failF_OF_A76] == false) && (boolState[required_OF_A76] && boolState[relevant_evt_OF_A76])) 
	{
		 
		if (FIRE_xx10_OF_A76)
		{
			boolState[failF_OF_A76]  =  true;
			FIRE_xx10_OF_A76 = false;
		}
	}

	// Occurrence xx11_OF_A76
	if (boolState[failF_OF_A76] == true) 
	{
		 
		if (FIRE_xx11_OF_A76)
		{
			boolState[failF_OF_A76]  =  false;
			FIRE_xx11_OF_A76 = false;
		}
	}

	// Occurrence xx10_OF_A77
	if ((boolState[failF_OF_A77] == false) && (boolState[required_OF_A77] && boolState[relevant_evt_OF_A77])) 
	{
		 
		if (FIRE_xx10_OF_A77)
		{
			boolState[failF_OF_A77]  =  true;
			FIRE_xx10_OF_A77 = false;
		}
	}

	// Occurrence xx11_OF_A77
	if (boolState[failF_OF_A77] == true) 
	{
		 
		if (FIRE_xx11_OF_A77)
		{
			boolState[failF_OF_A77]  =  false;
			FIRE_xx11_OF_A77 = false;
		}
	}

	// Occurrence xx10_OF_A80
	if ((boolState[failF_OF_A80] == false) && (boolState[required_OF_A80] && boolState[relevant_evt_OF_A80])) 
	{
		 
		if (FIRE_xx10_OF_A80)
		{
			boolState[failF_OF_A80]  =  true;
			FIRE_xx10_OF_A80 = false;
		}
	}

	// Occurrence xx11_OF_A80
	if (boolState[failF_OF_A80] == true) 
	{
		 
		if (FIRE_xx11_OF_A80)
		{
			boolState[failF_OF_A80]  =  false;
			FIRE_xx11_OF_A80 = false;
		}
	}

	// Occurrence xx10_OF_A81
	if ((boolState[failF_OF_A81] == false) && (boolState[required_OF_A81] && boolState[relevant_evt_OF_A81])) 
	{
		 
		if (FIRE_xx10_OF_A81)
		{
			boolState[failF_OF_A81]  =  true;
			FIRE_xx10_OF_A81 = false;
		}
	}

	// Occurrence xx11_OF_A81
	if (boolState[failF_OF_A81] == true) 
	{
		 
		if (FIRE_xx11_OF_A81)
		{
			boolState[failF_OF_A81]  =  false;
			FIRE_xx11_OF_A81 = false;
		}
	}

	// Occurrence xx10_OF_A82
	if ((boolState[failF_OF_A82] == false) && (boolState[required_OF_A82] && boolState[relevant_evt_OF_A82])) 
	{
		 
		if (FIRE_xx10_OF_A82)
		{
			boolState[failF_OF_A82]  =  true;
			FIRE_xx10_OF_A82 = false;
		}
	}

	// Occurrence xx11_OF_A82
	if (boolState[failF_OF_A82] == true) 
	{
		 
		if (FIRE_xx11_OF_A82)
		{
			boolState[failF_OF_A82]  =  false;
			FIRE_xx11_OF_A82 = false;
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

	// Occurrence xx11_OF_A86
	if (boolState[failF_OF_A86] == true) 
	{
		 
		if (FIRE_xx11_OF_A86)
		{
			boolState[failF_OF_A86]  =  false;
			FIRE_xx11_OF_A86 = false;
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

	// Occurrence xx11_OF_A87
	if (boolState[failF_OF_A87] == true) 
	{
		 
		if (FIRE_xx11_OF_A87)
		{
			boolState[failF_OF_A87]  =  false;
			FIRE_xx11_OF_A87 = false;
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

	// Occurrence xx11_OF_A88
	if (boolState[failF_OF_A88] == true) 
	{
		 
		if (FIRE_xx11_OF_A88)
		{
			boolState[failF_OF_A88]  =  false;
			FIRE_xx11_OF_A88 = false;
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

	// Occurrence xx11_OF_A91
	if (boolState[failF_OF_A91] == true) 
	{
		 
		if (FIRE_xx11_OF_A91)
		{
			boolState[failF_OF_A91]  =  false;
			FIRE_xx11_OF_A91 = false;
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

	// Occurrence xx11_OF_A92
	if (boolState[failF_OF_A92] == true) 
	{
		 
		if (FIRE_xx11_OF_A92)
		{
			boolState[failF_OF_A92]  =  false;
			FIRE_xx11_OF_A92 = false;
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

	// Occurrence xx11_OF_A93
	if (boolState[failF_OF_A93] == true) 
	{
		 
		if (FIRE_xx11_OF_A93)
		{
			boolState[failF_OF_A93]  =  false;
			FIRE_xx11_OF_A93 = false;
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

	// Occurrence xx11_OF_A97
	if (boolState[failF_OF_A97] == true) 
	{
		 
		if (FIRE_xx11_OF_A97)
		{
			boolState[failF_OF_A97]  =  false;
			FIRE_xx11_OF_A97 = false;
		}
	}

	// Occurrence xx10_OF_A98
	if ((boolState[failF_OF_A98] == false) && (boolState[required_OF_A98] && boolState[relevant_evt_OF_A98])) 
	{
		 
		if (FIRE_xx10_OF_A98)
		{
			boolState[failF_OF_A98]  =  true;
			FIRE_xx10_OF_A98 = false;
		}
	}

	// Occurrence xx11_OF_A98
	if (boolState[failF_OF_A98] == true) 
	{
		 
		if (FIRE_xx11_OF_A98)
		{
			boolState[failF_OF_A98]  =  false;
			FIRE_xx11_OF_A98 = false;
		}
	}

	// Occurrence xx10_OF_A99
	if ((boolState[failF_OF_A99] == false) && (boolState[required_OF_A99] && boolState[relevant_evt_OF_A99])) 
	{
		 
		if (FIRE_xx10_OF_A99)
		{
			boolState[failF_OF_A99]  =  true;
			FIRE_xx10_OF_A99 = false;
		}
	}

	// Occurrence xx11_OF_A99
	if (boolState[failF_OF_A99] == true) 
	{
		 
		if (FIRE_xx11_OF_A99)
		{
			boolState[failF_OF_A99]  =  false;
			FIRE_xx11_OF_A99 = false;
		}
	}

	// Occurrence xx10_OF_f_A43
	if ((boolState[failF_OF_f_A43] == false) && (boolState[required_OF_f_A43] &&  boolState[relevant_evt_OF_f_A43])) 
	{
		 
		if (FIRE_xx10_OF_f_A43)
		{
			boolState[failF_OF_f_A43]  =  true;
			FIRE_xx10_OF_f_A43 = false;
		}
	}

	// Occurrence xx11_OF_f_A43
	if (boolState[failF_OF_f_A43] == true) 
	{
		 
		if (FIRE_xx11_OF_f_A43)
		{
			boolState[failF_OF_f_A43]  =  false;
			FIRE_xx11_OF_f_A43 = false;
		}
	}

	// Occurrence xx10_OF_f_A44
	if ((boolState[failF_OF_f_A44] == false) && (boolState[required_OF_f_A44] &&  boolState[relevant_evt_OF_f_A44])) 
	{
		 
		if (FIRE_xx10_OF_f_A44)
		{
			boolState[failF_OF_f_A44]  =  true;
			FIRE_xx10_OF_f_A44 = false;
		}
	}

	// Occurrence xx11_OF_f_A44
	if (boolState[failF_OF_f_A44] == true) 
	{
		 
		if (FIRE_xx11_OF_f_A44)
		{
			boolState[failF_OF_f_A44]  =  false;
			FIRE_xx11_OF_f_A44 = false;
		}
	}

	// Occurrence xx10_OF_f_A45
	if ((boolState[failF_OF_f_A45] == false) && (boolState[required_OF_f_A45] &&  boolState[relevant_evt_OF_f_A45])) 
	{
		 
		if (FIRE_xx10_OF_f_A45)
		{
			boolState[failF_OF_f_A45]  =  true;
			FIRE_xx10_OF_f_A45 = false;
		}
	}

	// Occurrence xx11_OF_f_A45
	if (boolState[failF_OF_f_A45] == true) 
	{
		 
		if (FIRE_xx11_OF_f_A45)
		{
			boolState[failF_OF_f_A45]  =  false;
			FIRE_xx11_OF_f_A45 = false;
		}
	}

	// Occurrence xx10_OF_f_A46
	if ((boolState[failF_OF_f_A46] == false) && (boolState[required_OF_f_A46] &&  boolState[relevant_evt_OF_f_A46])) 
	{
		 
		if (FIRE_xx10_OF_f_A46)
		{
			boolState[failF_OF_f_A46]  =  true;
			FIRE_xx10_OF_f_A46 = false;
		}
	}

	// Occurrence xx11_OF_f_A46
	if (boolState[failF_OF_f_A46] == true) 
	{
		 
		if (FIRE_xx11_OF_f_A46)
		{
			boolState[failF_OF_f_A46]  =  false;
			FIRE_xx11_OF_f_A46 = false;
		}
	}

	// Occurrence xx10_OF_f_A47
	if ((boolState[failF_OF_f_A47] == false) && (boolState[required_OF_f_A47] &&  boolState[relevant_evt_OF_f_A47])) 
	{
		 
		if (FIRE_xx10_OF_f_A47)
		{
			boolState[failF_OF_f_A47]  =  true;
			FIRE_xx10_OF_f_A47 = false;
		}
	}

	// Occurrence xx11_OF_f_A47
	if (boolState[failF_OF_f_A47] == true) 
	{
		 
		if (FIRE_xx11_OF_f_A47)
		{
			boolState[failF_OF_f_A47]  =  false;
			FIRE_xx11_OF_f_A47 = false;
		}
	}

	// Occurrence xx10_OF_f_A48
	if ((boolState[failF_OF_f_A48] == false) && (boolState[required_OF_f_A48] &&  boolState[relevant_evt_OF_f_A48])) 
	{
		 
		if (FIRE_xx10_OF_f_A48)
		{
			boolState[failF_OF_f_A48]  =  true;
			FIRE_xx10_OF_f_A48 = false;
		}
	}

	// Occurrence xx11_OF_f_A48
	if (boolState[failF_OF_f_A48] == true) 
	{
		 
		if (FIRE_xx11_OF_f_A48)
		{
			boolState[failF_OF_f_A48]  =  false;
			FIRE_xx11_OF_f_A48 = false;
		}
	}

	// Occurrence xx10_OF_f_A49
	if ((boolState[failF_OF_f_A49] == false) && (boolState[required_OF_f_A49] &&  boolState[relevant_evt_OF_f_A49])) 
	{
		 
		if (FIRE_xx10_OF_f_A49)
		{
			boolState[failF_OF_f_A49]  =  true;
			FIRE_xx10_OF_f_A49 = false;
		}
	}

	// Occurrence xx11_OF_f_A49
	if (boolState[failF_OF_f_A49] == true) 
	{
		 
		if (FIRE_xx11_OF_f_A49)
		{
			boolState[failF_OF_f_A49]  =  false;
			FIRE_xx11_OF_f_A49 = false;
		}
	}

	// Occurrence xx10_OF_f_A51
	if ((boolState[failF_OF_f_A51] == false) && (boolState[required_OF_f_A51] &&  boolState[relevant_evt_OF_f_A51])) 
	{
		 
		if (FIRE_xx10_OF_f_A51)
		{
			boolState[failF_OF_f_A51]  =  true;
			FIRE_xx10_OF_f_A51 = false;
		}
	}

	// Occurrence xx11_OF_f_A51
	if (boolState[failF_OF_f_A51] == true) 
	{
		 
		if (FIRE_xx11_OF_f_A51)
		{
			boolState[failF_OF_f_A51]  =  false;
			FIRE_xx11_OF_f_A51 = false;
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

	// Occurrence xx11_OF_f_A52
	if (boolState[failF_OF_f_A52] == true) 
	{
		 
		if (FIRE_xx11_OF_f_A52)
		{
			boolState[failF_OF_f_A52]  =  false;
			FIRE_xx11_OF_f_A52 = false;
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

	// Occurrence xx11_OF_f_A54
	if (boolState[failF_OF_f_A54] == true) 
	{
		 
		if (FIRE_xx11_OF_f_A54)
		{
			boolState[failF_OF_f_A54]  =  false;
			FIRE_xx11_OF_f_A54 = false;
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

	// Occurrence xx11_OF_f_A55
	if (boolState[failF_OF_f_A55] == true) 
	{
		 
		if (FIRE_xx11_OF_f_A55)
		{
			boolState[failF_OF_f_A55]  =  false;
			FIRE_xx11_OF_f_A55 = false;
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

	// Occurrence xx11_OF_f_A57
	if (boolState[failF_OF_f_A57] == true) 
	{
		 
		if (FIRE_xx11_OF_f_A57)
		{
			boolState[failF_OF_f_A57]  =  false;
			FIRE_xx11_OF_f_A57 = false;
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

	// Occurrence xx11_OF_f_A58
	if (boolState[failF_OF_f_A58] == true) 
	{
		 
		if (FIRE_xx11_OF_f_A58)
		{
			boolState[failF_OF_f_A58]  =  false;
			FIRE_xx11_OF_f_A58 = false;
		}
	}

	// Occurrence xx10_OF_f_A59
	if ((boolState[failF_OF_f_A59] == false) && (boolState[required_OF_f_A59] &&  boolState[relevant_evt_OF_f_A59])) 
	{
		 
		if (FIRE_xx10_OF_f_A59)
		{
			boolState[failF_OF_f_A59]  =  true;
			FIRE_xx10_OF_f_A59 = false;
		}
	}

	// Occurrence xx11_OF_f_A59
	if (boolState[failF_OF_f_A59] == true) 
	{
		 
		if (FIRE_xx11_OF_f_A59)
		{
			boolState[failF_OF_f_A59]  =  false;
			FIRE_xx11_OF_f_A59 = false;
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

	// Occurrence xx11_OF_f_A60
	if (boolState[failF_OF_f_A60] == true) 
	{
		 
		if (FIRE_xx11_OF_f_A60)
		{
			boolState[failF_OF_f_A60]  =  false;
			FIRE_xx11_OF_f_A60 = false;
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

	// Occurrence xx11_OF_f_A61
	if (boolState[failF_OF_f_A61] == true) 
	{
		 
		if (FIRE_xx11_OF_f_A61)
		{
			boolState[failF_OF_f_A61]  =  false;
			FIRE_xx11_OF_f_A61 = false;
		}
	}

	// Occurrence xx10_OF_f_A62
	if ((boolState[failF_OF_f_A62] == false) && (boolState[required_OF_f_A62] &&  boolState[relevant_evt_OF_f_A62])) 
	{
		 
		if (FIRE_xx10_OF_f_A62)
		{
			boolState[failF_OF_f_A62]  =  true;
			FIRE_xx10_OF_f_A62 = false;
		}
	}

	// Occurrence xx11_OF_f_A62
	if (boolState[failF_OF_f_A62] == true) 
	{
		 
		if (FIRE_xx11_OF_f_A62)
		{
			boolState[failF_OF_f_A62]  =  false;
			FIRE_xx11_OF_f_A62 = false;
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

	// Occurrence xx11_OF_f_A63
	if (boolState[failF_OF_f_A63] == true) 
	{
		 
		if (FIRE_xx11_OF_f_A63)
		{
			boolState[failF_OF_f_A63]  =  false;
			FIRE_xx11_OF_f_A63 = false;
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

	// Occurrence xx11_OF_f_A64
	if (boolState[failF_OF_f_A64] == true) 
	{
		 
		if (FIRE_xx11_OF_f_A64)
		{
			boolState[failF_OF_f_A64]  =  false;
			FIRE_xx11_OF_f_A64 = false;
		}
	}

	// Occurrence xx10_OF_f_A65
	if ((boolState[failF_OF_f_A65] == false) && (boolState[required_OF_f_A65] &&  boolState[relevant_evt_OF_f_A65])) 
	{
		 
		if (FIRE_xx10_OF_f_A65)
		{
			boolState[failF_OF_f_A65]  =  true;
			FIRE_xx10_OF_f_A65 = false;
		}
	}

	// Occurrence xx11_OF_f_A65
	if (boolState[failF_OF_f_A65] == true) 
	{
		 
		if (FIRE_xx11_OF_f_A65)
		{
			boolState[failF_OF_f_A65]  =  false;
			FIRE_xx11_OF_f_A65 = false;
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

	// Occurrence xx11_OF_f_A66
	if (boolState[failF_OF_f_A66] == true) 
	{
		 
		if (FIRE_xx11_OF_f_A66)
		{
			boolState[failF_OF_f_A66]  =  false;
			FIRE_xx11_OF_f_A66 = false;
		}
	}

	// Occurrence xx23_OF_i_A43

	if ((boolState[failI_OF_i_A43] == false) && (boolState[to_be_fired_OF_i_A43] &&
	boolState[relevant_evt_OF_i_A43])) 
	{
	
		
		if (FIRE_xx23_OF_i_A43_INS_110) 
		{
			boolState[failI_OF_i_A43]  =  true;
			boolState[already_standby_OF_i_A43]  =  false;
			boolState[already_required_OF_i_A43]  =  false;
			FIRE_xx23_OF_i_A43_INS_110 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A43] == false) && (boolState[to_be_fired_OF_i_A43] &&
	boolState[relevant_evt_OF_i_A43])) 
	{
	
		
		if (FIRE_xx23_OF_i_A43_INS_111) 
		{
			boolState[already_standby_OF_i_A43]  =  false;
			boolState[already_required_OF_i_A43]  =  false;
			FIRE_xx23_OF_i_A43_INS_111 = false;
		}
	
	}
	// Occurrence xx24_OF_i_A43
	if (boolState[failI_OF_i_A43] == true) 
	{
		 
		if (FIRE_xx24_OF_i_A43)
		{
			boolState[failI_OF_i_A43]  =  false;
			FIRE_xx24_OF_i_A43 = false;
		}
	}

	// Occurrence xx23_OF_i_A44

	if ((boolState[failI_OF_i_A44] == false) && (boolState[to_be_fired_OF_i_A44] &&
	boolState[relevant_evt_OF_i_A44])) 
	{
	
		
		if (FIRE_xx23_OF_i_A44_INS_113) 
		{
			boolState[failI_OF_i_A44]  =  true;
			boolState[already_standby_OF_i_A44]  =  false;
			boolState[already_required_OF_i_A44]  =  false;
			FIRE_xx23_OF_i_A44_INS_113 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A44] == false) && (boolState[to_be_fired_OF_i_A44] &&
	boolState[relevant_evt_OF_i_A44])) 
	{
	
		
		if (FIRE_xx23_OF_i_A44_INS_114) 
		{
			boolState[already_standby_OF_i_A44]  =  false;
			boolState[already_required_OF_i_A44]  =  false;
			FIRE_xx23_OF_i_A44_INS_114 = false;
		}
	
	}
	// Occurrence xx24_OF_i_A44
	if (boolState[failI_OF_i_A44] == true) 
	{
		 
		if (FIRE_xx24_OF_i_A44)
		{
			boolState[failI_OF_i_A44]  =  false;
			FIRE_xx24_OF_i_A44 = false;
		}
	}

	// Occurrence xx23_OF_i_A45

	if ((boolState[failI_OF_i_A45] == false) && (boolState[to_be_fired_OF_i_A45] &&
	boolState[relevant_evt_OF_i_A45])) 
	{
	
		
		if (FIRE_xx23_OF_i_A45_INS_116) 
		{
			boolState[failI_OF_i_A45]  =  true;
			boolState[already_standby_OF_i_A45]  =  false;
			boolState[already_required_OF_i_A45]  =  false;
			FIRE_xx23_OF_i_A45_INS_116 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A45] == false) && (boolState[to_be_fired_OF_i_A45] &&
	boolState[relevant_evt_OF_i_A45])) 
	{
	
		
		if (FIRE_xx23_OF_i_A45_INS_117) 
		{
			boolState[already_standby_OF_i_A45]  =  false;
			boolState[already_required_OF_i_A45]  =  false;
			FIRE_xx23_OF_i_A45_INS_117 = false;
		}
	
	}
	// Occurrence xx24_OF_i_A45
	if (boolState[failI_OF_i_A45] == true) 
	{
		 
		if (FIRE_xx24_OF_i_A45)
		{
			boolState[failI_OF_i_A45]  =  false;
			FIRE_xx24_OF_i_A45 = false;
		}
	}

	// Occurrence xx23_OF_i_A46

	if ((boolState[failI_OF_i_A46] == false) && (boolState[to_be_fired_OF_i_A46] &&
	boolState[relevant_evt_OF_i_A46])) 
	{
	
		
		if (FIRE_xx23_OF_i_A46_INS_119) 
		{
			boolState[failI_OF_i_A46]  =  true;
			boolState[already_standby_OF_i_A46]  =  false;
			boolState[already_required_OF_i_A46]  =  false;
			FIRE_xx23_OF_i_A46_INS_119 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A46] == false) && (boolState[to_be_fired_OF_i_A46] &&
	boolState[relevant_evt_OF_i_A46])) 
	{
	
		
		if (FIRE_xx23_OF_i_A46_INS_120) 
		{
			boolState[already_standby_OF_i_A46]  =  false;
			boolState[already_required_OF_i_A46]  =  false;
			FIRE_xx23_OF_i_A46_INS_120 = false;
		}
	
	}
	// Occurrence xx24_OF_i_A46
	if (boolState[failI_OF_i_A46] == true) 
	{
		 
		if (FIRE_xx24_OF_i_A46)
		{
			boolState[failI_OF_i_A46]  =  false;
			FIRE_xx24_OF_i_A46 = false;
		}
	}

	// Occurrence xx23_OF_i_A47

	if ((boolState[failI_OF_i_A47] == false) && (boolState[to_be_fired_OF_i_A47] &&
	boolState[relevant_evt_OF_i_A47])) 
	{
	
		
		if (FIRE_xx23_OF_i_A47_INS_122) 
		{
			boolState[failI_OF_i_A47]  =  true;
			boolState[already_standby_OF_i_A47]  =  false;
			boolState[already_required_OF_i_A47]  =  false;
			FIRE_xx23_OF_i_A47_INS_122 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A47] == false) && (boolState[to_be_fired_OF_i_A47] &&
	boolState[relevant_evt_OF_i_A47])) 
	{
	
		
		if (FIRE_xx23_OF_i_A47_INS_123) 
		{
			boolState[already_standby_OF_i_A47]  =  false;
			boolState[already_required_OF_i_A47]  =  false;
			FIRE_xx23_OF_i_A47_INS_123 = false;
		}
	
	}
	// Occurrence xx24_OF_i_A47
	if (boolState[failI_OF_i_A47] == true) 
	{
		 
		if (FIRE_xx24_OF_i_A47)
		{
			boolState[failI_OF_i_A47]  =  false;
			FIRE_xx24_OF_i_A47 = false;
		}
	}

	// Occurrence xx23_OF_i_A48

	if ((boolState[failI_OF_i_A48] == false) && (boolState[to_be_fired_OF_i_A48] &&
	boolState[relevant_evt_OF_i_A48])) 
	{
	
		
		if (FIRE_xx23_OF_i_A48_INS_125) 
		{
			boolState[failI_OF_i_A48]  =  true;
			boolState[already_standby_OF_i_A48]  =  false;
			boolState[already_required_OF_i_A48]  =  false;
			FIRE_xx23_OF_i_A48_INS_125 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A48] == false) && (boolState[to_be_fired_OF_i_A48] &&
	boolState[relevant_evt_OF_i_A48])) 
	{
	
		
		if (FIRE_xx23_OF_i_A48_INS_126) 
		{
			boolState[already_standby_OF_i_A48]  =  false;
			boolState[already_required_OF_i_A48]  =  false;
			FIRE_xx23_OF_i_A48_INS_126 = false;
		}
	
	}
	// Occurrence xx24_OF_i_A48
	if (boolState[failI_OF_i_A48] == true) 
	{
		 
		if (FIRE_xx24_OF_i_A48)
		{
			boolState[failI_OF_i_A48]  =  false;
			FIRE_xx24_OF_i_A48 = false;
		}
	}

	// Occurrence xx23_OF_i_A49

	if ((boolState[failI_OF_i_A49] == false) && (boolState[to_be_fired_OF_i_A49] &&
	boolState[relevant_evt_OF_i_A49])) 
	{
	
		
		if (FIRE_xx23_OF_i_A49_INS_128) 
		{
			boolState[failI_OF_i_A49]  =  true;
			boolState[already_standby_OF_i_A49]  =  false;
			boolState[already_required_OF_i_A49]  =  false;
			FIRE_xx23_OF_i_A49_INS_128 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A49] == false) && (boolState[to_be_fired_OF_i_A49] &&
	boolState[relevant_evt_OF_i_A49])) 
	{
	
		
		if (FIRE_xx23_OF_i_A49_INS_129) 
		{
			boolState[already_standby_OF_i_A49]  =  false;
			boolState[already_required_OF_i_A49]  =  false;
			FIRE_xx23_OF_i_A49_INS_129 = false;
		}
	
	}
	// Occurrence xx24_OF_i_A49
	if (boolState[failI_OF_i_A49] == true) 
	{
		 
		if (FIRE_xx24_OF_i_A49)
		{
			boolState[failI_OF_i_A49]  =  false;
			FIRE_xx24_OF_i_A49 = false;
		}
	}

	// Occurrence xx23_OF_i_A51

	if ((boolState[failI_OF_i_A51] == false) && (boolState[to_be_fired_OF_i_A51] &&
	boolState[relevant_evt_OF_i_A51])) 
	{
	
		
		if (FIRE_xx23_OF_i_A51_INS_131) 
		{
			boolState[failI_OF_i_A51]  =  true;
			boolState[already_standby_OF_i_A51]  =  false;
			boolState[already_required_OF_i_A51]  =  false;
			FIRE_xx23_OF_i_A51_INS_131 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A51] == false) && (boolState[to_be_fired_OF_i_A51] &&
	boolState[relevant_evt_OF_i_A51])) 
	{
	
		
		if (FIRE_xx23_OF_i_A51_INS_132) 
		{
			boolState[already_standby_OF_i_A51]  =  false;
			boolState[already_required_OF_i_A51]  =  false;
			FIRE_xx23_OF_i_A51_INS_132 = false;
		}
	
	}
	// Occurrence xx24_OF_i_A51
	if (boolState[failI_OF_i_A51] == true) 
	{
		 
		if (FIRE_xx24_OF_i_A51)
		{
			boolState[failI_OF_i_A51]  =  false;
			FIRE_xx24_OF_i_A51 = false;
		}
	}

	// Occurrence xx23_OF_i_A52

	if ((boolState[failI_OF_i_A52] == false) && (boolState[to_be_fired_OF_i_A52] &&
	boolState[relevant_evt_OF_i_A52])) 
	{
	
		
		if (FIRE_xx23_OF_i_A52_INS_134) 
		{
			boolState[failI_OF_i_A52]  =  true;
			boolState[already_standby_OF_i_A52]  =  false;
			boolState[already_required_OF_i_A52]  =  false;
			FIRE_xx23_OF_i_A52_INS_134 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A52] == false) && (boolState[to_be_fired_OF_i_A52] &&
	boolState[relevant_evt_OF_i_A52])) 
	{
	
		
		if (FIRE_xx23_OF_i_A52_INS_135) 
		{
			boolState[already_standby_OF_i_A52]  =  false;
			boolState[already_required_OF_i_A52]  =  false;
			FIRE_xx23_OF_i_A52_INS_135 = false;
		}
	
	}
	// Occurrence xx24_OF_i_A52
	if (boolState[failI_OF_i_A52] == true) 
	{
		 
		if (FIRE_xx24_OF_i_A52)
		{
			boolState[failI_OF_i_A52]  =  false;
			FIRE_xx24_OF_i_A52 = false;
		}
	}

	// Occurrence xx23_OF_i_A54

	if ((boolState[failI_OF_i_A54] == false) && (boolState[to_be_fired_OF_i_A54] &&
	boolState[relevant_evt_OF_i_A54])) 
	{
	
		
		if (FIRE_xx23_OF_i_A54_INS_137) 
		{
			boolState[failI_OF_i_A54]  =  true;
			boolState[already_standby_OF_i_A54]  =  false;
			boolState[already_required_OF_i_A54]  =  false;
			FIRE_xx23_OF_i_A54_INS_137 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A54] == false) && (boolState[to_be_fired_OF_i_A54] &&
	boolState[relevant_evt_OF_i_A54])) 
	{
	
		
		if (FIRE_xx23_OF_i_A54_INS_138) 
		{
			boolState[already_standby_OF_i_A54]  =  false;
			boolState[already_required_OF_i_A54]  =  false;
			FIRE_xx23_OF_i_A54_INS_138 = false;
		}
	
	}
	// Occurrence xx24_OF_i_A54
	if (boolState[failI_OF_i_A54] == true) 
	{
		 
		if (FIRE_xx24_OF_i_A54)
		{
			boolState[failI_OF_i_A54]  =  false;
			FIRE_xx24_OF_i_A54 = false;
		}
	}

	// Occurrence xx23_OF_i_A55

	if ((boolState[failI_OF_i_A55] == false) && (boolState[to_be_fired_OF_i_A55] &&
	boolState[relevant_evt_OF_i_A55])) 
	{
	
		
		if (FIRE_xx23_OF_i_A55_INS_140) 
		{
			boolState[failI_OF_i_A55]  =  true;
			boolState[already_standby_OF_i_A55]  =  false;
			boolState[already_required_OF_i_A55]  =  false;
			FIRE_xx23_OF_i_A55_INS_140 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A55] == false) && (boolState[to_be_fired_OF_i_A55] &&
	boolState[relevant_evt_OF_i_A55])) 
	{
	
		
		if (FIRE_xx23_OF_i_A55_INS_141) 
		{
			boolState[already_standby_OF_i_A55]  =  false;
			boolState[already_required_OF_i_A55]  =  false;
			FIRE_xx23_OF_i_A55_INS_141 = false;
		}
	
	}
	// Occurrence xx24_OF_i_A55
	if (boolState[failI_OF_i_A55] == true) 
	{
		 
		if (FIRE_xx24_OF_i_A55)
		{
			boolState[failI_OF_i_A55]  =  false;
			FIRE_xx24_OF_i_A55 = false;
		}
	}

	// Occurrence xx23_OF_i_A57

	if ((boolState[failI_OF_i_A57] == false) && (boolState[to_be_fired_OF_i_A57] &&
	boolState[relevant_evt_OF_i_A57])) 
	{
	
		
		if (FIRE_xx23_OF_i_A57_INS_143) 
		{
			boolState[failI_OF_i_A57]  =  true;
			boolState[already_standby_OF_i_A57]  =  false;
			boolState[already_required_OF_i_A57]  =  false;
			FIRE_xx23_OF_i_A57_INS_143 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A57] == false) && (boolState[to_be_fired_OF_i_A57] &&
	boolState[relevant_evt_OF_i_A57])) 
	{
	
		
		if (FIRE_xx23_OF_i_A57_INS_144) 
		{
			boolState[already_standby_OF_i_A57]  =  false;
			boolState[already_required_OF_i_A57]  =  false;
			FIRE_xx23_OF_i_A57_INS_144 = false;
		}
	
	}
	// Occurrence xx24_OF_i_A57
	if (boolState[failI_OF_i_A57] == true) 
	{
		 
		if (FIRE_xx24_OF_i_A57)
		{
			boolState[failI_OF_i_A57]  =  false;
			FIRE_xx24_OF_i_A57 = false;
		}
	}

	// Occurrence xx23_OF_i_A58

	if ((boolState[failI_OF_i_A58] == false) && (boolState[to_be_fired_OF_i_A58] &&
	boolState[relevant_evt_OF_i_A58])) 
	{
	
		
		if (FIRE_xx23_OF_i_A58_INS_146) 
		{
			boolState[failI_OF_i_A58]  =  true;
			boolState[already_standby_OF_i_A58]  =  false;
			boolState[already_required_OF_i_A58]  =  false;
			FIRE_xx23_OF_i_A58_INS_146 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A58] == false) && (boolState[to_be_fired_OF_i_A58] &&
	boolState[relevant_evt_OF_i_A58])) 
	{
	
		
		if (FIRE_xx23_OF_i_A58_INS_147) 
		{
			boolState[already_standby_OF_i_A58]  =  false;
			boolState[already_required_OF_i_A58]  =  false;
			FIRE_xx23_OF_i_A58_INS_147 = false;
		}
	
	}
	// Occurrence xx24_OF_i_A58
	if (boolState[failI_OF_i_A58] == true) 
	{
		 
		if (FIRE_xx24_OF_i_A58)
		{
			boolState[failI_OF_i_A58]  =  false;
			FIRE_xx24_OF_i_A58 = false;
		}
	}

	// Occurrence xx23_OF_i_A59

	if ((boolState[failI_OF_i_A59] == false) && (boolState[to_be_fired_OF_i_A59] &&
	boolState[relevant_evt_OF_i_A59])) 
	{
	
		
		if (FIRE_xx23_OF_i_A59_INS_149) 
		{
			boolState[failI_OF_i_A59]  =  true;
			boolState[already_standby_OF_i_A59]  =  false;
			boolState[already_required_OF_i_A59]  =  false;
			FIRE_xx23_OF_i_A59_INS_149 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A59] == false) && (boolState[to_be_fired_OF_i_A59] &&
	boolState[relevant_evt_OF_i_A59])) 
	{
	
		
		if (FIRE_xx23_OF_i_A59_INS_150) 
		{
			boolState[already_standby_OF_i_A59]  =  false;
			boolState[already_required_OF_i_A59]  =  false;
			FIRE_xx23_OF_i_A59_INS_150 = false;
		}
	
	}
	// Occurrence xx24_OF_i_A59
	if (boolState[failI_OF_i_A59] == true) 
	{
		 
		if (FIRE_xx24_OF_i_A59)
		{
			boolState[failI_OF_i_A59]  =  false;
			FIRE_xx24_OF_i_A59 = false;
		}
	}

	// Occurrence xx23_OF_i_A60

	if ((boolState[failI_OF_i_A60] == false) && (boolState[to_be_fired_OF_i_A60] &&
	boolState[relevant_evt_OF_i_A60])) 
	{
	
		
		if (FIRE_xx23_OF_i_A60_INS_152) 
		{
			boolState[failI_OF_i_A60]  =  true;
			boolState[already_standby_OF_i_A60]  =  false;
			boolState[already_required_OF_i_A60]  =  false;
			FIRE_xx23_OF_i_A60_INS_152 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A60] == false) && (boolState[to_be_fired_OF_i_A60] &&
	boolState[relevant_evt_OF_i_A60])) 
	{
	
		
		if (FIRE_xx23_OF_i_A60_INS_153) 
		{
			boolState[already_standby_OF_i_A60]  =  false;
			boolState[already_required_OF_i_A60]  =  false;
			FIRE_xx23_OF_i_A60_INS_153 = false;
		}
	
	}
	// Occurrence xx24_OF_i_A60
	if (boolState[failI_OF_i_A60] == true) 
	{
		 
		if (FIRE_xx24_OF_i_A60)
		{
			boolState[failI_OF_i_A60]  =  false;
			FIRE_xx24_OF_i_A60 = false;
		}
	}

	// Occurrence xx23_OF_i_A61

	if ((boolState[failI_OF_i_A61] == false) && (boolState[to_be_fired_OF_i_A61] &&
	boolState[relevant_evt_OF_i_A61])) 
	{
	
		
		if (FIRE_xx23_OF_i_A61_INS_155) 
		{
			boolState[failI_OF_i_A61]  =  true;
			boolState[already_standby_OF_i_A61]  =  false;
			boolState[already_required_OF_i_A61]  =  false;
			FIRE_xx23_OF_i_A61_INS_155 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A61] == false) && (boolState[to_be_fired_OF_i_A61] &&
	boolState[relevant_evt_OF_i_A61])) 
	{
	
		
		if (FIRE_xx23_OF_i_A61_INS_156) 
		{
			boolState[already_standby_OF_i_A61]  =  false;
			boolState[already_required_OF_i_A61]  =  false;
			FIRE_xx23_OF_i_A61_INS_156 = false;
		}
	
	}
	// Occurrence xx24_OF_i_A61
	if (boolState[failI_OF_i_A61] == true) 
	{
		 
		if (FIRE_xx24_OF_i_A61)
		{
			boolState[failI_OF_i_A61]  =  false;
			FIRE_xx24_OF_i_A61 = false;
		}
	}

	// Occurrence xx23_OF_i_A62

	if ((boolState[failI_OF_i_A62] == false) && (boolState[to_be_fired_OF_i_A62] &&
	boolState[relevant_evt_OF_i_A62])) 
	{
	
		
		if (FIRE_xx23_OF_i_A62_INS_158) 
		{
			boolState[failI_OF_i_A62]  =  true;
			boolState[already_standby_OF_i_A62]  =  false;
			boolState[already_required_OF_i_A62]  =  false;
			FIRE_xx23_OF_i_A62_INS_158 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A62] == false) && (boolState[to_be_fired_OF_i_A62] &&
	boolState[relevant_evt_OF_i_A62])) 
	{
	
		
		if (FIRE_xx23_OF_i_A62_INS_159) 
		{
			boolState[already_standby_OF_i_A62]  =  false;
			boolState[already_required_OF_i_A62]  =  false;
			FIRE_xx23_OF_i_A62_INS_159 = false;
		}
	
	}
	// Occurrence xx24_OF_i_A62
	if (boolState[failI_OF_i_A62] == true) 
	{
		 
		if (FIRE_xx24_OF_i_A62)
		{
			boolState[failI_OF_i_A62]  =  false;
			FIRE_xx24_OF_i_A62 = false;
		}
	}

	// Occurrence xx23_OF_i_A63

	if ((boolState[failI_OF_i_A63] == false) && (boolState[to_be_fired_OF_i_A63] &&
	boolState[relevant_evt_OF_i_A63])) 
	{
	
		
		if (FIRE_xx23_OF_i_A63_INS_161) 
		{
			boolState[failI_OF_i_A63]  =  true;
			boolState[already_standby_OF_i_A63]  =  false;
			boolState[already_required_OF_i_A63]  =  false;
			FIRE_xx23_OF_i_A63_INS_161 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A63] == false) && (boolState[to_be_fired_OF_i_A63] &&
	boolState[relevant_evt_OF_i_A63])) 
	{
	
		
		if (FIRE_xx23_OF_i_A63_INS_162) 
		{
			boolState[already_standby_OF_i_A63]  =  false;
			boolState[already_required_OF_i_A63]  =  false;
			FIRE_xx23_OF_i_A63_INS_162 = false;
		}
	
	}
	// Occurrence xx24_OF_i_A63
	if (boolState[failI_OF_i_A63] == true) 
	{
		 
		if (FIRE_xx24_OF_i_A63)
		{
			boolState[failI_OF_i_A63]  =  false;
			FIRE_xx24_OF_i_A63 = false;
		}
	}

	// Occurrence xx23_OF_i_A64

	if ((boolState[failI_OF_i_A64] == false) && (boolState[to_be_fired_OF_i_A64] &&
	boolState[relevant_evt_OF_i_A64])) 
	{
	
		
		if (FIRE_xx23_OF_i_A64_INS_164) 
		{
			boolState[failI_OF_i_A64]  =  true;
			boolState[already_standby_OF_i_A64]  =  false;
			boolState[already_required_OF_i_A64]  =  false;
			FIRE_xx23_OF_i_A64_INS_164 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A64] == false) && (boolState[to_be_fired_OF_i_A64] &&
	boolState[relevant_evt_OF_i_A64])) 
	{
	
		
		if (FIRE_xx23_OF_i_A64_INS_165) 
		{
			boolState[already_standby_OF_i_A64]  =  false;
			boolState[already_required_OF_i_A64]  =  false;
			FIRE_xx23_OF_i_A64_INS_165 = false;
		}
	
	}
	// Occurrence xx24_OF_i_A64
	if (boolState[failI_OF_i_A64] == true) 
	{
		 
		if (FIRE_xx24_OF_i_A64)
		{
			boolState[failI_OF_i_A64]  =  false;
			FIRE_xx24_OF_i_A64 = false;
		}
	}

	// Occurrence xx23_OF_i_A65

	if ((boolState[failI_OF_i_A65] == false) && (boolState[to_be_fired_OF_i_A65] &&
	boolState[relevant_evt_OF_i_A65])) 
	{
	
		
		if (FIRE_xx23_OF_i_A65_INS_167) 
		{
			boolState[failI_OF_i_A65]  =  true;
			boolState[already_standby_OF_i_A65]  =  false;
			boolState[already_required_OF_i_A65]  =  false;
			FIRE_xx23_OF_i_A65_INS_167 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A65] == false) && (boolState[to_be_fired_OF_i_A65] &&
	boolState[relevant_evt_OF_i_A65])) 
	{
	
		
		if (FIRE_xx23_OF_i_A65_INS_168) 
		{
			boolState[already_standby_OF_i_A65]  =  false;
			boolState[already_required_OF_i_A65]  =  false;
			FIRE_xx23_OF_i_A65_INS_168 = false;
		}
	
	}
	// Occurrence xx24_OF_i_A65
	if (boolState[failI_OF_i_A65] == true) 
	{
		 
		if (FIRE_xx24_OF_i_A65)
		{
			boolState[failI_OF_i_A65]  =  false;
			FIRE_xx24_OF_i_A65 = false;
		}
	}

	// Occurrence xx23_OF_i_A66

	if ((boolState[failI_OF_i_A66] == false) && (boolState[to_be_fired_OF_i_A66] &&
	boolState[relevant_evt_OF_i_A66])) 
	{
	
		
		if (FIRE_xx23_OF_i_A66_INS_170) 
		{
			boolState[failI_OF_i_A66]  =  true;
			boolState[already_standby_OF_i_A66]  =  false;
			boolState[already_required_OF_i_A66]  =  false;
			FIRE_xx23_OF_i_A66_INS_170 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A66] == false) && (boolState[to_be_fired_OF_i_A66] &&
	boolState[relevant_evt_OF_i_A66])) 
	{
	
		
		if (FIRE_xx23_OF_i_A66_INS_171) 
		{
			boolState[already_standby_OF_i_A66]  =  false;
			boolState[already_required_OF_i_A66]  =  false;
			FIRE_xx23_OF_i_A66_INS_171 = false;
		}
	
	}
	// Occurrence xx24_OF_i_A66
	if (boolState[failI_OF_i_A66] == true) 
	{
		 
		if (FIRE_xx24_OF_i_A66)
		{
			boolState[failI_OF_i_A66]  =  false;
			FIRE_xx24_OF_i_A66 = false;
		}
	}

}

std::vector<std::tuple<int, double, std::string, int>> storm::figaro::FigaroProgram_vgs_5_Trim_Article_repair::showFireableOccurrences()
{
	std::vector<std::tuple<int, double, std::string, int>> list = {};
	//cout <<"\n==================== List of fireable occurrences :  ====================" << endl;

	if ((boolState[failI_OF_i_A43] == false) && (boolState[to_be_fired_OF_i_A43] &&	boolState[relevant_evt_OF_i_A43]))
	{
		//cout << "110 :  INS_SUB_COUNT (1) |FAULT | failI  LABEL \"instantaneous failure i_A43\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A43]  =  TRUE,already_standby_OF_i_A43  =  FALSE,already_required_OF_i_A43  =  FALSE" << endl;
		list.push_back(make_tuple(110, 1, "INS", 1));
	}
	if ((boolState[failI_OF_i_A43] == false) && (boolState[to_be_fired_OF_i_A43] &&	boolState[relevant_evt_OF_i_A43]))
	{
		//cout << "111 :  INS_SUB_COUNT (1) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A43]  =  FALSE,already_required_OF_i_A43  =  FALSE" << endl;
		list.push_back(make_tuple(111, 0, "INS", 1));
	}
	if ((boolState[failI_OF_i_A44] == false) && (boolState[to_be_fired_OF_i_A44] &&	boolState[relevant_evt_OF_i_A44]))
	{
		//cout << "113 :  INS_SUB_COUNT (2) |FAULT | failI  LABEL \"instantaneous failure i_A44\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A44]  =  TRUE,already_standby_OF_i_A44  =  FALSE,already_required_OF_i_A44  =  FALSE" << endl;
		list.push_back(make_tuple(113, 1, "INS", 2));
	}
	if ((boolState[failI_OF_i_A44] == false) && (boolState[to_be_fired_OF_i_A44] &&	boolState[relevant_evt_OF_i_A44]))
	{
		//cout << "114 :  INS_SUB_COUNT (2) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A44]  =  FALSE,already_required_OF_i_A44  =  FALSE" << endl;
		list.push_back(make_tuple(114, 0, "INS", 2));
	}
	if ((boolState[failI_OF_i_A45] == false) && (boolState[to_be_fired_OF_i_A45] &&	boolState[relevant_evt_OF_i_A45]))
	{
		//cout << "116 :  INS_SUB_COUNT (3) |FAULT | failI  LABEL \"instantaneous failure i_A45\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A45]  =  TRUE,already_standby_OF_i_A45  =  FALSE,already_required_OF_i_A45  =  FALSE" << endl;
		list.push_back(make_tuple(116, 1, "INS", 3));
	}
	if ((boolState[failI_OF_i_A45] == false) && (boolState[to_be_fired_OF_i_A45] &&	boolState[relevant_evt_OF_i_A45]))
	{
		//cout << "117 :  INS_SUB_COUNT (3) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A45]  =  FALSE,already_required_OF_i_A45  =  FALSE" << endl;
		list.push_back(make_tuple(117, 0, "INS", 3));
	}
	if ((boolState[failI_OF_i_A46] == false) && (boolState[to_be_fired_OF_i_A46] &&	boolState[relevant_evt_OF_i_A46]))
	{
		//cout << "119 :  INS_SUB_COUNT (4) |FAULT | failI  LABEL \"instantaneous failure i_A46\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A46]  =  TRUE,already_standby_OF_i_A46  =  FALSE,already_required_OF_i_A46  =  FALSE" << endl;
		list.push_back(make_tuple(119, 1, "INS", 4));
	}
	if ((boolState[failI_OF_i_A46] == false) && (boolState[to_be_fired_OF_i_A46] &&	boolState[relevant_evt_OF_i_A46]))
	{
		//cout << "120 :  INS_SUB_COUNT (4) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A46]  =  FALSE,already_required_OF_i_A46  =  FALSE" << endl;
		list.push_back(make_tuple(120, 0, "INS", 4));
	}
	if ((boolState[failI_OF_i_A47] == false) && (boolState[to_be_fired_OF_i_A47] &&	boolState[relevant_evt_OF_i_A47]))
	{
		//cout << "122 :  INS_SUB_COUNT (5) |FAULT | failI  LABEL \"instantaneous failure i_A47\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A47]  =  TRUE,already_standby_OF_i_A47  =  FALSE,already_required_OF_i_A47  =  FALSE" << endl;
		list.push_back(make_tuple(122, 1, "INS", 5));
	}
	if ((boolState[failI_OF_i_A47] == false) && (boolState[to_be_fired_OF_i_A47] &&	boolState[relevant_evt_OF_i_A47]))
	{
		//cout << "123 :  INS_SUB_COUNT (5) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A47]  =  FALSE,already_required_OF_i_A47  =  FALSE" << endl;
		list.push_back(make_tuple(123, 0, "INS", 5));
	}
	if ((boolState[failI_OF_i_A48] == false) && (boolState[to_be_fired_OF_i_A48] &&	boolState[relevant_evt_OF_i_A48]))
	{
		//cout << "125 :  INS_SUB_COUNT (6) |FAULT | failI  LABEL \"instantaneous failure i_A48\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A48]  =  TRUE,already_standby_OF_i_A48  =  FALSE,already_required_OF_i_A48  =  FALSE" << endl;
		list.push_back(make_tuple(125, 1, "INS", 6));
	}
	if ((boolState[failI_OF_i_A48] == false) && (boolState[to_be_fired_OF_i_A48] &&	boolState[relevant_evt_OF_i_A48]))
	{
		//cout << "126 :  INS_SUB_COUNT (6) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A48]  =  FALSE,already_required_OF_i_A48  =  FALSE" << endl;
		list.push_back(make_tuple(126, 0, "INS", 6));
	}
	if ((boolState[failI_OF_i_A49] == false) && (boolState[to_be_fired_OF_i_A49] &&	boolState[relevant_evt_OF_i_A49]))
	{
		//cout << "128 :  INS_SUB_COUNT (7) |FAULT | failI  LABEL \"instantaneous failure i_A49\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A49]  =  TRUE,already_standby_OF_i_A49  =  FALSE,already_required_OF_i_A49  =  FALSE" << endl;
		list.push_back(make_tuple(128, 1, "INS", 7));
	}
	if ((boolState[failI_OF_i_A49] == false) && (boolState[to_be_fired_OF_i_A49] &&	boolState[relevant_evt_OF_i_A49]))
	{
		//cout << "129 :  INS_SUB_COUNT (7) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A49]  =  FALSE,already_required_OF_i_A49  =  FALSE" << endl;
		list.push_back(make_tuple(129, 0, "INS", 7));
	}
	if ((boolState[failI_OF_i_A51] == false) && (boolState[to_be_fired_OF_i_A51] &&	boolState[relevant_evt_OF_i_A51]))
	{
		//cout << "131 :  INS_SUB_COUNT (8) |FAULT | failI  LABEL \"instantaneous failure i_A51\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A51]  =  TRUE,already_standby_OF_i_A51  =  FALSE,already_required_OF_i_A51  =  FALSE" << endl;
		list.push_back(make_tuple(131, 1, "INS", 8));
	}
	if ((boolState[failI_OF_i_A51] == false) && (boolState[to_be_fired_OF_i_A51] &&	boolState[relevant_evt_OF_i_A51]))
	{
		//cout << "132 :  INS_SUB_COUNT (8) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A51]  =  FALSE,already_required_OF_i_A51  =  FALSE" << endl;
		list.push_back(make_tuple(132, 0, "INS", 8));
	}
	if ((boolState[failI_OF_i_A52] == false) && (boolState[to_be_fired_OF_i_A52] &&	boolState[relevant_evt_OF_i_A52]))
	{
		//cout << "134 :  INS_SUB_COUNT (9) |FAULT | failI  LABEL \"instantaneous failure i_A52\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A52]  =  TRUE,already_standby_OF_i_A52  =  FALSE,already_required_OF_i_A52  =  FALSE" << endl;
		list.push_back(make_tuple(134, 1, "INS", 9));
	}
	if ((boolState[failI_OF_i_A52] == false) && (boolState[to_be_fired_OF_i_A52] &&	boolState[relevant_evt_OF_i_A52]))
	{
		//cout << "135 :  INS_SUB_COUNT (9) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A52]  =  FALSE,already_required_OF_i_A52  =  FALSE" << endl;
		list.push_back(make_tuple(135, 0, "INS", 9));
	}
	if ((boolState[failI_OF_i_A54] == false) && (boolState[to_be_fired_OF_i_A54] &&	boolState[relevant_evt_OF_i_A54]))
	{
		//cout << "137 :  INS_SUB_COUNT (10) |FAULT | failI  LABEL \"instantaneous failure i_A54\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A54]  =  TRUE,already_standby_OF_i_A54  =  FALSE,already_required_OF_i_A54  =  FALSE" << endl;
		list.push_back(make_tuple(137, 1, "INS", 10));
	}
	if ((boolState[failI_OF_i_A54] == false) && (boolState[to_be_fired_OF_i_A54] &&	boolState[relevant_evt_OF_i_A54]))
	{
		//cout << "138 :  INS_SUB_COUNT (10) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A54]  =  FALSE,already_required_OF_i_A54  =  FALSE" << endl;
		list.push_back(make_tuple(138, 0, "INS", 10));
	}
	if ((boolState[failI_OF_i_A55] == false) && (boolState[to_be_fired_OF_i_A55] &&	boolState[relevant_evt_OF_i_A55]))
	{
		//cout << "140 :  INS_SUB_COUNT (11) |FAULT | failI  LABEL \"instantaneous failure i_A55\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A55]  =  TRUE,already_standby_OF_i_A55  =  FALSE,already_required_OF_i_A55  =  FALSE" << endl;
		list.push_back(make_tuple(140, 1, "INS", 11));
	}
	if ((boolState[failI_OF_i_A55] == false) && (boolState[to_be_fired_OF_i_A55] &&	boolState[relevant_evt_OF_i_A55]))
	{
		//cout << "141 :  INS_SUB_COUNT (11) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A55]  =  FALSE,already_required_OF_i_A55  =  FALSE" << endl;
		list.push_back(make_tuple(141, 0, "INS", 11));
	}
	if ((boolState[failI_OF_i_A57] == false) && (boolState[to_be_fired_OF_i_A57] &&	boolState[relevant_evt_OF_i_A57]))
	{
		//cout << "143 :  INS_SUB_COUNT (12) |FAULT | failI  LABEL \"instantaneous failure i_A57\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A57]  =  TRUE,already_standby_OF_i_A57  =  FALSE,already_required_OF_i_A57  =  FALSE" << endl;
		list.push_back(make_tuple(143, 1, "INS", 12));
	}
	if ((boolState[failI_OF_i_A57] == false) && (boolState[to_be_fired_OF_i_A57] &&	boolState[relevant_evt_OF_i_A57]))
	{
		//cout << "144 :  INS_SUB_COUNT (12) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A57]  =  FALSE,already_required_OF_i_A57  =  FALSE" << endl;
		list.push_back(make_tuple(144, 0, "INS", 12));
	}
	if ((boolState[failI_OF_i_A58] == false) && (boolState[to_be_fired_OF_i_A58] &&	boolState[relevant_evt_OF_i_A58]))
	{
		//cout << "146 :  INS_SUB_COUNT (13) |FAULT | failI  LABEL \"instantaneous failure i_A58\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A58]  =  TRUE,already_standby_OF_i_A58  =  FALSE,already_required_OF_i_A58  =  FALSE" << endl;
		list.push_back(make_tuple(146, 1, "INS", 13));
	}
	if ((boolState[failI_OF_i_A58] == false) && (boolState[to_be_fired_OF_i_A58] &&	boolState[relevant_evt_OF_i_A58]))
	{
		//cout << "147 :  INS_SUB_COUNT (13) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A58]  =  FALSE,already_required_OF_i_A58  =  FALSE" << endl;
		list.push_back(make_tuple(147, 0, "INS", 13));
	}
	if ((boolState[failI_OF_i_A59] == false) && (boolState[to_be_fired_OF_i_A59] &&	boolState[relevant_evt_OF_i_A59]))
	{
		//cout << "149 :  INS_SUB_COUNT (14) |FAULT | failI  LABEL \"instantaneous failure i_A59\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A59]  =  TRUE,already_standby_OF_i_A59  =  FALSE,already_required_OF_i_A59  =  FALSE" << endl;
		list.push_back(make_tuple(149, 1, "INS", 14));
	}
	if ((boolState[failI_OF_i_A59] == false) && (boolState[to_be_fired_OF_i_A59] &&	boolState[relevant_evt_OF_i_A59]))
	{
		//cout << "150 :  INS_SUB_COUNT (14) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A59]  =  FALSE,already_required_OF_i_A59  =  FALSE" << endl;
		list.push_back(make_tuple(150, 0, "INS", 14));
	}
	if ((boolState[failI_OF_i_A60] == false) && (boolState[to_be_fired_OF_i_A60] &&	boolState[relevant_evt_OF_i_A60]))
	{
		//cout << "152 :  INS_SUB_COUNT (15) |FAULT | failI  LABEL \"instantaneous failure i_A60\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A60]  =  TRUE,already_standby_OF_i_A60  =  FALSE,already_required_OF_i_A60  =  FALSE" << endl;
		list.push_back(make_tuple(152, 1, "INS", 15));
	}
	if ((boolState[failI_OF_i_A60] == false) && (boolState[to_be_fired_OF_i_A60] &&	boolState[relevant_evt_OF_i_A60]))
	{
		//cout << "153 :  INS_SUB_COUNT (15) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A60]  =  FALSE,already_required_OF_i_A60  =  FALSE" << endl;
		list.push_back(make_tuple(153, 0, "INS", 15));
	}
	if ((boolState[failI_OF_i_A61] == false) && (boolState[to_be_fired_OF_i_A61] &&	boolState[relevant_evt_OF_i_A61]))
	{
		//cout << "155 :  INS_SUB_COUNT (16) |FAULT | failI  LABEL \"instantaneous failure i_A61\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A61]  =  TRUE,already_standby_OF_i_A61  =  FALSE,already_required_OF_i_A61  =  FALSE" << endl;
		list.push_back(make_tuple(155, 1, "INS", 16));
	}
	if ((boolState[failI_OF_i_A61] == false) && (boolState[to_be_fired_OF_i_A61] &&	boolState[relevant_evt_OF_i_A61]))
	{
		//cout << "156 :  INS_SUB_COUNT (16) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A61]  =  FALSE,already_required_OF_i_A61  =  FALSE" << endl;
		list.push_back(make_tuple(156, 0, "INS", 16));
	}
	if ((boolState[failI_OF_i_A62] == false) && (boolState[to_be_fired_OF_i_A62] &&	boolState[relevant_evt_OF_i_A62]))
	{
		//cout << "158 :  INS_SUB_COUNT (17) |FAULT | failI  LABEL \"instantaneous failure i_A62\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A62]  =  TRUE,already_standby_OF_i_A62  =  FALSE,already_required_OF_i_A62  =  FALSE" << endl;
		list.push_back(make_tuple(158, 1, "INS", 17));
	}
	if ((boolState[failI_OF_i_A62] == false) && (boolState[to_be_fired_OF_i_A62] &&	boolState[relevant_evt_OF_i_A62]))
	{
		//cout << "159 :  INS_SUB_COUNT (17) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A62]  =  FALSE,already_required_OF_i_A62  =  FALSE" << endl;
		list.push_back(make_tuple(159, 0, "INS", 17));
	}
	if ((boolState[failI_OF_i_A63] == false) && (boolState[to_be_fired_OF_i_A63] &&	boolState[relevant_evt_OF_i_A63]))
	{
		//cout << "161 :  INS_SUB_COUNT (18) |FAULT | failI  LABEL \"instantaneous failure i_A63\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A63]  =  TRUE,already_standby_OF_i_A63  =  FALSE,already_required_OF_i_A63  =  FALSE" << endl;
		list.push_back(make_tuple(161, 1, "INS", 18));
	}
	if ((boolState[failI_OF_i_A63] == false) && (boolState[to_be_fired_OF_i_A63] &&	boolState[relevant_evt_OF_i_A63]))
	{
		//cout << "162 :  INS_SUB_COUNT (18) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A63]  =  FALSE,already_required_OF_i_A63  =  FALSE" << endl;
		list.push_back(make_tuple(162, 0, "INS", 18));
	}
	if ((boolState[failI_OF_i_A64] == false) && (boolState[to_be_fired_OF_i_A64] &&	boolState[relevant_evt_OF_i_A64]))
	{
		//cout << "164 :  INS_SUB_COUNT (19) |FAULT | failI  LABEL \"instantaneous failure i_A64\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A64]  =  TRUE,already_standby_OF_i_A64  =  FALSE,already_required_OF_i_A64  =  FALSE" << endl;
		list.push_back(make_tuple(164, 1, "INS", 19));
	}
	if ((boolState[failI_OF_i_A64] == false) && (boolState[to_be_fired_OF_i_A64] &&	boolState[relevant_evt_OF_i_A64]))
	{
		//cout << "165 :  INS_SUB_COUNT (19) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A64]  =  FALSE,already_required_OF_i_A64  =  FALSE" << endl;
		list.push_back(make_tuple(165, 0, "INS", 19));
	}
	if ((boolState[failI_OF_i_A65] == false) && (boolState[to_be_fired_OF_i_A65] &&	boolState[relevant_evt_OF_i_A65]))
	{
		//cout << "167 :  INS_SUB_COUNT (20) |FAULT | failI  LABEL \"instantaneous failure i_A65\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A65]  =  TRUE,already_standby_OF_i_A65  =  FALSE,already_required_OF_i_A65  =  FALSE" << endl;
		list.push_back(make_tuple(167, 1, "INS", 20));
	}
	if ((boolState[failI_OF_i_A65] == false) && (boolState[to_be_fired_OF_i_A65] &&	boolState[relevant_evt_OF_i_A65]))
	{
		//cout << "168 :  INS_SUB_COUNT (20) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A65]  =  FALSE,already_required_OF_i_A65  =  FALSE" << endl;
		list.push_back(make_tuple(168, 0, "INS", 20));
	}
	if ((boolState[failI_OF_i_A66] == false) && (boolState[to_be_fired_OF_i_A66] &&	boolState[relevant_evt_OF_i_A66]))
	{
		//cout << "170 :  INS_SUB_COUNT (21) |FAULT | failI  LABEL \"instantaneous failure i_A66\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A66]  =  TRUE,already_standby_OF_i_A66  =  FALSE,already_required_OF_i_A66  =  FALSE" << endl;
		list.push_back(make_tuple(170, 1, "INS", 21));
	}
	if ((boolState[failI_OF_i_A66] == false) && (boolState[to_be_fired_OF_i_A66] &&	boolState[relevant_evt_OF_i_A66]))
	{
		//cout << "171 :  INS_SUB_COUNT (21) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A66]  =  FALSE,already_required_OF_i_A66  =  FALSE" << endl;
		list.push_back(make_tuple(171, 0, "INS", 21));
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
     
	if ((boolState[failF_OF_A1] == false) && (boolState[required_OF_A1] && boolState[relevant_evt_OF_A1]))
	{
		//cout << "0 : xx10_OF_A1 : FAULT failF  LABEL \"failure in operation A1\"  DIST EXP (1e-07)  INDUCING boolState[failF_OF_A1]  =  TRUE" << endl;
		list.push_back(make_tuple(0, 1e-07, "EXP", 0));
	}
	if (boolState[failF_OF_A1] == true)
	{
		//cout << "1 : xx11_OF_A1 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A1]  =  FALSE" << endl;
		list.push_back(make_tuple(1, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A10] == false) && (boolState[required_OF_A10] && boolState[relevant_evt_OF_A10]))
	{
		//cout << "2 : xx10_OF_A10 : FAULT failF  LABEL \"failure in operation A10\"  DIST EXP (0)  INDUCING boolState[failF_OF_A10]  =  TRUE" << endl;
		list.push_back(make_tuple(2, 0, "EXP", 0));
	}
	if (boolState[failF_OF_A10] == true)
	{
		//cout << "3 : xx11_OF_A10 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A10]  =  FALSE" << endl;
		list.push_back(make_tuple(3, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A102] == false) && (boolState[required_OF_A102] && boolState[relevant_evt_OF_A102]))
	{
		//cout << "4 : xx10_OF_A102 : FAULT failF  LABEL \"failure in operation A102\"  DIST EXP (9.9e-07)  INDUCING boolState[failF_OF_A102]  =  TRUE" << endl;
		list.push_back(make_tuple(4, 9.9e-07, "EXP", 0));
	}
	if (boolState[failF_OF_A102] == true)
	{
		//cout << "5 : xx11_OF_A102 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A102]  =  FALSE" << endl;
		list.push_back(make_tuple(5, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A103] == false) && (boolState[required_OF_A103] && boolState[relevant_evt_OF_A103]))
	{
		//cout << "6 : xx10_OF_A103 : FAULT failF  LABEL \"failure in operation A103\"  DIST EXP (1e-08)  INDUCING boolState[failF_OF_A103]  =  TRUE" << endl;
		list.push_back(make_tuple(6, 1e-08, "EXP", 0));
	}
	if (boolState[failF_OF_A103] == true)
	{
		//cout << "7 : xx11_OF_A103 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A103]  =  FALSE" << endl;
		list.push_back(make_tuple(7, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A104] == false) && (boolState[required_OF_A104] && boolState[relevant_evt_OF_A104]))
	{
		//cout << "8 : xx10_OF_A104 : FAULT failF  LABEL \"failure in operation A104\"  DIST EXP (1e-06)  INDUCING boolState[failF_OF_A104]  =  TRUE" << endl;
		list.push_back(make_tuple(8, 1e-06, "EXP", 0));
	}
	if (boolState[failF_OF_A104] == true)
	{
		//cout << "9 : xx11_OF_A104 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A104]  =  FALSE" << endl;
		list.push_back(make_tuple(9, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A13] == false) && (boolState[required_OF_A13] && boolState[relevant_evt_OF_A13]))
	{
		//cout << "10 : xx10_OF_A13 : FAULT failF  LABEL \"failure in operation A13\"  DIST EXP (0)  INDUCING boolState[failF_OF_A13]  =  TRUE" << endl;
		list.push_back(make_tuple(10, 0, "EXP", 0));
	}
	if (boolState[failF_OF_A13] == true)
	{
		//cout << "11 : xx11_OF_A13 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A13]  =  FALSE" << endl;
		list.push_back(make_tuple(11, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A16] == false) && (boolState[required_OF_A16] && boolState[relevant_evt_OF_A16]))
	{
		//cout << "12 : xx10_OF_A16 : FAULT failF  LABEL \"failure in operation A16\"  DIST EXP (0)  INDUCING boolState[failF_OF_A16]  =  TRUE" << endl;
		list.push_back(make_tuple(12, 0, "EXP", 0));
	}
	if (boolState[failF_OF_A16] == true)
	{
		//cout << "13 : xx11_OF_A16 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A16]  =  FALSE" << endl;
		list.push_back(make_tuple(13, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A19] == false) && (boolState[required_OF_A19] && boolState[relevant_evt_OF_A19]))
	{
		//cout << "14 : xx10_OF_A19 : FAULT failF  LABEL \"failure in operation A19\"  DIST EXP (0)  INDUCING boolState[failF_OF_A19]  =  TRUE" << endl;
		list.push_back(make_tuple(14, 0, "EXP", 0));
	}
	if (boolState[failF_OF_A19] == true)
	{
		//cout << "15 : xx11_OF_A19 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A19]  =  FALSE" << endl;
		list.push_back(make_tuple(15, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A22] == false) && (boolState[required_OF_A22] && boolState[relevant_evt_OF_A22]))
	{
		//cout << "16 : xx10_OF_A22 : FAULT failF  LABEL \"failure in operation A22\"  DIST EXP (0)  INDUCING boolState[failF_OF_A22]  =  TRUE" << endl;
		list.push_back(make_tuple(16, 0, "EXP", 0));
	}
	if (boolState[failF_OF_A22] == true)
	{
		//cout << "17 : xx11_OF_A22 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A22]  =  FALSE" << endl;
		list.push_back(make_tuple(17, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A25] == false) && (boolState[required_OF_A25] && boolState[relevant_evt_OF_A25]))
	{
		//cout << "18 : xx10_OF_A25 : FAULT failF  LABEL \"failure in operation A25\"  DIST EXP (0)  INDUCING boolState[failF_OF_A25]  =  TRUE" << endl;
		list.push_back(make_tuple(18, 0, "EXP", 0));
	}
	if (boolState[failF_OF_A25] == true)
	{
		//cout << "19 : xx11_OF_A25 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A25]  =  FALSE" << endl;
		list.push_back(make_tuple(19, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A28] == false) && (boolState[required_OF_A28] && boolState[relevant_evt_OF_A28]))
	{
		//cout << "20 : xx10_OF_A28 : FAULT failF  LABEL \"failure in operation A28\"  DIST EXP (1e-07)  INDUCING boolState[failF_OF_A28]  =  TRUE" << endl;
		list.push_back(make_tuple(20, 1e-07, "EXP", 0));
	}
	if (boolState[failF_OF_A28] == true)
	{
		//cout << "21 : xx11_OF_A28 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A28]  =  FALSE" << endl;
		list.push_back(make_tuple(21, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A29] == false) && (boolState[required_OF_A29] && boolState[relevant_evt_OF_A29]))
	{
		//cout << "22 : xx10_OF_A29 : FAULT failF  LABEL \"failure in operation A29\"  DIST EXP (1e-07)  INDUCING boolState[failF_OF_A29]  =  TRUE" << endl;
		list.push_back(make_tuple(22, 1e-07, "EXP", 0));
	}
	if (boolState[failF_OF_A29] == true)
	{
		//cout << "23 : xx11_OF_A29 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A29]  =  FALSE" << endl;
		list.push_back(make_tuple(23, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A33] == false) && (boolState[required_OF_A33] && boolState[relevant_evt_OF_A33]))
	{
		//cout << "24 : xx10_OF_A33 : FAULT failF  LABEL \"failure in operation A33\"  DIST EXP (2e-07)  INDUCING boolState[failF_OF_A33]  =  TRUE" << endl;
		list.push_back(make_tuple(24, 2e-07, "EXP", 0));
	}
	if (boolState[failF_OF_A33] == true)
	{
		//cout << "25 : xx11_OF_A33 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A33]  =  FALSE" << endl;
		list.push_back(make_tuple(25, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A36] == false) && (boolState[required_OF_A36] && boolState[relevant_evt_OF_A36]))
	{
		//cout << "26 : xx10_OF_A36 : FAULT failF  LABEL \"failure in operation A36\"  DIST EXP (2e-07)  INDUCING boolState[failF_OF_A36]  =  TRUE" << endl;
		list.push_back(make_tuple(26, 2e-07, "EXP", 0));
	}
	if (boolState[failF_OF_A36] == true)
	{
		//cout << "27 : xx11_OF_A36 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A36]  =  FALSE" << endl;
		list.push_back(make_tuple(27, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A39] == false) && (boolState[required_OF_A39] && boolState[relevant_evt_OF_A39]))
	{
		//cout << "28 : xx10_OF_A39 : FAULT failF  LABEL \"failure in operation A39\"  DIST EXP (2e-07)  INDUCING boolState[failF_OF_A39]  =  TRUE" << endl;
		list.push_back(make_tuple(28, 2e-07, "EXP", 0));
	}
	if (boolState[failF_OF_A39] == true)
	{
		//cout << "29 : xx11_OF_A39 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A39]  =  FALSE" << endl;
		list.push_back(make_tuple(29, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A4] == false) && (boolState[required_OF_A4] && boolState[relevant_evt_OF_A4]))
	{
		//cout << "30 : xx10_OF_A4 : FAULT failF  LABEL \"failure in operation A4\"  DIST EXP (0)  INDUCING boolState[failF_OF_A4]  =  TRUE" << endl;
		list.push_back(make_tuple(30, 0, "EXP", 0));
	}
	if (boolState[failF_OF_A4] == true)
	{
		//cout << "31 : xx11_OF_A4 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A4]  =  FALSE" << endl;
		list.push_back(make_tuple(31, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A67] == false) && (boolState[required_OF_A67] && boolState[relevant_evt_OF_A67]))
	{
		//cout << "32 : xx10_OF_A67 : FAULT failF  LABEL \"failure in operation A67\"  DIST EXP (1e-07)  INDUCING boolState[failF_OF_A67]  =  TRUE" << endl;
		list.push_back(make_tuple(32, 1e-07, "EXP", 0));
	}
	if (boolState[failF_OF_A67] == true)
	{
		//cout << "33 : xx11_OF_A67 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A67]  =  FALSE" << endl;
		list.push_back(make_tuple(33, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A68] == false) && (boolState[required_OF_A68] && boolState[relevant_evt_OF_A68]))
	{
		//cout << "34 : xx10_OF_A68 : FAULT failF  LABEL \"failure in operation A68\"  DIST EXP (1e-07)  INDUCING boolState[failF_OF_A68]  =  TRUE" << endl;
		list.push_back(make_tuple(34, 1e-07, "EXP", 0));
	}
	if (boolState[failF_OF_A68] == true)
	{
		//cout << "35 : xx11_OF_A68 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A68]  =  FALSE" << endl;
		list.push_back(make_tuple(35, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A7] == false) && (boolState[required_OF_A7] && boolState[relevant_evt_OF_A7]))
	{
		//cout << "36 : xx10_OF_A7 : FAULT failF  LABEL \"failure in operation A7\"  DIST EXP (0)  INDUCING boolState[failF_OF_A7]  =  TRUE" << endl;
		list.push_back(make_tuple(36, 0, "EXP", 0));
	}
	if (boolState[failF_OF_A7] == true)
	{
		//cout << "37 : xx11_OF_A7 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A7]  =  FALSE" << endl;
		list.push_back(make_tuple(37, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A75] == false) && (boolState[required_OF_A75] && boolState[relevant_evt_OF_A75]))
	{
		//cout << "38 : xx10_OF_A75 : FAULT failF  LABEL \"failure in operation A75\"  DIST EXP (9.9e-05)  INDUCING boolState[failF_OF_A75]  =  TRUE" << endl;
		list.push_back(make_tuple(38, 9.9e-05, "EXP", 0));
	}
	if (boolState[failF_OF_A75] == true)
	{
		//cout << "39 : xx11_OF_A75 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A75]  =  FALSE" << endl;
		list.push_back(make_tuple(39, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A76] == false) && (boolState[required_OF_A76] && boolState[relevant_evt_OF_A76]))
	{
		//cout << "40 : xx10_OF_A76 : FAULT failF  LABEL \"failure in operation A76\"  DIST EXP (1e-06)  INDUCING boolState[failF_OF_A76]  =  TRUE" << endl;
		list.push_back(make_tuple(40, 1e-06, "EXP", 0));
	}
	if (boolState[failF_OF_A76] == true)
	{
		//cout << "41 : xx11_OF_A76 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A76]  =  FALSE" << endl;
		list.push_back(make_tuple(41, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A77] == false) && (boolState[required_OF_A77] && boolState[relevant_evt_OF_A77]))
	{
		//cout << "42 : xx10_OF_A77 : FAULT failF  LABEL \"failure in operation A77\"  DIST EXP (1e-05)  INDUCING boolState[failF_OF_A77]  =  TRUE" << endl;
		list.push_back(make_tuple(42, 1e-05, "EXP", 0));
	}
	if (boolState[failF_OF_A77] == true)
	{
		//cout << "43 : xx11_OF_A77 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A77]  =  FALSE" << endl;
		list.push_back(make_tuple(43, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A80] == false) && (boolState[required_OF_A80] && boolState[relevant_evt_OF_A80]))
	{
		//cout << "44 : xx10_OF_A80 : FAULT failF  LABEL \"failure in operation A80\"  DIST EXP (9.9e-06)  INDUCING boolState[failF_OF_A80]  =  TRUE" << endl;
		list.push_back(make_tuple(44, 9.9e-06, "EXP", 0));
	}
	if (boolState[failF_OF_A80] == true)
	{
		//cout << "45 : xx11_OF_A80 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A80]  =  FALSE" << endl;
		list.push_back(make_tuple(45, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A81] == false) && (boolState[required_OF_A81] && boolState[relevant_evt_OF_A81]))
	{
		//cout << "46 : xx10_OF_A81 : FAULT failF  LABEL \"failure in operation A81\"  DIST EXP (1e-07)  INDUCING boolState[failF_OF_A81]  =  TRUE" << endl;
		list.push_back(make_tuple(46, 1e-07, "EXP", 0));
	}
	if (boolState[failF_OF_A81] == true)
	{
		//cout << "47 : xx11_OF_A81 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A81]  =  FALSE" << endl;
		list.push_back(make_tuple(47, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A82] == false) && (boolState[required_OF_A82] && boolState[relevant_evt_OF_A82]))
	{
		//cout << "48 : xx10_OF_A82 : FAULT failF  LABEL \"failure in operation A82\"  DIST EXP (1e-05)  INDUCING boolState[failF_OF_A82]  =  TRUE" << endl;
		list.push_back(make_tuple(48, 1e-05, "EXP", 0));
	}
	if (boolState[failF_OF_A82] == true)
	{
		//cout << "49 : xx11_OF_A82 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A82]  =  FALSE" << endl;
		list.push_back(make_tuple(49, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A86] == false) && (boolState[required_OF_A86] && boolState[relevant_evt_OF_A86]))
	{
		//cout << "50 : xx10_OF_A86 : FAULT failF  LABEL \"failure in operation A86\"  DIST EXP (9.9e-06)  INDUCING boolState[failF_OF_A86]  =  TRUE" << endl;
		list.push_back(make_tuple(50, 9.9e-06, "EXP", 0));
	}
	if (boolState[failF_OF_A86] == true)
	{
		//cout << "51 : xx11_OF_A86 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A86]  =  FALSE" << endl;
		list.push_back(make_tuple(51, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A87] == false) && (boolState[required_OF_A87] && boolState[relevant_evt_OF_A87]))
	{
		//cout << "52 : xx10_OF_A87 : FAULT failF  LABEL \"failure in operation A87\"  DIST EXP (1e-07)  INDUCING boolState[failF_OF_A87]  =  TRUE" << endl;
		list.push_back(make_tuple(52, 1e-07, "EXP", 0));
	}
	if (boolState[failF_OF_A87] == true)
	{
		//cout << "53 : xx11_OF_A87 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A87]  =  FALSE" << endl;
		list.push_back(make_tuple(53, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A88] == false) && (boolState[required_OF_A88] && boolState[relevant_evt_OF_A88]))
	{
		//cout << "54 : xx10_OF_A88 : FAULT failF  LABEL \"failure in operation A88\"  DIST EXP (1e-06)  INDUCING boolState[failF_OF_A88]  =  TRUE" << endl;
		list.push_back(make_tuple(54, 1e-06, "EXP", 0));
	}
	if (boolState[failF_OF_A88] == true)
	{
		//cout << "55 : xx11_OF_A88 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A88]  =  FALSE" << endl;
		list.push_back(make_tuple(55, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A91] == false) && (boolState[required_OF_A91] && boolState[relevant_evt_OF_A91]))
	{
		//cout << "56 : xx10_OF_A91 : FAULT failF  LABEL \"failure in operation A91\"  DIST EXP (9.9e-07)  INDUCING boolState[failF_OF_A91]  =  TRUE" << endl;
		list.push_back(make_tuple(56, 9.9e-07, "EXP", 0));
	}
	if (boolState[failF_OF_A91] == true)
	{
		//cout << "57 : xx11_OF_A91 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A91]  =  FALSE" << endl;
		list.push_back(make_tuple(57, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A92] == false) && (boolState[required_OF_A92] && boolState[relevant_evt_OF_A92]))
	{
		//cout << "58 : xx10_OF_A92 : FAULT failF  LABEL \"failure in operation A92\"  DIST EXP (1e-08)  INDUCING boolState[failF_OF_A92]  =  TRUE" << endl;
		list.push_back(make_tuple(58, 1e-08, "EXP", 0));
	}
	if (boolState[failF_OF_A92] == true)
	{
		//cout << "59 : xx11_OF_A92 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A92]  =  FALSE" << endl;
		list.push_back(make_tuple(59, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A93] == false) && (boolState[required_OF_A93] && boolState[relevant_evt_OF_A93]))
	{
		//cout << "60 : xx10_OF_A93 : FAULT failF  LABEL \"failure in operation A93\"  DIST EXP (1e-06)  INDUCING boolState[failF_OF_A93]  =  TRUE" << endl;
		list.push_back(make_tuple(60, 1e-06, "EXP", 0));
	}
	if (boolState[failF_OF_A93] == true)
	{
		//cout << "61 : xx11_OF_A93 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A93]  =  FALSE" << endl;
		list.push_back(make_tuple(61, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A97] == false) && (boolState[required_OF_A97] && boolState[relevant_evt_OF_A97]))
	{
		//cout << "62 : xx10_OF_A97 : FAULT failF  LABEL \"failure in operation A97\"  DIST EXP (9.9e-06)  INDUCING boolState[failF_OF_A97]  =  TRUE" << endl;
		list.push_back(make_tuple(62, 9.9e-06, "EXP", 0));
	}
	if (boolState[failF_OF_A97] == true)
	{
		//cout << "63 : xx11_OF_A97 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A97]  =  FALSE" << endl;
		list.push_back(make_tuple(63, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A98] == false) && (boolState[required_OF_A98] && boolState[relevant_evt_OF_A98]))
	{
		//cout << "64 : xx10_OF_A98 : FAULT failF  LABEL \"failure in operation A98\"  DIST EXP (1e-07)  INDUCING boolState[failF_OF_A98]  =  TRUE" << endl;
		list.push_back(make_tuple(64, 1e-07, "EXP", 0));
	}
	if (boolState[failF_OF_A98] == true)
	{
		//cout << "65 : xx11_OF_A98 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A98]  =  FALSE" << endl;
		list.push_back(make_tuple(65, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A99] == false) && (boolState[required_OF_A99] && boolState[relevant_evt_OF_A99]))
	{
		//cout << "66 : xx10_OF_A99 : FAULT failF  LABEL \"failure in operation A99\"  DIST EXP (1e-06)  INDUCING boolState[failF_OF_A99]  =  TRUE" << endl;
		list.push_back(make_tuple(66, 1e-06, "EXP", 0));
	}
	if (boolState[failF_OF_A99] == true)
	{
		//cout << "67 : xx11_OF_A99 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A99]  =  FALSE" << endl;
		list.push_back(make_tuple(67, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A43] == false) && (boolState[required_OF_f_A43] && boolState[relevant_evt_OF_f_A43]))
	{
		//cout << "68 : xx10_OF_f_A43 : FAULT failF  LABEL \"failure in operation f_A43\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A43]  =  TRUE" << endl;
		list.push_back(make_tuple(68, 0, "EXP", 0));
	}
	if (boolState[failF_OF_f_A43] == true)
	{
		//cout << "69 : xx11_OF_f_A43 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_f_A43]  =  FALSE" << endl;
		list.push_back(make_tuple(69, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A44] == false) && (boolState[required_OF_f_A44] && boolState[relevant_evt_OF_f_A44]))
	{
		//cout << "70 : xx10_OF_f_A44 : FAULT failF  LABEL \"failure in operation f_A44\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A44]  =  TRUE" << endl;
		list.push_back(make_tuple(70, 0, "EXP", 0));
	}
	if (boolState[failF_OF_f_A44] == true)
	{
		//cout << "71 : xx11_OF_f_A44 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_f_A44]  =  FALSE" << endl;
		list.push_back(make_tuple(71, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A45] == false) && (boolState[required_OF_f_A45] && boolState[relevant_evt_OF_f_A45]))
	{
		//cout << "72 : xx10_OF_f_A45 : FAULT failF  LABEL \"failure in operation f_A45\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A45]  =  TRUE" << endl;
		list.push_back(make_tuple(72, 0, "EXP", 0));
	}
	if (boolState[failF_OF_f_A45] == true)
	{
		//cout << "73 : xx11_OF_f_A45 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_f_A45]  =  FALSE" << endl;
		list.push_back(make_tuple(73, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A46] == false) && (boolState[required_OF_f_A46] && boolState[relevant_evt_OF_f_A46]))
	{
		//cout << "74 : xx10_OF_f_A46 : FAULT failF  LABEL \"failure in operation f_A46\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A46]  =  TRUE" << endl;
		list.push_back(make_tuple(74, 0, "EXP", 0));
	}
	if (boolState[failF_OF_f_A46] == true)
	{
		//cout << "75 : xx11_OF_f_A46 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_f_A46]  =  FALSE" << endl;
		list.push_back(make_tuple(75, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A47] == false) && (boolState[required_OF_f_A47] && boolState[relevant_evt_OF_f_A47]))
	{
		//cout << "76 : xx10_OF_f_A47 : FAULT failF  LABEL \"failure in operation f_A47\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A47]  =  TRUE" << endl;
		list.push_back(make_tuple(76, 0, "EXP", 0));
	}
	if (boolState[failF_OF_f_A47] == true)
	{
		//cout << "77 : xx11_OF_f_A47 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_f_A47]  =  FALSE" << endl;
		list.push_back(make_tuple(77, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A48] == false) && (boolState[required_OF_f_A48] && boolState[relevant_evt_OF_f_A48]))
	{
		//cout << "78 : xx10_OF_f_A48 : FAULT failF  LABEL \"failure in operation f_A48\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A48]  =  TRUE" << endl;
		list.push_back(make_tuple(78, 0, "EXP", 0));
	}
	if (boolState[failF_OF_f_A48] == true)
	{
		//cout << "79 : xx11_OF_f_A48 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_f_A48]  =  FALSE" << endl;
		list.push_back(make_tuple(79, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A49] == false) && (boolState[required_OF_f_A49] && boolState[relevant_evt_OF_f_A49]))
	{
		//cout << "80 : xx10_OF_f_A49 : FAULT failF  LABEL \"failure in operation f_A49\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A49]  =  TRUE" << endl;
		list.push_back(make_tuple(80, 0, "EXP", 0));
	}
	if (boolState[failF_OF_f_A49] == true)
	{
		//cout << "81 : xx11_OF_f_A49 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_f_A49]  =  FALSE" << endl;
		list.push_back(make_tuple(81, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A51] == false) && (boolState[required_OF_f_A51] && boolState[relevant_evt_OF_f_A51]))
	{
		//cout << "82 : xx10_OF_f_A51 : FAULT failF  LABEL \"failure in operation f_A51\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A51]  =  TRUE" << endl;
		list.push_back(make_tuple(82, 0, "EXP", 0));
	}
	if (boolState[failF_OF_f_A51] == true)
	{
		//cout << "83 : xx11_OF_f_A51 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_f_A51]  =  FALSE" << endl;
		list.push_back(make_tuple(83, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A52] == false) && (boolState[required_OF_f_A52] && boolState[relevant_evt_OF_f_A52]))
	{
		//cout << "84 : xx10_OF_f_A52 : FAULT failF  LABEL \"failure in operation f_A52\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A52]  =  TRUE" << endl;
		list.push_back(make_tuple(84, 0, "EXP", 0));
	}
	if (boolState[failF_OF_f_A52] == true)
	{
		//cout << "85 : xx11_OF_f_A52 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_f_A52]  =  FALSE" << endl;
		list.push_back(make_tuple(85, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A54] == false) && (boolState[required_OF_f_A54] && boolState[relevant_evt_OF_f_A54]))
	{
		//cout << "86 : xx10_OF_f_A54 : FAULT failF  LABEL \"failure in operation f_A54\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A54]  =  TRUE" << endl;
		list.push_back(make_tuple(86, 0, "EXP", 0));
	}
	if (boolState[failF_OF_f_A54] == true)
	{
		//cout << "87 : xx11_OF_f_A54 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_f_A54]  =  FALSE" << endl;
		list.push_back(make_tuple(87, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A55] == false) && (boolState[required_OF_f_A55] && boolState[relevant_evt_OF_f_A55]))
	{
		//cout << "88 : xx10_OF_f_A55 : FAULT failF  LABEL \"failure in operation f_A55\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A55]  =  TRUE" << endl;
		list.push_back(make_tuple(88, 0, "EXP", 0));
	}
	if (boolState[failF_OF_f_A55] == true)
	{
		//cout << "89 : xx11_OF_f_A55 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_f_A55]  =  FALSE" << endl;
		list.push_back(make_tuple(89, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A57] == false) && (boolState[required_OF_f_A57] && boolState[relevant_evt_OF_f_A57]))
	{
		//cout << "90 : xx10_OF_f_A57 : FAULT failF  LABEL \"failure in operation f_A57\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A57]  =  TRUE" << endl;
		list.push_back(make_tuple(90, 0, "EXP", 0));
	}
	if (boolState[failF_OF_f_A57] == true)
	{
		//cout << "91 : xx11_OF_f_A57 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_f_A57]  =  FALSE" << endl;
		list.push_back(make_tuple(91, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A58] == false) && (boolState[required_OF_f_A58] && boolState[relevant_evt_OF_f_A58]))
	{
		//cout << "92 : xx10_OF_f_A58 : FAULT failF  LABEL \"failure in operation f_A58\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A58]  =  TRUE" << endl;
		list.push_back(make_tuple(92, 0, "EXP", 0));
	}
	if (boolState[failF_OF_f_A58] == true)
	{
		//cout << "93 : xx11_OF_f_A58 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_f_A58]  =  FALSE" << endl;
		list.push_back(make_tuple(93, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A59] == false) && (boolState[required_OF_f_A59] && boolState[relevant_evt_OF_f_A59]))
	{
		//cout << "94 : xx10_OF_f_A59 : FAULT failF  LABEL \"failure in operation f_A59\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A59]  =  TRUE" << endl;
		list.push_back(make_tuple(94, 0, "EXP", 0));
	}
	if (boolState[failF_OF_f_A59] == true)
	{
		//cout << "95 : xx11_OF_f_A59 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_f_A59]  =  FALSE" << endl;
		list.push_back(make_tuple(95, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A60] == false) && (boolState[required_OF_f_A60] && boolState[relevant_evt_OF_f_A60]))
	{
		//cout << "96 : xx10_OF_f_A60 : FAULT failF  LABEL \"failure in operation f_A60\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A60]  =  TRUE" << endl;
		list.push_back(make_tuple(96, 0, "EXP", 0));
	}
	if (boolState[failF_OF_f_A60] == true)
	{
		//cout << "97 : xx11_OF_f_A60 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_f_A60]  =  FALSE" << endl;
		list.push_back(make_tuple(97, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A61] == false) && (boolState[required_OF_f_A61] && boolState[relevant_evt_OF_f_A61]))
	{
		//cout << "98 : xx10_OF_f_A61 : FAULT failF  LABEL \"failure in operation f_A61\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A61]  =  TRUE" << endl;
		list.push_back(make_tuple(98, 0, "EXP", 0));
	}
	if (boolState[failF_OF_f_A61] == true)
	{
		//cout << "99 : xx11_OF_f_A61 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_f_A61]  =  FALSE" << endl;
		list.push_back(make_tuple(99, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A62] == false) && (boolState[required_OF_f_A62] && boolState[relevant_evt_OF_f_A62]))
	{
		//cout << "100 : xx10_OF_f_A62 : FAULT failF  LABEL \"failure in operation f_A62\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A62]  =  TRUE" << endl;
		list.push_back(make_tuple(100, 0, "EXP", 0));
	}
	if (boolState[failF_OF_f_A62] == true)
	{
		//cout << "101 : xx11_OF_f_A62 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_f_A62]  =  FALSE" << endl;
		list.push_back(make_tuple(101, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A63] == false) && (boolState[required_OF_f_A63] && boolState[relevant_evt_OF_f_A63]))
	{
		//cout << "102 : xx10_OF_f_A63 : FAULT failF  LABEL \"failure in operation f_A63\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A63]  =  TRUE" << endl;
		list.push_back(make_tuple(102, 0, "EXP", 0));
	}
	if (boolState[failF_OF_f_A63] == true)
	{
		//cout << "103 : xx11_OF_f_A63 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_f_A63]  =  FALSE" << endl;
		list.push_back(make_tuple(103, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A64] == false) && (boolState[required_OF_f_A64] && boolState[relevant_evt_OF_f_A64]))
	{
		//cout << "104 : xx10_OF_f_A64 : FAULT failF  LABEL \"failure in operation f_A64\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A64]  =  TRUE" << endl;
		list.push_back(make_tuple(104, 0, "EXP", 0));
	}
	if (boolState[failF_OF_f_A64] == true)
	{
		//cout << "105 : xx11_OF_f_A64 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_f_A64]  =  FALSE" << endl;
		list.push_back(make_tuple(105, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A65] == false) && (boolState[required_OF_f_A65] && boolState[relevant_evt_OF_f_A65]))
	{
		//cout << "106 : xx10_OF_f_A65 : FAULT failF  LABEL \"failure in operation f_A65\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A65]  =  TRUE" << endl;
		list.push_back(make_tuple(106, 0, "EXP", 0));
	}
	if (boolState[failF_OF_f_A65] == true)
	{
		//cout << "107 : xx11_OF_f_A65 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_f_A65]  =  FALSE" << endl;
		list.push_back(make_tuple(107, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A66] == false) && (boolState[required_OF_f_A66] && boolState[relevant_evt_OF_f_A66]))
	{
		//cout << "108 : xx10_OF_f_A66 : FAULT failF  LABEL \"failure in operation f_A66\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A66]  =  TRUE" << endl;
		list.push_back(make_tuple(108, 0, "EXP", 0));
	}
	if (boolState[failF_OF_f_A66] == true)
	{
		//cout << "109 : xx11_OF_f_A66 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_f_A66]  =  FALSE" << endl;
		list.push_back(make_tuple(109, 0.1, "EXP", 0));
	}
	if (boolState[failI_OF_i_A43] == true)
	{
		//cout << "112 : xx24_OF_i_A43 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failI_OF_i_A43]  =  FALSE" << endl;
		list.push_back(make_tuple(112, 0.1, "EXP", 0));
	}
	if (boolState[failI_OF_i_A44] == true)
	{
		//cout << "115 : xx24_OF_i_A44 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failI_OF_i_A44]  =  FALSE" << endl;
		list.push_back(make_tuple(115, 0.1, "EXP", 0));
	}
	if (boolState[failI_OF_i_A45] == true)
	{
		//cout << "118 : xx24_OF_i_A45 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failI_OF_i_A45]  =  FALSE" << endl;
		list.push_back(make_tuple(118, 0.1, "EXP", 0));
	}
	if (boolState[failI_OF_i_A46] == true)
	{
		//cout << "121 : xx24_OF_i_A46 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failI_OF_i_A46]  =  FALSE" << endl;
		list.push_back(make_tuple(121, 0.1, "EXP", 0));
	}
	if (boolState[failI_OF_i_A47] == true)
	{
		//cout << "124 : xx24_OF_i_A47 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failI_OF_i_A47]  =  FALSE" << endl;
		list.push_back(make_tuple(124, 0.1, "EXP", 0));
	}
	if (boolState[failI_OF_i_A48] == true)
	{
		//cout << "127 : xx24_OF_i_A48 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failI_OF_i_A48]  =  FALSE" << endl;
		list.push_back(make_tuple(127, 0.1, "EXP", 0));
	}
	if (boolState[failI_OF_i_A49] == true)
	{
		//cout << "130 : xx24_OF_i_A49 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failI_OF_i_A49]  =  FALSE" << endl;
		list.push_back(make_tuple(130, 0.1, "EXP", 0));
	}
	if (boolState[failI_OF_i_A51] == true)
	{
		//cout << "133 : xx24_OF_i_A51 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failI_OF_i_A51]  =  FALSE" << endl;
		list.push_back(make_tuple(133, 0.1, "EXP", 0));
	}
	if (boolState[failI_OF_i_A52] == true)
	{
		//cout << "136 : xx24_OF_i_A52 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failI_OF_i_A52]  =  FALSE" << endl;
		list.push_back(make_tuple(136, 0.1, "EXP", 0));
	}
	if (boolState[failI_OF_i_A54] == true)
	{
		//cout << "139 : xx24_OF_i_A54 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failI_OF_i_A54]  =  FALSE" << endl;
		list.push_back(make_tuple(139, 0.1, "EXP", 0));
	}
	if (boolState[failI_OF_i_A55] == true)
	{
		//cout << "142 : xx24_OF_i_A55 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failI_OF_i_A55]  =  FALSE" << endl;
		list.push_back(make_tuple(142, 0.1, "EXP", 0));
	}
	if (boolState[failI_OF_i_A57] == true)
	{
		//cout << "145 : xx24_OF_i_A57 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failI_OF_i_A57]  =  FALSE" << endl;
		list.push_back(make_tuple(145, 0.1, "EXP", 0));
	}
	if (boolState[failI_OF_i_A58] == true)
	{
		//cout << "148 : xx24_OF_i_A58 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failI_OF_i_A58]  =  FALSE" << endl;
		list.push_back(make_tuple(148, 0.1, "EXP", 0));
	}
	if (boolState[failI_OF_i_A59] == true)
	{
		//cout << "151 : xx24_OF_i_A59 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failI_OF_i_A59]  =  FALSE" << endl;
		list.push_back(make_tuple(151, 0.1, "EXP", 0));
	}
	if (boolState[failI_OF_i_A60] == true)
	{
		//cout << "154 : xx24_OF_i_A60 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failI_OF_i_A60]  =  FALSE" << endl;
		list.push_back(make_tuple(154, 0.1, "EXP", 0));
	}
	if (boolState[failI_OF_i_A61] == true)
	{
		//cout << "157 : xx24_OF_i_A61 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failI_OF_i_A61]  =  FALSE" << endl;
		list.push_back(make_tuple(157, 0.1, "EXP", 0));
	}
	if (boolState[failI_OF_i_A62] == true)
	{
		//cout << "160 : xx24_OF_i_A62 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failI_OF_i_A62]  =  FALSE" << endl;
		list.push_back(make_tuple(160, 0.1, "EXP", 0));
	}
	if (boolState[failI_OF_i_A63] == true)
	{
		//cout << "163 : xx24_OF_i_A63 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failI_OF_i_A63]  =  FALSE" << endl;
		list.push_back(make_tuple(163, 0.1, "EXP", 0));
	}
	if (boolState[failI_OF_i_A64] == true)
	{
		//cout << "166 : xx24_OF_i_A64 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failI_OF_i_A64]  =  FALSE" << endl;
		list.push_back(make_tuple(166, 0.1, "EXP", 0));
	}
	if (boolState[failI_OF_i_A65] == true)
	{
		//cout << "169 : xx24_OF_i_A65 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failI_OF_i_A65]  =  FALSE" << endl;
		list.push_back(make_tuple(169, 0.1, "EXP", 0));
	}
	if (boolState[failI_OF_i_A66] == true)
	{
		//cout << "172 : xx24_OF_i_A66 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failI_OF_i_A66]  =  FALSE" << endl;
		list.push_back(make_tuple(172, 0.1, "EXP", 0));
	}
	return list;
}


void storm::figaro::FigaroProgram_vgs_5_Trim_Article_repair::runOnceInteractionStep_initialization()
{
	if (boolState[failF_OF_A1] == true )
	{
		boolState[S_OF_A1]  =  true;
	}

	if (boolState[failF_OF_A10] == true )
	{
		boolState[S_OF_A10]  =  true;
	}

	if (boolState[failF_OF_A102] == true )
	{
		boolState[S_OF_A102]  =  true;
	}

	if (boolState[failF_OF_A103] == true )
	{
		boolState[S_OF_A103]  =  true;
	}

	if (boolState[failF_OF_A104] == true )
	{
		boolState[S_OF_A104]  =  true;
	}

	if (boolState[failF_OF_A13] == true )
	{
		boolState[S_OF_A13]  =  true;
	}

	if (boolState[failF_OF_A16] == true )
	{
		boolState[S_OF_A16]  =  true;
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

	if (boolState[failF_OF_A29] == true )
	{
		boolState[S_OF_A29]  =  true;
	}

	if (boolState[failF_OF_A33] == true )
	{
		boolState[S_OF_A33]  =  true;
	}

	if (boolState[failF_OF_A36] == true )
	{
		boolState[S_OF_A36]  =  true;
	}

	if (boolState[failF_OF_A39] == true )
	{
		boolState[S_OF_A39]  =  true;
	}

	if (boolState[failF_OF_A4] == true )
	{
		boolState[S_OF_A4]  =  true;
	}

	if (boolState[failF_OF_A67] == true )
	{
		boolState[S_OF_A67]  =  true;
	}

	if (boolState[failF_OF_A68] == true )
	{
		boolState[S_OF_A68]  =  true;
	}

	if (boolState[failF_OF_A7] == true )
	{
		boolState[S_OF_A7]  =  true;
	}

	if (boolState[failF_OF_A75] == true )
	{
		boolState[S_OF_A75]  =  true;
	}

	if (boolState[failF_OF_A76] == true )
	{
		boolState[S_OF_A76]  =  true;
	}

	if (boolState[failF_OF_A77] == true )
	{
		boolState[S_OF_A77]  =  true;
	}

	if (boolState[failF_OF_A80] == true )
	{
		boolState[S_OF_A80]  =  true;
	}

	if (boolState[failF_OF_A81] == true )
	{
		boolState[S_OF_A81]  =  true;
	}

	if (boolState[failF_OF_A82] == true )
	{
		boolState[S_OF_A82]  =  true;
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

	if (boolState[failF_OF_A97] == true )
	{
		boolState[S_OF_A97]  =  true;
	}

	if (boolState[failF_OF_A98] == true )
	{
		boolState[S_OF_A98]  =  true;
	}

	if (boolState[failF_OF_A99] == true )
	{
		boolState[S_OF_A99]  =  true;
	}

	if (boolState[failF_OF_f_A43] == true )
	{
		boolState[S_OF_f_A43]  =  true;
	}

	if (boolState[failF_OF_f_A44] == true )
	{
		boolState[S_OF_f_A44]  =  true;
	}

	if (boolState[failF_OF_f_A45] == true )
	{
		boolState[S_OF_f_A45]  =  true;
	}

	if (boolState[failF_OF_f_A46] == true )
	{
		boolState[S_OF_f_A46]  =  true;
	}

	if (boolState[failF_OF_f_A47] == true )
	{
		boolState[S_OF_f_A47]  =  true;
	}

	if (boolState[failF_OF_f_A48] == true )
	{
		boolState[S_OF_f_A48]  =  true;
	}

	if (boolState[failF_OF_f_A49] == true )
	{
		boolState[S_OF_f_A49]  =  true;
	}

	if (boolState[failF_OF_f_A51] == true )
	{
		boolState[S_OF_f_A51]  =  true;
	}

	if (boolState[failF_OF_f_A52] == true )
	{
		boolState[S_OF_f_A52]  =  true;
	}

	if (boolState[failF_OF_f_A54] == true )
	{
		boolState[S_OF_f_A54]  =  true;
	}

	if (boolState[failF_OF_f_A55] == true )
	{
		boolState[S_OF_f_A55]  =  true;
	}

	if (boolState[failF_OF_f_A57] == true )
	{
		boolState[S_OF_f_A57]  =  true;
	}

	if (boolState[failF_OF_f_A58] == true )
	{
		boolState[S_OF_f_A58]  =  true;
	}

	if (boolState[failF_OF_f_A59] == true )
	{
		boolState[S_OF_f_A59]  =  true;
	}

	if (boolState[failF_OF_f_A60] == true )
	{
		boolState[S_OF_f_A60]  =  true;
	}

	if (boolState[failF_OF_f_A61] == true )
	{
		boolState[S_OF_f_A61]  =  true;
	}

	if (boolState[failF_OF_f_A62] == true )
	{
		boolState[S_OF_f_A62]  =  true;
	}

	if (boolState[failF_OF_f_A63] == true )
	{
		boolState[S_OF_f_A63]  =  true;
	}

	if (boolState[failF_OF_f_A64] == true )
	{
		boolState[S_OF_f_A64]  =  true;
	}

	if (boolState[failF_OF_f_A65] == true )
	{
		boolState[S_OF_f_A65]  =  true;
	}

	if (boolState[failF_OF_f_A66] == true )
	{
		boolState[S_OF_f_A66]  =  true;
	}

	if (boolState[failI_OF_i_A43] == true )
	{
		boolState[S_OF_i_A43]  =  true;
	}

	if (boolState[failI_OF_i_A44] == true )
	{
		boolState[S_OF_i_A44]  =  true;
	}

	if (boolState[failI_OF_i_A45] == true )
	{
		boolState[S_OF_i_A45]  =  true;
	}

	if (boolState[failI_OF_i_A46] == true )
	{
		boolState[S_OF_i_A46]  =  true;
	}

	if (boolState[failI_OF_i_A47] == true )
	{
		boolState[S_OF_i_A47]  =  true;
	}

	if (boolState[failI_OF_i_A48] == true )
	{
		boolState[S_OF_i_A48]  =  true;
	}

	if (boolState[failI_OF_i_A49] == true )
	{
		boolState[S_OF_i_A49]  =  true;
	}

	if (boolState[failI_OF_i_A51] == true )
	{
		boolState[S_OF_i_A51]  =  true;
	}

	if (boolState[failI_OF_i_A52] == true )
	{
		boolState[S_OF_i_A52]  =  true;
	}

	if (boolState[failI_OF_i_A54] == true )
	{
		boolState[S_OF_i_A54]  =  true;
	}

	if (boolState[failI_OF_i_A55] == true )
	{
		boolState[S_OF_i_A55]  =  true;
	}

	if (boolState[failI_OF_i_A57] == true )
	{
		boolState[S_OF_i_A57]  =  true;
	}

	if (boolState[failI_OF_i_A58] == true )
	{
		boolState[S_OF_i_A58]  =  true;
	}

	if (boolState[failI_OF_i_A59] == true )
	{
		boolState[S_OF_i_A59]  =  true;
	}

	if (boolState[failI_OF_i_A60] == true )
	{
		boolState[S_OF_i_A60]  =  true;
	}

	if (boolState[failI_OF_i_A61] == true )
	{
		boolState[S_OF_i_A61]  =  true;
	}

	if (boolState[failI_OF_i_A62] == true )
	{
		boolState[S_OF_i_A62]  =  true;
	}

	if (boolState[failI_OF_i_A63] == true )
	{
		boolState[S_OF_i_A63]  =  true;
	}

	if (boolState[failI_OF_i_A64] == true )
	{
		boolState[S_OF_i_A64]  =  true;
	}

	if (boolState[failI_OF_i_A65] == true )
	{
		boolState[S_OF_i_A65]  =  true;
	}

	if (boolState[failI_OF_i_A66] == true )
	{
		boolState[S_OF_i_A66]  =  true;
	}

}


void storm::figaro::FigaroProgram_vgs_5_Trim_Article_repair::runOnceInteractionStep_propagate_effect_S()
{
	if (((((((boolState[S_OF_A2] || boolState[S_OF_A23]) || boolState[S_OF_A26]) || boolState[S_OF_A31]) || boolState[S_OF_A34]) || boolState[S_OF_A37]) || boolState[S_OF_A41]) || boolState[S_OF_A72] )
	{
		boolState[S_OF_A0]  =  true;
	}

	if (boolState[S_OF_A97] && boolState[S_OF_A99] )
	{
		boolState[S_OF_A100]  =  true;
	}

	if (boolState[S_OF_A102] && boolState[S_OF_A104] )
	{
		boolState[S_OF_A105]  =  true;
	}

	if (((boolState[S_OF_A100] || boolState[S_OF_A103]) || boolState[S_OF_A105]) || boolState[S_OF_A98] )
	{
		boolState[S_OF_A107]  =  true;
	}

	if ((((boolState[S_OF_A10] || boolState[S_OF_A107]) || boolState[S_OF_A46]) || boolState[S_OF_A61]) || boolState[S_OF_A85] )
	{
		boolState[S_OF_A11]  =  true;
	}

	if ((((boolState[S_OF_A107] || boolState[S_OF_A13]) || boolState[S_OF_A45]) || boolState[S_OF_A54]) || boolState[S_OF_A85] )
	{
		boolState[S_OF_A14]  =  true;
	}

	if ((((boolState[S_OF_A107] || boolState[S_OF_A16]) || boolState[S_OF_A48]) || boolState[S_OF_A62]) || boolState[S_OF_A85] )
	{
		boolState[S_OF_A17]  =  true;
	}

	if (boolState[S_OF_A30] )
	{
		boolState[S_OF_A2]  =  true;
	}

	if ((((boolState[S_OF_A107] || boolState[S_OF_A19]) || boolState[S_OF_A47]) || boolState[S_OF_A57]) || boolState[S_OF_A85] )
	{
		boolState[S_OF_A20]  =  true;
	}

	if (((boolState[S_OF_A22] || boolState[S_OF_A59]) || boolState[S_OF_A74]) || boolState[S_OF_A96] )
	{
		boolState[S_OF_A23]  =  true;
	}

	if (((((((boolState[S_OF_A107] || boolState[S_OF_A25]) || boolState[S_OF_A58]) || boolState[S_OF_A63]) || boolState[S_OF_A64]) || boolState[S_OF_A65]) || boolState[S_OF_A66]) || boolState[S_OF_A96] )
	{
		boolState[S_OF_A26]  =  true;
	}

	if ((3 <= (boolState[S_OF_A1] + boolState[S_OF_A29] + boolState[S_OF_A67] + boolState[S_OF_A68])) )
	{
		boolState[S_OF_A30]  =  true;
	}

	if (boolState[S_OF_A28] || boolState[S_OF_A96] )
	{
		boolState[S_OF_A31]  =  true;
	}

	if (boolState[S_OF_A33] )
	{
		boolState[S_OF_A34]  =  true;
	}

	if (boolState[S_OF_A36] )
	{
		boolState[S_OF_A37]  =  true;
	}

	if (boolState[S_OF_A17] || boolState[S_OF_A20] )
	{
		boolState[S_OF_A40]  =  true;
	}

	if (boolState[S_OF_A39] )
	{
		boolState[S_OF_A41]  =  true;
	}

	if (boolState[S_OF_f_A43] || boolState[S_OF_i_A43] )
	{
		boolState[S_OF_A43]  =  true;
	}

	if (boolState[S_OF_f_A44] || boolState[S_OF_i_A44] )
	{
		boolState[S_OF_A44]  =  true;
	}

	if (boolState[S_OF_f_A45] || boolState[S_OF_i_A45] )
	{
		boolState[S_OF_A45]  =  true;
	}

	if (boolState[S_OF_f_A46] || boolState[S_OF_i_A46] )
	{
		boolState[S_OF_A46]  =  true;
	}

	if (boolState[S_OF_f_A47] || boolState[S_OF_i_A47] )
	{
		boolState[S_OF_A47]  =  true;
	}

	if (boolState[S_OF_f_A48] || boolState[S_OF_i_A48] )
	{
		boolState[S_OF_A48]  =  true;
	}

	if (boolState[S_OF_f_A49] || boolState[S_OF_i_A49] )
	{
		boolState[S_OF_A49]  =  true;
	}

	if ((((boolState[S_OF_A107] || boolState[S_OF_A4]) || boolState[S_OF_A44]) || boolState[S_OF_A60]) || boolState[S_OF_A85] )
	{
		boolState[S_OF_A5]  =  true;
	}

	if (boolState[S_OF_A107] || boolState[S_OF_A49] )
	{
		boolState[S_OF_A50]  =  true;
	}

	if (boolState[S_OF_f_A51] || boolState[S_OF_i_A51] )
	{
		boolState[S_OF_A51]  =  true;
	}

	if (boolState[S_OF_f_A52] || boolState[S_OF_i_A52] )
	{
		boolState[S_OF_A52]  =  true;
	}

	if (boolState[S_OF_A107] || boolState[S_OF_A52] )
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

	if (boolState[S_OF_A107] || boolState[S_OF_A55] )
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

	if (boolState[S_OF_f_A59] || boolState[S_OF_i_A59] )
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

	if (boolState[S_OF_f_A62] || boolState[S_OF_i_A62] )
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

	if (boolState[S_OF_f_A65] || boolState[S_OF_i_A65] )
	{
		boolState[S_OF_A65]  =  true;
	}

	if (boolState[S_OF_f_A66] || boolState[S_OF_i_A66] )
	{
		boolState[S_OF_A66]  =  true;
	}

	if (boolState[S_OF_A5] || boolState[S_OF_A8] )
	{
		boolState[S_OF_A69]  =  true;
	}

	if (boolState[S_OF_A11] || boolState[S_OF_A14] )
	{
		boolState[S_OF_A70]  =  true;
	}

	if (boolState[S_OF_A40] && boolState[S_OF_A70] )
	{
		boolState[S_OF_A71]  =  true;
	}

	if (boolState[S_OF_A69] && boolState[S_OF_A71] )
	{
		boolState[S_OF_A72]  =  true;
	}

	if (boolState[S_OF_A53] && boolState[S_OF_A56] )
	{
		boolState[S_OF_A73]  =  true;
	}

	if (boolState[S_OF_A50] && boolState[S_OF_A73] )
	{
		boolState[S_OF_A74]  =  true;
	}

	if (boolState[S_OF_A75] && boolState[S_OF_A77] )
	{
		boolState[S_OF_A78]  =  true;
	}

	if ((((boolState[S_OF_A107] || boolState[S_OF_A43]) || boolState[S_OF_A51]) || boolState[S_OF_A7]) || boolState[S_OF_A85] )
	{
		boolState[S_OF_A8]  =  true;
	}

	if (boolState[S_OF_A80] && boolState[S_OF_A82] )
	{
		boolState[S_OF_A83]  =  true;
	}

	if (((boolState[S_OF_A76] || boolState[S_OF_A78]) || boolState[S_OF_A81]) || boolState[S_OF_A83] )
	{
		boolState[S_OF_A85]  =  true;
	}

	if (boolState[S_OF_A86] && boolState[S_OF_A88] )
	{
		boolState[S_OF_A89]  =  true;
	}

	if (boolState[S_OF_A91] && boolState[S_OF_A93] )
	{
		boolState[S_OF_A94]  =  true;
	}

	if (((boolState[S_OF_A87] || boolState[S_OF_A89]) || boolState[S_OF_A92]) || boolState[S_OF_A94] )
	{
		boolState[S_OF_A96]  =  true;
	}

	if (boolState[S_OF_A0] )
	{
		boolState[S_OF_UE_1]  =  true;
	}

}


void storm::figaro::FigaroProgram_vgs_5_Trim_Article_repair::runOnceInteractionStep_propagate_effect_required()
{
	if ( !boolState[required_OF_UE_1] )
	{
		boolState[required_OF_A0]  =  false;
	}

	if (boolState[relevant_evt_OF_UE_1] && ( !boolState[S_OF_UE_1]) )
	{
		boolState[relevant_evt_OF_A0]  =  true;
	}

	if ( !boolState[required_OF_A30] )
	{
		boolState[required_OF_A1]  =  false;
	}

	if (boolState[relevant_evt_OF_A30] && ( !boolState[S_OF_A30]) )
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

	if ( !boolState[required_OF_A107] )
	{
		boolState[required_OF_A100]  =  false;
	}

	if (boolState[relevant_evt_OF_A107] && ( !boolState[S_OF_A107]) )
	{
		boolState[relevant_evt_OF_A100]  =  true;
	}

	if ( !boolState[S_OF_A104] )
	{
		boolState[required_OF_A102]  =  false;
	}

	if (boolState[relevant_evt_OF_A105] && ( !boolState[S_OF_A105]) )
	{
		boolState[relevant_evt_OF_A102]  =  true;
	}

	if ( !boolState[required_OF_A107] )
	{
		boolState[required_OF_A103]  =  false;
	}

	if (boolState[relevant_evt_OF_A107] && ( !boolState[S_OF_A107]) )
	{
		boolState[relevant_evt_OF_A103]  =  true;
	}

	if ( !boolState[required_OF_A105] )
	{
		boolState[required_OF_A104]  =  false;
	}

	if ((boolState[relevant_evt_OF_A105] && ( !boolState[S_OF_A105])) || ( !boolState[S_OF_A102]) )
	{
		boolState[relevant_evt_OF_A104]  =  true;
	}

	if ( !boolState[required_OF_A107] )
	{
		boolState[required_OF_A105]  =  false;
	}

	if (boolState[relevant_evt_OF_A107] && ( !boolState[S_OF_A107]) )
	{
		boolState[relevant_evt_OF_A105]  =  true;
	}

	if (((((((((( !boolState[required_OF_A11]) && ( !boolState[required_OF_A14])) && ( !boolState[required_OF_A17])) && ( !boolState[required_OF_A20])) && ( !  boolState[required_OF_A26])) && ( !boolState[required_OF_A5])) && ( !  boolState[required_OF_A50])) && ( !boolState[required_OF_A53])) && ( !  boolState[required_OF_A56])) && ( !boolState[required_OF_A8]) )
	{
		boolState[required_OF_A107]  =  false;
	}

	if ((((((((((boolState[relevant_evt_OF_A11] && ( !boolState[S_OF_A11])) || (  boolState[relevant_evt_OF_A14] && ( !boolState[S_OF_A14]))) || (boolState[relevant_evt_OF_A17] && ( !boolState[S_OF_A17]))) || (boolState[relevant_evt_OF_A20] && ( !boolState[S_OF_A20]))) || (boolState[relevant_evt_OF_A26] && ( !boolState[S_OF_A26]))) || (  boolState[relevant_evt_OF_A5] && ( !boolState[S_OF_A5]))) || (boolState[relevant_evt_OF_A50] && ( !boolState[S_OF_A50]))) || (boolState[relevant_evt_OF_A53] && ( !boolState[S_OF_A53]))) || (boolState[relevant_evt_OF_A56] && ( !boolState[S_OF_A56]))) || (  boolState[relevant_evt_OF_A8] && ( !boolState[S_OF_A8])) )
	{
		boolState[relevant_evt_OF_A107]  =  true;
	}

	if ( !boolState[required_OF_A70] )
	{
		boolState[required_OF_A11]  =  false;
	}

	if ((boolState[relevant_evt_OF_A70] && ( !boolState[S_OF_A70])) || ( !boolState[S_OF_i_A45]) )
	{
		boolState[relevant_evt_OF_A11]  =  true;
	}

	if ( !boolState[required_OF_A14] )
	{
		boolState[required_OF_A13]  =  false;
	}

	if (boolState[relevant_evt_OF_A14] && ( !boolState[S_OF_A14]) )
	{
		boolState[relevant_evt_OF_A13]  =  true;
	}

	if ( !boolState[required_OF_A70] )
	{
		boolState[required_OF_A14]  =  false;
	}

	if ((boolState[relevant_evt_OF_A70] && ( !boolState[S_OF_A70])) || (( !boolState[S_OF_i_A46])   || ( !boolState[S_OF_i_A52])) )
	{
		boolState[relevant_evt_OF_A14]  =  true;
	}

	if ( !boolState[required_OF_A17] )
	{
		boolState[required_OF_A16]  =  false;
	}

	if (boolState[relevant_evt_OF_A17] && ( !boolState[S_OF_A17]) )
	{
		boolState[relevant_evt_OF_A16]  =  true;
	}

	if ( !boolState[required_OF_A40] )
	{
		boolState[required_OF_A17]  =  false;
	}

	if ((boolState[relevant_evt_OF_A40] && ( !boolState[S_OF_A40])) || ( !boolState[S_OF_i_A47]) )
	{
		boolState[relevant_evt_OF_A17]  =  true;
	}

	if ( !boolState[required_OF_A20] )
	{
		boolState[required_OF_A19]  =  false;
	}

	if (boolState[relevant_evt_OF_A20] && ( !boolState[S_OF_A20]) )
	{
		boolState[relevant_evt_OF_A19]  =  true;
	}

	if ( !boolState[required_OF_A0] )
	{
		boolState[required_OF_A2]  =  false;
	}

	if ((boolState[relevant_evt_OF_A0] && ( !boolState[S_OF_A0])) || ((( !boolState[S_OF_i_A60]) || ( !boolState[S_OF_i_A61])) || ( !boolState[S_OF_i_A62])) )
	{
		boolState[relevant_evt_OF_A2]  =  true;
	}

	if ( !boolState[required_OF_A40] )
	{
		boolState[required_OF_A20]  =  false;
	}

	if ((boolState[relevant_evt_OF_A40] && ( !boolState[S_OF_A40])) || (( !boolState[S_OF_i_A48])   || ( !boolState[S_OF_i_A55])) )
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

	if ((boolState[relevant_evt_OF_A0] && ( !boolState[S_OF_A0])) || (((( !boolState[S_OF_i_A51])   || ( !boolState[S_OF_i_A54])) || ( !boolState[S_OF_i_A57])) || ( !boolState[S_OF_i_A58])) )
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

	if ((boolState[relevant_evt_OF_A0] && ( !boolState[S_OF_A0])) || ( !boolState[S_OF_i_A59]) )
	{
		boolState[relevant_evt_OF_A26]  =  true;
	}

	if ( !boolState[required_OF_A31] )
	{
		boolState[required_OF_A28]  =  false;
	}

	if (boolState[relevant_evt_OF_A31] && ( !boolState[S_OF_A31]) )
	{
		boolState[relevant_evt_OF_A28]  =  true;
	}

	if ( !boolState[required_OF_A30] )
	{
		boolState[required_OF_A29]  =  false;
	}

	if (boolState[relevant_evt_OF_A30] && ( !boolState[S_OF_A30]) )
	{
		boolState[relevant_evt_OF_A29]  =  true;
	}

	if ( !boolState[required_OF_A2] )
	{
		boolState[required_OF_A30]  =  false;
	}

	if (boolState[relevant_evt_OF_A2] && ( !boolState[S_OF_A2]) )
	{
		boolState[relevant_evt_OF_A30]  =  true;
	}

	if ( !boolState[required_OF_A0] )
	{
		boolState[required_OF_A31]  =  false;
	}

	if ((boolState[relevant_evt_OF_A0] && ( !boolState[S_OF_A0])) || ( !boolState[S_OF_i_A63]) )
	{
		boolState[relevant_evt_OF_A31]  =  true;
	}

	if ( !boolState[required_OF_A34] )
	{
		boolState[required_OF_A33]  =  false;
	}

	if (boolState[relevant_evt_OF_A34] && ( !boolState[S_OF_A34]) )
	{
		boolState[relevant_evt_OF_A33]  =  true;
	}

	if ( !boolState[required_OF_A0] )
	{
		boolState[required_OF_A34]  =  false;
	}

	if ((boolState[relevant_evt_OF_A0] && ( !boolState[S_OF_A0])) || ( !boolState[S_OF_i_A64]) )
	{
		boolState[relevant_evt_OF_A34]  =  true;
	}

	if ( !boolState[required_OF_A37] )
	{
		boolState[required_OF_A36]  =  false;
	}

	if (boolState[relevant_evt_OF_A37] && ( !boolState[S_OF_A37]) )
	{
		boolState[relevant_evt_OF_A36]  =  true;
	}

	if ( !boolState[required_OF_A0] )
	{
		boolState[required_OF_A37]  =  false;
	}

	if ((boolState[relevant_evt_OF_A0] && ( !boolState[S_OF_A0])) || ( !boolState[S_OF_i_A65]) )
	{
		boolState[relevant_evt_OF_A37]  =  true;
	}

	if ( !boolState[required_OF_A41] )
	{
		boolState[required_OF_A39]  =  false;
	}

	if (boolState[relevant_evt_OF_A41] && ( !boolState[S_OF_A41]) )
	{
		boolState[relevant_evt_OF_A39]  =  true;
	}

	if ( !boolState[required_OF_A5] )
	{
		boolState[required_OF_A4]  =  false;
	}

	if (boolState[relevant_evt_OF_A5] && ( !boolState[S_OF_A5]) )
	{
		boolState[relevant_evt_OF_A4]  =  true;
	}

	if ( !boolState[required_OF_A71] )
	{
		boolState[required_OF_A40]  =  false;
	}

	if (boolState[relevant_evt_OF_A71] && ( !boolState[S_OF_A71]) )
	{
		boolState[relevant_evt_OF_A40]  =  true;
	}

	if ( !boolState[required_OF_A0] )
	{
		boolState[required_OF_A41]  =  false;
	}

	if ((boolState[relevant_evt_OF_A0] && ( !boolState[S_OF_A0])) || ( !boolState[S_OF_i_A66]) )
	{
		boolState[relevant_evt_OF_A41]  =  true;
	}

	if ( !boolState[required_OF_A8] )
	{
		boolState[required_OF_A43]  =  false;
	}

	if (boolState[relevant_evt_OF_A8] && ( !boolState[S_OF_A8]) )
	{
		boolState[relevant_evt_OF_A43]  =  true;
	}

	if ( !boolState[required_OF_A5] )
	{
		boolState[required_OF_A44]  =  false;
	}

	if (boolState[relevant_evt_OF_A5] && ( !boolState[S_OF_A5]) )
	{
		boolState[relevant_evt_OF_A44]  =  true;
	}

	if ( !boolState[required_OF_A14] )
	{
		boolState[required_OF_A45]  =  false;
	}

	if (boolState[relevant_evt_OF_A14] && ( !boolState[S_OF_A14]) )
	{
		boolState[relevant_evt_OF_A45]  =  true;
	}

	if ( !boolState[required_OF_A11] )
	{
		boolState[required_OF_A46]  =  false;
	}

	if (boolState[relevant_evt_OF_A11] && ( !boolState[S_OF_A11]) )
	{
		boolState[relevant_evt_OF_A46]  =  true;
	}

	if ( !boolState[required_OF_A20] )
	{
		boolState[required_OF_A47]  =  false;
	}

	if (boolState[relevant_evt_OF_A20] && ( !boolState[S_OF_A20]) )
	{
		boolState[relevant_evt_OF_A47]  =  true;
	}

	if ( !boolState[required_OF_A17] )
	{
		boolState[required_OF_A48]  =  false;
	}

	if (boolState[relevant_evt_OF_A17] && ( !boolState[S_OF_A17]) )
	{
		boolState[relevant_evt_OF_A48]  =  true;
	}

	if ( !boolState[required_OF_A50] )
	{
		boolState[required_OF_A49]  =  false;
	}

	if (boolState[relevant_evt_OF_A50] && ( !boolState[S_OF_A50]) )
	{
		boolState[relevant_evt_OF_A49]  =  true;
	}

	if ( !boolState[required_OF_A69] )
	{
		boolState[required_OF_A5]  =  false;
	}

	if ((boolState[relevant_evt_OF_A69] && ( !boolState[S_OF_A69])) || ( !boolState[S_OF_i_A43]) )
	{
		boolState[relevant_evt_OF_A5]  =  true;
	}

	if ( !boolState[required_OF_A74] )
	{
		boolState[required_OF_A50]  =  false;
	}

	if (boolState[relevant_evt_OF_A74] && ( !boolState[S_OF_A74]) )
	{
		boolState[relevant_evt_OF_A50]  =  true;
	}

	if ( !boolState[required_OF_A8] )
	{
		boolState[required_OF_A51]  =  false;
	}

	if (boolState[relevant_evt_OF_A8] && ( !boolState[S_OF_A8]) )
	{
		boolState[relevant_evt_OF_A51]  =  true;
	}

	if ( !boolState[required_OF_A53] )
	{
		boolState[required_OF_A52]  =  false;
	}

	if (boolState[relevant_evt_OF_A53] && ( !boolState[S_OF_A53]) )
	{
		boolState[relevant_evt_OF_A52]  =  true;
	}

	if ( !boolState[required_OF_A73] )
	{
		boolState[required_OF_A53]  =  false;
	}

	if (boolState[relevant_evt_OF_A73] && ( !boolState[S_OF_A73]) )
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

	if ( !boolState[required_OF_A56] )
	{
		boolState[required_OF_A55]  =  false;
	}

	if (boolState[relevant_evt_OF_A56] && ( !boolState[S_OF_A56]) )
	{
		boolState[relevant_evt_OF_A55]  =  true;
	}

	if ( !boolState[required_OF_A73] )
	{
		boolState[required_OF_A56]  =  false;
	}

	if (boolState[relevant_evt_OF_A73] && ( !boolState[S_OF_A73]) )
	{
		boolState[relevant_evt_OF_A56]  =  true;
	}

	if ( !boolState[required_OF_A20] )
	{
		boolState[required_OF_A57]  =  false;
	}

	if (boolState[relevant_evt_OF_A20] && ( !boolState[S_OF_A20]) )
	{
		boolState[relevant_evt_OF_A57]  =  true;
	}

	if ( !boolState[required_OF_A26] )
	{
		boolState[required_OF_A58]  =  false;
	}

	if (boolState[relevant_evt_OF_A26] && ( !boolState[S_OF_A26]) )
	{
		boolState[relevant_evt_OF_A58]  =  true;
	}

	if ( !boolState[required_OF_A23] )
	{
		boolState[required_OF_A59]  =  false;
	}

	if (boolState[relevant_evt_OF_A23] && ( !boolState[S_OF_A23]) )
	{
		boolState[relevant_evt_OF_A59]  =  true;
	}

	if ( !boolState[required_OF_A5] )
	{
		boolState[required_OF_A60]  =  false;
	}

	if (boolState[relevant_evt_OF_A5] && ( !boolState[S_OF_A5]) )
	{
		boolState[relevant_evt_OF_A60]  =  true;
	}

	if ( !boolState[required_OF_A11] )
	{
		boolState[required_OF_A61]  =  false;
	}

	if (boolState[relevant_evt_OF_A11] && ( !boolState[S_OF_A11]) )
	{
		boolState[relevant_evt_OF_A61]  =  true;
	}

	if ( !boolState[required_OF_A17] )
	{
		boolState[required_OF_A62]  =  false;
	}

	if (boolState[relevant_evt_OF_A17] && ( !boolState[S_OF_A17]) )
	{
		boolState[relevant_evt_OF_A62]  =  true;
	}

	if ( !boolState[required_OF_A26] )
	{
		boolState[required_OF_A63]  =  false;
	}

	if (boolState[relevant_evt_OF_A26] && ( !boolState[S_OF_A26]) )
	{
		boolState[relevant_evt_OF_A63]  =  true;
	}

	if ( !boolState[required_OF_A26] )
	{
		boolState[required_OF_A64]  =  false;
	}

	if (boolState[relevant_evt_OF_A26] && ( !boolState[S_OF_A26]) )
	{
		boolState[relevant_evt_OF_A64]  =  true;
	}

	if ( !boolState[required_OF_A26] )
	{
		boolState[required_OF_A65]  =  false;
	}

	if (boolState[relevant_evt_OF_A26] && ( !boolState[S_OF_A26]) )
	{
		boolState[relevant_evt_OF_A65]  =  true;
	}

	if ( !boolState[required_OF_A26] )
	{
		boolState[required_OF_A66]  =  false;
	}

	if (boolState[relevant_evt_OF_A26] && ( !boolState[S_OF_A26]) )
	{
		boolState[relevant_evt_OF_A66]  =  true;
	}

	if ( !boolState[required_OF_A30] )
	{
		boolState[required_OF_A67]  =  false;
	}

	if (boolState[relevant_evt_OF_A30] && ( !boolState[S_OF_A30]) )
	{
		boolState[relevant_evt_OF_A67]  =  true;
	}

	if ( !boolState[required_OF_A30] )
	{
		boolState[required_OF_A68]  =  false;
	}

	if (boolState[relevant_evt_OF_A30] && ( !boolState[S_OF_A30]) )
	{
		boolState[relevant_evt_OF_A68]  =  true;
	}

	if ( !boolState[required_OF_A72] )
	{
		boolState[required_OF_A69]  =  false;
	}

	if (boolState[relevant_evt_OF_A72] && ( !boolState[S_OF_A72]) )
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

	if ( !boolState[required_OF_A71] )
	{
		boolState[required_OF_A70]  =  false;
	}

	if (boolState[relevant_evt_OF_A71] && ( !boolState[S_OF_A71]) )
	{
		boolState[relevant_evt_OF_A70]  =  true;
	}

	if ( !boolState[required_OF_A72] )
	{
		boolState[required_OF_A71]  =  false;
	}

	if (boolState[relevant_evt_OF_A72] && ( !boolState[S_OF_A72]) )
	{
		boolState[relevant_evt_OF_A71]  =  true;
	}

	if ( !boolState[required_OF_A0] )
	{
		boolState[required_OF_A72]  =  false;
	}

	if (boolState[relevant_evt_OF_A0] && ( !boolState[S_OF_A0]) )
	{
		boolState[relevant_evt_OF_A72]  =  true;
	}

	if ( !boolState[required_OF_A74] )
	{
		boolState[required_OF_A73]  =  false;
	}

	if (boolState[relevant_evt_OF_A74] && ( !boolState[S_OF_A74]) )
	{
		boolState[relevant_evt_OF_A73]  =  true;
	}

	if ( !boolState[required_OF_A23] )
	{
		boolState[required_OF_A74]  =  false;
	}

	if (boolState[relevant_evt_OF_A23] && ( !boolState[S_OF_A23]) )
	{
		boolState[relevant_evt_OF_A74]  =  true;
	}

	if ( !boolState[S_OF_A77] )
	{
		boolState[required_OF_A75]  =  false;
	}

	if (boolState[relevant_evt_OF_A78] && ( !boolState[S_OF_A78]) )
	{
		boolState[relevant_evt_OF_A75]  =  true;
	}

	if ( !boolState[required_OF_A85] )
	{
		boolState[required_OF_A76]  =  false;
	}

	if (boolState[relevant_evt_OF_A85] && ( !boolState[S_OF_A85]) )
	{
		boolState[relevant_evt_OF_A76]  =  true;
	}

	if ( !boolState[required_OF_A78] )
	{
		boolState[required_OF_A77]  =  false;
	}

	if ((boolState[relevant_evt_OF_A78] && ( !boolState[S_OF_A78])) || ( !boolState[S_OF_A75]) )
	{
		boolState[relevant_evt_OF_A77]  =  true;
	}

	if ( !boolState[required_OF_A85] )
	{
		boolState[required_OF_A78]  =  false;
	}

	if (boolState[relevant_evt_OF_A85] && ( !boolState[S_OF_A85]) )
	{
		boolState[relevant_evt_OF_A78]  =  true;
	}

	if ( !boolState[required_OF_A69] )
	{
		boolState[required_OF_A8]  =  false;
	}

	if ((boolState[relevant_evt_OF_A69] && ( !boolState[S_OF_A69])) || (( !boolState[S_OF_i_A44])   || ( !boolState[S_OF_i_A49])) )
	{
		boolState[relevant_evt_OF_A8]  =  true;
	}

	if ( !boolState[S_OF_A82] )
	{
		boolState[required_OF_A80]  =  false;
	}

	if (boolState[relevant_evt_OF_A83] && ( !boolState[S_OF_A83]) )
	{
		boolState[relevant_evt_OF_A80]  =  true;
	}

	if ( !boolState[required_OF_A85] )
	{
		boolState[required_OF_A81]  =  false;
	}

	if (boolState[relevant_evt_OF_A85] && ( !boolState[S_OF_A85]) )
	{
		boolState[relevant_evt_OF_A81]  =  true;
	}

	if ( !boolState[required_OF_A83] )
	{
		boolState[required_OF_A82]  =  false;
	}

	if ((boolState[relevant_evt_OF_A83] && ( !boolState[S_OF_A83])) || ( !boolState[S_OF_A80]) )
	{
		boolState[relevant_evt_OF_A82]  =  true;
	}

	if ( !boolState[required_OF_A85] )
	{
		boolState[required_OF_A83]  =  false;
	}

	if (boolState[relevant_evt_OF_A85] && ( !boolState[S_OF_A85]) )
	{
		boolState[relevant_evt_OF_A83]  =  true;
	}

	if (((((( !boolState[required_OF_A11]) && ( !boolState[required_OF_A14])) && (   !boolState[required_OF_A17])) && ( !boolState[required_OF_A20])) && ( !  boolState[required_OF_A5])) && ( !boolState[required_OF_A8]) )
	{
		boolState[required_OF_A85]  =  false;
	}

	if ((((((boolState[relevant_evt_OF_A11] && ( !boolState[S_OF_A11])) || (  boolState[relevant_evt_OF_A14] && ( !boolState[S_OF_A14]))) || (boolState[relevant_evt_OF_A17] && ( !boolState[S_OF_A17]))) || (boolState[relevant_evt_OF_A20] && ( !boolState[S_OF_A20]))) || (boolState[relevant_evt_OF_A5] && ( !boolState[S_OF_A5]))) || (  boolState[relevant_evt_OF_A8] && ( !boolState[S_OF_A8])) )
	{
		boolState[relevant_evt_OF_A85]  =  true;
	}

	if ( !boolState[S_OF_A88] )
	{
		boolState[required_OF_A86]  =  false;
	}

	if (boolState[relevant_evt_OF_A89] && ( !boolState[S_OF_A89]) )
	{
		boolState[relevant_evt_OF_A86]  =  true;
	}

	if ( !boolState[required_OF_A96] )
	{
		boolState[required_OF_A87]  =  false;
	}

	if (boolState[relevant_evt_OF_A96] && ( !boolState[S_OF_A96]) )
	{
		boolState[relevant_evt_OF_A87]  =  true;
	}

	if ( !boolState[required_OF_A89] )
	{
		boolState[required_OF_A88]  =  false;
	}

	if ((boolState[relevant_evt_OF_A89] && ( !boolState[S_OF_A89])) || ( !boolState[S_OF_A86]) )
	{
		boolState[relevant_evt_OF_A88]  =  true;
	}

	if ( !boolState[required_OF_A96] )
	{
		boolState[required_OF_A89]  =  false;
	}

	if (boolState[relevant_evt_OF_A96] && ( !boolState[S_OF_A96]) )
	{
		boolState[relevant_evt_OF_A89]  =  true;
	}

	if ( !boolState[S_OF_A93] )
	{
		boolState[required_OF_A91]  =  false;
	}

	if (boolState[relevant_evt_OF_A94] && ( !boolState[S_OF_A94]) )
	{
		boolState[relevant_evt_OF_A91]  =  true;
	}

	if ( !boolState[required_OF_A96] )
	{
		boolState[required_OF_A92]  =  false;
	}

	if (boolState[relevant_evt_OF_A96] && ( !boolState[S_OF_A96]) )
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

	if ( !boolState[required_OF_A96] )
	{
		boolState[required_OF_A94]  =  false;
	}

	if (boolState[relevant_evt_OF_A96] && ( !boolState[S_OF_A96]) )
	{
		boolState[relevant_evt_OF_A94]  =  true;
	}

	if ((( !boolState[required_OF_A23]) && ( !boolState[required_OF_A26])) && ( !  boolState[required_OF_A31]) )
	{
		boolState[required_OF_A96]  =  false;
	}

	if (((boolState[relevant_evt_OF_A23] && ( !boolState[S_OF_A23])) || (boolState[relevant_evt_OF_A26] && ( !boolState[S_OF_A26]))) || (boolState[relevant_evt_OF_A31] && ( !  boolState[S_OF_A31])) )
	{
		boolState[relevant_evt_OF_A96]  =  true;
	}

	if ( !boolState[S_OF_A99] )
	{
		boolState[required_OF_A97]  =  false;
	}

	if (boolState[relevant_evt_OF_A100] && ( !boolState[S_OF_A100]) )
	{
		boolState[relevant_evt_OF_A97]  =  true;
	}

	if ( !boolState[required_OF_A107] )
	{
		boolState[required_OF_A98]  =  false;
	}

	if (boolState[relevant_evt_OF_A107] && ( !boolState[S_OF_A107]) )
	{
		boolState[relevant_evt_OF_A98]  =  true;
	}

	if ( !boolState[required_OF_A100] )
	{
		boolState[required_OF_A99]  =  false;
	}

	if ((boolState[relevant_evt_OF_A100] && ( !boolState[S_OF_A100])) || ( !boolState[S_OF_A97]) )
	{
		boolState[relevant_evt_OF_A99]  =  true;
	}



	boolState[relevant_evt_OF_UE_1]  =  true  ;

	if ( !boolState[required_OF_A43] )
	{
		boolState[required_OF_f_A43]  =  false;
	}

	if (boolState[relevant_evt_OF_A43] && ( !boolState[S_OF_A43]) )
	{
		boolState[relevant_evt_OF_f_A43]  =  true;
	}

	if ( !boolState[required_OF_A44] )
	{
		boolState[required_OF_f_A44]  =  false;
	}

	if (boolState[relevant_evt_OF_A44] && ( !boolState[S_OF_A44]) )
	{
		boolState[relevant_evt_OF_f_A44]  =  true;
	}

	if ( !boolState[required_OF_A45] )
	{
		boolState[required_OF_f_A45]  =  false;
	}

	if (boolState[relevant_evt_OF_A45] && ( !boolState[S_OF_A45]) )
	{
		boolState[relevant_evt_OF_f_A45]  =  true;
	}

	if ( !boolState[required_OF_A46] )
	{
		boolState[required_OF_f_A46]  =  false;
	}

	if (boolState[relevant_evt_OF_A46] && ( !boolState[S_OF_A46]) )
	{
		boolState[relevant_evt_OF_f_A46]  =  true;
	}

	if ( !boolState[required_OF_A47] )
	{
		boolState[required_OF_f_A47]  =  false;
	}

	if (boolState[relevant_evt_OF_A47] && ( !boolState[S_OF_A47]) )
	{
		boolState[relevant_evt_OF_f_A47]  =  true;
	}

	if ( !boolState[required_OF_A48] )
	{
		boolState[required_OF_f_A48]  =  false;
	}

	if (boolState[relevant_evt_OF_A48] && ( !boolState[S_OF_A48]) )
	{
		boolState[relevant_evt_OF_f_A48]  =  true;
	}

	if ( !boolState[required_OF_A49] )
	{
		boolState[required_OF_f_A49]  =  false;
	}

	if (boolState[relevant_evt_OF_A49] && ( !boolState[S_OF_A49]) )
	{
		boolState[relevant_evt_OF_f_A49]  =  true;
	}

	if ( !boolState[required_OF_A51] )
	{
		boolState[required_OF_f_A51]  =  false;
	}

	if (boolState[relevant_evt_OF_A51] && ( !boolState[S_OF_A51]) )
	{
		boolState[relevant_evt_OF_f_A51]  =  true;
	}

	if ( !boolState[required_OF_A52] )
	{
		boolState[required_OF_f_A52]  =  false;
	}

	if (boolState[relevant_evt_OF_A52] && ( !boolState[S_OF_A52]) )
	{
		boolState[relevant_evt_OF_f_A52]  =  true;
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

	if ( !boolState[required_OF_A59] )
	{
		boolState[required_OF_f_A59]  =  false;
	}

	if (boolState[relevant_evt_OF_A59] && ( !boolState[S_OF_A59]) )
	{
		boolState[relevant_evt_OF_f_A59]  =  true;
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

	if ( !boolState[required_OF_A62] )
	{
		boolState[required_OF_f_A62]  =  false;
	}

	if (boolState[relevant_evt_OF_A62] && ( !boolState[S_OF_A62]) )
	{
		boolState[relevant_evt_OF_f_A62]  =  true;
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

	if ( !boolState[required_OF_A65] )
	{
		boolState[required_OF_f_A65]  =  false;
	}

	if (boolState[relevant_evt_OF_A65] && ( !boolState[S_OF_A65]) )
	{
		boolState[relevant_evt_OF_f_A65]  =  true;
	}

	if ( !boolState[required_OF_A66] )
	{
		boolState[required_OF_f_A66]  =  false;
	}

	if (boolState[relevant_evt_OF_A66] && ( !boolState[S_OF_A66]) )
	{
		boolState[relevant_evt_OF_f_A66]  =  true;
	}

	if (( !boolState[required_OF_A43]) || ( !boolState[S_OF_A5]) )
	{
		boolState[required_OF_i_A43]  =  false;
	}

	if (boolState[relevant_evt_OF_A43] && ( !boolState[S_OF_A43]) )
	{
		boolState[relevant_evt_OF_i_A43]  =  true;
	}

	if (( !boolState[required_OF_A44]) || ( !boolState[S_OF_A8]) )
	{
		boolState[required_OF_i_A44]  =  false;
	}

	if (boolState[relevant_evt_OF_A44] && ( !boolState[S_OF_A44]) )
	{
		boolState[relevant_evt_OF_i_A44]  =  true;
	}

	if (( !boolState[required_OF_A45]) || ( !boolState[S_OF_A11]) )
	{
		boolState[required_OF_i_A45]  =  false;
	}

	if (boolState[relevant_evt_OF_A45] && ( !boolState[S_OF_A45]) )
	{
		boolState[relevant_evt_OF_i_A45]  =  true;
	}

	if (( !boolState[required_OF_A46]) || ( !boolState[S_OF_A14]) )
	{
		boolState[required_OF_i_A46]  =  false;
	}

	if (boolState[relevant_evt_OF_A46] && ( !boolState[S_OF_A46]) )
	{
		boolState[relevant_evt_OF_i_A46]  =  true;
	}

	if (( !boolState[required_OF_A47]) || ( !boolState[S_OF_A17]) )
	{
		boolState[required_OF_i_A47]  =  false;
	}

	if (boolState[relevant_evt_OF_A47] && ( !boolState[S_OF_A47]) )
	{
		boolState[relevant_evt_OF_i_A47]  =  true;
	}

	if (( !boolState[required_OF_A48]) || ( !boolState[S_OF_A20]) )
	{
		boolState[required_OF_i_A48]  =  false;
	}

	if (boolState[relevant_evt_OF_A48] && ( !boolState[S_OF_A48]) )
	{
		boolState[relevant_evt_OF_i_A48]  =  true;
	}

	if (( !boolState[required_OF_A49]) || ( !boolState[S_OF_A8]) )
	{
		boolState[required_OF_i_A49]  =  false;
	}

	if (boolState[relevant_evt_OF_A49] && ( !boolState[S_OF_A49]) )
	{
		boolState[relevant_evt_OF_i_A49]  =  true;
	}

	if (( !boolState[required_OF_A51]) || ( !boolState[S_OF_A23]) )
	{
		boolState[required_OF_i_A51]  =  false;
	}

	if (boolState[relevant_evt_OF_A51] && ( !boolState[S_OF_A51]) )
	{
		boolState[relevant_evt_OF_i_A51]  =  true;
	}

	if (( !boolState[required_OF_A52]) || ( !boolState[S_OF_A14]) )
	{
		boolState[required_OF_i_A52]  =  false;
	}

	if (boolState[relevant_evt_OF_A52] && ( !boolState[S_OF_A52]) )
	{
		boolState[relevant_evt_OF_i_A52]  =  true;
	}

	if (( !boolState[required_OF_A54]) || ( !boolState[S_OF_A23]) )
	{
		boolState[required_OF_i_A54]  =  false;
	}

	if (boolState[relevant_evt_OF_A54] && ( !boolState[S_OF_A54]) )
	{
		boolState[relevant_evt_OF_i_A54]  =  true;
	}

	if (( !boolState[required_OF_A55]) || ( !boolState[S_OF_A20]) )
	{
		boolState[required_OF_i_A55]  =  false;
	}

	if (boolState[relevant_evt_OF_A55] && ( !boolState[S_OF_A55]) )
	{
		boolState[relevant_evt_OF_i_A55]  =  true;
	}

	if (( !boolState[required_OF_A57]) || ( !boolState[S_OF_A23]) )
	{
		boolState[required_OF_i_A57]  =  false;
	}

	if (boolState[relevant_evt_OF_A57] && ( !boolState[S_OF_A57]) )
	{
		boolState[relevant_evt_OF_i_A57]  =  true;
	}

	if (( !boolState[required_OF_A58]) || ( !boolState[S_OF_A23]) )
	{
		boolState[required_OF_i_A58]  =  false;
	}

	if (boolState[relevant_evt_OF_A58] && ( !boolState[S_OF_A58]) )
	{
		boolState[relevant_evt_OF_i_A58]  =  true;
	}

	if (( !boolState[required_OF_A59]) || ( !boolState[S_OF_A26]) )
	{
		boolState[required_OF_i_A59]  =  false;
	}

	if (boolState[relevant_evt_OF_A59] && ( !boolState[S_OF_A59]) )
	{
		boolState[relevant_evt_OF_i_A59]  =  true;
	}

	if (( !boolState[required_OF_A60]) || ( !boolState[S_OF_A2]) )
	{
		boolState[required_OF_i_A60]  =  false;
	}

	if (boolState[relevant_evt_OF_A60] && ( !boolState[S_OF_A60]) )
	{
		boolState[relevant_evt_OF_i_A60]  =  true;
	}

	if (( !boolState[required_OF_A61]) || ( !boolState[S_OF_A2]) )
	{
		boolState[required_OF_i_A61]  =  false;
	}

	if (boolState[relevant_evt_OF_A61] && ( !boolState[S_OF_A61]) )
	{
		boolState[relevant_evt_OF_i_A61]  =  true;
	}

	if (( !boolState[required_OF_A62]) || ( !boolState[S_OF_A2]) )
	{
		boolState[required_OF_i_A62]  =  false;
	}

	if (boolState[relevant_evt_OF_A62] && ( !boolState[S_OF_A62]) )
	{
		boolState[relevant_evt_OF_i_A62]  =  true;
	}

	if (( !boolState[required_OF_A63]) || ( !boolState[S_OF_A31]) )
	{
		boolState[required_OF_i_A63]  =  false;
	}

	if (boolState[relevant_evt_OF_A63] && ( !boolState[S_OF_A63]) )
	{
		boolState[relevant_evt_OF_i_A63]  =  true;
	}

	if (( !boolState[required_OF_A64]) || ( !boolState[S_OF_A34]) )
	{
		boolState[required_OF_i_A64]  =  false;
	}

	if (boolState[relevant_evt_OF_A64] && ( !boolState[S_OF_A64]) )
	{
		boolState[relevant_evt_OF_i_A64]  =  true;
	}

	if (( !boolState[required_OF_A65]) || ( !boolState[S_OF_A37]) )
	{
		boolState[required_OF_i_A65]  =  false;
	}

	if (boolState[relevant_evt_OF_A65] && ( !boolState[S_OF_A65]) )
	{
		boolState[relevant_evt_OF_i_A65]  =  true;
	}

	if (( !boolState[required_OF_A66]) || ( !boolState[S_OF_A41]) )
	{
		boolState[required_OF_i_A66]  =  false;
	}

	if (boolState[relevant_evt_OF_A66] && ( !boolState[S_OF_A66]) )
	{
		boolState[relevant_evt_OF_i_A66]  =  true;
	}

}


void storm::figaro::FigaroProgram_vgs_5_Trim_Article_repair::runOnceInteractionStep_propagate_leaves()
{


	boolState[already_S_OF_A0]  =  boolState[S_OF_A0]  ;



	boolState[already_S_OF_A1]  =  boolState[S_OF_A1]  ;



	boolState[already_S_OF_A10]  =  boolState[S_OF_A10]  ;



	boolState[already_S_OF_A100]  =  boolState[S_OF_A100]  ;



	boolState[already_S_OF_A102]  =  boolState[S_OF_A102]  ;



	boolState[already_S_OF_A103]  =  boolState[S_OF_A103]  ;



	boolState[already_S_OF_A104]  =  boolState[S_OF_A104]  ;



	boolState[already_S_OF_A105]  =  boolState[S_OF_A105]  ;



	boolState[already_S_OF_A107]  =  boolState[S_OF_A107]  ;



	boolState[already_S_OF_A11]  =  boolState[S_OF_A11]  ;



	boolState[already_S_OF_A13]  =  boolState[S_OF_A13]  ;



	boolState[already_S_OF_A14]  =  boolState[S_OF_A14]  ;



	boolState[already_S_OF_A16]  =  boolState[S_OF_A16]  ;



	boolState[already_S_OF_A17]  =  boolState[S_OF_A17]  ;



	boolState[already_S_OF_A19]  =  boolState[S_OF_A19]  ;



	boolState[already_S_OF_A2]  =  boolState[S_OF_A2]  ;



	boolState[already_S_OF_A20]  =  boolState[S_OF_A20]  ;



	boolState[already_S_OF_A22]  =  boolState[S_OF_A22]  ;



	boolState[already_S_OF_A23]  =  boolState[S_OF_A23]  ;



	boolState[already_S_OF_A25]  =  boolState[S_OF_A25]  ;



	boolState[already_S_OF_A26]  =  boolState[S_OF_A26]  ;



	boolState[already_S_OF_A28]  =  boolState[S_OF_A28]  ;



	boolState[already_S_OF_A29]  =  boolState[S_OF_A29]  ;



	boolState[already_S_OF_A30]  =  boolState[S_OF_A30]  ;



	boolState[already_S_OF_A31]  =  boolState[S_OF_A31]  ;



	boolState[already_S_OF_A33]  =  boolState[S_OF_A33]  ;



	boolState[already_S_OF_A34]  =  boolState[S_OF_A34]  ;



	boolState[already_S_OF_A36]  =  boolState[S_OF_A36]  ;



	boolState[already_S_OF_A37]  =  boolState[S_OF_A37]  ;



	boolState[already_S_OF_A39]  =  boolState[S_OF_A39]  ;



	boolState[already_S_OF_A4]  =  boolState[S_OF_A4]  ;



	boolState[already_S_OF_A40]  =  boolState[S_OF_A40]  ;



	boolState[already_S_OF_A41]  =  boolState[S_OF_A41]  ;



	boolState[already_S_OF_A43]  =  boolState[S_OF_A43]  ;



	boolState[already_S_OF_A44]  =  boolState[S_OF_A44]  ;



	boolState[already_S_OF_A45]  =  boolState[S_OF_A45]  ;



	boolState[already_S_OF_A46]  =  boolState[S_OF_A46]  ;



	boolState[already_S_OF_A47]  =  boolState[S_OF_A47]  ;



	boolState[already_S_OF_A48]  =  boolState[S_OF_A48]  ;



	boolState[already_S_OF_A49]  =  boolState[S_OF_A49]  ;



	boolState[already_S_OF_A5]  =  boolState[S_OF_A5]  ;



	boolState[already_S_OF_A50]  =  boolState[S_OF_A50]  ;



	boolState[already_S_OF_A51]  =  boolState[S_OF_A51]  ;



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



	boolState[already_S_OF_A8]  =  boolState[S_OF_A8]  ;



	boolState[already_S_OF_A80]  =  boolState[S_OF_A80]  ;



	boolState[already_S_OF_A81]  =  boolState[S_OF_A81]  ;



	boolState[already_S_OF_A82]  =  boolState[S_OF_A82]  ;



	boolState[already_S_OF_A83]  =  boolState[S_OF_A83]  ;



	boolState[already_S_OF_A85]  =  boolState[S_OF_A85]  ;



	boolState[already_S_OF_A86]  =  boolState[S_OF_A86]  ;



	boolState[already_S_OF_A87]  =  boolState[S_OF_A87]  ;



	boolState[already_S_OF_A88]  =  boolState[S_OF_A88]  ;



	boolState[already_S_OF_A89]  =  boolState[S_OF_A89]  ;



	boolState[already_S_OF_A91]  =  boolState[S_OF_A91]  ;



	boolState[already_S_OF_A92]  =  boolState[S_OF_A92]  ;



	boolState[already_S_OF_A93]  =  boolState[S_OF_A93]  ;



	boolState[already_S_OF_A94]  =  boolState[S_OF_A94]  ;



	boolState[already_S_OF_A96]  =  boolState[S_OF_A96]  ;



	boolState[already_S_OF_A97]  =  boolState[S_OF_A97]  ;



	boolState[already_S_OF_A98]  =  boolState[S_OF_A98]  ;



	boolState[already_S_OF_A99]  =  boolState[S_OF_A99]  ;



	boolState[already_S_OF_UE_1]  =  boolState[S_OF_UE_1]  ;



	boolState[already_S_OF_f_A43]  =  boolState[S_OF_f_A43]  ;



	boolState[already_S_OF_f_A44]  =  boolState[S_OF_f_A44]  ;



	boolState[already_S_OF_f_A45]  =  boolState[S_OF_f_A45]  ;



	boolState[already_S_OF_f_A46]  =  boolState[S_OF_f_A46]  ;



	boolState[already_S_OF_f_A47]  =  boolState[S_OF_f_A47]  ;



	boolState[already_S_OF_f_A48]  =  boolState[S_OF_f_A48]  ;



	boolState[already_S_OF_f_A49]  =  boolState[S_OF_f_A49]  ;



	boolState[already_S_OF_f_A51]  =  boolState[S_OF_f_A51]  ;



	boolState[already_S_OF_f_A52]  =  boolState[S_OF_f_A52]  ;



	boolState[already_S_OF_f_A54]  =  boolState[S_OF_f_A54]  ;



	boolState[already_S_OF_f_A55]  =  boolState[S_OF_f_A55]  ;



	boolState[already_S_OF_f_A57]  =  boolState[S_OF_f_A57]  ;



	boolState[already_S_OF_f_A58]  =  boolState[S_OF_f_A58]  ;



	boolState[already_S_OF_f_A59]  =  boolState[S_OF_f_A59]  ;



	boolState[already_S_OF_f_A60]  =  boolState[S_OF_f_A60]  ;



	boolState[already_S_OF_f_A61]  =  boolState[S_OF_f_A61]  ;



	boolState[already_S_OF_f_A62]  =  boolState[S_OF_f_A62]  ;



	boolState[already_S_OF_f_A63]  =  boolState[S_OF_f_A63]  ;



	boolState[already_S_OF_f_A64]  =  boolState[S_OF_f_A64]  ;



	boolState[already_S_OF_f_A65]  =  boolState[S_OF_f_A65]  ;



	boolState[already_S_OF_f_A66]  =  boolState[S_OF_f_A66]  ;



	boolState[already_S_OF_i_A43]  =  boolState[S_OF_i_A43]  ;

	if (( !boolState[required_OF_i_A43]) && (( !boolState[already_standby_OF_i_A43]) && ( !boolState[already_required_OF_i_A43])) )
	{
		boolState[already_standby_OF_i_A43]  =  true;
	}



	boolState[already_S_OF_i_A44]  =  boolState[S_OF_i_A44]  ;

	if (( !boolState[required_OF_i_A44]) && (( !boolState[already_standby_OF_i_A44]) && ( !boolState[already_required_OF_i_A44])) )
	{
		boolState[already_standby_OF_i_A44]  =  true;
	}



	boolState[already_S_OF_i_A45]  =  boolState[S_OF_i_A45]  ;

	if (( !boolState[required_OF_i_A45]) && (( !boolState[already_standby_OF_i_A45]) && ( !boolState[already_required_OF_i_A45])) )
	{
		boolState[already_standby_OF_i_A45]  =  true;
	}



	boolState[already_S_OF_i_A46]  =  boolState[S_OF_i_A46]  ;

	if (( !boolState[required_OF_i_A46]) && (( !boolState[already_standby_OF_i_A46]) && ( !boolState[already_required_OF_i_A46])) )
	{
		boolState[already_standby_OF_i_A46]  =  true;
	}



	boolState[already_S_OF_i_A47]  =  boolState[S_OF_i_A47]  ;

	if (( !boolState[required_OF_i_A47]) && (( !boolState[already_standby_OF_i_A47]) && ( !boolState[already_required_OF_i_A47])) )
	{
		boolState[already_standby_OF_i_A47]  =  true;
	}



	boolState[already_S_OF_i_A48]  =  boolState[S_OF_i_A48]  ;

	if (( !boolState[required_OF_i_A48]) && (( !boolState[already_standby_OF_i_A48]) && ( !boolState[already_required_OF_i_A48])) )
	{
		boolState[already_standby_OF_i_A48]  =  true;
	}



	boolState[already_S_OF_i_A49]  =  boolState[S_OF_i_A49]  ;

	if (( !boolState[required_OF_i_A49]) && (( !boolState[already_standby_OF_i_A49]) && ( !boolState[already_required_OF_i_A49])) )
	{
		boolState[already_standby_OF_i_A49]  =  true;
	}



	boolState[already_S_OF_i_A51]  =  boolState[S_OF_i_A51]  ;

	if (( !boolState[required_OF_i_A51]) && (( !boolState[already_standby_OF_i_A51]) && ( !boolState[already_required_OF_i_A51])) )
	{
		boolState[already_standby_OF_i_A51]  =  true;
	}



	boolState[already_S_OF_i_A52]  =  boolState[S_OF_i_A52]  ;

	if (( !boolState[required_OF_i_A52]) && (( !boolState[already_standby_OF_i_A52]) && ( !boolState[already_required_OF_i_A52])) )
	{
		boolState[already_standby_OF_i_A52]  =  true;
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



	boolState[already_S_OF_i_A59]  =  boolState[S_OF_i_A59]  ;

	if (( !boolState[required_OF_i_A59]) && (( !boolState[already_standby_OF_i_A59]) && ( !boolState[already_required_OF_i_A59])) )
	{
		boolState[already_standby_OF_i_A59]  =  true;
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



	boolState[already_S_OF_i_A62]  =  boolState[S_OF_i_A62]  ;

	if (( !boolState[required_OF_i_A62]) && (( !boolState[already_standby_OF_i_A62]) && ( !boolState[already_required_OF_i_A62])) )
	{
		boolState[already_standby_OF_i_A62]  =  true;
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



	boolState[already_S_OF_i_A65]  =  boolState[S_OF_i_A65]  ;

	if (( !boolState[required_OF_i_A65]) && (( !boolState[already_standby_OF_i_A65]) && ( !boolState[already_required_OF_i_A65])) )
	{
		boolState[already_standby_OF_i_A65]  =  true;
	}



	boolState[already_S_OF_i_A66]  =  boolState[S_OF_i_A66]  ;

	if (( !boolState[required_OF_i_A66]) && (( !boolState[already_standby_OF_i_A66]) && ( !boolState[already_required_OF_i_A66])) )
	{
		boolState[already_standby_OF_i_A66]  =  true;
	}

}


void storm::figaro::FigaroProgram_vgs_5_Trim_Article_repair::runOnceInteractionStep_tops()
{
	if (boolState[required_OF_i_A43] && boolState[already_standby_OF_i_A43] )
	{
		boolState[to_be_fired_OF_i_A43]  =  true;
	}

	if (boolState[required_OF_i_A44] && boolState[already_standby_OF_i_A44] )
	{
		boolState[to_be_fired_OF_i_A44]  =  true;
	}

	if (boolState[required_OF_i_A45] && boolState[already_standby_OF_i_A45] )
	{
		boolState[to_be_fired_OF_i_A45]  =  true;
	}

	if (boolState[required_OF_i_A46] && boolState[already_standby_OF_i_A46] )
	{
		boolState[to_be_fired_OF_i_A46]  =  true;
	}

	if (boolState[required_OF_i_A47] && boolState[already_standby_OF_i_A47] )
	{
		boolState[to_be_fired_OF_i_A47]  =  true;
	}

	if (boolState[required_OF_i_A48] && boolState[already_standby_OF_i_A48] )
	{
		boolState[to_be_fired_OF_i_A48]  =  true;
	}

	if (boolState[required_OF_i_A49] && boolState[already_standby_OF_i_A49] )
	{
		boolState[to_be_fired_OF_i_A49]  =  true;
	}

	if (boolState[required_OF_i_A51] && boolState[already_standby_OF_i_A51] )
	{
		boolState[to_be_fired_OF_i_A51]  =  true;
	}

	if (boolState[required_OF_i_A52] && boolState[already_standby_OF_i_A52] )
	{
		boolState[to_be_fired_OF_i_A52]  =  true;
	}

	if (boolState[required_OF_i_A54] && boolState[already_standby_OF_i_A54] )
	{
		boolState[to_be_fired_OF_i_A54]  =  true;
	}

	if (boolState[required_OF_i_A55] && boolState[already_standby_OF_i_A55] )
	{
		boolState[to_be_fired_OF_i_A55]  =  true;
	}

	if (boolState[required_OF_i_A57] && boolState[already_standby_OF_i_A57] )
	{
		boolState[to_be_fired_OF_i_A57]  =  true;
	}

	if (boolState[required_OF_i_A58] && boolState[already_standby_OF_i_A58] )
	{
		boolState[to_be_fired_OF_i_A58]  =  true;
	}

	if (boolState[required_OF_i_A59] && boolState[already_standby_OF_i_A59] )
	{
		boolState[to_be_fired_OF_i_A59]  =  true;
	}

	if (boolState[required_OF_i_A60] && boolState[already_standby_OF_i_A60] )
	{
		boolState[to_be_fired_OF_i_A60]  =  true;
	}

	if (boolState[required_OF_i_A61] && boolState[already_standby_OF_i_A61] )
	{
		boolState[to_be_fired_OF_i_A61]  =  true;
	}

	if (boolState[required_OF_i_A62] && boolState[already_standby_OF_i_A62] )
	{
		boolState[to_be_fired_OF_i_A62]  =  true;
	}

	if (boolState[required_OF_i_A63] && boolState[already_standby_OF_i_A63] )
	{
		boolState[to_be_fired_OF_i_A63]  =  true;
	}

	if (boolState[required_OF_i_A64] && boolState[already_standby_OF_i_A64] )
	{
		boolState[to_be_fired_OF_i_A64]  =  true;
	}

	if (boolState[required_OF_i_A65] && boolState[already_standby_OF_i_A65] )
	{
		boolState[to_be_fired_OF_i_A65]  =  true;
	}

	if (boolState[required_OF_i_A66] && boolState[already_standby_OF_i_A66] )
	{
		boolState[to_be_fired_OF_i_A66]  =  true;
	}

}

void
storm::figaro::FigaroProgram_vgs_5_Trim_Article_repair::runInteractions() {
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
    }void storm::figaro::FigaroProgram_vgs_5_Trim_Article_repair::printstatetuple(){

                std::cout<<"\n State information: (";
                for (int i=0; i<boolFailureState.size(); i++)
                    {
                    std::cout<<boolFailureState.at(i);
                    }
                std::cout<<")";

            }
        int_fast64_t storm::figaro::FigaroProgram_vgs_5_Trim_Article_repair::stateSize() const{
            return numBoolState;
}
        void storm::figaro::FigaroProgram_vgs_5_Trim_Article_repair::fireinsttransitiongroup(std::string user_input_ins)

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
    