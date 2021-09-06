#include <iostream>
#include "FigaroModelfigaro_17_23_A.h"

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
        
void storm::figaro::FigaroProgram_figaro_17_23_A::init()
{
	//cout <<">>>>>>>>>>>>>>>>>>>> Initialization of variables <<<<<<<<<<<<<<<<<<<<<<<" << endl;

	REINITIALISATION_OF_required_OF_Bus = true;
	boolState[already_S_OF_Bus] = false;
	REINITIALISATION_OF_S_OF_Bus = false;
	REINITIALISATION_OF_relevant_evt_OF_Bus = false;
	boolState[failF_OF_Bus] = false;
	REINITIALISATION_OF_required_OF_CM1_loss = true;
	boolState[already_S_OF_CM1_loss] = false;
	REINITIALISATION_OF_S_OF_CM1_loss = false;
	REINITIALISATION_OF_relevant_evt_OF_CM1_loss = false;
	REINITIALISATION_OF_required_OF_CM2_loss = true;
	boolState[already_S_OF_CM2_loss] = false;
	REINITIALISATION_OF_S_OF_CM2_loss = false;
	REINITIALISATION_OF_relevant_evt_OF_CM2_loss = false;
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
	REINITIALISATION_OF_required_OF_Disk1_loss = true;
	boolState[already_S_OF_Disk1_loss] = false;
	REINITIALISATION_OF_S_OF_Disk1_loss = false;
	REINITIALISATION_OF_relevant_evt_OF_Disk1_loss = false;
	REINITIALISATION_OF_required_OF_Disk2_loss = true;
	boolState[already_S_OF_Disk2_loss] = false;
	REINITIALISATION_OF_S_OF_Disk2_loss = false;
	REINITIALISATION_OF_relevant_evt_OF_Disk2_loss = false;
	REINITIALISATION_OF_required_OF_Loss_of_both_calculators = true;
	boolState[already_S_OF_Loss_of_both_calculators] = false;
	REINITIALISATION_OF_S_OF_Loss_of_both_calculators = false;
	REINITIALISATION_OF_relevant_evt_OF_Loss_of_both_calculators = false;
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
	REINITIALISATION_OF_required_OF_Mem1_loss = true;
	boolState[already_S_OF_Mem1_loss] = false;
	REINITIALISATION_OF_S_OF_Mem1_loss = false;
	REINITIALISATION_OF_relevant_evt_OF_Mem1_loss = false;
	REINITIALISATION_OF_required_OF_Mem2_loss = true;
	boolState[already_S_OF_Mem2_loss] = false;
	REINITIALISATION_OF_S_OF_Mem2_loss = false;
	REINITIALISATION_OF_relevant_evt_OF_Mem2_loss = false;
	REINITIALISATION_OF_required_OF_OR_1 = true;
	boolState[already_S_OF_OR_1] = false;
	REINITIALISATION_OF_S_OF_OR_1 = false;
	REINITIALISATION_OF_relevant_evt_OF_OR_1 = false;
	REINITIALISATION_OF_required_OF_One_main_mem_fail = true;
	boolState[already_S_OF_One_main_mem_fail] = false;
	REINITIALISATION_OF_S_OF_One_main_mem_fail = false;
	REINITIALISATION_OF_relevant_evt_OF_One_main_mem_fail = false;
	REINITIALISATION_OF_required_OF_P1_loss = true;
	boolState[already_S_OF_P1_loss] = false;
	REINITIALISATION_OF_S_OF_P1_loss = false;
	REINITIALISATION_OF_relevant_evt_OF_P1_loss = false;
	REINITIALISATION_OF_required_OF_P2_loss = true;
	boolState[already_S_OF_P2_loss] = false;
	REINITIALISATION_OF_S_OF_P2_loss = false;
	REINITIALISATION_OF_relevant_evt_OF_P2_loss = false;
	REINITIALISATION_OF_required_OF_PS = true;
	boolState[already_S_OF_PS] = false;
	REINITIALISATION_OF_S_OF_PS = false;
	REINITIALISATION_OF_relevant_evt_OF_PS = false;
	boolState[failF_OF_PS] = false;
	REINITIALISATION_OF_required_OF_Pa = true;
	boolState[already_S_OF_Pa] = false;
	REINITIALISATION_OF_S_OF_Pa = false;
	REINITIALISATION_OF_relevant_evt_OF_Pa = false;
	boolState[failF_OF_Pa] = false;
	REINITIALISATION_OF_required_OF_Pb = true;
	boolState[already_S_OF_Pb] = false;
	REINITIALISATION_OF_S_OF_Pb = false;
	REINITIALISATION_OF_relevant_evt_OF_Pb = false;
	boolState[failF_OF_Pb] = false;
	REINITIALISATION_OF_required_OF_UE_1 = true;
	boolState[already_S_OF_UE_1] = false;
	REINITIALISATION_OF_S_OF_UE_1 = false;
	REINITIALISATION_OF_relevant_evt_OF_UE_1 = false;

	/* ---------- DECLARATION OF OCCURRENCE RULES FIRING FLAGS ------------ */
	FIRE_xx10_OF_Bus = false;
	FIRE_xx11_OF_Bus = false;
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
	FIRE_xx10_OF_PS = false;
	FIRE_xx11_OF_PS = false;
	FIRE_xx10_OF_Pa = false;
	FIRE_xx11_OF_Pa = false;
	FIRE_xx10_OF_Pb = false;
	FIRE_xx11_OF_Pb = false;

}

void storm::figaro::FigaroProgram_figaro_17_23_A::saveCurrentState()
{
	// cout <<">>>>>>>>>>>>>>>>>>>> Saving current state  <<<<<<<<<<<<<<<<<<<<<<<" << endl;
	backupBoolState = boolState ;
	backupFloatState = floatState ;
	backupIntState = intState ;
	backupEnumState = enumState ;
}

int storm::figaro::FigaroProgram_figaro_17_23_A::compareStates()
{
	// cout <<">>>>>>>>>>>>>>>>>>>> Comparing state with previous one (return number of differences) <<<<<<<<<<<<<<<<<<<<<<<" << endl;

	return (backupBoolState != boolState) + (backupFloatState != floatState) + (backupIntState != intState) + (backupEnumState != enumState); 
}

