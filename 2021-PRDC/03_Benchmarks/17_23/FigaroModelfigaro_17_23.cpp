#include <iostream>
#include "FigaroModelfigaro_17_23.h"

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
        
void storm::figaro::FigaroProgram_figaro_17_23::init()
{
	//cout <<">>>>>>>>>>>>>>>>>>>> Initialization of variables <<<<<<<<<<<<<<<<<<<<<<<" << endl;

	REINITIALISATION_OF_required_OF_A1 = true;
	boolState[already_S_OF_A1] = false;
	REINITIALISATION_OF_S_OF_A1 = false;
	REINITIALISATION_OF_relevant_evt_OF_A1 = false;
	boolState[failF_OF_A1] = false;
	REINITIALISATION_OF_required_OF_A10 = true;
	boolState[already_S_OF_A10] = false;
	REINITIALISATION_OF_S_OF_A10 = false;
	REINITIALISATION_OF_relevant_evt_OF_A10 = false;
	REINITIALISATION_OF_required_OF_A11 = true;
	boolState[already_S_OF_A11] = false;
	REINITIALISATION_OF_S_OF_A11 = false;
	REINITIALISATION_OF_relevant_evt_OF_A11 = false;
	REINITIALISATION_OF_required_OF_A12 = true;
	boolState[already_S_OF_A12] = false;
	REINITIALISATION_OF_S_OF_A12 = false;
	REINITIALISATION_OF_relevant_evt_OF_A12 = false;
	REINITIALISATION_OF_required_OF_A13 = true;
	boolState[already_S_OF_A13] = false;
	REINITIALISATION_OF_S_OF_A13 = false;
	REINITIALISATION_OF_relevant_evt_OF_A13 = false;
	REINITIALISATION_OF_required_OF_A2 = true;
	boolState[already_S_OF_A2] = false;
	REINITIALISATION_OF_S_OF_A2 = false;
	REINITIALISATION_OF_relevant_evt_OF_A2 = false;
	boolState[failF_OF_A2] = false;
	REINITIALISATION_OF_required_OF_A3 = true;
	boolState[already_S_OF_A3] = false;
	REINITIALISATION_OF_S_OF_A3 = false;
	REINITIALISATION_OF_relevant_evt_OF_A3 = false;
	boolState[failF_OF_A3] = false;
	REINITIALISATION_OF_required_OF_A4 = true;
	boolState[already_S_OF_A4] = false;
	REINITIALISATION_OF_S_OF_A4 = false;
	REINITIALISATION_OF_relevant_evt_OF_A4 = false;
	REINITIALISATION_OF_required_OF_A5 = true;
	boolState[already_S_OF_A5] = false;
	REINITIALISATION_OF_S_OF_A5 = false;
	REINITIALISATION_OF_relevant_evt_OF_A5 = false;
	REINITIALISATION_OF_required_OF_A6 = true;
	boolState[already_S_OF_A6] = false;
	REINITIALISATION_OF_S_OF_A6 = false;
	REINITIALISATION_OF_relevant_evt_OF_A6 = false;
	REINITIALISATION_OF_required_OF_A7 = true;
	boolState[already_S_OF_A7] = false;
	REINITIALISATION_OF_S_OF_A7 = false;
	REINITIALISATION_OF_relevant_evt_OF_A7 = false;
	REINITIALISATION_OF_required_OF_A8 = true;
	boolState[already_S_OF_A8] = false;
	REINITIALISATION_OF_S_OF_A8 = false;
	REINITIALISATION_OF_relevant_evt_OF_A8 = false;
	REINITIALISATION_OF_required_OF_A9 = true;
	boolState[already_S_OF_A9] = false;
	REINITIALISATION_OF_S_OF_A9 = false;
	REINITIALISATION_OF_relevant_evt_OF_A9 = false;
	REINITIALISATION_OF_required_OF_D11 = true;
	boolState[already_S_OF_D11] = false;
	REINITIALISATION_OF_S_OF_D11 = false;
	REINITIALISATION_OF_relevant_evt_OF_D11 = false;
	boolState[failF_OF_D11] = false;
	REINITIALISATION_OF_required_OF_D12 = true;
	boolState[already_S_OF_D12] = false;
	REINITIALISATION_OF_S_OF_D12 = false;
	REINITIALISATION_OF_relevant_evt_OF_D12 = false;
	boolState[failF_OF_D12] = false;
	boolState[failS_OF_D12] = false;
	REINITIALISATION_OF_required_OF_D21 = true;
	boolState[already_S_OF_D21] = false;
	REINITIALISATION_OF_S_OF_D21 = false;
	REINITIALISATION_OF_relevant_evt_OF_D21 = false;
	boolState[failF_OF_D21] = false;
	REINITIALISATION_OF_required_OF_D22 = true;
	boolState[already_S_OF_D22] = false;
	REINITIALISATION_OF_S_OF_D22 = false;
	REINITIALISATION_OF_relevant_evt_OF_D22 = false;
	boolState[failF_OF_D22] = false;
	boolState[failS_OF_D22] = false;
	REINITIALISATION_OF_required_OF_M1 = true;
	boolState[already_S_OF_M1] = false;
	REINITIALISATION_OF_S_OF_M1 = false;
	REINITIALISATION_OF_relevant_evt_OF_M1 = false;
	boolState[failF_OF_M1] = false;
	REINITIALISATION_OF_required_OF_M2 = true;
	boolState[already_S_OF_M2] = false;
	REINITIALISATION_OF_S_OF_M2 = false;
	REINITIALISATION_OF_relevant_evt_OF_M2 = false;
	boolState[failF_OF_M2] = false;
	REINITIALISATION_OF_required_OF_M3 = true;
	boolState[already_S_OF_M3] = false;
	REINITIALISATION_OF_S_OF_M3 = false;
	REINITIALISATION_OF_relevant_evt_OF_M3 = false;
	boolState[failF_OF_M3] = false;
	boolState[failS_OF_M3] = false;
	REINITIALISATION_OF_required_OF_N = true;
	boolState[already_S_OF_N] = false;
	REINITIALISATION_OF_S_OF_N = false;
	REINITIALISATION_OF_relevant_evt_OF_N = false;
	boolState[failF_OF_N] = false;
	REINITIALISATION_OF_required_OF_OR_1 = true;
	boolState[already_S_OF_OR_1] = false;
	REINITIALISATION_OF_S_OF_OR_1 = false;
	REINITIALISATION_OF_relevant_evt_OF_OR_1 = false;
	REINITIALISATION_OF_required_OF_UE_1 = true;
	boolState[already_S_OF_UE_1] = false;
	REINITIALISATION_OF_S_OF_UE_1 = false;
	REINITIALISATION_OF_relevant_evt_OF_UE_1 = false;

	/* ---------- DECLARATION OF OCCURRENCE RULES FIRING FLAGS ------------ */
	FIRE_xx10_OF_A1 = false;
	FIRE_xx11_OF_A1 = false;
	FIRE_xx10_OF_A2 = false;
	FIRE_xx11_OF_A2 = false;
	FIRE_xx10_OF_A3 = false;
	FIRE_xx11_OF_A3 = false;
	FIRE_xx10_OF_D11 = false;
	FIRE_xx11_OF_D11 = false;
	FIRE_xx17_OF_D12 = false;
	FIRE_xx18_OF_D12 = false;
	FIRE_xx19_OF_D12 = false;
	FIRE_xx10_OF_D21 = false;
	FIRE_xx11_OF_D21 = false;
	FIRE_xx17_OF_D22 = false;
	FIRE_xx18_OF_D22 = false;
	FIRE_xx19_OF_D22 = false;
	FIRE_xx10_OF_M1 = false;
	FIRE_xx11_OF_M1 = false;
	FIRE_xx10_OF_M2 = false;
	FIRE_xx11_OF_M2 = false;
	FIRE_xx17_OF_M3 = false;
	FIRE_xx18_OF_M3 = false;
	FIRE_xx19_OF_M3 = false;
	FIRE_xx10_OF_N = false;
	FIRE_xx11_OF_N = false;

}

