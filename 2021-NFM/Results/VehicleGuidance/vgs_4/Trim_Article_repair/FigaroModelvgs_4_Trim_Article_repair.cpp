#include <iostream>
#include "FigaroModelvgs_4_Trim_Article_repair.h"

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
        
void storm::figaro::FigaroProgram_vgs_4_Trim_Article_repair::init()
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
	REINITIALISATION_OF_required_OF_A11 = true;
	boolState[already_S_OF_A11] = false;
	REINITIALISATION_OF_S_OF_A11 = false;
	REINITIALISATION_OF_relevant_evt_OF_A11 = false;
	boolState[failF_OF_A11] = false;
	boolState[failS_OF_A11] = false;
	REINITIALISATION_OF_required_OF_A12 = true;
	boolState[already_S_OF_A12] = false;
	REINITIALISATION_OF_S_OF_A12 = false;
	REINITIALISATION_OF_relevant_evt_OF_A12 = false;
	REINITIALISATION_OF_required_OF_A14 = true;
	boolState[already_S_OF_A14] = false;
	REINITIALISATION_OF_S_OF_A14 = false;
	REINITIALISATION_OF_relevant_evt_OF_A14 = false;
	boolState[failF_OF_A14] = false;
	boolState[failS_OF_A14] = false;
	REINITIALISATION_OF_required_OF_A15 = true;
	boolState[already_S_OF_A15] = false;
	REINITIALISATION_OF_S_OF_A15 = false;
	REINITIALISATION_OF_relevant_evt_OF_A15 = false;
	REINITIALISATION_OF_required_OF_A17 = true;
	boolState[already_S_OF_A17] = false;
	REINITIALISATION_OF_S_OF_A17 = false;
	REINITIALISATION_OF_relevant_evt_OF_A17 = false;
	boolState[failF_OF_A17] = false;
	REINITIALISATION_OF_required_OF_A18 = true;
	boolState[already_S_OF_A18] = false;
	REINITIALISATION_OF_S_OF_A18 = false;
	REINITIALISATION_OF_relevant_evt_OF_A18 = false;
	REINITIALISATION_OF_required_OF_A2 = true;
	boolState[already_S_OF_A2] = false;
	REINITIALISATION_OF_S_OF_A2 = false;
	REINITIALISATION_OF_relevant_evt_OF_A2 = false;
	REINITIALISATION_OF_required_OF_A20 = true;
	boolState[already_S_OF_A20] = false;
	REINITIALISATION_OF_S_OF_A20 = false;
	REINITIALISATION_OF_relevant_evt_OF_A20 = false;
	boolState[failF_OF_A20] = false;
	REINITIALISATION_OF_required_OF_A21 = true;
	boolState[already_S_OF_A21] = false;
	REINITIALISATION_OF_S_OF_A21 = false;
	REINITIALISATION_OF_relevant_evt_OF_A21 = false;
	REINITIALISATION_OF_required_OF_A23 = true;
	boolState[already_S_OF_A23] = false;
	REINITIALISATION_OF_S_OF_A23 = false;
	REINITIALISATION_OF_relevant_evt_OF_A23 = false;
	boolState[failF_OF_A23] = false;
	REINITIALISATION_OF_required_OF_A24 = true;
	boolState[already_S_OF_A24] = false;
	REINITIALISATION_OF_S_OF_A24 = false;
	REINITIALISATION_OF_relevant_evt_OF_A24 = false;
	REINITIALISATION_OF_required_OF_A26 = true;
	boolState[already_S_OF_A26] = false;
	REINITIALISATION_OF_S_OF_A26 = false;
	REINITIALISATION_OF_relevant_evt_OF_A26 = false;
	boolState[failF_OF_A26] = false;
	REINITIALISATION_OF_required_OF_A27 = true;
	boolState[already_S_OF_A27] = false;
	REINITIALISATION_OF_S_OF_A27 = false;
	REINITIALISATION_OF_relevant_evt_OF_A27 = false;
	REINITIALISATION_OF_required_OF_A29 = true;
	boolState[already_S_OF_A29] = false;
	REINITIALISATION_OF_S_OF_A29 = false;
	REINITIALISATION_OF_relevant_evt_OF_A29 = false;
	boolState[failF_OF_A29] = false;
	REINITIALISATION_OF_required_OF_A3 = true;
	boolState[already_S_OF_A3] = false;
	REINITIALISATION_OF_S_OF_A3 = false;
	REINITIALISATION_OF_relevant_evt_OF_A3 = false;
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
	REINITIALISATION_OF_required_OF_A37 = true;
	boolState[already_S_OF_A37] = false;
	REINITIALISATION_OF_S_OF_A37 = false;
	REINITIALISATION_OF_relevant_evt_OF_A37 = false;
	REINITIALISATION_OF_required_OF_A38 = true;
	boolState[already_S_OF_A38] = false;
	REINITIALISATION_OF_S_OF_A38 = false;
	REINITIALISATION_OF_relevant_evt_OF_A38 = false;
	REINITIALISATION_OF_required_OF_A39 = true;
	boolState[already_S_OF_A39] = false;
	REINITIALISATION_OF_S_OF_A39 = false;
	REINITIALISATION_OF_relevant_evt_OF_A39 = false;
	REINITIALISATION_OF_required_OF_A40 = true;
	boolState[already_S_OF_A40] = false;
	REINITIALISATION_OF_S_OF_A40 = false;
	REINITIALISATION_OF_relevant_evt_OF_A40 = false;
	REINITIALISATION_OF_required_OF_A41 = true;
	boolState[already_S_OF_A41] = false;
	REINITIALISATION_OF_S_OF_A41 = false;
	REINITIALISATION_OF_relevant_evt_OF_A41 = false;
	REINITIALISATION_OF_required_OF_A42 = true;
	boolState[already_S_OF_A42] = false;
	REINITIALISATION_OF_S_OF_A42 = false;
	REINITIALISATION_OF_relevant_evt_OF_A42 = false;
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
	boolState[failF_OF_A5] = false;
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
	boolState[failF_OF_A54] = false;
	REINITIALISATION_OF_required_OF_A55 = true;
	boolState[already_S_OF_A55] = false;
	REINITIALISATION_OF_S_OF_A55 = false;
	REINITIALISATION_OF_relevant_evt_OF_A55 = false;
	REINITIALISATION_OF_required_OF_A56 = true;
	boolState[already_S_OF_A56] = false;
	REINITIALISATION_OF_S_OF_A56 = false;
	REINITIALISATION_OF_relevant_evt_OF_A56 = false;
	boolState[failF_OF_A56] = false;
	REINITIALISATION_OF_required_OF_A57 = true;
	boolState[already_S_OF_A57] = false;
	REINITIALISATION_OF_S_OF_A57 = false;
	REINITIALISATION_OF_relevant_evt_OF_A57 = false;
	boolState[failF_OF_A57] = false;
	REINITIALISATION_OF_required_OF_A58 = true;
	boolState[already_S_OF_A58] = false;
	REINITIALISATION_OF_S_OF_A58 = false;
	REINITIALISATION_OF_relevant_evt_OF_A58 = false;
	REINITIALISATION_OF_required_OF_A59 = true;
	boolState[already_S_OF_A59] = false;
	REINITIALISATION_OF_S_OF_A59 = false;
	REINITIALISATION_OF_relevant_evt_OF_A59 = false;
	REINITIALISATION_OF_required_OF_A6 = true;
	boolState[already_S_OF_A6] = false;
	REINITIALISATION_OF_S_OF_A6 = false;
	REINITIALISATION_OF_relevant_evt_OF_A6 = false;
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
	boolState[failF_OF_A62] = false;
	REINITIALISATION_OF_required_OF_A63 = true;
	boolState[already_S_OF_A63] = false;
	REINITIALISATION_OF_S_OF_A63 = false;
	REINITIALISATION_OF_relevant_evt_OF_A63 = false;
	boolState[failF_OF_A63] = false;
	REINITIALISATION_OF_required_OF_A64 = true;
	boolState[already_S_OF_A64] = false;
	REINITIALISATION_OF_S_OF_A64 = false;
	REINITIALISATION_OF_relevant_evt_OF_A64 = false;
	boolState[failF_OF_A64] = false;
	REINITIALISATION_OF_required_OF_A65 = true;
	boolState[already_S_OF_A65] = false;
	REINITIALISATION_OF_S_OF_A65 = false;
	REINITIALISATION_OF_relevant_evt_OF_A65 = false;
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
	boolState[failF_OF_A69] = false;
	REINITIALISATION_OF_required_OF_A70 = true;
	boolState[already_S_OF_A70] = false;
	REINITIALISATION_OF_S_OF_A70 = false;
	REINITIALISATION_OF_relevant_evt_OF_A70 = false;
	REINITIALISATION_OF_required_OF_A72 = true;
	boolState[already_S_OF_A72] = false;
	REINITIALISATION_OF_S_OF_A72 = false;
	REINITIALISATION_OF_relevant_evt_OF_A72 = false;
	REINITIALISATION_OF_required_OF_A73 = true;
	boolState[already_S_OF_A73] = false;
	REINITIALISATION_OF_S_OF_A73 = false;
	REINITIALISATION_OF_relevant_evt_OF_A73 = false;
	boolState[failF_OF_A73] = false;
	boolState[failS_OF_A73] = false;
	REINITIALISATION_OF_required_OF_A74 = true;
	boolState[already_S_OF_A74] = false;
	REINITIALISATION_OF_S_OF_A74 = false;
	REINITIALISATION_OF_relevant_evt_OF_A74 = false;
	boolState[failF_OF_A74] = false;
	boolState[failS_OF_A74] = false;
	REINITIALISATION_OF_required_OF_A75 = true;
	boolState[already_S_OF_A75] = false;
	REINITIALISATION_OF_S_OF_A75 = false;
	REINITIALISATION_OF_relevant_evt_OF_A75 = false;
	boolState[failF_OF_A75] = false;
	boolState[failS_OF_A75] = false;
	REINITIALISATION_OF_required_OF_A76 = true;
	boolState[already_S_OF_A76] = false;
	REINITIALISATION_OF_S_OF_A76 = false;
	REINITIALISATION_OF_relevant_evt_OF_A76 = false;
	REINITIALISATION_OF_required_OF_A78 = true;
	boolState[already_S_OF_A78] = false;
	REINITIALISATION_OF_S_OF_A78 = false;
	REINITIALISATION_OF_relevant_evt_OF_A78 = false;
	boolState[failF_OF_A78] = false;
	boolState[failS_OF_A78] = false;
	REINITIALISATION_OF_required_OF_A79 = true;
	boolState[already_S_OF_A79] = false;
	REINITIALISATION_OF_S_OF_A79 = false;
	REINITIALISATION_OF_relevant_evt_OF_A79 = false;
	boolState[failF_OF_A79] = false;
	boolState[failS_OF_A79] = false;
	REINITIALISATION_OF_required_OF_A8 = true;
	boolState[already_S_OF_A8] = false;
	REINITIALISATION_OF_S_OF_A8 = false;
	REINITIALISATION_OF_relevant_evt_OF_A8 = false;
	boolState[failF_OF_A8] = false;
	REINITIALISATION_OF_required_OF_A80 = true;
	boolState[already_S_OF_A80] = false;
	REINITIALISATION_OF_S_OF_A80 = false;
	REINITIALISATION_OF_relevant_evt_OF_A80 = false;
	boolState[failF_OF_A80] = false;
	boolState[failS_OF_A80] = false;
	REINITIALISATION_OF_required_OF_A81 = true;
	boolState[already_S_OF_A81] = false;
	REINITIALISATION_OF_S_OF_A81 = false;
	REINITIALISATION_OF_relevant_evt_OF_A81 = false;
	REINITIALISATION_OF_required_OF_A83 = true;
	boolState[already_S_OF_A83] = false;
	REINITIALISATION_OF_S_OF_A83 = false;
	REINITIALISATION_OF_relevant_evt_OF_A83 = false;
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
	REINITIALISATION_OF_required_OF_A89 = true;
	boolState[already_S_OF_A89] = false;
	REINITIALISATION_OF_S_OF_A89 = false;
	REINITIALISATION_OF_relevant_evt_OF_A89 = false;
	boolState[failF_OF_A89] = false;
	REINITIALISATION_OF_required_OF_A9 = true;
	boolState[already_S_OF_A9] = false;
	REINITIALISATION_OF_S_OF_A9 = false;
	REINITIALISATION_OF_relevant_evt_OF_A9 = false;
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
	REINITIALISATION_OF_required_OF_A94 = true;
	boolState[already_S_OF_A94] = false;
	REINITIALISATION_OF_S_OF_A94 = false;
	REINITIALISATION_OF_relevant_evt_OF_A94 = false;
	REINITIALISATION_OF_required_OF_A95 = true;
	boolState[already_S_OF_A95] = false;
	REINITIALISATION_OF_S_OF_A95 = false;
	REINITIALISATION_OF_relevant_evt_OF_A95 = false;
	boolState[failF_OF_A95] = false;
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
	REINITIALISATION_OF_required_OF_f_A36 = true;
	boolState[already_S_OF_f_A36] = false;
	REINITIALISATION_OF_S_OF_f_A36 = false;
	REINITIALISATION_OF_relevant_evt_OF_f_A36 = false;
	boolState[failF_OF_f_A36] = false;
	REINITIALISATION_OF_required_OF_f_A37 = true;
	boolState[already_S_OF_f_A37] = false;
	REINITIALISATION_OF_S_OF_f_A37 = false;
	REINITIALISATION_OF_relevant_evt_OF_f_A37 = false;
	boolState[failF_OF_f_A37] = false;
	REINITIALISATION_OF_required_OF_f_A38 = true;
	boolState[already_S_OF_f_A38] = false;
	REINITIALISATION_OF_S_OF_f_A38 = false;
	REINITIALISATION_OF_relevant_evt_OF_f_A38 = false;
	boolState[failF_OF_f_A38] = false;
	REINITIALISATION_OF_required_OF_f_A39 = true;
	boolState[already_S_OF_f_A39] = false;
	REINITIALISATION_OF_S_OF_f_A39 = false;
	REINITIALISATION_OF_relevant_evt_OF_f_A39 = false;
	boolState[failF_OF_f_A39] = false;
	REINITIALISATION_OF_required_OF_f_A40 = true;
	boolState[already_S_OF_f_A40] = false;
	REINITIALISATION_OF_S_OF_f_A40 = false;
	REINITIALISATION_OF_relevant_evt_OF_f_A40 = false;
	boolState[failF_OF_f_A40] = false;
	REINITIALISATION_OF_required_OF_f_A42 = true;
	boolState[already_S_OF_f_A42] = false;
	REINITIALISATION_OF_S_OF_f_A42 = false;
	REINITIALISATION_OF_relevant_evt_OF_f_A42 = false;
	boolState[failF_OF_f_A42] = false;
	REINITIALISATION_OF_required_OF_f_A43 = true;
	boolState[already_S_OF_f_A43] = false;
	REINITIALISATION_OF_S_OF_f_A43 = false;
	REINITIALISATION_OF_relevant_evt_OF_f_A43 = false;
	boolState[failF_OF_f_A43] = false;
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
	REINITIALISATION_OF_required_OF_f_A50 = true;
	boolState[already_S_OF_f_A50] = false;
	REINITIALISATION_OF_S_OF_f_A50 = false;
	REINITIALISATION_OF_relevant_evt_OF_f_A50 = false;
	boolState[failF_OF_f_A50] = false;
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
	REINITIALISATION_OF_required_OF_f_A53 = true;
	boolState[already_S_OF_f_A53] = false;
	REINITIALISATION_OF_S_OF_f_A53 = false;
	REINITIALISATION_OF_relevant_evt_OF_f_A53 = false;
	boolState[failF_OF_f_A53] = false;
	REINITIALISATION_OF_required_OF_i_A36 = true;
	boolState[already_S_OF_i_A36] = false;
	REINITIALISATION_OF_S_OF_i_A36 = false;
	REINITIALISATION_OF_relevant_evt_OF_i_A36 = false;
	boolState[failI_OF_i_A36] = false;
	REINITIALISATION_OF_to_be_fired_OF_i_A36 = false;
	boolState[already_standby_OF_i_A36] = false;
	boolState[already_required_OF_i_A36] = false;
	REINITIALISATION_OF_required_OF_i_A37 = true;
	boolState[already_S_OF_i_A37] = false;
	REINITIALISATION_OF_S_OF_i_A37 = false;
	REINITIALISATION_OF_relevant_evt_OF_i_A37 = false;
	boolState[failI_OF_i_A37] = false;
	REINITIALISATION_OF_to_be_fired_OF_i_A37 = false;
	boolState[already_standby_OF_i_A37] = false;
	boolState[already_required_OF_i_A37] = false;
	REINITIALISATION_OF_required_OF_i_A38 = true;
	boolState[already_S_OF_i_A38] = false;
	REINITIALISATION_OF_S_OF_i_A38 = false;
	REINITIALISATION_OF_relevant_evt_OF_i_A38 = false;
	boolState[failI_OF_i_A38] = false;
	REINITIALISATION_OF_to_be_fired_OF_i_A38 = false;
	boolState[already_standby_OF_i_A38] = false;
	boolState[already_required_OF_i_A38] = false;
	REINITIALISATION_OF_required_OF_i_A39 = true;
	boolState[already_S_OF_i_A39] = false;
	REINITIALISATION_OF_S_OF_i_A39 = false;
	REINITIALISATION_OF_relevant_evt_OF_i_A39 = false;
	boolState[failI_OF_i_A39] = false;
	REINITIALISATION_OF_to_be_fired_OF_i_A39 = false;
	boolState[already_standby_OF_i_A39] = false;
	boolState[already_required_OF_i_A39] = false;
	REINITIALISATION_OF_required_OF_i_A40 = true;
	boolState[already_S_OF_i_A40] = false;
	REINITIALISATION_OF_S_OF_i_A40 = false;
	REINITIALISATION_OF_relevant_evt_OF_i_A40 = false;
	boolState[failI_OF_i_A40] = false;
	REINITIALISATION_OF_to_be_fired_OF_i_A40 = false;
	boolState[already_standby_OF_i_A40] = false;
	boolState[already_required_OF_i_A40] = false;
	REINITIALISATION_OF_required_OF_i_A42 = true;
	boolState[already_S_OF_i_A42] = false;
	REINITIALISATION_OF_S_OF_i_A42 = false;
	REINITIALISATION_OF_relevant_evt_OF_i_A42 = false;
	boolState[failI_OF_i_A42] = false;
	REINITIALISATION_OF_to_be_fired_OF_i_A42 = false;
	boolState[already_standby_OF_i_A42] = false;
	boolState[already_required_OF_i_A42] = false;
	REINITIALISATION_OF_required_OF_i_A43 = true;
	boolState[already_S_OF_i_A43] = false;
	REINITIALISATION_OF_S_OF_i_A43 = false;
	REINITIALISATION_OF_relevant_evt_OF_i_A43 = false;
	boolState[failI_OF_i_A43] = false;
	REINITIALISATION_OF_to_be_fired_OF_i_A43 = false;
	boolState[already_standby_OF_i_A43] = false;
	boolState[already_required_OF_i_A43] = false;
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
	REINITIALISATION_OF_required_OF_i_A50 = true;
	boolState[already_S_OF_i_A50] = false;
	REINITIALISATION_OF_S_OF_i_A50 = false;
	REINITIALISATION_OF_relevant_evt_OF_i_A50 = false;
	boolState[failI_OF_i_A50] = false;
	REINITIALISATION_OF_to_be_fired_OF_i_A50 = false;
	boolState[already_standby_OF_i_A50] = false;
	boolState[already_required_OF_i_A50] = false;
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
	REINITIALISATION_OF_required_OF_i_A53 = true;
	boolState[already_S_OF_i_A53] = false;
	REINITIALISATION_OF_S_OF_i_A53 = false;
	REINITIALISATION_OF_relevant_evt_OF_i_A53 = false;
	boolState[failI_OF_i_A53] = false;
	REINITIALISATION_OF_to_be_fired_OF_i_A53 = false;
	boolState[already_standby_OF_i_A53] = false;
	boolState[already_required_OF_i_A53] = false;

	/* ---------- DECLARATION OF OCCURRENCE RULES FIRING FLAGS ------------ */
	FIRE_xx10_OF_A1 = false;
	FIRE_xx11_OF_A1 = false;
	FIRE_xx10_OF_A100 = false;
	FIRE_xx11_OF_A100 = false;
	FIRE_xx10_OF_A101 = false;
	FIRE_xx11_OF_A101 = false;
	FIRE_xx10_OF_A102 = false;
	FIRE_xx11_OF_A102 = false;
	FIRE_xx17_OF_A11 = false;
	FIRE_xx18_OF_A11 = false;
	FIRE_xx19_OF_A11 = false;
	FIRE_xx17_OF_A14 = false;
	FIRE_xx18_OF_A14 = false;
	FIRE_xx19_OF_A14 = false;
	FIRE_xx10_OF_A17 = false;
	FIRE_xx11_OF_A17 = false;
	FIRE_xx10_OF_A20 = false;
	FIRE_xx11_OF_A20 = false;
	FIRE_xx10_OF_A23 = false;
	FIRE_xx11_OF_A23 = false;
	FIRE_xx10_OF_A26 = false;
	FIRE_xx11_OF_A26 = false;
	FIRE_xx10_OF_A29 = false;
	FIRE_xx11_OF_A29 = false;
	FIRE_xx10_OF_A33 = false;
	FIRE_xx11_OF_A33 = false;
	FIRE_xx10_OF_A5 = false;
	FIRE_xx11_OF_A5 = false;
	FIRE_xx10_OF_A54 = false;
	FIRE_xx11_OF_A54 = false;
	FIRE_xx10_OF_A56 = false;
	FIRE_xx11_OF_A56 = false;
	FIRE_xx10_OF_A57 = false;
	FIRE_xx11_OF_A57 = false;
	FIRE_xx10_OF_A62 = false;
	FIRE_xx11_OF_A62 = false;
	FIRE_xx10_OF_A63 = false;
	FIRE_xx11_OF_A63 = false;
	FIRE_xx10_OF_A64 = false;
	FIRE_xx11_OF_A64 = false;
	FIRE_xx10_OF_A67 = false;
	FIRE_xx11_OF_A67 = false;
	FIRE_xx10_OF_A68 = false;
	FIRE_xx11_OF_A68 = false;
	FIRE_xx10_OF_A69 = false;
	FIRE_xx11_OF_A69 = false;
	FIRE_xx17_OF_A73 = false;
	FIRE_xx18_OF_A73 = false;
	FIRE_xx19_OF_A73 = false;
	FIRE_xx17_OF_A74 = false;
	FIRE_xx18_OF_A74 = false;
	FIRE_xx19_OF_A74 = false;
	FIRE_xx17_OF_A75 = false;
	FIRE_xx18_OF_A75 = false;
	FIRE_xx19_OF_A75 = false;
	FIRE_xx17_OF_A78 = false;
	FIRE_xx18_OF_A78 = false;
	FIRE_xx19_OF_A78 = false;
	FIRE_xx17_OF_A79 = false;
	FIRE_xx18_OF_A79 = false;
	FIRE_xx19_OF_A79 = false;
	FIRE_xx10_OF_A8 = false;
	FIRE_xx11_OF_A8 = false;
	FIRE_xx17_OF_A80 = false;
	FIRE_xx18_OF_A80 = false;
	FIRE_xx19_OF_A80 = false;
	FIRE_xx10_OF_A84 = false;
	FIRE_xx11_OF_A84 = false;
	FIRE_xx10_OF_A85 = false;
	FIRE_xx11_OF_A85 = false;
	FIRE_xx10_OF_A86 = false;
	FIRE_xx11_OF_A86 = false;
	FIRE_xx10_OF_A89 = false;
	FIRE_xx11_OF_A89 = false;
	FIRE_xx10_OF_A90 = false;
	FIRE_xx11_OF_A90 = false;
	FIRE_xx10_OF_A91 = false;
	FIRE_xx11_OF_A91 = false;
	FIRE_xx10_OF_A95 = false;
	FIRE_xx11_OF_A95 = false;
	FIRE_xx10_OF_A96 = false;
	FIRE_xx11_OF_A96 = false;
	FIRE_xx10_OF_A97 = false;
	FIRE_xx11_OF_A97 = false;
	FIRE_xx10_OF_f_A36 = false;
	FIRE_xx11_OF_f_A36 = false;
	FIRE_xx10_OF_f_A37 = false;
	FIRE_xx11_OF_f_A37 = false;
	FIRE_xx10_OF_f_A38 = false;
	FIRE_xx11_OF_f_A38 = false;
	FIRE_xx10_OF_f_A39 = false;
	FIRE_xx11_OF_f_A39 = false;
	FIRE_xx10_OF_f_A40 = false;
	FIRE_xx11_OF_f_A40 = false;
	FIRE_xx10_OF_f_A42 = false;
	FIRE_xx11_OF_f_A42 = false;
	FIRE_xx10_OF_f_A43 = false;
	FIRE_xx11_OF_f_A43 = false;
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
	FIRE_xx10_OF_f_A50 = false;
	FIRE_xx11_OF_f_A50 = false;
	FIRE_xx10_OF_f_A51 = false;
	FIRE_xx11_OF_f_A51 = false;
	FIRE_xx10_OF_f_A52 = false;
	FIRE_xx11_OF_f_A52 = false;
	FIRE_xx10_OF_f_A53 = false;
	FIRE_xx11_OF_f_A53 = false;
	FIRE_xx23_OF_i_A36_INS_116 = false;
	FIRE_xx23_OF_i_A36_INS_117 = false;
	FIRE_xx24_OF_i_A36 = false;
	FIRE_xx23_OF_i_A37_INS_119 = false;
	FIRE_xx23_OF_i_A37_INS_120 = false;
	FIRE_xx24_OF_i_A37 = false;
	FIRE_xx23_OF_i_A38_INS_122 = false;
	FIRE_xx23_OF_i_A38_INS_123 = false;
	FIRE_xx24_OF_i_A38 = false;
	FIRE_xx23_OF_i_A39_INS_125 = false;
	FIRE_xx23_OF_i_A39_INS_126 = false;
	FIRE_xx24_OF_i_A39 = false;
	FIRE_xx23_OF_i_A40_INS_128 = false;
	FIRE_xx23_OF_i_A40_INS_129 = false;
	FIRE_xx24_OF_i_A40 = false;
	FIRE_xx23_OF_i_A42_INS_131 = false;
	FIRE_xx23_OF_i_A42_INS_132 = false;
	FIRE_xx24_OF_i_A42 = false;
	FIRE_xx23_OF_i_A43_INS_134 = false;
	FIRE_xx23_OF_i_A43_INS_135 = false;
	FIRE_xx24_OF_i_A43 = false;
	FIRE_xx23_OF_i_A45_INS_137 = false;
	FIRE_xx23_OF_i_A45_INS_138 = false;
	FIRE_xx24_OF_i_A45 = false;
	FIRE_xx23_OF_i_A46_INS_140 = false;
	FIRE_xx23_OF_i_A46_INS_141 = false;
	FIRE_xx24_OF_i_A46 = false;
	FIRE_xx23_OF_i_A47_INS_143 = false;
	FIRE_xx23_OF_i_A47_INS_144 = false;
	FIRE_xx24_OF_i_A47 = false;
	FIRE_xx23_OF_i_A48_INS_146 = false;
	FIRE_xx23_OF_i_A48_INS_147 = false;
	FIRE_xx24_OF_i_A48 = false;
	FIRE_xx23_OF_i_A49_INS_149 = false;
	FIRE_xx23_OF_i_A49_INS_150 = false;
	FIRE_xx24_OF_i_A49 = false;
	FIRE_xx23_OF_i_A50_INS_152 = false;
	FIRE_xx23_OF_i_A50_INS_153 = false;
	FIRE_xx24_OF_i_A50 = false;
	FIRE_xx23_OF_i_A51_INS_155 = false;
	FIRE_xx23_OF_i_A51_INS_156 = false;
	FIRE_xx24_OF_i_A51 = false;
	FIRE_xx23_OF_i_A52_INS_158 = false;
	FIRE_xx23_OF_i_A52_INS_159 = false;
	FIRE_xx24_OF_i_A52 = false;
	FIRE_xx23_OF_i_A53_INS_161 = false;
	FIRE_xx23_OF_i_A53_INS_162 = false;
	FIRE_xx24_OF_i_A53 = false;

}

void storm::figaro::FigaroProgram_vgs_4_Trim_Article_repair::saveCurrentState()
{
	// cout <<">>>>>>>>>>>>>>>>>>>> Saving current state  <<<<<<<<<<<<<<<<<<<<<<<" << endl;
	backupBoolState = boolState ;
	backupFloatState = floatState ;
	backupIntState = intState ;
	backupEnumState = enumState ;
}

int storm::figaro::FigaroProgram_vgs_4_Trim_Article_repair::compareStates()
{
	// cout <<">>>>>>>>>>>>>>>>>>>> Comparing state with previous one (return number of differences) <<<<<<<<<<<<<<<<<<<<<<<" << endl;

	return (backupBoolState != boolState) + (backupFloatState != floatState) + (backupIntState != intState) + (backupEnumState != enumState); 
}