void storm::figaro::FigaroProgram_figaro_17_23_A::printState()
{
	//cout <<"\n==================== Print of the current state :  ====================" << endl;

	//cout << "Attribute :  boolState[required_OF_Bus] | Value : " << boolState[required_OF_Bus] << endl;
	//cout << "Attribute :  boolState[already_S_OF_Bus] | Value : " << boolState[already_S_OF_Bus] << endl;
	//cout << "Attribute :  boolState[S_OF_Bus] | Value : " << boolState[S_OF_Bus] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_Bus] | Value : " << boolState[relevant_evt_OF_Bus] << endl;
	//cout << "Attribute :  boolState[failF_OF_Bus] | Value : " << boolState[failF_OF_Bus] << endl;
	//cout << "Attribute :  boolState[required_OF_CM1_loss] | Value : " << boolState[required_OF_CM1_loss] << endl;
	//cout << "Attribute :  boolState[already_S_OF_CM1_loss] | Value : " << boolState[already_S_OF_CM1_loss] << endl;
	//cout << "Attribute :  boolState[S_OF_CM1_loss] | Value : " << boolState[S_OF_CM1_loss] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_CM1_loss] | Value : " << boolState[relevant_evt_OF_CM1_loss] << endl;
	//cout << "Attribute :  boolState[required_OF_CM2_loss] | Value : " << boolState[required_OF_CM2_loss] << endl;
	//cout << "Attribute :  boolState[already_S_OF_CM2_loss] | Value : " << boolState[already_S_OF_CM2_loss] << endl;
	//cout << "Attribute :  boolState[S_OF_CM2_loss] | Value : " << boolState[S_OF_CM2_loss] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_CM2_loss] | Value : " << boolState[relevant_evt_OF_CM2_loss] << endl;
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
	//cout << "Attribute :  boolState[required_OF_Disk1_loss] | Value : " << boolState[required_OF_Disk1_loss] << endl;
	//cout << "Attribute :  boolState[already_S_OF_Disk1_loss] | Value : " << boolState[already_S_OF_Disk1_loss] << endl;
	//cout << "Attribute :  boolState[S_OF_Disk1_loss] | Value : " << boolState[S_OF_Disk1_loss] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_Disk1_loss] | Value : " << boolState[relevant_evt_OF_Disk1_loss] << endl;
	//cout << "Attribute :  boolState[required_OF_Disk2_loss] | Value : " << boolState[required_OF_Disk2_loss] << endl;
	//cout << "Attribute :  boolState[already_S_OF_Disk2_loss] | Value : " << boolState[already_S_OF_Disk2_loss] << endl;
	//cout << "Attribute :  boolState[S_OF_Disk2_loss] | Value : " << boolState[S_OF_Disk2_loss] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_Disk2_loss] | Value : " << boolState[relevant_evt_OF_Disk2_loss] << endl;
	//cout << "Attribute :  boolState[required_OF_Loss_of_both_calculators] | Value : " << boolState[required_OF_Loss_of_both_calculators] << endl;
	//cout << "Attribute :  boolState[already_S_OF_Loss_of_both_calculators] | Value : " << boolState[already_S_OF_Loss_of_both_calculators] << endl;
	//cout << "Attribute :  boolState[S_OF_Loss_of_both_calculators] | Value : " << boolState[S_OF_Loss_of_both_calculators] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_Loss_of_both_calculators] | Value : " << boolState[relevant_evt_OF_Loss_of_both_calculators] << endl;
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
	//cout << "Attribute :  boolState[required_OF_Mem1_loss] | Value : " << boolState[required_OF_Mem1_loss] << endl;
	//cout << "Attribute :  boolState[already_S_OF_Mem1_loss] | Value : " << boolState[already_S_OF_Mem1_loss] << endl;
	//cout << "Attribute :  boolState[S_OF_Mem1_loss] | Value : " << boolState[S_OF_Mem1_loss] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_Mem1_loss] | Value : " << boolState[relevant_evt_OF_Mem1_loss] << endl;
	//cout << "Attribute :  boolState[required_OF_Mem2_loss] | Value : " << boolState[required_OF_Mem2_loss] << endl;
	//cout << "Attribute :  boolState[already_S_OF_Mem2_loss] | Value : " << boolState[already_S_OF_Mem2_loss] << endl;
	//cout << "Attribute :  boolState[S_OF_Mem2_loss] | Value : " << boolState[S_OF_Mem2_loss] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_Mem2_loss] | Value : " << boolState[relevant_evt_OF_Mem2_loss] << endl;
	//cout << "Attribute :  boolState[required_OF_OR_1] | Value : " << boolState[required_OF_OR_1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_OR_1] | Value : " << boolState[already_S_OF_OR_1] << endl;
	//cout << "Attribute :  boolState[S_OF_OR_1] | Value : " << boolState[S_OF_OR_1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_OR_1] | Value : " << boolState[relevant_evt_OF_OR_1] << endl;
	//cout << "Attribute :  boolState[required_OF_One_main_mem_fail] | Value : " << boolState[required_OF_One_main_mem_fail] << endl;
	//cout << "Attribute :  boolState[already_S_OF_One_main_mem_fail] | Value : " << boolState[already_S_OF_One_main_mem_fail] << endl;
	//cout << "Attribute :  boolState[S_OF_One_main_mem_fail] | Value : " << boolState[S_OF_One_main_mem_fail] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_One_main_mem_fail] | Value : " << boolState[relevant_evt_OF_One_main_mem_fail] << endl;
	//cout << "Attribute :  boolState[required_OF_P1_loss] | Value : " << boolState[required_OF_P1_loss] << endl;
	//cout << "Attribute :  boolState[already_S_OF_P1_loss] | Value : " << boolState[already_S_OF_P1_loss] << endl;
	//cout << "Attribute :  boolState[S_OF_P1_loss] | Value : " << boolState[S_OF_P1_loss] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_P1_loss] | Value : " << boolState[relevant_evt_OF_P1_loss] << endl;
	//cout << "Attribute :  boolState[required_OF_P2_loss] | Value : " << boolState[required_OF_P2_loss] << endl;
	//cout << "Attribute :  boolState[already_S_OF_P2_loss] | Value : " << boolState[already_S_OF_P2_loss] << endl;
	//cout << "Attribute :  boolState[S_OF_P2_loss] | Value : " << boolState[S_OF_P2_loss] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_P2_loss] | Value : " << boolState[relevant_evt_OF_P2_loss] << endl;
	//cout << "Attribute :  boolState[required_OF_PS] | Value : " << boolState[required_OF_PS] << endl;
	//cout << "Attribute :  boolState[already_S_OF_PS] | Value : " << boolState[already_S_OF_PS] << endl;
	//cout << "Attribute :  boolState[S_OF_PS] | Value : " << boolState[S_OF_PS] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_PS] | Value : " << boolState[relevant_evt_OF_PS] << endl;
	//cout << "Attribute :  boolState[failF_OF_PS] | Value : " << boolState[failF_OF_PS] << endl;
	//cout << "Attribute :  boolState[required_OF_Pa] | Value : " << boolState[required_OF_Pa] << endl;
	//cout << "Attribute :  boolState[already_S_OF_Pa] | Value : " << boolState[already_S_OF_Pa] << endl;
	//cout << "Attribute :  boolState[S_OF_Pa] | Value : " << boolState[S_OF_Pa] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_Pa] | Value : " << boolState[relevant_evt_OF_Pa] << endl;
	//cout << "Attribute :  boolState[failF_OF_Pa] | Value : " << boolState[failF_OF_Pa] << endl;
	//cout << "Attribute :  boolState[required_OF_Pb] | Value : " << boolState[required_OF_Pb] << endl;
	//cout << "Attribute :  boolState[already_S_OF_Pb] | Value : " << boolState[already_S_OF_Pb] << endl;
	//cout << "Attribute :  boolState[S_OF_Pb] | Value : " << boolState[S_OF_Pb] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_Pb] | Value : " << boolState[relevant_evt_OF_Pb] << endl;
	//cout << "Attribute :  boolState[failF_OF_Pb] | Value : " << boolState[failF_OF_Pb] << endl;
	//cout << "Attribute :  boolState[required_OF_UE_1] | Value : " << boolState[required_OF_UE_1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_UE_1] | Value : " << boolState[already_S_OF_UE_1] << endl;
	//cout << "Attribute :  boolState[S_OF_UE_1] | Value : " << boolState[S_OF_UE_1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_UE_1] | Value : " << boolState[relevant_evt_OF_UE_1] << endl;
}