void storm::figaro::FigaroProgram_figaro_17_23::saveCurrentState()
{
	// cout <<">>>>>>>>>>>>>>>>>>>> Saving current state  <<<<<<<<<<<<<<<<<<<<<<<" << endl;
	backupBoolState = boolState ;
	backupFloatState = floatState ;
	backupIntState = intState ;
	backupEnumState = enumState ;
}

int storm::figaro::FigaroProgram_figaro_17_23::compareStates()
{
	// cout <<">>>>>>>>>>>>>>>>>>>> Comparing state with previous one (return number of differences) <<<<<<<<<<<<<<<<<<<<<<<" << endl;

	return (backupBoolState != boolState) + (backupFloatState != floatState) + (backupIntState != intState) + (backupEnumState != enumState); 
}

void storm::figaro::FigaroProgram_figaro_17_23::printState()
{
	//cout <<"\n==================== Print of the current state :  ====================" << endl;

	//cout << "Attribute :  boolState[required_OF_A1] | Value : " << boolState[required_OF_A1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A1] | Value : " << boolState[already_S_OF_A1] << endl;
	//cout << "Attribute :  boolState[S_OF_A1] | Value : " << boolState[S_OF_A1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A1] | Value : " << boolState[relevant_evt_OF_A1] << endl;
	//cout << "Attribute :  boolState[failF_OF_A1] | Value : " << boolState[failF_OF_A1] << endl;
	//cout << "Attribute :  boolState[required_OF_A10] | Value : " << boolState[required_OF_A10] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A10] | Value : " << boolState[already_S_OF_A10] << endl;
	//cout << "Attribute :  boolState[S_OF_A10] | Value : " << boolState[S_OF_A10] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A10] | Value : " << boolState[relevant_evt_OF_A10] << endl;
	//cout << "Attribute :  boolState[required_OF_A11] | Value : " << boolState[required_OF_A11] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A11] | Value : " << boolState[already_S_OF_A11] << endl;
	//cout << "Attribute :  boolState[S_OF_A11] | Value : " << boolState[S_OF_A11] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A11] | Value : " << boolState[relevant_evt_OF_A11] << endl;
	//cout << "Attribute :  boolState[required_OF_A12] | Value : " << boolState[required_OF_A12] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A12] | Value : " << boolState[already_S_OF_A12] << endl;
	//cout << "Attribute :  boolState[S_OF_A12] | Value : " << boolState[S_OF_A12] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A12] | Value : " << boolState[relevant_evt_OF_A12] << endl;
	//cout << "Attribute :  boolState[required_OF_A13] | Value : " << boolState[required_OF_A13] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A13] | Value : " << boolState[already_S_OF_A13] << endl;
	//cout << "Attribute :  boolState[S_OF_A13] | Value : " << boolState[S_OF_A13] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A13] | Value : " << boolState[relevant_evt_OF_A13] << endl;
	//cout << "Attribute :  boolState[required_OF_A2] | Value : " << boolState[required_OF_A2] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A2] | Value : " << boolState[already_S_OF_A2] << endl;
	//cout << "Attribute :  boolState[S_OF_A2] | Value : " << boolState[S_OF_A2] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A2] | Value : " << boolState[relevant_evt_OF_A2] << endl;
	//cout << "Attribute :  boolState[failF_OF_A2] | Value : " << boolState[failF_OF_A2] << endl;
	//cout << "Attribute :  boolState[required_OF_A3] | Value : " << boolState[required_OF_A3] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A3] | Value : " << boolState[already_S_OF_A3] << endl;
	//cout << "Attribute :  boolState[S_OF_A3] | Value : " << boolState[S_OF_A3] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A3] | Value : " << boolState[relevant_evt_OF_A3] << endl;
	//cout << "Attribute :  boolState[failF_OF_A3] | Value : " << boolState[failF_OF_A3] << endl;
	//cout << "Attribute :  boolState[required_OF_A4] | Value : " << boolState[required_OF_A4] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A4] | Value : " << boolState[already_S_OF_A4] << endl;
	//cout << "Attribute :  boolState[S_OF_A4] | Value : " << boolState[S_OF_A4] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A4] | Value : " << boolState[relevant_evt_OF_A4] << endl;
	//cout << "Attribute :  boolState[required_OF_A5] | Value : " << boolState[required_OF_A5] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A5] | Value : " << boolState[already_S_OF_A5] << endl;
	//cout << "Attribute :  boolState[S_OF_A5] | Value : " << boolState[S_OF_A5] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A5] | Value : " << boolState[relevant_evt_OF_A5] << endl;
	//cout << "Attribute :  boolState[required_OF_A6] | Value : " << boolState[required_OF_A6] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A6] | Value : " << boolState[already_S_OF_A6] << endl;
	//cout << "Attribute :  boolState[S_OF_A6] | Value : " << boolState[S_OF_A6] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A6] | Value : " << boolState[relevant_evt_OF_A6] << endl;
	//cout << "Attribute :  boolState[required_OF_A7] | Value : " << boolState[required_OF_A7] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A7] | Value : " << boolState[already_S_OF_A7] << endl;
	//cout << "Attribute :  boolState[S_OF_A7] | Value : " << boolState[S_OF_A7] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A7] | Value : " << boolState[relevant_evt_OF_A7] << endl;
	//cout << "Attribute :  boolState[required_OF_A8] | Value : " << boolState[required_OF_A8] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A8] | Value : " << boolState[already_S_OF_A8] << endl;
	//cout << "Attribute :  boolState[S_OF_A8] | Value : " << boolState[S_OF_A8] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A8] | Value : " << boolState[relevant_evt_OF_A8] << endl;
	//cout << "Attribute :  boolState[required_OF_A9] | Value : " << boolState[required_OF_A9] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A9] | Value : " << boolState[already_S_OF_A9] << endl;
	//cout << "Attribute :  boolState[S_OF_A9] | Value : " << boolState[S_OF_A9] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A9] | Value : " << boolState[relevant_evt_OF_A9] << endl;
	//cout << "Attribute :  boolState[required_OF_D11] | Value : " << boolState[required_OF_D11] << endl;
	//cout << "Attribute :  boolState[already_S_OF_D11] | Value : " << boolState[already_S_OF_D11] << endl;
	//cout << "Attribute :  boolState[S_OF_D11] | Value : " << boolState[S_OF_D11] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_D11] | Value : " << boolState[relevant_evt_OF_D11] << endl;
	//cout << "Attribute :  boolState[failF_OF_D11] | Value : " << boolState[failF_OF_D11] << endl;
	//cout << "Attribute :  boolState[required_OF_D12] | Value : " << boolState[required_OF_D12] << endl;
	//cout << "Attribute :  boolState[already_S_OF_D12] | Value : " << boolState[already_S_OF_D12] << endl;
	//cout << "Attribute :  boolState[S_OF_D12] | Value : " << boolState[S_OF_D12] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_D12] | Value : " << boolState[relevant_evt_OF_D12] << endl;
	//cout << "Attribute :  boolState[failF_OF_D12] | Value : " << boolState[failF_OF_D12] << endl;
	//cout << "Attribute :  boolState[failS_OF_D12] | Value : " << boolState[failS_OF_D12] << endl;
	//cout << "Attribute :  boolState[required_OF_D21] | Value : " << boolState[required_OF_D21] << endl;
	//cout << "Attribute :  boolState[already_S_OF_D21] | Value : " << boolState[already_S_OF_D21] << endl;
	//cout << "Attribute :  boolState[S_OF_D21] | Value : " << boolState[S_OF_D21] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_D21] | Value : " << boolState[relevant_evt_OF_D21] << endl;
	//cout << "Attribute :  boolState[failF_OF_D21] | Value : " << boolState[failF_OF_D21] << endl;
	//cout << "Attribute :  boolState[required_OF_D22] | Value : " << boolState[required_OF_D22] << endl;
	//cout << "Attribute :  boolState[already_S_OF_D22] | Value : " << boolState[already_S_OF_D22] << endl;
	//cout << "Attribute :  boolState[S_OF_D22] | Value : " << boolState[S_OF_D22] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_D22] | Value : " << boolState[relevant_evt_OF_D22] << endl;
	//cout << "Attribute :  boolState[failF_OF_D22] | Value : " << boolState[failF_OF_D22] << endl;
	//cout << "Attribute :  boolState[failS_OF_D22] | Value : " << boolState[failS_OF_D22] << endl;
	//cout << "Attribute :  boolState[required_OF_M1] | Value : " << boolState[required_OF_M1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_M1] | Value : " << boolState[already_S_OF_M1] << endl;
	//cout << "Attribute :  boolState[S_OF_M1] | Value : " << boolState[S_OF_M1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_M1] | Value : " << boolState[relevant_evt_OF_M1] << endl;
	//cout << "Attribute :  boolState[failF_OF_M1] | Value : " << boolState[failF_OF_M1] << endl;
	//cout << "Attribute :  boolState[required_OF_M2] | Value : " << boolState[required_OF_M2] << endl;
	//cout << "Attribute :  boolState[already_S_OF_M2] | Value : " << boolState[already_S_OF_M2] << endl;
	//cout << "Attribute :  boolState[S_OF_M2] | Value : " << boolState[S_OF_M2] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_M2] | Value : " << boolState[relevant_evt_OF_M2] << endl;
	//cout << "Attribute :  boolState[failF_OF_M2] | Value : " << boolState[failF_OF_M2] << endl;
	//cout << "Attribute :  boolState[required_OF_M3] | Value : " << boolState[required_OF_M3] << endl;
	//cout << "Attribute :  boolState[already_S_OF_M3] | Value : " << boolState[already_S_OF_M3] << endl;
	//cout << "Attribute :  boolState[S_OF_M3] | Value : " << boolState[S_OF_M3] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_M3] | Value : " << boolState[relevant_evt_OF_M3] << endl;
	//cout << "Attribute :  boolState[failF_OF_M3] | Value : " << boolState[failF_OF_M3] << endl;
	//cout << "Attribute :  boolState[failS_OF_M3] | Value : " << boolState[failS_OF_M3] << endl;
	//cout << "Attribute :  boolState[required_OF_N] | Value : " << boolState[required_OF_N] << endl;
	//cout << "Attribute :  boolState[already_S_OF_N] | Value : " << boolState[already_S_OF_N] << endl;
	//cout << "Attribute :  boolState[S_OF_N] | Value : " << boolState[S_OF_N] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_N] | Value : " << boolState[relevant_evt_OF_N] << endl;
	//cout << "Attribute :  boolState[failF_OF_N] | Value : " << boolState[failF_OF_N] << endl;
	//cout << "Attribute :  boolState[required_OF_OR_1] | Value : " << boolState[required_OF_OR_1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_OR_1] | Value : " << boolState[already_S_OF_OR_1] << endl;
	//cout << "Attribute :  boolState[S_OF_OR_1] | Value : " << boolState[S_OF_OR_1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_OR_1] | Value : " << boolState[relevant_evt_OF_OR_1] << endl;
	//cout << "Attribute :  boolState[required_OF_UE_1] | Value : " << boolState[required_OF_UE_1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_UE_1] | Value : " << boolState[already_S_OF_UE_1] << endl;
	//cout << "Attribute :  boolState[S_OF_UE_1] | Value : " << boolState[S_OF_UE_1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_UE_1] | Value : " << boolState[relevant_evt_OF_UE_1] << endl;
}

