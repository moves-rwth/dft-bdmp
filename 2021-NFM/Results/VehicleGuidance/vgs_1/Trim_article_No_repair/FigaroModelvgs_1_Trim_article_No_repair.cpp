#include <iostream>
#include "FigaroModelvgs_1_Trim_article_No_repair.h"

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
        
void storm::figaro::FigaroProgram_vgs_1_Trim_article_No_repair::init()
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
	REINITIALISATION_OF_required_OF_A104 = true;
	boolState[already_S_OF_A104] = false;
	REINITIALISATION_OF_S_OF_A104 = false;
	REINITIALISATION_OF_relevant_evt_OF_A104 = false;
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
	boolState[failF_OF_A107] = false;
	REINITIALISATION_OF_required_OF_A108 = true;
	boolState[already_S_OF_A108] = false;
	REINITIALISATION_OF_S_OF_A108 = false;
	REINITIALISATION_OF_relevant_evt_OF_A108 = false;
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
	boolState[failF_OF_A112] = false;
	REINITIALISATION_OF_required_OF_A113 = true;
	boolState[already_S_OF_A113] = false;
	REINITIALISATION_OF_S_OF_A113 = false;
	REINITIALISATION_OF_relevant_evt_OF_A113 = false;
	REINITIALISATION_OF_required_OF_A115 = true;
	boolState[already_S_OF_A115] = false;
	REINITIALISATION_OF_S_OF_A115 = false;
	REINITIALISATION_OF_relevant_evt_OF_A115 = false;
	REINITIALISATION_OF_required_OF_A116 = true;
	boolState[already_S_OF_A116] = false;
	REINITIALISATION_OF_S_OF_A116 = false;
	REINITIALISATION_OF_relevant_evt_OF_A116 = false;
	boolState[failF_OF_A116] = false;
	REINITIALISATION_OF_required_OF_A117 = true;
	boolState[already_S_OF_A117] = false;
	REINITIALISATION_OF_S_OF_A117 = false;
	REINITIALISATION_OF_relevant_evt_OF_A117 = false;
	boolState[failF_OF_A117] = false;
	REINITIALISATION_OF_required_OF_A118 = true;
	boolState[already_S_OF_A118] = false;
	REINITIALISATION_OF_S_OF_A118 = false;
	REINITIALISATION_OF_relevant_evt_OF_A118 = false;
	boolState[failF_OF_A118] = false;
	REINITIALISATION_OF_required_OF_A119 = true;
	boolState[already_S_OF_A119] = false;
	REINITIALISATION_OF_S_OF_A119 = false;
	REINITIALISATION_OF_relevant_evt_OF_A119 = false;
	REINITIALISATION_OF_required_OF_A12 = true;
	boolState[already_S_OF_A12] = false;
	REINITIALISATION_OF_S_OF_A12 = false;
	REINITIALISATION_OF_relevant_evt_OF_A12 = false;
	boolState[failF_OF_A12] = false;
	REINITIALISATION_OF_required_OF_A121 = true;
	boolState[already_S_OF_A121] = false;
	REINITIALISATION_OF_S_OF_A121 = false;
	REINITIALISATION_OF_relevant_evt_OF_A121 = false;
	boolState[failF_OF_A121] = false;
	REINITIALISATION_OF_required_OF_A122 = true;
	boolState[already_S_OF_A122] = false;
	REINITIALISATION_OF_S_OF_A122 = false;
	REINITIALISATION_OF_relevant_evt_OF_A122 = false;
	boolState[failF_OF_A122] = false;
	REINITIALISATION_OF_required_OF_A123 = true;
	boolState[already_S_OF_A123] = false;
	REINITIALISATION_OF_S_OF_A123 = false;
	REINITIALISATION_OF_relevant_evt_OF_A123 = false;
	boolState[failF_OF_A123] = false;
	REINITIALISATION_OF_required_OF_A124 = true;
	boolState[already_S_OF_A124] = false;
	REINITIALISATION_OF_S_OF_A124 = false;
	REINITIALISATION_OF_relevant_evt_OF_A124 = false;
	REINITIALISATION_OF_required_OF_A126 = true;
	boolState[already_S_OF_A126] = false;
	REINITIALISATION_OF_S_OF_A126 = false;
	REINITIALISATION_OF_relevant_evt_OF_A126 = false;
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
	boolState[failF_OF_A134] = false;
	REINITIALISATION_OF_required_OF_A135 = true;
	boolState[already_S_OF_A135] = false;
	REINITIALISATION_OF_S_OF_A135 = false;
	REINITIALISATION_OF_relevant_evt_OF_A135 = false;
	REINITIALISATION_OF_required_OF_A137 = true;
	boolState[already_S_OF_A137] = false;
	REINITIALISATION_OF_S_OF_A137 = false;
	REINITIALISATION_OF_relevant_evt_OF_A137 = false;
	REINITIALISATION_OF_required_OF_A15 = true;
	boolState[already_S_OF_A15] = false;
	REINITIALISATION_OF_S_OF_A15 = false;
	REINITIALISATION_OF_relevant_evt_OF_A15 = false;
	boolState[failF_OF_A15] = false;
	REINITIALISATION_OF_required_OF_A16 = true;
	boolState[already_S_OF_A16] = false;
	REINITIALISATION_OF_S_OF_A16 = false;
	REINITIALISATION_OF_relevant_evt_OF_A16 = false;
	REINITIALISATION_OF_required_OF_A18 = true;
	boolState[already_S_OF_A18] = false;
	REINITIALISATION_OF_S_OF_A18 = false;
	REINITIALISATION_OF_relevant_evt_OF_A18 = false;
	boolState[failF_OF_A18] = false;
	REINITIALISATION_OF_required_OF_A19 = true;
	boolState[already_S_OF_A19] = false;
	REINITIALISATION_OF_S_OF_A19 = false;
	REINITIALISATION_OF_relevant_evt_OF_A19 = false;
	REINITIALISATION_OF_required_OF_A21 = true;
	boolState[already_S_OF_A21] = false;
	REINITIALISATION_OF_S_OF_A21 = false;
	REINITIALISATION_OF_relevant_evt_OF_A21 = false;
	boolState[failF_OF_A21] = false;
	REINITIALISATION_OF_required_OF_A22 = true;
	boolState[already_S_OF_A22] = false;
	REINITIALISATION_OF_S_OF_A22 = false;
	REINITIALISATION_OF_relevant_evt_OF_A22 = false;
	REINITIALISATION_OF_required_OF_A24 = true;
	boolState[already_S_OF_A24] = false;
	REINITIALISATION_OF_S_OF_A24 = false;
	REINITIALISATION_OF_relevant_evt_OF_A24 = false;
	boolState[failF_OF_A24] = false;
	REINITIALISATION_OF_required_OF_A25 = true;
	boolState[already_S_OF_A25] = false;
	REINITIALISATION_OF_S_OF_A25 = false;
	REINITIALISATION_OF_relevant_evt_OF_A25 = false;
	REINITIALISATION_OF_required_OF_A27 = true;
	boolState[already_S_OF_A27] = false;
	REINITIALISATION_OF_S_OF_A27 = false;
	REINITIALISATION_OF_relevant_evt_OF_A27 = false;
	boolState[failF_OF_A27] = false;
	REINITIALISATION_OF_required_OF_A28 = true;
	boolState[already_S_OF_A28] = false;
	REINITIALISATION_OF_S_OF_A28 = false;
	REINITIALISATION_OF_relevant_evt_OF_A28 = false;
	REINITIALISATION_OF_required_OF_A3 = true;
	boolState[already_S_OF_A3] = false;
	REINITIALISATION_OF_S_OF_A3 = false;
	REINITIALISATION_OF_relevant_evt_OF_A3 = false;
	boolState[failF_OF_A3] = false;
	REINITIALISATION_OF_required_OF_A30 = true;
	boolState[already_S_OF_A30] = false;
	REINITIALISATION_OF_S_OF_A30 = false;
	REINITIALISATION_OF_relevant_evt_OF_A30 = false;
	boolState[failF_OF_A30] = false;
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
	boolState[failF_OF_A38] = false;
	REINITIALISATION_OF_required_OF_A39 = true;
	boolState[already_S_OF_A39] = false;
	REINITIALISATION_OF_S_OF_A39 = false;
	REINITIALISATION_OF_relevant_evt_OF_A39 = false;
	REINITIALISATION_OF_required_OF_A4 = true;
	boolState[already_S_OF_A4] = false;
	REINITIALISATION_OF_S_OF_A4 = false;
	REINITIALISATION_OF_relevant_evt_OF_A4 = false;
	REINITIALISATION_OF_required_OF_A41 = true;
	boolState[already_S_OF_A41] = false;
	REINITIALISATION_OF_S_OF_A41 = false;
	REINITIALISATION_OF_relevant_evt_OF_A41 = false;
	boolState[failF_OF_A41] = false;
	REINITIALISATION_OF_required_OF_A42 = true;
	boolState[already_S_OF_A42] = false;
	REINITIALISATION_OF_S_OF_A42 = false;
	REINITIALISATION_OF_relevant_evt_OF_A42 = false;
	boolState[failF_OF_A42] = false;
	REINITIALISATION_OF_required_OF_A43 = true;
	boolState[already_S_OF_A43] = false;
	REINITIALISATION_OF_S_OF_A43 = false;
	REINITIALISATION_OF_relevant_evt_OF_A43 = false;
	REINITIALISATION_OF_required_OF_A45 = true;
	boolState[already_S_OF_A45] = false;
	REINITIALISATION_OF_S_OF_A45 = false;
	REINITIALISATION_OF_relevant_evt_OF_A45 = false;
	boolState[failF_OF_A45] = false;
	REINITIALISATION_OF_required_OF_A46 = true;
	boolState[already_S_OF_A46] = false;
	REINITIALISATION_OF_S_OF_A46 = false;
	REINITIALISATION_OF_relevant_evt_OF_A46 = false;
	REINITIALISATION_OF_required_OF_A48 = true;
	boolState[already_S_OF_A48] = false;
	REINITIALISATION_OF_S_OF_A48 = false;
	REINITIALISATION_OF_relevant_evt_OF_A48 = false;
	REINITIALISATION_OF_required_OF_A49 = true;
	boolState[already_S_OF_A49] = false;
	REINITIALISATION_OF_S_OF_A49 = false;
	REINITIALISATION_OF_relevant_evt_OF_A49 = false;
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
	REINITIALISATION_OF_required_OF_A6 = true;
	boolState[already_S_OF_A6] = false;
	REINITIALISATION_OF_S_OF_A6 = false;
	REINITIALISATION_OF_relevant_evt_OF_A6 = false;
	boolState[failF_OF_A6] = false;
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
	boolState[failF_OF_A77] = false;
	REINITIALISATION_OF_required_OF_A78 = true;
	boolState[already_S_OF_A78] = false;
	REINITIALISATION_OF_S_OF_A78 = false;
	REINITIALISATION_OF_relevant_evt_OF_A78 = false;
	boolState[failF_OF_A78] = false;
	REINITIALISATION_OF_required_OF_A79 = true;
	boolState[already_S_OF_A79] = false;
	REINITIALISATION_OF_S_OF_A79 = false;
	REINITIALISATION_OF_relevant_evt_OF_A79 = false;
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
	REINITIALISATION_OF_required_OF_A9 = true;
	boolState[already_S_OF_A9] = false;
	REINITIALISATION_OF_S_OF_A9 = false;
	REINITIALISATION_OF_relevant_evt_OF_A9 = false;
	boolState[failF_OF_A9] = false;
	REINITIALISATION_OF_required_OF_A90 = true;
	boolState[already_S_OF_A90] = false;
	REINITIALISATION_OF_S_OF_A90 = false;
	REINITIALISATION_OF_relevant_evt_OF_A90 = false;
	boolState[failF_OF_A90] = false;
	REINITIALISATION_OF_required_OF_A91 = true;
	boolState[already_S_OF_A91] = false;
	REINITIALISATION_OF_S_OF_A91 = false;
	REINITIALISATION_OF_relevant_evt_OF_A91 = false;
	REINITIALISATION_OF_required_OF_A93 = true;
	boolState[already_S_OF_A93] = false;
	REINITIALISATION_OF_S_OF_A93 = false;
	REINITIALISATION_OF_relevant_evt_OF_A93 = false;
	REINITIALISATION_OF_required_OF_A94 = true;
	boolState[already_S_OF_A94] = false;
	REINITIALISATION_OF_S_OF_A94 = false;
	REINITIALISATION_OF_relevant_evt_OF_A94 = false;
	boolState[failF_OF_A94] = false;
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
	REINITIALISATION_OF_required_OF_A99 = true;
	boolState[already_S_OF_A99] = false;
	REINITIALISATION_OF_S_OF_A99 = false;
	REINITIALISATION_OF_relevant_evt_OF_A99 = false;
	boolState[failF_OF_A99] = false;
	REINITIALISATION_OF_required_OF_UE_1 = true;
	boolState[already_S_OF_UE_1] = false;
	REINITIALISATION_OF_S_OF_UE_1 = false;
	REINITIALISATION_OF_relevant_evt_OF_UE_1 = false;
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
	REINITIALISATION_OF_required_OF_f_A59 = true;
	boolState[already_S_OF_f_A59] = false;
	REINITIALISATION_OF_S_OF_f_A59 = false;
	REINITIALISATION_OF_relevant_evt_OF_f_A59 = false;
	boolState[failF_OF_f_A59] = false;
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
	REINITIALISATION_OF_required_OF_i_A59 = true;
	boolState[already_S_OF_i_A59] = false;
	REINITIALISATION_OF_S_OF_i_A59 = false;
	REINITIALISATION_OF_relevant_evt_OF_i_A59 = false;
	boolState[failI_OF_i_A59] = false;
	REINITIALISATION_OF_to_be_fired_OF_i_A59 = false;
	boolState[already_standby_OF_i_A59] = false;
	boolState[already_required_OF_i_A59] = false;
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

	/* ---------- DECLARATION OF OCCURRENCE RULES FIRING FLAGS ------------ */
	FIRE_xx10_OF_A100 = false;
	FIRE_xx10_OF_A101 = false;
	FIRE_xx10_OF_A105 = false;
	FIRE_xx10_OF_A106 = false;
	FIRE_xx10_OF_A107 = false;
	FIRE_xx10_OF_A110 = false;
	FIRE_xx10_OF_A111 = false;
	FIRE_xx10_OF_A112 = false;
	FIRE_xx10_OF_A116 = false;
	FIRE_xx10_OF_A117 = false;
	FIRE_xx10_OF_A118 = false;
	FIRE_xx10_OF_A12 = false;
	FIRE_xx10_OF_A121 = false;
	FIRE_xx10_OF_A122 = false;
	FIRE_xx10_OF_A123 = false;
	FIRE_xx10_OF_A127 = false;
	FIRE_xx10_OF_A128 = false;
	FIRE_xx10_OF_A129 = false;
	FIRE_xx10_OF_A132 = false;
	FIRE_xx10_OF_A133 = false;
	FIRE_xx10_OF_A134 = false;
	FIRE_xx10_OF_A15 = false;
	FIRE_xx10_OF_A18 = false;
	FIRE_xx10_OF_A21 = false;
	FIRE_xx10_OF_A24 = false;
	FIRE_xx10_OF_A27 = false;
	FIRE_xx10_OF_A3 = false;
	FIRE_xx10_OF_A30 = false;
	FIRE_xx10_OF_A33 = false;
	FIRE_xx10_OF_A37 = false;
	FIRE_xx10_OF_A38 = false;
	FIRE_xx10_OF_A41 = false;
	FIRE_xx10_OF_A42 = false;
	FIRE_xx10_OF_A45 = false;
	FIRE_xx10_OF_A6 = false;
	FIRE_xx10_OF_A77 = false;
	FIRE_xx10_OF_A78 = false;
	FIRE_xx10_OF_A83 = false;
	FIRE_xx10_OF_A84 = false;
	FIRE_xx10_OF_A85 = false;
	FIRE_xx10_OF_A88 = false;
	FIRE_xx10_OF_A89 = false;
	FIRE_xx10_OF_A9 = false;
	FIRE_xx10_OF_A90 = false;
	FIRE_xx10_OF_A94 = false;
	FIRE_xx10_OF_A95 = false;
	FIRE_xx10_OF_A96 = false;
	FIRE_xx10_OF_A99 = false;
	FIRE_xx10_OF_f_A48 = false;
	FIRE_xx10_OF_f_A49 = false;
	FIRE_xx10_OF_f_A50 = false;
	FIRE_xx10_OF_f_A51 = false;
	FIRE_xx10_OF_f_A52 = false;
	FIRE_xx10_OF_f_A54 = false;
	FIRE_xx10_OF_f_A55 = false;
	FIRE_xx10_OF_f_A56 = false;
	FIRE_xx10_OF_f_A57 = false;
	FIRE_xx10_OF_f_A58 = false;
	FIRE_xx10_OF_f_A59 = false;
	FIRE_xx10_OF_f_A61 = false;
	FIRE_xx10_OF_f_A62 = false;
	FIRE_xx10_OF_f_A63 = false;
	FIRE_xx10_OF_f_A64 = false;
	FIRE_xx10_OF_f_A65 = false;
	FIRE_xx10_OF_f_A66 = false;
	FIRE_xx10_OF_f_A68 = false;
	FIRE_xx10_OF_f_A69 = false;
	FIRE_xx10_OF_f_A70 = false;
	FIRE_xx10_OF_f_A71 = false;
	FIRE_xx10_OF_f_A72 = false;
	FIRE_xx10_OF_f_A73 = false;
	FIRE_xx10_OF_f_A74 = false;
	FIRE_xx10_OF_f_A75 = false;
	FIRE_xx23_OF_i_A48_INS_73 = false;
	FIRE_xx23_OF_i_A48_INS_74 = false;
	FIRE_xx23_OF_i_A49_INS_75 = false;
	FIRE_xx23_OF_i_A49_INS_76 = false;
	FIRE_xx23_OF_i_A50_INS_77 = false;
	FIRE_xx23_OF_i_A50_INS_78 = false;
	FIRE_xx23_OF_i_A51_INS_79 = false;
	FIRE_xx23_OF_i_A51_INS_80 = false;
	FIRE_xx23_OF_i_A52_INS_81 = false;
	FIRE_xx23_OF_i_A52_INS_82 = false;
	FIRE_xx23_OF_i_A54_INS_83 = false;
	FIRE_xx23_OF_i_A54_INS_84 = false;
	FIRE_xx23_OF_i_A55_INS_85 = false;
	FIRE_xx23_OF_i_A55_INS_86 = false;
	FIRE_xx23_OF_i_A56_INS_87 = false;
	FIRE_xx23_OF_i_A56_INS_88 = false;
	FIRE_xx23_OF_i_A57_INS_89 = false;
	FIRE_xx23_OF_i_A57_INS_90 = false;
	FIRE_xx23_OF_i_A58_INS_91 = false;
	FIRE_xx23_OF_i_A58_INS_92 = false;
	FIRE_xx23_OF_i_A59_INS_93 = false;
	FIRE_xx23_OF_i_A59_INS_94 = false;
	FIRE_xx23_OF_i_A61_INS_95 = false;
	FIRE_xx23_OF_i_A61_INS_96 = false;
	FIRE_xx23_OF_i_A62_INS_97 = false;
	FIRE_xx23_OF_i_A62_INS_98 = false;
	FIRE_xx23_OF_i_A63_INS_99 = false;
	FIRE_xx23_OF_i_A63_INS_100 = false;
	FIRE_xx23_OF_i_A64_INS_101 = false;
	FIRE_xx23_OF_i_A64_INS_102 = false;
	FIRE_xx23_OF_i_A65_INS_103 = false;
	FIRE_xx23_OF_i_A65_INS_104 = false;
	FIRE_xx23_OF_i_A66_INS_105 = false;
	FIRE_xx23_OF_i_A66_INS_106 = false;
	FIRE_xx23_OF_i_A68_INS_107 = false;
	FIRE_xx23_OF_i_A68_INS_108 = false;
	FIRE_xx23_OF_i_A69_INS_109 = false;
	FIRE_xx23_OF_i_A69_INS_110 = false;
	FIRE_xx23_OF_i_A70_INS_111 = false;
	FIRE_xx23_OF_i_A70_INS_112 = false;
	FIRE_xx23_OF_i_A71_INS_113 = false;
	FIRE_xx23_OF_i_A71_INS_114 = false;
	FIRE_xx23_OF_i_A72_INS_115 = false;
	FIRE_xx23_OF_i_A72_INS_116 = false;
	FIRE_xx23_OF_i_A73_INS_117 = false;
	FIRE_xx23_OF_i_A73_INS_118 = false;
	FIRE_xx23_OF_i_A74_INS_119 = false;
	FIRE_xx23_OF_i_A74_INS_120 = false;
	FIRE_xx23_OF_i_A75_INS_121 = false;
	FIRE_xx23_OF_i_A75_INS_122 = false;

}

void storm::figaro::FigaroProgram_vgs_1_Trim_article_No_repair::saveCurrentState()
{
	// cout <<">>>>>>>>>>>>>>>>>>>> Saving current state  <<<<<<<<<<<<<<<<<<<<<<<" << endl;
	backupBoolState = boolState ;
	backupFloatState = floatState ;
	backupIntState = intState ;
	backupEnumState = enumState ;
}

int storm::figaro::FigaroProgram_vgs_1_Trim_article_No_repair::compareStates()
{
	// cout <<">>>>>>>>>>>>>>>>>>>> Comparing state with previous one (return number of differences) <<<<<<<<<<<<<<<<<<<<<<<" << endl;

	return (backupBoolState != boolState) + (backupFloatState != floatState) + (backupIntState != intState) + (backupEnumState != enumState); 
}

