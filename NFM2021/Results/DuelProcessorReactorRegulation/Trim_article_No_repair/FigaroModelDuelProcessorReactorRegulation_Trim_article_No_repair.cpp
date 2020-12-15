#include <iostream>
#include "FigaroModelDuelProcessorReactorRegulation_Trim_article_No_repair.h"

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
        
void storm::figaro::FigaroProgram_DuelProcessorReactorRegulation_Trim_article_No_repair::init()
{
	//cout <<">>>>>>>>>>>>>>>>>>>> Initialization of variables <<<<<<<<<<<<<<<<<<<<<<<" << endl;

	REINITIALISATION_OF_required_OF_ADA27_A = true;
	boolState[already_S_OF_ADA27_A] = false;
	REINITIALISATION_OF_S_OF_ADA27_A = false;
	REINITIALISATION_OF_relevant_evt_OF_ADA27_A = false;
	boolState[failF_OF_ADA27_A] = false;
	REINITIALISATION_OF_required_OF_ADA27_B = true;
	boolState[already_S_OF_ADA27_B] = false;
	REINITIALISATION_OF_S_OF_ADA27_B = false;
	REINITIALISATION_OF_relevant_evt_OF_ADA27_B = false;
	boolState[failF_OF_ADA27_B] = false;
	REINITIALISATION_OF_required_OF_ANAMB_P16_A = true;
	boolState[already_S_OF_ANAMB_P16_A] = false;
	REINITIALISATION_OF_S_OF_ANAMB_P16_A = false;
	REINITIALISATION_OF_relevant_evt_OF_ANAMB_P16_A = false;
	boolState[failF_OF_ANAMB_P16_A] = false;
	REINITIALISATION_OF_required_OF_ANAMB_P16_B = true;
	boolState[already_S_OF_ANAMB_P16_B] = false;
	REINITIALISATION_OF_S_OF_ANAMB_P16_B = false;
	REINITIALISATION_OF_relevant_evt_OF_ANAMB_P16_B = false;
	boolState[failF_OF_ANAMB_P16_B] = false;
	REINITIALISATION_OF_required_OF_ANAMB_P17_A = true;
	boolState[already_S_OF_ANAMB_P17_A] = false;
	REINITIALISATION_OF_S_OF_ANAMB_P17_A = false;
	REINITIALISATION_OF_relevant_evt_OF_ANAMB_P17_A = false;
	boolState[failF_OF_ANAMB_P17_A] = false;
	REINITIALISATION_OF_required_OF_ANAMB_P17_B = true;
	boolState[already_S_OF_ANAMB_P17_B] = false;
	REINITIALISATION_OF_S_OF_ANAMB_P17_B = false;
	REINITIALISATION_OF_relevant_evt_OF_ANAMB_P17_B = false;
	boolState[failF_OF_ANAMB_P17_B] = false;
	REINITIALISATION_OF_required_OF_CPU86_102_A = true;
	boolState[already_S_OF_CPU86_102_A] = false;
	REINITIALISATION_OF_S_OF_CPU86_102_A = false;
	REINITIALISATION_OF_relevant_evt_OF_CPU86_102_A = false;
	boolState[failF_OF_CPU86_102_A] = false;
	REINITIALISATION_OF_required_OF_CPU86_102_B = true;
	boolState[already_S_OF_CPU86_102_B] = false;
	REINITIALISATION_OF_S_OF_CPU86_102_B = false;
	REINITIALISATION_OF_relevant_evt_OF_CPU86_102_B = false;
	boolState[failF_OF_CPU86_102_B] = false;
	REINITIALISATION_OF_required_OF_CPU86_105_A = true;
	boolState[already_S_OF_CPU86_105_A] = false;
	REINITIALISATION_OF_S_OF_CPU86_105_A = false;
	REINITIALISATION_OF_relevant_evt_OF_CPU86_105_A = false;
	boolState[failF_OF_CPU86_105_A] = false;
	REINITIALISATION_OF_required_OF_CPU86_105_B = true;
	boolState[already_S_OF_CPU86_105_B] = false;
	REINITIALISATION_OF_S_OF_CPU86_105_B = false;
	REINITIALISATION_OF_relevant_evt_OF_CPU86_105_B = false;
	boolState[failF_OF_CPU86_105_B] = false;
	REINITIALISATION_OF_required_OF_CTU = true;
	boolState[already_S_OF_CTU] = false;
	REINITIALISATION_OF_S_OF_CTU = false;
	REINITIALISATION_OF_relevant_evt_OF_CTU = false;
	boolState[failF_OF_CTU] = false;
	REINITIALISATION_OF_required_OF_DIFIT31_A = true;
	boolState[already_S_OF_DIFIT31_A] = false;
	REINITIALISATION_OF_S_OF_DIFIT31_A = false;
	REINITIALISATION_OF_relevant_evt_OF_DIFIT31_A = false;
	boolState[failF_OF_DIFIT31_A] = false;
	REINITIALISATION_OF_required_OF_DIFIT31_B = true;
	boolState[already_S_OF_DIFIT31_B] = false;
	REINITIALISATION_OF_S_OF_DIFIT31_B = false;
	REINITIALISATION_OF_relevant_evt_OF_DIFIT31_B = false;
	boolState[failF_OF_DIFIT31_B] = false;
	REINITIALISATION_OF_required_OF_DIFIT32_A = true;
	boolState[already_S_OF_DIFIT32_A] = false;
	REINITIALISATION_OF_S_OF_DIFIT32_A = false;
	REINITIALISATION_OF_relevant_evt_OF_DIFIT32_A = false;
	boolState[failF_OF_DIFIT32_A] = false;
	REINITIALISATION_OF_required_OF_DIFIT32_B = true;
	boolState[already_S_OF_DIFIT32_B] = false;
	REINITIALISATION_OF_S_OF_DIFIT32_B = false;
	REINITIALISATION_OF_relevant_evt_OF_DIFIT32_B = false;
	boolState[failF_OF_DIFIT32_B] = false;
	REINITIALISATION_OF_required_OF_DOSC_1_DCHS4_A = true;
	boolState[already_S_OF_DOSC_1_DCHS4_A] = false;
	REINITIALISATION_OF_S_OF_DOSC_1_DCHS4_A = false;
	REINITIALISATION_OF_relevant_evt_OF_DOSC_1_DCHS4_A = false;
	boolState[failF_OF_DOSC_1_DCHS4_A] = false;
	REINITIALISATION_OF_required_OF_DOSC_1_DCHS4_B = true;
	boolState[already_S_OF_DOSC_1_DCHS4_B] = false;
	REINITIALISATION_OF_S_OF_DOSC_1_DCHS4_B = false;
	REINITIALISATION_OF_relevant_evt_OF_DOSC_1_DCHS4_B = false;
	boolState[failF_OF_DOSC_1_DCHS4_B] = false;
	REINITIALISATION_OF_required_OF_DOSC_1_DCHS5_A = true;
	boolState[already_S_OF_DOSC_1_DCHS5_A] = false;
	REINITIALISATION_OF_S_OF_DOSC_1_DCHS5_A = false;
	REINITIALISATION_OF_relevant_evt_OF_DOSC_1_DCHS5_A = false;
	boolState[failF_OF_DOSC_1_DCHS5_A] = false;
	REINITIALISATION_OF_required_OF_DOSC_1_DCHS5_B = true;
	boolState[already_S_OF_DOSC_1_DCHS5_B] = false;
	REINITIALISATION_OF_S_OF_DOSC_1_DCHS5_B = false;
	REINITIALISATION_OF_relevant_evt_OF_DOSC_1_DCHS5_B = false;
	boolState[failF_OF_DOSC_1_DCHS5_B] = false;
	REINITIALISATION_OF_required_OF_DPBMB_P31_A = true;
	boolState[already_S_OF_DPBMB_P31_A] = false;
	REINITIALISATION_OF_S_OF_DPBMB_P31_A = false;
	REINITIALISATION_OF_relevant_evt_OF_DPBMB_P31_A = false;
	boolState[failF_OF_DPBMB_P31_A] = false;
	REINITIALISATION_OF_required_OF_DPBMB_P31_B = true;
	boolState[already_S_OF_DPBMB_P31_B] = false;
	REINITIALISATION_OF_S_OF_DPBMB_P31_B = false;
	REINITIALISATION_OF_relevant_evt_OF_DPBMB_P31_B = false;
	boolState[failF_OF_DPBMB_P31_B] = false;
	REINITIALISATION_OF_required_OF_DPBMB_P32_A = true;
	boolState[already_S_OF_DPBMB_P32_A] = false;
	REINITIALISATION_OF_S_OF_DPBMB_P32_A = false;
	REINITIALISATION_OF_relevant_evt_OF_DPBMB_P32_A = false;
	boolState[failF_OF_DPBMB_P32_A] = false;
	REINITIALISATION_OF_required_OF_DPBMB_P32_B = true;
	boolState[already_S_OF_DPBMB_P32_B] = false;
	REINITIALISATION_OF_S_OF_DPBMB_P32_B = false;
	REINITIALISATION_OF_relevant_evt_OF_DPBMB_P32_B = false;
	boolState[failF_OF_DPBMB_P32_B] = false;
	REINITIALISATION_OF_required_OF_HS_136F = true;
	boolState[already_S_OF_HS_136F] = false;
	REINITIALISATION_OF_S_OF_HS_136F = false;
	REINITIALISATION_OF_relevant_evt_OF_HS_136F = false;
	boolState[failF_OF_HS_136F] = false;
	REINITIALISATION_OF_required_OF_HS_138F = true;
	boolState[already_S_OF_HS_138F] = false;
	REINITIALISATION_OF_S_OF_HS_138F = false;
	REINITIALISATION_OF_relevant_evt_OF_HS_138F = false;
	boolState[failF_OF_HS_138F] = false;
	REINITIALISATION_OF_required_OF_HS_139F = true;
	boolState[already_S_OF_HS_139F] = false;
	REINITIALISATION_OF_S_OF_HS_139F = false;
	REINITIALISATION_OF_relevant_evt_OF_HS_139F = false;
	boolState[failF_OF_HS_139F] = false;
	REINITIALISATION_OF_required_OF_ISOCTX31_A = true;
	boolState[already_S_OF_ISOCTX31_A] = false;
	REINITIALISATION_OF_S_OF_ISOCTX31_A = false;
	REINITIALISATION_OF_relevant_evt_OF_ISOCTX31_A = false;
	boolState[failF_OF_ISOCTX31_A] = false;
	REINITIALISATION_OF_required_OF_ISOCTX31_B = true;
	boolState[already_S_OF_ISOCTX31_B] = false;
	REINITIALISATION_OF_S_OF_ISOCTX31_B = false;
	REINITIALISATION_OF_relevant_evt_OF_ISOCTX31_B = false;
	boolState[failF_OF_ISOCTX31_B] = false;
	REINITIALISATION_OF_required_OF_ISOCTX32_A = true;
	boolState[already_S_OF_ISOCTX32_A] = false;
	REINITIALISATION_OF_S_OF_ISOCTX32_A = false;
	REINITIALISATION_OF_relevant_evt_OF_ISOCTX32_A = false;
	boolState[failF_OF_ISOCTX32_A] = false;
	REINITIALISATION_OF_required_OF_ISOCTX32_B = true;
	boolState[already_S_OF_ISOCTX32_B] = false;
	REINITIALISATION_OF_S_OF_ISOCTX32_B = false;
	REINITIALISATION_OF_relevant_evt_OF_ISOCTX32_B = false;
	boolState[failF_OF_ISOCTX32_B] = false;
	REINITIALISATION_OF_required_OF_MEM527_A = true;
	boolState[already_S_OF_MEM527_A] = false;
	REINITIALISATION_OF_S_OF_MEM527_A = false;
	REINITIALISATION_OF_relevant_evt_OF_MEM527_A = false;
	boolState[failF_OF_MEM527_A] = false;
	REINITIALISATION_OF_required_OF_MEM527_B = true;
	boolState[already_S_OF_MEM527_B] = false;
	REINITIALISATION_OF_S_OF_MEM527_B = false;
	REINITIALISATION_OF_relevant_evt_OF_MEM527_B = false;
	boolState[failF_OF_MEM527_B] = false;
	REINITIALISATION_OF_required_OF_OE = true;
	boolState[already_S_OF_OE] = false;
	REINITIALISATION_OF_S_OF_OE = false;
	REINITIALISATION_OF_relevant_evt_OF_OE = false;
	boolState[failF_OF_OE] = false;
	REINITIALISATION_OF_required_OF_PROC_GATE_A = true;
	boolState[already_S_OF_PROC_GATE_A] = false;
	REINITIALISATION_OF_S_OF_PROC_GATE_A = false;
	REINITIALISATION_OF_relevant_evt_OF_PROC_GATE_A = false;
	REINITIALISATION_OF_required_OF_PROC_GATE_B = true;
	boolState[already_S_OF_PROC_GATE_B] = false;
	REINITIALISATION_OF_S_OF_PROC_GATE_B = false;
	REINITIALISATION_OF_relevant_evt_OF_PROC_GATE_B = false;
	REINITIALISATION_OF_required_OF_RLYS_1 = true;
	boolState[already_S_OF_RLYS_1] = false;
	REINITIALISATION_OF_S_OF_RLYS_1 = false;
	REINITIALISATION_OF_relevant_evt_OF_RLYS_1 = false;
	boolState[failF_OF_RLYS_1] = false;
	REINITIALISATION_OF_required_OF_RORB31_A = true;
	boolState[already_S_OF_RORB31_A] = false;
	REINITIALISATION_OF_S_OF_RORB31_A = false;
	REINITIALISATION_OF_relevant_evt_OF_RORB31_A = false;
	boolState[failF_OF_RORB31_A] = false;
	REINITIALISATION_OF_required_OF_RORB31_B = true;
	boolState[already_S_OF_RORB31_B] = false;
	REINITIALISATION_OF_S_OF_RORB31_B = false;
	REINITIALISATION_OF_relevant_evt_OF_RORB31_B = false;
	boolState[failF_OF_RORB31_B] = false;
	REINITIALISATION_OF_required_OF_RORB32_A = true;
	boolState[already_S_OF_RORB32_A] = false;
	REINITIALISATION_OF_S_OF_RORB32_A = false;
	REINITIALISATION_OF_relevant_evt_OF_RORB32_A = false;
	boolState[failF_OF_RORB32_A] = false;
	REINITIALISATION_OF_required_OF_RORB32_B = true;
	boolState[already_S_OF_RORB32_B] = false;
	REINITIALISATION_OF_S_OF_RORB32_B = false;
	REINITIALISATION_OF_relevant_evt_OF_RORB32_B = false;
	boolState[failF_OF_RORB32_B] = false;
	REINITIALISATION_OF_required_OF_SM_271_A = true;
	boolState[already_S_OF_SM_271_A] = false;
	REINITIALISATION_OF_S_OF_SM_271_A = false;
	REINITIALISATION_OF_relevant_evt_OF_SM_271_A = false;
	boolState[failF_OF_SM_271_A] = false;
	REINITIALISATION_OF_required_OF_SM_271_B = true;
	boolState[already_S_OF_SM_271_B] = false;
	REINITIALISATION_OF_S_OF_SM_271_B = false;
	REINITIALISATION_OF_relevant_evt_OF_SM_271_B = false;
	boolState[failF_OF_SM_271_B] = false;
	REINITIALISATION_OF_required_OF_RRS_Failure = true;
	boolState[already_S_OF_RRS_Failure] = false;
	REINITIALISATION_OF_S_OF_RRS_Failure = false;
	REINITIALISATION_OF_relevant_evt_OF_RRS_Failure = false;
	REINITIALISATION_OF_required_OF_UE_1 = true;
	boolState[already_S_OF_UE_1] = false;
	REINITIALISATION_OF_S_OF_UE_1 = false;
	REINITIALISATION_OF_relevant_evt_OF_UE_1 = false;
	REINITIALISATION_OF_required_OF_Auto_Switching_Failure_A = true;
	boolState[already_S_OF_Auto_Switching_Failure_A] = false;
	REINITIALISATION_OF_S_OF_Auto_Switching_Failure_A = false;
	REINITIALISATION_OF_relevant_evt_OF_Auto_Switching_Failure_A = false;
	REINITIALISATION_OF_required_OF_Auto_Switching_Failure_B = true;
	boolState[already_S_OF_Auto_Switching_Failure_B] = false;
	REINITIALISATION_OF_S_OF_Auto_Switching_Failure_B = false;
	REINITIALISATION_OF_relevant_evt_OF_Auto_Switching_Failure_B = false;
	REINITIALISATION_OF_required_OF_Loss_Of_Control_in_Auto_Mode = true;
	boolState[already_S_OF_Loss_Of_Control_in_Auto_Mode] = false;
	REINITIALISATION_OF_S_OF_Loss_Of_Control_in_Auto_Mode = false;
	REINITIALISATION_OF_relevant_evt_OF_Loss_Of_Control_in_Auto_Mode = false;
	REINITIALISATION_OF_required_OF_Loss_Of_Control_With_A = true;
	boolState[already_S_OF_Loss_Of_Control_With_A] = false;
	REINITIALISATION_OF_S_OF_Loss_Of_Control_With_A = false;
	REINITIALISATION_OF_relevant_evt_OF_Loss_Of_Control_With_A = false;
	REINITIALISATION_OF_required_OF_Loss_Of_Control_With_B = true;
	boolState[already_S_OF_Loss_Of_Control_With_B] = false;
	REINITIALISATION_OF_S_OF_Loss_Of_Control_With_B = false;
	REINITIALISATION_OF_relevant_evt_OF_Loss_Of_Control_With_B = false;
	REINITIALISATION_OF_required_OF_dummy = true;
	boolState[already_S_OF_dummy] = false;
	REINITIALISATION_OF_S_OF_dummy = false;
	REINITIALISATION_OF_relevant_evt_OF_dummy = false;
	REINITIALISATION_OF_required_OF_A_B_Failure_Together = true;
	boolState[already_S_OF_A_B_Failure_Together] = false;
	REINITIALISATION_OF_S_OF_A_B_Failure_Together = false;
	REINITIALISATION_OF_relevant_evt_OF_A_B_Failure_Together = false;
	REINITIALISATION_OF_required_OF_Hand_Switch_Failure = true;
	boolState[already_S_OF_Hand_Switch_Failure] = false;
	REINITIALISATION_OF_S_OF_Hand_Switch_Failure = false;
	REINITIALISATION_OF_relevant_evt_OF_Hand_Switch_Failure = false;
	REINITIALISATION_OF_required_OF_System_A_Failure = true;
	boolState[already_S_OF_System_A_Failure] = false;
	REINITIALISATION_OF_S_OF_System_A_Failure = false;
	REINITIALISATION_OF_relevant_evt_OF_System_A_Failure = false;
	REINITIALISATION_OF_required_OF_System_B_Failure = true;
	boolState[already_S_OF_System_B_Failure] = false;
	REINITIALISATION_OF_S_OF_System_B_Failure = false;
	REINITIALISATION_OF_relevant_evt_OF_System_B_Failure = false;

	/* ---------- DECLARATION OF OCCURRENCE RULES FIRING FLAGS ------------ */
	FIRE_xx10_OF_ADA27_A = false;
	FIRE_xx10_OF_ADA27_B = false;
	FIRE_xx10_OF_ANAMB_P16_A = false;
	FIRE_xx10_OF_ANAMB_P16_B = false;
	FIRE_xx10_OF_ANAMB_P17_A = false;
	FIRE_xx10_OF_ANAMB_P17_B = false;
	FIRE_xx10_OF_CPU86_102_A = false;
	FIRE_xx10_OF_CPU86_102_B = false;
	FIRE_xx10_OF_CPU86_105_A = false;
	FIRE_xx10_OF_CPU86_105_B = false;
	FIRE_xx10_OF_CTU = false;
	FIRE_xx10_OF_DIFIT31_A = false;
	FIRE_xx10_OF_DIFIT31_B = false;
	FIRE_xx10_OF_DIFIT32_A = false;
	FIRE_xx10_OF_DIFIT32_B = false;
	FIRE_xx10_OF_DOSC_1_DCHS4_A = false;
	FIRE_xx10_OF_DOSC_1_DCHS4_B = false;
	FIRE_xx10_OF_DOSC_1_DCHS5_A = false;
	FIRE_xx10_OF_DOSC_1_DCHS5_B = false;
	FIRE_xx10_OF_DPBMB_P31_A = false;
	FIRE_xx10_OF_DPBMB_P31_B = false;
	FIRE_xx10_OF_DPBMB_P32_A = false;
	FIRE_xx10_OF_DPBMB_P32_B = false;
	FIRE_xx10_OF_HS_136F = false;
	FIRE_xx10_OF_HS_138F = false;
	FIRE_xx10_OF_HS_139F = false;
	FIRE_xx10_OF_ISOCTX31_A = false;
	FIRE_xx10_OF_ISOCTX31_B = false;
	FIRE_xx10_OF_ISOCTX32_A = false;
	FIRE_xx10_OF_ISOCTX32_B = false;
	FIRE_xx10_OF_MEM527_A = false;
	FIRE_xx10_OF_MEM527_B = false;
	FIRE_xx10_OF_OE = false;
	FIRE_xx10_OF_RLYS_1 = false;
	FIRE_xx10_OF_RORB31_A = false;
	FIRE_xx10_OF_RORB31_B = false;
	FIRE_xx10_OF_RORB32_A = false;
	FIRE_xx10_OF_RORB32_B = false;
	FIRE_xx10_OF_SM_271_A = false;
	FIRE_xx10_OF_SM_271_B = false;

}