bool storm::figaro::FigaroProgram_figaro_17_23::figaromodelhasinstransitions()
{
	return false;
}
void storm::figaro::FigaroProgram_figaro_17_23::doReinitialisations()
{
	boolState[required_OF_A1] = REINITIALISATION_OF_required_OF_A1;
	boolState[S_OF_A1] = REINITIALISATION_OF_S_OF_A1;
	boolState[relevant_evt_OF_A1] = REINITIALISATION_OF_relevant_evt_OF_A1;
	boolState[required_OF_A10] = REINITIALISATION_OF_required_OF_A10;
	boolState[S_OF_A10] = REINITIALISATION_OF_S_OF_A10;
	boolState[relevant_evt_OF_A10] = REINITIALISATION_OF_relevant_evt_OF_A10;
	boolState[required_OF_A11] = REINITIALISATION_OF_required_OF_A11;
	boolState[S_OF_A11] = REINITIALISATION_OF_S_OF_A11;
	boolState[relevant_evt_OF_A11] = REINITIALISATION_OF_relevant_evt_OF_A11;
	boolState[required_OF_A12] = REINITIALISATION_OF_required_OF_A12;
	boolState[S_OF_A12] = REINITIALISATION_OF_S_OF_A12;
	boolState[relevant_evt_OF_A12] = REINITIALISATION_OF_relevant_evt_OF_A12;
	boolState[required_OF_A13] = REINITIALISATION_OF_required_OF_A13;
	boolState[S_OF_A13] = REINITIALISATION_OF_S_OF_A13;
	boolState[relevant_evt_OF_A13] = REINITIALISATION_OF_relevant_evt_OF_A13;
	boolState[required_OF_A2] = REINITIALISATION_OF_required_OF_A2;
	boolState[S_OF_A2] = REINITIALISATION_OF_S_OF_A2;
	boolState[relevant_evt_OF_A2] = REINITIALISATION_OF_relevant_evt_OF_A2;
	boolState[required_OF_A3] = REINITIALISATION_OF_required_OF_A3;
	boolState[S_OF_A3] = REINITIALISATION_OF_S_OF_A3;
	boolState[relevant_evt_OF_A3] = REINITIALISATION_OF_relevant_evt_OF_A3;
	boolState[required_OF_A4] = REINITIALISATION_OF_required_OF_A4;
	boolState[S_OF_A4] = REINITIALISATION_OF_S_OF_A4;
	boolState[relevant_evt_OF_A4] = REINITIALISATION_OF_relevant_evt_OF_A4;
	boolState[required_OF_A5] = REINITIALISATION_OF_required_OF_A5;
	boolState[S_OF_A5] = REINITIALISATION_OF_S_OF_A5;
	boolState[relevant_evt_OF_A5] = REINITIALISATION_OF_relevant_evt_OF_A5;
	boolState[required_OF_A6] = REINITIALISATION_OF_required_OF_A6;
	boolState[S_OF_A6] = REINITIALISATION_OF_S_OF_A6;
	boolState[relevant_evt_OF_A6] = REINITIALISATION_OF_relevant_evt_OF_A6;
	boolState[required_OF_A7] = REINITIALISATION_OF_required_OF_A7;
	boolState[S_OF_A7] = REINITIALISATION_OF_S_OF_A7;
	boolState[relevant_evt_OF_A7] = REINITIALISATION_OF_relevant_evt_OF_A7;
	boolState[required_OF_A8] = REINITIALISATION_OF_required_OF_A8;
	boolState[S_OF_A8] = REINITIALISATION_OF_S_OF_A8;
	boolState[relevant_evt_OF_A8] = REINITIALISATION_OF_relevant_evt_OF_A8;
	boolState[required_OF_A9] = REINITIALISATION_OF_required_OF_A9;
	boolState[S_OF_A9] = REINITIALISATION_OF_S_OF_A9;
	boolState[relevant_evt_OF_A9] = REINITIALISATION_OF_relevant_evt_OF_A9;
	boolState[required_OF_D11] = REINITIALISATION_OF_required_OF_D11;
	boolState[S_OF_D11] = REINITIALISATION_OF_S_OF_D11;
	boolState[relevant_evt_OF_D11] = REINITIALISATION_OF_relevant_evt_OF_D11;
	boolState[required_OF_D12] = REINITIALISATION_OF_required_OF_D12;
	boolState[S_OF_D12] = REINITIALISATION_OF_S_OF_D12;
	boolState[relevant_evt_OF_D12] = REINITIALISATION_OF_relevant_evt_OF_D12;
	boolState[required_OF_D21] = REINITIALISATION_OF_required_OF_D21;
	boolState[S_OF_D21] = REINITIALISATION_OF_S_OF_D21;
	boolState[relevant_evt_OF_D21] = REINITIALISATION_OF_relevant_evt_OF_D21;
	boolState[required_OF_D22] = REINITIALISATION_OF_required_OF_D22;
	boolState[S_OF_D22] = REINITIALISATION_OF_S_OF_D22;
	boolState[relevant_evt_OF_D22] = REINITIALISATION_OF_relevant_evt_OF_D22;
	boolState[required_OF_M1] = REINITIALISATION_OF_required_OF_M1;
	boolState[S_OF_M1] = REINITIALISATION_OF_S_OF_M1;
	boolState[relevant_evt_OF_M1] = REINITIALISATION_OF_relevant_evt_OF_M1;
	boolState[required_OF_M2] = REINITIALISATION_OF_required_OF_M2;
	boolState[S_OF_M2] = REINITIALISATION_OF_S_OF_M2;
	boolState[relevant_evt_OF_M2] = REINITIALISATION_OF_relevant_evt_OF_M2;
	boolState[required_OF_M3] = REINITIALISATION_OF_required_OF_M3;
	boolState[S_OF_M3] = REINITIALISATION_OF_S_OF_M3;
	boolState[relevant_evt_OF_M3] = REINITIALISATION_OF_relevant_evt_OF_M3;
	boolState[required_OF_N] = REINITIALISATION_OF_required_OF_N;
	boolState[S_OF_N] = REINITIALISATION_OF_S_OF_N;
	boolState[relevant_evt_OF_N] = REINITIALISATION_OF_relevant_evt_OF_N;
	boolState[required_OF_OR_1] = REINITIALISATION_OF_required_OF_OR_1;
	boolState[S_OF_OR_1] = REINITIALISATION_OF_S_OF_OR_1;
	boolState[relevant_evt_OF_OR_1] = REINITIALISATION_OF_relevant_evt_OF_OR_1;
	boolState[required_OF_UE_1] = REINITIALISATION_OF_required_OF_UE_1;
	boolState[S_OF_UE_1] = REINITIALISATION_OF_S_OF_UE_1;
	boolState[relevant_evt_OF_UE_1] = REINITIALISATION_OF_relevant_evt_OF_UE_1;
}