void storm::figaro::FigaroProgram_vgs_4_Trim_Article_repair::printState()
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
	//cout << "Attribute :  boolState[required_OF_A11] | Value : " << boolState[required_OF_A11] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A11] | Value : " << boolState[already_S_OF_A11] << endl;
	//cout << "Attribute :  boolState[S_OF_A11] | Value : " << boolState[S_OF_A11] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A11] | Value : " << boolState[relevant_evt_OF_A11] << endl;
	//cout << "Attribute :  boolState[failF_OF_A11] | Value : " << boolState[failF_OF_A11] << endl;
	//cout << "Attribute :  boolState[failS_OF_A11] | Value : " << boolState[failS_OF_A11] << endl;
	//cout << "Attribute :  boolState[required_OF_A12] | Value : " << boolState[required_OF_A12] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A12] | Value : " << boolState[already_S_OF_A12] << endl;
	//cout << "Attribute :  boolState[S_OF_A12] | Value : " << boolState[S_OF_A12] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A12] | Value : " << boolState[relevant_evt_OF_A12] << endl;
	//cout << "Attribute :  boolState[required_OF_A14] | Value : " << boolState[required_OF_A14] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A14] | Value : " << boolState[already_S_OF_A14] << endl;
	//cout << "Attribute :  boolState[S_OF_A14] | Value : " << boolState[S_OF_A14] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A14] | Value : " << boolState[relevant_evt_OF_A14] << endl;
	//cout << "Attribute :  boolState[failF_OF_A14] | Value : " << boolState[failF_OF_A14] << endl;
	//cout << "Attribute :  boolState[failS_OF_A14] | Value : " << boolState[failS_OF_A14] << endl;
	//cout << "Attribute :  boolState[required_OF_A15] | Value : " << boolState[required_OF_A15] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A15] | Value : " << boolState[already_S_OF_A15] << endl;
	//cout << "Attribute :  boolState[S_OF_A15] | Value : " << boolState[S_OF_A15] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A15] | Value : " << boolState[relevant_evt_OF_A15] << endl;
	//cout << "Attribute :  boolState[required_OF_A17] | Value : " << boolState[required_OF_A17] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A17] | Value : " << boolState[already_S_OF_A17] << endl;
	//cout << "Attribute :  boolState[S_OF_A17] | Value : " << boolState[S_OF_A17] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A17] | Value : " << boolState[relevant_evt_OF_A17] << endl;
	//cout << "Attribute :  boolState[failF_OF_A17] | Value : " << boolState[failF_OF_A17] << endl;
	//cout << "Attribute :  boolState[required_OF_A18] | Value : " << boolState[required_OF_A18] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A18] | Value : " << boolState[already_S_OF_A18] << endl;
	//cout << "Attribute :  boolState[S_OF_A18] | Value : " << boolState[S_OF_A18] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A18] | Value : " << boolState[relevant_evt_OF_A18] << endl;
	//cout << "Attribute :  boolState[required_OF_A2] | Value : " << boolState[required_OF_A2] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A2] | Value : " << boolState[already_S_OF_A2] << endl;
	//cout << "Attribute :  boolState[S_OF_A2] | Value : " << boolState[S_OF_A2] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A2] | Value : " << boolState[relevant_evt_OF_A2] << endl;
	//cout << "Attribute :  boolState[required_OF_A20] | Value : " << boolState[required_OF_A20] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A20] | Value : " << boolState[already_S_OF_A20] << endl;
	//cout << "Attribute :  boolState[S_OF_A20] | Value : " << boolState[S_OF_A20] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A20] | Value : " << boolState[relevant_evt_OF_A20] << endl;
	//cout << "Attribute :  boolState[failF_OF_A20] | Value : " << boolState[failF_OF_A20] << endl;
	//cout << "Attribute :  boolState[required_OF_A21] | Value : " << boolState[required_OF_A21] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A21] | Value : " << boolState[already_S_OF_A21] << endl;
	//cout << "Attribute :  boolState[S_OF_A21] | Value : " << boolState[S_OF_A21] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A21] | Value : " << boolState[relevant_evt_OF_A21] << endl;
	//cout << "Attribute :  boolState[required_OF_A23] | Value : " << boolState[required_OF_A23] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A23] | Value : " << boolState[already_S_OF_A23] << endl;
	//cout << "Attribute :  boolState[S_OF_A23] | Value : " << boolState[S_OF_A23] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A23] | Value : " << boolState[relevant_evt_OF_A23] << endl;
	//cout << "Attribute :  boolState[failF_OF_A23] | Value : " << boolState[failF_OF_A23] << endl;
	//cout << "Attribute :  boolState[required_OF_A24] | Value : " << boolState[required_OF_A24] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A24] | Value : " << boolState[already_S_OF_A24] << endl;
	//cout << "Attribute :  boolState[S_OF_A24] | Value : " << boolState[S_OF_A24] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A24] | Value : " << boolState[relevant_evt_OF_A24] << endl;
	//cout << "Attribute :  boolState[required_OF_A26] | Value : " << boolState[required_OF_A26] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A26] | Value : " << boolState[already_S_OF_A26] << endl;
	//cout << "Attribute :  boolState[S_OF_A26] | Value : " << boolState[S_OF_A26] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A26] | Value : " << boolState[relevant_evt_OF_A26] << endl;
	//cout << "Attribute :  boolState[failF_OF_A26] | Value : " << boolState[failF_OF_A26] << endl;
	//cout << "Attribute :  boolState[required_OF_A27] | Value : " << boolState[required_OF_A27] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A27] | Value : " << boolState[already_S_OF_A27] << endl;
	//cout << "Attribute :  boolState[S_OF_A27] | Value : " << boolState[S_OF_A27] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A27] | Value : " << boolState[relevant_evt_OF_A27] << endl;
	//cout << "Attribute :  boolState[required_OF_A29] | Value : " << boolState[required_OF_A29] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A29] | Value : " << boolState[already_S_OF_A29] << endl;
	//cout << "Attribute :  boolState[S_OF_A29] | Value : " << boolState[S_OF_A29] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A29] | Value : " << boolState[relevant_evt_OF_A29] << endl;
	//cout << "Attribute :  boolState[failF_OF_A29] | Value : " << boolState[failF_OF_A29] << endl;
	//cout << "Attribute :  boolState[required_OF_A3] | Value : " << boolState[required_OF_A3] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A3] | Value : " << boolState[already_S_OF_A3] << endl;
	//cout << "Attribute :  boolState[S_OF_A3] | Value : " << boolState[S_OF_A3] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A3] | Value : " << boolState[relevant_evt_OF_A3] << endl;
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
	//cout << "Attribute :  boolState[required_OF_A37] | Value : " << boolState[required_OF_A37] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A37] | Value : " << boolState[already_S_OF_A37] << endl;
	//cout << "Attribute :  boolState[S_OF_A37] | Value : " << boolState[S_OF_A37] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A37] | Value : " << boolState[relevant_evt_OF_A37] << endl;
	//cout << "Attribute :  boolState[required_OF_A38] | Value : " << boolState[required_OF_A38] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A38] | Value : " << boolState[already_S_OF_A38] << endl;
	//cout << "Attribute :  boolState[S_OF_A38] | Value : " << boolState[S_OF_A38] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A38] | Value : " << boolState[relevant_evt_OF_A38] << endl;
	//cout << "Attribute :  boolState[required_OF_A39] | Value : " << boolState[required_OF_A39] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A39] | Value : " << boolState[already_S_OF_A39] << endl;
	//cout << "Attribute :  boolState[S_OF_A39] | Value : " << boolState[S_OF_A39] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A39] | Value : " << boolState[relevant_evt_OF_A39] << endl;
	//cout << "Attribute :  boolState[required_OF_A40] | Value : " << boolState[required_OF_A40] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A40] | Value : " << boolState[already_S_OF_A40] << endl;
	//cout << "Attribute :  boolState[S_OF_A40] | Value : " << boolState[S_OF_A40] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A40] | Value : " << boolState[relevant_evt_OF_A40] << endl;
	//cout << "Attribute :  boolState[required_OF_A41] | Value : " << boolState[required_OF_A41] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A41] | Value : " << boolState[already_S_OF_A41] << endl;
	//cout << "Attribute :  boolState[S_OF_A41] | Value : " << boolState[S_OF_A41] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A41] | Value : " << boolState[relevant_evt_OF_A41] << endl;
	//cout << "Attribute :  boolState[required_OF_A42] | Value : " << boolState[required_OF_A42] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A42] | Value : " << boolState[already_S_OF_A42] << endl;
	//cout << "Attribute :  boolState[S_OF_A42] | Value : " << boolState[S_OF_A42] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A42] | Value : " << boolState[relevant_evt_OF_A42] << endl;
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
	//cout << "Attribute :  boolState[failF_OF_A5] | Value : " << boolState[failF_OF_A5] << endl;
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
	//cout << "Attribute :  boolState[failF_OF_A54] | Value : " << boolState[failF_OF_A54] << endl;
	//cout << "Attribute :  boolState[required_OF_A55] | Value : " << boolState[required_OF_A55] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A55] | Value : " << boolState[already_S_OF_A55] << endl;
	//cout << "Attribute :  boolState[S_OF_A55] | Value : " << boolState[S_OF_A55] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A55] | Value : " << boolState[relevant_evt_OF_A55] << endl;
	//cout << "Attribute :  boolState[required_OF_A56] | Value : " << boolState[required_OF_A56] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A56] | Value : " << boolState[already_S_OF_A56] << endl;
	//cout << "Attribute :  boolState[S_OF_A56] | Value : " << boolState[S_OF_A56] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A56] | Value : " << boolState[relevant_evt_OF_A56] << endl;
	//cout << "Attribute :  boolState[failF_OF_A56] | Value : " << boolState[failF_OF_A56] << endl;
	//cout << "Attribute :  boolState[required_OF_A57] | Value : " << boolState[required_OF_A57] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A57] | Value : " << boolState[already_S_OF_A57] << endl;
	//cout << "Attribute :  boolState[S_OF_A57] | Value : " << boolState[S_OF_A57] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A57] | Value : " << boolState[relevant_evt_OF_A57] << endl;
	//cout << "Attribute :  boolState[failF_OF_A57] | Value : " << boolState[failF_OF_A57] << endl;
	//cout << "Attribute :  boolState[required_OF_A58] | Value : " << boolState[required_OF_A58] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A58] | Value : " << boolState[already_S_OF_A58] << endl;
	//cout << "Attribute :  boolState[S_OF_A58] | Value : " << boolState[S_OF_A58] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A58] | Value : " << boolState[relevant_evt_OF_A58] << endl;
	//cout << "Attribute :  boolState[required_OF_A59] | Value : " << boolState[required_OF_A59] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A59] | Value : " << boolState[already_S_OF_A59] << endl;
	//cout << "Attribute :  boolState[S_OF_A59] | Value : " << boolState[S_OF_A59] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A59] | Value : " << boolState[relevant_evt_OF_A59] << endl;
	//cout << "Attribute :  boolState[required_OF_A6] | Value : " << boolState[required_OF_A6] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A6] | Value : " << boolState[already_S_OF_A6] << endl;
	//cout << "Attribute :  boolState[S_OF_A6] | Value : " << boolState[S_OF_A6] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A6] | Value : " << boolState[relevant_evt_OF_A6] << endl;
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
	//cout << "Attribute :  boolState[failF_OF_A62] | Value : " << boolState[failF_OF_A62] << endl;
	//cout << "Attribute :  boolState[required_OF_A63] | Value : " << boolState[required_OF_A63] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A63] | Value : " << boolState[already_S_OF_A63] << endl;
	//cout << "Attribute :  boolState[S_OF_A63] | Value : " << boolState[S_OF_A63] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A63] | Value : " << boolState[relevant_evt_OF_A63] << endl;
	//cout << "Attribute :  boolState[failF_OF_A63] | Value : " << boolState[failF_OF_A63] << endl;
	//cout << "Attribute :  boolState[required_OF_A64] | Value : " << boolState[required_OF_A64] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A64] | Value : " << boolState[already_S_OF_A64] << endl;
	//cout << "Attribute :  boolState[S_OF_A64] | Value : " << boolState[S_OF_A64] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A64] | Value : " << boolState[relevant_evt_OF_A64] << endl;
	//cout << "Attribute :  boolState[failF_OF_A64] | Value : " << boolState[failF_OF_A64] << endl;
	//cout << "Attribute :  boolState[required_OF_A65] | Value : " << boolState[required_OF_A65] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A65] | Value : " << boolState[already_S_OF_A65] << endl;
	//cout << "Attribute :  boolState[S_OF_A65] | Value : " << boolState[S_OF_A65] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A65] | Value : " << boolState[relevant_evt_OF_A65] << endl;
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
	//cout << "Attribute :  boolState[failF_OF_A69] | Value : " << boolState[failF_OF_A69] << endl;
	//cout << "Attribute :  boolState[required_OF_A70] | Value : " << boolState[required_OF_A70] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A70] | Value : " << boolState[already_S_OF_A70] << endl;
	//cout << "Attribute :  boolState[S_OF_A70] | Value : " << boolState[S_OF_A70] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A70] | Value : " << boolState[relevant_evt_OF_A70] << endl;
	//cout << "Attribute :  boolState[required_OF_A72] | Value : " << boolState[required_OF_A72] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A72] | Value : " << boolState[already_S_OF_A72] << endl;
	//cout << "Attribute :  boolState[S_OF_A72] | Value : " << boolState[S_OF_A72] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A72] | Value : " << boolState[relevant_evt_OF_A72] << endl;
	//cout << "Attribute :  boolState[required_OF_A73] | Value : " << boolState[required_OF_A73] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A73] | Value : " << boolState[already_S_OF_A73] << endl;
	//cout << "Attribute :  boolState[S_OF_A73] | Value : " << boolState[S_OF_A73] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A73] | Value : " << boolState[relevant_evt_OF_A73] << endl;
	//cout << "Attribute :  boolState[failF_OF_A73] | Value : " << boolState[failF_OF_A73] << endl;
	//cout << "Attribute :  boolState[failS_OF_A73] | Value : " << boolState[failS_OF_A73] << endl;
	//cout << "Attribute :  boolState[required_OF_A74] | Value : " << boolState[required_OF_A74] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A74] | Value : " << boolState[already_S_OF_A74] << endl;
	//cout << "Attribute :  boolState[S_OF_A74] | Value : " << boolState[S_OF_A74] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A74] | Value : " << boolState[relevant_evt_OF_A74] << endl;
	//cout << "Attribute :  boolState[failF_OF_A74] | Value : " << boolState[failF_OF_A74] << endl;
	//cout << "Attribute :  boolState[failS_OF_A74] | Value : " << boolState[failS_OF_A74] << endl;
	//cout << "Attribute :  boolState[required_OF_A75] | Value : " << boolState[required_OF_A75] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A75] | Value : " << boolState[already_S_OF_A75] << endl;
	//cout << "Attribute :  boolState[S_OF_A75] | Value : " << boolState[S_OF_A75] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A75] | Value : " << boolState[relevant_evt_OF_A75] << endl;
	//cout << "Attribute :  boolState[failF_OF_A75] | Value : " << boolState[failF_OF_A75] << endl;
	//cout << "Attribute :  boolState[failS_OF_A75] | Value : " << boolState[failS_OF_A75] << endl;
	//cout << "Attribute :  boolState[required_OF_A76] | Value : " << boolState[required_OF_A76] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A76] | Value : " << boolState[already_S_OF_A76] << endl;
	//cout << "Attribute :  boolState[S_OF_A76] | Value : " << boolState[S_OF_A76] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A76] | Value : " << boolState[relevant_evt_OF_A76] << endl;
	//cout << "Attribute :  boolState[required_OF_A78] | Value : " << boolState[required_OF_A78] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A78] | Value : " << boolState[already_S_OF_A78] << endl;
	//cout << "Attribute :  boolState[S_OF_A78] | Value : " << boolState[S_OF_A78] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A78] | Value : " << boolState[relevant_evt_OF_A78] << endl;
	//cout << "Attribute :  boolState[failF_OF_A78] | Value : " << boolState[failF_OF_A78] << endl;
	//cout << "Attribute :  boolState[failS_OF_A78] | Value : " << boolState[failS_OF_A78] << endl;
	//cout << "Attribute :  boolState[required_OF_A79] | Value : " << boolState[required_OF_A79] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A79] | Value : " << boolState[already_S_OF_A79] << endl;
	//cout << "Attribute :  boolState[S_OF_A79] | Value : " << boolState[S_OF_A79] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A79] | Value : " << boolState[relevant_evt_OF_A79] << endl;
	//cout << "Attribute :  boolState[failF_OF_A79] | Value : " << boolState[failF_OF_A79] << endl;
	//cout << "Attribute :  boolState[failS_OF_A79] | Value : " << boolState[failS_OF_A79] << endl;
	//cout << "Attribute :  boolState[required_OF_A8] | Value : " << boolState[required_OF_A8] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A8] | Value : " << boolState[already_S_OF_A8] << endl;
	//cout << "Attribute :  boolState[S_OF_A8] | Value : " << boolState[S_OF_A8] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A8] | Value : " << boolState[relevant_evt_OF_A8] << endl;
	//cout << "Attribute :  boolState[failF_OF_A8] | Value : " << boolState[failF_OF_A8] << endl;
	//cout << "Attribute :  boolState[required_OF_A80] | Value : " << boolState[required_OF_A80] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A80] | Value : " << boolState[already_S_OF_A80] << endl;
	//cout << "Attribute :  boolState[S_OF_A80] | Value : " << boolState[S_OF_A80] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A80] | Value : " << boolState[relevant_evt_OF_A80] << endl;
	//cout << "Attribute :  boolState[failF_OF_A80] | Value : " << boolState[failF_OF_A80] << endl;
	//cout << "Attribute :  boolState[failS_OF_A80] | Value : " << boolState[failS_OF_A80] << endl;
	//cout << "Attribute :  boolState[required_OF_A81] | Value : " << boolState[required_OF_A81] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A81] | Value : " << boolState[already_S_OF_A81] << endl;
	//cout << "Attribute :  boolState[S_OF_A81] | Value : " << boolState[S_OF_A81] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A81] | Value : " << boolState[relevant_evt_OF_A81] << endl;
	//cout << "Attribute :  boolState[required_OF_A83] | Value : " << boolState[required_OF_A83] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A83] | Value : " << boolState[already_S_OF_A83] << endl;
	//cout << "Attribute :  boolState[S_OF_A83] | Value : " << boolState[S_OF_A83] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A83] | Value : " << boolState[relevant_evt_OF_A83] << endl;
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
	//cout << "Attribute :  boolState[required_OF_A89] | Value : " << boolState[required_OF_A89] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A89] | Value : " << boolState[already_S_OF_A89] << endl;
	//cout << "Attribute :  boolState[S_OF_A89] | Value : " << boolState[S_OF_A89] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A89] | Value : " << boolState[relevant_evt_OF_A89] << endl;
	//cout << "Attribute :  boolState[failF_OF_A89] | Value : " << boolState[failF_OF_A89] << endl;
	//cout << "Attribute :  boolState[required_OF_A9] | Value : " << boolState[required_OF_A9] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A9] | Value : " << boolState[already_S_OF_A9] << endl;
	//cout << "Attribute :  boolState[S_OF_A9] | Value : " << boolState[S_OF_A9] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A9] | Value : " << boolState[relevant_evt_OF_A9] << endl;
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
	//cout << "Attribute :  boolState[required_OF_A94] | Value : " << boolState[required_OF_A94] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A94] | Value : " << boolState[already_S_OF_A94] << endl;
	//cout << "Attribute :  boolState[S_OF_A94] | Value : " << boolState[S_OF_A94] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A94] | Value : " << boolState[relevant_evt_OF_A94] << endl;
	//cout << "Attribute :  boolState[required_OF_A95] | Value : " << boolState[required_OF_A95] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A95] | Value : " << boolState[already_S_OF_A95] << endl;
	//cout << "Attribute :  boolState[S_OF_A95] | Value : " << boolState[S_OF_A95] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A95] | Value : " << boolState[relevant_evt_OF_A95] << endl;
	//cout << "Attribute :  boolState[failF_OF_A95] | Value : " << boolState[failF_OF_A95] << endl;
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
	//cout << "Attribute :  boolState[required_OF_f_A36] | Value : " << boolState[required_OF_f_A36] << endl;
	//cout << "Attribute :  boolState[already_S_OF_f_A36] | Value : " << boolState[already_S_OF_f_A36] << endl;
	//cout << "Attribute :  boolState[S_OF_f_A36] | Value : " << boolState[S_OF_f_A36] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_f_A36] | Value : " << boolState[relevant_evt_OF_f_A36] << endl;
	//cout << "Attribute :  boolState[failF_OF_f_A36] | Value : " << boolState[failF_OF_f_A36] << endl;
	//cout << "Attribute :  boolState[required_OF_f_A37] | Value : " << boolState[required_OF_f_A37] << endl;
	//cout << "Attribute :  boolState[already_S_OF_f_A37] | Value : " << boolState[already_S_OF_f_A37] << endl;
	//cout << "Attribute :  boolState[S_OF_f_A37] | Value : " << boolState[S_OF_f_A37] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_f_A37] | Value : " << boolState[relevant_evt_OF_f_A37] << endl;
	//cout << "Attribute :  boolState[failF_OF_f_A37] | Value : " << boolState[failF_OF_f_A37] << endl;
	//cout << "Attribute :  boolState[required_OF_f_A38] | Value : " << boolState[required_OF_f_A38] << endl;
	//cout << "Attribute :  boolState[already_S_OF_f_A38] | Value : " << boolState[already_S_OF_f_A38] << endl;
	//cout << "Attribute :  boolState[S_OF_f_A38] | Value : " << boolState[S_OF_f_A38] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_f_A38] | Value : " << boolState[relevant_evt_OF_f_A38] << endl;
	//cout << "Attribute :  boolState[failF_OF_f_A38] | Value : " << boolState[failF_OF_f_A38] << endl;
	//cout << "Attribute :  boolState[required_OF_f_A39] | Value : " << boolState[required_OF_f_A39] << endl;
	//cout << "Attribute :  boolState[already_S_OF_f_A39] | Value : " << boolState[already_S_OF_f_A39] << endl;
	//cout << "Attribute :  boolState[S_OF_f_A39] | Value : " << boolState[S_OF_f_A39] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_f_A39] | Value : " << boolState[relevant_evt_OF_f_A39] << endl;
	//cout << "Attribute :  boolState[failF_OF_f_A39] | Value : " << boolState[failF_OF_f_A39] << endl;
	//cout << "Attribute :  boolState[required_OF_f_A40] | Value : " << boolState[required_OF_f_A40] << endl;
	//cout << "Attribute :  boolState[already_S_OF_f_A40] | Value : " << boolState[already_S_OF_f_A40] << endl;
	//cout << "Attribute :  boolState[S_OF_f_A40] | Value : " << boolState[S_OF_f_A40] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_f_A40] | Value : " << boolState[relevant_evt_OF_f_A40] << endl;
	//cout << "Attribute :  boolState[failF_OF_f_A40] | Value : " << boolState[failF_OF_f_A40] << endl;
	//cout << "Attribute :  boolState[required_OF_f_A42] | Value : " << boolState[required_OF_f_A42] << endl;
	//cout << "Attribute :  boolState[already_S_OF_f_A42] | Value : " << boolState[already_S_OF_f_A42] << endl;
	//cout << "Attribute :  boolState[S_OF_f_A42] | Value : " << boolState[S_OF_f_A42] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_f_A42] | Value : " << boolState[relevant_evt_OF_f_A42] << endl;
	//cout << "Attribute :  boolState[failF_OF_f_A42] | Value : " << boolState[failF_OF_f_A42] << endl;
	//cout << "Attribute :  boolState[required_OF_f_A43] | Value : " << boolState[required_OF_f_A43] << endl;
	//cout << "Attribute :  boolState[already_S_OF_f_A43] | Value : " << boolState[already_S_OF_f_A43] << endl;
	//cout << "Attribute :  boolState[S_OF_f_A43] | Value : " << boolState[S_OF_f_A43] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_f_A43] | Value : " << boolState[relevant_evt_OF_f_A43] << endl;
	//cout << "Attribute :  boolState[failF_OF_f_A43] | Value : " << boolState[failF_OF_f_A43] << endl;
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
	//cout << "Attribute :  boolState[required_OF_f_A50] | Value : " << boolState[required_OF_f_A50] << endl;
	//cout << "Attribute :  boolState[already_S_OF_f_A50] | Value : " << boolState[already_S_OF_f_A50] << endl;
	//cout << "Attribute :  boolState[S_OF_f_A50] | Value : " << boolState[S_OF_f_A50] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_f_A50] | Value : " << boolState[relevant_evt_OF_f_A50] << endl;
	//cout << "Attribute :  boolState[failF_OF_f_A50] | Value : " << boolState[failF_OF_f_A50] << endl;
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
	//cout << "Attribute :  boolState[required_OF_f_A53] | Value : " << boolState[required_OF_f_A53] << endl;
	//cout << "Attribute :  boolState[already_S_OF_f_A53] | Value : " << boolState[already_S_OF_f_A53] << endl;
	//cout << "Attribute :  boolState[S_OF_f_A53] | Value : " << boolState[S_OF_f_A53] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_f_A53] | Value : " << boolState[relevant_evt_OF_f_A53] << endl;
	//cout << "Attribute :  boolState[failF_OF_f_A53] | Value : " << boolState[failF_OF_f_A53] << endl;
	//cout << "Attribute :  boolState[required_OF_i_A36] | Value : " << boolState[required_OF_i_A36] << endl;
	//cout << "Attribute :  boolState[already_S_OF_i_A36] | Value : " << boolState[already_S_OF_i_A36] << endl;
	//cout << "Attribute :  boolState[S_OF_i_A36] | Value : " << boolState[S_OF_i_A36] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_i_A36] | Value : " << boolState[relevant_evt_OF_i_A36] << endl;
	//cout << "Attribute :  boolState[failI_OF_i_A36] | Value : " << boolState[failI_OF_i_A36] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_i_A36] | Value : " << boolState[to_be_fired_OF_i_A36] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_i_A36] | Value : " << boolState[already_standby_OF_i_A36] << endl;
	//cout << "Attribute :  boolState[already_required_OF_i_A36] | Value : " << boolState[already_required_OF_i_A36] << endl;
	//cout << "Attribute :  boolState[required_OF_i_A37] | Value : " << boolState[required_OF_i_A37] << endl;
	//cout << "Attribute :  boolState[already_S_OF_i_A37] | Value : " << boolState[already_S_OF_i_A37] << endl;
	//cout << "Attribute :  boolState[S_OF_i_A37] | Value : " << boolState[S_OF_i_A37] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_i_A37] | Value : " << boolState[relevant_evt_OF_i_A37] << endl;
	//cout << "Attribute :  boolState[failI_OF_i_A37] | Value : " << boolState[failI_OF_i_A37] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_i_A37] | Value : " << boolState[to_be_fired_OF_i_A37] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_i_A37] | Value : " << boolState[already_standby_OF_i_A37] << endl;
	//cout << "Attribute :  boolState[already_required_OF_i_A37] | Value : " << boolState[already_required_OF_i_A37] << endl;
	//cout << "Attribute :  boolState[required_OF_i_A38] | Value : " << boolState[required_OF_i_A38] << endl;
	//cout << "Attribute :  boolState[already_S_OF_i_A38] | Value : " << boolState[already_S_OF_i_A38] << endl;
	//cout << "Attribute :  boolState[S_OF_i_A38] | Value : " << boolState[S_OF_i_A38] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_i_A38] | Value : " << boolState[relevant_evt_OF_i_A38] << endl;
	//cout << "Attribute :  boolState[failI_OF_i_A38] | Value : " << boolState[failI_OF_i_A38] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_i_A38] | Value : " << boolState[to_be_fired_OF_i_A38] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_i_A38] | Value : " << boolState[already_standby_OF_i_A38] << endl;
	//cout << "Attribute :  boolState[already_required_OF_i_A38] | Value : " << boolState[already_required_OF_i_A38] << endl;
	//cout << "Attribute :  boolState[required_OF_i_A39] | Value : " << boolState[required_OF_i_A39] << endl;
	//cout << "Attribute :  boolState[already_S_OF_i_A39] | Value : " << boolState[already_S_OF_i_A39] << endl;
	//cout << "Attribute :  boolState[S_OF_i_A39] | Value : " << boolState[S_OF_i_A39] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_i_A39] | Value : " << boolState[relevant_evt_OF_i_A39] << endl;
	//cout << "Attribute :  boolState[failI_OF_i_A39] | Value : " << boolState[failI_OF_i_A39] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_i_A39] | Value : " << boolState[to_be_fired_OF_i_A39] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_i_A39] | Value : " << boolState[already_standby_OF_i_A39] << endl;
	//cout << "Attribute :  boolState[already_required_OF_i_A39] | Value : " << boolState[already_required_OF_i_A39] << endl;
	//cout << "Attribute :  boolState[required_OF_i_A40] | Value : " << boolState[required_OF_i_A40] << endl;
	//cout << "Attribute :  boolState[already_S_OF_i_A40] | Value : " << boolState[already_S_OF_i_A40] << endl;
	//cout << "Attribute :  boolState[S_OF_i_A40] | Value : " << boolState[S_OF_i_A40] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_i_A40] | Value : " << boolState[relevant_evt_OF_i_A40] << endl;
	//cout << "Attribute :  boolState[failI_OF_i_A40] | Value : " << boolState[failI_OF_i_A40] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_i_A40] | Value : " << boolState[to_be_fired_OF_i_A40] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_i_A40] | Value : " << boolState[already_standby_OF_i_A40] << endl;
	//cout << "Attribute :  boolState[already_required_OF_i_A40] | Value : " << boolState[already_required_OF_i_A40] << endl;
	//cout << "Attribute :  boolState[required_OF_i_A42] | Value : " << boolState[required_OF_i_A42] << endl;
	//cout << "Attribute :  boolState[already_S_OF_i_A42] | Value : " << boolState[already_S_OF_i_A42] << endl;
	//cout << "Attribute :  boolState[S_OF_i_A42] | Value : " << boolState[S_OF_i_A42] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_i_A42] | Value : " << boolState[relevant_evt_OF_i_A42] << endl;
	//cout << "Attribute :  boolState[failI_OF_i_A42] | Value : " << boolState[failI_OF_i_A42] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_i_A42] | Value : " << boolState[to_be_fired_OF_i_A42] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_i_A42] | Value : " << boolState[already_standby_OF_i_A42] << endl;
	//cout << "Attribute :  boolState[already_required_OF_i_A42] | Value : " << boolState[already_required_OF_i_A42] << endl;
	//cout << "Attribute :  boolState[required_OF_i_A43] | Value : " << boolState[required_OF_i_A43] << endl;
	//cout << "Attribute :  boolState[already_S_OF_i_A43] | Value : " << boolState[already_S_OF_i_A43] << endl;
	//cout << "Attribute :  boolState[S_OF_i_A43] | Value : " << boolState[S_OF_i_A43] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_i_A43] | Value : " << boolState[relevant_evt_OF_i_A43] << endl;
	//cout << "Attribute :  boolState[failI_OF_i_A43] | Value : " << boolState[failI_OF_i_A43] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_i_A43] | Value : " << boolState[to_be_fired_OF_i_A43] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_i_A43] | Value : " << boolState[already_standby_OF_i_A43] << endl;
	//cout << "Attribute :  boolState[already_required_OF_i_A43] | Value : " << boolState[already_required_OF_i_A43] << endl;
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
	//cout << "Attribute :  boolState[required_OF_i_A50] | Value : " << boolState[required_OF_i_A50] << endl;
	//cout << "Attribute :  boolState[already_S_OF_i_A50] | Value : " << boolState[already_S_OF_i_A50] << endl;
	//cout << "Attribute :  boolState[S_OF_i_A50] | Value : " << boolState[S_OF_i_A50] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_i_A50] | Value : " << boolState[relevant_evt_OF_i_A50] << endl;
	//cout << "Attribute :  boolState[failI_OF_i_A50] | Value : " << boolState[failI_OF_i_A50] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_i_A50] | Value : " << boolState[to_be_fired_OF_i_A50] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_i_A50] | Value : " << boolState[already_standby_OF_i_A50] << endl;
	//cout << "Attribute :  boolState[already_required_OF_i_A50] | Value : " << boolState[already_required_OF_i_A50] << endl;
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
	//cout << "Attribute :  boolState[required_OF_i_A53] | Value : " << boolState[required_OF_i_A53] << endl;
	//cout << "Attribute :  boolState[already_S_OF_i_A53] | Value : " << boolState[already_S_OF_i_A53] << endl;
	//cout << "Attribute :  boolState[S_OF_i_A53] | Value : " << boolState[S_OF_i_A53] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_i_A53] | Value : " << boolState[relevant_evt_OF_i_A53] << endl;
	//cout << "Attribute :  boolState[failI_OF_i_A53] | Value : " << boolState[failI_OF_i_A53] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_i_A53] | Value : " << boolState[to_be_fired_OF_i_A53] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_i_A53] | Value : " << boolState[already_standby_OF_i_A53] << endl;
	//cout << "Attribute :  boolState[already_required_OF_i_A53] | Value : " << boolState[already_required_OF_i_A53] << endl;
}

