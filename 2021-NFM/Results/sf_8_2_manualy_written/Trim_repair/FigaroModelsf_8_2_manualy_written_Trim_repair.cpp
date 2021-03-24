#include <iostream>
#include "FigaroModelsf_8_2_manualy_written_Trim_repair.h"

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
        
void storm::figaro::FigaroProgram_sf_8_2_manualy_written_Trim_repair::init()
{
	//cout <<">>>>>>>>>>>>>>>>>>>> Initialization of variables <<<<<<<<<<<<<<<<<<<<<<<" << endl;

	REINITIALISATION_OF_required_OF_E1_1 = true;
	boolState[already_S_OF_E1_1] = false;
	REINITIALISATION_OF_S_OF_E1_1 = false;
	REINITIALISATION_OF_relevant_evt_OF_E1_1 = false;
	boolState[failF_OF_E1_1] = false;
	REINITIALISATION_OF_required_OF_E1_2 = true;
	boolState[already_S_OF_E1_2] = false;
	REINITIALISATION_OF_S_OF_E1_2 = false;
	REINITIALISATION_OF_relevant_evt_OF_E1_2 = false;
	boolState[failF_OF_E1_2] = false;
	REINITIALISATION_OF_required_OF_E1_3 = true;
	boolState[already_S_OF_E1_3] = false;
	REINITIALISATION_OF_S_OF_E1_3 = false;
	REINITIALISATION_OF_relevant_evt_OF_E1_3 = false;
	boolState[failF_OF_E1_3] = false;
	REINITIALISATION_OF_required_OF_E1_4 = true;
	boolState[already_S_OF_E1_4] = false;
	REINITIALISATION_OF_S_OF_E1_4 = false;
	REINITIALISATION_OF_relevant_evt_OF_E1_4 = false;
	boolState[failF_OF_E1_4] = false;
	REINITIALISATION_OF_required_OF_E1_5 = true;
	boolState[already_S_OF_E1_5] = false;
	REINITIALISATION_OF_S_OF_E1_5 = false;
	REINITIALISATION_OF_relevant_evt_OF_E1_5 = false;
	boolState[failF_OF_E1_5] = false;
	REINITIALISATION_OF_required_OF_E1_6 = true;
	boolState[already_S_OF_E1_6] = false;
	REINITIALISATION_OF_S_OF_E1_6 = false;
	REINITIALISATION_OF_relevant_evt_OF_E1_6 = false;
	boolState[failF_OF_E1_6] = false;
	REINITIALISATION_OF_required_OF_E1_7 = true;
	boolState[already_S_OF_E1_7] = false;
	REINITIALISATION_OF_S_OF_E1_7 = false;
	REINITIALISATION_OF_relevant_evt_OF_E1_7 = false;
	boolState[failF_OF_E1_7] = false;
	REINITIALISATION_OF_required_OF_E1_8 = true;
	boolState[already_S_OF_E1_8] = false;
	REINITIALISATION_OF_S_OF_E1_8 = false;
	REINITIALISATION_OF_relevant_evt_OF_E1_8 = false;
	boolState[failF_OF_E1_8] = false;
	REINITIALISATION_OF_required_OF_E2_1 = true;
	boolState[already_S_OF_E2_1] = false;
	REINITIALISATION_OF_S_OF_E2_1 = false;
	REINITIALISATION_OF_relevant_evt_OF_E2_1 = false;
	boolState[failF_OF_E2_1] = false;
	REINITIALISATION_OF_required_OF_E2_2 = true;
	boolState[already_S_OF_E2_2] = false;
	REINITIALISATION_OF_S_OF_E2_2 = false;
	REINITIALISATION_OF_relevant_evt_OF_E2_2 = false;
	boolState[failF_OF_E2_2] = false;
	REINITIALISATION_OF_required_OF_E2_3 = true;
	boolState[already_S_OF_E2_3] = false;
	REINITIALISATION_OF_S_OF_E2_3 = false;
	REINITIALISATION_OF_relevant_evt_OF_E2_3 = false;
	boolState[failF_OF_E2_3] = false;
	REINITIALISATION_OF_required_OF_E2_4 = true;
	boolState[already_S_OF_E2_4] = false;
	REINITIALISATION_OF_S_OF_E2_4 = false;
	REINITIALISATION_OF_relevant_evt_OF_E2_4 = false;
	boolState[failF_OF_E2_4] = false;
	REINITIALISATION_OF_required_OF_E2_5 = true;
	boolState[already_S_OF_E2_5] = false;
	REINITIALISATION_OF_S_OF_E2_5 = false;
	REINITIALISATION_OF_relevant_evt_OF_E2_5 = false;
	boolState[failF_OF_E2_5] = false;
	REINITIALISATION_OF_required_OF_E2_6 = true;
	boolState[already_S_OF_E2_6] = false;
	REINITIALISATION_OF_S_OF_E2_6 = false;
	REINITIALISATION_OF_relevant_evt_OF_E2_6 = false;
	boolState[failF_OF_E2_6] = false;
	REINITIALISATION_OF_required_OF_E2_7 = true;
	boolState[already_S_OF_E2_7] = false;
	REINITIALISATION_OF_S_OF_E2_7 = false;
	REINITIALISATION_OF_relevant_evt_OF_E2_7 = false;
	boolState[failF_OF_E2_7] = false;
	REINITIALISATION_OF_required_OF_E2_8 = true;
	boolState[already_S_OF_E2_8] = false;
	REINITIALISATION_OF_S_OF_E2_8 = false;
	REINITIALISATION_OF_relevant_evt_OF_E2_8 = false;
	boolState[failF_OF_E2_8] = false;
	REINITIALISATION_OF_required_OF_E3_1 = true;
	boolState[already_S_OF_E3_1] = false;
	REINITIALISATION_OF_S_OF_E3_1 = false;
	REINITIALISATION_OF_relevant_evt_OF_E3_1 = false;
	boolState[failF_OF_E3_1] = false;
	REINITIALISATION_OF_required_OF_E3_2 = true;
	boolState[already_S_OF_E3_2] = false;
	REINITIALISATION_OF_S_OF_E3_2 = false;
	REINITIALISATION_OF_relevant_evt_OF_E3_2 = false;
	boolState[failF_OF_E3_2] = false;
	REINITIALISATION_OF_required_OF_E3_3 = true;
	boolState[already_S_OF_E3_3] = false;
	REINITIALISATION_OF_S_OF_E3_3 = false;
	REINITIALISATION_OF_relevant_evt_OF_E3_3 = false;
	boolState[failF_OF_E3_3] = false;
	REINITIALISATION_OF_required_OF_E3_4 = true;
	boolState[already_S_OF_E3_4] = false;
	REINITIALISATION_OF_S_OF_E3_4 = false;
	REINITIALISATION_OF_relevant_evt_OF_E3_4 = false;
	boolState[failF_OF_E3_4] = false;
	REINITIALISATION_OF_required_OF_E3_5 = true;
	boolState[already_S_OF_E3_5] = false;
	REINITIALISATION_OF_S_OF_E3_5 = false;
	REINITIALISATION_OF_relevant_evt_OF_E3_5 = false;
	boolState[failF_OF_E3_5] = false;
	REINITIALISATION_OF_required_OF_E3_6 = true;
	boolState[already_S_OF_E3_6] = false;
	REINITIALISATION_OF_S_OF_E3_6 = false;
	REINITIALISATION_OF_relevant_evt_OF_E3_6 = false;
	boolState[failF_OF_E3_6] = false;
	REINITIALISATION_OF_required_OF_E3_7 = true;
	boolState[already_S_OF_E3_7] = false;
	REINITIALISATION_OF_S_OF_E3_7 = false;
	REINITIALISATION_OF_relevant_evt_OF_E3_7 = false;
	boolState[failF_OF_E3_7] = false;
	REINITIALISATION_OF_required_OF_E3_8 = true;
	boolState[already_S_OF_E3_8] = false;
	REINITIALISATION_OF_S_OF_E3_8 = false;
	REINITIALISATION_OF_relevant_evt_OF_E3_8 = false;
	boolState[failF_OF_E3_8] = false;
	REINITIALISATION_OF_required_OF_E4_1 = true;
	boolState[already_S_OF_E4_1] = false;
	REINITIALISATION_OF_S_OF_E4_1 = false;
	REINITIALISATION_OF_relevant_evt_OF_E4_1 = false;
	boolState[failF_OF_E4_1] = false;
	REINITIALISATION_OF_required_OF_E4_2 = true;
	boolState[already_S_OF_E4_2] = false;
	REINITIALISATION_OF_S_OF_E4_2 = false;
	REINITIALISATION_OF_relevant_evt_OF_E4_2 = false;
	boolState[failF_OF_E4_2] = false;
	REINITIALISATION_OF_required_OF_E4_3 = true;
	boolState[already_S_OF_E4_3] = false;
	REINITIALISATION_OF_S_OF_E4_3 = false;
	REINITIALISATION_OF_relevant_evt_OF_E4_3 = false;
	boolState[failF_OF_E4_3] = false;
	REINITIALISATION_OF_required_OF_E4_4 = true;
	boolState[already_S_OF_E4_4] = false;
	REINITIALISATION_OF_S_OF_E4_4 = false;
	REINITIALISATION_OF_relevant_evt_OF_E4_4 = false;
	boolState[failF_OF_E4_4] = false;
	REINITIALISATION_OF_required_OF_E4_5 = true;
	boolState[already_S_OF_E4_5] = false;
	REINITIALISATION_OF_S_OF_E4_5 = false;
	REINITIALISATION_OF_relevant_evt_OF_E4_5 = false;
	boolState[failF_OF_E4_5] = false;
	REINITIALISATION_OF_required_OF_E4_6 = true;
	boolState[already_S_OF_E4_6] = false;
	REINITIALISATION_OF_S_OF_E4_6 = false;
	REINITIALISATION_OF_relevant_evt_OF_E4_6 = false;
	boolState[failF_OF_E4_6] = false;
	REINITIALISATION_OF_required_OF_E4_7 = true;
	boolState[already_S_OF_E4_7] = false;
	REINITIALISATION_OF_S_OF_E4_7 = false;
	REINITIALISATION_OF_relevant_evt_OF_E4_7 = false;
	boolState[failF_OF_E4_7] = false;
	REINITIALISATION_OF_required_OF_E4_8 = true;
	boolState[already_S_OF_E4_8] = false;
	REINITIALISATION_OF_S_OF_E4_8 = false;
	REINITIALISATION_OF_relevant_evt_OF_E4_8 = false;
	boolState[failF_OF_E4_8] = false;
	REINITIALISATION_OF_required_OF_EC1_1 = true;
	boolState[already_S_OF_EC1_1] = false;
	REINITIALISATION_OF_S_OF_EC1_1 = false;
	REINITIALISATION_OF_relevant_evt_OF_EC1_1 = false;
	boolState[failF_OF_EC1_1] = false;
	REINITIALISATION_OF_required_OF_EC1_2 = true;
	boolState[already_S_OF_EC1_2] = false;
	REINITIALISATION_OF_S_OF_EC1_2 = false;
	REINITIALISATION_OF_relevant_evt_OF_EC1_2 = false;
	boolState[failF_OF_EC1_2] = false;
	REINITIALISATION_OF_required_OF_EC1_3 = true;
	boolState[already_S_OF_EC1_3] = false;
	REINITIALISATION_OF_S_OF_EC1_3 = false;
	REINITIALISATION_OF_relevant_evt_OF_EC1_3 = false;
	boolState[failF_OF_EC1_3] = false;
	REINITIALISATION_OF_required_OF_EC1_4 = true;
	boolState[already_S_OF_EC1_4] = false;
	REINITIALISATION_OF_S_OF_EC1_4 = false;
	REINITIALISATION_OF_relevant_evt_OF_EC1_4 = false;
	boolState[failF_OF_EC1_4] = false;
	REINITIALISATION_OF_required_OF_EC1_5 = true;
	boolState[already_S_OF_EC1_5] = false;
	REINITIALISATION_OF_S_OF_EC1_5 = false;
	REINITIALISATION_OF_relevant_evt_OF_EC1_5 = false;
	boolState[failF_OF_EC1_5] = false;
	REINITIALISATION_OF_required_OF_EC1_6 = true;
	boolState[already_S_OF_EC1_6] = false;
	REINITIALISATION_OF_S_OF_EC1_6 = false;
	REINITIALISATION_OF_relevant_evt_OF_EC1_6 = false;
	boolState[failF_OF_EC1_6] = false;
	REINITIALISATION_OF_required_OF_EC1_7 = true;
	boolState[already_S_OF_EC1_7] = false;
	REINITIALISATION_OF_S_OF_EC1_7 = false;
	REINITIALISATION_OF_relevant_evt_OF_EC1_7 = false;
	boolState[failF_OF_EC1_7] = false;
	REINITIALISATION_OF_required_OF_EC1_8 = true;
	boolState[already_S_OF_EC1_8] = false;
	REINITIALISATION_OF_S_OF_EC1_8 = false;
	REINITIALISATION_OF_relevant_evt_OF_EC1_8 = false;
	boolState[failF_OF_EC1_8] = false;
	REINITIALISATION_OF_required_OF_EC2_1 = true;
	boolState[already_S_OF_EC2_1] = false;
	REINITIALISATION_OF_S_OF_EC2_1 = false;
	REINITIALISATION_OF_relevant_evt_OF_EC2_1 = false;
	boolState[failF_OF_EC2_1] = false;
	REINITIALISATION_OF_required_OF_EC2_2 = true;
	boolState[already_S_OF_EC2_2] = false;
	REINITIALISATION_OF_S_OF_EC2_2 = false;
	REINITIALISATION_OF_relevant_evt_OF_EC2_2 = false;
	boolState[failF_OF_EC2_2] = false;
	REINITIALISATION_OF_required_OF_EC2_3 = true;
	boolState[already_S_OF_EC2_3] = false;
	REINITIALISATION_OF_S_OF_EC2_3 = false;
	REINITIALISATION_OF_relevant_evt_OF_EC2_3 = false;
	boolState[failF_OF_EC2_3] = false;
	REINITIALISATION_OF_required_OF_EC2_4 = true;
	boolState[already_S_OF_EC2_4] = false;
	REINITIALISATION_OF_S_OF_EC2_4 = false;
	REINITIALISATION_OF_relevant_evt_OF_EC2_4 = false;
	boolState[failF_OF_EC2_4] = false;
	REINITIALISATION_OF_required_OF_EC2_5 = true;
	boolState[already_S_OF_EC2_5] = false;
	REINITIALISATION_OF_S_OF_EC2_5 = false;
	REINITIALISATION_OF_relevant_evt_OF_EC2_5 = false;
	boolState[failF_OF_EC2_5] = false;
	REINITIALISATION_OF_required_OF_EC2_6 = true;
	boolState[already_S_OF_EC2_6] = false;
	REINITIALISATION_OF_S_OF_EC2_6 = false;
	REINITIALISATION_OF_relevant_evt_OF_EC2_6 = false;
	boolState[failF_OF_EC2_6] = false;
	REINITIALISATION_OF_required_OF_EC2_7 = true;
	boolState[already_S_OF_EC2_7] = false;
	REINITIALISATION_OF_S_OF_EC2_7 = false;
	REINITIALISATION_OF_relevant_evt_OF_EC2_7 = false;
	boolState[failF_OF_EC2_7] = false;
	REINITIALISATION_OF_required_OF_EC2_8 = true;
	boolState[already_S_OF_EC2_8] = false;
	REINITIALISATION_OF_S_OF_EC2_8 = false;
	REINITIALISATION_OF_relevant_evt_OF_EC2_8 = false;
	boolState[failF_OF_EC2_8] = false;
	REINITIALISATION_OF_required_OF_EC3_1 = true;
	boolState[already_S_OF_EC3_1] = false;
	REINITIALISATION_OF_S_OF_EC3_1 = false;
	REINITIALISATION_OF_relevant_evt_OF_EC3_1 = false;
	boolState[failF_OF_EC3_1] = false;
	REINITIALISATION_OF_required_OF_EC3_2 = true;
	boolState[already_S_OF_EC3_2] = false;
	REINITIALISATION_OF_S_OF_EC3_2 = false;
	REINITIALISATION_OF_relevant_evt_OF_EC3_2 = false;
	boolState[failF_OF_EC3_2] = false;
	REINITIALISATION_OF_required_OF_EC3_3 = true;
	boolState[already_S_OF_EC3_3] = false;
	REINITIALISATION_OF_S_OF_EC3_3 = false;
	REINITIALISATION_OF_relevant_evt_OF_EC3_3 = false;
	boolState[failF_OF_EC3_3] = false;
	REINITIALISATION_OF_required_OF_EC3_4 = true;
	boolState[already_S_OF_EC3_4] = false;
	REINITIALISATION_OF_S_OF_EC3_4 = false;
	REINITIALISATION_OF_relevant_evt_OF_EC3_4 = false;
	boolState[failF_OF_EC3_4] = false;
	REINITIALISATION_OF_required_OF_EC3_5 = true;
	boolState[already_S_OF_EC3_5] = false;
	REINITIALISATION_OF_S_OF_EC3_5 = false;
	REINITIALISATION_OF_relevant_evt_OF_EC3_5 = false;
	boolState[failF_OF_EC3_5] = false;
	REINITIALISATION_OF_required_OF_EC3_6 = true;
	boolState[already_S_OF_EC3_6] = false;
	REINITIALISATION_OF_S_OF_EC3_6 = false;
	REINITIALISATION_OF_relevant_evt_OF_EC3_6 = false;
	boolState[failF_OF_EC3_6] = false;
	REINITIALISATION_OF_required_OF_EC3_7 = true;
	boolState[already_S_OF_EC3_7] = false;
	REINITIALISATION_OF_S_OF_EC3_7 = false;
	REINITIALISATION_OF_relevant_evt_OF_EC3_7 = false;
	boolState[failF_OF_EC3_7] = false;
	REINITIALISATION_OF_required_OF_EC3_8 = true;
	boolState[already_S_OF_EC3_8] = false;
	REINITIALISATION_OF_S_OF_EC3_8 = false;
	REINITIALISATION_OF_relevant_evt_OF_EC3_8 = false;
	boolState[failF_OF_EC3_8] = false;
	REINITIALISATION_OF_required_OF_Filter_1 = true;
	boolState[already_S_OF_Filter_1] = false;
	REINITIALISATION_OF_S_OF_Filter_1 = false;
	REINITIALISATION_OF_relevant_evt_OF_Filter_1 = false;
	REINITIALISATION_OF_required_OF_Filter_2 = true;
	boolState[already_S_OF_Filter_2] = false;
	REINITIALISATION_OF_S_OF_Filter_2 = false;
	REINITIALISATION_OF_relevant_evt_OF_Filter_2 = false;
	REINITIALISATION_OF_required_OF_Filter_3 = true;
	boolState[already_S_OF_Filter_3] = false;
	REINITIALISATION_OF_S_OF_Filter_3 = false;
	REINITIALISATION_OF_relevant_evt_OF_Filter_3 = false;
	REINITIALISATION_OF_required_OF_Filter_4 = true;
	boolState[already_S_OF_Filter_4] = false;
	REINITIALISATION_OF_S_OF_Filter_4 = false;
	REINITIALISATION_OF_relevant_evt_OF_Filter_4 = false;
	REINITIALISATION_OF_required_OF_Filter_5 = true;
	boolState[already_S_OF_Filter_5] = false;
	REINITIALISATION_OF_S_OF_Filter_5 = false;
	REINITIALISATION_OF_relevant_evt_OF_Filter_5 = false;
	REINITIALISATION_OF_required_OF_Filter_6 = true;
	boolState[already_S_OF_Filter_6] = false;
	REINITIALISATION_OF_S_OF_Filter_6 = false;
	REINITIALISATION_OF_relevant_evt_OF_Filter_6 = false;
	REINITIALISATION_OF_required_OF_Filter_7 = true;
	boolState[already_S_OF_Filter_7] = false;
	REINITIALISATION_OF_S_OF_Filter_7 = false;
	REINITIALISATION_OF_relevant_evt_OF_Filter_7 = false;
	REINITIALISATION_OF_required_OF_Filter_8 = true;
	boolState[already_S_OF_Filter_8] = false;
	REINITIALISATION_OF_S_OF_Filter_8 = false;
	REINITIALISATION_OF_relevant_evt_OF_Filter_8 = false;
	REINITIALISATION_OF_required_OF_System = true;
	boolState[already_S_OF_System] = false;
	REINITIALISATION_OF_S_OF_System = false;
	REINITIALISATION_OF_relevant_evt_OF_System = false;
	REINITIALISATION_OF_required_OF_UE_1 = true;
	boolState[already_S_OF_UE_1] = false;
	REINITIALISATION_OF_S_OF_UE_1 = false;
	REINITIALISATION_OF_relevant_evt_OF_UE_1 = false;
	REINITIALISATION_OF_required_OF_fault_cfg_1_1 = true;
	boolState[already_S_OF_fault_cfg_1_1] = false;
	REINITIALISATION_OF_S_OF_fault_cfg_1_1 = false;
	REINITIALISATION_OF_relevant_evt_OF_fault_cfg_1_1 = false;
	REINITIALISATION_OF_required_OF_fault_cfg_1_2 = true;
	boolState[already_S_OF_fault_cfg_1_2] = false;
	REINITIALISATION_OF_S_OF_fault_cfg_1_2 = false;
	REINITIALISATION_OF_relevant_evt_OF_fault_cfg_1_2 = false;
	REINITIALISATION_OF_required_OF_fault_cfg_1_3 = true;
	boolState[already_S_OF_fault_cfg_1_3] = false;
	REINITIALISATION_OF_S_OF_fault_cfg_1_3 = false;
	REINITIALISATION_OF_relevant_evt_OF_fault_cfg_1_3 = false;
	REINITIALISATION_OF_required_OF_fault_cfg_1_4 = true;
	boolState[already_S_OF_fault_cfg_1_4] = false;
	REINITIALISATION_OF_S_OF_fault_cfg_1_4 = false;
	REINITIALISATION_OF_relevant_evt_OF_fault_cfg_1_4 = false;
	REINITIALISATION_OF_required_OF_fault_cfg_1_5 = true;
	boolState[already_S_OF_fault_cfg_1_5] = false;
	REINITIALISATION_OF_S_OF_fault_cfg_1_5 = false;
	REINITIALISATION_OF_relevant_evt_OF_fault_cfg_1_5 = false;
	REINITIALISATION_OF_required_OF_fault_cfg_1_6 = true;
	boolState[already_S_OF_fault_cfg_1_6] = false;
	REINITIALISATION_OF_S_OF_fault_cfg_1_6 = false;
	REINITIALISATION_OF_relevant_evt_OF_fault_cfg_1_6 = false;
	REINITIALISATION_OF_required_OF_fault_cfg_1_7 = true;
	boolState[already_S_OF_fault_cfg_1_7] = false;
	REINITIALISATION_OF_S_OF_fault_cfg_1_7 = false;
	REINITIALISATION_OF_relevant_evt_OF_fault_cfg_1_7 = false;
	REINITIALISATION_OF_required_OF_fault_cfg_1_8 = true;
	boolState[already_S_OF_fault_cfg_1_8] = false;
	REINITIALISATION_OF_S_OF_fault_cfg_1_8 = false;
	REINITIALISATION_OF_relevant_evt_OF_fault_cfg_1_8 = false;
	REINITIALISATION_OF_required_OF_fault_cfg_3_1 = true;
	boolState[already_S_OF_fault_cfg_3_1] = false;
	REINITIALISATION_OF_S_OF_fault_cfg_3_1 = false;
	REINITIALISATION_OF_relevant_evt_OF_fault_cfg_3_1 = false;
	REINITIALISATION_OF_required_OF_fault_cfg_3_2 = true;
	boolState[already_S_OF_fault_cfg_3_2] = false;
	REINITIALISATION_OF_S_OF_fault_cfg_3_2 = false;
	REINITIALISATION_OF_relevant_evt_OF_fault_cfg_3_2 = false;
	REINITIALISATION_OF_required_OF_fault_cfg_3_3 = true;
	boolState[already_S_OF_fault_cfg_3_3] = false;
	REINITIALISATION_OF_S_OF_fault_cfg_3_3 = false;
	REINITIALISATION_OF_relevant_evt_OF_fault_cfg_3_3 = false;
	REINITIALISATION_OF_required_OF_fault_cfg_3_4 = true;
	boolState[already_S_OF_fault_cfg_3_4] = false;
	REINITIALISATION_OF_S_OF_fault_cfg_3_4 = false;
	REINITIALISATION_OF_relevant_evt_OF_fault_cfg_3_4 = false;
	REINITIALISATION_OF_required_OF_fault_cfg_3_5 = true;
	boolState[already_S_OF_fault_cfg_3_5] = false;
	REINITIALISATION_OF_S_OF_fault_cfg_3_5 = false;
	REINITIALISATION_OF_relevant_evt_OF_fault_cfg_3_5 = false;
	REINITIALISATION_OF_required_OF_fault_cfg_3_6 = true;
	boolState[already_S_OF_fault_cfg_3_6] = false;
	REINITIALISATION_OF_S_OF_fault_cfg_3_6 = false;
	REINITIALISATION_OF_relevant_evt_OF_fault_cfg_3_6 = false;
	REINITIALISATION_OF_required_OF_fault_cfg_3_7 = true;
	boolState[already_S_OF_fault_cfg_3_7] = false;
	REINITIALISATION_OF_S_OF_fault_cfg_3_7 = false;
	REINITIALISATION_OF_relevant_evt_OF_fault_cfg_3_7 = false;
	REINITIALISATION_OF_required_OF_fault_cfg_3_8 = true;
	boolState[already_S_OF_fault_cfg_3_8] = false;
	REINITIALISATION_OF_S_OF_fault_cfg_3_8 = false;
	REINITIALISATION_OF_relevant_evt_OF_fault_cfg_3_8 = false;
	REINITIALISATION_OF_required_OF_fault_cfg_4_1 = true;
	boolState[already_S_OF_fault_cfg_4_1] = false;
	REINITIALISATION_OF_S_OF_fault_cfg_4_1 = false;
	REINITIALISATION_OF_relevant_evt_OF_fault_cfg_4_1 = false;
	REINITIALISATION_OF_required_OF_fault_cfg_4_2 = true;
	boolState[already_S_OF_fault_cfg_4_2] = false;
	REINITIALISATION_OF_S_OF_fault_cfg_4_2 = false;
	REINITIALISATION_OF_relevant_evt_OF_fault_cfg_4_2 = false;
	REINITIALISATION_OF_required_OF_fault_cfg_4_3 = true;
	boolState[already_S_OF_fault_cfg_4_3] = false;
	REINITIALISATION_OF_S_OF_fault_cfg_4_3 = false;
	REINITIALISATION_OF_relevant_evt_OF_fault_cfg_4_3 = false;
	REINITIALISATION_OF_required_OF_fault_cfg_4_4 = true;
	boolState[already_S_OF_fault_cfg_4_4] = false;
	REINITIALISATION_OF_S_OF_fault_cfg_4_4 = false;
	REINITIALISATION_OF_relevant_evt_OF_fault_cfg_4_4 = false;
	REINITIALISATION_OF_required_OF_fault_cfg_4_5 = true;
	boolState[already_S_OF_fault_cfg_4_5] = false;
	REINITIALISATION_OF_S_OF_fault_cfg_4_5 = false;
	REINITIALISATION_OF_relevant_evt_OF_fault_cfg_4_5 = false;
	REINITIALISATION_OF_required_OF_fault_cfg_4_6 = true;
	boolState[already_S_OF_fault_cfg_4_6] = false;
	REINITIALISATION_OF_S_OF_fault_cfg_4_6 = false;
	REINITIALISATION_OF_relevant_evt_OF_fault_cfg_4_6 = false;
	REINITIALISATION_OF_required_OF_fault_cfg_4_7 = true;
	boolState[already_S_OF_fault_cfg_4_7] = false;
	REINITIALISATION_OF_S_OF_fault_cfg_4_7 = false;
	REINITIALISATION_OF_relevant_evt_OF_fault_cfg_4_7 = false;
	REINITIALISATION_OF_required_OF_fault_cfg_4_8 = true;
	boolState[already_S_OF_fault_cfg_4_8] = false;
	REINITIALISATION_OF_S_OF_fault_cfg_4_8 = false;
	REINITIALISATION_OF_relevant_evt_OF_fault_cfg_4_8 = false;
	REINITIALISATION_OF_required_OF_gate_1_1 = true;
	boolState[already_S_OF_gate_1_1] = false;
	REINITIALISATION_OF_S_OF_gate_1_1 = false;
	REINITIALISATION_OF_relevant_evt_OF_gate_1_1 = false;
	REINITIALISATION_OF_required_OF_gate_1_2 = true;
	boolState[already_S_OF_gate_1_2] = false;
	REINITIALISATION_OF_S_OF_gate_1_2 = false;
	REINITIALISATION_OF_relevant_evt_OF_gate_1_2 = false;
	REINITIALISATION_OF_required_OF_gate_1_3 = true;
	boolState[already_S_OF_gate_1_3] = false;
	REINITIALISATION_OF_S_OF_gate_1_3 = false;
	REINITIALISATION_OF_relevant_evt_OF_gate_1_3 = false;
	REINITIALISATION_OF_required_OF_gate_1_4 = true;
	boolState[already_S_OF_gate_1_4] = false;
	REINITIALISATION_OF_S_OF_gate_1_4 = false;
	REINITIALISATION_OF_relevant_evt_OF_gate_1_4 = false;
	REINITIALISATION_OF_required_OF_gate_1_5 = true;
	boolState[already_S_OF_gate_1_5] = false;
	REINITIALISATION_OF_S_OF_gate_1_5 = false;
	REINITIALISATION_OF_relevant_evt_OF_gate_1_5 = false;
	REINITIALISATION_OF_required_OF_gate_1_6 = true;
	boolState[already_S_OF_gate_1_6] = false;
	REINITIALISATION_OF_S_OF_gate_1_6 = false;
	REINITIALISATION_OF_relevant_evt_OF_gate_1_6 = false;
	REINITIALISATION_OF_required_OF_gate_1_7 = true;
	boolState[already_S_OF_gate_1_7] = false;
	REINITIALISATION_OF_S_OF_gate_1_7 = false;
	REINITIALISATION_OF_relevant_evt_OF_gate_1_7 = false;
	REINITIALISATION_OF_required_OF_gate_1_8 = true;
	boolState[already_S_OF_gate_1_8] = false;
	REINITIALISATION_OF_S_OF_gate_1_8 = false;
	REINITIALISATION_OF_relevant_evt_OF_gate_1_8 = false;
	REINITIALISATION_OF_required_OF_gate_2_1 = true;
	boolState[already_S_OF_gate_2_1] = false;
	REINITIALISATION_OF_S_OF_gate_2_1 = false;
	REINITIALISATION_OF_relevant_evt_OF_gate_2_1 = false;
	REINITIALISATION_OF_required_OF_gate_2_2 = true;
	boolState[already_S_OF_gate_2_2] = false;
	REINITIALISATION_OF_S_OF_gate_2_2 = false;
	REINITIALISATION_OF_relevant_evt_OF_gate_2_2 = false;
	REINITIALISATION_OF_required_OF_gate_2_3 = true;
	boolState[already_S_OF_gate_2_3] = false;
	REINITIALISATION_OF_S_OF_gate_2_3 = false;
	REINITIALISATION_OF_relevant_evt_OF_gate_2_3 = false;
	REINITIALISATION_OF_required_OF_gate_2_4 = true;
	boolState[already_S_OF_gate_2_4] = false;
	REINITIALISATION_OF_S_OF_gate_2_4 = false;
	REINITIALISATION_OF_relevant_evt_OF_gate_2_4 = false;
	REINITIALISATION_OF_required_OF_gate_2_5 = true;
	boolState[already_S_OF_gate_2_5] = false;
	REINITIALISATION_OF_S_OF_gate_2_5 = false;
	REINITIALISATION_OF_relevant_evt_OF_gate_2_5 = false;
	REINITIALISATION_OF_required_OF_gate_2_6 = true;
	boolState[already_S_OF_gate_2_6] = false;
	REINITIALISATION_OF_S_OF_gate_2_6 = false;
	REINITIALISATION_OF_relevant_evt_OF_gate_2_6 = false;
	REINITIALISATION_OF_required_OF_gate_2_7 = true;
	boolState[already_S_OF_gate_2_7] = false;
	REINITIALISATION_OF_S_OF_gate_2_7 = false;
	REINITIALISATION_OF_relevant_evt_OF_gate_2_7 = false;
	REINITIALISATION_OF_required_OF_gate_2_8 = true;
	boolState[already_S_OF_gate_2_8] = false;
	REINITIALISATION_OF_S_OF_gate_2_8 = false;
	REINITIALISATION_OF_relevant_evt_OF_gate_2_8 = false;

	/* ---------- DECLARATION OF OCCURRENCE RULES FIRING FLAGS ------------ */
	FIRE_xx10_OF_E1_1 = false;
	FIRE_xx11_OF_E1_1 = false;
	FIRE_xx10_OF_E1_2 = false;
	FIRE_xx11_OF_E1_2 = false;
	FIRE_xx10_OF_E1_3 = false;
	FIRE_xx11_OF_E1_3 = false;
	FIRE_xx10_OF_E1_4 = false;
	FIRE_xx11_OF_E1_4 = false;
	FIRE_xx10_OF_E1_5 = false;
	FIRE_xx11_OF_E1_5 = false;
	FIRE_xx10_OF_E1_6 = false;
	FIRE_xx11_OF_E1_6 = false;
	FIRE_xx10_OF_E1_7 = false;
	FIRE_xx11_OF_E1_7 = false;
	FIRE_xx10_OF_E1_8 = false;
	FIRE_xx11_OF_E1_8 = false;
	FIRE_xx10_OF_E2_1 = false;
	FIRE_xx11_OF_E2_1 = false;
	FIRE_xx10_OF_E2_2 = false;
	FIRE_xx11_OF_E2_2 = false;
	FIRE_xx10_OF_E2_3 = false;
	FIRE_xx11_OF_E2_3 = false;
	FIRE_xx10_OF_E2_4 = false;
	FIRE_xx11_OF_E2_4 = false;
	FIRE_xx10_OF_E2_5 = false;
	FIRE_xx11_OF_E2_5 = false;
	FIRE_xx10_OF_E2_6 = false;
	FIRE_xx11_OF_E2_6 = false;
	FIRE_xx10_OF_E2_7 = false;
	FIRE_xx11_OF_E2_7 = false;
	FIRE_xx10_OF_E2_8 = false;
	FIRE_xx11_OF_E2_8 = false;
	FIRE_xx10_OF_E3_1 = false;
	FIRE_xx11_OF_E3_1 = false;
	FIRE_xx10_OF_E3_2 = false;
	FIRE_xx11_OF_E3_2 = false;
	FIRE_xx10_OF_E3_3 = false;
	FIRE_xx11_OF_E3_3 = false;
	FIRE_xx10_OF_E3_4 = false;
	FIRE_xx11_OF_E3_4 = false;
	FIRE_xx10_OF_E3_5 = false;
	FIRE_xx11_OF_E3_5 = false;
	FIRE_xx10_OF_E3_6 = false;
	FIRE_xx11_OF_E3_6 = false;
	FIRE_xx10_OF_E3_7 = false;
	FIRE_xx11_OF_E3_7 = false;
	FIRE_xx10_OF_E3_8 = false;
	FIRE_xx11_OF_E3_8 = false;
	FIRE_xx10_OF_E4_1 = false;
	FIRE_xx11_OF_E4_1 = false;
	FIRE_xx10_OF_E4_2 = false;
	FIRE_xx11_OF_E4_2 = false;
	FIRE_xx10_OF_E4_3 = false;
	FIRE_xx11_OF_E4_3 = false;
	FIRE_xx10_OF_E4_4 = false;
	FIRE_xx11_OF_E4_4 = false;
	FIRE_xx10_OF_E4_5 = false;
	FIRE_xx11_OF_E4_5 = false;
	FIRE_xx10_OF_E4_6 = false;
	FIRE_xx11_OF_E4_6 = false;
	FIRE_xx10_OF_E4_7 = false;
	FIRE_xx11_OF_E4_7 = false;
	FIRE_xx10_OF_E4_8 = false;
	FIRE_xx11_OF_E4_8 = false;
	FIRE_xx10_OF_EC1_1 = false;
	FIRE_xx11_OF_EC1_1 = false;
	FIRE_xx10_OF_EC1_2 = false;
	FIRE_xx11_OF_EC1_2 = false;
	FIRE_xx10_OF_EC1_3 = false;
	FIRE_xx11_OF_EC1_3 = false;
	FIRE_xx10_OF_EC1_4 = false;
	FIRE_xx11_OF_EC1_4 = false;
	FIRE_xx10_OF_EC1_5 = false;
	FIRE_xx11_OF_EC1_5 = false;
	FIRE_xx10_OF_EC1_6 = false;
	FIRE_xx11_OF_EC1_6 = false;
	FIRE_xx10_OF_EC1_7 = false;
	FIRE_xx11_OF_EC1_7 = false;
	FIRE_xx10_OF_EC1_8 = false;
	FIRE_xx11_OF_EC1_8 = false;
	FIRE_xx10_OF_EC2_1 = false;
	FIRE_xx11_OF_EC2_1 = false;
	FIRE_xx10_OF_EC2_2 = false;
	FIRE_xx11_OF_EC2_2 = false;
	FIRE_xx10_OF_EC2_3 = false;
	FIRE_xx11_OF_EC2_3 = false;
	FIRE_xx10_OF_EC2_4 = false;
	FIRE_xx11_OF_EC2_4 = false;
	FIRE_xx10_OF_EC2_5 = false;
	FIRE_xx11_OF_EC2_5 = false;
	FIRE_xx10_OF_EC2_6 = false;
	FIRE_xx11_OF_EC2_6 = false;
	FIRE_xx10_OF_EC2_7 = false;
	FIRE_xx11_OF_EC2_7 = false;
	FIRE_xx10_OF_EC2_8 = false;
	FIRE_xx11_OF_EC2_8 = false;
	FIRE_xx10_OF_EC3_1 = false;
	FIRE_xx11_OF_EC3_1 = false;
	FIRE_xx10_OF_EC3_2 = false;
	FIRE_xx11_OF_EC3_2 = false;
	FIRE_xx10_OF_EC3_3 = false;
	FIRE_xx11_OF_EC3_3 = false;
	FIRE_xx10_OF_EC3_4 = false;
	FIRE_xx11_OF_EC3_4 = false;
	FIRE_xx10_OF_EC3_5 = false;
	FIRE_xx11_OF_EC3_5 = false;
	FIRE_xx10_OF_EC3_6 = false;
	FIRE_xx11_OF_EC3_6 = false;
	FIRE_xx10_OF_EC3_7 = false;
	FIRE_xx11_OF_EC3_7 = false;
	FIRE_xx10_OF_EC3_8 = false;
	FIRE_xx11_OF_EC3_8 = false;

}