void storm::figaro::FigaroProgram_figaro_17_23::fireOccurrence(int numFire)
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
		FIRE_xx10_OF_A2 = true;
	}

	if (numFire == 3)
	{
		FIRE_xx11_OF_A2 = true;
	}

	if (numFire == 4)
	{
		FIRE_xx10_OF_A3 = true;
	}

	if (numFire == 5)
	{
		FIRE_xx11_OF_A3 = true;
	}

	if (numFire == 6)
	{
		FIRE_xx10_OF_D11 = true;
	}

	if (numFire == 7)
	{
		FIRE_xx11_OF_D11 = true;
	}

	if (numFire == 8)
	{
		FIRE_xx17_OF_D12 = true;
	}

	if (numFire == 9)
	{
		FIRE_xx18_OF_D12 = true;
	}

	if (numFire == 10)
	{
		FIRE_xx19_OF_D12 = true;
	}

	if (numFire == 11)
	{
		FIRE_xx10_OF_D21 = true;
	}

	if (numFire == 12)
	{
		FIRE_xx11_OF_D21 = true;
	}

	if (numFire == 13)
	{
		FIRE_xx17_OF_D22 = true;
	}

	if (numFire == 14)
	{
		FIRE_xx18_OF_D22 = true;
	}

	if (numFire == 15)
	{
		FIRE_xx19_OF_D22 = true;
	}

	if (numFire == 16)
	{
		FIRE_xx10_OF_M1 = true;
	}

	if (numFire == 17)
	{
		FIRE_xx11_OF_M1 = true;
	}

	if (numFire == 18)
	{
		FIRE_xx10_OF_M2 = true;
	}

	if (numFire == 19)
	{
		FIRE_xx11_OF_M2 = true;
	}

	if (numFire == 20)
	{
		FIRE_xx17_OF_M3 = true;
	}

	if (numFire == 21)
	{
		FIRE_xx18_OF_M3 = true;
	}

	if (numFire == 22)
	{
		FIRE_xx19_OF_M3 = true;
	}

	if (numFire == 23)
	{
		FIRE_xx10_OF_N = true;
	}

	if (numFire == 24)
	{
		FIRE_xx11_OF_N = true;
	}