void storm::figaro::FigaroProgram_DuelProcessorReactorRegulation_Trim_article_No_repair::saveCurrentState()
{
	// cout <<">>>>>>>>>>>>>>>>>>>> Saving current state  <<<<<<<<<<<<<<<<<<<<<<<" << endl;
	backupBoolState = boolState ;
	backupFloatState = floatState ;
	backupIntState = intState ;
	backupEnumState = enumState ;
}

int storm::figaro::FigaroProgram_DuelProcessorReactorRegulation_Trim_article_No_repair::compareStates()
{
	// cout <<">>>>>>>>>>>>>>>>>>>> Comparing state with previous one (return number of differences) <<<<<<<<<<<<<<<<<<<<<<<" << endl;

	return (backupBoolState != boolState) + (backupFloatState != floatState) + (backupIntState != intState) + (backupEnumState != enumState); 
}

void storm::figaro::FigaroProgram_DuelProcessorReactorRegulation_Trim_article_No_repair::printState()
{
	//cout <<"\n==================== Print of the current state :  ====================" << endl;

	//cout << "Attribute :  boolState[required_OF_ADA27_A] | Value : " << boolState[required_OF_ADA27_A] << endl;
	//cout << "Attribute :  boolState[already_S_OF_ADA27_A] | Value : " << boolState[already_S_OF_ADA27_A] << endl;
	//cout << "Attribute :  boolState[S_OF_ADA27_A] | Value : " << boolState[S_OF_ADA27_A] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_ADA27_A] | Value : " << boolState[relevant_evt_OF_ADA27_A] << endl;
	//cout << "Attribute :  boolState[failF_OF_ADA27_A] | Value : " << boolState[failF_OF_ADA27_A] << endl;
	//cout << "Attribute :  boolState[required_OF_ADA27_B] | Value : " << boolState[required_OF_ADA27_B] << endl;
	//cout << "Attribute :  boolState[already_S_OF_ADA27_B] | Value : " << boolState[already_S_OF_ADA27_B] << endl;
	//cout << "Attribute :  boolState[S_OF_ADA27_B] | Value : " << boolState[S_OF_ADA27_B] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_ADA27_B] | Value : " << boolState[relevant_evt_OF_ADA27_B] << endl;
	//cout << "Attribute :  boolState[failF_OF_ADA27_B] | Value : " << boolState[failF_OF_ADA27_B] << endl;
	//cout << "Attribute :  boolState[required_OF_ANAMB_P16_A] | Value : " << boolState[required_OF_ANAMB_P16_A] << endl;
	//cout << "Attribute :  boolState[already_S_OF_ANAMB_P16_A] | Value : " << boolState[already_S_OF_ANAMB_P16_A] << endl;
	//cout << "Attribute :  boolState[S_OF_ANAMB_P16_A] | Value : " << boolState[S_OF_ANAMB_P16_A] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_ANAMB_P16_A] | Value : " << boolState[relevant_evt_OF_ANAMB_P16_A] << endl;
	//cout << "Attribute :  boolState[failF_OF_ANAMB_P16_A] | Value : " << boolState[failF_OF_ANAMB_P16_A] << endl;
	//cout << "Attribute :  boolState[required_OF_ANAMB_P16_B] | Value : " << boolState[required_OF_ANAMB_P16_B] << endl;
	//cout << "Attribute :  boolState[already_S_OF_ANAMB_P16_B] | Value : " << boolState[already_S_OF_ANAMB_P16_B] << endl;
	//cout << "Attribute :  boolState[S_OF_ANAMB_P16_B] | Value : " << boolState[S_OF_ANAMB_P16_B] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_ANAMB_P16_B] | Value : " << boolState[relevant_evt_OF_ANAMB_P16_B] << endl;
	//cout << "Attribute :  boolState[failF_OF_ANAMB_P16_B] | Value : " << boolState[failF_OF_ANAMB_P16_B] << endl;
	//cout << "Attribute :  boolState[required_OF_ANAMB_P17_A] | Value : " << boolState[required_OF_ANAMB_P17_A] << endl;
	//cout << "Attribute :  boolState[already_S_OF_ANAMB_P17_A] | Value : " << boolState[already_S_OF_ANAMB_P17_A] << endl;
	//cout << "Attribute :  boolState[S_OF_ANAMB_P17_A] | Value : " << boolState[S_OF_ANAMB_P17_A] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_ANAMB_P17_A] | Value : " << boolState[relevant_evt_OF_ANAMB_P17_A] << endl;
	//cout << "Attribute :  boolState[failF_OF_ANAMB_P17_A] | Value : " << boolState[failF_OF_ANAMB_P17_A] << endl;
	//cout << "Attribute :  boolState[required_OF_ANAMB_P17_B] | Value : " << boolState[required_OF_ANAMB_P17_B] << endl;
	//cout << "Attribute :  boolState[already_S_OF_ANAMB_P17_B] | Value : " << boolState[already_S_OF_ANAMB_P17_B] << endl;
	//cout << "Attribute :  boolState[S_OF_ANAMB_P17_B] | Value : " << boolState[S_OF_ANAMB_P17_B] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_ANAMB_P17_B] | Value : " << boolState[relevant_evt_OF_ANAMB_P17_B] << endl;
	//cout << "Attribute :  boolState[failF_OF_ANAMB_P17_B] | Value : " << boolState[failF_OF_ANAMB_P17_B] << endl;
	//cout << "Attribute :  boolState[required_OF_CPU86_102_A] | Value : " << boolState[required_OF_CPU86_102_A] << endl;
	//cout << "Attribute :  boolState[already_S_OF_CPU86_102_A] | Value : " << boolState[already_S_OF_CPU86_102_A] << endl;
	//cout << "Attribute :  boolState[S_OF_CPU86_102_A] | Value : " << boolState[S_OF_CPU86_102_A] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_CPU86_102_A] | Value : " << boolState[relevant_evt_OF_CPU86_102_A] << endl;
	//cout << "Attribute :  boolState[failF_OF_CPU86_102_A] | Value : " << boolState[failF_OF_CPU86_102_A] << endl;
	//cout << "Attribute :  boolState[required_OF_CPU86_102_B] | Value : " << boolState[required_OF_CPU86_102_B] << endl;
	//cout << "Attribute :  boolState[already_S_OF_CPU86_102_B] | Value : " << boolState[already_S_OF_CPU86_102_B] << endl;
	//cout << "Attribute :  boolState[S_OF_CPU86_102_B] | Value : " << boolState[S_OF_CPU86_102_B] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_CPU86_102_B] | Value : " << boolState[relevant_evt_OF_CPU86_102_B] << endl;
	//cout << "Attribute :  boolState[failF_OF_CPU86_102_B] | Value : " << boolState[failF_OF_CPU86_102_B] << endl;
	//cout << "Attribute :  boolState[required_OF_CPU86_105_A] | Value : " << boolState[required_OF_CPU86_105_A] << endl;
	//cout << "Attribute :  boolState[already_S_OF_CPU86_105_A] | Value : " << boolState[already_S_OF_CPU86_105_A] << endl;
	//cout << "Attribute :  boolState[S_OF_CPU86_105_A] | Value : " << boolState[S_OF_CPU86_105_A] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_CPU86_105_A] | Value : " << boolState[relevant_evt_OF_CPU86_105_A] << endl;
	//cout << "Attribute :  boolState[failF_OF_CPU86_105_A] | Value : " << boolState[failF_OF_CPU86_105_A] << endl;
	//cout << "Attribute :  boolState[required_OF_CPU86_105_B] | Value : " << boolState[required_OF_CPU86_105_B] << endl;
	//cout << "Attribute :  boolState[already_S_OF_CPU86_105_B] | Value : " << boolState[already_S_OF_CPU86_105_B] << endl;
	//cout << "Attribute :  boolState[S_OF_CPU86_105_B] | Value : " << boolState[S_OF_CPU86_105_B] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_CPU86_105_B] | Value : " << boolState[relevant_evt_OF_CPU86_105_B] << endl;
	//cout << "Attribute :  boolState[failF_OF_CPU86_105_B] | Value : " << boolState[failF_OF_CPU86_105_B] << endl;
	//cout << "Attribute :  boolState[required_OF_CTU] | Value : " << boolState[required_OF_CTU] << endl;
	//cout << "Attribute :  boolState[already_S_OF_CTU] | Value : " << boolState[already_S_OF_CTU] << endl;
	//cout << "Attribute :  boolState[S_OF_CTU] | Value : " << boolState[S_OF_CTU] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_CTU] | Value : " << boolState[relevant_evt_OF_CTU] << endl;
	//cout << "Attribute :  boolState[failF_OF_CTU] | Value : " << boolState[failF_OF_CTU] << endl;
	//cout << "Attribute :  boolState[required_OF_DIFIT31_A] | Value : " << boolState[required_OF_DIFIT31_A] << endl;
	//cout << "Attribute :  boolState[already_S_OF_DIFIT31_A] | Value : " << boolState[already_S_OF_DIFIT31_A] << endl;
	//cout << "Attribute :  boolState[S_OF_DIFIT31_A] | Value : " << boolState[S_OF_DIFIT31_A] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_DIFIT31_A] | Value : " << boolState[relevant_evt_OF_DIFIT31_A] << endl;
	//cout << "Attribute :  boolState[failF_OF_DIFIT31_A] | Value : " << boolState[failF_OF_DIFIT31_A] << endl;
	//cout << "Attribute :  boolState[required_OF_DIFIT31_B] | Value : " << boolState[required_OF_DIFIT31_B] << endl;
	//cout << "Attribute :  boolState[already_S_OF_DIFIT31_B] | Value : " << boolState[already_S_OF_DIFIT31_B] << endl;
	//cout << "Attribute :  boolState[S_OF_DIFIT31_B] | Value : " << boolState[S_OF_DIFIT31_B] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_DIFIT31_B] | Value : " << boolState[relevant_evt_OF_DIFIT31_B] << endl;
	//cout << "Attribute :  boolState[failF_OF_DIFIT31_B] | Value : " << boolState[failF_OF_DIFIT31_B] << endl;
	//cout << "Attribute :  boolState[required_OF_DIFIT32_A] | Value : " << boolState[required_OF_DIFIT32_A] << endl;
	//cout << "Attribute :  boolState[already_S_OF_DIFIT32_A] | Value : " << boolState[already_S_OF_DIFIT32_A] << endl;
	//cout << "Attribute :  boolState[S_OF_DIFIT32_A] | Value : " << boolState[S_OF_DIFIT32_A] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_DIFIT32_A] | Value : " << boolState[relevant_evt_OF_DIFIT32_A] << endl;
	//cout << "Attribute :  boolState[failF_OF_DIFIT32_A] | Value : " << boolState[failF_OF_DIFIT32_A] << endl;
	//cout << "Attribute :  boolState[required_OF_DIFIT32_B] | Value : " << boolState[required_OF_DIFIT32_B] << endl;
	//cout << "Attribute :  boolState[already_S_OF_DIFIT32_B] | Value : " << boolState[already_S_OF_DIFIT32_B] << endl;
	//cout << "Attribute :  boolState[S_OF_DIFIT32_B] | Value : " << boolState[S_OF_DIFIT32_B] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_DIFIT32_B] | Value : " << boolState[relevant_evt_OF_DIFIT32_B] << endl;
	//cout << "Attribute :  boolState[failF_OF_DIFIT32_B] | Value : " << boolState[failF_OF_DIFIT32_B] << endl;
	//cout << "Attribute :  boolState[required_OF_DOSC_1_DCHS4_A] | Value : " << boolState[required_OF_DOSC_1_DCHS4_A] << endl;
	//cout << "Attribute :  boolState[already_S_OF_DOSC_1_DCHS4_A] | Value : " << boolState[already_S_OF_DOSC_1_DCHS4_A] << endl;
	//cout << "Attribute :  boolState[S_OF_DOSC_1_DCHS4_A] | Value : " << boolState[S_OF_DOSC_1_DCHS4_A] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_DOSC_1_DCHS4_A] | Value : " << boolState[relevant_evt_OF_DOSC_1_DCHS4_A] << endl;
	//cout << "Attribute :  boolState[failF_OF_DOSC_1_DCHS4_A] | Value : " << boolState[failF_OF_DOSC_1_DCHS4_A] << endl;
	//cout << "Attribute :  boolState[required_OF_DOSC_1_DCHS4_B] | Value : " << boolState[required_OF_DOSC_1_DCHS4_B] << endl;
	//cout << "Attribute :  boolState[already_S_OF_DOSC_1_DCHS4_B] | Value : " << boolState[already_S_OF_DOSC_1_DCHS4_B] << endl;
	//cout << "Attribute :  boolState[S_OF_DOSC_1_DCHS4_B] | Value : " << boolState[S_OF_DOSC_1_DCHS4_B] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_DOSC_1_DCHS4_B] | Value : " << boolState[relevant_evt_OF_DOSC_1_DCHS4_B] << endl;
	//cout << "Attribute :  boolState[failF_OF_DOSC_1_DCHS4_B] | Value : " << boolState[failF_OF_DOSC_1_DCHS4_B] << endl;
	//cout << "Attribute :  boolState[required_OF_DOSC_1_DCHS5_A] | Value : " << boolState[required_OF_DOSC_1_DCHS5_A] << endl;
	//cout << "Attribute :  boolState[already_S_OF_DOSC_1_DCHS5_A] | Value : " << boolState[already_S_OF_DOSC_1_DCHS5_A] << endl;
	//cout << "Attribute :  boolState[S_OF_DOSC_1_DCHS5_A] | Value : " << boolState[S_OF_DOSC_1_DCHS5_A] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_DOSC_1_DCHS5_A] | Value : " << boolState[relevant_evt_OF_DOSC_1_DCHS5_A] << endl;
	//cout << "Attribute :  boolState[failF_OF_DOSC_1_DCHS5_A] | Value : " << boolState[failF_OF_DOSC_1_DCHS5_A] << endl;
	//cout << "Attribute :  boolState[required_OF_DOSC_1_DCHS5_B] | Value : " << boolState[required_OF_DOSC_1_DCHS5_B] << endl;
	//cout << "Attribute :  boolState[already_S_OF_DOSC_1_DCHS5_B] | Value : " << boolState[already_S_OF_DOSC_1_DCHS5_B] << endl;
	//cout << "Attribute :  boolState[S_OF_DOSC_1_DCHS5_B] | Value : " << boolState[S_OF_DOSC_1_DCHS5_B] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_DOSC_1_DCHS5_B] | Value : " << boolState[relevant_evt_OF_DOSC_1_DCHS5_B] << endl;
	//cout << "Attribute :  boolState[failF_OF_DOSC_1_DCHS5_B] | Value : " << boolState[failF_OF_DOSC_1_DCHS5_B] << endl;
	//cout << "Attribute :  boolState[required_OF_DPBMB_P31_A] | Value : " << boolState[required_OF_DPBMB_P31_A] << endl;
	//cout << "Attribute :  boolState[already_S_OF_DPBMB_P31_A] | Value : " << boolState[already_S_OF_DPBMB_P31_A] << endl;
	//cout << "Attribute :  boolState[S_OF_DPBMB_P31_A] | Value : " << boolState[S_OF_DPBMB_P31_A] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_DPBMB_P31_A] | Value : " << boolState[relevant_evt_OF_DPBMB_P31_A] << endl;
	//cout << "Attribute :  boolState[failF_OF_DPBMB_P31_A] | Value : " << boolState[failF_OF_DPBMB_P31_A] << endl;
	//cout << "Attribute :  boolState[required_OF_DPBMB_P31_B] | Value : " << boolState[required_OF_DPBMB_P31_B] << endl;
	//cout << "Attribute :  boolState[already_S_OF_DPBMB_P31_B] | Value : " << boolState[already_S_OF_DPBMB_P31_B] << endl;
	//cout << "Attribute :  boolState[S_OF_DPBMB_P31_B] | Value : " << boolState[S_OF_DPBMB_P31_B] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_DPBMB_P31_B] | Value : " << boolState[relevant_evt_OF_DPBMB_P31_B] << endl;
	//cout << "Attribute :  boolState[failF_OF_DPBMB_P31_B] | Value : " << boolState[failF_OF_DPBMB_P31_B] << endl;
	//cout << "Attribute :  boolState[required_OF_DPBMB_P32_A] | Value : " << boolState[required_OF_DPBMB_P32_A] << endl;
	//cout << "Attribute :  boolState[already_S_OF_DPBMB_P32_A] | Value : " << boolState[already_S_OF_DPBMB_P32_A] << endl;
	//cout << "Attribute :  boolState[S_OF_DPBMB_P32_A] | Value : " << boolState[S_OF_DPBMB_P32_A] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_DPBMB_P32_A] | Value : " << boolState[relevant_evt_OF_DPBMB_P32_A] << endl;
	//cout << "Attribute :  boolState[failF_OF_DPBMB_P32_A] | Value : " << boolState[failF_OF_DPBMB_P32_A] << endl;
	//cout << "Attribute :  boolState[required_OF_DPBMB_P32_B] | Value : " << boolState[required_OF_DPBMB_P32_B] << endl;
	//cout << "Attribute :  boolState[already_S_OF_DPBMB_P32_B] | Value : " << boolState[already_S_OF_DPBMB_P32_B] << endl;
	//cout << "Attribute :  boolState[S_OF_DPBMB_P32_B] | Value : " << boolState[S_OF_DPBMB_P32_B] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_DPBMB_P32_B] | Value : " << boolState[relevant_evt_OF_DPBMB_P32_B] << endl;
	//cout << "Attribute :  boolState[failF_OF_DPBMB_P32_B] | Value : " << boolState[failF_OF_DPBMB_P32_B] << endl;
	//cout << "Attribute :  boolState[required_OF_HS_136F] | Value : " << boolState[required_OF_HS_136F] << endl;
	//cout << "Attribute :  boolState[already_S_OF_HS_136F] | Value : " << boolState[already_S_OF_HS_136F] << endl;
	//cout << "Attribute :  boolState[S_OF_HS_136F] | Value : " << boolState[S_OF_HS_136F] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_HS_136F] | Value : " << boolState[relevant_evt_OF_HS_136F] << endl;
	//cout << "Attribute :  boolState[failF_OF_HS_136F] | Value : " << boolState[failF_OF_HS_136F] << endl;
	//cout << "Attribute :  boolState[required_OF_HS_138F] | Value : " << boolState[required_OF_HS_138F] << endl;
	//cout << "Attribute :  boolState[already_S_OF_HS_138F] | Value : " << boolState[already_S_OF_HS_138F] << endl;
	//cout << "Attribute :  boolState[S_OF_HS_138F] | Value : " << boolState[S_OF_HS_138F] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_HS_138F] | Value : " << boolState[relevant_evt_OF_HS_138F] << endl;
	//cout << "Attribute :  boolState[failF_OF_HS_138F] | Value : " << boolState[failF_OF_HS_138F] << endl;
	//cout << "Attribute :  boolState[required_OF_HS_139F] | Value : " << boolState[required_OF_HS_139F] << endl;
	//cout << "Attribute :  boolState[already_S_OF_HS_139F] | Value : " << boolState[already_S_OF_HS_139F] << endl;
	//cout << "Attribute :  boolState[S_OF_HS_139F] | Value : " << boolState[S_OF_HS_139F] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_HS_139F] | Value : " << boolState[relevant_evt_OF_HS_139F] << endl;
	//cout << "Attribute :  boolState[failF_OF_HS_139F] | Value : " << boolState[failF_OF_HS_139F] << endl;
	//cout << "Attribute :  boolState[required_OF_ISOCTX31_A] | Value : " << boolState[required_OF_ISOCTX31_A] << endl;
	//cout << "Attribute :  boolState[already_S_OF_ISOCTX31_A] | Value : " << boolState[already_S_OF_ISOCTX31_A] << endl;
	//cout << "Attribute :  boolState[S_OF_ISOCTX31_A] | Value : " << boolState[S_OF_ISOCTX31_A] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_ISOCTX31_A] | Value : " << boolState[relevant_evt_OF_ISOCTX31_A] << endl;
	//cout << "Attribute :  boolState[failF_OF_ISOCTX31_A] | Value : " << boolState[failF_OF_ISOCTX31_A] << endl;
	//cout << "Attribute :  boolState[required_OF_ISOCTX31_B] | Value : " << boolState[required_OF_ISOCTX31_B] << endl;
	//cout << "Attribute :  boolState[already_S_OF_ISOCTX31_B] | Value : " << boolState[already_S_OF_ISOCTX31_B] << endl;
	//cout << "Attribute :  boolState[S_OF_ISOCTX31_B] | Value : " << boolState[S_OF_ISOCTX31_B] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_ISOCTX31_B] | Value : " << boolState[relevant_evt_OF_ISOCTX31_B] << endl;
	//cout << "Attribute :  boolState[failF_OF_ISOCTX31_B] | Value : " << boolState[failF_OF_ISOCTX31_B] << endl;
	//cout << "Attribute :  boolState[required_OF_ISOCTX32_A] | Value : " << boolState[required_OF_ISOCTX32_A] << endl;
	//cout << "Attribute :  boolState[already_S_OF_ISOCTX32_A] | Value : " << boolState[already_S_OF_ISOCTX32_A] << endl;
	//cout << "Attribute :  boolState[S_OF_ISOCTX32_A] | Value : " << boolState[S_OF_ISOCTX32_A] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_ISOCTX32_A] | Value : " << boolState[relevant_evt_OF_ISOCTX32_A] << endl;
	//cout << "Attribute :  boolState[failF_OF_ISOCTX32_A] | Value : " << boolState[failF_OF_ISOCTX32_A] << endl;
	//cout << "Attribute :  boolState[required_OF_ISOCTX32_B] | Value : " << boolState[required_OF_ISOCTX32_B] << endl;
	//cout << "Attribute :  boolState[already_S_OF_ISOCTX32_B] | Value : " << boolState[already_S_OF_ISOCTX32_B] << endl;
	//cout << "Attribute :  boolState[S_OF_ISOCTX32_B] | Value : " << boolState[S_OF_ISOCTX32_B] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_ISOCTX32_B] | Value : " << boolState[relevant_evt_OF_ISOCTX32_B] << endl;
	//cout << "Attribute :  boolState[failF_OF_ISOCTX32_B] | Value : " << boolState[failF_OF_ISOCTX32_B] << endl;
	//cout << "Attribute :  boolState[required_OF_MEM527_A] | Value : " << boolState[required_OF_MEM527_A] << endl;
	//cout << "Attribute :  boolState[already_S_OF_MEM527_A] | Value : " << boolState[already_S_OF_MEM527_A] << endl;
	//cout << "Attribute :  boolState[S_OF_MEM527_A] | Value : " << boolState[S_OF_MEM527_A] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_MEM527_A] | Value : " << boolState[relevant_evt_OF_MEM527_A] << endl;
	//cout << "Attribute :  boolState[failF_OF_MEM527_A] | Value : " << boolState[failF_OF_MEM527_A] << endl;
	//cout << "Attribute :  boolState[required_OF_MEM527_B] | Value : " << boolState[required_OF_MEM527_B] << endl;
	//cout << "Attribute :  boolState[already_S_OF_MEM527_B] | Value : " << boolState[already_S_OF_MEM527_B] << endl;
	//cout << "Attribute :  boolState[S_OF_MEM527_B] | Value : " << boolState[S_OF_MEM527_B] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_MEM527_B] | Value : " << boolState[relevant_evt_OF_MEM527_B] << endl;
	//cout << "Attribute :  boolState[failF_OF_MEM527_B] | Value : " << boolState[failF_OF_MEM527_B] << endl;
	//cout << "Attribute :  boolState[required_OF_OE] | Value : " << boolState[required_OF_OE] << endl;
	//cout << "Attribute :  boolState[already_S_OF_OE] | Value : " << boolState[already_S_OF_OE] << endl;
	//cout << "Attribute :  boolState[S_OF_OE] | Value : " << boolState[S_OF_OE] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_OE] | Value : " << boolState[relevant_evt_OF_OE] << endl;
	//cout << "Attribute :  boolState[failF_OF_OE] | Value : " << boolState[failF_OF_OE] << endl;
	//cout << "Attribute :  boolState[required_OF_PROC_GATE_A] | Value : " << boolState[required_OF_PROC_GATE_A] << endl;
	//cout << "Attribute :  boolState[already_S_OF_PROC_GATE_A] | Value : " << boolState[already_S_OF_PROC_GATE_A] << endl;
	//cout << "Attribute :  boolState[S_OF_PROC_GATE_A] | Value : " << boolState[S_OF_PROC_GATE_A] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_PROC_GATE_A] | Value : " << boolState[relevant_evt_OF_PROC_GATE_A] << endl;
	//cout << "Attribute :  boolState[required_OF_PROC_GATE_B] | Value : " << boolState[required_OF_PROC_GATE_B] << endl;
	//cout << "Attribute :  boolState[already_S_OF_PROC_GATE_B] | Value : " << boolState[already_S_OF_PROC_GATE_B] << endl;
	//cout << "Attribute :  boolState[S_OF_PROC_GATE_B] | Value : " << boolState[S_OF_PROC_GATE_B] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_PROC_GATE_B] | Value : " << boolState[relevant_evt_OF_PROC_GATE_B] << endl;
	//cout << "Attribute :  boolState[required_OF_RLYS_1] | Value : " << boolState[required_OF_RLYS_1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_RLYS_1] | Value : " << boolState[already_S_OF_RLYS_1] << endl;
	//cout << "Attribute :  boolState[S_OF_RLYS_1] | Value : " << boolState[S_OF_RLYS_1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_RLYS_1] | Value : " << boolState[relevant_evt_OF_RLYS_1] << endl;
	//cout << "Attribute :  boolState[failF_OF_RLYS_1] | Value : " << boolState[failF_OF_RLYS_1] << endl;
	//cout << "Attribute :  boolState[required_OF_RORB31_A] | Value : " << boolState[required_OF_RORB31_A] << endl;
	//cout << "Attribute :  boolState[already_S_OF_RORB31_A] | Value : " << boolState[already_S_OF_RORB31_A] << endl;
	//cout << "Attribute :  boolState[S_OF_RORB31_A] | Value : " << boolState[S_OF_RORB31_A] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_RORB31_A] | Value : " << boolState[relevant_evt_OF_RORB31_A] << endl;
	//cout << "Attribute :  boolState[failF_OF_RORB31_A] | Value : " << boolState[failF_OF_RORB31_A] << endl;
	//cout << "Attribute :  boolState[required_OF_RORB31_B] | Value : " << boolState[required_OF_RORB31_B] << endl;
	//cout << "Attribute :  boolState[already_S_OF_RORB31_B] | Value : " << boolState[already_S_OF_RORB31_B] << endl;
	//cout << "Attribute :  boolState[S_OF_RORB31_B] | Value : " << boolState[S_OF_RORB31_B] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_RORB31_B] | Value : " << boolState[relevant_evt_OF_RORB31_B] << endl;
	//cout << "Attribute :  boolState[failF_OF_RORB31_B] | Value : " << boolState[failF_OF_RORB31_B] << endl;
	//cout << "Attribute :  boolState[required_OF_RORB32_A] | Value : " << boolState[required_OF_RORB32_A] << endl;
	//cout << "Attribute :  boolState[already_S_OF_RORB32_A] | Value : " << boolState[already_S_OF_RORB32_A] << endl;
	//cout << "Attribute :  boolState[S_OF_RORB32_A] | Value : " << boolState[S_OF_RORB32_A] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_RORB32_A] | Value : " << boolState[relevant_evt_OF_RORB32_A] << endl;
	//cout << "Attribute :  boolState[failF_OF_RORB32_A] | Value : " << boolState[failF_OF_RORB32_A] << endl;
	//cout << "Attribute :  boolState[required_OF_RORB32_B] | Value : " << boolState[required_OF_RORB32_B] << endl;
	//cout << "Attribute :  boolState[already_S_OF_RORB32_B] | Value : " << boolState[already_S_OF_RORB32_B] << endl;
	//cout << "Attribute :  boolState[S_OF_RORB32_B] | Value : " << boolState[S_OF_RORB32_B] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_RORB32_B] | Value : " << boolState[relevant_evt_OF_RORB32_B] << endl;
	//cout << "Attribute :  boolState[failF_OF_RORB32_B] | Value : " << boolState[failF_OF_RORB32_B] << endl;
	//cout << "Attribute :  boolState[required_OF_SM_271_A] | Value : " << boolState[required_OF_SM_271_A] << endl;
	//cout << "Attribute :  boolState[already_S_OF_SM_271_A] | Value : " << boolState[already_S_OF_SM_271_A] << endl;
	//cout << "Attribute :  boolState[S_OF_SM_271_A] | Value : " << boolState[S_OF_SM_271_A] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_SM_271_A] | Value : " << boolState[relevant_evt_OF_SM_271_A] << endl;
	//cout << "Attribute :  boolState[failF_OF_SM_271_A] | Value : " << boolState[failF_OF_SM_271_A] << endl;
	//cout << "Attribute :  boolState[required_OF_SM_271_B] | Value : " << boolState[required_OF_SM_271_B] << endl;
	//cout << "Attribute :  boolState[already_S_OF_SM_271_B] | Value : " << boolState[already_S_OF_SM_271_B] << endl;
	//cout << "Attribute :  boolState[S_OF_SM_271_B] | Value : " << boolState[S_OF_SM_271_B] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_SM_271_B] | Value : " << boolState[relevant_evt_OF_SM_271_B] << endl;
	//cout << "Attribute :  boolState[failF_OF_SM_271_B] | Value : " << boolState[failF_OF_SM_271_B] << endl;
	//cout << "Attribute :  boolState[required_OF_RRS_Failure] | Value : " << boolState[required_OF_RRS_Failure] << endl;
	//cout << "Attribute :  boolState[already_S_OF_RRS_Failure] | Value : " << boolState[already_S_OF_RRS_Failure] << endl;
	//cout << "Attribute :  boolState[S_OF_RRS_Failure] | Value : " << boolState[S_OF_RRS_Failure] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_RRS_Failure] | Value : " << boolState[relevant_evt_OF_RRS_Failure] << endl;
	//cout << "Attribute :  boolState[required_OF_UE_1] | Value : " << boolState[required_OF_UE_1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_UE_1] | Value : " << boolState[already_S_OF_UE_1] << endl;
	//cout << "Attribute :  boolState[S_OF_UE_1] | Value : " << boolState[S_OF_UE_1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_UE_1] | Value : " << boolState[relevant_evt_OF_UE_1] << endl;
	//cout << "Attribute :  boolState[required_OF_Auto_Switching_Failure_A] | Value : " << boolState[required_OF_Auto_Switching_Failure_A] << endl;
	//cout << "Attribute :  boolState[already_S_OF_Auto_Switching_Failure_A] | Value : " << boolState[already_S_OF_Auto_Switching_Failure_A] << endl;
	//cout << "Attribute :  boolState[S_OF_Auto_Switching_Failure_A] | Value : " << boolState[S_OF_Auto_Switching_Failure_A] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_Auto_Switching_Failure_A] | Value : " << boolState[relevant_evt_OF_Auto_Switching_Failure_A] << endl;
	//cout << "Attribute :  boolState[required_OF_Auto_Switching_Failure_B] | Value : " << boolState[required_OF_Auto_Switching_Failure_B] << endl;
	//cout << "Attribute :  boolState[already_S_OF_Auto_Switching_Failure_B] | Value : " << boolState[already_S_OF_Auto_Switching_Failure_B] << endl;
	//cout << "Attribute :  boolState[S_OF_Auto_Switching_Failure_B] | Value : " << boolState[S_OF_Auto_Switching_Failure_B] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_Auto_Switching_Failure_B] | Value : " << boolState[relevant_evt_OF_Auto_Switching_Failure_B] << endl;
	//cout << "Attribute :  boolState[required_OF_Loss_Of_Control_in_Auto_Mode] | Value : " << boolState[required_OF_Loss_Of_Control_in_Auto_Mode] << endl;
	//cout << "Attribute :  boolState[already_S_OF_Loss_Of_Control_in_Auto_Mode] | Value : " << boolState[already_S_OF_Loss_Of_Control_in_Auto_Mode] << endl;
	//cout << "Attribute :  boolState[S_OF_Loss_Of_Control_in_Auto_Mode] | Value : " << boolState[S_OF_Loss_Of_Control_in_Auto_Mode] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_Loss_Of_Control_in_Auto_Mode] | Value : " << boolState[relevant_evt_OF_Loss_Of_Control_in_Auto_Mode] << endl;
	//cout << "Attribute :  boolState[required_OF_Loss_Of_Control_With_A] | Value : " << boolState[required_OF_Loss_Of_Control_With_A] << endl;
	//cout << "Attribute :  boolState[already_S_OF_Loss_Of_Control_With_A] | Value : " << boolState[already_S_OF_Loss_Of_Control_With_A] << endl;
	//cout << "Attribute :  boolState[S_OF_Loss_Of_Control_With_A] | Value : " << boolState[S_OF_Loss_Of_Control_With_A] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_Loss_Of_Control_With_A] | Value : " << boolState[relevant_evt_OF_Loss_Of_Control_With_A] << endl;
	//cout << "Attribute :  boolState[required_OF_Loss_Of_Control_With_B] | Value : " << boolState[required_OF_Loss_Of_Control_With_B] << endl;
	//cout << "Attribute :  boolState[already_S_OF_Loss_Of_Control_With_B] | Value : " << boolState[already_S_OF_Loss_Of_Control_With_B] << endl;
	//cout << "Attribute :  boolState[S_OF_Loss_Of_Control_With_B] | Value : " << boolState[S_OF_Loss_Of_Control_With_B] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_Loss_Of_Control_With_B] | Value : " << boolState[relevant_evt_OF_Loss_Of_Control_With_B] << endl;
	//cout << "Attribute :  boolState[required_OF_dummy] | Value : " << boolState[required_OF_dummy] << endl;
	//cout << "Attribute :  boolState[already_S_OF_dummy] | Value : " << boolState[already_S_OF_dummy] << endl;
	//cout << "Attribute :  boolState[S_OF_dummy] | Value : " << boolState[S_OF_dummy] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_dummy] | Value : " << boolState[relevant_evt_OF_dummy] << endl;
	//cout << "Attribute :  boolState[required_OF_A_B_Failure_Together] | Value : " << boolState[required_OF_A_B_Failure_Together] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A_B_Failure_Together] | Value : " << boolState[already_S_OF_A_B_Failure_Together] << endl;
	//cout << "Attribute :  boolState[S_OF_A_B_Failure_Together] | Value : " << boolState[S_OF_A_B_Failure_Together] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A_B_Failure_Together] | Value : " << boolState[relevant_evt_OF_A_B_Failure_Together] << endl;
	//cout << "Attribute :  boolState[required_OF_Hand_Switch_Failure] | Value : " << boolState[required_OF_Hand_Switch_Failure] << endl;
	//cout << "Attribute :  boolState[already_S_OF_Hand_Switch_Failure] | Value : " << boolState[already_S_OF_Hand_Switch_Failure] << endl;
	//cout << "Attribute :  boolState[S_OF_Hand_Switch_Failure] | Value : " << boolState[S_OF_Hand_Switch_Failure] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_Hand_Switch_Failure] | Value : " << boolState[relevant_evt_OF_Hand_Switch_Failure] << endl;
	//cout << "Attribute :  boolState[required_OF_System_A_Failure] | Value : " << boolState[required_OF_System_A_Failure] << endl;
	//cout << "Attribute :  boolState[already_S_OF_System_A_Failure] | Value : " << boolState[already_S_OF_System_A_Failure] << endl;
	//cout << "Attribute :  boolState[S_OF_System_A_Failure] | Value : " << boolState[S_OF_System_A_Failure] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_System_A_Failure] | Value : " << boolState[relevant_evt_OF_System_A_Failure] << endl;
	//cout << "Attribute :  boolState[required_OF_System_B_Failure] | Value : " << boolState[required_OF_System_B_Failure] << endl;
	//cout << "Attribute :  boolState[already_S_OF_System_B_Failure] | Value : " << boolState[already_S_OF_System_B_Failure] << endl;
	//cout << "Attribute :  boolState[S_OF_System_B_Failure] | Value : " << boolState[S_OF_System_B_Failure] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_System_B_Failure] | Value : " << boolState[relevant_evt_OF_System_B_Failure] << endl;
}