void storm::figaro::FigaroProgram_sf_8_2_manualy_written_Trim_repair::saveCurrentState()
{
	// cout <<">>>>>>>>>>>>>>>>>>>> Saving current state  <<<<<<<<<<<<<<<<<<<<<<<" << endl;
	backupBoolState = boolState ;
	backupFloatState = floatState ;
	backupIntState = intState ;
	backupEnumState = enumState ;
}

int storm::figaro::FigaroProgram_sf_8_2_manualy_written_Trim_repair::compareStates()
{
	// cout <<">>>>>>>>>>>>>>>>>>>> Comparing state with previous one (return number of differences) <<<<<<<<<<<<<<<<<<<<<<<" << endl;

	return (backupBoolState != boolState) + (backupFloatState != floatState) + (backupIntState != intState) + (backupEnumState != enumState); 
}

void storm::figaro::FigaroProgram_sf_8_2_manualy_written_Trim_repair::printState()
{
	//cout <<"\n==================== Print of the current state :  ====================" << endl;

	//cout << "Attribute :  boolState[required_OF_E1_1] | Value : " << boolState[required_OF_E1_1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_E1_1] | Value : " << boolState[already_S_OF_E1_1] << endl;
	//cout << "Attribute :  boolState[S_OF_E1_1] | Value : " << boolState[S_OF_E1_1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_E1_1] | Value : " << boolState[relevant_evt_OF_E1_1] << endl;
	//cout << "Attribute :  boolState[failF_OF_E1_1] | Value : " << boolState[failF_OF_E1_1] << endl;
	//cout << "Attribute :  boolState[required_OF_E1_2] | Value : " << boolState[required_OF_E1_2] << endl;
	//cout << "Attribute :  boolState[already_S_OF_E1_2] | Value : " << boolState[already_S_OF_E1_2] << endl;
	//cout << "Attribute :  boolState[S_OF_E1_2] | Value : " << boolState[S_OF_E1_2] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_E1_2] | Value : " << boolState[relevant_evt_OF_E1_2] << endl;
	//cout << "Attribute :  boolState[failF_OF_E1_2] | Value : " << boolState[failF_OF_E1_2] << endl;
	//cout << "Attribute :  boolState[required_OF_E1_3] | Value : " << boolState[required_OF_E1_3] << endl;
	//cout << "Attribute :  boolState[already_S_OF_E1_3] | Value : " << boolState[already_S_OF_E1_3] << endl;
	//cout << "Attribute :  boolState[S_OF_E1_3] | Value : " << boolState[S_OF_E1_3] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_E1_3] | Value : " << boolState[relevant_evt_OF_E1_3] << endl;
	//cout << "Attribute :  boolState[failF_OF_E1_3] | Value : " << boolState[failF_OF_E1_3] << endl;
	//cout << "Attribute :  boolState[required_OF_E1_4] | Value : " << boolState[required_OF_E1_4] << endl;
	//cout << "Attribute :  boolState[already_S_OF_E1_4] | Value : " << boolState[already_S_OF_E1_4] << endl;
	//cout << "Attribute :  boolState[S_OF_E1_4] | Value : " << boolState[S_OF_E1_4] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_E1_4] | Value : " << boolState[relevant_evt_OF_E1_4] << endl;
	//cout << "Attribute :  boolState[failF_OF_E1_4] | Value : " << boolState[failF_OF_E1_4] << endl;
	//cout << "Attribute :  boolState[required_OF_E1_5] | Value : " << boolState[required_OF_E1_5] << endl;
	//cout << "Attribute :  boolState[already_S_OF_E1_5] | Value : " << boolState[already_S_OF_E1_5] << endl;
	//cout << "Attribute :  boolState[S_OF_E1_5] | Value : " << boolState[S_OF_E1_5] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_E1_5] | Value : " << boolState[relevant_evt_OF_E1_5] << endl;
	//cout << "Attribute :  boolState[failF_OF_E1_5] | Value : " << boolState[failF_OF_E1_5] << endl;
	//cout << "Attribute :  boolState[required_OF_E1_6] | Value : " << boolState[required_OF_E1_6] << endl;
	//cout << "Attribute :  boolState[already_S_OF_E1_6] | Value : " << boolState[already_S_OF_E1_6] << endl;
	//cout << "Attribute :  boolState[S_OF_E1_6] | Value : " << boolState[S_OF_E1_6] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_E1_6] | Value : " << boolState[relevant_evt_OF_E1_6] << endl;
	//cout << "Attribute :  boolState[failF_OF_E1_6] | Value : " << boolState[failF_OF_E1_6] << endl;
	//cout << "Attribute :  boolState[required_OF_E1_7] | Value : " << boolState[required_OF_E1_7] << endl;
	//cout << "Attribute :  boolState[already_S_OF_E1_7] | Value : " << boolState[already_S_OF_E1_7] << endl;
	//cout << "Attribute :  boolState[S_OF_E1_7] | Value : " << boolState[S_OF_E1_7] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_E1_7] | Value : " << boolState[relevant_evt_OF_E1_7] << endl;
	//cout << "Attribute :  boolState[failF_OF_E1_7] | Value : " << boolState[failF_OF_E1_7] << endl;
	//cout << "Attribute :  boolState[required_OF_E1_8] | Value : " << boolState[required_OF_E1_8] << endl;
	//cout << "Attribute :  boolState[already_S_OF_E1_8] | Value : " << boolState[already_S_OF_E1_8] << endl;
	//cout << "Attribute :  boolState[S_OF_E1_8] | Value : " << boolState[S_OF_E1_8] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_E1_8] | Value : " << boolState[relevant_evt_OF_E1_8] << endl;
	//cout << "Attribute :  boolState[failF_OF_E1_8] | Value : " << boolState[failF_OF_E1_8] << endl;
	//cout << "Attribute :  boolState[required_OF_E2_1] | Value : " << boolState[required_OF_E2_1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_E2_1] | Value : " << boolState[already_S_OF_E2_1] << endl;
	//cout << "Attribute :  boolState[S_OF_E2_1] | Value : " << boolState[S_OF_E2_1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_E2_1] | Value : " << boolState[relevant_evt_OF_E2_1] << endl;
	//cout << "Attribute :  boolState[failF_OF_E2_1] | Value : " << boolState[failF_OF_E2_1] << endl;
	//cout << "Attribute :  boolState[required_OF_E2_2] | Value : " << boolState[required_OF_E2_2] << endl;
	//cout << "Attribute :  boolState[already_S_OF_E2_2] | Value : " << boolState[already_S_OF_E2_2] << endl;
	//cout << "Attribute :  boolState[S_OF_E2_2] | Value : " << boolState[S_OF_E2_2] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_E2_2] | Value : " << boolState[relevant_evt_OF_E2_2] << endl;
	//cout << "Attribute :  boolState[failF_OF_E2_2] | Value : " << boolState[failF_OF_E2_2] << endl;
	//cout << "Attribute :  boolState[required_OF_E2_3] | Value : " << boolState[required_OF_E2_3] << endl;
	//cout << "Attribute :  boolState[already_S_OF_E2_3] | Value : " << boolState[already_S_OF_E2_3] << endl;
	//cout << "Attribute :  boolState[S_OF_E2_3] | Value : " << boolState[S_OF_E2_3] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_E2_3] | Value : " << boolState[relevant_evt_OF_E2_3] << endl;
	//cout << "Attribute :  boolState[failF_OF_E2_3] | Value : " << boolState[failF_OF_E2_3] << endl;
	//cout << "Attribute :  boolState[required_OF_E2_4] | Value : " << boolState[required_OF_E2_4] << endl;
	//cout << "Attribute :  boolState[already_S_OF_E2_4] | Value : " << boolState[already_S_OF_E2_4] << endl;
	//cout << "Attribute :  boolState[S_OF_E2_4] | Value : " << boolState[S_OF_E2_4] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_E2_4] | Value : " << boolState[relevant_evt_OF_E2_4] << endl;
	//cout << "Attribute :  boolState[failF_OF_E2_4] | Value : " << boolState[failF_OF_E2_4] << endl;
	//cout << "Attribute :  boolState[required_OF_E2_5] | Value : " << boolState[required_OF_E2_5] << endl;
	//cout << "Attribute :  boolState[already_S_OF_E2_5] | Value : " << boolState[already_S_OF_E2_5] << endl;
	//cout << "Attribute :  boolState[S_OF_E2_5] | Value : " << boolState[S_OF_E2_5] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_E2_5] | Value : " << boolState[relevant_evt_OF_E2_5] << endl;
	//cout << "Attribute :  boolState[failF_OF_E2_5] | Value : " << boolState[failF_OF_E2_5] << endl;
	//cout << "Attribute :  boolState[required_OF_E2_6] | Value : " << boolState[required_OF_E2_6] << endl;
	//cout << "Attribute :  boolState[already_S_OF_E2_6] | Value : " << boolState[already_S_OF_E2_6] << endl;
	//cout << "Attribute :  boolState[S_OF_E2_6] | Value : " << boolState[S_OF_E2_6] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_E2_6] | Value : " << boolState[relevant_evt_OF_E2_6] << endl;
	//cout << "Attribute :  boolState[failF_OF_E2_6] | Value : " << boolState[failF_OF_E2_6] << endl;
	//cout << "Attribute :  boolState[required_OF_E2_7] | Value : " << boolState[required_OF_E2_7] << endl;
	//cout << "Attribute :  boolState[already_S_OF_E2_7] | Value : " << boolState[already_S_OF_E2_7] << endl;
	//cout << "Attribute :  boolState[S_OF_E2_7] | Value : " << boolState[S_OF_E2_7] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_E2_7] | Value : " << boolState[relevant_evt_OF_E2_7] << endl;
	//cout << "Attribute :  boolState[failF_OF_E2_7] | Value : " << boolState[failF_OF_E2_7] << endl;
	//cout << "Attribute :  boolState[required_OF_E2_8] | Value : " << boolState[required_OF_E2_8] << endl;
	//cout << "Attribute :  boolState[already_S_OF_E2_8] | Value : " << boolState[already_S_OF_E2_8] << endl;
	//cout << "Attribute :  boolState[S_OF_E2_8] | Value : " << boolState[S_OF_E2_8] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_E2_8] | Value : " << boolState[relevant_evt_OF_E2_8] << endl;
	//cout << "Attribute :  boolState[failF_OF_E2_8] | Value : " << boolState[failF_OF_E2_8] << endl;
	//cout << "Attribute :  boolState[required_OF_E3_1] | Value : " << boolState[required_OF_E3_1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_E3_1] | Value : " << boolState[already_S_OF_E3_1] << endl;
	//cout << "Attribute :  boolState[S_OF_E3_1] | Value : " << boolState[S_OF_E3_1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_E3_1] | Value : " << boolState[relevant_evt_OF_E3_1] << endl;
	//cout << "Attribute :  boolState[failF_OF_E3_1] | Value : " << boolState[failF_OF_E3_1] << endl;
	//cout << "Attribute :  boolState[required_OF_E3_2] | Value : " << boolState[required_OF_E3_2] << endl;
	//cout << "Attribute :  boolState[already_S_OF_E3_2] | Value : " << boolState[already_S_OF_E3_2] << endl;
	//cout << "Attribute :  boolState[S_OF_E3_2] | Value : " << boolState[S_OF_E3_2] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_E3_2] | Value : " << boolState[relevant_evt_OF_E3_2] << endl;
	//cout << "Attribute :  boolState[failF_OF_E3_2] | Value : " << boolState[failF_OF_E3_2] << endl;
	//cout << "Attribute :  boolState[required_OF_E3_3] | Value : " << boolState[required_OF_E3_3] << endl;
	//cout << "Attribute :  boolState[already_S_OF_E3_3] | Value : " << boolState[already_S_OF_E3_3] << endl;
	//cout << "Attribute :  boolState[S_OF_E3_3] | Value : " << boolState[S_OF_E3_3] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_E3_3] | Value : " << boolState[relevant_evt_OF_E3_3] << endl;
	//cout << "Attribute :  boolState[failF_OF_E3_3] | Value : " << boolState[failF_OF_E3_3] << endl;
	//cout << "Attribute :  boolState[required_OF_E3_4] | Value : " << boolState[required_OF_E3_4] << endl;
	//cout << "Attribute :  boolState[already_S_OF_E3_4] | Value : " << boolState[already_S_OF_E3_4] << endl;
	//cout << "Attribute :  boolState[S_OF_E3_4] | Value : " << boolState[S_OF_E3_4] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_E3_4] | Value : " << boolState[relevant_evt_OF_E3_4] << endl;
	//cout << "Attribute :  boolState[failF_OF_E3_4] | Value : " << boolState[failF_OF_E3_4] << endl;
	//cout << "Attribute :  boolState[required_OF_E3_5] | Value : " << boolState[required_OF_E3_5] << endl;
	//cout << "Attribute :  boolState[already_S_OF_E3_5] | Value : " << boolState[already_S_OF_E3_5] << endl;
	//cout << "Attribute :  boolState[S_OF_E3_5] | Value : " << boolState[S_OF_E3_5] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_E3_5] | Value : " << boolState[relevant_evt_OF_E3_5] << endl;
	//cout << "Attribute :  boolState[failF_OF_E3_5] | Value : " << boolState[failF_OF_E3_5] << endl;
	//cout << "Attribute :  boolState[required_OF_E3_6] | Value : " << boolState[required_OF_E3_6] << endl;
	//cout << "Attribute :  boolState[already_S_OF_E3_6] | Value : " << boolState[already_S_OF_E3_6] << endl;
	//cout << "Attribute :  boolState[S_OF_E3_6] | Value : " << boolState[S_OF_E3_6] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_E3_6] | Value : " << boolState[relevant_evt_OF_E3_6] << endl;
	//cout << "Attribute :  boolState[failF_OF_E3_6] | Value : " << boolState[failF_OF_E3_6] << endl;
	//cout << "Attribute :  boolState[required_OF_E3_7] | Value : " << boolState[required_OF_E3_7] << endl;
	//cout << "Attribute :  boolState[already_S_OF_E3_7] | Value : " << boolState[already_S_OF_E3_7] << endl;
	//cout << "Attribute :  boolState[S_OF_E3_7] | Value : " << boolState[S_OF_E3_7] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_E3_7] | Value : " << boolState[relevant_evt_OF_E3_7] << endl;
	//cout << "Attribute :  boolState[failF_OF_E3_7] | Value : " << boolState[failF_OF_E3_7] << endl;
	//cout << "Attribute :  boolState[required_OF_E3_8] | Value : " << boolState[required_OF_E3_8] << endl;
	//cout << "Attribute :  boolState[already_S_OF_E3_8] | Value : " << boolState[already_S_OF_E3_8] << endl;
	//cout << "Attribute :  boolState[S_OF_E3_8] | Value : " << boolState[S_OF_E3_8] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_E3_8] | Value : " << boolState[relevant_evt_OF_E3_8] << endl;
	//cout << "Attribute :  boolState[failF_OF_E3_8] | Value : " << boolState[failF_OF_E3_8] << endl;
	//cout << "Attribute :  boolState[required_OF_E4_1] | Value : " << boolState[required_OF_E4_1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_E4_1] | Value : " << boolState[already_S_OF_E4_1] << endl;
	//cout << "Attribute :  boolState[S_OF_E4_1] | Value : " << boolState[S_OF_E4_1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_E4_1] | Value : " << boolState[relevant_evt_OF_E4_1] << endl;
	//cout << "Attribute :  boolState[failF_OF_E4_1] | Value : " << boolState[failF_OF_E4_1] << endl;
	//cout << "Attribute :  boolState[required_OF_E4_2] | Value : " << boolState[required_OF_E4_2] << endl;
	//cout << "Attribute :  boolState[already_S_OF_E4_2] | Value : " << boolState[already_S_OF_E4_2] << endl;
	//cout << "Attribute :  boolState[S_OF_E4_2] | Value : " << boolState[S_OF_E4_2] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_E4_2] | Value : " << boolState[relevant_evt_OF_E4_2] << endl;
	//cout << "Attribute :  boolState[failF_OF_E4_2] | Value : " << boolState[failF_OF_E4_2] << endl;
	//cout << "Attribute :  boolState[required_OF_E4_3] | Value : " << boolState[required_OF_E4_3] << endl;
	//cout << "Attribute :  boolState[already_S_OF_E4_3] | Value : " << boolState[already_S_OF_E4_3] << endl;
	//cout << "Attribute :  boolState[S_OF_E4_3] | Value : " << boolState[S_OF_E4_3] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_E4_3] | Value : " << boolState[relevant_evt_OF_E4_3] << endl;
	//cout << "Attribute :  boolState[failF_OF_E4_3] | Value : " << boolState[failF_OF_E4_3] << endl;
	//cout << "Attribute :  boolState[required_OF_E4_4] | Value : " << boolState[required_OF_E4_4] << endl;
	//cout << "Attribute :  boolState[already_S_OF_E4_4] | Value : " << boolState[already_S_OF_E4_4] << endl;
	//cout << "Attribute :  boolState[S_OF_E4_4] | Value : " << boolState[S_OF_E4_4] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_E4_4] | Value : " << boolState[relevant_evt_OF_E4_4] << endl;
	//cout << "Attribute :  boolState[failF_OF_E4_4] | Value : " << boolState[failF_OF_E4_4] << endl;
	//cout << "Attribute :  boolState[required_OF_E4_5] | Value : " << boolState[required_OF_E4_5] << endl;
	//cout << "Attribute :  boolState[already_S_OF_E4_5] | Value : " << boolState[already_S_OF_E4_5] << endl;
	//cout << "Attribute :  boolState[S_OF_E4_5] | Value : " << boolState[S_OF_E4_5] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_E4_5] | Value : " << boolState[relevant_evt_OF_E4_5] << endl;
	//cout << "Attribute :  boolState[failF_OF_E4_5] | Value : " << boolState[failF_OF_E4_5] << endl;
	//cout << "Attribute :  boolState[required_OF_E4_6] | Value : " << boolState[required_OF_E4_6] << endl;
	//cout << "Attribute :  boolState[already_S_OF_E4_6] | Value : " << boolState[already_S_OF_E4_6] << endl;
	//cout << "Attribute :  boolState[S_OF_E4_6] | Value : " << boolState[S_OF_E4_6] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_E4_6] | Value : " << boolState[relevant_evt_OF_E4_6] << endl;
	//cout << "Attribute :  boolState[failF_OF_E4_6] | Value : " << boolState[failF_OF_E4_6] << endl;
	//cout << "Attribute :  boolState[required_OF_E4_7] | Value : " << boolState[required_OF_E4_7] << endl;
	//cout << "Attribute :  boolState[already_S_OF_E4_7] | Value : " << boolState[already_S_OF_E4_7] << endl;
	//cout << "Attribute :  boolState[S_OF_E4_7] | Value : " << boolState[S_OF_E4_7] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_E4_7] | Value : " << boolState[relevant_evt_OF_E4_7] << endl;
	//cout << "Attribute :  boolState[failF_OF_E4_7] | Value : " << boolState[failF_OF_E4_7] << endl;
	//cout << "Attribute :  boolState[required_OF_E4_8] | Value : " << boolState[required_OF_E4_8] << endl;
	//cout << "Attribute :  boolState[already_S_OF_E4_8] | Value : " << boolState[already_S_OF_E4_8] << endl;
	//cout << "Attribute :  boolState[S_OF_E4_8] | Value : " << boolState[S_OF_E4_8] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_E4_8] | Value : " << boolState[relevant_evt_OF_E4_8] << endl;
	//cout << "Attribute :  boolState[failF_OF_E4_8] | Value : " << boolState[failF_OF_E4_8] << endl;
	//cout << "Attribute :  boolState[required_OF_EC1_1] | Value : " << boolState[required_OF_EC1_1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_EC1_1] | Value : " << boolState[already_S_OF_EC1_1] << endl;
	//cout << "Attribute :  boolState[S_OF_EC1_1] | Value : " << boolState[S_OF_EC1_1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_EC1_1] | Value : " << boolState[relevant_evt_OF_EC1_1] << endl;
	//cout << "Attribute :  boolState[failF_OF_EC1_1] | Value : " << boolState[failF_OF_EC1_1] << endl;
	//cout << "Attribute :  boolState[required_OF_EC1_2] | Value : " << boolState[required_OF_EC1_2] << endl;
	//cout << "Attribute :  boolState[already_S_OF_EC1_2] | Value : " << boolState[already_S_OF_EC1_2] << endl;
	//cout << "Attribute :  boolState[S_OF_EC1_2] | Value : " << boolState[S_OF_EC1_2] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_EC1_2] | Value : " << boolState[relevant_evt_OF_EC1_2] << endl;
	//cout << "Attribute :  boolState[failF_OF_EC1_2] | Value : " << boolState[failF_OF_EC1_2] << endl;
	//cout << "Attribute :  boolState[required_OF_EC1_3] | Value : " << boolState[required_OF_EC1_3] << endl;
	//cout << "Attribute :  boolState[already_S_OF_EC1_3] | Value : " << boolState[already_S_OF_EC1_3] << endl;
	//cout << "Attribute :  boolState[S_OF_EC1_3] | Value : " << boolState[S_OF_EC1_3] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_EC1_3] | Value : " << boolState[relevant_evt_OF_EC1_3] << endl;
	//cout << "Attribute :  boolState[failF_OF_EC1_3] | Value : " << boolState[failF_OF_EC1_3] << endl;
	//cout << "Attribute :  boolState[required_OF_EC1_4] | Value : " << boolState[required_OF_EC1_4] << endl;
	//cout << "Attribute :  boolState[already_S_OF_EC1_4] | Value : " << boolState[already_S_OF_EC1_4] << endl;
	//cout << "Attribute :  boolState[S_OF_EC1_4] | Value : " << boolState[S_OF_EC1_4] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_EC1_4] | Value : " << boolState[relevant_evt_OF_EC1_4] << endl;
	//cout << "Attribute :  boolState[failF_OF_EC1_4] | Value : " << boolState[failF_OF_EC1_4] << endl;
	//cout << "Attribute :  boolState[required_OF_EC1_5] | Value : " << boolState[required_OF_EC1_5] << endl;
	//cout << "Attribute :  boolState[already_S_OF_EC1_5] | Value : " << boolState[already_S_OF_EC1_5] << endl;
	//cout << "Attribute :  boolState[S_OF_EC1_5] | Value : " << boolState[S_OF_EC1_5] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_EC1_5] | Value : " << boolState[relevant_evt_OF_EC1_5] << endl;
	//cout << "Attribute :  boolState[failF_OF_EC1_5] | Value : " << boolState[failF_OF_EC1_5] << endl;
	//cout << "Attribute :  boolState[required_OF_EC1_6] | Value : " << boolState[required_OF_EC1_6] << endl;
	//cout << "Attribute :  boolState[already_S_OF_EC1_6] | Value : " << boolState[already_S_OF_EC1_6] << endl;
	//cout << "Attribute :  boolState[S_OF_EC1_6] | Value : " << boolState[S_OF_EC1_6] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_EC1_6] | Value : " << boolState[relevant_evt_OF_EC1_6] << endl;
	//cout << "Attribute :  boolState[failF_OF_EC1_6] | Value : " << boolState[failF_OF_EC1_6] << endl;
	//cout << "Attribute :  boolState[required_OF_EC1_7] | Value : " << boolState[required_OF_EC1_7] << endl;
	//cout << "Attribute :  boolState[already_S_OF_EC1_7] | Value : " << boolState[already_S_OF_EC1_7] << endl;
	//cout << "Attribute :  boolState[S_OF_EC1_7] | Value : " << boolState[S_OF_EC1_7] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_EC1_7] | Value : " << boolState[relevant_evt_OF_EC1_7] << endl;
	//cout << "Attribute :  boolState[failF_OF_EC1_7] | Value : " << boolState[failF_OF_EC1_7] << endl;
	//cout << "Attribute :  boolState[required_OF_EC1_8] | Value : " << boolState[required_OF_EC1_8] << endl;
	//cout << "Attribute :  boolState[already_S_OF_EC1_8] | Value : " << boolState[already_S_OF_EC1_8] << endl;
	//cout << "Attribute :  boolState[S_OF_EC1_8] | Value : " << boolState[S_OF_EC1_8] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_EC1_8] | Value : " << boolState[relevant_evt_OF_EC1_8] << endl;
	//cout << "Attribute :  boolState[failF_OF_EC1_8] | Value : " << boolState[failF_OF_EC1_8] << endl;
	//cout << "Attribute :  boolState[required_OF_EC2_1] | Value : " << boolState[required_OF_EC2_1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_EC2_1] | Value : " << boolState[already_S_OF_EC2_1] << endl;
	//cout << "Attribute :  boolState[S_OF_EC2_1] | Value : " << boolState[S_OF_EC2_1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_EC2_1] | Value : " << boolState[relevant_evt_OF_EC2_1] << endl;
	//cout << "Attribute :  boolState[failF_OF_EC2_1] | Value : " << boolState[failF_OF_EC2_1] << endl;
	//cout << "Attribute :  boolState[required_OF_EC2_2] | Value : " << boolState[required_OF_EC2_2] << endl;
	//cout << "Attribute :  boolState[already_S_OF_EC2_2] | Value : " << boolState[already_S_OF_EC2_2] << endl;
	//cout << "Attribute :  boolState[S_OF_EC2_2] | Value : " << boolState[S_OF_EC2_2] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_EC2_2] | Value : " << boolState[relevant_evt_OF_EC2_2] << endl;
	//cout << "Attribute :  boolState[failF_OF_EC2_2] | Value : " << boolState[failF_OF_EC2_2] << endl;
	//cout << "Attribute :  boolState[required_OF_EC2_3] | Value : " << boolState[required_OF_EC2_3] << endl;
	//cout << "Attribute :  boolState[already_S_OF_EC2_3] | Value : " << boolState[already_S_OF_EC2_3] << endl;
	//cout << "Attribute :  boolState[S_OF_EC2_3] | Value : " << boolState[S_OF_EC2_3] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_EC2_3] | Value : " << boolState[relevant_evt_OF_EC2_3] << endl;
	//cout << "Attribute :  boolState[failF_OF_EC2_3] | Value : " << boolState[failF_OF_EC2_3] << endl;
	//cout << "Attribute :  boolState[required_OF_EC2_4] | Value : " << boolState[required_OF_EC2_4] << endl;
	//cout << "Attribute :  boolState[already_S_OF_EC2_4] | Value : " << boolState[already_S_OF_EC2_4] << endl;
	//cout << "Attribute :  boolState[S_OF_EC2_4] | Value : " << boolState[S_OF_EC2_4] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_EC2_4] | Value : " << boolState[relevant_evt_OF_EC2_4] << endl;
	//cout << "Attribute :  boolState[failF_OF_EC2_4] | Value : " << boolState[failF_OF_EC2_4] << endl;
	//cout << "Attribute :  boolState[required_OF_EC2_5] | Value : " << boolState[required_OF_EC2_5] << endl;
	//cout << "Attribute :  boolState[already_S_OF_EC2_5] | Value : " << boolState[already_S_OF_EC2_5] << endl;
	//cout << "Attribute :  boolState[S_OF_EC2_5] | Value : " << boolState[S_OF_EC2_5] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_EC2_5] | Value : " << boolState[relevant_evt_OF_EC2_5] << endl;
	//cout << "Attribute :  boolState[failF_OF_EC2_5] | Value : " << boolState[failF_OF_EC2_5] << endl;
	//cout << "Attribute :  boolState[required_OF_EC2_6] | Value : " << boolState[required_OF_EC2_6] << endl;
	//cout << "Attribute :  boolState[already_S_OF_EC2_6] | Value : " << boolState[already_S_OF_EC2_6] << endl;
	//cout << "Attribute :  boolState[S_OF_EC2_6] | Value : " << boolState[S_OF_EC2_6] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_EC2_6] | Value : " << boolState[relevant_evt_OF_EC2_6] << endl;
	//cout << "Attribute :  boolState[failF_OF_EC2_6] | Value : " << boolState[failF_OF_EC2_6] << endl;
	//cout << "Attribute :  boolState[required_OF_EC2_7] | Value : " << boolState[required_OF_EC2_7] << endl;
	//cout << "Attribute :  boolState[already_S_OF_EC2_7] | Value : " << boolState[already_S_OF_EC2_7] << endl;
	//cout << "Attribute :  boolState[S_OF_EC2_7] | Value : " << boolState[S_OF_EC2_7] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_EC2_7] | Value : " << boolState[relevant_evt_OF_EC2_7] << endl;
	//cout << "Attribute :  boolState[failF_OF_EC2_7] | Value : " << boolState[failF_OF_EC2_7] << endl;
	//cout << "Attribute :  boolState[required_OF_EC2_8] | Value : " << boolState[required_OF_EC2_8] << endl;
	//cout << "Attribute :  boolState[already_S_OF_EC2_8] | Value : " << boolState[already_S_OF_EC2_8] << endl;
	//cout << "Attribute :  boolState[S_OF_EC2_8] | Value : " << boolState[S_OF_EC2_8] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_EC2_8] | Value : " << boolState[relevant_evt_OF_EC2_8] << endl;
	//cout << "Attribute :  boolState[failF_OF_EC2_8] | Value : " << boolState[failF_OF_EC2_8] << endl;
	//cout << "Attribute :  boolState[required_OF_EC3_1] | Value : " << boolState[required_OF_EC3_1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_EC3_1] | Value : " << boolState[already_S_OF_EC3_1] << endl;
	//cout << "Attribute :  boolState[S_OF_EC3_1] | Value : " << boolState[S_OF_EC3_1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_EC3_1] | Value : " << boolState[relevant_evt_OF_EC3_1] << endl;
	//cout << "Attribute :  boolState[failF_OF_EC3_1] | Value : " << boolState[failF_OF_EC3_1] << endl;
	//cout << "Attribute :  boolState[required_OF_EC3_2] | Value : " << boolState[required_OF_EC3_2] << endl;
	//cout << "Attribute :  boolState[already_S_OF_EC3_2] | Value : " << boolState[already_S_OF_EC3_2] << endl;
	//cout << "Attribute :  boolState[S_OF_EC3_2] | Value : " << boolState[S_OF_EC3_2] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_EC3_2] | Value : " << boolState[relevant_evt_OF_EC3_2] << endl;
	//cout << "Attribute :  boolState[failF_OF_EC3_2] | Value : " << boolState[failF_OF_EC3_2] << endl;
	//cout << "Attribute :  boolState[required_OF_EC3_3] | Value : " << boolState[required_OF_EC3_3] << endl;
	//cout << "Attribute :  boolState[already_S_OF_EC3_3] | Value : " << boolState[already_S_OF_EC3_3] << endl;
	//cout << "Attribute :  boolState[S_OF_EC3_3] | Value : " << boolState[S_OF_EC3_3] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_EC3_3] | Value : " << boolState[relevant_evt_OF_EC3_3] << endl;
	//cout << "Attribute :  boolState[failF_OF_EC3_3] | Value : " << boolState[failF_OF_EC3_3] << endl;
	//cout << "Attribute :  boolState[required_OF_EC3_4] | Value : " << boolState[required_OF_EC3_4] << endl;
	//cout << "Attribute :  boolState[already_S_OF_EC3_4] | Value : " << boolState[already_S_OF_EC3_4] << endl;
	//cout << "Attribute :  boolState[S_OF_EC3_4] | Value : " << boolState[S_OF_EC3_4] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_EC3_4] | Value : " << boolState[relevant_evt_OF_EC3_4] << endl;
	//cout << "Attribute :  boolState[failF_OF_EC3_4] | Value : " << boolState[failF_OF_EC3_4] << endl;
	//cout << "Attribute :  boolState[required_OF_EC3_5] | Value : " << boolState[required_OF_EC3_5] << endl;
	//cout << "Attribute :  boolState[already_S_OF_EC3_5] | Value : " << boolState[already_S_OF_EC3_5] << endl;
	//cout << "Attribute :  boolState[S_OF_EC3_5] | Value : " << boolState[S_OF_EC3_5] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_EC3_5] | Value : " << boolState[relevant_evt_OF_EC3_5] << endl;
	//cout << "Attribute :  boolState[failF_OF_EC3_5] | Value : " << boolState[failF_OF_EC3_5] << endl;
	//cout << "Attribute :  boolState[required_OF_EC3_6] | Value : " << boolState[required_OF_EC3_6] << endl;
	//cout << "Attribute :  boolState[already_S_OF_EC3_6] | Value : " << boolState[already_S_OF_EC3_6] << endl;
	//cout << "Attribute :  boolState[S_OF_EC3_6] | Value : " << boolState[S_OF_EC3_6] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_EC3_6] | Value : " << boolState[relevant_evt_OF_EC3_6] << endl;
	//cout << "Attribute :  boolState[failF_OF_EC3_6] | Value : " << boolState[failF_OF_EC3_6] << endl;
	//cout << "Attribute :  boolState[required_OF_EC3_7] | Value : " << boolState[required_OF_EC3_7] << endl;
	//cout << "Attribute :  boolState[already_S_OF_EC3_7] | Value : " << boolState[already_S_OF_EC3_7] << endl;
	//cout << "Attribute :  boolState[S_OF_EC3_7] | Value : " << boolState[S_OF_EC3_7] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_EC3_7] | Value : " << boolState[relevant_evt_OF_EC3_7] << endl;
	//cout << "Attribute :  boolState[failF_OF_EC3_7] | Value : " << boolState[failF_OF_EC3_7] << endl;
	//cout << "Attribute :  boolState[required_OF_EC3_8] | Value : " << boolState[required_OF_EC3_8] << endl;
	//cout << "Attribute :  boolState[already_S_OF_EC3_8] | Value : " << boolState[already_S_OF_EC3_8] << endl;
	//cout << "Attribute :  boolState[S_OF_EC3_8] | Value : " << boolState[S_OF_EC3_8] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_EC3_8] | Value : " << boolState[relevant_evt_OF_EC3_8] << endl;
	//cout << "Attribute :  boolState[failF_OF_EC3_8] | Value : " << boolState[failF_OF_EC3_8] << endl;
	//cout << "Attribute :  boolState[required_OF_Filter_1] | Value : " << boolState[required_OF_Filter_1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_Filter_1] | Value : " << boolState[already_S_OF_Filter_1] << endl;
	//cout << "Attribute :  boolState[S_OF_Filter_1] | Value : " << boolState[S_OF_Filter_1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_Filter_1] | Value : " << boolState[relevant_evt_OF_Filter_1] << endl;
	//cout << "Attribute :  boolState[required_OF_Filter_2] | Value : " << boolState[required_OF_Filter_2] << endl;
	//cout << "Attribute :  boolState[already_S_OF_Filter_2] | Value : " << boolState[already_S_OF_Filter_2] << endl;
	//cout << "Attribute :  boolState[S_OF_Filter_2] | Value : " << boolState[S_OF_Filter_2] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_Filter_2] | Value : " << boolState[relevant_evt_OF_Filter_2] << endl;
	//cout << "Attribute :  boolState[required_OF_Filter_3] | Value : " << boolState[required_OF_Filter_3] << endl;
	//cout << "Attribute :  boolState[already_S_OF_Filter_3] | Value : " << boolState[already_S_OF_Filter_3] << endl;
	//cout << "Attribute :  boolState[S_OF_Filter_3] | Value : " << boolState[S_OF_Filter_3] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_Filter_3] | Value : " << boolState[relevant_evt_OF_Filter_3] << endl;
	//cout << "Attribute :  boolState[required_OF_Filter_4] | Value : " << boolState[required_OF_Filter_4] << endl;
	//cout << "Attribute :  boolState[already_S_OF_Filter_4] | Value : " << boolState[already_S_OF_Filter_4] << endl;
	//cout << "Attribute :  boolState[S_OF_Filter_4] | Value : " << boolState[S_OF_Filter_4] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_Filter_4] | Value : " << boolState[relevant_evt_OF_Filter_4] << endl;
	//cout << "Attribute :  boolState[required_OF_Filter_5] | Value : " << boolState[required_OF_Filter_5] << endl;
	//cout << "Attribute :  boolState[already_S_OF_Filter_5] | Value : " << boolState[already_S_OF_Filter_5] << endl;
	//cout << "Attribute :  boolState[S_OF_Filter_5] | Value : " << boolState[S_OF_Filter_5] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_Filter_5] | Value : " << boolState[relevant_evt_OF_Filter_5] << endl;
	//cout << "Attribute :  boolState[required_OF_Filter_6] | Value : " << boolState[required_OF_Filter_6] << endl;
	//cout << "Attribute :  boolState[already_S_OF_Filter_6] | Value : " << boolState[already_S_OF_Filter_6] << endl;
	//cout << "Attribute :  boolState[S_OF_Filter_6] | Value : " << boolState[S_OF_Filter_6] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_Filter_6] | Value : " << boolState[relevant_evt_OF_Filter_6] << endl;
	//cout << "Attribute :  boolState[required_OF_Filter_7] | Value : " << boolState[required_OF_Filter_7] << endl;
	//cout << "Attribute :  boolState[already_S_OF_Filter_7] | Value : " << boolState[already_S_OF_Filter_7] << endl;
	//cout << "Attribute :  boolState[S_OF_Filter_7] | Value : " << boolState[S_OF_Filter_7] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_Filter_7] | Value : " << boolState[relevant_evt_OF_Filter_7] << endl;
	//cout << "Attribute :  boolState[required_OF_Filter_8] | Value : " << boolState[required_OF_Filter_8] << endl;
	//cout << "Attribute :  boolState[already_S_OF_Filter_8] | Value : " << boolState[already_S_OF_Filter_8] << endl;
	//cout << "Attribute :  boolState[S_OF_Filter_8] | Value : " << boolState[S_OF_Filter_8] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_Filter_8] | Value : " << boolState[relevant_evt_OF_Filter_8] << endl;
	//cout << "Attribute :  boolState[required_OF_System] | Value : " << boolState[required_OF_System] << endl;
	//cout << "Attribute :  boolState[already_S_OF_System] | Value : " << boolState[already_S_OF_System] << endl;
	//cout << "Attribute :  boolState[S_OF_System] | Value : " << boolState[S_OF_System] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_System] | Value : " << boolState[relevant_evt_OF_System] << endl;
	//cout << "Attribute :  boolState[required_OF_UE_1] | Value : " << boolState[required_OF_UE_1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_UE_1] | Value : " << boolState[already_S_OF_UE_1] << endl;
	//cout << "Attribute :  boolState[S_OF_UE_1] | Value : " << boolState[S_OF_UE_1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_UE_1] | Value : " << boolState[relevant_evt_OF_UE_1] << endl;
	//cout << "Attribute :  boolState[required_OF_fault_cfg_1_1] | Value : " << boolState[required_OF_fault_cfg_1_1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_fault_cfg_1_1] | Value : " << boolState[already_S_OF_fault_cfg_1_1] << endl;
	//cout << "Attribute :  boolState[S_OF_fault_cfg_1_1] | Value : " << boolState[S_OF_fault_cfg_1_1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_fault_cfg_1_1] | Value : " << boolState[relevant_evt_OF_fault_cfg_1_1] << endl;
	//cout << "Attribute :  boolState[required_OF_fault_cfg_1_2] | Value : " << boolState[required_OF_fault_cfg_1_2] << endl;
	//cout << "Attribute :  boolState[already_S_OF_fault_cfg_1_2] | Value : " << boolState[already_S_OF_fault_cfg_1_2] << endl;
	//cout << "Attribute :  boolState[S_OF_fault_cfg_1_2] | Value : " << boolState[S_OF_fault_cfg_1_2] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_fault_cfg_1_2] | Value : " << boolState[relevant_evt_OF_fault_cfg_1_2] << endl;
	//cout << "Attribute :  boolState[required_OF_fault_cfg_1_3] | Value : " << boolState[required_OF_fault_cfg_1_3] << endl;
	//cout << "Attribute :  boolState[already_S_OF_fault_cfg_1_3] | Value : " << boolState[already_S_OF_fault_cfg_1_3] << endl;
	//cout << "Attribute :  boolState[S_OF_fault_cfg_1_3] | Value : " << boolState[S_OF_fault_cfg_1_3] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_fault_cfg_1_3] | Value : " << boolState[relevant_evt_OF_fault_cfg_1_3] << endl;
	//cout << "Attribute :  boolState[required_OF_fault_cfg_1_4] | Value : " << boolState[required_OF_fault_cfg_1_4] << endl;
	//cout << "Attribute :  boolState[already_S_OF_fault_cfg_1_4] | Value : " << boolState[already_S_OF_fault_cfg_1_4] << endl;
	//cout << "Attribute :  boolState[S_OF_fault_cfg_1_4] | Value : " << boolState[S_OF_fault_cfg_1_4] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_fault_cfg_1_4] | Value : " << boolState[relevant_evt_OF_fault_cfg_1_4] << endl;
	//cout << "Attribute :  boolState[required_OF_fault_cfg_1_5] | Value : " << boolState[required_OF_fault_cfg_1_5] << endl;
	//cout << "Attribute :  boolState[already_S_OF_fault_cfg_1_5] | Value : " << boolState[already_S_OF_fault_cfg_1_5] << endl;
	//cout << "Attribute :  boolState[S_OF_fault_cfg_1_5] | Value : " << boolState[S_OF_fault_cfg_1_5] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_fault_cfg_1_5] | Value : " << boolState[relevant_evt_OF_fault_cfg_1_5] << endl;
	//cout << "Attribute :  boolState[required_OF_fault_cfg_1_6] | Value : " << boolState[required_OF_fault_cfg_1_6] << endl;
	//cout << "Attribute :  boolState[already_S_OF_fault_cfg_1_6] | Value : " << boolState[already_S_OF_fault_cfg_1_6] << endl;
	//cout << "Attribute :  boolState[S_OF_fault_cfg_1_6] | Value : " << boolState[S_OF_fault_cfg_1_6] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_fault_cfg_1_6] | Value : " << boolState[relevant_evt_OF_fault_cfg_1_6] << endl;
	//cout << "Attribute :  boolState[required_OF_fault_cfg_1_7] | Value : " << boolState[required_OF_fault_cfg_1_7] << endl;
	//cout << "Attribute :  boolState[already_S_OF_fault_cfg_1_7] | Value : " << boolState[already_S_OF_fault_cfg_1_7] << endl;
	//cout << "Attribute :  boolState[S_OF_fault_cfg_1_7] | Value : " << boolState[S_OF_fault_cfg_1_7] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_fault_cfg_1_7] | Value : " << boolState[relevant_evt_OF_fault_cfg_1_7] << endl;
	//cout << "Attribute :  boolState[required_OF_fault_cfg_1_8] | Value : " << boolState[required_OF_fault_cfg_1_8] << endl;
	//cout << "Attribute :  boolState[already_S_OF_fault_cfg_1_8] | Value : " << boolState[already_S_OF_fault_cfg_1_8] << endl;
	//cout << "Attribute :  boolState[S_OF_fault_cfg_1_8] | Value : " << boolState[S_OF_fault_cfg_1_8] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_fault_cfg_1_8] | Value : " << boolState[relevant_evt_OF_fault_cfg_1_8] << endl;
	//cout << "Attribute :  boolState[required_OF_fault_cfg_3_1] | Value : " << boolState[required_OF_fault_cfg_3_1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_fault_cfg_3_1] | Value : " << boolState[already_S_OF_fault_cfg_3_1] << endl;
	//cout << "Attribute :  boolState[S_OF_fault_cfg_3_1] | Value : " << boolState[S_OF_fault_cfg_3_1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_fault_cfg_3_1] | Value : " << boolState[relevant_evt_OF_fault_cfg_3_1] << endl;
	//cout << "Attribute :  boolState[required_OF_fault_cfg_3_2] | Value : " << boolState[required_OF_fault_cfg_3_2] << endl;
	//cout << "Attribute :  boolState[already_S_OF_fault_cfg_3_2] | Value : " << boolState[already_S_OF_fault_cfg_3_2] << endl;
	//cout << "Attribute :  boolState[S_OF_fault_cfg_3_2] | Value : " << boolState[S_OF_fault_cfg_3_2] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_fault_cfg_3_2] | Value : " << boolState[relevant_evt_OF_fault_cfg_3_2] << endl;
	//cout << "Attribute :  boolState[required_OF_fault_cfg_3_3] | Value : " << boolState[required_OF_fault_cfg_3_3] << endl;
	//cout << "Attribute :  boolState[already_S_OF_fault_cfg_3_3] | Value : " << boolState[already_S_OF_fault_cfg_3_3] << endl;
	//cout << "Attribute :  boolState[S_OF_fault_cfg_3_3] | Value : " << boolState[S_OF_fault_cfg_3_3] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_fault_cfg_3_3] | Value : " << boolState[relevant_evt_OF_fault_cfg_3_3] << endl;
	//cout << "Attribute :  boolState[required_OF_fault_cfg_3_4] | Value : " << boolState[required_OF_fault_cfg_3_4] << endl;
	//cout << "Attribute :  boolState[already_S_OF_fault_cfg_3_4] | Value : " << boolState[already_S_OF_fault_cfg_3_4] << endl;
	//cout << "Attribute :  boolState[S_OF_fault_cfg_3_4] | Value : " << boolState[S_OF_fault_cfg_3_4] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_fault_cfg_3_4] | Value : " << boolState[relevant_evt_OF_fault_cfg_3_4] << endl;
	//cout << "Attribute :  boolState[required_OF_fault_cfg_3_5] | Value : " << boolState[required_OF_fault_cfg_3_5] << endl;
	//cout << "Attribute :  boolState[already_S_OF_fault_cfg_3_5] | Value : " << boolState[already_S_OF_fault_cfg_3_5] << endl;
	//cout << "Attribute :  boolState[S_OF_fault_cfg_3_5] | Value : " << boolState[S_OF_fault_cfg_3_5] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_fault_cfg_3_5] | Value : " << boolState[relevant_evt_OF_fault_cfg_3_5] << endl;
	//cout << "Attribute :  boolState[required_OF_fault_cfg_3_6] | Value : " << boolState[required_OF_fault_cfg_3_6] << endl;
	//cout << "Attribute :  boolState[already_S_OF_fault_cfg_3_6] | Value : " << boolState[already_S_OF_fault_cfg_3_6] << endl;
	//cout << "Attribute :  boolState[S_OF_fault_cfg_3_6] | Value : " << boolState[S_OF_fault_cfg_3_6] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_fault_cfg_3_6] | Value : " << boolState[relevant_evt_OF_fault_cfg_3_6] << endl;
	//cout << "Attribute :  boolState[required_OF_fault_cfg_3_7] | Value : " << boolState[required_OF_fault_cfg_3_7] << endl;
	//cout << "Attribute :  boolState[already_S_OF_fault_cfg_3_7] | Value : " << boolState[already_S_OF_fault_cfg_3_7] << endl;
	//cout << "Attribute :  boolState[S_OF_fault_cfg_3_7] | Value : " << boolState[S_OF_fault_cfg_3_7] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_fault_cfg_3_7] | Value : " << boolState[relevant_evt_OF_fault_cfg_3_7] << endl;
	//cout << "Attribute :  boolState[required_OF_fault_cfg_3_8] | Value : " << boolState[required_OF_fault_cfg_3_8] << endl;
	//cout << "Attribute :  boolState[already_S_OF_fault_cfg_3_8] | Value : " << boolState[already_S_OF_fault_cfg_3_8] << endl;
	//cout << "Attribute :  boolState[S_OF_fault_cfg_3_8] | Value : " << boolState[S_OF_fault_cfg_3_8] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_fault_cfg_3_8] | Value : " << boolState[relevant_evt_OF_fault_cfg_3_8] << endl;
	//cout << "Attribute :  boolState[required_OF_fault_cfg_4_1] | Value : " << boolState[required_OF_fault_cfg_4_1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_fault_cfg_4_1] | Value : " << boolState[already_S_OF_fault_cfg_4_1] << endl;
	//cout << "Attribute :  boolState[S_OF_fault_cfg_4_1] | Value : " << boolState[S_OF_fault_cfg_4_1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_fault_cfg_4_1] | Value : " << boolState[relevant_evt_OF_fault_cfg_4_1] << endl;
	//cout << "Attribute :  boolState[required_OF_fault_cfg_4_2] | Value : " << boolState[required_OF_fault_cfg_4_2] << endl;
	//cout << "Attribute :  boolState[already_S_OF_fault_cfg_4_2] | Value : " << boolState[already_S_OF_fault_cfg_4_2] << endl;
	//cout << "Attribute :  boolState[S_OF_fault_cfg_4_2] | Value : " << boolState[S_OF_fault_cfg_4_2] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_fault_cfg_4_2] | Value : " << boolState[relevant_evt_OF_fault_cfg_4_2] << endl;
	//cout << "Attribute :  boolState[required_OF_fault_cfg_4_3] | Value : " << boolState[required_OF_fault_cfg_4_3] << endl;
	//cout << "Attribute :  boolState[already_S_OF_fault_cfg_4_3] | Value : " << boolState[already_S_OF_fault_cfg_4_3] << endl;
	//cout << "Attribute :  boolState[S_OF_fault_cfg_4_3] | Value : " << boolState[S_OF_fault_cfg_4_3] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_fault_cfg_4_3] | Value : " << boolState[relevant_evt_OF_fault_cfg_4_3] << endl;
	//cout << "Attribute :  boolState[required_OF_fault_cfg_4_4] | Value : " << boolState[required_OF_fault_cfg_4_4] << endl;
	//cout << "Attribute :  boolState[already_S_OF_fault_cfg_4_4] | Value : " << boolState[already_S_OF_fault_cfg_4_4] << endl;
	//cout << "Attribute :  boolState[S_OF_fault_cfg_4_4] | Value : " << boolState[S_OF_fault_cfg_4_4] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_fault_cfg_4_4] | Value : " << boolState[relevant_evt_OF_fault_cfg_4_4] << endl;
	//cout << "Attribute :  boolState[required_OF_fault_cfg_4_5] | Value : " << boolState[required_OF_fault_cfg_4_5] << endl;
	//cout << "Attribute :  boolState[already_S_OF_fault_cfg_4_5] | Value : " << boolState[already_S_OF_fault_cfg_4_5] << endl;
	//cout << "Attribute :  boolState[S_OF_fault_cfg_4_5] | Value : " << boolState[S_OF_fault_cfg_4_5] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_fault_cfg_4_5] | Value : " << boolState[relevant_evt_OF_fault_cfg_4_5] << endl;
	//cout << "Attribute :  boolState[required_OF_fault_cfg_4_6] | Value : " << boolState[required_OF_fault_cfg_4_6] << endl;
	//cout << "Attribute :  boolState[already_S_OF_fault_cfg_4_6] | Value : " << boolState[already_S_OF_fault_cfg_4_6] << endl;
	//cout << "Attribute :  boolState[S_OF_fault_cfg_4_6] | Value : " << boolState[S_OF_fault_cfg_4_6] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_fault_cfg_4_6] | Value : " << boolState[relevant_evt_OF_fault_cfg_4_6] << endl;
	//cout << "Attribute :  boolState[required_OF_fault_cfg_4_7] | Value : " << boolState[required_OF_fault_cfg_4_7] << endl;
	//cout << "Attribute :  boolState[already_S_OF_fault_cfg_4_7] | Value : " << boolState[already_S_OF_fault_cfg_4_7] << endl;
	//cout << "Attribute :  boolState[S_OF_fault_cfg_4_7] | Value : " << boolState[S_OF_fault_cfg_4_7] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_fault_cfg_4_7] | Value : " << boolState[relevant_evt_OF_fault_cfg_4_7] << endl;
	//cout << "Attribute :  boolState[required_OF_fault_cfg_4_8] | Value : " << boolState[required_OF_fault_cfg_4_8] << endl;
	//cout << "Attribute :  boolState[already_S_OF_fault_cfg_4_8] | Value : " << boolState[already_S_OF_fault_cfg_4_8] << endl;
	//cout << "Attribute :  boolState[S_OF_fault_cfg_4_8] | Value : " << boolState[S_OF_fault_cfg_4_8] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_fault_cfg_4_8] | Value : " << boolState[relevant_evt_OF_fault_cfg_4_8] << endl;
	//cout << "Attribute :  boolState[required_OF_gate_1_1] | Value : " << boolState[required_OF_gate_1_1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_gate_1_1] | Value : " << boolState[already_S_OF_gate_1_1] << endl;
	//cout << "Attribute :  boolState[S_OF_gate_1_1] | Value : " << boolState[S_OF_gate_1_1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_gate_1_1] | Value : " << boolState[relevant_evt_OF_gate_1_1] << endl;
	//cout << "Attribute :  boolState[required_OF_gate_1_2] | Value : " << boolState[required_OF_gate_1_2] << endl;
	//cout << "Attribute :  boolState[already_S_OF_gate_1_2] | Value : " << boolState[already_S_OF_gate_1_2] << endl;
	//cout << "Attribute :  boolState[S_OF_gate_1_2] | Value : " << boolState[S_OF_gate_1_2] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_gate_1_2] | Value : " << boolState[relevant_evt_OF_gate_1_2] << endl;
	//cout << "Attribute :  boolState[required_OF_gate_1_3] | Value : " << boolState[required_OF_gate_1_3] << endl;
	//cout << "Attribute :  boolState[already_S_OF_gate_1_3] | Value : " << boolState[already_S_OF_gate_1_3] << endl;
	//cout << "Attribute :  boolState[S_OF_gate_1_3] | Value : " << boolState[S_OF_gate_1_3] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_gate_1_3] | Value : " << boolState[relevant_evt_OF_gate_1_3] << endl;
	//cout << "Attribute :  boolState[required_OF_gate_1_4] | Value : " << boolState[required_OF_gate_1_4] << endl;
	//cout << "Attribute :  boolState[already_S_OF_gate_1_4] | Value : " << boolState[already_S_OF_gate_1_4] << endl;
	//cout << "Attribute :  boolState[S_OF_gate_1_4] | Value : " << boolState[S_OF_gate_1_4] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_gate_1_4] | Value : " << boolState[relevant_evt_OF_gate_1_4] << endl;
	//cout << "Attribute :  boolState[required_OF_gate_1_5] | Value : " << boolState[required_OF_gate_1_5] << endl;
	//cout << "Attribute :  boolState[already_S_OF_gate_1_5] | Value : " << boolState[already_S_OF_gate_1_5] << endl;
	//cout << "Attribute :  boolState[S_OF_gate_1_5] | Value : " << boolState[S_OF_gate_1_5] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_gate_1_5] | Value : " << boolState[relevant_evt_OF_gate_1_5] << endl;
	//cout << "Attribute :  boolState[required_OF_gate_1_6] | Value : " << boolState[required_OF_gate_1_6] << endl;
	//cout << "Attribute :  boolState[already_S_OF_gate_1_6] | Value : " << boolState[already_S_OF_gate_1_6] << endl;
	//cout << "Attribute :  boolState[S_OF_gate_1_6] | Value : " << boolState[S_OF_gate_1_6] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_gate_1_6] | Value : " << boolState[relevant_evt_OF_gate_1_6] << endl;
	//cout << "Attribute :  boolState[required_OF_gate_1_7] | Value : " << boolState[required_OF_gate_1_7] << endl;
	//cout << "Attribute :  boolState[already_S_OF_gate_1_7] | Value : " << boolState[already_S_OF_gate_1_7] << endl;
	//cout << "Attribute :  boolState[S_OF_gate_1_7] | Value : " << boolState[S_OF_gate_1_7] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_gate_1_7] | Value : " << boolState[relevant_evt_OF_gate_1_7] << endl;
	//cout << "Attribute :  boolState[required_OF_gate_1_8] | Value : " << boolState[required_OF_gate_1_8] << endl;
	//cout << "Attribute :  boolState[already_S_OF_gate_1_8] | Value : " << boolState[already_S_OF_gate_1_8] << endl;
	//cout << "Attribute :  boolState[S_OF_gate_1_8] | Value : " << boolState[S_OF_gate_1_8] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_gate_1_8] | Value : " << boolState[relevant_evt_OF_gate_1_8] << endl;
	//cout << "Attribute :  boolState[required_OF_gate_2_1] | Value : " << boolState[required_OF_gate_2_1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_gate_2_1] | Value : " << boolState[already_S_OF_gate_2_1] << endl;
	//cout << "Attribute :  boolState[S_OF_gate_2_1] | Value : " << boolState[S_OF_gate_2_1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_gate_2_1] | Value : " << boolState[relevant_evt_OF_gate_2_1] << endl;
	//cout << "Attribute :  boolState[required_OF_gate_2_2] | Value : " << boolState[required_OF_gate_2_2] << endl;
	//cout << "Attribute :  boolState[already_S_OF_gate_2_2] | Value : " << boolState[already_S_OF_gate_2_2] << endl;
	//cout << "Attribute :  boolState[S_OF_gate_2_2] | Value : " << boolState[S_OF_gate_2_2] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_gate_2_2] | Value : " << boolState[relevant_evt_OF_gate_2_2] << endl;
	//cout << "Attribute :  boolState[required_OF_gate_2_3] | Value : " << boolState[required_OF_gate_2_3] << endl;
	//cout << "Attribute :  boolState[already_S_OF_gate_2_3] | Value : " << boolState[already_S_OF_gate_2_3] << endl;
	//cout << "Attribute :  boolState[S_OF_gate_2_3] | Value : " << boolState[S_OF_gate_2_3] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_gate_2_3] | Value : " << boolState[relevant_evt_OF_gate_2_3] << endl;
	//cout << "Attribute :  boolState[required_OF_gate_2_4] | Value : " << boolState[required_OF_gate_2_4] << endl;
	//cout << "Attribute :  boolState[already_S_OF_gate_2_4] | Value : " << boolState[already_S_OF_gate_2_4] << endl;
	//cout << "Attribute :  boolState[S_OF_gate_2_4] | Value : " << boolState[S_OF_gate_2_4] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_gate_2_4] | Value : " << boolState[relevant_evt_OF_gate_2_4] << endl;
	//cout << "Attribute :  boolState[required_OF_gate_2_5] | Value : " << boolState[required_OF_gate_2_5] << endl;
	//cout << "Attribute :  boolState[already_S_OF_gate_2_5] | Value : " << boolState[already_S_OF_gate_2_5] << endl;
	//cout << "Attribute :  boolState[S_OF_gate_2_5] | Value : " << boolState[S_OF_gate_2_5] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_gate_2_5] | Value : " << boolState[relevant_evt_OF_gate_2_5] << endl;
	//cout << "Attribute :  boolState[required_OF_gate_2_6] | Value : " << boolState[required_OF_gate_2_6] << endl;
	//cout << "Attribute :  boolState[already_S_OF_gate_2_6] | Value : " << boolState[already_S_OF_gate_2_6] << endl;
	//cout << "Attribute :  boolState[S_OF_gate_2_6] | Value : " << boolState[S_OF_gate_2_6] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_gate_2_6] | Value : " << boolState[relevant_evt_OF_gate_2_6] << endl;
	//cout << "Attribute :  boolState[required_OF_gate_2_7] | Value : " << boolState[required_OF_gate_2_7] << endl;
	//cout << "Attribute :  boolState[already_S_OF_gate_2_7] | Value : " << boolState[already_S_OF_gate_2_7] << endl;
	//cout << "Attribute :  boolState[S_OF_gate_2_7] | Value : " << boolState[S_OF_gate_2_7] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_gate_2_7] | Value : " << boolState[relevant_evt_OF_gate_2_7] << endl;
	//cout << "Attribute :  boolState[required_OF_gate_2_8] | Value : " << boolState[required_OF_gate_2_8] << endl;
	//cout << "Attribute :  boolState[already_S_OF_gate_2_8] | Value : " << boolState[already_S_OF_gate_2_8] << endl;
	//cout << "Attribute :  boolState[S_OF_gate_2_8] | Value : " << boolState[S_OF_gate_2_8] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_gate_2_8] | Value : " << boolState[relevant_evt_OF_gate_2_8] << endl;
}