bool storm::figaro::FigaroProgram_vgs_4_Trim_Article_repair::figaromodelhasinstransitions()
{
	return true;
}
void storm::figaro::FigaroProgram_vgs_4_Trim_Article_repair::doReinitialisations()
{
	boolState[required_OF_A0] = REINITIALISATION_OF_required_OF_A0;
	boolState[S_OF_A0] = REINITIALISATION_OF_S_OF_A0;
	boolState[relevant_evt_OF_A0] = REINITIALISATION_OF_relevant_evt_OF_A0;
	boolState[required_OF_A1] = REINITIALISATION_OF_required_OF_A1;
	boolState[S_OF_A1] = REINITIALISATION_OF_S_OF_A1;
	boolState[relevant_evt_OF_A1] = REINITIALISATION_OF_relevant_evt_OF_A1;
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
	boolState[required_OF_A11] = REINITIALISATION_OF_required_OF_A11;
	boolState[S_OF_A11] = REINITIALISATION_OF_S_OF_A11;
	boolState[relevant_evt_OF_A11] = REINITIALISATION_OF_relevant_evt_OF_A11;
	boolState[required_OF_A12] = REINITIALISATION_OF_required_OF_A12;
	boolState[S_OF_A12] = REINITIALISATION_OF_S_OF_A12;
	boolState[relevant_evt_OF_A12] = REINITIALISATION_OF_relevant_evt_OF_A12;
	boolState[required_OF_A14] = REINITIALISATION_OF_required_OF_A14;
	boolState[S_OF_A14] = REINITIALISATION_OF_S_OF_A14;
	boolState[relevant_evt_OF_A14] = REINITIALISATION_OF_relevant_evt_OF_A14;
	boolState[required_OF_A15] = REINITIALISATION_OF_required_OF_A15;
	boolState[S_OF_A15] = REINITIALISATION_OF_S_OF_A15;
	boolState[relevant_evt_OF_A15] = REINITIALISATION_OF_relevant_evt_OF_A15;
	boolState[required_OF_A17] = REINITIALISATION_OF_required_OF_A17;
	boolState[S_OF_A17] = REINITIALISATION_OF_S_OF_A17;
	boolState[relevant_evt_OF_A17] = REINITIALISATION_OF_relevant_evt_OF_A17;
	boolState[required_OF_A18] = REINITIALISATION_OF_required_OF_A18;
	boolState[S_OF_A18] = REINITIALISATION_OF_S_OF_A18;
	boolState[relevant_evt_OF_A18] = REINITIALISATION_OF_relevant_evt_OF_A18;
	boolState[required_OF_A2] = REINITIALISATION_OF_required_OF_A2;
	boolState[S_OF_A2] = REINITIALISATION_OF_S_OF_A2;
	boolState[relevant_evt_OF_A2] = REINITIALISATION_OF_relevant_evt_OF_A2;
	boolState[required_OF_A20] = REINITIALISATION_OF_required_OF_A20;
	boolState[S_OF_A20] = REINITIALISATION_OF_S_OF_A20;
	boolState[relevant_evt_OF_A20] = REINITIALISATION_OF_relevant_evt_OF_A20;
	boolState[required_OF_A21] = REINITIALISATION_OF_required_OF_A21;
	boolState[S_OF_A21] = REINITIALISATION_OF_S_OF_A21;
	boolState[relevant_evt_OF_A21] = REINITIALISATION_OF_relevant_evt_OF_A21;
	boolState[required_OF_A23] = REINITIALISATION_OF_required_OF_A23;
	boolState[S_OF_A23] = REINITIALISATION_OF_S_OF_A23;
	boolState[relevant_evt_OF_A23] = REINITIALISATION_OF_relevant_evt_OF_A23;
	boolState[required_OF_A24] = REINITIALISATION_OF_required_OF_A24;
	boolState[S_OF_A24] = REINITIALISATION_OF_S_OF_A24;
	boolState[relevant_evt_OF_A24] = REINITIALISATION_OF_relevant_evt_OF_A24;
	boolState[required_OF_A26] = REINITIALISATION_OF_required_OF_A26;
	boolState[S_OF_A26] = REINITIALISATION_OF_S_OF_A26;
	boolState[relevant_evt_OF_A26] = REINITIALISATION_OF_relevant_evt_OF_A26;
	boolState[required_OF_A27] = REINITIALISATION_OF_required_OF_A27;
	boolState[S_OF_A27] = REINITIALISATION_OF_S_OF_A27;
	boolState[relevant_evt_OF_A27] = REINITIALISATION_OF_relevant_evt_OF_A27;
	boolState[required_OF_A29] = REINITIALISATION_OF_required_OF_A29;
	boolState[S_OF_A29] = REINITIALISATION_OF_S_OF_A29;
	boolState[relevant_evt_OF_A29] = REINITIALISATION_OF_relevant_evt_OF_A29;
	boolState[required_OF_A3] = REINITIALISATION_OF_required_OF_A3;
	boolState[S_OF_A3] = REINITIALISATION_OF_S_OF_A3;
	boolState[relevant_evt_OF_A3] = REINITIALISATION_OF_relevant_evt_OF_A3;
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
	boolState[required_OF_A38] = REINITIALISATION_OF_required_OF_A38;
	boolState[S_OF_A38] = REINITIALISATION_OF_S_OF_A38;
	boolState[relevant_evt_OF_A38] = REINITIALISATION_OF_relevant_evt_OF_A38;
	boolState[required_OF_A39] = REINITIALISATION_OF_required_OF_A39;
	boolState[S_OF_A39] = REINITIALISATION_OF_S_OF_A39;
	boolState[relevant_evt_OF_A39] = REINITIALISATION_OF_relevant_evt_OF_A39;
	boolState[required_OF_A40] = REINITIALISATION_OF_required_OF_A40;
	boolState[S_OF_A40] = REINITIALISATION_OF_S_OF_A40;
	boolState[relevant_evt_OF_A40] = REINITIALISATION_OF_relevant_evt_OF_A40;
	boolState[required_OF_A41] = REINITIALISATION_OF_required_OF_A41;
	boolState[S_OF_A41] = REINITIALISATION_OF_S_OF_A41;
	boolState[relevant_evt_OF_A41] = REINITIALISATION_OF_relevant_evt_OF_A41;
	boolState[required_OF_A42] = REINITIALISATION_OF_required_OF_A42;
	boolState[S_OF_A42] = REINITIALISATION_OF_S_OF_A42;
	boolState[relevant_evt_OF_A42] = REINITIALISATION_OF_relevant_evt_OF_A42;
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
	boolState[required_OF_A6] = REINITIALISATION_OF_required_OF_A6;
	boolState[S_OF_A6] = REINITIALISATION_OF_S_OF_A6;
	boolState[relevant_evt_OF_A6] = REINITIALISATION_OF_relevant_evt_OF_A6;
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
	boolState[required_OF_A67] = REINITIALISATION_OF_required_OF_A67;
	boolState[S_OF_A67] = REINITIALISATION_OF_S_OF_A67;
	boolState[relevant_evt_OF_A67] = REINITIALISATION_OF_relevant_evt_OF_A67;
	boolState[required_OF_A68] = REINITIALISATION_OF_required_OF_A68;
	boolState[S_OF_A68] = REINITIALISATION_OF_S_OF_A68;
	boolState[relevant_evt_OF_A68] = REINITIALISATION_OF_relevant_evt_OF_A68;
	boolState[required_OF_A69] = REINITIALISATION_OF_required_OF_A69;
	boolState[S_OF_A69] = REINITIALISATION_OF_S_OF_A69;
	boolState[relevant_evt_OF_A69] = REINITIALISATION_OF_relevant_evt_OF_A69;
	boolState[required_OF_A70] = REINITIALISATION_OF_required_OF_A70;
	boolState[S_OF_A70] = REINITIALISATION_OF_S_OF_A70;
	boolState[relevant_evt_OF_A70] = REINITIALISATION_OF_relevant_evt_OF_A70;
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
	boolState[required_OF_A89] = REINITIALISATION_OF_required_OF_A89;
	boolState[S_OF_A89] = REINITIALISATION_OF_S_OF_A89;
	boolState[relevant_evt_OF_A89] = REINITIALISATION_OF_relevant_evt_OF_A89;
	boolState[required_OF_A9] = REINITIALISATION_OF_required_OF_A9;
	boolState[S_OF_A9] = REINITIALISATION_OF_S_OF_A9;
	boolState[relevant_evt_OF_A9] = REINITIALISATION_OF_relevant_evt_OF_A9;
	boolState[required_OF_A90] = REINITIALISATION_OF_required_OF_A90;
	boolState[S_OF_A90] = REINITIALISATION_OF_S_OF_A90;
	boolState[relevant_evt_OF_A90] = REINITIALISATION_OF_relevant_evt_OF_A90;
	boolState[required_OF_A91] = REINITIALISATION_OF_required_OF_A91;
	boolState[S_OF_A91] = REINITIALISATION_OF_S_OF_A91;
	boolState[relevant_evt_OF_A91] = REINITIALISATION_OF_relevant_evt_OF_A91;
	boolState[required_OF_A92] = REINITIALISATION_OF_required_OF_A92;
	boolState[S_OF_A92] = REINITIALISATION_OF_S_OF_A92;
	boolState[relevant_evt_OF_A92] = REINITIALISATION_OF_relevant_evt_OF_A92;
	boolState[required_OF_A94] = REINITIALISATION_OF_required_OF_A94;
	boolState[S_OF_A94] = REINITIALISATION_OF_S_OF_A94;
	boolState[relevant_evt_OF_A94] = REINITIALISATION_OF_relevant_evt_OF_A94;
	boolState[required_OF_A95] = REINITIALISATION_OF_required_OF_A95;
	boolState[S_OF_A95] = REINITIALISATION_OF_S_OF_A95;
	boolState[relevant_evt_OF_A95] = REINITIALISATION_OF_relevant_evt_OF_A95;
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
	boolState[required_OF_f_A36] = REINITIALISATION_OF_required_OF_f_A36;
	boolState[S_OF_f_A36] = REINITIALISATION_OF_S_OF_f_A36;
	boolState[relevant_evt_OF_f_A36] = REINITIALISATION_OF_relevant_evt_OF_f_A36;
	boolState[required_OF_f_A37] = REINITIALISATION_OF_required_OF_f_A37;
	boolState[S_OF_f_A37] = REINITIALISATION_OF_S_OF_f_A37;
	boolState[relevant_evt_OF_f_A37] = REINITIALISATION_OF_relevant_evt_OF_f_A37;
	boolState[required_OF_f_A38] = REINITIALISATION_OF_required_OF_f_A38;
	boolState[S_OF_f_A38] = REINITIALISATION_OF_S_OF_f_A38;
	boolState[relevant_evt_OF_f_A38] = REINITIALISATION_OF_relevant_evt_OF_f_A38;
	boolState[required_OF_f_A39] = REINITIALISATION_OF_required_OF_f_A39;
	boolState[S_OF_f_A39] = REINITIALISATION_OF_S_OF_f_A39;
	boolState[relevant_evt_OF_f_A39] = REINITIALISATION_OF_relevant_evt_OF_f_A39;
	boolState[required_OF_f_A40] = REINITIALISATION_OF_required_OF_f_A40;
	boolState[S_OF_f_A40] = REINITIALISATION_OF_S_OF_f_A40;
	boolState[relevant_evt_OF_f_A40] = REINITIALISATION_OF_relevant_evt_OF_f_A40;
	boolState[required_OF_f_A42] = REINITIALISATION_OF_required_OF_f_A42;
	boolState[S_OF_f_A42] = REINITIALISATION_OF_S_OF_f_A42;
	boolState[relevant_evt_OF_f_A42] = REINITIALISATION_OF_relevant_evt_OF_f_A42;
	boolState[required_OF_f_A43] = REINITIALISATION_OF_required_OF_f_A43;
	boolState[S_OF_f_A43] = REINITIALISATION_OF_S_OF_f_A43;
	boolState[relevant_evt_OF_f_A43] = REINITIALISATION_OF_relevant_evt_OF_f_A43;
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
	boolState[required_OF_f_A50] = REINITIALISATION_OF_required_OF_f_A50;
	boolState[S_OF_f_A50] = REINITIALISATION_OF_S_OF_f_A50;
	boolState[relevant_evt_OF_f_A50] = REINITIALISATION_OF_relevant_evt_OF_f_A50;
	boolState[required_OF_f_A51] = REINITIALISATION_OF_required_OF_f_A51;
	boolState[S_OF_f_A51] = REINITIALISATION_OF_S_OF_f_A51;
	boolState[relevant_evt_OF_f_A51] = REINITIALISATION_OF_relevant_evt_OF_f_A51;
	boolState[required_OF_f_A52] = REINITIALISATION_OF_required_OF_f_A52;
	boolState[S_OF_f_A52] = REINITIALISATION_OF_S_OF_f_A52;
	boolState[relevant_evt_OF_f_A52] = REINITIALISATION_OF_relevant_evt_OF_f_A52;
	boolState[required_OF_f_A53] = REINITIALISATION_OF_required_OF_f_A53;
	boolState[S_OF_f_A53] = REINITIALISATION_OF_S_OF_f_A53;
	boolState[relevant_evt_OF_f_A53] = REINITIALISATION_OF_relevant_evt_OF_f_A53;
	boolState[required_OF_i_A36] = REINITIALISATION_OF_required_OF_i_A36;
	boolState[S_OF_i_A36] = REINITIALISATION_OF_S_OF_i_A36;
	boolState[relevant_evt_OF_i_A36] = REINITIALISATION_OF_relevant_evt_OF_i_A36;
	boolState[to_be_fired_OF_i_A36] = REINITIALISATION_OF_to_be_fired_OF_i_A36;
	boolState[required_OF_i_A37] = REINITIALISATION_OF_required_OF_i_A37;
	boolState[S_OF_i_A37] = REINITIALISATION_OF_S_OF_i_A37;
	boolState[relevant_evt_OF_i_A37] = REINITIALISATION_OF_relevant_evt_OF_i_A37;
	boolState[to_be_fired_OF_i_A37] = REINITIALISATION_OF_to_be_fired_OF_i_A37;
	boolState[required_OF_i_A38] = REINITIALISATION_OF_required_OF_i_A38;
	boolState[S_OF_i_A38] = REINITIALISATION_OF_S_OF_i_A38;
	boolState[relevant_evt_OF_i_A38] = REINITIALISATION_OF_relevant_evt_OF_i_A38;
	boolState[to_be_fired_OF_i_A38] = REINITIALISATION_OF_to_be_fired_OF_i_A38;
	boolState[required_OF_i_A39] = REINITIALISATION_OF_required_OF_i_A39;
	boolState[S_OF_i_A39] = REINITIALISATION_OF_S_OF_i_A39;
	boolState[relevant_evt_OF_i_A39] = REINITIALISATION_OF_relevant_evt_OF_i_A39;
	boolState[to_be_fired_OF_i_A39] = REINITIALISATION_OF_to_be_fired_OF_i_A39;
	boolState[required_OF_i_A40] = REINITIALISATION_OF_required_OF_i_A40;
	boolState[S_OF_i_A40] = REINITIALISATION_OF_S_OF_i_A40;
	boolState[relevant_evt_OF_i_A40] = REINITIALISATION_OF_relevant_evt_OF_i_A40;
	boolState[to_be_fired_OF_i_A40] = REINITIALISATION_OF_to_be_fired_OF_i_A40;
	boolState[required_OF_i_A42] = REINITIALISATION_OF_required_OF_i_A42;
	boolState[S_OF_i_A42] = REINITIALISATION_OF_S_OF_i_A42;
	boolState[relevant_evt_OF_i_A42] = REINITIALISATION_OF_relevant_evt_OF_i_A42;
	boolState[to_be_fired_OF_i_A42] = REINITIALISATION_OF_to_be_fired_OF_i_A42;
	boolState[required_OF_i_A43] = REINITIALISATION_OF_required_OF_i_A43;
	boolState[S_OF_i_A43] = REINITIALISATION_OF_S_OF_i_A43;
	boolState[relevant_evt_OF_i_A43] = REINITIALISATION_OF_relevant_evt_OF_i_A43;
	boolState[to_be_fired_OF_i_A43] = REINITIALISATION_OF_to_be_fired_OF_i_A43;
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
	boolState[required_OF_i_A50] = REINITIALISATION_OF_required_OF_i_A50;
	boolState[S_OF_i_A50] = REINITIALISATION_OF_S_OF_i_A50;
	boolState[relevant_evt_OF_i_A50] = REINITIALISATION_OF_relevant_evt_OF_i_A50;
	boolState[to_be_fired_OF_i_A50] = REINITIALISATION_OF_to_be_fired_OF_i_A50;
	boolState[required_OF_i_A51] = REINITIALISATION_OF_required_OF_i_A51;
	boolState[S_OF_i_A51] = REINITIALISATION_OF_S_OF_i_A51;
	boolState[relevant_evt_OF_i_A51] = REINITIALISATION_OF_relevant_evt_OF_i_A51;
	boolState[to_be_fired_OF_i_A51] = REINITIALISATION_OF_to_be_fired_OF_i_A51;
	boolState[required_OF_i_A52] = REINITIALISATION_OF_required_OF_i_A52;
	boolState[S_OF_i_A52] = REINITIALISATION_OF_S_OF_i_A52;
	boolState[relevant_evt_OF_i_A52] = REINITIALISATION_OF_relevant_evt_OF_i_A52;
	boolState[to_be_fired_OF_i_A52] = REINITIALISATION_OF_to_be_fired_OF_i_A52;
	boolState[required_OF_i_A53] = REINITIALISATION_OF_required_OF_i_A53;
	boolState[S_OF_i_A53] = REINITIALISATION_OF_S_OF_i_A53;
	boolState[relevant_evt_OF_i_A53] = REINITIALISATION_OF_relevant_evt_OF_i_A53;
	boolState[to_be_fired_OF_i_A53] = REINITIALISATION_OF_to_be_fired_OF_i_A53;
}