bool storm::figaro::FigaroProgram_figaro_17_23_A::figaromodelhasinstransitions()
{
	return false;
}
void storm::figaro::FigaroProgram_figaro_17_23_A::doReinitialisations()
{
	boolState[required_OF_Bus] = REINITIALISATION_OF_required_OF_Bus;
	boolState[S_OF_Bus] = REINITIALISATION_OF_S_OF_Bus;
	boolState[relevant_evt_OF_Bus] = REINITIALISATION_OF_relevant_evt_OF_Bus;
	boolState[required_OF_CM1_loss] = REINITIALISATION_OF_required_OF_CM1_loss;
	boolState[S_OF_CM1_loss] = REINITIALISATION_OF_S_OF_CM1_loss;
	boolState[relevant_evt_OF_CM1_loss] = REINITIALISATION_OF_relevant_evt_OF_CM1_loss;
	boolState[required_OF_CM2_loss] = REINITIALISATION_OF_required_OF_CM2_loss;
	boolState[S_OF_CM2_loss] = REINITIALISATION_OF_S_OF_CM2_loss;
	boolState[relevant_evt_OF_CM2_loss] = REINITIALISATION_OF_relevant_evt_OF_CM2_loss;
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
	boolState[required_OF_Disk1_loss] = REINITIALISATION_OF_required_OF_Disk1_loss;
	boolState[S_OF_Disk1_loss] = REINITIALISATION_OF_S_OF_Disk1_loss;
	boolState[relevant_evt_OF_Disk1_loss] = REINITIALISATION_OF_relevant_evt_OF_Disk1_loss;
	boolState[required_OF_Disk2_loss] = REINITIALISATION_OF_required_OF_Disk2_loss;
	boolState[S_OF_Disk2_loss] = REINITIALISATION_OF_S_OF_Disk2_loss;
	boolState[relevant_evt_OF_Disk2_loss] = REINITIALISATION_OF_relevant_evt_OF_Disk2_loss;
	boolState[required_OF_Loss_of_both_calculators] = REINITIALISATION_OF_required_OF_Loss_of_both_calculators;
	boolState[S_OF_Loss_of_both_calculators] = REINITIALISATION_OF_S_OF_Loss_of_both_calculators;
	boolState[relevant_evt_OF_Loss_of_both_calculators] = REINITIALISATION_OF_relevant_evt_OF_Loss_of_both_calculators;
	boolState[required_OF_M1] = REINITIALISATION_OF_required_OF_M1;
	boolState[S_OF_M1] = REINITIALISATION_OF_S_OF_M1;
	boolState[relevant_evt_OF_M1] = REINITIALISATION_OF_relevant_evt_OF_M1;
	boolState[required_OF_M2] = REINITIALISATION_OF_required_OF_M2;
	boolState[S_OF_M2] = REINITIALISATION_OF_S_OF_M2;
	boolState[relevant_evt_OF_M2] = REINITIALISATION_OF_relevant_evt_OF_M2;
	boolState[required_OF_M3] = REINITIALISATION_OF_required_OF_M3;
	boolState[S_OF_M3] = REINITIALISATION_OF_S_OF_M3;
	boolState[relevant_evt_OF_M3] = REINITIALISATION_OF_relevant_evt_OF_M3;
	boolState[required_OF_Mem1_loss] = REINITIALISATION_OF_required_OF_Mem1_loss;
	boolState[S_OF_Mem1_loss] = REINITIALISATION_OF_S_OF_Mem1_loss;
	boolState[relevant_evt_OF_Mem1_loss] = REINITIALISATION_OF_relevant_evt_OF_Mem1_loss;
	boolState[required_OF_Mem2_loss] = REINITIALISATION_OF_required_OF_Mem2_loss;
	boolState[S_OF_Mem2_loss] = REINITIALISATION_OF_S_OF_Mem2_loss;
	boolState[relevant_evt_OF_Mem2_loss] = REINITIALISATION_OF_relevant_evt_OF_Mem2_loss;
	boolState[required_OF_OR_1] = REINITIALISATION_OF_required_OF_OR_1;
	boolState[S_OF_OR_1] = REINITIALISATION_OF_S_OF_OR_1;
	boolState[relevant_evt_OF_OR_1] = REINITIALISATION_OF_relevant_evt_OF_OR_1;
	boolState[required_OF_One_main_mem_fail] = REINITIALISATION_OF_required_OF_One_main_mem_fail;
	boolState[S_OF_One_main_mem_fail] = REINITIALISATION_OF_S_OF_One_main_mem_fail;
	boolState[relevant_evt_OF_One_main_mem_fail] = REINITIALISATION_OF_relevant_evt_OF_One_main_mem_fail;
	boolState[required_OF_P1_loss] = REINITIALISATION_OF_required_OF_P1_loss;
	boolState[S_OF_P1_loss] = REINITIALISATION_OF_S_OF_P1_loss;
	boolState[relevant_evt_OF_P1_loss] = REINITIALISATION_OF_relevant_evt_OF_P1_loss;
	boolState[required_OF_P2_loss] = REINITIALISATION_OF_required_OF_P2_loss;
	boolState[S_OF_P2_loss] = REINITIALISATION_OF_S_OF_P2_loss;
	boolState[relevant_evt_OF_P2_loss] = REINITIALISATION_OF_relevant_evt_OF_P2_loss;
	boolState[required_OF_PS] = REINITIALISATION_OF_required_OF_PS;
	boolState[S_OF_PS] = REINITIALISATION_OF_S_OF_PS;
	boolState[relevant_evt_OF_PS] = REINITIALISATION_OF_relevant_evt_OF_PS;
	boolState[required_OF_Pa] = REINITIALISATION_OF_required_OF_Pa;
	boolState[S_OF_Pa] = REINITIALISATION_OF_S_OF_Pa;
	boolState[relevant_evt_OF_Pa] = REINITIALISATION_OF_relevant_evt_OF_Pa;
	boolState[required_OF_Pb] = REINITIALISATION_OF_required_OF_Pb;
	boolState[S_OF_Pb] = REINITIALISATION_OF_S_OF_Pb;
	boolState[relevant_evt_OF_Pb] = REINITIALISATION_OF_relevant_evt_OF_Pb;
	boolState[required_OF_UE_1] = REINITIALISATION_OF_required_OF_UE_1;
	boolState[S_OF_UE_1] = REINITIALISATION_OF_S_OF_UE_1;
	boolState[relevant_evt_OF_UE_1] = REINITIALISATION_OF_relevant_evt_OF_UE_1;
}