bool storm::figaro::FigaroProgram_DuelProcessorReactorRegulation_Trim_article_No_repair::figaromodelhasinstransitions()
{
	return false;
}
void storm::figaro::FigaroProgram_DuelProcessorReactorRegulation_Trim_article_No_repair::doReinitialisations()
{
	boolState[required_OF_ADA27_A] = REINITIALISATION_OF_required_OF_ADA27_A;
	boolState[S_OF_ADA27_A] = REINITIALISATION_OF_S_OF_ADA27_A;
	boolState[relevant_evt_OF_ADA27_A] = REINITIALISATION_OF_relevant_evt_OF_ADA27_A;
	boolState[required_OF_ADA27_B] = REINITIALISATION_OF_required_OF_ADA27_B;
	boolState[S_OF_ADA27_B] = REINITIALISATION_OF_S_OF_ADA27_B;
	boolState[relevant_evt_OF_ADA27_B] = REINITIALISATION_OF_relevant_evt_OF_ADA27_B;
	boolState[required_OF_ANAMB_P16_A] = REINITIALISATION_OF_required_OF_ANAMB_P16_A;
	boolState[S_OF_ANAMB_P16_A] = REINITIALISATION_OF_S_OF_ANAMB_P16_A;
	boolState[relevant_evt_OF_ANAMB_P16_A] = REINITIALISATION_OF_relevant_evt_OF_ANAMB_P16_A;
	boolState[required_OF_ANAMB_P16_B] = REINITIALISATION_OF_required_OF_ANAMB_P16_B;
	boolState[S_OF_ANAMB_P16_B] = REINITIALISATION_OF_S_OF_ANAMB_P16_B;
	boolState[relevant_evt_OF_ANAMB_P16_B] = REINITIALISATION_OF_relevant_evt_OF_ANAMB_P16_B;
	boolState[required_OF_ANAMB_P17_A] = REINITIALISATION_OF_required_OF_ANAMB_P17_A;
	boolState[S_OF_ANAMB_P17_A] = REINITIALISATION_OF_S_OF_ANAMB_P17_A;
	boolState[relevant_evt_OF_ANAMB_P17_A] = REINITIALISATION_OF_relevant_evt_OF_ANAMB_P17_A;
	boolState[required_OF_ANAMB_P17_B] = REINITIALISATION_OF_required_OF_ANAMB_P17_B;
	boolState[S_OF_ANAMB_P17_B] = REINITIALISATION_OF_S_OF_ANAMB_P17_B;
	boolState[relevant_evt_OF_ANAMB_P17_B] = REINITIALISATION_OF_relevant_evt_OF_ANAMB_P17_B;
	boolState[required_OF_CPU86_102_A] = REINITIALISATION_OF_required_OF_CPU86_102_A;
	boolState[S_OF_CPU86_102_A] = REINITIALISATION_OF_S_OF_CPU86_102_A;
	boolState[relevant_evt_OF_CPU86_102_A] = REINITIALISATION_OF_relevant_evt_OF_CPU86_102_A;
	boolState[required_OF_CPU86_102_B] = REINITIALISATION_OF_required_OF_CPU86_102_B;
	boolState[S_OF_CPU86_102_B] = REINITIALISATION_OF_S_OF_CPU86_102_B;
	boolState[relevant_evt_OF_CPU86_102_B] = REINITIALISATION_OF_relevant_evt_OF_CPU86_102_B;
	boolState[required_OF_CPU86_105_A] = REINITIALISATION_OF_required_OF_CPU86_105_A;
	boolState[S_OF_CPU86_105_A] = REINITIALISATION_OF_S_OF_CPU86_105_A;
	boolState[relevant_evt_OF_CPU86_105_A] = REINITIALISATION_OF_relevant_evt_OF_CPU86_105_A;
	boolState[required_OF_CPU86_105_B] = REINITIALISATION_OF_required_OF_CPU86_105_B;
	boolState[S_OF_CPU86_105_B] = REINITIALISATION_OF_S_OF_CPU86_105_B;
	boolState[relevant_evt_OF_CPU86_105_B] = REINITIALISATION_OF_relevant_evt_OF_CPU86_105_B;
	boolState[required_OF_CTU] = REINITIALISATION_OF_required_OF_CTU;
	boolState[S_OF_CTU] = REINITIALISATION_OF_S_OF_CTU;
	boolState[relevant_evt_OF_CTU] = REINITIALISATION_OF_relevant_evt_OF_CTU;
	boolState[required_OF_DIFIT31_A] = REINITIALISATION_OF_required_OF_DIFIT31_A;
	boolState[S_OF_DIFIT31_A] = REINITIALISATION_OF_S_OF_DIFIT31_A;
	boolState[relevant_evt_OF_DIFIT31_A] = REINITIALISATION_OF_relevant_evt_OF_DIFIT31_A;
	boolState[required_OF_DIFIT31_B] = REINITIALISATION_OF_required_OF_DIFIT31_B;
	boolState[S_OF_DIFIT31_B] = REINITIALISATION_OF_S_OF_DIFIT31_B;
	boolState[relevant_evt_OF_DIFIT31_B] = REINITIALISATION_OF_relevant_evt_OF_DIFIT31_B;
	boolState[required_OF_DIFIT32_A] = REINITIALISATION_OF_required_OF_DIFIT32_A;
	boolState[S_OF_DIFIT32_A] = REINITIALISATION_OF_S_OF_DIFIT32_A;
	boolState[relevant_evt_OF_DIFIT32_A] = REINITIALISATION_OF_relevant_evt_OF_DIFIT32_A;
	boolState[required_OF_DIFIT32_B] = REINITIALISATION_OF_required_OF_DIFIT32_B;
	boolState[S_OF_DIFIT32_B] = REINITIALISATION_OF_S_OF_DIFIT32_B;
	boolState[relevant_evt_OF_DIFIT32_B] = REINITIALISATION_OF_relevant_evt_OF_DIFIT32_B;
	boolState[required_OF_DOSC_1_DCHS4_A] = REINITIALISATION_OF_required_OF_DOSC_1_DCHS4_A;
	boolState[S_OF_DOSC_1_DCHS4_A] = REINITIALISATION_OF_S_OF_DOSC_1_DCHS4_A;
	boolState[relevant_evt_OF_DOSC_1_DCHS4_A] = REINITIALISATION_OF_relevant_evt_OF_DOSC_1_DCHS4_A;
	boolState[required_OF_DOSC_1_DCHS4_B] = REINITIALISATION_OF_required_OF_DOSC_1_DCHS4_B;
	boolState[S_OF_DOSC_1_DCHS4_B] = REINITIALISATION_OF_S_OF_DOSC_1_DCHS4_B;
	boolState[relevant_evt_OF_DOSC_1_DCHS4_B] = REINITIALISATION_OF_relevant_evt_OF_DOSC_1_DCHS4_B;
	boolState[required_OF_DOSC_1_DCHS5_A] = REINITIALISATION_OF_required_OF_DOSC_1_DCHS5_A;
	boolState[S_OF_DOSC_1_DCHS5_A] = REINITIALISATION_OF_S_OF_DOSC_1_DCHS5_A;
	boolState[relevant_evt_OF_DOSC_1_DCHS5_A] = REINITIALISATION_OF_relevant_evt_OF_DOSC_1_DCHS5_A;
	boolState[required_OF_DOSC_1_DCHS5_B] = REINITIALISATION_OF_required_OF_DOSC_1_DCHS5_B;
	boolState[S_OF_DOSC_1_DCHS5_B] = REINITIALISATION_OF_S_OF_DOSC_1_DCHS5_B;
	boolState[relevant_evt_OF_DOSC_1_DCHS5_B] = REINITIALISATION_OF_relevant_evt_OF_DOSC_1_DCHS5_B;
	boolState[required_OF_DPBMB_P31_A] = REINITIALISATION_OF_required_OF_DPBMB_P31_A;
	boolState[S_OF_DPBMB_P31_A] = REINITIALISATION_OF_S_OF_DPBMB_P31_A;
	boolState[relevant_evt_OF_DPBMB_P31_A] = REINITIALISATION_OF_relevant_evt_OF_DPBMB_P31_A;
	boolState[required_OF_DPBMB_P31_B] = REINITIALISATION_OF_required_OF_DPBMB_P31_B;
	boolState[S_OF_DPBMB_P31_B] = REINITIALISATION_OF_S_OF_DPBMB_P31_B;
	boolState[relevant_evt_OF_DPBMB_P31_B] = REINITIALISATION_OF_relevant_evt_OF_DPBMB_P31_B;
	boolState[required_OF_DPBMB_P32_A] = REINITIALISATION_OF_required_OF_DPBMB_P32_A;
	boolState[S_OF_DPBMB_P32_A] = REINITIALISATION_OF_S_OF_DPBMB_P32_A;
	boolState[relevant_evt_OF_DPBMB_P32_A] = REINITIALISATION_OF_relevant_evt_OF_DPBMB_P32_A;
	boolState[required_OF_DPBMB_P32_B] = REINITIALISATION_OF_required_OF_DPBMB_P32_B;
	boolState[S_OF_DPBMB_P32_B] = REINITIALISATION_OF_S_OF_DPBMB_P32_B;
	boolState[relevant_evt_OF_DPBMB_P32_B] = REINITIALISATION_OF_relevant_evt_OF_DPBMB_P32_B;
	boolState[required_OF_HS_136F] = REINITIALISATION_OF_required_OF_HS_136F;
	boolState[S_OF_HS_136F] = REINITIALISATION_OF_S_OF_HS_136F;
	boolState[relevant_evt_OF_HS_136F] = REINITIALISATION_OF_relevant_evt_OF_HS_136F;
	boolState[required_OF_HS_138F] = REINITIALISATION_OF_required_OF_HS_138F;
	boolState[S_OF_HS_138F] = REINITIALISATION_OF_S_OF_HS_138F;
	boolState[relevant_evt_OF_HS_138F] = REINITIALISATION_OF_relevant_evt_OF_HS_138F;
	boolState[required_OF_HS_139F] = REINITIALISATION_OF_required_OF_HS_139F;
	boolState[S_OF_HS_139F] = REINITIALISATION_OF_S_OF_HS_139F;
	boolState[relevant_evt_OF_HS_139F] = REINITIALISATION_OF_relevant_evt_OF_HS_139F;
	boolState[required_OF_ISOCTX31_A] = REINITIALISATION_OF_required_OF_ISOCTX31_A;
	boolState[S_OF_ISOCTX31_A] = REINITIALISATION_OF_S_OF_ISOCTX31_A;
	boolState[relevant_evt_OF_ISOCTX31_A] = REINITIALISATION_OF_relevant_evt_OF_ISOCTX31_A;
	boolState[required_OF_ISOCTX31_B] = REINITIALISATION_OF_required_OF_ISOCTX31_B;
	boolState[S_OF_ISOCTX31_B] = REINITIALISATION_OF_S_OF_ISOCTX31_B;
	boolState[relevant_evt_OF_ISOCTX31_B] = REINITIALISATION_OF_relevant_evt_OF_ISOCTX31_B;
	boolState[required_OF_ISOCTX32_A] = REINITIALISATION_OF_required_OF_ISOCTX32_A;
	boolState[S_OF_ISOCTX32_A] = REINITIALISATION_OF_S_OF_ISOCTX32_A;
	boolState[relevant_evt_OF_ISOCTX32_A] = REINITIALISATION_OF_relevant_evt_OF_ISOCTX32_A;
	boolState[required_OF_ISOCTX32_B] = REINITIALISATION_OF_required_OF_ISOCTX32_B;
	boolState[S_OF_ISOCTX32_B] = REINITIALISATION_OF_S_OF_ISOCTX32_B;
	boolState[relevant_evt_OF_ISOCTX32_B] = REINITIALISATION_OF_relevant_evt_OF_ISOCTX32_B;
	boolState[required_OF_MEM527_A] = REINITIALISATION_OF_required_OF_MEM527_A;
	boolState[S_OF_MEM527_A] = REINITIALISATION_OF_S_OF_MEM527_A;
	boolState[relevant_evt_OF_MEM527_A] = REINITIALISATION_OF_relevant_evt_OF_MEM527_A;
	boolState[required_OF_MEM527_B] = REINITIALISATION_OF_required_OF_MEM527_B;
	boolState[S_OF_MEM527_B] = REINITIALISATION_OF_S_OF_MEM527_B;
	boolState[relevant_evt_OF_MEM527_B] = REINITIALISATION_OF_relevant_evt_OF_MEM527_B;
	boolState[required_OF_OE] = REINITIALISATION_OF_required_OF_OE;
	boolState[S_OF_OE] = REINITIALISATION_OF_S_OF_OE;
	boolState[relevant_evt_OF_OE] = REINITIALISATION_OF_relevant_evt_OF_OE;
	boolState[required_OF_PROC_GATE_A] = REINITIALISATION_OF_required_OF_PROC_GATE_A;
	boolState[S_OF_PROC_GATE_A] = REINITIALISATION_OF_S_OF_PROC_GATE_A;
	boolState[relevant_evt_OF_PROC_GATE_A] = REINITIALISATION_OF_relevant_evt_OF_PROC_GATE_A;
	boolState[required_OF_PROC_GATE_B] = REINITIALISATION_OF_required_OF_PROC_GATE_B;
	boolState[S_OF_PROC_GATE_B] = REINITIALISATION_OF_S_OF_PROC_GATE_B;
	boolState[relevant_evt_OF_PROC_GATE_B] = REINITIALISATION_OF_relevant_evt_OF_PROC_GATE_B;
	boolState[required_OF_RLYS_1] = REINITIALISATION_OF_required_OF_RLYS_1;
	boolState[S_OF_RLYS_1] = REINITIALISATION_OF_S_OF_RLYS_1;
	boolState[relevant_evt_OF_RLYS_1] = REINITIALISATION_OF_relevant_evt_OF_RLYS_1;
	boolState[required_OF_RORB31_A] = REINITIALISATION_OF_required_OF_RORB31_A;
	boolState[S_OF_RORB31_A] = REINITIALISATION_OF_S_OF_RORB31_A;
	boolState[relevant_evt_OF_RORB31_A] = REINITIALISATION_OF_relevant_evt_OF_RORB31_A;
	boolState[required_OF_RORB31_B] = REINITIALISATION_OF_required_OF_RORB31_B;
	boolState[S_OF_RORB31_B] = REINITIALISATION_OF_S_OF_RORB31_B;
	boolState[relevant_evt_OF_RORB31_B] = REINITIALISATION_OF_relevant_evt_OF_RORB31_B;
	boolState[required_OF_RORB32_A] = REINITIALISATION_OF_required_OF_RORB32_A;
	boolState[S_OF_RORB32_A] = REINITIALISATION_OF_S_OF_RORB32_A;
	boolState[relevant_evt_OF_RORB32_A] = REINITIALISATION_OF_relevant_evt_OF_RORB32_A;
	boolState[required_OF_RORB32_B] = REINITIALISATION_OF_required_OF_RORB32_B;
	boolState[S_OF_RORB32_B] = REINITIALISATION_OF_S_OF_RORB32_B;
	boolState[relevant_evt_OF_RORB32_B] = REINITIALISATION_OF_relevant_evt_OF_RORB32_B;
	boolState[required_OF_SM_271_A] = REINITIALISATION_OF_required_OF_SM_271_A;
	boolState[S_OF_SM_271_A] = REINITIALISATION_OF_S_OF_SM_271_A;
	boolState[relevant_evt_OF_SM_271_A] = REINITIALISATION_OF_relevant_evt_OF_SM_271_A;
	boolState[required_OF_SM_271_B] = REINITIALISATION_OF_required_OF_SM_271_B;
	boolState[S_OF_SM_271_B] = REINITIALISATION_OF_S_OF_SM_271_B;
	boolState[relevant_evt_OF_SM_271_B] = REINITIALISATION_OF_relevant_evt_OF_SM_271_B;
	boolState[required_OF_RRS_Failure] = REINITIALISATION_OF_required_OF_RRS_Failure;
	boolState[S_OF_RRS_Failure] = REINITIALISATION_OF_S_OF_RRS_Failure;
	boolState[relevant_evt_OF_RRS_Failure] = REINITIALISATION_OF_relevant_evt_OF_RRS_Failure;
	boolState[required_OF_UE_1] = REINITIALISATION_OF_required_OF_UE_1;
	boolState[S_OF_UE_1] = REINITIALISATION_OF_S_OF_UE_1;
	boolState[relevant_evt_OF_UE_1] = REINITIALISATION_OF_relevant_evt_OF_UE_1;
	boolState[required_OF_Auto_Switching_Failure_A] = REINITIALISATION_OF_required_OF_Auto_Switching_Failure_A;
	boolState[S_OF_Auto_Switching_Failure_A] = REINITIALISATION_OF_S_OF_Auto_Switching_Failure_A;
	boolState[relevant_evt_OF_Auto_Switching_Failure_A] = REINITIALISATION_OF_relevant_evt_OF_Auto_Switching_Failure_A;
	boolState[required_OF_Auto_Switching_Failure_B] = REINITIALISATION_OF_required_OF_Auto_Switching_Failure_B;
	boolState[S_OF_Auto_Switching_Failure_B] = REINITIALISATION_OF_S_OF_Auto_Switching_Failure_B;
	boolState[relevant_evt_OF_Auto_Switching_Failure_B] = REINITIALISATION_OF_relevant_evt_OF_Auto_Switching_Failure_B;
	boolState[required_OF_Loss_Of_Control_in_Auto_Mode] = REINITIALISATION_OF_required_OF_Loss_Of_Control_in_Auto_Mode;
	boolState[S_OF_Loss_Of_Control_in_Auto_Mode] = REINITIALISATION_OF_S_OF_Loss_Of_Control_in_Auto_Mode;
	boolState[relevant_evt_OF_Loss_Of_Control_in_Auto_Mode] = REINITIALISATION_OF_relevant_evt_OF_Loss_Of_Control_in_Auto_Mode;
	boolState[required_OF_Loss_Of_Control_With_A] = REINITIALISATION_OF_required_OF_Loss_Of_Control_With_A;
	boolState[S_OF_Loss_Of_Control_With_A] = REINITIALISATION_OF_S_OF_Loss_Of_Control_With_A;
	boolState[relevant_evt_OF_Loss_Of_Control_With_A] = REINITIALISATION_OF_relevant_evt_OF_Loss_Of_Control_With_A;
	boolState[required_OF_Loss_Of_Control_With_B] = REINITIALISATION_OF_required_OF_Loss_Of_Control_With_B;
	boolState[S_OF_Loss_Of_Control_With_B] = REINITIALISATION_OF_S_OF_Loss_Of_Control_With_B;
	boolState[relevant_evt_OF_Loss_Of_Control_With_B] = REINITIALISATION_OF_relevant_evt_OF_Loss_Of_Control_With_B;
	boolState[required_OF_dummy] = REINITIALISATION_OF_required_OF_dummy;
	boolState[S_OF_dummy] = REINITIALISATION_OF_S_OF_dummy;
	boolState[relevant_evt_OF_dummy] = REINITIALISATION_OF_relevant_evt_OF_dummy;
	boolState[required_OF_A_B_Failure_Together] = REINITIALISATION_OF_required_OF_A_B_Failure_Together;
	boolState[S_OF_A_B_Failure_Together] = REINITIALISATION_OF_S_OF_A_B_Failure_Together;
	boolState[relevant_evt_OF_A_B_Failure_Together] = REINITIALISATION_OF_relevant_evt_OF_A_B_Failure_Together;
	boolState[required_OF_Hand_Switch_Failure] = REINITIALISATION_OF_required_OF_Hand_Switch_Failure;
	boolState[S_OF_Hand_Switch_Failure] = REINITIALISATION_OF_S_OF_Hand_Switch_Failure;
	boolState[relevant_evt_OF_Hand_Switch_Failure] = REINITIALISATION_OF_relevant_evt_OF_Hand_Switch_Failure;
	boolState[required_OF_System_A_Failure] = REINITIALISATION_OF_required_OF_System_A_Failure;
	boolState[S_OF_System_A_Failure] = REINITIALISATION_OF_S_OF_System_A_Failure;
	boolState[relevant_evt_OF_System_A_Failure] = REINITIALISATION_OF_relevant_evt_OF_System_A_Failure;
	boolState[required_OF_System_B_Failure] = REINITIALISATION_OF_required_OF_System_B_Failure;
	boolState[S_OF_System_B_Failure] = REINITIALISATION_OF_S_OF_System_B_Failure;
	boolState[relevant_evt_OF_System_B_Failure] = REINITIALISATION_OF_relevant_evt_OF_System_B_Failure;
}