bool storm::figaro::FigaroProgram_sf_8_2_manualy_written_Trim_repair::figaromodelhasinstransitions()
{
	return false;
}
void storm::figaro::FigaroProgram_sf_8_2_manualy_written_Trim_repair::doReinitialisations()
{
	boolState[required_OF_E1_1] = REINITIALISATION_OF_required_OF_E1_1;
	boolState[S_OF_E1_1] = REINITIALISATION_OF_S_OF_E1_1;
	boolState[relevant_evt_OF_E1_1] = REINITIALISATION_OF_relevant_evt_OF_E1_1;
	boolState[required_OF_E1_2] = REINITIALISATION_OF_required_OF_E1_2;
	boolState[S_OF_E1_2] = REINITIALISATION_OF_S_OF_E1_2;
	boolState[relevant_evt_OF_E1_2] = REINITIALISATION_OF_relevant_evt_OF_E1_2;
	boolState[required_OF_E1_3] = REINITIALISATION_OF_required_OF_E1_3;
	boolState[S_OF_E1_3] = REINITIALISATION_OF_S_OF_E1_3;
	boolState[relevant_evt_OF_E1_3] = REINITIALISATION_OF_relevant_evt_OF_E1_3;
	boolState[required_OF_E1_4] = REINITIALISATION_OF_required_OF_E1_4;
	boolState[S_OF_E1_4] = REINITIALISATION_OF_S_OF_E1_4;
	boolState[relevant_evt_OF_E1_4] = REINITIALISATION_OF_relevant_evt_OF_E1_4;
	boolState[required_OF_E1_5] = REINITIALISATION_OF_required_OF_E1_5;
	boolState[S_OF_E1_5] = REINITIALISATION_OF_S_OF_E1_5;
	boolState[relevant_evt_OF_E1_5] = REINITIALISATION_OF_relevant_evt_OF_E1_5;
	boolState[required_OF_E1_6] = REINITIALISATION_OF_required_OF_E1_6;
	boolState[S_OF_E1_6] = REINITIALISATION_OF_S_OF_E1_6;
	boolState[relevant_evt_OF_E1_6] = REINITIALISATION_OF_relevant_evt_OF_E1_6;
	boolState[required_OF_E1_7] = REINITIALISATION_OF_required_OF_E1_7;
	boolState[S_OF_E1_7] = REINITIALISATION_OF_S_OF_E1_7;
	boolState[relevant_evt_OF_E1_7] = REINITIALISATION_OF_relevant_evt_OF_E1_7;
	boolState[required_OF_E1_8] = REINITIALISATION_OF_required_OF_E1_8;
	boolState[S_OF_E1_8] = REINITIALISATION_OF_S_OF_E1_8;
	boolState[relevant_evt_OF_E1_8] = REINITIALISATION_OF_relevant_evt_OF_E1_8;
	boolState[required_OF_E2_1] = REINITIALISATION_OF_required_OF_E2_1;
	boolState[S_OF_E2_1] = REINITIALISATION_OF_S_OF_E2_1;
	boolState[relevant_evt_OF_E2_1] = REINITIALISATION_OF_relevant_evt_OF_E2_1;
	boolState[required_OF_E2_2] = REINITIALISATION_OF_required_OF_E2_2;
	boolState[S_OF_E2_2] = REINITIALISATION_OF_S_OF_E2_2;
	boolState[relevant_evt_OF_E2_2] = REINITIALISATION_OF_relevant_evt_OF_E2_2;
	boolState[required_OF_E2_3] = REINITIALISATION_OF_required_OF_E2_3;
	boolState[S_OF_E2_3] = REINITIALISATION_OF_S_OF_E2_3;
	boolState[relevant_evt_OF_E2_3] = REINITIALISATION_OF_relevant_evt_OF_E2_3;
	boolState[required_OF_E2_4] = REINITIALISATION_OF_required_OF_E2_4;
	boolState[S_OF_E2_4] = REINITIALISATION_OF_S_OF_E2_4;
	boolState[relevant_evt_OF_E2_4] = REINITIALISATION_OF_relevant_evt_OF_E2_4;
	boolState[required_OF_E2_5] = REINITIALISATION_OF_required_OF_E2_5;
	boolState[S_OF_E2_5] = REINITIALISATION_OF_S_OF_E2_5;
	boolState[relevant_evt_OF_E2_5] = REINITIALISATION_OF_relevant_evt_OF_E2_5;
	boolState[required_OF_E2_6] = REINITIALISATION_OF_required_OF_E2_6;
	boolState[S_OF_E2_6] = REINITIALISATION_OF_S_OF_E2_6;
	boolState[relevant_evt_OF_E2_6] = REINITIALISATION_OF_relevant_evt_OF_E2_6;
	boolState[required_OF_E2_7] = REINITIALISATION_OF_required_OF_E2_7;
	boolState[S_OF_E2_7] = REINITIALISATION_OF_S_OF_E2_7;
	boolState[relevant_evt_OF_E2_7] = REINITIALISATION_OF_relevant_evt_OF_E2_7;
	boolState[required_OF_E2_8] = REINITIALISATION_OF_required_OF_E2_8;
	boolState[S_OF_E2_8] = REINITIALISATION_OF_S_OF_E2_8;
	boolState[relevant_evt_OF_E2_8] = REINITIALISATION_OF_relevant_evt_OF_E2_8;
	boolState[required_OF_E3_1] = REINITIALISATION_OF_required_OF_E3_1;
	boolState[S_OF_E3_1] = REINITIALISATION_OF_S_OF_E3_1;
	boolState[relevant_evt_OF_E3_1] = REINITIALISATION_OF_relevant_evt_OF_E3_1;
	boolState[required_OF_E3_2] = REINITIALISATION_OF_required_OF_E3_2;
	boolState[S_OF_E3_2] = REINITIALISATION_OF_S_OF_E3_2;
	boolState[relevant_evt_OF_E3_2] = REINITIALISATION_OF_relevant_evt_OF_E3_2;
	boolState[required_OF_E3_3] = REINITIALISATION_OF_required_OF_E3_3;
	boolState[S_OF_E3_3] = REINITIALISATION_OF_S_OF_E3_3;
	boolState[relevant_evt_OF_E3_3] = REINITIALISATION_OF_relevant_evt_OF_E3_3;
	boolState[required_OF_E3_4] = REINITIALISATION_OF_required_OF_E3_4;
	boolState[S_OF_E3_4] = REINITIALISATION_OF_S_OF_E3_4;
	boolState[relevant_evt_OF_E3_4] = REINITIALISATION_OF_relevant_evt_OF_E3_4;
	boolState[required_OF_E3_5] = REINITIALISATION_OF_required_OF_E3_5;
	boolState[S_OF_E3_5] = REINITIALISATION_OF_S_OF_E3_5;
	boolState[relevant_evt_OF_E3_5] = REINITIALISATION_OF_relevant_evt_OF_E3_5;
	boolState[required_OF_E3_6] = REINITIALISATION_OF_required_OF_E3_6;
	boolState[S_OF_E3_6] = REINITIALISATION_OF_S_OF_E3_6;
	boolState[relevant_evt_OF_E3_6] = REINITIALISATION_OF_relevant_evt_OF_E3_6;
	boolState[required_OF_E3_7] = REINITIALISATION_OF_required_OF_E3_7;
	boolState[S_OF_E3_7] = REINITIALISATION_OF_S_OF_E3_7;
	boolState[relevant_evt_OF_E3_7] = REINITIALISATION_OF_relevant_evt_OF_E3_7;
	boolState[required_OF_E3_8] = REINITIALISATION_OF_required_OF_E3_8;
	boolState[S_OF_E3_8] = REINITIALISATION_OF_S_OF_E3_8;
	boolState[relevant_evt_OF_E3_8] = REINITIALISATION_OF_relevant_evt_OF_E3_8;
	boolState[required_OF_E4_1] = REINITIALISATION_OF_required_OF_E4_1;
	boolState[S_OF_E4_1] = REINITIALISATION_OF_S_OF_E4_1;
	boolState[relevant_evt_OF_E4_1] = REINITIALISATION_OF_relevant_evt_OF_E4_1;
	boolState[required_OF_E4_2] = REINITIALISATION_OF_required_OF_E4_2;
	boolState[S_OF_E4_2] = REINITIALISATION_OF_S_OF_E4_2;
	boolState[relevant_evt_OF_E4_2] = REINITIALISATION_OF_relevant_evt_OF_E4_2;
	boolState[required_OF_E4_3] = REINITIALISATION_OF_required_OF_E4_3;
	boolState[S_OF_E4_3] = REINITIALISATION_OF_S_OF_E4_3;
	boolState[relevant_evt_OF_E4_3] = REINITIALISATION_OF_relevant_evt_OF_E4_3;
	boolState[required_OF_E4_4] = REINITIALISATION_OF_required_OF_E4_4;
	boolState[S_OF_E4_4] = REINITIALISATION_OF_S_OF_E4_4;
	boolState[relevant_evt_OF_E4_4] = REINITIALISATION_OF_relevant_evt_OF_E4_4;
	boolState[required_OF_E4_5] = REINITIALISATION_OF_required_OF_E4_5;
	boolState[S_OF_E4_5] = REINITIALISATION_OF_S_OF_E4_5;
	boolState[relevant_evt_OF_E4_5] = REINITIALISATION_OF_relevant_evt_OF_E4_5;
	boolState[required_OF_E4_6] = REINITIALISATION_OF_required_OF_E4_6;
	boolState[S_OF_E4_6] = REINITIALISATION_OF_S_OF_E4_6;
	boolState[relevant_evt_OF_E4_6] = REINITIALISATION_OF_relevant_evt_OF_E4_6;
	boolState[required_OF_E4_7] = REINITIALISATION_OF_required_OF_E4_7;
	boolState[S_OF_E4_7] = REINITIALISATION_OF_S_OF_E4_7;
	boolState[relevant_evt_OF_E4_7] = REINITIALISATION_OF_relevant_evt_OF_E4_7;
	boolState[required_OF_E4_8] = REINITIALISATION_OF_required_OF_E4_8;
	boolState[S_OF_E4_8] = REINITIALISATION_OF_S_OF_E4_8;
	boolState[relevant_evt_OF_E4_8] = REINITIALISATION_OF_relevant_evt_OF_E4_8;
	boolState[required_OF_EC1_1] = REINITIALISATION_OF_required_OF_EC1_1;
	boolState[S_OF_EC1_1] = REINITIALISATION_OF_S_OF_EC1_1;
	boolState[relevant_evt_OF_EC1_1] = REINITIALISATION_OF_relevant_evt_OF_EC1_1;
	boolState[required_OF_EC1_2] = REINITIALISATION_OF_required_OF_EC1_2;
	boolState[S_OF_EC1_2] = REINITIALISATION_OF_S_OF_EC1_2;
	boolState[relevant_evt_OF_EC1_2] = REINITIALISATION_OF_relevant_evt_OF_EC1_2;
	boolState[required_OF_EC1_3] = REINITIALISATION_OF_required_OF_EC1_3;
	boolState[S_OF_EC1_3] = REINITIALISATION_OF_S_OF_EC1_3;
	boolState[relevant_evt_OF_EC1_3] = REINITIALISATION_OF_relevant_evt_OF_EC1_3;
	boolState[required_OF_EC1_4] = REINITIALISATION_OF_required_OF_EC1_4;
	boolState[S_OF_EC1_4] = REINITIALISATION_OF_S_OF_EC1_4;
	boolState[relevant_evt_OF_EC1_4] = REINITIALISATION_OF_relevant_evt_OF_EC1_4;
	boolState[required_OF_EC1_5] = REINITIALISATION_OF_required_OF_EC1_5;
	boolState[S_OF_EC1_5] = REINITIALISATION_OF_S_OF_EC1_5;
	boolState[relevant_evt_OF_EC1_5] = REINITIALISATION_OF_relevant_evt_OF_EC1_5;
	boolState[required_OF_EC1_6] = REINITIALISATION_OF_required_OF_EC1_6;
	boolState[S_OF_EC1_6] = REINITIALISATION_OF_S_OF_EC1_6;
	boolState[relevant_evt_OF_EC1_6] = REINITIALISATION_OF_relevant_evt_OF_EC1_6;
	boolState[required_OF_EC1_7] = REINITIALISATION_OF_required_OF_EC1_7;
	boolState[S_OF_EC1_7] = REINITIALISATION_OF_S_OF_EC1_7;
	boolState[relevant_evt_OF_EC1_7] = REINITIALISATION_OF_relevant_evt_OF_EC1_7;
	boolState[required_OF_EC1_8] = REINITIALISATION_OF_required_OF_EC1_8;
	boolState[S_OF_EC1_8] = REINITIALISATION_OF_S_OF_EC1_8;
	boolState[relevant_evt_OF_EC1_8] = REINITIALISATION_OF_relevant_evt_OF_EC1_8;
	boolState[required_OF_EC2_1] = REINITIALISATION_OF_required_OF_EC2_1;
	boolState[S_OF_EC2_1] = REINITIALISATION_OF_S_OF_EC2_1;
	boolState[relevant_evt_OF_EC2_1] = REINITIALISATION_OF_relevant_evt_OF_EC2_1;
	boolState[required_OF_EC2_2] = REINITIALISATION_OF_required_OF_EC2_2;
	boolState[S_OF_EC2_2] = REINITIALISATION_OF_S_OF_EC2_2;
	boolState[relevant_evt_OF_EC2_2] = REINITIALISATION_OF_relevant_evt_OF_EC2_2;
	boolState[required_OF_EC2_3] = REINITIALISATION_OF_required_OF_EC2_3;
	boolState[S_OF_EC2_3] = REINITIALISATION_OF_S_OF_EC2_3;
	boolState[relevant_evt_OF_EC2_3] = REINITIALISATION_OF_relevant_evt_OF_EC2_3;
	boolState[required_OF_EC2_4] = REINITIALISATION_OF_required_OF_EC2_4;
	boolState[S_OF_EC2_4] = REINITIALISATION_OF_S_OF_EC2_4;
	boolState[relevant_evt_OF_EC2_4] = REINITIALISATION_OF_relevant_evt_OF_EC2_4;
	boolState[required_OF_EC2_5] = REINITIALISATION_OF_required_OF_EC2_5;
	boolState[S_OF_EC2_5] = REINITIALISATION_OF_S_OF_EC2_5;
	boolState[relevant_evt_OF_EC2_5] = REINITIALISATION_OF_relevant_evt_OF_EC2_5;
	boolState[required_OF_EC2_6] = REINITIALISATION_OF_required_OF_EC2_6;
	boolState[S_OF_EC2_6] = REINITIALISATION_OF_S_OF_EC2_6;
	boolState[relevant_evt_OF_EC2_6] = REINITIALISATION_OF_relevant_evt_OF_EC2_6;
	boolState[required_OF_EC2_7] = REINITIALISATION_OF_required_OF_EC2_7;
	boolState[S_OF_EC2_7] = REINITIALISATION_OF_S_OF_EC2_7;
	boolState[relevant_evt_OF_EC2_7] = REINITIALISATION_OF_relevant_evt_OF_EC2_7;
	boolState[required_OF_EC2_8] = REINITIALISATION_OF_required_OF_EC2_8;
	boolState[S_OF_EC2_8] = REINITIALISATION_OF_S_OF_EC2_8;
	boolState[relevant_evt_OF_EC2_8] = REINITIALISATION_OF_relevant_evt_OF_EC2_8;
	boolState[required_OF_EC3_1] = REINITIALISATION_OF_required_OF_EC3_1;
	boolState[S_OF_EC3_1] = REINITIALISATION_OF_S_OF_EC3_1;
	boolState[relevant_evt_OF_EC3_1] = REINITIALISATION_OF_relevant_evt_OF_EC3_1;
	boolState[required_OF_EC3_2] = REINITIALISATION_OF_required_OF_EC3_2;
	boolState[S_OF_EC3_2] = REINITIALISATION_OF_S_OF_EC3_2;
	boolState[relevant_evt_OF_EC3_2] = REINITIALISATION_OF_relevant_evt_OF_EC3_2;
	boolState[required_OF_EC3_3] = REINITIALISATION_OF_required_OF_EC3_3;
	boolState[S_OF_EC3_3] = REINITIALISATION_OF_S_OF_EC3_3;
	boolState[relevant_evt_OF_EC3_3] = REINITIALISATION_OF_relevant_evt_OF_EC3_3;
	boolState[required_OF_EC3_4] = REINITIALISATION_OF_required_OF_EC3_4;
	boolState[S_OF_EC3_4] = REINITIALISATION_OF_S_OF_EC3_4;
	boolState[relevant_evt_OF_EC3_4] = REINITIALISATION_OF_relevant_evt_OF_EC3_4;
	boolState[required_OF_EC3_5] = REINITIALISATION_OF_required_OF_EC3_5;
	boolState[S_OF_EC3_5] = REINITIALISATION_OF_S_OF_EC3_5;
	boolState[relevant_evt_OF_EC3_5] = REINITIALISATION_OF_relevant_evt_OF_EC3_5;
	boolState[required_OF_EC3_6] = REINITIALISATION_OF_required_OF_EC3_6;
	boolState[S_OF_EC3_6] = REINITIALISATION_OF_S_OF_EC3_6;
	boolState[relevant_evt_OF_EC3_6] = REINITIALISATION_OF_relevant_evt_OF_EC3_6;
	boolState[required_OF_EC3_7] = REINITIALISATION_OF_required_OF_EC3_7;
	boolState[S_OF_EC3_7] = REINITIALISATION_OF_S_OF_EC3_7;
	boolState[relevant_evt_OF_EC3_7] = REINITIALISATION_OF_relevant_evt_OF_EC3_7;
	boolState[required_OF_EC3_8] = REINITIALISATION_OF_required_OF_EC3_8;
	boolState[S_OF_EC3_8] = REINITIALISATION_OF_S_OF_EC3_8;
	boolState[relevant_evt_OF_EC3_8] = REINITIALISATION_OF_relevant_evt_OF_EC3_8;
	boolState[required_OF_Filter_1] = REINITIALISATION_OF_required_OF_Filter_1;
	boolState[S_OF_Filter_1] = REINITIALISATION_OF_S_OF_Filter_1;
	boolState[relevant_evt_OF_Filter_1] = REINITIALISATION_OF_relevant_evt_OF_Filter_1;
	boolState[required_OF_Filter_2] = REINITIALISATION_OF_required_OF_Filter_2;
	boolState[S_OF_Filter_2] = REINITIALISATION_OF_S_OF_Filter_2;
	boolState[relevant_evt_OF_Filter_2] = REINITIALISATION_OF_relevant_evt_OF_Filter_2;
	boolState[required_OF_Filter_3] = REINITIALISATION_OF_required_OF_Filter_3;
	boolState[S_OF_Filter_3] = REINITIALISATION_OF_S_OF_Filter_3;
	boolState[relevant_evt_OF_Filter_3] = REINITIALISATION_OF_relevant_evt_OF_Filter_3;
	boolState[required_OF_Filter_4] = REINITIALISATION_OF_required_OF_Filter_4;
	boolState[S_OF_Filter_4] = REINITIALISATION_OF_S_OF_Filter_4;
	boolState[relevant_evt_OF_Filter_4] = REINITIALISATION_OF_relevant_evt_OF_Filter_4;
	boolState[required_OF_Filter_5] = REINITIALISATION_OF_required_OF_Filter_5;
	boolState[S_OF_Filter_5] = REINITIALISATION_OF_S_OF_Filter_5;
	boolState[relevant_evt_OF_Filter_5] = REINITIALISATION_OF_relevant_evt_OF_Filter_5;
	boolState[required_OF_Filter_6] = REINITIALISATION_OF_required_OF_Filter_6;
	boolState[S_OF_Filter_6] = REINITIALISATION_OF_S_OF_Filter_6;
	boolState[relevant_evt_OF_Filter_6] = REINITIALISATION_OF_relevant_evt_OF_Filter_6;
	boolState[required_OF_Filter_7] = REINITIALISATION_OF_required_OF_Filter_7;
	boolState[S_OF_Filter_7] = REINITIALISATION_OF_S_OF_Filter_7;
	boolState[relevant_evt_OF_Filter_7] = REINITIALISATION_OF_relevant_evt_OF_Filter_7;
	boolState[required_OF_Filter_8] = REINITIALISATION_OF_required_OF_Filter_8;
	boolState[S_OF_Filter_8] = REINITIALISATION_OF_S_OF_Filter_8;
	boolState[relevant_evt_OF_Filter_8] = REINITIALISATION_OF_relevant_evt_OF_Filter_8;
	boolState[required_OF_System] = REINITIALISATION_OF_required_OF_System;
	boolState[S_OF_System] = REINITIALISATION_OF_S_OF_System;
	boolState[relevant_evt_OF_System] = REINITIALISATION_OF_relevant_evt_OF_System;
	boolState[required_OF_UE_1] = REINITIALISATION_OF_required_OF_UE_1;
	boolState[S_OF_UE_1] = REINITIALISATION_OF_S_OF_UE_1;
	boolState[relevant_evt_OF_UE_1] = REINITIALISATION_OF_relevant_evt_OF_UE_1;
	boolState[required_OF_fault_cfg_1_1] = REINITIALISATION_OF_required_OF_fault_cfg_1_1;
	boolState[S_OF_fault_cfg_1_1] = REINITIALISATION_OF_S_OF_fault_cfg_1_1;
	boolState[relevant_evt_OF_fault_cfg_1_1] = REINITIALISATION_OF_relevant_evt_OF_fault_cfg_1_1;
	boolState[required_OF_fault_cfg_1_2] = REINITIALISATION_OF_required_OF_fault_cfg_1_2;
	boolState[S_OF_fault_cfg_1_2] = REINITIALISATION_OF_S_OF_fault_cfg_1_2;
	boolState[relevant_evt_OF_fault_cfg_1_2] = REINITIALISATION_OF_relevant_evt_OF_fault_cfg_1_2;
	boolState[required_OF_fault_cfg_1_3] = REINITIALISATION_OF_required_OF_fault_cfg_1_3;
	boolState[S_OF_fault_cfg_1_3] = REINITIALISATION_OF_S_OF_fault_cfg_1_3;
	boolState[relevant_evt_OF_fault_cfg_1_3] = REINITIALISATION_OF_relevant_evt_OF_fault_cfg_1_3;
	boolState[required_OF_fault_cfg_1_4] = REINITIALISATION_OF_required_OF_fault_cfg_1_4;
	boolState[S_OF_fault_cfg_1_4] = REINITIALISATION_OF_S_OF_fault_cfg_1_4;
	boolState[relevant_evt_OF_fault_cfg_1_4] = REINITIALISATION_OF_relevant_evt_OF_fault_cfg_1_4;
	boolState[required_OF_fault_cfg_1_5] = REINITIALISATION_OF_required_OF_fault_cfg_1_5;
	boolState[S_OF_fault_cfg_1_5] = REINITIALISATION_OF_S_OF_fault_cfg_1_5;
	boolState[relevant_evt_OF_fault_cfg_1_5] = REINITIALISATION_OF_relevant_evt_OF_fault_cfg_1_5;
	boolState[required_OF_fault_cfg_1_6] = REINITIALISATION_OF_required_OF_fault_cfg_1_6;
	boolState[S_OF_fault_cfg_1_6] = REINITIALISATION_OF_S_OF_fault_cfg_1_6;
	boolState[relevant_evt_OF_fault_cfg_1_6] = REINITIALISATION_OF_relevant_evt_OF_fault_cfg_1_6;
	boolState[required_OF_fault_cfg_1_7] = REINITIALISATION_OF_required_OF_fault_cfg_1_7;
	boolState[S_OF_fault_cfg_1_7] = REINITIALISATION_OF_S_OF_fault_cfg_1_7;
	boolState[relevant_evt_OF_fault_cfg_1_7] = REINITIALISATION_OF_relevant_evt_OF_fault_cfg_1_7;
	boolState[required_OF_fault_cfg_1_8] = REINITIALISATION_OF_required_OF_fault_cfg_1_8;
	boolState[S_OF_fault_cfg_1_8] = REINITIALISATION_OF_S_OF_fault_cfg_1_8;
	boolState[relevant_evt_OF_fault_cfg_1_8] = REINITIALISATION_OF_relevant_evt_OF_fault_cfg_1_8;
	boolState[required_OF_fault_cfg_3_1] = REINITIALISATION_OF_required_OF_fault_cfg_3_1;
	boolState[S_OF_fault_cfg_3_1] = REINITIALISATION_OF_S_OF_fault_cfg_3_1;
	boolState[relevant_evt_OF_fault_cfg_3_1] = REINITIALISATION_OF_relevant_evt_OF_fault_cfg_3_1;
	boolState[required_OF_fault_cfg_3_2] = REINITIALISATION_OF_required_OF_fault_cfg_3_2;
	boolState[S_OF_fault_cfg_3_2] = REINITIALISATION_OF_S_OF_fault_cfg_3_2;
	boolState[relevant_evt_OF_fault_cfg_3_2] = REINITIALISATION_OF_relevant_evt_OF_fault_cfg_3_2;
	boolState[required_OF_fault_cfg_3_3] = REINITIALISATION_OF_required_OF_fault_cfg_3_3;
	boolState[S_OF_fault_cfg_3_3] = REINITIALISATION_OF_S_OF_fault_cfg_3_3;
	boolState[relevant_evt_OF_fault_cfg_3_3] = REINITIALISATION_OF_relevant_evt_OF_fault_cfg_3_3;
	boolState[required_OF_fault_cfg_3_4] = REINITIALISATION_OF_required_OF_fault_cfg_3_4;
	boolState[S_OF_fault_cfg_3_4] = REINITIALISATION_OF_S_OF_fault_cfg_3_4;
	boolState[relevant_evt_OF_fault_cfg_3_4] = REINITIALISATION_OF_relevant_evt_OF_fault_cfg_3_4;
	boolState[required_OF_fault_cfg_3_5] = REINITIALISATION_OF_required_OF_fault_cfg_3_5;
	boolState[S_OF_fault_cfg_3_5] = REINITIALISATION_OF_S_OF_fault_cfg_3_5;
	boolState[relevant_evt_OF_fault_cfg_3_5] = REINITIALISATION_OF_relevant_evt_OF_fault_cfg_3_5;
	boolState[required_OF_fault_cfg_3_6] = REINITIALISATION_OF_required_OF_fault_cfg_3_6;
	boolState[S_OF_fault_cfg_3_6] = REINITIALISATION_OF_S_OF_fault_cfg_3_6;
	boolState[relevant_evt_OF_fault_cfg_3_6] = REINITIALISATION_OF_relevant_evt_OF_fault_cfg_3_6;
	boolState[required_OF_fault_cfg_3_7] = REINITIALISATION_OF_required_OF_fault_cfg_3_7;
	boolState[S_OF_fault_cfg_3_7] = REINITIALISATION_OF_S_OF_fault_cfg_3_7;
	boolState[relevant_evt_OF_fault_cfg_3_7] = REINITIALISATION_OF_relevant_evt_OF_fault_cfg_3_7;
	boolState[required_OF_fault_cfg_3_8] = REINITIALISATION_OF_required_OF_fault_cfg_3_8;
	boolState[S_OF_fault_cfg_3_8] = REINITIALISATION_OF_S_OF_fault_cfg_3_8;
	boolState[relevant_evt_OF_fault_cfg_3_8] = REINITIALISATION_OF_relevant_evt_OF_fault_cfg_3_8;
	boolState[required_OF_fault_cfg_4_1] = REINITIALISATION_OF_required_OF_fault_cfg_4_1;
	boolState[S_OF_fault_cfg_4_1] = REINITIALISATION_OF_S_OF_fault_cfg_4_1;
	boolState[relevant_evt_OF_fault_cfg_4_1] = REINITIALISATION_OF_relevant_evt_OF_fault_cfg_4_1;
	boolState[required_OF_fault_cfg_4_2] = REINITIALISATION_OF_required_OF_fault_cfg_4_2;
	boolState[S_OF_fault_cfg_4_2] = REINITIALISATION_OF_S_OF_fault_cfg_4_2;
	boolState[relevant_evt_OF_fault_cfg_4_2] = REINITIALISATION_OF_relevant_evt_OF_fault_cfg_4_2;
	boolState[required_OF_fault_cfg_4_3] = REINITIALISATION_OF_required_OF_fault_cfg_4_3;
	boolState[S_OF_fault_cfg_4_3] = REINITIALISATION_OF_S_OF_fault_cfg_4_3;
	boolState[relevant_evt_OF_fault_cfg_4_3] = REINITIALISATION_OF_relevant_evt_OF_fault_cfg_4_3;
	boolState[required_OF_fault_cfg_4_4] = REINITIALISATION_OF_required_OF_fault_cfg_4_4;
	boolState[S_OF_fault_cfg_4_4] = REINITIALISATION_OF_S_OF_fault_cfg_4_4;
	boolState[relevant_evt_OF_fault_cfg_4_4] = REINITIALISATION_OF_relevant_evt_OF_fault_cfg_4_4;
	boolState[required_OF_fault_cfg_4_5] = REINITIALISATION_OF_required_OF_fault_cfg_4_5;
	boolState[S_OF_fault_cfg_4_5] = REINITIALISATION_OF_S_OF_fault_cfg_4_5;
	boolState[relevant_evt_OF_fault_cfg_4_5] = REINITIALISATION_OF_relevant_evt_OF_fault_cfg_4_5;
	boolState[required_OF_fault_cfg_4_6] = REINITIALISATION_OF_required_OF_fault_cfg_4_6;
	boolState[S_OF_fault_cfg_4_6] = REINITIALISATION_OF_S_OF_fault_cfg_4_6;
	boolState[relevant_evt_OF_fault_cfg_4_6] = REINITIALISATION_OF_relevant_evt_OF_fault_cfg_4_6;
	boolState[required_OF_fault_cfg_4_7] = REINITIALISATION_OF_required_OF_fault_cfg_4_7;
	boolState[S_OF_fault_cfg_4_7] = REINITIALISATION_OF_S_OF_fault_cfg_4_7;
	boolState[relevant_evt_OF_fault_cfg_4_7] = REINITIALISATION_OF_relevant_evt_OF_fault_cfg_4_7;
	boolState[required_OF_fault_cfg_4_8] = REINITIALISATION_OF_required_OF_fault_cfg_4_8;
	boolState[S_OF_fault_cfg_4_8] = REINITIALISATION_OF_S_OF_fault_cfg_4_8;
	boolState[relevant_evt_OF_fault_cfg_4_8] = REINITIALISATION_OF_relevant_evt_OF_fault_cfg_4_8;
	boolState[required_OF_gate_1_1] = REINITIALISATION_OF_required_OF_gate_1_1;
	boolState[S_OF_gate_1_1] = REINITIALISATION_OF_S_OF_gate_1_1;
	boolState[relevant_evt_OF_gate_1_1] = REINITIALISATION_OF_relevant_evt_OF_gate_1_1;
	boolState[required_OF_gate_1_2] = REINITIALISATION_OF_required_OF_gate_1_2;
	boolState[S_OF_gate_1_2] = REINITIALISATION_OF_S_OF_gate_1_2;
	boolState[relevant_evt_OF_gate_1_2] = REINITIALISATION_OF_relevant_evt_OF_gate_1_2;
	boolState[required_OF_gate_1_3] = REINITIALISATION_OF_required_OF_gate_1_3;
	boolState[S_OF_gate_1_3] = REINITIALISATION_OF_S_OF_gate_1_3;
	boolState[relevant_evt_OF_gate_1_3] = REINITIALISATION_OF_relevant_evt_OF_gate_1_3;
	boolState[required_OF_gate_1_4] = REINITIALISATION_OF_required_OF_gate_1_4;
	boolState[S_OF_gate_1_4] = REINITIALISATION_OF_S_OF_gate_1_4;
	boolState[relevant_evt_OF_gate_1_4] = REINITIALISATION_OF_relevant_evt_OF_gate_1_4;
	boolState[required_OF_gate_1_5] = REINITIALISATION_OF_required_OF_gate_1_5;
	boolState[S_OF_gate_1_5] = REINITIALISATION_OF_S_OF_gate_1_5;
	boolState[relevant_evt_OF_gate_1_5] = REINITIALISATION_OF_relevant_evt_OF_gate_1_5;
	boolState[required_OF_gate_1_6] = REINITIALISATION_OF_required_OF_gate_1_6;
	boolState[S_OF_gate_1_6] = REINITIALISATION_OF_S_OF_gate_1_6;
	boolState[relevant_evt_OF_gate_1_6] = REINITIALISATION_OF_relevant_evt_OF_gate_1_6;
	boolState[required_OF_gate_1_7] = REINITIALISATION_OF_required_OF_gate_1_7;
	boolState[S_OF_gate_1_7] = REINITIALISATION_OF_S_OF_gate_1_7;
	boolState[relevant_evt_OF_gate_1_7] = REINITIALISATION_OF_relevant_evt_OF_gate_1_7;
	boolState[required_OF_gate_1_8] = REINITIALISATION_OF_required_OF_gate_1_8;
	boolState[S_OF_gate_1_8] = REINITIALISATION_OF_S_OF_gate_1_8;
	boolState[relevant_evt_OF_gate_1_8] = REINITIALISATION_OF_relevant_evt_OF_gate_1_8;
	boolState[required_OF_gate_2_1] = REINITIALISATION_OF_required_OF_gate_2_1;
	boolState[S_OF_gate_2_1] = REINITIALISATION_OF_S_OF_gate_2_1;
	boolState[relevant_evt_OF_gate_2_1] = REINITIALISATION_OF_relevant_evt_OF_gate_2_1;
	boolState[required_OF_gate_2_2] = REINITIALISATION_OF_required_OF_gate_2_2;
	boolState[S_OF_gate_2_2] = REINITIALISATION_OF_S_OF_gate_2_2;
	boolState[relevant_evt_OF_gate_2_2] = REINITIALISATION_OF_relevant_evt_OF_gate_2_2;
	boolState[required_OF_gate_2_3] = REINITIALISATION_OF_required_OF_gate_2_3;
	boolState[S_OF_gate_2_3] = REINITIALISATION_OF_S_OF_gate_2_3;
	boolState[relevant_evt_OF_gate_2_3] = REINITIALISATION_OF_relevant_evt_OF_gate_2_3;
	boolState[required_OF_gate_2_4] = REINITIALISATION_OF_required_OF_gate_2_4;
	boolState[S_OF_gate_2_4] = REINITIALISATION_OF_S_OF_gate_2_4;
	boolState[relevant_evt_OF_gate_2_4] = REINITIALISATION_OF_relevant_evt_OF_gate_2_4;
	boolState[required_OF_gate_2_5] = REINITIALISATION_OF_required_OF_gate_2_5;
	boolState[S_OF_gate_2_5] = REINITIALISATION_OF_S_OF_gate_2_5;
	boolState[relevant_evt_OF_gate_2_5] = REINITIALISATION_OF_relevant_evt_OF_gate_2_5;
	boolState[required_OF_gate_2_6] = REINITIALISATION_OF_required_OF_gate_2_6;
	boolState[S_OF_gate_2_6] = REINITIALISATION_OF_S_OF_gate_2_6;
	boolState[relevant_evt_OF_gate_2_6] = REINITIALISATION_OF_relevant_evt_OF_gate_2_6;
	boolState[required_OF_gate_2_7] = REINITIALISATION_OF_required_OF_gate_2_7;
	boolState[S_OF_gate_2_7] = REINITIALISATION_OF_S_OF_gate_2_7;
	boolState[relevant_evt_OF_gate_2_7] = REINITIALISATION_OF_relevant_evt_OF_gate_2_7;
	boolState[required_OF_gate_2_8] = REINITIALISATION_OF_required_OF_gate_2_8;
	boolState[S_OF_gate_2_8] = REINITIALISATION_OF_S_OF_gate_2_8;
	boolState[relevant_evt_OF_gate_2_8] = REINITIALISATION_OF_relevant_evt_OF_gate_2_8;
}