/* ---------- DECLARATION OF OCCURRENCE RULES------------ */

	// Occurrence xx10_OF_A1
	if ((boolState[failF_OF_A1] == false) && boolState[required_OF_A1]) 
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

	// Occurrence xx10_OF_A2
	if ((boolState[failF_OF_A2] == false) && boolState[required_OF_A2]) 
	{
		 
		if (FIRE_xx10_OF_A2)
		{
			boolState[failF_OF_A2]  =  true;
			FIRE_xx10_OF_A2 = false;
		}
	}

	// Occurrence xx11_OF_A2
	if (boolState[failF_OF_A2] == true) 
	{
		 
		if (FIRE_xx11_OF_A2)
		{
			boolState[failF_OF_A2]  =  false;
			FIRE_xx11_OF_A2 = false;
		}
	}

	// Occurrence xx10_OF_A3
	if ((boolState[failF_OF_A3] == false) && boolState[required_OF_A3]) 
	{
		 
		if (FIRE_xx10_OF_A3)
		{
			boolState[failF_OF_A3]  =  true;
			FIRE_xx10_OF_A3 = false;
		}
	}

	// Occurrence xx11_OF_A3
	if (boolState[failF_OF_A3] == true) 
	{
		 
		if (FIRE_xx11_OF_A3)
		{
			boolState[failF_OF_A3]  =  false;
			FIRE_xx11_OF_A3 = false;
		}
	}

	// Occurrence xx10_OF_D11
	if ((boolState[failF_OF_D11] == false) && boolState[required_OF_D11]) 
	{
		 
		if (FIRE_xx10_OF_D11)
		{
			boolState[failF_OF_D11]  =  true;
			FIRE_xx10_OF_D11 = false;
		}
	}

	// Occurrence xx11_OF_D11
	if (boolState[failF_OF_D11] == true) 
	{
		 
		if (FIRE_xx11_OF_D11)
		{
			boolState[failF_OF_D11]  =  false;
			FIRE_xx11_OF_D11 = false;
		}
	}

	// Occurrence xx17_OF_D12
	if ((boolState[failF_OF_D12] == false) && (boolState[required_OF_D12] && ( !boolState[failS_OF_D12]))) 
	{
		 
		if (FIRE_xx17_OF_D12)
		{
			boolState[failF_OF_D12]  =  true;
			FIRE_xx17_OF_D12 = false;
		}
	}

	// Occurrence xx18_OF_D12
	if ((boolState[failS_OF_D12] == false) && (( !boolState[required_OF_D12]) && ( !boolState[failF_OF_D12]))) 
	{
		 
		if (FIRE_xx18_OF_D12)
		{
			boolState[failS_OF_D12]  =  true;
			FIRE_xx18_OF_D12 = false;
		}
	}

	// Occurrence xx19_OF_D12
	if ((boolState[failS_OF_D12] == true) || (boolState[failF_OF_D12] == true)) 
	{
		 
		if (FIRE_xx19_OF_D12)
		{
			boolState[failS_OF_D12]  =  false;
			boolState[failF_OF_D12]  =  false;
			FIRE_xx19_OF_D12 = false;
		}
	}

	// Occurrence xx10_OF_D21
	if ((boolState[failF_OF_D21] == false) && boolState[required_OF_D21]) 
	{
		 
		if (FIRE_xx10_OF_D21)
		{
			boolState[failF_OF_D21]  =  true;
			FIRE_xx10_OF_D21 = false;
		}
	}

	// Occurrence xx11_OF_D21
	if (boolState[failF_OF_D21] == true) 
	{
		 
		if (FIRE_xx11_OF_D21)
		{
			boolState[failF_OF_D21]  =  false;
			FIRE_xx11_OF_D21 = false;
		}
	}

	// Occurrence xx17_OF_D22
	if ((boolState[failF_OF_D22] == false) && (boolState[required_OF_D22] && ( !boolState[failS_OF_D22]))) 
	{
		 
		if (FIRE_xx17_OF_D22)
		{
			boolState[failF_OF_D22]  =  true;
			FIRE_xx17_OF_D22 = false;
		}
	}

	// Occurrence xx18_OF_D22
	if ((boolState[failS_OF_D22] == false) && (( !boolState[required_OF_D22]) && ( !boolState[failF_OF_D22]))) 
	{
		 
		if (FIRE_xx18_OF_D22)
		{
			boolState[failS_OF_D22]  =  true;
			FIRE_xx18_OF_D22 = false;
		}
	}

	// Occurrence xx19_OF_D22
	if ((boolState[failS_OF_D22] == true) || (boolState[failF_OF_D22] == true)) 
	{
		 
		if (FIRE_xx19_OF_D22)
		{
			boolState[failS_OF_D22]  =  false;
			boolState[failF_OF_D22]  =  false;
			FIRE_xx19_OF_D22 = false;
		}
	}

	// Occurrence xx10_OF_M1
	if ((boolState[failF_OF_M1] == false) && boolState[required_OF_M1]) 
	{
		 
		if (FIRE_xx10_OF_M1)
		{
			boolState[failF_OF_M1]  =  true;
			FIRE_xx10_OF_M1 = false;
		}
	}

	// Occurrence xx11_OF_M1
	if (boolState[failF_OF_M1] == true) 
	{
		 
		if (FIRE_xx11_OF_M1)
		{
			boolState[failF_OF_M1]  =  false;
			FIRE_xx11_OF_M1 = false;
		}
	}

	// Occurrence xx10_OF_M2
	if ((boolState[failF_OF_M2] == false) && boolState[required_OF_M2]) 
	{
		 
		if (FIRE_xx10_OF_M2)
		{
			boolState[failF_OF_M2]  =  true;
			FIRE_xx10_OF_M2 = false;
		}
	}

	// Occurrence xx11_OF_M2
	if (boolState[failF_OF_M2] == true) 
	{
		 
		if (FIRE_xx11_OF_M2)
		{
			boolState[failF_OF_M2]  =  false;
			FIRE_xx11_OF_M2 = false;
		}
	}

	// Occurrence xx17_OF_M3
	if ((boolState[failF_OF_M3] == false) && (boolState[required_OF_M3] && ( !boolState[failS_OF_M3]))) 
	{
		 
		if (FIRE_xx17_OF_M3)
		{
			boolState[failF_OF_M3]  =  true;
			FIRE_xx17_OF_M3 = false;
		}
	}

	// Occurrence xx18_OF_M3
	if ((boolState[failS_OF_M3] == false) && (( !boolState[required_OF_M3]) && ( !boolState[failF_OF_M3]))) 
	{
		 
		if (FIRE_xx18_OF_M3)
		{
			boolState[failS_OF_M3]  =  true;
			FIRE_xx18_OF_M3 = false;
		}
	}

	// Occurrence xx19_OF_M3
	if ((boolState[failS_OF_M3] == true) || (boolState[failF_OF_M3] == true)) 
	{
		 
		if (FIRE_xx19_OF_M3)
		{
			boolState[failS_OF_M3]  =  false;
			boolState[failF_OF_M3]  =  false;
			FIRE_xx19_OF_M3 = false;
		}
	}

	// Occurrence xx10_OF_N
	if ((boolState[failF_OF_N] == false) && boolState[required_OF_N]) 
	{
		 
		if (FIRE_xx10_OF_N)
		{
			boolState[failF_OF_N]  =  true;
			FIRE_xx10_OF_N = false;
		}
	}

	// Occurrence xx11_OF_N
	if (boolState[failF_OF_N] == true) 
	{
		 
		if (FIRE_xx11_OF_N)
		{
			boolState[failF_OF_N]  =  false;
			FIRE_xx11_OF_N = false;
		}
	}

}