void storm::figaro::FigaroProgram_DuelProcessorReactorRegulation_Trim_article_No_repair::fireOccurrence(int numFire)
{
	//cout <<">>>>>>>>>>>>>>>>>>>> Fire of occurrence #" << numFire << " <<<<<<<<<<<<<<<<<<<<<<<" << endl;

	if (numFire == 0)
	{
		FIRE_xx10_OF_ADA27_A = true;
	}

	if (numFire == 1)
	{
		FIRE_xx10_OF_ADA27_B = true;
	}

	if (numFire == 2)
	{
		FIRE_xx10_OF_ANAMB_P16_A = true;
	}

	if (numFire == 3)
	{
		FIRE_xx10_OF_ANAMB_P16_B = true;
	}

	if (numFire == 4)
	{
		FIRE_xx10_OF_ANAMB_P17_A = true;
	}

	if (numFire == 5)
	{
		FIRE_xx10_OF_ANAMB_P17_B = true;
	}

	if (numFire == 6)
	{
		FIRE_xx10_OF_CPU86_102_A = true;
	}

	if (numFire == 7)
	{
		FIRE_xx10_OF_CPU86_102_B = true;
	}

	if (numFire == 8)
	{
		FIRE_xx10_OF_CPU86_105_A = true;
	}

	if (numFire == 9)
	{
		FIRE_xx10_OF_CPU86_105_B = true;
	}

	if (numFire == 10)
	{
		FIRE_xx10_OF_CTU = true;
	}

	if (numFire == 11)
	{
		FIRE_xx10_OF_DIFIT31_A = true;
	}

	if (numFire == 12)
	{
		FIRE_xx10_OF_DIFIT31_B = true;
	}

	if (numFire == 13)
	{
		FIRE_xx10_OF_DIFIT32_A = true;
	}

	if (numFire == 14)
	{
		FIRE_xx10_OF_DIFIT32_B = true;
	}

	if (numFire == 15)
	{
		FIRE_xx10_OF_DOSC_1_DCHS4_A = true;
	}

	if (numFire == 16)
	{
		FIRE_xx10_OF_DOSC_1_DCHS4_B = true;
	}

	if (numFire == 17)
	{
		FIRE_xx10_OF_DOSC_1_DCHS5_A = true;
	}

	if (numFire == 18)
	{
		FIRE_xx10_OF_DOSC_1_DCHS5_B = true;
	}

	if (numFire == 19)
	{
		FIRE_xx10_OF_DPBMB_P31_A = true;
	}

	if (numFire == 20)
	{
		FIRE_xx10_OF_DPBMB_P31_B = true;
	}

	if (numFire == 21)
	{
		FIRE_xx10_OF_DPBMB_P32_A = true;
	}

	if (numFire == 22)
	{
		FIRE_xx10_OF_DPBMB_P32_B = true;
	}

	if (numFire == 23)
	{
		FIRE_xx10_OF_HS_136F = true;
	}

	if (numFire == 24)
	{
		FIRE_xx10_OF_HS_138F = true;
	}

	if (numFire == 25)
	{
		FIRE_xx10_OF_HS_139F = true;
	}

	if (numFire == 26)
	{
		FIRE_xx10_OF_ISOCTX31_A = true;
	}

	if (numFire == 27)
	{
		FIRE_xx10_OF_ISOCTX31_B = true;
	}

	if (numFire == 28)
	{
		FIRE_xx10_OF_ISOCTX32_A = true;
	}

	if (numFire == 29)
	{
		FIRE_xx10_OF_ISOCTX32_B = true;
	}

	if (numFire == 30)
	{
		FIRE_xx10_OF_MEM527_A = true;
	}

	if (numFire == 31)
	{
		FIRE_xx10_OF_MEM527_B = true;
	}

	if (numFire == 32)
	{
		FIRE_xx10_OF_OE = true;
	}

	if (numFire == 33)
	{
		FIRE_xx10_OF_RLYS_1 = true;
	}

	if (numFire == 34)
	{
		FIRE_xx10_OF_RORB31_A = true;
	}

	if (numFire == 35)
	{
		FIRE_xx10_OF_RORB31_B = true;
	}

	if (numFire == 36)
	{
		FIRE_xx10_OF_RORB32_A = true;
	}

	if (numFire == 37)
	{
		FIRE_xx10_OF_RORB32_B = true;
	}

	if (numFire == 38)
	{
		FIRE_xx10_OF_SM_271_A = true;
	}

	if (numFire == 39)
	{
		FIRE_xx10_OF_SM_271_B = true;
	}

/* ---------- DECLARATION OF OCCURRENCE RULES------------ */

	// Occurrence xx10_OF_ADA27_A
	if ((boolState[failF_OF_ADA27_A] == false) && (boolState[required_OF_ADA27_A] &&  boolState[relevant_evt_OF_ADA27_A])) 
	{
		 
		if (FIRE_xx10_OF_ADA27_A)
		{
			boolState[failF_OF_ADA27_A]  =  true;
			FIRE_xx10_OF_ADA27_A = false;
		}
	}

	// Occurrence xx10_OF_ADA27_B
	if ((boolState[failF_OF_ADA27_B] == false) && (boolState[required_OF_ADA27_B] &&  boolState[relevant_evt_OF_ADA27_B])) 
	{
		 
		if (FIRE_xx10_OF_ADA27_B)
		{
			boolState[failF_OF_ADA27_B]  =  true;
			FIRE_xx10_OF_ADA27_B = false;
		}
	}

	// Occurrence xx10_OF_ANAMB_P16_A
	if ((boolState[failF_OF_ANAMB_P16_A] == false) && (boolState[required_OF_ANAMB_P16_A]
&& boolState[relevant_evt_OF_ANAMB_P16_A])) 
	{
		 
		if (FIRE_xx10_OF_ANAMB_P16_A)
		{
			boolState[failF_OF_ANAMB_P16_A]  =  true;
			FIRE_xx10_OF_ANAMB_P16_A = false;
		}
	}

	// Occurrence xx10_OF_ANAMB_P16_B
	if ((boolState[failF_OF_ANAMB_P16_B] == false) && (boolState[required_OF_ANAMB_P16_B]
&& boolState[relevant_evt_OF_ANAMB_P16_B])) 
	{
		 
		if (FIRE_xx10_OF_ANAMB_P16_B)
		{
			boolState[failF_OF_ANAMB_P16_B]  =  true;
			FIRE_xx10_OF_ANAMB_P16_B = false;
		}
	}

	// Occurrence xx10_OF_ANAMB_P17_A
	if ((boolState[failF_OF_ANAMB_P17_A] == false) && (boolState[required_OF_ANAMB_P17_A]
&& boolState[relevant_evt_OF_ANAMB_P17_A])) 
	{
		 
		if (FIRE_xx10_OF_ANAMB_P17_A)
		{
			boolState[failF_OF_ANAMB_P17_A]  =  true;
			FIRE_xx10_OF_ANAMB_P17_A = false;
		}
	}

	// Occurrence xx10_OF_ANAMB_P17_B
	if ((boolState[failF_OF_ANAMB_P17_B] == false) && (boolState[required_OF_ANAMB_P17_B]
&& boolState[relevant_evt_OF_ANAMB_P17_B])) 
	{
		 
		if (FIRE_xx10_OF_ANAMB_P17_B)
		{
			boolState[failF_OF_ANAMB_P17_B]  =  true;
			FIRE_xx10_OF_ANAMB_P17_B = false;
		}
	}

	// Occurrence xx10_OF_CPU86_102_A
	if ((boolState[failF_OF_CPU86_102_A] == false) && (boolState[required_OF_CPU86_102_A]
&& boolState[relevant_evt_OF_CPU86_102_A])) 
	{
		 
		if (FIRE_xx10_OF_CPU86_102_A)
		{
			boolState[failF_OF_CPU86_102_A]  =  true;
			FIRE_xx10_OF_CPU86_102_A = false;
		}
	}

	// Occurrence xx10_OF_CPU86_102_B
	if ((boolState[failF_OF_CPU86_102_B] == false) && (boolState[required_OF_CPU86_102_B]
&& boolState[relevant_evt_OF_CPU86_102_B])) 
	{
		 
		if (FIRE_xx10_OF_CPU86_102_B)
		{
			boolState[failF_OF_CPU86_102_B]  =  true;
			FIRE_xx10_OF_CPU86_102_B = false;
		}
	}

	// Occurrence xx10_OF_CPU86_105_A
	if ((boolState[failF_OF_CPU86_105_A] == false) && (boolState[required_OF_CPU86_105_A]
&& boolState[relevant_evt_OF_CPU86_105_A])) 
	{
		 
		if (FIRE_xx10_OF_CPU86_105_A)
		{
			boolState[failF_OF_CPU86_105_A]  =  true;
			FIRE_xx10_OF_CPU86_105_A = false;
		}
	}

	// Occurrence xx10_OF_CPU86_105_B
	if ((boolState[failF_OF_CPU86_105_B] == false) && (boolState[required_OF_CPU86_105_B]
&& boolState[relevant_evt_OF_CPU86_105_B])) 
	{
		 
		if (FIRE_xx10_OF_CPU86_105_B)
		{
			boolState[failF_OF_CPU86_105_B]  =  true;
			FIRE_xx10_OF_CPU86_105_B = false;
		}
	}

	// Occurrence xx10_OF_CTU
	if ((boolState[failF_OF_CTU] == false) && (boolState[required_OF_CTU] && boolState[relevant_evt_OF_CTU])) 
	{
		 
		if (FIRE_xx10_OF_CTU)
		{
			boolState[failF_OF_CTU]  =  true;
			FIRE_xx10_OF_CTU = false;
		}
	}

	// Occurrence xx10_OF_DIFIT31_A
	if ((boolState[failF_OF_DIFIT31_A] == false) && (boolState[required_OF_DIFIT31_A] &&  boolState[relevant_evt_OF_DIFIT31_A])) 
	{
		 
		if (FIRE_xx10_OF_DIFIT31_A)
		{
			boolState[failF_OF_DIFIT31_A]  =  true;
			FIRE_xx10_OF_DIFIT31_A = false;
		}
	}

	// Occurrence xx10_OF_DIFIT31_B
	if ((boolState[failF_OF_DIFIT31_B] == false) && (boolState[required_OF_DIFIT31_B] &&  boolState[relevant_evt_OF_DIFIT31_B])) 
	{
		 
		if (FIRE_xx10_OF_DIFIT31_B)
		{
			boolState[failF_OF_DIFIT31_B]  =  true;
			FIRE_xx10_OF_DIFIT31_B = false;
		}
	}

	// Occurrence xx10_OF_DIFIT32_A
	if ((boolState[failF_OF_DIFIT32_A] == false) && (boolState[required_OF_DIFIT32_A] &&  boolState[relevant_evt_OF_DIFIT32_A])) 
	{
		 
		if (FIRE_xx10_OF_DIFIT32_A)
		{
			boolState[failF_OF_DIFIT32_A]  =  true;
			FIRE_xx10_OF_DIFIT32_A = false;
		}
	}

	// Occurrence xx10_OF_DIFIT32_B
	if ((boolState[failF_OF_DIFIT32_B] == false) && (boolState[required_OF_DIFIT32_B] &&  boolState[relevant_evt_OF_DIFIT32_B])) 
	{
		 
		if (FIRE_xx10_OF_DIFIT32_B)
		{
			boolState[failF_OF_DIFIT32_B]  =  true;
			FIRE_xx10_OF_DIFIT32_B = false;
		}
	}

	// Occurrence xx10_OF_DOSC_1_DCHS4_A
	if ((boolState[failF_OF_DOSC_1_DCHS4_A] == false) && (boolState[required_OF_DOSC_1_DCHS4_A] && boolState[relevant_evt_OF_DOSC_1_DCHS4_A])) 
	{
		 
		if (FIRE_xx10_OF_DOSC_1_DCHS4_A)
		{
			boolState[failF_OF_DOSC_1_DCHS4_A]  =  true;
			FIRE_xx10_OF_DOSC_1_DCHS4_A = false;
		}
	}

	// Occurrence xx10_OF_DOSC_1_DCHS4_B
	if ((boolState[failF_OF_DOSC_1_DCHS4_B] == false) && (boolState[required_OF_DOSC_1_DCHS4_B] && boolState[relevant_evt_OF_DOSC_1_DCHS4_B])) 
	{
		 
		if (FIRE_xx10_OF_DOSC_1_DCHS4_B)
		{
			boolState[failF_OF_DOSC_1_DCHS4_B]  =  true;
			FIRE_xx10_OF_DOSC_1_DCHS4_B = false;
		}
	}

	// Occurrence xx10_OF_DOSC_1_DCHS5_A
	if ((boolState[failF_OF_DOSC_1_DCHS5_A] == false) && (boolState[required_OF_DOSC_1_DCHS5_A] && boolState[relevant_evt_OF_DOSC_1_DCHS5_A])) 
	{
		 
		if (FIRE_xx10_OF_DOSC_1_DCHS5_A)
		{
			boolState[failF_OF_DOSC_1_DCHS5_A]  =  true;
			FIRE_xx10_OF_DOSC_1_DCHS5_A = false;
		}
	}

	// Occurrence xx10_OF_DOSC_1_DCHS5_B
	if ((boolState[failF_OF_DOSC_1_DCHS5_B] == false) && (boolState[required_OF_DOSC_1_DCHS5_B] && boolState[relevant_evt_OF_DOSC_1_DCHS5_B])) 
	{
		 
		if (FIRE_xx10_OF_DOSC_1_DCHS5_B)
		{
			boolState[failF_OF_DOSC_1_DCHS5_B]  =  true;
			FIRE_xx10_OF_DOSC_1_DCHS5_B = false;
		}
	}

	// Occurrence xx10_OF_DPBMB_P31_A
	if ((boolState[failF_OF_DPBMB_P31_A] == false) && (boolState[required_OF_DPBMB_P31_A]
&& boolState[relevant_evt_OF_DPBMB_P31_A])) 
	{
		 
		if (FIRE_xx10_OF_DPBMB_P31_A)
		{
			boolState[failF_OF_DPBMB_P31_A]  =  true;
			FIRE_xx10_OF_DPBMB_P31_A = false;
		}
	}

	// Occurrence xx10_OF_DPBMB_P31_B
	if ((boolState[failF_OF_DPBMB_P31_B] == false) && (boolState[required_OF_DPBMB_P31_B]
&& boolState[relevant_evt_OF_DPBMB_P31_B])) 
	{
		 
		if (FIRE_xx10_OF_DPBMB_P31_B)
		{
			boolState[failF_OF_DPBMB_P31_B]  =  true;
			FIRE_xx10_OF_DPBMB_P31_B = false;
		}
	}

	// Occurrence xx10_OF_DPBMB_P32_A
	if ((boolState[failF_OF_DPBMB_P32_A] == false) && (boolState[required_OF_DPBMB_P32_A]
&& boolState[relevant_evt_OF_DPBMB_P32_A])) 
	{
		 
		if (FIRE_xx10_OF_DPBMB_P32_A)
		{
			boolState[failF_OF_DPBMB_P32_A]  =  true;
			FIRE_xx10_OF_DPBMB_P32_A = false;
		}
	}

	// Occurrence xx10_OF_DPBMB_P32_B
	if ((boolState[failF_OF_DPBMB_P32_B] == false) && (boolState[required_OF_DPBMB_P32_B]
&& boolState[relevant_evt_OF_DPBMB_P32_B])) 
	{
		 
		if (FIRE_xx10_OF_DPBMB_P32_B)
		{
			boolState[failF_OF_DPBMB_P32_B]  =  true;
			FIRE_xx10_OF_DPBMB_P32_B = false;
		}
	}

	// Occurrence xx10_OF_HS_136F
	if ((boolState[failF_OF_HS_136F] == false) && (boolState[required_OF_HS_136F] &&  boolState[relevant_evt_OF_HS_136F])) 
	{
		 
		if (FIRE_xx10_OF_HS_136F)
		{
			boolState[failF_OF_HS_136F]  =  true;
			FIRE_xx10_OF_HS_136F = false;
		}
	}

	// Occurrence xx10_OF_HS_138F
	if ((boolState[failF_OF_HS_138F] == false) && (boolState[required_OF_HS_138F] &&  boolState[relevant_evt_OF_HS_138F])) 
	{
		 
		if (FIRE_xx10_OF_HS_138F)
		{
			boolState[failF_OF_HS_138F]  =  true;
			FIRE_xx10_OF_HS_138F = false;
		}
	}

	// Occurrence xx10_OF_HS_139F
	if ((boolState[failF_OF_HS_139F] == false) && (boolState[required_OF_HS_139F] &&  boolState[relevant_evt_OF_HS_139F])) 
	{
		 
		if (FIRE_xx10_OF_HS_139F)
		{
			boolState[failF_OF_HS_139F]  =  true;
			FIRE_xx10_OF_HS_139F = false;
		}
	}

	// Occurrence xx10_OF_ISOCTX31_A
	if ((boolState[failF_OF_ISOCTX31_A] == false) && (boolState[required_OF_ISOCTX31_A]
&& boolState[relevant_evt_OF_ISOCTX31_A])) 
	{
		 
		if (FIRE_xx10_OF_ISOCTX31_A)
		{
			boolState[failF_OF_ISOCTX31_A]  =  true;
			FIRE_xx10_OF_ISOCTX31_A = false;
		}
	}

	// Occurrence xx10_OF_ISOCTX31_B
	if ((boolState[failF_OF_ISOCTX31_B] == false) && (boolState[required_OF_ISOCTX31_B]
&& boolState[relevant_evt_OF_ISOCTX31_B])) 
	{
		 
		if (FIRE_xx10_OF_ISOCTX31_B)
		{
			boolState[failF_OF_ISOCTX31_B]  =  true;
			FIRE_xx10_OF_ISOCTX31_B = false;
		}
	}

	// Occurrence xx10_OF_ISOCTX32_A
	if ((boolState[failF_OF_ISOCTX32_A] == false) && (boolState[required_OF_ISOCTX32_A]
&& boolState[relevant_evt_OF_ISOCTX32_A])) 
	{
		 
		if (FIRE_xx10_OF_ISOCTX32_A)
		{
			boolState[failF_OF_ISOCTX32_A]  =  true;
			FIRE_xx10_OF_ISOCTX32_A = false;
		}
	}

	// Occurrence xx10_OF_ISOCTX32_B
	if ((boolState[failF_OF_ISOCTX32_B] == false) && (boolState[required_OF_ISOCTX32_B]
&& boolState[relevant_evt_OF_ISOCTX32_B])) 
	{
		 
		if (FIRE_xx10_OF_ISOCTX32_B)
		{
			boolState[failF_OF_ISOCTX32_B]  =  true;
			FIRE_xx10_OF_ISOCTX32_B = false;
		}
	}

	// Occurrence xx10_OF_MEM527_A
	if ((boolState[failF_OF_MEM527_A] == false) && (boolState[required_OF_MEM527_A] &&  boolState[relevant_evt_OF_MEM527_A])) 
	{
		 
		if (FIRE_xx10_OF_MEM527_A)
		{
			boolState[failF_OF_MEM527_A]  =  true;
			FIRE_xx10_OF_MEM527_A = false;
		}
	}

	// Occurrence xx10_OF_MEM527_B
	if ((boolState[failF_OF_MEM527_B] == false) && (boolState[required_OF_MEM527_B] &&  boolState[relevant_evt_OF_MEM527_B])) 
	{
		 
		if (FIRE_xx10_OF_MEM527_B)
		{
			boolState[failF_OF_MEM527_B]  =  true;
			FIRE_xx10_OF_MEM527_B = false;
		}
	}

	// Occurrence xx10_OF_OE
	if ((boolState[failF_OF_OE] == false) && (boolState[required_OF_OE] && boolState[relevant_evt_OF_OE])) 
	{
		 
		if (FIRE_xx10_OF_OE)
		{
			boolState[failF_OF_OE]  =  true;
			FIRE_xx10_OF_OE = false;
		}
	}

	// Occurrence xx10_OF_RLYS_1
	if ((boolState[failF_OF_RLYS_1] == false) && (boolState[required_OF_RLYS_1] &&  boolState[relevant_evt_OF_RLYS_1])) 
	{
		 
		if (FIRE_xx10_OF_RLYS_1)
		{
			boolState[failF_OF_RLYS_1]  =  true;
			FIRE_xx10_OF_RLYS_1 = false;
		}
	}

	// Occurrence xx10_OF_RORB31_A
	if ((boolState[failF_OF_RORB31_A] == false) && (boolState[required_OF_RORB31_A] &&  boolState[relevant_evt_OF_RORB31_A])) 
	{
		 
		if (FIRE_xx10_OF_RORB31_A)
		{
			boolState[failF_OF_RORB31_A]  =  true;
			FIRE_xx10_OF_RORB31_A = false;
		}
	}

	// Occurrence xx10_OF_RORB31_B
	if ((boolState[failF_OF_RORB31_B] == false) && (boolState[required_OF_RORB31_B] &&  boolState[relevant_evt_OF_RORB31_B])) 
	{
		 
		if (FIRE_xx10_OF_RORB31_B)
		{
			boolState[failF_OF_RORB31_B]  =  true;
			FIRE_xx10_OF_RORB31_B = false;
		}
	}

	// Occurrence xx10_OF_RORB32_A
	if ((boolState[failF_OF_RORB32_A] == false) && (boolState[required_OF_RORB32_A] &&  boolState[relevant_evt_OF_RORB32_A])) 
	{
		 
		if (FIRE_xx10_OF_RORB32_A)
		{
			boolState[failF_OF_RORB32_A]  =  true;
			FIRE_xx10_OF_RORB32_A = false;
		}
	}

	// Occurrence xx10_OF_RORB32_B
	if ((boolState[failF_OF_RORB32_B] == false) && (boolState[required_OF_RORB32_B] &&  boolState[relevant_evt_OF_RORB32_B])) 
	{
		 
		if (FIRE_xx10_OF_RORB32_B)
		{
			boolState[failF_OF_RORB32_B]  =  true;
			FIRE_xx10_OF_RORB32_B = false;
		}
	}

	// Occurrence xx10_OF_SM_271_A
	if ((boolState[failF_OF_SM_271_A] == false) && (boolState[required_OF_SM_271_A] &&  boolState[relevant_evt_OF_SM_271_A])) 
	{
		 
		if (FIRE_xx10_OF_SM_271_A)
		{
			boolState[failF_OF_SM_271_A]  =  true;
			FIRE_xx10_OF_SM_271_A = false;
		}
	}

	// Occurrence xx10_OF_SM_271_B
	if ((boolState[failF_OF_SM_271_B] == false) && (boolState[required_OF_SM_271_B] &&  boolState[relevant_evt_OF_SM_271_B])) 
	{
		 
		if (FIRE_xx10_OF_SM_271_B)
		{
			boolState[failF_OF_SM_271_B]  =  true;
			FIRE_xx10_OF_SM_271_B = false;
		}
	}

}