void storm::figaro::FigaroProgram_sf_8_2_manualy_written_Trim_repair::fireOccurrence(int numFire)
{
	//cout <<">>>>>>>>>>>>>>>>>>>> Fire of occurrence #" << numFire << " <<<<<<<<<<<<<<<<<<<<<<<" << endl;

	if (numFire == 0)
	{
		FIRE_xx10_OF_E1_1 = true;
	}

	if (numFire == 1)
	{
		FIRE_xx11_OF_E1_1 = true;
	}

	if (numFire == 2)
	{
		FIRE_xx10_OF_E1_2 = true;
	}

	if (numFire == 3)
	{
		FIRE_xx11_OF_E1_2 = true;
	}

	if (numFire == 4)
	{
		FIRE_xx10_OF_E1_3 = true;
	}

	if (numFire == 5)
	{
		FIRE_xx11_OF_E1_3 = true;
	}

	if (numFire == 6)
	{
		FIRE_xx10_OF_E1_4 = true;
	}

	if (numFire == 7)
	{
		FIRE_xx11_OF_E1_4 = true;
	}

	if (numFire == 8)
	{
		FIRE_xx10_OF_E1_5 = true;
	}

	if (numFire == 9)
	{
		FIRE_xx11_OF_E1_5 = true;
	}

	if (numFire == 10)
	{
		FIRE_xx10_OF_E1_6 = true;
	}

	if (numFire == 11)
	{
		FIRE_xx11_OF_E1_6 = true;
	}

	if (numFire == 12)
	{
		FIRE_xx10_OF_E1_7 = true;
	}

	if (numFire == 13)
	{
		FIRE_xx11_OF_E1_7 = true;
	}

	if (numFire == 14)
	{
		FIRE_xx10_OF_E1_8 = true;
	}

	if (numFire == 15)
	{
		FIRE_xx11_OF_E1_8 = true;
	}

	if (numFire == 16)
	{
		FIRE_xx10_OF_E2_1 = true;
	}

	if (numFire == 17)
	{
		FIRE_xx11_OF_E2_1 = true;
	}

	if (numFire == 18)
	{
		FIRE_xx10_OF_E2_2 = true;
	}

	if (numFire == 19)
	{
		FIRE_xx11_OF_E2_2 = true;
	}

	if (numFire == 20)
	{
		FIRE_xx10_OF_E2_3 = true;
	}

	if (numFire == 21)
	{
		FIRE_xx11_OF_E2_3 = true;
	}

	if (numFire == 22)
	{
		FIRE_xx10_OF_E2_4 = true;
	}

	if (numFire == 23)
	{
		FIRE_xx11_OF_E2_4 = true;
	}

	if (numFire == 24)
	{
		FIRE_xx10_OF_E2_5 = true;
	}

	if (numFire == 25)
	{
		FIRE_xx11_OF_E2_5 = true;
	}

	if (numFire == 26)
	{
		FIRE_xx10_OF_E2_6 = true;
	}

	if (numFire == 27)
	{
		FIRE_xx11_OF_E2_6 = true;
	}

	if (numFire == 28)
	{
		FIRE_xx10_OF_E2_7 = true;
	}

	if (numFire == 29)
	{
		FIRE_xx11_OF_E2_7 = true;
	}

	if (numFire == 30)
	{
		FIRE_xx10_OF_E2_8 = true;
	}

	if (numFire == 31)
	{
		FIRE_xx11_OF_E2_8 = true;
	}

	if (numFire == 32)
	{
		FIRE_xx10_OF_E3_1 = true;
	}

	if (numFire == 33)
	{
		FIRE_xx11_OF_E3_1 = true;
	}

	if (numFire == 34)
	{
		FIRE_xx10_OF_E3_2 = true;
	}

	if (numFire == 35)
	{
		FIRE_xx11_OF_E3_2 = true;
	}

	if (numFire == 36)
	{
		FIRE_xx10_OF_E3_3 = true;
	}

	if (numFire == 37)
	{
		FIRE_xx11_OF_E3_3 = true;
	}

	if (numFire == 38)
	{
		FIRE_xx10_OF_E3_4 = true;
	}

	if (numFire == 39)
	{
		FIRE_xx11_OF_E3_4 = true;
	}

	if (numFire == 40)
	{
		FIRE_xx10_OF_E3_5 = true;
	}

	if (numFire == 41)
	{
		FIRE_xx11_OF_E3_5 = true;
	}

	if (numFire == 42)
	{
		FIRE_xx10_OF_E3_6 = true;
	}

	if (numFire == 43)
	{
		FIRE_xx11_OF_E3_6 = true;
	}

	if (numFire == 44)
	{
		FIRE_xx10_OF_E3_7 = true;
	}

	if (numFire == 45)
	{
		FIRE_xx11_OF_E3_7 = true;
	}

	if (numFire == 46)
	{
		FIRE_xx10_OF_E3_8 = true;
	}

	if (numFire == 47)
	{
		FIRE_xx11_OF_E3_8 = true;
	}

	if (numFire == 48)
	{
		FIRE_xx10_OF_E4_1 = true;
	}

	if (numFire == 49)
	{
		FIRE_xx11_OF_E4_1 = true;
	}

	if (numFire == 50)
	{
		FIRE_xx10_OF_E4_2 = true;
	}

	if (numFire == 51)
	{
		FIRE_xx11_OF_E4_2 = true;
	}

	if (numFire == 52)
	{
		FIRE_xx10_OF_E4_3 = true;
	}

	if (numFire == 53)
	{
		FIRE_xx11_OF_E4_3 = true;
	}

	if (numFire == 54)
	{
		FIRE_xx10_OF_E4_4 = true;
	}

	if (numFire == 55)
	{
		FIRE_xx11_OF_E4_4 = true;
	}

	if (numFire == 56)
	{
		FIRE_xx10_OF_E4_5 = true;
	}

	if (numFire == 57)
	{
		FIRE_xx11_OF_E4_5 = true;
	}

	if (numFire == 58)
	{
		FIRE_xx10_OF_E4_6 = true;
	}

	if (numFire == 59)
	{
		FIRE_xx11_OF_E4_6 = true;
	}

	if (numFire == 60)
	{
		FIRE_xx10_OF_E4_7 = true;
	}

	if (numFire == 61)
	{
		FIRE_xx11_OF_E4_7 = true;
	}

	if (numFire == 62)
	{
		FIRE_xx10_OF_E4_8 = true;
	}

	if (numFire == 63)
	{
		FIRE_xx11_OF_E4_8 = true;
	}

	if (numFire == 64)
	{
		FIRE_xx10_OF_EC1_1 = true;
	}

	if (numFire == 65)
	{
		FIRE_xx11_OF_EC1_1 = true;
	}

	if (numFire == 66)
	{
		FIRE_xx10_OF_EC1_2 = true;
	}

	if (numFire == 67)
	{
		FIRE_xx11_OF_EC1_2 = true;
	}

	if (numFire == 68)
	{
		FIRE_xx10_OF_EC1_3 = true;
	}

	if (numFire == 69)
	{
		FIRE_xx11_OF_EC1_3 = true;
	}

	if (numFire == 70)
	{
		FIRE_xx10_OF_EC1_4 = true;
	}

	if (numFire == 71)
	{
		FIRE_xx11_OF_EC1_4 = true;
	}

	if (numFire == 72)
	{
		FIRE_xx10_OF_EC1_5 = true;
	}

	if (numFire == 73)
	{
		FIRE_xx11_OF_EC1_5 = true;
	}

	if (numFire == 74)
	{
		FIRE_xx10_OF_EC1_6 = true;
	}

	if (numFire == 75)
	{
		FIRE_xx11_OF_EC1_6 = true;
	}

	if (numFire == 76)
	{
		FIRE_xx10_OF_EC1_7 = true;
	}

	if (numFire == 77)
	{
		FIRE_xx11_OF_EC1_7 = true;
	}

	if (numFire == 78)
	{
		FIRE_xx10_OF_EC1_8 = true;
	}

	if (numFire == 79)
	{
		FIRE_xx11_OF_EC1_8 = true;
	}

	if (numFire == 80)
	{
		FIRE_xx10_OF_EC2_1 = true;
	}

	if (numFire == 81)
	{
		FIRE_xx11_OF_EC2_1 = true;
	}

	if (numFire == 82)
	{
		FIRE_xx10_OF_EC2_2 = true;
	}

	if (numFire == 83)
	{
		FIRE_xx11_OF_EC2_2 = true;
	}

	if (numFire == 84)
	{
		FIRE_xx10_OF_EC2_3 = true;
	}

	if (numFire == 85)
	{
		FIRE_xx11_OF_EC2_3 = true;
	}

	if (numFire == 86)
	{
		FIRE_xx10_OF_EC2_4 = true;
	}

	if (numFire == 87)
	{
		FIRE_xx11_OF_EC2_4 = true;
	}

	if (numFire == 88)
	{
		FIRE_xx10_OF_EC2_5 = true;
	}

	if (numFire == 89)
	{
		FIRE_xx11_OF_EC2_5 = true;
	}

	if (numFire == 90)
	{
		FIRE_xx10_OF_EC2_6 = true;
	}

	if (numFire == 91)
	{
		FIRE_xx11_OF_EC2_6 = true;
	}

	if (numFire == 92)
	{
		FIRE_xx10_OF_EC2_7 = true;
	}

	if (numFire == 93)
	{
		FIRE_xx11_OF_EC2_7 = true;
	}

	if (numFire == 94)
	{
		FIRE_xx10_OF_EC2_8 = true;
	}

	if (numFire == 95)
	{
		FIRE_xx11_OF_EC2_8 = true;
	}

	if (numFire == 96)
	{
		FIRE_xx10_OF_EC3_1 = true;
	}

	if (numFire == 97)
	{
		FIRE_xx11_OF_EC3_1 = true;
	}

	if (numFire == 98)
	{
		FIRE_xx10_OF_EC3_2 = true;
	}

	if (numFire == 99)
	{
		FIRE_xx11_OF_EC3_2 = true;
	}

	if (numFire == 100)
	{
		FIRE_xx10_OF_EC3_3 = true;
	}

	if (numFire == 101)
	{
		FIRE_xx11_OF_EC3_3 = true;
	}

	if (numFire == 102)
	{
		FIRE_xx10_OF_EC3_4 = true;
	}

	if (numFire == 103)
	{
		FIRE_xx11_OF_EC3_4 = true;
	}

	if (numFire == 104)
	{
		FIRE_xx10_OF_EC3_5 = true;
	}

	if (numFire == 105)
	{
		FIRE_xx11_OF_EC3_5 = true;
	}

	if (numFire == 106)
	{
		FIRE_xx10_OF_EC3_6 = true;
	}

	if (numFire == 107)
	{
		FIRE_xx11_OF_EC3_6 = true;
	}

	if (numFire == 108)
	{
		FIRE_xx10_OF_EC3_7 = true;
	}

	if (numFire == 109)
	{
		FIRE_xx11_OF_EC3_7 = true;
	}

	if (numFire == 110)
	{
		FIRE_xx10_OF_EC3_8 = true;
	}

	if (numFire == 111)
	{
		FIRE_xx11_OF_EC3_8 = true;
	}

/* ---------- DECLARATION OF OCCURRENCE RULES------------ */

	// Occurrence xx10_OF_E1_1
	if ((boolState[failF_OF_E1_1] == false) && (boolState[required_OF_E1_1] &&  boolState[relevant_evt_OF_E1_1])) 
	{
		 
		if (FIRE_xx10_OF_E1_1)
		{
			boolState[failF_OF_E1_1]  =  true;
			FIRE_xx10_OF_E1_1 = false;
		}
	}

	// Occurrence xx11_OF_E1_1
	if (boolState[failF_OF_E1_1] == true) 
	{
		 
		if (FIRE_xx11_OF_E1_1)
		{
			boolState[failF_OF_E1_1]  =  false;
			FIRE_xx11_OF_E1_1 = false;
		}
	}

	// Occurrence xx10_OF_E1_2
	if ((boolState[failF_OF_E1_2] == false) && (boolState[required_OF_E1_2] &&  boolState[relevant_evt_OF_E1_2])) 
	{
		 
		if (FIRE_xx10_OF_E1_2)
		{
			boolState[failF_OF_E1_2]  =  true;
			FIRE_xx10_OF_E1_2 = false;
		}
	}

	// Occurrence xx11_OF_E1_2
	if (boolState[failF_OF_E1_2] == true) 
	{
		 
		if (FIRE_xx11_OF_E1_2)
		{
			boolState[failF_OF_E1_2]  =  false;
			FIRE_xx11_OF_E1_2 = false;
		}
	}

	// Occurrence xx10_OF_E1_3
	if ((boolState[failF_OF_E1_3] == false) && (boolState[required_OF_E1_3] &&  boolState[relevant_evt_OF_E1_3])) 
	{
		 
		if (FIRE_xx10_OF_E1_3)
		{
			boolState[failF_OF_E1_3]  =  true;
			FIRE_xx10_OF_E1_3 = false;
		}
	}

	// Occurrence xx11_OF_E1_3
	if (boolState[failF_OF_E1_3] == true) 
	{
		 
		if (FIRE_xx11_OF_E1_3)
		{
			boolState[failF_OF_E1_3]  =  false;
			FIRE_xx11_OF_E1_3 = false;
		}
	}

	// Occurrence xx10_OF_E1_4
	if ((boolState[failF_OF_E1_4] == false) && (boolState[required_OF_E1_4] &&  boolState[relevant_evt_OF_E1_4])) 
	{
		 
		if (FIRE_xx10_OF_E1_4)
		{
			boolState[failF_OF_E1_4]  =  true;
			FIRE_xx10_OF_E1_4 = false;
		}
	}

	// Occurrence xx11_OF_E1_4
	if (boolState[failF_OF_E1_4] == true) 
	{
		 
		if (FIRE_xx11_OF_E1_4)
		{
			boolState[failF_OF_E1_4]  =  false;
			FIRE_xx11_OF_E1_4 = false;
		}
	}

	// Occurrence xx10_OF_E1_5
	if ((boolState[failF_OF_E1_5] == false) && (boolState[required_OF_E1_5] &&  boolState[relevant_evt_OF_E1_5])) 
	{
		 
		if (FIRE_xx10_OF_E1_5)
		{
			boolState[failF_OF_E1_5]  =  true;
			FIRE_xx10_OF_E1_5 = false;
		}
	}

	// Occurrence xx11_OF_E1_5
	if (boolState[failF_OF_E1_5] == true) 
	{
		 
		if (FIRE_xx11_OF_E1_5)
		{
			boolState[failF_OF_E1_5]  =  false;
			FIRE_xx11_OF_E1_5 = false;
		}
	}

	// Occurrence xx10_OF_E1_6
	if ((boolState[failF_OF_E1_6] == false) && (boolState[required_OF_E1_6] &&  boolState[relevant_evt_OF_E1_6])) 
	{
		 
		if (FIRE_xx10_OF_E1_6)
		{
			boolState[failF_OF_E1_6]  =  true;
			FIRE_xx10_OF_E1_6 = false;
		}
	}

	// Occurrence xx11_OF_E1_6
	if (boolState[failF_OF_E1_6] == true) 
	{
		 
		if (FIRE_xx11_OF_E1_6)
		{
			boolState[failF_OF_E1_6]  =  false;
			FIRE_xx11_OF_E1_6 = false;
		}
	}

	// Occurrence xx10_OF_E1_7
	if ((boolState[failF_OF_E1_7] == false) && (boolState[required_OF_E1_7] &&  boolState[relevant_evt_OF_E1_7])) 
	{
		 
		if (FIRE_xx10_OF_E1_7)
		{
			boolState[failF_OF_E1_7]  =  true;
			FIRE_xx10_OF_E1_7 = false;
		}
	}

	// Occurrence xx11_OF_E1_7
	if (boolState[failF_OF_E1_7] == true) 
	{
		 
		if (FIRE_xx11_OF_E1_7)
		{
			boolState[failF_OF_E1_7]  =  false;
			FIRE_xx11_OF_E1_7 = false;
		}
	}

	// Occurrence xx10_OF_E1_8
	if ((boolState[failF_OF_E1_8] == false) && (boolState[required_OF_E1_8] &&  boolState[relevant_evt_OF_E1_8])) 
	{
		 
		if (FIRE_xx10_OF_E1_8)
		{
			boolState[failF_OF_E1_8]  =  true;
			FIRE_xx10_OF_E1_8 = false;
		}
	}

	// Occurrence xx11_OF_E1_8
	if (boolState[failF_OF_E1_8] == true) 
	{
		 
		if (FIRE_xx11_OF_E1_8)
		{
			boolState[failF_OF_E1_8]  =  false;
			FIRE_xx11_OF_E1_8 = false;
		}
	}

	// Occurrence xx10_OF_E2_1
	if ((boolState[failF_OF_E2_1] == false) && (boolState[required_OF_E2_1] &&  boolState[relevant_evt_OF_E2_1])) 
	{
		 
		if (FIRE_xx10_OF_E2_1)
		{
			boolState[failF_OF_E2_1]  =  true;
			FIRE_xx10_OF_E2_1 = false;
		}
	}

	// Occurrence xx11_OF_E2_1
	if (boolState[failF_OF_E2_1] == true) 
	{
		 
		if (FIRE_xx11_OF_E2_1)
		{
			boolState[failF_OF_E2_1]  =  false;
			FIRE_xx11_OF_E2_1 = false;
		}
	}

	// Occurrence xx10_OF_E2_2
	if ((boolState[failF_OF_E2_2] == false) && (boolState[required_OF_E2_2] &&  boolState[relevant_evt_OF_E2_2])) 
	{
		 
		if (FIRE_xx10_OF_E2_2)
		{
			boolState[failF_OF_E2_2]  =  true;
			FIRE_xx10_OF_E2_2 = false;
		}
	}

	// Occurrence xx11_OF_E2_2
	if (boolState[failF_OF_E2_2] == true) 
	{
		 
		if (FIRE_xx11_OF_E2_2)
		{
			boolState[failF_OF_E2_2]  =  false;
			FIRE_xx11_OF_E2_2 = false;
		}
	}

	// Occurrence xx10_OF_E2_3
	if ((boolState[failF_OF_E2_3] == false) && (boolState[required_OF_E2_3] &&  boolState[relevant_evt_OF_E2_3])) 
	{
		 
		if (FIRE_xx10_OF_E2_3)
		{
			boolState[failF_OF_E2_3]  =  true;
			FIRE_xx10_OF_E2_3 = false;
		}
	}

	// Occurrence xx11_OF_E2_3
	if (boolState[failF_OF_E2_3] == true) 
	{
		 
		if (FIRE_xx11_OF_E2_3)
		{
			boolState[failF_OF_E2_3]  =  false;
			FIRE_xx11_OF_E2_3 = false;
		}
	}

	// Occurrence xx10_OF_E2_4
	if ((boolState[failF_OF_E2_4] == false) && (boolState[required_OF_E2_4] &&  boolState[relevant_evt_OF_E2_4])) 
	{
		 
		if (FIRE_xx10_OF_E2_4)
		{
			boolState[failF_OF_E2_4]  =  true;
			FIRE_xx10_OF_E2_4 = false;
		}
	}

	// Occurrence xx11_OF_E2_4
	if (boolState[failF_OF_E2_4] == true) 
	{
		 
		if (FIRE_xx11_OF_E2_4)
		{
			boolState[failF_OF_E2_4]  =  false;
			FIRE_xx11_OF_E2_4 = false;
		}
	}

	// Occurrence xx10_OF_E2_5
	if ((boolState[failF_OF_E2_5] == false) && (boolState[required_OF_E2_5] &&  boolState[relevant_evt_OF_E2_5])) 
	{
		 
		if (FIRE_xx10_OF_E2_5)
		{
			boolState[failF_OF_E2_5]  =  true;
			FIRE_xx10_OF_E2_5 = false;
		}
	}

	// Occurrence xx11_OF_E2_5
	if (boolState[failF_OF_E2_5] == true) 
	{
		 
		if (FIRE_xx11_OF_E2_5)
		{
			boolState[failF_OF_E2_5]  =  false;
			FIRE_xx11_OF_E2_5 = false;
		}
	}

	// Occurrence xx10_OF_E2_6
	if ((boolState[failF_OF_E2_6] == false) && (boolState[required_OF_E2_6] &&  boolState[relevant_evt_OF_E2_6])) 
	{
		 
		if (FIRE_xx10_OF_E2_6)
		{
			boolState[failF_OF_E2_6]  =  true;
			FIRE_xx10_OF_E2_6 = false;
		}
	}

	// Occurrence xx11_OF_E2_6
	if (boolState[failF_OF_E2_6] == true) 
	{
		 
		if (FIRE_xx11_OF_E2_6)
		{
			boolState[failF_OF_E2_6]  =  false;
			FIRE_xx11_OF_E2_6 = false;
		}
	}

	// Occurrence xx10_OF_E2_7
	if ((boolState[failF_OF_E2_7] == false) && (boolState[required_OF_E2_7] &&  boolState[relevant_evt_OF_E2_7])) 
	{
		 
		if (FIRE_xx10_OF_E2_7)
		{
			boolState[failF_OF_E2_7]  =  true;
			FIRE_xx10_OF_E2_7 = false;
		}
	}

	// Occurrence xx11_OF_E2_7
	if (boolState[failF_OF_E2_7] == true) 
	{
		 
		if (FIRE_xx11_OF_E2_7)
		{
			boolState[failF_OF_E2_7]  =  false;
			FIRE_xx11_OF_E2_7 = false;
		}
	}

	// Occurrence xx10_OF_E2_8
	if ((boolState[failF_OF_E2_8] == false) && (boolState[required_OF_E2_8] &&  boolState[relevant_evt_OF_E2_8])) 
	{
		 
		if (FIRE_xx10_OF_E2_8)
		{
			boolState[failF_OF_E2_8]  =  true;
			FIRE_xx10_OF_E2_8 = false;
		}
	}

	// Occurrence xx11_OF_E2_8
	if (boolState[failF_OF_E2_8] == true) 
	{
		 
		if (FIRE_xx11_OF_E2_8)
		{
			boolState[failF_OF_E2_8]  =  false;
			FIRE_xx11_OF_E2_8 = false;
		}
	}

	// Occurrence xx10_OF_E3_1
	if ((boolState[failF_OF_E3_1] == false) && (boolState[required_OF_E3_1] &&  boolState[relevant_evt_OF_E3_1])) 
	{
		 
		if (FIRE_xx10_OF_E3_1)
		{
			boolState[failF_OF_E3_1]  =  true;
			FIRE_xx10_OF_E3_1 = false;
		}
	}

	// Occurrence xx11_OF_E3_1
	if (boolState[failF_OF_E3_1] == true) 
	{
		 
		if (FIRE_xx11_OF_E3_1)
		{
			boolState[failF_OF_E3_1]  =  false;
			FIRE_xx11_OF_E3_1 = false;
		}
	}

	// Occurrence xx10_OF_E3_2
	if ((boolState[failF_OF_E3_2] == false) && (boolState[required_OF_E3_2] &&  boolState[relevant_evt_OF_E3_2])) 
	{
		 
		if (FIRE_xx10_OF_E3_2)
		{
			boolState[failF_OF_E3_2]  =  true;
			FIRE_xx10_OF_E3_2 = false;
		}
	}

	// Occurrence xx11_OF_E3_2
	if (boolState[failF_OF_E3_2] == true) 
	{
		 
		if (FIRE_xx11_OF_E3_2)
		{
			boolState[failF_OF_E3_2]  =  false;
			FIRE_xx11_OF_E3_2 = false;
		}
	}

	// Occurrence xx10_OF_E3_3
	if ((boolState[failF_OF_E3_3] == false) && (boolState[required_OF_E3_3] &&  boolState[relevant_evt_OF_E3_3])) 
	{
		 
		if (FIRE_xx10_OF_E3_3)
		{
			boolState[failF_OF_E3_3]  =  true;
			FIRE_xx10_OF_E3_3 = false;
		}
	}

	// Occurrence xx11_OF_E3_3
	if (boolState[failF_OF_E3_3] == true) 
	{
		 
		if (FIRE_xx11_OF_E3_3)
		{
			boolState[failF_OF_E3_3]  =  false;
			FIRE_xx11_OF_E3_3 = false;
		}
	}

	// Occurrence xx10_OF_E3_4
	if ((boolState[failF_OF_E3_4] == false) && (boolState[required_OF_E3_4] &&  boolState[relevant_evt_OF_E3_4])) 
	{
		 
		if (FIRE_xx10_OF_E3_4)
		{
			boolState[failF_OF_E3_4]  =  true;
			FIRE_xx10_OF_E3_4 = false;
		}
	}

	// Occurrence xx11_OF_E3_4
	if (boolState[failF_OF_E3_4] == true) 
	{
		 
		if (FIRE_xx11_OF_E3_4)
		{
			boolState[failF_OF_E3_4]  =  false;
			FIRE_xx11_OF_E3_4 = false;
		}
	}

	// Occurrence xx10_OF_E3_5
	if ((boolState[failF_OF_E3_5] == false) && (boolState[required_OF_E3_5] &&  boolState[relevant_evt_OF_E3_5])) 
	{
		 
		if (FIRE_xx10_OF_E3_5)
		{
			boolState[failF_OF_E3_5]  =  true;
			FIRE_xx10_OF_E3_5 = false;
		}
	}

	// Occurrence xx11_OF_E3_5
	if (boolState[failF_OF_E3_5] == true) 
	{
		 
		if (FIRE_xx11_OF_E3_5)
		{
			boolState[failF_OF_E3_5]  =  false;
			FIRE_xx11_OF_E3_5 = false;
		}
	}

	// Occurrence xx10_OF_E3_6
	if ((boolState[failF_OF_E3_6] == false) && (boolState[required_OF_E3_6] &&  boolState[relevant_evt_OF_E3_6])) 
	{
		 
		if (FIRE_xx10_OF_E3_6)
		{
			boolState[failF_OF_E3_6]  =  true;
			FIRE_xx10_OF_E3_6 = false;
		}
	}

	// Occurrence xx11_OF_E3_6
	if (boolState[failF_OF_E3_6] == true) 
	{
		 
		if (FIRE_xx11_OF_E3_6)
		{
			boolState[failF_OF_E3_6]  =  false;
			FIRE_xx11_OF_E3_6 = false;
		}
	}

	// Occurrence xx10_OF_E3_7
	if ((boolState[failF_OF_E3_7] == false) && (boolState[required_OF_E3_7] &&  boolState[relevant_evt_OF_E3_7])) 
	{
		 
		if (FIRE_xx10_OF_E3_7)
		{
			boolState[failF_OF_E3_7]  =  true;
			FIRE_xx10_OF_E3_7 = false;
		}
	}

	// Occurrence xx11_OF_E3_7
	if (boolState[failF_OF_E3_7] == true) 
	{
		 
		if (FIRE_xx11_OF_E3_7)
		{
			boolState[failF_OF_E3_7]  =  false;
			FIRE_xx11_OF_E3_7 = false;
		}
	}

	// Occurrence xx10_OF_E3_8
	if ((boolState[failF_OF_E3_8] == false) && (boolState[required_OF_E3_8] &&  boolState[relevant_evt_OF_E3_8])) 
	{
		 
		if (FIRE_xx10_OF_E3_8)
		{
			boolState[failF_OF_E3_8]  =  true;
			FIRE_xx10_OF_E3_8 = false;
		}
	}

	// Occurrence xx11_OF_E3_8
	if (boolState[failF_OF_E3_8] == true) 
	{
		 
		if (FIRE_xx11_OF_E3_8)
		{
			boolState[failF_OF_E3_8]  =  false;
			FIRE_xx11_OF_E3_8 = false;
		}
	}

	// Occurrence xx10_OF_E4_1
	if ((boolState[failF_OF_E4_1] == false) && (boolState[required_OF_E4_1] &&  boolState[relevant_evt_OF_E4_1])) 
	{
		 
		if (FIRE_xx10_OF_E4_1)
		{
			boolState[failF_OF_E4_1]  =  true;
			FIRE_xx10_OF_E4_1 = false;
		}
	}

	// Occurrence xx11_OF_E4_1
	if (boolState[failF_OF_E4_1] == true) 
	{
		 
		if (FIRE_xx11_OF_E4_1)
		{
			boolState[failF_OF_E4_1]  =  false;
			FIRE_xx11_OF_E4_1 = false;
		}
	}

	// Occurrence xx10_OF_E4_2
	if ((boolState[failF_OF_E4_2] == false) && (boolState[required_OF_E4_2] &&  boolState[relevant_evt_OF_E4_2])) 
	{
		 
		if (FIRE_xx10_OF_E4_2)
		{
			boolState[failF_OF_E4_2]  =  true;
			FIRE_xx10_OF_E4_2 = false;
		}
	}

	// Occurrence xx11_OF_E4_2
	if (boolState[failF_OF_E4_2] == true) 
	{
		 
		if (FIRE_xx11_OF_E4_2)
		{
			boolState[failF_OF_E4_2]  =  false;
			FIRE_xx11_OF_E4_2 = false;
		}
	}

	// Occurrence xx10_OF_E4_3
	if ((boolState[failF_OF_E4_3] == false) && (boolState[required_OF_E4_3] &&  boolState[relevant_evt_OF_E4_3])) 
	{
		 
		if (FIRE_xx10_OF_E4_3)
		{
			boolState[failF_OF_E4_3]  =  true;
			FIRE_xx10_OF_E4_3 = false;
		}
	}

	// Occurrence xx11_OF_E4_3
	if (boolState[failF_OF_E4_3] == true) 
	{
		 
		if (FIRE_xx11_OF_E4_3)
		{
			boolState[failF_OF_E4_3]  =  false;
			FIRE_xx11_OF_E4_3 = false;
		}
	}

	// Occurrence xx10_OF_E4_4
	if ((boolState[failF_OF_E4_4] == false) && (boolState[required_OF_E4_4] &&  boolState[relevant_evt_OF_E4_4])) 
	{
		 
		if (FIRE_xx10_OF_E4_4)
		{
			boolState[failF_OF_E4_4]  =  true;
			FIRE_xx10_OF_E4_4 = false;
		}
	}

	// Occurrence xx11_OF_E4_4
	if (boolState[failF_OF_E4_4] == true) 
	{
		 
		if (FIRE_xx11_OF_E4_4)
		{
			boolState[failF_OF_E4_4]  =  false;
			FIRE_xx11_OF_E4_4 = false;
		}
	}

	// Occurrence xx10_OF_E4_5
	if ((boolState[failF_OF_E4_5] == false) && (boolState[required_OF_E4_5] &&  boolState[relevant_evt_OF_E4_5])) 
	{
		 
		if (FIRE_xx10_OF_E4_5)
		{
			boolState[failF_OF_E4_5]  =  true;
			FIRE_xx10_OF_E4_5 = false;
		}
	}

	// Occurrence xx11_OF_E4_5
	if (boolState[failF_OF_E4_5] == true) 
	{
		 
		if (FIRE_xx11_OF_E4_5)
		{
			boolState[failF_OF_E4_5]  =  false;
			FIRE_xx11_OF_E4_5 = false;
		}
	}

	// Occurrence xx10_OF_E4_6
	if ((boolState[failF_OF_E4_6] == false) && (boolState[required_OF_E4_6] &&  boolState[relevant_evt_OF_E4_6])) 
	{
		 
		if (FIRE_xx10_OF_E4_6)
		{
			boolState[failF_OF_E4_6]  =  true;
			FIRE_xx10_OF_E4_6 = false;
		}
	}

	// Occurrence xx11_OF_E4_6
	if (boolState[failF_OF_E4_6] == true) 
	{
		 
		if (FIRE_xx11_OF_E4_6)
		{
			boolState[failF_OF_E4_6]  =  false;
			FIRE_xx11_OF_E4_6 = false;
		}
	}

	// Occurrence xx10_OF_E4_7
	if ((boolState[failF_OF_E4_7] == false) && (boolState[required_OF_E4_7] &&  boolState[relevant_evt_OF_E4_7])) 
	{
		 
		if (FIRE_xx10_OF_E4_7)
		{
			boolState[failF_OF_E4_7]  =  true;
			FIRE_xx10_OF_E4_7 = false;
		}
	}

	// Occurrence xx11_OF_E4_7
	if (boolState[failF_OF_E4_7] == true) 
	{
		 
		if (FIRE_xx11_OF_E4_7)
		{
			boolState[failF_OF_E4_7]  =  false;
			FIRE_xx11_OF_E4_7 = false;
		}
	}

	// Occurrence xx10_OF_E4_8
	if ((boolState[failF_OF_E4_8] == false) && (boolState[required_OF_E4_8] &&  boolState[relevant_evt_OF_E4_8])) 
	{
		 
		if (FIRE_xx10_OF_E4_8)
		{
			boolState[failF_OF_E4_8]  =  true;
			FIRE_xx10_OF_E4_8 = false;
		}
	}

	// Occurrence xx11_OF_E4_8
	if (boolState[failF_OF_E4_8] == true) 
	{
		 
		if (FIRE_xx11_OF_E4_8)
		{
			boolState[failF_OF_E4_8]  =  false;
			FIRE_xx11_OF_E4_8 = false;
		}
	}

	// Occurrence xx10_OF_EC1_1
	if ((boolState[failF_OF_EC1_1] == false) && (boolState[required_OF_EC1_1] &&  boolState[relevant_evt_OF_EC1_1])) 
	{
		 
		if (FIRE_xx10_OF_EC1_1)
		{
			boolState[failF_OF_EC1_1]  =  true;
			FIRE_xx10_OF_EC1_1 = false;
		}
	}

	// Occurrence xx11_OF_EC1_1
	if (boolState[failF_OF_EC1_1] == true) 
	{
		 
		if (FIRE_xx11_OF_EC1_1)
		{
			boolState[failF_OF_EC1_1]  =  false;
			FIRE_xx11_OF_EC1_1 = false;
		}
	}

	// Occurrence xx10_OF_EC1_2
	if ((boolState[failF_OF_EC1_2] == false) && (boolState[required_OF_EC1_2] &&  boolState[relevant_evt_OF_EC1_2])) 
	{
		 
		if (FIRE_xx10_OF_EC1_2)
		{
			boolState[failF_OF_EC1_2]  =  true;
			FIRE_xx10_OF_EC1_2 = false;
		}
	}

	// Occurrence xx11_OF_EC1_2
	if (boolState[failF_OF_EC1_2] == true) 
	{
		 
		if (FIRE_xx11_OF_EC1_2)
		{
			boolState[failF_OF_EC1_2]  =  false;
			FIRE_xx11_OF_EC1_2 = false;
		}
	}

	// Occurrence xx10_OF_EC1_3
	if ((boolState[failF_OF_EC1_3] == false) && (boolState[required_OF_EC1_3] &&  boolState[relevant_evt_OF_EC1_3])) 
	{
		 
		if (FIRE_xx10_OF_EC1_3)
		{
			boolState[failF_OF_EC1_3]  =  true;
			FIRE_xx10_OF_EC1_3 = false;
		}
	}

	// Occurrence xx11_OF_EC1_3
	if (boolState[failF_OF_EC1_3] == true) 
	{
		 
		if (FIRE_xx11_OF_EC1_3)
		{
			boolState[failF_OF_EC1_3]  =  false;
			FIRE_xx11_OF_EC1_3 = false;
		}
	}

	// Occurrence xx10_OF_EC1_4
	if ((boolState[failF_OF_EC1_4] == false) && (boolState[required_OF_EC1_4] &&  boolState[relevant_evt_OF_EC1_4])) 
	{
		 
		if (FIRE_xx10_OF_EC1_4)
		{
			boolState[failF_OF_EC1_4]  =  true;
			FIRE_xx10_OF_EC1_4 = false;
		}
	}

	// Occurrence xx11_OF_EC1_4
	if (boolState[failF_OF_EC1_4] == true) 
	{
		 
		if (FIRE_xx11_OF_EC1_4)
		{
			boolState[failF_OF_EC1_4]  =  false;
			FIRE_xx11_OF_EC1_4 = false;
		}
	}

	// Occurrence xx10_OF_EC1_5
	if ((boolState[failF_OF_EC1_5] == false) && (boolState[required_OF_EC1_5] &&  boolState[relevant_evt_OF_EC1_5])) 
	{
		 
		if (FIRE_xx10_OF_EC1_5)
		{
			boolState[failF_OF_EC1_5]  =  true;
			FIRE_xx10_OF_EC1_5 = false;
		}
	}

	// Occurrence xx11_OF_EC1_5
	if (boolState[failF_OF_EC1_5] == true) 
	{
		 
		if (FIRE_xx11_OF_EC1_5)
		{
			boolState[failF_OF_EC1_5]  =  false;
			FIRE_xx11_OF_EC1_5 = false;
		}
	}

	// Occurrence xx10_OF_EC1_6
	if ((boolState[failF_OF_EC1_6] == false) && (boolState[required_OF_EC1_6] &&  boolState[relevant_evt_OF_EC1_6])) 
	{
		 
		if (FIRE_xx10_OF_EC1_6)
		{
			boolState[failF_OF_EC1_6]  =  true;
			FIRE_xx10_OF_EC1_6 = false;
		}
	}

	// Occurrence xx11_OF_EC1_6
	if (boolState[failF_OF_EC1_6] == true) 
	{
		 
		if (FIRE_xx11_OF_EC1_6)
		{
			boolState[failF_OF_EC1_6]  =  false;
			FIRE_xx11_OF_EC1_6 = false;
		}
	}

	// Occurrence xx10_OF_EC1_7
	if ((boolState[failF_OF_EC1_7] == false) && (boolState[required_OF_EC1_7] &&  boolState[relevant_evt_OF_EC1_7])) 
	{
		 
		if (FIRE_xx10_OF_EC1_7)
		{
			boolState[failF_OF_EC1_7]  =  true;
			FIRE_xx10_OF_EC1_7 = false;
		}
	}

	// Occurrence xx11_OF_EC1_7
	if (boolState[failF_OF_EC1_7] == true) 
	{
		 
		if (FIRE_xx11_OF_EC1_7)
		{
			boolState[failF_OF_EC1_7]  =  false;
			FIRE_xx11_OF_EC1_7 = false;
		}
	}

	// Occurrence xx10_OF_EC1_8
	if ((boolState[failF_OF_EC1_8] == false) && (boolState[required_OF_EC1_8] &&  boolState[relevant_evt_OF_EC1_8])) 
	{
		 
		if (FIRE_xx10_OF_EC1_8)
		{
			boolState[failF_OF_EC1_8]  =  true;
			FIRE_xx10_OF_EC1_8 = false;
		}
	}

	// Occurrence xx11_OF_EC1_8
	if (boolState[failF_OF_EC1_8] == true) 
	{
		 
		if (FIRE_xx11_OF_EC1_8)
		{
			boolState[failF_OF_EC1_8]  =  false;
			FIRE_xx11_OF_EC1_8 = false;
		}
	}

	// Occurrence xx10_OF_EC2_1
	if ((boolState[failF_OF_EC2_1] == false) && (boolState[required_OF_EC2_1] &&  boolState[relevant_evt_OF_EC2_1])) 
	{
		 
		if (FIRE_xx10_OF_EC2_1)
		{
			boolState[failF_OF_EC2_1]  =  true;
			FIRE_xx10_OF_EC2_1 = false;
		}
	}

	// Occurrence xx11_OF_EC2_1
	if (boolState[failF_OF_EC2_1] == true) 
	{
		 
		if (FIRE_xx11_OF_EC2_1)
		{
			boolState[failF_OF_EC2_1]  =  false;
			FIRE_xx11_OF_EC2_1 = false;
		}
	}

	// Occurrence xx10_OF_EC2_2
	if ((boolState[failF_OF_EC2_2] == false) && (boolState[required_OF_EC2_2] &&  boolState[relevant_evt_OF_EC2_2])) 
	{
		 
		if (FIRE_xx10_OF_EC2_2)
		{
			boolState[failF_OF_EC2_2]  =  true;
			FIRE_xx10_OF_EC2_2 = false;
		}
	}

	// Occurrence xx11_OF_EC2_2
	if (boolState[failF_OF_EC2_2] == true) 
	{
		 
		if (FIRE_xx11_OF_EC2_2)
		{
			boolState[failF_OF_EC2_2]  =  false;
			FIRE_xx11_OF_EC2_2 = false;
		}
	}

	// Occurrence xx10_OF_EC2_3
	if ((boolState[failF_OF_EC2_3] == false) && (boolState[required_OF_EC2_3] &&  boolState[relevant_evt_OF_EC2_3])) 
	{
		 
		if (FIRE_xx10_OF_EC2_3)
		{
			boolState[failF_OF_EC2_3]  =  true;
			FIRE_xx10_OF_EC2_3 = false;
		}
	}

	// Occurrence xx11_OF_EC2_3
	if (boolState[failF_OF_EC2_3] == true) 
	{
		 
		if (FIRE_xx11_OF_EC2_3)
		{
			boolState[failF_OF_EC2_3]  =  false;
			FIRE_xx11_OF_EC2_3 = false;
		}
	}

	// Occurrence xx10_OF_EC2_4
	if ((boolState[failF_OF_EC2_4] == false) && (boolState[required_OF_EC2_4] &&  boolState[relevant_evt_OF_EC2_4])) 
	{
		 
		if (FIRE_xx10_OF_EC2_4)
		{
			boolState[failF_OF_EC2_4]  =  true;
			FIRE_xx10_OF_EC2_4 = false;
		}
	}

	// Occurrence xx11_OF_EC2_4
	if (boolState[failF_OF_EC2_4] == true) 
	{
		 
		if (FIRE_xx11_OF_EC2_4)
		{
			boolState[failF_OF_EC2_4]  =  false;
			FIRE_xx11_OF_EC2_4 = false;
		}
	}

	// Occurrence xx10_OF_EC2_5
	if ((boolState[failF_OF_EC2_5] == false) && (boolState[required_OF_EC2_5] &&  boolState[relevant_evt_OF_EC2_5])) 
	{
		 
		if (FIRE_xx10_OF_EC2_5)
		{
			boolState[failF_OF_EC2_5]  =  true;
			FIRE_xx10_OF_EC2_5 = false;
		}
	}

	// Occurrence xx11_OF_EC2_5
	if (boolState[failF_OF_EC2_5] == true) 
	{
		 
		if (FIRE_xx11_OF_EC2_5)
		{
			boolState[failF_OF_EC2_5]  =  false;
			FIRE_xx11_OF_EC2_5 = false;
		}
	}

	// Occurrence xx10_OF_EC2_6
	if ((boolState[failF_OF_EC2_6] == false) && (boolState[required_OF_EC2_6] &&  boolState[relevant_evt_OF_EC2_6])) 
	{
		 
		if (FIRE_xx10_OF_EC2_6)
		{
			boolState[failF_OF_EC2_6]  =  true;
			FIRE_xx10_OF_EC2_6 = false;
		}
	}

	// Occurrence xx11_OF_EC2_6
	if (boolState[failF_OF_EC2_6] == true) 
	{
		 
		if (FIRE_xx11_OF_EC2_6)
		{
			boolState[failF_OF_EC2_6]  =  false;
			FIRE_xx11_OF_EC2_6 = false;
		}
	}

	// Occurrence xx10_OF_EC2_7
	if ((boolState[failF_OF_EC2_7] == false) && (boolState[required_OF_EC2_7] &&  boolState[relevant_evt_OF_EC2_7])) 
	{
		 
		if (FIRE_xx10_OF_EC2_7)
		{
			boolState[failF_OF_EC2_7]  =  true;
			FIRE_xx10_OF_EC2_7 = false;
		}
	}

	// Occurrence xx11_OF_EC2_7
	if (boolState[failF_OF_EC2_7] == true) 
	{
		 
		if (FIRE_xx11_OF_EC2_7)
		{
			boolState[failF_OF_EC2_7]  =  false;
			FIRE_xx11_OF_EC2_7 = false;
		}
	}

	// Occurrence xx10_OF_EC2_8
	if ((boolState[failF_OF_EC2_8] == false) && (boolState[required_OF_EC2_8] &&  boolState[relevant_evt_OF_EC2_8])) 
	{
		 
		if (FIRE_xx10_OF_EC2_8)
		{
			boolState[failF_OF_EC2_8]  =  true;
			FIRE_xx10_OF_EC2_8 = false;
		}
	}

	// Occurrence xx11_OF_EC2_8
	if (boolState[failF_OF_EC2_8] == true) 
	{
		 
		if (FIRE_xx11_OF_EC2_8)
		{
			boolState[failF_OF_EC2_8]  =  false;
			FIRE_xx11_OF_EC2_8 = false;
		}
	}

	// Occurrence xx10_OF_EC3_1
	if ((boolState[failF_OF_EC3_1] == false) && (boolState[required_OF_EC3_1] &&  boolState[relevant_evt_OF_EC3_1])) 
	{
		 
		if (FIRE_xx10_OF_EC3_1)
		{
			boolState[failF_OF_EC3_1]  =  true;
			FIRE_xx10_OF_EC3_1 = false;
		}
	}

	// Occurrence xx11_OF_EC3_1
	if (boolState[failF_OF_EC3_1] == true) 
	{
		 
		if (FIRE_xx11_OF_EC3_1)
		{
			boolState[failF_OF_EC3_1]  =  false;
			FIRE_xx11_OF_EC3_1 = false;
		}
	}

	// Occurrence xx10_OF_EC3_2
	if ((boolState[failF_OF_EC3_2] == false) && (boolState[required_OF_EC3_2] &&  boolState[relevant_evt_OF_EC3_2])) 
	{
		 
		if (FIRE_xx10_OF_EC3_2)
		{
			boolState[failF_OF_EC3_2]  =  true;
			FIRE_xx10_OF_EC3_2 = false;
		}
	}

	// Occurrence xx11_OF_EC3_2
	if (boolState[failF_OF_EC3_2] == true) 
	{
		 
		if (FIRE_xx11_OF_EC3_2)
		{
			boolState[failF_OF_EC3_2]  =  false;
			FIRE_xx11_OF_EC3_2 = false;
		}
	}

	// Occurrence xx10_OF_EC3_3
	if ((boolState[failF_OF_EC3_3] == false) && (boolState[required_OF_EC3_3] &&  boolState[relevant_evt_OF_EC3_3])) 
	{
		 
		if (FIRE_xx10_OF_EC3_3)
		{
			boolState[failF_OF_EC3_3]  =  true;
			FIRE_xx10_OF_EC3_3 = false;
		}
	}

	// Occurrence xx11_OF_EC3_3
	if (boolState[failF_OF_EC3_3] == true) 
	{
		 
		if (FIRE_xx11_OF_EC3_3)
		{
			boolState[failF_OF_EC3_3]  =  false;
			FIRE_xx11_OF_EC3_3 = false;
		}
	}

	// Occurrence xx10_OF_EC3_4
	if ((boolState[failF_OF_EC3_4] == false) && (boolState[required_OF_EC3_4] &&  boolState[relevant_evt_OF_EC3_4])) 
	{
		 
		if (FIRE_xx10_OF_EC3_4)
		{
			boolState[failF_OF_EC3_4]  =  true;
			FIRE_xx10_OF_EC3_4 = false;
		}
	}

	// Occurrence xx11_OF_EC3_4
	if (boolState[failF_OF_EC3_4] == true) 
	{
		 
		if (FIRE_xx11_OF_EC3_4)
		{
			boolState[failF_OF_EC3_4]  =  false;
			FIRE_xx11_OF_EC3_4 = false;
		}
	}

	// Occurrence xx10_OF_EC3_5
	if ((boolState[failF_OF_EC3_5] == false) && (boolState[required_OF_EC3_5] &&  boolState[relevant_evt_OF_EC3_5])) 
	{
		 
		if (FIRE_xx10_OF_EC3_5)
		{
			boolState[failF_OF_EC3_5]  =  true;
			FIRE_xx10_OF_EC3_5 = false;
		}
	}

	// Occurrence xx11_OF_EC3_5
	if (boolState[failF_OF_EC3_5] == true) 
	{
		 
		if (FIRE_xx11_OF_EC3_5)
		{
			boolState[failF_OF_EC3_5]  =  false;
			FIRE_xx11_OF_EC3_5 = false;
		}
	}

	// Occurrence xx10_OF_EC3_6
	if ((boolState[failF_OF_EC3_6] == false) && (boolState[required_OF_EC3_6] &&  boolState[relevant_evt_OF_EC3_6])) 
	{
		 
		if (FIRE_xx10_OF_EC3_6)
		{
			boolState[failF_OF_EC3_6]  =  true;
			FIRE_xx10_OF_EC3_6 = false;
		}
	}

	// Occurrence xx11_OF_EC3_6
	if (boolState[failF_OF_EC3_6] == true) 
	{
		 
		if (FIRE_xx11_OF_EC3_6)
		{
			boolState[failF_OF_EC3_6]  =  false;
			FIRE_xx11_OF_EC3_6 = false;
		}
	}

	// Occurrence xx10_OF_EC3_7
	if ((boolState[failF_OF_EC3_7] == false) && (boolState[required_OF_EC3_7] &&  boolState[relevant_evt_OF_EC3_7])) 
	{
		 
		if (FIRE_xx10_OF_EC3_7)
		{
			boolState[failF_OF_EC3_7]  =  true;
			FIRE_xx10_OF_EC3_7 = false;
		}
	}

	// Occurrence xx11_OF_EC3_7
	if (boolState[failF_OF_EC3_7] == true) 
	{
		 
		if (FIRE_xx11_OF_EC3_7)
		{
			boolState[failF_OF_EC3_7]  =  false;
			FIRE_xx11_OF_EC3_7 = false;
		}
	}

	// Occurrence xx10_OF_EC3_8
	if ((boolState[failF_OF_EC3_8] == false) && (boolState[required_OF_EC3_8] &&  boolState[relevant_evt_OF_EC3_8])) 
	{
		 
		if (FIRE_xx10_OF_EC3_8)
		{
			boolState[failF_OF_EC3_8]  =  true;
			FIRE_xx10_OF_EC3_8 = false;
		}
	}

	// Occurrence xx11_OF_EC3_8
	if (boolState[failF_OF_EC3_8] == true) 
	{
		 
		if (FIRE_xx11_OF_EC3_8)
		{
			boolState[failF_OF_EC3_8]  =  false;
			FIRE_xx11_OF_EC3_8 = false;
		}
	}

}