std::vector<std::tuple<int, double, std::string, int>> storm::figaro::FigaroProgram_figaro_17_23::showFireableOccurrences()
{
	std::vector<std::tuple<int, double, std::string, int>> list = {};
	//cout <<"\n==================== List of fireable occurrences :  ====================" << endl;

        if (list.size() > 0)
        {
            ins_transition_found = true;
            return list;
        }
        else
        {
            ins_transition_found = false;
        }
     
	if ((boolState[failF_OF_A1] == false) && boolState[required_OF_A1])
	{
		//cout << "0 : xx10_OF_A1 : FAULT failF  LABEL \"défaillance en fonctionnement %OBJET\"  DIST EXP (0.05)  INDUCING boolState[failF_OF_A1]  =  TRUE" << endl;
		list.push_back(make_tuple(0, 0.05, "EXP", 0));
	}
	if (boolState[failF_OF_A1] == true)
	{
		//cout << "1 : xx11_OF_A1 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A1]  =  FALSE" << endl;
		list.push_back(make_tuple(1, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A2] == false) && boolState[required_OF_A2])
	{
		//cout << "2 : xx10_OF_A2 : FAULT failF  LABEL \"défaillance en fonctionnement %OBJET\"  DIST EXP (0.06)  INDUCING boolState[failF_OF_A2]  =  TRUE" << endl;
		list.push_back(make_tuple(2, 0.06, "EXP", 0));
	}
	if (boolState[failF_OF_A2] == true)
	{
		//cout << "3 : xx11_OF_A2 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A2]  =  FALSE" << endl;
		list.push_back(make_tuple(3, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A3] == false) && boolState[required_OF_A3])
	{
		//cout << "4 : xx10_OF_A3 : FAULT failF  LABEL \"défaillance en fonctionnement %OBJET\"  DIST EXP (0.05)  INDUCING boolState[failF_OF_A3]  =  TRUE" << endl;
		list.push_back(make_tuple(4, 0.05, "EXP", 0));
	}
	if (boolState[failF_OF_A3] == true)
	{
		//cout << "5 : xx11_OF_A3 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A3]  =  FALSE" << endl;
		list.push_back(make_tuple(5, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_D11] == false) && boolState[required_OF_D11])
	{
		//cout << "6 : xx10_OF_D11 : FAULT failF  LABEL \"défaillance en fonctionnement %OBJET\"  DIST EXP (0.1)  INDUCING boolState[failF_OF_D11]  =  TRUE" << endl;
		list.push_back(make_tuple(6, 0.1, "EXP", 0));
	}
	if (boolState[failF_OF_D11] == true)
	{
		//cout << "7 : xx11_OF_D11 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_D11]  =  FALSE" << endl;
		list.push_back(make_tuple(7, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_D12] == false) && (boolState[required_OF_D12] && ( !boolState[failS_OF_D12])))
	{
		//cout << "8 : xx17_OF_D12 : FAULT failF  LABEL \"défaillance en fonctionnement %OBJET\"  DIST EXP (0.08)  INDUCING boolState[failF_OF_D12]  =  TRUE" << endl;
		list.push_back(make_tuple(8, 0.08, "EXP", 0));
	}
	if ((boolState[failS_OF_D12] == false) && (( !boolState[required_OF_D12]) && ( !boolState[failF_OF_D12])))
	{
		//cout << "9 : xx18_OF_D12 : FAULT failS  LABEL \"défaillance en attente %OBJET\"  DIST EXP (0.04)  INDUCING boolState[failS_OF_D12]  =  TRUE" << endl;
		list.push_back(make_tuple(9, 0.04, "EXP", 0));
	}
	if ((boolState[failS_OF_D12] == true) || (boolState[failF_OF_D12] == true))
	{
		//cout << "10 : xx19_OF_D12 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failS_OF_D12]  =  FALSE,failF_OF_D12  =  FALSE" << endl;
		list.push_back(make_tuple(10, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_D21] == false) && boolState[required_OF_D21])
	{
		//cout << "11 : xx10_OF_D21 : FAULT failF  LABEL \"défaillance en fonctionnement %OBJET\"  DIST EXP (0.08)  INDUCING boolState[failF_OF_D21]  =  TRUE" << endl;
		list.push_back(make_tuple(11, 0.08, "EXP", 0));
	}
	if (boolState[failF_OF_D21] == true)
	{
		//cout << "12 : xx11_OF_D21 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_D21]  =  FALSE" << endl;
		list.push_back(make_tuple(12, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_D22] == false) && (boolState[required_OF_D22] && ( !boolState[failS_OF_D22])))
	{
		//cout << "13 : xx17_OF_D22 : FAULT failF  LABEL \"défaillance en fonctionnement %OBJET\"  DIST EXP (0.08)  INDUCING boolState[failF_OF_D22]  =  TRUE" << endl;
		list.push_back(make_tuple(13, 0.08, "EXP", 0));
	}
	if ((boolState[failS_OF_D22] == false) && (( !boolState[required_OF_D22]) && ( !boolState[failF_OF_D22])))
	{
		//cout << "14 : xx18_OF_D22 : FAULT failS  LABEL \"défaillance en attente %OBJET\"  DIST EXP (0.04)  INDUCING boolState[failS_OF_D22]  =  TRUE" << endl;
		list.push_back(make_tuple(14, 0.04, "EXP", 0));
	}
	if ((boolState[failS_OF_D22] == true) || (boolState[failF_OF_D22] == true))
	{
		//cout << "15 : xx19_OF_D22 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failS_OF_D22]  =  FALSE,failF_OF_D22  =  FALSE" << endl;
		list.push_back(make_tuple(15, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_M1] == false) && boolState[required_OF_M1])
	{
		//cout << "16 : xx10_OF_M1 : FAULT failF  LABEL \"défaillance en fonctionnement %OBJET\"  DIST EXP (0.03)  INDUCING boolState[failF_OF_M1]  =  TRUE" << endl;
		list.push_back(make_tuple(16, 0.03, "EXP", 0));
	}
	if (boolState[failF_OF_M1] == true)
	{
		//cout << "17 : xx11_OF_M1 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_M1]  =  FALSE" << endl;
		list.push_back(make_tuple(17, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_M2] == false) && boolState[required_OF_M2])
	{
		//cout << "18 : xx10_OF_M2 : FAULT failF  LABEL \"défaillance en fonctionnement %OBJET\"  DIST EXP (0.03)  INDUCING boolState[failF_OF_M2]  =  TRUE" << endl;
		list.push_back(make_tuple(18, 0.03, "EXP", 0));
	}
	if (boolState[failF_OF_M2] == true)
	{
		//cout << "19 : xx11_OF_M2 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_M2]  =  FALSE" << endl;
		list.push_back(make_tuple(19, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_M3] == false) && (boolState[required_OF_M3] && ( !boolState[failS_OF_M3])))
	{
		//cout << "20 : xx17_OF_M3 : FAULT failF  LABEL \"défaillance en fonctionnement %OBJET\"  DIST EXP (0.03)  INDUCING boolState[failF_OF_M3]  =  TRUE" << endl;
		list.push_back(make_tuple(20, 0.03, "EXP", 0));
	}
	if ((boolState[failS_OF_M3] == false) && (( !boolState[required_OF_M3]) && ( !boolState[failF_OF_M3])))
	{
		//cout << "21 : xx18_OF_M3 : FAULT failS  LABEL \"défaillance en attente %OBJET\"  DIST EXP (0.015)  INDUCING boolState[failS_OF_M3]  =  TRUE" << endl;
		list.push_back(make_tuple(21, 0.015, "EXP", 0));
	}
	if ((boolState[failS_OF_M3] == true) || (boolState[failF_OF_M3] == true))
	{
		//cout << "22 : xx19_OF_M3 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failS_OF_M3]  =  FALSE,failF_OF_M3  =  FALSE" << endl;
		list.push_back(make_tuple(22, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_N] == false) && boolState[required_OF_N])
	{
		//cout << "23 : xx10_OF_N : FAULT failF  LABEL \"défaillance en fonctionnement %OBJET\"  DIST EXP (0.002)  INDUCING boolState[failF_OF_N]  =  TRUE" << endl;
		list.push_back(make_tuple(23, 0.002, "EXP", 0));
	}
	if (boolState[failF_OF_N] == true)
	{
		//cout << "24 : xx11_OF_N : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_N]  =  FALSE" << endl;
		list.push_back(make_tuple(24, 0.1, "EXP", 0));
	}
	return list;
}