std::vector<std::tuple<int, double, std::string, int>> storm::figaro::FigaroProgram_DuelProcessorReactorRegulation_Trim_article_No_repair::showFireableOccurrences()
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
     
	if ((boolState[failF_OF_ADA27_A] == false) && (boolState[required_OF_ADA27_A] && boolState[relevant_evt_OF_ADA27_A]))
	{
		//cout << "0 : xx10_OF_ADA27_A : FAULT failF  LABEL \"failure in operation ADA27_A\"  DIST EXP (6.7e-06)  INDUCING boolState[failF_OF_ADA27_A]  =  TRUE" << endl;
		list.push_back(make_tuple(0, 6.7e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_ADA27_B] == false) && (boolState[required_OF_ADA27_B] && boolState[relevant_evt_OF_ADA27_B]))
	{
		//cout << "1 : xx10_OF_ADA27_B : FAULT failF  LABEL \"failure in operation ADA27_B\"  DIST EXP (6.7e-06)  INDUCING boolState[failF_OF_ADA27_B]  =  TRUE" << endl;
		list.push_back(make_tuple(1, 6.7e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_ANAMB_P16_A] == false) && (boolState[required_OF_ANAMB_P16_A] && boolState[relevant_evt_OF_ANAMB_P16_A]))
	{
		//cout << "2 : xx10_OF_ANAMB_P16_A : FAULT failF  LABEL \"failure in operation ANAMB_P16_A\"  DIST EXP (3.2e-07)  INDUCING boolState[failF_OF_ANAMB_P16_A]  =  TRUE" << endl;
		list.push_back(make_tuple(2, 3.2e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_ANAMB_P16_B] == false) && (boolState[required_OF_ANAMB_P16_B] && boolState[relevant_evt_OF_ANAMB_P16_B]))
	{
		//cout << "3 : xx10_OF_ANAMB_P16_B : FAULT failF  LABEL \"failure in operation ANAMB_P16_B\"  DIST EXP (3.2e-07)  INDUCING boolState[failF_OF_ANAMB_P16_B]  =  TRUE" << endl;
		list.push_back(make_tuple(3, 3.2e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_ANAMB_P17_A] == false) && (boolState[required_OF_ANAMB_P17_A] && boolState[relevant_evt_OF_ANAMB_P17_A]))
	{
		//cout << "4 : xx10_OF_ANAMB_P17_A : FAULT failF  LABEL \"failure in operation ANAMB_P17_A\"  DIST EXP (3.2e-07)  INDUCING boolState[failF_OF_ANAMB_P17_A]  =  TRUE" << endl;
		list.push_back(make_tuple(4, 3.2e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_ANAMB_P17_B] == false) && (boolState[required_OF_ANAMB_P17_B] && boolState[relevant_evt_OF_ANAMB_P17_B]))
	{
		//cout << "5 : xx10_OF_ANAMB_P17_B : FAULT failF  LABEL \"failure in operation ANAMB_P17_B\"  DIST EXP (3.2e-07)  INDUCING boolState[failF_OF_ANAMB_P17_B]  =  TRUE" << endl;
		list.push_back(make_tuple(5, 3.2e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_CPU86_102_A] == false) && (boolState[required_OF_CPU86_102_A] && boolState[relevant_evt_OF_CPU86_102_A]))
	{
		//cout << "6 : xx10_OF_CPU86_102_A : FAULT failF  LABEL \"failure in operation CPU86_102_A\"  DIST EXP (9.5e-06)  INDUCING boolState[failF_OF_CPU86_102_A]  =  TRUE" << endl;
		list.push_back(make_tuple(6, 9.5e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_CPU86_102_B] == false) && (boolState[required_OF_CPU86_102_B] && boolState[relevant_evt_OF_CPU86_102_B]))
	{
		//cout << "7 : xx10_OF_CPU86_102_B : FAULT failF  LABEL \"failure in operation CPU86_102_B\"  DIST EXP (9.5e-06)  INDUCING boolState[failF_OF_CPU86_102_B]  =  TRUE" << endl;
		list.push_back(make_tuple(7, 9.5e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_CPU86_105_A] == false) && (boolState[required_OF_CPU86_105_A] && boolState[relevant_evt_OF_CPU86_105_A]))
	{
		//cout << "8 : xx10_OF_CPU86_105_A : FAULT failF  LABEL \"failure in operation CPU86_105_A\"  DIST EXP (9.5e-06)  INDUCING boolState[failF_OF_CPU86_105_A]  =  TRUE" << endl;
		list.push_back(make_tuple(8, 9.5e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_CPU86_105_B] == false) && (boolState[required_OF_CPU86_105_B] && boolState[relevant_evt_OF_CPU86_105_B]))
	{
		//cout << "9 : xx10_OF_CPU86_105_B : FAULT failF  LABEL \"failure in operation CPU86_105_B\"  DIST EXP (9.5e-06)  INDUCING boolState[failF_OF_CPU86_105_B]  =  TRUE" << endl;
		list.push_back(make_tuple(9, 9.5e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_CTU] == false) && (boolState[required_OF_CTU] && boolState[relevant_evt_OF_CTU]))
	{
		//cout << "10 : xx10_OF_CTU : FAULT failF  LABEL \"failure in operation CTU\"  DIST EXP (5.4e-06)  INDUCING boolState[failF_OF_CTU]  =  TRUE" << endl;
		list.push_back(make_tuple(10, 5.4e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_DIFIT31_A] == false) && (boolState[required_OF_DIFIT31_A] && boolState[relevant_evt_OF_DIFIT31_A]))
	{
		//cout << "11 : xx10_OF_DIFIT31_A : FAULT failF  LABEL \"failure in operation DIFIT31_A\"  DIST EXP (1e-05)  INDUCING boolState[failF_OF_DIFIT31_A]  =  TRUE" << endl;
		list.push_back(make_tuple(11, 1e-05, "EXP", 0));
	}
	if ((boolState[failF_OF_DIFIT31_B] == false) && (boolState[required_OF_DIFIT31_B] && boolState[relevant_evt_OF_DIFIT31_B]))
	{
		//cout << "12 : xx10_OF_DIFIT31_B : FAULT failF  LABEL \"failure in operation DIFIT31_B\"  DIST EXP (1e-05)  INDUCING boolState[failF_OF_DIFIT31_B]  =  TRUE" << endl;
		list.push_back(make_tuple(12, 1e-05, "EXP", 0));
	}
	if ((boolState[failF_OF_DIFIT32_A] == false) && (boolState[required_OF_DIFIT32_A] && boolState[relevant_evt_OF_DIFIT32_A]))
	{
		//cout << "13 : xx10_OF_DIFIT32_A : FAULT failF  LABEL \"failure in operation DIFIT32_A\"  DIST EXP (1e-05)  INDUCING boolState[failF_OF_DIFIT32_A]  =  TRUE" << endl;
		list.push_back(make_tuple(13, 1e-05, "EXP", 0));
	}
	if ((boolState[failF_OF_DIFIT32_B] == false) && (boolState[required_OF_DIFIT32_B] && boolState[relevant_evt_OF_DIFIT32_B]))
	{
		//cout << "14 : xx10_OF_DIFIT32_B : FAULT failF  LABEL \"failure in operation DIFIT32_B\"  DIST EXP (1e-05)  INDUCING boolState[failF_OF_DIFIT32_B]  =  TRUE" << endl;
		list.push_back(make_tuple(14, 1e-05, "EXP", 0));
	}
	if ((boolState[failF_OF_DOSC_1_DCHS4_A] == false) && (boolState[required_OF_DOSC_1_DCHS4_A] && boolState[relevant_evt_OF_DOSC_1_DCHS4_A]))
	{
		//cout << "15 : xx10_OF_DOSC_1_DCHS4_A : FAULT failF  LABEL \"failure in operation DOSC_1_DCHS4_A\"  DIST EXP (7e-06)  INDUCING boolState[failF_OF_DOSC_1_DCHS4_A]  =  TRUE" << endl;
		list.push_back(make_tuple(15, 7e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_DOSC_1_DCHS4_B] == false) && (boolState[required_OF_DOSC_1_DCHS4_B] && boolState[relevant_evt_OF_DOSC_1_DCHS4_B]))
	{
		//cout << "16 : xx10_OF_DOSC_1_DCHS4_B : FAULT failF  LABEL \"failure in operation DOSC_1_DCHS4_B\"  DIST EXP (7e-06)  INDUCING boolState[failF_OF_DOSC_1_DCHS4_B]  =  TRUE" << endl;
		list.push_back(make_tuple(16, 7e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_DOSC_1_DCHS5_A] == false) && (boolState[required_OF_DOSC_1_DCHS5_A] && boolState[relevant_evt_OF_DOSC_1_DCHS5_A]))
	{
		//cout << "17 : xx10_OF_DOSC_1_DCHS5_A : FAULT failF  LABEL \"failure in operation DOSC_1_DCHS5_A\"  DIST EXP (7e-06)  INDUCING boolState[failF_OF_DOSC_1_DCHS5_A]  =  TRUE" << endl;
		list.push_back(make_tuple(17, 7e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_DOSC_1_DCHS5_B] == false) && (boolState[required_OF_DOSC_1_DCHS5_B] && boolState[relevant_evt_OF_DOSC_1_DCHS5_B]))
	{
		//cout << "18 : xx10_OF_DOSC_1_DCHS5_B : FAULT failF  LABEL \"failure in operation DOSC_1_DCHS5_B\"  DIST EXP (7e-06)  INDUCING boolState[failF_OF_DOSC_1_DCHS5_B]  =  TRUE" << endl;
		list.push_back(make_tuple(18, 7e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_DPBMB_P31_A] == false) && (boolState[required_OF_DPBMB_P31_A] && boolState[relevant_evt_OF_DPBMB_P31_A]))
	{
		//cout << "19 : xx10_OF_DPBMB_P31_A : FAULT failF  LABEL \"failure in operation DPBMB_P31_A\"  DIST EXP (4.9e-07)  INDUCING boolState[failF_OF_DPBMB_P31_A]  =  TRUE" << endl;
		list.push_back(make_tuple(19, 4.9e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_DPBMB_P31_B] == false) && (boolState[required_OF_DPBMB_P31_B] && boolState[relevant_evt_OF_DPBMB_P31_B]))
	{
		//cout << "20 : xx10_OF_DPBMB_P31_B : FAULT failF  LABEL \"failure in operation DPBMB_P31_B\"  DIST EXP (4.9e-07)  INDUCING boolState[failF_OF_DPBMB_P31_B]  =  TRUE" << endl;
		list.push_back(make_tuple(20, 4.9e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_DPBMB_P32_A] == false) && (boolState[required_OF_DPBMB_P32_A] && boolState[relevant_evt_OF_DPBMB_P32_A]))
	{
		//cout << "21 : xx10_OF_DPBMB_P32_A : FAULT failF  LABEL \"failure in operation DPBMB_P32_A\"  DIST EXP (4.9e-07)  INDUCING boolState[failF_OF_DPBMB_P32_A]  =  TRUE" << endl;
		list.push_back(make_tuple(21, 4.9e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_DPBMB_P32_B] == false) && (boolState[required_OF_DPBMB_P32_B] && boolState[relevant_evt_OF_DPBMB_P32_B]))
	{
		//cout << "22 : xx10_OF_DPBMB_P32_B : FAULT failF  LABEL \"failure in operation DPBMB_P32_B\"  DIST EXP (4.9e-07)  INDUCING boolState[failF_OF_DPBMB_P32_B]  =  TRUE" << endl;
		list.push_back(make_tuple(22, 4.9e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_HS_136F] == false) && (boolState[required_OF_HS_136F] && boolState[relevant_evt_OF_HS_136F]))
	{
		//cout << "23 : xx10_OF_HS_136F : FAULT failF  LABEL \"failure in operation HS_136F\"  DIST EXP (0.001)  INDUCING boolState[failF_OF_HS_136F]  =  TRUE" << endl;
		list.push_back(make_tuple(23, 0.001, "EXP", 0));
	}
	if ((boolState[failF_OF_HS_138F] == false) && (boolState[required_OF_HS_138F] && boolState[relevant_evt_OF_HS_138F]))
	{
		//cout << "24 : xx10_OF_HS_138F : FAULT failF  LABEL \"failure in operation HS_138F\"  DIST EXP (0.001)  INDUCING boolState[failF_OF_HS_138F]  =  TRUE" << endl;
		list.push_back(make_tuple(24, 0.001, "EXP", 0));
	}
	if ((boolState[failF_OF_HS_139F] == false) && (boolState[required_OF_HS_139F] && boolState[relevant_evt_OF_HS_139F]))
	{
		//cout << "25 : xx10_OF_HS_139F : FAULT failF  LABEL \"failure in operation HS_139F\"  DIST EXP (0.001)  INDUCING boolState[failF_OF_HS_139F]  =  TRUE" << endl;
		list.push_back(make_tuple(25, 0.001, "EXP", 0));
	}
	if ((boolState[failF_OF_ISOCTX31_A] == false) && (boolState[required_OF_ISOCTX31_A] && boolState[relevant_evt_OF_ISOCTX31_A]))
	{
		//cout << "26 : xx10_OF_ISOCTX31_A : FAULT failF  LABEL \"failure in operation ISOCTX31_A\"  DIST EXP (8.1e-06)  INDUCING boolState[failF_OF_ISOCTX31_A]  =  TRUE" << endl;
		list.push_back(make_tuple(26, 8.1e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_ISOCTX31_B] == false) && (boolState[required_OF_ISOCTX31_B] && boolState[relevant_evt_OF_ISOCTX31_B]))
	{
		//cout << "27 : xx10_OF_ISOCTX31_B : FAULT failF  LABEL \"failure in operation ISOCTX31_B\"  DIST EXP (8.1e-06)  INDUCING boolState[failF_OF_ISOCTX31_B]  =  TRUE" << endl;
		list.push_back(make_tuple(27, 8.1e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_ISOCTX32_A] == false) && (boolState[required_OF_ISOCTX32_A] && boolState[relevant_evt_OF_ISOCTX32_A]))
	{
		//cout << "28 : xx10_OF_ISOCTX32_A : FAULT failF  LABEL \"failure in operation ISOCTX32_A\"  DIST EXP (8.1e-06)  INDUCING boolState[failF_OF_ISOCTX32_A]  =  TRUE" << endl;
		list.push_back(make_tuple(28, 8.1e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_ISOCTX32_B] == false) && (boolState[required_OF_ISOCTX32_B] && boolState[relevant_evt_OF_ISOCTX32_B]))
	{
		//cout << "29 : xx10_OF_ISOCTX32_B : FAULT failF  LABEL \"failure in operation ISOCTX32_B\"  DIST EXP (8.1e-06)  INDUCING boolState[failF_OF_ISOCTX32_B]  =  TRUE" << endl;
		list.push_back(make_tuple(29, 8.1e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_MEM527_A] == false) && (boolState[required_OF_MEM527_A] && boolState[relevant_evt_OF_MEM527_A]))
	{
		//cout << "30 : xx10_OF_MEM527_A : FAULT failF  LABEL \"failure in operation MEM527_A\"  DIST EXP (3.9e-06)  INDUCING boolState[failF_OF_MEM527_A]  =  TRUE" << endl;
		list.push_back(make_tuple(30, 3.9e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_MEM527_B] == false) && (boolState[required_OF_MEM527_B] && boolState[relevant_evt_OF_MEM527_B]))
	{
		//cout << "31 : xx10_OF_MEM527_B : FAULT failF  LABEL \"failure in operation MEM527_B\"  DIST EXP (3.9e-06)  INDUCING boolState[failF_OF_MEM527_B]  =  TRUE" << endl;
		list.push_back(make_tuple(31, 3.9e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_OE] == false) && (boolState[required_OF_OE] && boolState[relevant_evt_OF_OE]))
	{
		//cout << "32 : xx10_OF_OE : FAULT failF  LABEL \"failure in operation OE\"  DIST EXP (0.1)  INDUCING boolState[failF_OF_OE]  =  TRUE" << endl;
		list.push_back(make_tuple(32, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_RLYS_1] == false) && (boolState[required_OF_RLYS_1] && boolState[relevant_evt_OF_RLYS_1]))
	{
		//cout << "33 : xx10_OF_RLYS_1 : FAULT failF  LABEL \"failure in operation RLYS_1\"  DIST EXP (0.00052)  INDUCING boolState[failF_OF_RLYS_1]  =  TRUE" << endl;
		list.push_back(make_tuple(33, 0.00052, "EXP", 0));
	}
	if ((boolState[failF_OF_RORB31_A] == false) && (boolState[required_OF_RORB31_A] && boolState[relevant_evt_OF_RORB31_A]))
	{
		//cout << "34 : xx10_OF_RORB31_A : FAULT failF  LABEL \"failure in operation RORB31_A\"  DIST EXP (2.9e-06)  INDUCING boolState[failF_OF_RORB31_A]  =  TRUE" << endl;
		list.push_back(make_tuple(34, 2.9e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_RORB31_B] == false) && (boolState[required_OF_RORB31_B] && boolState[relevant_evt_OF_RORB31_B]))
	{
		//cout << "35 : xx10_OF_RORB31_B : FAULT failF  LABEL \"failure in operation RORB31_B\"  DIST EXP (2.9e-06)  INDUCING boolState[failF_OF_RORB31_B]  =  TRUE" << endl;
		list.push_back(make_tuple(35, 2.9e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_RORB32_A] == false) && (boolState[required_OF_RORB32_A] && boolState[relevant_evt_OF_RORB32_A]))
	{
		//cout << "36 : xx10_OF_RORB32_A : FAULT failF  LABEL \"failure in operation RORB32_A\"  DIST EXP (2.9e-06)  INDUCING boolState[failF_OF_RORB32_A]  =  TRUE" << endl;
		list.push_back(make_tuple(36, 2.9e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_RORB32_B] == false) && (boolState[required_OF_RORB32_B] && boolState[relevant_evt_OF_RORB32_B]))
	{
		//cout << "37 : xx10_OF_RORB32_B : FAULT failF  LABEL \"failure in operation RORB32_B\"  DIST EXP (2.9e-06)  INDUCING boolState[failF_OF_RORB32_B]  =  TRUE" << endl;
		list.push_back(make_tuple(37, 2.9e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_SM_271_A] == false) && (boolState[required_OF_SM_271_A] && boolState[relevant_evt_OF_SM_271_A]))
	{
		//cout << "38 : xx10_OF_SM_271_A : FAULT failF  LABEL \"failure in operation SM_271_A\"  DIST EXP (4.4e-06)  INDUCING boolState[failF_OF_SM_271_A]  =  TRUE" << endl;
		list.push_back(make_tuple(38, 4.4e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_SM_271_B] == false) && (boolState[required_OF_SM_271_B] && boolState[relevant_evt_OF_SM_271_B]))
	{
		//cout << "39 : xx10_OF_SM_271_B : FAULT failF  LABEL \"failure in operation SM_271_B\"  DIST EXP (4.4e-06)  INDUCING boolState[failF_OF_SM_271_B]  =  TRUE" << endl;
		list.push_back(make_tuple(39, 4.4e-06, "EXP", 0));
	}
	return list;
}