void storm::figaro::FigaroProgram_vgs_1_Trim_article_No_repair::printState()
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
	//cout << "Attribute :  boolState[required_OF_A104] | Value : " << boolState[required_OF_A104] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A104] | Value : " << boolState[already_S_OF_A104] << endl;
	//cout << "Attribute :  boolState[S_OF_A104] | Value : " << boolState[S_OF_A104] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A104] | Value : " << boolState[relevant_evt_OF_A104] << endl;
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
	//cout << "Attribute :  boolState[failF_OF_A107] | Value : " << boolState[failF_OF_A107] << endl;
	//cout << "Attribute :  boolState[required_OF_A108] | Value : " << boolState[required_OF_A108] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A108] | Value : " << boolState[already_S_OF_A108] << endl;
	//cout << "Attribute :  boolState[S_OF_A108] | Value : " << boolState[S_OF_A108] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A108] | Value : " << boolState[relevant_evt_OF_A108] << endl;
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
	//cout << "Attribute :  boolState[failF_OF_A112] | Value : " << boolState[failF_OF_A112] << endl;
	//cout << "Attribute :  boolState[required_OF_A113] | Value : " << boolState[required_OF_A113] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A113] | Value : " << boolState[already_S_OF_A113] << endl;
	//cout << "Attribute :  boolState[S_OF_A113] | Value : " << boolState[S_OF_A113] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A113] | Value : " << boolState[relevant_evt_OF_A113] << endl;
	//cout << "Attribute :  boolState[required_OF_A115] | Value : " << boolState[required_OF_A115] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A115] | Value : " << boolState[already_S_OF_A115] << endl;
	//cout << "Attribute :  boolState[S_OF_A115] | Value : " << boolState[S_OF_A115] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A115] | Value : " << boolState[relevant_evt_OF_A115] << endl;
	//cout << "Attribute :  boolState[required_OF_A116] | Value : " << boolState[required_OF_A116] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A116] | Value : " << boolState[already_S_OF_A116] << endl;
	//cout << "Attribute :  boolState[S_OF_A116] | Value : " << boolState[S_OF_A116] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A116] | Value : " << boolState[relevant_evt_OF_A116] << endl;
	//cout << "Attribute :  boolState[failF_OF_A116] | Value : " << boolState[failF_OF_A116] << endl;
	//cout << "Attribute :  boolState[required_OF_A117] | Value : " << boolState[required_OF_A117] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A117] | Value : " << boolState[already_S_OF_A117] << endl;
	//cout << "Attribute :  boolState[S_OF_A117] | Value : " << boolState[S_OF_A117] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A117] | Value : " << boolState[relevant_evt_OF_A117] << endl;
	//cout << "Attribute :  boolState[failF_OF_A117] | Value : " << boolState[failF_OF_A117] << endl;
	//cout << "Attribute :  boolState[required_OF_A118] | Value : " << boolState[required_OF_A118] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A118] | Value : " << boolState[already_S_OF_A118] << endl;
	//cout << "Attribute :  boolState[S_OF_A118] | Value : " << boolState[S_OF_A118] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A118] | Value : " << boolState[relevant_evt_OF_A118] << endl;
	//cout << "Attribute :  boolState[failF_OF_A118] | Value : " << boolState[failF_OF_A118] << endl;
	//cout << "Attribute :  boolState[required_OF_A119] | Value : " << boolState[required_OF_A119] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A119] | Value : " << boolState[already_S_OF_A119] << endl;
	//cout << "Attribute :  boolState[S_OF_A119] | Value : " << boolState[S_OF_A119] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A119] | Value : " << boolState[relevant_evt_OF_A119] << endl;
	//cout << "Attribute :  boolState[required_OF_A12] | Value : " << boolState[required_OF_A12] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A12] | Value : " << boolState[already_S_OF_A12] << endl;
	//cout << "Attribute :  boolState[S_OF_A12] | Value : " << boolState[S_OF_A12] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A12] | Value : " << boolState[relevant_evt_OF_A12] << endl;
	//cout << "Attribute :  boolState[failF_OF_A12] | Value : " << boolState[failF_OF_A12] << endl;
	//cout << "Attribute :  boolState[required_OF_A121] | Value : " << boolState[required_OF_A121] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A121] | Value : " << boolState[already_S_OF_A121] << endl;
	//cout << "Attribute :  boolState[S_OF_A121] | Value : " << boolState[S_OF_A121] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A121] | Value : " << boolState[relevant_evt_OF_A121] << endl;
	//cout << "Attribute :  boolState[failF_OF_A121] | Value : " << boolState[failF_OF_A121] << endl;
	//cout << "Attribute :  boolState[required_OF_A122] | Value : " << boolState[required_OF_A122] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A122] | Value : " << boolState[already_S_OF_A122] << endl;
	//cout << "Attribute :  boolState[S_OF_A122] | Value : " << boolState[S_OF_A122] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A122] | Value : " << boolState[relevant_evt_OF_A122] << endl;
	//cout << "Attribute :  boolState[failF_OF_A122] | Value : " << boolState[failF_OF_A122] << endl;
	//cout << "Attribute :  boolState[required_OF_A123] | Value : " << boolState[required_OF_A123] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A123] | Value : " << boolState[already_S_OF_A123] << endl;
	//cout << "Attribute :  boolState[S_OF_A123] | Value : " << boolState[S_OF_A123] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A123] | Value : " << boolState[relevant_evt_OF_A123] << endl;
	//cout << "Attribute :  boolState[failF_OF_A123] | Value : " << boolState[failF_OF_A123] << endl;
	//cout << "Attribute :  boolState[required_OF_A124] | Value : " << boolState[required_OF_A124] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A124] | Value : " << boolState[already_S_OF_A124] << endl;
	//cout << "Attribute :  boolState[S_OF_A124] | Value : " << boolState[S_OF_A124] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A124] | Value : " << boolState[relevant_evt_OF_A124] << endl;
	//cout << "Attribute :  boolState[required_OF_A126] | Value : " << boolState[required_OF_A126] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A126] | Value : " << boolState[already_S_OF_A126] << endl;
	//cout << "Attribute :  boolState[S_OF_A126] | Value : " << boolState[S_OF_A126] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A126] | Value : " << boolState[relevant_evt_OF_A126] << endl;
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
	//cout << "Attribute :  boolState[failF_OF_A134] | Value : " << boolState[failF_OF_A134] << endl;
	//cout << "Attribute :  boolState[required_OF_A135] | Value : " << boolState[required_OF_A135] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A135] | Value : " << boolState[already_S_OF_A135] << endl;
	//cout << "Attribute :  boolState[S_OF_A135] | Value : " << boolState[S_OF_A135] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A135] | Value : " << boolState[relevant_evt_OF_A135] << endl;
	//cout << "Attribute :  boolState[required_OF_A137] | Value : " << boolState[required_OF_A137] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A137] | Value : " << boolState[already_S_OF_A137] << endl;
	//cout << "Attribute :  boolState[S_OF_A137] | Value : " << boolState[S_OF_A137] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A137] | Value : " << boolState[relevant_evt_OF_A137] << endl;
	//cout << "Attribute :  boolState[required_OF_A15] | Value : " << boolState[required_OF_A15] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A15] | Value : " << boolState[already_S_OF_A15] << endl;
	//cout << "Attribute :  boolState[S_OF_A15] | Value : " << boolState[S_OF_A15] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A15] | Value : " << boolState[relevant_evt_OF_A15] << endl;
	//cout << "Attribute :  boolState[failF_OF_A15] | Value : " << boolState[failF_OF_A15] << endl;
	//cout << "Attribute :  boolState[required_OF_A16] | Value : " << boolState[required_OF_A16] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A16] | Value : " << boolState[already_S_OF_A16] << endl;
	//cout << "Attribute :  boolState[S_OF_A16] | Value : " << boolState[S_OF_A16] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A16] | Value : " << boolState[relevant_evt_OF_A16] << endl;
	//cout << "Attribute :  boolState[required_OF_A18] | Value : " << boolState[required_OF_A18] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A18] | Value : " << boolState[already_S_OF_A18] << endl;
	//cout << "Attribute :  boolState[S_OF_A18] | Value : " << boolState[S_OF_A18] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A18] | Value : " << boolState[relevant_evt_OF_A18] << endl;
	//cout << "Attribute :  boolState[failF_OF_A18] | Value : " << boolState[failF_OF_A18] << endl;
	//cout << "Attribute :  boolState[required_OF_A19] | Value : " << boolState[required_OF_A19] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A19] | Value : " << boolState[already_S_OF_A19] << endl;
	//cout << "Attribute :  boolState[S_OF_A19] | Value : " << boolState[S_OF_A19] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A19] | Value : " << boolState[relevant_evt_OF_A19] << endl;
	//cout << "Attribute :  boolState[required_OF_A21] | Value : " << boolState[required_OF_A21] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A21] | Value : " << boolState[already_S_OF_A21] << endl;
	//cout << "Attribute :  boolState[S_OF_A21] | Value : " << boolState[S_OF_A21] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A21] | Value : " << boolState[relevant_evt_OF_A21] << endl;
	//cout << "Attribute :  boolState[failF_OF_A21] | Value : " << boolState[failF_OF_A21] << endl;
	//cout << "Attribute :  boolState[required_OF_A22] | Value : " << boolState[required_OF_A22] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A22] | Value : " << boolState[already_S_OF_A22] << endl;
	//cout << "Attribute :  boolState[S_OF_A22] | Value : " << boolState[S_OF_A22] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A22] | Value : " << boolState[relevant_evt_OF_A22] << endl;
	//cout << "Attribute :  boolState[required_OF_A24] | Value : " << boolState[required_OF_A24] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A24] | Value : " << boolState[already_S_OF_A24] << endl;
	//cout << "Attribute :  boolState[S_OF_A24] | Value : " << boolState[S_OF_A24] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A24] | Value : " << boolState[relevant_evt_OF_A24] << endl;
	//cout << "Attribute :  boolState[failF_OF_A24] | Value : " << boolState[failF_OF_A24] << endl;
	//cout << "Attribute :  boolState[required_OF_A25] | Value : " << boolState[required_OF_A25] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A25] | Value : " << boolState[already_S_OF_A25] << endl;
	//cout << "Attribute :  boolState[S_OF_A25] | Value : " << boolState[S_OF_A25] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A25] | Value : " << boolState[relevant_evt_OF_A25] << endl;
	//cout << "Attribute :  boolState[required_OF_A27] | Value : " << boolState[required_OF_A27] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A27] | Value : " << boolState[already_S_OF_A27] << endl;
	//cout << "Attribute :  boolState[S_OF_A27] | Value : " << boolState[S_OF_A27] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A27] | Value : " << boolState[relevant_evt_OF_A27] << endl;
	//cout << "Attribute :  boolState[failF_OF_A27] | Value : " << boolState[failF_OF_A27] << endl;
	//cout << "Attribute :  boolState[required_OF_A28] | Value : " << boolState[required_OF_A28] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A28] | Value : " << boolState[already_S_OF_A28] << endl;
	//cout << "Attribute :  boolState[S_OF_A28] | Value : " << boolState[S_OF_A28] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A28] | Value : " << boolState[relevant_evt_OF_A28] << endl;
	//cout << "Attribute :  boolState[required_OF_A3] | Value : " << boolState[required_OF_A3] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A3] | Value : " << boolState[already_S_OF_A3] << endl;
	//cout << "Attribute :  boolState[S_OF_A3] | Value : " << boolState[S_OF_A3] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A3] | Value : " << boolState[relevant_evt_OF_A3] << endl;
	//cout << "Attribute :  boolState[failF_OF_A3] | Value : " << boolState[failF_OF_A3] << endl;
	//cout << "Attribute :  boolState[required_OF_A30] | Value : " << boolState[required_OF_A30] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A30] | Value : " << boolState[already_S_OF_A30] << endl;
	//cout << "Attribute :  boolState[S_OF_A30] | Value : " << boolState[S_OF_A30] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A30] | Value : " << boolState[relevant_evt_OF_A30] << endl;
	//cout << "Attribute :  boolState[failF_OF_A30] | Value : " << boolState[failF_OF_A30] << endl;
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
	//cout << "Attribute :  boolState[failF_OF_A38] | Value : " << boolState[failF_OF_A38] << endl;
	//cout << "Attribute :  boolState[required_OF_A39] | Value : " << boolState[required_OF_A39] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A39] | Value : " << boolState[already_S_OF_A39] << endl;
	//cout << "Attribute :  boolState[S_OF_A39] | Value : " << boolState[S_OF_A39] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A39] | Value : " << boolState[relevant_evt_OF_A39] << endl;
	//cout << "Attribute :  boolState[required_OF_A4] | Value : " << boolState[required_OF_A4] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A4] | Value : " << boolState[already_S_OF_A4] << endl;
	//cout << "Attribute :  boolState[S_OF_A4] | Value : " << boolState[S_OF_A4] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A4] | Value : " << boolState[relevant_evt_OF_A4] << endl;
	//cout << "Attribute :  boolState[required_OF_A41] | Value : " << boolState[required_OF_A41] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A41] | Value : " << boolState[already_S_OF_A41] << endl;
	//cout << "Attribute :  boolState[S_OF_A41] | Value : " << boolState[S_OF_A41] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A41] | Value : " << boolState[relevant_evt_OF_A41] << endl;
	//cout << "Attribute :  boolState[failF_OF_A41] | Value : " << boolState[failF_OF_A41] << endl;
	//cout << "Attribute :  boolState[required_OF_A42] | Value : " << boolState[required_OF_A42] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A42] | Value : " << boolState[already_S_OF_A42] << endl;
	//cout << "Attribute :  boolState[S_OF_A42] | Value : " << boolState[S_OF_A42] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A42] | Value : " << boolState[relevant_evt_OF_A42] << endl;
	//cout << "Attribute :  boolState[failF_OF_A42] | Value : " << boolState[failF_OF_A42] << endl;
	//cout << "Attribute :  boolState[required_OF_A43] | Value : " << boolState[required_OF_A43] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A43] | Value : " << boolState[already_S_OF_A43] << endl;
	//cout << "Attribute :  boolState[S_OF_A43] | Value : " << boolState[S_OF_A43] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A43] | Value : " << boolState[relevant_evt_OF_A43] << endl;
	//cout << "Attribute :  boolState[required_OF_A45] | Value : " << boolState[required_OF_A45] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A45] | Value : " << boolState[already_S_OF_A45] << endl;
	//cout << "Attribute :  boolState[S_OF_A45] | Value : " << boolState[S_OF_A45] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A45] | Value : " << boolState[relevant_evt_OF_A45] << endl;
	//cout << "Attribute :  boolState[failF_OF_A45] | Value : " << boolState[failF_OF_A45] << endl;
	//cout << "Attribute :  boolState[required_OF_A46] | Value : " << boolState[required_OF_A46] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A46] | Value : " << boolState[already_S_OF_A46] << endl;
	//cout << "Attribute :  boolState[S_OF_A46] | Value : " << boolState[S_OF_A46] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A46] | Value : " << boolState[relevant_evt_OF_A46] << endl;
	//cout << "Attribute :  boolState[required_OF_A48] | Value : " << boolState[required_OF_A48] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A48] | Value : " << boolState[already_S_OF_A48] << endl;
	//cout << "Attribute :  boolState[S_OF_A48] | Value : " << boolState[S_OF_A48] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A48] | Value : " << boolState[relevant_evt_OF_A48] << endl;
	//cout << "Attribute :  boolState[required_OF_A49] | Value : " << boolState[required_OF_A49] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A49] | Value : " << boolState[already_S_OF_A49] << endl;
	//cout << "Attribute :  boolState[S_OF_A49] | Value : " << boolState[S_OF_A49] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A49] | Value : " << boolState[relevant_evt_OF_A49] << endl;
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
	//cout << "Attribute :  boolState[required_OF_A6] | Value : " << boolState[required_OF_A6] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A6] | Value : " << boolState[already_S_OF_A6] << endl;
	//cout << "Attribute :  boolState[S_OF_A6] | Value : " << boolState[S_OF_A6] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A6] | Value : " << boolState[relevant_evt_OF_A6] << endl;
	//cout << "Attribute :  boolState[failF_OF_A6] | Value : " << boolState[failF_OF_A6] << endl;
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
	//cout << "Attribute :  boolState[failF_OF_A77] | Value : " << boolState[failF_OF_A77] << endl;
	//cout << "Attribute :  boolState[required_OF_A78] | Value : " << boolState[required_OF_A78] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A78] | Value : " << boolState[already_S_OF_A78] << endl;
	//cout << "Attribute :  boolState[S_OF_A78] | Value : " << boolState[S_OF_A78] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A78] | Value : " << boolState[relevant_evt_OF_A78] << endl;
	//cout << "Attribute :  boolState[failF_OF_A78] | Value : " << boolState[failF_OF_A78] << endl;
	//cout << "Attribute :  boolState[required_OF_A79] | Value : " << boolState[required_OF_A79] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A79] | Value : " << boolState[already_S_OF_A79] << endl;
	//cout << "Attribute :  boolState[S_OF_A79] | Value : " << boolState[S_OF_A79] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A79] | Value : " << boolState[relevant_evt_OF_A79] << endl;
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
	//cout << "Attribute :  boolState[required_OF_A9] | Value : " << boolState[required_OF_A9] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A9] | Value : " << boolState[already_S_OF_A9] << endl;
	//cout << "Attribute :  boolState[S_OF_A9] | Value : " << boolState[S_OF_A9] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A9] | Value : " << boolState[relevant_evt_OF_A9] << endl;
	//cout << "Attribute :  boolState[failF_OF_A9] | Value : " << boolState[failF_OF_A9] << endl;
	//cout << "Attribute :  boolState[required_OF_A90] | Value : " << boolState[required_OF_A90] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A90] | Value : " << boolState[already_S_OF_A90] << endl;
	//cout << "Attribute :  boolState[S_OF_A90] | Value : " << boolState[S_OF_A90] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A90] | Value : " << boolState[relevant_evt_OF_A90] << endl;
	//cout << "Attribute :  boolState[failF_OF_A90] | Value : " << boolState[failF_OF_A90] << endl;
	//cout << "Attribute :  boolState[required_OF_A91] | Value : " << boolState[required_OF_A91] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A91] | Value : " << boolState[already_S_OF_A91] << endl;
	//cout << "Attribute :  boolState[S_OF_A91] | Value : " << boolState[S_OF_A91] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A91] | Value : " << boolState[relevant_evt_OF_A91] << endl;
	//cout << "Attribute :  boolState[required_OF_A93] | Value : " << boolState[required_OF_A93] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A93] | Value : " << boolState[already_S_OF_A93] << endl;
	//cout << "Attribute :  boolState[S_OF_A93] | Value : " << boolState[S_OF_A93] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A93] | Value : " << boolState[relevant_evt_OF_A93] << endl;
	//cout << "Attribute :  boolState[required_OF_A94] | Value : " << boolState[required_OF_A94] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A94] | Value : " << boolState[already_S_OF_A94] << endl;
	//cout << "Attribute :  boolState[S_OF_A94] | Value : " << boolState[S_OF_A94] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A94] | Value : " << boolState[relevant_evt_OF_A94] << endl;
	//cout << "Attribute :  boolState[failF_OF_A94] | Value : " << boolState[failF_OF_A94] << endl;
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
	//cout << "Attribute :  boolState[required_OF_A99] | Value : " << boolState[required_OF_A99] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A99] | Value : " << boolState[already_S_OF_A99] << endl;
	//cout << "Attribute :  boolState[S_OF_A99] | Value : " << boolState[S_OF_A99] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A99] | Value : " << boolState[relevant_evt_OF_A99] << endl;
	//cout << "Attribute :  boolState[failF_OF_A99] | Value : " << boolState[failF_OF_A99] << endl;
	//cout << "Attribute :  boolState[required_OF_UE_1] | Value : " << boolState[required_OF_UE_1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_UE_1] | Value : " << boolState[already_S_OF_UE_1] << endl;
	//cout << "Attribute :  boolState[S_OF_UE_1] | Value : " << boolState[S_OF_UE_1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_UE_1] | Value : " << boolState[relevant_evt_OF_UE_1] << endl;
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
	//cout << "Attribute :  boolState[required_OF_f_A59] | Value : " << boolState[required_OF_f_A59] << endl;
	//cout << "Attribute :  boolState[already_S_OF_f_A59] | Value : " << boolState[already_S_OF_f_A59] << endl;
	//cout << "Attribute :  boolState[S_OF_f_A59] | Value : " << boolState[S_OF_f_A59] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_f_A59] | Value : " << boolState[relevant_evt_OF_f_A59] << endl;
	//cout << "Attribute :  boolState[failF_OF_f_A59] | Value : " << boolState[failF_OF_f_A59] << endl;
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
	//cout << "Attribute :  boolState[required_OF_i_A59] | Value : " << boolState[required_OF_i_A59] << endl;
	//cout << "Attribute :  boolState[already_S_OF_i_A59] | Value : " << boolState[already_S_OF_i_A59] << endl;
	//cout << "Attribute :  boolState[S_OF_i_A59] | Value : " << boolState[S_OF_i_A59] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_i_A59] | Value : " << boolState[relevant_evt_OF_i_A59] << endl;
	//cout << "Attribute :  boolState[failI_OF_i_A59] | Value : " << boolState[failI_OF_i_A59] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_i_A59] | Value : " << boolState[to_be_fired_OF_i_A59] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_i_A59] | Value : " << boolState[already_standby_OF_i_A59] << endl;
	//cout << "Attribute :  boolState[already_required_OF_i_A59] | Value : " << boolState[already_required_OF_i_A59] << endl;
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
}

bool storm::figaro::FigaroProgram_vgs_1_Trim_article_No_repair::figaromodelhasinstransitions()
{
	return true;
}
void storm::figaro::FigaroProgram_vgs_1_Trim_article_No_repair::doReinitialisations()
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
	boolState[required_OF_A104] = REINITIALISATION_OF_required_OF_A104;
	boolState[S_OF_A104] = REINITIALISATION_OF_S_OF_A104;
	boolState[relevant_evt_OF_A104] = REINITIALISATION_OF_relevant_evt_OF_A104;
	boolState[required_OF_A105] = REINITIALISATION_OF_required_OF_A105;
	boolState[S_OF_A105] = REINITIALISATION_OF_S_OF_A105;
	boolState[relevant_evt_OF_A105] = REINITIALISATION_OF_relevant_evt_OF_A105;
	boolState[required_OF_A106] = REINITIALISATION_OF_required_OF_A106;
	boolState[S_OF_A106] = REINITIALISATION_OF_S_OF_A106;
	boolState[relevant_evt_OF_A106] = REINITIALISATION_OF_relevant_evt_OF_A106;
	boolState[required_OF_A107] = REINITIALISATION_OF_required_OF_A107;
	boolState[S_OF_A107] = REINITIALISATION_OF_S_OF_A107;
	boolState[relevant_evt_OF_A107] = REINITIALISATION_OF_relevant_evt_OF_A107;
	boolState[required_OF_A108] = REINITIALISATION_OF_required_OF_A108;
	boolState[S_OF_A108] = REINITIALISATION_OF_S_OF_A108;
	boolState[relevant_evt_OF_A108] = REINITIALISATION_OF_relevant_evt_OF_A108;
	boolState[required_OF_A110] = REINITIALISATION_OF_required_OF_A110;
	boolState[S_OF_A110] = REINITIALISATION_OF_S_OF_A110;
	boolState[relevant_evt_OF_A110] = REINITIALISATION_OF_relevant_evt_OF_A110;
	boolState[required_OF_A111] = REINITIALISATION_OF_required_OF_A111;
	boolState[S_OF_A111] = REINITIALISATION_OF_S_OF_A111;
	boolState[relevant_evt_OF_A111] = REINITIALISATION_OF_relevant_evt_OF_A111;
	boolState[required_OF_A112] = REINITIALISATION_OF_required_OF_A112;
	boolState[S_OF_A112] = REINITIALISATION_OF_S_OF_A112;
	boolState[relevant_evt_OF_A112] = REINITIALISATION_OF_relevant_evt_OF_A112;
	boolState[required_OF_A113] = REINITIALISATION_OF_required_OF_A113;
	boolState[S_OF_A113] = REINITIALISATION_OF_S_OF_A113;
	boolState[relevant_evt_OF_A113] = REINITIALISATION_OF_relevant_evt_OF_A113;
	boolState[required_OF_A115] = REINITIALISATION_OF_required_OF_A115;
	boolState[S_OF_A115] = REINITIALISATION_OF_S_OF_A115;
	boolState[relevant_evt_OF_A115] = REINITIALISATION_OF_relevant_evt_OF_A115;
	boolState[required_OF_A116] = REINITIALISATION_OF_required_OF_A116;
	boolState[S_OF_A116] = REINITIALISATION_OF_S_OF_A116;
	boolState[relevant_evt_OF_A116] = REINITIALISATION_OF_relevant_evt_OF_A116;
	boolState[required_OF_A117] = REINITIALISATION_OF_required_OF_A117;
	boolState[S_OF_A117] = REINITIALISATION_OF_S_OF_A117;
	boolState[relevant_evt_OF_A117] = REINITIALISATION_OF_relevant_evt_OF_A117;
	boolState[required_OF_A118] = REINITIALISATION_OF_required_OF_A118;
	boolState[S_OF_A118] = REINITIALISATION_OF_S_OF_A118;
	boolState[relevant_evt_OF_A118] = REINITIALISATION_OF_relevant_evt_OF_A118;
	boolState[required_OF_A119] = REINITIALISATION_OF_required_OF_A119;
	boolState[S_OF_A119] = REINITIALISATION_OF_S_OF_A119;
	boolState[relevant_evt_OF_A119] = REINITIALISATION_OF_relevant_evt_OF_A119;
	boolState[required_OF_A12] = REINITIALISATION_OF_required_OF_A12;
	boolState[S_OF_A12] = REINITIALISATION_OF_S_OF_A12;
	boolState[relevant_evt_OF_A12] = REINITIALISATION_OF_relevant_evt_OF_A12;
	boolState[required_OF_A121] = REINITIALISATION_OF_required_OF_A121;
	boolState[S_OF_A121] = REINITIALISATION_OF_S_OF_A121;
	boolState[relevant_evt_OF_A121] = REINITIALISATION_OF_relevant_evt_OF_A121;
	boolState[required_OF_A122] = REINITIALISATION_OF_required_OF_A122;
	boolState[S_OF_A122] = REINITIALISATION_OF_S_OF_A122;
	boolState[relevant_evt_OF_A122] = REINITIALISATION_OF_relevant_evt_OF_A122;
	boolState[required_OF_A123] = REINITIALISATION_OF_required_OF_A123;
	boolState[S_OF_A123] = REINITIALISATION_OF_S_OF_A123;
	boolState[relevant_evt_OF_A123] = REINITIALISATION_OF_relevant_evt_OF_A123;
	boolState[required_OF_A124] = REINITIALISATION_OF_required_OF_A124;
	boolState[S_OF_A124] = REINITIALISATION_OF_S_OF_A124;
	boolState[relevant_evt_OF_A124] = REINITIALISATION_OF_relevant_evt_OF_A124;
	boolState[required_OF_A126] = REINITIALISATION_OF_required_OF_A126;
	boolState[S_OF_A126] = REINITIALISATION_OF_S_OF_A126;
	boolState[relevant_evt_OF_A126] = REINITIALISATION_OF_relevant_evt_OF_A126;
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
	boolState[required_OF_A135] = REINITIALISATION_OF_required_OF_A135;
	boolState[S_OF_A135] = REINITIALISATION_OF_S_OF_A135;
	boolState[relevant_evt_OF_A135] = REINITIALISATION_OF_relevant_evt_OF_A135;
	boolState[required_OF_A137] = REINITIALISATION_OF_required_OF_A137;
	boolState[S_OF_A137] = REINITIALISATION_OF_S_OF_A137;
	boolState[relevant_evt_OF_A137] = REINITIALISATION_OF_relevant_evt_OF_A137;
	boolState[required_OF_A15] = REINITIALISATION_OF_required_OF_A15;
	boolState[S_OF_A15] = REINITIALISATION_OF_S_OF_A15;
	boolState[relevant_evt_OF_A15] = REINITIALISATION_OF_relevant_evt_OF_A15;
	boolState[required_OF_A16] = REINITIALISATION_OF_required_OF_A16;
	boolState[S_OF_A16] = REINITIALISATION_OF_S_OF_A16;
	boolState[relevant_evt_OF_A16] = REINITIALISATION_OF_relevant_evt_OF_A16;
	boolState[required_OF_A18] = REINITIALISATION_OF_required_OF_A18;
	boolState[S_OF_A18] = REINITIALISATION_OF_S_OF_A18;
	boolState[relevant_evt_OF_A18] = REINITIALISATION_OF_relevant_evt_OF_A18;
	boolState[required_OF_A19] = REINITIALISATION_OF_required_OF_A19;
	boolState[S_OF_A19] = REINITIALISATION_OF_S_OF_A19;
	boolState[relevant_evt_OF_A19] = REINITIALISATION_OF_relevant_evt_OF_A19;
	boolState[required_OF_A21] = REINITIALISATION_OF_required_OF_A21;
	boolState[S_OF_A21] = REINITIALISATION_OF_S_OF_A21;
	boolState[relevant_evt_OF_A21] = REINITIALISATION_OF_relevant_evt_OF_A21;
	boolState[required_OF_A22] = REINITIALISATION_OF_required_OF_A22;
	boolState[S_OF_A22] = REINITIALISATION_OF_S_OF_A22;
	boolState[relevant_evt_OF_A22] = REINITIALISATION_OF_relevant_evt_OF_A22;
	boolState[required_OF_A24] = REINITIALISATION_OF_required_OF_A24;
	boolState[S_OF_A24] = REINITIALISATION_OF_S_OF_A24;
	boolState[relevant_evt_OF_A24] = REINITIALISATION_OF_relevant_evt_OF_A24;
	boolState[required_OF_A25] = REINITIALISATION_OF_required_OF_A25;
	boolState[S_OF_A25] = REINITIALISATION_OF_S_OF_A25;
	boolState[relevant_evt_OF_A25] = REINITIALISATION_OF_relevant_evt_OF_A25;
	boolState[required_OF_A27] = REINITIALISATION_OF_required_OF_A27;
	boolState[S_OF_A27] = REINITIALISATION_OF_S_OF_A27;
	boolState[relevant_evt_OF_A27] = REINITIALISATION_OF_relevant_evt_OF_A27;
	boolState[required_OF_A28] = REINITIALISATION_OF_required_OF_A28;
	boolState[S_OF_A28] = REINITIALISATION_OF_S_OF_A28;
	boolState[relevant_evt_OF_A28] = REINITIALISATION_OF_relevant_evt_OF_A28;
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
	boolState[required_OF_A35] = REINITIALISATION_OF_required_OF_A35;
	boolState[S_OF_A35] = REINITIALISATION_OF_S_OF_A35;
	boolState[relevant_evt_OF_A35] = REINITIALISATION_OF_relevant_evt_OF_A35;
	boolState[required_OF_A37] = REINITIALISATION_OF_required_OF_A37;
	boolState[S_OF_A37] = REINITIALISATION_OF_S_OF_A37;
	boolState[relevant_evt_OF_A37] = REINITIALISATION_OF_relevant_evt_OF_A37;
	boolState[required_OF_A38] = REINITIALISATION_OF_required_OF_A38;
	boolState[S_OF_A38] = REINITIALISATION_OF_S_OF_A38;
	boolState[relevant_evt_OF_A38] = REINITIALISATION_OF_relevant_evt_OF_A38;
	boolState[required_OF_A39] = REINITIALISATION_OF_required_OF_A39;
	boolState[S_OF_A39] = REINITIALISATION_OF_S_OF_A39;
	boolState[relevant_evt_OF_A39] = REINITIALISATION_OF_relevant_evt_OF_A39;
	boolState[required_OF_A4] = REINITIALISATION_OF_required_OF_A4;
	boolState[S_OF_A4] = REINITIALISATION_OF_S_OF_A4;
	boolState[relevant_evt_OF_A4] = REINITIALISATION_OF_relevant_evt_OF_A4;
	boolState[required_OF_A41] = REINITIALISATION_OF_required_OF_A41;
	boolState[S_OF_A41] = REINITIALISATION_OF_S_OF_A41;
	boolState[relevant_evt_OF_A41] = REINITIALISATION_OF_relevant_evt_OF_A41;
	boolState[required_OF_A42] = REINITIALISATION_OF_required_OF_A42;
	boolState[S_OF_A42] = REINITIALISATION_OF_S_OF_A42;
	boolState[relevant_evt_OF_A42] = REINITIALISATION_OF_relevant_evt_OF_A42;
	boolState[required_OF_A43] = REINITIALISATION_OF_required_OF_A43;
	boolState[S_OF_A43] = REINITIALISATION_OF_S_OF_A43;
	boolState[relevant_evt_OF_A43] = REINITIALISATION_OF_relevant_evt_OF_A43;
	boolState[required_OF_A45] = REINITIALISATION_OF_required_OF_A45;
	boolState[S_OF_A45] = REINITIALISATION_OF_S_OF_A45;
	boolState[relevant_evt_OF_A45] = REINITIALISATION_OF_relevant_evt_OF_A45;
	boolState[required_OF_A46] = REINITIALISATION_OF_required_OF_A46;
	boolState[S_OF_A46] = REINITIALISATION_OF_S_OF_A46;
	boolState[relevant_evt_OF_A46] = REINITIALISATION_OF_relevant_evt_OF_A46;
	boolState[required_OF_A48] = REINITIALISATION_OF_required_OF_A48;
	boolState[S_OF_A48] = REINITIALISATION_OF_S_OF_A48;
	boolState[relevant_evt_OF_A48] = REINITIALISATION_OF_relevant_evt_OF_A48;
	boolState[required_OF_A49] = REINITIALISATION_OF_required_OF_A49;
	boolState[S_OF_A49] = REINITIALISATION_OF_S_OF_A49;
	boolState[relevant_evt_OF_A49] = REINITIALISATION_OF_relevant_evt_OF_A49;
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
	boolState[required_OF_A88] = REINITIALISATION_OF_required_OF_A88;
	boolState[S_OF_A88] = REINITIALISATION_OF_S_OF_A88;
	boolState[relevant_evt_OF_A88] = REINITIALISATION_OF_relevant_evt_OF_A88;
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
	boolState[required_OF_A93] = REINITIALISATION_OF_required_OF_A93;
	boolState[S_OF_A93] = REINITIALISATION_OF_S_OF_A93;
	boolState[relevant_evt_OF_A93] = REINITIALISATION_OF_relevant_evt_OF_A93;
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
	boolState[required_OF_A99] = REINITIALISATION_OF_required_OF_A99;
	boolState[S_OF_A99] = REINITIALISATION_OF_S_OF_A99;
	boolState[relevant_evt_OF_A99] = REINITIALISATION_OF_relevant_evt_OF_A99;
	boolState[required_OF_UE_1] = REINITIALISATION_OF_required_OF_UE_1;
	boolState[S_OF_UE_1] = REINITIALISATION_OF_S_OF_UE_1;
	boolState[relevant_evt_OF_UE_1] = REINITIALISATION_OF_relevant_evt_OF_UE_1;
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
	boolState[required_OF_f_A59] = REINITIALISATION_OF_required_OF_f_A59;
	boolState[S_OF_f_A59] = REINITIALISATION_OF_S_OF_f_A59;
	boolState[relevant_evt_OF_f_A59] = REINITIALISATION_OF_relevant_evt_OF_f_A59;
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
	boolState[required_OF_i_A59] = REINITIALISATION_OF_required_OF_i_A59;
	boolState[S_OF_i_A59] = REINITIALISATION_OF_S_OF_i_A59;
	boolState[relevant_evt_OF_i_A59] = REINITIALISATION_OF_relevant_evt_OF_i_A59;
	boolState[to_be_fired_OF_i_A59] = REINITIALISATION_OF_to_be_fired_OF_i_A59;
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
}