void storm::figaro::FigaroProgram_figaro_17_23::runOnceInteractionStep_initialization()
{
	if (boolState[failF_OF_A1] == true )
	{
		boolState[S_OF_A1]  =  true;
	}

	if (boolState[failF_OF_A2] == true )
	{
		boolState[S_OF_A2]  =  true;
	}

	if (boolState[failF_OF_A3] == true )
	{
		boolState[S_OF_A3]  =  true;
	}

	if (boolState[failF_OF_D11] == true )
	{
		boolState[S_OF_D11]  =  true;
	}

	if ((boolState[failS_OF_D12] == true) || (boolState[failF_OF_D12] == true) )
	{
		boolState[S_OF_D12]  =  true;
	}

	if (boolState[failF_OF_D21] == true )
	{
		boolState[S_OF_D21]  =  true;
	}

	if ((boolState[failS_OF_D22] == true) || (boolState[failF_OF_D22] == true) )
	{
		boolState[S_OF_D22]  =  true;
	}

	if (boolState[failF_OF_M1] == true )
	{
		boolState[S_OF_M1]  =  true;
	}

	if (boolState[failF_OF_M2] == true )
	{
		boolState[S_OF_M2]  =  true;
	}

	if ((boolState[failS_OF_M3] == true) || (boolState[failF_OF_M3] == true) )
	{
		boolState[S_OF_M3]  =  true;
	}

	if (boolState[failF_OF_N] == true )
	{
		boolState[S_OF_N]  =  true;
	}

}


void storm::figaro::FigaroProgram_figaro_17_23::runOnceInteractionStep_propagate_effect_S()
{
	if (boolState[S_OF_D21] && boolState[S_OF_D22] )
	{
		boolState[S_OF_A10]  =  true;
	}

	if ((boolState[S_OF_A4] || boolState[S_OF_A6]) || boolState[S_OF_A8] )
	{
		boolState[S_OF_A11]  =  true;
	}

	if (boolState[S_OF_A11] && boolState[S_OF_A13] )
	{
		boolState[S_OF_A12]  =  true;
	}

	if ((boolState[S_OF_A10] || boolState[S_OF_A5]) || boolState[S_OF_A9] )
	{
		boolState[S_OF_A13]  =  true;
	}

	if (boolState[S_OF_A1] || boolState[S_OF_A2] )
	{
		boolState[S_OF_A4]  =  true;
	}

	if (boolState[S_OF_A2] || boolState[S_OF_A3] )
	{
		boolState[S_OF_A5]  =  true;
	}

	if (boolState[S_OF_D11] && boolState[S_OF_D12] )
	{
		boolState[S_OF_A6]  =  true;
	}

	if (boolState[S_OF_M1] || boolState[S_OF_M2] )
	{
		boolState[S_OF_A7]  =  true;
	}

	if (boolState[S_OF_M1] && boolState[S_OF_M3] )
	{
		boolState[S_OF_A8]  =  true;
	}

	if (boolState[S_OF_M2] && boolState[S_OF_M3] )
	{
		boolState[S_OF_A9]  =  true;
	}

	if (boolState[S_OF_A12] || boolState[S_OF_N] )
	{
		boolState[S_OF_OR_1]  =  true;
	}

	if (boolState[S_OF_OR_1] )
	{
		boolState[S_OF_UE_1]  =  true;
	}

}