void storm::figaro::FigaroProgram_vgs_4_Trim_Article_repair::fireOccurrence(int numFire)
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
		FIRE_xx10_OF_A100 = true;
	}

	if (numFire == 3)
	{
		FIRE_xx11_OF_A100 = true;
	}

	if (numFire == 4)
	{
		FIRE_xx10_OF_A101 = true;
	}

	if (numFire == 5)
	{
		FIRE_xx11_OF_A101 = true;
	}

	if (numFire == 6)
	{
		FIRE_xx10_OF_A102 = true;
	}

	if (numFire == 7)
	{
		FIRE_xx11_OF_A102 = true;
	}

	if (numFire == 8)
	{
		FIRE_xx17_OF_A11 = true;
	}

	if (numFire == 9)
	{
		FIRE_xx18_OF_A11 = true;
	}

	if (numFire == 10)
	{
		FIRE_xx19_OF_A11 = true;
	}

	if (numFire == 11)
	{
		FIRE_xx17_OF_A14 = true;
	}

	if (numFire == 12)
	{
		FIRE_xx18_OF_A14 = true;
	}

	if (numFire == 13)
	{
		FIRE_xx19_OF_A14 = true;
	}

	if (numFire == 14)
	{
		FIRE_xx10_OF_A17 = true;
	}

	if (numFire == 15)
	{
		FIRE_xx11_OF_A17 = true;
	}

	if (numFire == 16)
	{
		FIRE_xx10_OF_A20 = true;
	}

	if (numFire == 17)
	{
		FIRE_xx11_OF_A20 = true;
	}

	if (numFire == 18)
	{
		FIRE_xx10_OF_A23 = true;
	}

	if (numFire == 19)
	{
		FIRE_xx11_OF_A23 = true;
	}

	if (numFire == 20)
	{
		FIRE_xx10_OF_A26 = true;
	}

	if (numFire == 21)
	{
		FIRE_xx11_OF_A26 = true;
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
		FIRE_xx10_OF_A5 = true;
	}

	if (numFire == 27)
	{
		FIRE_xx11_OF_A5 = true;
	}

	if (numFire == 28)
	{
		FIRE_xx10_OF_A54 = true;
	}

	if (numFire == 29)
	{
		FIRE_xx11_OF_A54 = true;
	}

	if (numFire == 30)
	{
		FIRE_xx10_OF_A56 = true;
	}

	if (numFire == 31)
	{
		FIRE_xx11_OF_A56 = true;
	}

	if (numFire == 32)
	{
		FIRE_xx10_OF_A57 = true;
	}

	if (numFire == 33)
	{
		FIRE_xx11_OF_A57 = true;
	}

	if (numFire == 34)
	{
		FIRE_xx10_OF_A62 = true;
	}

	if (numFire == 35)
	{
		FIRE_xx11_OF_A62 = true;
	}

	if (numFire == 36)
	{
		FIRE_xx10_OF_A63 = true;
	}

	if (numFire == 37)
	{
		FIRE_xx11_OF_A63 = true;
	}

	if (numFire == 38)
	{
		FIRE_xx10_OF_A64 = true;
	}

	if (numFire == 39)
	{
		FIRE_xx11_OF_A64 = true;
	}

	if (numFire == 40)
	{
		FIRE_xx10_OF_A67 = true;
	}

	if (numFire == 41)
	{
		FIRE_xx11_OF_A67 = true;
	}

	if (numFire == 42)
	{
		FIRE_xx10_OF_A68 = true;
	}

	if (numFire == 43)
	{
		FIRE_xx11_OF_A68 = true;
	}

	if (numFire == 44)
	{
		FIRE_xx10_OF_A69 = true;
	}

	if (numFire == 45)
	{
		FIRE_xx11_OF_A69 = true;
	}

	if (numFire == 46)
	{
		FIRE_xx17_OF_A73 = true;
	}

	if (numFire == 47)
	{
		FIRE_xx18_OF_A73 = true;
	}

	if (numFire == 48)
	{
		FIRE_xx19_OF_A73 = true;
	}

	if (numFire == 49)
	{
		FIRE_xx17_OF_A74 = true;
	}

	if (numFire == 50)
	{
		FIRE_xx18_OF_A74 = true;
	}

	if (numFire == 51)
	{
		FIRE_xx19_OF_A74 = true;
	}

	if (numFire == 52)
	{
		FIRE_xx17_OF_A75 = true;
	}

	if (numFire == 53)
	{
		FIRE_xx18_OF_A75 = true;
	}

	if (numFire == 54)
	{
		FIRE_xx19_OF_A75 = true;
	}

	if (numFire == 55)
	{
		FIRE_xx17_OF_A78 = true;
	}

	if (numFire == 56)
	{
		FIRE_xx18_OF_A78 = true;
	}

	if (numFire == 57)
	{
		FIRE_xx19_OF_A78 = true;
	}

	if (numFire == 58)
	{
		FIRE_xx17_OF_A79 = true;
	}

	if (numFire == 59)
	{
		FIRE_xx18_OF_A79 = true;
	}

	if (numFire == 60)
	{
		FIRE_xx19_OF_A79 = true;
	}

	if (numFire == 61)
	{
		FIRE_xx10_OF_A8 = true;
	}

	if (numFire == 62)
	{
		FIRE_xx11_OF_A8 = true;
	}

	if (numFire == 63)
	{
		FIRE_xx17_OF_A80 = true;
	}

	if (numFire == 64)
	{
		FIRE_xx18_OF_A80 = true;
	}

	if (numFire == 65)
	{
		FIRE_xx19_OF_A80 = true;
	}

	if (numFire == 66)
	{
		FIRE_xx10_OF_A84 = true;
	}

	if (numFire == 67)
	{
		FIRE_xx11_OF_A84 = true;
	}

	if (numFire == 68)
	{
		FIRE_xx10_OF_A85 = true;
	}

	if (numFire == 69)
	{
		FIRE_xx11_OF_A85 = true;
	}

	if (numFire == 70)
	{
		FIRE_xx10_OF_A86 = true;
	}

	if (numFire == 71)
	{
		FIRE_xx11_OF_A86 = true;
	}

	if (numFire == 72)
	{
		FIRE_xx10_OF_A89 = true;
	}

	if (numFire == 73)
	{
		FIRE_xx11_OF_A89 = true;
	}

	if (numFire == 74)
	{
		FIRE_xx10_OF_A90 = true;
	}

	if (numFire == 75)
	{
		FIRE_xx11_OF_A90 = true;
	}

	if (numFire == 76)
	{
		FIRE_xx10_OF_A91 = true;
	}

	if (numFire == 77)
	{
		FIRE_xx11_OF_A91 = true;
	}

	if (numFire == 78)
	{
		FIRE_xx10_OF_A95 = true;
	}

	if (numFire == 79)
	{
		FIRE_xx11_OF_A95 = true;
	}

	if (numFire == 80)
	{
		FIRE_xx10_OF_A96 = true;
	}

	if (numFire == 81)
	{
		FIRE_xx11_OF_A96 = true;
	}

	if (numFire == 82)
	{
		FIRE_xx10_OF_A97 = true;
	}

	if (numFire == 83)
	{
		FIRE_xx11_OF_A97 = true;
	}

	if (numFire == 84)
	{
		FIRE_xx10_OF_f_A36 = true;
	}

	if (numFire == 85)
	{
		FIRE_xx11_OF_f_A36 = true;
	}

	if (numFire == 86)
	{
		FIRE_xx10_OF_f_A37 = true;
	}

	if (numFire == 87)
	{
		FIRE_xx11_OF_f_A37 = true;
	}

	if (numFire == 88)
	{
		FIRE_xx10_OF_f_A38 = true;
	}

	if (numFire == 89)
	{
		FIRE_xx11_OF_f_A38 = true;
	}

	if (numFire == 90)
	{
		FIRE_xx10_OF_f_A39 = true;
	}

	if (numFire == 91)
	{
		FIRE_xx11_OF_f_A39 = true;
	}

	if (numFire == 92)
	{
		FIRE_xx10_OF_f_A40 = true;
	}

	if (numFire == 93)
	{
		FIRE_xx11_OF_f_A40 = true;
	}

	if (numFire == 94)
	{
		FIRE_xx10_OF_f_A42 = true;
	}

	if (numFire == 95)
	{
		FIRE_xx11_OF_f_A42 = true;
	}

	if (numFire == 96)
	{
		FIRE_xx10_OF_f_A43 = true;
	}

	if (numFire == 97)
	{
		FIRE_xx11_OF_f_A43 = true;
	}

	if (numFire == 98)
	{
		FIRE_xx10_OF_f_A45 = true;
	}

	if (numFire == 99)
	{
		FIRE_xx11_OF_f_A45 = true;
	}

	if (numFire == 100)
	{
		FIRE_xx10_OF_f_A46 = true;
	}

	if (numFire == 101)
	{
		FIRE_xx11_OF_f_A46 = true;
	}

	if (numFire == 102)
	{
		FIRE_xx10_OF_f_A47 = true;
	}

	if (numFire == 103)
	{
		FIRE_xx11_OF_f_A47 = true;
	}

	if (numFire == 104)
	{
		FIRE_xx10_OF_f_A48 = true;
	}

	if (numFire == 105)
	{
		FIRE_xx11_OF_f_A48 = true;
	}

	if (numFire == 106)
	{
		FIRE_xx10_OF_f_A49 = true;
	}

	if (numFire == 107)
	{
		FIRE_xx11_OF_f_A49 = true;
	}

	if (numFire == 108)
	{
		FIRE_xx10_OF_f_A50 = true;
	}

	if (numFire == 109)
	{
		FIRE_xx11_OF_f_A50 = true;
	}

	if (numFire == 110)
	{
		FIRE_xx10_OF_f_A51 = true;
	}

	if (numFire == 111)
	{
		FIRE_xx11_OF_f_A51 = true;
	}

	if (numFire == 112)
	{
		FIRE_xx10_OF_f_A52 = true;
	}

	if (numFire == 113)
	{
		FIRE_xx11_OF_f_A52 = true;
	}

	if (numFire == 114)
	{
		FIRE_xx10_OF_f_A53 = true;
	}

	if (numFire == 115)
	{
		FIRE_xx11_OF_f_A53 = true;
	}

	if (numFire == 116)
	{
		FIRE_xx23_OF_i_A36_INS_116 = true;
	}

	if (numFire == 117)
	{
		FIRE_xx23_OF_i_A36_INS_117 = true;
	}

	if (numFire == 118)
	{
		FIRE_xx24_OF_i_A36 = true;
	}

	if (numFire == 119)
	{
		FIRE_xx23_OF_i_A37_INS_119 = true;
	}

	if (numFire == 120)
	{
		FIRE_xx23_OF_i_A37_INS_120 = true;
	}

	if (numFire == 121)
	{
		FIRE_xx24_OF_i_A37 = true;
	}

	if (numFire == 122)
	{
		FIRE_xx23_OF_i_A38_INS_122 = true;
	}

	if (numFire == 123)
	{
		FIRE_xx23_OF_i_A38_INS_123 = true;
	}

	if (numFire == 124)
	{
		FIRE_xx24_OF_i_A38 = true;
	}

	if (numFire == 125)
	{
		FIRE_xx23_OF_i_A39_INS_125 = true;
	}

	if (numFire == 126)
	{
		FIRE_xx23_OF_i_A39_INS_126 = true;
	}

	if (numFire == 127)
	{
		FIRE_xx24_OF_i_A39 = true;
	}

	if (numFire == 128)
	{
		FIRE_xx23_OF_i_A40_INS_128 = true;
	}

	if (numFire == 129)
	{
		FIRE_xx23_OF_i_A40_INS_129 = true;
	}

	if (numFire == 130)
	{
		FIRE_xx24_OF_i_A40 = true;
	}

	if (numFire == 131)
	{
		FIRE_xx23_OF_i_A42_INS_131 = true;
	}

	if (numFire == 132)
	{
		FIRE_xx23_OF_i_A42_INS_132 = true;
	}

	if (numFire == 133)
	{
		FIRE_xx24_OF_i_A42 = true;
	}

	if (numFire == 134)
	{
		FIRE_xx23_OF_i_A43_INS_134 = true;
	}

	if (numFire == 135)
	{
		FIRE_xx23_OF_i_A43_INS_135 = true;
	}

	if (numFire == 136)
	{
		FIRE_xx24_OF_i_A43 = true;
	}

	if (numFire == 137)
	{
		FIRE_xx23_OF_i_A45_INS_137 = true;
	}

	if (numFire == 138)
	{
		FIRE_xx23_OF_i_A45_INS_138 = true;
	}

	if (numFire == 139)
	{
		FIRE_xx24_OF_i_A45 = true;
	}

	if (numFire == 140)
	{
		FIRE_xx23_OF_i_A46_INS_140 = true;
	}

	if (numFire == 141)
	{
		FIRE_xx23_OF_i_A46_INS_141 = true;
	}

	if (numFire == 142)
	{
		FIRE_xx24_OF_i_A46 = true;
	}

	if (numFire == 143)
	{
		FIRE_xx23_OF_i_A47_INS_143 = true;
	}

	if (numFire == 144)
	{
		FIRE_xx23_OF_i_A47_INS_144 = true;
	}

	if (numFire == 145)
	{
		FIRE_xx24_OF_i_A47 = true;
	}

	if (numFire == 146)
	{
		FIRE_xx23_OF_i_A48_INS_146 = true;
	}

	if (numFire == 147)
	{
		FIRE_xx23_OF_i_A48_INS_147 = true;
	}

	if (numFire == 148)
	{
		FIRE_xx24_OF_i_A48 = true;
	}

	if (numFire == 149)
	{
		FIRE_xx23_OF_i_A49_INS_149 = true;
	}

	if (numFire == 150)
	{
		FIRE_xx23_OF_i_A49_INS_150 = true;
	}

	if (numFire == 151)
	{
		FIRE_xx24_OF_i_A49 = true;
	}

	if (numFire == 152)
	{
		FIRE_xx23_OF_i_A50_INS_152 = true;
	}

	if (numFire == 153)
	{
		FIRE_xx23_OF_i_A50_INS_153 = true;
	}

	if (numFire == 154)
	{
		FIRE_xx24_OF_i_A50 = true;
	}

	if (numFire == 155)
	{
		FIRE_xx23_OF_i_A51_INS_155 = true;
	}

	if (numFire == 156)
	{
		FIRE_xx23_OF_i_A51_INS_156 = true;
	}

	if (numFire == 157)
	{
		FIRE_xx24_OF_i_A51 = true;
	}

	if (numFire == 158)
	{
		FIRE_xx23_OF_i_A52_INS_158 = true;
	}

	if (numFire == 159)
	{
		FIRE_xx23_OF_i_A52_INS_159 = true;
	}

	if (numFire == 160)
	{
		FIRE_xx24_OF_i_A52 = true;
	}

	if (numFire == 161)
	{
		FIRE_xx23_OF_i_A53_INS_161 = true;
	}

	if (numFire == 162)
	{
		FIRE_xx23_OF_i_A53_INS_162 = true;
	}

	if (numFire == 163)
	{
		FIRE_xx24_OF_i_A53 = true;
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

	// Occurrence xx10_OF_A100
	if ((boolState[failF_OF_A100] == false) && (boolState[required_OF_A100] &&  boolState[relevant_evt_OF_A100])) 
	{
		 
		if (FIRE_xx10_OF_A100)
		{
			boolState[failF_OF_A100]  =  true;
			FIRE_xx10_OF_A100 = false;
		}
	}

	// Occurrence xx11_OF_A100
	if (boolState[failF_OF_A100] == true) 
	{
		 
		if (FIRE_xx11_OF_A100)
		{
			boolState[failF_OF_A100]  =  false;
			FIRE_xx11_OF_A100 = false;
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

	// Occurrence xx11_OF_A101
	if (boolState[failF_OF_A101] == true) 
	{
		 
		if (FIRE_xx11_OF_A101)
		{
			boolState[failF_OF_A101]  =  false;
			FIRE_xx11_OF_A101 = false;
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

	// Occurrence xx17_OF_A11
	if ((boolState[failF_OF_A11] == false) && ((boolState[required_OF_A11] &&  boolState[relevant_evt_OF_A11]) && ( !boolState[failS_OF_A11]))) 
	{
		 
		if (FIRE_xx17_OF_A11)
		{
			boolState[failF_OF_A11]  =  true;
			FIRE_xx17_OF_A11 = false;
		}
	}

	// Occurrence xx18_OF_A11
	if ((boolState[failS_OF_A11] == false) && ((( !boolState[required_OF_A11]) &&  boolState[relevant_evt_OF_A11]) && ( !boolState[failF_OF_A11]))) 
	{
		 
		if (FIRE_xx18_OF_A11)
		{
			boolState[failS_OF_A11]  =  true;
			FIRE_xx18_OF_A11 = false;
		}
	}

	// Occurrence xx19_OF_A11
	if ((boolState[failS_OF_A11] == true) || (boolState[failF_OF_A11] == true)) 
	{
		 
		if (FIRE_xx19_OF_A11)
		{
			boolState[failS_OF_A11]  =  false;
			boolState[failF_OF_A11]  =  false;
			FIRE_xx19_OF_A11 = false;
		}
	}

	// Occurrence xx17_OF_A14
	if ((boolState[failF_OF_A14] == false) && ((boolState[required_OF_A14] &&  boolState[relevant_evt_OF_A14]) && ( !boolState[failS_OF_A14]))) 
	{
		 
		if (FIRE_xx17_OF_A14)
		{
			boolState[failF_OF_A14]  =  true;
			FIRE_xx17_OF_A14 = false;
		}
	}

	// Occurrence xx18_OF_A14
	if ((boolState[failS_OF_A14] == false) && ((( !boolState[required_OF_A14]) &&  boolState[relevant_evt_OF_A14]) && ( !boolState[failF_OF_A14]))) 
	{
		 
		if (FIRE_xx18_OF_A14)
		{
			boolState[failS_OF_A14]  =  true;
			FIRE_xx18_OF_A14 = false;
		}
	}

	// Occurrence xx19_OF_A14
	if ((boolState[failS_OF_A14] == true) || (boolState[failF_OF_A14] == true)) 
	{
		 
		if (FIRE_xx19_OF_A14)
		{
			boolState[failS_OF_A14]  =  false;
			boolState[failF_OF_A14]  =  false;
			FIRE_xx19_OF_A14 = false;
		}
	}

	// Occurrence xx10_OF_A17
	if ((boolState[failF_OF_A17] == false) && (boolState[required_OF_A17] && boolState[relevant_evt_OF_A17])) 
	{
		 
		if (FIRE_xx10_OF_A17)
		{
			boolState[failF_OF_A17]  =  true;
			FIRE_xx10_OF_A17 = false;
		}
	}

	// Occurrence xx11_OF_A17
	if (boolState[failF_OF_A17] == true) 
	{
		 
		if (FIRE_xx11_OF_A17)
		{
			boolState[failF_OF_A17]  =  false;
			FIRE_xx11_OF_A17 = false;
		}
	}

	// Occurrence xx10_OF_A20
	if ((boolState[failF_OF_A20] == false) && (boolState[required_OF_A20] && boolState[relevant_evt_OF_A20])) 
	{
		 
		if (FIRE_xx10_OF_A20)
		{
			boolState[failF_OF_A20]  =  true;
			FIRE_xx10_OF_A20 = false;
		}
	}

	// Occurrence xx11_OF_A20
	if (boolState[failF_OF_A20] == true) 
	{
		 
		if (FIRE_xx11_OF_A20)
		{
			boolState[failF_OF_A20]  =  false;
			FIRE_xx11_OF_A20 = false;
		}
	}

	// Occurrence xx10_OF_A23
	if ((boolState[failF_OF_A23] == false) && (boolState[required_OF_A23] && boolState[relevant_evt_OF_A23])) 
	{
		 
		if (FIRE_xx10_OF_A23)
		{
			boolState[failF_OF_A23]  =  true;
			FIRE_xx10_OF_A23 = false;
		}
	}

	// Occurrence xx11_OF_A23
	if (boolState[failF_OF_A23] == true) 
	{
		 
		if (FIRE_xx11_OF_A23)
		{
			boolState[failF_OF_A23]  =  false;
			FIRE_xx11_OF_A23 = false;
		}
	}

	// Occurrence xx10_OF_A26
	if ((boolState[failF_OF_A26] == false) && (boolState[required_OF_A26] && boolState[relevant_evt_OF_A26])) 
	{
		 
		if (FIRE_xx10_OF_A26)
		{
			boolState[failF_OF_A26]  =  true;
			FIRE_xx10_OF_A26 = false;
		}
	}

	// Occurrence xx11_OF_A26
	if (boolState[failF_OF_A26] == true) 
	{
		 
		if (FIRE_xx11_OF_A26)
		{
			boolState[failF_OF_A26]  =  false;
			FIRE_xx11_OF_A26 = false;
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

	// Occurrence xx10_OF_A5
	if ((boolState[failF_OF_A5] == false) && (boolState[required_OF_A5] && boolState[relevant_evt_OF_A5])) 
	{
		 
		if (FIRE_xx10_OF_A5)
		{
			boolState[failF_OF_A5]  =  true;
			FIRE_xx10_OF_A5 = false;
		}
	}

	// Occurrence xx11_OF_A5
	if (boolState[failF_OF_A5] == true) 
	{
		 
		if (FIRE_xx11_OF_A5)
		{
			boolState[failF_OF_A5]  =  false;
			FIRE_xx11_OF_A5 = false;
		}
	}

	// Occurrence xx10_OF_A54
	if ((boolState[failF_OF_A54] == false) && (boolState[required_OF_A54] && boolState[relevant_evt_OF_A54])) 
	{
		 
		if (FIRE_xx10_OF_A54)
		{
			boolState[failF_OF_A54]  =  true;
			FIRE_xx10_OF_A54 = false;
		}
	}

	// Occurrence xx11_OF_A54
	if (boolState[failF_OF_A54] == true) 
	{
		 
		if (FIRE_xx11_OF_A54)
		{
			boolState[failF_OF_A54]  =  false;
			FIRE_xx11_OF_A54 = false;
		}
	}

	// Occurrence xx10_OF_A56
	if ((boolState[failF_OF_A56] == false) && (boolState[required_OF_A56] && boolState[relevant_evt_OF_A56])) 
	{
		 
		if (FIRE_xx10_OF_A56)
		{
			boolState[failF_OF_A56]  =  true;
			FIRE_xx10_OF_A56 = false;
		}
	}

	// Occurrence xx11_OF_A56
	if (boolState[failF_OF_A56] == true) 
	{
		 
		if (FIRE_xx11_OF_A56)
		{
			boolState[failF_OF_A56]  =  false;
			FIRE_xx11_OF_A56 = false;
		}
	}

	// Occurrence xx10_OF_A57
	if ((boolState[failF_OF_A57] == false) && (boolState[required_OF_A57] && boolState[relevant_evt_OF_A57])) 
	{
		 
		if (FIRE_xx10_OF_A57)
		{
			boolState[failF_OF_A57]  =  true;
			FIRE_xx10_OF_A57 = false;
		}
	}

	// Occurrence xx11_OF_A57
	if (boolState[failF_OF_A57] == true) 
	{
		 
		if (FIRE_xx11_OF_A57)
		{
			boolState[failF_OF_A57]  =  false;
			FIRE_xx11_OF_A57 = false;
		}
	}

	// Occurrence xx10_OF_A62
	if ((boolState[failF_OF_A62] == false) && (boolState[required_OF_A62] && boolState[relevant_evt_OF_A62])) 
	{
		 
		if (FIRE_xx10_OF_A62)
		{
			boolState[failF_OF_A62]  =  true;
			FIRE_xx10_OF_A62 = false;
		}
	}

	// Occurrence xx11_OF_A62
	if (boolState[failF_OF_A62] == true) 
	{
		 
		if (FIRE_xx11_OF_A62)
		{
			boolState[failF_OF_A62]  =  false;
			FIRE_xx11_OF_A62 = false;
		}
	}

	// Occurrence xx10_OF_A63
	if ((boolState[failF_OF_A63] == false) && (boolState[required_OF_A63] && boolState[relevant_evt_OF_A63])) 
	{
		 
		if (FIRE_xx10_OF_A63)
		{
			boolState[failF_OF_A63]  =  true;
			FIRE_xx10_OF_A63 = false;
		}
	}

	// Occurrence xx11_OF_A63
	if (boolState[failF_OF_A63] == true) 
	{
		 
		if (FIRE_xx11_OF_A63)
		{
			boolState[failF_OF_A63]  =  false;
			FIRE_xx11_OF_A63 = false;
		}
	}

	// Occurrence xx10_OF_A64
	if ((boolState[failF_OF_A64] == false) && (boolState[required_OF_A64] && boolState[relevant_evt_OF_A64])) 
	{
		 
		if (FIRE_xx10_OF_A64)
		{
			boolState[failF_OF_A64]  =  true;
			FIRE_xx10_OF_A64 = false;
		}
	}

	// Occurrence xx11_OF_A64
	if (boolState[failF_OF_A64] == true) 
	{
		 
		if (FIRE_xx11_OF_A64)
		{
			boolState[failF_OF_A64]  =  false;
			FIRE_xx11_OF_A64 = false;
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

	// Occurrence xx10_OF_A69
	if ((boolState[failF_OF_A69] == false) && (boolState[required_OF_A69] && boolState[relevant_evt_OF_A69])) 
	{
		 
		if (FIRE_xx10_OF_A69)
		{
			boolState[failF_OF_A69]  =  true;
			FIRE_xx10_OF_A69 = false;
		}
	}

	// Occurrence xx11_OF_A69
	if (boolState[failF_OF_A69] == true) 
	{
		 
		if (FIRE_xx11_OF_A69)
		{
			boolState[failF_OF_A69]  =  false;
			FIRE_xx11_OF_A69 = false;
		}
	}

	// Occurrence xx17_OF_A73
	if ((boolState[failF_OF_A73] == false) && ((boolState[required_OF_A73] &&  boolState[relevant_evt_OF_A73]) && ( !boolState[failS_OF_A73]))) 
	{
		 
		if (FIRE_xx17_OF_A73)
		{
			boolState[failF_OF_A73]  =  true;
			FIRE_xx17_OF_A73 = false;
		}
	}

	// Occurrence xx18_OF_A73
	if ((boolState[failS_OF_A73] == false) && ((( !boolState[required_OF_A73]) &&  boolState[relevant_evt_OF_A73]) && ( !boolState[failF_OF_A73]))) 
	{
		 
		if (FIRE_xx18_OF_A73)
		{
			boolState[failS_OF_A73]  =  true;
			FIRE_xx18_OF_A73 = false;
		}
	}

	// Occurrence xx19_OF_A73
	if ((boolState[failS_OF_A73] == true) || (boolState[failF_OF_A73] == true)) 
	{
		 
		if (FIRE_xx19_OF_A73)
		{
			boolState[failS_OF_A73]  =  false;
			boolState[failF_OF_A73]  =  false;
			FIRE_xx19_OF_A73 = false;
		}
	}

	// Occurrence xx17_OF_A74
	if ((boolState[failF_OF_A74] == false) && ((boolState[required_OF_A74] &&  boolState[relevant_evt_OF_A74]) && ( !boolState[failS_OF_A74]))) 
	{
		 
		if (FIRE_xx17_OF_A74)
		{
			boolState[failF_OF_A74]  =  true;
			FIRE_xx17_OF_A74 = false;
		}
	}

	// Occurrence xx18_OF_A74
	if ((boolState[failS_OF_A74] == false) && ((( !boolState[required_OF_A74]) &&  boolState[relevant_evt_OF_A74]) && ( !boolState[failF_OF_A74]))) 
	{
		 
		if (FIRE_xx18_OF_A74)
		{
			boolState[failS_OF_A74]  =  true;
			FIRE_xx18_OF_A74 = false;
		}
	}

	// Occurrence xx19_OF_A74
	if ((boolState[failS_OF_A74] == true) || (boolState[failF_OF_A74] == true)) 
	{
		 
		if (FIRE_xx19_OF_A74)
		{
			boolState[failS_OF_A74]  =  false;
			boolState[failF_OF_A74]  =  false;
			FIRE_xx19_OF_A74 = false;
		}
	}

	// Occurrence xx17_OF_A75
	if ((boolState[failF_OF_A75] == false) && ((boolState[required_OF_A75] &&  boolState[relevant_evt_OF_A75]) && ( !boolState[failS_OF_A75]))) 
	{
		 
		if (FIRE_xx17_OF_A75)
		{
			boolState[failF_OF_A75]  =  true;
			FIRE_xx17_OF_A75 = false;
		}
	}

	// Occurrence xx18_OF_A75
	if ((boolState[failS_OF_A75] == false) && ((( !boolState[required_OF_A75]) &&  boolState[relevant_evt_OF_A75]) && ( !boolState[failF_OF_A75]))) 
	{
		 
		if (FIRE_xx18_OF_A75)
		{
			boolState[failS_OF_A75]  =  true;
			FIRE_xx18_OF_A75 = false;
		}
	}

	// Occurrence xx19_OF_A75
	if ((boolState[failS_OF_A75] == true) || (boolState[failF_OF_A75] == true)) 
	{
		 
		if (FIRE_xx19_OF_A75)
		{
			boolState[failS_OF_A75]  =  false;
			boolState[failF_OF_A75]  =  false;
			FIRE_xx19_OF_A75 = false;
		}
	}

	// Occurrence xx17_OF_A78
	if ((boolState[failF_OF_A78] == false) && ((boolState[required_OF_A78] &&  boolState[relevant_evt_OF_A78]) && ( !boolState[failS_OF_A78]))) 
	{
		 
		if (FIRE_xx17_OF_A78)
		{
			boolState[failF_OF_A78]  =  true;
			FIRE_xx17_OF_A78 = false;
		}
	}

	// Occurrence xx18_OF_A78
	if ((boolState[failS_OF_A78] == false) && ((( !boolState[required_OF_A78]) &&  boolState[relevant_evt_OF_A78]) && ( !boolState[failF_OF_A78]))) 
	{
		 
		if (FIRE_xx18_OF_A78)
		{
			boolState[failS_OF_A78]  =  true;
			FIRE_xx18_OF_A78 = false;
		}
	}

	// Occurrence xx19_OF_A78
	if ((boolState[failS_OF_A78] == true) || (boolState[failF_OF_A78] == true)) 
	{
		 
		if (FIRE_xx19_OF_A78)
		{
			boolState[failS_OF_A78]  =  false;
			boolState[failF_OF_A78]  =  false;
			FIRE_xx19_OF_A78 = false;
		}
	}

	// Occurrence xx17_OF_A79
	if ((boolState[failF_OF_A79] == false) && ((boolState[required_OF_A79] &&  boolState[relevant_evt_OF_A79]) && ( !boolState[failS_OF_A79]))) 
	{
		 
		if (FIRE_xx17_OF_A79)
		{
			boolState[failF_OF_A79]  =  true;
			FIRE_xx17_OF_A79 = false;
		}
	}

	// Occurrence xx18_OF_A79
	if ((boolState[failS_OF_A79] == false) && ((( !boolState[required_OF_A79]) &&  boolState[relevant_evt_OF_A79]) && ( !boolState[failF_OF_A79]))) 
	{
		 
		if (FIRE_xx18_OF_A79)
		{
			boolState[failS_OF_A79]  =  true;
			FIRE_xx18_OF_A79 = false;
		}
	}

	// Occurrence xx19_OF_A79
	if ((boolState[failS_OF_A79] == true) || (boolState[failF_OF_A79] == true)) 
	{
		 
		if (FIRE_xx19_OF_A79)
		{
			boolState[failS_OF_A79]  =  false;
			boolState[failF_OF_A79]  =  false;
			FIRE_xx19_OF_A79 = false;
		}
	}

	// Occurrence xx10_OF_A8
	if ((boolState[failF_OF_A8] == false) && (boolState[required_OF_A8] && boolState[relevant_evt_OF_A8])) 
	{
		 
		if (FIRE_xx10_OF_A8)
		{
			boolState[failF_OF_A8]  =  true;
			FIRE_xx10_OF_A8 = false;
		}
	}

	// Occurrence xx11_OF_A8
	if (boolState[failF_OF_A8] == true) 
	{
		 
		if (FIRE_xx11_OF_A8)
		{
			boolState[failF_OF_A8]  =  false;
			FIRE_xx11_OF_A8 = false;
		}
	}

	// Occurrence xx17_OF_A80
	if ((boolState[failF_OF_A80] == false) && ((boolState[required_OF_A80] &&  boolState[relevant_evt_OF_A80]) && ( !boolState[failS_OF_A80]))) 
	{
		 
		if (FIRE_xx17_OF_A80)
		{
			boolState[failF_OF_A80]  =  true;
			FIRE_xx17_OF_A80 = false;
		}
	}

	// Occurrence xx18_OF_A80
	if ((boolState[failS_OF_A80] == false) && ((( !boolState[required_OF_A80]) &&  boolState[relevant_evt_OF_A80]) && ( !boolState[failF_OF_A80]))) 
	{
		 
		if (FIRE_xx18_OF_A80)
		{
			boolState[failS_OF_A80]  =  true;
			FIRE_xx18_OF_A80 = false;
		}
	}

	// Occurrence xx19_OF_A80
	if ((boolState[failS_OF_A80] == true) || (boolState[failF_OF_A80] == true)) 
	{
		 
		if (FIRE_xx19_OF_A80)
		{
			boolState[failS_OF_A80]  =  false;
			boolState[failF_OF_A80]  =  false;
			FIRE_xx19_OF_A80 = false;
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

	// Occurrence xx11_OF_A84
	if (boolState[failF_OF_A84] == true) 
	{
		 
		if (FIRE_xx11_OF_A84)
		{
			boolState[failF_OF_A84]  =  false;
			FIRE_xx11_OF_A84 = false;
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

	// Occurrence xx11_OF_A85
	if (boolState[failF_OF_A85] == true) 
	{
		 
		if (FIRE_xx11_OF_A85)
		{
			boolState[failF_OF_A85]  =  false;
			FIRE_xx11_OF_A85 = false;
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

	// Occurrence xx10_OF_A89
	if ((boolState[failF_OF_A89] == false) && (boolState[required_OF_A89] && boolState[relevant_evt_OF_A89])) 
	{
		 
		if (FIRE_xx10_OF_A89)
		{
			boolState[failF_OF_A89]  =  true;
			FIRE_xx10_OF_A89 = false;
		}
	}

	// Occurrence xx11_OF_A89
	if (boolState[failF_OF_A89] == true) 
	{
		 
		if (FIRE_xx11_OF_A89)
		{
			boolState[failF_OF_A89]  =  false;
			FIRE_xx11_OF_A89 = false;
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

	// Occurrence xx11_OF_A90
	if (boolState[failF_OF_A90] == true) 
	{
		 
		if (FIRE_xx11_OF_A90)
		{
			boolState[failF_OF_A90]  =  false;
			FIRE_xx11_OF_A90 = false;
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

	// Occurrence xx10_OF_A95
	if ((boolState[failF_OF_A95] == false) && (boolState[required_OF_A95] && boolState[relevant_evt_OF_A95])) 
	{
		 
		if (FIRE_xx10_OF_A95)
		{
			boolState[failF_OF_A95]  =  true;
			FIRE_xx10_OF_A95 = false;
		}
	}

	// Occurrence xx11_OF_A95
	if (boolState[failF_OF_A95] == true) 
	{
		 
		if (FIRE_xx11_OF_A95)
		{
			boolState[failF_OF_A95]  =  false;
			FIRE_xx11_OF_A95 = false;
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

	// Occurrence xx11_OF_A96
	if (boolState[failF_OF_A96] == true) 
	{
		 
		if (FIRE_xx11_OF_A96)
		{
			boolState[failF_OF_A96]  =  false;
			FIRE_xx11_OF_A96 = false;
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

	// Occurrence xx10_OF_f_A36
	if ((boolState[failF_OF_f_A36] == false) && (boolState[required_OF_f_A36] &&  boolState[relevant_evt_OF_f_A36])) 
	{
		 
		if (FIRE_xx10_OF_f_A36)
		{
			boolState[failF_OF_f_A36]  =  true;
			FIRE_xx10_OF_f_A36 = false;
		}
	}

	// Occurrence xx11_OF_f_A36
	if (boolState[failF_OF_f_A36] == true) 
	{
		 
		if (FIRE_xx11_OF_f_A36)
		{
			boolState[failF_OF_f_A36]  =  false;
			FIRE_xx11_OF_f_A36 = false;
		}
	}

	// Occurrence xx10_OF_f_A37
	if ((boolState[failF_OF_f_A37] == false) && (boolState[required_OF_f_A37] &&  boolState[relevant_evt_OF_f_A37])) 
	{
		 
		if (FIRE_xx10_OF_f_A37)
		{
			boolState[failF_OF_f_A37]  =  true;
			FIRE_xx10_OF_f_A37 = false;
		}
	}

	// Occurrence xx11_OF_f_A37
	if (boolState[failF_OF_f_A37] == true) 
	{
		 
		if (FIRE_xx11_OF_f_A37)
		{
			boolState[failF_OF_f_A37]  =  false;
			FIRE_xx11_OF_f_A37 = false;
		}
	}

	// Occurrence xx10_OF_f_A38
	if ((boolState[failF_OF_f_A38] == false) && (boolState[required_OF_f_A38] &&  boolState[relevant_evt_OF_f_A38])) 
	{
		 
		if (FIRE_xx10_OF_f_A38)
		{
			boolState[failF_OF_f_A38]  =  true;
			FIRE_xx10_OF_f_A38 = false;
		}
	}

	// Occurrence xx11_OF_f_A38
	if (boolState[failF_OF_f_A38] == true) 
	{
		 
		if (FIRE_xx11_OF_f_A38)
		{
			boolState[failF_OF_f_A38]  =  false;
			FIRE_xx11_OF_f_A38 = false;
		}
	}

	// Occurrence xx10_OF_f_A39
	if ((boolState[failF_OF_f_A39] == false) && (boolState[required_OF_f_A39] &&  boolState[relevant_evt_OF_f_A39])) 
	{
		 
		if (FIRE_xx10_OF_f_A39)
		{
			boolState[failF_OF_f_A39]  =  true;
			FIRE_xx10_OF_f_A39 = false;
		}
	}

	// Occurrence xx11_OF_f_A39
	if (boolState[failF_OF_f_A39] == true) 
	{
		 
		if (FIRE_xx11_OF_f_A39)
		{
			boolState[failF_OF_f_A39]  =  false;
			FIRE_xx11_OF_f_A39 = false;
		}
	}

	// Occurrence xx10_OF_f_A40
	if ((boolState[failF_OF_f_A40] == false) && (boolState[required_OF_f_A40] &&  boolState[relevant_evt_OF_f_A40])) 
	{
		 
		if (FIRE_xx10_OF_f_A40)
		{
			boolState[failF_OF_f_A40]  =  true;
			FIRE_xx10_OF_f_A40 = false;
		}
	}

	// Occurrence xx11_OF_f_A40
	if (boolState[failF_OF_f_A40] == true) 
	{
		 
		if (FIRE_xx11_OF_f_A40)
		{
			boolState[failF_OF_f_A40]  =  false;
			FIRE_xx11_OF_f_A40 = false;
		}
	}

	// Occurrence xx10_OF_f_A42
	if ((boolState[failF_OF_f_A42] == false) && (boolState[required_OF_f_A42] &&  boolState[relevant_evt_OF_f_A42])) 
	{
		 
		if (FIRE_xx10_OF_f_A42)
		{
			boolState[failF_OF_f_A42]  =  true;
			FIRE_xx10_OF_f_A42 = false;
		}
	}

	// Occurrence xx11_OF_f_A42
	if (boolState[failF_OF_f_A42] == true) 
	{
		 
		if (FIRE_xx11_OF_f_A42)
		{
			boolState[failF_OF_f_A42]  =  false;
			FIRE_xx11_OF_f_A42 = false;
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

	// Occurrence xx10_OF_f_A50
	if ((boolState[failF_OF_f_A50] == false) && (boolState[required_OF_f_A50] &&  boolState[relevant_evt_OF_f_A50])) 
	{
		 
		if (FIRE_xx10_OF_f_A50)
		{
			boolState[failF_OF_f_A50]  =  true;
			FIRE_xx10_OF_f_A50 = false;
		}
	}

	// Occurrence xx11_OF_f_A50
	if (boolState[failF_OF_f_A50] == true) 
	{
		 
		if (FIRE_xx11_OF_f_A50)
		{
			boolState[failF_OF_f_A50]  =  false;
			FIRE_xx11_OF_f_A50 = false;
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

	// Occurrence xx10_OF_f_A53
	if ((boolState[failF_OF_f_A53] == false) && (boolState[required_OF_f_A53] &&  boolState[relevant_evt_OF_f_A53])) 
	{
		 
		if (FIRE_xx10_OF_f_A53)
		{
			boolState[failF_OF_f_A53]  =  true;
			FIRE_xx10_OF_f_A53 = false;
		}
	}

	// Occurrence xx11_OF_f_A53
	if (boolState[failF_OF_f_A53] == true) 
	{
		 
		if (FIRE_xx11_OF_f_A53)
		{
			boolState[failF_OF_f_A53]  =  false;
			FIRE_xx11_OF_f_A53 = false;
		}
	}

	// Occurrence xx23_OF_i_A36

	if ((boolState[failI_OF_i_A36] == false) && (boolState[to_be_fired_OF_i_A36] &&
	boolState[relevant_evt_OF_i_A36])) 
	{
	
		
		if (FIRE_xx23_OF_i_A36_INS_116) 
		{
			boolState[failI_OF_i_A36]  =  true;
			boolState[already_standby_OF_i_A36]  =  false;
			boolState[already_required_OF_i_A36]  =  false;
			FIRE_xx23_OF_i_A36_INS_116 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A36] == false) && (boolState[to_be_fired_OF_i_A36] &&
	boolState[relevant_evt_OF_i_A36])) 
	{
	
		
		if (FIRE_xx23_OF_i_A36_INS_117) 
		{
			boolState[already_standby_OF_i_A36]  =  false;
			boolState[already_required_OF_i_A36]  =  false;
			FIRE_xx23_OF_i_A36_INS_117 = false;
		}
	
	}
	// Occurrence xx24_OF_i_A36
	if (boolState[failI_OF_i_A36] == true) 
	{
		 
		if (FIRE_xx24_OF_i_A36)
		{
			boolState[failI_OF_i_A36]  =  false;
			FIRE_xx24_OF_i_A36 = false;
		}
	}

	// Occurrence xx23_OF_i_A37

	if ((boolState[failI_OF_i_A37] == false) && (boolState[to_be_fired_OF_i_A37] &&
	boolState[relevant_evt_OF_i_A37])) 
	{
	
		
		if (FIRE_xx23_OF_i_A37_INS_119) 
		{
			boolState[failI_OF_i_A37]  =  true;
			boolState[already_standby_OF_i_A37]  =  false;
			boolState[already_required_OF_i_A37]  =  false;
			FIRE_xx23_OF_i_A37_INS_119 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A37] == false) && (boolState[to_be_fired_OF_i_A37] &&
	boolState[relevant_evt_OF_i_A37])) 
	{
	
		
		if (FIRE_xx23_OF_i_A37_INS_120) 
		{
			boolState[already_standby_OF_i_A37]  =  false;
			boolState[already_required_OF_i_A37]  =  false;
			FIRE_xx23_OF_i_A37_INS_120 = false;
		}
	
	}
	// Occurrence xx24_OF_i_A37
	if (boolState[failI_OF_i_A37] == true) 
	{
		 
		if (FIRE_xx24_OF_i_A37)
		{
			boolState[failI_OF_i_A37]  =  false;
			FIRE_xx24_OF_i_A37 = false;
		}
	}

	// Occurrence xx23_OF_i_A38

	if ((boolState[failI_OF_i_A38] == false) && (boolState[to_be_fired_OF_i_A38] &&
	boolState[relevant_evt_OF_i_A38])) 
	{
	
		
		if (FIRE_xx23_OF_i_A38_INS_122) 
		{
			boolState[failI_OF_i_A38]  =  true;
			boolState[already_standby_OF_i_A38]  =  false;
			boolState[already_required_OF_i_A38]  =  false;
			FIRE_xx23_OF_i_A38_INS_122 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A38] == false) && (boolState[to_be_fired_OF_i_A38] &&
	boolState[relevant_evt_OF_i_A38])) 
	{
	
		
		if (FIRE_xx23_OF_i_A38_INS_123) 
		{
			boolState[already_standby_OF_i_A38]  =  false;
			boolState[already_required_OF_i_A38]  =  false;
			FIRE_xx23_OF_i_A38_INS_123 = false;
		}
	
	}
	// Occurrence xx24_OF_i_A38
	if (boolState[failI_OF_i_A38] == true) 
	{
		 
		if (FIRE_xx24_OF_i_A38)
		{
			boolState[failI_OF_i_A38]  =  false;
			FIRE_xx24_OF_i_A38 = false;
		}
	}

	// Occurrence xx23_OF_i_A39

	if ((boolState[failI_OF_i_A39] == false) && (boolState[to_be_fired_OF_i_A39] &&
	boolState[relevant_evt_OF_i_A39])) 
	{
	
		
		if (FIRE_xx23_OF_i_A39_INS_125) 
		{
			boolState[failI_OF_i_A39]  =  true;
			boolState[already_standby_OF_i_A39]  =  false;
			boolState[already_required_OF_i_A39]  =  false;
			FIRE_xx23_OF_i_A39_INS_125 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A39] == false) && (boolState[to_be_fired_OF_i_A39] &&
	boolState[relevant_evt_OF_i_A39])) 
	{
	
		
		if (FIRE_xx23_OF_i_A39_INS_126) 
		{
			boolState[already_standby_OF_i_A39]  =  false;
			boolState[already_required_OF_i_A39]  =  false;
			FIRE_xx23_OF_i_A39_INS_126 = false;
		}
	
	}
	// Occurrence xx24_OF_i_A39
	if (boolState[failI_OF_i_A39] == true) 
	{
		 
		if (FIRE_xx24_OF_i_A39)
		{
			boolState[failI_OF_i_A39]  =  false;
			FIRE_xx24_OF_i_A39 = false;
		}
	}

	// Occurrence xx23_OF_i_A40

	if ((boolState[failI_OF_i_A40] == false) && (boolState[to_be_fired_OF_i_A40] &&
	boolState[relevant_evt_OF_i_A40])) 
	{
	
		
		if (FIRE_xx23_OF_i_A40_INS_128) 
		{
			boolState[failI_OF_i_A40]  =  true;
			boolState[already_standby_OF_i_A40]  =  false;
			boolState[already_required_OF_i_A40]  =  false;
			FIRE_xx23_OF_i_A40_INS_128 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A40] == false) && (boolState[to_be_fired_OF_i_A40] &&
	boolState[relevant_evt_OF_i_A40])) 
	{
	
		
		if (FIRE_xx23_OF_i_A40_INS_129) 
		{
			boolState[already_standby_OF_i_A40]  =  false;
			boolState[already_required_OF_i_A40]  =  false;
			FIRE_xx23_OF_i_A40_INS_129 = false;
		}
	
	}
	// Occurrence xx24_OF_i_A40
	if (boolState[failI_OF_i_A40] == true) 
	{
		 
		if (FIRE_xx24_OF_i_A40)
		{
			boolState[failI_OF_i_A40]  =  false;
			FIRE_xx24_OF_i_A40 = false;
		}
	}

	// Occurrence xx23_OF_i_A42

	if ((boolState[failI_OF_i_A42] == false) && (boolState[to_be_fired_OF_i_A42] &&
	boolState[relevant_evt_OF_i_A42])) 
	{
	
		
		if (FIRE_xx23_OF_i_A42_INS_131) 
		{
			boolState[failI_OF_i_A42]  =  true;
			boolState[already_standby_OF_i_A42]  =  false;
			boolState[already_required_OF_i_A42]  =  false;
			FIRE_xx23_OF_i_A42_INS_131 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A42] == false) && (boolState[to_be_fired_OF_i_A42] &&
	boolState[relevant_evt_OF_i_A42])) 
	{
	
		
		if (FIRE_xx23_OF_i_A42_INS_132) 
		{
			boolState[already_standby_OF_i_A42]  =  false;
			boolState[already_required_OF_i_A42]  =  false;
			FIRE_xx23_OF_i_A42_INS_132 = false;
		}
	
	}
	// Occurrence xx24_OF_i_A42
	if (boolState[failI_OF_i_A42] == true) 
	{
		 
		if (FIRE_xx24_OF_i_A42)
		{
			boolState[failI_OF_i_A42]  =  false;
			FIRE_xx24_OF_i_A42 = false;
		}
	}

	// Occurrence xx23_OF_i_A43

	if ((boolState[failI_OF_i_A43] == false) && (boolState[to_be_fired_OF_i_A43] &&
	boolState[relevant_evt_OF_i_A43])) 
	{
	
		
		if (FIRE_xx23_OF_i_A43_INS_134) 
		{
			boolState[failI_OF_i_A43]  =  true;
			boolState[already_standby_OF_i_A43]  =  false;
			boolState[already_required_OF_i_A43]  =  false;
			FIRE_xx23_OF_i_A43_INS_134 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A43] == false) && (boolState[to_be_fired_OF_i_A43] &&
	boolState[relevant_evt_OF_i_A43])) 
	{
	
		
		if (FIRE_xx23_OF_i_A43_INS_135) 
		{
			boolState[already_standby_OF_i_A43]  =  false;
			boolState[already_required_OF_i_A43]  =  false;
			FIRE_xx23_OF_i_A43_INS_135 = false;
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

	// Occurrence xx23_OF_i_A45

	if ((boolState[failI_OF_i_A45] == false) && (boolState[to_be_fired_OF_i_A45] &&
	boolState[relevant_evt_OF_i_A45])) 
	{
	
		
		if (FIRE_xx23_OF_i_A45_INS_137) 
		{
			boolState[failI_OF_i_A45]  =  true;
			boolState[already_standby_OF_i_A45]  =  false;
			boolState[already_required_OF_i_A45]  =  false;
			FIRE_xx23_OF_i_A45_INS_137 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A45] == false) && (boolState[to_be_fired_OF_i_A45] &&
	boolState[relevant_evt_OF_i_A45])) 
	{
	
		
		if (FIRE_xx23_OF_i_A45_INS_138) 
		{
			boolState[already_standby_OF_i_A45]  =  false;
			boolState[already_required_OF_i_A45]  =  false;
			FIRE_xx23_OF_i_A45_INS_138 = false;
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
	
		
		if (FIRE_xx23_OF_i_A46_INS_140) 
		{
			boolState[failI_OF_i_A46]  =  true;
			boolState[already_standby_OF_i_A46]  =  false;
			boolState[already_required_OF_i_A46]  =  false;
			FIRE_xx23_OF_i_A46_INS_140 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A46] == false) && (boolState[to_be_fired_OF_i_A46] &&
	boolState[relevant_evt_OF_i_A46])) 
	{
	
		
		if (FIRE_xx23_OF_i_A46_INS_141) 
		{
			boolState[already_standby_OF_i_A46]  =  false;
			boolState[already_required_OF_i_A46]  =  false;
			FIRE_xx23_OF_i_A46_INS_141 = false;
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
	
		
		if (FIRE_xx23_OF_i_A47_INS_143) 
		{
			boolState[failI_OF_i_A47]  =  true;
			boolState[already_standby_OF_i_A47]  =  false;
			boolState[already_required_OF_i_A47]  =  false;
			FIRE_xx23_OF_i_A47_INS_143 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A47] == false) && (boolState[to_be_fired_OF_i_A47] &&
	boolState[relevant_evt_OF_i_A47])) 
	{
	
		
		if (FIRE_xx23_OF_i_A47_INS_144) 
		{
			boolState[already_standby_OF_i_A47]  =  false;
			boolState[already_required_OF_i_A47]  =  false;
			FIRE_xx23_OF_i_A47_INS_144 = false;
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
	
		
		if (FIRE_xx23_OF_i_A48_INS_146) 
		{
			boolState[failI_OF_i_A48]  =  true;
			boolState[already_standby_OF_i_A48]  =  false;
			boolState[already_required_OF_i_A48]  =  false;
			FIRE_xx23_OF_i_A48_INS_146 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A48] == false) && (boolState[to_be_fired_OF_i_A48] &&
	boolState[relevant_evt_OF_i_A48])) 
	{
	
		
		if (FIRE_xx23_OF_i_A48_INS_147) 
		{
			boolState[already_standby_OF_i_A48]  =  false;
			boolState[already_required_OF_i_A48]  =  false;
			FIRE_xx23_OF_i_A48_INS_147 = false;
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
	
		
		if (FIRE_xx23_OF_i_A49_INS_149) 
		{
			boolState[failI_OF_i_A49]  =  true;
			boolState[already_standby_OF_i_A49]  =  false;
			boolState[already_required_OF_i_A49]  =  false;
			FIRE_xx23_OF_i_A49_INS_149 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A49] == false) && (boolState[to_be_fired_OF_i_A49] &&
	boolState[relevant_evt_OF_i_A49])) 
	{
	
		
		if (FIRE_xx23_OF_i_A49_INS_150) 
		{
			boolState[already_standby_OF_i_A49]  =  false;
			boolState[already_required_OF_i_A49]  =  false;
			FIRE_xx23_OF_i_A49_INS_150 = false;
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

	// Occurrence xx23_OF_i_A50

	if ((boolState[failI_OF_i_A50] == false) && (boolState[to_be_fired_OF_i_A50] &&
	boolState[relevant_evt_OF_i_A50])) 
	{
	
		
		if (FIRE_xx23_OF_i_A50_INS_152) 
		{
			boolState[failI_OF_i_A50]  =  true;
			boolState[already_standby_OF_i_A50]  =  false;
			boolState[already_required_OF_i_A50]  =  false;
			FIRE_xx23_OF_i_A50_INS_152 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A50] == false) && (boolState[to_be_fired_OF_i_A50] &&
	boolState[relevant_evt_OF_i_A50])) 
	{
	
		
		if (FIRE_xx23_OF_i_A50_INS_153) 
		{
			boolState[already_standby_OF_i_A50]  =  false;
			boolState[already_required_OF_i_A50]  =  false;
			FIRE_xx23_OF_i_A50_INS_153 = false;
		}
	
	}
	// Occurrence xx24_OF_i_A50
	if (boolState[failI_OF_i_A50] == true) 
	{
		 
		if (FIRE_xx24_OF_i_A50)
		{
			boolState[failI_OF_i_A50]  =  false;
			FIRE_xx24_OF_i_A50 = false;
		}
	}

	// Occurrence xx23_OF_i_A51

	if ((boolState[failI_OF_i_A51] == false) && (boolState[to_be_fired_OF_i_A51] &&
	boolState[relevant_evt_OF_i_A51])) 
	{
	
		
		if (FIRE_xx23_OF_i_A51_INS_155) 
		{
			boolState[failI_OF_i_A51]  =  true;
			boolState[already_standby_OF_i_A51]  =  false;
			boolState[already_required_OF_i_A51]  =  false;
			FIRE_xx23_OF_i_A51_INS_155 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A51] == false) && (boolState[to_be_fired_OF_i_A51] &&
	boolState[relevant_evt_OF_i_A51])) 
	{
	
		
		if (FIRE_xx23_OF_i_A51_INS_156) 
		{
			boolState[already_standby_OF_i_A51]  =  false;
			boolState[already_required_OF_i_A51]  =  false;
			FIRE_xx23_OF_i_A51_INS_156 = false;
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
	
		
		if (FIRE_xx23_OF_i_A52_INS_158) 
		{
			boolState[failI_OF_i_A52]  =  true;
			boolState[already_standby_OF_i_A52]  =  false;
			boolState[already_required_OF_i_A52]  =  false;
			FIRE_xx23_OF_i_A52_INS_158 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A52] == false) && (boolState[to_be_fired_OF_i_A52] &&
	boolState[relevant_evt_OF_i_A52])) 
	{
	
		
		if (FIRE_xx23_OF_i_A52_INS_159) 
		{
			boolState[already_standby_OF_i_A52]  =  false;
			boolState[already_required_OF_i_A52]  =  false;
			FIRE_xx23_OF_i_A52_INS_159 = false;
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

	// Occurrence xx23_OF_i_A53

	if ((boolState[failI_OF_i_A53] == false) && (boolState[to_be_fired_OF_i_A53] &&
	boolState[relevant_evt_OF_i_A53])) 
	{
	
		
		if (FIRE_xx23_OF_i_A53_INS_161) 
		{
			boolState[failI_OF_i_A53]  =  true;
			boolState[already_standby_OF_i_A53]  =  false;
			boolState[already_required_OF_i_A53]  =  false;
			FIRE_xx23_OF_i_A53_INS_161 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A53] == false) && (boolState[to_be_fired_OF_i_A53] &&
	boolState[relevant_evt_OF_i_A53])) 
	{
	
		
		if (FIRE_xx23_OF_i_A53_INS_162) 
		{
			boolState[already_standby_OF_i_A53]  =  false;
			boolState[already_required_OF_i_A53]  =  false;
			FIRE_xx23_OF_i_A53_INS_162 = false;
		}
	
	}
	// Occurrence xx24_OF_i_A53
	if (boolState[failI_OF_i_A53] == true) 
	{
		 
		if (FIRE_xx24_OF_i_A53)
		{
			boolState[failI_OF_i_A53]  =  false;
			FIRE_xx24_OF_i_A53 = false;
		}
	}

}

std::vector<std::tuple<int, double, std::string, int>> storm::figaro::FigaroProgram_vgs_4_Trim_Article_repair::showFireableOccurrences()
{
	std::vector<std::tuple<int, double, std::string, int>> list = {};
	//cout <<"\n==================== List of fireable occurrences :  ====================" << endl;

	if ((boolState[failI_OF_i_A36] == false) && (boolState[to_be_fired_OF_i_A36] &&	boolState[relevant_evt_OF_i_A36]))
	{
		//cout << "116 :  INS_SUB_COUNT (1) |FAULT | failI  LABEL \"instantaneous failure i_A36\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A36]  =  TRUE,already_standby_OF_i_A36  =  FALSE,already_required_OF_i_A36  =  FALSE" << endl;
		list.push_back(make_tuple(116, 1, "INS", 1));
	}
	if ((boolState[failI_OF_i_A36] == false) && (boolState[to_be_fired_OF_i_A36] &&	boolState[relevant_evt_OF_i_A36]))
	{
		//cout << "117 :  INS_SUB_COUNT (1) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A36]  =  FALSE,already_required_OF_i_A36  =  FALSE" << endl;
		list.push_back(make_tuple(117, 0, "INS", 1));
	}
	if ((boolState[failI_OF_i_A37] == false) && (boolState[to_be_fired_OF_i_A37] &&	boolState[relevant_evt_OF_i_A37]))
	{
		//cout << "119 :  INS_SUB_COUNT (2) |FAULT | failI  LABEL \"instantaneous failure i_A37\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A37]  =  TRUE,already_standby_OF_i_A37  =  FALSE,already_required_OF_i_A37  =  FALSE" << endl;
		list.push_back(make_tuple(119, 1, "INS", 2));
	}
	if ((boolState[failI_OF_i_A37] == false) && (boolState[to_be_fired_OF_i_A37] &&	boolState[relevant_evt_OF_i_A37]))
	{
		//cout << "120 :  INS_SUB_COUNT (2) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A37]  =  FALSE,already_required_OF_i_A37  =  FALSE" << endl;
		list.push_back(make_tuple(120, 0, "INS", 2));
	}
	if ((boolState[failI_OF_i_A38] == false) && (boolState[to_be_fired_OF_i_A38] &&	boolState[relevant_evt_OF_i_A38]))
	{
		//cout << "122 :  INS_SUB_COUNT (3) |FAULT | failI  LABEL \"instantaneous failure i_A38\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A38]  =  TRUE,already_standby_OF_i_A38  =  FALSE,already_required_OF_i_A38  =  FALSE" << endl;
		list.push_back(make_tuple(122, 1, "INS", 3));
	}
	if ((boolState[failI_OF_i_A38] == false) && (boolState[to_be_fired_OF_i_A38] &&	boolState[relevant_evt_OF_i_A38]))
	{
		//cout << "123 :  INS_SUB_COUNT (3) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A38]  =  FALSE,already_required_OF_i_A38  =  FALSE" << endl;
		list.push_back(make_tuple(123, 0, "INS", 3));
	}
	if ((boolState[failI_OF_i_A39] == false) && (boolState[to_be_fired_OF_i_A39] &&	boolState[relevant_evt_OF_i_A39]))
	{
		//cout << "125 :  INS_SUB_COUNT (4) |FAULT | failI  LABEL \"instantaneous failure i_A39\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A39]  =  TRUE,already_standby_OF_i_A39  =  FALSE,already_required_OF_i_A39  =  FALSE" << endl;
		list.push_back(make_tuple(125, 1, "INS", 4));
	}
	if ((boolState[failI_OF_i_A39] == false) && (boolState[to_be_fired_OF_i_A39] &&	boolState[relevant_evt_OF_i_A39]))
	{
		//cout << "126 :  INS_SUB_COUNT (4) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A39]  =  FALSE,already_required_OF_i_A39  =  FALSE" << endl;
		list.push_back(make_tuple(126, 0, "INS", 4));
	}
	if ((boolState[failI_OF_i_A40] == false) && (boolState[to_be_fired_OF_i_A40] &&	boolState[relevant_evt_OF_i_A40]))
	{
		//cout << "128 :  INS_SUB_COUNT (5) |FAULT | failI  LABEL \"instantaneous failure i_A40\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A40]  =  TRUE,already_standby_OF_i_A40  =  FALSE,already_required_OF_i_A40  =  FALSE" << endl;
		list.push_back(make_tuple(128, 1, "INS", 5));
	}
	if ((boolState[failI_OF_i_A40] == false) && (boolState[to_be_fired_OF_i_A40] &&	boolState[relevant_evt_OF_i_A40]))
	{
		//cout << "129 :  INS_SUB_COUNT (5) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A40]  =  FALSE,already_required_OF_i_A40  =  FALSE" << endl;
		list.push_back(make_tuple(129, 0, "INS", 5));
	}
	if ((boolState[failI_OF_i_A42] == false) && (boolState[to_be_fired_OF_i_A42] &&	boolState[relevant_evt_OF_i_A42]))
	{
		//cout << "131 :  INS_SUB_COUNT (6) |FAULT | failI  LABEL \"instantaneous failure i_A42\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A42]  =  TRUE,already_standby_OF_i_A42  =  FALSE,already_required_OF_i_A42  =  FALSE" << endl;
		list.push_back(make_tuple(131, 1, "INS", 6));
	}
	if ((boolState[failI_OF_i_A42] == false) && (boolState[to_be_fired_OF_i_A42] &&	boolState[relevant_evt_OF_i_A42]))
	{
		//cout << "132 :  INS_SUB_COUNT (6) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A42]  =  FALSE,already_required_OF_i_A42  =  FALSE" << endl;
		list.push_back(make_tuple(132, 0, "INS", 6));
	}
	if ((boolState[failI_OF_i_A43] == false) && (boolState[to_be_fired_OF_i_A43] &&	boolState[relevant_evt_OF_i_A43]))
	{
		//cout << "134 :  INS_SUB_COUNT (7) |FAULT | failI  LABEL \"instantaneous failure i_A43\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A43]  =  TRUE,already_standby_OF_i_A43  =  FALSE,already_required_OF_i_A43  =  FALSE" << endl;
		list.push_back(make_tuple(134, 1, "INS", 7));
	}
	if ((boolState[failI_OF_i_A43] == false) && (boolState[to_be_fired_OF_i_A43] &&	boolState[relevant_evt_OF_i_A43]))
	{
		//cout << "135 :  INS_SUB_COUNT (7) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A43]  =  FALSE,already_required_OF_i_A43  =  FALSE" << endl;
		list.push_back(make_tuple(135, 0, "INS", 7));
	}
	if ((boolState[failI_OF_i_A45] == false) && (boolState[to_be_fired_OF_i_A45] &&	boolState[relevant_evt_OF_i_A45]))
	{
		//cout << "137 :  INS_SUB_COUNT (8) |FAULT | failI  LABEL \"instantaneous failure i_A45\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A45]  =  TRUE,already_standby_OF_i_A45  =  FALSE,already_required_OF_i_A45  =  FALSE" << endl;
		list.push_back(make_tuple(137, 1, "INS", 8));
	}
	if ((boolState[failI_OF_i_A45] == false) && (boolState[to_be_fired_OF_i_A45] &&	boolState[relevant_evt_OF_i_A45]))
	{
		//cout << "138 :  INS_SUB_COUNT (8) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A45]  =  FALSE,already_required_OF_i_A45  =  FALSE" << endl;
		list.push_back(make_tuple(138, 0, "INS", 8));
	}
	if ((boolState[failI_OF_i_A46] == false) && (boolState[to_be_fired_OF_i_A46] &&	boolState[relevant_evt_OF_i_A46]))
	{
		//cout << "140 :  INS_SUB_COUNT (9) |FAULT | failI  LABEL \"instantaneous failure i_A46\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A46]  =  TRUE,already_standby_OF_i_A46  =  FALSE,already_required_OF_i_A46  =  FALSE" << endl;
		list.push_back(make_tuple(140, 1, "INS", 9));
	}
	if ((boolState[failI_OF_i_A46] == false) && (boolState[to_be_fired_OF_i_A46] &&	boolState[relevant_evt_OF_i_A46]))
	{
		//cout << "141 :  INS_SUB_COUNT (9) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A46]  =  FALSE,already_required_OF_i_A46  =  FALSE" << endl;
		list.push_back(make_tuple(141, 0, "INS", 9));
	}
	if ((boolState[failI_OF_i_A47] == false) && (boolState[to_be_fired_OF_i_A47] &&	boolState[relevant_evt_OF_i_A47]))
	{
		//cout << "143 :  INS_SUB_COUNT (10) |FAULT | failI  LABEL \"instantaneous failure i_A47\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A47]  =  TRUE,already_standby_OF_i_A47  =  FALSE,already_required_OF_i_A47  =  FALSE" << endl;
		list.push_back(make_tuple(143, 1, "INS", 10));
	}
	if ((boolState[failI_OF_i_A47] == false) && (boolState[to_be_fired_OF_i_A47] &&	boolState[relevant_evt_OF_i_A47]))
	{
		//cout << "144 :  INS_SUB_COUNT (10) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A47]  =  FALSE,already_required_OF_i_A47  =  FALSE" << endl;
		list.push_back(make_tuple(144, 0, "INS", 10));
	}
	if ((boolState[failI_OF_i_A48] == false) && (boolState[to_be_fired_OF_i_A48] &&	boolState[relevant_evt_OF_i_A48]))
	{
		//cout << "146 :  INS_SUB_COUNT (11) |FAULT | failI  LABEL \"instantaneous failure i_A48\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A48]  =  TRUE,already_standby_OF_i_A48  =  FALSE,already_required_OF_i_A48  =  FALSE" << endl;
		list.push_back(make_tuple(146, 1, "INS", 11));
	}
	if ((boolState[failI_OF_i_A48] == false) && (boolState[to_be_fired_OF_i_A48] &&	boolState[relevant_evt_OF_i_A48]))
	{
		//cout << "147 :  INS_SUB_COUNT (11) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A48]  =  FALSE,already_required_OF_i_A48  =  FALSE" << endl;
		list.push_back(make_tuple(147, 0, "INS", 11));
	}
	if ((boolState[failI_OF_i_A49] == false) && (boolState[to_be_fired_OF_i_A49] &&	boolState[relevant_evt_OF_i_A49]))
	{
		//cout << "149 :  INS_SUB_COUNT (12) |FAULT | failI  LABEL \"instantaneous failure i_A49\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A49]  =  TRUE,already_standby_OF_i_A49  =  FALSE,already_required_OF_i_A49  =  FALSE" << endl;
		list.push_back(make_tuple(149, 1, "INS", 12));
	}
	if ((boolState[failI_OF_i_A49] == false) && (boolState[to_be_fired_OF_i_A49] &&	boolState[relevant_evt_OF_i_A49]))
	{
		//cout << "150 :  INS_SUB_COUNT (12) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A49]  =  FALSE,already_required_OF_i_A49  =  FALSE" << endl;
		list.push_back(make_tuple(150, 0, "INS", 12));
	}
	if ((boolState[failI_OF_i_A50] == false) && (boolState[to_be_fired_OF_i_A50] &&	boolState[relevant_evt_OF_i_A50]))
	{
		//cout << "152 :  INS_SUB_COUNT (13) |FAULT | failI  LABEL \"instantaneous failure i_A50\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A50]  =  TRUE,already_standby_OF_i_A50  =  FALSE,already_required_OF_i_A50  =  FALSE" << endl;
		list.push_back(make_tuple(152, 1, "INS", 13));
	}
	if ((boolState[failI_OF_i_A50] == false) && (boolState[to_be_fired_OF_i_A50] &&	boolState[relevant_evt_OF_i_A50]))
	{
		//cout << "153 :  INS_SUB_COUNT (13) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A50]  =  FALSE,already_required_OF_i_A50  =  FALSE" << endl;
		list.push_back(make_tuple(153, 0, "INS", 13));
	}
	if ((boolState[failI_OF_i_A51] == false) && (boolState[to_be_fired_OF_i_A51] &&	boolState[relevant_evt_OF_i_A51]))
	{
		//cout << "155 :  INS_SUB_COUNT (14) |FAULT | failI  LABEL \"instantaneous failure i_A51\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A51]  =  TRUE,already_standby_OF_i_A51  =  FALSE,already_required_OF_i_A51  =  FALSE" << endl;
		list.push_back(make_tuple(155, 1, "INS", 14));
	}
	if ((boolState[failI_OF_i_A51] == false) && (boolState[to_be_fired_OF_i_A51] &&	boolState[relevant_evt_OF_i_A51]))
	{
		//cout << "156 :  INS_SUB_COUNT (14) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A51]  =  FALSE,already_required_OF_i_A51  =  FALSE" << endl;
		list.push_back(make_tuple(156, 0, "INS", 14));
	}
	if ((boolState[failI_OF_i_A52] == false) && (boolState[to_be_fired_OF_i_A52] &&	boolState[relevant_evt_OF_i_A52]))
	{
		//cout << "158 :  INS_SUB_COUNT (15) |FAULT | failI  LABEL \"instantaneous failure i_A52\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A52]  =  TRUE,already_standby_OF_i_A52  =  FALSE,already_required_OF_i_A52  =  FALSE" << endl;
		list.push_back(make_tuple(158, 1, "INS", 15));
	}
	if ((boolState[failI_OF_i_A52] == false) && (boolState[to_be_fired_OF_i_A52] &&	boolState[relevant_evt_OF_i_A52]))
	{
		//cout << "159 :  INS_SUB_COUNT (15) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A52]  =  FALSE,already_required_OF_i_A52  =  FALSE" << endl;
		list.push_back(make_tuple(159, 0, "INS", 15));
	}
	if ((boolState[failI_OF_i_A53] == false) && (boolState[to_be_fired_OF_i_A53] &&	boolState[relevant_evt_OF_i_A53]))
	{
		//cout << "161 :  INS_SUB_COUNT (16) |FAULT | failI  LABEL \"instantaneous failure i_A53\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A53]  =  TRUE,already_standby_OF_i_A53  =  FALSE,already_required_OF_i_A53  =  FALSE" << endl;
		list.push_back(make_tuple(161, 1, "INS", 16));
	}
	if ((boolState[failI_OF_i_A53] == false) && (boolState[to_be_fired_OF_i_A53] &&	boolState[relevant_evt_OF_i_A53]))
	{
		//cout << "162 :  INS_SUB_COUNT (16) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A53]  =  FALSE,already_required_OF_i_A53  =  FALSE" << endl;
		list.push_back(make_tuple(162, 0, "INS", 16));
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
	if ((boolState[failF_OF_A100] == false) && (boolState[required_OF_A100] && boolState[relevant_evt_OF_A100]))
	{
		//cout << "2 : xx10_OF_A100 : FAULT failF  LABEL \"failure in operation A100\"  DIST EXP (9.9e-07)  INDUCING boolState[failF_OF_A100]  =  TRUE" << endl;
		list.push_back(make_tuple(2, 9.9e-07, "EXP", 0));
	}
	if (boolState[failF_OF_A100] == true)
	{
		//cout << "3 : xx11_OF_A100 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A100]  =  FALSE" << endl;
		list.push_back(make_tuple(3, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A101] == false) && (boolState[required_OF_A101] && boolState[relevant_evt_OF_A101]))
	{
		//cout << "4 : xx10_OF_A101 : FAULT failF  LABEL \"failure in operation A101\"  DIST EXP (1e-08)  INDUCING boolState[failF_OF_A101]  =  TRUE" << endl;
		list.push_back(make_tuple(4, 1e-08, "EXP", 0));
	}
	if (boolState[failF_OF_A101] == true)
	{
		//cout << "5 : xx11_OF_A101 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A101]  =  FALSE" << endl;
		list.push_back(make_tuple(5, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A102] == false) && (boolState[required_OF_A102] && boolState[relevant_evt_OF_A102]))
	{
		//cout << "6 : xx10_OF_A102 : FAULT failF  LABEL \"failure in operation A102\"  DIST EXP (1e-06)  INDUCING boolState[failF_OF_A102]  =  TRUE" << endl;
		list.push_back(make_tuple(6, 1e-06, "EXP", 0));
	}
	if (boolState[failF_OF_A102] == true)
	{
		//cout << "7 : xx11_OF_A102 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A102]  =  FALSE" << endl;
		list.push_back(make_tuple(7, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A11] == false) && ((boolState[required_OF_A11] && boolState[relevant_evt_OF_A11]) && ( !boolState[failS_OF_A11])))
	{
		//cout << "8 : xx17_OF_A11 : FAULT failF  LABEL \"failure in operation A11\"  DIST EXP (0)  INDUCING boolState[failF_OF_A11]  =  TRUE" << endl;
		list.push_back(make_tuple(8, 0, "EXP", 0));
	}
	if ((boolState[failS_OF_A11] == false) && ((( !boolState[required_OF_A11]) && boolState[relevant_evt_OF_A11]) && ( !boolState[failF_OF_A11])))
	{
		//cout << "9 : xx18_OF_A11 : FAULT failS  LABEL \"standby failure A11\"  DIST EXP (0)  INDUCING boolState[failS_OF_A11]  =  TRUE" << endl;
		list.push_back(make_tuple(9, 0, "EXP", 0));
	}
	if ((boolState[failS_OF_A11] == true) || (boolState[failF_OF_A11] == true))
	{
		//cout << "10 : xx19_OF_A11 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failS_OF_A11]  =  FALSE,failF_OF_A11  =  FALSE" << endl;
		list.push_back(make_tuple(10, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A14] == false) && ((boolState[required_OF_A14] && boolState[relevant_evt_OF_A14]) && ( !boolState[failS_OF_A14])))
	{
		//cout << "11 : xx17_OF_A14 : FAULT failF  LABEL \"failure in operation A14\"  DIST EXP (0)  INDUCING boolState[failF_OF_A14]  =  TRUE" << endl;
		list.push_back(make_tuple(11, 0, "EXP", 0));
	}
	if ((boolState[failS_OF_A14] == false) && ((( !boolState[required_OF_A14]) && boolState[relevant_evt_OF_A14]) && ( !boolState[failF_OF_A14])))
	{
		//cout << "12 : xx18_OF_A14 : FAULT failS  LABEL \"standby failure A14\"  DIST EXP (0)  INDUCING boolState[failS_OF_A14]  =  TRUE" << endl;
		list.push_back(make_tuple(12, 0, "EXP", 0));
	}
	if ((boolState[failS_OF_A14] == true) || (boolState[failF_OF_A14] == true))
	{
		//cout << "13 : xx19_OF_A14 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failS_OF_A14]  =  FALSE,failF_OF_A14  =  FALSE" << endl;
		list.push_back(make_tuple(13, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A17] == false) && (boolState[required_OF_A17] && boolState[relevant_evt_OF_A17]))
	{
		//cout << "14 : xx10_OF_A17 : FAULT failF  LABEL \"failure in operation A17\"  DIST EXP (0)  INDUCING boolState[failF_OF_A17]  =  TRUE" << endl;
		list.push_back(make_tuple(14, 0, "EXP", 0));
	}
	if (boolState[failF_OF_A17] == true)
	{
		//cout << "15 : xx11_OF_A17 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A17]  =  FALSE" << endl;
		list.push_back(make_tuple(15, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A20] == false) && (boolState[required_OF_A20] && boolState[relevant_evt_OF_A20]))
	{
		//cout << "16 : xx10_OF_A20 : FAULT failF  LABEL \"failure in operation A20\"  DIST EXP (0)  INDUCING boolState[failF_OF_A20]  =  TRUE" << endl;
		list.push_back(make_tuple(16, 0, "EXP", 0));
	}
	if (boolState[failF_OF_A20] == true)
	{
		//cout << "17 : xx11_OF_A20 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A20]  =  FALSE" << endl;
		list.push_back(make_tuple(17, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A23] == false) && (boolState[required_OF_A23] && boolState[relevant_evt_OF_A23]))
	{
		//cout << "18 : xx10_OF_A23 : FAULT failF  LABEL \"failure in operation A23\"  DIST EXP (1e-07)  INDUCING boolState[failF_OF_A23]  =  TRUE" << endl;
		list.push_back(make_tuple(18, 1e-07, "EXP", 0));
	}
	if (boolState[failF_OF_A23] == true)
	{
		//cout << "19 : xx11_OF_A23 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A23]  =  FALSE" << endl;
		list.push_back(make_tuple(19, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A26] == false) && (boolState[required_OF_A26] && boolState[relevant_evt_OF_A26]))
	{
		//cout << "20 : xx10_OF_A26 : FAULT failF  LABEL \"failure in operation A26\"  DIST EXP (2e-07)  INDUCING boolState[failF_OF_A26]  =  TRUE" << endl;
		list.push_back(make_tuple(20, 2e-07, "EXP", 0));
	}
	if (boolState[failF_OF_A26] == true)
	{
		//cout << "21 : xx11_OF_A26 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A26]  =  FALSE" << endl;
		list.push_back(make_tuple(21, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A29] == false) && (boolState[required_OF_A29] && boolState[relevant_evt_OF_A29]))
	{
		//cout << "22 : xx10_OF_A29 : FAULT failF  LABEL \"failure in operation A29\"  DIST EXP (2e-07)  INDUCING boolState[failF_OF_A29]  =  TRUE" << endl;
		list.push_back(make_tuple(22, 2e-07, "EXP", 0));
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
	if ((boolState[failF_OF_A5] == false) && (boolState[required_OF_A5] && boolState[relevant_evt_OF_A5]))
	{
		//cout << "26 : xx10_OF_A5 : FAULT failF  LABEL \"failure in operation A5\"  DIST EXP (0)  INDUCING boolState[failF_OF_A5]  =  TRUE" << endl;
		list.push_back(make_tuple(26, 0, "EXP", 0));
	}
	if (boolState[failF_OF_A5] == true)
	{
		//cout << "27 : xx11_OF_A5 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A5]  =  FALSE" << endl;
		list.push_back(make_tuple(27, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A54] == false) && (boolState[required_OF_A54] && boolState[relevant_evt_OF_A54]))
	{
		//cout << "28 : xx10_OF_A54 : FAULT failF  LABEL \"failure in operation A54\"  DIST EXP (1e-07)  INDUCING boolState[failF_OF_A54]  =  TRUE" << endl;
		list.push_back(make_tuple(28, 1e-07, "EXP", 0));
	}
	if (boolState[failF_OF_A54] == true)
	{
		//cout << "29 : xx11_OF_A54 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A54]  =  FALSE" << endl;
		list.push_back(make_tuple(29, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A56] == false) && (boolState[required_OF_A56] && boolState[relevant_evt_OF_A56]))
	{
		//cout << "30 : xx10_OF_A56 : FAULT failF  LABEL \"failure in operation A56\"  DIST EXP (1e-07)  INDUCING boolState[failF_OF_A56]  =  TRUE" << endl;
		list.push_back(make_tuple(30, 1e-07, "EXP", 0));
	}
	if (boolState[failF_OF_A56] == true)
	{
		//cout << "31 : xx11_OF_A56 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A56]  =  FALSE" << endl;
		list.push_back(make_tuple(31, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A57] == false) && (boolState[required_OF_A57] && boolState[relevant_evt_OF_A57]))
	{
		//cout << "32 : xx10_OF_A57 : FAULT failF  LABEL \"failure in operation A57\"  DIST EXP (1e-07)  INDUCING boolState[failF_OF_A57]  =  TRUE" << endl;
		list.push_back(make_tuple(32, 1e-07, "EXP", 0));
	}
	if (boolState[failF_OF_A57] == true)
	{
		//cout << "33 : xx11_OF_A57 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A57]  =  FALSE" << endl;
		list.push_back(make_tuple(33, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A62] == false) && (boolState[required_OF_A62] && boolState[relevant_evt_OF_A62]))
	{
		//cout << "34 : xx10_OF_A62 : FAULT failF  LABEL \"failure in operation A62\"  DIST EXP (9.9e-05)  INDUCING boolState[failF_OF_A62]  =  TRUE" << endl;
		list.push_back(make_tuple(34, 9.9e-05, "EXP", 0));
	}
	if (boolState[failF_OF_A62] == true)
	{
		//cout << "35 : xx11_OF_A62 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A62]  =  FALSE" << endl;
		list.push_back(make_tuple(35, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A63] == false) && (boolState[required_OF_A63] && boolState[relevant_evt_OF_A63]))
	{
		//cout << "36 : xx10_OF_A63 : FAULT failF  LABEL \"failure in operation A63\"  DIST EXP (1e-06)  INDUCING boolState[failF_OF_A63]  =  TRUE" << endl;
		list.push_back(make_tuple(36, 1e-06, "EXP", 0));
	}
	if (boolState[failF_OF_A63] == true)
	{
		//cout << "37 : xx11_OF_A63 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A63]  =  FALSE" << endl;
		list.push_back(make_tuple(37, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A64] == false) && (boolState[required_OF_A64] && boolState[relevant_evt_OF_A64]))
	{
		//cout << "38 : xx10_OF_A64 : FAULT failF  LABEL \"failure in operation A64\"  DIST EXP (1e-05)  INDUCING boolState[failF_OF_A64]  =  TRUE" << endl;
		list.push_back(make_tuple(38, 1e-05, "EXP", 0));
	}
	if (boolState[failF_OF_A64] == true)
	{
		//cout << "39 : xx11_OF_A64 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A64]  =  FALSE" << endl;
		list.push_back(make_tuple(39, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A67] == false) && (boolState[required_OF_A67] && boolState[relevant_evt_OF_A67]))
	{
		//cout << "40 : xx10_OF_A67 : FAULT failF  LABEL \"failure in operation A67\"  DIST EXP (9.9e-06)  INDUCING boolState[failF_OF_A67]  =  TRUE" << endl;
		list.push_back(make_tuple(40, 9.9e-06, "EXP", 0));
	}
	if (boolState[failF_OF_A67] == true)
	{
		//cout << "41 : xx11_OF_A67 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A67]  =  FALSE" << endl;
		list.push_back(make_tuple(41, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A68] == false) && (boolState[required_OF_A68] && boolState[relevant_evt_OF_A68]))
	{
		//cout << "42 : xx10_OF_A68 : FAULT failF  LABEL \"failure in operation A68\"  DIST EXP (1e-07)  INDUCING boolState[failF_OF_A68]  =  TRUE" << endl;
		list.push_back(make_tuple(42, 1e-07, "EXP", 0));
	}
	if (boolState[failF_OF_A68] == true)
	{
		//cout << "43 : xx11_OF_A68 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A68]  =  FALSE" << endl;
		list.push_back(make_tuple(43, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A69] == false) && (boolState[required_OF_A69] && boolState[relevant_evt_OF_A69]))
	{
		//cout << "44 : xx10_OF_A69 : FAULT failF  LABEL \"failure in operation A69\"  DIST EXP (1e-05)  INDUCING boolState[failF_OF_A69]  =  TRUE" << endl;
		list.push_back(make_tuple(44, 1e-05, "EXP", 0));
	}
	if (boolState[failF_OF_A69] == true)
	{
		//cout << "45 : xx11_OF_A69 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A69]  =  FALSE" << endl;
		list.push_back(make_tuple(45, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A73] == false) && ((boolState[required_OF_A73] && boolState[relevant_evt_OF_A73]) && ( !boolState[failS_OF_A73])))
	{
		//cout << "46 : xx17_OF_A73 : FAULT failF  LABEL \"failure in operation A73\"  DIST EXP (9.9e-06)  INDUCING boolState[failF_OF_A73]  =  TRUE" << endl;
		list.push_back(make_tuple(46, 9.9e-06, "EXP", 0));
	}
	if ((boolState[failS_OF_A73] == false) && ((( !boolState[required_OF_A73]) && boolState[relevant_evt_OF_A73]) && ( !boolState[failF_OF_A73])))
	{
		//cout << "47 : xx18_OF_A73 : FAULT failS  LABEL \"standby failure A73\"  DIST EXP (0)  INDUCING boolState[failS_OF_A73]  =  TRUE" << endl;
		list.push_back(make_tuple(47, 0, "EXP", 0));
	}
	if ((boolState[failS_OF_A73] == true) || (boolState[failF_OF_A73] == true))
	{
		//cout << "48 : xx19_OF_A73 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failS_OF_A73]  =  FALSE,failF_OF_A73  =  FALSE" << endl;
		list.push_back(make_tuple(48, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A74] == false) && ((boolState[required_OF_A74] && boolState[relevant_evt_OF_A74]) && ( !boolState[failS_OF_A74])))
	{
		//cout << "49 : xx17_OF_A74 : FAULT failF  LABEL \"failure in operation A74\"  DIST EXP (1e-07)  INDUCING boolState[failF_OF_A74]  =  TRUE" << endl;
		list.push_back(make_tuple(49, 1e-07, "EXP", 0));
	}
	if ((boolState[failS_OF_A74] == false) && ((( !boolState[required_OF_A74]) && boolState[relevant_evt_OF_A74]) && ( !boolState[failF_OF_A74])))
	{
		//cout << "50 : xx18_OF_A74 : FAULT failS  LABEL \"standby failure A74\"  DIST EXP (0)  INDUCING boolState[failS_OF_A74]  =  TRUE" << endl;
		list.push_back(make_tuple(50, 0, "EXP", 0));
	}
	if ((boolState[failS_OF_A74] == true) || (boolState[failF_OF_A74] == true))
	{
		//cout << "51 : xx19_OF_A74 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failS_OF_A74]  =  FALSE,failF_OF_A74  =  FALSE" << endl;
		list.push_back(make_tuple(51, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A75] == false) && ((boolState[required_OF_A75] && boolState[relevant_evt_OF_A75]) && ( !boolState[failS_OF_A75])))
	{
		//cout << "52 : xx17_OF_A75 : FAULT failF  LABEL \"failure in operation A75\"  DIST EXP (1e-06)  INDUCING boolState[failF_OF_A75]  =  TRUE" << endl;
		list.push_back(make_tuple(52, 1e-06, "EXP", 0));
	}
	if ((boolState[failS_OF_A75] == false) && ((( !boolState[required_OF_A75]) && boolState[relevant_evt_OF_A75]) && ( !boolState[failF_OF_A75])))
	{
		//cout << "53 : xx18_OF_A75 : FAULT failS  LABEL \"standby failure A75\"  DIST EXP (0)  INDUCING boolState[failS_OF_A75]  =  TRUE" << endl;
		list.push_back(make_tuple(53, 0, "EXP", 0));
	}
	if ((boolState[failS_OF_A75] == true) || (boolState[failF_OF_A75] == true))
	{
		//cout << "54 : xx19_OF_A75 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failS_OF_A75]  =  FALSE,failF_OF_A75  =  FALSE" << endl;
		list.push_back(make_tuple(54, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A78] == false) && ((boolState[required_OF_A78] && boolState[relevant_evt_OF_A78]) && ( !boolState[failS_OF_A78])))
	{
		//cout << "55 : xx17_OF_A78 : FAULT failF  LABEL \"failure in operation A78\"  DIST EXP (9.9e-07)  INDUCING boolState[failF_OF_A78]  =  TRUE" << endl;
		list.push_back(make_tuple(55, 9.9e-07, "EXP", 0));
	}
	if ((boolState[failS_OF_A78] == false) && ((( !boolState[required_OF_A78]) && boolState[relevant_evt_OF_A78]) && ( !boolState[failF_OF_A78])))
	{
		//cout << "56 : xx18_OF_A78 : FAULT failS  LABEL \"standby failure A78\"  DIST EXP (0)  INDUCING boolState[failS_OF_A78]  =  TRUE" << endl;
		list.push_back(make_tuple(56, 0, "EXP", 0));
	}
	if ((boolState[failS_OF_A78] == true) || (boolState[failF_OF_A78] == true))
	{
		//cout << "57 : xx19_OF_A78 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failS_OF_A78]  =  FALSE,failF_OF_A78  =  FALSE" << endl;
		list.push_back(make_tuple(57, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A79] == false) && ((boolState[required_OF_A79] && boolState[relevant_evt_OF_A79]) && ( !boolState[failS_OF_A79])))
	{
		//cout << "58 : xx17_OF_A79 : FAULT failF  LABEL \"failure in operation A79\"  DIST EXP (1e-08)  INDUCING boolState[failF_OF_A79]  =  TRUE" << endl;
		list.push_back(make_tuple(58, 1e-08, "EXP", 0));
	}
	if ((boolState[failS_OF_A79] == false) && ((( !boolState[required_OF_A79]) && boolState[relevant_evt_OF_A79]) && ( !boolState[failF_OF_A79])))
	{
		//cout << "59 : xx18_OF_A79 : FAULT failS  LABEL \"standby failure A79\"  DIST EXP (0)  INDUCING boolState[failS_OF_A79]  =  TRUE" << endl;
		list.push_back(make_tuple(59, 0, "EXP", 0));
	}
	if ((boolState[failS_OF_A79] == true) || (boolState[failF_OF_A79] == true))
	{
		//cout << "60 : xx19_OF_A79 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failS_OF_A79]  =  FALSE,failF_OF_A79  =  FALSE" << endl;
		list.push_back(make_tuple(60, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A8] == false) && (boolState[required_OF_A8] && boolState[relevant_evt_OF_A8]))
	{
		//cout << "61 : xx10_OF_A8 : FAULT failF  LABEL \"failure in operation A8\"  DIST EXP (0)  INDUCING boolState[failF_OF_A8]  =  TRUE" << endl;
		list.push_back(make_tuple(61, 0, "EXP", 0));
	}
	if (boolState[failF_OF_A8] == true)
	{
		//cout << "62 : xx11_OF_A8 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A8]  =  FALSE" << endl;
		list.push_back(make_tuple(62, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A80] == false) && ((boolState[required_OF_A80] && boolState[relevant_evt_OF_A80]) && ( !boolState[failS_OF_A80])))
	{
		//cout << "63 : xx17_OF_A80 : FAULT failF  LABEL \"failure in operation A80\"  DIST EXP (1e-06)  INDUCING boolState[failF_OF_A80]  =  TRUE" << endl;
		list.push_back(make_tuple(63, 1e-06, "EXP", 0));
	}
	if ((boolState[failS_OF_A80] == false) && ((( !boolState[required_OF_A80]) && boolState[relevant_evt_OF_A80]) && ( !boolState[failF_OF_A80])))
	{
		//cout << "64 : xx18_OF_A80 : FAULT failS  LABEL \"standby failure A80\"  DIST EXP (0)  INDUCING boolState[failS_OF_A80]  =  TRUE" << endl;
		list.push_back(make_tuple(64, 0, "EXP", 0));
	}
	if ((boolState[failS_OF_A80] == true) || (boolState[failF_OF_A80] == true))
	{
		//cout << "65 : xx19_OF_A80 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failS_OF_A80]  =  FALSE,failF_OF_A80  =  FALSE" << endl;
		list.push_back(make_tuple(65, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A84] == false) && (boolState[required_OF_A84] && boolState[relevant_evt_OF_A84]))
	{
		//cout << "66 : xx10_OF_A84 : FAULT failF  LABEL \"failure in operation A84\"  DIST EXP (9.9e-06)  INDUCING boolState[failF_OF_A84]  =  TRUE" << endl;
		list.push_back(make_tuple(66, 9.9e-06, "EXP", 0));
	}
	if (boolState[failF_OF_A84] == true)
	{
		//cout << "67 : xx11_OF_A84 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A84]  =  FALSE" << endl;
		list.push_back(make_tuple(67, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A85] == false) && (boolState[required_OF_A85] && boolState[relevant_evt_OF_A85]))
	{
		//cout << "68 : xx10_OF_A85 : FAULT failF  LABEL \"failure in operation A85\"  DIST EXP (1e-07)  INDUCING boolState[failF_OF_A85]  =  TRUE" << endl;
		list.push_back(make_tuple(68, 1e-07, "EXP", 0));
	}
	if (boolState[failF_OF_A85] == true)
	{
		//cout << "69 : xx11_OF_A85 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A85]  =  FALSE" << endl;
		list.push_back(make_tuple(69, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A86] == false) && (boolState[required_OF_A86] && boolState[relevant_evt_OF_A86]))
	{
		//cout << "70 : xx10_OF_A86 : FAULT failF  LABEL \"failure in operation A86\"  DIST EXP (1e-06)  INDUCING boolState[failF_OF_A86]  =  TRUE" << endl;
		list.push_back(make_tuple(70, 1e-06, "EXP", 0));
	}
	if (boolState[failF_OF_A86] == true)
	{
		//cout << "71 : xx11_OF_A86 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A86]  =  FALSE" << endl;
		list.push_back(make_tuple(71, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A89] == false) && (boolState[required_OF_A89] && boolState[relevant_evt_OF_A89]))
	{
		//cout << "72 : xx10_OF_A89 : FAULT failF  LABEL \"failure in operation A89\"  DIST EXP (9.9e-07)  INDUCING boolState[failF_OF_A89]  =  TRUE" << endl;
		list.push_back(make_tuple(72, 9.9e-07, "EXP", 0));
	}
	if (boolState[failF_OF_A89] == true)
	{
		//cout << "73 : xx11_OF_A89 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A89]  =  FALSE" << endl;
		list.push_back(make_tuple(73, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A90] == false) && (boolState[required_OF_A90] && boolState[relevant_evt_OF_A90]))
	{
		//cout << "74 : xx10_OF_A90 : FAULT failF  LABEL \"failure in operation A90\"  DIST EXP (1e-08)  INDUCING boolState[failF_OF_A90]  =  TRUE" << endl;
		list.push_back(make_tuple(74, 1e-08, "EXP", 0));
	}
	if (boolState[failF_OF_A90] == true)
	{
		//cout << "75 : xx11_OF_A90 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A90]  =  FALSE" << endl;
		list.push_back(make_tuple(75, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A91] == false) && (boolState[required_OF_A91] && boolState[relevant_evt_OF_A91]))
	{
		//cout << "76 : xx10_OF_A91 : FAULT failF  LABEL \"failure in operation A91\"  DIST EXP (1e-06)  INDUCING boolState[failF_OF_A91]  =  TRUE" << endl;
		list.push_back(make_tuple(76, 1e-06, "EXP", 0));
	}
	if (boolState[failF_OF_A91] == true)
	{
		//cout << "77 : xx11_OF_A91 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A91]  =  FALSE" << endl;
		list.push_back(make_tuple(77, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A95] == false) && (boolState[required_OF_A95] && boolState[relevant_evt_OF_A95]))
	{
		//cout << "78 : xx10_OF_A95 : FAULT failF  LABEL \"failure in operation A95\"  DIST EXP (9.9e-06)  INDUCING boolState[failF_OF_A95]  =  TRUE" << endl;
		list.push_back(make_tuple(78, 9.9e-06, "EXP", 0));
	}
	if (boolState[failF_OF_A95] == true)
	{
		//cout << "79 : xx11_OF_A95 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A95]  =  FALSE" << endl;
		list.push_back(make_tuple(79, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A96] == false) && (boolState[required_OF_A96] && boolState[relevant_evt_OF_A96]))
	{
		//cout << "80 : xx10_OF_A96 : FAULT failF  LABEL \"failure in operation A96\"  DIST EXP (1e-07)  INDUCING boolState[failF_OF_A96]  =  TRUE" << endl;
		list.push_back(make_tuple(80, 1e-07, "EXP", 0));
	}
	if (boolState[failF_OF_A96] == true)
	{
		//cout << "81 : xx11_OF_A96 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A96]  =  FALSE" << endl;
		list.push_back(make_tuple(81, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A97] == false) && (boolState[required_OF_A97] && boolState[relevant_evt_OF_A97]))
	{
		//cout << "82 : xx10_OF_A97 : FAULT failF  LABEL \"failure in operation A97\"  DIST EXP (1e-06)  INDUCING boolState[failF_OF_A97]  =  TRUE" << endl;
		list.push_back(make_tuple(82, 1e-06, "EXP", 0));
	}
	if (boolState[failF_OF_A97] == true)
	{
		//cout << "83 : xx11_OF_A97 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A97]  =  FALSE" << endl;
		list.push_back(make_tuple(83, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A36] == false) && (boolState[required_OF_f_A36] && boolState[relevant_evt_OF_f_A36]))
	{
		//cout << "84 : xx10_OF_f_A36 : FAULT failF  LABEL \"failure in operation f_A36\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A36]  =  TRUE" << endl;
		list.push_back(make_tuple(84, 0, "EXP", 0));
	}
	if (boolState[failF_OF_f_A36] == true)
	{
		//cout << "85 : xx11_OF_f_A36 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_f_A36]  =  FALSE" << endl;
		list.push_back(make_tuple(85, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A37] == false) && (boolState[required_OF_f_A37] && boolState[relevant_evt_OF_f_A37]))
	{
		//cout << "86 : xx10_OF_f_A37 : FAULT failF  LABEL \"failure in operation f_A37\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A37]  =  TRUE" << endl;
		list.push_back(make_tuple(86, 0, "EXP", 0));
	}
	if (boolState[failF_OF_f_A37] == true)
	{
		//cout << "87 : xx11_OF_f_A37 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_f_A37]  =  FALSE" << endl;
		list.push_back(make_tuple(87, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A38] == false) && (boolState[required_OF_f_A38] && boolState[relevant_evt_OF_f_A38]))
	{
		//cout << "88 : xx10_OF_f_A38 : FAULT failF  LABEL \"failure in operation f_A38\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A38]  =  TRUE" << endl;
		list.push_back(make_tuple(88, 0, "EXP", 0));
	}
	if (boolState[failF_OF_f_A38] == true)
	{
		//cout << "89 : xx11_OF_f_A38 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_f_A38]  =  FALSE" << endl;
		list.push_back(make_tuple(89, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A39] == false) && (boolState[required_OF_f_A39] && boolState[relevant_evt_OF_f_A39]))
	{
		//cout << "90 : xx10_OF_f_A39 : FAULT failF  LABEL \"failure in operation f_A39\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A39]  =  TRUE" << endl;
		list.push_back(make_tuple(90, 0, "EXP", 0));
	}
	if (boolState[failF_OF_f_A39] == true)
	{
		//cout << "91 : xx11_OF_f_A39 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_f_A39]  =  FALSE" << endl;
		list.push_back(make_tuple(91, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A40] == false) && (boolState[required_OF_f_A40] && boolState[relevant_evt_OF_f_A40]))
	{
		//cout << "92 : xx10_OF_f_A40 : FAULT failF  LABEL \"failure in operation f_A40\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A40]  =  TRUE" << endl;
		list.push_back(make_tuple(92, 0, "EXP", 0));
	}
	if (boolState[failF_OF_f_A40] == true)
	{
		//cout << "93 : xx11_OF_f_A40 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_f_A40]  =  FALSE" << endl;
		list.push_back(make_tuple(93, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A42] == false) && (boolState[required_OF_f_A42] && boolState[relevant_evt_OF_f_A42]))
	{
		//cout << "94 : xx10_OF_f_A42 : FAULT failF  LABEL \"failure in operation f_A42\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A42]  =  TRUE" << endl;
		list.push_back(make_tuple(94, 0, "EXP", 0));
	}
	if (boolState[failF_OF_f_A42] == true)
	{
		//cout << "95 : xx11_OF_f_A42 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_f_A42]  =  FALSE" << endl;
		list.push_back(make_tuple(95, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A43] == false) && (boolState[required_OF_f_A43] && boolState[relevant_evt_OF_f_A43]))
	{
		//cout << "96 : xx10_OF_f_A43 : FAULT failF  LABEL \"failure in operation f_A43\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A43]  =  TRUE" << endl;
		list.push_back(make_tuple(96, 0, "EXP", 0));
	}
	if (boolState[failF_OF_f_A43] == true)
	{
		//cout << "97 : xx11_OF_f_A43 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_f_A43]  =  FALSE" << endl;
		list.push_back(make_tuple(97, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A45] == false) && (boolState[required_OF_f_A45] && boolState[relevant_evt_OF_f_A45]))
	{
		//cout << "98 : xx10_OF_f_A45 : FAULT failF  LABEL \"failure in operation f_A45\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A45]  =  TRUE" << endl;
		list.push_back(make_tuple(98, 0, "EXP", 0));
	}
	if (boolState[failF_OF_f_A45] == true)
	{
		//cout << "99 : xx11_OF_f_A45 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_f_A45]  =  FALSE" << endl;
		list.push_back(make_tuple(99, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A46] == false) && (boolState[required_OF_f_A46] && boolState[relevant_evt_OF_f_A46]))
	{
		//cout << "100 : xx10_OF_f_A46 : FAULT failF  LABEL \"failure in operation f_A46\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A46]  =  TRUE" << endl;
		list.push_back(make_tuple(100, 0, "EXP", 0));
	}
	if (boolState[failF_OF_f_A46] == true)
	{
		//cout << "101 : xx11_OF_f_A46 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_f_A46]  =  FALSE" << endl;
		list.push_back(make_tuple(101, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A47] == false) && (boolState[required_OF_f_A47] && boolState[relevant_evt_OF_f_A47]))
	{
		//cout << "102 : xx10_OF_f_A47 : FAULT failF  LABEL \"failure in operation f_A47\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A47]  =  TRUE" << endl;
		list.push_back(make_tuple(102, 0, "EXP", 0));
	}
	if (boolState[failF_OF_f_A47] == true)
	{
		//cout << "103 : xx11_OF_f_A47 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_f_A47]  =  FALSE" << endl;
		list.push_back(make_tuple(103, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A48] == false) && (boolState[required_OF_f_A48] && boolState[relevant_evt_OF_f_A48]))
	{
		//cout << "104 : xx10_OF_f_A48 : FAULT failF  LABEL \"failure in operation f_A48\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A48]  =  TRUE" << endl;
		list.push_back(make_tuple(104, 0, "EXP", 0));
	}
	if (boolState[failF_OF_f_A48] == true)
	{
		//cout << "105 : xx11_OF_f_A48 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_f_A48]  =  FALSE" << endl;
		list.push_back(make_tuple(105, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A49] == false) && (boolState[required_OF_f_A49] && boolState[relevant_evt_OF_f_A49]))
	{
		//cout << "106 : xx10_OF_f_A49 : FAULT failF  LABEL \"failure in operation f_A49\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A49]  =  TRUE" << endl;
		list.push_back(make_tuple(106, 0, "EXP", 0));
	}
	if (boolState[failF_OF_f_A49] == true)
	{
		//cout << "107 : xx11_OF_f_A49 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_f_A49]  =  FALSE" << endl;
		list.push_back(make_tuple(107, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A50] == false) && (boolState[required_OF_f_A50] && boolState[relevant_evt_OF_f_A50]))
	{
		//cout << "108 : xx10_OF_f_A50 : FAULT failF  LABEL \"failure in operation f_A50\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A50]  =  TRUE" << endl;
		list.push_back(make_tuple(108, 0, "EXP", 0));
	}
	if (boolState[failF_OF_f_A50] == true)
	{
		//cout << "109 : xx11_OF_f_A50 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_f_A50]  =  FALSE" << endl;
		list.push_back(make_tuple(109, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A51] == false) && (boolState[required_OF_f_A51] && boolState[relevant_evt_OF_f_A51]))
	{
		//cout << "110 : xx10_OF_f_A51 : FAULT failF  LABEL \"failure in operation f_A51\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A51]  =  TRUE" << endl;
		list.push_back(make_tuple(110, 0, "EXP", 0));
	}
	if (boolState[failF_OF_f_A51] == true)
	{
		//cout << "111 : xx11_OF_f_A51 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_f_A51]  =  FALSE" << endl;
		list.push_back(make_tuple(111, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A52] == false) && (boolState[required_OF_f_A52] && boolState[relevant_evt_OF_f_A52]))
	{
		//cout << "112 : xx10_OF_f_A52 : FAULT failF  LABEL \"failure in operation f_A52\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A52]  =  TRUE" << endl;
		list.push_back(make_tuple(112, 0, "EXP", 0));
	}
	if (boolState[failF_OF_f_A52] == true)
	{
		//cout << "113 : xx11_OF_f_A52 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_f_A52]  =  FALSE" << endl;
		list.push_back(make_tuple(113, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A53] == false) && (boolState[required_OF_f_A53] && boolState[relevant_evt_OF_f_A53]))
	{
		//cout << "114 : xx10_OF_f_A53 : FAULT failF  LABEL \"failure in operation f_A53\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A53]  =  TRUE" << endl;
		list.push_back(make_tuple(114, 0, "EXP", 0));
	}
	if (boolState[failF_OF_f_A53] == true)
	{
		//cout << "115 : xx11_OF_f_A53 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_f_A53]  =  FALSE" << endl;
		list.push_back(make_tuple(115, 0.1, "EXP", 0));
	}
	if (boolState[failI_OF_i_A36] == true)
	{
		//cout << "118 : xx24_OF_i_A36 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failI_OF_i_A36]  =  FALSE" << endl;
		list.push_back(make_tuple(118, 0.1, "EXP", 0));
	}
	if (boolState[failI_OF_i_A37] == true)
	{
		//cout << "121 : xx24_OF_i_A37 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failI_OF_i_A37]  =  FALSE" << endl;
		list.push_back(make_tuple(121, 0.1, "EXP", 0));
	}
	if (boolState[failI_OF_i_A38] == true)
	{
		//cout << "124 : xx24_OF_i_A38 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failI_OF_i_A38]  =  FALSE" << endl;
		list.push_back(make_tuple(124, 0.1, "EXP", 0));
	}
	if (boolState[failI_OF_i_A39] == true)
	{
		//cout << "127 : xx24_OF_i_A39 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failI_OF_i_A39]  =  FALSE" << endl;
		list.push_back(make_tuple(127, 0.1, "EXP", 0));
	}
	if (boolState[failI_OF_i_A40] == true)
	{
		//cout << "130 : xx24_OF_i_A40 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failI_OF_i_A40]  =  FALSE" << endl;
		list.push_back(make_tuple(130, 0.1, "EXP", 0));
	}
	if (boolState[failI_OF_i_A42] == true)
	{
		//cout << "133 : xx24_OF_i_A42 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failI_OF_i_A42]  =  FALSE" << endl;
		list.push_back(make_tuple(133, 0.1, "EXP", 0));
	}
	if (boolState[failI_OF_i_A43] == true)
	{
		//cout << "136 : xx24_OF_i_A43 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failI_OF_i_A43]  =  FALSE" << endl;
		list.push_back(make_tuple(136, 0.1, "EXP", 0));
	}
	if (boolState[failI_OF_i_A45] == true)
	{
		//cout << "139 : xx24_OF_i_A45 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failI_OF_i_A45]  =  FALSE" << endl;
		list.push_back(make_tuple(139, 0.1, "EXP", 0));
	}
	if (boolState[failI_OF_i_A46] == true)
	{
		//cout << "142 : xx24_OF_i_A46 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failI_OF_i_A46]  =  FALSE" << endl;
		list.push_back(make_tuple(142, 0.1, "EXP", 0));
	}
	if (boolState[failI_OF_i_A47] == true)
	{
		//cout << "145 : xx24_OF_i_A47 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failI_OF_i_A47]  =  FALSE" << endl;
		list.push_back(make_tuple(145, 0.1, "EXP", 0));
	}
	if (boolState[failI_OF_i_A48] == true)
	{
		//cout << "148 : xx24_OF_i_A48 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failI_OF_i_A48]  =  FALSE" << endl;
		list.push_back(make_tuple(148, 0.1, "EXP", 0));
	}
	if (boolState[failI_OF_i_A49] == true)
	{
		//cout << "151 : xx24_OF_i_A49 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failI_OF_i_A49]  =  FALSE" << endl;
		list.push_back(make_tuple(151, 0.1, "EXP", 0));
	}
	if (boolState[failI_OF_i_A50] == true)
	{
		//cout << "154 : xx24_OF_i_A50 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failI_OF_i_A50]  =  FALSE" << endl;
		list.push_back(make_tuple(154, 0.1, "EXP", 0));
	}
	if (boolState[failI_OF_i_A51] == true)
	{
		//cout << "157 : xx24_OF_i_A51 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failI_OF_i_A51]  =  FALSE" << endl;
		list.push_back(make_tuple(157, 0.1, "EXP", 0));
	}
	if (boolState[failI_OF_i_A52] == true)
	{
		//cout << "160 : xx24_OF_i_A52 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failI_OF_i_A52]  =  FALSE" << endl;
		list.push_back(make_tuple(160, 0.1, "EXP", 0));
	}
	if (boolState[failI_OF_i_A53] == true)
	{
		//cout << "163 : xx24_OF_i_A53 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failI_OF_i_A53]  =  FALSE" << endl;
		list.push_back(make_tuple(163, 0.1, "EXP", 0));
	}
	return list;
}


void storm::figaro::FigaroProgram_vgs_4_Trim_Article_repair::runOnceInteractionStep_initialization()
{
	if (boolState[failF_OF_A1] == true )
	{
		boolState[S_OF_A1]  =  true;
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

	if ((boolState[failS_OF_A11] == true) || (boolState[failF_OF_A11] == true) )
	{
		boolState[S_OF_A11]  =  true;
	}

	if ((boolState[failS_OF_A14] == true) || (boolState[failF_OF_A14] == true) )
	{
		boolState[S_OF_A14]  =  true;
	}

	if (boolState[failF_OF_A17] == true )
	{
		boolState[S_OF_A17]  =  true;
	}

	if (boolState[failF_OF_A20] == true )
	{
		boolState[S_OF_A20]  =  true;
	}

	if (boolState[failF_OF_A23] == true )
	{
		boolState[S_OF_A23]  =  true;
	}

	if (boolState[failF_OF_A26] == true )
	{
		boolState[S_OF_A26]  =  true;
	}

	if (boolState[failF_OF_A29] == true )
	{
		boolState[S_OF_A29]  =  true;
	}

	if (boolState[failF_OF_A33] == true )
	{
		boolState[S_OF_A33]  =  true;
	}

	if (boolState[failF_OF_A5] == true )
	{
		boolState[S_OF_A5]  =  true;
	}

	if (boolState[failF_OF_A54] == true )
	{
		boolState[S_OF_A54]  =  true;
	}

	if (boolState[failF_OF_A56] == true )
	{
		boolState[S_OF_A56]  =  true;
	}

	if (boolState[failF_OF_A57] == true )
	{
		boolState[S_OF_A57]  =  true;
	}

	if (boolState[failF_OF_A62] == true )
	{
		boolState[S_OF_A62]  =  true;
	}

	if (boolState[failF_OF_A63] == true )
	{
		boolState[S_OF_A63]  =  true;
	}

	if (boolState[failF_OF_A64] == true )
	{
		boolState[S_OF_A64]  =  true;
	}

	if (boolState[failF_OF_A67] == true )
	{
		boolState[S_OF_A67]  =  true;
	}

	if (boolState[failF_OF_A68] == true )
	{
		boolState[S_OF_A68]  =  true;
	}

	if (boolState[failF_OF_A69] == true )
	{
		boolState[S_OF_A69]  =  true;
	}

	if ((boolState[failS_OF_A73] == true) || (boolState[failF_OF_A73] == true) )
	{
		boolState[S_OF_A73]  =  true;
	}

	if ((boolState[failS_OF_A74] == true) || (boolState[failF_OF_A74] == true) )
	{
		boolState[S_OF_A74]  =  true;
	}

	if ((boolState[failS_OF_A75] == true) || (boolState[failF_OF_A75] == true) )
	{
		boolState[S_OF_A75]  =  true;
	}

	if ((boolState[failS_OF_A78] == true) || (boolState[failF_OF_A78] == true) )
	{
		boolState[S_OF_A78]  =  true;
	}

	if ((boolState[failS_OF_A79] == true) || (boolState[failF_OF_A79] == true) )
	{
		boolState[S_OF_A79]  =  true;
	}

	if (boolState[failF_OF_A8] == true )
	{
		boolState[S_OF_A8]  =  true;
	}

	if ((boolState[failS_OF_A80] == true) || (boolState[failF_OF_A80] == true) )
	{
		boolState[S_OF_A80]  =  true;
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

	if (boolState[failF_OF_A95] == true )
	{
		boolState[S_OF_A95]  =  true;
	}

	if (boolState[failF_OF_A96] == true )
	{
		boolState[S_OF_A96]  =  true;
	}

	if (boolState[failF_OF_A97] == true )
	{
		boolState[S_OF_A97]  =  true;
	}

	if (boolState[failF_OF_f_A36] == true )
	{
		boolState[S_OF_f_A36]  =  true;
	}

	if (boolState[failF_OF_f_A37] == true )
	{
		boolState[S_OF_f_A37]  =  true;
	}

	if (boolState[failF_OF_f_A38] == true )
	{
		boolState[S_OF_f_A38]  =  true;
	}

	if (boolState[failF_OF_f_A39] == true )
	{
		boolState[S_OF_f_A39]  =  true;
	}

	if (boolState[failF_OF_f_A40] == true )
	{
		boolState[S_OF_f_A40]  =  true;
	}

	if (boolState[failF_OF_f_A42] == true )
	{
		boolState[S_OF_f_A42]  =  true;
	}

	if (boolState[failF_OF_f_A43] == true )
	{
		boolState[S_OF_f_A43]  =  true;
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

	if (boolState[failF_OF_f_A50] == true )
	{
		boolState[S_OF_f_A50]  =  true;
	}

	if (boolState[failF_OF_f_A51] == true )
	{
		boolState[S_OF_f_A51]  =  true;
	}

	if (boolState[failF_OF_f_A52] == true )
	{
		boolState[S_OF_f_A52]  =  true;
	}

	if (boolState[failF_OF_f_A53] == true )
	{
		boolState[S_OF_f_A53]  =  true;
	}

	if (boolState[failI_OF_i_A36] == true )
	{
		boolState[S_OF_i_A36]  =  true;
	}

	if (boolState[failI_OF_i_A37] == true )
	{
		boolState[S_OF_i_A37]  =  true;
	}

	if (boolState[failI_OF_i_A38] == true )
	{
		boolState[S_OF_i_A38]  =  true;
	}

	if (boolState[failI_OF_i_A39] == true )
	{
		boolState[S_OF_i_A39]  =  true;
	}

	if (boolState[failI_OF_i_A40] == true )
	{
		boolState[S_OF_i_A40]  =  true;
	}

	if (boolState[failI_OF_i_A42] == true )
	{
		boolState[S_OF_i_A42]  =  true;
	}

	if (boolState[failI_OF_i_A43] == true )
	{
		boolState[S_OF_i_A43]  =  true;
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

	if (boolState[failI_OF_i_A50] == true )
	{
		boolState[S_OF_i_A50]  =  true;
	}

	if (boolState[failI_OF_i_A51] == true )
	{
		boolState[S_OF_i_A51]  =  true;
	}

	if (boolState[failI_OF_i_A52] == true )
	{
		boolState[S_OF_i_A52]  =  true;
	}

	if (boolState[failI_OF_i_A53] == true )
	{
		boolState[S_OF_i_A53]  =  true;
	}

}


void storm::figaro::FigaroProgram_vgs_4_Trim_Article_repair::runOnceInteractionStep_propagate_effect_S()
{
	if (((((((boolState[S_OF_A18] || boolState[S_OF_A21]) || boolState[S_OF_A24]) || boolState[S_OF_A27]) || boolState[S_OF_A3]) || boolState[S_OF_A31]) || boolState[S_OF_A34]) || boolState[S_OF_A58] )
	{
		boolState[S_OF_A0]  =  true;
	}

	if (boolState[S_OF_A100] && boolState[S_OF_A102] )
	{
		boolState[S_OF_A103]  =  true;
	}

	if (((boolState[S_OF_A101] || boolState[S_OF_A103]) || boolState[S_OF_A96]) || boolState[S_OF_A98] )
	{
		boolState[S_OF_A105]  =  true;
	}

	if (((boolState[S_OF_A11] || boolState[S_OF_A39]) || boolState[S_OF_A49]) || boolState[S_OF_A83] )
	{
		boolState[S_OF_A12]  =  true;
	}

	if (((boolState[S_OF_A14] || boolState[S_OF_A38]) || boolState[S_OF_A45]) || boolState[S_OF_A83] )
	{
		boolState[S_OF_A15]  =  true;
	}

	if (((boolState[S_OF_A47] || boolState[S_OF_A59]) || boolState[S_OF_A60]) || boolState[S_OF_A94] )
	{
		boolState[S_OF_A18]  =  true;
	}

	if ((3 <= (boolState[S_OF_A1] + boolState[S_OF_A54] + boolState[S_OF_A56] + boolState[S_OF_A57])) )
	{
		boolState[S_OF_A2]  =  true;
	}

	if (((((((boolState[S_OF_A105] || boolState[S_OF_A20]) || boolState[S_OF_A46]) || boolState[S_OF_A50]) || boolState[S_OF_A51]) || boolState[S_OF_A52]) || boolState[S_OF_A53]) || boolState[S_OF_A94] )
	{
		boolState[S_OF_A21]  =  true;
	}

	if (boolState[S_OF_A23] || boolState[S_OF_A94] )
	{
		boolState[S_OF_A24]  =  true;
	}

	if (boolState[S_OF_A26] )
	{
		boolState[S_OF_A27]  =  true;
	}

	if (boolState[S_OF_A2] )
	{
		boolState[S_OF_A3]  =  true;
	}

	if (boolState[S_OF_A12] || boolState[S_OF_A15] )
	{
		boolState[S_OF_A30]  =  true;
	}

	if (boolState[S_OF_A29] )
	{
		boolState[S_OF_A31]  =  true;
	}

	if (boolState[S_OF_A33] )
	{
		boolState[S_OF_A34]  =  true;
	}

	if (boolState[S_OF_f_A36] || boolState[S_OF_i_A36] )
	{
		boolState[S_OF_A36]  =  true;
	}

	if (boolState[S_OF_f_A37] || boolState[S_OF_i_A37] )
	{
		boolState[S_OF_A37]  =  true;
	}

	if (boolState[S_OF_f_A38] || boolState[S_OF_i_A38] )
	{
		boolState[S_OF_A38]  =  true;
	}

	if (boolState[S_OF_f_A39] || boolState[S_OF_i_A39] )
	{
		boolState[S_OF_A39]  =  true;
	}

	if (boolState[S_OF_f_A40] || boolState[S_OF_i_A40] )
	{
		boolState[S_OF_A40]  =  true;
	}

	if (boolState[S_OF_A105] || boolState[S_OF_A40] )
	{
		boolState[S_OF_A41]  =  true;
	}

	if (boolState[S_OF_f_A42] || boolState[S_OF_i_A42] )
	{
		boolState[S_OF_A42]  =  true;
	}

	if (boolState[S_OF_f_A43] || boolState[S_OF_i_A43] )
	{
		boolState[S_OF_A43]  =  true;
	}

	if (boolState[S_OF_A105] || boolState[S_OF_A43] )
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

	if (boolState[S_OF_f_A50] || boolState[S_OF_i_A50] )
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

	if (boolState[S_OF_f_A53] || boolState[S_OF_i_A53] )
	{
		boolState[S_OF_A53]  =  true;
	}

	if (boolState[S_OF_A6] || boolState[S_OF_A9] )
	{
		boolState[S_OF_A55]  =  true;
	}

	if (boolState[S_OF_A30] && boolState[S_OF_A55] )
	{
		boolState[S_OF_A58]  =  true;
	}

	if (((boolState[S_OF_A41] && boolState[S_OF_A61]) && boolState[already_S_OF_A61]) && ( !  boolState[already_S_OF_A41]) )
	{
		boolState[S_OF_A59]  =  true;
	}

	if (boolState[already_S_OF_A59] && (boolState[S_OF_A61] && boolState[S_OF_A41]) )
	{
		boolState[S_OF_A59]  =  true;
	}

	if (((boolState[S_OF_A37] || boolState[S_OF_A48]) || boolState[S_OF_A5]) || boolState[S_OF_A72] )
	{
		boolState[S_OF_A6]  =  true;
	}

	if (boolState[S_OF_A41] && boolState[S_OF_A44] )
	{
		boolState[S_OF_A60]  =  true;
	}

	if (boolState[S_OF_A17] || boolState[S_OF_A94] )
	{
		boolState[S_OF_A61]  =  true;
	}

	if (boolState[S_OF_A62] && boolState[S_OF_A64] )
	{
		boolState[S_OF_A65]  =  true;
	}

	if (boolState[S_OF_A67] && boolState[S_OF_A69] )
	{
		boolState[S_OF_A70]  =  true;
	}

	if (((boolState[S_OF_A63] || boolState[S_OF_A65]) || boolState[S_OF_A68]) || boolState[S_OF_A70] )
	{
		boolState[S_OF_A72]  =  true;
	}

	if (boolState[S_OF_A73] && boolState[S_OF_A75] )
	{
		boolState[S_OF_A76]  =  true;
	}

	if (boolState[S_OF_A78] && boolState[S_OF_A80] )
	{
		boolState[S_OF_A81]  =  true;
	}

	if (((boolState[S_OF_A74] || boolState[S_OF_A76]) || boolState[S_OF_A79]) || boolState[S_OF_A81] )
	{
		boolState[S_OF_A83]  =  true;
	}

	if (boolState[S_OF_A84] && boolState[S_OF_A86] )
	{
		boolState[S_OF_A87]  =  true;
	}

	if (((boolState[S_OF_A36] || boolState[S_OF_A42]) || boolState[S_OF_A72]) || boolState[S_OF_A8] )
	{
		boolState[S_OF_A9]  =  true;
	}

	if (boolState[S_OF_A89] && boolState[S_OF_A91] )
	{
		boolState[S_OF_A92]  =  true;
	}

	if (((boolState[S_OF_A85] || boolState[S_OF_A87]) || boolState[S_OF_A90]) || boolState[S_OF_A92] )
	{
		boolState[S_OF_A94]  =  true;
	}

	if (boolState[S_OF_A95] && boolState[S_OF_A97] )
	{
		boolState[S_OF_A98]  =  true;
	}

	if (boolState[S_OF_A0] )
	{
		boolState[S_OF_UE_1]  =  true;
	}

}


void storm::figaro::FigaroProgram_vgs_4_Trim_Article_repair::runOnceInteractionStep_propagate_effect_required()
{
	if ( !boolState[required_OF_UE_1] )
	{
		boolState[required_OF_A0]  =  false;
	}

	if (boolState[relevant_evt_OF_UE_1] && ( !boolState[S_OF_UE_1]) )
	{
		boolState[relevant_evt_OF_A0]  =  true;
	}

	if ( !boolState[required_OF_A2] )
	{
		boolState[required_OF_A1]  =  false;
	}

	if (boolState[relevant_evt_OF_A2] && ( !boolState[S_OF_A2]) )
	{
		boolState[relevant_evt_OF_A1]  =  true;
	}

	if ( !boolState[S_OF_A102] )
	{
		boolState[required_OF_A100]  =  false;
	}

	if (boolState[relevant_evt_OF_A103] && ( !boolState[S_OF_A103]) )
	{
		boolState[relevant_evt_OF_A100]  =  true;
	}

	if ( !boolState[required_OF_A105] )
	{
		boolState[required_OF_A101]  =  false;
	}

	if (boolState[relevant_evt_OF_A105] && ( !boolState[S_OF_A105]) )
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

	if ( !boolState[required_OF_A105] )
	{
		boolState[required_OF_A103]  =  false;
	}

	if (boolState[relevant_evt_OF_A105] && ( !boolState[S_OF_A105]) )
	{
		boolState[relevant_evt_OF_A103]  =  true;
	}

	if ((( !boolState[required_OF_A21]) && ( !boolState[required_OF_A41])) && ( !  boolState[required_OF_A44]) )
	{
		boolState[required_OF_A105]  =  false;
	}

	if (((boolState[relevant_evt_OF_A21] && ( !boolState[S_OF_A21])) || (boolState[relevant_evt_OF_A41] && ( !boolState[S_OF_A41]))) || (boolState[relevant_evt_OF_A44] && ( !  boolState[S_OF_A44])) )
	{
		boolState[relevant_evt_OF_A105]  =  true;
	}

	if ( !boolState[required_OF_A12] )
	{
		boolState[required_OF_A11]  =  false;
	}

	if (boolState[relevant_evt_OF_A12] && ( !boolState[S_OF_A12]) )
	{
		boolState[relevant_evt_OF_A11]  =  true;
	}

	if ( !boolState[required_OF_A30] )
	{
		boolState[required_OF_A12]  =  false;
	}

	if ((boolState[relevant_evt_OF_A30] && ( !boolState[S_OF_A30])) || ( !boolState[S_OF_i_A38]) )
	{
		boolState[relevant_evt_OF_A12]  =  true;
	}

	if ( !boolState[required_OF_A15] )
	{
		boolState[required_OF_A14]  =  false;
	}

	if (boolState[relevant_evt_OF_A15] && ( !boolState[S_OF_A15]) )
	{
		boolState[relevant_evt_OF_A14]  =  true;
	}

	if ( !boolState[required_OF_A30] )
	{
		boolState[required_OF_A15]  =  false;
	}

	if ((boolState[relevant_evt_OF_A30] && ( !boolState[S_OF_A30])) || (( !boolState[S_OF_i_A39])   || ( !boolState[S_OF_i_A43])) )
	{
		boolState[relevant_evt_OF_A15]  =  true;
	}

	if ( !boolState[required_OF_A61] )
	{
		boolState[required_OF_A17]  =  false;
	}

	if (boolState[relevant_evt_OF_A61] && ( !boolState[S_OF_A61]) )
	{
		boolState[relevant_evt_OF_A17]  =  true;
	}

	if ( !boolState[required_OF_A0] )
	{
		boolState[required_OF_A18]  =  false;
	}

	if ((boolState[relevant_evt_OF_A0] && ( !boolState[S_OF_A0])) || ((( !boolState[S_OF_i_A42]) || ( !boolState[S_OF_i_A45])) || ( !boolState[S_OF_i_A46])) )
	{
		boolState[relevant_evt_OF_A18]  =  true;
	}

	if ( !boolState[required_OF_A3] )
	{
		boolState[required_OF_A2]  =  false;
	}

	if (boolState[relevant_evt_OF_A3] && ( !boolState[S_OF_A3]) )
	{
		boolState[relevant_evt_OF_A2]  =  true;
	}

	if ( !boolState[required_OF_A21] )
	{
		boolState[required_OF_A20]  =  false;
	}

	if (boolState[relevant_evt_OF_A21] && ( !boolState[S_OF_A21]) )
	{
		boolState[relevant_evt_OF_A20]  =  true;
	}

	if ( !boolState[required_OF_A0] )
	{
		boolState[required_OF_A21]  =  false;
	}

	if ((boolState[relevant_evt_OF_A0] && ( !boolState[S_OF_A0])) || ( !boolState[S_OF_i_A47]) )
	{
		boolState[relevant_evt_OF_A21]  =  true;
	}

	if ( !boolState[required_OF_A24] )
	{
		boolState[required_OF_A23]  =  false;
	}

	if (boolState[relevant_evt_OF_A24] && ( !boolState[S_OF_A24]) )
	{
		boolState[relevant_evt_OF_A23]  =  true;
	}

	if ( !boolState[required_OF_A0] )
	{
		boolState[required_OF_A24]  =  false;
	}

	if ((boolState[relevant_evt_OF_A0] && ( !boolState[S_OF_A0])) || ( !boolState[S_OF_i_A50]) )
	{
		boolState[relevant_evt_OF_A24]  =  true;
	}

	if ( !boolState[required_OF_A27] )
	{
		boolState[required_OF_A26]  =  false;
	}

	if (boolState[relevant_evt_OF_A27] && ( !boolState[S_OF_A27]) )
	{
		boolState[relevant_evt_OF_A26]  =  true;
	}

	if ( !boolState[required_OF_A0] )
	{
		boolState[required_OF_A27]  =  false;
	}

	if ((boolState[relevant_evt_OF_A0] && ( !boolState[S_OF_A0])) || ( !boolState[S_OF_i_A51]) )
	{
		boolState[relevant_evt_OF_A27]  =  true;
	}

	if ( !boolState[required_OF_A31] )
	{
		boolState[required_OF_A29]  =  false;
	}

	if (boolState[relevant_evt_OF_A31] && ( !boolState[S_OF_A31]) )
	{
		boolState[relevant_evt_OF_A29]  =  true;
	}

	if ( !boolState[required_OF_A0] )
	{
		boolState[required_OF_A3]  =  false;
	}

	if ((boolState[relevant_evt_OF_A0] && ( !boolState[S_OF_A0])) || (( !boolState[S_OF_i_A48]) || ( !boolState[S_OF_i_A49])) )
	{
		boolState[relevant_evt_OF_A3]  =  true;
	}

	if (( !boolState[required_OF_A58]) || ( !boolState[S_OF_A55]) )
	{
		boolState[required_OF_A30]  =  false;
	}

	if (boolState[relevant_evt_OF_A58] && ( !boolState[S_OF_A58]) )
	{
		boolState[relevant_evt_OF_A30]  =  true;
	}

	if ( !boolState[required_OF_A0] )
	{
		boolState[required_OF_A31]  =  false;
	}

	if ((boolState[relevant_evt_OF_A0] && ( !boolState[S_OF_A0])) || ( !boolState[S_OF_i_A52]) )
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

	if ((boolState[relevant_evt_OF_A0] && ( !boolState[S_OF_A0])) || ( !boolState[S_OF_i_A53]) )
	{
		boolState[relevant_evt_OF_A34]  =  true;
	}

	if ( !boolState[required_OF_A9] )
	{
		boolState[required_OF_A36]  =  false;
	}

	if (boolState[relevant_evt_OF_A9] && ( !boolState[S_OF_A9]) )
	{
		boolState[relevant_evt_OF_A36]  =  true;
	}

	if ( !boolState[required_OF_A6] )
	{
		boolState[required_OF_A37]  =  false;
	}

	if (boolState[relevant_evt_OF_A6] && ( !boolState[S_OF_A6]) )
	{
		boolState[relevant_evt_OF_A37]  =  true;
	}

	if ( !boolState[required_OF_A15] )
	{
		boolState[required_OF_A38]  =  false;
	}

	if (boolState[relevant_evt_OF_A15] && ( !boolState[S_OF_A15]) )
	{
		boolState[relevant_evt_OF_A38]  =  true;
	}

	if ( !boolState[required_OF_A12] )
	{
		boolState[required_OF_A39]  =  false;
	}

	if (boolState[relevant_evt_OF_A12] && ( !boolState[S_OF_A12]) )
	{
		boolState[relevant_evt_OF_A39]  =  true;
	}

	if ( !boolState[required_OF_A41] )
	{
		boolState[required_OF_A40]  =  false;
	}

	if (boolState[relevant_evt_OF_A41] && ( !boolState[S_OF_A41]) )
	{
		boolState[relevant_evt_OF_A40]  =  true;
	}

	if (( !boolState[required_OF_A59]) && ( !boolState[required_OF_A60]) )
	{
		boolState[required_OF_A41]  =  false;
	}

	if ((boolState[relevant_evt_OF_A59] && ( !boolState[S_OF_A59])) || (boolState[relevant_evt_OF_A60] && ( !boolState[S_OF_A60])) )
	{
		boolState[relevant_evt_OF_A41]  =  true;
	}

	if ( !boolState[required_OF_A9] )
	{
		boolState[required_OF_A42]  =  false;
	}

	if (boolState[relevant_evt_OF_A9] && ( !boolState[S_OF_A9]) )
	{
		boolState[relevant_evt_OF_A42]  =  true;
	}

	if ( !boolState[required_OF_A44] )
	{
		boolState[required_OF_A43]  =  false;
	}

	if (boolState[relevant_evt_OF_A44] && ( !boolState[S_OF_A44]) )
	{
		boolState[relevant_evt_OF_A43]  =  true;
	}

	if ( !boolState[required_OF_A60] )
	{
		boolState[required_OF_A44]  =  false;
	}

	if (boolState[relevant_evt_OF_A60] && ( !boolState[S_OF_A60]) )
	{
		boolState[relevant_evt_OF_A44]  =  true;
	}

	if ( !boolState[required_OF_A15] )
	{
		boolState[required_OF_A45]  =  false;
	}

	if (boolState[relevant_evt_OF_A15] && ( !boolState[S_OF_A15]) )
	{
		boolState[relevant_evt_OF_A45]  =  true;
	}

	if ( !boolState[required_OF_A21] )
	{
		boolState[required_OF_A46]  =  false;
	}

	if (boolState[relevant_evt_OF_A21] && ( !boolState[S_OF_A21]) )
	{
		boolState[relevant_evt_OF_A46]  =  true;
	}

	if ( !boolState[required_OF_A18] )
	{
		boolState[required_OF_A47]  =  false;
	}

	if (boolState[relevant_evt_OF_A18] && ( !boolState[S_OF_A18]) )
	{
		boolState[relevant_evt_OF_A47]  =  true;
	}

	if ( !boolState[required_OF_A6] )
	{
		boolState[required_OF_A48]  =  false;
	}

	if (boolState[relevant_evt_OF_A6] && ( !boolState[S_OF_A6]) )
	{
		boolState[relevant_evt_OF_A48]  =  true;
	}

	if ( !boolState[required_OF_A12] )
	{
		boolState[required_OF_A49]  =  false;
	}

	if (boolState[relevant_evt_OF_A12] && ( !boolState[S_OF_A12]) )
	{
		boolState[relevant_evt_OF_A49]  =  true;
	}

	if ( !boolState[required_OF_A6] )
	{
		boolState[required_OF_A5]  =  false;
	}

	if (boolState[relevant_evt_OF_A6] && ( !boolState[S_OF_A6]) )
	{
		boolState[relevant_evt_OF_A5]  =  true;
	}

	if ( !boolState[required_OF_A21] )
	{
		boolState[required_OF_A50]  =  false;
	}

	if (boolState[relevant_evt_OF_A21] && ( !boolState[S_OF_A21]) )
	{
		boolState[relevant_evt_OF_A50]  =  true;
	}

	if ( !boolState[required_OF_A21] )
	{
		boolState[required_OF_A51]  =  false;
	}

	if (boolState[relevant_evt_OF_A21] && ( !boolState[S_OF_A21]) )
	{
		boolState[relevant_evt_OF_A51]  =  true;
	}

	if ( !boolState[required_OF_A21] )
	{
		boolState[required_OF_A52]  =  false;
	}

	if (boolState[relevant_evt_OF_A21] && ( !boolState[S_OF_A21]) )
	{
		boolState[relevant_evt_OF_A52]  =  true;
	}

	if ( !boolState[required_OF_A21] )
	{
		boolState[required_OF_A53]  =  false;
	}

	if (boolState[relevant_evt_OF_A21] && ( !boolState[S_OF_A21]) )
	{
		boolState[relevant_evt_OF_A53]  =  true;
	}

	if ( !boolState[required_OF_A2] )
	{
		boolState[required_OF_A54]  =  false;
	}

	if (boolState[relevant_evt_OF_A2] && ( !boolState[S_OF_A2]) )
	{
		boolState[relevant_evt_OF_A54]  =  true;
	}

	if ( !boolState[required_OF_A58] )
	{
		boolState[required_OF_A55]  =  false;
	}

	if ((boolState[relevant_evt_OF_A58] && ( !boolState[S_OF_A58])) || ( !boolState[S_OF_A30]) )
	{
		boolState[relevant_evt_OF_A55]  =  true;
	}

	if ( !boolState[required_OF_A2] )
	{
		boolState[required_OF_A56]  =  false;
	}

	if (boolState[relevant_evt_OF_A2] && ( !boolState[S_OF_A2]) )
	{
		boolState[relevant_evt_OF_A56]  =  true;
	}

	if ( !boolState[required_OF_A2] )
	{
		boolState[required_OF_A57]  =  false;
	}

	if (boolState[relevant_evt_OF_A2] && ( !boolState[S_OF_A2]) )
	{
		boolState[relevant_evt_OF_A57]  =  true;
	}

	if ( !boolState[required_OF_A0] )
	{
		boolState[required_OF_A58]  =  false;
	}

	if (boolState[relevant_evt_OF_A0] && ( !boolState[S_OF_A0]) )
	{
		boolState[relevant_evt_OF_A58]  =  true;
	}

	if ( !boolState[required_OF_A18] )
	{
		boolState[required_OF_A59]  =  false;
	}

	if (boolState[relevant_evt_OF_A18] && ( !boolState[S_OF_A18]) )
	{
		boolState[relevant_evt_OF_A59]  =  true;
	}

	if ( !boolState[required_OF_A55] )
	{
		boolState[required_OF_A6]  =  false;
	}

	if ((boolState[relevant_evt_OF_A55] && ( !boolState[S_OF_A55])) || ( !boolState[S_OF_i_A36]) )
	{
		boolState[relevant_evt_OF_A6]  =  true;
	}

	if ( !boolState[required_OF_A18] )
	{
		boolState[required_OF_A60]  =  false;
	}

	if (boolState[relevant_evt_OF_A18] && ( !boolState[S_OF_A18]) )
	{
		boolState[relevant_evt_OF_A60]  =  true;
	}

	if ( !boolState[required_OF_A59] )
	{
		boolState[required_OF_A61]  =  false;
	}

	if (boolState[relevant_evt_OF_A59] && ( !boolState[S_OF_A59]) )
	{
		boolState[relevant_evt_OF_A61]  =  true;
	}

	if ( !boolState[S_OF_A64] )
	{
		boolState[required_OF_A62]  =  false;
	}

	if (boolState[relevant_evt_OF_A65] && ( !boolState[S_OF_A65]) )
	{
		boolState[relevant_evt_OF_A62]  =  true;
	}

	if ( !boolState[required_OF_A72] )
	{
		boolState[required_OF_A63]  =  false;
	}

	if (boolState[relevant_evt_OF_A72] && ( !boolState[S_OF_A72]) )
	{
		boolState[relevant_evt_OF_A63]  =  true;
	}

	if ( !boolState[required_OF_A65] )
	{
		boolState[required_OF_A64]  =  false;
	}

	if ((boolState[relevant_evt_OF_A65] && ( !boolState[S_OF_A65])) || ( !boolState[S_OF_A62]) )
	{
		boolState[relevant_evt_OF_A64]  =  true;
	}

	if ( !boolState[required_OF_A72] )
	{
		boolState[required_OF_A65]  =  false;
	}

	if (boolState[relevant_evt_OF_A72] && ( !boolState[S_OF_A72]) )
	{
		boolState[relevant_evt_OF_A65]  =  true;
	}

	if ( !boolState[S_OF_A69] )
	{
		boolState[required_OF_A67]  =  false;
	}

	if (boolState[relevant_evt_OF_A70] && ( !boolState[S_OF_A70]) )
	{
		boolState[relevant_evt_OF_A67]  =  true;
	}

	if ( !boolState[required_OF_A72] )
	{
		boolState[required_OF_A68]  =  false;
	}

	if (boolState[relevant_evt_OF_A72] && ( !boolState[S_OF_A72]) )
	{
		boolState[relevant_evt_OF_A68]  =  true;
	}

	if ( !boolState[required_OF_A70] )
	{
		boolState[required_OF_A69]  =  false;
	}

	if ((boolState[relevant_evt_OF_A70] && ( !boolState[S_OF_A70])) || ( !boolState[S_OF_A67]) )
	{
		boolState[relevant_evt_OF_A69]  =  true;
	}

	if ( !boolState[required_OF_A72] )
	{
		boolState[required_OF_A70]  =  false;
	}

	if (boolState[relevant_evt_OF_A72] && ( !boolState[S_OF_A72]) )
	{
		boolState[relevant_evt_OF_A70]  =  true;
	}

	if (( !boolState[required_OF_A6]) && ( !boolState[required_OF_A9]) )
	{
		boolState[required_OF_A72]  =  false;
	}

	if ((boolState[relevant_evt_OF_A6] && ( !boolState[S_OF_A6])) || (boolState[relevant_evt_OF_A9] && ( !boolState[S_OF_A9])) )
	{
		boolState[relevant_evt_OF_A72]  =  true;
	}

	if ( !boolState[S_OF_A75] )
	{
		boolState[required_OF_A73]  =  false;
	}

	if (boolState[relevant_evt_OF_A76] && ( !boolState[S_OF_A76]) )
	{
		boolState[relevant_evt_OF_A73]  =  true;
	}

	if ( !boolState[required_OF_A83] )
	{
		boolState[required_OF_A74]  =  false;
	}

	if (boolState[relevant_evt_OF_A83] && ( !boolState[S_OF_A83]) )
	{
		boolState[relevant_evt_OF_A74]  =  true;
	}

	if ( !boolState[required_OF_A76] )
	{
		boolState[required_OF_A75]  =  false;
	}

	if ((boolState[relevant_evt_OF_A76] && ( !boolState[S_OF_A76])) || ( !boolState[S_OF_A73]) )
	{
		boolState[relevant_evt_OF_A75]  =  true;
	}

	if ( !boolState[required_OF_A83] )
	{
		boolState[required_OF_A76]  =  false;
	}

	if (boolState[relevant_evt_OF_A83] && ( !boolState[S_OF_A83]) )
	{
		boolState[relevant_evt_OF_A76]  =  true;
	}

	if ( !boolState[S_OF_A80] )
	{
		boolState[required_OF_A78]  =  false;
	}

	if (boolState[relevant_evt_OF_A81] && ( !boolState[S_OF_A81]) )
	{
		boolState[relevant_evt_OF_A78]  =  true;
	}

	if ( !boolState[required_OF_A83] )
	{
		boolState[required_OF_A79]  =  false;
	}

	if (boolState[relevant_evt_OF_A83] && ( !boolState[S_OF_A83]) )
	{
		boolState[relevant_evt_OF_A79]  =  true;
	}

	if ( !boolState[required_OF_A9] )
	{
		boolState[required_OF_A8]  =  false;
	}

	if (boolState[relevant_evt_OF_A9] && ( !boolState[S_OF_A9]) )
	{
		boolState[relevant_evt_OF_A8]  =  true;
	}

	if ( !boolState[required_OF_A81] )
	{
		boolState[required_OF_A80]  =  false;
	}

	if ((boolState[relevant_evt_OF_A81] && ( !boolState[S_OF_A81])) || ( !boolState[S_OF_A78]) )
	{
		boolState[relevant_evt_OF_A80]  =  true;
	}

	if ( !boolState[required_OF_A83] )
	{
		boolState[required_OF_A81]  =  false;
	}

	if (boolState[relevant_evt_OF_A83] && ( !boolState[S_OF_A83]) )
	{
		boolState[relevant_evt_OF_A81]  =  true;
	}

	if (( !boolState[required_OF_A12]) && ( !boolState[required_OF_A15]) )
	{
		boolState[required_OF_A83]  =  false;
	}

	if ((boolState[relevant_evt_OF_A12] && ( !boolState[S_OF_A12])) || (boolState[relevant_evt_OF_A15] && ( !boolState[S_OF_A15])) )
	{
		boolState[relevant_evt_OF_A83]  =  true;
	}

	if ( !boolState[S_OF_A86] )
	{
		boolState[required_OF_A84]  =  false;
	}

	if (boolState[relevant_evt_OF_A87] && ( !boolState[S_OF_A87]) )
	{
		boolState[relevant_evt_OF_A84]  =  true;
	}

	if ( !boolState[required_OF_A94] )
	{
		boolState[required_OF_A85]  =  false;
	}

	if (boolState[relevant_evt_OF_A94] && ( !boolState[S_OF_A94]) )
	{
		boolState[relevant_evt_OF_A85]  =  true;
	}

	if ( !boolState[required_OF_A87] )
	{
		boolState[required_OF_A86]  =  false;
	}

	if ((boolState[relevant_evt_OF_A87] && ( !boolState[S_OF_A87])) || ( !boolState[S_OF_A84]) )
	{
		boolState[relevant_evt_OF_A86]  =  true;
	}

	if ( !boolState[required_OF_A94] )
	{
		boolState[required_OF_A87]  =  false;
	}

	if (boolState[relevant_evt_OF_A94] && ( !boolState[S_OF_A94]) )
	{
		boolState[relevant_evt_OF_A87]  =  true;
	}

	if ( !boolState[S_OF_A91] )
	{
		boolState[required_OF_A89]  =  false;
	}

	if (boolState[relevant_evt_OF_A92] && ( !boolState[S_OF_A92]) )
	{
		boolState[relevant_evt_OF_A89]  =  true;
	}

	if ( !boolState[required_OF_A55] )
	{
		boolState[required_OF_A9]  =  false;
	}

	if ((boolState[relevant_evt_OF_A55] && ( !boolState[S_OF_A55])) || (( !boolState[S_OF_i_A37])   || ( !boolState[S_OF_i_A40])) )
	{
		boolState[relevant_evt_OF_A9]  =  true;
	}

	if ( !boolState[required_OF_A94] )
	{
		boolState[required_OF_A90]  =  false;
	}

	if (boolState[relevant_evt_OF_A94] && ( !boolState[S_OF_A94]) )
	{
		boolState[relevant_evt_OF_A90]  =  true;
	}

	if ( !boolState[required_OF_A92] )
	{
		boolState[required_OF_A91]  =  false;
	}

	if ((boolState[relevant_evt_OF_A92] && ( !boolState[S_OF_A92])) || ( !boolState[S_OF_A89]) )
	{
		boolState[relevant_evt_OF_A91]  =  true;
	}

	if ( !boolState[required_OF_A94] )
	{
		boolState[required_OF_A92]  =  false;
	}

	if (boolState[relevant_evt_OF_A94] && ( !boolState[S_OF_A94]) )
	{
		boolState[relevant_evt_OF_A92]  =  true;
	}

	if (((( !boolState[required_OF_A18]) && ( !boolState[required_OF_A21])) && ( !  boolState[required_OF_A24])) && ( !boolState[required_OF_A61]) )
	{
		boolState[required_OF_A94]  =  false;
	}

	if ((((boolState[relevant_evt_OF_A18] && ( !boolState[S_OF_A18])) || (boolState[relevant_evt_OF_A21] && ( !boolState[S_OF_A21]))) || (boolState[relevant_evt_OF_A24] && ( !  boolState[S_OF_A24]))) || (boolState[relevant_evt_OF_A61] && ( !boolState[S_OF_A61])) )
	{
		boolState[relevant_evt_OF_A94]  =  true;
	}

	if ( !boolState[S_OF_A97] )
	{
		boolState[required_OF_A95]  =  false;
	}

	if (boolState[relevant_evt_OF_A98] && ( !boolState[S_OF_A98]) )
	{
		boolState[relevant_evt_OF_A95]  =  true;
	}

	if ( !boolState[required_OF_A105] )
	{
		boolState[required_OF_A96]  =  false;
	}

	if (boolState[relevant_evt_OF_A105] && ( !boolState[S_OF_A105]) )
	{
		boolState[relevant_evt_OF_A96]  =  true;
	}

	if ( !boolState[required_OF_A98] )
	{
		boolState[required_OF_A97]  =  false;
	}

	if ((boolState[relevant_evt_OF_A98] && ( !boolState[S_OF_A98])) || ( !boolState[S_OF_A95]) )
	{
		boolState[relevant_evt_OF_A97]  =  true;
	}

	if ( !boolState[required_OF_A105] )
	{
		boolState[required_OF_A98]  =  false;
	}

	if (boolState[relevant_evt_OF_A105] && ( !boolState[S_OF_A105]) )
	{
		boolState[relevant_evt_OF_A98]  =  true;
	}



	boolState[relevant_evt_OF_UE_1]  =  true  ;

	if ( !boolState[required_OF_A36] )
	{
		boolState[required_OF_f_A36]  =  false;
	}

	if (boolState[relevant_evt_OF_A36] && ( !boolState[S_OF_A36]) )
	{
		boolState[relevant_evt_OF_f_A36]  =  true;
	}

	if ( !boolState[required_OF_A37] )
	{
		boolState[required_OF_f_A37]  =  false;
	}

	if (boolState[relevant_evt_OF_A37] && ( !boolState[S_OF_A37]) )
	{
		boolState[relevant_evt_OF_f_A37]  =  true;
	}

	if ( !boolState[required_OF_A38] )
	{
		boolState[required_OF_f_A38]  =  false;
	}

	if (boolState[relevant_evt_OF_A38] && ( !boolState[S_OF_A38]) )
	{
		boolState[relevant_evt_OF_f_A38]  =  true;
	}

	if ( !boolState[required_OF_A39] )
	{
		boolState[required_OF_f_A39]  =  false;
	}

	if (boolState[relevant_evt_OF_A39] && ( !boolState[S_OF_A39]) )
	{
		boolState[relevant_evt_OF_f_A39]  =  true;
	}

	if ( !boolState[required_OF_A40] )
	{
		boolState[required_OF_f_A40]  =  false;
	}

	if (boolState[relevant_evt_OF_A40] && ( !boolState[S_OF_A40]) )
	{
		boolState[relevant_evt_OF_f_A40]  =  true;
	}

	if ( !boolState[required_OF_A42] )
	{
		boolState[required_OF_f_A42]  =  false;
	}

	if (boolState[relevant_evt_OF_A42] && ( !boolState[S_OF_A42]) )
	{
		boolState[relevant_evt_OF_f_A42]  =  true;
	}

	if ( !boolState[required_OF_A43] )
	{
		boolState[required_OF_f_A43]  =  false;
	}

	if (boolState[relevant_evt_OF_A43] && ( !boolState[S_OF_A43]) )
	{
		boolState[relevant_evt_OF_f_A43]  =  true;
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

	if ( !boolState[required_OF_A50] )
	{
		boolState[required_OF_f_A50]  =  false;
	}

	if (boolState[relevant_evt_OF_A50] && ( !boolState[S_OF_A50]) )
	{
		boolState[relevant_evt_OF_f_A50]  =  true;
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

	if ( !boolState[required_OF_A53] )
	{
		boolState[required_OF_f_A53]  =  false;
	}

	if (boolState[relevant_evt_OF_A53] && ( !boolState[S_OF_A53]) )
	{
		boolState[relevant_evt_OF_f_A53]  =  true;
	}

	if (( !boolState[required_OF_A36]) || ( !boolState[S_OF_A6]) )
	{
		boolState[required_OF_i_A36]  =  false;
	}

	if (boolState[relevant_evt_OF_A36] && ( !boolState[S_OF_A36]) )
	{
		boolState[relevant_evt_OF_i_A36]  =  true;
	}

	if (( !boolState[required_OF_A37]) || ( !boolState[S_OF_A9]) )
	{
		boolState[required_OF_i_A37]  =  false;
	}

	if (boolState[relevant_evt_OF_A37] && ( !boolState[S_OF_A37]) )
	{
		boolState[relevant_evt_OF_i_A37]  =  true;
	}

	if (( !boolState[required_OF_A38]) || ( !boolState[S_OF_A12]) )
	{
		boolState[required_OF_i_A38]  =  false;
	}

	if (boolState[relevant_evt_OF_A38] && ( !boolState[S_OF_A38]) )
	{
		boolState[relevant_evt_OF_i_A38]  =  true;
	}

	if (( !boolState[required_OF_A39]) || ( !boolState[S_OF_A15]) )
	{
		boolState[required_OF_i_A39]  =  false;
	}

	if (boolState[relevant_evt_OF_A39] && ( !boolState[S_OF_A39]) )
	{
		boolState[relevant_evt_OF_i_A39]  =  true;
	}

	if (( !boolState[required_OF_A40]) || ( !boolState[S_OF_A9]) )
	{
		boolState[required_OF_i_A40]  =  false;
	}

	if (boolState[relevant_evt_OF_A40] && ( !boolState[S_OF_A40]) )
	{
		boolState[relevant_evt_OF_i_A40]  =  true;
	}

	if (( !boolState[required_OF_A42]) || ( !boolState[S_OF_A18]) )
	{
		boolState[required_OF_i_A42]  =  false;
	}

	if (boolState[relevant_evt_OF_A42] && ( !boolState[S_OF_A42]) )
	{
		boolState[relevant_evt_OF_i_A42]  =  true;
	}

	if (( !boolState[required_OF_A43]) || ( !boolState[S_OF_A15]) )
	{
		boolState[required_OF_i_A43]  =  false;
	}

	if (boolState[relevant_evt_OF_A43] && ( !boolState[S_OF_A43]) )
	{
		boolState[relevant_evt_OF_i_A43]  =  true;
	}

	if (( !boolState[required_OF_A45]) || ( !boolState[S_OF_A18]) )
	{
		boolState[required_OF_i_A45]  =  false;
	}

	if (boolState[relevant_evt_OF_A45] && ( !boolState[S_OF_A45]) )
	{
		boolState[relevant_evt_OF_i_A45]  =  true;
	}

	if (( !boolState[required_OF_A46]) || ( !boolState[S_OF_A18]) )
	{
		boolState[required_OF_i_A46]  =  false;
	}

	if (boolState[relevant_evt_OF_A46] && ( !boolState[S_OF_A46]) )
	{
		boolState[relevant_evt_OF_i_A46]  =  true;
	}

	if (( !boolState[required_OF_A47]) || ( !boolState[S_OF_A21]) )
	{
		boolState[required_OF_i_A47]  =  false;
	}

	if (boolState[relevant_evt_OF_A47] && ( !boolState[S_OF_A47]) )
	{
		boolState[relevant_evt_OF_i_A47]  =  true;
	}

	if (( !boolState[required_OF_A48]) || ( !boolState[S_OF_A3]) )
	{
		boolState[required_OF_i_A48]  =  false;
	}

	if (boolState[relevant_evt_OF_A48] && ( !boolState[S_OF_A48]) )
	{
		boolState[relevant_evt_OF_i_A48]  =  true;
	}

	if (( !boolState[required_OF_A49]) || ( !boolState[S_OF_A3]) )
	{
		boolState[required_OF_i_A49]  =  false;
	}

	if (boolState[relevant_evt_OF_A49] && ( !boolState[S_OF_A49]) )
	{
		boolState[relevant_evt_OF_i_A49]  =  true;
	}

	if (( !boolState[required_OF_A50]) || ( !boolState[S_OF_A24]) )
	{
		boolState[required_OF_i_A50]  =  false;
	}

	if (boolState[relevant_evt_OF_A50] && ( !boolState[S_OF_A50]) )
	{
		boolState[relevant_evt_OF_i_A50]  =  true;
	}

	if (( !boolState[required_OF_A51]) || ( !boolState[S_OF_A27]) )
	{
		boolState[required_OF_i_A51]  =  false;
	}

	if (boolState[relevant_evt_OF_A51] && ( !boolState[S_OF_A51]) )
	{
		boolState[relevant_evt_OF_i_A51]  =  true;
	}

	if (( !boolState[required_OF_A52]) || ( !boolState[S_OF_A31]) )
	{
		boolState[required_OF_i_A52]  =  false;
	}

	if (boolState[relevant_evt_OF_A52] && ( !boolState[S_OF_A52]) )
	{
		boolState[relevant_evt_OF_i_A52]  =  true;
	}

	if (( !boolState[required_OF_A53]) || ( !boolState[S_OF_A34]) )
	{
		boolState[required_OF_i_A53]  =  false;
	}

	if (boolState[relevant_evt_OF_A53] && ( !boolState[S_OF_A53]) )
	{
		boolState[relevant_evt_OF_i_A53]  =  true;
	}

}


void storm::figaro::FigaroProgram_vgs_4_Trim_Article_repair::runOnceInteractionStep_propagate_leaves()
{


	boolState[already_S_OF_A0]  =  boolState[S_OF_A0]  ;



	boolState[already_S_OF_A1]  =  boolState[S_OF_A1]  ;



	boolState[already_S_OF_A100]  =  boolState[S_OF_A100]  ;



	boolState[already_S_OF_A101]  =  boolState[S_OF_A101]  ;



	boolState[already_S_OF_A102]  =  boolState[S_OF_A102]  ;



	boolState[already_S_OF_A103]  =  boolState[S_OF_A103]  ;



	boolState[already_S_OF_A105]  =  boolState[S_OF_A105]  ;



	boolState[already_S_OF_A11]  =  boolState[S_OF_A11]  ;



	boolState[already_S_OF_A12]  =  boolState[S_OF_A12]  ;



	boolState[already_S_OF_A14]  =  boolState[S_OF_A14]  ;



	boolState[already_S_OF_A15]  =  boolState[S_OF_A15]  ;



	boolState[already_S_OF_A17]  =  boolState[S_OF_A17]  ;



	boolState[already_S_OF_A18]  =  boolState[S_OF_A18]  ;



	boolState[already_S_OF_A2]  =  boolState[S_OF_A2]  ;



	boolState[already_S_OF_A20]  =  boolState[S_OF_A20]  ;



	boolState[already_S_OF_A21]  =  boolState[S_OF_A21]  ;



	boolState[already_S_OF_A23]  =  boolState[S_OF_A23]  ;



	boolState[already_S_OF_A24]  =  boolState[S_OF_A24]  ;



	boolState[already_S_OF_A26]  =  boolState[S_OF_A26]  ;



	boolState[already_S_OF_A27]  =  boolState[S_OF_A27]  ;



	boolState[already_S_OF_A29]  =  boolState[S_OF_A29]  ;



	boolState[already_S_OF_A3]  =  boolState[S_OF_A3]  ;



	boolState[already_S_OF_A30]  =  boolState[S_OF_A30]  ;



	boolState[already_S_OF_A31]  =  boolState[S_OF_A31]  ;



	boolState[already_S_OF_A33]  =  boolState[S_OF_A33]  ;



	boolState[already_S_OF_A34]  =  boolState[S_OF_A34]  ;



	boolState[already_S_OF_A36]  =  boolState[S_OF_A36]  ;



	boolState[already_S_OF_A37]  =  boolState[S_OF_A37]  ;



	boolState[already_S_OF_A38]  =  boolState[S_OF_A38]  ;



	boolState[already_S_OF_A39]  =  boolState[S_OF_A39]  ;



	boolState[already_S_OF_A40]  =  boolState[S_OF_A40]  ;



	boolState[already_S_OF_A41]  =  boolState[S_OF_A41]  ;



	boolState[already_S_OF_A42]  =  boolState[S_OF_A42]  ;



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



	boolState[already_S_OF_A6]  =  boolState[S_OF_A6]  ;



	boolState[already_S_OF_A60]  =  boolState[S_OF_A60]  ;



	boolState[already_S_OF_A61]  =  boolState[S_OF_A61]  ;



	boolState[already_S_OF_A62]  =  boolState[S_OF_A62]  ;



	boolState[already_S_OF_A63]  =  boolState[S_OF_A63]  ;



	boolState[already_S_OF_A64]  =  boolState[S_OF_A64]  ;



	boolState[already_S_OF_A65]  =  boolState[S_OF_A65]  ;



	boolState[already_S_OF_A67]  =  boolState[S_OF_A67]  ;



	boolState[already_S_OF_A68]  =  boolState[S_OF_A68]  ;



	boolState[already_S_OF_A69]  =  boolState[S_OF_A69]  ;



	boolState[already_S_OF_A70]  =  boolState[S_OF_A70]  ;



	boolState[already_S_OF_A72]  =  boolState[S_OF_A72]  ;



	boolState[already_S_OF_A73]  =  boolState[S_OF_A73]  ;



	boolState[already_S_OF_A74]  =  boolState[S_OF_A74]  ;



	boolState[already_S_OF_A75]  =  boolState[S_OF_A75]  ;



	boolState[already_S_OF_A76]  =  boolState[S_OF_A76]  ;



	boolState[already_S_OF_A78]  =  boolState[S_OF_A78]  ;



	boolState[already_S_OF_A79]  =  boolState[S_OF_A79]  ;



	boolState[already_S_OF_A8]  =  boolState[S_OF_A8]  ;



	boolState[already_S_OF_A80]  =  boolState[S_OF_A80]  ;



	boolState[already_S_OF_A81]  =  boolState[S_OF_A81]  ;



	boolState[already_S_OF_A83]  =  boolState[S_OF_A83]  ;



	boolState[already_S_OF_A84]  =  boolState[S_OF_A84]  ;



	boolState[already_S_OF_A85]  =  boolState[S_OF_A85]  ;



	boolState[already_S_OF_A86]  =  boolState[S_OF_A86]  ;



	boolState[already_S_OF_A87]  =  boolState[S_OF_A87]  ;



	boolState[already_S_OF_A89]  =  boolState[S_OF_A89]  ;



	boolState[already_S_OF_A9]  =  boolState[S_OF_A9]  ;



	boolState[already_S_OF_A90]  =  boolState[S_OF_A90]  ;



	boolState[already_S_OF_A91]  =  boolState[S_OF_A91]  ;



	boolState[already_S_OF_A92]  =  boolState[S_OF_A92]  ;



	boolState[already_S_OF_A94]  =  boolState[S_OF_A94]  ;



	boolState[already_S_OF_A95]  =  boolState[S_OF_A95]  ;



	boolState[already_S_OF_A96]  =  boolState[S_OF_A96]  ;



	boolState[already_S_OF_A97]  =  boolState[S_OF_A97]  ;



	boolState[already_S_OF_A98]  =  boolState[S_OF_A98]  ;



	boolState[already_S_OF_UE_1]  =  boolState[S_OF_UE_1]  ;



	boolState[already_S_OF_f_A36]  =  boolState[S_OF_f_A36]  ;



	boolState[already_S_OF_f_A37]  =  boolState[S_OF_f_A37]  ;



	boolState[already_S_OF_f_A38]  =  boolState[S_OF_f_A38]  ;



	boolState[already_S_OF_f_A39]  =  boolState[S_OF_f_A39]  ;



	boolState[already_S_OF_f_A40]  =  boolState[S_OF_f_A40]  ;



	boolState[already_S_OF_f_A42]  =  boolState[S_OF_f_A42]  ;



	boolState[already_S_OF_f_A43]  =  boolState[S_OF_f_A43]  ;



	boolState[already_S_OF_f_A45]  =  boolState[S_OF_f_A45]  ;



	boolState[already_S_OF_f_A46]  =  boolState[S_OF_f_A46]  ;



	boolState[already_S_OF_f_A47]  =  boolState[S_OF_f_A47]  ;



	boolState[already_S_OF_f_A48]  =  boolState[S_OF_f_A48]  ;



	boolState[already_S_OF_f_A49]  =  boolState[S_OF_f_A49]  ;



	boolState[already_S_OF_f_A50]  =  boolState[S_OF_f_A50]  ;



	boolState[already_S_OF_f_A51]  =  boolState[S_OF_f_A51]  ;



	boolState[already_S_OF_f_A52]  =  boolState[S_OF_f_A52]  ;



	boolState[already_S_OF_f_A53]  =  boolState[S_OF_f_A53]  ;



	boolState[already_S_OF_i_A36]  =  boolState[S_OF_i_A36]  ;

	if (( !boolState[required_OF_i_A36]) && (( !boolState[already_standby_OF_i_A36]) && ( !boolState[already_required_OF_i_A36])) )
	{
		boolState[already_standby_OF_i_A36]  =  true;
	}



	boolState[already_S_OF_i_A37]  =  boolState[S_OF_i_A37]  ;

	if (( !boolState[required_OF_i_A37]) && (( !boolState[already_standby_OF_i_A37]) && ( !boolState[already_required_OF_i_A37])) )
	{
		boolState[already_standby_OF_i_A37]  =  true;
	}



	boolState[already_S_OF_i_A38]  =  boolState[S_OF_i_A38]  ;

	if (( !boolState[required_OF_i_A38]) && (( !boolState[already_standby_OF_i_A38]) && ( !boolState[already_required_OF_i_A38])) )
	{
		boolState[already_standby_OF_i_A38]  =  true;
	}



	boolState[already_S_OF_i_A39]  =  boolState[S_OF_i_A39]  ;

	if (( !boolState[required_OF_i_A39]) && (( !boolState[already_standby_OF_i_A39]) && ( !boolState[already_required_OF_i_A39])) )
	{
		boolState[already_standby_OF_i_A39]  =  true;
	}



	boolState[already_S_OF_i_A40]  =  boolState[S_OF_i_A40]  ;

	if (( !boolState[required_OF_i_A40]) && (( !boolState[already_standby_OF_i_A40]) && ( !boolState[already_required_OF_i_A40])) )
	{
		boolState[already_standby_OF_i_A40]  =  true;
	}



	boolState[already_S_OF_i_A42]  =  boolState[S_OF_i_A42]  ;

	if (( !boolState[required_OF_i_A42]) && (( !boolState[already_standby_OF_i_A42]) && ( !boolState[already_required_OF_i_A42])) )
	{
		boolState[already_standby_OF_i_A42]  =  true;
	}



	boolState[already_S_OF_i_A43]  =  boolState[S_OF_i_A43]  ;

	if (( !boolState[required_OF_i_A43]) && (( !boolState[already_standby_OF_i_A43]) && ( !boolState[already_required_OF_i_A43])) )
	{
		boolState[already_standby_OF_i_A43]  =  true;
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



	boolState[already_S_OF_i_A50]  =  boolState[S_OF_i_A50]  ;

	if (( !boolState[required_OF_i_A50]) && (( !boolState[already_standby_OF_i_A50]) && ( !boolState[already_required_OF_i_A50])) )
	{
		boolState[already_standby_OF_i_A50]  =  true;
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



	boolState[already_S_OF_i_A53]  =  boolState[S_OF_i_A53]  ;

	if (( !boolState[required_OF_i_A53]) && (( !boolState[already_standby_OF_i_A53]) && ( !boolState[already_required_OF_i_A53])) )
	{
		boolState[already_standby_OF_i_A53]  =  true;
	}

}


void storm::figaro::FigaroProgram_vgs_4_Trim_Article_repair::runOnceInteractionStep_tops()
{
	if (boolState[required_OF_i_A36] && boolState[already_standby_OF_i_A36] )
	{
		boolState[to_be_fired_OF_i_A36]  =  true;
	}

	if (boolState[required_OF_i_A37] && boolState[already_standby_OF_i_A37] )
	{
		boolState[to_be_fired_OF_i_A37]  =  true;
	}

	if (boolState[required_OF_i_A38] && boolState[already_standby_OF_i_A38] )
	{
		boolState[to_be_fired_OF_i_A38]  =  true;
	}

	if (boolState[required_OF_i_A39] && boolState[already_standby_OF_i_A39] )
	{
		boolState[to_be_fired_OF_i_A39]  =  true;
	}

	if (boolState[required_OF_i_A40] && boolState[already_standby_OF_i_A40] )
	{
		boolState[to_be_fired_OF_i_A40]  =  true;
	}

	if (boolState[required_OF_i_A42] && boolState[already_standby_OF_i_A42] )
	{
		boolState[to_be_fired_OF_i_A42]  =  true;
	}

	if (boolState[required_OF_i_A43] && boolState[already_standby_OF_i_A43] )
	{
		boolState[to_be_fired_OF_i_A43]  =  true;
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

	if (boolState[required_OF_i_A50] && boolState[already_standby_OF_i_A50] )
	{
		boolState[to_be_fired_OF_i_A50]  =  true;
	}

	if (boolState[required_OF_i_A51] && boolState[already_standby_OF_i_A51] )
	{
		boolState[to_be_fired_OF_i_A51]  =  true;
	}

	if (boolState[required_OF_i_A52] && boolState[already_standby_OF_i_A52] )
	{
		boolState[to_be_fired_OF_i_A52]  =  true;
	}

	if (boolState[required_OF_i_A53] && boolState[already_standby_OF_i_A53] )
	{
		boolState[to_be_fired_OF_i_A53]  =  true;
	}

}

void
storm::figaro::FigaroProgram_vgs_4_Trim_Article_repair::runInteractions() {
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
    }void storm::figaro::FigaroProgram_vgs_4_Trim_Article_repair::printstatetuple(){

                std::cout<<"\n State information: (";
                for (int i=0; i<boolFailureState.size(); i++)
                    {
                    std::cout<<boolFailureState.at(i);
                    }
                std::cout<<")";

            }
        int_fast64_t storm::figaro::FigaroProgram_vgs_4_Trim_Article_repair::stateSize() const{
            return numBoolState;
}
        void storm::figaro::FigaroProgram_vgs_4_Trim_Article_repair::fireinsttransitiongroup(std::string user_input_ins)

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
    