void storm::figaro::FigaroProgram_vgs_1_Trim_article_No_repair::fireOccurrence(int numFire)
{
	//cout <<">>>>>>>>>>>>>>>>>>>> Fire of occurrence #" << numFire << " <<<<<<<<<<<<<<<<<<<<<<<" << endl;

	if (numFire == 0)
	{
		FIRE_xx10_OF_A100 = true;
	}

	if (numFire == 1)
	{
		FIRE_xx10_OF_A101 = true;
	}

	if (numFire == 2)
	{
		FIRE_xx10_OF_A105 = true;
	}

	if (numFire == 3)
	{
		FIRE_xx10_OF_A106 = true;
	}

	if (numFire == 4)
	{
		FIRE_xx10_OF_A107 = true;
	}

	if (numFire == 5)
	{
		FIRE_xx10_OF_A110 = true;
	}

	if (numFire == 6)
	{
		FIRE_xx10_OF_A111 = true;
	}

	if (numFire == 7)
	{
		FIRE_xx10_OF_A112 = true;
	}

	if (numFire == 8)
	{
		FIRE_xx10_OF_A116 = true;
	}

	if (numFire == 9)
	{
		FIRE_xx10_OF_A117 = true;
	}

	if (numFire == 10)
	{
		FIRE_xx10_OF_A118 = true;
	}

	if (numFire == 11)
	{
		FIRE_xx10_OF_A12 = true;
	}

	if (numFire == 12)
	{
		FIRE_xx10_OF_A121 = true;
	}

	if (numFire == 13)
	{
		FIRE_xx10_OF_A122 = true;
	}

	if (numFire == 14)
	{
		FIRE_xx10_OF_A123 = true;
	}

	if (numFire == 15)
	{
		FIRE_xx10_OF_A127 = true;
	}

	if (numFire == 16)
	{
		FIRE_xx10_OF_A128 = true;
	}

	if (numFire == 17)
	{
		FIRE_xx10_OF_A129 = true;
	}

	if (numFire == 18)
	{
		FIRE_xx10_OF_A132 = true;
	}

	if (numFire == 19)
	{
		FIRE_xx10_OF_A133 = true;
	}

	if (numFire == 20)
	{
		FIRE_xx10_OF_A134 = true;
	}

	if (numFire == 21)
	{
		FIRE_xx10_OF_A15 = true;
	}

	if (numFire == 22)
	{
		FIRE_xx10_OF_A18 = true;
	}

	if (numFire == 23)
	{
		FIRE_xx10_OF_A21 = true;
	}

	if (numFire == 24)
	{
		FIRE_xx10_OF_A24 = true;
	}

	if (numFire == 25)
	{
		FIRE_xx10_OF_A27 = true;
	}

	if (numFire == 26)
	{
		FIRE_xx10_OF_A3 = true;
	}

	if (numFire == 27)
	{
		FIRE_xx10_OF_A30 = true;
	}

	if (numFire == 28)
	{
		FIRE_xx10_OF_A33 = true;
	}

	if (numFire == 29)
	{
		FIRE_xx10_OF_A37 = true;
	}

	if (numFire == 30)
	{
		FIRE_xx10_OF_A38 = true;
	}

	if (numFire == 31)
	{
		FIRE_xx10_OF_A41 = true;
	}

	if (numFire == 32)
	{
		FIRE_xx10_OF_A42 = true;
	}

	if (numFire == 33)
	{
		FIRE_xx10_OF_A45 = true;
	}

	if (numFire == 34)
	{
		FIRE_xx10_OF_A6 = true;
	}

	if (numFire == 35)
	{
		FIRE_xx10_OF_A77 = true;
	}

	if (numFire == 36)
	{
		FIRE_xx10_OF_A78 = true;
	}

	if (numFire == 37)
	{
		FIRE_xx10_OF_A83 = true;
	}

	if (numFire == 38)
	{
		FIRE_xx10_OF_A84 = true;
	}

	if (numFire == 39)
	{
		FIRE_xx10_OF_A85 = true;
	}

	if (numFire == 40)
	{
		FIRE_xx10_OF_A88 = true;
	}

	if (numFire == 41)
	{
		FIRE_xx10_OF_A89 = true;
	}

	if (numFire == 42)
	{
		FIRE_xx10_OF_A9 = true;
	}

	if (numFire == 43)
	{
		FIRE_xx10_OF_A90 = true;
	}

	if (numFire == 44)
	{
		FIRE_xx10_OF_A94 = true;
	}

	if (numFire == 45)
	{
		FIRE_xx10_OF_A95 = true;
	}

	if (numFire == 46)
	{
		FIRE_xx10_OF_A96 = true;
	}

	if (numFire == 47)
	{
		FIRE_xx10_OF_A99 = true;
	}

	if (numFire == 48)
	{
		FIRE_xx10_OF_f_A48 = true;
	}

	if (numFire == 49)
	{
		FIRE_xx10_OF_f_A49 = true;
	}

	if (numFire == 50)
	{
		FIRE_xx10_OF_f_A50 = true;
	}

	if (numFire == 51)
	{
		FIRE_xx10_OF_f_A51 = true;
	}

	if (numFire == 52)
	{
		FIRE_xx10_OF_f_A52 = true;
	}

	if (numFire == 53)
	{
		FIRE_xx10_OF_f_A54 = true;
	}

	if (numFire == 54)
	{
		FIRE_xx10_OF_f_A55 = true;
	}

	if (numFire == 55)
	{
		FIRE_xx10_OF_f_A56 = true;
	}

	if (numFire == 56)
	{
		FIRE_xx10_OF_f_A57 = true;
	}

	if (numFire == 57)
	{
		FIRE_xx10_OF_f_A58 = true;
	}

	if (numFire == 58)
	{
		FIRE_xx10_OF_f_A59 = true;
	}

	if (numFire == 59)
	{
		FIRE_xx10_OF_f_A61 = true;
	}

	if (numFire == 60)
	{
		FIRE_xx10_OF_f_A62 = true;
	}

	if (numFire == 61)
	{
		FIRE_xx10_OF_f_A63 = true;
	}

	if (numFire == 62)
	{
		FIRE_xx10_OF_f_A64 = true;
	}

	if (numFire == 63)
	{
		FIRE_xx10_OF_f_A65 = true;
	}

	if (numFire == 64)
	{
		FIRE_xx10_OF_f_A66 = true;
	}

	if (numFire == 65)
	{
		FIRE_xx10_OF_f_A68 = true;
	}

	if (numFire == 66)
	{
		FIRE_xx10_OF_f_A69 = true;
	}

	if (numFire == 67)
	{
		FIRE_xx10_OF_f_A70 = true;
	}

	if (numFire == 68)
	{
		FIRE_xx10_OF_f_A71 = true;
	}

	if (numFire == 69)
	{
		FIRE_xx10_OF_f_A72 = true;
	}

	if (numFire == 70)
	{
		FIRE_xx10_OF_f_A73 = true;
	}

	if (numFire == 71)
	{
		FIRE_xx10_OF_f_A74 = true;
	}

	if (numFire == 72)
	{
		FIRE_xx10_OF_f_A75 = true;
	}

	if (numFire == 73)
	{
		FIRE_xx23_OF_i_A48_INS_73 = true;
	}

	if (numFire == 74)
	{
		FIRE_xx23_OF_i_A48_INS_74 = true;
	}

	if (numFire == 75)
	{
		FIRE_xx23_OF_i_A49_INS_75 = true;
	}

	if (numFire == 76)
	{
		FIRE_xx23_OF_i_A49_INS_76 = true;
	}

	if (numFire == 77)
	{
		FIRE_xx23_OF_i_A50_INS_77 = true;
	}

	if (numFire == 78)
	{
		FIRE_xx23_OF_i_A50_INS_78 = true;
	}

	if (numFire == 79)
	{
		FIRE_xx23_OF_i_A51_INS_79 = true;
	}

	if (numFire == 80)
	{
		FIRE_xx23_OF_i_A51_INS_80 = true;
	}

	if (numFire == 81)
	{
		FIRE_xx23_OF_i_A52_INS_81 = true;
	}

	if (numFire == 82)
	{
		FIRE_xx23_OF_i_A52_INS_82 = true;
	}

	if (numFire == 83)
	{
		FIRE_xx23_OF_i_A54_INS_83 = true;
	}

	if (numFire == 84)
	{
		FIRE_xx23_OF_i_A54_INS_84 = true;
	}

	if (numFire == 85)
	{
		FIRE_xx23_OF_i_A55_INS_85 = true;
	}

	if (numFire == 86)
	{
		FIRE_xx23_OF_i_A55_INS_86 = true;
	}

	if (numFire == 87)
	{
		FIRE_xx23_OF_i_A56_INS_87 = true;
	}

	if (numFire == 88)
	{
		FIRE_xx23_OF_i_A56_INS_88 = true;
	}

	if (numFire == 89)
	{
		FIRE_xx23_OF_i_A57_INS_89 = true;
	}

	if (numFire == 90)
	{
		FIRE_xx23_OF_i_A57_INS_90 = true;
	}

	if (numFire == 91)
	{
		FIRE_xx23_OF_i_A58_INS_91 = true;
	}

	if (numFire == 92)
	{
		FIRE_xx23_OF_i_A58_INS_92 = true;
	}

	if (numFire == 93)
	{
		FIRE_xx23_OF_i_A59_INS_93 = true;
	}

	if (numFire == 94)
	{
		FIRE_xx23_OF_i_A59_INS_94 = true;
	}

	if (numFire == 95)
	{
		FIRE_xx23_OF_i_A61_INS_95 = true;
	}

	if (numFire == 96)
	{
		FIRE_xx23_OF_i_A61_INS_96 = true;
	}

	if (numFire == 97)
	{
		FIRE_xx23_OF_i_A62_INS_97 = true;
	}

	if (numFire == 98)
	{
		FIRE_xx23_OF_i_A62_INS_98 = true;
	}

	if (numFire == 99)
	{
		FIRE_xx23_OF_i_A63_INS_99 = true;
	}

	if (numFire == 100)
	{
		FIRE_xx23_OF_i_A63_INS_100 = true;
	}

	if (numFire == 101)
	{
		FIRE_xx23_OF_i_A64_INS_101 = true;
	}

	if (numFire == 102)
	{
		FIRE_xx23_OF_i_A64_INS_102 = true;
	}

	if (numFire == 103)
	{
		FIRE_xx23_OF_i_A65_INS_103 = true;
	}

	if (numFire == 104)
	{
		FIRE_xx23_OF_i_A65_INS_104 = true;
	}

	if (numFire == 105)
	{
		FIRE_xx23_OF_i_A66_INS_105 = true;
	}

	if (numFire == 106)
	{
		FIRE_xx23_OF_i_A66_INS_106 = true;
	}

	if (numFire == 107)
	{
		FIRE_xx23_OF_i_A68_INS_107 = true;
	}

	if (numFire == 108)
	{
		FIRE_xx23_OF_i_A68_INS_108 = true;
	}

	if (numFire == 109)
	{
		FIRE_xx23_OF_i_A69_INS_109 = true;
	}

	if (numFire == 110)
	{
		FIRE_xx23_OF_i_A69_INS_110 = true;
	}

	if (numFire == 111)
	{
		FIRE_xx23_OF_i_A70_INS_111 = true;
	}

	if (numFire == 112)
	{
		FIRE_xx23_OF_i_A70_INS_112 = true;
	}

	if (numFire == 113)
	{
		FIRE_xx23_OF_i_A71_INS_113 = true;
	}

	if (numFire == 114)
	{
		FIRE_xx23_OF_i_A71_INS_114 = true;
	}

	if (numFire == 115)
	{
		FIRE_xx23_OF_i_A72_INS_115 = true;
	}

	if (numFire == 116)
	{
		FIRE_xx23_OF_i_A72_INS_116 = true;
	}

	if (numFire == 117)
	{
		FIRE_xx23_OF_i_A73_INS_117 = true;
	}

	if (numFire == 118)
	{
		FIRE_xx23_OF_i_A73_INS_118 = true;
	}

	if (numFire == 119)
	{
		FIRE_xx23_OF_i_A74_INS_119 = true;
	}

	if (numFire == 120)
	{
		FIRE_xx23_OF_i_A74_INS_120 = true;
	}

	if (numFire == 121)
	{
		FIRE_xx23_OF_i_A75_INS_121 = true;
	}

	if (numFire == 122)
	{
		FIRE_xx23_OF_i_A75_INS_122 = true;
	}

/* ---------- DECLARATION OF OCCURRENCE RULES------------ */

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

	// Occurrence xx10_OF_A107
	if ((boolState[failF_OF_A107] == false) && (boolState[required_OF_A107] &&  boolState[relevant_evt_OF_A107])) 
	{
		 
		if (FIRE_xx10_OF_A107)
		{
			boolState[failF_OF_A107]  =  true;
			FIRE_xx10_OF_A107 = false;
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

	// Occurrence xx10_OF_A112
	if ((boolState[failF_OF_A112] == false) && (boolState[required_OF_A112] &&  boolState[relevant_evt_OF_A112])) 
	{
		 
		if (FIRE_xx10_OF_A112)
		{
			boolState[failF_OF_A112]  =  true;
			FIRE_xx10_OF_A112 = false;
		}
	}

	// Occurrence xx10_OF_A116
	if ((boolState[failF_OF_A116] == false) && (boolState[required_OF_A116] &&  boolState[relevant_evt_OF_A116])) 
	{
		 
		if (FIRE_xx10_OF_A116)
		{
			boolState[failF_OF_A116]  =  true;
			FIRE_xx10_OF_A116 = false;
		}
	}

	// Occurrence xx10_OF_A117
	if ((boolState[failF_OF_A117] == false) && (boolState[required_OF_A117] &&  boolState[relevant_evt_OF_A117])) 
	{
		 
		if (FIRE_xx10_OF_A117)
		{
			boolState[failF_OF_A117]  =  true;
			FIRE_xx10_OF_A117 = false;
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

	// Occurrence xx10_OF_A12
	if ((boolState[failF_OF_A12] == false) && (boolState[required_OF_A12] && boolState[relevant_evt_OF_A12])) 
	{
		 
		if (FIRE_xx10_OF_A12)
		{
			boolState[failF_OF_A12]  =  true;
			FIRE_xx10_OF_A12 = false;
		}
	}

	// Occurrence xx10_OF_A121
	if ((boolState[failF_OF_A121] == false) && (boolState[required_OF_A121] &&  boolState[relevant_evt_OF_A121])) 
	{
		 
		if (FIRE_xx10_OF_A121)
		{
			boolState[failF_OF_A121]  =  true;
			FIRE_xx10_OF_A121 = false;
		}
	}

	// Occurrence xx10_OF_A122
	if ((boolState[failF_OF_A122] == false) && (boolState[required_OF_A122] &&  boolState[relevant_evt_OF_A122])) 
	{
		 
		if (FIRE_xx10_OF_A122)
		{
			boolState[failF_OF_A122]  =  true;
			FIRE_xx10_OF_A122 = false;
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

	// Occurrence xx10_OF_A134
	if ((boolState[failF_OF_A134] == false) && (boolState[required_OF_A134] &&  boolState[relevant_evt_OF_A134])) 
	{
		 
		if (FIRE_xx10_OF_A134)
		{
			boolState[failF_OF_A134]  =  true;
			FIRE_xx10_OF_A134 = false;
		}
	}

	// Occurrence xx10_OF_A15
	if ((boolState[failF_OF_A15] == false) && (boolState[required_OF_A15] && boolState[relevant_evt_OF_A15])) 
	{
		 
		if (FIRE_xx10_OF_A15)
		{
			boolState[failF_OF_A15]  =  true;
			FIRE_xx10_OF_A15 = false;
		}
	}

	// Occurrence xx10_OF_A18
	if ((boolState[failF_OF_A18] == false) && (boolState[required_OF_A18] && boolState[relevant_evt_OF_A18])) 
	{
		 
		if (FIRE_xx10_OF_A18)
		{
			boolState[failF_OF_A18]  =  true;
			FIRE_xx10_OF_A18 = false;
		}
	}

	// Occurrence xx10_OF_A21
	if ((boolState[failF_OF_A21] == false) && (boolState[required_OF_A21] && boolState[relevant_evt_OF_A21])) 
	{
		 
		if (FIRE_xx10_OF_A21)
		{
			boolState[failF_OF_A21]  =  true;
			FIRE_xx10_OF_A21 = false;
		}
	}

	// Occurrence xx10_OF_A24
	if ((boolState[failF_OF_A24] == false) && (boolState[required_OF_A24] && boolState[relevant_evt_OF_A24])) 
	{
		 
		if (FIRE_xx10_OF_A24)
		{
			boolState[failF_OF_A24]  =  true;
			FIRE_xx10_OF_A24 = false;
		}
	}

	// Occurrence xx10_OF_A27
	if ((boolState[failF_OF_A27] == false) && (boolState[required_OF_A27] && boolState[relevant_evt_OF_A27])) 
	{
		 
		if (FIRE_xx10_OF_A27)
		{
			boolState[failF_OF_A27]  =  true;
			FIRE_xx10_OF_A27 = false;
		}
	}

	// Occurrence xx10_OF_A3
	if ((boolState[failF_OF_A3] == false) && (boolState[required_OF_A3] && boolState[relevant_evt_OF_A3])) 
	{
		 
		if (FIRE_xx10_OF_A3)
		{
			boolState[failF_OF_A3]  =  true;
			FIRE_xx10_OF_A3 = false;
		}
	}

	// Occurrence xx10_OF_A30
	if ((boolState[failF_OF_A30] == false) && (boolState[required_OF_A30] && boolState[relevant_evt_OF_A30])) 
	{
		 
		if (FIRE_xx10_OF_A30)
		{
			boolState[failF_OF_A30]  =  true;
			FIRE_xx10_OF_A30 = false;
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

	// Occurrence xx10_OF_A37
	if ((boolState[failF_OF_A37] == false) && (boolState[required_OF_A37] && boolState[relevant_evt_OF_A37])) 
	{
		 
		if (FIRE_xx10_OF_A37)
		{
			boolState[failF_OF_A37]  =  true;
			FIRE_xx10_OF_A37 = false;
		}
	}

	// Occurrence xx10_OF_A38
	if ((boolState[failF_OF_A38] == false) && (boolState[required_OF_A38] && boolState[relevant_evt_OF_A38])) 
	{
		 
		if (FIRE_xx10_OF_A38)
		{
			boolState[failF_OF_A38]  =  true;
			FIRE_xx10_OF_A38 = false;
		}
	}

	// Occurrence xx10_OF_A41
	if ((boolState[failF_OF_A41] == false) && (boolState[required_OF_A41] && boolState[relevant_evt_OF_A41])) 
	{
		 
		if (FIRE_xx10_OF_A41)
		{
			boolState[failF_OF_A41]  =  true;
			FIRE_xx10_OF_A41 = false;
		}
	}

	// Occurrence xx10_OF_A42
	if ((boolState[failF_OF_A42] == false) && (boolState[required_OF_A42] && boolState[relevant_evt_OF_A42])) 
	{
		 
		if (FIRE_xx10_OF_A42)
		{
			boolState[failF_OF_A42]  =  true;
			FIRE_xx10_OF_A42 = false;
		}
	}

	// Occurrence xx10_OF_A45
	if ((boolState[failF_OF_A45] == false) && (boolState[required_OF_A45] && boolState[relevant_evt_OF_A45])) 
	{
		 
		if (FIRE_xx10_OF_A45)
		{
			boolState[failF_OF_A45]  =  true;
			FIRE_xx10_OF_A45 = false;
		}
	}

	// Occurrence xx10_OF_A6
	if ((boolState[failF_OF_A6] == false) && (boolState[required_OF_A6] && boolState[relevant_evt_OF_A6])) 
	{
		 
		if (FIRE_xx10_OF_A6)
		{
			boolState[failF_OF_A6]  =  true;
			FIRE_xx10_OF_A6 = false;
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

	// Occurrence xx10_OF_A78
	if ((boolState[failF_OF_A78] == false) && (boolState[required_OF_A78] && boolState[relevant_evt_OF_A78])) 
	{
		 
		if (FIRE_xx10_OF_A78)
		{
			boolState[failF_OF_A78]  =  true;
			FIRE_xx10_OF_A78 = false;
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

	// Occurrence xx10_OF_A9
	if ((boolState[failF_OF_A9] == false) && (boolState[required_OF_A9] && boolState[relevant_evt_OF_A9])) 
	{
		 
		if (FIRE_xx10_OF_A9)
		{
			boolState[failF_OF_A9]  =  true;
			FIRE_xx10_OF_A9 = false;
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

	// Occurrence xx10_OF_A94
	if ((boolState[failF_OF_A94] == false) && (boolState[required_OF_A94] && boolState[relevant_evt_OF_A94])) 
	{
		 
		if (FIRE_xx10_OF_A94)
		{
			boolState[failF_OF_A94]  =  true;
			FIRE_xx10_OF_A94 = false;
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

	// Occurrence xx10_OF_A96
	if ((boolState[failF_OF_A96] == false) && (boolState[required_OF_A96] && boolState[relevant_evt_OF_A96])) 
	{
		 
		if (FIRE_xx10_OF_A96)
		{
			boolState[failF_OF_A96]  =  true;
			FIRE_xx10_OF_A96 = false;
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

	// Occurrence xx10_OF_f_A48
	if ((boolState[failF_OF_f_A48] == false) && (boolState[required_OF_f_A48] &&  boolState[relevant_evt_OF_f_A48])) 
	{
		 
		if (FIRE_xx10_OF_f_A48)
		{
			boolState[failF_OF_f_A48]  =  true;
			FIRE_xx10_OF_f_A48 = false;
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

	// Occurrence xx10_OF_f_A50
	if ((boolState[failF_OF_f_A50] == false) && (boolState[required_OF_f_A50] &&  boolState[relevant_evt_OF_f_A50])) 
	{
		 
		if (FIRE_xx10_OF_f_A50)
		{
			boolState[failF_OF_f_A50]  =  true;
			FIRE_xx10_OF_f_A50 = false;
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

	// Occurrence xx10_OF_f_A52
	if ((boolState[failF_OF_f_A52] == false) && (boolState[required_OF_f_A52] &&  boolState[relevant_evt_OF_f_A52])) 
	{
		 
		if (FIRE_xx10_OF_f_A52)
		{
			boolState[failF_OF_f_A52]  =  true;
			FIRE_xx10_OF_f_A52 = false;
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

	// Occurrence xx10_OF_f_A59
	if ((boolState[failF_OF_f_A59] == false) && (boolState[required_OF_f_A59] &&  boolState[relevant_evt_OF_f_A59])) 
	{
		 
		if (FIRE_xx10_OF_f_A59)
		{
			boolState[failF_OF_f_A59]  =  true;
			FIRE_xx10_OF_f_A59 = false;
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

	// Occurrence xx10_OF_f_A62
	if ((boolState[failF_OF_f_A62] == false) && (boolState[required_OF_f_A62] &&  boolState[relevant_evt_OF_f_A62])) 
	{
		 
		if (FIRE_xx10_OF_f_A62)
		{
			boolState[failF_OF_f_A62]  =  true;
			FIRE_xx10_OF_f_A62 = false;
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

	// Occurrence xx10_OF_f_A65
	if ((boolState[failF_OF_f_A65] == false) && (boolState[required_OF_f_A65] &&  boolState[relevant_evt_OF_f_A65])) 
	{
		 
		if (FIRE_xx10_OF_f_A65)
		{
			boolState[failF_OF_f_A65]  =  true;
			FIRE_xx10_OF_f_A65 = false;
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

	// Occurrence xx23_OF_i_A48

	if ((boolState[failI_OF_i_A48] == false) && (boolState[to_be_fired_OF_i_A48] &&
	boolState[relevant_evt_OF_i_A48])) 
	{
	
		
		if (FIRE_xx23_OF_i_A48_INS_73) 
		{
			boolState[failI_OF_i_A48]  =  true;
			boolState[already_standby_OF_i_A48]  =  false;
			boolState[already_required_OF_i_A48]  =  false;
			FIRE_xx23_OF_i_A48_INS_73 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A48] == false) && (boolState[to_be_fired_OF_i_A48] &&
	boolState[relevant_evt_OF_i_A48])) 
	{
	
		
		if (FIRE_xx23_OF_i_A48_INS_74) 
		{
			boolState[already_standby_OF_i_A48]  =  false;
			boolState[already_required_OF_i_A48]  =  false;
			FIRE_xx23_OF_i_A48_INS_74 = false;
		}
	
	}
	// Occurrence xx23_OF_i_A49

	if ((boolState[failI_OF_i_A49] == false) && (boolState[to_be_fired_OF_i_A49] &&
	boolState[relevant_evt_OF_i_A49])) 
	{
	
		
		if (FIRE_xx23_OF_i_A49_INS_75) 
		{
			boolState[failI_OF_i_A49]  =  true;
			boolState[already_standby_OF_i_A49]  =  false;
			boolState[already_required_OF_i_A49]  =  false;
			FIRE_xx23_OF_i_A49_INS_75 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A49] == false) && (boolState[to_be_fired_OF_i_A49] &&
	boolState[relevant_evt_OF_i_A49])) 
	{
	
		
		if (FIRE_xx23_OF_i_A49_INS_76) 
		{
			boolState[already_standby_OF_i_A49]  =  false;
			boolState[already_required_OF_i_A49]  =  false;
			FIRE_xx23_OF_i_A49_INS_76 = false;
		}
	
	}
	// Occurrence xx23_OF_i_A50

	if ((boolState[failI_OF_i_A50] == false) && (boolState[to_be_fired_OF_i_A50] &&
	boolState[relevant_evt_OF_i_A50])) 
	{
	
		
		if (FIRE_xx23_OF_i_A50_INS_77) 
		{
			boolState[failI_OF_i_A50]  =  true;
			boolState[already_standby_OF_i_A50]  =  false;
			boolState[already_required_OF_i_A50]  =  false;
			FIRE_xx23_OF_i_A50_INS_77 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A50] == false) && (boolState[to_be_fired_OF_i_A50] &&
	boolState[relevant_evt_OF_i_A50])) 
	{
	
		
		if (FIRE_xx23_OF_i_A50_INS_78) 
		{
			boolState[already_standby_OF_i_A50]  =  false;
			boolState[already_required_OF_i_A50]  =  false;
			FIRE_xx23_OF_i_A50_INS_78 = false;
		}
	
	}
	// Occurrence xx23_OF_i_A51

	if ((boolState[failI_OF_i_A51] == false) && (boolState[to_be_fired_OF_i_A51] &&
	boolState[relevant_evt_OF_i_A51])) 
	{
	
		
		if (FIRE_xx23_OF_i_A51_INS_79) 
		{
			boolState[failI_OF_i_A51]  =  true;
			boolState[already_standby_OF_i_A51]  =  false;
			boolState[already_required_OF_i_A51]  =  false;
			FIRE_xx23_OF_i_A51_INS_79 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A51] == false) && (boolState[to_be_fired_OF_i_A51] &&
	boolState[relevant_evt_OF_i_A51])) 
	{
	
		
		if (FIRE_xx23_OF_i_A51_INS_80) 
		{
			boolState[already_standby_OF_i_A51]  =  false;
			boolState[already_required_OF_i_A51]  =  false;
			FIRE_xx23_OF_i_A51_INS_80 = false;
		}
	
	}
	// Occurrence xx23_OF_i_A52

	if ((boolState[failI_OF_i_A52] == false) && (boolState[to_be_fired_OF_i_A52] &&
	boolState[relevant_evt_OF_i_A52])) 
	{
	
		
		if (FIRE_xx23_OF_i_A52_INS_81) 
		{
			boolState[failI_OF_i_A52]  =  true;
			boolState[already_standby_OF_i_A52]  =  false;
			boolState[already_required_OF_i_A52]  =  false;
			FIRE_xx23_OF_i_A52_INS_81 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A52] == false) && (boolState[to_be_fired_OF_i_A52] &&
	boolState[relevant_evt_OF_i_A52])) 
	{
	
		
		if (FIRE_xx23_OF_i_A52_INS_82) 
		{
			boolState[already_standby_OF_i_A52]  =  false;
			boolState[already_required_OF_i_A52]  =  false;
			FIRE_xx23_OF_i_A52_INS_82 = false;
		}
	
	}
	// Occurrence xx23_OF_i_A54

	if ((boolState[failI_OF_i_A54] == false) && (boolState[to_be_fired_OF_i_A54] &&
	boolState[relevant_evt_OF_i_A54])) 
	{
	
		
		if (FIRE_xx23_OF_i_A54_INS_83) 
		{
			boolState[failI_OF_i_A54]  =  true;
			boolState[already_standby_OF_i_A54]  =  false;
			boolState[already_required_OF_i_A54]  =  false;
			FIRE_xx23_OF_i_A54_INS_83 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A54] == false) && (boolState[to_be_fired_OF_i_A54] &&
	boolState[relevant_evt_OF_i_A54])) 
	{
	
		
		if (FIRE_xx23_OF_i_A54_INS_84) 
		{
			boolState[already_standby_OF_i_A54]  =  false;
			boolState[already_required_OF_i_A54]  =  false;
			FIRE_xx23_OF_i_A54_INS_84 = false;
		}
	
	}
	// Occurrence xx23_OF_i_A55

	if ((boolState[failI_OF_i_A55] == false) && (boolState[to_be_fired_OF_i_A55] &&
	boolState[relevant_evt_OF_i_A55])) 
	{
	
		
		if (FIRE_xx23_OF_i_A55_INS_85) 
		{
			boolState[failI_OF_i_A55]  =  true;
			boolState[already_standby_OF_i_A55]  =  false;
			boolState[already_required_OF_i_A55]  =  false;
			FIRE_xx23_OF_i_A55_INS_85 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A55] == false) && (boolState[to_be_fired_OF_i_A55] &&
	boolState[relevant_evt_OF_i_A55])) 
	{
	
		
		if (FIRE_xx23_OF_i_A55_INS_86) 
		{
			boolState[already_standby_OF_i_A55]  =  false;
			boolState[already_required_OF_i_A55]  =  false;
			FIRE_xx23_OF_i_A55_INS_86 = false;
		}
	
	}
	// Occurrence xx23_OF_i_A56

	if ((boolState[failI_OF_i_A56] == false) && (boolState[to_be_fired_OF_i_A56] &&
	boolState[relevant_evt_OF_i_A56])) 
	{
	
		
		if (FIRE_xx23_OF_i_A56_INS_87) 
		{
			boolState[failI_OF_i_A56]  =  true;
			boolState[already_standby_OF_i_A56]  =  false;
			boolState[already_required_OF_i_A56]  =  false;
			FIRE_xx23_OF_i_A56_INS_87 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A56] == false) && (boolState[to_be_fired_OF_i_A56] &&
	boolState[relevant_evt_OF_i_A56])) 
	{
	
		
		if (FIRE_xx23_OF_i_A56_INS_88) 
		{
			boolState[already_standby_OF_i_A56]  =  false;
			boolState[already_required_OF_i_A56]  =  false;
			FIRE_xx23_OF_i_A56_INS_88 = false;
		}
	
	}
	// Occurrence xx23_OF_i_A57

	if ((boolState[failI_OF_i_A57] == false) && (boolState[to_be_fired_OF_i_A57] &&
	boolState[relevant_evt_OF_i_A57])) 
	{
	
		
		if (FIRE_xx23_OF_i_A57_INS_89) 
		{
			boolState[failI_OF_i_A57]  =  true;
			boolState[already_standby_OF_i_A57]  =  false;
			boolState[already_required_OF_i_A57]  =  false;
			FIRE_xx23_OF_i_A57_INS_89 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A57] == false) && (boolState[to_be_fired_OF_i_A57] &&
	boolState[relevant_evt_OF_i_A57])) 
	{
	
		
		if (FIRE_xx23_OF_i_A57_INS_90) 
		{
			boolState[already_standby_OF_i_A57]  =  false;
			boolState[already_required_OF_i_A57]  =  false;
			FIRE_xx23_OF_i_A57_INS_90 = false;
		}
	
	}
	// Occurrence xx23_OF_i_A58

	if ((boolState[failI_OF_i_A58] == false) && (boolState[to_be_fired_OF_i_A58] &&
	boolState[relevant_evt_OF_i_A58])) 
	{
	
		
		if (FIRE_xx23_OF_i_A58_INS_91) 
		{
			boolState[failI_OF_i_A58]  =  true;
			boolState[already_standby_OF_i_A58]  =  false;
			boolState[already_required_OF_i_A58]  =  false;
			FIRE_xx23_OF_i_A58_INS_91 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A58] == false) && (boolState[to_be_fired_OF_i_A58] &&
	boolState[relevant_evt_OF_i_A58])) 
	{
	
		
		if (FIRE_xx23_OF_i_A58_INS_92) 
		{
			boolState[already_standby_OF_i_A58]  =  false;
			boolState[already_required_OF_i_A58]  =  false;
			FIRE_xx23_OF_i_A58_INS_92 = false;
		}
	
	}
	// Occurrence xx23_OF_i_A59

	if ((boolState[failI_OF_i_A59] == false) && (boolState[to_be_fired_OF_i_A59] &&
	boolState[relevant_evt_OF_i_A59])) 
	{
	
		
		if (FIRE_xx23_OF_i_A59_INS_93) 
		{
			boolState[failI_OF_i_A59]  =  true;
			boolState[already_standby_OF_i_A59]  =  false;
			boolState[already_required_OF_i_A59]  =  false;
			FIRE_xx23_OF_i_A59_INS_93 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A59] == false) && (boolState[to_be_fired_OF_i_A59] &&
	boolState[relevant_evt_OF_i_A59])) 
	{
	
		
		if (FIRE_xx23_OF_i_A59_INS_94) 
		{
			boolState[already_standby_OF_i_A59]  =  false;
			boolState[already_required_OF_i_A59]  =  false;
			FIRE_xx23_OF_i_A59_INS_94 = false;
		}
	
	}
	// Occurrence xx23_OF_i_A61

	if ((boolState[failI_OF_i_A61] == false) && (boolState[to_be_fired_OF_i_A61] &&
	boolState[relevant_evt_OF_i_A61])) 
	{
	
		
		if (FIRE_xx23_OF_i_A61_INS_95) 
		{
			boolState[failI_OF_i_A61]  =  true;
			boolState[already_standby_OF_i_A61]  =  false;
			boolState[already_required_OF_i_A61]  =  false;
			FIRE_xx23_OF_i_A61_INS_95 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A61] == false) && (boolState[to_be_fired_OF_i_A61] &&
	boolState[relevant_evt_OF_i_A61])) 
	{
	
		
		if (FIRE_xx23_OF_i_A61_INS_96) 
		{
			boolState[already_standby_OF_i_A61]  =  false;
			boolState[already_required_OF_i_A61]  =  false;
			FIRE_xx23_OF_i_A61_INS_96 = false;
		}
	
	}
	// Occurrence xx23_OF_i_A62

	if ((boolState[failI_OF_i_A62] == false) && (boolState[to_be_fired_OF_i_A62] &&
	boolState[relevant_evt_OF_i_A62])) 
	{
	
		
		if (FIRE_xx23_OF_i_A62_INS_97) 
		{
			boolState[failI_OF_i_A62]  =  true;
			boolState[already_standby_OF_i_A62]  =  false;
			boolState[already_required_OF_i_A62]  =  false;
			FIRE_xx23_OF_i_A62_INS_97 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A62] == false) && (boolState[to_be_fired_OF_i_A62] &&
	boolState[relevant_evt_OF_i_A62])) 
	{
	
		
		if (FIRE_xx23_OF_i_A62_INS_98) 
		{
			boolState[already_standby_OF_i_A62]  =  false;
			boolState[already_required_OF_i_A62]  =  false;
			FIRE_xx23_OF_i_A62_INS_98 = false;
		}
	
	}
	// Occurrence xx23_OF_i_A63

	if ((boolState[failI_OF_i_A63] == false) && (boolState[to_be_fired_OF_i_A63] &&
	boolState[relevant_evt_OF_i_A63])) 
	{
	
		
		if (FIRE_xx23_OF_i_A63_INS_99) 
		{
			boolState[failI_OF_i_A63]  =  true;
			boolState[already_standby_OF_i_A63]  =  false;
			boolState[already_required_OF_i_A63]  =  false;
			FIRE_xx23_OF_i_A63_INS_99 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A63] == false) && (boolState[to_be_fired_OF_i_A63] &&
	boolState[relevant_evt_OF_i_A63])) 
	{
	
		
		if (FIRE_xx23_OF_i_A63_INS_100) 
		{
			boolState[already_standby_OF_i_A63]  =  false;
			boolState[already_required_OF_i_A63]  =  false;
			FIRE_xx23_OF_i_A63_INS_100 = false;
		}
	
	}
	// Occurrence xx23_OF_i_A64

	if ((boolState[failI_OF_i_A64] == false) && (boolState[to_be_fired_OF_i_A64] &&
	boolState[relevant_evt_OF_i_A64])) 
	{
	
		
		if (FIRE_xx23_OF_i_A64_INS_101) 
		{
			boolState[failI_OF_i_A64]  =  true;
			boolState[already_standby_OF_i_A64]  =  false;
			boolState[already_required_OF_i_A64]  =  false;
			FIRE_xx23_OF_i_A64_INS_101 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A64] == false) && (boolState[to_be_fired_OF_i_A64] &&
	boolState[relevant_evt_OF_i_A64])) 
	{
	
		
		if (FIRE_xx23_OF_i_A64_INS_102) 
		{
			boolState[already_standby_OF_i_A64]  =  false;
			boolState[already_required_OF_i_A64]  =  false;
			FIRE_xx23_OF_i_A64_INS_102 = false;
		}
	
	}
	// Occurrence xx23_OF_i_A65

	if ((boolState[failI_OF_i_A65] == false) && (boolState[to_be_fired_OF_i_A65] &&
	boolState[relevant_evt_OF_i_A65])) 
	{
	
		
		if (FIRE_xx23_OF_i_A65_INS_103) 
		{
			boolState[failI_OF_i_A65]  =  true;
			boolState[already_standby_OF_i_A65]  =  false;
			boolState[already_required_OF_i_A65]  =  false;
			FIRE_xx23_OF_i_A65_INS_103 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A65] == false) && (boolState[to_be_fired_OF_i_A65] &&
	boolState[relevant_evt_OF_i_A65])) 
	{
	
		
		if (FIRE_xx23_OF_i_A65_INS_104) 
		{
			boolState[already_standby_OF_i_A65]  =  false;
			boolState[already_required_OF_i_A65]  =  false;
			FIRE_xx23_OF_i_A65_INS_104 = false;
		}
	
	}
	// Occurrence xx23_OF_i_A66

	if ((boolState[failI_OF_i_A66] == false) && (boolState[to_be_fired_OF_i_A66] &&
	boolState[relevant_evt_OF_i_A66])) 
	{
	
		
		if (FIRE_xx23_OF_i_A66_INS_105) 
		{
			boolState[failI_OF_i_A66]  =  true;
			boolState[already_standby_OF_i_A66]  =  false;
			boolState[already_required_OF_i_A66]  =  false;
			FIRE_xx23_OF_i_A66_INS_105 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A66] == false) && (boolState[to_be_fired_OF_i_A66] &&
	boolState[relevant_evt_OF_i_A66])) 
	{
	
		
		if (FIRE_xx23_OF_i_A66_INS_106) 
		{
			boolState[already_standby_OF_i_A66]  =  false;
			boolState[already_required_OF_i_A66]  =  false;
			FIRE_xx23_OF_i_A66_INS_106 = false;
		}
	
	}
	// Occurrence xx23_OF_i_A68

	if ((boolState[failI_OF_i_A68] == false) && (boolState[to_be_fired_OF_i_A68] &&
	boolState[relevant_evt_OF_i_A68])) 
	{
	
		
		if (FIRE_xx23_OF_i_A68_INS_107) 
		{
			boolState[failI_OF_i_A68]  =  true;
			boolState[already_standby_OF_i_A68]  =  false;
			boolState[already_required_OF_i_A68]  =  false;
			FIRE_xx23_OF_i_A68_INS_107 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A68] == false) && (boolState[to_be_fired_OF_i_A68] &&
	boolState[relevant_evt_OF_i_A68])) 
	{
	
		
		if (FIRE_xx23_OF_i_A68_INS_108) 
		{
			boolState[already_standby_OF_i_A68]  =  false;
			boolState[already_required_OF_i_A68]  =  false;
			FIRE_xx23_OF_i_A68_INS_108 = false;
		}
	
	}
	// Occurrence xx23_OF_i_A69

	if ((boolState[failI_OF_i_A69] == false) && (boolState[to_be_fired_OF_i_A69] &&
	boolState[relevant_evt_OF_i_A69])) 
	{
	
		
		if (FIRE_xx23_OF_i_A69_INS_109) 
		{
			boolState[failI_OF_i_A69]  =  true;
			boolState[already_standby_OF_i_A69]  =  false;
			boolState[already_required_OF_i_A69]  =  false;
			FIRE_xx23_OF_i_A69_INS_109 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A69] == false) && (boolState[to_be_fired_OF_i_A69] &&
	boolState[relevant_evt_OF_i_A69])) 
	{
	
		
		if (FIRE_xx23_OF_i_A69_INS_110) 
		{
			boolState[already_standby_OF_i_A69]  =  false;
			boolState[already_required_OF_i_A69]  =  false;
			FIRE_xx23_OF_i_A69_INS_110 = false;
		}
	
	}
	// Occurrence xx23_OF_i_A70

	if ((boolState[failI_OF_i_A70] == false) && (boolState[to_be_fired_OF_i_A70] &&
	boolState[relevant_evt_OF_i_A70])) 
	{
	
		
		if (FIRE_xx23_OF_i_A70_INS_111) 
		{
			boolState[failI_OF_i_A70]  =  true;
			boolState[already_standby_OF_i_A70]  =  false;
			boolState[already_required_OF_i_A70]  =  false;
			FIRE_xx23_OF_i_A70_INS_111 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A70] == false) && (boolState[to_be_fired_OF_i_A70] &&
	boolState[relevant_evt_OF_i_A70])) 
	{
	
		
		if (FIRE_xx23_OF_i_A70_INS_112) 
		{
			boolState[already_standby_OF_i_A70]  =  false;
			boolState[already_required_OF_i_A70]  =  false;
			FIRE_xx23_OF_i_A70_INS_112 = false;
		}
	
	}
	// Occurrence xx23_OF_i_A71

	if ((boolState[failI_OF_i_A71] == false) && (boolState[to_be_fired_OF_i_A71] &&
	boolState[relevant_evt_OF_i_A71])) 
	{
	
		
		if (FIRE_xx23_OF_i_A71_INS_113) 
		{
			boolState[failI_OF_i_A71]  =  true;
			boolState[already_standby_OF_i_A71]  =  false;
			boolState[already_required_OF_i_A71]  =  false;
			FIRE_xx23_OF_i_A71_INS_113 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A71] == false) && (boolState[to_be_fired_OF_i_A71] &&
	boolState[relevant_evt_OF_i_A71])) 
	{
	
		
		if (FIRE_xx23_OF_i_A71_INS_114) 
		{
			boolState[already_standby_OF_i_A71]  =  false;
			boolState[already_required_OF_i_A71]  =  false;
			FIRE_xx23_OF_i_A71_INS_114 = false;
		}
	
	}
	// Occurrence xx23_OF_i_A72

	if ((boolState[failI_OF_i_A72] == false) && (boolState[to_be_fired_OF_i_A72] &&
	boolState[relevant_evt_OF_i_A72])) 
	{
	
		
		if (FIRE_xx23_OF_i_A72_INS_115) 
		{
			boolState[failI_OF_i_A72]  =  true;
			boolState[already_standby_OF_i_A72]  =  false;
			boolState[already_required_OF_i_A72]  =  false;
			FIRE_xx23_OF_i_A72_INS_115 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A72] == false) && (boolState[to_be_fired_OF_i_A72] &&
	boolState[relevant_evt_OF_i_A72])) 
	{
	
		
		if (FIRE_xx23_OF_i_A72_INS_116) 
		{
			boolState[already_standby_OF_i_A72]  =  false;
			boolState[already_required_OF_i_A72]  =  false;
			FIRE_xx23_OF_i_A72_INS_116 = false;
		}
	
	}
	// Occurrence xx23_OF_i_A73

	if ((boolState[failI_OF_i_A73] == false) && (boolState[to_be_fired_OF_i_A73] &&
	boolState[relevant_evt_OF_i_A73])) 
	{
	
		
		if (FIRE_xx23_OF_i_A73_INS_117) 
		{
			boolState[failI_OF_i_A73]  =  true;
			boolState[already_standby_OF_i_A73]  =  false;
			boolState[already_required_OF_i_A73]  =  false;
			FIRE_xx23_OF_i_A73_INS_117 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A73] == false) && (boolState[to_be_fired_OF_i_A73] &&
	boolState[relevant_evt_OF_i_A73])) 
	{
	
		
		if (FIRE_xx23_OF_i_A73_INS_118) 
		{
			boolState[already_standby_OF_i_A73]  =  false;
			boolState[already_required_OF_i_A73]  =  false;
			FIRE_xx23_OF_i_A73_INS_118 = false;
		}
	
	}
	// Occurrence xx23_OF_i_A74

	if ((boolState[failI_OF_i_A74] == false) && (boolState[to_be_fired_OF_i_A74] &&
	boolState[relevant_evt_OF_i_A74])) 
	{
	
		
		if (FIRE_xx23_OF_i_A74_INS_119) 
		{
			boolState[failI_OF_i_A74]  =  true;
			boolState[already_standby_OF_i_A74]  =  false;
			boolState[already_required_OF_i_A74]  =  false;
			FIRE_xx23_OF_i_A74_INS_119 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A74] == false) && (boolState[to_be_fired_OF_i_A74] &&
	boolState[relevant_evt_OF_i_A74])) 
	{
	
		
		if (FIRE_xx23_OF_i_A74_INS_120) 
		{
			boolState[already_standby_OF_i_A74]  =  false;
			boolState[already_required_OF_i_A74]  =  false;
			FIRE_xx23_OF_i_A74_INS_120 = false;
		}
	
	}
	// Occurrence xx23_OF_i_A75

	if ((boolState[failI_OF_i_A75] == false) && (boolState[to_be_fired_OF_i_A75] &&
	boolState[relevant_evt_OF_i_A75])) 
	{
	
		
		if (FIRE_xx23_OF_i_A75_INS_121) 
		{
			boolState[failI_OF_i_A75]  =  true;
			boolState[already_standby_OF_i_A75]  =  false;
			boolState[already_required_OF_i_A75]  =  false;
			FIRE_xx23_OF_i_A75_INS_121 = false;
		}
	
	}
	if ((boolState[failI_OF_i_A75] == false) && (boolState[to_be_fired_OF_i_A75] &&
	boolState[relevant_evt_OF_i_A75])) 
	{
	
		
		if (FIRE_xx23_OF_i_A75_INS_122) 
		{
			boolState[already_standby_OF_i_A75]  =  false;
			boolState[already_required_OF_i_A75]  =  false;
			FIRE_xx23_OF_i_A75_INS_122 = false;
		}
	
	}
}

std::vector<std::tuple<int, double, std::string, int>> storm::figaro::FigaroProgram_vgs_1_Trim_article_No_repair::showFireableOccurrences()
{
	std::vector<std::tuple<int, double, std::string, int>> list = {};
	//cout <<"\n==================== List of fireable occurrences :  ====================" << endl;

	if ((boolState[failI_OF_i_A48] == false) && (boolState[to_be_fired_OF_i_A48] &&	boolState[relevant_evt_OF_i_A48]))
	{
		//cout << "73 :  INS_SUB_COUNT (1) |FAULT | failI  LABEL \"instantaneous failure i_A48\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A48]  =  TRUE,already_standby_OF_i_A48  =  FALSE,already_required_OF_i_A48  =  FALSE" << endl;
		list.push_back(make_tuple(73, 1, "INS", 1));
	}
	if ((boolState[failI_OF_i_A48] == false) && (boolState[to_be_fired_OF_i_A48] &&	boolState[relevant_evt_OF_i_A48]))
	{
		//cout << "74 :  INS_SUB_COUNT (1) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A48]  =  FALSE,already_required_OF_i_A48  =  FALSE" << endl;
		list.push_back(make_tuple(74, 0, "INS", 1));
	}
	if ((boolState[failI_OF_i_A49] == false) && (boolState[to_be_fired_OF_i_A49] &&	boolState[relevant_evt_OF_i_A49]))
	{
		//cout << "75 :  INS_SUB_COUNT (2) |FAULT | failI  LABEL \"instantaneous failure i_A49\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A49]  =  TRUE,already_standby_OF_i_A49  =  FALSE,already_required_OF_i_A49  =  FALSE" << endl;
		list.push_back(make_tuple(75, 1, "INS", 2));
	}
	if ((boolState[failI_OF_i_A49] == false) && (boolState[to_be_fired_OF_i_A49] &&	boolState[relevant_evt_OF_i_A49]))
	{
		//cout << "76 :  INS_SUB_COUNT (2) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A49]  =  FALSE,already_required_OF_i_A49  =  FALSE" << endl;
		list.push_back(make_tuple(76, 0, "INS", 2));
	}
	if ((boolState[failI_OF_i_A50] == false) && (boolState[to_be_fired_OF_i_A50] &&	boolState[relevant_evt_OF_i_A50]))
	{
		//cout << "77 :  INS_SUB_COUNT (3) |FAULT | failI  LABEL \"instantaneous failure i_A50\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A50]  =  TRUE,already_standby_OF_i_A50  =  FALSE,already_required_OF_i_A50  =  FALSE" << endl;
		list.push_back(make_tuple(77, 1, "INS", 3));
	}
	if ((boolState[failI_OF_i_A50] == false) && (boolState[to_be_fired_OF_i_A50] &&	boolState[relevant_evt_OF_i_A50]))
	{
		//cout << "78 :  INS_SUB_COUNT (3) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A50]  =  FALSE,already_required_OF_i_A50  =  FALSE" << endl;
		list.push_back(make_tuple(78, 0, "INS", 3));
	}
	if ((boolState[failI_OF_i_A51] == false) && (boolState[to_be_fired_OF_i_A51] &&	boolState[relevant_evt_OF_i_A51]))
	{
		//cout << "79 :  INS_SUB_COUNT (4) |FAULT | failI  LABEL \"instantaneous failure i_A51\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A51]  =  TRUE,already_standby_OF_i_A51  =  FALSE,already_required_OF_i_A51  =  FALSE" << endl;
		list.push_back(make_tuple(79, 1, "INS", 4));
	}
	if ((boolState[failI_OF_i_A51] == false) && (boolState[to_be_fired_OF_i_A51] &&	boolState[relevant_evt_OF_i_A51]))
	{
		//cout << "80 :  INS_SUB_COUNT (4) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A51]  =  FALSE,already_required_OF_i_A51  =  FALSE" << endl;
		list.push_back(make_tuple(80, 0, "INS", 4));
	}
	if ((boolState[failI_OF_i_A52] == false) && (boolState[to_be_fired_OF_i_A52] &&	boolState[relevant_evt_OF_i_A52]))
	{
		//cout << "81 :  INS_SUB_COUNT (5) |FAULT | failI  LABEL \"instantaneous failure i_A52\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A52]  =  TRUE,already_standby_OF_i_A52  =  FALSE,already_required_OF_i_A52  =  FALSE" << endl;
		list.push_back(make_tuple(81, 1, "INS", 5));
	}
	if ((boolState[failI_OF_i_A52] == false) && (boolState[to_be_fired_OF_i_A52] &&	boolState[relevant_evt_OF_i_A52]))
	{
		//cout << "82 :  INS_SUB_COUNT (5) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A52]  =  FALSE,already_required_OF_i_A52  =  FALSE" << endl;
		list.push_back(make_tuple(82, 0, "INS", 5));
	}
	if ((boolState[failI_OF_i_A54] == false) && (boolState[to_be_fired_OF_i_A54] &&	boolState[relevant_evt_OF_i_A54]))
	{
		//cout << "83 :  INS_SUB_COUNT (6) |FAULT | failI  LABEL \"instantaneous failure i_A54\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A54]  =  TRUE,already_standby_OF_i_A54  =  FALSE,already_required_OF_i_A54  =  FALSE" << endl;
		list.push_back(make_tuple(83, 1, "INS", 6));
	}
	if ((boolState[failI_OF_i_A54] == false) && (boolState[to_be_fired_OF_i_A54] &&	boolState[relevant_evt_OF_i_A54]))
	{
		//cout << "84 :  INS_SUB_COUNT (6) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A54]  =  FALSE,already_required_OF_i_A54  =  FALSE" << endl;
		list.push_back(make_tuple(84, 0, "INS", 6));
	}
	if ((boolState[failI_OF_i_A55] == false) && (boolState[to_be_fired_OF_i_A55] &&	boolState[relevant_evt_OF_i_A55]))
	{
		//cout << "85 :  INS_SUB_COUNT (7) |FAULT | failI  LABEL \"instantaneous failure i_A55\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A55]  =  TRUE,already_standby_OF_i_A55  =  FALSE,already_required_OF_i_A55  =  FALSE" << endl;
		list.push_back(make_tuple(85, 1, "INS", 7));
	}
	if ((boolState[failI_OF_i_A55] == false) && (boolState[to_be_fired_OF_i_A55] &&	boolState[relevant_evt_OF_i_A55]))
	{
		//cout << "86 :  INS_SUB_COUNT (7) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A55]  =  FALSE,already_required_OF_i_A55  =  FALSE" << endl;
		list.push_back(make_tuple(86, 0, "INS", 7));
	}
	if ((boolState[failI_OF_i_A56] == false) && (boolState[to_be_fired_OF_i_A56] &&	boolState[relevant_evt_OF_i_A56]))
	{
		//cout << "87 :  INS_SUB_COUNT (8) |FAULT | failI  LABEL \"instantaneous failure i_A56\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A56]  =  TRUE,already_standby_OF_i_A56  =  FALSE,already_required_OF_i_A56  =  FALSE" << endl;
		list.push_back(make_tuple(87, 1, "INS", 8));
	}
	if ((boolState[failI_OF_i_A56] == false) && (boolState[to_be_fired_OF_i_A56] &&	boolState[relevant_evt_OF_i_A56]))
	{
		//cout << "88 :  INS_SUB_COUNT (8) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A56]  =  FALSE,already_required_OF_i_A56  =  FALSE" << endl;
		list.push_back(make_tuple(88, 0, "INS", 8));
	}
	if ((boolState[failI_OF_i_A57] == false) && (boolState[to_be_fired_OF_i_A57] &&	boolState[relevant_evt_OF_i_A57]))
	{
		//cout << "89 :  INS_SUB_COUNT (9) |FAULT | failI  LABEL \"instantaneous failure i_A57\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A57]  =  TRUE,already_standby_OF_i_A57  =  FALSE,already_required_OF_i_A57  =  FALSE" << endl;
		list.push_back(make_tuple(89, 1, "INS", 9));
	}
	if ((boolState[failI_OF_i_A57] == false) && (boolState[to_be_fired_OF_i_A57] &&	boolState[relevant_evt_OF_i_A57]))
	{
		//cout << "90 :  INS_SUB_COUNT (9) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A57]  =  FALSE,already_required_OF_i_A57  =  FALSE" << endl;
		list.push_back(make_tuple(90, 0, "INS", 9));
	}
	if ((boolState[failI_OF_i_A58] == false) && (boolState[to_be_fired_OF_i_A58] &&	boolState[relevant_evt_OF_i_A58]))
	{
		//cout << "91 :  INS_SUB_COUNT (10) |FAULT | failI  LABEL \"instantaneous failure i_A58\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A58]  =  TRUE,already_standby_OF_i_A58  =  FALSE,already_required_OF_i_A58  =  FALSE" << endl;
		list.push_back(make_tuple(91, 1, "INS", 10));
	}
	if ((boolState[failI_OF_i_A58] == false) && (boolState[to_be_fired_OF_i_A58] &&	boolState[relevant_evt_OF_i_A58]))
	{
		//cout << "92 :  INS_SUB_COUNT (10) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A58]  =  FALSE,already_required_OF_i_A58  =  FALSE" << endl;
		list.push_back(make_tuple(92, 0, "INS", 10));
	}
	if ((boolState[failI_OF_i_A59] == false) && (boolState[to_be_fired_OF_i_A59] &&	boolState[relevant_evt_OF_i_A59]))
	{
		//cout << "93 :  INS_SUB_COUNT (11) |FAULT | failI  LABEL \"instantaneous failure i_A59\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A59]  =  TRUE,already_standby_OF_i_A59  =  FALSE,already_required_OF_i_A59  =  FALSE" << endl;
		list.push_back(make_tuple(93, 1, "INS", 11));
	}
	if ((boolState[failI_OF_i_A59] == false) && (boolState[to_be_fired_OF_i_A59] &&	boolState[relevant_evt_OF_i_A59]))
	{
		//cout << "94 :  INS_SUB_COUNT (11) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A59]  =  FALSE,already_required_OF_i_A59  =  FALSE" << endl;
		list.push_back(make_tuple(94, 0, "INS", 11));
	}
	if ((boolState[failI_OF_i_A61] == false) && (boolState[to_be_fired_OF_i_A61] &&	boolState[relevant_evt_OF_i_A61]))
	{
		//cout << "95 :  INS_SUB_COUNT (12) |FAULT | failI  LABEL \"instantaneous failure i_A61\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A61]  =  TRUE,already_standby_OF_i_A61  =  FALSE,already_required_OF_i_A61  =  FALSE" << endl;
		list.push_back(make_tuple(95, 1, "INS", 12));
	}
	if ((boolState[failI_OF_i_A61] == false) && (boolState[to_be_fired_OF_i_A61] &&	boolState[relevant_evt_OF_i_A61]))
	{
		//cout << "96 :  INS_SUB_COUNT (12) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A61]  =  FALSE,already_required_OF_i_A61  =  FALSE" << endl;
		list.push_back(make_tuple(96, 0, "INS", 12));
	}
	if ((boolState[failI_OF_i_A62] == false) && (boolState[to_be_fired_OF_i_A62] &&	boolState[relevant_evt_OF_i_A62]))
	{
		//cout << "97 :  INS_SUB_COUNT (13) |FAULT | failI  LABEL \"instantaneous failure i_A62\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A62]  =  TRUE,already_standby_OF_i_A62  =  FALSE,already_required_OF_i_A62  =  FALSE" << endl;
		list.push_back(make_tuple(97, 1, "INS", 13));
	}
	if ((boolState[failI_OF_i_A62] == false) && (boolState[to_be_fired_OF_i_A62] &&	boolState[relevant_evt_OF_i_A62]))
	{
		//cout << "98 :  INS_SUB_COUNT (13) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A62]  =  FALSE,already_required_OF_i_A62  =  FALSE" << endl;
		list.push_back(make_tuple(98, 0, "INS", 13));
	}
	if ((boolState[failI_OF_i_A63] == false) && (boolState[to_be_fired_OF_i_A63] &&	boolState[relevant_evt_OF_i_A63]))
	{
		//cout << "99 :  INS_SUB_COUNT (14) |FAULT | failI  LABEL \"instantaneous failure i_A63\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A63]  =  TRUE,already_standby_OF_i_A63  =  FALSE,already_required_OF_i_A63  =  FALSE" << endl;
		list.push_back(make_tuple(99, 1, "INS", 14));
	}
	if ((boolState[failI_OF_i_A63] == false) && (boolState[to_be_fired_OF_i_A63] &&	boolState[relevant_evt_OF_i_A63]))
	{
		//cout << "100 :  INS_SUB_COUNT (14) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A63]  =  FALSE,already_required_OF_i_A63  =  FALSE" << endl;
		list.push_back(make_tuple(100, 0, "INS", 14));
	}
	if ((boolState[failI_OF_i_A64] == false) && (boolState[to_be_fired_OF_i_A64] &&	boolState[relevant_evt_OF_i_A64]))
	{
		//cout << "101 :  INS_SUB_COUNT (15) |FAULT | failI  LABEL \"instantaneous failure i_A64\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A64]  =  TRUE,already_standby_OF_i_A64  =  FALSE,already_required_OF_i_A64  =  FALSE" << endl;
		list.push_back(make_tuple(101, 1, "INS", 15));
	}
	if ((boolState[failI_OF_i_A64] == false) && (boolState[to_be_fired_OF_i_A64] &&	boolState[relevant_evt_OF_i_A64]))
	{
		//cout << "102 :  INS_SUB_COUNT (15) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A64]  =  FALSE,already_required_OF_i_A64  =  FALSE" << endl;
		list.push_back(make_tuple(102, 0, "INS", 15));
	}
	if ((boolState[failI_OF_i_A65] == false) && (boolState[to_be_fired_OF_i_A65] &&	boolState[relevant_evt_OF_i_A65]))
	{
		//cout << "103 :  INS_SUB_COUNT (16) |FAULT | failI  LABEL \"instantaneous failure i_A65\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A65]  =  TRUE,already_standby_OF_i_A65  =  FALSE,already_required_OF_i_A65  =  FALSE" << endl;
		list.push_back(make_tuple(103, 1, "INS", 16));
	}
	if ((boolState[failI_OF_i_A65] == false) && (boolState[to_be_fired_OF_i_A65] &&	boolState[relevant_evt_OF_i_A65]))
	{
		//cout << "104 :  INS_SUB_COUNT (16) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A65]  =  FALSE,already_required_OF_i_A65  =  FALSE" << endl;
		list.push_back(make_tuple(104, 0, "INS", 16));
	}
	if ((boolState[failI_OF_i_A66] == false) && (boolState[to_be_fired_OF_i_A66] &&	boolState[relevant_evt_OF_i_A66]))
	{
		//cout << "105 :  INS_SUB_COUNT (17) |FAULT | failI  LABEL \"instantaneous failure i_A66\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A66]  =  TRUE,already_standby_OF_i_A66  =  FALSE,already_required_OF_i_A66  =  FALSE" << endl;
		list.push_back(make_tuple(105, 1, "INS", 17));
	}
	if ((boolState[failI_OF_i_A66] == false) && (boolState[to_be_fired_OF_i_A66] &&	boolState[relevant_evt_OF_i_A66]))
	{
		//cout << "106 :  INS_SUB_COUNT (17) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A66]  =  FALSE,already_required_OF_i_A66  =  FALSE" << endl;
		list.push_back(make_tuple(106, 0, "INS", 17));
	}
	if ((boolState[failI_OF_i_A68] == false) && (boolState[to_be_fired_OF_i_A68] &&	boolState[relevant_evt_OF_i_A68]))
	{
		//cout << "107 :  INS_SUB_COUNT (18) |FAULT | failI  LABEL \"instantaneous failure i_A68\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A68]  =  TRUE,already_standby_OF_i_A68  =  FALSE,already_required_OF_i_A68  =  FALSE" << endl;
		list.push_back(make_tuple(107, 1, "INS", 18));
	}
	if ((boolState[failI_OF_i_A68] == false) && (boolState[to_be_fired_OF_i_A68] &&	boolState[relevant_evt_OF_i_A68]))
	{
		//cout << "108 :  INS_SUB_COUNT (18) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A68]  =  FALSE,already_required_OF_i_A68  =  FALSE" << endl;
		list.push_back(make_tuple(108, 0, "INS", 18));
	}
	if ((boolState[failI_OF_i_A69] == false) && (boolState[to_be_fired_OF_i_A69] &&	boolState[relevant_evt_OF_i_A69]))
	{
		//cout << "109 :  INS_SUB_COUNT (19) |FAULT | failI  LABEL \"instantaneous failure i_A69\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A69]  =  TRUE,already_standby_OF_i_A69  =  FALSE,already_required_OF_i_A69  =  FALSE" << endl;
		list.push_back(make_tuple(109, 1, "INS", 19));
	}
	if ((boolState[failI_OF_i_A69] == false) && (boolState[to_be_fired_OF_i_A69] &&	boolState[relevant_evt_OF_i_A69]))
	{
		//cout << "110 :  INS_SUB_COUNT (19) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A69]  =  FALSE,already_required_OF_i_A69  =  FALSE" << endl;
		list.push_back(make_tuple(110, 0, "INS", 19));
	}
	if ((boolState[failI_OF_i_A70] == false) && (boolState[to_be_fired_OF_i_A70] &&	boolState[relevant_evt_OF_i_A70]))
	{
		//cout << "111 :  INS_SUB_COUNT (20) |FAULT | failI  LABEL \"instantaneous failure i_A70\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A70]  =  TRUE,already_standby_OF_i_A70  =  FALSE,already_required_OF_i_A70  =  FALSE" << endl;
		list.push_back(make_tuple(111, 1, "INS", 20));
	}
	if ((boolState[failI_OF_i_A70] == false) && (boolState[to_be_fired_OF_i_A70] &&	boolState[relevant_evt_OF_i_A70]))
	{
		//cout << "112 :  INS_SUB_COUNT (20) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A70]  =  FALSE,already_required_OF_i_A70  =  FALSE" << endl;
		list.push_back(make_tuple(112, 0, "INS", 20));
	}
	if ((boolState[failI_OF_i_A71] == false) && (boolState[to_be_fired_OF_i_A71] &&	boolState[relevant_evt_OF_i_A71]))
	{
		//cout << "113 :  INS_SUB_COUNT (21) |FAULT | failI  LABEL \"instantaneous failure i_A71\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A71]  =  TRUE,already_standby_OF_i_A71  =  FALSE,already_required_OF_i_A71  =  FALSE" << endl;
		list.push_back(make_tuple(113, 1, "INS", 21));
	}
	if ((boolState[failI_OF_i_A71] == false) && (boolState[to_be_fired_OF_i_A71] &&	boolState[relevant_evt_OF_i_A71]))
	{
		//cout << "114 :  INS_SUB_COUNT (21) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A71]  =  FALSE,already_required_OF_i_A71  =  FALSE" << endl;
		list.push_back(make_tuple(114, 0, "INS", 21));
	}
	if ((boolState[failI_OF_i_A72] == false) && (boolState[to_be_fired_OF_i_A72] &&	boolState[relevant_evt_OF_i_A72]))
	{
		//cout << "115 :  INS_SUB_COUNT (22) |FAULT | failI  LABEL \"instantaneous failure i_A72\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A72]  =  TRUE,already_standby_OF_i_A72  =  FALSE,already_required_OF_i_A72  =  FALSE" << endl;
		list.push_back(make_tuple(115, 1, "INS", 22));
	}
	if ((boolState[failI_OF_i_A72] == false) && (boolState[to_be_fired_OF_i_A72] &&	boolState[relevant_evt_OF_i_A72]))
	{
		//cout << "116 :  INS_SUB_COUNT (22) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A72]  =  FALSE,already_required_OF_i_A72  =  FALSE" << endl;
		list.push_back(make_tuple(116, 0, "INS", 22));
	}
	if ((boolState[failI_OF_i_A73] == false) && (boolState[to_be_fired_OF_i_A73] &&	boolState[relevant_evt_OF_i_A73]))
	{
		//cout << "117 :  INS_SUB_COUNT (23) |FAULT | failI  LABEL \"instantaneous failure i_A73\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A73]  =  TRUE,already_standby_OF_i_A73  =  FALSE,already_required_OF_i_A73  =  FALSE" << endl;
		list.push_back(make_tuple(117, 1, "INS", 23));
	}
	if ((boolState[failI_OF_i_A73] == false) && (boolState[to_be_fired_OF_i_A73] &&	boolState[relevant_evt_OF_i_A73]))
	{
		//cout << "118 :  INS_SUB_COUNT (23) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A73]  =  FALSE,already_required_OF_i_A73  =  FALSE" << endl;
		list.push_back(make_tuple(118, 0, "INS", 23));
	}
	if ((boolState[failI_OF_i_A74] == false) && (boolState[to_be_fired_OF_i_A74] &&	boolState[relevant_evt_OF_i_A74]))
	{
		//cout << "119 :  INS_SUB_COUNT (24) |FAULT | failI  LABEL \"instantaneous failure i_A74\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A74]  =  TRUE,already_standby_OF_i_A74  =  FALSE,already_required_OF_i_A74  =  FALSE" << endl;
		list.push_back(make_tuple(119, 1, "INS", 24));
	}
	if ((boolState[failI_OF_i_A74] == false) && (boolState[to_be_fired_OF_i_A74] &&	boolState[relevant_evt_OF_i_A74]))
	{
		//cout << "120 :  INS_SUB_COUNT (24) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A74]  =  FALSE,already_required_OF_i_A74  =  FALSE" << endl;
		list.push_back(make_tuple(120, 0, "INS", 24));
	}
	if ((boolState[failI_OF_i_A75] == false) && (boolState[to_be_fired_OF_i_A75] &&	boolState[relevant_evt_OF_i_A75]))
	{
		//cout << "121 :  INS_SUB_COUNT (25) |FAULT | failI  LABEL \"instantaneous failure i_A75\" | DIST INS (1) | INDUCING boolState[failI_OF_i_A75]  =  TRUE,already_standby_OF_i_A75  =  FALSE,already_required_OF_i_A75  =  FALSE" << endl;
		list.push_back(make_tuple(121, 1, "INS", 25));
	}
	if ((boolState[failI_OF_i_A75] == false) && (boolState[to_be_fired_OF_i_A75] &&	boolState[relevant_evt_OF_i_A75]))
	{
		//cout << "122 :  INS_SUB_COUNT (25) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_i_A75]  =  FALSE,already_required_OF_i_A75  =  FALSE" << endl;
		list.push_back(make_tuple(122, 0, "INS", 25));
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
     
	if ((boolState[failF_OF_A100] == false) && (boolState[required_OF_A100] && boolState[relevant_evt_OF_A100]))
	{
		//cout << "0 : xx10_OF_A100 : FAULT failF  LABEL \"failure in operation A100\"  DIST EXP (1e-06)  INDUCING boolState[failF_OF_A100]  =  TRUE" << endl;
		list.push_back(make_tuple(0, 1e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_A101] == false) && (boolState[required_OF_A101] && boolState[relevant_evt_OF_A101]))
	{
		//cout << "1 : xx10_OF_A101 : FAULT failF  LABEL \"failure in operation A101\"  DIST EXP (1e-05)  INDUCING boolState[failF_OF_A101]  =  TRUE" << endl;
		list.push_back(make_tuple(1, 1e-05, "EXP", 0));
	}
	if ((boolState[failF_OF_A105] == false) && (boolState[required_OF_A105] && boolState[relevant_evt_OF_A105]))
	{
		//cout << "2 : xx10_OF_A105 : FAULT failF  LABEL \"failure in operation A105\"  DIST EXP (9e-05)  INDUCING boolState[failF_OF_A105]  =  TRUE" << endl;
		list.push_back(make_tuple(2, 9e-05, "EXP", 0));
	}
	if ((boolState[failF_OF_A106] == false) && (boolState[required_OF_A106] && boolState[relevant_evt_OF_A106]))
	{
		//cout << "3 : xx10_OF_A106 : FAULT failF  LABEL \"failure in operation A106\"  DIST EXP (1e-05)  INDUCING boolState[failF_OF_A106]  =  TRUE" << endl;
		list.push_back(make_tuple(3, 1e-05, "EXP", 0));
	}
	if ((boolState[failF_OF_A107] == false) && (boolState[required_OF_A107] && boolState[relevant_evt_OF_A107]))
	{
		//cout << "4 : xx10_OF_A107 : FAULT failF  LABEL \"failure in operation A107\"  DIST EXP (1e-05)  INDUCING boolState[failF_OF_A107]  =  TRUE" << endl;
		list.push_back(make_tuple(4, 1e-05, "EXP", 0));
	}
	if ((boolState[failF_OF_A110] == false) && (boolState[required_OF_A110] && boolState[relevant_evt_OF_A110]))
	{
		//cout << "5 : xx10_OF_A110 : FAULT failF  LABEL \"failure in operation A110\"  DIST EXP (9e-06)  INDUCING boolState[failF_OF_A110]  =  TRUE" << endl;
		list.push_back(make_tuple(5, 9e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_A111] == false) && (boolState[required_OF_A111] && boolState[relevant_evt_OF_A111]))
	{
		//cout << "6 : xx10_OF_A111 : FAULT failF  LABEL \"failure in operation A111\"  DIST EXP (1e-06)  INDUCING boolState[failF_OF_A111]  =  TRUE" << endl;
		list.push_back(make_tuple(6, 1e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_A112] == false) && (boolState[required_OF_A112] && boolState[relevant_evt_OF_A112]))
	{
		//cout << "7 : xx10_OF_A112 : FAULT failF  LABEL \"failure in operation A112\"  DIST EXP (1e-05)  INDUCING boolState[failF_OF_A112]  =  TRUE" << endl;
		list.push_back(make_tuple(7, 1e-05, "EXP", 0));
	}
	if ((boolState[failF_OF_A116] == false) && (boolState[required_OF_A116] && boolState[relevant_evt_OF_A116]))
	{
		//cout << "8 : xx10_OF_A116 : FAULT failF  LABEL \"failure in operation A116\"  DIST EXP (9.9e-06)  INDUCING boolState[failF_OF_A116]  =  TRUE" << endl;
		list.push_back(make_tuple(8, 9.9e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_A117] == false) && (boolState[required_OF_A117] && boolState[relevant_evt_OF_A117]))
	{
		//cout << "9 : xx10_OF_A117 : FAULT failF  LABEL \"failure in operation A117\"  DIST EXP (1e-07)  INDUCING boolState[failF_OF_A117]  =  TRUE" << endl;
		list.push_back(make_tuple(9, 1e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_A118] == false) && (boolState[required_OF_A118] && boolState[relevant_evt_OF_A118]))
	{
		//cout << "10 : xx10_OF_A118 : FAULT failF  LABEL \"failure in operation A118\"  DIST EXP (1e-06)  INDUCING boolState[failF_OF_A118]  =  TRUE" << endl;
		list.push_back(make_tuple(10, 1e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_A12] == false) && (boolState[required_OF_A12] && boolState[relevant_evt_OF_A12]))
	{
		//cout << "11 : xx10_OF_A12 : FAULT failF  LABEL \"failure in operation A12\"  DIST EXP (0)  INDUCING boolState[failF_OF_A12]  =  TRUE" << endl;
		list.push_back(make_tuple(11, 0, "EXP", 0));
	}
	if ((boolState[failF_OF_A121] == false) && (boolState[required_OF_A121] && boolState[relevant_evt_OF_A121]))
	{
		//cout << "12 : xx10_OF_A121 : FAULT failF  LABEL \"failure in operation A121\"  DIST EXP (9.9e-07)  INDUCING boolState[failF_OF_A121]  =  TRUE" << endl;
		list.push_back(make_tuple(12, 9.9e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_A122] == false) && (boolState[required_OF_A122] && boolState[relevant_evt_OF_A122]))
	{
		//cout << "13 : xx10_OF_A122 : FAULT failF  LABEL \"failure in operation A122\"  DIST EXP (1e-08)  INDUCING boolState[failF_OF_A122]  =  TRUE" << endl;
		list.push_back(make_tuple(13, 1e-08, "EXP", 0));
	}
	if ((boolState[failF_OF_A123] == false) && (boolState[required_OF_A123] && boolState[relevant_evt_OF_A123]))
	{
		//cout << "14 : xx10_OF_A123 : FAULT failF  LABEL \"failure in operation A123\"  DIST EXP (1e-06)  INDUCING boolState[failF_OF_A123]  =  TRUE" << endl;
		list.push_back(make_tuple(14, 1e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_A127] == false) && (boolState[required_OF_A127] && boolState[relevant_evt_OF_A127]))
	{
		//cout << "15 : xx10_OF_A127 : FAULT failF  LABEL \"failure in operation A127\"  DIST EXP (9.9e-06)  INDUCING boolState[failF_OF_A127]  =  TRUE" << endl;
		list.push_back(make_tuple(15, 9.9e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_A128] == false) && (boolState[required_OF_A128] && boolState[relevant_evt_OF_A128]))
	{
		//cout << "16 : xx10_OF_A128 : FAULT failF  LABEL \"failure in operation A128\"  DIST EXP (1e-07)  INDUCING boolState[failF_OF_A128]  =  TRUE" << endl;
		list.push_back(make_tuple(16, 1e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_A129] == false) && (boolState[required_OF_A129] && boolState[relevant_evt_OF_A129]))
	{
		//cout << "17 : xx10_OF_A129 : FAULT failF  LABEL \"failure in operation A129\"  DIST EXP (1e-06)  INDUCING boolState[failF_OF_A129]  =  TRUE" << endl;
		list.push_back(make_tuple(17, 1e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_A132] == false) && (boolState[required_OF_A132] && boolState[relevant_evt_OF_A132]))
	{
		//cout << "18 : xx10_OF_A132 : FAULT failF  LABEL \"failure in operation A132\"  DIST EXP (9.9e-07)  INDUCING boolState[failF_OF_A132]  =  TRUE" << endl;
		list.push_back(make_tuple(18, 9.9e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_A133] == false) && (boolState[required_OF_A133] && boolState[relevant_evt_OF_A133]))
	{
		//cout << "19 : xx10_OF_A133 : FAULT failF  LABEL \"failure in operation A133\"  DIST EXP (1e-08)  INDUCING boolState[failF_OF_A133]  =  TRUE" << endl;
		list.push_back(make_tuple(19, 1e-08, "EXP", 0));
	}
	if ((boolState[failF_OF_A134] == false) && (boolState[required_OF_A134] && boolState[relevant_evt_OF_A134]))
	{
		//cout << "20 : xx10_OF_A134 : FAULT failF  LABEL \"failure in operation A134\"  DIST EXP (1e-06)  INDUCING boolState[failF_OF_A134]  =  TRUE" << endl;
		list.push_back(make_tuple(20, 1e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_A15] == false) && (boolState[required_OF_A15] && boolState[relevant_evt_OF_A15]))
	{
		//cout << "21 : xx10_OF_A15 : FAULT failF  LABEL \"failure in operation A15\"  DIST EXP (0)  INDUCING boolState[failF_OF_A15]  =  TRUE" << endl;
		list.push_back(make_tuple(21, 0, "EXP", 0));
	}
	if ((boolState[failF_OF_A18] == false) && (boolState[required_OF_A18] && boolState[relevant_evt_OF_A18]))
	{
		//cout << "22 : xx10_OF_A18 : FAULT failF  LABEL \"failure in operation A18\"  DIST EXP (0)  INDUCING boolState[failF_OF_A18]  =  TRUE" << endl;
		list.push_back(make_tuple(22, 0, "EXP", 0));
	}
	if ((boolState[failF_OF_A21] == false) && (boolState[required_OF_A21] && boolState[relevant_evt_OF_A21]))
	{
		//cout << "23 : xx10_OF_A21 : FAULT failF  LABEL \"failure in operation A21\"  DIST EXP (0)  INDUCING boolState[failF_OF_A21]  =  TRUE" << endl;
		list.push_back(make_tuple(23, 0, "EXP", 0));
	}
	if ((boolState[failF_OF_A24] == false) && (boolState[required_OF_A24] && boolState[relevant_evt_OF_A24]))
	{
		//cout << "24 : xx10_OF_A24 : FAULT failF  LABEL \"failure in operation A24\"  DIST EXP (0)  INDUCING boolState[failF_OF_A24]  =  TRUE" << endl;
		list.push_back(make_tuple(24, 0, "EXP", 0));
	}
	if ((boolState[failF_OF_A27] == false) && (boolState[required_OF_A27] && boolState[relevant_evt_OF_A27]))
	{
		//cout << "25 : xx10_OF_A27 : FAULT failF  LABEL \"failure in operation A27\"  DIST EXP (0)  INDUCING boolState[failF_OF_A27]  =  TRUE" << endl;
		list.push_back(make_tuple(25, 0, "EXP", 0));
	}
	if ((boolState[failF_OF_A3] == false) && (boolState[required_OF_A3] && boolState[relevant_evt_OF_A3]))
	{
		//cout << "26 : xx10_OF_A3 : FAULT failF  LABEL \"failure in operation A3\"  DIST EXP (0)  INDUCING boolState[failF_OF_A3]  =  TRUE" << endl;
		list.push_back(make_tuple(26, 0, "EXP", 0));
	}
	if ((boolState[failF_OF_A30] == false) && (boolState[required_OF_A30] && boolState[relevant_evt_OF_A30]))
	{
		//cout << "27 : xx10_OF_A30 : FAULT failF  LABEL \"failure in operation A30\"  DIST EXP (0)  INDUCING boolState[failF_OF_A30]  =  TRUE" << endl;
		list.push_back(make_tuple(27, 0, "EXP", 0));
	}
	if ((boolState[failF_OF_A33] == false) && (boolState[required_OF_A33] && boolState[relevant_evt_OF_A33]))
	{
		//cout << "28 : xx10_OF_A33 : FAULT failF  LABEL \"failure in operation A33\"  DIST EXP (1e-07)  INDUCING boolState[failF_OF_A33]  =  TRUE" << endl;
		list.push_back(make_tuple(28, 1e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_A37] == false) && (boolState[required_OF_A37] && boolState[relevant_evt_OF_A37]))
	{
		//cout << "29 : xx10_OF_A37 : FAULT failF  LABEL \"failure in operation A37\"  DIST EXP (2e-07)  INDUCING boolState[failF_OF_A37]  =  TRUE" << endl;
		list.push_back(make_tuple(29, 2e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_A38] == false) && (boolState[required_OF_A38] && boolState[relevant_evt_OF_A38]))
	{
		//cout << "30 : xx10_OF_A38 : FAULT failF  LABEL \"failure in operation A38\"  DIST EXP (1e-07)  INDUCING boolState[failF_OF_A38]  =  TRUE" << endl;
		list.push_back(make_tuple(30, 1e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_A41] == false) && (boolState[required_OF_A41] && boolState[relevant_evt_OF_A41]))
	{
		//cout << "31 : xx10_OF_A41 : FAULT failF  LABEL \"failure in operation A41\"  DIST EXP (2e-07)  INDUCING boolState[failF_OF_A41]  =  TRUE" << endl;
		list.push_back(make_tuple(31, 2e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_A42] == false) && (boolState[required_OF_A42] && boolState[relevant_evt_OF_A42]))
	{
		//cout << "32 : xx10_OF_A42 : FAULT failF  LABEL \"failure in operation A42\"  DIST EXP (1e-07)  INDUCING boolState[failF_OF_A42]  =  TRUE" << endl;
		list.push_back(make_tuple(32, 1e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_A45] == false) && (boolState[required_OF_A45] && boolState[relevant_evt_OF_A45]))
	{
		//cout << "33 : xx10_OF_A45 : FAULT failF  LABEL \"failure in operation A45\"  DIST EXP (2e-07)  INDUCING boolState[failF_OF_A45]  =  TRUE" << endl;
		list.push_back(make_tuple(33, 2e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_A6] == false) && (boolState[required_OF_A6] && boolState[relevant_evt_OF_A6]))
	{
		//cout << "34 : xx10_OF_A6 : FAULT failF  LABEL \"failure in operation A6\"  DIST EXP (0)  INDUCING boolState[failF_OF_A6]  =  TRUE" << endl;
		list.push_back(make_tuple(34, 0, "EXP", 0));
	}
	if ((boolState[failF_OF_A77] == false) && (boolState[required_OF_A77] && boolState[relevant_evt_OF_A77]))
	{
		//cout << "35 : xx10_OF_A77 : FAULT failF  LABEL \"failure in operation A77\"  DIST EXP (1e-07)  INDUCING boolState[failF_OF_A77]  =  TRUE" << endl;
		list.push_back(make_tuple(35, 1e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_A78] == false) && (boolState[required_OF_A78] && boolState[relevant_evt_OF_A78]))
	{
		//cout << "36 : xx10_OF_A78 : FAULT failF  LABEL \"failure in operation A78\"  DIST EXP (1e-07)  INDUCING boolState[failF_OF_A78]  =  TRUE" << endl;
		list.push_back(make_tuple(36, 1e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_A83] == false) && (boolState[required_OF_A83] && boolState[relevant_evt_OF_A83]))
	{
		//cout << "37 : xx10_OF_A83 : FAULT failF  LABEL \"failure in operation A83\"  DIST EXP (9e-05)  INDUCING boolState[failF_OF_A83]  =  TRUE" << endl;
		list.push_back(make_tuple(37, 9e-05, "EXP", 0));
	}
	if ((boolState[failF_OF_A84] == false) && (boolState[required_OF_A84] && boolState[relevant_evt_OF_A84]))
	{
		//cout << "38 : xx10_OF_A84 : FAULT failF  LABEL \"failure in operation A84\"  DIST EXP (1e-05)  INDUCING boolState[failF_OF_A84]  =  TRUE" << endl;
		list.push_back(make_tuple(38, 1e-05, "EXP", 0));
	}
	if ((boolState[failF_OF_A85] == false) && (boolState[required_OF_A85] && boolState[relevant_evt_OF_A85]))
	{
		//cout << "39 : xx10_OF_A85 : FAULT failF  LABEL \"failure in operation A85\"  DIST EXP (1e-05)  INDUCING boolState[failF_OF_A85]  =  TRUE" << endl;
		list.push_back(make_tuple(39, 1e-05, "EXP", 0));
	}
	if ((boolState[failF_OF_A88] == false) && (boolState[required_OF_A88] && boolState[relevant_evt_OF_A88]))
	{
		//cout << "40 : xx10_OF_A88 : FAULT failF  LABEL \"failure in operation A88\"  DIST EXP (9e-06)  INDUCING boolState[failF_OF_A88]  =  TRUE" << endl;
		list.push_back(make_tuple(40, 9e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_A89] == false) && (boolState[required_OF_A89] && boolState[relevant_evt_OF_A89]))
	{
		//cout << "41 : xx10_OF_A89 : FAULT failF  LABEL \"failure in operation A89\"  DIST EXP (1e-06)  INDUCING boolState[failF_OF_A89]  =  TRUE" << endl;
		list.push_back(make_tuple(41, 1e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_A9] == false) && (boolState[required_OF_A9] && boolState[relevant_evt_OF_A9]))
	{
		//cout << "42 : xx10_OF_A9 : FAULT failF  LABEL \"failure in operation A9\"  DIST EXP (0)  INDUCING boolState[failF_OF_A9]  =  TRUE" << endl;
		list.push_back(make_tuple(42, 0, "EXP", 0));
	}
	if ((boolState[failF_OF_A90] == false) && (boolState[required_OF_A90] && boolState[relevant_evt_OF_A90]))
	{
		//cout << "43 : xx10_OF_A90 : FAULT failF  LABEL \"failure in operation A90\"  DIST EXP (1e-05)  INDUCING boolState[failF_OF_A90]  =  TRUE" << endl;
		list.push_back(make_tuple(43, 1e-05, "EXP", 0));
	}
	if ((boolState[failF_OF_A94] == false) && (boolState[required_OF_A94] && boolState[relevant_evt_OF_A94]))
	{
		//cout << "44 : xx10_OF_A94 : FAULT failF  LABEL \"failure in operation A94\"  DIST EXP (9e-05)  INDUCING boolState[failF_OF_A94]  =  TRUE" << endl;
		list.push_back(make_tuple(44, 9e-05, "EXP", 0));
	}
	if ((boolState[failF_OF_A95] == false) && (boolState[required_OF_A95] && boolState[relevant_evt_OF_A95]))
	{
		//cout << "45 : xx10_OF_A95 : FAULT failF  LABEL \"failure in operation A95\"  DIST EXP (1e-05)  INDUCING boolState[failF_OF_A95]  =  TRUE" << endl;
		list.push_back(make_tuple(45, 1e-05, "EXP", 0));
	}
	if ((boolState[failF_OF_A96] == false) && (boolState[required_OF_A96] && boolState[relevant_evt_OF_A96]))
	{
		//cout << "46 : xx10_OF_A96 : FAULT failF  LABEL \"failure in operation A96\"  DIST EXP (1e-05)  INDUCING boolState[failF_OF_A96]  =  TRUE" << endl;
		list.push_back(make_tuple(46, 1e-05, "EXP", 0));
	}
	if ((boolState[failF_OF_A99] == false) && (boolState[required_OF_A99] && boolState[relevant_evt_OF_A99]))
	{
		//cout << "47 : xx10_OF_A99 : FAULT failF  LABEL \"failure in operation A99\"  DIST EXP (9e-06)  INDUCING boolState[failF_OF_A99]  =  TRUE" << endl;
		list.push_back(make_tuple(47, 9e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A48] == false) && (boolState[required_OF_f_A48] && boolState[relevant_evt_OF_f_A48]))
	{
		//cout << "48 : xx10_OF_f_A48 : FAULT failF  LABEL \"failure in operation f_A48\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A48]  =  TRUE" << endl;
		list.push_back(make_tuple(48, 0, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A49] == false) && (boolState[required_OF_f_A49] && boolState[relevant_evt_OF_f_A49]))
	{
		//cout << "49 : xx10_OF_f_A49 : FAULT failF  LABEL \"failure in operation f_A49\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A49]  =  TRUE" << endl;
		list.push_back(make_tuple(49, 0, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A50] == false) && (boolState[required_OF_f_A50] && boolState[relevant_evt_OF_f_A50]))
	{
		//cout << "50 : xx10_OF_f_A50 : FAULT failF  LABEL \"failure in operation f_A50\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A50]  =  TRUE" << endl;
		list.push_back(make_tuple(50, 0, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A51] == false) && (boolState[required_OF_f_A51] && boolState[relevant_evt_OF_f_A51]))
	{
		//cout << "51 : xx10_OF_f_A51 : FAULT failF  LABEL \"failure in operation f_A51\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A51]  =  TRUE" << endl;
		list.push_back(make_tuple(51, 0, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A52] == false) && (boolState[required_OF_f_A52] && boolState[relevant_evt_OF_f_A52]))
	{
		//cout << "52 : xx10_OF_f_A52 : FAULT failF  LABEL \"failure in operation f_A52\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A52]  =  TRUE" << endl;
		list.push_back(make_tuple(52, 0, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A54] == false) && (boolState[required_OF_f_A54] && boolState[relevant_evt_OF_f_A54]))
	{
		//cout << "53 : xx10_OF_f_A54 : FAULT failF  LABEL \"failure in operation f_A54\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A54]  =  TRUE" << endl;
		list.push_back(make_tuple(53, 0, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A55] == false) && (boolState[required_OF_f_A55] && boolState[relevant_evt_OF_f_A55]))
	{
		//cout << "54 : xx10_OF_f_A55 : FAULT failF  LABEL \"failure in operation f_A55\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A55]  =  TRUE" << endl;
		list.push_back(make_tuple(54, 0, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A56] == false) && (boolState[required_OF_f_A56] && boolState[relevant_evt_OF_f_A56]))
	{
		//cout << "55 : xx10_OF_f_A56 : FAULT failF  LABEL \"failure in operation f_A56\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A56]  =  TRUE" << endl;
		list.push_back(make_tuple(55, 0, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A57] == false) && (boolState[required_OF_f_A57] && boolState[relevant_evt_OF_f_A57]))
	{
		//cout << "56 : xx10_OF_f_A57 : FAULT failF  LABEL \"failure in operation f_A57\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A57]  =  TRUE" << endl;
		list.push_back(make_tuple(56, 0, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A58] == false) && (boolState[required_OF_f_A58] && boolState[relevant_evt_OF_f_A58]))
	{
		//cout << "57 : xx10_OF_f_A58 : FAULT failF  LABEL \"failure in operation f_A58\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A58]  =  TRUE" << endl;
		list.push_back(make_tuple(57, 0, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A59] == false) && (boolState[required_OF_f_A59] && boolState[relevant_evt_OF_f_A59]))
	{
		//cout << "58 : xx10_OF_f_A59 : FAULT failF  LABEL \"failure in operation f_A59\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A59]  =  TRUE" << endl;
		list.push_back(make_tuple(58, 0, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A61] == false) && (boolState[required_OF_f_A61] && boolState[relevant_evt_OF_f_A61]))
	{
		//cout << "59 : xx10_OF_f_A61 : FAULT failF  LABEL \"failure in operation f_A61\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A61]  =  TRUE" << endl;
		list.push_back(make_tuple(59, 0, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A62] == false) && (boolState[required_OF_f_A62] && boolState[relevant_evt_OF_f_A62]))
	{
		//cout << "60 : xx10_OF_f_A62 : FAULT failF  LABEL \"failure in operation f_A62\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A62]  =  TRUE" << endl;
		list.push_back(make_tuple(60, 0, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A63] == false) && (boolState[required_OF_f_A63] && boolState[relevant_evt_OF_f_A63]))
	{
		//cout << "61 : xx10_OF_f_A63 : FAULT failF  LABEL \"failure in operation f_A63\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A63]  =  TRUE" << endl;
		list.push_back(make_tuple(61, 0, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A64] == false) && (boolState[required_OF_f_A64] && boolState[relevant_evt_OF_f_A64]))
	{
		//cout << "62 : xx10_OF_f_A64 : FAULT failF  LABEL \"failure in operation f_A64\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A64]  =  TRUE" << endl;
		list.push_back(make_tuple(62, 0, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A65] == false) && (boolState[required_OF_f_A65] && boolState[relevant_evt_OF_f_A65]))
	{
		//cout << "63 : xx10_OF_f_A65 : FAULT failF  LABEL \"failure in operation f_A65\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A65]  =  TRUE" << endl;
		list.push_back(make_tuple(63, 0, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A66] == false) && (boolState[required_OF_f_A66] && boolState[relevant_evt_OF_f_A66]))
	{
		//cout << "64 : xx10_OF_f_A66 : FAULT failF  LABEL \"failure in operation f_A66\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A66]  =  TRUE" << endl;
		list.push_back(make_tuple(64, 0, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A68] == false) && (boolState[required_OF_f_A68] && boolState[relevant_evt_OF_f_A68]))
	{
		//cout << "65 : xx10_OF_f_A68 : FAULT failF  LABEL \"failure in operation f_A68\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A68]  =  TRUE" << endl;
		list.push_back(make_tuple(65, 0, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A69] == false) && (boolState[required_OF_f_A69] && boolState[relevant_evt_OF_f_A69]))
	{
		//cout << "66 : xx10_OF_f_A69 : FAULT failF  LABEL \"failure in operation f_A69\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A69]  =  TRUE" << endl;
		list.push_back(make_tuple(66, 0, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A70] == false) && (boolState[required_OF_f_A70] && boolState[relevant_evt_OF_f_A70]))
	{
		//cout << "67 : xx10_OF_f_A70 : FAULT failF  LABEL \"failure in operation f_A70\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A70]  =  TRUE" << endl;
		list.push_back(make_tuple(67, 0, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A71] == false) && (boolState[required_OF_f_A71] && boolState[relevant_evt_OF_f_A71]))
	{
		//cout << "68 : xx10_OF_f_A71 : FAULT failF  LABEL \"failure in operation f_A71\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A71]  =  TRUE" << endl;
		list.push_back(make_tuple(68, 0, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A72] == false) && (boolState[required_OF_f_A72] && boolState[relevant_evt_OF_f_A72]))
	{
		//cout << "69 : xx10_OF_f_A72 : FAULT failF  LABEL \"failure in operation f_A72\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A72]  =  TRUE" << endl;
		list.push_back(make_tuple(69, 0, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A73] == false) && (boolState[required_OF_f_A73] && boolState[relevant_evt_OF_f_A73]))
	{
		//cout << "70 : xx10_OF_f_A73 : FAULT failF  LABEL \"failure in operation f_A73\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A73]  =  TRUE" << endl;
		list.push_back(make_tuple(70, 0, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A74] == false) && (boolState[required_OF_f_A74] && boolState[relevant_evt_OF_f_A74]))
	{
		//cout << "71 : xx10_OF_f_A74 : FAULT failF  LABEL \"failure in operation f_A74\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A74]  =  TRUE" << endl;
		list.push_back(make_tuple(71, 0, "EXP", 0));
	}
	if ((boolState[failF_OF_f_A75] == false) && (boolState[required_OF_f_A75] && boolState[relevant_evt_OF_f_A75]))
	{
		//cout << "72 : xx10_OF_f_A75 : FAULT failF  LABEL \"failure in operation f_A75\"  DIST EXP (0)  INDUCING boolState[failF_OF_f_A75]  =  TRUE" << endl;
		list.push_back(make_tuple(72, 0, "EXP", 0));
	}
	return list;
}


void storm::figaro::FigaroProgram_vgs_1_Trim_article_No_repair::runOnceInteractionStep_initialization()
{
	if (boolState[failF_OF_A100] == true )
	{
		boolState[S_OF_A100]  =  true;
	}

	if (boolState[failF_OF_A101] == true )
	{
		boolState[S_OF_A101]  =  true;
	}

	if (boolState[failF_OF_A105] == true )
	{
		boolState[S_OF_A105]  =  true;
	}

	if (boolState[failF_OF_A106] == true )
	{
		boolState[S_OF_A106]  =  true;
	}

	if (boolState[failF_OF_A107] == true )
	{
		boolState[S_OF_A107]  =  true;
	}

	if (boolState[failF_OF_A110] == true )
	{
		boolState[S_OF_A110]  =  true;
	}

	if (boolState[failF_OF_A111] == true )
	{
		boolState[S_OF_A111]  =  true;
	}

	if (boolState[failF_OF_A112] == true )
	{
		boolState[S_OF_A112]  =  true;
	}

	if (boolState[failF_OF_A116] == true )
	{
		boolState[S_OF_A116]  =  true;
	}

	if (boolState[failF_OF_A117] == true )
	{
		boolState[S_OF_A117]  =  true;
	}

	if (boolState[failF_OF_A118] == true )
	{
		boolState[S_OF_A118]  =  true;
	}

	if (boolState[failF_OF_A12] == true )
	{
		boolState[S_OF_A12]  =  true;
	}

	if (boolState[failF_OF_A121] == true )
	{
		boolState[S_OF_A121]  =  true;
	}

	if (boolState[failF_OF_A122] == true )
	{
		boolState[S_OF_A122]  =  true;
	}

	if (boolState[failF_OF_A123] == true )
	{
		boolState[S_OF_A123]  =  true;
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

	if (boolState[failF_OF_A132] == true )
	{
		boolState[S_OF_A132]  =  true;
	}

	if (boolState[failF_OF_A133] == true )
	{
		boolState[S_OF_A133]  =  true;
	}

	if (boolState[failF_OF_A134] == true )
	{
		boolState[S_OF_A134]  =  true;
	}

	if (boolState[failF_OF_A15] == true )
	{
		boolState[S_OF_A15]  =  true;
	}

	if (boolState[failF_OF_A18] == true )
	{
		boolState[S_OF_A18]  =  true;
	}

	if (boolState[failF_OF_A21] == true )
	{
		boolState[S_OF_A21]  =  true;
	}

	if (boolState[failF_OF_A24] == true )
	{
		boolState[S_OF_A24]  =  true;
	}

	if (boolState[failF_OF_A27] == true )
	{
		boolState[S_OF_A27]  =  true;
	}

	if (boolState[failF_OF_A3] == true )
	{
		boolState[S_OF_A3]  =  true;
	}

	if (boolState[failF_OF_A30] == true )
	{
		boolState[S_OF_A30]  =  true;
	}

	if (boolState[failF_OF_A33] == true )
	{
		boolState[S_OF_A33]  =  true;
	}

	if (boolState[failF_OF_A37] == true )
	{
		boolState[S_OF_A37]  =  true;
	}

	if (boolState[failF_OF_A38] == true )
	{
		boolState[S_OF_A38]  =  true;
	}

	if (boolState[failF_OF_A41] == true )
	{
		boolState[S_OF_A41]  =  true;
	}

	if (boolState[failF_OF_A42] == true )
	{
		boolState[S_OF_A42]  =  true;
	}

	if (boolState[failF_OF_A45] == true )
	{
		boolState[S_OF_A45]  =  true;
	}

	if (boolState[failF_OF_A6] == true )
	{
		boolState[S_OF_A6]  =  true;
	}

	if (boolState[failF_OF_A77] == true )
	{
		boolState[S_OF_A77]  =  true;
	}

	if (boolState[failF_OF_A78] == true )
	{
		boolState[S_OF_A78]  =  true;
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

	if (boolState[failF_OF_A88] == true )
	{
		boolState[S_OF_A88]  =  true;
	}

	if (boolState[failF_OF_A89] == true )
	{
		boolState[S_OF_A89]  =  true;
	}

	if (boolState[failF_OF_A9] == true )
	{
		boolState[S_OF_A9]  =  true;
	}

	if (boolState[failF_OF_A90] == true )
	{
		boolState[S_OF_A90]  =  true;
	}

	if (boolState[failF_OF_A94] == true )
	{
		boolState[S_OF_A94]  =  true;
	}

	if (boolState[failF_OF_A95] == true )
	{
		boolState[S_OF_A95]  =  true;
	}

	if (boolState[failF_OF_A96] == true )
	{
		boolState[S_OF_A96]  =  true;
	}

	if (boolState[failF_OF_A99] == true )
	{
		boolState[S_OF_A99]  =  true;
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

	if (boolState[failF_OF_f_A59] == true )
	{
		boolState[S_OF_f_A59]  =  true;
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

	if (boolState[failI_OF_i_A59] == true )
	{
		boolState[S_OF_i_A59]  =  true;
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

}


void storm::figaro::FigaroProgram_vgs_1_Trim_article_No_repair::runOnceInteractionStep_propagate_effect_S()
{
	if ((((((boolState[S_OF_A1] || boolState[S_OF_A31]) || boolState[S_OF_A35]) || boolState[S_OF_A39]) || boolState[S_OF_A43]) || boolState[S_OF_A46]) || boolState[S_OF_A82] )
	{
		boolState[S_OF_A0]  =  true;
	}

	if (boolState[S_OF_A34] )
	{
		boolState[S_OF_A1]  =  true;
	}

	if ((((boolState[S_OF_A137] || boolState[S_OF_A50]) || boolState[S_OF_A54]) || boolState[S_OF_A9]) || boolState[S_OF_A93] )
	{
		boolState[S_OF_A10]  =  true;
	}

	if (boolState[S_OF_A101] && boolState[S_OF_A99] )
	{
		boolState[S_OF_A102]  =  true;
	}

	if (((boolState[S_OF_A100] || boolState[S_OF_A102]) || boolState[S_OF_A95]) || boolState[S_OF_A97] )
	{
		boolState[S_OF_A104]  =  true;
	}

	if (boolState[S_OF_A105] && boolState[S_OF_A107] )
	{
		boolState[S_OF_A108]  =  true;
	}

	if (boolState[S_OF_A110] && boolState[S_OF_A112] )
	{
		boolState[S_OF_A113]  =  true;
	}

	if (((boolState[S_OF_A106] || boolState[S_OF_A108]) || boolState[S_OF_A111]) || boolState[S_OF_A113] )
	{
		boolState[S_OF_A115]  =  true;
	}

	if (boolState[S_OF_A116] && boolState[S_OF_A118] )
	{
		boolState[S_OF_A119]  =  true;
	}

	if (boolState[S_OF_A121] && boolState[S_OF_A123] )
	{
		boolState[S_OF_A124]  =  true;
	}

	if (((boolState[S_OF_A117] || boolState[S_OF_A119]) || boolState[S_OF_A122]) || boolState[S_OF_A124] )
	{
		boolState[S_OF_A126]  =  true;
	}

	if ((((boolState[S_OF_A104] || boolState[S_OF_A12]) || boolState[S_OF_A137]) || boolState[S_OF_A56]) || boolState[S_OF_A70] )
	{
		boolState[S_OF_A13]  =  true;
	}

	if (boolState[S_OF_A127] && boolState[S_OF_A129] )
	{
		boolState[S_OF_A130]  =  true;
	}

	if (boolState[S_OF_A132] && boolState[S_OF_A134] )
	{
		boolState[S_OF_A135]  =  true;
	}

	if (((boolState[S_OF_A128] || boolState[S_OF_A130]) || boolState[S_OF_A133]) || boolState[S_OF_A135] )
	{
		boolState[S_OF_A137]  =  true;
	}

	if (((boolState[S_OF_A104] || boolState[S_OF_A15]) || boolState[S_OF_A55]) || boolState[S_OF_A58] )
	{
		boolState[S_OF_A16]  =  true;
	}

	if ((((boolState[S_OF_A104] || boolState[S_OF_A137]) || boolState[S_OF_A18]) || boolState[S_OF_A57]) || boolState[S_OF_A61] )
	{
		boolState[S_OF_A19]  =  true;
	}

	if ((((boolState[S_OF_A115] || boolState[S_OF_A137]) || boolState[S_OF_A21]) || boolState[S_OF_A63]) || boolState[S_OF_A71] )
	{
		boolState[S_OF_A22]  =  true;
	}

	if (((boolState[S_OF_A115] || boolState[S_OF_A24]) || boolState[S_OF_A62]) || boolState[S_OF_A65] )
	{
		boolState[S_OF_A25]  =  true;
	}

	if ((((boolState[S_OF_A115] || boolState[S_OF_A137]) || boolState[S_OF_A27]) || boolState[S_OF_A64]) || boolState[S_OF_A68] )
	{
		boolState[S_OF_A28]  =  true;
	}

	if (((((((boolState[S_OF_A126] || boolState[S_OF_A137]) || boolState[S_OF_A30]) || boolState[S_OF_A72]) || boolState[S_OF_A73]) || boolState[S_OF_A74]) || boolState[S_OF_A75]) || boolState[S_OF_A76] )
	{
		boolState[S_OF_A31]  =  true;
	}

	if ((3 <= (boolState[S_OF_A38] + boolState[S_OF_A42] + boolState[S_OF_A77] + boolState[S_OF_A78])) )
	{
		boolState[S_OF_A34]  =  true;
	}

	if (boolState[S_OF_A126] || boolState[S_OF_A33] )
	{
		boolState[S_OF_A35]  =  true;
	}

	if (boolState[S_OF_A37] )
	{
		boolState[S_OF_A39]  =  true;
	}

	if ((((boolState[S_OF_A137] || boolState[S_OF_A3]) || boolState[S_OF_A49]) || boolState[S_OF_A69]) || boolState[S_OF_A93] )
	{
		boolState[S_OF_A4]  =  true;
	}

	if (boolState[S_OF_A41] )
	{
		boolState[S_OF_A43]  =  true;
	}

	if (boolState[S_OF_A45] )
	{
		boolState[S_OF_A46]  =  true;
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

	if (boolState[S_OF_A137] || boolState[S_OF_A52] )
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

	if (boolState[S_OF_f_A59] || boolState[S_OF_i_A59] )
	{
		boolState[S_OF_A59]  =  true;
	}

	if (boolState[S_OF_A137] || boolState[S_OF_A59] )
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

	if (boolState[S_OF_A137] || boolState[S_OF_A66] )
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

	if (((boolState[S_OF_A48] || boolState[S_OF_A51]) || boolState[S_OF_A6]) || boolState[S_OF_A93] )
	{
		boolState[S_OF_A7]  =  true;
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

	if ((2 <= (boolState[S_OF_A53] + boolState[S_OF_A60] + boolState[S_OF_A67])) )
	{
		boolState[S_OF_A76]  =  true;
	}

	if ((boolState[S_OF_A10] || boolState[S_OF_A4]) || boolState[S_OF_A7] )
	{
		boolState[S_OF_A79]  =  true;
	}

	if ((boolState[S_OF_A13] || boolState[S_OF_A16]) || boolState[S_OF_A19] )
	{
		boolState[S_OF_A80]  =  true;
	}

	if ((boolState[S_OF_A22] || boolState[S_OF_A25]) || boolState[S_OF_A28] )
	{
		boolState[S_OF_A81]  =  true;
	}

	if ((2 <= (boolState[S_OF_A79] + boolState[S_OF_A80] + boolState[S_OF_A81])) )
	{
		boolState[S_OF_A82]  =  true;
	}

	if (boolState[S_OF_A83] && boolState[S_OF_A85] )
	{
		boolState[S_OF_A86]  =  true;
	}

	if (boolState[S_OF_A88] && boolState[S_OF_A90] )
	{
		boolState[S_OF_A91]  =  true;
	}

	if (((boolState[S_OF_A84] || boolState[S_OF_A86]) || boolState[S_OF_A89]) || boolState[S_OF_A91] )
	{
		boolState[S_OF_A93]  =  true;
	}

	if (boolState[S_OF_A94] && boolState[S_OF_A96] )
	{
		boolState[S_OF_A97]  =  true;
	}

	if (boolState[S_OF_A0] )
	{
		boolState[S_OF_UE_1]  =  true;
	}

}


void storm::figaro::FigaroProgram_vgs_1_Trim_article_No_repair::runOnceInteractionStep_propagate_effect_required()
{
	if ( !boolState[required_OF_UE_1] )
	{
		boolState[required_OF_A0]  =  false;
	}

	if (boolState[relevant_evt_OF_UE_1] && ( !boolState[S_OF_UE_1]) )
	{
		boolState[relevant_evt_OF_A0]  =  true;
	}

	if ( !boolState[required_OF_A0] )
	{
		boolState[required_OF_A1]  =  false;
	}

	if ((boolState[relevant_evt_OF_A0] && ( !boolState[S_OF_A0])) || ((( !boolState[S_OF_i_A69]) || ( !boolState[S_OF_i_A70])) || ( !boolState[S_OF_i_A71])) )
	{
		boolState[relevant_evt_OF_A1]  =  true;
	}

	if ( !boolState[required_OF_A79] )
	{
		boolState[required_OF_A10]  =  false;
	}

	if ((boolState[relevant_evt_OF_A79] && ( !boolState[S_OF_A79])) || (( !boolState[S_OF_i_A51])   || ( !boolState[S_OF_i_A52])) )
	{
		boolState[relevant_evt_OF_A10]  =  true;
	}

	if ( !boolState[required_OF_A104] )
	{
		boolState[required_OF_A100]  =  false;
	}

	if (boolState[relevant_evt_OF_A104] && ( !boolState[S_OF_A104]) )
	{
		boolState[relevant_evt_OF_A100]  =  true;
	}

	if ( !boolState[required_OF_A102] )
	{
		boolState[required_OF_A101]  =  false;
	}

	if ((boolState[relevant_evt_OF_A102] && ( !boolState[S_OF_A102])) || ( !boolState[S_OF_A99]) )
	{
		boolState[relevant_evt_OF_A101]  =  true;
	}

	if ( !boolState[required_OF_A104] )
	{
		boolState[required_OF_A102]  =  false;
	}

	if (boolState[relevant_evt_OF_A104] && ( !boolState[S_OF_A104]) )
	{
		boolState[relevant_evt_OF_A102]  =  true;
	}

	if ((( !boolState[required_OF_A13]) && ( !boolState[required_OF_A16])) && ( !  boolState[required_OF_A19]) )
	{
		boolState[required_OF_A104]  =  false;
	}

	if (((boolState[relevant_evt_OF_A13] && ( !boolState[S_OF_A13])) || (boolState[relevant_evt_OF_A16] && ( !boolState[S_OF_A16]))) || (boolState[relevant_evt_OF_A19] && ( !  boolState[S_OF_A19])) )
	{
		boolState[relevant_evt_OF_A104]  =  true;
	}

	if ( !boolState[S_OF_A107] )
	{
		boolState[required_OF_A105]  =  false;
	}

	if (boolState[relevant_evt_OF_A108] && ( !boolState[S_OF_A108]) )
	{
		boolState[relevant_evt_OF_A105]  =  true;
	}

	if ( !boolState[required_OF_A115] )
	{
		boolState[required_OF_A106]  =  false;
	}

	if (boolState[relevant_evt_OF_A115] && ( !boolState[S_OF_A115]) )
	{
		boolState[relevant_evt_OF_A106]  =  true;
	}

	if ( !boolState[required_OF_A108] )
	{
		boolState[required_OF_A107]  =  false;
	}

	if ((boolState[relevant_evt_OF_A108] && ( !boolState[S_OF_A108])) || ( !boolState[S_OF_A105]) )
	{
		boolState[relevant_evt_OF_A107]  =  true;
	}

	if ( !boolState[required_OF_A115] )
	{
		boolState[required_OF_A108]  =  false;
	}

	if (boolState[relevant_evt_OF_A115] && ( !boolState[S_OF_A115]) )
	{
		boolState[relevant_evt_OF_A108]  =  true;
	}

	if ( !boolState[S_OF_A112] )
	{
		boolState[required_OF_A110]  =  false;
	}

	if (boolState[relevant_evt_OF_A113] && ( !boolState[S_OF_A113]) )
	{
		boolState[relevant_evt_OF_A110]  =  true;
	}

	if ( !boolState[required_OF_A115] )
	{
		boolState[required_OF_A111]  =  false;
	}

	if (boolState[relevant_evt_OF_A115] && ( !boolState[S_OF_A115]) )
	{
		boolState[relevant_evt_OF_A111]  =  true;
	}

	if ( !boolState[required_OF_A113] )
	{
		boolState[required_OF_A112]  =  false;
	}

	if ((boolState[relevant_evt_OF_A113] && ( !boolState[S_OF_A113])) || ( !boolState[S_OF_A110]) )
	{
		boolState[relevant_evt_OF_A112]  =  true;
	}

	if ( !boolState[required_OF_A115] )
	{
		boolState[required_OF_A113]  =  false;
	}

	if (boolState[relevant_evt_OF_A115] && ( !boolState[S_OF_A115]) )
	{
		boolState[relevant_evt_OF_A113]  =  true;
	}

	if ((( !boolState[required_OF_A22]) && ( !boolState[required_OF_A25])) && ( !  boolState[required_OF_A28]) )
	{
		boolState[required_OF_A115]  =  false;
	}

	if (((boolState[relevant_evt_OF_A22] && ( !boolState[S_OF_A22])) || (boolState[relevant_evt_OF_A25] && ( !boolState[S_OF_A25]))) || (boolState[relevant_evt_OF_A28] && ( !  boolState[S_OF_A28])) )
	{
		boolState[relevant_evt_OF_A115]  =  true;
	}

	if ( !boolState[S_OF_A118] )
	{
		boolState[required_OF_A116]  =  false;
	}

	if (boolState[relevant_evt_OF_A119] && ( !boolState[S_OF_A119]) )
	{
		boolState[relevant_evt_OF_A116]  =  true;
	}

	if ( !boolState[required_OF_A126] )
	{
		boolState[required_OF_A117]  =  false;
	}

	if (boolState[relevant_evt_OF_A126] && ( !boolState[S_OF_A126]) )
	{
		boolState[relevant_evt_OF_A117]  =  true;
	}

	if ( !boolState[required_OF_A119] )
	{
		boolState[required_OF_A118]  =  false;
	}

	if ((boolState[relevant_evt_OF_A119] && ( !boolState[S_OF_A119])) || ( !boolState[S_OF_A116]) )
	{
		boolState[relevant_evt_OF_A118]  =  true;
	}

	if ( !boolState[required_OF_A126] )
	{
		boolState[required_OF_A119]  =  false;
	}

	if (boolState[relevant_evt_OF_A126] && ( !boolState[S_OF_A126]) )
	{
		boolState[relevant_evt_OF_A119]  =  true;
	}

	if ( !boolState[required_OF_A13] )
	{
		boolState[required_OF_A12]  =  false;
	}

	if (boolState[relevant_evt_OF_A13] && ( !boolState[S_OF_A13]) )
	{
		boolState[relevant_evt_OF_A12]  =  true;
	}

	if ( !boolState[S_OF_A123] )
	{
		boolState[required_OF_A121]  =  false;
	}

	if (boolState[relevant_evt_OF_A124] && ( !boolState[S_OF_A124]) )
	{
		boolState[relevant_evt_OF_A121]  =  true;
	}

	if ( !boolState[required_OF_A126] )
	{
		boolState[required_OF_A122]  =  false;
	}

	if (boolState[relevant_evt_OF_A126] && ( !boolState[S_OF_A126]) )
	{
		boolState[relevant_evt_OF_A122]  =  true;
	}

	if ( !boolState[required_OF_A124] )
	{
		boolState[required_OF_A123]  =  false;
	}

	if ((boolState[relevant_evt_OF_A124] && ( !boolState[S_OF_A124])) || ( !boolState[S_OF_A121]) )
	{
		boolState[relevant_evt_OF_A123]  =  true;
	}

	if ( !boolState[required_OF_A126] )
	{
		boolState[required_OF_A124]  =  false;
	}

	if (boolState[relevant_evt_OF_A126] && ( !boolState[S_OF_A126]) )
	{
		boolState[relevant_evt_OF_A124]  =  true;
	}

	if (( !boolState[required_OF_A31]) && ( !boolState[required_OF_A35]) )
	{
		boolState[required_OF_A126]  =  false;
	}

	if ((boolState[relevant_evt_OF_A31] && ( !boolState[S_OF_A31])) || (boolState[relevant_evt_OF_A35] && ( !boolState[S_OF_A35])) )
	{
		boolState[relevant_evt_OF_A126]  =  true;
	}

	if ( !boolState[S_OF_A129] )
	{
		boolState[required_OF_A127]  =  false;
	}

	if (boolState[relevant_evt_OF_A130] && ( !boolState[S_OF_A130]) )
	{
		boolState[relevant_evt_OF_A127]  =  true;
	}

	if ( !boolState[required_OF_A137] )
	{
		boolState[required_OF_A128]  =  false;
	}

	if (boolState[relevant_evt_OF_A137] && ( !boolState[S_OF_A137]) )
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

	if ( !boolState[required_OF_A80] )
	{
		boolState[required_OF_A13]  =  false;
	}

	if ((boolState[relevant_evt_OF_A80] && ( !boolState[S_OF_A80])) || ( !boolState[S_OF_i_A55]) )
	{
		boolState[relevant_evt_OF_A13]  =  true;
	}

	if ( !boolState[required_OF_A137] )
	{
		boolState[required_OF_A130]  =  false;
	}

	if (boolState[relevant_evt_OF_A137] && ( !boolState[S_OF_A137]) )
	{
		boolState[relevant_evt_OF_A130]  =  true;
	}

	if ( !boolState[S_OF_A134] )
	{
		boolState[required_OF_A132]  =  false;
	}

	if (boolState[relevant_evt_OF_A135] && ( !boolState[S_OF_A135]) )
	{
		boolState[relevant_evt_OF_A132]  =  true;
	}

	if ( !boolState[required_OF_A137] )
	{
		boolState[required_OF_A133]  =  false;
	}

	if (boolState[relevant_evt_OF_A137] && ( !boolState[S_OF_A137]) )
	{
		boolState[relevant_evt_OF_A133]  =  true;
	}

	if ( !boolState[required_OF_A135] )
	{
		boolState[required_OF_A134]  =  false;
	}

	if ((boolState[relevant_evt_OF_A135] && ( !boolState[S_OF_A135])) || ( !boolState[S_OF_A132]) )
	{
		boolState[relevant_evt_OF_A134]  =  true;
	}

	if ( !boolState[required_OF_A137] )
	{
		boolState[required_OF_A135]  =  false;
	}

	if (boolState[relevant_evt_OF_A137] && ( !boolState[S_OF_A137]) )
	{
		boolState[relevant_evt_OF_A135]  =  true;
	}

	if (((((((((( !boolState[required_OF_A10]) && ( !boolState[required_OF_A13])) && ( !boolState[required_OF_A19])) && ( !boolState[required_OF_A22])) && ( !  boolState[required_OF_A28])) && ( !boolState[required_OF_A31])) && ( !  boolState[required_OF_A4])) && ( !boolState[required_OF_A53])) && ( !  boolState[required_OF_A60])) && ( !boolState[required_OF_A67]) )
	{
		boolState[required_OF_A137]  =  false;
	}

	if ((((((((((boolState[relevant_evt_OF_A10] && ( !boolState[S_OF_A10])) || (  boolState[relevant_evt_OF_A13] && ( !boolState[S_OF_A13]))) || (boolState[relevant_evt_OF_A19] && ( !boolState[S_OF_A19]))) || (boolState[relevant_evt_OF_A22] && ( !boolState[S_OF_A22]))) || (boolState[relevant_evt_OF_A28] && ( !boolState[S_OF_A28]))) || (  boolState[relevant_evt_OF_A31] && ( !boolState[S_OF_A31]))) || (boolState[relevant_evt_OF_A4] && ( !boolState[S_OF_A4]))) || (boolState[relevant_evt_OF_A53] && ( !boolState[S_OF_A53]))) || (boolState[relevant_evt_OF_A60] && ( !boolState[S_OF_A60]))) || (  boolState[relevant_evt_OF_A67] && ( !boolState[S_OF_A67])) )
	{
		boolState[relevant_evt_OF_A137]  =  true;
	}

	if ( !boolState[required_OF_A16] )
	{
		boolState[required_OF_A15]  =  false;
	}

	if (boolState[relevant_evt_OF_A16] && ( !boolState[S_OF_A16]) )
	{
		boolState[relevant_evt_OF_A15]  =  true;
	}

	if ( !boolState[required_OF_A80] )
	{
		boolState[required_OF_A16]  =  false;
	}

	if ((boolState[relevant_evt_OF_A80] && ( !boolState[S_OF_A80])) || (( !boolState[S_OF_i_A56])   || ( !boolState[S_OF_i_A57])) )
	{
		boolState[relevant_evt_OF_A16]  =  true;
	}

	if ( !boolState[required_OF_A19] )
	{
		boolState[required_OF_A18]  =  false;
	}

	if (boolState[relevant_evt_OF_A19] && ( !boolState[S_OF_A19]) )
	{
		boolState[relevant_evt_OF_A18]  =  true;
	}

	if ( !boolState[required_OF_A80] )
	{
		boolState[required_OF_A19]  =  false;
	}

	if ((boolState[relevant_evt_OF_A80] && ( !boolState[S_OF_A80])) || (( !boolState[S_OF_i_A58])   || ( !boolState[S_OF_i_A59])) )
	{
		boolState[relevant_evt_OF_A19]  =  true;
	}

	if ( !boolState[required_OF_A22] )
	{
		boolState[required_OF_A21]  =  false;
	}

	if (boolState[relevant_evt_OF_A22] && ( !boolState[S_OF_A22]) )
	{
		boolState[relevant_evt_OF_A21]  =  true;
	}

	if ( !boolState[required_OF_A81] )
	{
		boolState[required_OF_A22]  =  false;
	}

	if ((boolState[relevant_evt_OF_A81] && ( !boolState[S_OF_A81])) || ( !boolState[S_OF_i_A62]) )
	{
		boolState[relevant_evt_OF_A22]  =  true;
	}

	if ( !boolState[required_OF_A25] )
	{
		boolState[required_OF_A24]  =  false;
	}

	if (boolState[relevant_evt_OF_A25] && ( !boolState[S_OF_A25]) )
	{
		boolState[relevant_evt_OF_A24]  =  true;
	}

	if ( !boolState[required_OF_A81] )
	{
		boolState[required_OF_A25]  =  false;
	}

	if ((boolState[relevant_evt_OF_A81] && ( !boolState[S_OF_A81])) || (( !boolState[S_OF_i_A63])   || ( !boolState[S_OF_i_A64])) )
	{
		boolState[relevant_evt_OF_A25]  =  true;
	}

	if ( !boolState[required_OF_A28] )
	{
		boolState[required_OF_A27]  =  false;
	}

	if (boolState[relevant_evt_OF_A28] && ( !boolState[S_OF_A28]) )
	{
		boolState[relevant_evt_OF_A27]  =  true;
	}

	if ( !boolState[required_OF_A81] )
	{
		boolState[required_OF_A28]  =  false;
	}

	if ((boolState[relevant_evt_OF_A81] && ( !boolState[S_OF_A81])) || (( !boolState[S_OF_i_A65])   || ( !boolState[S_OF_i_A66])) )
	{
		boolState[relevant_evt_OF_A28]  =  true;
	}

	if ( !boolState[required_OF_A4] )
	{
		boolState[required_OF_A3]  =  false;
	}

	if (boolState[relevant_evt_OF_A4] && ( !boolState[S_OF_A4]) )
	{
		boolState[relevant_evt_OF_A3]  =  true;
	}

	if ( !boolState[required_OF_A31] )
	{
		boolState[required_OF_A30]  =  false;
	}

	if (boolState[relevant_evt_OF_A31] && ( !boolState[S_OF_A31]) )
	{
		boolState[relevant_evt_OF_A30]  =  true;
	}

	if ( !boolState[required_OF_A0] )
	{
		boolState[required_OF_A31]  =  false;
	}

	if ((boolState[relevant_evt_OF_A0] && ( !boolState[S_OF_A0])) || ((( !boolState[S_OF_i_A54]) || ( !boolState[S_OF_i_A61])) || ( !boolState[S_OF_i_A68])) )
	{
		boolState[relevant_evt_OF_A31]  =  true;
	}

	if ( !boolState[required_OF_A35] )
	{
		boolState[required_OF_A33]  =  false;
	}

	if (boolState[relevant_evt_OF_A35] && ( !boolState[S_OF_A35]) )
	{
		boolState[relevant_evt_OF_A33]  =  true;
	}

	if ( !boolState[required_OF_A1] )
	{
		boolState[required_OF_A34]  =  false;
	}

	if (boolState[relevant_evt_OF_A1] && ( !boolState[S_OF_A1]) )
	{
		boolState[relevant_evt_OF_A34]  =  true;
	}

	if ( !boolState[required_OF_A0] )
	{
		boolState[required_OF_A35]  =  false;
	}

	if ((boolState[relevant_evt_OF_A0] && ( !boolState[S_OF_A0])) || ( !boolState[S_OF_i_A72]) )
	{
		boolState[relevant_evt_OF_A35]  =  true;
	}

	if ( !boolState[required_OF_A39] )
	{
		boolState[required_OF_A37]  =  false;
	}

	if (boolState[relevant_evt_OF_A39] && ( !boolState[S_OF_A39]) )
	{
		boolState[relevant_evt_OF_A37]  =  true;
	}

	if ( !boolState[required_OF_A34] )
	{
		boolState[required_OF_A38]  =  false;
	}

	if (boolState[relevant_evt_OF_A34] && ( !boolState[S_OF_A34]) )
	{
		boolState[relevant_evt_OF_A38]  =  true;
	}

	if ( !boolState[required_OF_A0] )
	{
		boolState[required_OF_A39]  =  false;
	}

	if ((boolState[relevant_evt_OF_A0] && ( !boolState[S_OF_A0])) || ( !boolState[S_OF_i_A73]) )
	{
		boolState[relevant_evt_OF_A39]  =  true;
	}

	if ( !boolState[required_OF_A79] )
	{
		boolState[required_OF_A4]  =  false;
	}

	if ((boolState[relevant_evt_OF_A79] && ( !boolState[S_OF_A79])) || ( !boolState[S_OF_i_A48]) )
	{
		boolState[relevant_evt_OF_A4]  =  true;
	}

	if ( !boolState[required_OF_A43] )
	{
		boolState[required_OF_A41]  =  false;
	}

	if (boolState[relevant_evt_OF_A43] && ( !boolState[S_OF_A43]) )
	{
		boolState[relevant_evt_OF_A41]  =  true;
	}

	if ( !boolState[required_OF_A34] )
	{
		boolState[required_OF_A42]  =  false;
	}

	if (boolState[relevant_evt_OF_A34] && ( !boolState[S_OF_A34]) )
	{
		boolState[relevant_evt_OF_A42]  =  true;
	}

	if ( !boolState[required_OF_A0] )
	{
		boolState[required_OF_A43]  =  false;
	}

	if ((boolState[relevant_evt_OF_A0] && ( !boolState[S_OF_A0])) || ( !boolState[S_OF_i_A74]) )
	{
		boolState[relevant_evt_OF_A43]  =  true;
	}

	if ( !boolState[required_OF_A46] )
	{
		boolState[required_OF_A45]  =  false;
	}

	if (boolState[relevant_evt_OF_A46] && ( !boolState[S_OF_A46]) )
	{
		boolState[relevant_evt_OF_A45]  =  true;
	}

	if ( !boolState[required_OF_A0] )
	{
		boolState[required_OF_A46]  =  false;
	}

	if ((boolState[relevant_evt_OF_A0] && ( !boolState[S_OF_A0])) || ( !boolState[S_OF_i_A75]) )
	{
		boolState[relevant_evt_OF_A46]  =  true;
	}

	if ( !boolState[required_OF_A7] )
	{
		boolState[required_OF_A48]  =  false;
	}

	if (boolState[relevant_evt_OF_A7] && ( !boolState[S_OF_A7]) )
	{
		boolState[relevant_evt_OF_A48]  =  true;
	}

	if ( !boolState[required_OF_A4] )
	{
		boolState[required_OF_A49]  =  false;
	}

	if (boolState[relevant_evt_OF_A4] && ( !boolState[S_OF_A4]) )
	{
		boolState[relevant_evt_OF_A49]  =  true;
	}

	if ( !boolState[required_OF_A10] )
	{
		boolState[required_OF_A50]  =  false;
	}

	if (boolState[relevant_evt_OF_A10] && ( !boolState[S_OF_A10]) )
	{
		boolState[relevant_evt_OF_A50]  =  true;
	}

	if ( !boolState[required_OF_A7] )
	{
		boolState[required_OF_A51]  =  false;
	}

	if (boolState[relevant_evt_OF_A7] && ( !boolState[S_OF_A7]) )
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

	if ( !boolState[required_OF_A76] )
	{
		boolState[required_OF_A53]  =  false;
	}

	if (boolState[relevant_evt_OF_A76] && ( !boolState[S_OF_A76]) )
	{
		boolState[relevant_evt_OF_A53]  =  true;
	}

	if ( !boolState[required_OF_A10] )
	{
		boolState[required_OF_A54]  =  false;
	}

	if (boolState[relevant_evt_OF_A10] && ( !boolState[S_OF_A10]) )
	{
		boolState[relevant_evt_OF_A54]  =  true;
	}

	if ( !boolState[required_OF_A16] )
	{
		boolState[required_OF_A55]  =  false;
	}

	if (boolState[relevant_evt_OF_A16] && ( !boolState[S_OF_A16]) )
	{
		boolState[relevant_evt_OF_A55]  =  true;
	}

	if ( !boolState[required_OF_A13] )
	{
		boolState[required_OF_A56]  =  false;
	}

	if (boolState[relevant_evt_OF_A13] && ( !boolState[S_OF_A13]) )
	{
		boolState[relevant_evt_OF_A56]  =  true;
	}

	if ( !boolState[required_OF_A19] )
	{
		boolState[required_OF_A57]  =  false;
	}

	if (boolState[relevant_evt_OF_A19] && ( !boolState[S_OF_A19]) )
	{
		boolState[relevant_evt_OF_A57]  =  true;
	}

	if ( !boolState[required_OF_A16] )
	{
		boolState[required_OF_A58]  =  false;
	}

	if (boolState[relevant_evt_OF_A16] && ( !boolState[S_OF_A16]) )
	{
		boolState[relevant_evt_OF_A58]  =  true;
	}

	if ( !boolState[required_OF_A60] )
	{
		boolState[required_OF_A59]  =  false;
	}

	if (boolState[relevant_evt_OF_A60] && ( !boolState[S_OF_A60]) )
	{
		boolState[relevant_evt_OF_A59]  =  true;
	}

	if ( !boolState[required_OF_A7] )
	{
		boolState[required_OF_A6]  =  false;
	}

	if (boolState[relevant_evt_OF_A7] && ( !boolState[S_OF_A7]) )
	{
		boolState[relevant_evt_OF_A6]  =  true;
	}

	if ( !boolState[required_OF_A76] )
	{
		boolState[required_OF_A60]  =  false;
	}

	if (boolState[relevant_evt_OF_A76] && ( !boolState[S_OF_A76]) )
	{
		boolState[relevant_evt_OF_A60]  =  true;
	}

	if ( !boolState[required_OF_A19] )
	{
		boolState[required_OF_A61]  =  false;
	}

	if (boolState[relevant_evt_OF_A19] && ( !boolState[S_OF_A19]) )
	{
		boolState[relevant_evt_OF_A61]  =  true;
	}

	if ( !boolState[required_OF_A25] )
	{
		boolState[required_OF_A62]  =  false;
	}

	if (boolState[relevant_evt_OF_A25] && ( !boolState[S_OF_A25]) )
	{
		boolState[relevant_evt_OF_A62]  =  true;
	}

	if ( !boolState[required_OF_A22] )
	{
		boolState[required_OF_A63]  =  false;
	}

	if (boolState[relevant_evt_OF_A22] && ( !boolState[S_OF_A22]) )
	{
		boolState[relevant_evt_OF_A63]  =  true;
	}

	if ( !boolState[required_OF_A28] )
	{
		boolState[required_OF_A64]  =  false;
	}

	if (boolState[relevant_evt_OF_A28] && ( !boolState[S_OF_A28]) )
	{
		boolState[relevant_evt_OF_A64]  =  true;
	}

	if ( !boolState[required_OF_A25] )
	{
		boolState[required_OF_A65]  =  false;
	}

	if (boolState[relevant_evt_OF_A25] && ( !boolState[S_OF_A25]) )
	{
		boolState[relevant_evt_OF_A65]  =  true;
	}

	if ( !boolState[required_OF_A67] )
	{
		boolState[required_OF_A66]  =  false;
	}

	if (boolState[relevant_evt_OF_A67] && ( !boolState[S_OF_A67]) )
	{
		boolState[relevant_evt_OF_A66]  =  true;
	}

	if ( !boolState[required_OF_A76] )
	{
		boolState[required_OF_A67]  =  false;
	}

	if (boolState[relevant_evt_OF_A76] && ( !boolState[S_OF_A76]) )
	{
		boolState[relevant_evt_OF_A67]  =  true;
	}

	if ( !boolState[required_OF_A28] )
	{
		boolState[required_OF_A68]  =  false;
	}

	if (boolState[relevant_evt_OF_A28] && ( !boolState[S_OF_A28]) )
	{
		boolState[relevant_evt_OF_A68]  =  true;
	}

	if ( !boolState[required_OF_A4] )
	{
		boolState[required_OF_A69]  =  false;
	}

	if (boolState[relevant_evt_OF_A4] && ( !boolState[S_OF_A4]) )
	{
		boolState[relevant_evt_OF_A69]  =  true;
	}

	if ( !boolState[required_OF_A79] )
	{
		boolState[required_OF_A7]  =  false;
	}

	if ((boolState[relevant_evt_OF_A79] && ( !boolState[S_OF_A79])) || (( !boolState[S_OF_i_A49])   || ( !boolState[S_OF_i_A50])) )
	{
		boolState[relevant_evt_OF_A7]  =  true;
	}

	if ( !boolState[required_OF_A13] )
	{
		boolState[required_OF_A70]  =  false;
	}

	if (boolState[relevant_evt_OF_A13] && ( !boolState[S_OF_A13]) )
	{
		boolState[relevant_evt_OF_A70]  =  true;
	}

	if ( !boolState[required_OF_A22] )
	{
		boolState[required_OF_A71]  =  false;
	}

	if (boolState[relevant_evt_OF_A22] && ( !boolState[S_OF_A22]) )
	{
		boolState[relevant_evt_OF_A71]  =  true;
	}

	if ( !boolState[required_OF_A31] )
	{
		boolState[required_OF_A72]  =  false;
	}

	if (boolState[relevant_evt_OF_A31] && ( !boolState[S_OF_A31]) )
	{
		boolState[relevant_evt_OF_A72]  =  true;
	}

	if ( !boolState[required_OF_A31] )
	{
		boolState[required_OF_A73]  =  false;
	}

	if (boolState[relevant_evt_OF_A31] && ( !boolState[S_OF_A31]) )
	{
		boolState[relevant_evt_OF_A73]  =  true;
	}

	if ( !boolState[required_OF_A31] )
	{
		boolState[required_OF_A74]  =  false;
	}

	if (boolState[relevant_evt_OF_A31] && ( !boolState[S_OF_A31]) )
	{
		boolState[relevant_evt_OF_A74]  =  true;
	}

	if ( !boolState[required_OF_A31] )
	{
		boolState[required_OF_A75]  =  false;
	}

	if (boolState[relevant_evt_OF_A31] && ( !boolState[S_OF_A31]) )
	{
		boolState[relevant_evt_OF_A75]  =  true;
	}

	if ( !boolState[required_OF_A31] )
	{
		boolState[required_OF_A76]  =  false;
	}

	if (boolState[relevant_evt_OF_A31] && ( !boolState[S_OF_A31]) )
	{
		boolState[relevant_evt_OF_A76]  =  true;
	}

	if ( !boolState[required_OF_A34] )
	{
		boolState[required_OF_A77]  =  false;
	}

	if (boolState[relevant_evt_OF_A34] && ( !boolState[S_OF_A34]) )
	{
		boolState[relevant_evt_OF_A77]  =  true;
	}

	if ( !boolState[required_OF_A34] )
	{
		boolState[required_OF_A78]  =  false;
	}

	if (boolState[relevant_evt_OF_A34] && ( !boolState[S_OF_A34]) )
	{
		boolState[relevant_evt_OF_A78]  =  true;
	}

	if ( !boolState[required_OF_A82] )
	{
		boolState[required_OF_A79]  =  false;
	}

	if (boolState[relevant_evt_OF_A82] && ( !boolState[S_OF_A82]) )
	{
		boolState[relevant_evt_OF_A79]  =  true;
	}

	if ( !boolState[required_OF_A82] )
	{
		boolState[required_OF_A80]  =  false;
	}

	if (boolState[relevant_evt_OF_A82] && ( !boolState[S_OF_A82]) )
	{
		boolState[relevant_evt_OF_A80]  =  true;
	}

	if ( !boolState[required_OF_A82] )
	{
		boolState[required_OF_A81]  =  false;
	}

	if (boolState[relevant_evt_OF_A82] && ( !boolState[S_OF_A82]) )
	{
		boolState[relevant_evt_OF_A81]  =  true;
	}

	if ( !boolState[required_OF_A0] )
	{
		boolState[required_OF_A82]  =  false;
	}

	if (boolState[relevant_evt_OF_A0] && ( !boolState[S_OF_A0]) )
	{
		boolState[relevant_evt_OF_A82]  =  true;
	}

	if ( !boolState[S_OF_A85] )
	{
		boolState[required_OF_A83]  =  false;
	}

	if (boolState[relevant_evt_OF_A86] && ( !boolState[S_OF_A86]) )
	{
		boolState[relevant_evt_OF_A83]  =  true;
	}

	if ( !boolState[required_OF_A93] )
	{
		boolState[required_OF_A84]  =  false;
	}

	if (boolState[relevant_evt_OF_A93] && ( !boolState[S_OF_A93]) )
	{
		boolState[relevant_evt_OF_A84]  =  true;
	}

	if ( !boolState[required_OF_A86] )
	{
		boolState[required_OF_A85]  =  false;
	}

	if ((boolState[relevant_evt_OF_A86] && ( !boolState[S_OF_A86])) || ( !boolState[S_OF_A83]) )
	{
		boolState[relevant_evt_OF_A85]  =  true;
	}

	if ( !boolState[required_OF_A93] )
	{
		boolState[required_OF_A86]  =  false;
	}

	if (boolState[relevant_evt_OF_A93] && ( !boolState[S_OF_A93]) )
	{
		boolState[relevant_evt_OF_A86]  =  true;
	}

	if ( !boolState[S_OF_A90] )
	{
		boolState[required_OF_A88]  =  false;
	}

	if (boolState[relevant_evt_OF_A91] && ( !boolState[S_OF_A91]) )
	{
		boolState[relevant_evt_OF_A88]  =  true;
	}

	if ( !boolState[required_OF_A93] )
	{
		boolState[required_OF_A89]  =  false;
	}

	if (boolState[relevant_evt_OF_A93] && ( !boolState[S_OF_A93]) )
	{
		boolState[relevant_evt_OF_A89]  =  true;
	}

	if ( !boolState[required_OF_A10] )
	{
		boolState[required_OF_A9]  =  false;
	}

	if (boolState[relevant_evt_OF_A10] && ( !boolState[S_OF_A10]) )
	{
		boolState[relevant_evt_OF_A9]  =  true;
	}

	if ( !boolState[required_OF_A91] )
	{
		boolState[required_OF_A90]  =  false;
	}

	if ((boolState[relevant_evt_OF_A91] && ( !boolState[S_OF_A91])) || ( !boolState[S_OF_A88]) )
	{
		boolState[relevant_evt_OF_A90]  =  true;
	}

	if ( !boolState[required_OF_A93] )
	{
		boolState[required_OF_A91]  =  false;
	}

	if (boolState[relevant_evt_OF_A93] && ( !boolState[S_OF_A93]) )
	{
		boolState[relevant_evt_OF_A91]  =  true;
	}

	if ((( !boolState[required_OF_A10]) && ( !boolState[required_OF_A4])) && ( !  boolState[required_OF_A7]) )
	{
		boolState[required_OF_A93]  =  false;
	}

	if (((boolState[relevant_evt_OF_A10] && ( !boolState[S_OF_A10])) || (boolState[relevant_evt_OF_A4] && ( !boolState[S_OF_A4]))) || (boolState[relevant_evt_OF_A7] && ( !boolState[S_OF_A7])) )
	{
		boolState[relevant_evt_OF_A93]  =  true;
	}

	if ( !boolState[S_OF_A96] )
	{
		boolState[required_OF_A94]  =  false;
	}

	if (boolState[relevant_evt_OF_A97] && ( !boolState[S_OF_A97]) )
	{
		boolState[relevant_evt_OF_A94]  =  true;
	}

	if ( !boolState[required_OF_A104] )
	{
		boolState[required_OF_A95]  =  false;
	}

	if (boolState[relevant_evt_OF_A104] && ( !boolState[S_OF_A104]) )
	{
		boolState[relevant_evt_OF_A95]  =  true;
	}

	if ( !boolState[required_OF_A97] )
	{
		boolState[required_OF_A96]  =  false;
	}

	if ((boolState[relevant_evt_OF_A97] && ( !boolState[S_OF_A97])) || ( !boolState[S_OF_A94]) )
	{
		boolState[relevant_evt_OF_A96]  =  true;
	}

	if ( !boolState[required_OF_A104] )
	{
		boolState[required_OF_A97]  =  false;
	}

	if (boolState[relevant_evt_OF_A104] && ( !boolState[S_OF_A104]) )
	{
		boolState[relevant_evt_OF_A97]  =  true;
	}

	if ( !boolState[S_OF_A101] )
	{
		boolState[required_OF_A99]  =  false;
	}

	if (boolState[relevant_evt_OF_A102] && ( !boolState[S_OF_A102]) )
	{
		boolState[relevant_evt_OF_A99]  =  true;
	}



	boolState[relevant_evt_OF_UE_1]  =  true  ;

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

	if ( !boolState[required_OF_A59] )
	{
		boolState[required_OF_f_A59]  =  false;
	}

	if (boolState[relevant_evt_OF_A59] && ( !boolState[S_OF_A59]) )
	{
		boolState[relevant_evt_OF_f_A59]  =  true;
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

	if (( !boolState[required_OF_A48]) || ( !boolState[S_OF_A4]) )
	{
		boolState[required_OF_i_A48]  =  false;
	}

	if (boolState[relevant_evt_OF_A48] && ( !boolState[S_OF_A48]) )
	{
		boolState[relevant_evt_OF_i_A48]  =  true;
	}

	if (( !boolState[required_OF_A49]) || ( !boolState[S_OF_A7]) )
	{
		boolState[required_OF_i_A49]  =  false;
	}

	if (boolState[relevant_evt_OF_A49] && ( !boolState[S_OF_A49]) )
	{
		boolState[relevant_evt_OF_i_A49]  =  true;
	}

	if (( !boolState[required_OF_A50]) || ( !boolState[S_OF_A7]) )
	{
		boolState[required_OF_i_A50]  =  false;
	}

	if (boolState[relevant_evt_OF_A50] && ( !boolState[S_OF_A50]) )
	{
		boolState[relevant_evt_OF_i_A50]  =  true;
	}

	if (( !boolState[required_OF_A51]) || ( !boolState[S_OF_A10]) )
	{
		boolState[required_OF_i_A51]  =  false;
	}

	if (boolState[relevant_evt_OF_A51] && ( !boolState[S_OF_A51]) )
	{
		boolState[relevant_evt_OF_i_A51]  =  true;
	}

	if (( !boolState[required_OF_A52]) || ( !boolState[S_OF_A10]) )
	{
		boolState[required_OF_i_A52]  =  false;
	}

	if (boolState[relevant_evt_OF_A52] && ( !boolState[S_OF_A52]) )
	{
		boolState[relevant_evt_OF_i_A52]  =  true;
	}

	if (( !boolState[required_OF_A54]) || ( !boolState[S_OF_A31]) )
	{
		boolState[required_OF_i_A54]  =  false;
	}

	if (boolState[relevant_evt_OF_A54] && ( !boolState[S_OF_A54]) )
	{
		boolState[relevant_evt_OF_i_A54]  =  true;
	}

	if (( !boolState[required_OF_A55]) || ( !boolState[S_OF_A13]) )
	{
		boolState[required_OF_i_A55]  =  false;
	}

	if (boolState[relevant_evt_OF_A55] && ( !boolState[S_OF_A55]) )
	{
		boolState[relevant_evt_OF_i_A55]  =  true;
	}

	if (( !boolState[required_OF_A56]) || ( !boolState[S_OF_A16]) )
	{
		boolState[required_OF_i_A56]  =  false;
	}

	if (boolState[relevant_evt_OF_A56] && ( !boolState[S_OF_A56]) )
	{
		boolState[relevant_evt_OF_i_A56]  =  true;
	}

	if (( !boolState[required_OF_A57]) || ( !boolState[S_OF_A16]) )
	{
		boolState[required_OF_i_A57]  =  false;
	}

	if (boolState[relevant_evt_OF_A57] && ( !boolState[S_OF_A57]) )
	{
		boolState[relevant_evt_OF_i_A57]  =  true;
	}

	if (( !boolState[required_OF_A58]) || ( !boolState[S_OF_A19]) )
	{
		boolState[required_OF_i_A58]  =  false;
	}

	if (boolState[relevant_evt_OF_A58] && ( !boolState[S_OF_A58]) )
	{
		boolState[relevant_evt_OF_i_A58]  =  true;
	}

	if (( !boolState[required_OF_A59]) || ( !boolState[S_OF_A19]) )
	{
		boolState[required_OF_i_A59]  =  false;
	}

	if (boolState[relevant_evt_OF_A59] && ( !boolState[S_OF_A59]) )
	{
		boolState[relevant_evt_OF_i_A59]  =  true;
	}

	if (( !boolState[required_OF_A61]) || ( !boolState[S_OF_A31]) )
	{
		boolState[required_OF_i_A61]  =  false;
	}

	if (boolState[relevant_evt_OF_A61] && ( !boolState[S_OF_A61]) )
	{
		boolState[relevant_evt_OF_i_A61]  =  true;
	}

	if (( !boolState[required_OF_A62]) || ( !boolState[S_OF_A22]) )
	{
		boolState[required_OF_i_A62]  =  false;
	}

	if (boolState[relevant_evt_OF_A62] && ( !boolState[S_OF_A62]) )
	{
		boolState[relevant_evt_OF_i_A62]  =  true;
	}

	if (( !boolState[required_OF_A63]) || ( !boolState[S_OF_A25]) )
	{
		boolState[required_OF_i_A63]  =  false;
	}

	if (boolState[relevant_evt_OF_A63] && ( !boolState[S_OF_A63]) )
	{
		boolState[relevant_evt_OF_i_A63]  =  true;
	}

	if (( !boolState[required_OF_A64]) || ( !boolState[S_OF_A25]) )
	{
		boolState[required_OF_i_A64]  =  false;
	}

	if (boolState[relevant_evt_OF_A64] && ( !boolState[S_OF_A64]) )
	{
		boolState[relevant_evt_OF_i_A64]  =  true;
	}

	if (( !boolState[required_OF_A65]) || ( !boolState[S_OF_A28]) )
	{
		boolState[required_OF_i_A65]  =  false;
	}

	if (boolState[relevant_evt_OF_A65] && ( !boolState[S_OF_A65]) )
	{
		boolState[relevant_evt_OF_i_A65]  =  true;
	}

	if (( !boolState[required_OF_A66]) || ( !boolState[S_OF_A28]) )
	{
		boolState[required_OF_i_A66]  =  false;
	}

	if (boolState[relevant_evt_OF_A66] && ( !boolState[S_OF_A66]) )
	{
		boolState[relevant_evt_OF_i_A66]  =  true;
	}

	if (( !boolState[required_OF_A68]) || ( !boolState[S_OF_A31]) )
	{
		boolState[required_OF_i_A68]  =  false;
	}

	if (boolState[relevant_evt_OF_A68] && ( !boolState[S_OF_A68]) )
	{
		boolState[relevant_evt_OF_i_A68]  =  true;
	}

	if (( !boolState[required_OF_A69]) || ( !boolState[S_OF_A1]) )
	{
		boolState[required_OF_i_A69]  =  false;
	}

	if (boolState[relevant_evt_OF_A69] && ( !boolState[S_OF_A69]) )
	{
		boolState[relevant_evt_OF_i_A69]  =  true;
	}

	if (( !boolState[required_OF_A70]) || ( !boolState[S_OF_A1]) )
	{
		boolState[required_OF_i_A70]  =  false;
	}

	if (boolState[relevant_evt_OF_A70] && ( !boolState[S_OF_A70]) )
	{
		boolState[relevant_evt_OF_i_A70]  =  true;
	}

	if (( !boolState[required_OF_A71]) || ( !boolState[S_OF_A1]) )
	{
		boolState[required_OF_i_A71]  =  false;
	}

	if (boolState[relevant_evt_OF_A71] && ( !boolState[S_OF_A71]) )
	{
		boolState[relevant_evt_OF_i_A71]  =  true;
	}

	if (( !boolState[required_OF_A72]) || ( !boolState[S_OF_A35]) )
	{
		boolState[required_OF_i_A72]  =  false;
	}

	if (boolState[relevant_evt_OF_A72] && ( !boolState[S_OF_A72]) )
	{
		boolState[relevant_evt_OF_i_A72]  =  true;
	}

	if (( !boolState[required_OF_A73]) || ( !boolState[S_OF_A39]) )
	{
		boolState[required_OF_i_A73]  =  false;
	}

	if (boolState[relevant_evt_OF_A73] && ( !boolState[S_OF_A73]) )
	{
		boolState[relevant_evt_OF_i_A73]  =  true;
	}

	if (( !boolState[required_OF_A74]) || ( !boolState[S_OF_A43]) )
	{
		boolState[required_OF_i_A74]  =  false;
	}

	if (boolState[relevant_evt_OF_A74] && ( !boolState[S_OF_A74]) )
	{
		boolState[relevant_evt_OF_i_A74]  =  true;
	}

	if (( !boolState[required_OF_A75]) || ( !boolState[S_OF_A46]) )
	{
		boolState[required_OF_i_A75]  =  false;
	}

	if (boolState[relevant_evt_OF_A75] && ( !boolState[S_OF_A75]) )
	{
		boolState[relevant_evt_OF_i_A75]  =  true;
	}

}


void storm::figaro::FigaroProgram_vgs_1_Trim_article_No_repair::runOnceInteractionStep_propagate_leaves()
{


	boolState[already_S_OF_A0]  =  boolState[S_OF_A0]  ;



	boolState[already_S_OF_A1]  =  boolState[S_OF_A1]  ;



	boolState[already_S_OF_A10]  =  boolState[S_OF_A10]  ;



	boolState[already_S_OF_A100]  =  boolState[S_OF_A100]  ;



	boolState[already_S_OF_A101]  =  boolState[S_OF_A101]  ;



	boolState[already_S_OF_A102]  =  boolState[S_OF_A102]  ;



	boolState[already_S_OF_A104]  =  boolState[S_OF_A104]  ;



	boolState[already_S_OF_A105]  =  boolState[S_OF_A105]  ;



	boolState[already_S_OF_A106]  =  boolState[S_OF_A106]  ;



	boolState[already_S_OF_A107]  =  boolState[S_OF_A107]  ;



	boolState[already_S_OF_A108]  =  boolState[S_OF_A108]  ;



	boolState[already_S_OF_A110]  =  boolState[S_OF_A110]  ;



	boolState[already_S_OF_A111]  =  boolState[S_OF_A111]  ;



	boolState[already_S_OF_A112]  =  boolState[S_OF_A112]  ;



	boolState[already_S_OF_A113]  =  boolState[S_OF_A113]  ;



	boolState[already_S_OF_A115]  =  boolState[S_OF_A115]  ;



	boolState[already_S_OF_A116]  =  boolState[S_OF_A116]  ;



	boolState[already_S_OF_A117]  =  boolState[S_OF_A117]  ;



	boolState[already_S_OF_A118]  =  boolState[S_OF_A118]  ;



	boolState[already_S_OF_A119]  =  boolState[S_OF_A119]  ;



	boolState[already_S_OF_A12]  =  boolState[S_OF_A12]  ;



	boolState[already_S_OF_A121]  =  boolState[S_OF_A121]  ;



	boolState[already_S_OF_A122]  =  boolState[S_OF_A122]  ;



	boolState[already_S_OF_A123]  =  boolState[S_OF_A123]  ;



	boolState[already_S_OF_A124]  =  boolState[S_OF_A124]  ;



	boolState[already_S_OF_A126]  =  boolState[S_OF_A126]  ;



	boolState[already_S_OF_A127]  =  boolState[S_OF_A127]  ;



	boolState[already_S_OF_A128]  =  boolState[S_OF_A128]  ;



	boolState[already_S_OF_A129]  =  boolState[S_OF_A129]  ;



	boolState[already_S_OF_A13]  =  boolState[S_OF_A13]  ;



	boolState[already_S_OF_A130]  =  boolState[S_OF_A130]  ;



	boolState[already_S_OF_A132]  =  boolState[S_OF_A132]  ;



	boolState[already_S_OF_A133]  =  boolState[S_OF_A133]  ;



	boolState[already_S_OF_A134]  =  boolState[S_OF_A134]  ;



	boolState[already_S_OF_A135]  =  boolState[S_OF_A135]  ;



	boolState[already_S_OF_A137]  =  boolState[S_OF_A137]  ;



	boolState[already_S_OF_A15]  =  boolState[S_OF_A15]  ;



	boolState[already_S_OF_A16]  =  boolState[S_OF_A16]  ;



	boolState[already_S_OF_A18]  =  boolState[S_OF_A18]  ;



	boolState[already_S_OF_A19]  =  boolState[S_OF_A19]  ;



	boolState[already_S_OF_A21]  =  boolState[S_OF_A21]  ;



	boolState[already_S_OF_A22]  =  boolState[S_OF_A22]  ;



	boolState[already_S_OF_A24]  =  boolState[S_OF_A24]  ;



	boolState[already_S_OF_A25]  =  boolState[S_OF_A25]  ;



	boolState[already_S_OF_A27]  =  boolState[S_OF_A27]  ;



	boolState[already_S_OF_A28]  =  boolState[S_OF_A28]  ;



	boolState[already_S_OF_A3]  =  boolState[S_OF_A3]  ;



	boolState[already_S_OF_A30]  =  boolState[S_OF_A30]  ;



	boolState[already_S_OF_A31]  =  boolState[S_OF_A31]  ;



	boolState[already_S_OF_A33]  =  boolState[S_OF_A33]  ;



	boolState[already_S_OF_A34]  =  boolState[S_OF_A34]  ;



	boolState[already_S_OF_A35]  =  boolState[S_OF_A35]  ;



	boolState[already_S_OF_A37]  =  boolState[S_OF_A37]  ;



	boolState[already_S_OF_A38]  =  boolState[S_OF_A38]  ;



	boolState[already_S_OF_A39]  =  boolState[S_OF_A39]  ;



	boolState[already_S_OF_A4]  =  boolState[S_OF_A4]  ;



	boolState[already_S_OF_A41]  =  boolState[S_OF_A41]  ;



	boolState[already_S_OF_A42]  =  boolState[S_OF_A42]  ;



	boolState[already_S_OF_A43]  =  boolState[S_OF_A43]  ;



	boolState[already_S_OF_A45]  =  boolState[S_OF_A45]  ;



	boolState[already_S_OF_A46]  =  boolState[S_OF_A46]  ;



	boolState[already_S_OF_A48]  =  boolState[S_OF_A48]  ;



	boolState[already_S_OF_A49]  =  boolState[S_OF_A49]  ;



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



	boolState[already_S_OF_A80]  =  boolState[S_OF_A80]  ;



	boolState[already_S_OF_A81]  =  boolState[S_OF_A81]  ;



	boolState[already_S_OF_A82]  =  boolState[S_OF_A82]  ;



	boolState[already_S_OF_A83]  =  boolState[S_OF_A83]  ;



	boolState[already_S_OF_A84]  =  boolState[S_OF_A84]  ;



	boolState[already_S_OF_A85]  =  boolState[S_OF_A85]  ;



	boolState[already_S_OF_A86]  =  boolState[S_OF_A86]  ;



	boolState[already_S_OF_A88]  =  boolState[S_OF_A88]  ;



	boolState[already_S_OF_A89]  =  boolState[S_OF_A89]  ;



	boolState[already_S_OF_A9]  =  boolState[S_OF_A9]  ;



	boolState[already_S_OF_A90]  =  boolState[S_OF_A90]  ;



	boolState[already_S_OF_A91]  =  boolState[S_OF_A91]  ;



	boolState[already_S_OF_A93]  =  boolState[S_OF_A93]  ;



	boolState[already_S_OF_A94]  =  boolState[S_OF_A94]  ;



	boolState[already_S_OF_A95]  =  boolState[S_OF_A95]  ;



	boolState[already_S_OF_A96]  =  boolState[S_OF_A96]  ;



	boolState[already_S_OF_A97]  =  boolState[S_OF_A97]  ;



	boolState[already_S_OF_A99]  =  boolState[S_OF_A99]  ;



	boolState[already_S_OF_UE_1]  =  boolState[S_OF_UE_1]  ;



	boolState[already_S_OF_f_A48]  =  boolState[S_OF_f_A48]  ;



	boolState[already_S_OF_f_A49]  =  boolState[S_OF_f_A49]  ;



	boolState[already_S_OF_f_A50]  =  boolState[S_OF_f_A50]  ;



	boolState[already_S_OF_f_A51]  =  boolState[S_OF_f_A51]  ;



	boolState[already_S_OF_f_A52]  =  boolState[S_OF_f_A52]  ;



	boolState[already_S_OF_f_A54]  =  boolState[S_OF_f_A54]  ;



	boolState[already_S_OF_f_A55]  =  boolState[S_OF_f_A55]  ;



	boolState[already_S_OF_f_A56]  =  boolState[S_OF_f_A56]  ;



	boolState[already_S_OF_f_A57]  =  boolState[S_OF_f_A57]  ;



	boolState[already_S_OF_f_A58]  =  boolState[S_OF_f_A58]  ;



	boolState[already_S_OF_f_A59]  =  boolState[S_OF_f_A59]  ;



	boolState[already_S_OF_f_A61]  =  boolState[S_OF_f_A61]  ;



	boolState[already_S_OF_f_A62]  =  boolState[S_OF_f_A62]  ;



	boolState[already_S_OF_f_A63]  =  boolState[S_OF_f_A63]  ;



	boolState[already_S_OF_f_A64]  =  boolState[S_OF_f_A64]  ;



	boolState[already_S_OF_f_A65]  =  boolState[S_OF_f_A65]  ;



	boolState[already_S_OF_f_A66]  =  boolState[S_OF_f_A66]  ;



	boolState[already_S_OF_f_A68]  =  boolState[S_OF_f_A68]  ;



	boolState[already_S_OF_f_A69]  =  boolState[S_OF_f_A69]  ;



	boolState[already_S_OF_f_A70]  =  boolState[S_OF_f_A70]  ;



	boolState[already_S_OF_f_A71]  =  boolState[S_OF_f_A71]  ;



	boolState[already_S_OF_f_A72]  =  boolState[S_OF_f_A72]  ;



	boolState[already_S_OF_f_A73]  =  boolState[S_OF_f_A73]  ;



	boolState[already_S_OF_f_A74]  =  boolState[S_OF_f_A74]  ;



	boolState[already_S_OF_f_A75]  =  boolState[S_OF_f_A75]  ;



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



	boolState[already_S_OF_i_A59]  =  boolState[S_OF_i_A59]  ;

	if (( !boolState[required_OF_i_A59]) && (( !boolState[already_standby_OF_i_A59]) && ( !boolState[already_required_OF_i_A59])) )
	{
		boolState[already_standby_OF_i_A59]  =  true;
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

}


void storm::figaro::FigaroProgram_vgs_1_Trim_article_No_repair::runOnceInteractionStep_tops()
{
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

	if (boolState[required_OF_i_A59] && boolState[already_standby_OF_i_A59] )
	{
		boolState[to_be_fired_OF_i_A59]  =  true;
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

}

void
storm::figaro::FigaroProgram_vgs_1_Trim_article_No_repair::runInteractions() {
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
    }void storm::figaro::FigaroProgram_vgs_1_Trim_article_No_repair::printstatetuple(){

                std::cout<<"\n State information: (";
                for (int i=0; i<boolFailureState.size(); i++)
                    {
                    std::cout<<boolFailureState.at(i);
                    }
                std::cout<<")";

            }
        int_fast64_t storm::figaro::FigaroProgram_vgs_1_Trim_article_No_repair::stateSize() const{
            return numBoolState;
}
        void storm::figaro::FigaroProgram_vgs_1_Trim_article_No_repair::fireinsttransitiongroup(std::string user_input_ins)

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
    