void storm::figaro::FigaroProgram_DuelProcessorReactorRegulation_Trim_article_No_repair::runOnceInteractionStep_initialization()
{
	if (boolState[failF_OF_ADA27_A] == true )
	{
		boolState[S_OF_ADA27_A]  =  true;
	}

	if (boolState[failF_OF_ADA27_B] == true )
	{
		boolState[S_OF_ADA27_B]  =  true;
	}

	if (boolState[failF_OF_ANAMB_P16_A] == true )
	{
		boolState[S_OF_ANAMB_P16_A]  =  true;
	}

	if (boolState[failF_OF_ANAMB_P16_B] == true )
	{
		boolState[S_OF_ANAMB_P16_B]  =  true;
	}

	if (boolState[failF_OF_ANAMB_P17_A] == true )
	{
		boolState[S_OF_ANAMB_P17_A]  =  true;
	}

	if (boolState[failF_OF_ANAMB_P17_B] == true )
	{
		boolState[S_OF_ANAMB_P17_B]  =  true;
	}

	if (boolState[failF_OF_CPU86_102_A] == true )
	{
		boolState[S_OF_CPU86_102_A]  =  true;
	}

	if (boolState[failF_OF_CPU86_102_B] == true )
	{
		boolState[S_OF_CPU86_102_B]  =  true;
	}

	if (boolState[failF_OF_CPU86_105_A] == true )
	{
		boolState[S_OF_CPU86_105_A]  =  true;
	}

	if (boolState[failF_OF_CPU86_105_B] == true )
	{
		boolState[S_OF_CPU86_105_B]  =  true;
	}

	if (boolState[failF_OF_CTU] == true )
	{
		boolState[S_OF_CTU]  =  true;
	}

	if (boolState[failF_OF_DIFIT31_A] == true )
	{
		boolState[S_OF_DIFIT31_A]  =  true;
	}

	if (boolState[failF_OF_DIFIT31_B] == true )
	{
		boolState[S_OF_DIFIT31_B]  =  true;
	}

	if (boolState[failF_OF_DIFIT32_A] == true )
	{
		boolState[S_OF_DIFIT32_A]  =  true;
	}

	if (boolState[failF_OF_DIFIT32_B] == true )
	{
		boolState[S_OF_DIFIT32_B]  =  true;
	}

	if (boolState[failF_OF_DOSC_1_DCHS4_A] == true )
	{
		boolState[S_OF_DOSC_1_DCHS4_A]  =  true;
	}

	if (boolState[failF_OF_DOSC_1_DCHS4_B] == true )
	{
		boolState[S_OF_DOSC_1_DCHS4_B]  =  true;
	}

	if (boolState[failF_OF_DOSC_1_DCHS5_A] == true )
	{
		boolState[S_OF_DOSC_1_DCHS5_A]  =  true;
	}

	if (boolState[failF_OF_DOSC_1_DCHS5_B] == true )
	{
		boolState[S_OF_DOSC_1_DCHS5_B]  =  true;
	}

	if (boolState[failF_OF_DPBMB_P31_A] == true )
	{
		boolState[S_OF_DPBMB_P31_A]  =  true;
	}

	if (boolState[failF_OF_DPBMB_P31_B] == true )
	{
		boolState[S_OF_DPBMB_P31_B]  =  true;
	}

	if (boolState[failF_OF_DPBMB_P32_A] == true )
	{
		boolState[S_OF_DPBMB_P32_A]  =  true;
	}

	if (boolState[failF_OF_DPBMB_P32_B] == true )
	{
		boolState[S_OF_DPBMB_P32_B]  =  true;
	}

	if (boolState[failF_OF_HS_136F] == true )
	{
		boolState[S_OF_HS_136F]  =  true;
	}

	if (boolState[failF_OF_HS_138F] == true )
	{
		boolState[S_OF_HS_138F]  =  true;
	}

	if (boolState[failF_OF_HS_139F] == true )
	{
		boolState[S_OF_HS_139F]  =  true;
	}

	if (boolState[failF_OF_ISOCTX31_A] == true )
	{
		boolState[S_OF_ISOCTX31_A]  =  true;
	}

	if (boolState[failF_OF_ISOCTX31_B] == true )
	{
		boolState[S_OF_ISOCTX31_B]  =  true;
	}

	if (boolState[failF_OF_ISOCTX32_A] == true )
	{
		boolState[S_OF_ISOCTX32_A]  =  true;
	}

	if (boolState[failF_OF_ISOCTX32_B] == true )
	{
		boolState[S_OF_ISOCTX32_B]  =  true;
	}

	if (boolState[failF_OF_MEM527_A] == true )
	{
		boolState[S_OF_MEM527_A]  =  true;
	}

	if (boolState[failF_OF_MEM527_B] == true )
	{
		boolState[S_OF_MEM527_B]  =  true;
	}

	if (boolState[failF_OF_OE] == true )
	{
		boolState[S_OF_OE]  =  true;
	}

	if (boolState[failF_OF_RLYS_1] == true )
	{
		boolState[S_OF_RLYS_1]  =  true;
	}

	if (boolState[failF_OF_RORB31_A] == true )
	{
		boolState[S_OF_RORB31_A]  =  true;
	}

	if (boolState[failF_OF_RORB31_B] == true )
	{
		boolState[S_OF_RORB31_B]  =  true;
	}

	if (boolState[failF_OF_RORB32_A] == true )
	{
		boolState[S_OF_RORB32_A]  =  true;
	}

	if (boolState[failF_OF_RORB32_B] == true )
	{
		boolState[S_OF_RORB32_B]  =  true;
	}

	if (boolState[failF_OF_SM_271_A] == true )
	{
		boolState[S_OF_SM_271_A]  =  true;
	}

	if (boolState[failF_OF_SM_271_B] == true )
	{
		boolState[S_OF_SM_271_B]  =  true;
	}

}