void storm::figaro::FigaroProgram_figaro_17_23::runOnceInteractionStep_propagate_effect_required()
{
	if ( !boolState[required_OF_A4] )
	{
		boolState[required_OF_A1]  =  false;
	}

	if (boolState[relevant_evt_OF_A4] && ( !boolState[S_OF_A4]) )
	{
		boolState[relevant_evt_OF_A1]  =  true;
	}

	if ( !boolState[required_OF_A13] )
	{
		boolState[required_OF_A10]  =  false;
	}

	if (boolState[relevant_evt_OF_A13] && ( !boolState[S_OF_A13]) )
	{
		boolState[relevant_evt_OF_A10]  =  true;
	}

	if ( !boolState[required_OF_A12] )
	{
		boolState[required_OF_A11]  =  false;
	}

	if (boolState[relevant_evt_OF_A12] && ( !boolState[S_OF_A12]) )
	{
		boolState[relevant_evt_OF_A11]  =  true;
	}

	if ( !boolState[required_OF_OR_1] )
	{
		boolState[required_OF_A12]  =  false;
	}

	if (boolState[relevant_evt_OF_OR_1] && ( !boolState[S_OF_OR_1]) )
	{
		boolState[relevant_evt_OF_A12]  =  true;
	}

	if ( !boolState[required_OF_A12] )
	{
		boolState[required_OF_A13]  =  false;
	}

	if (boolState[relevant_evt_OF_A12] && ( !boolState[S_OF_A12]) )
	{
		boolState[relevant_evt_OF_A13]  =  true;
	}

	if (( !boolState[required_OF_A4]) && ( !boolState[required_OF_A5]) )
	{
		boolState[required_OF_A2]  =  false;
	}

	if ((boolState[relevant_evt_OF_A4] && ( !boolState[S_OF_A4])) || (boolState[relevant_evt_OF_A5] && ( !boolState[S_OF_A5])) )
	{
		boolState[relevant_evt_OF_A2]  =  true;
	}

	if ( !boolState[required_OF_A5] )
	{
		boolState[required_OF_A3]  =  false;
	}

	if (boolState[relevant_evt_OF_A5] && ( !boolState[S_OF_A5]) )
	{
		boolState[relevant_evt_OF_A3]  =  true;
	}

	if ( !boolState[required_OF_A11] )
	{
		boolState[required_OF_A4]  =  false;
	}

	if (boolState[relevant_evt_OF_A11] && ( !boolState[S_OF_A11]) )
	{
		boolState[relevant_evt_OF_A4]  =  true;
	}

	if ( !boolState[required_OF_A13] )
	{
		boolState[required_OF_A5]  =  false;
	}

	if (boolState[relevant_evt_OF_A13] && ( !boolState[S_OF_A13]) )
	{
		boolState[relevant_evt_OF_A5]  =  true;
	}

	if ( !boolState[required_OF_A11] )
	{
		boolState[required_OF_A6]  =  false;
	}

	if (boolState[relevant_evt_OF_A11] && ( !boolState[S_OF_A11]) )
	{
		boolState[relevant_evt_OF_A6]  =  true;
	}

	if (boolState[relevant_evt_OF_M3] && ( !boolState[S_OF_M3]) )
	{
		boolState[relevant_evt_OF_A7]  =  true;
	}

	if ( !boolState[required_OF_A11] )
	{
		boolState[required_OF_A8]  =  false;
	}

	if (boolState[relevant_evt_OF_A11] && ( !boolState[S_OF_A11]) )
	{
		boolState[relevant_evt_OF_A8]  =  true;
	}

	if ( !boolState[required_OF_A13] )
	{
		boolState[required_OF_A9]  =  false;
	}

	if (boolState[relevant_evt_OF_A13] && ( !boolState[S_OF_A13]) )
	{
		boolState[relevant_evt_OF_A9]  =  true;
	}

	if ( !boolState[required_OF_A6] )
	{
		boolState[required_OF_D11]  =  false;
	}

	if ((boolState[relevant_evt_OF_A6] && ( !boolState[S_OF_A6])) || (boolState[relevant_evt_OF_D12] && ( !boolState[S_OF_D12])) )
	{
		boolState[relevant_evt_OF_D11]  =  true;
	}

	if (( !boolState[required_OF_A6]) || ( !boolState[S_OF_D11]) )
	{
		boolState[required_OF_D12]  =  false;
	}

	if (boolState[relevant_evt_OF_A6] && ( !boolState[S_OF_A6]) )
	{
		boolState[relevant_evt_OF_D12]  =  true;
	}

	if ( !boolState[required_OF_A10] )
	{
		boolState[required_OF_D21]  =  false;
	}

	if ((boolState[relevant_evt_OF_A10] && ( !boolState[S_OF_A10])) || (boolState[relevant_evt_OF_D22] && ( !boolState[S_OF_D22])) )
	{
		boolState[relevant_evt_OF_D21]  =  true;
	}

	if (( !boolState[required_OF_A10]) || ( !boolState[S_OF_D21]) )
	{
		boolState[required_OF_D22]  =  false;
	}

	if (boolState[relevant_evt_OF_A10] && ( !boolState[S_OF_A10]) )
	{
		boolState[relevant_evt_OF_D22]  =  true;
	}

	if (( !boolState[required_OF_A7]) && ( !boolState[required_OF_A8]) )
	{
		boolState[required_OF_M1]  =  false;
	}

	if ((boolState[relevant_evt_OF_A7] && ( !boolState[S_OF_A7])) || (boolState[relevant_evt_OF_A8] && ( !boolState[S_OF_A8])) )
	{
		boolState[relevant_evt_OF_M1]  =  true;
	}

	if (( !boolState[required_OF_A7]) && ( !boolState[required_OF_A9]) )
	{
		boolState[required_OF_M2]  =  false;
	}

	if ((boolState[relevant_evt_OF_A7] && ( !boolState[S_OF_A7])) || (boolState[relevant_evt_OF_A9] && ( !boolState[S_OF_A9])) )
	{
		boolState[relevant_evt_OF_M2]  =  true;
	}

	if ((( !boolState[required_OF_A8]) && ( !boolState[required_OF_A9])) || ( !boolState[S_OF_A7]) )
	{
		boolState[required_OF_M3]  =  false;
	}

	if ((boolState[relevant_evt_OF_A8] && ( !boolState[S_OF_A8])) || (boolState[relevant_evt_OF_A9] && ( !boolState[S_OF_A9])) )
	{
		boolState[relevant_evt_OF_M3]  =  true;
	}

	if ( !boolState[required_OF_OR_1] )
	{
		boolState[required_OF_N]  =  false;
	}

	if (boolState[relevant_evt_OF_OR_1] && ( !boolState[S_OF_OR_1]) )
	{
		boolState[relevant_evt_OF_N]  =  true;
	}

	if ( !boolState[required_OF_UE_1] )
	{
		boolState[required_OF_OR_1]  =  false;
	}

	if (boolState[relevant_evt_OF_UE_1] && ( !boolState[S_OF_UE_1]) )
	{
		boolState[relevant_evt_OF_OR_1]  =  true;
	}



	boolState[relevant_evt_OF_UE_1]  =  true  ;

}


void storm::figaro::FigaroProgram_figaro_17_23::runOnceInteractionStep_propagate_leaves()
{


	boolState[already_S_OF_A1]  =  boolState[S_OF_A1]  ;



	boolState[already_S_OF_A10]  =  boolState[S_OF_A10]  ;



	boolState[already_S_OF_A11]  =  boolState[S_OF_A11]  ;



	boolState[already_S_OF_A12]  =  boolState[S_OF_A12]  ;



	boolState[already_S_OF_A13]  =  boolState[S_OF_A13]  ;



	boolState[already_S_OF_A2]  =  boolState[S_OF_A2]  ;



	boolState[already_S_OF_A3]  =  boolState[S_OF_A3]  ;



	boolState[already_S_OF_A4]  =  boolState[S_OF_A4]  ;



	boolState[already_S_OF_A5]  =  boolState[S_OF_A5]  ;



	boolState[already_S_OF_A6]  =  boolState[S_OF_A6]  ;



	boolState[already_S_OF_A7]  =  boolState[S_OF_A7]  ;



	boolState[already_S_OF_A8]  =  boolState[S_OF_A8]  ;



	boolState[already_S_OF_A9]  =  boolState[S_OF_A9]  ;



	boolState[already_S_OF_D11]  =  boolState[S_OF_D11]  ;



	boolState[already_S_OF_D12]  =  boolState[S_OF_D12]  ;



	boolState[already_S_OF_D21]  =  boolState[S_OF_D21]  ;



	boolState[already_S_OF_D22]  =  boolState[S_OF_D22]  ;



	boolState[already_S_OF_M1]  =  boolState[S_OF_M1]  ;



	boolState[already_S_OF_M2]  =  boolState[S_OF_M2]  ;



	boolState[already_S_OF_M3]  =  boolState[S_OF_M3]  ;



	boolState[already_S_OF_N]  =  boolState[S_OF_N]  ;



	boolState[already_S_OF_OR_1]  =  boolState[S_OF_OR_1]  ;



	boolState[already_S_OF_UE_1]  =  boolState[S_OF_UE_1]  ;

}

void
storm::figaro::FigaroProgram_figaro_17_23::runInteractions() {
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
         
        // ------------------- Handling of FailureState element --------------------------------
    
	boolFailureState[exp0] = ( boolState[S_OF_UE_1] );
        //cout << endl;
    }void storm::figaro::FigaroProgram_figaro_17_23::printstatetuple(){

                std::cout<<"\n State information: (";
                for (int i=0; i<boolFailureState.size(); i++)
                    {
                    std::cout<<boolFailureState.at(i);
                    }
                std::cout<<")";

            }
        int_fast64_t storm::figaro::FigaroProgram_figaro_17_23::stateSize() const{
            return numBoolState;
}
        void storm::figaro::FigaroProgram_figaro_17_23::fireinsttransitiongroup(std::string user_input_ins)

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
    