std::vector<std::tuple<int, double, std::string, int>> storm::figaro::FigaroProgram_sf_8_2_manualy_written_Trim_repair::showFireableOccurrences()
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
     
	if ((boolState[failF_OF_E1_1] == false) && (boolState[required_OF_E1_1] && boolState[relevant_evt_OF_E1_1]))
	{
		//cout << "0 : xx10_OF_E1_1 : FAULT failF  LABEL \"failure in operation E1_1\"  DIST EXP (0.25)  INDUCING boolState[failF_OF_E1_1]  =  TRUE" << endl;
		list.push_back(make_tuple(0, 0.25, "EXP", 0));
	}
	if (boolState[failF_OF_E1_1] == true)
	{
		//cout << "1 : xx11_OF_E1_1 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_E1_1]  =  FALSE" << endl;
		list.push_back(make_tuple(1, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_E1_2] == false) && (boolState[required_OF_E1_2] && boolState[relevant_evt_OF_E1_2]))
	{
		//cout << "2 : xx10_OF_E1_2 : FAULT failF  LABEL \"failure in operation E1_2\"  DIST EXP (0.25)  INDUCING boolState[failF_OF_E1_2]  =  TRUE" << endl;
		list.push_back(make_tuple(2, 0.25, "EXP", 0));
	}
	if (boolState[failF_OF_E1_2] == true)
	{
		//cout << "3 : xx11_OF_E1_2 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_E1_2]  =  FALSE" << endl;
		list.push_back(make_tuple(3, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_E1_3] == false) && (boolState[required_OF_E1_3] && boolState[relevant_evt_OF_E1_3]))
	{
		//cout << "4 : xx10_OF_E1_3 : FAULT failF  LABEL \"failure in operation E1_3\"  DIST EXP (0.25)  INDUCING boolState[failF_OF_E1_3]  =  TRUE" << endl;
		list.push_back(make_tuple(4, 0.25, "EXP", 0));
	}
	if (boolState[failF_OF_E1_3] == true)
	{
		//cout << "5 : xx11_OF_E1_3 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_E1_3]  =  FALSE" << endl;
		list.push_back(make_tuple(5, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_E1_4] == false) && (boolState[required_OF_E1_4] && boolState[relevant_evt_OF_E1_4]))
	{
		//cout << "6 : xx10_OF_E1_4 : FAULT failF  LABEL \"failure in operation E1_4\"  DIST EXP (0.25)  INDUCING boolState[failF_OF_E1_4]  =  TRUE" << endl;
		list.push_back(make_tuple(6, 0.25, "EXP", 0));
	}
	if (boolState[failF_OF_E1_4] == true)
	{
		//cout << "7 : xx11_OF_E1_4 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_E1_4]  =  FALSE" << endl;
		list.push_back(make_tuple(7, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_E1_5] == false) && (boolState[required_OF_E1_5] && boolState[relevant_evt_OF_E1_5]))
	{
		//cout << "8 : xx10_OF_E1_5 : FAULT failF  LABEL \"failure in operation E1_5\"  DIST EXP (0.25)  INDUCING boolState[failF_OF_E1_5]  =  TRUE" << endl;
		list.push_back(make_tuple(8, 0.25, "EXP", 0));
	}
	if (boolState[failF_OF_E1_5] == true)
	{
		//cout << "9 : xx11_OF_E1_5 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_E1_5]  =  FALSE" << endl;
		list.push_back(make_tuple(9, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_E1_6] == false) && (boolState[required_OF_E1_6] && boolState[relevant_evt_OF_E1_6]))
	{
		//cout << "10 : xx10_OF_E1_6 : FAULT failF  LABEL \"failure in operation E1_6\"  DIST EXP (0.25)  INDUCING boolState[failF_OF_E1_6]  =  TRUE" << endl;
		list.push_back(make_tuple(10, 0.25, "EXP", 0));
	}
	if (boolState[failF_OF_E1_6] == true)
	{
		//cout << "11 : xx11_OF_E1_6 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_E1_6]  =  FALSE" << endl;
		list.push_back(make_tuple(11, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_E1_7] == false) && (boolState[required_OF_E1_7] && boolState[relevant_evt_OF_E1_7]))
	{
		//cout << "12 : xx10_OF_E1_7 : FAULT failF  LABEL \"failure in operation E1_7\"  DIST EXP (0.25)  INDUCING boolState[failF_OF_E1_7]  =  TRUE" << endl;
		list.push_back(make_tuple(12, 0.25, "EXP", 0));
	}
	if (boolState[failF_OF_E1_7] == true)
	{
		//cout << "13 : xx11_OF_E1_7 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_E1_7]  =  FALSE" << endl;
		list.push_back(make_tuple(13, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_E1_8] == false) && (boolState[required_OF_E1_8] && boolState[relevant_evt_OF_E1_8]))
	{
		//cout << "14 : xx10_OF_E1_8 : FAULT failF  LABEL \"failure in operation E1_8\"  DIST EXP (0.25)  INDUCING boolState[failF_OF_E1_8]  =  TRUE" << endl;
		list.push_back(make_tuple(14, 0.25, "EXP", 0));
	}
	if (boolState[failF_OF_E1_8] == true)
	{
		//cout << "15 : xx11_OF_E1_8 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_E1_8]  =  FALSE" << endl;
		list.push_back(make_tuple(15, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_E2_1] == false) && (boolState[required_OF_E2_1] && boolState[relevant_evt_OF_E2_1]))
	{
		//cout << "16 : xx10_OF_E2_1 : FAULT failF  LABEL \"failure in operation E2_1\"  DIST EXP (0.3)  INDUCING boolState[failF_OF_E2_1]  =  TRUE" << endl;
		list.push_back(make_tuple(16, 0.3, "EXP", 0));
	}
	if (boolState[failF_OF_E2_1] == true)
	{
		//cout << "17 : xx11_OF_E2_1 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_E2_1]  =  FALSE" << endl;
		list.push_back(make_tuple(17, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_E2_2] == false) && (boolState[required_OF_E2_2] && boolState[relevant_evt_OF_E2_2]))
	{
		//cout << "18 : xx10_OF_E2_2 : FAULT failF  LABEL \"failure in operation E2_2\"  DIST EXP (0.3)  INDUCING boolState[failF_OF_E2_2]  =  TRUE" << endl;
		list.push_back(make_tuple(18, 0.3, "EXP", 0));
	}
	if (boolState[failF_OF_E2_2] == true)
	{
		//cout << "19 : xx11_OF_E2_2 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_E2_2]  =  FALSE" << endl;
		list.push_back(make_tuple(19, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_E2_3] == false) && (boolState[required_OF_E2_3] && boolState[relevant_evt_OF_E2_3]))
	{
		//cout << "20 : xx10_OF_E2_3 : FAULT failF  LABEL \"failure in operation E2_3\"  DIST EXP (0.3)  INDUCING boolState[failF_OF_E2_3]  =  TRUE" << endl;
		list.push_back(make_tuple(20, 0.3, "EXP", 0));
	}
	if (boolState[failF_OF_E2_3] == true)
	{
		//cout << "21 : xx11_OF_E2_3 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_E2_3]  =  FALSE" << endl;
		list.push_back(make_tuple(21, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_E2_4] == false) && (boolState[required_OF_E2_4] && boolState[relevant_evt_OF_E2_4]))
	{
		//cout << "22 : xx10_OF_E2_4 : FAULT failF  LABEL \"failure in operation E2_4\"  DIST EXP (0.3)  INDUCING boolState[failF_OF_E2_4]  =  TRUE" << endl;
		list.push_back(make_tuple(22, 0.3, "EXP", 0));
	}
	if (boolState[failF_OF_E2_4] == true)
	{
		//cout << "23 : xx11_OF_E2_4 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_E2_4]  =  FALSE" << endl;
		list.push_back(make_tuple(23, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_E2_5] == false) && (boolState[required_OF_E2_5] && boolState[relevant_evt_OF_E2_5]))
	{
		//cout << "24 : xx10_OF_E2_5 : FAULT failF  LABEL \"failure in operation E2_5\"  DIST EXP (0.3)  INDUCING boolState[failF_OF_E2_5]  =  TRUE" << endl;
		list.push_back(make_tuple(24, 0.3, "EXP", 0));
	}
	if (boolState[failF_OF_E2_5] == true)
	{
		//cout << "25 : xx11_OF_E2_5 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_E2_5]  =  FALSE" << endl;
		list.push_back(make_tuple(25, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_E2_6] == false) && (boolState[required_OF_E2_6] && boolState[relevant_evt_OF_E2_6]))
	{
		//cout << "26 : xx10_OF_E2_6 : FAULT failF  LABEL \"failure in operation E2_6\"  DIST EXP (0.3)  INDUCING boolState[failF_OF_E2_6]  =  TRUE" << endl;
		list.push_back(make_tuple(26, 0.3, "EXP", 0));
	}
	if (boolState[failF_OF_E2_6] == true)
	{
		//cout << "27 : xx11_OF_E2_6 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_E2_6]  =  FALSE" << endl;
		list.push_back(make_tuple(27, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_E2_7] == false) && (boolState[required_OF_E2_7] && boolState[relevant_evt_OF_E2_7]))
	{
		//cout << "28 : xx10_OF_E2_7 : FAULT failF  LABEL \"failure in operation E2_7\"  DIST EXP (0.3)  INDUCING boolState[failF_OF_E2_7]  =  TRUE" << endl;
		list.push_back(make_tuple(28, 0.3, "EXP", 0));
	}
	if (boolState[failF_OF_E2_7] == true)
	{
		//cout << "29 : xx11_OF_E2_7 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_E2_7]  =  FALSE" << endl;
		list.push_back(make_tuple(29, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_E2_8] == false) && (boolState[required_OF_E2_8] && boolState[relevant_evt_OF_E2_8]))
	{
		//cout << "30 : xx10_OF_E2_8 : FAULT failF  LABEL \"failure in operation E2_8\"  DIST EXP (0.3)  INDUCING boolState[failF_OF_E2_8]  =  TRUE" << endl;
		list.push_back(make_tuple(30, 0.3, "EXP", 0));
	}
	if (boolState[failF_OF_E2_8] == true)
	{
		//cout << "31 : xx11_OF_E2_8 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_E2_8]  =  FALSE" << endl;
		list.push_back(make_tuple(31, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_E3_1] == false) && (boolState[required_OF_E3_1] && boolState[relevant_evt_OF_E3_1]))
	{
		//cout << "32 : xx10_OF_E3_1 : FAULT failF  LABEL \"failure in operation E3_1\"  DIST EXP (0.2)  INDUCING boolState[failF_OF_E3_1]  =  TRUE" << endl;
		list.push_back(make_tuple(32, 0.2, "EXP", 0));
	}
	if (boolState[failF_OF_E3_1] == true)
	{
		//cout << "33 : xx11_OF_E3_1 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_E3_1]  =  FALSE" << endl;
		list.push_back(make_tuple(33, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_E3_2] == false) && (boolState[required_OF_E3_2] && boolState[relevant_evt_OF_E3_2]))
	{
		//cout << "34 : xx10_OF_E3_2 : FAULT failF  LABEL \"failure in operation E3_2\"  DIST EXP (0.2)  INDUCING boolState[failF_OF_E3_2]  =  TRUE" << endl;
		list.push_back(make_tuple(34, 0.2, "EXP", 0));
	}
	if (boolState[failF_OF_E3_2] == true)
	{
		//cout << "35 : xx11_OF_E3_2 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_E3_2]  =  FALSE" << endl;
		list.push_back(make_tuple(35, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_E3_3] == false) && (boolState[required_OF_E3_3] && boolState[relevant_evt_OF_E3_3]))
	{
		//cout << "36 : xx10_OF_E3_3 : FAULT failF  LABEL \"failure in operation E3_3\"  DIST EXP (0.2)  INDUCING boolState[failF_OF_E3_3]  =  TRUE" << endl;
		list.push_back(make_tuple(36, 0.2, "EXP", 0));
	}
	if (boolState[failF_OF_E3_3] == true)
	{
		//cout << "37 : xx11_OF_E3_3 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_E3_3]  =  FALSE" << endl;
		list.push_back(make_tuple(37, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_E3_4] == false) && (boolState[required_OF_E3_4] && boolState[relevant_evt_OF_E3_4]))
	{
		//cout << "38 : xx10_OF_E3_4 : FAULT failF  LABEL \"failure in operation E3_4\"  DIST EXP (0.2)  INDUCING boolState[failF_OF_E3_4]  =  TRUE" << endl;
		list.push_back(make_tuple(38, 0.2, "EXP", 0));
	}
	if (boolState[failF_OF_E3_4] == true)
	{
		//cout << "39 : xx11_OF_E3_4 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_E3_4]  =  FALSE" << endl;
		list.push_back(make_tuple(39, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_E3_5] == false) && (boolState[required_OF_E3_5] && boolState[relevant_evt_OF_E3_5]))
	{
		//cout << "40 : xx10_OF_E3_5 : FAULT failF  LABEL \"failure in operation E3_5\"  DIST EXP (0.2)  INDUCING boolState[failF_OF_E3_5]  =  TRUE" << endl;
		list.push_back(make_tuple(40, 0.2, "EXP", 0));
	}
	if (boolState[failF_OF_E3_5] == true)
	{
		//cout << "41 : xx11_OF_E3_5 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_E3_5]  =  FALSE" << endl;
		list.push_back(make_tuple(41, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_E3_6] == false) && (boolState[required_OF_E3_6] && boolState[relevant_evt_OF_E3_6]))
	{
		//cout << "42 : xx10_OF_E3_6 : FAULT failF  LABEL \"failure in operation E3_6\"  DIST EXP (0.2)  INDUCING boolState[failF_OF_E3_6]  =  TRUE" << endl;
		list.push_back(make_tuple(42, 0.2, "EXP", 0));
	}
	if (boolState[failF_OF_E3_6] == true)
	{
		//cout << "43 : xx11_OF_E3_6 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_E3_6]  =  FALSE" << endl;
		list.push_back(make_tuple(43, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_E3_7] == false) && (boolState[required_OF_E3_7] && boolState[relevant_evt_OF_E3_7]))
	{
		//cout << "44 : xx10_OF_E3_7 : FAULT failF  LABEL \"failure in operation E3_7\"  DIST EXP (0.2)  INDUCING boolState[failF_OF_E3_7]  =  TRUE" << endl;
		list.push_back(make_tuple(44, 0.2, "EXP", 0));
	}
	if (boolState[failF_OF_E3_7] == true)
	{
		//cout << "45 : xx11_OF_E3_7 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_E3_7]  =  FALSE" << endl;
		list.push_back(make_tuple(45, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_E3_8] == false) && (boolState[required_OF_E3_8] && boolState[relevant_evt_OF_E3_8]))
	{
		//cout << "46 : xx10_OF_E3_8 : FAULT failF  LABEL \"failure in operation E3_8\"  DIST EXP (0.2)  INDUCING boolState[failF_OF_E3_8]  =  TRUE" << endl;
		list.push_back(make_tuple(46, 0.2, "EXP", 0));
	}
	if (boolState[failF_OF_E3_8] == true)
	{
		//cout << "47 : xx11_OF_E3_8 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_E3_8]  =  FALSE" << endl;
		list.push_back(make_tuple(47, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_E4_1] == false) && (boolState[required_OF_E4_1] && boolState[relevant_evt_OF_E4_1]))
	{
		//cout << "48 : xx10_OF_E4_1 : FAULT failF  LABEL \"failure in operation E4_1\"  DIST EXP (0.2)  INDUCING boolState[failF_OF_E4_1]  =  TRUE" << endl;
		list.push_back(make_tuple(48, 0.2, "EXP", 0));
	}
	if (boolState[failF_OF_E4_1] == true)
	{
		//cout << "49 : xx11_OF_E4_1 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_E4_1]  =  FALSE" << endl;
		list.push_back(make_tuple(49, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_E4_2] == false) && (boolState[required_OF_E4_2] && boolState[relevant_evt_OF_E4_2]))
	{
		//cout << "50 : xx10_OF_E4_2 : FAULT failF  LABEL \"failure in operation E4_2\"  DIST EXP (0.2)  INDUCING boolState[failF_OF_E4_2]  =  TRUE" << endl;
		list.push_back(make_tuple(50, 0.2, "EXP", 0));
	}
	if (boolState[failF_OF_E4_2] == true)
	{
		//cout << "51 : xx11_OF_E4_2 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_E4_2]  =  FALSE" << endl;
		list.push_back(make_tuple(51, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_E4_3] == false) && (boolState[required_OF_E4_3] && boolState[relevant_evt_OF_E4_3]))
	{
		//cout << "52 : xx10_OF_E4_3 : FAULT failF  LABEL \"failure in operation E4_3\"  DIST EXP (0.2)  INDUCING boolState[failF_OF_E4_3]  =  TRUE" << endl;
		list.push_back(make_tuple(52, 0.2, "EXP", 0));
	}
	if (boolState[failF_OF_E4_3] == true)
	{
		//cout << "53 : xx11_OF_E4_3 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_E4_3]  =  FALSE" << endl;
		list.push_back(make_tuple(53, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_E4_4] == false) && (boolState[required_OF_E4_4] && boolState[relevant_evt_OF_E4_4]))
	{
		//cout << "54 : xx10_OF_E4_4 : FAULT failF  LABEL \"failure in operation E4_4\"  DIST EXP (0.2)  INDUCING boolState[failF_OF_E4_4]  =  TRUE" << endl;
		list.push_back(make_tuple(54, 0.2, "EXP", 0));
	}
	if (boolState[failF_OF_E4_4] == true)
	{
		//cout << "55 : xx11_OF_E4_4 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_E4_4]  =  FALSE" << endl;
		list.push_back(make_tuple(55, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_E4_5] == false) && (boolState[required_OF_E4_5] && boolState[relevant_evt_OF_E4_5]))
	{
		//cout << "56 : xx10_OF_E4_5 : FAULT failF  LABEL \"failure in operation E4_5\"  DIST EXP (0.2)  INDUCING boolState[failF_OF_E4_5]  =  TRUE" << endl;
		list.push_back(make_tuple(56, 0.2, "EXP", 0));
	}
	if (boolState[failF_OF_E4_5] == true)
	{
		//cout << "57 : xx11_OF_E4_5 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_E4_5]  =  FALSE" << endl;
		list.push_back(make_tuple(57, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_E4_6] == false) && (boolState[required_OF_E4_6] && boolState[relevant_evt_OF_E4_6]))
	{
		//cout << "58 : xx10_OF_E4_6 : FAULT failF  LABEL \"failure in operation E4_6\"  DIST EXP (0.2)  INDUCING boolState[failF_OF_E4_6]  =  TRUE" << endl;
		list.push_back(make_tuple(58, 0.2, "EXP", 0));
	}
	if (boolState[failF_OF_E4_6] == true)
	{
		//cout << "59 : xx11_OF_E4_6 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_E4_6]  =  FALSE" << endl;
		list.push_back(make_tuple(59, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_E4_7] == false) && (boolState[required_OF_E4_7] && boolState[relevant_evt_OF_E4_7]))
	{
		//cout << "60 : xx10_OF_E4_7 : FAULT failF  LABEL \"failure in operation E4_7\"  DIST EXP (0.2)  INDUCING boolState[failF_OF_E4_7]  =  TRUE" << endl;
		list.push_back(make_tuple(60, 0.2, "EXP", 0));
	}
	if (boolState[failF_OF_E4_7] == true)
	{
		//cout << "61 : xx11_OF_E4_7 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_E4_7]  =  FALSE" << endl;
		list.push_back(make_tuple(61, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_E4_8] == false) && (boolState[required_OF_E4_8] && boolState[relevant_evt_OF_E4_8]))
	{
		//cout << "62 : xx10_OF_E4_8 : FAULT failF  LABEL \"failure in operation E4_8\"  DIST EXP (0.2)  INDUCING boolState[failF_OF_E4_8]  =  TRUE" << endl;
		list.push_back(make_tuple(62, 0.2, "EXP", 0));
	}
	if (boolState[failF_OF_E4_8] == true)
	{
		//cout << "63 : xx11_OF_E4_8 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_E4_8]  =  FALSE" << endl;
		list.push_back(make_tuple(63, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_EC1_1] == false) && (boolState[required_OF_EC1_1] && boolState[relevant_evt_OF_EC1_1]))
	{
		//cout << "64 : xx10_OF_EC1_1 : FAULT failF  LABEL \"failure in operation EC1_1\"  DIST EXP (0.2)  INDUCING boolState[failF_OF_EC1_1]  =  TRUE" << endl;
		list.push_back(make_tuple(64, 0.2, "EXP", 0));
	}
	if (boolState[failF_OF_EC1_1] == true)
	{
		//cout << "65 : xx11_OF_EC1_1 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_EC1_1]  =  FALSE" << endl;
		list.push_back(make_tuple(65, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_EC1_2] == false) && (boolState[required_OF_EC1_2] && boolState[relevant_evt_OF_EC1_2]))
	{
		//cout << "66 : xx10_OF_EC1_2 : FAULT failF  LABEL \"failure in operation EC1_2\"  DIST EXP (0.2)  INDUCING boolState[failF_OF_EC1_2]  =  TRUE" << endl;
		list.push_back(make_tuple(66, 0.2, "EXP", 0));
	}
	if (boolState[failF_OF_EC1_2] == true)
	{
		//cout << "67 : xx11_OF_EC1_2 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_EC1_2]  =  FALSE" << endl;
		list.push_back(make_tuple(67, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_EC1_3] == false) && (boolState[required_OF_EC1_3] && boolState[relevant_evt_OF_EC1_3]))
	{
		//cout << "68 : xx10_OF_EC1_3 : FAULT failF  LABEL \"failure in operation EC1_3\"  DIST EXP (0.2)  INDUCING boolState[failF_OF_EC1_3]  =  TRUE" << endl;
		list.push_back(make_tuple(68, 0.2, "EXP", 0));
	}
	if (boolState[failF_OF_EC1_3] == true)
	{
		//cout << "69 : xx11_OF_EC1_3 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_EC1_3]  =  FALSE" << endl;
		list.push_back(make_tuple(69, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_EC1_4] == false) && (boolState[required_OF_EC1_4] && boolState[relevant_evt_OF_EC1_4]))
	{
		//cout << "70 : xx10_OF_EC1_4 : FAULT failF  LABEL \"failure in operation EC1_4\"  DIST EXP (0.2)  INDUCING boolState[failF_OF_EC1_4]  =  TRUE" << endl;
		list.push_back(make_tuple(70, 0.2, "EXP", 0));
	}
	if (boolState[failF_OF_EC1_4] == true)
	{
		//cout << "71 : xx11_OF_EC1_4 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_EC1_4]  =  FALSE" << endl;
		list.push_back(make_tuple(71, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_EC1_5] == false) && (boolState[required_OF_EC1_5] && boolState[relevant_evt_OF_EC1_5]))
	{
		//cout << "72 : xx10_OF_EC1_5 : FAULT failF  LABEL \"failure in operation EC1_5\"  DIST EXP (0.2)  INDUCING boolState[failF_OF_EC1_5]  =  TRUE" << endl;
		list.push_back(make_tuple(72, 0.2, "EXP", 0));
	}
	if (boolState[failF_OF_EC1_5] == true)
	{
		//cout << "73 : xx11_OF_EC1_5 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_EC1_5]  =  FALSE" << endl;
		list.push_back(make_tuple(73, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_EC1_6] == false) && (boolState[required_OF_EC1_6] && boolState[relevant_evt_OF_EC1_6]))
	{
		//cout << "74 : xx10_OF_EC1_6 : FAULT failF  LABEL \"failure in operation EC1_6\"  DIST EXP (0.2)  INDUCING boolState[failF_OF_EC1_6]  =  TRUE" << endl;
		list.push_back(make_tuple(74, 0.2, "EXP", 0));
	}
	if (boolState[failF_OF_EC1_6] == true)
	{
		//cout << "75 : xx11_OF_EC1_6 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_EC1_6]  =  FALSE" << endl;
		list.push_back(make_tuple(75, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_EC1_7] == false) && (boolState[required_OF_EC1_7] && boolState[relevant_evt_OF_EC1_7]))
	{
		//cout << "76 : xx10_OF_EC1_7 : FAULT failF  LABEL \"failure in operation EC1_7\"  DIST EXP (0.2)  INDUCING boolState[failF_OF_EC1_7]  =  TRUE" << endl;
		list.push_back(make_tuple(76, 0.2, "EXP", 0));
	}
	if (boolState[failF_OF_EC1_7] == true)
	{
		//cout << "77 : xx11_OF_EC1_7 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_EC1_7]  =  FALSE" << endl;
		list.push_back(make_tuple(77, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_EC1_8] == false) && (boolState[required_OF_EC1_8] && boolState[relevant_evt_OF_EC1_8]))
	{
		//cout << "78 : xx10_OF_EC1_8 : FAULT failF  LABEL \"failure in operation EC1_8\"  DIST EXP (0.2)  INDUCING boolState[failF_OF_EC1_8]  =  TRUE" << endl;
		list.push_back(make_tuple(78, 0.2, "EXP", 0));
	}
	if (boolState[failF_OF_EC1_8] == true)
	{
		//cout << "79 : xx11_OF_EC1_8 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_EC1_8]  =  FALSE" << endl;
		list.push_back(make_tuple(79, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_EC2_1] == false) && (boolState[required_OF_EC2_1] && boolState[relevant_evt_OF_EC2_1]))
	{
		//cout << "80 : xx10_OF_EC2_1 : FAULT failF  LABEL \"failure in operation EC2_1\"  DIST EXP (0.2)  INDUCING boolState[failF_OF_EC2_1]  =  TRUE" << endl;
		list.push_back(make_tuple(80, 0.2, "EXP", 0));
	}
	if (boolState[failF_OF_EC2_1] == true)
	{
		//cout << "81 : xx11_OF_EC2_1 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_EC2_1]  =  FALSE" << endl;
		list.push_back(make_tuple(81, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_EC2_2] == false) && (boolState[required_OF_EC2_2] && boolState[relevant_evt_OF_EC2_2]))
	{
		//cout << "82 : xx10_OF_EC2_2 : FAULT failF  LABEL \"failure in operation EC2_2\"  DIST EXP (0.2)  INDUCING boolState[failF_OF_EC2_2]  =  TRUE" << endl;
		list.push_back(make_tuple(82, 0.2, "EXP", 0));
	}
	if (boolState[failF_OF_EC2_2] == true)
	{
		//cout << "83 : xx11_OF_EC2_2 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_EC2_2]  =  FALSE" << endl;
		list.push_back(make_tuple(83, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_EC2_3] == false) && (boolState[required_OF_EC2_3] && boolState[relevant_evt_OF_EC2_3]))
	{
		//cout << "84 : xx10_OF_EC2_3 : FAULT failF  LABEL \"failure in operation EC2_3\"  DIST EXP (0.2)  INDUCING boolState[failF_OF_EC2_3]  =  TRUE" << endl;
		list.push_back(make_tuple(84, 0.2, "EXP", 0));
	}
	if (boolState[failF_OF_EC2_3] == true)
	{
		//cout << "85 : xx11_OF_EC2_3 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_EC2_3]  =  FALSE" << endl;
		list.push_back(make_tuple(85, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_EC2_4] == false) && (boolState[required_OF_EC2_4] && boolState[relevant_evt_OF_EC2_4]))
	{
		//cout << "86 : xx10_OF_EC2_4 : FAULT failF  LABEL \"failure in operation EC2_4\"  DIST EXP (0.2)  INDUCING boolState[failF_OF_EC2_4]  =  TRUE" << endl;
		list.push_back(make_tuple(86, 0.2, "EXP", 0));
	}
	if (boolState[failF_OF_EC2_4] == true)
	{
		//cout << "87 : xx11_OF_EC2_4 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_EC2_4]  =  FALSE" << endl;
		list.push_back(make_tuple(87, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_EC2_5] == false) && (boolState[required_OF_EC2_5] && boolState[relevant_evt_OF_EC2_5]))
	{
		//cout << "88 : xx10_OF_EC2_5 : FAULT failF  LABEL \"failure in operation EC2_5\"  DIST EXP (0.2)  INDUCING boolState[failF_OF_EC2_5]  =  TRUE" << endl;
		list.push_back(make_tuple(88, 0.2, "EXP", 0));
	}
	if (boolState[failF_OF_EC2_5] == true)
	{
		//cout << "89 : xx11_OF_EC2_5 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_EC2_5]  =  FALSE" << endl;
		list.push_back(make_tuple(89, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_EC2_6] == false) && (boolState[required_OF_EC2_6] && boolState[relevant_evt_OF_EC2_6]))
	{
		//cout << "90 : xx10_OF_EC2_6 : FAULT failF  LABEL \"failure in operation EC2_6\"  DIST EXP (0.2)  INDUCING boolState[failF_OF_EC2_6]  =  TRUE" << endl;
		list.push_back(make_tuple(90, 0.2, "EXP", 0));
	}
	if (boolState[failF_OF_EC2_6] == true)
	{
		//cout << "91 : xx11_OF_EC2_6 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_EC2_6]  =  FALSE" << endl;
		list.push_back(make_tuple(91, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_EC2_7] == false) && (boolState[required_OF_EC2_7] && boolState[relevant_evt_OF_EC2_7]))
	{
		//cout << "92 : xx10_OF_EC2_7 : FAULT failF  LABEL \"failure in operation EC2_7\"  DIST EXP (0.2)  INDUCING boolState[failF_OF_EC2_7]  =  TRUE" << endl;
		list.push_back(make_tuple(92, 0.2, "EXP", 0));
	}
	if (boolState[failF_OF_EC2_7] == true)
	{
		//cout << "93 : xx11_OF_EC2_7 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_EC2_7]  =  FALSE" << endl;
		list.push_back(make_tuple(93, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_EC2_8] == false) && (boolState[required_OF_EC2_8] && boolState[relevant_evt_OF_EC2_8]))
	{
		//cout << "94 : xx10_OF_EC2_8 : FAULT failF  LABEL \"failure in operation EC2_8\"  DIST EXP (0.2)  INDUCING boolState[failF_OF_EC2_8]  =  TRUE" << endl;
		list.push_back(make_tuple(94, 0.2, "EXP", 0));
	}
	if (boolState[failF_OF_EC2_8] == true)
	{
		//cout << "95 : xx11_OF_EC2_8 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_EC2_8]  =  FALSE" << endl;
		list.push_back(make_tuple(95, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_EC3_1] == false) && (boolState[required_OF_EC3_1] && boolState[relevant_evt_OF_EC3_1]))
	{
		//cout << "96 : xx10_OF_EC3_1 : FAULT failF  LABEL \"failure in operation EC3_1\"  DIST EXP (0.2)  INDUCING boolState[failF_OF_EC3_1]  =  TRUE" << endl;
		list.push_back(make_tuple(96, 0.2, "EXP", 0));
	}
	if (boolState[failF_OF_EC3_1] == true)
	{
		//cout << "97 : xx11_OF_EC3_1 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_EC3_1]  =  FALSE" << endl;
		list.push_back(make_tuple(97, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_EC3_2] == false) && (boolState[required_OF_EC3_2] && boolState[relevant_evt_OF_EC3_2]))
	{
		//cout << "98 : xx10_OF_EC3_2 : FAULT failF  LABEL \"failure in operation EC3_2\"  DIST EXP (0.2)  INDUCING boolState[failF_OF_EC3_2]  =  TRUE" << endl;
		list.push_back(make_tuple(98, 0.2, "EXP", 0));
	}
	if (boolState[failF_OF_EC3_2] == true)
	{
		//cout << "99 : xx11_OF_EC3_2 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_EC3_2]  =  FALSE" << endl;
		list.push_back(make_tuple(99, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_EC3_3] == false) && (boolState[required_OF_EC3_3] && boolState[relevant_evt_OF_EC3_3]))
	{
		//cout << "100 : xx10_OF_EC3_3 : FAULT failF  LABEL \"failure in operation EC3_3\"  DIST EXP (0.2)  INDUCING boolState[failF_OF_EC3_3]  =  TRUE" << endl;
		list.push_back(make_tuple(100, 0.2, "EXP", 0));
	}
	if (boolState[failF_OF_EC3_3] == true)
	{
		//cout << "101 : xx11_OF_EC3_3 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_EC3_3]  =  FALSE" << endl;
		list.push_back(make_tuple(101, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_EC3_4] == false) && (boolState[required_OF_EC3_4] && boolState[relevant_evt_OF_EC3_4]))
	{
		//cout << "102 : xx10_OF_EC3_4 : FAULT failF  LABEL \"failure in operation EC3_4\"  DIST EXP (0.2)  INDUCING boolState[failF_OF_EC3_4]  =  TRUE" << endl;
		list.push_back(make_tuple(102, 0.2, "EXP", 0));
	}
	if (boolState[failF_OF_EC3_4] == true)
	{
		//cout << "103 : xx11_OF_EC3_4 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_EC3_4]  =  FALSE" << endl;
		list.push_back(make_tuple(103, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_EC3_5] == false) && (boolState[required_OF_EC3_5] && boolState[relevant_evt_OF_EC3_5]))
	{
		//cout << "104 : xx10_OF_EC3_5 : FAULT failF  LABEL \"failure in operation EC3_5\"  DIST EXP (0.2)  INDUCING boolState[failF_OF_EC3_5]  =  TRUE" << endl;
		list.push_back(make_tuple(104, 0.2, "EXP", 0));
	}
	if (boolState[failF_OF_EC3_5] == true)
	{
		//cout << "105 : xx11_OF_EC3_5 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_EC3_5]  =  FALSE" << endl;
		list.push_back(make_tuple(105, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_EC3_6] == false) && (boolState[required_OF_EC3_6] && boolState[relevant_evt_OF_EC3_6]))
	{
		//cout << "106 : xx10_OF_EC3_6 : FAULT failF  LABEL \"failure in operation EC3_6\"  DIST EXP (0.2)  INDUCING boolState[failF_OF_EC3_6]  =  TRUE" << endl;
		list.push_back(make_tuple(106, 0.2, "EXP", 0));
	}
	if (boolState[failF_OF_EC3_6] == true)
	{
		//cout << "107 : xx11_OF_EC3_6 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_EC3_6]  =  FALSE" << endl;
		list.push_back(make_tuple(107, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_EC3_7] == false) && (boolState[required_OF_EC3_7] && boolState[relevant_evt_OF_EC3_7]))
	{
		//cout << "108 : xx10_OF_EC3_7 : FAULT failF  LABEL \"failure in operation EC3_7\"  DIST EXP (0.2)  INDUCING boolState[failF_OF_EC3_7]  =  TRUE" << endl;
		list.push_back(make_tuple(108, 0.2, "EXP", 0));
	}
	if (boolState[failF_OF_EC3_7] == true)
	{
		//cout << "109 : xx11_OF_EC3_7 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_EC3_7]  =  FALSE" << endl;
		list.push_back(make_tuple(109, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_EC3_8] == false) && (boolState[required_OF_EC3_8] && boolState[relevant_evt_OF_EC3_8]))
	{
		//cout << "110 : xx10_OF_EC3_8 : FAULT failF  LABEL \"failure in operation EC3_8\"  DIST EXP (0.2)  INDUCING boolState[failF_OF_EC3_8]  =  TRUE" << endl;
		list.push_back(make_tuple(110, 0.2, "EXP", 0));
	}
	if (boolState[failF_OF_EC3_8] == true)
	{
		//cout << "111 : xx11_OF_EC3_8 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_EC3_8]  =  FALSE" << endl;
		list.push_back(make_tuple(111, 0.1, "EXP", 0));
	}
	return list;
}