void storm::figaro::FigaroProgram_DuelProcessorReactorRegulation_Trim_article_No_repair::runOnceInteractionStep_propagate_effect_S()
{
	if (boolState[S_OF_CPU86_102_A] || boolState[S_OF_CPU86_105_A] )
	{
		boolState[S_OF_PROC_GATE_A]  =  true;
	}

	if (boolState[S_OF_CPU86_102_B] || boolState[S_OF_CPU86_105_B] )
	{
		boolState[S_OF_PROC_GATE_B]  =  true;
	}

	if ((boolState[S_OF_Loss_Of_Control_With_A] || boolState[S_OF_Loss_Of_Control_With_B]) || boolState[S_OF_A_B_Failure_Together] )
	{
		boolState[S_OF_RRS_Failure]  =  true;
	}

	if (boolState[S_OF_RRS_Failure] )
	{
		boolState[S_OF_UE_1]  =  true;
	}

	if (((boolState[S_OF_System_A_Failure] && boolState[S_OF_Loss_Of_Control_in_Auto_Mode]) && boolState[already_S_OF_Loss_Of_Control_in_Auto_Mode]) && ( !boolState[already_S_OF_System_A_Failure]) )
	{
		boolState[S_OF_Auto_Switching_Failure_A]  =  true;
	}

	if (boolState[already_S_OF_Auto_Switching_Failure_A] && (boolState[S_OF_Loss_Of_Control_in_Auto_Mode] && boolState[S_OF_System_A_Failure]) )
	{
		boolState[S_OF_Auto_Switching_Failure_A]  =  true;
	}

	if (((boolState[S_OF_System_B_Failure] && boolState[S_OF_Loss_Of_Control_in_Auto_Mode]) && boolState[already_S_OF_Loss_Of_Control_in_Auto_Mode]) && ( !boolState[already_S_OF_System_B_Failure]) )
	{
		boolState[S_OF_Auto_Switching_Failure_B]  =  true;
	}

	if (boolState[already_S_OF_Auto_Switching_Failure_B] && (boolState[S_OF_Loss_Of_Control_in_Auto_Mode] && boolState[S_OF_System_B_Failure]) )
	{
		boolState[S_OF_Auto_Switching_Failure_B]  =  true;
	}

	if (boolState[S_OF_CTU] || boolState[S_OF_RLYS_1] )
	{
		boolState[S_OF_Loss_Of_Control_in_Auto_Mode]  =  true;
	}

	if (boolState[S_OF_Auto_Switching_Failure_A] && boolState[S_OF_Hand_Switch_Failure] )
	{
		boolState[S_OF_Loss_Of_Control_With_A]  =  true;
	}

	if (boolState[S_OF_Auto_Switching_Failure_B] && boolState[S_OF_Hand_Switch_Failure] )
	{
		boolState[S_OF_Loss_Of_Control_With_B]  =  true;
	}

	if (boolState[S_OF_Auto_Switching_Failure_A] && boolState[S_OF_Auto_Switching_Failure_B] )
	{
		boolState[S_OF_dummy]  =  true;
	}

	if (boolState[S_OF_System_A_Failure] && boolState[S_OF_System_B_Failure] )
	{
		boolState[S_OF_A_B_Failure_Together]  =  true;
	}

	if (((boolState[S_OF_HS_136F] || boolState[S_OF_HS_138F]) || boolState[S_OF_HS_139F]) || boolState[S_OF_OE] )
	{
		boolState[S_OF_Hand_Switch_Failure]  =  true;
	}

	if (((((((((((((((boolState[S_OF_ADA27_A] || boolState[S_OF_ANAMB_P16_A]) || boolState[S_OF_ANAMB_P17_A]) || boolState[S_OF_DIFIT31_A]) || boolState[S_OF_DIFIT32_A]) || boolState[S_OF_DOSC_1_DCHS4_A]) || boolState[S_OF_DOSC_1_DCHS5_A]) || boolState[S_OF_DPBMB_P31_A]) || boolState[S_OF_DPBMB_P32_A]) || boolState[S_OF_ISOCTX31_A]) || boolState[S_OF_ISOCTX32_A]) || boolState[S_OF_MEM527_A]) || boolState[S_OF_PROC_GATE_A]) || boolState[S_OF_RORB31_A]) || boolState[S_OF_RORB32_A]) || boolState[S_OF_SM_271_A] )
	{
		boolState[S_OF_System_A_Failure]  =  true;
	}

	if (((((((((((((((boolState[S_OF_ADA27_B] || boolState[S_OF_ANAMB_P16_B]) || boolState[S_OF_ANAMB_P17_B]) || boolState[S_OF_DIFIT31_B]) || boolState[S_OF_DIFIT32_B]) || boolState[S_OF_DOSC_1_DCHS4_B]) || boolState[S_OF_DOSC_1_DCHS5_B]) || boolState[S_OF_DPBMB_P31_B]) || boolState[S_OF_DPBMB_P32_B]) || boolState[S_OF_ISOCTX31_B]) || boolState[S_OF_ISOCTX32_B]) || boolState[S_OF_MEM527_B]) || boolState[S_OF_PROC_GATE_B]) || boolState[S_OF_RORB31_B]) || boolState[S_OF_RORB32_B]) || boolState[S_OF_SM_271_B] )
	{
		boolState[S_OF_System_B_Failure]  =  true;
	}

}