void storm::figaro::FigaroProgram_figaro_17_23_A::fireOccurrence(int numFire)
{
	//cout <<">>>>>>>>>>>>>>>>>>>> Fire of occurrence #" << numFire << " <<<<<<<<<<<<<<<<<<<<<<<" << endl;

	if (numFire == 0)
	{
		FIRE_xx10_OF_Bus = true;
	}

	if (numFire == 1)
	{
		FIRE_xx11_OF_Bus = true;
	}

	if (numFire == 2)
	{
		FIRE_xx10_OF_D11 = true;
	}

	if (numFire == 3)
	{
		FIRE_xx11_OF_D11 = true;
	}

	if (numFire == 4)
	{
		FIRE_xx17_OF_D12 = true;
	}

	if (numFire == 5)
	{
		FIRE_xx18_OF_D12 = true;
	}

	if (numFire == 6)
	{
		FIRE_xx19_OF_D12 = true;
	}

	if (numFire == 7)
	{
		FIRE_xx10_OF_D21 = true;
	}

	if (numFire == 8)
	{
		FIRE_xx11_OF_D21 = true;
	}

	if (numFire == 9)
	{
		FIRE_xx17_OF_D22 = true;
	}

	if (numFire == 10)
	{
		FIRE_xx18_OF_D22 = true;
	}

	if (numFire == 11)
	{
		FIRE_xx19_OF_D22 = true;
	}

	if (numFire == 12)
	{
		FIRE_xx10_OF_M1 = true;
	}

	if (numFire == 13)
	{
		FIRE_xx11_OF_M1 = true;
	}

	if (numFire == 14)
	{
		FIRE_xx10_OF_M2 = true;
	}

	if (numFire == 15)
	{
		FIRE_xx11_OF_M2 = true;
	}

	if (numFire == 16)
	{
		FIRE_xx17_OF_M3 = true;
	}

	if (numFire == 17)
	{
		FIRE_xx18_OF_M3 = true;
	}

	if (numFire == 18)
	{
		FIRE_xx19_OF_M3 = true;
	}

	if (numFire == 19)
	{
		FIRE_xx10_OF_PS = true;
	}

	if (numFire == 20)
	{
		FIRE_xx11_OF_PS = true;
	}

	if (numFire == 21)
	{
		FIRE_xx10_OF_Pa = true;
	}

	if (numFire == 22)
	{
		FIRE_xx11_OF_Pa = true;
	}

	if (numFire == 23)
	{
		FIRE_xx10_OF_Pb = true;
	}

	if (numFire == 24)
	{
		FIRE_xx11_OF_Pb = true;
	}

/* ---------- DECLARATION OF OCCURRENCE RULES------------ */

	// Occurrence xx10_OF_Bus
	if ((boolState[failF_OF_Bus] == false) && boolState[required_OF_Bus]) 
	{
		 
		if (FIRE_xx10_OF_Bus)
		{
			boolState[failF_OF_Bus]  =  true;
			FIRE_xx10_OF_Bus = false;
		}
	}

	// Occurrence xx11_OF_Bus
	if (boolState[failF_OF_Bus] == true) 
	{
		 
		if (FIRE_xx11_OF_Bus)
		{
			boolState[failF_OF_Bus]  =  false;
			FIRE_xx11_OF_Bus = false;
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

	// Occurrence xx10_OF_PS
	if ((boolState[failF_OF_PS] == false) && boolState[required_OF_PS]) 
	{
		 
		if (FIRE_xx10_OF_PS)
		{
			boolState[failF_OF_PS]  =  true;
			FIRE_xx10_OF_PS = false;
		}
	}

	// Occurrence xx11_OF_PS
	if (boolState[failF_OF_PS] == true) 
	{
		 
		if (FIRE_xx11_OF_PS)
		{
			boolState[failF_OF_PS]  =  false;
			FIRE_xx11_OF_PS = false;
		}
	}

	// Occurrence xx10_OF_Pa
	if ((boolState[failF_OF_Pa] == false) && boolState[required_OF_Pa]) 
	{
		 
		if (FIRE_xx10_OF_Pa)
		{
			boolState[failF_OF_Pa]  =  true;
			FIRE_xx10_OF_Pa = false;
		}
	}

	// Occurrence xx11_OF_Pa
	if (boolState[failF_OF_Pa] == true) 
	{
		 
		if (FIRE_xx11_OF_Pa)
		{
			boolState[failF_OF_Pa]  =  false;
			FIRE_xx11_OF_Pa = false;
		}
	}

	// Occurrence xx10_OF_Pb
	if ((boolState[failF_OF_Pb] == false) && boolState[required_OF_Pb]) 
	{
		 
		if (FIRE_xx10_OF_Pb)
		{
			boolState[failF_OF_Pb]  =  true;
			FIRE_xx10_OF_Pb = false;
		}
	}

	// Occurrence xx11_OF_Pb
	if (boolState[failF_OF_Pb] == true) 
	{
		 
		if (FIRE_xx11_OF_Pb)
		{
			boolState[failF_OF_Pb]  =  false;
			FIRE_xx11_OF_Pb = false;
		}
	}

}

std::vector<std::tuple<int, double, std::string, int>> storm::figaro::FigaroProgram_figaro_17_23_A::showFireableOccurrences()
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
     
	if ((boolState[failF_OF_Bus] == false) && boolState[required_OF_Bus])
	{
		//cout << "0 : xx10_OF_Bus : FAULT failF  LABEL \"failure in operation Bus\"  DIST EXP (2e-09)  INDUCING boolState[failF_OF_Bus]  =  TRUE" << endl;
		list.push_back(make_tuple(0, 2e-09, "EXP", 0));
	}
	if (boolState[failF_OF_Bus] == true)
	{
		//cout << "1 : xx11_OF_Bus : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_Bus]  =  FALSE" << endl;
		list.push_back(make_tuple(1, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_D11] == false) && boolState[required_OF_D11])
	{
		//cout << "2 : xx10_OF_D11 : FAULT failF  LABEL \"failure in operation D11\"  DIST EXP (8e-05)  INDUCING boolState[failF_OF_D11]  =  TRUE" << endl;
		list.push_back(make_tuple(2, 8e-05, "EXP", 0));
	}
	if (boolState[failF_OF_D11] == true)
	{
		//cout << "3 : xx11_OF_D11 : REPAIR rep  DIST EXP (0.3)  INDUCING boolState[failF_OF_D11]  =  FALSE" << endl;
		list.push_back(make_tuple(3, 0.3, "EXP", 0));
	}
	if ((boolState[failF_OF_D12] == false) && (boolState[required_OF_D12] && ( !boolState[failS_OF_D12])))
	{
		//cout << "4 : xx17_OF_D12 : FAULT failF  LABEL \"failure in operation D12\"  DIST EXP (8e-05)  INDUCING boolState[failF_OF_D12]  =  TRUE" << endl;
		list.push_back(make_tuple(4, 8e-05, "EXP", 0));
	}
	if ((boolState[failS_OF_D12] == false) && (( !boolState[required_OF_D12]) && ( !boolState[failF_OF_D12])))
	{
		//cout << "5 : xx18_OF_D12 : FAULT failS  LABEL \"standby failure D12\"  DIST EXP (4e-05)  INDUCING boolState[failS_OF_D12]  =  TRUE" << endl;
		list.push_back(make_tuple(5, 4e-05, "EXP", 0));
	}
	if ((boolState[failS_OF_D12] == true) || (boolState[failF_OF_D12] == true))
	{
		//cout << "6 : xx19_OF_D12 : REPAIR rep  DIST EXP (0.3)  INDUCING boolState[failS_OF_D12]  =  FALSE,failF_OF_D12  =  FALSE" << endl;
		list.push_back(make_tuple(6, 0.3, "EXP", 0));
	}
	if ((boolState[failF_OF_D21] == false) && boolState[required_OF_D21])
	{
		//cout << "7 : xx10_OF_D21 : FAULT failF  LABEL \"failure in operation D21\"  DIST EXP (8e-05)  INDUCING boolState[failF_OF_D21]  =  TRUE" << endl;
		list.push_back(make_tuple(7, 8e-05, "EXP", 0));
	}
	if (boolState[failF_OF_D21] == true)
	{
		//cout << "8 : xx11_OF_D21 : REPAIR rep  DIST EXP (0.3)  INDUCING boolState[failF_OF_D21]  =  FALSE" << endl;
		list.push_back(make_tuple(8, 0.3, "EXP", 0));
	}
	if ((boolState[failF_OF_D22] == false) && (boolState[required_OF_D22] && ( !boolState[failS_OF_D22])))
	{
		//cout << "9 : xx17_OF_D22 : FAULT failF  LABEL \"failure in operation D22\"  DIST EXP (8e-05)  INDUCING boolState[failF_OF_D22]  =  TRUE" << endl;
		list.push_back(make_tuple(9, 8e-05, "EXP", 0));
	}
	if ((boolState[failS_OF_D22] == false) && (( !boolState[required_OF_D22]) && ( !boolState[failF_OF_D22])))
	{
		//cout << "10 : xx18_OF_D22 : FAULT failS  LABEL \"standby failure D22\"  DIST EXP (4e-05)  INDUCING boolState[failS_OF_D22]  =  TRUE" << endl;
		list.push_back(make_tuple(10, 4e-05, "EXP", 0));
	}
	if ((boolState[failS_OF_D22] == true) || (boolState[failF_OF_D22] == true))
	{
		//cout << "11 : xx19_OF_D22 : REPAIR rep  DIST EXP (0.3)  INDUCING boolState[failS_OF_D22]  =  FALSE,failF_OF_D22  =  FALSE" << endl;
		list.push_back(make_tuple(11, 0.3, "EXP", 0));
	}
	if ((boolState[failF_OF_M1] == false) && boolState[required_OF_M1])
	{
		//cout << "12 : xx10_OF_M1 : FAULT failF  LABEL \"failure in operation M1\"  DIST EXP (3e-08)  INDUCING boolState[failF_OF_M1]  =  TRUE" << endl;
		list.push_back(make_tuple(12, 3e-08, "EXP", 0));
	}
	if (boolState[failF_OF_M1] == true)
	{
		//cout << "13 : xx11_OF_M1 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_M1]  =  FALSE" << endl;
		list.push_back(make_tuple(13, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_M2] == false) && boolState[required_OF_M2])
	{
		//cout << "14 : xx10_OF_M2 : FAULT failF  LABEL \"failure in operation M2\"  DIST EXP (3e-08)  INDUCING boolState[failF_OF_M2]  =  TRUE" << endl;
		list.push_back(make_tuple(14, 3e-08, "EXP", 0));
	}
	if (boolState[failF_OF_M2] == true)
	{
		//cout << "15 : xx11_OF_M2 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_M2]  =  FALSE" << endl;
		list.push_back(make_tuple(15, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_M3] == false) && (boolState[required_OF_M3] && ( !boolState[failS_OF_M3])))
	{
		//cout << "16 : xx17_OF_M3 : FAULT failF  LABEL \"failure in operation M3\"  DIST EXP (3e-08)  INDUCING boolState[failF_OF_M3]  =  TRUE" << endl;
		list.push_back(make_tuple(16, 3e-08, "EXP", 0));
	}
	if ((boolState[failS_OF_M3] == false) && (( !boolState[required_OF_M3]) && ( !boolState[failF_OF_M3])))
	{
		//cout << "17 : xx18_OF_M3 : FAULT failS  LABEL \"standby failure M3\"  DIST EXP (1.5e-08)  INDUCING boolState[failS_OF_M3]  =  TRUE" << endl;
		list.push_back(make_tuple(17, 1.5e-08, "EXP", 0));
	}
	if ((boolState[failS_OF_M3] == true) || (boolState[failF_OF_M3] == true))
	{
		//cout << "18 : xx19_OF_M3 : REPAIR rep  DIST EXP (0.5)  INDUCING boolState[failS_OF_M3]  =  FALSE,failF_OF_M3  =  FALSE" << endl;
		list.push_back(make_tuple(18, 0.5, "EXP", 0));
	}
	if ((boolState[failF_OF_PS] == false) && boolState[required_OF_PS])
	{
		//cout << "19 : xx10_OF_PS : FAULT failF  LABEL \"failure in operation PS\"  DIST EXP (6e-06)  INDUCING boolState[failF_OF_PS]  =  TRUE" << endl;
		list.push_back(make_tuple(19, 6e-06, "EXP", 0));
	}
	if (boolState[failF_OF_PS] == true)
	{
		//cout << "20 : xx11_OF_PS : REPAIR rep  DIST EXP (10)  INDUCING boolState[failF_OF_PS]  =  FALSE" << endl;
		list.push_back(make_tuple(20, 10, "EXP", 0));
	}
	if ((boolState[failF_OF_Pa] == false) && boolState[required_OF_Pa])
	{
		//cout << "21 : xx10_OF_Pa : FAULT failF  LABEL \"failure in operation Pa\"  DIST EXP (5e-07)  INDUCING boolState[failF_OF_Pa]  =  TRUE" << endl;
		list.push_back(make_tuple(21, 5e-07, "EXP", 0));
	}
	if (boolState[failF_OF_Pa] == true)
	{
		//cout << "22 : xx11_OF_Pa : REPAIR rep  DIST EXP (0.2)  INDUCING boolState[failF_OF_Pa]  =  FALSE" << endl;
		list.push_back(make_tuple(22, 0.2, "EXP", 0));
	}
	if ((boolState[failF_OF_Pb] == false) && boolState[required_OF_Pb])
	{
		//cout << "23 : xx10_OF_Pb : FAULT failF  LABEL \"failure in operation Pb\"  DIST EXP (5e-07)  INDUCING boolState[failF_OF_Pb]  =  TRUE" << endl;
		list.push_back(make_tuple(23, 5e-07, "EXP", 0));
	}
	if (boolState[failF_OF_Pb] == true)
	{
		//cout << "24 : xx11_OF_Pb : REPAIR rep  DIST EXP (0.2)  INDUCING boolState[failF_OF_Pb]  =  FALSE" << endl;
		list.push_back(make_tuple(24, 0.2, "EXP", 0));
	}
	return list;
}


void storm::figaro::FigaroProgram_figaro_17_23_A::runOnceInteractionStep_initialization()
{
	if (boolState[failF_OF_Bus] == true )
	{
		boolState[S_OF_Bus]  =  true;
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

	if (boolState[failF_OF_PS] == true )
	{
		boolState[S_OF_PS]  =  true;
	}

	if (boolState[failF_OF_Pa] == true )
	{
		boolState[S_OF_Pa]  =  true;
	}

	if (boolState[failF_OF_Pb] == true )
	{
		boolState[S_OF_Pb]  =  true;
	}

}


void storm::figaro::FigaroProgram_figaro_17_23_A::runOnceInteractionStep_propagate_effect_S()
{
	if ((boolState[S_OF_Disk1_loss] || boolState[S_OF_Mem1_loss]) || boolState[S_OF_P1_loss] )
	{
		boolState[S_OF_CM1_loss]  =  true;
	}

	if ((boolState[S_OF_Disk2_loss] || boolState[S_OF_Mem2_loss]) || boolState[S_OF_P2_loss] )
	{
		boolState[S_OF_CM2_loss]  =  true;
	}

	if (boolState[S_OF_D11] && boolState[S_OF_D12] )
	{
		boolState[S_OF_Disk1_loss]  =  true;
	}

	if (boolState[S_OF_D21] && boolState[S_OF_D22] )
	{
		boolState[S_OF_Disk2_loss]  =  true;
	}

	if (boolState[S_OF_CM1_loss] && boolState[S_OF_CM2_loss] )
	{
		boolState[S_OF_Loss_of_both_calculators]  =  true;
	}

	if (boolState[S_OF_M1] && boolState[S_OF_M3] )
	{
		boolState[S_OF_Mem1_loss]  =  true;
	}

	if (boolState[S_OF_M2] && boolState[S_OF_M3] )
	{
		boolState[S_OF_Mem2_loss]  =  true;
	}

	if (boolState[S_OF_Bus] || boolState[S_OF_Loss_of_both_calculators] )
	{
		boolState[S_OF_OR_1]  =  true;
	}

	if (boolState[S_OF_M1] || boolState[S_OF_M2] )
	{
		boolState[S_OF_One_main_mem_fail]  =  true;
	}

	if (boolState[S_OF_PS] || boolState[S_OF_Pa] )
	{
		boolState[S_OF_P1_loss]  =  true;
	}

	if (boolState[S_OF_PS] || boolState[S_OF_Pb] )
	{
		boolState[S_OF_P2_loss]  =  true;
	}

	if (boolState[S_OF_OR_1] )
	{
		boolState[S_OF_UE_1]  =  true;
	}

}


void storm::figaro::FigaroProgram_figaro_17_23_A::runOnceInteractionStep_propagate_effect_required()
{
	if ( !boolState[required_OF_OR_1] )
	{
		boolState[required_OF_Bus]  =  false;
	}

	if (boolState[relevant_evt_OF_OR_1] && ( !boolState[S_OF_OR_1]) )
	{
		boolState[relevant_evt_OF_Bus]  =  true;
	}

	if ( !boolState[required_OF_Loss_of_both_calculators] )
	{
		boolState[required_OF_CM1_loss]  =  false;
	}

	if (boolState[relevant_evt_OF_Loss_of_both_calculators] && ( !boolState[S_OF_Loss_of_both_calculators]) )
	{
		boolState[relevant_evt_OF_CM1_loss]  =  true;
	}

	if ( !boolState[required_OF_Loss_of_both_calculators] )
	{
		boolState[required_OF_CM2_loss]  =  false;
	}

	if (boolState[relevant_evt_OF_Loss_of_both_calculators] && ( !boolState[S_OF_Loss_of_both_calculators]) )
	{
		boolState[relevant_evt_OF_CM2_loss]  =  true;
	}

	if ( !boolState[required_OF_Disk1_loss] )
	{
		boolState[required_OF_D11]  =  false;
	}

	if ((boolState[relevant_evt_OF_Disk1_loss] && ( !boolState[S_OF_Disk1_loss])) || (  boolState[relevant_evt_OF_D12] && ( !boolState[S_OF_D12])) )
	{
		boolState[relevant_evt_OF_D11]  =  true;
	}

	if (( !boolState[required_OF_Disk1_loss]) || ( !boolState[S_OF_D11]) )
	{
		boolState[required_OF_D12]  =  false;
	}

	if (boolState[relevant_evt_OF_Disk1_loss] && ( !boolState[S_OF_Disk1_loss]) )
	{
		boolState[relevant_evt_OF_D12]  =  true;
	}

	if ( !boolState[required_OF_Disk2_loss] )
	{
		boolState[required_OF_D21]  =  false;
	}

	if ((boolState[relevant_evt_OF_Disk2_loss] && ( !boolState[S_OF_Disk2_loss])) || (  boolState[relevant_evt_OF_D22] && ( !boolState[S_OF_D22])) )
	{
		boolState[relevant_evt_OF_D21]  =  true;
	}

	if (( !boolState[required_OF_Disk2_loss]) || ( !boolState[S_OF_D21]) )
	{
		boolState[required_OF_D22]  =  false;
	}

	if (boolState[relevant_evt_OF_Disk2_loss] && ( !boolState[S_OF_Disk2_loss]) )
	{
		boolState[relevant_evt_OF_D22]  =  true;
	}

	if ( !boolState[required_OF_CM1_loss] )
	{
		boolState[required_OF_Disk1_loss]  =  false;
	}

	if (boolState[relevant_evt_OF_CM1_loss] && ( !boolState[S_OF_CM1_loss]) )
	{
		boolState[relevant_evt_OF_Disk1_loss]  =  true;
	}

	if ( !boolState[required_OF_CM2_loss] )
	{
		boolState[required_OF_Disk2_loss]  =  false;
	}

	if (boolState[relevant_evt_OF_CM2_loss] && ( !boolState[S_OF_CM2_loss]) )
	{
		boolState[relevant_evt_OF_Disk2_loss]  =  true;
	}

	if ( !boolState[required_OF_OR_1] )
	{
		boolState[required_OF_Loss_of_both_calculators]  =  false;
	}

	if (boolState[relevant_evt_OF_OR_1] && ( !boolState[S_OF_OR_1]) )
	{
		boolState[relevant_evt_OF_Loss_of_both_calculators]  =  true;
	}

	if (( !boolState[required_OF_Mem1_loss]) && ( !boolState[required_OF_One_main_mem_fail]) )
	{
		boolState[required_OF_M1]  =  false;
	}

	if ((boolState[relevant_evt_OF_Mem1_loss] && ( !boolState[S_OF_Mem1_loss])) || (  boolState[relevant_evt_OF_One_main_mem_fail] && ( !boolState[S_OF_One_main_mem_fail])) )
	{
		boolState[relevant_evt_OF_M1]  =  true;
	}

	if (( !boolState[required_OF_Mem2_loss]) && ( !boolState[required_OF_One_main_mem_fail]) )
	{
		boolState[required_OF_M2]  =  false;
	}

	if ((boolState[relevant_evt_OF_Mem2_loss] && ( !boolState[S_OF_Mem2_loss])) || (  boolState[relevant_evt_OF_One_main_mem_fail] && ( !boolState[S_OF_One_main_mem_fail])) )
	{
		boolState[relevant_evt_OF_M2]  =  true;
	}

	if ((( !boolState[required_OF_Mem1_loss]) && ( !boolState[required_OF_Mem2_loss]))   || ( !boolState[S_OF_One_main_mem_fail]) )
	{
		boolState[required_OF_M3]  =  false;
	}

	if ((boolState[relevant_evt_OF_Mem1_loss] && ( !boolState[S_OF_Mem1_loss])) || (  boolState[relevant_evt_OF_Mem2_loss] && ( !boolState[S_OF_Mem2_loss])) )
	{
		boolState[relevant_evt_OF_M3]  =  true;
	}

	if ( !boolState[required_OF_CM1_loss] )
	{
		boolState[required_OF_Mem1_loss]  =  false;
	}

	if (boolState[relevant_evt_OF_CM1_loss] && ( !boolState[S_OF_CM1_loss]) )
	{
		boolState[relevant_evt_OF_Mem1_loss]  =  true;
	}

	if ( !boolState[required_OF_CM2_loss] )
	{
		boolState[required_OF_Mem2_loss]  =  false;
	}

	if (boolState[relevant_evt_OF_CM2_loss] && ( !boolState[S_OF_CM2_loss]) )
	{
		boolState[relevant_evt_OF_Mem2_loss]  =  true;
	}

	if ( !boolState[required_OF_UE_1] )
	{
		boolState[required_OF_OR_1]  =  false;
	}

	if (boolState[relevant_evt_OF_UE_1] && ( !boolState[S_OF_UE_1]) )
	{
		boolState[relevant_evt_OF_OR_1]  =  true;
	}

	if (boolState[relevant_evt_OF_M3] && ( !boolState[S_OF_M3]) )
	{
		boolState[relevant_evt_OF_One_main_mem_fail]  =  true;
	}

	if ( !boolState[required_OF_CM1_loss] )
	{
		boolState[required_OF_P1_loss]  =  false;
	}

	if (boolState[relevant_evt_OF_CM1_loss] && ( !boolState[S_OF_CM1_loss]) )
	{
		boolState[relevant_evt_OF_P1_loss]  =  true;
	}

	if ( !boolState[required_OF_CM2_loss] )
	{
		boolState[required_OF_P2_loss]  =  false;
	}

	if (boolState[relevant_evt_OF_CM2_loss] && ( !boolState[S_OF_CM2_loss]) )
	{
		boolState[relevant_evt_OF_P2_loss]  =  true;
	}

	if (( !boolState[required_OF_P1_loss]) && ( !boolState[required_OF_P2_loss]) )
	{
		boolState[required_OF_PS]  =  false;
	}

	if ((boolState[relevant_evt_OF_P1_loss] && ( !boolState[S_OF_P1_loss])) || (  boolState[relevant_evt_OF_P2_loss] && ( !boolState[S_OF_P2_loss])) )
	{
		boolState[relevant_evt_OF_PS]  =  true;
	}

	if ( !boolState[required_OF_P1_loss] )
	{
		boolState[required_OF_Pa]  =  false;
	}

	if (boolState[relevant_evt_OF_P1_loss] && ( !boolState[S_OF_P1_loss]) )
	{
		boolState[relevant_evt_OF_Pa]  =  true;
	}

	if ( !boolState[required_OF_P2_loss] )
	{
		boolState[required_OF_Pb]  =  false;
	}

	if (boolState[relevant_evt_OF_P2_loss] && ( !boolState[S_OF_P2_loss]) )
	{
		boolState[relevant_evt_OF_Pb]  =  true;
	}



	boolState[relevant_evt_OF_UE_1]  =  true  ;

}


void storm::figaro::FigaroProgram_figaro_17_23_A::runOnceInteractionStep_propagate_leaves()
{


	boolState[already_S_OF_Bus]  =  boolState[S_OF_Bus]  ;



	boolState[already_S_OF_CM1_loss]  =  boolState[S_OF_CM1_loss]  ;



	boolState[already_S_OF_CM2_loss]  =  boolState[S_OF_CM2_loss]  ;



	boolState[already_S_OF_D11]  =  boolState[S_OF_D11]  ;



	boolState[already_S_OF_D12]  =  boolState[S_OF_D12]  ;



	boolState[already_S_OF_D21]  =  boolState[S_OF_D21]  ;



	boolState[already_S_OF_D22]  =  boolState[S_OF_D22]  ;



	boolState[already_S_OF_Disk1_loss]  =  boolState[S_OF_Disk1_loss]  ;



	boolState[already_S_OF_Disk2_loss]  =  boolState[S_OF_Disk2_loss]  ;



	boolState[already_S_OF_Loss_of_both_calculators]  =  boolState[S_OF_Loss_of_both_calculators]  ;



	boolState[already_S_OF_M1]  =  boolState[S_OF_M1]  ;



	boolState[already_S_OF_M2]  =  boolState[S_OF_M2]  ;



	boolState[already_S_OF_M3]  =  boolState[S_OF_M3]  ;



	boolState[already_S_OF_Mem1_loss]  =  boolState[S_OF_Mem1_loss]  ;



	boolState[already_S_OF_Mem2_loss]  =  boolState[S_OF_Mem2_loss]  ;



	boolState[already_S_OF_OR_1]  =  boolState[S_OF_OR_1]  ;



	boolState[already_S_OF_One_main_mem_fail]  =  boolState[S_OF_One_main_mem_fail]  ;



	boolState[already_S_OF_P1_loss]  =  boolState[S_OF_P1_loss]  ;



	boolState[already_S_OF_P2_loss]  =  boolState[S_OF_P2_loss]  ;



	boolState[already_S_OF_PS]  =  boolState[S_OF_PS]  ;



	boolState[already_S_OF_Pa]  =  boolState[S_OF_Pa]  ;



	boolState[already_S_OF_Pb]  =  boolState[S_OF_Pb]  ;



	boolState[already_S_OF_UE_1]  =  boolState[S_OF_UE_1]  ;

}

void
storm::figaro::FigaroProgram_figaro_17_23_A::runInteractions() {
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
    }void storm::figaro::FigaroProgram_figaro_17_23_A::printstatetuple(){

                std::cout<<"\n State information: (";
                for (int i=0; i<boolFailureState.size(); i++)
                    {
                    std::cout<<boolFailureState.at(i);
                    }
                std::cout<<")";

            }
        int_fast64_t storm::figaro::FigaroProgram_figaro_17_23_A::stateSize() const{
            return numBoolState;
}
        void storm::figaro::FigaroProgram_figaro_17_23_A::fireinsttransitiongroup(std::string user_input_ins)

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
    