void storm::figaro::FigaroProgram_sf_8_2_manualy_written_Trim_repair::runOnceInteractionStep_initialization()
{
	if (boolState[failF_OF_E1_1] == true )
	{
		boolState[S_OF_E1_1]  =  true;
	}

	if (boolState[failF_OF_E1_2] == true )
	{
		boolState[S_OF_E1_2]  =  true;
	}

	if (boolState[failF_OF_E1_3] == true )
	{
		boolState[S_OF_E1_3]  =  true;
	}

	if (boolState[failF_OF_E1_4] == true )
	{
		boolState[S_OF_E1_4]  =  true;
	}

	if (boolState[failF_OF_E1_5] == true )
	{
		boolState[S_OF_E1_5]  =  true;
	}

	if (boolState[failF_OF_E1_6] == true )
	{
		boolState[S_OF_E1_6]  =  true;
	}

	if (boolState[failF_OF_E1_7] == true )
	{
		boolState[S_OF_E1_7]  =  true;
	}

	if (boolState[failF_OF_E1_8] == true )
	{
		boolState[S_OF_E1_8]  =  true;
	}

	if (boolState[failF_OF_E2_1] == true )
	{
		boolState[S_OF_E2_1]  =  true;
	}

	if (boolState[failF_OF_E2_2] == true )
	{
		boolState[S_OF_E2_2]  =  true;
	}

	if (boolState[failF_OF_E2_3] == true )
	{
		boolState[S_OF_E2_3]  =  true;
	}

	if (boolState[failF_OF_E2_4] == true )
	{
		boolState[S_OF_E2_4]  =  true;
	}

	if (boolState[failF_OF_E2_5] == true )
	{
		boolState[S_OF_E2_5]  =  true;
	}

	if (boolState[failF_OF_E2_6] == true )
	{
		boolState[S_OF_E2_6]  =  true;
	}

	if (boolState[failF_OF_E2_7] == true )
	{
		boolState[S_OF_E2_7]  =  true;
	}

	if (boolState[failF_OF_E2_8] == true )
	{
		boolState[S_OF_E2_8]  =  true;
	}

	if (boolState[failF_OF_E3_1] == true )
	{
		boolState[S_OF_E3_1]  =  true;
	}

	if (boolState[failF_OF_E3_2] == true )
	{
		boolState[S_OF_E3_2]  =  true;
	}

	if (boolState[failF_OF_E3_3] == true )
	{
		boolState[S_OF_E3_3]  =  true;
	}

	if (boolState[failF_OF_E3_4] == true )
	{
		boolState[S_OF_E3_4]  =  true;
	}

	if (boolState[failF_OF_E3_5] == true )
	{
		boolState[S_OF_E3_5]  =  true;
	}

	if (boolState[failF_OF_E3_6] == true )
	{
		boolState[S_OF_E3_6]  =  true;
	}

	if (boolState[failF_OF_E3_7] == true )
	{
		boolState[S_OF_E3_7]  =  true;
	}

	if (boolState[failF_OF_E3_8] == true )
	{
		boolState[S_OF_E3_8]  =  true;
	}

	if (boolState[failF_OF_E4_1] == true )
	{
		boolState[S_OF_E4_1]  =  true;
	}

	if (boolState[failF_OF_E4_2] == true )
	{
		boolState[S_OF_E4_2]  =  true;
	}

	if (boolState[failF_OF_E4_3] == true )
	{
		boolState[S_OF_E4_3]  =  true;
	}

	if (boolState[failF_OF_E4_4] == true )
	{
		boolState[S_OF_E4_4]  =  true;
	}

	if (boolState[failF_OF_E4_5] == true )
	{
		boolState[S_OF_E4_5]  =  true;
	}

	if (boolState[failF_OF_E4_6] == true )
	{
		boolState[S_OF_E4_6]  =  true;
	}

	if (boolState[failF_OF_E4_7] == true )
	{
		boolState[S_OF_E4_7]  =  true;
	}

	if (boolState[failF_OF_E4_8] == true )
	{
		boolState[S_OF_E4_8]  =  true;
	}

	if (boolState[failF_OF_EC1_1] == true )
	{
		boolState[S_OF_EC1_1]  =  true;
	}

	if (boolState[failF_OF_EC1_2] == true )
	{
		boolState[S_OF_EC1_2]  =  true;
	}

	if (boolState[failF_OF_EC1_3] == true )
	{
		boolState[S_OF_EC1_3]  =  true;
	}

	if (boolState[failF_OF_EC1_4] == true )
	{
		boolState[S_OF_EC1_4]  =  true;
	}

	if (boolState[failF_OF_EC1_5] == true )
	{
		boolState[S_OF_EC1_5]  =  true;
	}

	if (boolState[failF_OF_EC1_6] == true )
	{
		boolState[S_OF_EC1_6]  =  true;
	}

	if (boolState[failF_OF_EC1_7] == true )
	{
		boolState[S_OF_EC1_7]  =  true;
	}

	if (boolState[failF_OF_EC1_8] == true )
	{
		boolState[S_OF_EC1_8]  =  true;
	}

	if (boolState[failF_OF_EC2_1] == true )
	{
		boolState[S_OF_EC2_1]  =  true;
	}

	if (boolState[failF_OF_EC2_2] == true )
	{
		boolState[S_OF_EC2_2]  =  true;
	}

	if (boolState[failF_OF_EC2_3] == true )
	{
		boolState[S_OF_EC2_3]  =  true;
	}

	if (boolState[failF_OF_EC2_4] == true )
	{
		boolState[S_OF_EC2_4]  =  true;
	}

	if (boolState[failF_OF_EC2_5] == true )
	{
		boolState[S_OF_EC2_5]  =  true;
	}

	if (boolState[failF_OF_EC2_6] == true )
	{
		boolState[S_OF_EC2_6]  =  true;
	}

	if (boolState[failF_OF_EC2_7] == true )
	{
		boolState[S_OF_EC2_7]  =  true;
	}

	if (boolState[failF_OF_EC2_8] == true )
	{
		boolState[S_OF_EC2_8]  =  true;
	}

	if (boolState[failF_OF_EC3_1] == true )
	{
		boolState[S_OF_EC3_1]  =  true;
	}

	if (boolState[failF_OF_EC3_2] == true )
	{
		boolState[S_OF_EC3_2]  =  true;
	}

	if (boolState[failF_OF_EC3_3] == true )
	{
		boolState[S_OF_EC3_3]  =  true;
	}

	if (boolState[failF_OF_EC3_4] == true )
	{
		boolState[S_OF_EC3_4]  =  true;
	}

	if (boolState[failF_OF_EC3_5] == true )
	{
		boolState[S_OF_EC3_5]  =  true;
	}

	if (boolState[failF_OF_EC3_6] == true )
	{
		boolState[S_OF_EC3_6]  =  true;
	}

	if (boolState[failF_OF_EC3_7] == true )
	{
		boolState[S_OF_EC3_7]  =  true;
	}

	if (boolState[failF_OF_EC3_8] == true )
	{
		boolState[S_OF_EC3_8]  =  true;
	}

}