void storm::figaro::FigaroProgram_DuelProcessorReactorRegulation_Trim_article_No_repair::runOnceInteractionStep_propagate_effect_required()
{
	if ( !boolState[required_OF_System_A_Failure] )
	{
		boolState[required_OF_ADA27_A]  =  false;
	}

	if (boolState[relevant_evt_OF_System_A_Failure] && ( !boolState[S_OF_System_A_Failure]) )
	{
		boolState[relevant_evt_OF_ADA27_A]  =  true;
	}

	if ( !boolState[required_OF_System_B_Failure] )
	{
		boolState[required_OF_ADA27_B]  =  false;
	}

	if (boolState[relevant_evt_OF_System_B_Failure] && ( !boolState[S_OF_System_B_Failure]) )
	{
		boolState[relevant_evt_OF_ADA27_B]  =  true;
	}

	if ( !boolState[required_OF_System_A_Failure] )
	{
		boolState[required_OF_ANAMB_P16_A]  =  false;
	}

	if (boolState[relevant_evt_OF_System_A_Failure] && ( !boolState[S_OF_System_A_Failure]) )
	{
		boolState[relevant_evt_OF_ANAMB_P16_A]  =  true;
	}

	if ( !boolState[required_OF_System_B_Failure] )
	{
		boolState[required_OF_ANAMB_P16_B]  =  false;
	}

	if (boolState[relevant_evt_OF_System_B_Failure] && ( !boolState[S_OF_System_B_Failure]) )
	{
		boolState[relevant_evt_OF_ANAMB_P16_B]  =  true;
	}

	if ( !boolState[required_OF_System_A_Failure] )
	{
		boolState[required_OF_ANAMB_P17_A]  =  false;
	}

	if (boolState[relevant_evt_OF_System_A_Failure] && ( !boolState[S_OF_System_A_Failure]) )
	{
		boolState[relevant_evt_OF_ANAMB_P17_A]  =  true;
	}

	if ( !boolState[required_OF_System_B_Failure] )
	{
		boolState[required_OF_ANAMB_P17_B]  =  false;
	}

	if (boolState[relevant_evt_OF_System_B_Failure] && ( !boolState[S_OF_System_B_Failure]) )
	{
		boolState[relevant_evt_OF_ANAMB_P17_B]  =  true;
	}

	if ( !boolState[required_OF_PROC_GATE_A] )
	{
		boolState[required_OF_CPU86_102_A]  =  false;
	}

	if (boolState[relevant_evt_OF_PROC_GATE_A] && ( !boolState[S_OF_PROC_GATE_A]) )
	{
		boolState[relevant_evt_OF_CPU86_102_A]  =  true;
	}

	if ( !boolState[required_OF_PROC_GATE_B] )
	{
		boolState[required_OF_CPU86_102_B]  =  false;
	}

	if (boolState[relevant_evt_OF_PROC_GATE_B] && ( !boolState[S_OF_PROC_GATE_B]) )
	{
		boolState[relevant_evt_OF_CPU86_102_B]  =  true;
	}

	if ( !boolState[required_OF_PROC_GATE_A] )
	{
		boolState[required_OF_CPU86_105_A]  =  false;
	}

	if (boolState[relevant_evt_OF_PROC_GATE_A] && ( !boolState[S_OF_PROC_GATE_A]) )
	{
		boolState[relevant_evt_OF_CPU86_105_A]  =  true;
	}

	if ( !boolState[required_OF_PROC_GATE_B] )
	{
		boolState[required_OF_CPU86_105_B]  =  false;
	}

	if (boolState[relevant_evt_OF_PROC_GATE_B] && ( !boolState[S_OF_PROC_GATE_B]) )
	{
		boolState[relevant_evt_OF_CPU86_105_B]  =  true;
	}

	if ( !boolState[required_OF_Loss_Of_Control_in_Auto_Mode] )
	{
		boolState[required_OF_CTU]  =  false;
	}

	if (boolState[relevant_evt_OF_Loss_Of_Control_in_Auto_Mode] && ( !boolState[S_OF_Loss_Of_Control_in_Auto_Mode]) )
	{
		boolState[relevant_evt_OF_CTU]  =  true;
	}

	if ( !boolState[required_OF_System_A_Failure] )
	{
		boolState[required_OF_DIFIT31_A]  =  false;
	}

	if (boolState[relevant_evt_OF_System_A_Failure] && ( !boolState[S_OF_System_A_Failure]) )
	{
		boolState[relevant_evt_OF_DIFIT31_A]  =  true;
	}

	if ( !boolState[required_OF_System_B_Failure] )
	{
		boolState[required_OF_DIFIT31_B]  =  false;
	}

	if (boolState[relevant_evt_OF_System_B_Failure] && ( !boolState[S_OF_System_B_Failure]) )
	{
		boolState[relevant_evt_OF_DIFIT31_B]  =  true;
	}

	if ( !boolState[required_OF_System_A_Failure] )
	{
		boolState[required_OF_DIFIT32_A]  =  false;
	}

	if (boolState[relevant_evt_OF_System_A_Failure] && ( !boolState[S_OF_System_A_Failure]) )
	{
		boolState[relevant_evt_OF_DIFIT32_A]  =  true;
	}

	if ( !boolState[required_OF_System_B_Failure] )
	{
		boolState[required_OF_DIFIT32_B]  =  false;
	}

	if (boolState[relevant_evt_OF_System_B_Failure] && ( !boolState[S_OF_System_B_Failure]) )
	{
		boolState[relevant_evt_OF_DIFIT32_B]  =  true;
	}

	if ( !boolState[required_OF_System_A_Failure] )
	{
		boolState[required_OF_DOSC_1_DCHS4_A]  =  false;
	}

	if (boolState[relevant_evt_OF_System_A_Failure] && ( !boolState[S_OF_System_A_Failure]) )
	{
		boolState[relevant_evt_OF_DOSC_1_DCHS4_A]  =  true;
	}

	if ( !boolState[required_OF_System_B_Failure] )
	{
		boolState[required_OF_DOSC_1_DCHS4_B]  =  false;
	}

	if (boolState[relevant_evt_OF_System_B_Failure] && ( !boolState[S_OF_System_B_Failure]) )
	{
		boolState[relevant_evt_OF_DOSC_1_DCHS4_B]  =  true;
	}

	if ( !boolState[required_OF_System_A_Failure] )
	{
		boolState[required_OF_DOSC_1_DCHS5_A]  =  false;
	}

	if (boolState[relevant_evt_OF_System_A_Failure] && ( !boolState[S_OF_System_A_Failure]) )
	{
		boolState[relevant_evt_OF_DOSC_1_DCHS5_A]  =  true;
	}

	if ( !boolState[required_OF_System_B_Failure] )
	{
		boolState[required_OF_DOSC_1_DCHS5_B]  =  false;
	}

	if (boolState[relevant_evt_OF_System_B_Failure] && ( !boolState[S_OF_System_B_Failure]) )
	{
		boolState[relevant_evt_OF_DOSC_1_DCHS5_B]  =  true;
	}

	if ( !boolState[required_OF_System_A_Failure] )
	{
		boolState[required_OF_DPBMB_P31_A]  =  false;
	}

	if (boolState[relevant_evt_OF_System_A_Failure] && ( !boolState[S_OF_System_A_Failure]) )
	{
		boolState[relevant_evt_OF_DPBMB_P31_A]  =  true;
	}

	if ( !boolState[required_OF_System_B_Failure] )
	{
		boolState[required_OF_DPBMB_P31_B]  =  false;
	}

	if (boolState[relevant_evt_OF_System_B_Failure] && ( !boolState[S_OF_System_B_Failure]) )
	{
		boolState[relevant_evt_OF_DPBMB_P31_B]  =  true;
	}

	if ( !boolState[required_OF_System_A_Failure] )
	{
		boolState[required_OF_DPBMB_P32_A]  =  false;
	}

	if (boolState[relevant_evt_OF_System_A_Failure] && ( !boolState[S_OF_System_A_Failure]) )
	{
		boolState[relevant_evt_OF_DPBMB_P32_A]  =  true;
	}

	if ( !boolState[required_OF_System_B_Failure] )
	{
		boolState[required_OF_DPBMB_P32_B]  =  false;
	}

	if (boolState[relevant_evt_OF_System_B_Failure] && ( !boolState[S_OF_System_B_Failure]) )
	{
		boolState[relevant_evt_OF_DPBMB_P32_B]  =  true;
	}

	if ( !boolState[required_OF_Hand_Switch_Failure] )
	{
		boolState[required_OF_HS_136F]  =  false;
	}

	if (boolState[relevant_evt_OF_Hand_Switch_Failure] && ( !boolState[S_OF_Hand_Switch_Failure]) )
	{
		boolState[relevant_evt_OF_HS_136F]  =  true;
	}

	if ( !boolState[required_OF_Hand_Switch_Failure] )
	{
		boolState[required_OF_HS_138F]  =  false;
	}

	if (boolState[relevant_evt_OF_Hand_Switch_Failure] && ( !boolState[S_OF_Hand_Switch_Failure]) )
	{
		boolState[relevant_evt_OF_HS_138F]  =  true;
	}

	if ( !boolState[required_OF_Hand_Switch_Failure] )
	{
		boolState[required_OF_HS_139F]  =  false;
	}

	if (boolState[relevant_evt_OF_Hand_Switch_Failure] && ( !boolState[S_OF_Hand_Switch_Failure]) )
	{
		boolState[relevant_evt_OF_HS_139F]  =  true;
	}

	if ( !boolState[required_OF_System_A_Failure] )
	{
		boolState[required_OF_ISOCTX31_A]  =  false;
	}

	if (boolState[relevant_evt_OF_System_A_Failure] && ( !boolState[S_OF_System_A_Failure]) )
	{
		boolState[relevant_evt_OF_ISOCTX31_A]  =  true;
	}

	if ( !boolState[required_OF_System_B_Failure] )
	{
		boolState[required_OF_ISOCTX31_B]  =  false;
	}

	if (boolState[relevant_evt_OF_System_B_Failure] && ( !boolState[S_OF_System_B_Failure]) )
	{
		boolState[relevant_evt_OF_ISOCTX31_B]  =  true;
	}

	if ( !boolState[required_OF_System_A_Failure] )
	{
		boolState[required_OF_ISOCTX32_A]  =  false;
	}

	if (boolState[relevant_evt_OF_System_A_Failure] && ( !boolState[S_OF_System_A_Failure]) )
	{
		boolState[relevant_evt_OF_ISOCTX32_A]  =  true;
	}

	if ( !boolState[required_OF_System_B_Failure] )
	{
		boolState[required_OF_ISOCTX32_B]  =  false;
	}

	if (boolState[relevant_evt_OF_System_B_Failure] && ( !boolState[S_OF_System_B_Failure]) )
	{
		boolState[relevant_evt_OF_ISOCTX32_B]  =  true;
	}

	if ( !boolState[required_OF_System_A_Failure] )
	{
		boolState[required_OF_MEM527_A]  =  false;
	}

	if (boolState[relevant_evt_OF_System_A_Failure] && ( !boolState[S_OF_System_A_Failure]) )
	{
		boolState[relevant_evt_OF_MEM527_A]  =  true;
	}

	if ( !boolState[required_OF_System_B_Failure] )
	{
		boolState[required_OF_MEM527_B]  =  false;
	}

	if (boolState[relevant_evt_OF_System_B_Failure] && ( !boolState[S_OF_System_B_Failure]) )
	{
		boolState[relevant_evt_OF_MEM527_B]  =  true;
	}

	if ( !boolState[required_OF_Hand_Switch_Failure] )
	{
		boolState[required_OF_OE]  =  false;
	}

	if (boolState[relevant_evt_OF_Hand_Switch_Failure] && ( !boolState[S_OF_Hand_Switch_Failure]) )
	{
		boolState[relevant_evt_OF_OE]  =  true;
	}

	if ( !boolState[required_OF_System_A_Failure] )
	{
		boolState[required_OF_PROC_GATE_A]  =  false;
	}

	if (boolState[relevant_evt_OF_System_A_Failure] && ( !boolState[S_OF_System_A_Failure]) )
	{
		boolState[relevant_evt_OF_PROC_GATE_A]  =  true;
	}

	if ( !boolState[required_OF_System_B_Failure] )
	{
		boolState[required_OF_PROC_GATE_B]  =  false;
	}

	if (boolState[relevant_evt_OF_System_B_Failure] && ( !boolState[S_OF_System_B_Failure]) )
	{
		boolState[relevant_evt_OF_PROC_GATE_B]  =  true;
	}

	if ( !boolState[required_OF_Loss_Of_Control_in_Auto_Mode] )
	{
		boolState[required_OF_RLYS_1]  =  false;
	}

	if (boolState[relevant_evt_OF_Loss_Of_Control_in_Auto_Mode] && ( !boolState[S_OF_Loss_Of_Control_in_Auto_Mode]) )
	{
		boolState[relevant_evt_OF_RLYS_1]  =  true;
	}

	if ( !boolState[required_OF_System_A_Failure] )
	{
		boolState[required_OF_RORB31_A]  =  false;
	}

	if (boolState[relevant_evt_OF_System_A_Failure] && ( !boolState[S_OF_System_A_Failure]) )
	{
		boolState[relevant_evt_OF_RORB31_A]  =  true;
	}

	if ( !boolState[required_OF_System_B_Failure] )
	{
		boolState[required_OF_RORB31_B]  =  false;
	}

	if (boolState[relevant_evt_OF_System_B_Failure] && ( !boolState[S_OF_System_B_Failure]) )
	{
		boolState[relevant_evt_OF_RORB31_B]  =  true;
	}

	if ( !boolState[required_OF_System_A_Failure] )
	{
		boolState[required_OF_RORB32_A]  =  false;
	}

	if (boolState[relevant_evt_OF_System_A_Failure] && ( !boolState[S_OF_System_A_Failure]) )
	{
		boolState[relevant_evt_OF_RORB32_A]  =  true;
	}

	if ( !boolState[required_OF_System_B_Failure] )
	{
		boolState[required_OF_RORB32_B]  =  false;
	}

	if (boolState[relevant_evt_OF_System_B_Failure] && ( !boolState[S_OF_System_B_Failure]) )
	{
		boolState[relevant_evt_OF_RORB32_B]  =  true;
	}

	if ( !boolState[required_OF_System_A_Failure] )
	{
		boolState[required_OF_SM_271_A]  =  false;
	}

	if (boolState[relevant_evt_OF_System_A_Failure] && ( !boolState[S_OF_System_A_Failure]) )
	{
		boolState[relevant_evt_OF_SM_271_A]  =  true;
	}

	if ( !boolState[required_OF_System_B_Failure] )
	{
		boolState[required_OF_SM_271_B]  =  false;
	}

	if (boolState[relevant_evt_OF_System_B_Failure] && ( !boolState[S_OF_System_B_Failure]) )
	{
		boolState[relevant_evt_OF_SM_271_B]  =  true;
	}

	if ( !boolState[required_OF_UE_1] )
	{
		boolState[required_OF_RRS_Failure]  =  false;
	}

	if (boolState[relevant_evt_OF_UE_1] && ( !boolState[S_OF_UE_1]) )
	{
		boolState[relevant_evt_OF_RRS_Failure]  =  true;
	}



	boolState[relevant_evt_OF_UE_1]  =  true  ;

	if (( !boolState[required_OF_Loss_Of_Control_With_A]) && ( !boolState[required_OF_dummy]) )
	{
		boolState[required_OF_Auto_Switching_Failure_A]  =  false;
	}

	if ((boolState[relevant_evt_OF_Loss_Of_Control_With_A] && ( !boolState[S_OF_Loss_Of_Control_With_A])) || (boolState[relevant_evt_OF_dummy] && ( !  boolState[S_OF_dummy])) )
	{
		boolState[relevant_evt_OF_Auto_Switching_Failure_A]  =  true;
	}

	if (( !boolState[required_OF_Loss_Of_Control_With_B]) && ( !boolState[required_OF_dummy]) )
	{
		boolState[required_OF_Auto_Switching_Failure_B]  =  false;
	}

	if ((boolState[relevant_evt_OF_Loss_Of_Control_With_B] && ( !boolState[S_OF_Loss_Of_Control_With_B])) || (boolState[relevant_evt_OF_dummy] && ( !  boolState[S_OF_dummy])) )
	{
		boolState[relevant_evt_OF_Auto_Switching_Failure_B]  =  true;
	}

	if (( !boolState[required_OF_Auto_Switching_Failure_A]) && ( !boolState[required_OF_Auto_Switching_Failure_B]) )
	{
		boolState[required_OF_Loss_Of_Control_in_Auto_Mode]  =  false;
	}

	if ((boolState[relevant_evt_OF_Auto_Switching_Failure_A] && ( !boolState[S_OF_Auto_Switching_Failure_A])) || (boolState[relevant_evt_OF_Auto_Switching_Failure_B] && ( !boolState[S_OF_Auto_Switching_Failure_B])) )
	{
		boolState[relevant_evt_OF_Loss_Of_Control_in_Auto_Mode]  =  true;
	}

	if ( !boolState[required_OF_RRS_Failure] )
	{
		boolState[required_OF_Loss_Of_Control_With_A]  =  false;
	}

	if (boolState[relevant_evt_OF_RRS_Failure] && ( !boolState[S_OF_RRS_Failure]) )
	{
		boolState[relevant_evt_OF_Loss_Of_Control_With_A]  =  true;
	}

	if ( !boolState[required_OF_RRS_Failure] )
	{
		boolState[required_OF_Loss_Of_Control_With_B]  =  false;
	}

	if (boolState[relevant_evt_OF_RRS_Failure] && ( !boolState[S_OF_RRS_Failure]) )
	{
		boolState[relevant_evt_OF_Loss_Of_Control_With_B]  =  true;
	}

	if ( !boolState[S_OF_Hand_Switch_Failure] )
	{
		boolState[relevant_evt_OF_dummy]  =  true;
	}

	if ( !boolState[required_OF_RRS_Failure] )
	{
		boolState[required_OF_A_B_Failure_Together]  =  false;
	}

	if (boolState[relevant_evt_OF_RRS_Failure] && ( !boolState[S_OF_RRS_Failure]) )
	{
		boolState[relevant_evt_OF_A_B_Failure_Together]  =  true;
	}

	if ((( !boolState[required_OF_Loss_Of_Control_With_A]) && ( !boolState[required_OF_Loss_Of_Control_With_B])) || ( !boolState[S_OF_dummy]) )
	{
		boolState[required_OF_Hand_Switch_Failure]  =  false;
	}

	if ((boolState[relevant_evt_OF_Loss_Of_Control_With_A] && ( !boolState[S_OF_Loss_Of_Control_With_A])) || (boolState[relevant_evt_OF_Loss_Of_Control_With_B] && ( !boolState[S_OF_Loss_Of_Control_With_B])) )
	{
		boolState[relevant_evt_OF_Hand_Switch_Failure]  =  true;
	}

	if (( !boolState[required_OF_Auto_Switching_Failure_A]) && ( !boolState[required_OF_A_B_Failure_Together]) )
	{
		boolState[required_OF_System_A_Failure]  =  false;
	}

	if ((boolState[relevant_evt_OF_Auto_Switching_Failure_A] && ( !boolState[S_OF_Auto_Switching_Failure_A])) || (boolState[relevant_evt_OF_A_B_Failure_Together] && ( !boolState[S_OF_A_B_Failure_Together])) )
	{
		boolState[relevant_evt_OF_System_A_Failure]  =  true;
	}

	if (( !boolState[required_OF_Auto_Switching_Failure_B]) && ( !boolState[required_OF_A_B_Failure_Together]) )
	{
		boolState[required_OF_System_B_Failure]  =  false;
	}

	if ((boolState[relevant_evt_OF_Auto_Switching_Failure_B] && ( !boolState[S_OF_Auto_Switching_Failure_B])) || (boolState[relevant_evt_OF_A_B_Failure_Together] && ( !boolState[S_OF_A_B_Failure_Together])) )
	{
		boolState[relevant_evt_OF_System_B_Failure]  =  true;
	}

}


void storm::figaro::FigaroProgram_DuelProcessorReactorRegulation_Trim_article_No_repair::runOnceInteractionStep_propagate_leaves()
{


	boolState[already_S_OF_ADA27_A]  =  boolState[S_OF_ADA27_A]  ;



	boolState[already_S_OF_ADA27_B]  =  boolState[S_OF_ADA27_B]  ;



	boolState[already_S_OF_ANAMB_P16_A]  =  boolState[S_OF_ANAMB_P16_A]  ;



	boolState[already_S_OF_ANAMB_P16_B]  =  boolState[S_OF_ANAMB_P16_B]  ;



	boolState[already_S_OF_ANAMB_P17_A]  =  boolState[S_OF_ANAMB_P17_A]  ;



	boolState[already_S_OF_ANAMB_P17_B]  =  boolState[S_OF_ANAMB_P17_B]  ;



	boolState[already_S_OF_CPU86_102_A]  =  boolState[S_OF_CPU86_102_A]  ;



	boolState[already_S_OF_CPU86_102_B]  =  boolState[S_OF_CPU86_102_B]  ;



	boolState[already_S_OF_CPU86_105_A]  =  boolState[S_OF_CPU86_105_A]  ;



	boolState[already_S_OF_CPU86_105_B]  =  boolState[S_OF_CPU86_105_B]  ;



	boolState[already_S_OF_CTU]  =  boolState[S_OF_CTU]  ;



	boolState[already_S_OF_DIFIT31_A]  =  boolState[S_OF_DIFIT31_A]  ;



	boolState[already_S_OF_DIFIT31_B]  =  boolState[S_OF_DIFIT31_B]  ;



	boolState[already_S_OF_DIFIT32_A]  =  boolState[S_OF_DIFIT32_A]  ;



	boolState[already_S_OF_DIFIT32_B]  =  boolState[S_OF_DIFIT32_B]  ;



	boolState[already_S_OF_DOSC_1_DCHS4_A]  =  boolState[S_OF_DOSC_1_DCHS4_A]  ;



	boolState[already_S_OF_DOSC_1_DCHS4_B]  =  boolState[S_OF_DOSC_1_DCHS4_B]  ;



	boolState[already_S_OF_DOSC_1_DCHS5_A]  =  boolState[S_OF_DOSC_1_DCHS5_A]  ;



	boolState[already_S_OF_DOSC_1_DCHS5_B]  =  boolState[S_OF_DOSC_1_DCHS5_B]  ;



	boolState[already_S_OF_DPBMB_P31_A]  =  boolState[S_OF_DPBMB_P31_A]  ;



	boolState[already_S_OF_DPBMB_P31_B]  =  boolState[S_OF_DPBMB_P31_B]  ;



	boolState[already_S_OF_DPBMB_P32_A]  =  boolState[S_OF_DPBMB_P32_A]  ;



	boolState[already_S_OF_DPBMB_P32_B]  =  boolState[S_OF_DPBMB_P32_B]  ;



	boolState[already_S_OF_HS_136F]  =  boolState[S_OF_HS_136F]  ;



	boolState[already_S_OF_HS_138F]  =  boolState[S_OF_HS_138F]  ;



	boolState[already_S_OF_HS_139F]  =  boolState[S_OF_HS_139F]  ;



	boolState[already_S_OF_ISOCTX31_A]  =  boolState[S_OF_ISOCTX31_A]  ;



	boolState[already_S_OF_ISOCTX31_B]  =  boolState[S_OF_ISOCTX31_B]  ;



	boolState[already_S_OF_ISOCTX32_A]  =  boolState[S_OF_ISOCTX32_A]  ;



	boolState[already_S_OF_ISOCTX32_B]  =  boolState[S_OF_ISOCTX32_B]  ;



	boolState[already_S_OF_MEM527_A]  =  boolState[S_OF_MEM527_A]  ;



	boolState[already_S_OF_MEM527_B]  =  boolState[S_OF_MEM527_B]  ;



	boolState[already_S_OF_OE]  =  boolState[S_OF_OE]  ;



	boolState[already_S_OF_PROC_GATE_A]  =  boolState[S_OF_PROC_GATE_A]  ;



	boolState[already_S_OF_PROC_GATE_B]  =  boolState[S_OF_PROC_GATE_B]  ;



	boolState[already_S_OF_RLYS_1]  =  boolState[S_OF_RLYS_1]  ;



	boolState[already_S_OF_RORB31_A]  =  boolState[S_OF_RORB31_A]  ;



	boolState[already_S_OF_RORB31_B]  =  boolState[S_OF_RORB31_B]  ;



	boolState[already_S_OF_RORB32_A]  =  boolState[S_OF_RORB32_A]  ;



	boolState[already_S_OF_RORB32_B]  =  boolState[S_OF_RORB32_B]  ;



	boolState[already_S_OF_SM_271_A]  =  boolState[S_OF_SM_271_A]  ;



	boolState[already_S_OF_SM_271_B]  =  boolState[S_OF_SM_271_B]  ;



	boolState[already_S_OF_RRS_Failure]  =  boolState[S_OF_RRS_Failure]  ;



	boolState[already_S_OF_UE_1]  =  boolState[S_OF_UE_1]  ;



	boolState[already_S_OF_Auto_Switching_Failure_A]  =  boolState[S_OF_Auto_Switching_Failure_A]  ;



	boolState[already_S_OF_Auto_Switching_Failure_B]  =  boolState[S_OF_Auto_Switching_Failure_B]  ;



	boolState[already_S_OF_Loss_Of_Control_in_Auto_Mode]  =  boolState[S_OF_Loss_Of_Control_in_Auto_Mode]  ;



	boolState[already_S_OF_Loss_Of_Control_With_A]  =  boolState[S_OF_Loss_Of_Control_With_A]  ;



	boolState[already_S_OF_Loss_Of_Control_With_B]  =  boolState[S_OF_Loss_Of_Control_With_B]  ;



	boolState[already_S_OF_dummy]  =  boolState[S_OF_dummy]  ;



	boolState[already_S_OF_A_B_Failure_Together]  =  boolState[S_OF_A_B_Failure_Together]  ;



	boolState[already_S_OF_Hand_Switch_Failure]  =  boolState[S_OF_Hand_Switch_Failure]  ;



	boolState[already_S_OF_System_A_Failure]  =  boolState[S_OF_System_A_Failure]  ;



	boolState[already_S_OF_System_B_Failure]  =  boolState[S_OF_System_B_Failure]  ;

}

void
storm::figaro::FigaroProgram_DuelProcessorReactorRegulation_Trim_article_No_repair::runInteractions() {
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
    }void storm::figaro::FigaroProgram_DuelProcessorReactorRegulation_Trim_article_No_repair::printstatetuple(){

                std::cout<<"\n State information: (";
                for (int i=0; i<boolFailureState.size(); i++)
                    {
                    std::cout<<boolFailureState.at(i);
                    }
                std::cout<<")";

            }
        int_fast64_t storm::figaro::FigaroProgram_DuelProcessorReactorRegulation_Trim_article_No_repair::stateSize() const{
            return numBoolState;
}
        void storm::figaro::FigaroProgram_DuelProcessorReactorRegulation_Trim_article_No_repair::fireinsttransitiongroup(std::string user_input_ins)

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
    