void storm::figaro::FigaroProgram_sf_8_2_manualy_written_Trim_repair::runOnceInteractionStep_propagate_effect_S()
{
	if (((boolState[S_OF_E2_1] || boolState[S_OF_fault_cfg_1_1]) || boolState[S_OF_fault_cfg_3_1]) || boolState[S_OF_fault_cfg_4_1] )
	{
		boolState[S_OF_Filter_1]  =  true;
	}

	if (((boolState[S_OF_E2_2] || boolState[S_OF_fault_cfg_1_2]) || boolState[S_OF_fault_cfg_3_2]) || boolState[S_OF_fault_cfg_4_2] )
	{
		boolState[S_OF_Filter_2]  =  true;
	}

	if (((boolState[S_OF_E2_3] || boolState[S_OF_fault_cfg_1_3]) || boolState[S_OF_fault_cfg_3_3]) || boolState[S_OF_fault_cfg_4_3] )
	{
		boolState[S_OF_Filter_3]  =  true;
	}

	if (((boolState[S_OF_E2_4] || boolState[S_OF_fault_cfg_1_4]) || boolState[S_OF_fault_cfg_3_4]) || boolState[S_OF_fault_cfg_4_4] )
	{
		boolState[S_OF_Filter_4]  =  true;
	}

	if (((boolState[S_OF_E2_5] || boolState[S_OF_fault_cfg_1_5]) || boolState[S_OF_fault_cfg_3_5]) || boolState[S_OF_fault_cfg_4_5] )
	{
		boolState[S_OF_Filter_5]  =  true;
	}

	if (((boolState[S_OF_E2_6] || boolState[S_OF_fault_cfg_1_6]) || boolState[S_OF_fault_cfg_3_6]) || boolState[S_OF_fault_cfg_4_6] )
	{
		boolState[S_OF_Filter_6]  =  true;
	}

	if (((boolState[S_OF_E2_7] || boolState[S_OF_fault_cfg_1_7]) || boolState[S_OF_fault_cfg_3_7]) || boolState[S_OF_fault_cfg_4_7] )
	{
		boolState[S_OF_Filter_7]  =  true;
	}

	if (((boolState[S_OF_E2_8] || boolState[S_OF_fault_cfg_1_8]) || boolState[S_OF_fault_cfg_3_8]) || boolState[S_OF_fault_cfg_4_8] )
	{
		boolState[S_OF_Filter_8]  =  true;
	}

	if (((((((boolState[S_OF_Filter_1] || boolState[S_OF_Filter_2]) || boolState[S_OF_Filter_3]) || boolState[S_OF_Filter_4]) || boolState[S_OF_Filter_5]) || boolState[S_OF_Filter_6]) || boolState[S_OF_Filter_7]) || boolState[S_OF_Filter_8] )
	{
		boolState[S_OF_System]  =  true;
	}

	if (boolState[S_OF_System] )
	{
		boolState[S_OF_UE_1]  =  true;
	}

	if (((boolState[S_OF_E4_1] && boolState[S_OF_E1_1]) && boolState[already_S_OF_E1_1]) && ( !  boolState[already_S_OF_E4_1]) )
	{
		boolState[S_OF_fault_cfg_1_1]  =  true;
	}

	if (boolState[already_S_OF_fault_cfg_1_1] && (boolState[S_OF_E1_1] && boolState[S_OF_E4_1]) )
	{
		boolState[S_OF_fault_cfg_1_1]  =  true;
	}

	if (((boolState[S_OF_E4_2] && boolState[S_OF_E1_2]) && boolState[already_S_OF_E1_2]) && ( !  boolState[already_S_OF_E4_2]) )
	{
		boolState[S_OF_fault_cfg_1_2]  =  true;
	}

	if (boolState[already_S_OF_fault_cfg_1_2] && (boolState[S_OF_E1_2] && boolState[S_OF_E4_2]) )
	{
		boolState[S_OF_fault_cfg_1_2]  =  true;
	}

	if (((boolState[S_OF_E4_3] && boolState[S_OF_E1_3]) && boolState[already_S_OF_E1_3]) && ( !  boolState[already_S_OF_E4_3]) )
	{
		boolState[S_OF_fault_cfg_1_3]  =  true;
	}

	if (boolState[already_S_OF_fault_cfg_1_3] && (boolState[S_OF_E1_3] && boolState[S_OF_E4_3]) )
	{
		boolState[S_OF_fault_cfg_1_3]  =  true;
	}

	if (((boolState[S_OF_E4_4] && boolState[S_OF_E1_4]) && boolState[already_S_OF_E1_4]) && ( !  boolState[already_S_OF_E4_4]) )
	{
		boolState[S_OF_fault_cfg_1_4]  =  true;
	}

	if (boolState[already_S_OF_fault_cfg_1_4] && (boolState[S_OF_E1_4] && boolState[S_OF_E4_4]) )
	{
		boolState[S_OF_fault_cfg_1_4]  =  true;
	}

	if (((boolState[S_OF_E4_5] && boolState[S_OF_E1_5]) && boolState[already_S_OF_E1_5]) && ( !  boolState[already_S_OF_E4_5]) )
	{
		boolState[S_OF_fault_cfg_1_5]  =  true;
	}

	if (boolState[already_S_OF_fault_cfg_1_5] && (boolState[S_OF_E1_5] && boolState[S_OF_E4_5]) )
	{
		boolState[S_OF_fault_cfg_1_5]  =  true;
	}

	if (((boolState[S_OF_E4_6] && boolState[S_OF_E1_6]) && boolState[already_S_OF_E1_6]) && ( !  boolState[already_S_OF_E4_6]) )
	{
		boolState[S_OF_fault_cfg_1_6]  =  true;
	}

	if (boolState[already_S_OF_fault_cfg_1_6] && (boolState[S_OF_E1_6] && boolState[S_OF_E4_6]) )
	{
		boolState[S_OF_fault_cfg_1_6]  =  true;
	}

	if (((boolState[S_OF_E4_7] && boolState[S_OF_E1_7]) && boolState[already_S_OF_E1_7]) && ( !  boolState[already_S_OF_E4_7]) )
	{
		boolState[S_OF_fault_cfg_1_7]  =  true;
	}

	if (boolState[already_S_OF_fault_cfg_1_7] && (boolState[S_OF_E1_7] && boolState[S_OF_E4_7]) )
	{
		boolState[S_OF_fault_cfg_1_7]  =  true;
	}

	if (((boolState[S_OF_E4_8] && boolState[S_OF_E1_8]) && boolState[already_S_OF_E1_8]) && ( !  boolState[already_S_OF_E4_8]) )
	{
		boolState[S_OF_fault_cfg_1_8]  =  true;
	}

	if (boolState[already_S_OF_fault_cfg_1_8] && (boolState[S_OF_E1_8] && boolState[S_OF_E4_8]) )
	{
		boolState[S_OF_fault_cfg_1_8]  =  true;
	}

	if (((boolState[S_OF_E3_1] && boolState[S_OF_EC1_1]) && boolState[already_S_OF_EC1_1]) && ( !  boolState[already_S_OF_E3_1]) )
	{
		boolState[S_OF_fault_cfg_3_1]  =  true;
	}

	if (boolState[already_S_OF_fault_cfg_3_1] && (boolState[S_OF_EC1_1] && boolState[S_OF_E3_1]) )
	{
		boolState[S_OF_fault_cfg_3_1]  =  true;
	}

	if (((boolState[S_OF_E3_2] && boolState[S_OF_EC1_2]) && boolState[already_S_OF_EC1_2]) && ( !  boolState[already_S_OF_E3_2]) )
	{
		boolState[S_OF_fault_cfg_3_2]  =  true;
	}

	if (boolState[already_S_OF_fault_cfg_3_2] && (boolState[S_OF_EC1_2] && boolState[S_OF_E3_2]) )
	{
		boolState[S_OF_fault_cfg_3_2]  =  true;
	}

	if (((boolState[S_OF_E3_3] && boolState[S_OF_EC1_3]) && boolState[already_S_OF_EC1_3]) && ( !  boolState[already_S_OF_E3_3]) )
	{
		boolState[S_OF_fault_cfg_3_3]  =  true;
	}

	if (boolState[already_S_OF_fault_cfg_3_3] && (boolState[S_OF_EC1_3] && boolState[S_OF_E3_3]) )
	{
		boolState[S_OF_fault_cfg_3_3]  =  true;
	}

	if (((boolState[S_OF_E3_4] && boolState[S_OF_EC1_4]) && boolState[already_S_OF_EC1_4]) && ( !  boolState[already_S_OF_E3_4]) )
	{
		boolState[S_OF_fault_cfg_3_4]  =  true;
	}

	if (boolState[already_S_OF_fault_cfg_3_4] && (boolState[S_OF_EC1_4] && boolState[S_OF_E3_4]) )
	{
		boolState[S_OF_fault_cfg_3_4]  =  true;
	}

	if (((boolState[S_OF_E3_5] && boolState[S_OF_EC1_5]) && boolState[already_S_OF_EC1_5]) && ( !  boolState[already_S_OF_E3_5]) )
	{
		boolState[S_OF_fault_cfg_3_5]  =  true;
	}

	if (boolState[already_S_OF_fault_cfg_3_5] && (boolState[S_OF_EC1_5] && boolState[S_OF_E3_5]) )
	{
		boolState[S_OF_fault_cfg_3_5]  =  true;
	}

	if (((boolState[S_OF_E3_6] && boolState[S_OF_EC1_6]) && boolState[already_S_OF_EC1_6]) && ( !  boolState[already_S_OF_E3_6]) )
	{
		boolState[S_OF_fault_cfg_3_6]  =  true;
	}

	if (boolState[already_S_OF_fault_cfg_3_6] && (boolState[S_OF_EC1_6] && boolState[S_OF_E3_6]) )
	{
		boolState[S_OF_fault_cfg_3_6]  =  true;
	}

	if (((boolState[S_OF_E3_7] && boolState[S_OF_EC1_7]) && boolState[already_S_OF_EC1_7]) && ( !  boolState[already_S_OF_E3_7]) )
	{
		boolState[S_OF_fault_cfg_3_7]  =  true;
	}

	if (boolState[already_S_OF_fault_cfg_3_7] && (boolState[S_OF_EC1_7] && boolState[S_OF_E3_7]) )
	{
		boolState[S_OF_fault_cfg_3_7]  =  true;
	}

	if (((boolState[S_OF_E3_8] && boolState[S_OF_EC1_8]) && boolState[already_S_OF_EC1_8]) && ( !  boolState[already_S_OF_E3_8]) )
	{
		boolState[S_OF_fault_cfg_3_8]  =  true;
	}

	if (boolState[already_S_OF_fault_cfg_3_8] && (boolState[S_OF_EC1_8] && boolState[S_OF_E3_8]) )
	{
		boolState[S_OF_fault_cfg_3_8]  =  true;
	}

	if (boolState[S_OF_gate_1_1] && boolState[S_OF_gate_2_1] )
	{
		boolState[S_OF_fault_cfg_4_1]  =  true;
	}

	if (boolState[S_OF_gate_1_2] && boolState[S_OF_gate_2_2] )
	{
		boolState[S_OF_fault_cfg_4_2]  =  true;
	}

	if (boolState[S_OF_gate_1_3] && boolState[S_OF_gate_2_3] )
	{
		boolState[S_OF_fault_cfg_4_3]  =  true;
	}

	if (boolState[S_OF_gate_1_4] && boolState[S_OF_gate_2_4] )
	{
		boolState[S_OF_fault_cfg_4_4]  =  true;
	}

	if (boolState[S_OF_gate_1_5] && boolState[S_OF_gate_2_5] )
	{
		boolState[S_OF_fault_cfg_4_5]  =  true;
	}

	if (boolState[S_OF_gate_1_6] && boolState[S_OF_gate_2_6] )
	{
		boolState[S_OF_fault_cfg_4_6]  =  true;
	}

	if (boolState[S_OF_gate_1_7] && boolState[S_OF_gate_2_7] )
	{
		boolState[S_OF_fault_cfg_4_7]  =  true;
	}

	if (boolState[S_OF_gate_1_8] && boolState[S_OF_gate_2_8] )
	{
		boolState[S_OF_fault_cfg_4_8]  =  true;
	}

	if (((boolState[S_OF_EC2_1] && boolState[S_OF_EC1_1]) && boolState[already_S_OF_EC1_1]) && (   !boolState[already_S_OF_EC2_1]) )
	{
		boolState[S_OF_gate_1_1]  =  true;
	}

	if (boolState[already_S_OF_gate_1_1] && (boolState[S_OF_EC1_1] && boolState[S_OF_EC2_1]) )
	{
		boolState[S_OF_gate_1_1]  =  true;
	}

	if (((boolState[S_OF_EC2_2] && boolState[S_OF_EC1_2]) && boolState[already_S_OF_EC1_2]) && (   !boolState[already_S_OF_EC2_2]) )
	{
		boolState[S_OF_gate_1_2]  =  true;
	}

	if (boolState[already_S_OF_gate_1_2] && (boolState[S_OF_EC1_2] && boolState[S_OF_EC2_2]) )
	{
		boolState[S_OF_gate_1_2]  =  true;
	}

	if (((boolState[S_OF_EC2_3] && boolState[S_OF_EC1_3]) && boolState[already_S_OF_EC1_3]) && (   !boolState[already_S_OF_EC2_3]) )
	{
		boolState[S_OF_gate_1_3]  =  true;
	}

	if (boolState[already_S_OF_gate_1_3] && (boolState[S_OF_EC1_3] && boolState[S_OF_EC2_3]) )
	{
		boolState[S_OF_gate_1_3]  =  true;
	}

	if (((boolState[S_OF_EC2_4] && boolState[S_OF_EC1_4]) && boolState[already_S_OF_EC1_4]) && (   !boolState[already_S_OF_EC2_4]) )
	{
		boolState[S_OF_gate_1_4]  =  true;
	}

	if (boolState[already_S_OF_gate_1_4] && (boolState[S_OF_EC1_4] && boolState[S_OF_EC2_4]) )
	{
		boolState[S_OF_gate_1_4]  =  true;
	}

	if (((boolState[S_OF_EC2_5] && boolState[S_OF_EC1_5]) && boolState[already_S_OF_EC1_5]) && (   !boolState[already_S_OF_EC2_5]) )
	{
		boolState[S_OF_gate_1_5]  =  true;
	}

	if (boolState[already_S_OF_gate_1_5] && (boolState[S_OF_EC1_5] && boolState[S_OF_EC2_5]) )
	{
		boolState[S_OF_gate_1_5]  =  true;
	}

	if (((boolState[S_OF_EC2_6] && boolState[S_OF_EC1_6]) && boolState[already_S_OF_EC1_6]) && (   !boolState[already_S_OF_EC2_6]) )
	{
		boolState[S_OF_gate_1_6]  =  true;
	}

	if (boolState[already_S_OF_gate_1_6] && (boolState[S_OF_EC1_6] && boolState[S_OF_EC2_6]) )
	{
		boolState[S_OF_gate_1_6]  =  true;
	}

	if (((boolState[S_OF_EC2_7] && boolState[S_OF_EC1_7]) && boolState[already_S_OF_EC1_7]) && (   !boolState[already_S_OF_EC2_7]) )
	{
		boolState[S_OF_gate_1_7]  =  true;
	}

	if (boolState[already_S_OF_gate_1_7] && (boolState[S_OF_EC1_7] && boolState[S_OF_EC2_7]) )
	{
		boolState[S_OF_gate_1_7]  =  true;
	}

	if (((boolState[S_OF_EC2_8] && boolState[S_OF_EC1_8]) && boolState[already_S_OF_EC1_8]) && (   !boolState[already_S_OF_EC2_8]) )
	{
		boolState[S_OF_gate_1_8]  =  true;
	}

	if (boolState[already_S_OF_gate_1_8] && (boolState[S_OF_EC1_8] && boolState[S_OF_EC2_8]) )
	{
		boolState[S_OF_gate_1_8]  =  true;
	}

	if (((boolState[S_OF_EC3_1] && boolState[S_OF_EC2_1]) && boolState[already_S_OF_EC2_1]) && (   !boolState[already_S_OF_EC3_1]) )
	{
		boolState[S_OF_gate_2_1]  =  true;
	}

	if (boolState[already_S_OF_gate_2_1] && (boolState[S_OF_EC2_1] && boolState[S_OF_EC3_1]) )
	{
		boolState[S_OF_gate_2_1]  =  true;
	}

	if (((boolState[S_OF_EC3_2] && boolState[S_OF_EC2_2]) && boolState[already_S_OF_EC2_2]) && (   !boolState[already_S_OF_EC3_2]) )
	{
		boolState[S_OF_gate_2_2]  =  true;
	}

	if (boolState[already_S_OF_gate_2_2] && (boolState[S_OF_EC2_2] && boolState[S_OF_EC3_2]) )
	{
		boolState[S_OF_gate_2_2]  =  true;
	}

	if (((boolState[S_OF_EC3_3] && boolState[S_OF_EC2_3]) && boolState[already_S_OF_EC2_3]) && (   !boolState[already_S_OF_EC3_3]) )
	{
		boolState[S_OF_gate_2_3]  =  true;
	}

	if (boolState[already_S_OF_gate_2_3] && (boolState[S_OF_EC2_3] && boolState[S_OF_EC3_3]) )
	{
		boolState[S_OF_gate_2_3]  =  true;
	}

	if (((boolState[S_OF_EC3_4] && boolState[S_OF_EC2_4]) && boolState[already_S_OF_EC2_4]) && (   !boolState[already_S_OF_EC3_4]) )
	{
		boolState[S_OF_gate_2_4]  =  true;
	}

	if (boolState[already_S_OF_gate_2_4] && (boolState[S_OF_EC2_4] && boolState[S_OF_EC3_4]) )
	{
		boolState[S_OF_gate_2_4]  =  true;
	}

	if (((boolState[S_OF_EC3_5] && boolState[S_OF_EC2_5]) && boolState[already_S_OF_EC2_5]) && (   !boolState[already_S_OF_EC3_5]) )
	{
		boolState[S_OF_gate_2_5]  =  true;
	}

	if (boolState[already_S_OF_gate_2_5] && (boolState[S_OF_EC2_5] && boolState[S_OF_EC3_5]) )
	{
		boolState[S_OF_gate_2_5]  =  true;
	}

	if (((boolState[S_OF_EC3_6] && boolState[S_OF_EC2_6]) && boolState[already_S_OF_EC2_6]) && (   !boolState[already_S_OF_EC3_6]) )
	{
		boolState[S_OF_gate_2_6]  =  true;
	}

	if (boolState[already_S_OF_gate_2_6] && (boolState[S_OF_EC2_6] && boolState[S_OF_EC3_6]) )
	{
		boolState[S_OF_gate_2_6]  =  true;
	}

	if (((boolState[S_OF_EC3_7] && boolState[S_OF_EC2_7]) && boolState[already_S_OF_EC2_7]) && (   !boolState[already_S_OF_EC3_7]) )
	{
		boolState[S_OF_gate_2_7]  =  true;
	}

	if (boolState[already_S_OF_gate_2_7] && (boolState[S_OF_EC2_7] && boolState[S_OF_EC3_7]) )
	{
		boolState[S_OF_gate_2_7]  =  true;
	}

	if (((boolState[S_OF_EC3_8] && boolState[S_OF_EC2_8]) && boolState[already_S_OF_EC2_8]) && (   !boolState[already_S_OF_EC3_8]) )
	{
		boolState[S_OF_gate_2_8]  =  true;
	}

	if (boolState[already_S_OF_gate_2_8] && (boolState[S_OF_EC2_8] && boolState[S_OF_EC3_8]) )
	{
		boolState[S_OF_gate_2_8]  =  true;
	}

}


void storm::figaro::FigaroProgram_sf_8_2_manualy_written_Trim_repair::runOnceInteractionStep_propagate_effect_required()
{
	if ( !boolState[required_OF_fault_cfg_1_1] )
	{
		boolState[required_OF_E1_1]  =  false;
	}

	if (boolState[relevant_evt_OF_fault_cfg_1_1] && ( !boolState[S_OF_fault_cfg_1_1]) )
	{
		boolState[relevant_evt_OF_E1_1]  =  true;
	}

	if ( !boolState[required_OF_fault_cfg_1_2] )
	{
		boolState[required_OF_E1_2]  =  false;
	}

	if (boolState[relevant_evt_OF_fault_cfg_1_2] && ( !boolState[S_OF_fault_cfg_1_2]) )
	{
		boolState[relevant_evt_OF_E1_2]  =  true;
	}

	if ( !boolState[required_OF_fault_cfg_1_3] )
	{
		boolState[required_OF_E1_3]  =  false;
	}

	if (boolState[relevant_evt_OF_fault_cfg_1_3] && ( !boolState[S_OF_fault_cfg_1_3]) )
	{
		boolState[relevant_evt_OF_E1_3]  =  true;
	}

	if ( !boolState[required_OF_fault_cfg_1_4] )
	{
		boolState[required_OF_E1_4]  =  false;
	}

	if (boolState[relevant_evt_OF_fault_cfg_1_4] && ( !boolState[S_OF_fault_cfg_1_4]) )
	{
		boolState[relevant_evt_OF_E1_4]  =  true;
	}

	if ( !boolState[required_OF_fault_cfg_1_5] )
	{
		boolState[required_OF_E1_5]  =  false;
	}

	if (boolState[relevant_evt_OF_fault_cfg_1_5] && ( !boolState[S_OF_fault_cfg_1_5]) )
	{
		boolState[relevant_evt_OF_E1_5]  =  true;
	}

	if ( !boolState[required_OF_fault_cfg_1_6] )
	{
		boolState[required_OF_E1_6]  =  false;
	}

	if (boolState[relevant_evt_OF_fault_cfg_1_6] && ( !boolState[S_OF_fault_cfg_1_6]) )
	{
		boolState[relevant_evt_OF_E1_6]  =  true;
	}

	if ( !boolState[required_OF_fault_cfg_1_7] )
	{
		boolState[required_OF_E1_7]  =  false;
	}

	if (boolState[relevant_evt_OF_fault_cfg_1_7] && ( !boolState[S_OF_fault_cfg_1_7]) )
	{
		boolState[relevant_evt_OF_E1_7]  =  true;
	}

	if ( !boolState[required_OF_fault_cfg_1_8] )
	{
		boolState[required_OF_E1_8]  =  false;
	}

	if (boolState[relevant_evt_OF_fault_cfg_1_8] && ( !boolState[S_OF_fault_cfg_1_8]) )
	{
		boolState[relevant_evt_OF_E1_8]  =  true;
	}

	if ( !boolState[required_OF_Filter_1] )
	{
		boolState[required_OF_E2_1]  =  false;
	}

	if (boolState[relevant_evt_OF_Filter_1] && ( !boolState[S_OF_Filter_1]) )
	{
		boolState[relevant_evt_OF_E2_1]  =  true;
	}

	if ( !boolState[required_OF_Filter_2] )
	{
		boolState[required_OF_E2_2]  =  false;
	}

	if (boolState[relevant_evt_OF_Filter_2] && ( !boolState[S_OF_Filter_2]) )
	{
		boolState[relevant_evt_OF_E2_2]  =  true;
	}

	if ( !boolState[required_OF_Filter_3] )
	{
		boolState[required_OF_E2_3]  =  false;
	}

	if (boolState[relevant_evt_OF_Filter_3] && ( !boolState[S_OF_Filter_3]) )
	{
		boolState[relevant_evt_OF_E2_3]  =  true;
	}

	if ( !boolState[required_OF_Filter_4] )
	{
		boolState[required_OF_E2_4]  =  false;
	}

	if (boolState[relevant_evt_OF_Filter_4] && ( !boolState[S_OF_Filter_4]) )
	{
		boolState[relevant_evt_OF_E2_4]  =  true;
	}

	if ( !boolState[required_OF_Filter_5] )
	{
		boolState[required_OF_E2_5]  =  false;
	}

	if (boolState[relevant_evt_OF_Filter_5] && ( !boolState[S_OF_Filter_5]) )
	{
		boolState[relevant_evt_OF_E2_5]  =  true;
	}

	if ( !boolState[required_OF_Filter_6] )
	{
		boolState[required_OF_E2_6]  =  false;
	}

	if (boolState[relevant_evt_OF_Filter_6] && ( !boolState[S_OF_Filter_6]) )
	{
		boolState[relevant_evt_OF_E2_6]  =  true;
	}

	if ( !boolState[required_OF_Filter_7] )
	{
		boolState[required_OF_E2_7]  =  false;
	}

	if (boolState[relevant_evt_OF_Filter_7] && ( !boolState[S_OF_Filter_7]) )
	{
		boolState[relevant_evt_OF_E2_7]  =  true;
	}

	if ( !boolState[required_OF_Filter_8] )
	{
		boolState[required_OF_E2_8]  =  false;
	}

	if (boolState[relevant_evt_OF_Filter_8] && ( !boolState[S_OF_Filter_8]) )
	{
		boolState[relevant_evt_OF_E2_8]  =  true;
	}

	if ( !boolState[required_OF_fault_cfg_3_1] )
	{
		boolState[required_OF_E3_1]  =  false;
	}

	if (boolState[relevant_evt_OF_fault_cfg_3_1] && ( !boolState[S_OF_fault_cfg_3_1]) )
	{
		boolState[relevant_evt_OF_E3_1]  =  true;
	}

	if ( !boolState[required_OF_fault_cfg_3_2] )
	{
		boolState[required_OF_E3_2]  =  false;
	}

	if (boolState[relevant_evt_OF_fault_cfg_3_2] && ( !boolState[S_OF_fault_cfg_3_2]) )
	{
		boolState[relevant_evt_OF_E3_2]  =  true;
	}

	if ( !boolState[required_OF_fault_cfg_3_3] )
	{
		boolState[required_OF_E3_3]  =  false;
	}

	if (boolState[relevant_evt_OF_fault_cfg_3_3] && ( !boolState[S_OF_fault_cfg_3_3]) )
	{
		boolState[relevant_evt_OF_E3_3]  =  true;
	}

	if ( !boolState[required_OF_fault_cfg_3_4] )
	{
		boolState[required_OF_E3_4]  =  false;
	}

	if (boolState[relevant_evt_OF_fault_cfg_3_4] && ( !boolState[S_OF_fault_cfg_3_4]) )
	{
		boolState[relevant_evt_OF_E3_4]  =  true;
	}

	if ( !boolState[required_OF_fault_cfg_3_5] )
	{
		boolState[required_OF_E3_5]  =  false;
	}

	if (boolState[relevant_evt_OF_fault_cfg_3_5] && ( !boolState[S_OF_fault_cfg_3_5]) )
	{
		boolState[relevant_evt_OF_E3_5]  =  true;
	}

	if ( !boolState[required_OF_fault_cfg_3_6] )
	{
		boolState[required_OF_E3_6]  =  false;
	}

	if (boolState[relevant_evt_OF_fault_cfg_3_6] && ( !boolState[S_OF_fault_cfg_3_6]) )
	{
		boolState[relevant_evt_OF_E3_6]  =  true;
	}

	if ( !boolState[required_OF_fault_cfg_3_7] )
	{
		boolState[required_OF_E3_7]  =  false;
	}

	if (boolState[relevant_evt_OF_fault_cfg_3_7] && ( !boolState[S_OF_fault_cfg_3_7]) )
	{
		boolState[relevant_evt_OF_E3_7]  =  true;
	}

	if ( !boolState[required_OF_fault_cfg_3_8] )
	{
		boolState[required_OF_E3_8]  =  false;
	}

	if (boolState[relevant_evt_OF_fault_cfg_3_8] && ( !boolState[S_OF_fault_cfg_3_8]) )
	{
		boolState[relevant_evt_OF_E3_8]  =  true;
	}

	if ( !boolState[required_OF_fault_cfg_1_1] )
	{
		boolState[required_OF_E4_1]  =  false;
	}

	if (boolState[relevant_evt_OF_fault_cfg_1_1] && ( !boolState[S_OF_fault_cfg_1_1]) )
	{
		boolState[relevant_evt_OF_E4_1]  =  true;
	}

	if ( !boolState[required_OF_fault_cfg_1_2] )
	{
		boolState[required_OF_E4_2]  =  false;
	}

	if (boolState[relevant_evt_OF_fault_cfg_1_2] && ( !boolState[S_OF_fault_cfg_1_2]) )
	{
		boolState[relevant_evt_OF_E4_2]  =  true;
	}

	if ( !boolState[required_OF_fault_cfg_1_3] )
	{
		boolState[required_OF_E4_3]  =  false;
	}

	if (boolState[relevant_evt_OF_fault_cfg_1_3] && ( !boolState[S_OF_fault_cfg_1_3]) )
	{
		boolState[relevant_evt_OF_E4_3]  =  true;
	}

	if ( !boolState[required_OF_fault_cfg_1_4] )
	{
		boolState[required_OF_E4_4]  =  false;
	}

	if (boolState[relevant_evt_OF_fault_cfg_1_4] && ( !boolState[S_OF_fault_cfg_1_4]) )
	{
		boolState[relevant_evt_OF_E4_4]  =  true;
	}

	if ( !boolState[required_OF_fault_cfg_1_5] )
	{
		boolState[required_OF_E4_5]  =  false;
	}

	if (boolState[relevant_evt_OF_fault_cfg_1_5] && ( !boolState[S_OF_fault_cfg_1_5]) )
	{
		boolState[relevant_evt_OF_E4_5]  =  true;
	}

	if ( !boolState[required_OF_fault_cfg_1_6] )
	{
		boolState[required_OF_E4_6]  =  false;
	}

	if (boolState[relevant_evt_OF_fault_cfg_1_6] && ( !boolState[S_OF_fault_cfg_1_6]) )
	{
		boolState[relevant_evt_OF_E4_6]  =  true;
	}

	if ( !boolState[required_OF_fault_cfg_1_7] )
	{
		boolState[required_OF_E4_7]  =  false;
	}

	if (boolState[relevant_evt_OF_fault_cfg_1_7] && ( !boolState[S_OF_fault_cfg_1_7]) )
	{
		boolState[relevant_evt_OF_E4_7]  =  true;
	}

	if ( !boolState[required_OF_fault_cfg_1_8] )
	{
		boolState[required_OF_E4_8]  =  false;
	}

	if (boolState[relevant_evt_OF_fault_cfg_1_8] && ( !boolState[S_OF_fault_cfg_1_8]) )
	{
		boolState[relevant_evt_OF_E4_8]  =  true;
	}

	if (( !boolState[required_OF_fault_cfg_3_1]) && ( !boolState[required_OF_gate_1_1]) )
	{
		boolState[required_OF_EC1_1]  =  false;
	}

	if ((boolState[relevant_evt_OF_fault_cfg_3_1] && ( !boolState[S_OF_fault_cfg_3_1])) || (boolState[relevant_evt_OF_gate_1_1] && ( !boolState[S_OF_gate_1_1])) )
	{
		boolState[relevant_evt_OF_EC1_1]  =  true;
	}

	if (( !boolState[required_OF_fault_cfg_3_2]) && ( !boolState[required_OF_gate_1_2]) )
	{
		boolState[required_OF_EC1_2]  =  false;
	}

	if ((boolState[relevant_evt_OF_fault_cfg_3_2] && ( !boolState[S_OF_fault_cfg_3_2])) || (boolState[relevant_evt_OF_gate_1_2] && ( !boolState[S_OF_gate_1_2])) )
	{
		boolState[relevant_evt_OF_EC1_2]  =  true;
	}

	if (( !boolState[required_OF_fault_cfg_3_3]) && ( !boolState[required_OF_gate_1_3]) )
	{
		boolState[required_OF_EC1_3]  =  false;
	}

	if ((boolState[relevant_evt_OF_fault_cfg_3_3] && ( !boolState[S_OF_fault_cfg_3_3])) || (boolState[relevant_evt_OF_gate_1_3] && ( !boolState[S_OF_gate_1_3])) )
	{
		boolState[relevant_evt_OF_EC1_3]  =  true;
	}

	if (( !boolState[required_OF_fault_cfg_3_4]) && ( !boolState[required_OF_gate_1_4]) )
	{
		boolState[required_OF_EC1_4]  =  false;
	}

	if ((boolState[relevant_evt_OF_fault_cfg_3_4] && ( !boolState[S_OF_fault_cfg_3_4])) || (boolState[relevant_evt_OF_gate_1_4] && ( !boolState[S_OF_gate_1_4])) )
	{
		boolState[relevant_evt_OF_EC1_4]  =  true;
	}

	if (( !boolState[required_OF_fault_cfg_3_5]) && ( !boolState[required_OF_gate_1_5]) )
	{
		boolState[required_OF_EC1_5]  =  false;
	}

	if ((boolState[relevant_evt_OF_fault_cfg_3_5] && ( !boolState[S_OF_fault_cfg_3_5])) || (boolState[relevant_evt_OF_gate_1_5] && ( !boolState[S_OF_gate_1_5])) )
	{
		boolState[relevant_evt_OF_EC1_5]  =  true;
	}

	if (( !boolState[required_OF_fault_cfg_3_6]) && ( !boolState[required_OF_gate_1_6]) )
	{
		boolState[required_OF_EC1_6]  =  false;
	}

	if ((boolState[relevant_evt_OF_fault_cfg_3_6] && ( !boolState[S_OF_fault_cfg_3_6])) || (boolState[relevant_evt_OF_gate_1_6] && ( !boolState[S_OF_gate_1_6])) )
	{
		boolState[relevant_evt_OF_EC1_6]  =  true;
	}

	if (( !boolState[required_OF_fault_cfg_3_7]) && ( !boolState[required_OF_gate_1_7]) )
	{
		boolState[required_OF_EC1_7]  =  false;
	}

	if ((boolState[relevant_evt_OF_fault_cfg_3_7] && ( !boolState[S_OF_fault_cfg_3_7])) || (boolState[relevant_evt_OF_gate_1_7] && ( !boolState[S_OF_gate_1_7])) )
	{
		boolState[relevant_evt_OF_EC1_7]  =  true;
	}

	if (( !boolState[required_OF_fault_cfg_3_8]) && ( !boolState[required_OF_gate_1_8]) )
	{
		boolState[required_OF_EC1_8]  =  false;
	}

	if ((boolState[relevant_evt_OF_fault_cfg_3_8] && ( !boolState[S_OF_fault_cfg_3_8])) || (boolState[relevant_evt_OF_gate_1_8] && ( !boolState[S_OF_gate_1_8])) )
	{
		boolState[relevant_evt_OF_EC1_8]  =  true;
	}

	if (( !boolState[required_OF_gate_1_1]) && ( !boolState[required_OF_gate_2_1]) )
	{
		boolState[required_OF_EC2_1]  =  false;
	}

	if ((boolState[relevant_evt_OF_gate_1_1] && ( !boolState[S_OF_gate_1_1])) || (  boolState[relevant_evt_OF_gate_2_1] && ( !boolState[S_OF_gate_2_1])) )
	{
		boolState[relevant_evt_OF_EC2_1]  =  true;
	}

	if (( !boolState[required_OF_gate_1_2]) && ( !boolState[required_OF_gate_2_2]) )
	{
		boolState[required_OF_EC2_2]  =  false;
	}

	if ((boolState[relevant_evt_OF_gate_1_2] && ( !boolState[S_OF_gate_1_2])) || (  boolState[relevant_evt_OF_gate_2_2] && ( !boolState[S_OF_gate_2_2])) )
	{
		boolState[relevant_evt_OF_EC2_2]  =  true;
	}

	if (( !boolState[required_OF_gate_1_3]) && ( !boolState[required_OF_gate_2_3]) )
	{
		boolState[required_OF_EC2_3]  =  false;
	}

	if ((boolState[relevant_evt_OF_gate_1_3] && ( !boolState[S_OF_gate_1_3])) || (  boolState[relevant_evt_OF_gate_2_3] && ( !boolState[S_OF_gate_2_3])) )
	{
		boolState[relevant_evt_OF_EC2_3]  =  true;
	}

	if (( !boolState[required_OF_gate_1_4]) && ( !boolState[required_OF_gate_2_4]) )
	{
		boolState[required_OF_EC2_4]  =  false;
	}

	if ((boolState[relevant_evt_OF_gate_1_4] && ( !boolState[S_OF_gate_1_4])) || (  boolState[relevant_evt_OF_gate_2_4] && ( !boolState[S_OF_gate_2_4])) )
	{
		boolState[relevant_evt_OF_EC2_4]  =  true;
	}

	if (( !boolState[required_OF_gate_1_5]) && ( !boolState[required_OF_gate_2_5]) )
	{
		boolState[required_OF_EC2_5]  =  false;
	}

	if ((boolState[relevant_evt_OF_gate_1_5] && ( !boolState[S_OF_gate_1_5])) || (  boolState[relevant_evt_OF_gate_2_5] && ( !boolState[S_OF_gate_2_5])) )
	{
		boolState[relevant_evt_OF_EC2_5]  =  true;
	}

	if (( !boolState[required_OF_gate_1_6]) && ( !boolState[required_OF_gate_2_6]) )
	{
		boolState[required_OF_EC2_6]  =  false;
	}

	if ((boolState[relevant_evt_OF_gate_1_6] && ( !boolState[S_OF_gate_1_6])) || (  boolState[relevant_evt_OF_gate_2_6] && ( !boolState[S_OF_gate_2_6])) )
	{
		boolState[relevant_evt_OF_EC2_6]  =  true;
	}

	if (( !boolState[required_OF_gate_1_7]) && ( !boolState[required_OF_gate_2_7]) )
	{
		boolState[required_OF_EC2_7]  =  false;
	}

	if ((boolState[relevant_evt_OF_gate_1_7] && ( !boolState[S_OF_gate_1_7])) || (  boolState[relevant_evt_OF_gate_2_7] && ( !boolState[S_OF_gate_2_7])) )
	{
		boolState[relevant_evt_OF_EC2_7]  =  true;
	}

	if (( !boolState[required_OF_gate_1_8]) && ( !boolState[required_OF_gate_2_8]) )
	{
		boolState[required_OF_EC2_8]  =  false;
	}

	if ((boolState[relevant_evt_OF_gate_1_8] && ( !boolState[S_OF_gate_1_8])) || (  boolState[relevant_evt_OF_gate_2_8] && ( !boolState[S_OF_gate_2_8])) )
	{
		boolState[relevant_evt_OF_EC2_8]  =  true;
	}

	if ( !boolState[required_OF_gate_2_1] )
	{
		boolState[required_OF_EC3_1]  =  false;
	}

	if (boolState[relevant_evt_OF_gate_2_1] && ( !boolState[S_OF_gate_2_1]) )
	{
		boolState[relevant_evt_OF_EC3_1]  =  true;
	}

	if ( !boolState[required_OF_gate_2_2] )
	{
		boolState[required_OF_EC3_2]  =  false;
	}

	if (boolState[relevant_evt_OF_gate_2_2] && ( !boolState[S_OF_gate_2_2]) )
	{
		boolState[relevant_evt_OF_EC3_2]  =  true;
	}

	if ( !boolState[required_OF_gate_2_3] )
	{
		boolState[required_OF_EC3_3]  =  false;
	}

	if (boolState[relevant_evt_OF_gate_2_3] && ( !boolState[S_OF_gate_2_3]) )
	{
		boolState[relevant_evt_OF_EC3_3]  =  true;
	}

	if ( !boolState[required_OF_gate_2_4] )
	{
		boolState[required_OF_EC3_4]  =  false;
	}

	if (boolState[relevant_evt_OF_gate_2_4] && ( !boolState[S_OF_gate_2_4]) )
	{
		boolState[relevant_evt_OF_EC3_4]  =  true;
	}

	if ( !boolState[required_OF_gate_2_5] )
	{
		boolState[required_OF_EC3_5]  =  false;
	}

	if (boolState[relevant_evt_OF_gate_2_5] && ( !boolState[S_OF_gate_2_5]) )
	{
		boolState[relevant_evt_OF_EC3_5]  =  true;
	}

	if ( !boolState[required_OF_gate_2_6] )
	{
		boolState[required_OF_EC3_6]  =  false;
	}

	if (boolState[relevant_evt_OF_gate_2_6] && ( !boolState[S_OF_gate_2_6]) )
	{
		boolState[relevant_evt_OF_EC3_6]  =  true;
	}

	if ( !boolState[required_OF_gate_2_7] )
	{
		boolState[required_OF_EC3_7]  =  false;
	}

	if (boolState[relevant_evt_OF_gate_2_7] && ( !boolState[S_OF_gate_2_7]) )
	{
		boolState[relevant_evt_OF_EC3_7]  =  true;
	}

	if ( !boolState[required_OF_gate_2_8] )
	{
		boolState[required_OF_EC3_8]  =  false;
	}

	if (boolState[relevant_evt_OF_gate_2_8] && ( !boolState[S_OF_gate_2_8]) )
	{
		boolState[relevant_evt_OF_EC3_8]  =  true;
	}

	if ( !boolState[required_OF_System] )
	{
		boolState[required_OF_Filter_1]  =  false;
	}

	if (boolState[relevant_evt_OF_System] && ( !boolState[S_OF_System]) )
	{
		boolState[relevant_evt_OF_Filter_1]  =  true;
	}

	if ( !boolState[required_OF_System] )
	{
		boolState[required_OF_Filter_2]  =  false;
	}

	if (boolState[relevant_evt_OF_System] && ( !boolState[S_OF_System]) )
	{
		boolState[relevant_evt_OF_Filter_2]  =  true;
	}

	if ( !boolState[required_OF_System] )
	{
		boolState[required_OF_Filter_3]  =  false;
	}

	if (boolState[relevant_evt_OF_System] && ( !boolState[S_OF_System]) )
	{
		boolState[relevant_evt_OF_Filter_3]  =  true;
	}

	if ( !boolState[required_OF_System] )
	{
		boolState[required_OF_Filter_4]  =  false;
	}

	if (boolState[relevant_evt_OF_System] && ( !boolState[S_OF_System]) )
	{
		boolState[relevant_evt_OF_Filter_4]  =  true;
	}

	if ( !boolState[required_OF_System] )
	{
		boolState[required_OF_Filter_5]  =  false;
	}

	if (boolState[relevant_evt_OF_System] && ( !boolState[S_OF_System]) )
	{
		boolState[relevant_evt_OF_Filter_5]  =  true;
	}

	if ( !boolState[required_OF_System] )
	{
		boolState[required_OF_Filter_6]  =  false;
	}

	if (boolState[relevant_evt_OF_System] && ( !boolState[S_OF_System]) )
	{
		boolState[relevant_evt_OF_Filter_6]  =  true;
	}

	if ( !boolState[required_OF_System] )
	{
		boolState[required_OF_Filter_7]  =  false;
	}

	if (boolState[relevant_evt_OF_System] && ( !boolState[S_OF_System]) )
	{
		boolState[relevant_evt_OF_Filter_7]  =  true;
	}

	if ( !boolState[required_OF_System] )
	{
		boolState[required_OF_Filter_8]  =  false;
	}

	if (boolState[relevant_evt_OF_System] && ( !boolState[S_OF_System]) )
	{
		boolState[relevant_evt_OF_Filter_8]  =  true;
	}

	if ( !boolState[required_OF_UE_1] )
	{
		boolState[required_OF_System]  =  false;
	}

	if (boolState[relevant_evt_OF_UE_1] && ( !boolState[S_OF_UE_1]) )
	{
		boolState[relevant_evt_OF_System]  =  true;
	}



	boolState[relevant_evt_OF_UE_1]  =  true  ;

	if ( !boolState[required_OF_Filter_1] )
	{
		boolState[required_OF_fault_cfg_1_1]  =  false;
	}

	if (boolState[relevant_evt_OF_Filter_1] && ( !boolState[S_OF_Filter_1]) )
	{
		boolState[relevant_evt_OF_fault_cfg_1_1]  =  true;
	}

	if ( !boolState[required_OF_Filter_2] )
	{
		boolState[required_OF_fault_cfg_1_2]  =  false;
	}

	if (boolState[relevant_evt_OF_Filter_2] && ( !boolState[S_OF_Filter_2]) )
	{
		boolState[relevant_evt_OF_fault_cfg_1_2]  =  true;
	}

	if ( !boolState[required_OF_Filter_3] )
	{
		boolState[required_OF_fault_cfg_1_3]  =  false;
	}

	if (boolState[relevant_evt_OF_Filter_3] && ( !boolState[S_OF_Filter_3]) )
	{
		boolState[relevant_evt_OF_fault_cfg_1_3]  =  true;
	}

	if ( !boolState[required_OF_Filter_4] )
	{
		boolState[required_OF_fault_cfg_1_4]  =  false;
	}

	if (boolState[relevant_evt_OF_Filter_4] && ( !boolState[S_OF_Filter_4]) )
	{
		boolState[relevant_evt_OF_fault_cfg_1_4]  =  true;
	}

	if ( !boolState[required_OF_Filter_5] )
	{
		boolState[required_OF_fault_cfg_1_5]  =  false;
	}

	if (boolState[relevant_evt_OF_Filter_5] && ( !boolState[S_OF_Filter_5]) )
	{
		boolState[relevant_evt_OF_fault_cfg_1_5]  =  true;
	}

	if ( !boolState[required_OF_Filter_6] )
	{
		boolState[required_OF_fault_cfg_1_6]  =  false;
	}

	if (boolState[relevant_evt_OF_Filter_6] && ( !boolState[S_OF_Filter_6]) )
	{
		boolState[relevant_evt_OF_fault_cfg_1_6]  =  true;
	}

	if ( !boolState[required_OF_Filter_7] )
	{
		boolState[required_OF_fault_cfg_1_7]  =  false;
	}

	if (boolState[relevant_evt_OF_Filter_7] && ( !boolState[S_OF_Filter_7]) )
	{
		boolState[relevant_evt_OF_fault_cfg_1_7]  =  true;
	}

	if ( !boolState[required_OF_Filter_8] )
	{
		boolState[required_OF_fault_cfg_1_8]  =  false;
	}

	if (boolState[relevant_evt_OF_Filter_8] && ( !boolState[S_OF_Filter_8]) )
	{
		boolState[relevant_evt_OF_fault_cfg_1_8]  =  true;
	}

	if ( !boolState[required_OF_Filter_1] )
	{
		boolState[required_OF_fault_cfg_3_1]  =  false;
	}

	if (boolState[relevant_evt_OF_Filter_1] && ( !boolState[S_OF_Filter_1]) )
	{
		boolState[relevant_evt_OF_fault_cfg_3_1]  =  true;
	}

	if ( !boolState[required_OF_Filter_2] )
	{
		boolState[required_OF_fault_cfg_3_2]  =  false;
	}

	if (boolState[relevant_evt_OF_Filter_2] && ( !boolState[S_OF_Filter_2]) )
	{
		boolState[relevant_evt_OF_fault_cfg_3_2]  =  true;
	}

	if ( !boolState[required_OF_Filter_3] )
	{
		boolState[required_OF_fault_cfg_3_3]  =  false;
	}

	if (boolState[relevant_evt_OF_Filter_3] && ( !boolState[S_OF_Filter_3]) )
	{
		boolState[relevant_evt_OF_fault_cfg_3_3]  =  true;
	}

	if ( !boolState[required_OF_Filter_4] )
	{
		boolState[required_OF_fault_cfg_3_4]  =  false;
	}

	if (boolState[relevant_evt_OF_Filter_4] && ( !boolState[S_OF_Filter_4]) )
	{
		boolState[relevant_evt_OF_fault_cfg_3_4]  =  true;
	}

	if ( !boolState[required_OF_Filter_5] )
	{
		boolState[required_OF_fault_cfg_3_5]  =  false;
	}

	if (boolState[relevant_evt_OF_Filter_5] && ( !boolState[S_OF_Filter_5]) )
	{
		boolState[relevant_evt_OF_fault_cfg_3_5]  =  true;
	}

	if ( !boolState[required_OF_Filter_6] )
	{
		boolState[required_OF_fault_cfg_3_6]  =  false;
	}

	if (boolState[relevant_evt_OF_Filter_6] && ( !boolState[S_OF_Filter_6]) )
	{
		boolState[relevant_evt_OF_fault_cfg_3_6]  =  true;
	}

	if ( !boolState[required_OF_Filter_7] )
	{
		boolState[required_OF_fault_cfg_3_7]  =  false;
	}

	if (boolState[relevant_evt_OF_Filter_7] && ( !boolState[S_OF_Filter_7]) )
	{
		boolState[relevant_evt_OF_fault_cfg_3_7]  =  true;
	}

	if ( !boolState[required_OF_Filter_8] )
	{
		boolState[required_OF_fault_cfg_3_8]  =  false;
	}

	if (boolState[relevant_evt_OF_Filter_8] && ( !boolState[S_OF_Filter_8]) )
	{
		boolState[relevant_evt_OF_fault_cfg_3_8]  =  true;
	}

	if ( !boolState[required_OF_Filter_1] )
	{
		boolState[required_OF_fault_cfg_4_1]  =  false;
	}

	if (boolState[relevant_evt_OF_Filter_1] && ( !boolState[S_OF_Filter_1]) )
	{
		boolState[relevant_evt_OF_fault_cfg_4_1]  =  true;
	}

	if ( !boolState[required_OF_Filter_2] )
	{
		boolState[required_OF_fault_cfg_4_2]  =  false;
	}

	if (boolState[relevant_evt_OF_Filter_2] && ( !boolState[S_OF_Filter_2]) )
	{
		boolState[relevant_evt_OF_fault_cfg_4_2]  =  true;
	}

	if ( !boolState[required_OF_Filter_3] )
	{
		boolState[required_OF_fault_cfg_4_3]  =  false;
	}

	if (boolState[relevant_evt_OF_Filter_3] && ( !boolState[S_OF_Filter_3]) )
	{
		boolState[relevant_evt_OF_fault_cfg_4_3]  =  true;
	}

	if ( !boolState[required_OF_Filter_4] )
	{
		boolState[required_OF_fault_cfg_4_4]  =  false;
	}

	if (boolState[relevant_evt_OF_Filter_4] && ( !boolState[S_OF_Filter_4]) )
	{
		boolState[relevant_evt_OF_fault_cfg_4_4]  =  true;
	}

	if ( !boolState[required_OF_Filter_5] )
	{
		boolState[required_OF_fault_cfg_4_5]  =  false;
	}

	if (boolState[relevant_evt_OF_Filter_5] && ( !boolState[S_OF_Filter_5]) )
	{
		boolState[relevant_evt_OF_fault_cfg_4_5]  =  true;
	}

	if ( !boolState[required_OF_Filter_6] )
	{
		boolState[required_OF_fault_cfg_4_6]  =  false;
	}

	if (boolState[relevant_evt_OF_Filter_6] && ( !boolState[S_OF_Filter_6]) )
	{
		boolState[relevant_evt_OF_fault_cfg_4_6]  =  true;
	}

	if ( !boolState[required_OF_Filter_7] )
	{
		boolState[required_OF_fault_cfg_4_7]  =  false;
	}

	if (boolState[relevant_evt_OF_Filter_7] && ( !boolState[S_OF_Filter_7]) )
	{
		boolState[relevant_evt_OF_fault_cfg_4_7]  =  true;
	}

	if ( !boolState[required_OF_Filter_8] )
	{
		boolState[required_OF_fault_cfg_4_8]  =  false;
	}

	if (boolState[relevant_evt_OF_Filter_8] && ( !boolState[S_OF_Filter_8]) )
	{
		boolState[relevant_evt_OF_fault_cfg_4_8]  =  true;
	}

	if ( !boolState[required_OF_fault_cfg_4_1] )
	{
		boolState[required_OF_gate_1_1]  =  false;
	}

	if (boolState[relevant_evt_OF_fault_cfg_4_1] && ( !boolState[S_OF_fault_cfg_4_1]) )
	{
		boolState[relevant_evt_OF_gate_1_1]  =  true;
	}

	if ( !boolState[required_OF_fault_cfg_4_2] )
	{
		boolState[required_OF_gate_1_2]  =  false;
	}

	if (boolState[relevant_evt_OF_fault_cfg_4_2] && ( !boolState[S_OF_fault_cfg_4_2]) )
	{
		boolState[relevant_evt_OF_gate_1_2]  =  true;
	}

	if ( !boolState[required_OF_fault_cfg_4_3] )
	{
		boolState[required_OF_gate_1_3]  =  false;
	}

	if (boolState[relevant_evt_OF_fault_cfg_4_3] && ( !boolState[S_OF_fault_cfg_4_3]) )
	{
		boolState[relevant_evt_OF_gate_1_3]  =  true;
	}

	if ( !boolState[required_OF_fault_cfg_4_4] )
	{
		boolState[required_OF_gate_1_4]  =  false;
	}

	if (boolState[relevant_evt_OF_fault_cfg_4_4] && ( !boolState[S_OF_fault_cfg_4_4]) )
	{
		boolState[relevant_evt_OF_gate_1_4]  =  true;
	}

	if ( !boolState[required_OF_fault_cfg_4_5] )
	{
		boolState[required_OF_gate_1_5]  =  false;
	}

	if (boolState[relevant_evt_OF_fault_cfg_4_5] && ( !boolState[S_OF_fault_cfg_4_5]) )
	{
		boolState[relevant_evt_OF_gate_1_5]  =  true;
	}

	if ( !boolState[required_OF_fault_cfg_4_6] )
	{
		boolState[required_OF_gate_1_6]  =  false;
	}

	if (boolState[relevant_evt_OF_fault_cfg_4_6] && ( !boolState[S_OF_fault_cfg_4_6]) )
	{
		boolState[relevant_evt_OF_gate_1_6]  =  true;
	}

	if ( !boolState[required_OF_fault_cfg_4_7] )
	{
		boolState[required_OF_gate_1_7]  =  false;
	}

	if (boolState[relevant_evt_OF_fault_cfg_4_7] && ( !boolState[S_OF_fault_cfg_4_7]) )
	{
		boolState[relevant_evt_OF_gate_1_7]  =  true;
	}

	if ( !boolState[required_OF_fault_cfg_4_8] )
	{
		boolState[required_OF_gate_1_8]  =  false;
	}

	if (boolState[relevant_evt_OF_fault_cfg_4_8] && ( !boolState[S_OF_fault_cfg_4_8]) )
	{
		boolState[relevant_evt_OF_gate_1_8]  =  true;
	}

	if ( !boolState[required_OF_fault_cfg_4_1] )
	{
		boolState[required_OF_gate_2_1]  =  false;
	}

	if (boolState[relevant_evt_OF_fault_cfg_4_1] && ( !boolState[S_OF_fault_cfg_4_1]) )
	{
		boolState[relevant_evt_OF_gate_2_1]  =  true;
	}

	if ( !boolState[required_OF_fault_cfg_4_2] )
	{
		boolState[required_OF_gate_2_2]  =  false;
	}

	if (boolState[relevant_evt_OF_fault_cfg_4_2] && ( !boolState[S_OF_fault_cfg_4_2]) )
	{
		boolState[relevant_evt_OF_gate_2_2]  =  true;
	}

	if ( !boolState[required_OF_fault_cfg_4_3] )
	{
		boolState[required_OF_gate_2_3]  =  false;
	}

	if (boolState[relevant_evt_OF_fault_cfg_4_3] && ( !boolState[S_OF_fault_cfg_4_3]) )
	{
		boolState[relevant_evt_OF_gate_2_3]  =  true;
	}

	if ( !boolState[required_OF_fault_cfg_4_4] )
	{
		boolState[required_OF_gate_2_4]  =  false;
	}

	if (boolState[relevant_evt_OF_fault_cfg_4_4] && ( !boolState[S_OF_fault_cfg_4_4]) )
	{
		boolState[relevant_evt_OF_gate_2_4]  =  true;
	}

	if ( !boolState[required_OF_fault_cfg_4_5] )
	{
		boolState[required_OF_gate_2_5]  =  false;
	}

	if (boolState[relevant_evt_OF_fault_cfg_4_5] && ( !boolState[S_OF_fault_cfg_4_5]) )
	{
		boolState[relevant_evt_OF_gate_2_5]  =  true;
	}

	if ( !boolState[required_OF_fault_cfg_4_6] )
	{
		boolState[required_OF_gate_2_6]  =  false;
	}

	if (boolState[relevant_evt_OF_fault_cfg_4_6] && ( !boolState[S_OF_fault_cfg_4_6]) )
	{
		boolState[relevant_evt_OF_gate_2_6]  =  true;
	}

	if ( !boolState[required_OF_fault_cfg_4_7] )
	{
		boolState[required_OF_gate_2_7]  =  false;
	}

	if (boolState[relevant_evt_OF_fault_cfg_4_7] && ( !boolState[S_OF_fault_cfg_4_7]) )
	{
		boolState[relevant_evt_OF_gate_2_7]  =  true;
	}

	if ( !boolState[required_OF_fault_cfg_4_8] )
	{
		boolState[required_OF_gate_2_8]  =  false;
	}

	if (boolState[relevant_evt_OF_fault_cfg_4_8] && ( !boolState[S_OF_fault_cfg_4_8]) )
	{
		boolState[relevant_evt_OF_gate_2_8]  =  true;
	}

}


void storm::figaro::FigaroProgram_sf_8_2_manualy_written_Trim_repair::runOnceInteractionStep_propagate_leaves()
{


	boolState[already_S_OF_E1_1]  =  boolState[S_OF_E1_1]  ;



	boolState[already_S_OF_E1_2]  =  boolState[S_OF_E1_2]  ;



	boolState[already_S_OF_E1_3]  =  boolState[S_OF_E1_3]  ;



	boolState[already_S_OF_E1_4]  =  boolState[S_OF_E1_4]  ;



	boolState[already_S_OF_E1_5]  =  boolState[S_OF_E1_5]  ;



	boolState[already_S_OF_E1_6]  =  boolState[S_OF_E1_6]  ;



	boolState[already_S_OF_E1_7]  =  boolState[S_OF_E1_7]  ;



	boolState[already_S_OF_E1_8]  =  boolState[S_OF_E1_8]  ;



	boolState[already_S_OF_E2_1]  =  boolState[S_OF_E2_1]  ;



	boolState[already_S_OF_E2_2]  =  boolState[S_OF_E2_2]  ;



	boolState[already_S_OF_E2_3]  =  boolState[S_OF_E2_3]  ;



	boolState[already_S_OF_E2_4]  =  boolState[S_OF_E2_4]  ;



	boolState[already_S_OF_E2_5]  =  boolState[S_OF_E2_5]  ;



	boolState[already_S_OF_E2_6]  =  boolState[S_OF_E2_6]  ;



	boolState[already_S_OF_E2_7]  =  boolState[S_OF_E2_7]  ;



	boolState[already_S_OF_E2_8]  =  boolState[S_OF_E2_8]  ;



	boolState[already_S_OF_E3_1]  =  boolState[S_OF_E3_1]  ;



	boolState[already_S_OF_E3_2]  =  boolState[S_OF_E3_2]  ;



	boolState[already_S_OF_E3_3]  =  boolState[S_OF_E3_3]  ;



	boolState[already_S_OF_E3_4]  =  boolState[S_OF_E3_4]  ;



	boolState[already_S_OF_E3_5]  =  boolState[S_OF_E3_5]  ;



	boolState[already_S_OF_E3_6]  =  boolState[S_OF_E3_6]  ;



	boolState[already_S_OF_E3_7]  =  boolState[S_OF_E3_7]  ;



	boolState[already_S_OF_E3_8]  =  boolState[S_OF_E3_8]  ;



	boolState[already_S_OF_E4_1]  =  boolState[S_OF_E4_1]  ;



	boolState[already_S_OF_E4_2]  =  boolState[S_OF_E4_2]  ;



	boolState[already_S_OF_E4_3]  =  boolState[S_OF_E4_3]  ;



	boolState[already_S_OF_E4_4]  =  boolState[S_OF_E4_4]  ;



	boolState[already_S_OF_E4_5]  =  boolState[S_OF_E4_5]  ;



	boolState[already_S_OF_E4_6]  =  boolState[S_OF_E4_6]  ;



	boolState[already_S_OF_E4_7]  =  boolState[S_OF_E4_7]  ;



	boolState[already_S_OF_E4_8]  =  boolState[S_OF_E4_8]  ;



	boolState[already_S_OF_EC1_1]  =  boolState[S_OF_EC1_1]  ;



	boolState[already_S_OF_EC1_2]  =  boolState[S_OF_EC1_2]  ;



	boolState[already_S_OF_EC1_3]  =  boolState[S_OF_EC1_3]  ;



	boolState[already_S_OF_EC1_4]  =  boolState[S_OF_EC1_4]  ;



	boolState[already_S_OF_EC1_5]  =  boolState[S_OF_EC1_5]  ;



	boolState[already_S_OF_EC1_6]  =  boolState[S_OF_EC1_6]  ;



	boolState[already_S_OF_EC1_7]  =  boolState[S_OF_EC1_7]  ;



	boolState[already_S_OF_EC1_8]  =  boolState[S_OF_EC1_8]  ;



	boolState[already_S_OF_EC2_1]  =  boolState[S_OF_EC2_1]  ;



	boolState[already_S_OF_EC2_2]  =  boolState[S_OF_EC2_2]  ;



	boolState[already_S_OF_EC2_3]  =  boolState[S_OF_EC2_3]  ;



	boolState[already_S_OF_EC2_4]  =  boolState[S_OF_EC2_4]  ;



	boolState[already_S_OF_EC2_5]  =  boolState[S_OF_EC2_5]  ;



	boolState[already_S_OF_EC2_6]  =  boolState[S_OF_EC2_6]  ;



	boolState[already_S_OF_EC2_7]  =  boolState[S_OF_EC2_7]  ;



	boolState[already_S_OF_EC2_8]  =  boolState[S_OF_EC2_8]  ;



	boolState[already_S_OF_EC3_1]  =  boolState[S_OF_EC3_1]  ;



	boolState[already_S_OF_EC3_2]  =  boolState[S_OF_EC3_2]  ;



	boolState[already_S_OF_EC3_3]  =  boolState[S_OF_EC3_3]  ;



	boolState[already_S_OF_EC3_4]  =  boolState[S_OF_EC3_4]  ;



	boolState[already_S_OF_EC3_5]  =  boolState[S_OF_EC3_5]  ;



	boolState[already_S_OF_EC3_6]  =  boolState[S_OF_EC3_6]  ;



	boolState[already_S_OF_EC3_7]  =  boolState[S_OF_EC3_7]  ;



	boolState[already_S_OF_EC3_8]  =  boolState[S_OF_EC3_8]  ;



	boolState[already_S_OF_Filter_1]  =  boolState[S_OF_Filter_1]  ;



	boolState[already_S_OF_Filter_2]  =  boolState[S_OF_Filter_2]  ;



	boolState[already_S_OF_Filter_3]  =  boolState[S_OF_Filter_3]  ;



	boolState[already_S_OF_Filter_4]  =  boolState[S_OF_Filter_4]  ;



	boolState[already_S_OF_Filter_5]  =  boolState[S_OF_Filter_5]  ;



	boolState[already_S_OF_Filter_6]  =  boolState[S_OF_Filter_6]  ;



	boolState[already_S_OF_Filter_7]  =  boolState[S_OF_Filter_7]  ;



	boolState[already_S_OF_Filter_8]  =  boolState[S_OF_Filter_8]  ;



	boolState[already_S_OF_System]  =  boolState[S_OF_System]  ;



	boolState[already_S_OF_UE_1]  =  boolState[S_OF_UE_1]  ;



	boolState[already_S_OF_fault_cfg_1_1]  =  boolState[S_OF_fault_cfg_1_1]  ;



	boolState[already_S_OF_fault_cfg_1_2]  =  boolState[S_OF_fault_cfg_1_2]  ;



	boolState[already_S_OF_fault_cfg_1_3]  =  boolState[S_OF_fault_cfg_1_3]  ;



	boolState[already_S_OF_fault_cfg_1_4]  =  boolState[S_OF_fault_cfg_1_4]  ;



	boolState[already_S_OF_fault_cfg_1_5]  =  boolState[S_OF_fault_cfg_1_5]  ;



	boolState[already_S_OF_fault_cfg_1_6]  =  boolState[S_OF_fault_cfg_1_6]  ;



	boolState[already_S_OF_fault_cfg_1_7]  =  boolState[S_OF_fault_cfg_1_7]  ;



	boolState[already_S_OF_fault_cfg_1_8]  =  boolState[S_OF_fault_cfg_1_8]  ;



	boolState[already_S_OF_fault_cfg_3_1]  =  boolState[S_OF_fault_cfg_3_1]  ;



	boolState[already_S_OF_fault_cfg_3_2]  =  boolState[S_OF_fault_cfg_3_2]  ;



	boolState[already_S_OF_fault_cfg_3_3]  =  boolState[S_OF_fault_cfg_3_3]  ;



	boolState[already_S_OF_fault_cfg_3_4]  =  boolState[S_OF_fault_cfg_3_4]  ;



	boolState[already_S_OF_fault_cfg_3_5]  =  boolState[S_OF_fault_cfg_3_5]  ;



	boolState[already_S_OF_fault_cfg_3_6]  =  boolState[S_OF_fault_cfg_3_6]  ;



	boolState[already_S_OF_fault_cfg_3_7]  =  boolState[S_OF_fault_cfg_3_7]  ;



	boolState[already_S_OF_fault_cfg_3_8]  =  boolState[S_OF_fault_cfg_3_8]  ;



	boolState[already_S_OF_fault_cfg_4_1]  =  boolState[S_OF_fault_cfg_4_1]  ;



	boolState[already_S_OF_fault_cfg_4_2]  =  boolState[S_OF_fault_cfg_4_2]  ;



	boolState[already_S_OF_fault_cfg_4_3]  =  boolState[S_OF_fault_cfg_4_3]  ;



	boolState[already_S_OF_fault_cfg_4_4]  =  boolState[S_OF_fault_cfg_4_4]  ;



	boolState[already_S_OF_fault_cfg_4_5]  =  boolState[S_OF_fault_cfg_4_5]  ;



	boolState[already_S_OF_fault_cfg_4_6]  =  boolState[S_OF_fault_cfg_4_6]  ;



	boolState[already_S_OF_fault_cfg_4_7]  =  boolState[S_OF_fault_cfg_4_7]  ;



	boolState[already_S_OF_fault_cfg_4_8]  =  boolState[S_OF_fault_cfg_4_8]  ;



	boolState[already_S_OF_gate_1_1]  =  boolState[S_OF_gate_1_1]  ;



	boolState[already_S_OF_gate_1_2]  =  boolState[S_OF_gate_1_2]  ;



	boolState[already_S_OF_gate_1_3]  =  boolState[S_OF_gate_1_3]  ;



	boolState[already_S_OF_gate_1_4]  =  boolState[S_OF_gate_1_4]  ;



	boolState[already_S_OF_gate_1_5]  =  boolState[S_OF_gate_1_5]  ;



	boolState[already_S_OF_gate_1_6]  =  boolState[S_OF_gate_1_6]  ;



	boolState[already_S_OF_gate_1_7]  =  boolState[S_OF_gate_1_7]  ;



	boolState[already_S_OF_gate_1_8]  =  boolState[S_OF_gate_1_8]  ;



	boolState[already_S_OF_gate_2_1]  =  boolState[S_OF_gate_2_1]  ;



	boolState[already_S_OF_gate_2_2]  =  boolState[S_OF_gate_2_2]  ;



	boolState[already_S_OF_gate_2_3]  =  boolState[S_OF_gate_2_3]  ;



	boolState[already_S_OF_gate_2_4]  =  boolState[S_OF_gate_2_4]  ;



	boolState[already_S_OF_gate_2_5]  =  boolState[S_OF_gate_2_5]  ;



	boolState[already_S_OF_gate_2_6]  =  boolState[S_OF_gate_2_6]  ;



	boolState[already_S_OF_gate_2_7]  =  boolState[S_OF_gate_2_7]  ;



	boolState[already_S_OF_gate_2_8]  =  boolState[S_OF_gate_2_8]  ;

}

void
storm::figaro::FigaroProgram_sf_8_2_manualy_written_Trim_repair::runInteractions() {
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
    }void storm::figaro::FigaroProgram_sf_8_2_manualy_written_Trim_repair::printstatetuple(){

                std::cout<<"\n State information: (";
                for (int i=0; i<boolFailureState.size(); i++)
                    {
                    std::cout<<boolFailureState.at(i);
                    }
                std::cout<<")";

            }
        int_fast64_t storm::figaro::FigaroProgram_sf_8_2_manualy_written_Trim_repair::stateSize() const{
            return numBoolState;
}
        void storm::figaro::FigaroProgram_sf_8_2_manualy_written_Trim_repair::fireinsttransitiongroup(std::string user_input_ins)

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
    