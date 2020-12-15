#include <iostream>
#include "FigaroModelrc_5_5_Trim_repair.h"

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
        
void storm::figaro::FigaroProgram_rc_5_5_Trim_repair::init()
{
	//cout <<">>>>>>>>>>>>>>>>>>>> Initialization of variables <<<<<<<<<<<<<<<<<<<<<<<" << endl;

	REINITIALISATION_OF_required_OF_System = true;
	boolState[already_S_OF_System] = false;
	REINITIALISATION_OF_S_OF_System = false;
	REINITIALISATION_OF_relevant_evt_OF_System = false;
	REINITIALISATION_OF_required_OF_UE_1 = true;
	boolState[already_S_OF_UE_1] = false;
	REINITIALISATION_OF_S_OF_UE_1 = false;
	REINITIALISATION_OF_relevant_evt_OF_UE_1 = false;
	REINITIALISATION_OF_required_OF__SA_1 = true;
	boolState[already_S_OF__SA_1] = false;
	REINITIALISATION_OF_S_OF__SA_1 = false;
	REINITIALISATION_OF_relevant_evt_OF__SA_1 = false;
	REINITIALISATION_OF_required_OF__SA_2 = true;
	boolState[already_S_OF__SA_2] = false;
	REINITIALISATION_OF_S_OF__SA_2 = false;
	REINITIALISATION_OF_relevant_evt_OF__SA_2 = false;
	REINITIALISATION_OF_required_OF__SA_3 = true;
	boolState[already_S_OF__SA_3] = false;
	REINITIALISATION_OF_S_OF__SA_3 = false;
	REINITIALISATION_OF_relevant_evt_OF__SA_3 = false;
	REINITIALISATION_OF_required_OF__SA_4 = true;
	boolState[already_S_OF__SA_4] = false;
	REINITIALISATION_OF_S_OF__SA_4 = false;
	REINITIALISATION_OF_relevant_evt_OF__SA_4 = false;
	REINITIALISATION_OF_required_OF__SA_5 = true;
	boolState[already_S_OF__SA_5] = false;
	REINITIALISATION_OF_S_OF__SA_5 = false;
	REINITIALISATION_OF_relevant_evt_OF__SA_5 = false;
	REINITIALISATION_OF_required_OF__SB_1 = true;
	boolState[already_S_OF__SB_1] = false;
	REINITIALISATION_OF_S_OF__SB_1 = false;
	REINITIALISATION_OF_relevant_evt_OF__SB_1 = false;
	REINITIALISATION_OF_required_OF__SB_2 = true;
	boolState[already_S_OF__SB_2] = false;
	REINITIALISATION_OF_S_OF__SB_2 = false;
	REINITIALISATION_OF_relevant_evt_OF__SB_2 = false;
	REINITIALISATION_OF_required_OF__SB_3 = true;
	boolState[already_S_OF__SB_3] = false;
	REINITIALISATION_OF_S_OF__SB_3 = false;
	REINITIALISATION_OF_relevant_evt_OF__SB_3 = false;
	REINITIALISATION_OF_required_OF__SB_4 = true;
	boolState[already_S_OF__SB_4] = false;
	REINITIALISATION_OF_S_OF__SB_4 = false;
	REINITIALISATION_OF_relevant_evt_OF__SB_4 = false;
	REINITIALISATION_OF_required_OF__SB_5 = true;
	boolState[already_S_OF__SB_5] = false;
	REINITIALISATION_OF_S_OF__SB_5 = false;
	REINITIALISATION_OF_relevant_evt_OF__SB_5 = false;
	REINITIALISATION_OF_required_OF__SC_1 = true;
	boolState[already_S_OF__SC_1] = false;
	REINITIALISATION_OF_S_OF__SC_1 = false;
	REINITIALISATION_OF_relevant_evt_OF__SC_1 = false;
	REINITIALISATION_OF_required_OF__SC_2 = true;
	boolState[already_S_OF__SC_2] = false;
	REINITIALISATION_OF_S_OF__SC_2 = false;
	REINITIALISATION_OF_relevant_evt_OF__SC_2 = false;
	REINITIALISATION_OF_required_OF__SC_3 = true;
	boolState[already_S_OF__SC_3] = false;
	REINITIALISATION_OF_S_OF__SC_3 = false;
	REINITIALISATION_OF_relevant_evt_OF__SC_3 = false;
	REINITIALISATION_OF_required_OF__SC_4 = true;
	boolState[already_S_OF__SC_4] = false;
	REINITIALISATION_OF_S_OF__SC_4 = false;
	REINITIALISATION_OF_relevant_evt_OF__SC_4 = false;
	REINITIALISATION_OF_required_OF__SC_5 = true;
	boolState[already_S_OF__SC_5] = false;
	REINITIALISATION_OF_S_OF__SC_5 = false;
	REINITIALISATION_OF_relevant_evt_OF__SC_5 = false;
	REINITIALISATION_OF_required_OF__SD_1 = true;
	boolState[already_S_OF__SD_1] = false;
	REINITIALISATION_OF_S_OF__SD_1 = false;
	REINITIALISATION_OF_relevant_evt_OF__SD_1 = false;
	REINITIALISATION_OF_required_OF__SD_2 = true;
	boolState[already_S_OF__SD_2] = false;
	REINITIALISATION_OF_S_OF__SD_2 = false;
	REINITIALISATION_OF_relevant_evt_OF__SD_2 = false;
	REINITIALISATION_OF_required_OF__SD_3 = true;
	boolState[already_S_OF__SD_3] = false;
	REINITIALISATION_OF_S_OF__SD_3 = false;
	REINITIALISATION_OF_relevant_evt_OF__SD_3 = false;
	REINITIALISATION_OF_required_OF__SD_4 = true;
	boolState[already_S_OF__SD_4] = false;
	REINITIALISATION_OF_S_OF__SD_4 = false;
	REINITIALISATION_OF_relevant_evt_OF__SD_4 = false;
	REINITIALISATION_OF_required_OF__SD_5 = true;
	boolState[already_S_OF__SD_5] = false;
	REINITIALISATION_OF_S_OF__SD_5 = false;
	REINITIALISATION_OF_relevant_evt_OF__SD_5 = false;
	REINITIALISATION_OF_required_OF_barrier_1 = true;
	boolState[already_S_OF_barrier_1] = false;
	REINITIALISATION_OF_S_OF_barrier_1 = false;
	REINITIALISATION_OF_relevant_evt_OF_barrier_1 = false;
	REINITIALISATION_OF_required_OF_barrier_2 = true;
	boolState[already_S_OF_barrier_2] = false;
	REINITIALISATION_OF_S_OF_barrier_2 = false;
	REINITIALISATION_OF_relevant_evt_OF_barrier_2 = false;
	REINITIALISATION_OF_required_OF_barrier_3 = true;
	boolState[already_S_OF_barrier_3] = false;
	REINITIALISATION_OF_S_OF_barrier_3 = false;
	REINITIALISATION_OF_relevant_evt_OF_barrier_3 = false;
	REINITIALISATION_OF_required_OF_barrier_4 = true;
	boolState[already_S_OF_barrier_4] = false;
	REINITIALISATION_OF_S_OF_barrier_4 = false;
	REINITIALISATION_OF_relevant_evt_OF_barrier_4 = false;
	REINITIALISATION_OF_required_OF_barrier_5 = true;
	boolState[already_S_OF_barrier_5] = false;
	REINITIALISATION_OF_S_OF_barrier_5 = false;
	REINITIALISATION_OF_relevant_evt_OF_barrier_5 = false;
	REINITIALISATION_OF_required_OF_barriers = true;
	boolState[already_S_OF_barriers] = false;
	REINITIALISATION_OF_S_OF_barriers = false;
	REINITIALISATION_OF_relevant_evt_OF_barriers = false;
	REINITIALISATION_OF_required_OF_controller = true;
	boolState[already_S_OF_controller] = false;
	REINITIALISATION_OF_S_OF_controller = false;
	REINITIALISATION_OF_relevant_evt_OF_controller = false;
	boolState[failF_OF_controller] = false;
	REINITIALISATION_OF_required_OF_motor_1 = true;
	boolState[already_S_OF_motor_1] = false;
	REINITIALISATION_OF_S_OF_motor_1 = false;
	REINITIALISATION_OF_relevant_evt_OF_motor_1 = false;
	REINITIALISATION_OF_required_OF_motor_2 = true;
	boolState[already_S_OF_motor_2] = false;
	REINITIALISATION_OF_S_OF_motor_2 = false;
	REINITIALISATION_OF_relevant_evt_OF_motor_2 = false;
	REINITIALISATION_OF_required_OF_motor_3 = true;
	boolState[already_S_OF_motor_3] = false;
	REINITIALISATION_OF_S_OF_motor_3 = false;
	REINITIALISATION_OF_relevant_evt_OF_motor_3 = false;
	REINITIALISATION_OF_required_OF_motor_4 = true;
	boolState[already_S_OF_motor_4] = false;
	REINITIALISATION_OF_S_OF_motor_4 = false;
	REINITIALISATION_OF_relevant_evt_OF_motor_4 = false;
	REINITIALISATION_OF_required_OF_motor_5 = true;
	boolState[already_S_OF_motor_5] = false;
	REINITIALISATION_OF_S_OF_motor_5 = false;
	REINITIALISATION_OF_relevant_evt_OF_motor_5 = false;
	REINITIALISATION_OF_required_OF_mp1 = true;
	boolState[already_S_OF_mp1] = false;
	REINITIALISATION_OF_S_OF_mp1 = false;
	REINITIALISATION_OF_relevant_evt_OF_mp1 = false;
	boolState[failF_OF_mp1] = false;
	REINITIALISATION_OF_required_OF_mp2 = true;
	boolState[already_S_OF_mp2] = false;
	REINITIALISATION_OF_S_OF_mp2 = false;
	REINITIALISATION_OF_relevant_evt_OF_mp2 = false;
	boolState[failF_OF_mp2] = false;
	REINITIALISATION_OF_required_OF_mp3 = true;
	boolState[already_S_OF_mp3] = false;
	REINITIALISATION_OF_S_OF_mp3 = false;
	REINITIALISATION_OF_relevant_evt_OF_mp3 = false;
	boolState[failF_OF_mp3] = false;
	REINITIALISATION_OF_required_OF_mp4 = true;
	boolState[already_S_OF_mp4] = false;
	REINITIALISATION_OF_S_OF_mp4 = false;
	REINITIALISATION_OF_relevant_evt_OF_mp4 = false;
	boolState[failF_OF_mp4] = false;
	REINITIALISATION_OF_required_OF_mp5 = true;
	boolState[already_S_OF_mp5] = false;
	REINITIALISATION_OF_S_OF_mp5 = false;
	REINITIALISATION_OF_relevant_evt_OF_mp5 = false;
	boolState[failF_OF_mp5] = false;
	REINITIALISATION_OF_required_OF_sensor_1 = true;
	boolState[already_S_OF_sensor_1] = false;
	REINITIALISATION_OF_S_OF_sensor_1 = false;
	REINITIALISATION_OF_relevant_evt_OF_sensor_1 = false;
	REINITIALISATION_OF_required_OF_ms1 = true;
	boolState[already_S_OF_ms1] = false;
	REINITIALISATION_OF_S_OF_ms1 = false;
	REINITIALISATION_OF_relevant_evt_OF_ms1 = false;
	boolState[failF_OF_ms1] = false;
	REINITIALISATION_OF_required_OF_ms2 = true;
	boolState[already_S_OF_ms2] = false;
	REINITIALISATION_OF_S_OF_ms2 = false;
	REINITIALISATION_OF_relevant_evt_OF_ms2 = false;
	boolState[failF_OF_ms2] = false;
	REINITIALISATION_OF_required_OF_ms3 = true;
	boolState[already_S_OF_ms3] = false;
	REINITIALISATION_OF_S_OF_ms3 = false;
	REINITIALISATION_OF_relevant_evt_OF_ms3 = false;
	boolState[failF_OF_ms3] = false;
	REINITIALISATION_OF_required_OF_ms4 = true;
	boolState[already_S_OF_ms4] = false;
	REINITIALISATION_OF_S_OF_ms4 = false;
	REINITIALISATION_OF_relevant_evt_OF_ms4 = false;
	boolState[failF_OF_ms4] = false;
	REINITIALISATION_OF_required_OF_ms5 = true;
	boolState[already_S_OF_ms5] = false;
	REINITIALISATION_OF_S_OF_ms5 = false;
	REINITIALISATION_OF_relevant_evt_OF_ms5 = false;
	boolState[failF_OF_ms5] = false;
	REINITIALISATION_OF_required_OF_network_1 = true;
	boolState[already_S_OF_network_1] = false;
	REINITIALISATION_OF_S_OF_network_1 = false;
	REINITIALISATION_OF_relevant_evt_OF_network_1 = false;
	boolState[failF_OF_network_1] = false;
	REINITIALISATION_OF_required_OF_network_2 = true;
	boolState[already_S_OF_network_2] = false;
	REINITIALISATION_OF_S_OF_network_2 = false;
	REINITIALISATION_OF_relevant_evt_OF_network_2 = false;
	boolState[failF_OF_network_2] = false;
	REINITIALISATION_OF_required_OF_network_3 = true;
	boolState[already_S_OF_network_3] = false;
	REINITIALISATION_OF_S_OF_network_3 = false;
	REINITIALISATION_OF_relevant_evt_OF_network_3 = false;
	boolState[failF_OF_network_3] = false;
	REINITIALISATION_OF_required_OF_network_4 = true;
	boolState[already_S_OF_network_4] = false;
	REINITIALISATION_OF_S_OF_network_4 = false;
	REINITIALISATION_OF_relevant_evt_OF_network_4 = false;
	boolState[failF_OF_network_4] = false;
	REINITIALISATION_OF_required_OF_network_5 = true;
	boolState[already_S_OF_network_5] = false;
	REINITIALISATION_OF_S_OF_network_5 = false;
	REINITIALISATION_OF_relevant_evt_OF_network_5 = false;
	boolState[failF_OF_network_5] = false;
	REINITIALISATION_OF_required_OF_sA_1 = true;
	boolState[already_S_OF_sA_1] = false;
	REINITIALISATION_OF_S_OF_sA_1 = false;
	REINITIALISATION_OF_relevant_evt_OF_sA_1 = false;
	boolState[failF_OF_sA_1] = false;
	REINITIALISATION_OF_required_OF_sA_1_I = true;
	boolState[already_S_OF_sA_1_I] = false;
	REINITIALISATION_OF_S_OF_sA_1_I = false;
	REINITIALISATION_OF_relevant_evt_OF_sA_1_I = false;
	boolState[failI_OF_sA_1_I] = false;
	REINITIALISATION_OF_to_be_fired_OF_sA_1_I = false;
	boolState[already_standby_OF_sA_1_I] = false;
	boolState[already_required_OF_sA_1_I] = false;
	REINITIALISATION_OF_required_OF_sA_2 = true;
	boolState[already_S_OF_sA_2] = false;
	REINITIALISATION_OF_S_OF_sA_2 = false;
	REINITIALISATION_OF_relevant_evt_OF_sA_2 = false;
	boolState[failF_OF_sA_2] = false;
	REINITIALISATION_OF_required_OF_sA_2_I = true;
	boolState[already_S_OF_sA_2_I] = false;
	REINITIALISATION_OF_S_OF_sA_2_I = false;
	REINITIALISATION_OF_relevant_evt_OF_sA_2_I = false;
	boolState[failI_OF_sA_2_I] = false;
	REINITIALISATION_OF_to_be_fired_OF_sA_2_I = false;
	boolState[already_standby_OF_sA_2_I] = false;
	boolState[already_required_OF_sA_2_I] = false;
	REINITIALISATION_OF_required_OF_sA_3 = true;
	boolState[already_S_OF_sA_3] = false;
	REINITIALISATION_OF_S_OF_sA_3 = false;
	REINITIALISATION_OF_relevant_evt_OF_sA_3 = false;
	boolState[failF_OF_sA_3] = false;
	REINITIALISATION_OF_required_OF_sA_3_I = true;
	boolState[already_S_OF_sA_3_I] = false;
	REINITIALISATION_OF_S_OF_sA_3_I = false;
	REINITIALISATION_OF_relevant_evt_OF_sA_3_I = false;
	boolState[failI_OF_sA_3_I] = false;
	REINITIALISATION_OF_to_be_fired_OF_sA_3_I = false;
	boolState[already_standby_OF_sA_3_I] = false;
	boolState[already_required_OF_sA_3_I] = false;
	REINITIALISATION_OF_required_OF_sA_4 = true;
	boolState[already_S_OF_sA_4] = false;
	REINITIALISATION_OF_S_OF_sA_4 = false;
	REINITIALISATION_OF_relevant_evt_OF_sA_4 = false;
	boolState[failF_OF_sA_4] = false;
	REINITIALISATION_OF_required_OF_sA_4_I = true;
	boolState[already_S_OF_sA_4_I] = false;
	REINITIALISATION_OF_S_OF_sA_4_I = false;
	REINITIALISATION_OF_relevant_evt_OF_sA_4_I = false;
	boolState[failI_OF_sA_4_I] = false;
	REINITIALISATION_OF_to_be_fired_OF_sA_4_I = false;
	boolState[already_standby_OF_sA_4_I] = false;
	boolState[already_required_OF_sA_4_I] = false;
	REINITIALISATION_OF_required_OF_sA_5 = true;
	boolState[already_S_OF_sA_5] = false;
	REINITIALISATION_OF_S_OF_sA_5 = false;
	REINITIALISATION_OF_relevant_evt_OF_sA_5 = false;
	boolState[failF_OF_sA_5] = false;
	REINITIALISATION_OF_required_OF_sA_5_I = true;
	boolState[already_S_OF_sA_5_I] = false;
	REINITIALISATION_OF_S_OF_sA_5_I = false;
	REINITIALISATION_OF_relevant_evt_OF_sA_5_I = false;
	boolState[failI_OF_sA_5_I] = false;
	REINITIALISATION_OF_to_be_fired_OF_sA_5_I = false;
	boolState[already_standby_OF_sA_5_I] = false;
	boolState[already_required_OF_sA_5_I] = false;
	REINITIALISATION_OF_required_OF_sB_1 = true;
	boolState[already_S_OF_sB_1] = false;
	REINITIALISATION_OF_S_OF_sB_1 = false;
	REINITIALISATION_OF_relevant_evt_OF_sB_1 = false;
	boolState[failF_OF_sB_1] = false;
	REINITIALISATION_OF_required_OF_sB_1_I = true;
	boolState[already_S_OF_sB_1_I] = false;
	REINITIALISATION_OF_S_OF_sB_1_I = false;
	REINITIALISATION_OF_relevant_evt_OF_sB_1_I = false;
	boolState[failI_OF_sB_1_I] = false;
	REINITIALISATION_OF_to_be_fired_OF_sB_1_I = false;
	boolState[already_standby_OF_sB_1_I] = false;
	boolState[already_required_OF_sB_1_I] = false;
	REINITIALISATION_OF_required_OF_sB_2 = true;
	boolState[already_S_OF_sB_2] = false;
	REINITIALISATION_OF_S_OF_sB_2 = false;
	REINITIALISATION_OF_relevant_evt_OF_sB_2 = false;
	boolState[failF_OF_sB_2] = false;
	REINITIALISATION_OF_required_OF_sB_2_I = true;
	boolState[already_S_OF_sB_2_I] = false;
	REINITIALISATION_OF_S_OF_sB_2_I = false;
	REINITIALISATION_OF_relevant_evt_OF_sB_2_I = false;
	boolState[failI_OF_sB_2_I] = false;
	REINITIALISATION_OF_to_be_fired_OF_sB_2_I = false;
	boolState[already_standby_OF_sB_2_I] = false;
	boolState[already_required_OF_sB_2_I] = false;
	REINITIALISATION_OF_required_OF_sB_3 = true;
	boolState[already_S_OF_sB_3] = false;
	REINITIALISATION_OF_S_OF_sB_3 = false;
	REINITIALISATION_OF_relevant_evt_OF_sB_3 = false;
	boolState[failF_OF_sB_3] = false;
	REINITIALISATION_OF_required_OF_sB_3_I = true;
	boolState[already_S_OF_sB_3_I] = false;
	REINITIALISATION_OF_S_OF_sB_3_I = false;
	REINITIALISATION_OF_relevant_evt_OF_sB_3_I = false;
	boolState[failI_OF_sB_3_I] = false;
	REINITIALISATION_OF_to_be_fired_OF_sB_3_I = false;
	boolState[already_standby_OF_sB_3_I] = false;
	boolState[already_required_OF_sB_3_I] = false;
	REINITIALISATION_OF_required_OF_sB_4 = true;
	boolState[already_S_OF_sB_4] = false;
	REINITIALISATION_OF_S_OF_sB_4 = false;
	REINITIALISATION_OF_relevant_evt_OF_sB_4 = false;
	boolState[failF_OF_sB_4] = false;
	REINITIALISATION_OF_required_OF_sB_4_I = true;
	boolState[already_S_OF_sB_4_I] = false;
	REINITIALISATION_OF_S_OF_sB_4_I = false;
	REINITIALISATION_OF_relevant_evt_OF_sB_4_I = false;
	boolState[failI_OF_sB_4_I] = false;
	REINITIALISATION_OF_to_be_fired_OF_sB_4_I = false;
	boolState[already_standby_OF_sB_4_I] = false;
	boolState[already_required_OF_sB_4_I] = false;
	REINITIALISATION_OF_required_OF_sB_5 = true;
	boolState[already_S_OF_sB_5] = false;
	REINITIALISATION_OF_S_OF_sB_5 = false;
	REINITIALISATION_OF_relevant_evt_OF_sB_5 = false;
	boolState[failF_OF_sB_5] = false;
	REINITIALISATION_OF_required_OF_sB_5_I = true;
	boolState[already_S_OF_sB_5_I] = false;
	REINITIALISATION_OF_S_OF_sB_5_I = false;
	REINITIALISATION_OF_relevant_evt_OF_sB_5_I = false;
	boolState[failI_OF_sB_5_I] = false;
	REINITIALISATION_OF_to_be_fired_OF_sB_5_I = false;
	boolState[already_standby_OF_sB_5_I] = false;
	boolState[already_required_OF_sB_5_I] = false;
	REINITIALISATION_OF_required_OF_sC_1 = true;
	boolState[already_S_OF_sC_1] = false;
	REINITIALISATION_OF_S_OF_sC_1 = false;
	REINITIALISATION_OF_relevant_evt_OF_sC_1 = false;
	boolState[failF_OF_sC_1] = false;
	REINITIALISATION_OF_required_OF_sC_1_I = true;
	boolState[already_S_OF_sC_1_I] = false;
	REINITIALISATION_OF_S_OF_sC_1_I = false;
	REINITIALISATION_OF_relevant_evt_OF_sC_1_I = false;
	boolState[failI_OF_sC_1_I] = false;
	REINITIALISATION_OF_to_be_fired_OF_sC_1_I = false;
	boolState[already_standby_OF_sC_1_I] = false;
	boolState[already_required_OF_sC_1_I] = false;
	REINITIALISATION_OF_required_OF_sC_2 = true;
	boolState[already_S_OF_sC_2] = false;
	REINITIALISATION_OF_S_OF_sC_2 = false;
	REINITIALISATION_OF_relevant_evt_OF_sC_2 = false;
	boolState[failF_OF_sC_2] = false;
	REINITIALISATION_OF_required_OF_sC_2_I = true;
	boolState[already_S_OF_sC_2_I] = false;
	REINITIALISATION_OF_S_OF_sC_2_I = false;
	REINITIALISATION_OF_relevant_evt_OF_sC_2_I = false;
	boolState[failI_OF_sC_2_I] = false;
	REINITIALISATION_OF_to_be_fired_OF_sC_2_I = false;
	boolState[already_standby_OF_sC_2_I] = false;
	boolState[already_required_OF_sC_2_I] = false;
	REINITIALISATION_OF_required_OF_sC_3 = true;
	boolState[already_S_OF_sC_3] = false;
	REINITIALISATION_OF_S_OF_sC_3 = false;
	REINITIALISATION_OF_relevant_evt_OF_sC_3 = false;
	boolState[failF_OF_sC_3] = false;
	REINITIALISATION_OF_required_OF_sC_3_I = true;
	boolState[already_S_OF_sC_3_I] = false;
	REINITIALISATION_OF_S_OF_sC_3_I = false;
	REINITIALISATION_OF_relevant_evt_OF_sC_3_I = false;
	boolState[failI_OF_sC_3_I] = false;
	REINITIALISATION_OF_to_be_fired_OF_sC_3_I = false;
	boolState[already_standby_OF_sC_3_I] = false;
	boolState[already_required_OF_sC_3_I] = false;
	REINITIALISATION_OF_required_OF_sC_4 = true;
	boolState[already_S_OF_sC_4] = false;
	REINITIALISATION_OF_S_OF_sC_4 = false;
	REINITIALISATION_OF_relevant_evt_OF_sC_4 = false;
	boolState[failF_OF_sC_4] = false;
	REINITIALISATION_OF_required_OF_sC_4_I = true;
	boolState[already_S_OF_sC_4_I] = false;
	REINITIALISATION_OF_S_OF_sC_4_I = false;
	REINITIALISATION_OF_relevant_evt_OF_sC_4_I = false;
	boolState[failI_OF_sC_4_I] = false;
	REINITIALISATION_OF_to_be_fired_OF_sC_4_I = false;
	boolState[already_standby_OF_sC_4_I] = false;
	boolState[already_required_OF_sC_4_I] = false;
	REINITIALISATION_OF_required_OF_sC_5 = true;
	boolState[already_S_OF_sC_5] = false;
	REINITIALISATION_OF_S_OF_sC_5 = false;
	REINITIALISATION_OF_relevant_evt_OF_sC_5 = false;
	boolState[failF_OF_sC_5] = false;
	REINITIALISATION_OF_required_OF_sC_5_I = true;
	boolState[already_S_OF_sC_5_I] = false;
	REINITIALISATION_OF_S_OF_sC_5_I = false;
	REINITIALISATION_OF_relevant_evt_OF_sC_5_I = false;
	boolState[failI_OF_sC_5_I] = false;
	REINITIALISATION_OF_to_be_fired_OF_sC_5_I = false;
	boolState[already_standby_OF_sC_5_I] = false;
	boolState[already_required_OF_sC_5_I] = false;
	REINITIALISATION_OF_required_OF_sD_1 = true;
	boolState[already_S_OF_sD_1] = false;
	REINITIALISATION_OF_S_OF_sD_1 = false;
	REINITIALISATION_OF_relevant_evt_OF_sD_1 = false;
	boolState[failF_OF_sD_1] = false;
	REINITIALISATION_OF_required_OF_sD_1_I = true;
	boolState[already_S_OF_sD_1_I] = false;
	REINITIALISATION_OF_S_OF_sD_1_I = false;
	REINITIALISATION_OF_relevant_evt_OF_sD_1_I = false;
	boolState[failI_OF_sD_1_I] = false;
	REINITIALISATION_OF_to_be_fired_OF_sD_1_I = false;
	boolState[already_standby_OF_sD_1_I] = false;
	boolState[already_required_OF_sD_1_I] = false;
	REINITIALISATION_OF_required_OF_sD_2 = true;
	boolState[already_S_OF_sD_2] = false;
	REINITIALISATION_OF_S_OF_sD_2 = false;
	REINITIALISATION_OF_relevant_evt_OF_sD_2 = false;
	boolState[failF_OF_sD_2] = false;
	REINITIALISATION_OF_required_OF_sD_2_I = true;
	boolState[already_S_OF_sD_2_I] = false;
	REINITIALISATION_OF_S_OF_sD_2_I = false;
	REINITIALISATION_OF_relevant_evt_OF_sD_2_I = false;
	boolState[failI_OF_sD_2_I] = false;
	REINITIALISATION_OF_to_be_fired_OF_sD_2_I = false;
	boolState[already_standby_OF_sD_2_I] = false;
	boolState[already_required_OF_sD_2_I] = false;
	REINITIALISATION_OF_required_OF_sD_3 = true;
	boolState[already_S_OF_sD_3] = false;
	REINITIALISATION_OF_S_OF_sD_3 = false;
	REINITIALISATION_OF_relevant_evt_OF_sD_3 = false;
	boolState[failF_OF_sD_3] = false;
	REINITIALISATION_OF_required_OF_sD_3_I = true;
	boolState[already_S_OF_sD_3_I] = false;
	REINITIALISATION_OF_S_OF_sD_3_I = false;
	REINITIALISATION_OF_relevant_evt_OF_sD_3_I = false;
	boolState[failI_OF_sD_3_I] = false;
	REINITIALISATION_OF_to_be_fired_OF_sD_3_I = false;
	boolState[already_standby_OF_sD_3_I] = false;
	boolState[already_required_OF_sD_3_I] = false;
	REINITIALISATION_OF_required_OF_sD_4 = true;
	boolState[already_S_OF_sD_4] = false;
	REINITIALISATION_OF_S_OF_sD_4 = false;
	REINITIALISATION_OF_relevant_evt_OF_sD_4 = false;
	boolState[failF_OF_sD_4] = false;
	REINITIALISATION_OF_required_OF_sD_4_I = true;
	boolState[already_S_OF_sD_4_I] = false;
	REINITIALISATION_OF_S_OF_sD_4_I = false;
	REINITIALISATION_OF_relevant_evt_OF_sD_4_I = false;
	boolState[failI_OF_sD_4_I] = false;
	REINITIALISATION_OF_to_be_fired_OF_sD_4_I = false;
	boolState[already_standby_OF_sD_4_I] = false;
	boolState[already_required_OF_sD_4_I] = false;
	REINITIALISATION_OF_required_OF_sD_5 = true;
	boolState[already_S_OF_sD_5] = false;
	REINITIALISATION_OF_S_OF_sD_5 = false;
	REINITIALISATION_OF_relevant_evt_OF_sD_5 = false;
	boolState[failF_OF_sD_5] = false;
	REINITIALISATION_OF_required_OF_sD_5_I = true;
	boolState[already_S_OF_sD_5_I] = false;
	REINITIALISATION_OF_S_OF_sD_5_I = false;
	REINITIALISATION_OF_relevant_evt_OF_sD_5_I = false;
	boolState[failI_OF_sD_5_I] = false;
	REINITIALISATION_OF_to_be_fired_OF_sD_5_I = false;
	boolState[already_standby_OF_sD_5_I] = false;
	boolState[already_required_OF_sD_5_I] = false;
	REINITIALISATION_OF_required_OF_sensor_2 = true;
	boolState[already_S_OF_sensor_2] = false;
	REINITIALISATION_OF_S_OF_sensor_2 = false;
	REINITIALISATION_OF_relevant_evt_OF_sensor_2 = false;
	REINITIALISATION_OF_required_OF_sensor_3 = true;
	boolState[already_S_OF_sensor_3] = false;
	REINITIALISATION_OF_S_OF_sensor_3 = false;
	REINITIALISATION_OF_relevant_evt_OF_sensor_3 = false;
	REINITIALISATION_OF_required_OF_sensor_4 = true;
	boolState[already_S_OF_sensor_4] = false;
	REINITIALISATION_OF_S_OF_sensor_4 = false;
	REINITIALISATION_OF_relevant_evt_OF_sensor_4 = false;
	REINITIALISATION_OF_required_OF_sensor_5 = true;
	boolState[already_S_OF_sensor_5] = false;
	REINITIALISATION_OF_S_OF_sensor_5 = false;
	REINITIALISATION_OF_relevant_evt_OF_sensor_5 = false;
	REINITIALISATION_OF_required_OF_sensors = true;
	boolState[already_S_OF_sensors] = false;
	REINITIALISATION_OF_S_OF_sensors = false;
	REINITIALISATION_OF_relevant_evt_OF_sensors = false;
	REINITIALISATION_OF_required_OF_sw_1 = true;
	boolState[already_S_OF_sw_1] = false;
	REINITIALISATION_OF_S_OF_sw_1 = false;
	REINITIALISATION_OF_relevant_evt_OF_sw_1 = false;
	boolState[failF_OF_sw_1] = false;
	REINITIALISATION_OF_required_OF_sw_2 = true;
	boolState[already_S_OF_sw_2] = false;
	REINITIALISATION_OF_S_OF_sw_2 = false;
	REINITIALISATION_OF_relevant_evt_OF_sw_2 = false;
	boolState[failF_OF_sw_2] = false;
	REINITIALISATION_OF_required_OF_sw_3 = true;
	boolState[already_S_OF_sw_3] = false;
	REINITIALISATION_OF_S_OF_sw_3 = false;
	REINITIALISATION_OF_relevant_evt_OF_sw_3 = false;
	boolState[failF_OF_sw_3] = false;
	REINITIALISATION_OF_required_OF_sw_4 = true;
	boolState[already_S_OF_sw_4] = false;
	REINITIALISATION_OF_S_OF_sw_4 = false;
	REINITIALISATION_OF_relevant_evt_OF_sw_4 = false;
	boolState[failF_OF_sw_4] = false;
	REINITIALISATION_OF_required_OF_sw_5 = true;
	boolState[already_S_OF_sw_5] = false;
	REINITIALISATION_OF_S_OF_sw_5 = false;
	REINITIALISATION_OF_relevant_evt_OF_sw_5 = false;
	boolState[failF_OF_sw_5] = false;
	REINITIALISATION_OF_required_OF_switch_1 = true;
	boolState[already_S_OF_switch_1] = false;
	REINITIALISATION_OF_S_OF_switch_1 = false;
	REINITIALISATION_OF_relevant_evt_OF_switch_1 = false;
	REINITIALISATION_OF_required_OF_switch_2 = true;
	boolState[already_S_OF_switch_2] = false;
	REINITIALISATION_OF_S_OF_switch_2 = false;
	REINITIALISATION_OF_relevant_evt_OF_switch_2 = false;
	REINITIALISATION_OF_required_OF_switch_3 = true;
	boolState[already_S_OF_switch_3] = false;
	REINITIALISATION_OF_S_OF_switch_3 = false;
	REINITIALISATION_OF_relevant_evt_OF_switch_3 = false;
	REINITIALISATION_OF_required_OF_switch_4 = true;
	boolState[already_S_OF_switch_4] = false;
	REINITIALISATION_OF_S_OF_switch_4 = false;
	REINITIALISATION_OF_relevant_evt_OF_switch_4 = false;
	REINITIALISATION_OF_required_OF_switch_5 = true;
	boolState[already_S_OF_switch_5] = false;
	REINITIALISATION_OF_S_OF_switch_5 = false;
	REINITIALISATION_OF_relevant_evt_OF_switch_5 = false;

	/* ---------- DECLARATION OF OCCURRENCE RULES FIRING FLAGS ------------ */
	FIRE_xx10_OF_controller = false;
	FIRE_xx11_OF_controller = false;
	FIRE_xx10_OF_mp1 = false;
	FIRE_xx11_OF_mp1 = false;
	FIRE_xx10_OF_mp2 = false;
	FIRE_xx11_OF_mp2 = false;
	FIRE_xx10_OF_mp3 = false;
	FIRE_xx11_OF_mp3 = false;
	FIRE_xx10_OF_mp4 = false;
	FIRE_xx11_OF_mp4 = false;
	FIRE_xx10_OF_mp5 = false;
	FIRE_xx11_OF_mp5 = false;
	FIRE_xx10_OF_ms1 = false;
	FIRE_xx11_OF_ms1 = false;
	FIRE_xx10_OF_ms2 = false;
	FIRE_xx11_OF_ms2 = false;
	FIRE_xx10_OF_ms3 = false;
	FIRE_xx11_OF_ms3 = false;
	FIRE_xx10_OF_ms4 = false;
	FIRE_xx11_OF_ms4 = false;
	FIRE_xx10_OF_ms5 = false;
	FIRE_xx11_OF_ms5 = false;
	FIRE_xx10_OF_network_1 = false;
	FIRE_xx11_OF_network_1 = false;
	FIRE_xx10_OF_network_2 = false;
	FIRE_xx11_OF_network_2 = false;
	FIRE_xx10_OF_network_3 = false;
	FIRE_xx11_OF_network_3 = false;
	FIRE_xx10_OF_network_4 = false;
	FIRE_xx11_OF_network_4 = false;
	FIRE_xx10_OF_network_5 = false;
	FIRE_xx11_OF_network_5 = false;
	FIRE_xx10_OF_sA_1 = false;
	FIRE_xx11_OF_sA_1 = false;
	FIRE_xx23_OF_sA_1_I_INS_34 = false;
	FIRE_xx23_OF_sA_1_I_INS_35 = false;
	FIRE_xx24_OF_sA_1_I = false;
	FIRE_xx10_OF_sA_2 = false;
	FIRE_xx11_OF_sA_2 = false;
	FIRE_xx23_OF_sA_2_I_INS_39 = false;
	FIRE_xx23_OF_sA_2_I_INS_40 = false;
	FIRE_xx24_OF_sA_2_I = false;
	FIRE_xx10_OF_sA_3 = false;
	FIRE_xx11_OF_sA_3 = false;
	FIRE_xx23_OF_sA_3_I_INS_44 = false;
	FIRE_xx23_OF_sA_3_I_INS_45 = false;
	FIRE_xx24_OF_sA_3_I = false;
	FIRE_xx10_OF_sA_4 = false;
	FIRE_xx11_OF_sA_4 = false;
	FIRE_xx23_OF_sA_4_I_INS_49 = false;
	FIRE_xx23_OF_sA_4_I_INS_50 = false;
	FIRE_xx24_OF_sA_4_I = false;
	FIRE_xx10_OF_sA_5 = false;
	FIRE_xx11_OF_sA_5 = false;
	FIRE_xx23_OF_sA_5_I_INS_54 = false;
	FIRE_xx23_OF_sA_5_I_INS_55 = false;
	FIRE_xx24_OF_sA_5_I = false;
	FIRE_xx10_OF_sB_1 = false;
	FIRE_xx11_OF_sB_1 = false;
	FIRE_xx23_OF_sB_1_I_INS_59 = false;
	FIRE_xx23_OF_sB_1_I_INS_60 = false;
	FIRE_xx24_OF_sB_1_I = false;
	FIRE_xx10_OF_sB_2 = false;
	FIRE_xx11_OF_sB_2 = false;
	FIRE_xx23_OF_sB_2_I_INS_64 = false;
	FIRE_xx23_OF_sB_2_I_INS_65 = false;
	FIRE_xx24_OF_sB_2_I = false;
	FIRE_xx10_OF_sB_3 = false;
	FIRE_xx11_OF_sB_3 = false;
	FIRE_xx23_OF_sB_3_I_INS_69 = false;
	FIRE_xx23_OF_sB_3_I_INS_70 = false;
	FIRE_xx24_OF_sB_3_I = false;
	FIRE_xx10_OF_sB_4 = false;
	FIRE_xx11_OF_sB_4 = false;
	FIRE_xx23_OF_sB_4_I_INS_74 = false;
	FIRE_xx23_OF_sB_4_I_INS_75 = false;
	FIRE_xx24_OF_sB_4_I = false;
	FIRE_xx10_OF_sB_5 = false;
	FIRE_xx11_OF_sB_5 = false;
	FIRE_xx23_OF_sB_5_I_INS_79 = false;
	FIRE_xx23_OF_sB_5_I_INS_80 = false;
	FIRE_xx24_OF_sB_5_I = false;
	FIRE_xx10_OF_sC_1 = false;
	FIRE_xx11_OF_sC_1 = false;
	FIRE_xx23_OF_sC_1_I_INS_84 = false;
	FIRE_xx23_OF_sC_1_I_INS_85 = false;
	FIRE_xx24_OF_sC_1_I = false;
	FIRE_xx10_OF_sC_2 = false;
	FIRE_xx11_OF_sC_2 = false;
	FIRE_xx23_OF_sC_2_I_INS_89 = false;
	FIRE_xx23_OF_sC_2_I_INS_90 = false;
	FIRE_xx24_OF_sC_2_I = false;
	FIRE_xx10_OF_sC_3 = false;
	FIRE_xx11_OF_sC_3 = false;
	FIRE_xx23_OF_sC_3_I_INS_94 = false;
	FIRE_xx23_OF_sC_3_I_INS_95 = false;
	FIRE_xx24_OF_sC_3_I = false;
	FIRE_xx10_OF_sC_4 = false;
	FIRE_xx11_OF_sC_4 = false;
	FIRE_xx23_OF_sC_4_I_INS_99 = false;
	FIRE_xx23_OF_sC_4_I_INS_100 = false;
	FIRE_xx24_OF_sC_4_I = false;
	FIRE_xx10_OF_sC_5 = false;
	FIRE_xx11_OF_sC_5 = false;
	FIRE_xx23_OF_sC_5_I_INS_104 = false;
	FIRE_xx23_OF_sC_5_I_INS_105 = false;
	FIRE_xx24_OF_sC_5_I = false;
	FIRE_xx10_OF_sD_1 = false;
	FIRE_xx11_OF_sD_1 = false;
	FIRE_xx23_OF_sD_1_I_INS_109 = false;
	FIRE_xx23_OF_sD_1_I_INS_110 = false;
	FIRE_xx24_OF_sD_1_I = false;
	FIRE_xx10_OF_sD_2 = false;
	FIRE_xx11_OF_sD_2 = false;
	FIRE_xx23_OF_sD_2_I_INS_114 = false;
	FIRE_xx23_OF_sD_2_I_INS_115 = false;
	FIRE_xx24_OF_sD_2_I = false;
	FIRE_xx10_OF_sD_3 = false;
	FIRE_xx11_OF_sD_3 = false;
	FIRE_xx23_OF_sD_3_I_INS_119 = false;
	FIRE_xx23_OF_sD_3_I_INS_120 = false;
	FIRE_xx24_OF_sD_3_I = false;
	FIRE_xx10_OF_sD_4 = false;
	FIRE_xx11_OF_sD_4 = false;
	FIRE_xx23_OF_sD_4_I_INS_124 = false;
	FIRE_xx23_OF_sD_4_I_INS_125 = false;
	FIRE_xx24_OF_sD_4_I = false;
	FIRE_xx10_OF_sD_5 = false;
	FIRE_xx11_OF_sD_5 = false;
	FIRE_xx23_OF_sD_5_I_INS_129 = false;
	FIRE_xx23_OF_sD_5_I_INS_130 = false;
	FIRE_xx24_OF_sD_5_I = false;
	FIRE_xx10_OF_sw_1 = false;
	FIRE_xx11_OF_sw_1 = false;
	FIRE_xx10_OF_sw_2 = false;
	FIRE_xx11_OF_sw_2 = false;
	FIRE_xx10_OF_sw_3 = false;
	FIRE_xx11_OF_sw_3 = false;
	FIRE_xx10_OF_sw_4 = false;
	FIRE_xx11_OF_sw_4 = false;
	FIRE_xx10_OF_sw_5 = false;
	FIRE_xx11_OF_sw_5 = false;

}

void storm::figaro::FigaroProgram_rc_5_5_Trim_repair::saveCurrentState()
{
	// cout <<">>>>>>>>>>>>>>>>>>>> Saving current state  <<<<<<<<<<<<<<<<<<<<<<<" << endl;
	backupBoolState = boolState ;
	backupFloatState = floatState ;
	backupIntState = intState ;
	backupEnumState = enumState ;
}

int storm::figaro::FigaroProgram_rc_5_5_Trim_repair::compareStates()
{
	// cout <<">>>>>>>>>>>>>>>>>>>> Comparing state with previous one (return number of differences) <<<<<<<<<<<<<<<<<<<<<<<" << endl;

	return (backupBoolState != boolState) + (backupFloatState != floatState) + (backupIntState != intState) + (backupEnumState != enumState); 
}

void storm::figaro::FigaroProgram_rc_5_5_Trim_repair::printState()
{
	//cout <<"\n==================== Print of the current state :  ====================" << endl;

	//cout << "Attribute :  boolState[required_OF_System] | Value : " << boolState[required_OF_System] << endl;
	//cout << "Attribute :  boolState[already_S_OF_System] | Value : " << boolState[already_S_OF_System] << endl;
	//cout << "Attribute :  boolState[S_OF_System] | Value : " << boolState[S_OF_System] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_System] | Value : " << boolState[relevant_evt_OF_System] << endl;
	//cout << "Attribute :  boolState[required_OF_UE_1] | Value : " << boolState[required_OF_UE_1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_UE_1] | Value : " << boolState[already_S_OF_UE_1] << endl;
	//cout << "Attribute :  boolState[S_OF_UE_1] | Value : " << boolState[S_OF_UE_1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_UE_1] | Value : " << boolState[relevant_evt_OF_UE_1] << endl;
	//cout << "Attribute :  boolState[required_OF__SA_1] | Value : " << boolState[required_OF__SA_1] << endl;
	//cout << "Attribute :  boolState[already_S_OF__SA_1] | Value : " << boolState[already_S_OF__SA_1] << endl;
	//cout << "Attribute :  boolState[S_OF__SA_1] | Value : " << boolState[S_OF__SA_1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF__SA_1] | Value : " << boolState[relevant_evt_OF__SA_1] << endl;
	//cout << "Attribute :  boolState[required_OF__SA_2] | Value : " << boolState[required_OF__SA_2] << endl;
	//cout << "Attribute :  boolState[already_S_OF__SA_2] | Value : " << boolState[already_S_OF__SA_2] << endl;
	//cout << "Attribute :  boolState[S_OF__SA_2] | Value : " << boolState[S_OF__SA_2] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF__SA_2] | Value : " << boolState[relevant_evt_OF__SA_2] << endl;
	//cout << "Attribute :  boolState[required_OF__SA_3] | Value : " << boolState[required_OF__SA_3] << endl;
	//cout << "Attribute :  boolState[already_S_OF__SA_3] | Value : " << boolState[already_S_OF__SA_3] << endl;
	//cout << "Attribute :  boolState[S_OF__SA_3] | Value : " << boolState[S_OF__SA_3] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF__SA_3] | Value : " << boolState[relevant_evt_OF__SA_3] << endl;
	//cout << "Attribute :  boolState[required_OF__SA_4] | Value : " << boolState[required_OF__SA_4] << endl;
	//cout << "Attribute :  boolState[already_S_OF__SA_4] | Value : " << boolState[already_S_OF__SA_4] << endl;
	//cout << "Attribute :  boolState[S_OF__SA_4] | Value : " << boolState[S_OF__SA_4] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF__SA_4] | Value : " << boolState[relevant_evt_OF__SA_4] << endl;
	//cout << "Attribute :  boolState[required_OF__SA_5] | Value : " << boolState[required_OF__SA_5] << endl;
	//cout << "Attribute :  boolState[already_S_OF__SA_5] | Value : " << boolState[already_S_OF__SA_5] << endl;
	//cout << "Attribute :  boolState[S_OF__SA_5] | Value : " << boolState[S_OF__SA_5] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF__SA_5] | Value : " << boolState[relevant_evt_OF__SA_5] << endl;
	//cout << "Attribute :  boolState[required_OF__SB_1] | Value : " << boolState[required_OF__SB_1] << endl;
	//cout << "Attribute :  boolState[already_S_OF__SB_1] | Value : " << boolState[already_S_OF__SB_1] << endl;
	//cout << "Attribute :  boolState[S_OF__SB_1] | Value : " << boolState[S_OF__SB_1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF__SB_1] | Value : " << boolState[relevant_evt_OF__SB_1] << endl;
	//cout << "Attribute :  boolState[required_OF__SB_2] | Value : " << boolState[required_OF__SB_2] << endl;
	//cout << "Attribute :  boolState[already_S_OF__SB_2] | Value : " << boolState[already_S_OF__SB_2] << endl;
	//cout << "Attribute :  boolState[S_OF__SB_2] | Value : " << boolState[S_OF__SB_2] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF__SB_2] | Value : " << boolState[relevant_evt_OF__SB_2] << endl;
	//cout << "Attribute :  boolState[required_OF__SB_3] | Value : " << boolState[required_OF__SB_3] << endl;
	//cout << "Attribute :  boolState[already_S_OF__SB_3] | Value : " << boolState[already_S_OF__SB_3] << endl;
	//cout << "Attribute :  boolState[S_OF__SB_3] | Value : " << boolState[S_OF__SB_3] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF__SB_3] | Value : " << boolState[relevant_evt_OF__SB_3] << endl;
	//cout << "Attribute :  boolState[required_OF__SB_4] | Value : " << boolState[required_OF__SB_4] << endl;
	//cout << "Attribute :  boolState[already_S_OF__SB_4] | Value : " << boolState[already_S_OF__SB_4] << endl;
	//cout << "Attribute :  boolState[S_OF__SB_4] | Value : " << boolState[S_OF__SB_4] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF__SB_4] | Value : " << boolState[relevant_evt_OF__SB_4] << endl;
	//cout << "Attribute :  boolState[required_OF__SB_5] | Value : " << boolState[required_OF__SB_5] << endl;
	//cout << "Attribute :  boolState[already_S_OF__SB_5] | Value : " << boolState[already_S_OF__SB_5] << endl;
	//cout << "Attribute :  boolState[S_OF__SB_5] | Value : " << boolState[S_OF__SB_5] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF__SB_5] | Value : " << boolState[relevant_evt_OF__SB_5] << endl;
	//cout << "Attribute :  boolState[required_OF__SC_1] | Value : " << boolState[required_OF__SC_1] << endl;
	//cout << "Attribute :  boolState[already_S_OF__SC_1] | Value : " << boolState[already_S_OF__SC_1] << endl;
	//cout << "Attribute :  boolState[S_OF__SC_1] | Value : " << boolState[S_OF__SC_1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF__SC_1] | Value : " << boolState[relevant_evt_OF__SC_1] << endl;
	//cout << "Attribute :  boolState[required_OF__SC_2] | Value : " << boolState[required_OF__SC_2] << endl;
	//cout << "Attribute :  boolState[already_S_OF__SC_2] | Value : " << boolState[already_S_OF__SC_2] << endl;
	//cout << "Attribute :  boolState[S_OF__SC_2] | Value : " << boolState[S_OF__SC_2] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF__SC_2] | Value : " << boolState[relevant_evt_OF__SC_2] << endl;
	//cout << "Attribute :  boolState[required_OF__SC_3] | Value : " << boolState[required_OF__SC_3] << endl;
	//cout << "Attribute :  boolState[already_S_OF__SC_3] | Value : " << boolState[already_S_OF__SC_3] << endl;
	//cout << "Attribute :  boolState[S_OF__SC_3] | Value : " << boolState[S_OF__SC_3] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF__SC_3] | Value : " << boolState[relevant_evt_OF__SC_3] << endl;
	//cout << "Attribute :  boolState[required_OF__SC_4] | Value : " << boolState[required_OF__SC_4] << endl;
	//cout << "Attribute :  boolState[already_S_OF__SC_4] | Value : " << boolState[already_S_OF__SC_4] << endl;
	//cout << "Attribute :  boolState[S_OF__SC_4] | Value : " << boolState[S_OF__SC_4] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF__SC_4] | Value : " << boolState[relevant_evt_OF__SC_4] << endl;
	//cout << "Attribute :  boolState[required_OF__SC_5] | Value : " << boolState[required_OF__SC_5] << endl;
	//cout << "Attribute :  boolState[already_S_OF__SC_5] | Value : " << boolState[already_S_OF__SC_5] << endl;
	//cout << "Attribute :  boolState[S_OF__SC_5] | Value : " << boolState[S_OF__SC_5] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF__SC_5] | Value : " << boolState[relevant_evt_OF__SC_5] << endl;
	//cout << "Attribute :  boolState[required_OF__SD_1] | Value : " << boolState[required_OF__SD_1] << endl;
	//cout << "Attribute :  boolState[already_S_OF__SD_1] | Value : " << boolState[already_S_OF__SD_1] << endl;
	//cout << "Attribute :  boolState[S_OF__SD_1] | Value : " << boolState[S_OF__SD_1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF__SD_1] | Value : " << boolState[relevant_evt_OF__SD_1] << endl;
	//cout << "Attribute :  boolState[required_OF__SD_2] | Value : " << boolState[required_OF__SD_2] << endl;
	//cout << "Attribute :  boolState[already_S_OF__SD_2] | Value : " << boolState[already_S_OF__SD_2] << endl;
	//cout << "Attribute :  boolState[S_OF__SD_2] | Value : " << boolState[S_OF__SD_2] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF__SD_2] | Value : " << boolState[relevant_evt_OF__SD_2] << endl;
	//cout << "Attribute :  boolState[required_OF__SD_3] | Value : " << boolState[required_OF__SD_3] << endl;
	//cout << "Attribute :  boolState[already_S_OF__SD_3] | Value : " << boolState[already_S_OF__SD_3] << endl;
	//cout << "Attribute :  boolState[S_OF__SD_3] | Value : " << boolState[S_OF__SD_3] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF__SD_3] | Value : " << boolState[relevant_evt_OF__SD_3] << endl;
	//cout << "Attribute :  boolState[required_OF__SD_4] | Value : " << boolState[required_OF__SD_4] << endl;
	//cout << "Attribute :  boolState[already_S_OF__SD_4] | Value : " << boolState[already_S_OF__SD_4] << endl;
	//cout << "Attribute :  boolState[S_OF__SD_4] | Value : " << boolState[S_OF__SD_4] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF__SD_4] | Value : " << boolState[relevant_evt_OF__SD_4] << endl;
	//cout << "Attribute :  boolState[required_OF__SD_5] | Value : " << boolState[required_OF__SD_5] << endl;
	//cout << "Attribute :  boolState[already_S_OF__SD_5] | Value : " << boolState[already_S_OF__SD_5] << endl;
	//cout << "Attribute :  boolState[S_OF__SD_5] | Value : " << boolState[S_OF__SD_5] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF__SD_5] | Value : " << boolState[relevant_evt_OF__SD_5] << endl;
	//cout << "Attribute :  boolState[required_OF_barrier_1] | Value : " << boolState[required_OF_barrier_1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_barrier_1] | Value : " << boolState[already_S_OF_barrier_1] << endl;
	//cout << "Attribute :  boolState[S_OF_barrier_1] | Value : " << boolState[S_OF_barrier_1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_barrier_1] | Value : " << boolState[relevant_evt_OF_barrier_1] << endl;
	//cout << "Attribute :  boolState[required_OF_barrier_2] | Value : " << boolState[required_OF_barrier_2] << endl;
	//cout << "Attribute :  boolState[already_S_OF_barrier_2] | Value : " << boolState[already_S_OF_barrier_2] << endl;
	//cout << "Attribute :  boolState[S_OF_barrier_2] | Value : " << boolState[S_OF_barrier_2] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_barrier_2] | Value : " << boolState[relevant_evt_OF_barrier_2] << endl;
	//cout << "Attribute :  boolState[required_OF_barrier_3] | Value : " << boolState[required_OF_barrier_3] << endl;
	//cout << "Attribute :  boolState[already_S_OF_barrier_3] | Value : " << boolState[already_S_OF_barrier_3] << endl;
	//cout << "Attribute :  boolState[S_OF_barrier_3] | Value : " << boolState[S_OF_barrier_3] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_barrier_3] | Value : " << boolState[relevant_evt_OF_barrier_3] << endl;
	//cout << "Attribute :  boolState[required_OF_barrier_4] | Value : " << boolState[required_OF_barrier_4] << endl;
	//cout << "Attribute :  boolState[already_S_OF_barrier_4] | Value : " << boolState[already_S_OF_barrier_4] << endl;
	//cout << "Attribute :  boolState[S_OF_barrier_4] | Value : " << boolState[S_OF_barrier_4] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_barrier_4] | Value : " << boolState[relevant_evt_OF_barrier_4] << endl;
	//cout << "Attribute :  boolState[required_OF_barrier_5] | Value : " << boolState[required_OF_barrier_5] << endl;
	//cout << "Attribute :  boolState[already_S_OF_barrier_5] | Value : " << boolState[already_S_OF_barrier_5] << endl;
	//cout << "Attribute :  boolState[S_OF_barrier_5] | Value : " << boolState[S_OF_barrier_5] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_barrier_5] | Value : " << boolState[relevant_evt_OF_barrier_5] << endl;
	//cout << "Attribute :  boolState[required_OF_barriers] | Value : " << boolState[required_OF_barriers] << endl;
	//cout << "Attribute :  boolState[already_S_OF_barriers] | Value : " << boolState[already_S_OF_barriers] << endl;
	//cout << "Attribute :  boolState[S_OF_barriers] | Value : " << boolState[S_OF_barriers] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_barriers] | Value : " << boolState[relevant_evt_OF_barriers] << endl;
	//cout << "Attribute :  boolState[required_OF_controller] | Value : " << boolState[required_OF_controller] << endl;
	//cout << "Attribute :  boolState[already_S_OF_controller] | Value : " << boolState[already_S_OF_controller] << endl;
	//cout << "Attribute :  boolState[S_OF_controller] | Value : " << boolState[S_OF_controller] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_controller] | Value : " << boolState[relevant_evt_OF_controller] << endl;
	//cout << "Attribute :  boolState[failF_OF_controller] | Value : " << boolState[failF_OF_controller] << endl;
	//cout << "Attribute :  boolState[required_OF_motor_1] | Value : " << boolState[required_OF_motor_1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_motor_1] | Value : " << boolState[already_S_OF_motor_1] << endl;
	//cout << "Attribute :  boolState[S_OF_motor_1] | Value : " << boolState[S_OF_motor_1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_motor_1] | Value : " << boolState[relevant_evt_OF_motor_1] << endl;
	//cout << "Attribute :  boolState[required_OF_motor_2] | Value : " << boolState[required_OF_motor_2] << endl;
	//cout << "Attribute :  boolState[already_S_OF_motor_2] | Value : " << boolState[already_S_OF_motor_2] << endl;
	//cout << "Attribute :  boolState[S_OF_motor_2] | Value : " << boolState[S_OF_motor_2] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_motor_2] | Value : " << boolState[relevant_evt_OF_motor_2] << endl;
	//cout << "Attribute :  boolState[required_OF_motor_3] | Value : " << boolState[required_OF_motor_3] << endl;
	//cout << "Attribute :  boolState[already_S_OF_motor_3] | Value : " << boolState[already_S_OF_motor_3] << endl;
	//cout << "Attribute :  boolState[S_OF_motor_3] | Value : " << boolState[S_OF_motor_3] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_motor_3] | Value : " << boolState[relevant_evt_OF_motor_3] << endl;
	//cout << "Attribute :  boolState[required_OF_motor_4] | Value : " << boolState[required_OF_motor_4] << endl;
	//cout << "Attribute :  boolState[already_S_OF_motor_4] | Value : " << boolState[already_S_OF_motor_4] << endl;
	//cout << "Attribute :  boolState[S_OF_motor_4] | Value : " << boolState[S_OF_motor_4] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_motor_4] | Value : " << boolState[relevant_evt_OF_motor_4] << endl;
	//cout << "Attribute :  boolState[required_OF_motor_5] | Value : " << boolState[required_OF_motor_5] << endl;
	//cout << "Attribute :  boolState[already_S_OF_motor_5] | Value : " << boolState[already_S_OF_motor_5] << endl;
	//cout << "Attribute :  boolState[S_OF_motor_5] | Value : " << boolState[S_OF_motor_5] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_motor_5] | Value : " << boolState[relevant_evt_OF_motor_5] << endl;
	//cout << "Attribute :  boolState[required_OF_mp1] | Value : " << boolState[required_OF_mp1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_mp1] | Value : " << boolState[already_S_OF_mp1] << endl;
	//cout << "Attribute :  boolState[S_OF_mp1] | Value : " << boolState[S_OF_mp1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_mp1] | Value : " << boolState[relevant_evt_OF_mp1] << endl;
	//cout << "Attribute :  boolState[failF_OF_mp1] | Value : " << boolState[failF_OF_mp1] << endl;
	//cout << "Attribute :  boolState[required_OF_mp2] | Value : " << boolState[required_OF_mp2] << endl;
	//cout << "Attribute :  boolState[already_S_OF_mp2] | Value : " << boolState[already_S_OF_mp2] << endl;
	//cout << "Attribute :  boolState[S_OF_mp2] | Value : " << boolState[S_OF_mp2] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_mp2] | Value : " << boolState[relevant_evt_OF_mp2] << endl;
	//cout << "Attribute :  boolState[failF_OF_mp2] | Value : " << boolState[failF_OF_mp2] << endl;
	//cout << "Attribute :  boolState[required_OF_mp3] | Value : " << boolState[required_OF_mp3] << endl;
	//cout << "Attribute :  boolState[already_S_OF_mp3] | Value : " << boolState[already_S_OF_mp3] << endl;
	//cout << "Attribute :  boolState[S_OF_mp3] | Value : " << boolState[S_OF_mp3] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_mp3] | Value : " << boolState[relevant_evt_OF_mp3] << endl;
	//cout << "Attribute :  boolState[failF_OF_mp3] | Value : " << boolState[failF_OF_mp3] << endl;
	//cout << "Attribute :  boolState[required_OF_mp4] | Value : " << boolState[required_OF_mp4] << endl;
	//cout << "Attribute :  boolState[already_S_OF_mp4] | Value : " << boolState[already_S_OF_mp4] << endl;
	//cout << "Attribute :  boolState[S_OF_mp4] | Value : " << boolState[S_OF_mp4] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_mp4] | Value : " << boolState[relevant_evt_OF_mp4] << endl;
	//cout << "Attribute :  boolState[failF_OF_mp4] | Value : " << boolState[failF_OF_mp4] << endl;
	//cout << "Attribute :  boolState[required_OF_mp5] | Value : " << boolState[required_OF_mp5] << endl;
	//cout << "Attribute :  boolState[already_S_OF_mp5] | Value : " << boolState[already_S_OF_mp5] << endl;
	//cout << "Attribute :  boolState[S_OF_mp5] | Value : " << boolState[S_OF_mp5] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_mp5] | Value : " << boolState[relevant_evt_OF_mp5] << endl;
	//cout << "Attribute :  boolState[failF_OF_mp5] | Value : " << boolState[failF_OF_mp5] << endl;
	//cout << "Attribute :  boolState[required_OF_sensor_1] | Value : " << boolState[required_OF_sensor_1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_sensor_1] | Value : " << boolState[already_S_OF_sensor_1] << endl;
	//cout << "Attribute :  boolState[S_OF_sensor_1] | Value : " << boolState[S_OF_sensor_1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_sensor_1] | Value : " << boolState[relevant_evt_OF_sensor_1] << endl;
	//cout << "Attribute :  boolState[required_OF_ms1] | Value : " << boolState[required_OF_ms1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_ms1] | Value : " << boolState[already_S_OF_ms1] << endl;
	//cout << "Attribute :  boolState[S_OF_ms1] | Value : " << boolState[S_OF_ms1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_ms1] | Value : " << boolState[relevant_evt_OF_ms1] << endl;
	//cout << "Attribute :  boolState[failF_OF_ms1] | Value : " << boolState[failF_OF_ms1] << endl;
	//cout << "Attribute :  boolState[required_OF_ms2] | Value : " << boolState[required_OF_ms2] << endl;
	//cout << "Attribute :  boolState[already_S_OF_ms2] | Value : " << boolState[already_S_OF_ms2] << endl;
	//cout << "Attribute :  boolState[S_OF_ms2] | Value : " << boolState[S_OF_ms2] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_ms2] | Value : " << boolState[relevant_evt_OF_ms2] << endl;
	//cout << "Attribute :  boolState[failF_OF_ms2] | Value : " << boolState[failF_OF_ms2] << endl;
	//cout << "Attribute :  boolState[required_OF_ms3] | Value : " << boolState[required_OF_ms3] << endl;
	//cout << "Attribute :  boolState[already_S_OF_ms3] | Value : " << boolState[already_S_OF_ms3] << endl;
	//cout << "Attribute :  boolState[S_OF_ms3] | Value : " << boolState[S_OF_ms3] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_ms3] | Value : " << boolState[relevant_evt_OF_ms3] << endl;
	//cout << "Attribute :  boolState[failF_OF_ms3] | Value : " << boolState[failF_OF_ms3] << endl;
	//cout << "Attribute :  boolState[required_OF_ms4] | Value : " << boolState[required_OF_ms4] << endl;
	//cout << "Attribute :  boolState[already_S_OF_ms4] | Value : " << boolState[already_S_OF_ms4] << endl;
	//cout << "Attribute :  boolState[S_OF_ms4] | Value : " << boolState[S_OF_ms4] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_ms4] | Value : " << boolState[relevant_evt_OF_ms4] << endl;
	//cout << "Attribute :  boolState[failF_OF_ms4] | Value : " << boolState[failF_OF_ms4] << endl;
	//cout << "Attribute :  boolState[required_OF_ms5] | Value : " << boolState[required_OF_ms5] << endl;
	//cout << "Attribute :  boolState[already_S_OF_ms5] | Value : " << boolState[already_S_OF_ms5] << endl;
	//cout << "Attribute :  boolState[S_OF_ms5] | Value : " << boolState[S_OF_ms5] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_ms5] | Value : " << boolState[relevant_evt_OF_ms5] << endl;
	//cout << "Attribute :  boolState[failF_OF_ms5] | Value : " << boolState[failF_OF_ms5] << endl;
	//cout << "Attribute :  boolState[required_OF_network_1] | Value : " << boolState[required_OF_network_1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_network_1] | Value : " << boolState[already_S_OF_network_1] << endl;
	//cout << "Attribute :  boolState[S_OF_network_1] | Value : " << boolState[S_OF_network_1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_network_1] | Value : " << boolState[relevant_evt_OF_network_1] << endl;
	//cout << "Attribute :  boolState[failF_OF_network_1] | Value : " << boolState[failF_OF_network_1] << endl;
	//cout << "Attribute :  boolState[required_OF_network_2] | Value : " << boolState[required_OF_network_2] << endl;
	//cout << "Attribute :  boolState[already_S_OF_network_2] | Value : " << boolState[already_S_OF_network_2] << endl;
	//cout << "Attribute :  boolState[S_OF_network_2] | Value : " << boolState[S_OF_network_2] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_network_2] | Value : " << boolState[relevant_evt_OF_network_2] << endl;
	//cout << "Attribute :  boolState[failF_OF_network_2] | Value : " << boolState[failF_OF_network_2] << endl;
	//cout << "Attribute :  boolState[required_OF_network_3] | Value : " << boolState[required_OF_network_3] << endl;
	//cout << "Attribute :  boolState[already_S_OF_network_3] | Value : " << boolState[already_S_OF_network_3] << endl;
	//cout << "Attribute :  boolState[S_OF_network_3] | Value : " << boolState[S_OF_network_3] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_network_3] | Value : " << boolState[relevant_evt_OF_network_3] << endl;
	//cout << "Attribute :  boolState[failF_OF_network_3] | Value : " << boolState[failF_OF_network_3] << endl;
	//cout << "Attribute :  boolState[required_OF_network_4] | Value : " << boolState[required_OF_network_4] << endl;
	//cout << "Attribute :  boolState[already_S_OF_network_4] | Value : " << boolState[already_S_OF_network_4] << endl;
	//cout << "Attribute :  boolState[S_OF_network_4] | Value : " << boolState[S_OF_network_4] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_network_4] | Value : " << boolState[relevant_evt_OF_network_4] << endl;
	//cout << "Attribute :  boolState[failF_OF_network_4] | Value : " << boolState[failF_OF_network_4] << endl;
	//cout << "Attribute :  boolState[required_OF_network_5] | Value : " << boolState[required_OF_network_5] << endl;
	//cout << "Attribute :  boolState[already_S_OF_network_5] | Value : " << boolState[already_S_OF_network_5] << endl;
	//cout << "Attribute :  boolState[S_OF_network_5] | Value : " << boolState[S_OF_network_5] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_network_5] | Value : " << boolState[relevant_evt_OF_network_5] << endl;
	//cout << "Attribute :  boolState[failF_OF_network_5] | Value : " << boolState[failF_OF_network_5] << endl;
	//cout << "Attribute :  boolState[required_OF_sA_1] | Value : " << boolState[required_OF_sA_1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_sA_1] | Value : " << boolState[already_S_OF_sA_1] << endl;
	//cout << "Attribute :  boolState[S_OF_sA_1] | Value : " << boolState[S_OF_sA_1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_sA_1] | Value : " << boolState[relevant_evt_OF_sA_1] << endl;
	//cout << "Attribute :  boolState[failF_OF_sA_1] | Value : " << boolState[failF_OF_sA_1] << endl;
	//cout << "Attribute :  boolState[required_OF_sA_1_I] | Value : " << boolState[required_OF_sA_1_I] << endl;
	//cout << "Attribute :  boolState[already_S_OF_sA_1_I] | Value : " << boolState[already_S_OF_sA_1_I] << endl;
	//cout << "Attribute :  boolState[S_OF_sA_1_I] | Value : " << boolState[S_OF_sA_1_I] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_sA_1_I] | Value : " << boolState[relevant_evt_OF_sA_1_I] << endl;
	//cout << "Attribute :  boolState[failI_OF_sA_1_I] | Value : " << boolState[failI_OF_sA_1_I] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_sA_1_I] | Value : " << boolState[to_be_fired_OF_sA_1_I] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_sA_1_I] | Value : " << boolState[already_standby_OF_sA_1_I] << endl;
	//cout << "Attribute :  boolState[already_required_OF_sA_1_I] | Value : " << boolState[already_required_OF_sA_1_I] << endl;
	//cout << "Attribute :  boolState[required_OF_sA_2] | Value : " << boolState[required_OF_sA_2] << endl;
	//cout << "Attribute :  boolState[already_S_OF_sA_2] | Value : " << boolState[already_S_OF_sA_2] << endl;
	//cout << "Attribute :  boolState[S_OF_sA_2] | Value : " << boolState[S_OF_sA_2] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_sA_2] | Value : " << boolState[relevant_evt_OF_sA_2] << endl;
	//cout << "Attribute :  boolState[failF_OF_sA_2] | Value : " << boolState[failF_OF_sA_2] << endl;
	//cout << "Attribute :  boolState[required_OF_sA_2_I] | Value : " << boolState[required_OF_sA_2_I] << endl;
	//cout << "Attribute :  boolState[already_S_OF_sA_2_I] | Value : " << boolState[already_S_OF_sA_2_I] << endl;
	//cout << "Attribute :  boolState[S_OF_sA_2_I] | Value : " << boolState[S_OF_sA_2_I] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_sA_2_I] | Value : " << boolState[relevant_evt_OF_sA_2_I] << endl;
	//cout << "Attribute :  boolState[failI_OF_sA_2_I] | Value : " << boolState[failI_OF_sA_2_I] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_sA_2_I] | Value : " << boolState[to_be_fired_OF_sA_2_I] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_sA_2_I] | Value : " << boolState[already_standby_OF_sA_2_I] << endl;
	//cout << "Attribute :  boolState[already_required_OF_sA_2_I] | Value : " << boolState[already_required_OF_sA_2_I] << endl;
	//cout << "Attribute :  boolState[required_OF_sA_3] | Value : " << boolState[required_OF_sA_3] << endl;
	//cout << "Attribute :  boolState[already_S_OF_sA_3] | Value : " << boolState[already_S_OF_sA_3] << endl;
	//cout << "Attribute :  boolState[S_OF_sA_3] | Value : " << boolState[S_OF_sA_3] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_sA_3] | Value : " << boolState[relevant_evt_OF_sA_3] << endl;
	//cout << "Attribute :  boolState[failF_OF_sA_3] | Value : " << boolState[failF_OF_sA_3] << endl;
	//cout << "Attribute :  boolState[required_OF_sA_3_I] | Value : " << boolState[required_OF_sA_3_I] << endl;
	//cout << "Attribute :  boolState[already_S_OF_sA_3_I] | Value : " << boolState[already_S_OF_sA_3_I] << endl;
	//cout << "Attribute :  boolState[S_OF_sA_3_I] | Value : " << boolState[S_OF_sA_3_I] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_sA_3_I] | Value : " << boolState[relevant_evt_OF_sA_3_I] << endl;
	//cout << "Attribute :  boolState[failI_OF_sA_3_I] | Value : " << boolState[failI_OF_sA_3_I] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_sA_3_I] | Value : " << boolState[to_be_fired_OF_sA_3_I] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_sA_3_I] | Value : " << boolState[already_standby_OF_sA_3_I] << endl;
	//cout << "Attribute :  boolState[already_required_OF_sA_3_I] | Value : " << boolState[already_required_OF_sA_3_I] << endl;
	//cout << "Attribute :  boolState[required_OF_sA_4] | Value : " << boolState[required_OF_sA_4] << endl;
	//cout << "Attribute :  boolState[already_S_OF_sA_4] | Value : " << boolState[already_S_OF_sA_4] << endl;
	//cout << "Attribute :  boolState[S_OF_sA_4] | Value : " << boolState[S_OF_sA_4] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_sA_4] | Value : " << boolState[relevant_evt_OF_sA_4] << endl;
	//cout << "Attribute :  boolState[failF_OF_sA_4] | Value : " << boolState[failF_OF_sA_4] << endl;
	//cout << "Attribute :  boolState[required_OF_sA_4_I] | Value : " << boolState[required_OF_sA_4_I] << endl;
	//cout << "Attribute :  boolState[already_S_OF_sA_4_I] | Value : " << boolState[already_S_OF_sA_4_I] << endl;
	//cout << "Attribute :  boolState[S_OF_sA_4_I] | Value : " << boolState[S_OF_sA_4_I] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_sA_4_I] | Value : " << boolState[relevant_evt_OF_sA_4_I] << endl;
	//cout << "Attribute :  boolState[failI_OF_sA_4_I] | Value : " << boolState[failI_OF_sA_4_I] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_sA_4_I] | Value : " << boolState[to_be_fired_OF_sA_4_I] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_sA_4_I] | Value : " << boolState[already_standby_OF_sA_4_I] << endl;
	//cout << "Attribute :  boolState[already_required_OF_sA_4_I] | Value : " << boolState[already_required_OF_sA_4_I] << endl;
	//cout << "Attribute :  boolState[required_OF_sA_5] | Value : " << boolState[required_OF_sA_5] << endl;
	//cout << "Attribute :  boolState[already_S_OF_sA_5] | Value : " << boolState[already_S_OF_sA_5] << endl;
	//cout << "Attribute :  boolState[S_OF_sA_5] | Value : " << boolState[S_OF_sA_5] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_sA_5] | Value : " << boolState[relevant_evt_OF_sA_5] << endl;
	//cout << "Attribute :  boolState[failF_OF_sA_5] | Value : " << boolState[failF_OF_sA_5] << endl;
	//cout << "Attribute :  boolState[required_OF_sA_5_I] | Value : " << boolState[required_OF_sA_5_I] << endl;
	//cout << "Attribute :  boolState[already_S_OF_sA_5_I] | Value : " << boolState[already_S_OF_sA_5_I] << endl;
	//cout << "Attribute :  boolState[S_OF_sA_5_I] | Value : " << boolState[S_OF_sA_5_I] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_sA_5_I] | Value : " << boolState[relevant_evt_OF_sA_5_I] << endl;
	//cout << "Attribute :  boolState[failI_OF_sA_5_I] | Value : " << boolState[failI_OF_sA_5_I] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_sA_5_I] | Value : " << boolState[to_be_fired_OF_sA_5_I] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_sA_5_I] | Value : " << boolState[already_standby_OF_sA_5_I] << endl;
	//cout << "Attribute :  boolState[already_required_OF_sA_5_I] | Value : " << boolState[already_required_OF_sA_5_I] << endl;
	//cout << "Attribute :  boolState[required_OF_sB_1] | Value : " << boolState[required_OF_sB_1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_sB_1] | Value : " << boolState[already_S_OF_sB_1] << endl;
	//cout << "Attribute :  boolState[S_OF_sB_1] | Value : " << boolState[S_OF_sB_1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_sB_1] | Value : " << boolState[relevant_evt_OF_sB_1] << endl;
	//cout << "Attribute :  boolState[failF_OF_sB_1] | Value : " << boolState[failF_OF_sB_1] << endl;
	//cout << "Attribute :  boolState[required_OF_sB_1_I] | Value : " << boolState[required_OF_sB_1_I] << endl;
	//cout << "Attribute :  boolState[already_S_OF_sB_1_I] | Value : " << boolState[already_S_OF_sB_1_I] << endl;
	//cout << "Attribute :  boolState[S_OF_sB_1_I] | Value : " << boolState[S_OF_sB_1_I] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_sB_1_I] | Value : " << boolState[relevant_evt_OF_sB_1_I] << endl;
	//cout << "Attribute :  boolState[failI_OF_sB_1_I] | Value : " << boolState[failI_OF_sB_1_I] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_sB_1_I] | Value : " << boolState[to_be_fired_OF_sB_1_I] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_sB_1_I] | Value : " << boolState[already_standby_OF_sB_1_I] << endl;
	//cout << "Attribute :  boolState[already_required_OF_sB_1_I] | Value : " << boolState[already_required_OF_sB_1_I] << endl;
	//cout << "Attribute :  boolState[required_OF_sB_2] | Value : " << boolState[required_OF_sB_2] << endl;
	//cout << "Attribute :  boolState[already_S_OF_sB_2] | Value : " << boolState[already_S_OF_sB_2] << endl;
	//cout << "Attribute :  boolState[S_OF_sB_2] | Value : " << boolState[S_OF_sB_2] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_sB_2] | Value : " << boolState[relevant_evt_OF_sB_2] << endl;
	//cout << "Attribute :  boolState[failF_OF_sB_2] | Value : " << boolState[failF_OF_sB_2] << endl;
	//cout << "Attribute :  boolState[required_OF_sB_2_I] | Value : " << boolState[required_OF_sB_2_I] << endl;
	//cout << "Attribute :  boolState[already_S_OF_sB_2_I] | Value : " << boolState[already_S_OF_sB_2_I] << endl;
	//cout << "Attribute :  boolState[S_OF_sB_2_I] | Value : " << boolState[S_OF_sB_2_I] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_sB_2_I] | Value : " << boolState[relevant_evt_OF_sB_2_I] << endl;
	//cout << "Attribute :  boolState[failI_OF_sB_2_I] | Value : " << boolState[failI_OF_sB_2_I] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_sB_2_I] | Value : " << boolState[to_be_fired_OF_sB_2_I] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_sB_2_I] | Value : " << boolState[already_standby_OF_sB_2_I] << endl;
	//cout << "Attribute :  boolState[already_required_OF_sB_2_I] | Value : " << boolState[already_required_OF_sB_2_I] << endl;
	//cout << "Attribute :  boolState[required_OF_sB_3] | Value : " << boolState[required_OF_sB_3] << endl;
	//cout << "Attribute :  boolState[already_S_OF_sB_3] | Value : " << boolState[already_S_OF_sB_3] << endl;
	//cout << "Attribute :  boolState[S_OF_sB_3] | Value : " << boolState[S_OF_sB_3] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_sB_3] | Value : " << boolState[relevant_evt_OF_sB_3] << endl;
	//cout << "Attribute :  boolState[failF_OF_sB_3] | Value : " << boolState[failF_OF_sB_3] << endl;
	//cout << "Attribute :  boolState[required_OF_sB_3_I] | Value : " << boolState[required_OF_sB_3_I] << endl;
	//cout << "Attribute :  boolState[already_S_OF_sB_3_I] | Value : " << boolState[already_S_OF_sB_3_I] << endl;
	//cout << "Attribute :  boolState[S_OF_sB_3_I] | Value : " << boolState[S_OF_sB_3_I] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_sB_3_I] | Value : " << boolState[relevant_evt_OF_sB_3_I] << endl;
	//cout << "Attribute :  boolState[failI_OF_sB_3_I] | Value : " << boolState[failI_OF_sB_3_I] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_sB_3_I] | Value : " << boolState[to_be_fired_OF_sB_3_I] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_sB_3_I] | Value : " << boolState[already_standby_OF_sB_3_I] << endl;
	//cout << "Attribute :  boolState[already_required_OF_sB_3_I] | Value : " << boolState[already_required_OF_sB_3_I] << endl;
	//cout << "Attribute :  boolState[required_OF_sB_4] | Value : " << boolState[required_OF_sB_4] << endl;
	//cout << "Attribute :  boolState[already_S_OF_sB_4] | Value : " << boolState[already_S_OF_sB_4] << endl;
	//cout << "Attribute :  boolState[S_OF_sB_4] | Value : " << boolState[S_OF_sB_4] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_sB_4] | Value : " << boolState[relevant_evt_OF_sB_4] << endl;
	//cout << "Attribute :  boolState[failF_OF_sB_4] | Value : " << boolState[failF_OF_sB_4] << endl;
	//cout << "Attribute :  boolState[required_OF_sB_4_I] | Value : " << boolState[required_OF_sB_4_I] << endl;
	//cout << "Attribute :  boolState[already_S_OF_sB_4_I] | Value : " << boolState[already_S_OF_sB_4_I] << endl;
	//cout << "Attribute :  boolState[S_OF_sB_4_I] | Value : " << boolState[S_OF_sB_4_I] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_sB_4_I] | Value : " << boolState[relevant_evt_OF_sB_4_I] << endl;
	//cout << "Attribute :  boolState[failI_OF_sB_4_I] | Value : " << boolState[failI_OF_sB_4_I] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_sB_4_I] | Value : " << boolState[to_be_fired_OF_sB_4_I] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_sB_4_I] | Value : " << boolState[already_standby_OF_sB_4_I] << endl;
	//cout << "Attribute :  boolState[already_required_OF_sB_4_I] | Value : " << boolState[already_required_OF_sB_4_I] << endl;
	//cout << "Attribute :  boolState[required_OF_sB_5] | Value : " << boolState[required_OF_sB_5] << endl;
	//cout << "Attribute :  boolState[already_S_OF_sB_5] | Value : " << boolState[already_S_OF_sB_5] << endl;
	//cout << "Attribute :  boolState[S_OF_sB_5] | Value : " << boolState[S_OF_sB_5] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_sB_5] | Value : " << boolState[relevant_evt_OF_sB_5] << endl;
	//cout << "Attribute :  boolState[failF_OF_sB_5] | Value : " << boolState[failF_OF_sB_5] << endl;
	//cout << "Attribute :  boolState[required_OF_sB_5_I] | Value : " << boolState[required_OF_sB_5_I] << endl;
	//cout << "Attribute :  boolState[already_S_OF_sB_5_I] | Value : " << boolState[already_S_OF_sB_5_I] << endl;
	//cout << "Attribute :  boolState[S_OF_sB_5_I] | Value : " << boolState[S_OF_sB_5_I] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_sB_5_I] | Value : " << boolState[relevant_evt_OF_sB_5_I] << endl;
	//cout << "Attribute :  boolState[failI_OF_sB_5_I] | Value : " << boolState[failI_OF_sB_5_I] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_sB_5_I] | Value : " << boolState[to_be_fired_OF_sB_5_I] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_sB_5_I] | Value : " << boolState[already_standby_OF_sB_5_I] << endl;
	//cout << "Attribute :  boolState[already_required_OF_sB_5_I] | Value : " << boolState[already_required_OF_sB_5_I] << endl;
	//cout << "Attribute :  boolState[required_OF_sC_1] | Value : " << boolState[required_OF_sC_1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_sC_1] | Value : " << boolState[already_S_OF_sC_1] << endl;
	//cout << "Attribute :  boolState[S_OF_sC_1] | Value : " << boolState[S_OF_sC_1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_sC_1] | Value : " << boolState[relevant_evt_OF_sC_1] << endl;
	//cout << "Attribute :  boolState[failF_OF_sC_1] | Value : " << boolState[failF_OF_sC_1] << endl;
	//cout << "Attribute :  boolState[required_OF_sC_1_I] | Value : " << boolState[required_OF_sC_1_I] << endl;
	//cout << "Attribute :  boolState[already_S_OF_sC_1_I] | Value : " << boolState[already_S_OF_sC_1_I] << endl;
	//cout << "Attribute :  boolState[S_OF_sC_1_I] | Value : " << boolState[S_OF_sC_1_I] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_sC_1_I] | Value : " << boolState[relevant_evt_OF_sC_1_I] << endl;
	//cout << "Attribute :  boolState[failI_OF_sC_1_I] | Value : " << boolState[failI_OF_sC_1_I] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_sC_1_I] | Value : " << boolState[to_be_fired_OF_sC_1_I] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_sC_1_I] | Value : " << boolState[already_standby_OF_sC_1_I] << endl;
	//cout << "Attribute :  boolState[already_required_OF_sC_1_I] | Value : " << boolState[already_required_OF_sC_1_I] << endl;
	//cout << "Attribute :  boolState[required_OF_sC_2] | Value : " << boolState[required_OF_sC_2] << endl;
	//cout << "Attribute :  boolState[already_S_OF_sC_2] | Value : " << boolState[already_S_OF_sC_2] << endl;
	//cout << "Attribute :  boolState[S_OF_sC_2] | Value : " << boolState[S_OF_sC_2] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_sC_2] | Value : " << boolState[relevant_evt_OF_sC_2] << endl;
	//cout << "Attribute :  boolState[failF_OF_sC_2] | Value : " << boolState[failF_OF_sC_2] << endl;
	//cout << "Attribute :  boolState[required_OF_sC_2_I] | Value : " << boolState[required_OF_sC_2_I] << endl;
	//cout << "Attribute :  boolState[already_S_OF_sC_2_I] | Value : " << boolState[already_S_OF_sC_2_I] << endl;
	//cout << "Attribute :  boolState[S_OF_sC_2_I] | Value : " << boolState[S_OF_sC_2_I] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_sC_2_I] | Value : " << boolState[relevant_evt_OF_sC_2_I] << endl;
	//cout << "Attribute :  boolState[failI_OF_sC_2_I] | Value : " << boolState[failI_OF_sC_2_I] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_sC_2_I] | Value : " << boolState[to_be_fired_OF_sC_2_I] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_sC_2_I] | Value : " << boolState[already_standby_OF_sC_2_I] << endl;
	//cout << "Attribute :  boolState[already_required_OF_sC_2_I] | Value : " << boolState[already_required_OF_sC_2_I] << endl;
	//cout << "Attribute :  boolState[required_OF_sC_3] | Value : " << boolState[required_OF_sC_3] << endl;
	//cout << "Attribute :  boolState[already_S_OF_sC_3] | Value : " << boolState[already_S_OF_sC_3] << endl;
	//cout << "Attribute :  boolState[S_OF_sC_3] | Value : " << boolState[S_OF_sC_3] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_sC_3] | Value : " << boolState[relevant_evt_OF_sC_3] << endl;
	//cout << "Attribute :  boolState[failF_OF_sC_3] | Value : " << boolState[failF_OF_sC_3] << endl;
	//cout << "Attribute :  boolState[required_OF_sC_3_I] | Value : " << boolState[required_OF_sC_3_I] << endl;
	//cout << "Attribute :  boolState[already_S_OF_sC_3_I] | Value : " << boolState[already_S_OF_sC_3_I] << endl;
	//cout << "Attribute :  boolState[S_OF_sC_3_I] | Value : " << boolState[S_OF_sC_3_I] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_sC_3_I] | Value : " << boolState[relevant_evt_OF_sC_3_I] << endl;
	//cout << "Attribute :  boolState[failI_OF_sC_3_I] | Value : " << boolState[failI_OF_sC_3_I] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_sC_3_I] | Value : " << boolState[to_be_fired_OF_sC_3_I] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_sC_3_I] | Value : " << boolState[already_standby_OF_sC_3_I] << endl;
	//cout << "Attribute :  boolState[already_required_OF_sC_3_I] | Value : " << boolState[already_required_OF_sC_3_I] << endl;
	//cout << "Attribute :  boolState[required_OF_sC_4] | Value : " << boolState[required_OF_sC_4] << endl;
	//cout << "Attribute :  boolState[already_S_OF_sC_4] | Value : " << boolState[already_S_OF_sC_4] << endl;
	//cout << "Attribute :  boolState[S_OF_sC_4] | Value : " << boolState[S_OF_sC_4] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_sC_4] | Value : " << boolState[relevant_evt_OF_sC_4] << endl;
	//cout << "Attribute :  boolState[failF_OF_sC_4] | Value : " << boolState[failF_OF_sC_4] << endl;
	//cout << "Attribute :  boolState[required_OF_sC_4_I] | Value : " << boolState[required_OF_sC_4_I] << endl;
	//cout << "Attribute :  boolState[already_S_OF_sC_4_I] | Value : " << boolState[already_S_OF_sC_4_I] << endl;
	//cout << "Attribute :  boolState[S_OF_sC_4_I] | Value : " << boolState[S_OF_sC_4_I] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_sC_4_I] | Value : " << boolState[relevant_evt_OF_sC_4_I] << endl;
	//cout << "Attribute :  boolState[failI_OF_sC_4_I] | Value : " << boolState[failI_OF_sC_4_I] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_sC_4_I] | Value : " << boolState[to_be_fired_OF_sC_4_I] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_sC_4_I] | Value : " << boolState[already_standby_OF_sC_4_I] << endl;
	//cout << "Attribute :  boolState[already_required_OF_sC_4_I] | Value : " << boolState[already_required_OF_sC_4_I] << endl;
	//cout << "Attribute :  boolState[required_OF_sC_5] | Value : " << boolState[required_OF_sC_5] << endl;
	//cout << "Attribute :  boolState[already_S_OF_sC_5] | Value : " << boolState[already_S_OF_sC_5] << endl;
	//cout << "Attribute :  boolState[S_OF_sC_5] | Value : " << boolState[S_OF_sC_5] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_sC_5] | Value : " << boolState[relevant_evt_OF_sC_5] << endl;
	//cout << "Attribute :  boolState[failF_OF_sC_5] | Value : " << boolState[failF_OF_sC_5] << endl;
	//cout << "Attribute :  boolState[required_OF_sC_5_I] | Value : " << boolState[required_OF_sC_5_I] << endl;
	//cout << "Attribute :  boolState[already_S_OF_sC_5_I] | Value : " << boolState[already_S_OF_sC_5_I] << endl;
	//cout << "Attribute :  boolState[S_OF_sC_5_I] | Value : " << boolState[S_OF_sC_5_I] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_sC_5_I] | Value : " << boolState[relevant_evt_OF_sC_5_I] << endl;
	//cout << "Attribute :  boolState[failI_OF_sC_5_I] | Value : " << boolState[failI_OF_sC_5_I] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_sC_5_I] | Value : " << boolState[to_be_fired_OF_sC_5_I] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_sC_5_I] | Value : " << boolState[already_standby_OF_sC_5_I] << endl;
	//cout << "Attribute :  boolState[already_required_OF_sC_5_I] | Value : " << boolState[already_required_OF_sC_5_I] << endl;
	//cout << "Attribute :  boolState[required_OF_sD_1] | Value : " << boolState[required_OF_sD_1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_sD_1] | Value : " << boolState[already_S_OF_sD_1] << endl;
	//cout << "Attribute :  boolState[S_OF_sD_1] | Value : " << boolState[S_OF_sD_1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_sD_1] | Value : " << boolState[relevant_evt_OF_sD_1] << endl;
	//cout << "Attribute :  boolState[failF_OF_sD_1] | Value : " << boolState[failF_OF_sD_1] << endl;
	//cout << "Attribute :  boolState[required_OF_sD_1_I] | Value : " << boolState[required_OF_sD_1_I] << endl;
	//cout << "Attribute :  boolState[already_S_OF_sD_1_I] | Value : " << boolState[already_S_OF_sD_1_I] << endl;
	//cout << "Attribute :  boolState[S_OF_sD_1_I] | Value : " << boolState[S_OF_sD_1_I] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_sD_1_I] | Value : " << boolState[relevant_evt_OF_sD_1_I] << endl;
	//cout << "Attribute :  boolState[failI_OF_sD_1_I] | Value : " << boolState[failI_OF_sD_1_I] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_sD_1_I] | Value : " << boolState[to_be_fired_OF_sD_1_I] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_sD_1_I] | Value : " << boolState[already_standby_OF_sD_1_I] << endl;
	//cout << "Attribute :  boolState[already_required_OF_sD_1_I] | Value : " << boolState[already_required_OF_sD_1_I] << endl;
	//cout << "Attribute :  boolState[required_OF_sD_2] | Value : " << boolState[required_OF_sD_2] << endl;
	//cout << "Attribute :  boolState[already_S_OF_sD_2] | Value : " << boolState[already_S_OF_sD_2] << endl;
	//cout << "Attribute :  boolState[S_OF_sD_2] | Value : " << boolState[S_OF_sD_2] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_sD_2] | Value : " << boolState[relevant_evt_OF_sD_2] << endl;
	//cout << "Attribute :  boolState[failF_OF_sD_2] | Value : " << boolState[failF_OF_sD_2] << endl;
	//cout << "Attribute :  boolState[required_OF_sD_2_I] | Value : " << boolState[required_OF_sD_2_I] << endl;
	//cout << "Attribute :  boolState[already_S_OF_sD_2_I] | Value : " << boolState[already_S_OF_sD_2_I] << endl;
	//cout << "Attribute :  boolState[S_OF_sD_2_I] | Value : " << boolState[S_OF_sD_2_I] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_sD_2_I] | Value : " << boolState[relevant_evt_OF_sD_2_I] << endl;
	//cout << "Attribute :  boolState[failI_OF_sD_2_I] | Value : " << boolState[failI_OF_sD_2_I] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_sD_2_I] | Value : " << boolState[to_be_fired_OF_sD_2_I] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_sD_2_I] | Value : " << boolState[already_standby_OF_sD_2_I] << endl;
	//cout << "Attribute :  boolState[already_required_OF_sD_2_I] | Value : " << boolState[already_required_OF_sD_2_I] << endl;
	//cout << "Attribute :  boolState[required_OF_sD_3] | Value : " << boolState[required_OF_sD_3] << endl;
	//cout << "Attribute :  boolState[already_S_OF_sD_3] | Value : " << boolState[already_S_OF_sD_3] << endl;
	//cout << "Attribute :  boolState[S_OF_sD_3] | Value : " << boolState[S_OF_sD_3] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_sD_3] | Value : " << boolState[relevant_evt_OF_sD_3] << endl;
	//cout << "Attribute :  boolState[failF_OF_sD_3] | Value : " << boolState[failF_OF_sD_3] << endl;
	//cout << "Attribute :  boolState[required_OF_sD_3_I] | Value : " << boolState[required_OF_sD_3_I] << endl;
	//cout << "Attribute :  boolState[already_S_OF_sD_3_I] | Value : " << boolState[already_S_OF_sD_3_I] << endl;
	//cout << "Attribute :  boolState[S_OF_sD_3_I] | Value : " << boolState[S_OF_sD_3_I] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_sD_3_I] | Value : " << boolState[relevant_evt_OF_sD_3_I] << endl;
	//cout << "Attribute :  boolState[failI_OF_sD_3_I] | Value : " << boolState[failI_OF_sD_3_I] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_sD_3_I] | Value : " << boolState[to_be_fired_OF_sD_3_I] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_sD_3_I] | Value : " << boolState[already_standby_OF_sD_3_I] << endl;
	//cout << "Attribute :  boolState[already_required_OF_sD_3_I] | Value : " << boolState[already_required_OF_sD_3_I] << endl;
	//cout << "Attribute :  boolState[required_OF_sD_4] | Value : " << boolState[required_OF_sD_4] << endl;
	//cout << "Attribute :  boolState[already_S_OF_sD_4] | Value : " << boolState[already_S_OF_sD_4] << endl;
	//cout << "Attribute :  boolState[S_OF_sD_4] | Value : " << boolState[S_OF_sD_4] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_sD_4] | Value : " << boolState[relevant_evt_OF_sD_4] << endl;
	//cout << "Attribute :  boolState[failF_OF_sD_4] | Value : " << boolState[failF_OF_sD_4] << endl;
	//cout << "Attribute :  boolState[required_OF_sD_4_I] | Value : " << boolState[required_OF_sD_4_I] << endl;
	//cout << "Attribute :  boolState[already_S_OF_sD_4_I] | Value : " << boolState[already_S_OF_sD_4_I] << endl;
	//cout << "Attribute :  boolState[S_OF_sD_4_I] | Value : " << boolState[S_OF_sD_4_I] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_sD_4_I] | Value : " << boolState[relevant_evt_OF_sD_4_I] << endl;
	//cout << "Attribute :  boolState[failI_OF_sD_4_I] | Value : " << boolState[failI_OF_sD_4_I] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_sD_4_I] | Value : " << boolState[to_be_fired_OF_sD_4_I] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_sD_4_I] | Value : " << boolState[already_standby_OF_sD_4_I] << endl;
	//cout << "Attribute :  boolState[already_required_OF_sD_4_I] | Value : " << boolState[already_required_OF_sD_4_I] << endl;
	//cout << "Attribute :  boolState[required_OF_sD_5] | Value : " << boolState[required_OF_sD_5] << endl;
	//cout << "Attribute :  boolState[already_S_OF_sD_5] | Value : " << boolState[already_S_OF_sD_5] << endl;
	//cout << "Attribute :  boolState[S_OF_sD_5] | Value : " << boolState[S_OF_sD_5] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_sD_5] | Value : " << boolState[relevant_evt_OF_sD_5] << endl;
	//cout << "Attribute :  boolState[failF_OF_sD_5] | Value : " << boolState[failF_OF_sD_5] << endl;
	//cout << "Attribute :  boolState[required_OF_sD_5_I] | Value : " << boolState[required_OF_sD_5_I] << endl;
	//cout << "Attribute :  boolState[already_S_OF_sD_5_I] | Value : " << boolState[already_S_OF_sD_5_I] << endl;
	//cout << "Attribute :  boolState[S_OF_sD_5_I] | Value : " << boolState[S_OF_sD_5_I] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_sD_5_I] | Value : " << boolState[relevant_evt_OF_sD_5_I] << endl;
	//cout << "Attribute :  boolState[failI_OF_sD_5_I] | Value : " << boolState[failI_OF_sD_5_I] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_sD_5_I] | Value : " << boolState[to_be_fired_OF_sD_5_I] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_sD_5_I] | Value : " << boolState[already_standby_OF_sD_5_I] << endl;
	//cout << "Attribute :  boolState[already_required_OF_sD_5_I] | Value : " << boolState[already_required_OF_sD_5_I] << endl;
	//cout << "Attribute :  boolState[required_OF_sensor_2] | Value : " << boolState[required_OF_sensor_2] << endl;
	//cout << "Attribute :  boolState[already_S_OF_sensor_2] | Value : " << boolState[already_S_OF_sensor_2] << endl;
	//cout << "Attribute :  boolState[S_OF_sensor_2] | Value : " << boolState[S_OF_sensor_2] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_sensor_2] | Value : " << boolState[relevant_evt_OF_sensor_2] << endl;
	//cout << "Attribute :  boolState[required_OF_sensor_3] | Value : " << boolState[required_OF_sensor_3] << endl;
	//cout << "Attribute :  boolState[already_S_OF_sensor_3] | Value : " << boolState[already_S_OF_sensor_3] << endl;
	//cout << "Attribute :  boolState[S_OF_sensor_3] | Value : " << boolState[S_OF_sensor_3] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_sensor_3] | Value : " << boolState[relevant_evt_OF_sensor_3] << endl;
	//cout << "Attribute :  boolState[required_OF_sensor_4] | Value : " << boolState[required_OF_sensor_4] << endl;
	//cout << "Attribute :  boolState[already_S_OF_sensor_4] | Value : " << boolState[already_S_OF_sensor_4] << endl;
	//cout << "Attribute :  boolState[S_OF_sensor_4] | Value : " << boolState[S_OF_sensor_4] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_sensor_4] | Value : " << boolState[relevant_evt_OF_sensor_4] << endl;
	//cout << "Attribute :  boolState[required_OF_sensor_5] | Value : " << boolState[required_OF_sensor_5] << endl;
	//cout << "Attribute :  boolState[already_S_OF_sensor_5] | Value : " << boolState[already_S_OF_sensor_5] << endl;
	//cout << "Attribute :  boolState[S_OF_sensor_5] | Value : " << boolState[S_OF_sensor_5] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_sensor_5] | Value : " << boolState[relevant_evt_OF_sensor_5] << endl;
	//cout << "Attribute :  boolState[required_OF_sensors] | Value : " << boolState[required_OF_sensors] << endl;
	//cout << "Attribute :  boolState[already_S_OF_sensors] | Value : " << boolState[already_S_OF_sensors] << endl;
	//cout << "Attribute :  boolState[S_OF_sensors] | Value : " << boolState[S_OF_sensors] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_sensors] | Value : " << boolState[relevant_evt_OF_sensors] << endl;
	//cout << "Attribute :  boolState[required_OF_sw_1] | Value : " << boolState[required_OF_sw_1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_sw_1] | Value : " << boolState[already_S_OF_sw_1] << endl;
	//cout << "Attribute :  boolState[S_OF_sw_1] | Value : " << boolState[S_OF_sw_1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_sw_1] | Value : " << boolState[relevant_evt_OF_sw_1] << endl;
	//cout << "Attribute :  boolState[failF_OF_sw_1] | Value : " << boolState[failF_OF_sw_1] << endl;
	//cout << "Attribute :  boolState[required_OF_sw_2] | Value : " << boolState[required_OF_sw_2] << endl;
	//cout << "Attribute :  boolState[already_S_OF_sw_2] | Value : " << boolState[already_S_OF_sw_2] << endl;
	//cout << "Attribute :  boolState[S_OF_sw_2] | Value : " << boolState[S_OF_sw_2] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_sw_2] | Value : " << boolState[relevant_evt_OF_sw_2] << endl;
	//cout << "Attribute :  boolState[failF_OF_sw_2] | Value : " << boolState[failF_OF_sw_2] << endl;
	//cout << "Attribute :  boolState[required_OF_sw_3] | Value : " << boolState[required_OF_sw_3] << endl;
	//cout << "Attribute :  boolState[already_S_OF_sw_3] | Value : " << boolState[already_S_OF_sw_3] << endl;
	//cout << "Attribute :  boolState[S_OF_sw_3] | Value : " << boolState[S_OF_sw_3] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_sw_3] | Value : " << boolState[relevant_evt_OF_sw_3] << endl;
	//cout << "Attribute :  boolState[failF_OF_sw_3] | Value : " << boolState[failF_OF_sw_3] << endl;
	//cout << "Attribute :  boolState[required_OF_sw_4] | Value : " << boolState[required_OF_sw_4] << endl;
	//cout << "Attribute :  boolState[already_S_OF_sw_4] | Value : " << boolState[already_S_OF_sw_4] << endl;
	//cout << "Attribute :  boolState[S_OF_sw_4] | Value : " << boolState[S_OF_sw_4] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_sw_4] | Value : " << boolState[relevant_evt_OF_sw_4] << endl;
	//cout << "Attribute :  boolState[failF_OF_sw_4] | Value : " << boolState[failF_OF_sw_4] << endl;
	//cout << "Attribute :  boolState[required_OF_sw_5] | Value : " << boolState[required_OF_sw_5] << endl;
	//cout << "Attribute :  boolState[already_S_OF_sw_5] | Value : " << boolState[already_S_OF_sw_5] << endl;
	//cout << "Attribute :  boolState[S_OF_sw_5] | Value : " << boolState[S_OF_sw_5] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_sw_5] | Value : " << boolState[relevant_evt_OF_sw_5] << endl;
	//cout << "Attribute :  boolState[failF_OF_sw_5] | Value : " << boolState[failF_OF_sw_5] << endl;
	//cout << "Attribute :  boolState[required_OF_switch_1] | Value : " << boolState[required_OF_switch_1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_switch_1] | Value : " << boolState[already_S_OF_switch_1] << endl;
	//cout << "Attribute :  boolState[S_OF_switch_1] | Value : " << boolState[S_OF_switch_1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_switch_1] | Value : " << boolState[relevant_evt_OF_switch_1] << endl;
	//cout << "Attribute :  boolState[required_OF_switch_2] | Value : " << boolState[required_OF_switch_2] << endl;
	//cout << "Attribute :  boolState[already_S_OF_switch_2] | Value : " << boolState[already_S_OF_switch_2] << endl;
	//cout << "Attribute :  boolState[S_OF_switch_2] | Value : " << boolState[S_OF_switch_2] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_switch_2] | Value : " << boolState[relevant_evt_OF_switch_2] << endl;
	//cout << "Attribute :  boolState[required_OF_switch_3] | Value : " << boolState[required_OF_switch_3] << endl;
	//cout << "Attribute :  boolState[already_S_OF_switch_3] | Value : " << boolState[already_S_OF_switch_3] << endl;
	//cout << "Attribute :  boolState[S_OF_switch_3] | Value : " << boolState[S_OF_switch_3] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_switch_3] | Value : " << boolState[relevant_evt_OF_switch_3] << endl;
	//cout << "Attribute :  boolState[required_OF_switch_4] | Value : " << boolState[required_OF_switch_4] << endl;
	//cout << "Attribute :  boolState[already_S_OF_switch_4] | Value : " << boolState[already_S_OF_switch_4] << endl;
	//cout << "Attribute :  boolState[S_OF_switch_4] | Value : " << boolState[S_OF_switch_4] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_switch_4] | Value : " << boolState[relevant_evt_OF_switch_4] << endl;
	//cout << "Attribute :  boolState[required_OF_switch_5] | Value : " << boolState[required_OF_switch_5] << endl;
	//cout << "Attribute :  boolState[already_S_OF_switch_5] | Value : " << boolState[already_S_OF_switch_5] << endl;
	//cout << "Attribute :  boolState[S_OF_switch_5] | Value : " << boolState[S_OF_switch_5] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_switch_5] | Value : " << boolState[relevant_evt_OF_switch_5] << endl;
}

bool storm::figaro::FigaroProgram_rc_5_5_Trim_repair::figaromodelhasinstransitions()
{
	return true;
}
void storm::figaro::FigaroProgram_rc_5_5_Trim_repair::doReinitialisations()
{
	boolState[required_OF_System] = REINITIALISATION_OF_required_OF_System;
	boolState[S_OF_System] = REINITIALISATION_OF_S_OF_System;
	boolState[relevant_evt_OF_System] = REINITIALISATION_OF_relevant_evt_OF_System;
	boolState[required_OF_UE_1] = REINITIALISATION_OF_required_OF_UE_1;
	boolState[S_OF_UE_1] = REINITIALISATION_OF_S_OF_UE_1;
	boolState[relevant_evt_OF_UE_1] = REINITIALISATION_OF_relevant_evt_OF_UE_1;
	boolState[required_OF__SA_1] = REINITIALISATION_OF_required_OF__SA_1;
	boolState[S_OF__SA_1] = REINITIALISATION_OF_S_OF__SA_1;
	boolState[relevant_evt_OF__SA_1] = REINITIALISATION_OF_relevant_evt_OF__SA_1;
	boolState[required_OF__SA_2] = REINITIALISATION_OF_required_OF__SA_2;
	boolState[S_OF__SA_2] = REINITIALISATION_OF_S_OF__SA_2;
	boolState[relevant_evt_OF__SA_2] = REINITIALISATION_OF_relevant_evt_OF__SA_2;
	boolState[required_OF__SA_3] = REINITIALISATION_OF_required_OF__SA_3;
	boolState[S_OF__SA_3] = REINITIALISATION_OF_S_OF__SA_3;
	boolState[relevant_evt_OF__SA_3] = REINITIALISATION_OF_relevant_evt_OF__SA_3;
	boolState[required_OF__SA_4] = REINITIALISATION_OF_required_OF__SA_4;
	boolState[S_OF__SA_4] = REINITIALISATION_OF_S_OF__SA_4;
	boolState[relevant_evt_OF__SA_4] = REINITIALISATION_OF_relevant_evt_OF__SA_4;
	boolState[required_OF__SA_5] = REINITIALISATION_OF_required_OF__SA_5;
	boolState[S_OF__SA_5] = REINITIALISATION_OF_S_OF__SA_5;
	boolState[relevant_evt_OF__SA_5] = REINITIALISATION_OF_relevant_evt_OF__SA_5;
	boolState[required_OF__SB_1] = REINITIALISATION_OF_required_OF__SB_1;
	boolState[S_OF__SB_1] = REINITIALISATION_OF_S_OF__SB_1;
	boolState[relevant_evt_OF__SB_1] = REINITIALISATION_OF_relevant_evt_OF__SB_1;
	boolState[required_OF__SB_2] = REINITIALISATION_OF_required_OF__SB_2;
	boolState[S_OF__SB_2] = REINITIALISATION_OF_S_OF__SB_2;
	boolState[relevant_evt_OF__SB_2] = REINITIALISATION_OF_relevant_evt_OF__SB_2;
	boolState[required_OF__SB_3] = REINITIALISATION_OF_required_OF__SB_3;
	boolState[S_OF__SB_3] = REINITIALISATION_OF_S_OF__SB_3;
	boolState[relevant_evt_OF__SB_3] = REINITIALISATION_OF_relevant_evt_OF__SB_3;
	boolState[required_OF__SB_4] = REINITIALISATION_OF_required_OF__SB_4;
	boolState[S_OF__SB_4] = REINITIALISATION_OF_S_OF__SB_4;
	boolState[relevant_evt_OF__SB_4] = REINITIALISATION_OF_relevant_evt_OF__SB_4;
	boolState[required_OF__SB_5] = REINITIALISATION_OF_required_OF__SB_5;
	boolState[S_OF__SB_5] = REINITIALISATION_OF_S_OF__SB_5;
	boolState[relevant_evt_OF__SB_5] = REINITIALISATION_OF_relevant_evt_OF__SB_5;
	boolState[required_OF__SC_1] = REINITIALISATION_OF_required_OF__SC_1;
	boolState[S_OF__SC_1] = REINITIALISATION_OF_S_OF__SC_1;
	boolState[relevant_evt_OF__SC_1] = REINITIALISATION_OF_relevant_evt_OF__SC_1;
	boolState[required_OF__SC_2] = REINITIALISATION_OF_required_OF__SC_2;
	boolState[S_OF__SC_2] = REINITIALISATION_OF_S_OF__SC_2;
	boolState[relevant_evt_OF__SC_2] = REINITIALISATION_OF_relevant_evt_OF__SC_2;
	boolState[required_OF__SC_3] = REINITIALISATION_OF_required_OF__SC_3;
	boolState[S_OF__SC_3] = REINITIALISATION_OF_S_OF__SC_3;
	boolState[relevant_evt_OF__SC_3] = REINITIALISATION_OF_relevant_evt_OF__SC_3;
	boolState[required_OF__SC_4] = REINITIALISATION_OF_required_OF__SC_4;
	boolState[S_OF__SC_4] = REINITIALISATION_OF_S_OF__SC_4;
	boolState[relevant_evt_OF__SC_4] = REINITIALISATION_OF_relevant_evt_OF__SC_4;
	boolState[required_OF__SC_5] = REINITIALISATION_OF_required_OF__SC_5;
	boolState[S_OF__SC_5] = REINITIALISATION_OF_S_OF__SC_5;
	boolState[relevant_evt_OF__SC_5] = REINITIALISATION_OF_relevant_evt_OF__SC_5;
	boolState[required_OF__SD_1] = REINITIALISATION_OF_required_OF__SD_1;
	boolState[S_OF__SD_1] = REINITIALISATION_OF_S_OF__SD_1;
	boolState[relevant_evt_OF__SD_1] = REINITIALISATION_OF_relevant_evt_OF__SD_1;
	boolState[required_OF__SD_2] = REINITIALISATION_OF_required_OF__SD_2;
	boolState[S_OF__SD_2] = REINITIALISATION_OF_S_OF__SD_2;
	boolState[relevant_evt_OF__SD_2] = REINITIALISATION_OF_relevant_evt_OF__SD_2;
	boolState[required_OF__SD_3] = REINITIALISATION_OF_required_OF__SD_3;
	boolState[S_OF__SD_3] = REINITIALISATION_OF_S_OF__SD_3;
	boolState[relevant_evt_OF__SD_3] = REINITIALISATION_OF_relevant_evt_OF__SD_3;
	boolState[required_OF__SD_4] = REINITIALISATION_OF_required_OF__SD_4;
	boolState[S_OF__SD_4] = REINITIALISATION_OF_S_OF__SD_4;
	boolState[relevant_evt_OF__SD_4] = REINITIALISATION_OF_relevant_evt_OF__SD_4;
	boolState[required_OF__SD_5] = REINITIALISATION_OF_required_OF__SD_5;
	boolState[S_OF__SD_5] = REINITIALISATION_OF_S_OF__SD_5;
	boolState[relevant_evt_OF__SD_5] = REINITIALISATION_OF_relevant_evt_OF__SD_5;
	boolState[required_OF_barrier_1] = REINITIALISATION_OF_required_OF_barrier_1;
	boolState[S_OF_barrier_1] = REINITIALISATION_OF_S_OF_barrier_1;
	boolState[relevant_evt_OF_barrier_1] = REINITIALISATION_OF_relevant_evt_OF_barrier_1;
	boolState[required_OF_barrier_2] = REINITIALISATION_OF_required_OF_barrier_2;
	boolState[S_OF_barrier_2] = REINITIALISATION_OF_S_OF_barrier_2;
	boolState[relevant_evt_OF_barrier_2] = REINITIALISATION_OF_relevant_evt_OF_barrier_2;
	boolState[required_OF_barrier_3] = REINITIALISATION_OF_required_OF_barrier_3;
	boolState[S_OF_barrier_3] = REINITIALISATION_OF_S_OF_barrier_3;
	boolState[relevant_evt_OF_barrier_3] = REINITIALISATION_OF_relevant_evt_OF_barrier_3;
	boolState[required_OF_barrier_4] = REINITIALISATION_OF_required_OF_barrier_4;
	boolState[S_OF_barrier_4] = REINITIALISATION_OF_S_OF_barrier_4;
	boolState[relevant_evt_OF_barrier_4] = REINITIALISATION_OF_relevant_evt_OF_barrier_4;
	boolState[required_OF_barrier_5] = REINITIALISATION_OF_required_OF_barrier_5;
	boolState[S_OF_barrier_5] = REINITIALISATION_OF_S_OF_barrier_5;
	boolState[relevant_evt_OF_barrier_5] = REINITIALISATION_OF_relevant_evt_OF_barrier_5;
	boolState[required_OF_barriers] = REINITIALISATION_OF_required_OF_barriers;
	boolState[S_OF_barriers] = REINITIALISATION_OF_S_OF_barriers;
	boolState[relevant_evt_OF_barriers] = REINITIALISATION_OF_relevant_evt_OF_barriers;
	boolState[required_OF_controller] = REINITIALISATION_OF_required_OF_controller;
	boolState[S_OF_controller] = REINITIALISATION_OF_S_OF_controller;
	boolState[relevant_evt_OF_controller] = REINITIALISATION_OF_relevant_evt_OF_controller;
	boolState[required_OF_motor_1] = REINITIALISATION_OF_required_OF_motor_1;
	boolState[S_OF_motor_1] = REINITIALISATION_OF_S_OF_motor_1;
	boolState[relevant_evt_OF_motor_1] = REINITIALISATION_OF_relevant_evt_OF_motor_1;
	boolState[required_OF_motor_2] = REINITIALISATION_OF_required_OF_motor_2;
	boolState[S_OF_motor_2] = REINITIALISATION_OF_S_OF_motor_2;
	boolState[relevant_evt_OF_motor_2] = REINITIALISATION_OF_relevant_evt_OF_motor_2;
	boolState[required_OF_motor_3] = REINITIALISATION_OF_required_OF_motor_3;
	boolState[S_OF_motor_3] = REINITIALISATION_OF_S_OF_motor_3;
	boolState[relevant_evt_OF_motor_3] = REINITIALISATION_OF_relevant_evt_OF_motor_3;
	boolState[required_OF_motor_4] = REINITIALISATION_OF_required_OF_motor_4;
	boolState[S_OF_motor_4] = REINITIALISATION_OF_S_OF_motor_4;
	boolState[relevant_evt_OF_motor_4] = REINITIALISATION_OF_relevant_evt_OF_motor_4;
	boolState[required_OF_motor_5] = REINITIALISATION_OF_required_OF_motor_5;
	boolState[S_OF_motor_5] = REINITIALISATION_OF_S_OF_motor_5;
	boolState[relevant_evt_OF_motor_5] = REINITIALISATION_OF_relevant_evt_OF_motor_5;
	boolState[required_OF_mp1] = REINITIALISATION_OF_required_OF_mp1;
	boolState[S_OF_mp1] = REINITIALISATION_OF_S_OF_mp1;
	boolState[relevant_evt_OF_mp1] = REINITIALISATION_OF_relevant_evt_OF_mp1;
	boolState[required_OF_mp2] = REINITIALISATION_OF_required_OF_mp2;
	boolState[S_OF_mp2] = REINITIALISATION_OF_S_OF_mp2;
	boolState[relevant_evt_OF_mp2] = REINITIALISATION_OF_relevant_evt_OF_mp2;
	boolState[required_OF_mp3] = REINITIALISATION_OF_required_OF_mp3;
	boolState[S_OF_mp3] = REINITIALISATION_OF_S_OF_mp3;
	boolState[relevant_evt_OF_mp3] = REINITIALISATION_OF_relevant_evt_OF_mp3;
	boolState[required_OF_mp4] = REINITIALISATION_OF_required_OF_mp4;
	boolState[S_OF_mp4] = REINITIALISATION_OF_S_OF_mp4;
	boolState[relevant_evt_OF_mp4] = REINITIALISATION_OF_relevant_evt_OF_mp4;
	boolState[required_OF_mp5] = REINITIALISATION_OF_required_OF_mp5;
	boolState[S_OF_mp5] = REINITIALISATION_OF_S_OF_mp5;
	boolState[relevant_evt_OF_mp5] = REINITIALISATION_OF_relevant_evt_OF_mp5;
	boolState[required_OF_sensor_1] = REINITIALISATION_OF_required_OF_sensor_1;
	boolState[S_OF_sensor_1] = REINITIALISATION_OF_S_OF_sensor_1;
	boolState[relevant_evt_OF_sensor_1] = REINITIALISATION_OF_relevant_evt_OF_sensor_1;
	boolState[required_OF_ms1] = REINITIALISATION_OF_required_OF_ms1;
	boolState[S_OF_ms1] = REINITIALISATION_OF_S_OF_ms1;
	boolState[relevant_evt_OF_ms1] = REINITIALISATION_OF_relevant_evt_OF_ms1;
	boolState[required_OF_ms2] = REINITIALISATION_OF_required_OF_ms2;
	boolState[S_OF_ms2] = REINITIALISATION_OF_S_OF_ms2;
	boolState[relevant_evt_OF_ms2] = REINITIALISATION_OF_relevant_evt_OF_ms2;
	boolState[required_OF_ms3] = REINITIALISATION_OF_required_OF_ms3;
	boolState[S_OF_ms3] = REINITIALISATION_OF_S_OF_ms3;
	boolState[relevant_evt_OF_ms3] = REINITIALISATION_OF_relevant_evt_OF_ms3;
	boolState[required_OF_ms4] = REINITIALISATION_OF_required_OF_ms4;
	boolState[S_OF_ms4] = REINITIALISATION_OF_S_OF_ms4;
	boolState[relevant_evt_OF_ms4] = REINITIALISATION_OF_relevant_evt_OF_ms4;
	boolState[required_OF_ms5] = REINITIALISATION_OF_required_OF_ms5;
	boolState[S_OF_ms5] = REINITIALISATION_OF_S_OF_ms5;
	boolState[relevant_evt_OF_ms5] = REINITIALISATION_OF_relevant_evt_OF_ms5;
	boolState[required_OF_network_1] = REINITIALISATION_OF_required_OF_network_1;
	boolState[S_OF_network_1] = REINITIALISATION_OF_S_OF_network_1;
	boolState[relevant_evt_OF_network_1] = REINITIALISATION_OF_relevant_evt_OF_network_1;
	boolState[required_OF_network_2] = REINITIALISATION_OF_required_OF_network_2;
	boolState[S_OF_network_2] = REINITIALISATION_OF_S_OF_network_2;
	boolState[relevant_evt_OF_network_2] = REINITIALISATION_OF_relevant_evt_OF_network_2;
	boolState[required_OF_network_3] = REINITIALISATION_OF_required_OF_network_3;
	boolState[S_OF_network_3] = REINITIALISATION_OF_S_OF_network_3;
	boolState[relevant_evt_OF_network_3] = REINITIALISATION_OF_relevant_evt_OF_network_3;
	boolState[required_OF_network_4] = REINITIALISATION_OF_required_OF_network_4;
	boolState[S_OF_network_4] = REINITIALISATION_OF_S_OF_network_4;
	boolState[relevant_evt_OF_network_4] = REINITIALISATION_OF_relevant_evt_OF_network_4;
	boolState[required_OF_network_5] = REINITIALISATION_OF_required_OF_network_5;
	boolState[S_OF_network_5] = REINITIALISATION_OF_S_OF_network_5;
	boolState[relevant_evt_OF_network_5] = REINITIALISATION_OF_relevant_evt_OF_network_5;
	boolState[required_OF_sA_1] = REINITIALISATION_OF_required_OF_sA_1;
	boolState[S_OF_sA_1] = REINITIALISATION_OF_S_OF_sA_1;
	boolState[relevant_evt_OF_sA_1] = REINITIALISATION_OF_relevant_evt_OF_sA_1;
	boolState[required_OF_sA_1_I] = REINITIALISATION_OF_required_OF_sA_1_I;
	boolState[S_OF_sA_1_I] = REINITIALISATION_OF_S_OF_sA_1_I;
	boolState[relevant_evt_OF_sA_1_I] = REINITIALISATION_OF_relevant_evt_OF_sA_1_I;
	boolState[to_be_fired_OF_sA_1_I] = REINITIALISATION_OF_to_be_fired_OF_sA_1_I;
	boolState[required_OF_sA_2] = REINITIALISATION_OF_required_OF_sA_2;
	boolState[S_OF_sA_2] = REINITIALISATION_OF_S_OF_sA_2;
	boolState[relevant_evt_OF_sA_2] = REINITIALISATION_OF_relevant_evt_OF_sA_2;
	boolState[required_OF_sA_2_I] = REINITIALISATION_OF_required_OF_sA_2_I;
	boolState[S_OF_sA_2_I] = REINITIALISATION_OF_S_OF_sA_2_I;
	boolState[relevant_evt_OF_sA_2_I] = REINITIALISATION_OF_relevant_evt_OF_sA_2_I;
	boolState[to_be_fired_OF_sA_2_I] = REINITIALISATION_OF_to_be_fired_OF_sA_2_I;
	boolState[required_OF_sA_3] = REINITIALISATION_OF_required_OF_sA_3;
	boolState[S_OF_sA_3] = REINITIALISATION_OF_S_OF_sA_3;
	boolState[relevant_evt_OF_sA_3] = REINITIALISATION_OF_relevant_evt_OF_sA_3;
	boolState[required_OF_sA_3_I] = REINITIALISATION_OF_required_OF_sA_3_I;
	boolState[S_OF_sA_3_I] = REINITIALISATION_OF_S_OF_sA_3_I;
	boolState[relevant_evt_OF_sA_3_I] = REINITIALISATION_OF_relevant_evt_OF_sA_3_I;
	boolState[to_be_fired_OF_sA_3_I] = REINITIALISATION_OF_to_be_fired_OF_sA_3_I;
	boolState[required_OF_sA_4] = REINITIALISATION_OF_required_OF_sA_4;
	boolState[S_OF_sA_4] = REINITIALISATION_OF_S_OF_sA_4;
	boolState[relevant_evt_OF_sA_4] = REINITIALISATION_OF_relevant_evt_OF_sA_4;
	boolState[required_OF_sA_4_I] = REINITIALISATION_OF_required_OF_sA_4_I;
	boolState[S_OF_sA_4_I] = REINITIALISATION_OF_S_OF_sA_4_I;
	boolState[relevant_evt_OF_sA_4_I] = REINITIALISATION_OF_relevant_evt_OF_sA_4_I;
	boolState[to_be_fired_OF_sA_4_I] = REINITIALISATION_OF_to_be_fired_OF_sA_4_I;
	boolState[required_OF_sA_5] = REINITIALISATION_OF_required_OF_sA_5;
	boolState[S_OF_sA_5] = REINITIALISATION_OF_S_OF_sA_5;
	boolState[relevant_evt_OF_sA_5] = REINITIALISATION_OF_relevant_evt_OF_sA_5;
	boolState[required_OF_sA_5_I] = REINITIALISATION_OF_required_OF_sA_5_I;
	boolState[S_OF_sA_5_I] = REINITIALISATION_OF_S_OF_sA_5_I;
	boolState[relevant_evt_OF_sA_5_I] = REINITIALISATION_OF_relevant_evt_OF_sA_5_I;
	boolState[to_be_fired_OF_sA_5_I] = REINITIALISATION_OF_to_be_fired_OF_sA_5_I;
	boolState[required_OF_sB_1] = REINITIALISATION_OF_required_OF_sB_1;
	boolState[S_OF_sB_1] = REINITIALISATION_OF_S_OF_sB_1;
	boolState[relevant_evt_OF_sB_1] = REINITIALISATION_OF_relevant_evt_OF_sB_1;
	boolState[required_OF_sB_1_I] = REINITIALISATION_OF_required_OF_sB_1_I;
	boolState[S_OF_sB_1_I] = REINITIALISATION_OF_S_OF_sB_1_I;
	boolState[relevant_evt_OF_sB_1_I] = REINITIALISATION_OF_relevant_evt_OF_sB_1_I;
	boolState[to_be_fired_OF_sB_1_I] = REINITIALISATION_OF_to_be_fired_OF_sB_1_I;
	boolState[required_OF_sB_2] = REINITIALISATION_OF_required_OF_sB_2;
	boolState[S_OF_sB_2] = REINITIALISATION_OF_S_OF_sB_2;
	boolState[relevant_evt_OF_sB_2] = REINITIALISATION_OF_relevant_evt_OF_sB_2;
	boolState[required_OF_sB_2_I] = REINITIALISATION_OF_required_OF_sB_2_I;
	boolState[S_OF_sB_2_I] = REINITIALISATION_OF_S_OF_sB_2_I;
	boolState[relevant_evt_OF_sB_2_I] = REINITIALISATION_OF_relevant_evt_OF_sB_2_I;
	boolState[to_be_fired_OF_sB_2_I] = REINITIALISATION_OF_to_be_fired_OF_sB_2_I;
	boolState[required_OF_sB_3] = REINITIALISATION_OF_required_OF_sB_3;
	boolState[S_OF_sB_3] = REINITIALISATION_OF_S_OF_sB_3;
	boolState[relevant_evt_OF_sB_3] = REINITIALISATION_OF_relevant_evt_OF_sB_3;
	boolState[required_OF_sB_3_I] = REINITIALISATION_OF_required_OF_sB_3_I;
	boolState[S_OF_sB_3_I] = REINITIALISATION_OF_S_OF_sB_3_I;
	boolState[relevant_evt_OF_sB_3_I] = REINITIALISATION_OF_relevant_evt_OF_sB_3_I;
	boolState[to_be_fired_OF_sB_3_I] = REINITIALISATION_OF_to_be_fired_OF_sB_3_I;
	boolState[required_OF_sB_4] = REINITIALISATION_OF_required_OF_sB_4;
	boolState[S_OF_sB_4] = REINITIALISATION_OF_S_OF_sB_4;
	boolState[relevant_evt_OF_sB_4] = REINITIALISATION_OF_relevant_evt_OF_sB_4;
	boolState[required_OF_sB_4_I] = REINITIALISATION_OF_required_OF_sB_4_I;
	boolState[S_OF_sB_4_I] = REINITIALISATION_OF_S_OF_sB_4_I;
	boolState[relevant_evt_OF_sB_4_I] = REINITIALISATION_OF_relevant_evt_OF_sB_4_I;
	boolState[to_be_fired_OF_sB_4_I] = REINITIALISATION_OF_to_be_fired_OF_sB_4_I;
	boolState[required_OF_sB_5] = REINITIALISATION_OF_required_OF_sB_5;
	boolState[S_OF_sB_5] = REINITIALISATION_OF_S_OF_sB_5;
	boolState[relevant_evt_OF_sB_5] = REINITIALISATION_OF_relevant_evt_OF_sB_5;
	boolState[required_OF_sB_5_I] = REINITIALISATION_OF_required_OF_sB_5_I;
	boolState[S_OF_sB_5_I] = REINITIALISATION_OF_S_OF_sB_5_I;
	boolState[relevant_evt_OF_sB_5_I] = REINITIALISATION_OF_relevant_evt_OF_sB_5_I;
	boolState[to_be_fired_OF_sB_5_I] = REINITIALISATION_OF_to_be_fired_OF_sB_5_I;
	boolState[required_OF_sC_1] = REINITIALISATION_OF_required_OF_sC_1;
	boolState[S_OF_sC_1] = REINITIALISATION_OF_S_OF_sC_1;
	boolState[relevant_evt_OF_sC_1] = REINITIALISATION_OF_relevant_evt_OF_sC_1;
	boolState[required_OF_sC_1_I] = REINITIALISATION_OF_required_OF_sC_1_I;
	boolState[S_OF_sC_1_I] = REINITIALISATION_OF_S_OF_sC_1_I;
	boolState[relevant_evt_OF_sC_1_I] = REINITIALISATION_OF_relevant_evt_OF_sC_1_I;
	boolState[to_be_fired_OF_sC_1_I] = REINITIALISATION_OF_to_be_fired_OF_sC_1_I;
	boolState[required_OF_sC_2] = REINITIALISATION_OF_required_OF_sC_2;
	boolState[S_OF_sC_2] = REINITIALISATION_OF_S_OF_sC_2;
	boolState[relevant_evt_OF_sC_2] = REINITIALISATION_OF_relevant_evt_OF_sC_2;
	boolState[required_OF_sC_2_I] = REINITIALISATION_OF_required_OF_sC_2_I;
	boolState[S_OF_sC_2_I] = REINITIALISATION_OF_S_OF_sC_2_I;
	boolState[relevant_evt_OF_sC_2_I] = REINITIALISATION_OF_relevant_evt_OF_sC_2_I;
	boolState[to_be_fired_OF_sC_2_I] = REINITIALISATION_OF_to_be_fired_OF_sC_2_I;
	boolState[required_OF_sC_3] = REINITIALISATION_OF_required_OF_sC_3;
	boolState[S_OF_sC_3] = REINITIALISATION_OF_S_OF_sC_3;
	boolState[relevant_evt_OF_sC_3] = REINITIALISATION_OF_relevant_evt_OF_sC_3;
	boolState[required_OF_sC_3_I] = REINITIALISATION_OF_required_OF_sC_3_I;
	boolState[S_OF_sC_3_I] = REINITIALISATION_OF_S_OF_sC_3_I;
	boolState[relevant_evt_OF_sC_3_I] = REINITIALISATION_OF_relevant_evt_OF_sC_3_I;
	boolState[to_be_fired_OF_sC_3_I] = REINITIALISATION_OF_to_be_fired_OF_sC_3_I;
	boolState[required_OF_sC_4] = REINITIALISATION_OF_required_OF_sC_4;
	boolState[S_OF_sC_4] = REINITIALISATION_OF_S_OF_sC_4;
	boolState[relevant_evt_OF_sC_4] = REINITIALISATION_OF_relevant_evt_OF_sC_4;
	boolState[required_OF_sC_4_I] = REINITIALISATION_OF_required_OF_sC_4_I;
	boolState[S_OF_sC_4_I] = REINITIALISATION_OF_S_OF_sC_4_I;
	boolState[relevant_evt_OF_sC_4_I] = REINITIALISATION_OF_relevant_evt_OF_sC_4_I;
	boolState[to_be_fired_OF_sC_4_I] = REINITIALISATION_OF_to_be_fired_OF_sC_4_I;
	boolState[required_OF_sC_5] = REINITIALISATION_OF_required_OF_sC_5;
	boolState[S_OF_sC_5] = REINITIALISATION_OF_S_OF_sC_5;
	boolState[relevant_evt_OF_sC_5] = REINITIALISATION_OF_relevant_evt_OF_sC_5;
	boolState[required_OF_sC_5_I] = REINITIALISATION_OF_required_OF_sC_5_I;
	boolState[S_OF_sC_5_I] = REINITIALISATION_OF_S_OF_sC_5_I;
	boolState[relevant_evt_OF_sC_5_I] = REINITIALISATION_OF_relevant_evt_OF_sC_5_I;
	boolState[to_be_fired_OF_sC_5_I] = REINITIALISATION_OF_to_be_fired_OF_sC_5_I;
	boolState[required_OF_sD_1] = REINITIALISATION_OF_required_OF_sD_1;
	boolState[S_OF_sD_1] = REINITIALISATION_OF_S_OF_sD_1;
	boolState[relevant_evt_OF_sD_1] = REINITIALISATION_OF_relevant_evt_OF_sD_1;
	boolState[required_OF_sD_1_I] = REINITIALISATION_OF_required_OF_sD_1_I;
	boolState[S_OF_sD_1_I] = REINITIALISATION_OF_S_OF_sD_1_I;
	boolState[relevant_evt_OF_sD_1_I] = REINITIALISATION_OF_relevant_evt_OF_sD_1_I;
	boolState[to_be_fired_OF_sD_1_I] = REINITIALISATION_OF_to_be_fired_OF_sD_1_I;
	boolState[required_OF_sD_2] = REINITIALISATION_OF_required_OF_sD_2;
	boolState[S_OF_sD_2] = REINITIALISATION_OF_S_OF_sD_2;
	boolState[relevant_evt_OF_sD_2] = REINITIALISATION_OF_relevant_evt_OF_sD_2;
	boolState[required_OF_sD_2_I] = REINITIALISATION_OF_required_OF_sD_2_I;
	boolState[S_OF_sD_2_I] = REINITIALISATION_OF_S_OF_sD_2_I;
	boolState[relevant_evt_OF_sD_2_I] = REINITIALISATION_OF_relevant_evt_OF_sD_2_I;
	boolState[to_be_fired_OF_sD_2_I] = REINITIALISATION_OF_to_be_fired_OF_sD_2_I;
	boolState[required_OF_sD_3] = REINITIALISATION_OF_required_OF_sD_3;
	boolState[S_OF_sD_3] = REINITIALISATION_OF_S_OF_sD_3;
	boolState[relevant_evt_OF_sD_3] = REINITIALISATION_OF_relevant_evt_OF_sD_3;
	boolState[required_OF_sD_3_I] = REINITIALISATION_OF_required_OF_sD_3_I;
	boolState[S_OF_sD_3_I] = REINITIALISATION_OF_S_OF_sD_3_I;
	boolState[relevant_evt_OF_sD_3_I] = REINITIALISATION_OF_relevant_evt_OF_sD_3_I;
	boolState[to_be_fired_OF_sD_3_I] = REINITIALISATION_OF_to_be_fired_OF_sD_3_I;
	boolState[required_OF_sD_4] = REINITIALISATION_OF_required_OF_sD_4;
	boolState[S_OF_sD_4] = REINITIALISATION_OF_S_OF_sD_4;
	boolState[relevant_evt_OF_sD_4] = REINITIALISATION_OF_relevant_evt_OF_sD_4;
	boolState[required_OF_sD_4_I] = REINITIALISATION_OF_required_OF_sD_4_I;
	boolState[S_OF_sD_4_I] = REINITIALISATION_OF_S_OF_sD_4_I;
	boolState[relevant_evt_OF_sD_4_I] = REINITIALISATION_OF_relevant_evt_OF_sD_4_I;
	boolState[to_be_fired_OF_sD_4_I] = REINITIALISATION_OF_to_be_fired_OF_sD_4_I;
	boolState[required_OF_sD_5] = REINITIALISATION_OF_required_OF_sD_5;
	boolState[S_OF_sD_5] = REINITIALISATION_OF_S_OF_sD_5;
	boolState[relevant_evt_OF_sD_5] = REINITIALISATION_OF_relevant_evt_OF_sD_5;
	boolState[required_OF_sD_5_I] = REINITIALISATION_OF_required_OF_sD_5_I;
	boolState[S_OF_sD_5_I] = REINITIALISATION_OF_S_OF_sD_5_I;
	boolState[relevant_evt_OF_sD_5_I] = REINITIALISATION_OF_relevant_evt_OF_sD_5_I;
	boolState[to_be_fired_OF_sD_5_I] = REINITIALISATION_OF_to_be_fired_OF_sD_5_I;
	boolState[required_OF_sensor_2] = REINITIALISATION_OF_required_OF_sensor_2;
	boolState[S_OF_sensor_2] = REINITIALISATION_OF_S_OF_sensor_2;
	boolState[relevant_evt_OF_sensor_2] = REINITIALISATION_OF_relevant_evt_OF_sensor_2;
	boolState[required_OF_sensor_3] = REINITIALISATION_OF_required_OF_sensor_3;
	boolState[S_OF_sensor_3] = REINITIALISATION_OF_S_OF_sensor_3;
	boolState[relevant_evt_OF_sensor_3] = REINITIALISATION_OF_relevant_evt_OF_sensor_3;
	boolState[required_OF_sensor_4] = REINITIALISATION_OF_required_OF_sensor_4;
	boolState[S_OF_sensor_4] = REINITIALISATION_OF_S_OF_sensor_4;
	boolState[relevant_evt_OF_sensor_4] = REINITIALISATION_OF_relevant_evt_OF_sensor_4;
	boolState[required_OF_sensor_5] = REINITIALISATION_OF_required_OF_sensor_5;
	boolState[S_OF_sensor_5] = REINITIALISATION_OF_S_OF_sensor_5;
	boolState[relevant_evt_OF_sensor_5] = REINITIALISATION_OF_relevant_evt_OF_sensor_5;
	boolState[required_OF_sensors] = REINITIALISATION_OF_required_OF_sensors;
	boolState[S_OF_sensors] = REINITIALISATION_OF_S_OF_sensors;
	boolState[relevant_evt_OF_sensors] = REINITIALISATION_OF_relevant_evt_OF_sensors;
	boolState[required_OF_sw_1] = REINITIALISATION_OF_required_OF_sw_1;
	boolState[S_OF_sw_1] = REINITIALISATION_OF_S_OF_sw_1;
	boolState[relevant_evt_OF_sw_1] = REINITIALISATION_OF_relevant_evt_OF_sw_1;
	boolState[required_OF_sw_2] = REINITIALISATION_OF_required_OF_sw_2;
	boolState[S_OF_sw_2] = REINITIALISATION_OF_S_OF_sw_2;
	boolState[relevant_evt_OF_sw_2] = REINITIALISATION_OF_relevant_evt_OF_sw_2;
	boolState[required_OF_sw_3] = REINITIALISATION_OF_required_OF_sw_3;
	boolState[S_OF_sw_3] = REINITIALISATION_OF_S_OF_sw_3;
	boolState[relevant_evt_OF_sw_3] = REINITIALISATION_OF_relevant_evt_OF_sw_3;
	boolState[required_OF_sw_4] = REINITIALISATION_OF_required_OF_sw_4;
	boolState[S_OF_sw_4] = REINITIALISATION_OF_S_OF_sw_4;
	boolState[relevant_evt_OF_sw_4] = REINITIALISATION_OF_relevant_evt_OF_sw_4;
	boolState[required_OF_sw_5] = REINITIALISATION_OF_required_OF_sw_5;
	boolState[S_OF_sw_5] = REINITIALISATION_OF_S_OF_sw_5;
	boolState[relevant_evt_OF_sw_5] = REINITIALISATION_OF_relevant_evt_OF_sw_5;
	boolState[required_OF_switch_1] = REINITIALISATION_OF_required_OF_switch_1;
	boolState[S_OF_switch_1] = REINITIALISATION_OF_S_OF_switch_1;
	boolState[relevant_evt_OF_switch_1] = REINITIALISATION_OF_relevant_evt_OF_switch_1;
	boolState[required_OF_switch_2] = REINITIALISATION_OF_required_OF_switch_2;
	boolState[S_OF_switch_2] = REINITIALISATION_OF_S_OF_switch_2;
	boolState[relevant_evt_OF_switch_2] = REINITIALISATION_OF_relevant_evt_OF_switch_2;
	boolState[required_OF_switch_3] = REINITIALISATION_OF_required_OF_switch_3;
	boolState[S_OF_switch_3] = REINITIALISATION_OF_S_OF_switch_3;
	boolState[relevant_evt_OF_switch_3] = REINITIALISATION_OF_relevant_evt_OF_switch_3;
	boolState[required_OF_switch_4] = REINITIALISATION_OF_required_OF_switch_4;
	boolState[S_OF_switch_4] = REINITIALISATION_OF_S_OF_switch_4;
	boolState[relevant_evt_OF_switch_4] = REINITIALISATION_OF_relevant_evt_OF_switch_4;
	boolState[required_OF_switch_5] = REINITIALISATION_OF_required_OF_switch_5;
	boolState[S_OF_switch_5] = REINITIALISATION_OF_S_OF_switch_5;
	boolState[relevant_evt_OF_switch_5] = REINITIALISATION_OF_relevant_evt_OF_switch_5;
}

void storm::figaro::FigaroProgram_rc_5_5_Trim_repair::fireOccurrence(int numFire)
{
	//cout <<">>>>>>>>>>>>>>>>>>>> Fire of occurrence #" << numFire << " <<<<<<<<<<<<<<<<<<<<<<<" << endl;

	if (numFire == 0)
	{
		FIRE_xx10_OF_controller = true;
	}

	if (numFire == 1)
	{
		FIRE_xx11_OF_controller = true;
	}

	if (numFire == 2)
	{
		FIRE_xx10_OF_mp1 = true;
	}

	if (numFire == 3)
	{
		FIRE_xx11_OF_mp1 = true;
	}

	if (numFire == 4)
	{
		FIRE_xx10_OF_mp2 = true;
	}

	if (numFire == 5)
	{
		FIRE_xx11_OF_mp2 = true;
	}

	if (numFire == 6)
	{
		FIRE_xx10_OF_mp3 = true;
	}

	if (numFire == 7)
	{
		FIRE_xx11_OF_mp3 = true;
	}

	if (numFire == 8)
	{
		FIRE_xx10_OF_mp4 = true;
	}

	if (numFire == 9)
	{
		FIRE_xx11_OF_mp4 = true;
	}

	if (numFire == 10)
	{
		FIRE_xx10_OF_mp5 = true;
	}

	if (numFire == 11)
	{
		FIRE_xx11_OF_mp5 = true;
	}

	if (numFire == 12)
	{
		FIRE_xx10_OF_ms1 = true;
	}

	if (numFire == 13)
	{
		FIRE_xx11_OF_ms1 = true;
	}

	if (numFire == 14)
	{
		FIRE_xx10_OF_ms2 = true;
	}

	if (numFire == 15)
	{
		FIRE_xx11_OF_ms2 = true;
	}

	if (numFire == 16)
	{
		FIRE_xx10_OF_ms3 = true;
	}

	if (numFire == 17)
	{
		FIRE_xx11_OF_ms3 = true;
	}

	if (numFire == 18)
	{
		FIRE_xx10_OF_ms4 = true;
	}

	if (numFire == 19)
	{
		FIRE_xx11_OF_ms4 = true;
	}

	if (numFire == 20)
	{
		FIRE_xx10_OF_ms5 = true;
	}

	if (numFire == 21)
	{
		FIRE_xx11_OF_ms5 = true;
	}

	if (numFire == 22)
	{
		FIRE_xx10_OF_network_1 = true;
	}

	if (numFire == 23)
	{
		FIRE_xx11_OF_network_1 = true;
	}

	if (numFire == 24)
	{
		FIRE_xx10_OF_network_2 = true;
	}

	if (numFire == 25)
	{
		FIRE_xx11_OF_network_2 = true;
	}

	if (numFire == 26)
	{
		FIRE_xx10_OF_network_3 = true;
	}

	if (numFire == 27)
	{
		FIRE_xx11_OF_network_3 = true;
	}

	if (numFire == 28)
	{
		FIRE_xx10_OF_network_4 = true;
	}

	if (numFire == 29)
	{
		FIRE_xx11_OF_network_4 = true;
	}

	if (numFire == 30)
	{
		FIRE_xx10_OF_network_5 = true;
	}

	if (numFire == 31)
	{
		FIRE_xx11_OF_network_5 = true;
	}

	if (numFire == 32)
	{
		FIRE_xx10_OF_sA_1 = true;
	}

	if (numFire == 33)
	{
		FIRE_xx11_OF_sA_1 = true;
	}

	if (numFire == 34)
	{
		FIRE_xx23_OF_sA_1_I_INS_34 = true;
	}

	if (numFire == 35)
	{
		FIRE_xx23_OF_sA_1_I_INS_35 = true;
	}

	if (numFire == 36)
	{
		FIRE_xx24_OF_sA_1_I = true;
	}

	if (numFire == 37)
	{
		FIRE_xx10_OF_sA_2 = true;
	}

	if (numFire == 38)
	{
		FIRE_xx11_OF_sA_2 = true;
	}

	if (numFire == 39)
	{
		FIRE_xx23_OF_sA_2_I_INS_39 = true;
	}

	if (numFire == 40)
	{
		FIRE_xx23_OF_sA_2_I_INS_40 = true;
	}

	if (numFire == 41)
	{
		FIRE_xx24_OF_sA_2_I = true;
	}

	if (numFire == 42)
	{
		FIRE_xx10_OF_sA_3 = true;
	}

	if (numFire == 43)
	{
		FIRE_xx11_OF_sA_3 = true;
	}

	if (numFire == 44)
	{
		FIRE_xx23_OF_sA_3_I_INS_44 = true;
	}

	if (numFire == 45)
	{
		FIRE_xx23_OF_sA_3_I_INS_45 = true;
	}

	if (numFire == 46)
	{
		FIRE_xx24_OF_sA_3_I = true;
	}

	if (numFire == 47)
	{
		FIRE_xx10_OF_sA_4 = true;
	}

	if (numFire == 48)
	{
		FIRE_xx11_OF_sA_4 = true;
	}

	if (numFire == 49)
	{
		FIRE_xx23_OF_sA_4_I_INS_49 = true;
	}

	if (numFire == 50)
	{
		FIRE_xx23_OF_sA_4_I_INS_50 = true;
	}

	if (numFire == 51)
	{
		FIRE_xx24_OF_sA_4_I = true;
	}

	if (numFire == 52)
	{
		FIRE_xx10_OF_sA_5 = true;
	}

	if (numFire == 53)
	{
		FIRE_xx11_OF_sA_5 = true;
	}

	if (numFire == 54)
	{
		FIRE_xx23_OF_sA_5_I_INS_54 = true;
	}

	if (numFire == 55)
	{
		FIRE_xx23_OF_sA_5_I_INS_55 = true;
	}

	if (numFire == 56)
	{
		FIRE_xx24_OF_sA_5_I = true;
	}

	if (numFire == 57)
	{
		FIRE_xx10_OF_sB_1 = true;
	}

	if (numFire == 58)
	{
		FIRE_xx11_OF_sB_1 = true;
	}

	if (numFire == 59)
	{
		FIRE_xx23_OF_sB_1_I_INS_59 = true;
	}

	if (numFire == 60)
	{
		FIRE_xx23_OF_sB_1_I_INS_60 = true;
	}

	if (numFire == 61)
	{
		FIRE_xx24_OF_sB_1_I = true;
	}

	if (numFire == 62)
	{
		FIRE_xx10_OF_sB_2 = true;
	}

	if (numFire == 63)
	{
		FIRE_xx11_OF_sB_2 = true;
	}

	if (numFire == 64)
	{
		FIRE_xx23_OF_sB_2_I_INS_64 = true;
	}

	if (numFire == 65)
	{
		FIRE_xx23_OF_sB_2_I_INS_65 = true;
	}

	if (numFire == 66)
	{
		FIRE_xx24_OF_sB_2_I = true;
	}

	if (numFire == 67)
	{
		FIRE_xx10_OF_sB_3 = true;
	}

	if (numFire == 68)
	{
		FIRE_xx11_OF_sB_3 = true;
	}

	if (numFire == 69)
	{
		FIRE_xx23_OF_sB_3_I_INS_69 = true;
	}

	if (numFire == 70)
	{
		FIRE_xx23_OF_sB_3_I_INS_70 = true;
	}

	if (numFire == 71)
	{
		FIRE_xx24_OF_sB_3_I = true;
	}

	if (numFire == 72)
	{
		FIRE_xx10_OF_sB_4 = true;
	}

	if (numFire == 73)
	{
		FIRE_xx11_OF_sB_4 = true;
	}

	if (numFire == 74)
	{
		FIRE_xx23_OF_sB_4_I_INS_74 = true;
	}

	if (numFire == 75)
	{
		FIRE_xx23_OF_sB_4_I_INS_75 = true;
	}

	if (numFire == 76)
	{
		FIRE_xx24_OF_sB_4_I = true;
	}

	if (numFire == 77)
	{
		FIRE_xx10_OF_sB_5 = true;
	}

	if (numFire == 78)
	{
		FIRE_xx11_OF_sB_5 = true;
	}

	if (numFire == 79)
	{
		FIRE_xx23_OF_sB_5_I_INS_79 = true;
	}

	if (numFire == 80)
	{
		FIRE_xx23_OF_sB_5_I_INS_80 = true;
	}

	if (numFire == 81)
	{
		FIRE_xx24_OF_sB_5_I = true;
	}

	if (numFire == 82)
	{
		FIRE_xx10_OF_sC_1 = true;
	}

	if (numFire == 83)
	{
		FIRE_xx11_OF_sC_1 = true;
	}

	if (numFire == 84)
	{
		FIRE_xx23_OF_sC_1_I_INS_84 = true;
	}

	if (numFire == 85)
	{
		FIRE_xx23_OF_sC_1_I_INS_85 = true;
	}

	if (numFire == 86)
	{
		FIRE_xx24_OF_sC_1_I = true;
	}

	if (numFire == 87)
	{
		FIRE_xx10_OF_sC_2 = true;
	}

	if (numFire == 88)
	{
		FIRE_xx11_OF_sC_2 = true;
	}

	if (numFire == 89)
	{
		FIRE_xx23_OF_sC_2_I_INS_89 = true;
	}

	if (numFire == 90)
	{
		FIRE_xx23_OF_sC_2_I_INS_90 = true;
	}

	if (numFire == 91)
	{
		FIRE_xx24_OF_sC_2_I = true;
	}

	if (numFire == 92)
	{
		FIRE_xx10_OF_sC_3 = true;
	}

	if (numFire == 93)
	{
		FIRE_xx11_OF_sC_3 = true;
	}

	if (numFire == 94)
	{
		FIRE_xx23_OF_sC_3_I_INS_94 = true;
	}

	if (numFire == 95)
	{
		FIRE_xx23_OF_sC_3_I_INS_95 = true;
	}

	if (numFire == 96)
	{
		FIRE_xx24_OF_sC_3_I = true;
	}

	if (numFire == 97)
	{
		FIRE_xx10_OF_sC_4 = true;
	}

	if (numFire == 98)
	{
		FIRE_xx11_OF_sC_4 = true;
	}

	if (numFire == 99)
	{
		FIRE_xx23_OF_sC_4_I_INS_99 = true;
	}

	if (numFire == 100)
	{
		FIRE_xx23_OF_sC_4_I_INS_100 = true;
	}

	if (numFire == 101)
	{
		FIRE_xx24_OF_sC_4_I = true;
	}

	if (numFire == 102)
	{
		FIRE_xx10_OF_sC_5 = true;
	}

	if (numFire == 103)
	{
		FIRE_xx11_OF_sC_5 = true;
	}

	if (numFire == 104)
	{
		FIRE_xx23_OF_sC_5_I_INS_104 = true;
	}

	if (numFire == 105)
	{
		FIRE_xx23_OF_sC_5_I_INS_105 = true;
	}

	if (numFire == 106)
	{
		FIRE_xx24_OF_sC_5_I = true;
	}

	if (numFire == 107)
	{
		FIRE_xx10_OF_sD_1 = true;
	}

	if (numFire == 108)
	{
		FIRE_xx11_OF_sD_1 = true;
	}

	if (numFire == 109)
	{
		FIRE_xx23_OF_sD_1_I_INS_109 = true;
	}

	if (numFire == 110)
	{
		FIRE_xx23_OF_sD_1_I_INS_110 = true;
	}

	if (numFire == 111)
	{
		FIRE_xx24_OF_sD_1_I = true;
	}

	if (numFire == 112)
	{
		FIRE_xx10_OF_sD_2 = true;
	}

	if (numFire == 113)
	{
		FIRE_xx11_OF_sD_2 = true;
	}

	if (numFire == 114)
	{
		FIRE_xx23_OF_sD_2_I_INS_114 = true;
	}

	if (numFire == 115)
	{
		FIRE_xx23_OF_sD_2_I_INS_115 = true;
	}

	if (numFire == 116)
	{
		FIRE_xx24_OF_sD_2_I = true;
	}

	if (numFire == 117)
	{
		FIRE_xx10_OF_sD_3 = true;
	}

	if (numFire == 118)
	{
		FIRE_xx11_OF_sD_3 = true;
	}

	if (numFire == 119)
	{
		FIRE_xx23_OF_sD_3_I_INS_119 = true;
	}

	if (numFire == 120)
	{
		FIRE_xx23_OF_sD_3_I_INS_120 = true;
	}

	if (numFire == 121)
	{
		FIRE_xx24_OF_sD_3_I = true;
	}

	if (numFire == 122)
	{
		FIRE_xx10_OF_sD_4 = true;
	}

	if (numFire == 123)
	{
		FIRE_xx11_OF_sD_4 = true;
	}

	if (numFire == 124)
	{
		FIRE_xx23_OF_sD_4_I_INS_124 = true;
	}

	if (numFire == 125)
	{
		FIRE_xx23_OF_sD_4_I_INS_125 = true;
	}

	if (numFire == 126)
	{
		FIRE_xx24_OF_sD_4_I = true;
	}

	if (numFire == 127)
	{
		FIRE_xx10_OF_sD_5 = true;
	}

	if (numFire == 128)
	{
		FIRE_xx11_OF_sD_5 = true;
	}

	if (numFire == 129)
	{
		FIRE_xx23_OF_sD_5_I_INS_129 = true;
	}

	if (numFire == 130)
	{
		FIRE_xx23_OF_sD_5_I_INS_130 = true;
	}

	if (numFire == 131)
	{
		FIRE_xx24_OF_sD_5_I = true;
	}

	if (numFire == 132)
	{
		FIRE_xx10_OF_sw_1 = true;
	}

	if (numFire == 133)
	{
		FIRE_xx11_OF_sw_1 = true;
	}

	if (numFire == 134)
	{
		FIRE_xx10_OF_sw_2 = true;
	}

	if (numFire == 135)
	{
		FIRE_xx11_OF_sw_2 = true;
	}

	if (numFire == 136)
	{
		FIRE_xx10_OF_sw_3 = true;
	}

	if (numFire == 137)
	{
		FIRE_xx11_OF_sw_3 = true;
	}

	if (numFire == 138)
	{
		FIRE_xx10_OF_sw_4 = true;
	}

	if (numFire == 139)
	{
		FIRE_xx11_OF_sw_4 = true;
	}

	if (numFire == 140)
	{
		FIRE_xx10_OF_sw_5 = true;
	}

	if (numFire == 141)
	{
		FIRE_xx11_OF_sw_5 = true;
	}

/* ---------- DECLARATION OF OCCURRENCE RULES------------ */

	// Occurrence xx10_OF_controller
	if ((boolState[failF_OF_controller] == false) && (boolState[required_OF_controller]
&& boolState[relevant_evt_OF_controller])) 
	{
		 
		if (FIRE_xx10_OF_controller)
		{
			boolState[failF_OF_controller]  =  true;
			FIRE_xx10_OF_controller = false;
		}
	}

	// Occurrence xx11_OF_controller
	if (boolState[failF_OF_controller] == true) 
	{
		 
		if (FIRE_xx11_OF_controller)
		{
			boolState[failF_OF_controller]  =  false;
			FIRE_xx11_OF_controller = false;
		}
	}

	// Occurrence xx10_OF_mp1
	if ((boolState[failF_OF_mp1] == false) && (boolState[required_OF_mp1] && boolState[relevant_evt_OF_mp1])) 
	{
		 
		if (FIRE_xx10_OF_mp1)
		{
			boolState[failF_OF_mp1]  =  true;
			FIRE_xx10_OF_mp1 = false;
		}
	}

	// Occurrence xx11_OF_mp1
	if (boolState[failF_OF_mp1] == true) 
	{
		 
		if (FIRE_xx11_OF_mp1)
		{
			boolState[failF_OF_mp1]  =  false;
			FIRE_xx11_OF_mp1 = false;
		}
	}

	// Occurrence xx10_OF_mp2
	if ((boolState[failF_OF_mp2] == false) && (boolState[required_OF_mp2] && boolState[relevant_evt_OF_mp2])) 
	{
		 
		if (FIRE_xx10_OF_mp2)
		{
			boolState[failF_OF_mp2]  =  true;
			FIRE_xx10_OF_mp2 = false;
		}
	}

	// Occurrence xx11_OF_mp2
	if (boolState[failF_OF_mp2] == true) 
	{
		 
		if (FIRE_xx11_OF_mp2)
		{
			boolState[failF_OF_mp2]  =  false;
			FIRE_xx11_OF_mp2 = false;
		}
	}

	// Occurrence xx10_OF_mp3
	if ((boolState[failF_OF_mp3] == false) && (boolState[required_OF_mp3] && boolState[relevant_evt_OF_mp3])) 
	{
		 
		if (FIRE_xx10_OF_mp3)
		{
			boolState[failF_OF_mp3]  =  true;
			FIRE_xx10_OF_mp3 = false;
		}
	}

	// Occurrence xx11_OF_mp3
	if (boolState[failF_OF_mp3] == true) 
	{
		 
		if (FIRE_xx11_OF_mp3)
		{
			boolState[failF_OF_mp3]  =  false;
			FIRE_xx11_OF_mp3 = false;
		}
	}

	// Occurrence xx10_OF_mp4
	if ((boolState[failF_OF_mp4] == false) && (boolState[required_OF_mp4] && boolState[relevant_evt_OF_mp4])) 
	{
		 
		if (FIRE_xx10_OF_mp4)
		{
			boolState[failF_OF_mp4]  =  true;
			FIRE_xx10_OF_mp4 = false;
		}
	}

	// Occurrence xx11_OF_mp4
	if (boolState[failF_OF_mp4] == true) 
	{
		 
		if (FIRE_xx11_OF_mp4)
		{
			boolState[failF_OF_mp4]  =  false;
			FIRE_xx11_OF_mp4 = false;
		}
	}

	// Occurrence xx10_OF_mp5
	if ((boolState[failF_OF_mp5] == false) && (boolState[required_OF_mp5] && boolState[relevant_evt_OF_mp5])) 
	{
		 
		if (FIRE_xx10_OF_mp5)
		{
			boolState[failF_OF_mp5]  =  true;
			FIRE_xx10_OF_mp5 = false;
		}
	}

	// Occurrence xx11_OF_mp5
	if (boolState[failF_OF_mp5] == true) 
	{
		 
		if (FIRE_xx11_OF_mp5)
		{
			boolState[failF_OF_mp5]  =  false;
			FIRE_xx11_OF_mp5 = false;
		}
	}

	// Occurrence xx10_OF_ms1
	if ((boolState[failF_OF_ms1] == false) && (boolState[required_OF_ms1] && boolState[relevant_evt_OF_ms1])) 
	{
		 
		if (FIRE_xx10_OF_ms1)
		{
			boolState[failF_OF_ms1]  =  true;
			FIRE_xx10_OF_ms1 = false;
		}
	}

	// Occurrence xx11_OF_ms1
	if (boolState[failF_OF_ms1] == true) 
	{
		 
		if (FIRE_xx11_OF_ms1)
		{
			boolState[failF_OF_ms1]  =  false;
			FIRE_xx11_OF_ms1 = false;
		}
	}

	// Occurrence xx10_OF_ms2
	if ((boolState[failF_OF_ms2] == false) && (boolState[required_OF_ms2] && boolState[relevant_evt_OF_ms2])) 
	{
		 
		if (FIRE_xx10_OF_ms2)
		{
			boolState[failF_OF_ms2]  =  true;
			FIRE_xx10_OF_ms2 = false;
		}
	}

	// Occurrence xx11_OF_ms2
	if (boolState[failF_OF_ms2] == true) 
	{
		 
		if (FIRE_xx11_OF_ms2)
		{
			boolState[failF_OF_ms2]  =  false;
			FIRE_xx11_OF_ms2 = false;
		}
	}

	// Occurrence xx10_OF_ms3
	if ((boolState[failF_OF_ms3] == false) && (boolState[required_OF_ms3] && boolState[relevant_evt_OF_ms3])) 
	{
		 
		if (FIRE_xx10_OF_ms3)
		{
			boolState[failF_OF_ms3]  =  true;
			FIRE_xx10_OF_ms3 = false;
		}
	}

	// Occurrence xx11_OF_ms3
	if (boolState[failF_OF_ms3] == true) 
	{
		 
		if (FIRE_xx11_OF_ms3)
		{
			boolState[failF_OF_ms3]  =  false;
			FIRE_xx11_OF_ms3 = false;
		}
	}

	// Occurrence xx10_OF_ms4
	if ((boolState[failF_OF_ms4] == false) && (boolState[required_OF_ms4] && boolState[relevant_evt_OF_ms4])) 
	{
		 
		if (FIRE_xx10_OF_ms4)
		{
			boolState[failF_OF_ms4]  =  true;
			FIRE_xx10_OF_ms4 = false;
		}
	}

	// Occurrence xx11_OF_ms4
	if (boolState[failF_OF_ms4] == true) 
	{
		 
		if (FIRE_xx11_OF_ms4)
		{
			boolState[failF_OF_ms4]  =  false;
			FIRE_xx11_OF_ms4 = false;
		}
	}

	// Occurrence xx10_OF_ms5
	if ((boolState[failF_OF_ms5] == false) && (boolState[required_OF_ms5] && boolState[relevant_evt_OF_ms5])) 
	{
		 
		if (FIRE_xx10_OF_ms5)
		{
			boolState[failF_OF_ms5]  =  true;
			FIRE_xx10_OF_ms5 = false;
		}
	}

	// Occurrence xx11_OF_ms5
	if (boolState[failF_OF_ms5] == true) 
	{
		 
		if (FIRE_xx11_OF_ms5)
		{
			boolState[failF_OF_ms5]  =  false;
			FIRE_xx11_OF_ms5 = false;
		}
	}

	// Occurrence xx10_OF_network_1
	if ((boolState[failF_OF_network_1] == false) && (boolState[required_OF_network_1] &&  boolState[relevant_evt_OF_network_1])) 
	{
		 
		if (FIRE_xx10_OF_network_1)
		{
			boolState[failF_OF_network_1]  =  true;
			FIRE_xx10_OF_network_1 = false;
		}
	}

	// Occurrence xx11_OF_network_1
	if (boolState[failF_OF_network_1] == true) 
	{
		 
		if (FIRE_xx11_OF_network_1)
		{
			boolState[failF_OF_network_1]  =  false;
			FIRE_xx11_OF_network_1 = false;
		}
	}

	// Occurrence xx10_OF_network_2
	if ((boolState[failF_OF_network_2] == false) && (boolState[required_OF_network_2] &&  boolState[relevant_evt_OF_network_2])) 
	{
		 
		if (FIRE_xx10_OF_network_2)
		{
			boolState[failF_OF_network_2]  =  true;
			FIRE_xx10_OF_network_2 = false;
		}
	}

	// Occurrence xx11_OF_network_2
	if (boolState[failF_OF_network_2] == true) 
	{
		 
		if (FIRE_xx11_OF_network_2)
		{
			boolState[failF_OF_network_2]  =  false;
			FIRE_xx11_OF_network_2 = false;
		}
	}

	// Occurrence xx10_OF_network_3
	if ((boolState[failF_OF_network_3] == false) && (boolState[required_OF_network_3] &&  boolState[relevant_evt_OF_network_3])) 
	{
		 
		if (FIRE_xx10_OF_network_3)
		{
			boolState[failF_OF_network_3]  =  true;
			FIRE_xx10_OF_network_3 = false;
		}
	}

	// Occurrence xx11_OF_network_3
	if (boolState[failF_OF_network_3] == true) 
	{
		 
		if (FIRE_xx11_OF_network_3)
		{
			boolState[failF_OF_network_3]  =  false;
			FIRE_xx11_OF_network_3 = false;
		}
	}

	// Occurrence xx10_OF_network_4
	if ((boolState[failF_OF_network_4] == false) && (boolState[required_OF_network_4] &&  boolState[relevant_evt_OF_network_4])) 
	{
		 
		if (FIRE_xx10_OF_network_4)
		{
			boolState[failF_OF_network_4]  =  true;
			FIRE_xx10_OF_network_4 = false;
		}
	}

	// Occurrence xx11_OF_network_4
	if (boolState[failF_OF_network_4] == true) 
	{
		 
		if (FIRE_xx11_OF_network_4)
		{
			boolState[failF_OF_network_4]  =  false;
			FIRE_xx11_OF_network_4 = false;
		}
	}

	// Occurrence xx10_OF_network_5
	if ((boolState[failF_OF_network_5] == false) && (boolState[required_OF_network_5] &&  boolState[relevant_evt_OF_network_5])) 
	{
		 
		if (FIRE_xx10_OF_network_5)
		{
			boolState[failF_OF_network_5]  =  true;
			FIRE_xx10_OF_network_5 = false;
		}
	}

	// Occurrence xx11_OF_network_5
	if (boolState[failF_OF_network_5] == true) 
	{
		 
		if (FIRE_xx11_OF_network_5)
		{
			boolState[failF_OF_network_5]  =  false;
			FIRE_xx11_OF_network_5 = false;
		}
	}

	// Occurrence xx10_OF_sA_1
	if ((boolState[failF_OF_sA_1] == false) && (boolState[required_OF_sA_1] &&  boolState[relevant_evt_OF_sA_1])) 
	{
		 
		if (FIRE_xx10_OF_sA_1)
		{
			boolState[failF_OF_sA_1]  =  true;
			FIRE_xx10_OF_sA_1 = false;
		}
	}

	// Occurrence xx11_OF_sA_1
	if (boolState[failF_OF_sA_1] == true) 
	{
		 
		if (FIRE_xx11_OF_sA_1)
		{
			boolState[failF_OF_sA_1]  =  false;
			FIRE_xx11_OF_sA_1 = false;
		}
	}

	// Occurrence xx23_OF_sA_1_I

	if ((boolState[failI_OF_sA_1_I] == false) && (boolState[to_be_fired_OF_sA_1_I] &&
	boolState[relevant_evt_OF_sA_1_I])) 
	{
	
		
		if (FIRE_xx23_OF_sA_1_I_INS_34) 
		{
			boolState[failI_OF_sA_1_I]  =  true;
			boolState[already_standby_OF_sA_1_I]  =  false;
			boolState[already_required_OF_sA_1_I]  =  false;
			FIRE_xx23_OF_sA_1_I_INS_34 = false;
		}
	
	}
	if ((boolState[failI_OF_sA_1_I] == false) && (boolState[to_be_fired_OF_sA_1_I] &&
	boolState[relevant_evt_OF_sA_1_I])) 
	{
	
		
		if (FIRE_xx23_OF_sA_1_I_INS_35) 
		{
			boolState[already_standby_OF_sA_1_I]  =  false;
			boolState[already_required_OF_sA_1_I]  =  false;
			FIRE_xx23_OF_sA_1_I_INS_35 = false;
		}
	
	}
	// Occurrence xx24_OF_sA_1_I
	if (boolState[failI_OF_sA_1_I] == true) 
	{
		 
		if (FIRE_xx24_OF_sA_1_I)
		{
			boolState[failI_OF_sA_1_I]  =  false;
			FIRE_xx24_OF_sA_1_I = false;
		}
	}

	// Occurrence xx10_OF_sA_2
	if ((boolState[failF_OF_sA_2] == false) && (boolState[required_OF_sA_2] &&  boolState[relevant_evt_OF_sA_2])) 
	{
		 
		if (FIRE_xx10_OF_sA_2)
		{
			boolState[failF_OF_sA_2]  =  true;
			FIRE_xx10_OF_sA_2 = false;
		}
	}

	// Occurrence xx11_OF_sA_2
	if (boolState[failF_OF_sA_2] == true) 
	{
		 
		if (FIRE_xx11_OF_sA_2)
		{
			boolState[failF_OF_sA_2]  =  false;
			FIRE_xx11_OF_sA_2 = false;
		}
	}

	// Occurrence xx23_OF_sA_2_I

	if ((boolState[failI_OF_sA_2_I] == false) && (boolState[to_be_fired_OF_sA_2_I] &&
	boolState[relevant_evt_OF_sA_2_I])) 
	{
	
		
		if (FIRE_xx23_OF_sA_2_I_INS_39) 
		{
			boolState[failI_OF_sA_2_I]  =  true;
			boolState[already_standby_OF_sA_2_I]  =  false;
			boolState[already_required_OF_sA_2_I]  =  false;
			FIRE_xx23_OF_sA_2_I_INS_39 = false;
		}
	
	}
	if ((boolState[failI_OF_sA_2_I] == false) && (boolState[to_be_fired_OF_sA_2_I] &&
	boolState[relevant_evt_OF_sA_2_I])) 
	{
	
		
		if (FIRE_xx23_OF_sA_2_I_INS_40) 
		{
			boolState[already_standby_OF_sA_2_I]  =  false;
			boolState[already_required_OF_sA_2_I]  =  false;
			FIRE_xx23_OF_sA_2_I_INS_40 = false;
		}
	
	}
	// Occurrence xx24_OF_sA_2_I
	if (boolState[failI_OF_sA_2_I] == true) 
	{
		 
		if (FIRE_xx24_OF_sA_2_I)
		{
			boolState[failI_OF_sA_2_I]  =  false;
			FIRE_xx24_OF_sA_2_I = false;
		}
	}

	// Occurrence xx10_OF_sA_3
	if ((boolState[failF_OF_sA_3] == false) && (boolState[required_OF_sA_3] &&  boolState[relevant_evt_OF_sA_3])) 
	{
		 
		if (FIRE_xx10_OF_sA_3)
		{
			boolState[failF_OF_sA_3]  =  true;
			FIRE_xx10_OF_sA_3 = false;
		}
	}

	// Occurrence xx11_OF_sA_3
	if (boolState[failF_OF_sA_3] == true) 
	{
		 
		if (FIRE_xx11_OF_sA_3)
		{
			boolState[failF_OF_sA_3]  =  false;
			FIRE_xx11_OF_sA_3 = false;
		}
	}

	// Occurrence xx23_OF_sA_3_I

	if ((boolState[failI_OF_sA_3_I] == false) && (boolState[to_be_fired_OF_sA_3_I] &&
	boolState[relevant_evt_OF_sA_3_I])) 
	{
	
		
		if (FIRE_xx23_OF_sA_3_I_INS_44) 
		{
			boolState[failI_OF_sA_3_I]  =  true;
			boolState[already_standby_OF_sA_3_I]  =  false;
			boolState[already_required_OF_sA_3_I]  =  false;
			FIRE_xx23_OF_sA_3_I_INS_44 = false;
		}
	
	}
	if ((boolState[failI_OF_sA_3_I] == false) && (boolState[to_be_fired_OF_sA_3_I] &&
	boolState[relevant_evt_OF_sA_3_I])) 
	{
	
		
		if (FIRE_xx23_OF_sA_3_I_INS_45) 
		{
			boolState[already_standby_OF_sA_3_I]  =  false;
			boolState[already_required_OF_sA_3_I]  =  false;
			FIRE_xx23_OF_sA_3_I_INS_45 = false;
		}
	
	}
	// Occurrence xx24_OF_sA_3_I
	if (boolState[failI_OF_sA_3_I] == true) 
	{
		 
		if (FIRE_xx24_OF_sA_3_I)
		{
			boolState[failI_OF_sA_3_I]  =  false;
			FIRE_xx24_OF_sA_3_I = false;
		}
	}

	// Occurrence xx10_OF_sA_4
	if ((boolState[failF_OF_sA_4] == false) && (boolState[required_OF_sA_4] &&  boolState[relevant_evt_OF_sA_4])) 
	{
		 
		if (FIRE_xx10_OF_sA_4)
		{
			boolState[failF_OF_sA_4]  =  true;
			FIRE_xx10_OF_sA_4 = false;
		}
	}

	// Occurrence xx11_OF_sA_4
	if (boolState[failF_OF_sA_4] == true) 
	{
		 
		if (FIRE_xx11_OF_sA_4)
		{
			boolState[failF_OF_sA_4]  =  false;
			FIRE_xx11_OF_sA_4 = false;
		}
	}

	// Occurrence xx23_OF_sA_4_I

	if ((boolState[failI_OF_sA_4_I] == false) && (boolState[to_be_fired_OF_sA_4_I] &&
	boolState[relevant_evt_OF_sA_4_I])) 
	{
	
		
		if (FIRE_xx23_OF_sA_4_I_INS_49) 
		{
			boolState[failI_OF_sA_4_I]  =  true;
			boolState[already_standby_OF_sA_4_I]  =  false;
			boolState[already_required_OF_sA_4_I]  =  false;
			FIRE_xx23_OF_sA_4_I_INS_49 = false;
		}
	
	}
	if ((boolState[failI_OF_sA_4_I] == false) && (boolState[to_be_fired_OF_sA_4_I] &&
	boolState[relevant_evt_OF_sA_4_I])) 
	{
	
		
		if (FIRE_xx23_OF_sA_4_I_INS_50) 
		{
			boolState[already_standby_OF_sA_4_I]  =  false;
			boolState[already_required_OF_sA_4_I]  =  false;
			FIRE_xx23_OF_sA_4_I_INS_50 = false;
		}
	
	}
	// Occurrence xx24_OF_sA_4_I
	if (boolState[failI_OF_sA_4_I] == true) 
	{
		 
		if (FIRE_xx24_OF_sA_4_I)
		{
			boolState[failI_OF_sA_4_I]  =  false;
			FIRE_xx24_OF_sA_4_I = false;
		}
	}

	// Occurrence xx10_OF_sA_5
	if ((boolState[failF_OF_sA_5] == false) && (boolState[required_OF_sA_5] &&  boolState[relevant_evt_OF_sA_5])) 
	{
		 
		if (FIRE_xx10_OF_sA_5)
		{
			boolState[failF_OF_sA_5]  =  true;
			FIRE_xx10_OF_sA_5 = false;
		}
	}

	// Occurrence xx11_OF_sA_5
	if (boolState[failF_OF_sA_5] == true) 
	{
		 
		if (FIRE_xx11_OF_sA_5)
		{
			boolState[failF_OF_sA_5]  =  false;
			FIRE_xx11_OF_sA_5 = false;
		}
	}

	// Occurrence xx23_OF_sA_5_I

	if ((boolState[failI_OF_sA_5_I] == false) && (boolState[to_be_fired_OF_sA_5_I] &&
	boolState[relevant_evt_OF_sA_5_I])) 
	{
	
		
		if (FIRE_xx23_OF_sA_5_I_INS_54) 
		{
			boolState[failI_OF_sA_5_I]  =  true;
			boolState[already_standby_OF_sA_5_I]  =  false;
			boolState[already_required_OF_sA_5_I]  =  false;
			FIRE_xx23_OF_sA_5_I_INS_54 = false;
		}
	
	}
	if ((boolState[failI_OF_sA_5_I] == false) && (boolState[to_be_fired_OF_sA_5_I] &&
	boolState[relevant_evt_OF_sA_5_I])) 
	{
	
		
		if (FIRE_xx23_OF_sA_5_I_INS_55) 
		{
			boolState[already_standby_OF_sA_5_I]  =  false;
			boolState[already_required_OF_sA_5_I]  =  false;
			FIRE_xx23_OF_sA_5_I_INS_55 = false;
		}
	
	}
	// Occurrence xx24_OF_sA_5_I
	if (boolState[failI_OF_sA_5_I] == true) 
	{
		 
		if (FIRE_xx24_OF_sA_5_I)
		{
			boolState[failI_OF_sA_5_I]  =  false;
			FIRE_xx24_OF_sA_5_I = false;
		}
	}

	// Occurrence xx10_OF_sB_1
	if ((boolState[failF_OF_sB_1] == false) && (boolState[required_OF_sB_1] &&  boolState[relevant_evt_OF_sB_1])) 
	{
		 
		if (FIRE_xx10_OF_sB_1)
		{
			boolState[failF_OF_sB_1]  =  true;
			FIRE_xx10_OF_sB_1 = false;
		}
	}

	// Occurrence xx11_OF_sB_1
	if (boolState[failF_OF_sB_1] == true) 
	{
		 
		if (FIRE_xx11_OF_sB_1)
		{
			boolState[failF_OF_sB_1]  =  false;
			FIRE_xx11_OF_sB_1 = false;
		}
	}

	// Occurrence xx23_OF_sB_1_I

	if ((boolState[failI_OF_sB_1_I] == false) && (boolState[to_be_fired_OF_sB_1_I] &&
	boolState[relevant_evt_OF_sB_1_I])) 
	{
	
		
		if (FIRE_xx23_OF_sB_1_I_INS_59) 
		{
			boolState[failI_OF_sB_1_I]  =  true;
			boolState[already_standby_OF_sB_1_I]  =  false;
			boolState[already_required_OF_sB_1_I]  =  false;
			FIRE_xx23_OF_sB_1_I_INS_59 = false;
		}
	
	}
	if ((boolState[failI_OF_sB_1_I] == false) && (boolState[to_be_fired_OF_sB_1_I] &&
	boolState[relevant_evt_OF_sB_1_I])) 
	{
	
		
		if (FIRE_xx23_OF_sB_1_I_INS_60) 
		{
			boolState[already_standby_OF_sB_1_I]  =  false;
			boolState[already_required_OF_sB_1_I]  =  false;
			FIRE_xx23_OF_sB_1_I_INS_60 = false;
		}
	
	}
	// Occurrence xx24_OF_sB_1_I
	if (boolState[failI_OF_sB_1_I] == true) 
	{
		 
		if (FIRE_xx24_OF_sB_1_I)
		{
			boolState[failI_OF_sB_1_I]  =  false;
			FIRE_xx24_OF_sB_1_I = false;
		}
	}

	// Occurrence xx10_OF_sB_2
	if ((boolState[failF_OF_sB_2] == false) && (boolState[required_OF_sB_2] &&  boolState[relevant_evt_OF_sB_2])) 
	{
		 
		if (FIRE_xx10_OF_sB_2)
		{
			boolState[failF_OF_sB_2]  =  true;
			FIRE_xx10_OF_sB_2 = false;
		}
	}

	// Occurrence xx11_OF_sB_2
	if (boolState[failF_OF_sB_2] == true) 
	{
		 
		if (FIRE_xx11_OF_sB_2)
		{
			boolState[failF_OF_sB_2]  =  false;
			FIRE_xx11_OF_sB_2 = false;
		}
	}

	// Occurrence xx23_OF_sB_2_I

	if ((boolState[failI_OF_sB_2_I] == false) && (boolState[to_be_fired_OF_sB_2_I] &&
	boolState[relevant_evt_OF_sB_2_I])) 
	{
	
		
		if (FIRE_xx23_OF_sB_2_I_INS_64) 
		{
			boolState[failI_OF_sB_2_I]  =  true;
			boolState[already_standby_OF_sB_2_I]  =  false;
			boolState[already_required_OF_sB_2_I]  =  false;
			FIRE_xx23_OF_sB_2_I_INS_64 = false;
		}
	
	}
	if ((boolState[failI_OF_sB_2_I] == false) && (boolState[to_be_fired_OF_sB_2_I] &&
	boolState[relevant_evt_OF_sB_2_I])) 
	{
	
		
		if (FIRE_xx23_OF_sB_2_I_INS_65) 
		{
			boolState[already_standby_OF_sB_2_I]  =  false;
			boolState[already_required_OF_sB_2_I]  =  false;
			FIRE_xx23_OF_sB_2_I_INS_65 = false;
		}
	
	}
	// Occurrence xx24_OF_sB_2_I
	if (boolState[failI_OF_sB_2_I] == true) 
	{
		 
		if (FIRE_xx24_OF_sB_2_I)
		{
			boolState[failI_OF_sB_2_I]  =  false;
			FIRE_xx24_OF_sB_2_I = false;
		}
	}

	// Occurrence xx10_OF_sB_3
	if ((boolState[failF_OF_sB_3] == false) && (boolState[required_OF_sB_3] &&  boolState[relevant_evt_OF_sB_3])) 
	{
		 
		if (FIRE_xx10_OF_sB_3)
		{
			boolState[failF_OF_sB_3]  =  true;
			FIRE_xx10_OF_sB_3 = false;
		}
	}

	// Occurrence xx11_OF_sB_3
	if (boolState[failF_OF_sB_3] == true) 
	{
		 
		if (FIRE_xx11_OF_sB_3)
		{
			boolState[failF_OF_sB_3]  =  false;
			FIRE_xx11_OF_sB_3 = false;
		}
	}

	// Occurrence xx23_OF_sB_3_I

	if ((boolState[failI_OF_sB_3_I] == false) && (boolState[to_be_fired_OF_sB_3_I] &&
	boolState[relevant_evt_OF_sB_3_I])) 
	{
	
		
		if (FIRE_xx23_OF_sB_3_I_INS_69) 
		{
			boolState[failI_OF_sB_3_I]  =  true;
			boolState[already_standby_OF_sB_3_I]  =  false;
			boolState[already_required_OF_sB_3_I]  =  false;
			FIRE_xx23_OF_sB_3_I_INS_69 = false;
		}
	
	}
	if ((boolState[failI_OF_sB_3_I] == false) && (boolState[to_be_fired_OF_sB_3_I] &&
	boolState[relevant_evt_OF_sB_3_I])) 
	{
	
		
		if (FIRE_xx23_OF_sB_3_I_INS_70) 
		{
			boolState[already_standby_OF_sB_3_I]  =  false;
			boolState[already_required_OF_sB_3_I]  =  false;
			FIRE_xx23_OF_sB_3_I_INS_70 = false;
		}
	
	}
	// Occurrence xx24_OF_sB_3_I
	if (boolState[failI_OF_sB_3_I] == true) 
	{
		 
		if (FIRE_xx24_OF_sB_3_I)
		{
			boolState[failI_OF_sB_3_I]  =  false;
			FIRE_xx24_OF_sB_3_I = false;
		}
	}

	// Occurrence xx10_OF_sB_4
	if ((boolState[failF_OF_sB_4] == false) && (boolState[required_OF_sB_4] &&  boolState[relevant_evt_OF_sB_4])) 
	{
		 
		if (FIRE_xx10_OF_sB_4)
		{
			boolState[failF_OF_sB_4]  =  true;
			FIRE_xx10_OF_sB_4 = false;
		}
	}

	// Occurrence xx11_OF_sB_4
	if (boolState[failF_OF_sB_4] == true) 
	{
		 
		if (FIRE_xx11_OF_sB_4)
		{
			boolState[failF_OF_sB_4]  =  false;
			FIRE_xx11_OF_sB_4 = false;
		}
	}

	// Occurrence xx23_OF_sB_4_I

	if ((boolState[failI_OF_sB_4_I] == false) && (boolState[to_be_fired_OF_sB_4_I] &&
	boolState[relevant_evt_OF_sB_4_I])) 
	{
	
		
		if (FIRE_xx23_OF_sB_4_I_INS_74) 
		{
			boolState[failI_OF_sB_4_I]  =  true;
			boolState[already_standby_OF_sB_4_I]  =  false;
			boolState[already_required_OF_sB_4_I]  =  false;
			FIRE_xx23_OF_sB_4_I_INS_74 = false;
		}
	
	}
	if ((boolState[failI_OF_sB_4_I] == false) && (boolState[to_be_fired_OF_sB_4_I] &&
	boolState[relevant_evt_OF_sB_4_I])) 
	{
	
		
		if (FIRE_xx23_OF_sB_4_I_INS_75) 
		{
			boolState[already_standby_OF_sB_4_I]  =  false;
			boolState[already_required_OF_sB_4_I]  =  false;
			FIRE_xx23_OF_sB_4_I_INS_75 = false;
		}
	
	}
	// Occurrence xx24_OF_sB_4_I
	if (boolState[failI_OF_sB_4_I] == true) 
	{
		 
		if (FIRE_xx24_OF_sB_4_I)
		{
			boolState[failI_OF_sB_4_I]  =  false;
			FIRE_xx24_OF_sB_4_I = false;
		}
	}

	// Occurrence xx10_OF_sB_5
	if ((boolState[failF_OF_sB_5] == false) && (boolState[required_OF_sB_5] &&  boolState[relevant_evt_OF_sB_5])) 
	{
		 
		if (FIRE_xx10_OF_sB_5)
		{
			boolState[failF_OF_sB_5]  =  true;
			FIRE_xx10_OF_sB_5 = false;
		}
	}

	// Occurrence xx11_OF_sB_5
	if (boolState[failF_OF_sB_5] == true) 
	{
		 
		if (FIRE_xx11_OF_sB_5)
		{
			boolState[failF_OF_sB_5]  =  false;
			FIRE_xx11_OF_sB_5 = false;
		}
	}

	// Occurrence xx23_OF_sB_5_I

	if ((boolState[failI_OF_sB_5_I] == false) && (boolState[to_be_fired_OF_sB_5_I] &&
	boolState[relevant_evt_OF_sB_5_I])) 
	{
	
		
		if (FIRE_xx23_OF_sB_5_I_INS_79) 
		{
			boolState[failI_OF_sB_5_I]  =  true;
			boolState[already_standby_OF_sB_5_I]  =  false;
			boolState[already_required_OF_sB_5_I]  =  false;
			FIRE_xx23_OF_sB_5_I_INS_79 = false;
		}
	
	}
	if ((boolState[failI_OF_sB_5_I] == false) && (boolState[to_be_fired_OF_sB_5_I] &&
	boolState[relevant_evt_OF_sB_5_I])) 
	{
	
		
		if (FIRE_xx23_OF_sB_5_I_INS_80) 
		{
			boolState[already_standby_OF_sB_5_I]  =  false;
			boolState[already_required_OF_sB_5_I]  =  false;
			FIRE_xx23_OF_sB_5_I_INS_80 = false;
		}
	
	}
	// Occurrence xx24_OF_sB_5_I
	if (boolState[failI_OF_sB_5_I] == true) 
	{
		 
		if (FIRE_xx24_OF_sB_5_I)
		{
			boolState[failI_OF_sB_5_I]  =  false;
			FIRE_xx24_OF_sB_5_I = false;
		}
	}

	// Occurrence xx10_OF_sC_1
	if ((boolState[failF_OF_sC_1] == false) && (boolState[required_OF_sC_1] &&  boolState[relevant_evt_OF_sC_1])) 
	{
		 
		if (FIRE_xx10_OF_sC_1)
		{
			boolState[failF_OF_sC_1]  =  true;
			FIRE_xx10_OF_sC_1 = false;
		}
	}

	// Occurrence xx11_OF_sC_1
	if (boolState[failF_OF_sC_1] == true) 
	{
		 
		if (FIRE_xx11_OF_sC_1)
		{
			boolState[failF_OF_sC_1]  =  false;
			FIRE_xx11_OF_sC_1 = false;
		}
	}

	// Occurrence xx23_OF_sC_1_I

	if ((boolState[failI_OF_sC_1_I] == false) && (boolState[to_be_fired_OF_sC_1_I] &&
	boolState[relevant_evt_OF_sC_1_I])) 
	{
	
		
		if (FIRE_xx23_OF_sC_1_I_INS_84) 
		{
			boolState[failI_OF_sC_1_I]  =  true;
			boolState[already_standby_OF_sC_1_I]  =  false;
			boolState[already_required_OF_sC_1_I]  =  false;
			FIRE_xx23_OF_sC_1_I_INS_84 = false;
		}
	
	}
	if ((boolState[failI_OF_sC_1_I] == false) && (boolState[to_be_fired_OF_sC_1_I] &&
	boolState[relevant_evt_OF_sC_1_I])) 
	{
	
		
		if (FIRE_xx23_OF_sC_1_I_INS_85) 
		{
			boolState[already_standby_OF_sC_1_I]  =  false;
			boolState[already_required_OF_sC_1_I]  =  false;
			FIRE_xx23_OF_sC_1_I_INS_85 = false;
		}
	
	}
	// Occurrence xx24_OF_sC_1_I
	if (boolState[failI_OF_sC_1_I] == true) 
	{
		 
		if (FIRE_xx24_OF_sC_1_I)
		{
			boolState[failI_OF_sC_1_I]  =  false;
			FIRE_xx24_OF_sC_1_I = false;
		}
	}

	// Occurrence xx10_OF_sC_2
	if ((boolState[failF_OF_sC_2] == false) && (boolState[required_OF_sC_2] &&  boolState[relevant_evt_OF_sC_2])) 
	{
		 
		if (FIRE_xx10_OF_sC_2)
		{
			boolState[failF_OF_sC_2]  =  true;
			FIRE_xx10_OF_sC_2 = false;
		}
	}

	// Occurrence xx11_OF_sC_2
	if (boolState[failF_OF_sC_2] == true) 
	{
		 
		if (FIRE_xx11_OF_sC_2)
		{
			boolState[failF_OF_sC_2]  =  false;
			FIRE_xx11_OF_sC_2 = false;
		}
	}

	// Occurrence xx23_OF_sC_2_I

	if ((boolState[failI_OF_sC_2_I] == false) && (boolState[to_be_fired_OF_sC_2_I] &&
	boolState[relevant_evt_OF_sC_2_I])) 
	{
	
		
		if (FIRE_xx23_OF_sC_2_I_INS_89) 
		{
			boolState[failI_OF_sC_2_I]  =  true;
			boolState[already_standby_OF_sC_2_I]  =  false;
			boolState[already_required_OF_sC_2_I]  =  false;
			FIRE_xx23_OF_sC_2_I_INS_89 = false;
		}
	
	}
	if ((boolState[failI_OF_sC_2_I] == false) && (boolState[to_be_fired_OF_sC_2_I] &&
	boolState[relevant_evt_OF_sC_2_I])) 
	{
	
		
		if (FIRE_xx23_OF_sC_2_I_INS_90) 
		{
			boolState[already_standby_OF_sC_2_I]  =  false;
			boolState[already_required_OF_sC_2_I]  =  false;
			FIRE_xx23_OF_sC_2_I_INS_90 = false;
		}
	
	}
	// Occurrence xx24_OF_sC_2_I
	if (boolState[failI_OF_sC_2_I] == true) 
	{
		 
		if (FIRE_xx24_OF_sC_2_I)
		{
			boolState[failI_OF_sC_2_I]  =  false;
			FIRE_xx24_OF_sC_2_I = false;
		}
	}

	// Occurrence xx10_OF_sC_3
	if ((boolState[failF_OF_sC_3] == false) && (boolState[required_OF_sC_3] &&  boolState[relevant_evt_OF_sC_3])) 
	{
		 
		if (FIRE_xx10_OF_sC_3)
		{
			boolState[failF_OF_sC_3]  =  true;
			FIRE_xx10_OF_sC_3 = false;
		}
	}

	// Occurrence xx11_OF_sC_3
	if (boolState[failF_OF_sC_3] == true) 
	{
		 
		if (FIRE_xx11_OF_sC_3)
		{
			boolState[failF_OF_sC_3]  =  false;
			FIRE_xx11_OF_sC_3 = false;
		}
	}

	// Occurrence xx23_OF_sC_3_I

	if ((boolState[failI_OF_sC_3_I] == false) && (boolState[to_be_fired_OF_sC_3_I] &&
	boolState[relevant_evt_OF_sC_3_I])) 
	{
	
		
		if (FIRE_xx23_OF_sC_3_I_INS_94) 
		{
			boolState[failI_OF_sC_3_I]  =  true;
			boolState[already_standby_OF_sC_3_I]  =  false;
			boolState[already_required_OF_sC_3_I]  =  false;
			FIRE_xx23_OF_sC_3_I_INS_94 = false;
		}
	
	}
	if ((boolState[failI_OF_sC_3_I] == false) && (boolState[to_be_fired_OF_sC_3_I] &&
	boolState[relevant_evt_OF_sC_3_I])) 
	{
	
		
		if (FIRE_xx23_OF_sC_3_I_INS_95) 
		{
			boolState[already_standby_OF_sC_3_I]  =  false;
			boolState[already_required_OF_sC_3_I]  =  false;
			FIRE_xx23_OF_sC_3_I_INS_95 = false;
		}
	
	}
	// Occurrence xx24_OF_sC_3_I
	if (boolState[failI_OF_sC_3_I] == true) 
	{
		 
		if (FIRE_xx24_OF_sC_3_I)
		{
			boolState[failI_OF_sC_3_I]  =  false;
			FIRE_xx24_OF_sC_3_I = false;
		}
	}

	// Occurrence xx10_OF_sC_4
	if ((boolState[failF_OF_sC_4] == false) && (boolState[required_OF_sC_4] &&  boolState[relevant_evt_OF_sC_4])) 
	{
		 
		if (FIRE_xx10_OF_sC_4)
		{
			boolState[failF_OF_sC_4]  =  true;
			FIRE_xx10_OF_sC_4 = false;
		}
	}

	// Occurrence xx11_OF_sC_4
	if (boolState[failF_OF_sC_4] == true) 
	{
		 
		if (FIRE_xx11_OF_sC_4)
		{
			boolState[failF_OF_sC_4]  =  false;
			FIRE_xx11_OF_sC_4 = false;
		}
	}

	// Occurrence xx23_OF_sC_4_I

	if ((boolState[failI_OF_sC_4_I] == false) && (boolState[to_be_fired_OF_sC_4_I] &&
	boolState[relevant_evt_OF_sC_4_I])) 
	{
	
		
		if (FIRE_xx23_OF_sC_4_I_INS_99) 
		{
			boolState[failI_OF_sC_4_I]  =  true;
			boolState[already_standby_OF_sC_4_I]  =  false;
			boolState[already_required_OF_sC_4_I]  =  false;
			FIRE_xx23_OF_sC_4_I_INS_99 = false;
		}
	
	}
	if ((boolState[failI_OF_sC_4_I] == false) && (boolState[to_be_fired_OF_sC_4_I] &&
	boolState[relevant_evt_OF_sC_4_I])) 
	{
	
		
		if (FIRE_xx23_OF_sC_4_I_INS_100) 
		{
			boolState[already_standby_OF_sC_4_I]  =  false;
			boolState[already_required_OF_sC_4_I]  =  false;
			FIRE_xx23_OF_sC_4_I_INS_100 = false;
		}
	
	}
	// Occurrence xx24_OF_sC_4_I
	if (boolState[failI_OF_sC_4_I] == true) 
	{
		 
		if (FIRE_xx24_OF_sC_4_I)
		{
			boolState[failI_OF_sC_4_I]  =  false;
			FIRE_xx24_OF_sC_4_I = false;
		}
	}

	// Occurrence xx10_OF_sC_5
	if ((boolState[failF_OF_sC_5] == false) && (boolState[required_OF_sC_5] &&  boolState[relevant_evt_OF_sC_5])) 
	{
		 
		if (FIRE_xx10_OF_sC_5)
		{
			boolState[failF_OF_sC_5]  =  true;
			FIRE_xx10_OF_sC_5 = false;
		}
	}

	// Occurrence xx11_OF_sC_5
	if (boolState[failF_OF_sC_5] == true) 
	{
		 
		if (FIRE_xx11_OF_sC_5)
		{
			boolState[failF_OF_sC_5]  =  false;
			FIRE_xx11_OF_sC_5 = false;
		}
	}

	// Occurrence xx23_OF_sC_5_I

	if ((boolState[failI_OF_sC_5_I] == false) && (boolState[to_be_fired_OF_sC_5_I] &&
	boolState[relevant_evt_OF_sC_5_I])) 
	{
	
		
		if (FIRE_xx23_OF_sC_5_I_INS_104) 
		{
			boolState[failI_OF_sC_5_I]  =  true;
			boolState[already_standby_OF_sC_5_I]  =  false;
			boolState[already_required_OF_sC_5_I]  =  false;
			FIRE_xx23_OF_sC_5_I_INS_104 = false;
		}
	
	}
	if ((boolState[failI_OF_sC_5_I] == false) && (boolState[to_be_fired_OF_sC_5_I] &&
	boolState[relevant_evt_OF_sC_5_I])) 
	{
	
		
		if (FIRE_xx23_OF_sC_5_I_INS_105) 
		{
			boolState[already_standby_OF_sC_5_I]  =  false;
			boolState[already_required_OF_sC_5_I]  =  false;
			FIRE_xx23_OF_sC_5_I_INS_105 = false;
		}
	
	}
	// Occurrence xx24_OF_sC_5_I
	if (boolState[failI_OF_sC_5_I] == true) 
	{
		 
		if (FIRE_xx24_OF_sC_5_I)
		{
			boolState[failI_OF_sC_5_I]  =  false;
			FIRE_xx24_OF_sC_5_I = false;
		}
	}

	// Occurrence xx10_OF_sD_1
	if ((boolState[failF_OF_sD_1] == false) && (boolState[required_OF_sD_1] &&  boolState[relevant_evt_OF_sD_1])) 
	{
		 
		if (FIRE_xx10_OF_sD_1)
		{
			boolState[failF_OF_sD_1]  =  true;
			FIRE_xx10_OF_sD_1 = false;
		}
	}

	// Occurrence xx11_OF_sD_1
	if (boolState[failF_OF_sD_1] == true) 
	{
		 
		if (FIRE_xx11_OF_sD_1)
		{
			boolState[failF_OF_sD_1]  =  false;
			FIRE_xx11_OF_sD_1 = false;
		}
	}

	// Occurrence xx23_OF_sD_1_I

	if ((boolState[failI_OF_sD_1_I] == false) && (boolState[to_be_fired_OF_sD_1_I] &&
	boolState[relevant_evt_OF_sD_1_I])) 
	{
	
		
		if (FIRE_xx23_OF_sD_1_I_INS_109) 
		{
			boolState[failI_OF_sD_1_I]  =  true;
			boolState[already_standby_OF_sD_1_I]  =  false;
			boolState[already_required_OF_sD_1_I]  =  false;
			FIRE_xx23_OF_sD_1_I_INS_109 = false;
		}
	
	}
	if ((boolState[failI_OF_sD_1_I] == false) && (boolState[to_be_fired_OF_sD_1_I] &&
	boolState[relevant_evt_OF_sD_1_I])) 
	{
	
		
		if (FIRE_xx23_OF_sD_1_I_INS_110) 
		{
			boolState[already_standby_OF_sD_1_I]  =  false;
			boolState[already_required_OF_sD_1_I]  =  false;
			FIRE_xx23_OF_sD_1_I_INS_110 = false;
		}
	
	}
	// Occurrence xx24_OF_sD_1_I
	if (boolState[failI_OF_sD_1_I] == true) 
	{
		 
		if (FIRE_xx24_OF_sD_1_I)
		{
			boolState[failI_OF_sD_1_I]  =  false;
			FIRE_xx24_OF_sD_1_I = false;
		}
	}

	// Occurrence xx10_OF_sD_2
	if ((boolState[failF_OF_sD_2] == false) && (boolState[required_OF_sD_2] &&  boolState[relevant_evt_OF_sD_2])) 
	{
		 
		if (FIRE_xx10_OF_sD_2)
		{
			boolState[failF_OF_sD_2]  =  true;
			FIRE_xx10_OF_sD_2 = false;
		}
	}

	// Occurrence xx11_OF_sD_2
	if (boolState[failF_OF_sD_2] == true) 
	{
		 
		if (FIRE_xx11_OF_sD_2)
		{
			boolState[failF_OF_sD_2]  =  false;
			FIRE_xx11_OF_sD_2 = false;
		}
	}

	// Occurrence xx23_OF_sD_2_I

	if ((boolState[failI_OF_sD_2_I] == false) && (boolState[to_be_fired_OF_sD_2_I] &&
	boolState[relevant_evt_OF_sD_2_I])) 
	{
	
		
		if (FIRE_xx23_OF_sD_2_I_INS_114) 
		{
			boolState[failI_OF_sD_2_I]  =  true;
			boolState[already_standby_OF_sD_2_I]  =  false;
			boolState[already_required_OF_sD_2_I]  =  false;
			FIRE_xx23_OF_sD_2_I_INS_114 = false;
		}
	
	}
	if ((boolState[failI_OF_sD_2_I] == false) && (boolState[to_be_fired_OF_sD_2_I] &&
	boolState[relevant_evt_OF_sD_2_I])) 
	{
	
		
		if (FIRE_xx23_OF_sD_2_I_INS_115) 
		{
			boolState[already_standby_OF_sD_2_I]  =  false;
			boolState[already_required_OF_sD_2_I]  =  false;
			FIRE_xx23_OF_sD_2_I_INS_115 = false;
		}
	
	}
	// Occurrence xx24_OF_sD_2_I
	if (boolState[failI_OF_sD_2_I] == true) 
	{
		 
		if (FIRE_xx24_OF_sD_2_I)
		{
			boolState[failI_OF_sD_2_I]  =  false;
			FIRE_xx24_OF_sD_2_I = false;
		}
	}

	// Occurrence xx10_OF_sD_3
	if ((boolState[failF_OF_sD_3] == false) && (boolState[required_OF_sD_3] &&  boolState[relevant_evt_OF_sD_3])) 
	{
		 
		if (FIRE_xx10_OF_sD_3)
		{
			boolState[failF_OF_sD_3]  =  true;
			FIRE_xx10_OF_sD_3 = false;
		}
	}

	// Occurrence xx11_OF_sD_3
	if (boolState[failF_OF_sD_3] == true) 
	{
		 
		if (FIRE_xx11_OF_sD_3)
		{
			boolState[failF_OF_sD_3]  =  false;
			FIRE_xx11_OF_sD_3 = false;
		}
	}

	// Occurrence xx23_OF_sD_3_I

	if ((boolState[failI_OF_sD_3_I] == false) && (boolState[to_be_fired_OF_sD_3_I] &&
	boolState[relevant_evt_OF_sD_3_I])) 
	{
	
		
		if (FIRE_xx23_OF_sD_3_I_INS_119) 
		{
			boolState[failI_OF_sD_3_I]  =  true;
			boolState[already_standby_OF_sD_3_I]  =  false;
			boolState[already_required_OF_sD_3_I]  =  false;
			FIRE_xx23_OF_sD_3_I_INS_119 = false;
		}
	
	}
	if ((boolState[failI_OF_sD_3_I] == false) && (boolState[to_be_fired_OF_sD_3_I] &&
	boolState[relevant_evt_OF_sD_3_I])) 
	{
	
		
		if (FIRE_xx23_OF_sD_3_I_INS_120) 
		{
			boolState[already_standby_OF_sD_3_I]  =  false;
			boolState[already_required_OF_sD_3_I]  =  false;
			FIRE_xx23_OF_sD_3_I_INS_120 = false;
		}
	
	}
	// Occurrence xx24_OF_sD_3_I
	if (boolState[failI_OF_sD_3_I] == true) 
	{
		 
		if (FIRE_xx24_OF_sD_3_I)
		{
			boolState[failI_OF_sD_3_I]  =  false;
			FIRE_xx24_OF_sD_3_I = false;
		}
	}

	// Occurrence xx10_OF_sD_4
	if ((boolState[failF_OF_sD_4] == false) && (boolState[required_OF_sD_4] &&  boolState[relevant_evt_OF_sD_4])) 
	{
		 
		if (FIRE_xx10_OF_sD_4)
		{
			boolState[failF_OF_sD_4]  =  true;
			FIRE_xx10_OF_sD_4 = false;
		}
	}

	// Occurrence xx11_OF_sD_4
	if (boolState[failF_OF_sD_4] == true) 
	{
		 
		if (FIRE_xx11_OF_sD_4)
		{
			boolState[failF_OF_sD_4]  =  false;
			FIRE_xx11_OF_sD_4 = false;
		}
	}

	// Occurrence xx23_OF_sD_4_I

	if ((boolState[failI_OF_sD_4_I] == false) && (boolState[to_be_fired_OF_sD_4_I] &&
	boolState[relevant_evt_OF_sD_4_I])) 
	{
	
		
		if (FIRE_xx23_OF_sD_4_I_INS_124) 
		{
			boolState[failI_OF_sD_4_I]  =  true;
			boolState[already_standby_OF_sD_4_I]  =  false;
			boolState[already_required_OF_sD_4_I]  =  false;
			FIRE_xx23_OF_sD_4_I_INS_124 = false;
		}
	
	}
	if ((boolState[failI_OF_sD_4_I] == false) && (boolState[to_be_fired_OF_sD_4_I] &&
	boolState[relevant_evt_OF_sD_4_I])) 
	{
	
		
		if (FIRE_xx23_OF_sD_4_I_INS_125) 
		{
			boolState[already_standby_OF_sD_4_I]  =  false;
			boolState[already_required_OF_sD_4_I]  =  false;
			FIRE_xx23_OF_sD_4_I_INS_125 = false;
		}
	
	}
	// Occurrence xx24_OF_sD_4_I
	if (boolState[failI_OF_sD_4_I] == true) 
	{
		 
		if (FIRE_xx24_OF_sD_4_I)
		{
			boolState[failI_OF_sD_4_I]  =  false;
			FIRE_xx24_OF_sD_4_I = false;
		}
	}

	// Occurrence xx10_OF_sD_5
	if ((boolState[failF_OF_sD_5] == false) && (boolState[required_OF_sD_5] &&  boolState[relevant_evt_OF_sD_5])) 
	{
		 
		if (FIRE_xx10_OF_sD_5)
		{
			boolState[failF_OF_sD_5]  =  true;
			FIRE_xx10_OF_sD_5 = false;
		}
	}

	// Occurrence xx11_OF_sD_5
	if (boolState[failF_OF_sD_5] == true) 
	{
		 
		if (FIRE_xx11_OF_sD_5)
		{
			boolState[failF_OF_sD_5]  =  false;
			FIRE_xx11_OF_sD_5 = false;
		}
	}

	// Occurrence xx23_OF_sD_5_I

	if ((boolState[failI_OF_sD_5_I] == false) && (boolState[to_be_fired_OF_sD_5_I] &&
	boolState[relevant_evt_OF_sD_5_I])) 
	{
	
		
		if (FIRE_xx23_OF_sD_5_I_INS_129) 
		{
			boolState[failI_OF_sD_5_I]  =  true;
			boolState[already_standby_OF_sD_5_I]  =  false;
			boolState[already_required_OF_sD_5_I]  =  false;
			FIRE_xx23_OF_sD_5_I_INS_129 = false;
		}
	
	}
	if ((boolState[failI_OF_sD_5_I] == false) && (boolState[to_be_fired_OF_sD_5_I] &&
	boolState[relevant_evt_OF_sD_5_I])) 
	{
	
		
		if (FIRE_xx23_OF_sD_5_I_INS_130) 
		{
			boolState[already_standby_OF_sD_5_I]  =  false;
			boolState[already_required_OF_sD_5_I]  =  false;
			FIRE_xx23_OF_sD_5_I_INS_130 = false;
		}
	
	}
	// Occurrence xx24_OF_sD_5_I
	if (boolState[failI_OF_sD_5_I] == true) 
	{
		 
		if (FIRE_xx24_OF_sD_5_I)
		{
			boolState[failI_OF_sD_5_I]  =  false;
			FIRE_xx24_OF_sD_5_I = false;
		}
	}

	// Occurrence xx10_OF_sw_1
	if ((boolState[failF_OF_sw_1] == false) && (boolState[required_OF_sw_1] &&  boolState[relevant_evt_OF_sw_1])) 
	{
		 
		if (FIRE_xx10_OF_sw_1)
		{
			boolState[failF_OF_sw_1]  =  true;
			FIRE_xx10_OF_sw_1 = false;
		}
	}

	// Occurrence xx11_OF_sw_1
	if (boolState[failF_OF_sw_1] == true) 
	{
		 
		if (FIRE_xx11_OF_sw_1)
		{
			boolState[failF_OF_sw_1]  =  false;
			FIRE_xx11_OF_sw_1 = false;
		}
	}

	// Occurrence xx10_OF_sw_2
	if ((boolState[failF_OF_sw_2] == false) && (boolState[required_OF_sw_2] &&  boolState[relevant_evt_OF_sw_2])) 
	{
		 
		if (FIRE_xx10_OF_sw_2)
		{
			boolState[failF_OF_sw_2]  =  true;
			FIRE_xx10_OF_sw_2 = false;
		}
	}

	// Occurrence xx11_OF_sw_2
	if (boolState[failF_OF_sw_2] == true) 
	{
		 
		if (FIRE_xx11_OF_sw_2)
		{
			boolState[failF_OF_sw_2]  =  false;
			FIRE_xx11_OF_sw_2 = false;
		}
	}

	// Occurrence xx10_OF_sw_3
	if ((boolState[failF_OF_sw_3] == false) && (boolState[required_OF_sw_3] &&  boolState[relevant_evt_OF_sw_3])) 
	{
		 
		if (FIRE_xx10_OF_sw_3)
		{
			boolState[failF_OF_sw_3]  =  true;
			FIRE_xx10_OF_sw_3 = false;
		}
	}

	// Occurrence xx11_OF_sw_3
	if (boolState[failF_OF_sw_3] == true) 
	{
		 
		if (FIRE_xx11_OF_sw_3)
		{
			boolState[failF_OF_sw_3]  =  false;
			FIRE_xx11_OF_sw_3 = false;
		}
	}

	// Occurrence xx10_OF_sw_4
	if ((boolState[failF_OF_sw_4] == false) && (boolState[required_OF_sw_4] &&  boolState[relevant_evt_OF_sw_4])) 
	{
		 
		if (FIRE_xx10_OF_sw_4)
		{
			boolState[failF_OF_sw_4]  =  true;
			FIRE_xx10_OF_sw_4 = false;
		}
	}

	// Occurrence xx11_OF_sw_4
	if (boolState[failF_OF_sw_4] == true) 
	{
		 
		if (FIRE_xx11_OF_sw_4)
		{
			boolState[failF_OF_sw_4]  =  false;
			FIRE_xx11_OF_sw_4 = false;
		}
	}

	// Occurrence xx10_OF_sw_5
	if ((boolState[failF_OF_sw_5] == false) && (boolState[required_OF_sw_5] &&  boolState[relevant_evt_OF_sw_5])) 
	{
		 
		if (FIRE_xx10_OF_sw_5)
		{
			boolState[failF_OF_sw_5]  =  true;
			FIRE_xx10_OF_sw_5 = false;
		}
	}

	// Occurrence xx11_OF_sw_5
	if (boolState[failF_OF_sw_5] == true) 
	{
		 
		if (FIRE_xx11_OF_sw_5)
		{
			boolState[failF_OF_sw_5]  =  false;
			FIRE_xx11_OF_sw_5 = false;
		}
	}

}

std::vector<std::tuple<int, double, std::string, int>> storm::figaro::FigaroProgram_rc_5_5_Trim_repair::showFireableOccurrences()
{
	std::vector<std::tuple<int, double, std::string, int>> list = {};
	//cout <<"\n==================== List of fireable occurrences :  ====================" << endl;

	if ((boolState[failI_OF_sA_1_I] == false) && (boolState[to_be_fired_OF_sA_1_I] &&	boolState[relevant_evt_OF_sA_1_I]))
	{
		//cout << "34 :  INS_SUB_COUNT (1) |FAULT | failI  LABEL \"instantaneous failure sA_1_I\" | DIST INS (1) | INDUCING boolState[failI_OF_sA_1_I]  =  TRUE,already_standby_OF_sA_1_I  =  FALSE,already_required_OF_sA_1_I  =  FALSE" << endl;
		list.push_back(make_tuple(34, 1, "INS", 1));
	}
	if ((boolState[failI_OF_sA_1_I] == false) && (boolState[to_be_fired_OF_sA_1_I] &&	boolState[relevant_evt_OF_sA_1_I]))
	{
		//cout << "35 :  INS_SUB_COUNT (1) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_sA_1_I]  =  FALSE,already_required_OF_sA_1_I  =  FALSE" << endl;
		list.push_back(make_tuple(35, 0, "INS", 1));
	}
	if ((boolState[failI_OF_sA_2_I] == false) && (boolState[to_be_fired_OF_sA_2_I] &&	boolState[relevant_evt_OF_sA_2_I]))
	{
		//cout << "39 :  INS_SUB_COUNT (2) |FAULT | failI  LABEL \"instantaneous failure sA_2_I\" | DIST INS (1) | INDUCING boolState[failI_OF_sA_2_I]  =  TRUE,already_standby_OF_sA_2_I  =  FALSE,already_required_OF_sA_2_I  =  FALSE" << endl;
		list.push_back(make_tuple(39, 1, "INS", 2));
	}
	if ((boolState[failI_OF_sA_2_I] == false) && (boolState[to_be_fired_OF_sA_2_I] &&	boolState[relevant_evt_OF_sA_2_I]))
	{
		//cout << "40 :  INS_SUB_COUNT (2) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_sA_2_I]  =  FALSE,already_required_OF_sA_2_I  =  FALSE" << endl;
		list.push_back(make_tuple(40, 0, "INS", 2));
	}
	if ((boolState[failI_OF_sA_3_I] == false) && (boolState[to_be_fired_OF_sA_3_I] &&	boolState[relevant_evt_OF_sA_3_I]))
	{
		//cout << "44 :  INS_SUB_COUNT (3) |FAULT | failI  LABEL \"instantaneous failure sA_3_I\" | DIST INS (1) | INDUCING boolState[failI_OF_sA_3_I]  =  TRUE,already_standby_OF_sA_3_I  =  FALSE,already_required_OF_sA_3_I  =  FALSE" << endl;
		list.push_back(make_tuple(44, 1, "INS", 3));
	}
	if ((boolState[failI_OF_sA_3_I] == false) && (boolState[to_be_fired_OF_sA_3_I] &&	boolState[relevant_evt_OF_sA_3_I]))
	{
		//cout << "45 :  INS_SUB_COUNT (3) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_sA_3_I]  =  FALSE,already_required_OF_sA_3_I  =  FALSE" << endl;
		list.push_back(make_tuple(45, 0, "INS", 3));
	}
	if ((boolState[failI_OF_sA_4_I] == false) && (boolState[to_be_fired_OF_sA_4_I] &&	boolState[relevant_evt_OF_sA_4_I]))
	{
		//cout << "49 :  INS_SUB_COUNT (4) |FAULT | failI  LABEL \"instantaneous failure sA_4_I\" | DIST INS (1) | INDUCING boolState[failI_OF_sA_4_I]  =  TRUE,already_standby_OF_sA_4_I  =  FALSE,already_required_OF_sA_4_I  =  FALSE" << endl;
		list.push_back(make_tuple(49, 1, "INS", 4));
	}
	if ((boolState[failI_OF_sA_4_I] == false) && (boolState[to_be_fired_OF_sA_4_I] &&	boolState[relevant_evt_OF_sA_4_I]))
	{
		//cout << "50 :  INS_SUB_COUNT (4) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_sA_4_I]  =  FALSE,already_required_OF_sA_4_I  =  FALSE" << endl;
		list.push_back(make_tuple(50, 0, "INS", 4));
	}
	if ((boolState[failI_OF_sA_5_I] == false) && (boolState[to_be_fired_OF_sA_5_I] &&	boolState[relevant_evt_OF_sA_5_I]))
	{
		//cout << "54 :  INS_SUB_COUNT (5) |FAULT | failI  LABEL \"instantaneous failure sA_5_I\" | DIST INS (1) | INDUCING boolState[failI_OF_sA_5_I]  =  TRUE,already_standby_OF_sA_5_I  =  FALSE,already_required_OF_sA_5_I  =  FALSE" << endl;
		list.push_back(make_tuple(54, 1, "INS", 5));
	}
	if ((boolState[failI_OF_sA_5_I] == false) && (boolState[to_be_fired_OF_sA_5_I] &&	boolState[relevant_evt_OF_sA_5_I]))
	{
		//cout << "55 :  INS_SUB_COUNT (5) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_sA_5_I]  =  FALSE,already_required_OF_sA_5_I  =  FALSE" << endl;
		list.push_back(make_tuple(55, 0, "INS", 5));
	}
	if ((boolState[failI_OF_sB_1_I] == false) && (boolState[to_be_fired_OF_sB_1_I] &&	boolState[relevant_evt_OF_sB_1_I]))
	{
		//cout << "59 :  INS_SUB_COUNT (6) |FAULT | failI  LABEL \"instantaneous failure sB_1_I\" | DIST INS (1) | INDUCING boolState[failI_OF_sB_1_I]  =  TRUE,already_standby_OF_sB_1_I  =  FALSE,already_required_OF_sB_1_I  =  FALSE" << endl;
		list.push_back(make_tuple(59, 1, "INS", 6));
	}
	if ((boolState[failI_OF_sB_1_I] == false) && (boolState[to_be_fired_OF_sB_1_I] &&	boolState[relevant_evt_OF_sB_1_I]))
	{
		//cout << "60 :  INS_SUB_COUNT (6) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_sB_1_I]  =  FALSE,already_required_OF_sB_1_I  =  FALSE" << endl;
		list.push_back(make_tuple(60, 0, "INS", 6));
	}
	if ((boolState[failI_OF_sB_2_I] == false) && (boolState[to_be_fired_OF_sB_2_I] &&	boolState[relevant_evt_OF_sB_2_I]))
	{
		//cout << "64 :  INS_SUB_COUNT (7) |FAULT | failI  LABEL \"instantaneous failure sB_2_I\" | DIST INS (1) | INDUCING boolState[failI_OF_sB_2_I]  =  TRUE,already_standby_OF_sB_2_I  =  FALSE,already_required_OF_sB_2_I  =  FALSE" << endl;
		list.push_back(make_tuple(64, 1, "INS", 7));
	}
	if ((boolState[failI_OF_sB_2_I] == false) && (boolState[to_be_fired_OF_sB_2_I] &&	boolState[relevant_evt_OF_sB_2_I]))
	{
		//cout << "65 :  INS_SUB_COUNT (7) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_sB_2_I]  =  FALSE,already_required_OF_sB_2_I  =  FALSE" << endl;
		list.push_back(make_tuple(65, 0, "INS", 7));
	}
	if ((boolState[failI_OF_sB_3_I] == false) && (boolState[to_be_fired_OF_sB_3_I] &&	boolState[relevant_evt_OF_sB_3_I]))
	{
		//cout << "69 :  INS_SUB_COUNT (8) |FAULT | failI  LABEL \"instantaneous failure sB_3_I\" | DIST INS (1) | INDUCING boolState[failI_OF_sB_3_I]  =  TRUE,already_standby_OF_sB_3_I  =  FALSE,already_required_OF_sB_3_I  =  FALSE" << endl;
		list.push_back(make_tuple(69, 1, "INS", 8));
	}
	if ((boolState[failI_OF_sB_3_I] == false) && (boolState[to_be_fired_OF_sB_3_I] &&	boolState[relevant_evt_OF_sB_3_I]))
	{
		//cout << "70 :  INS_SUB_COUNT (8) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_sB_3_I]  =  FALSE,already_required_OF_sB_3_I  =  FALSE" << endl;
		list.push_back(make_tuple(70, 0, "INS", 8));
	}
	if ((boolState[failI_OF_sB_4_I] == false) && (boolState[to_be_fired_OF_sB_4_I] &&	boolState[relevant_evt_OF_sB_4_I]))
	{
		//cout << "74 :  INS_SUB_COUNT (9) |FAULT | failI  LABEL \"instantaneous failure sB_4_I\" | DIST INS (1) | INDUCING boolState[failI_OF_sB_4_I]  =  TRUE,already_standby_OF_sB_4_I  =  FALSE,already_required_OF_sB_4_I  =  FALSE" << endl;
		list.push_back(make_tuple(74, 1, "INS", 9));
	}
	if ((boolState[failI_OF_sB_4_I] == false) && (boolState[to_be_fired_OF_sB_4_I] &&	boolState[relevant_evt_OF_sB_4_I]))
	{
		//cout << "75 :  INS_SUB_COUNT (9) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_sB_4_I]  =  FALSE,already_required_OF_sB_4_I  =  FALSE" << endl;
		list.push_back(make_tuple(75, 0, "INS", 9));
	}
	if ((boolState[failI_OF_sB_5_I] == false) && (boolState[to_be_fired_OF_sB_5_I] &&	boolState[relevant_evt_OF_sB_5_I]))
	{
		//cout << "79 :  INS_SUB_COUNT (10) |FAULT | failI  LABEL \"instantaneous failure sB_5_I\" | DIST INS (1) | INDUCING boolState[failI_OF_sB_5_I]  =  TRUE,already_standby_OF_sB_5_I  =  FALSE,already_required_OF_sB_5_I  =  FALSE" << endl;
		list.push_back(make_tuple(79, 1, "INS", 10));
	}
	if ((boolState[failI_OF_sB_5_I] == false) && (boolState[to_be_fired_OF_sB_5_I] &&	boolState[relevant_evt_OF_sB_5_I]))
	{
		//cout << "80 :  INS_SUB_COUNT (10) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_sB_5_I]  =  FALSE,already_required_OF_sB_5_I  =  FALSE" << endl;
		list.push_back(make_tuple(80, 0, "INS", 10));
	}
	if ((boolState[failI_OF_sC_1_I] == false) && (boolState[to_be_fired_OF_sC_1_I] &&	boolState[relevant_evt_OF_sC_1_I]))
	{
		//cout << "84 :  INS_SUB_COUNT (11) |FAULT | failI  LABEL \"instantaneous failure sC_1_I\" | DIST INS (1) | INDUCING boolState[failI_OF_sC_1_I]  =  TRUE,already_standby_OF_sC_1_I  =  FALSE,already_required_OF_sC_1_I  =  FALSE" << endl;
		list.push_back(make_tuple(84, 1, "INS", 11));
	}
	if ((boolState[failI_OF_sC_1_I] == false) && (boolState[to_be_fired_OF_sC_1_I] &&	boolState[relevant_evt_OF_sC_1_I]))
	{
		//cout << "85 :  INS_SUB_COUNT (11) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_sC_1_I]  =  FALSE,already_required_OF_sC_1_I  =  FALSE" << endl;
		list.push_back(make_tuple(85, 0, "INS", 11));
	}
	if ((boolState[failI_OF_sC_2_I] == false) && (boolState[to_be_fired_OF_sC_2_I] &&	boolState[relevant_evt_OF_sC_2_I]))
	{
		//cout << "89 :  INS_SUB_COUNT (12) |FAULT | failI  LABEL \"instantaneous failure sC_2_I\" | DIST INS (1) | INDUCING boolState[failI_OF_sC_2_I]  =  TRUE,already_standby_OF_sC_2_I  =  FALSE,already_required_OF_sC_2_I  =  FALSE" << endl;
		list.push_back(make_tuple(89, 1, "INS", 12));
	}
	if ((boolState[failI_OF_sC_2_I] == false) && (boolState[to_be_fired_OF_sC_2_I] &&	boolState[relevant_evt_OF_sC_2_I]))
	{
		//cout << "90 :  INS_SUB_COUNT (12) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_sC_2_I]  =  FALSE,already_required_OF_sC_2_I  =  FALSE" << endl;
		list.push_back(make_tuple(90, 0, "INS", 12));
	}
	if ((boolState[failI_OF_sC_3_I] == false) && (boolState[to_be_fired_OF_sC_3_I] &&	boolState[relevant_evt_OF_sC_3_I]))
	{
		//cout << "94 :  INS_SUB_COUNT (13) |FAULT | failI  LABEL \"instantaneous failure sC_3_I\" | DIST INS (1) | INDUCING boolState[failI_OF_sC_3_I]  =  TRUE,already_standby_OF_sC_3_I  =  FALSE,already_required_OF_sC_3_I  =  FALSE" << endl;
		list.push_back(make_tuple(94, 1, "INS", 13));
	}
	if ((boolState[failI_OF_sC_3_I] == false) && (boolState[to_be_fired_OF_sC_3_I] &&	boolState[relevant_evt_OF_sC_3_I]))
	{
		//cout << "95 :  INS_SUB_COUNT (13) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_sC_3_I]  =  FALSE,already_required_OF_sC_3_I  =  FALSE" << endl;
		list.push_back(make_tuple(95, 0, "INS", 13));
	}
	if ((boolState[failI_OF_sC_4_I] == false) && (boolState[to_be_fired_OF_sC_4_I] &&	boolState[relevant_evt_OF_sC_4_I]))
	{
		//cout << "99 :  INS_SUB_COUNT (14) |FAULT | failI  LABEL \"instantaneous failure sC_4_I\" | DIST INS (1) | INDUCING boolState[failI_OF_sC_4_I]  =  TRUE,already_standby_OF_sC_4_I  =  FALSE,already_required_OF_sC_4_I  =  FALSE" << endl;
		list.push_back(make_tuple(99, 1, "INS", 14));
	}
	if ((boolState[failI_OF_sC_4_I] == false) && (boolState[to_be_fired_OF_sC_4_I] &&	boolState[relevant_evt_OF_sC_4_I]))
	{
		//cout << "100 :  INS_SUB_COUNT (14) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_sC_4_I]  =  FALSE,already_required_OF_sC_4_I  =  FALSE" << endl;
		list.push_back(make_tuple(100, 0, "INS", 14));
	}
	if ((boolState[failI_OF_sC_5_I] == false) && (boolState[to_be_fired_OF_sC_5_I] &&	boolState[relevant_evt_OF_sC_5_I]))
	{
		//cout << "104 :  INS_SUB_COUNT (15) |FAULT | failI  LABEL \"instantaneous failure sC_5_I\" | DIST INS (1) | INDUCING boolState[failI_OF_sC_5_I]  =  TRUE,already_standby_OF_sC_5_I  =  FALSE,already_required_OF_sC_5_I  =  FALSE" << endl;
		list.push_back(make_tuple(104, 1, "INS", 15));
	}
	if ((boolState[failI_OF_sC_5_I] == false) && (boolState[to_be_fired_OF_sC_5_I] &&	boolState[relevant_evt_OF_sC_5_I]))
	{
		//cout << "105 :  INS_SUB_COUNT (15) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_sC_5_I]  =  FALSE,already_required_OF_sC_5_I  =  FALSE" << endl;
		list.push_back(make_tuple(105, 0, "INS", 15));
	}
	if ((boolState[failI_OF_sD_1_I] == false) && (boolState[to_be_fired_OF_sD_1_I] &&	boolState[relevant_evt_OF_sD_1_I]))
	{
		//cout << "109 :  INS_SUB_COUNT (16) |FAULT | failI  LABEL \"instantaneous failure sD_1_I\" | DIST INS (1) | INDUCING boolState[failI_OF_sD_1_I]  =  TRUE,already_standby_OF_sD_1_I  =  FALSE,already_required_OF_sD_1_I  =  FALSE" << endl;
		list.push_back(make_tuple(109, 1, "INS", 16));
	}
	if ((boolState[failI_OF_sD_1_I] == false) && (boolState[to_be_fired_OF_sD_1_I] &&	boolState[relevant_evt_OF_sD_1_I]))
	{
		//cout << "110 :  INS_SUB_COUNT (16) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_sD_1_I]  =  FALSE,already_required_OF_sD_1_I  =  FALSE" << endl;
		list.push_back(make_tuple(110, 0, "INS", 16));
	}
	if ((boolState[failI_OF_sD_2_I] == false) && (boolState[to_be_fired_OF_sD_2_I] &&	boolState[relevant_evt_OF_sD_2_I]))
	{
		//cout << "114 :  INS_SUB_COUNT (17) |FAULT | failI  LABEL \"instantaneous failure sD_2_I\" | DIST INS (1) | INDUCING boolState[failI_OF_sD_2_I]  =  TRUE,already_standby_OF_sD_2_I  =  FALSE,already_required_OF_sD_2_I  =  FALSE" << endl;
		list.push_back(make_tuple(114, 1, "INS", 17));
	}
	if ((boolState[failI_OF_sD_2_I] == false) && (boolState[to_be_fired_OF_sD_2_I] &&	boolState[relevant_evt_OF_sD_2_I]))
	{
		//cout << "115 :  INS_SUB_COUNT (17) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_sD_2_I]  =  FALSE,already_required_OF_sD_2_I  =  FALSE" << endl;
		list.push_back(make_tuple(115, 0, "INS", 17));
	}
	if ((boolState[failI_OF_sD_3_I] == false) && (boolState[to_be_fired_OF_sD_3_I] &&	boolState[relevant_evt_OF_sD_3_I]))
	{
		//cout << "119 :  INS_SUB_COUNT (18) |FAULT | failI  LABEL \"instantaneous failure sD_3_I\" | DIST INS (1) | INDUCING boolState[failI_OF_sD_3_I]  =  TRUE,already_standby_OF_sD_3_I  =  FALSE,already_required_OF_sD_3_I  =  FALSE" << endl;
		list.push_back(make_tuple(119, 1, "INS", 18));
	}
	if ((boolState[failI_OF_sD_3_I] == false) && (boolState[to_be_fired_OF_sD_3_I] &&	boolState[relevant_evt_OF_sD_3_I]))
	{
		//cout << "120 :  INS_SUB_COUNT (18) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_sD_3_I]  =  FALSE,already_required_OF_sD_3_I  =  FALSE" << endl;
		list.push_back(make_tuple(120, 0, "INS", 18));
	}
	if ((boolState[failI_OF_sD_4_I] == false) && (boolState[to_be_fired_OF_sD_4_I] &&	boolState[relevant_evt_OF_sD_4_I]))
	{
		//cout << "124 :  INS_SUB_COUNT (19) |FAULT | failI  LABEL \"instantaneous failure sD_4_I\" | DIST INS (1) | INDUCING boolState[failI_OF_sD_4_I]  =  TRUE,already_standby_OF_sD_4_I  =  FALSE,already_required_OF_sD_4_I  =  FALSE" << endl;
		list.push_back(make_tuple(124, 1, "INS", 19));
	}
	if ((boolState[failI_OF_sD_4_I] == false) && (boolState[to_be_fired_OF_sD_4_I] &&	boolState[relevant_evt_OF_sD_4_I]))
	{
		//cout << "125 :  INS_SUB_COUNT (19) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_sD_4_I]  =  FALSE,already_required_OF_sD_4_I  =  FALSE" << endl;
		list.push_back(make_tuple(125, 0, "INS", 19));
	}
	if ((boolState[failI_OF_sD_5_I] == false) && (boolState[to_be_fired_OF_sD_5_I] &&	boolState[relevant_evt_OF_sD_5_I]))
	{
		//cout << "129 :  INS_SUB_COUNT (20) |FAULT | failI  LABEL \"instantaneous failure sD_5_I\" | DIST INS (1) | INDUCING boolState[failI_OF_sD_5_I]  =  TRUE,already_standby_OF_sD_5_I  =  FALSE,already_required_OF_sD_5_I  =  FALSE" << endl;
		list.push_back(make_tuple(129, 1, "INS", 20));
	}
	if ((boolState[failI_OF_sD_5_I] == false) && (boolState[to_be_fired_OF_sD_5_I] &&	boolState[relevant_evt_OF_sD_5_I]))
	{
		//cout << "130 :  INS_SUB_COUNT (20) |TRANSITION | good | DIST INS (0) | INDUCING boolState[already_standby_OF_sD_5_I]  =  FALSE,already_required_OF_sD_5_I  =  FALSE" << endl;
		list.push_back(make_tuple(130, 0, "INS", 20));
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
     
	if ((boolState[failF_OF_controller] == false) && (boolState[required_OF_controller] && boolState[relevant_evt_OF_controller]))
	{
		//cout << "0 : xx10_OF_controller : FAULT failF  LABEL \"failure in operation controller\"  DIST EXP (0.03)  INDUCING boolState[failF_OF_controller]  =  TRUE" << endl;
		list.push_back(make_tuple(0, 0.03, "EXP", 0));
	}
	if (boolState[failF_OF_controller] == true)
	{
		//cout << "1 : xx11_OF_controller : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_controller]  =  FALSE" << endl;
		list.push_back(make_tuple(1, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_mp1] == false) && (boolState[required_OF_mp1] && boolState[relevant_evt_OF_mp1]))
	{
		//cout << "2 : xx10_OF_mp1 : FAULT failF  LABEL \"failure in operation mp1\"  DIST EXP (0.08)  INDUCING boolState[failF_OF_mp1]  =  TRUE" << endl;
		list.push_back(make_tuple(2, 0.08, "EXP", 0));
	}
	if (boolState[failF_OF_mp1] == true)
	{
		//cout << "3 : xx11_OF_mp1 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_mp1]  =  FALSE" << endl;
		list.push_back(make_tuple(3, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_mp2] == false) && (boolState[required_OF_mp2] && boolState[relevant_evt_OF_mp2]))
	{
		//cout << "4 : xx10_OF_mp2 : FAULT failF  LABEL \"failure in operation mp2\"  DIST EXP (0.08)  INDUCING boolState[failF_OF_mp2]  =  TRUE" << endl;
		list.push_back(make_tuple(4, 0.08, "EXP", 0));
	}
	if (boolState[failF_OF_mp2] == true)
	{
		//cout << "5 : xx11_OF_mp2 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_mp2]  =  FALSE" << endl;
		list.push_back(make_tuple(5, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_mp3] == false) && (boolState[required_OF_mp3] && boolState[relevant_evt_OF_mp3]))
	{
		//cout << "6 : xx10_OF_mp3 : FAULT failF  LABEL \"failure in operation mp3\"  DIST EXP (0.08)  INDUCING boolState[failF_OF_mp3]  =  TRUE" << endl;
		list.push_back(make_tuple(6, 0.08, "EXP", 0));
	}
	if (boolState[failF_OF_mp3] == true)
	{
		//cout << "7 : xx11_OF_mp3 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_mp3]  =  FALSE" << endl;
		list.push_back(make_tuple(7, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_mp4] == false) && (boolState[required_OF_mp4] && boolState[relevant_evt_OF_mp4]))
	{
		//cout << "8 : xx10_OF_mp4 : FAULT failF  LABEL \"failure in operation mp4\"  DIST EXP (0.08)  INDUCING boolState[failF_OF_mp4]  =  TRUE" << endl;
		list.push_back(make_tuple(8, 0.08, "EXP", 0));
	}
	if (boolState[failF_OF_mp4] == true)
	{
		//cout << "9 : xx11_OF_mp4 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_mp4]  =  FALSE" << endl;
		list.push_back(make_tuple(9, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_mp5] == false) && (boolState[required_OF_mp5] && boolState[relevant_evt_OF_mp5]))
	{
		//cout << "10 : xx10_OF_mp5 : FAULT failF  LABEL \"failure in operation mp5\"  DIST EXP (0.08)  INDUCING boolState[failF_OF_mp5]  =  TRUE" << endl;
		list.push_back(make_tuple(10, 0.08, "EXP", 0));
	}
	if (boolState[failF_OF_mp5] == true)
	{
		//cout << "11 : xx11_OF_mp5 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_mp5]  =  FALSE" << endl;
		list.push_back(make_tuple(11, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_ms1] == false) && (boolState[required_OF_ms1] && boolState[relevant_evt_OF_ms1]))
	{
		//cout << "12 : xx10_OF_ms1 : FAULT failF  LABEL \"failure in operation ms1\"  DIST EXP (0.08)  INDUCING boolState[failF_OF_ms1]  =  TRUE" << endl;
		list.push_back(make_tuple(12, 0.08, "EXP", 0));
	}
	if (boolState[failF_OF_ms1] == true)
	{
		//cout << "13 : xx11_OF_ms1 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_ms1]  =  FALSE" << endl;
		list.push_back(make_tuple(13, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_ms2] == false) && (boolState[required_OF_ms2] && boolState[relevant_evt_OF_ms2]))
	{
		//cout << "14 : xx10_OF_ms2 : FAULT failF  LABEL \"failure in operation ms2\"  DIST EXP (0.08)  INDUCING boolState[failF_OF_ms2]  =  TRUE" << endl;
		list.push_back(make_tuple(14, 0.08, "EXP", 0));
	}
	if (boolState[failF_OF_ms2] == true)
	{
		//cout << "15 : xx11_OF_ms2 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_ms2]  =  FALSE" << endl;
		list.push_back(make_tuple(15, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_ms3] == false) && (boolState[required_OF_ms3] && boolState[relevant_evt_OF_ms3]))
	{
		//cout << "16 : xx10_OF_ms3 : FAULT failF  LABEL \"failure in operation ms3\"  DIST EXP (0.08)  INDUCING boolState[failF_OF_ms3]  =  TRUE" << endl;
		list.push_back(make_tuple(16, 0.08, "EXP", 0));
	}
	if (boolState[failF_OF_ms3] == true)
	{
		//cout << "17 : xx11_OF_ms3 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_ms3]  =  FALSE" << endl;
		list.push_back(make_tuple(17, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_ms4] == false) && (boolState[required_OF_ms4] && boolState[relevant_evt_OF_ms4]))
	{
		//cout << "18 : xx10_OF_ms4 : FAULT failF  LABEL \"failure in operation ms4\"  DIST EXP (0.08)  INDUCING boolState[failF_OF_ms4]  =  TRUE" << endl;
		list.push_back(make_tuple(18, 0.08, "EXP", 0));
	}
	if (boolState[failF_OF_ms4] == true)
	{
		//cout << "19 : xx11_OF_ms4 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_ms4]  =  FALSE" << endl;
		list.push_back(make_tuple(19, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_ms5] == false) && (boolState[required_OF_ms5] && boolState[relevant_evt_OF_ms5]))
	{
		//cout << "20 : xx10_OF_ms5 : FAULT failF  LABEL \"failure in operation ms5\"  DIST EXP (0.08)  INDUCING boolState[failF_OF_ms5]  =  TRUE" << endl;
		list.push_back(make_tuple(20, 0.08, "EXP", 0));
	}
	if (boolState[failF_OF_ms5] == true)
	{
		//cout << "21 : xx11_OF_ms5 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_ms5]  =  FALSE" << endl;
		list.push_back(make_tuple(21, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_network_1] == false) && (boolState[required_OF_network_1] && boolState[relevant_evt_OF_network_1]))
	{
		//cout << "22 : xx10_OF_network_1 : FAULT failF  LABEL \"failure in operation network_1\"  DIST EXP (0.03)  INDUCING boolState[failF_OF_network_1]  =  TRUE" << endl;
		list.push_back(make_tuple(22, 0.03, "EXP", 0));
	}
	if (boolState[failF_OF_network_1] == true)
	{
		//cout << "23 : xx11_OF_network_1 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_network_1]  =  FALSE" << endl;
		list.push_back(make_tuple(23, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_network_2] == false) && (boolState[required_OF_network_2] && boolState[relevant_evt_OF_network_2]))
	{
		//cout << "24 : xx10_OF_network_2 : FAULT failF  LABEL \"failure in operation network_2\"  DIST EXP (0.03)  INDUCING boolState[failF_OF_network_2]  =  TRUE" << endl;
		list.push_back(make_tuple(24, 0.03, "EXP", 0));
	}
	if (boolState[failF_OF_network_2] == true)
	{
		//cout << "25 : xx11_OF_network_2 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_network_2]  =  FALSE" << endl;
		list.push_back(make_tuple(25, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_network_3] == false) && (boolState[required_OF_network_3] && boolState[relevant_evt_OF_network_3]))
	{
		//cout << "26 : xx10_OF_network_3 : FAULT failF  LABEL \"failure in operation network_3\"  DIST EXP (0.03)  INDUCING boolState[failF_OF_network_3]  =  TRUE" << endl;
		list.push_back(make_tuple(26, 0.03, "EXP", 0));
	}
	if (boolState[failF_OF_network_3] == true)
	{
		//cout << "27 : xx11_OF_network_3 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_network_3]  =  FALSE" << endl;
		list.push_back(make_tuple(27, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_network_4] == false) && (boolState[required_OF_network_4] && boolState[relevant_evt_OF_network_4]))
	{
		//cout << "28 : xx10_OF_network_4 : FAULT failF  LABEL \"failure in operation network_4\"  DIST EXP (0.03)  INDUCING boolState[failF_OF_network_4]  =  TRUE" << endl;
		list.push_back(make_tuple(28, 0.03, "EXP", 0));
	}
	if (boolState[failF_OF_network_4] == true)
	{
		//cout << "29 : xx11_OF_network_4 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_network_4]  =  FALSE" << endl;
		list.push_back(make_tuple(29, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_network_5] == false) && (boolState[required_OF_network_5] && boolState[relevant_evt_OF_network_5]))
	{
		//cout << "30 : xx10_OF_network_5 : FAULT failF  LABEL \"failure in operation network_5\"  DIST EXP (0.03)  INDUCING boolState[failF_OF_network_5]  =  TRUE" << endl;
		list.push_back(make_tuple(30, 0.03, "EXP", 0));
	}
	if (boolState[failF_OF_network_5] == true)
	{
		//cout << "31 : xx11_OF_network_5 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_network_5]  =  FALSE" << endl;
		list.push_back(make_tuple(31, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_sA_1] == false) && (boolState[required_OF_sA_1] && boolState[relevant_evt_OF_sA_1]))
	{
		//cout << "32 : xx10_OF_sA_1 : FAULT failF  LABEL \"failure in operation sA_1\"  DIST EXP (0.05)  INDUCING boolState[failF_OF_sA_1]  =  TRUE" << endl;
		list.push_back(make_tuple(32, 0.05, "EXP", 0));
	}
	if (boolState[failF_OF_sA_1] == true)
	{
		//cout << "33 : xx11_OF_sA_1 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_sA_1]  =  FALSE" << endl;
		list.push_back(make_tuple(33, 0.1, "EXP", 0));
	}
	if (boolState[failI_OF_sA_1_I] == true)
	{
		//cout << "36 : xx24_OF_sA_1_I : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failI_OF_sA_1_I]  =  FALSE" << endl;
		list.push_back(make_tuple(36, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_sA_2] == false) && (boolState[required_OF_sA_2] && boolState[relevant_evt_OF_sA_2]))
	{
		//cout << "37 : xx10_OF_sA_2 : FAULT failF  LABEL \"failure in operation sA_2\"  DIST EXP (0.05)  INDUCING boolState[failF_OF_sA_2]  =  TRUE" << endl;
		list.push_back(make_tuple(37, 0.05, "EXP", 0));
	}
	if (boolState[failF_OF_sA_2] == true)
	{
		//cout << "38 : xx11_OF_sA_2 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_sA_2]  =  FALSE" << endl;
		list.push_back(make_tuple(38, 0.1, "EXP", 0));
	}
	if (boolState[failI_OF_sA_2_I] == true)
	{
		//cout << "41 : xx24_OF_sA_2_I : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failI_OF_sA_2_I]  =  FALSE" << endl;
		list.push_back(make_tuple(41, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_sA_3] == false) && (boolState[required_OF_sA_3] && boolState[relevant_evt_OF_sA_3]))
	{
		//cout << "42 : xx10_OF_sA_3 : FAULT failF  LABEL \"failure in operation sA_3\"  DIST EXP (0.05)  INDUCING boolState[failF_OF_sA_3]  =  TRUE" << endl;
		list.push_back(make_tuple(42, 0.05, "EXP", 0));
	}
	if (boolState[failF_OF_sA_3] == true)
	{
		//cout << "43 : xx11_OF_sA_3 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_sA_3]  =  FALSE" << endl;
		list.push_back(make_tuple(43, 0.1, "EXP", 0));
	}
	if (boolState[failI_OF_sA_3_I] == true)
	{
		//cout << "46 : xx24_OF_sA_3_I : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failI_OF_sA_3_I]  =  FALSE" << endl;
		list.push_back(make_tuple(46, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_sA_4] == false) && (boolState[required_OF_sA_4] && boolState[relevant_evt_OF_sA_4]))
	{
		//cout << "47 : xx10_OF_sA_4 : FAULT failF  LABEL \"failure in operation sA_4\"  DIST EXP (0.05)  INDUCING boolState[failF_OF_sA_4]  =  TRUE" << endl;
		list.push_back(make_tuple(47, 0.05, "EXP", 0));
	}
	if (boolState[failF_OF_sA_4] == true)
	{
		//cout << "48 : xx11_OF_sA_4 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_sA_4]  =  FALSE" << endl;
		list.push_back(make_tuple(48, 0.1, "EXP", 0));
	}
	if (boolState[failI_OF_sA_4_I] == true)
	{
		//cout << "51 : xx24_OF_sA_4_I : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failI_OF_sA_4_I]  =  FALSE" << endl;
		list.push_back(make_tuple(51, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_sA_5] == false) && (boolState[required_OF_sA_5] && boolState[relevant_evt_OF_sA_5]))
	{
		//cout << "52 : xx10_OF_sA_5 : FAULT failF  LABEL \"failure in operation sA_5\"  DIST EXP (0.05)  INDUCING boolState[failF_OF_sA_5]  =  TRUE" << endl;
		list.push_back(make_tuple(52, 0.05, "EXP", 0));
	}
	if (boolState[failF_OF_sA_5] == true)
	{
		//cout << "53 : xx11_OF_sA_5 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_sA_5]  =  FALSE" << endl;
		list.push_back(make_tuple(53, 0.1, "EXP", 0));
	}
	if (boolState[failI_OF_sA_5_I] == true)
	{
		//cout << "56 : xx24_OF_sA_5_I : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failI_OF_sA_5_I]  =  FALSE" << endl;
		list.push_back(make_tuple(56, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_sB_1] == false) && (boolState[required_OF_sB_1] && boolState[relevant_evt_OF_sB_1]))
	{
		//cout << "57 : xx10_OF_sB_1 : FAULT failF  LABEL \"failure in operation sB_1\"  DIST EXP (0.05)  INDUCING boolState[failF_OF_sB_1]  =  TRUE" << endl;
		list.push_back(make_tuple(57, 0.05, "EXP", 0));
	}
	if (boolState[failF_OF_sB_1] == true)
	{
		//cout << "58 : xx11_OF_sB_1 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_sB_1]  =  FALSE" << endl;
		list.push_back(make_tuple(58, 0.1, "EXP", 0));
	}
	if (boolState[failI_OF_sB_1_I] == true)
	{
		//cout << "61 : xx24_OF_sB_1_I : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failI_OF_sB_1_I]  =  FALSE" << endl;
		list.push_back(make_tuple(61, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_sB_2] == false) && (boolState[required_OF_sB_2] && boolState[relevant_evt_OF_sB_2]))
	{
		//cout << "62 : xx10_OF_sB_2 : FAULT failF  LABEL \"failure in operation sB_2\"  DIST EXP (0.05)  INDUCING boolState[failF_OF_sB_2]  =  TRUE" << endl;
		list.push_back(make_tuple(62, 0.05, "EXP", 0));
	}
	if (boolState[failF_OF_sB_2] == true)
	{
		//cout << "63 : xx11_OF_sB_2 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_sB_2]  =  FALSE" << endl;
		list.push_back(make_tuple(63, 0.1, "EXP", 0));
	}
	if (boolState[failI_OF_sB_2_I] == true)
	{
		//cout << "66 : xx24_OF_sB_2_I : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failI_OF_sB_2_I]  =  FALSE" << endl;
		list.push_back(make_tuple(66, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_sB_3] == false) && (boolState[required_OF_sB_3] && boolState[relevant_evt_OF_sB_3]))
	{
		//cout << "67 : xx10_OF_sB_3 : FAULT failF  LABEL \"failure in operation sB_3\"  DIST EXP (0.05)  INDUCING boolState[failF_OF_sB_3]  =  TRUE" << endl;
		list.push_back(make_tuple(67, 0.05, "EXP", 0));
	}
	if (boolState[failF_OF_sB_3] == true)
	{
		//cout << "68 : xx11_OF_sB_3 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_sB_3]  =  FALSE" << endl;
		list.push_back(make_tuple(68, 0.1, "EXP", 0));
	}
	if (boolState[failI_OF_sB_3_I] == true)
	{
		//cout << "71 : xx24_OF_sB_3_I : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failI_OF_sB_3_I]  =  FALSE" << endl;
		list.push_back(make_tuple(71, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_sB_4] == false) && (boolState[required_OF_sB_4] && boolState[relevant_evt_OF_sB_4]))
	{
		//cout << "72 : xx10_OF_sB_4 : FAULT failF  LABEL \"failure in operation sB_4\"  DIST EXP (0.05)  INDUCING boolState[failF_OF_sB_4]  =  TRUE" << endl;
		list.push_back(make_tuple(72, 0.05, "EXP", 0));
	}
	if (boolState[failF_OF_sB_4] == true)
	{
		//cout << "73 : xx11_OF_sB_4 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_sB_4]  =  FALSE" << endl;
		list.push_back(make_tuple(73, 0.1, "EXP", 0));
	}
	if (boolState[failI_OF_sB_4_I] == true)
	{
		//cout << "76 : xx24_OF_sB_4_I : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failI_OF_sB_4_I]  =  FALSE" << endl;
		list.push_back(make_tuple(76, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_sB_5] == false) && (boolState[required_OF_sB_5] && boolState[relevant_evt_OF_sB_5]))
	{
		//cout << "77 : xx10_OF_sB_5 : FAULT failF  LABEL \"failure in operation sB_5\"  DIST EXP (0.05)  INDUCING boolState[failF_OF_sB_5]  =  TRUE" << endl;
		list.push_back(make_tuple(77, 0.05, "EXP", 0));
	}
	if (boolState[failF_OF_sB_5] == true)
	{
		//cout << "78 : xx11_OF_sB_5 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_sB_5]  =  FALSE" << endl;
		list.push_back(make_tuple(78, 0.1, "EXP", 0));
	}
	if (boolState[failI_OF_sB_5_I] == true)
	{
		//cout << "81 : xx24_OF_sB_5_I : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failI_OF_sB_5_I]  =  FALSE" << endl;
		list.push_back(make_tuple(81, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_sC_1] == false) && (boolState[required_OF_sC_1] && boolState[relevant_evt_OF_sC_1]))
	{
		//cout << "82 : xx10_OF_sC_1 : FAULT failF  LABEL \"failure in operation sC_1\"  DIST EXP (0.05)  INDUCING boolState[failF_OF_sC_1]  =  TRUE" << endl;
		list.push_back(make_tuple(82, 0.05, "EXP", 0));
	}
	if (boolState[failF_OF_sC_1] == true)
	{
		//cout << "83 : xx11_OF_sC_1 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_sC_1]  =  FALSE" << endl;
		list.push_back(make_tuple(83, 0.1, "EXP", 0));
	}
	if (boolState[failI_OF_sC_1_I] == true)
	{
		//cout << "86 : xx24_OF_sC_1_I : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failI_OF_sC_1_I]  =  FALSE" << endl;
		list.push_back(make_tuple(86, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_sC_2] == false) && (boolState[required_OF_sC_2] && boolState[relevant_evt_OF_sC_2]))
	{
		//cout << "87 : xx10_OF_sC_2 : FAULT failF  LABEL \"failure in operation sC_2\"  DIST EXP (0.05)  INDUCING boolState[failF_OF_sC_2]  =  TRUE" << endl;
		list.push_back(make_tuple(87, 0.05, "EXP", 0));
	}
	if (boolState[failF_OF_sC_2] == true)
	{
		//cout << "88 : xx11_OF_sC_2 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_sC_2]  =  FALSE" << endl;
		list.push_back(make_tuple(88, 0.1, "EXP", 0));
	}
	if (boolState[failI_OF_sC_2_I] == true)
	{
		//cout << "91 : xx24_OF_sC_2_I : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failI_OF_sC_2_I]  =  FALSE" << endl;
		list.push_back(make_tuple(91, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_sC_3] == false) && (boolState[required_OF_sC_3] && boolState[relevant_evt_OF_sC_3]))
	{
		//cout << "92 : xx10_OF_sC_3 : FAULT failF  LABEL \"failure in operation sC_3\"  DIST EXP (0.05)  INDUCING boolState[failF_OF_sC_3]  =  TRUE" << endl;
		list.push_back(make_tuple(92, 0.05, "EXP", 0));
	}
	if (boolState[failF_OF_sC_3] == true)
	{
		//cout << "93 : xx11_OF_sC_3 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_sC_3]  =  FALSE" << endl;
		list.push_back(make_tuple(93, 0.1, "EXP", 0));
	}
	if (boolState[failI_OF_sC_3_I] == true)
	{
		//cout << "96 : xx24_OF_sC_3_I : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failI_OF_sC_3_I]  =  FALSE" << endl;
		list.push_back(make_tuple(96, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_sC_4] == false) && (boolState[required_OF_sC_4] && boolState[relevant_evt_OF_sC_4]))
	{
		//cout << "97 : xx10_OF_sC_4 : FAULT failF  LABEL \"failure in operation sC_4\"  DIST EXP (0.05)  INDUCING boolState[failF_OF_sC_4]  =  TRUE" << endl;
		list.push_back(make_tuple(97, 0.05, "EXP", 0));
	}
	if (boolState[failF_OF_sC_4] == true)
	{
		//cout << "98 : xx11_OF_sC_4 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_sC_4]  =  FALSE" << endl;
		list.push_back(make_tuple(98, 0.1, "EXP", 0));
	}
	if (boolState[failI_OF_sC_4_I] == true)
	{
		//cout << "101 : xx24_OF_sC_4_I : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failI_OF_sC_4_I]  =  FALSE" << endl;
		list.push_back(make_tuple(101, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_sC_5] == false) && (boolState[required_OF_sC_5] && boolState[relevant_evt_OF_sC_5]))
	{
		//cout << "102 : xx10_OF_sC_5 : FAULT failF  LABEL \"failure in operation sC_5\"  DIST EXP (0.05)  INDUCING boolState[failF_OF_sC_5]  =  TRUE" << endl;
		list.push_back(make_tuple(102, 0.05, "EXP", 0));
	}
	if (boolState[failF_OF_sC_5] == true)
	{
		//cout << "103 : xx11_OF_sC_5 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_sC_5]  =  FALSE" << endl;
		list.push_back(make_tuple(103, 0.1, "EXP", 0));
	}
	if (boolState[failI_OF_sC_5_I] == true)
	{
		//cout << "106 : xx24_OF_sC_5_I : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failI_OF_sC_5_I]  =  FALSE" << endl;
		list.push_back(make_tuple(106, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_sD_1] == false) && (boolState[required_OF_sD_1] && boolState[relevant_evt_OF_sD_1]))
	{
		//cout << "107 : xx10_OF_sD_1 : FAULT failF  LABEL \"failure in operation sD_1\"  DIST EXP (0.05)  INDUCING boolState[failF_OF_sD_1]  =  TRUE" << endl;
		list.push_back(make_tuple(107, 0.05, "EXP", 0));
	}
	if (boolState[failF_OF_sD_1] == true)
	{
		//cout << "108 : xx11_OF_sD_1 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_sD_1]  =  FALSE" << endl;
		list.push_back(make_tuple(108, 0.1, "EXP", 0));
	}
	if (boolState[failI_OF_sD_1_I] == true)
	{
		//cout << "111 : xx24_OF_sD_1_I : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failI_OF_sD_1_I]  =  FALSE" << endl;
		list.push_back(make_tuple(111, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_sD_2] == false) && (boolState[required_OF_sD_2] && boolState[relevant_evt_OF_sD_2]))
	{
		//cout << "112 : xx10_OF_sD_2 : FAULT failF  LABEL \"failure in operation sD_2\"  DIST EXP (0.05)  INDUCING boolState[failF_OF_sD_2]  =  TRUE" << endl;
		list.push_back(make_tuple(112, 0.05, "EXP", 0));
	}
	if (boolState[failF_OF_sD_2] == true)
	{
		//cout << "113 : xx11_OF_sD_2 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_sD_2]  =  FALSE" << endl;
		list.push_back(make_tuple(113, 0.1, "EXP", 0));
	}
	if (boolState[failI_OF_sD_2_I] == true)
	{
		//cout << "116 : xx24_OF_sD_2_I : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failI_OF_sD_2_I]  =  FALSE" << endl;
		list.push_back(make_tuple(116, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_sD_3] == false) && (boolState[required_OF_sD_3] && boolState[relevant_evt_OF_sD_3]))
	{
		//cout << "117 : xx10_OF_sD_3 : FAULT failF  LABEL \"failure in operation sD_3\"  DIST EXP (0.05)  INDUCING boolState[failF_OF_sD_3]  =  TRUE" << endl;
		list.push_back(make_tuple(117, 0.05, "EXP", 0));
	}
	if (boolState[failF_OF_sD_3] == true)
	{
		//cout << "118 : xx11_OF_sD_3 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_sD_3]  =  FALSE" << endl;
		list.push_back(make_tuple(118, 0.1, "EXP", 0));
	}
	if (boolState[failI_OF_sD_3_I] == true)
	{
		//cout << "121 : xx24_OF_sD_3_I : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failI_OF_sD_3_I]  =  FALSE" << endl;
		list.push_back(make_tuple(121, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_sD_4] == false) && (boolState[required_OF_sD_4] && boolState[relevant_evt_OF_sD_4]))
	{
		//cout << "122 : xx10_OF_sD_4 : FAULT failF  LABEL \"failure in operation sD_4\"  DIST EXP (0.05)  INDUCING boolState[failF_OF_sD_4]  =  TRUE" << endl;
		list.push_back(make_tuple(122, 0.05, "EXP", 0));
	}
	if (boolState[failF_OF_sD_4] == true)
	{
		//cout << "123 : xx11_OF_sD_4 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_sD_4]  =  FALSE" << endl;
		list.push_back(make_tuple(123, 0.1, "EXP", 0));
	}
	if (boolState[failI_OF_sD_4_I] == true)
	{
		//cout << "126 : xx24_OF_sD_4_I : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failI_OF_sD_4_I]  =  FALSE" << endl;
		list.push_back(make_tuple(126, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_sD_5] == false) && (boolState[required_OF_sD_5] && boolState[relevant_evt_OF_sD_5]))
	{
		//cout << "127 : xx10_OF_sD_5 : FAULT failF  LABEL \"failure in operation sD_5\"  DIST EXP (0.05)  INDUCING boolState[failF_OF_sD_5]  =  TRUE" << endl;
		list.push_back(make_tuple(127, 0.05, "EXP", 0));
	}
	if (boolState[failF_OF_sD_5] == true)
	{
		//cout << "128 : xx11_OF_sD_5 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_sD_5]  =  FALSE" << endl;
		list.push_back(make_tuple(128, 0.1, "EXP", 0));
	}
	if (boolState[failI_OF_sD_5_I] == true)
	{
		//cout << "131 : xx24_OF_sD_5_I : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failI_OF_sD_5_I]  =  FALSE" << endl;
		list.push_back(make_tuple(131, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_sw_1] == false) && (boolState[required_OF_sw_1] && boolState[relevant_evt_OF_sw_1]))
	{
		//cout << "132 : xx10_OF_sw_1 : FAULT failF  LABEL \"failure in operation sw_1\"  DIST EXP (0.015)  INDUCING boolState[failF_OF_sw_1]  =  TRUE" << endl;
		list.push_back(make_tuple(132, 0.015, "EXP", 0));
	}
	if (boolState[failF_OF_sw_1] == true)
	{
		//cout << "133 : xx11_OF_sw_1 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_sw_1]  =  FALSE" << endl;
		list.push_back(make_tuple(133, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_sw_2] == false) && (boolState[required_OF_sw_2] && boolState[relevant_evt_OF_sw_2]))
	{
		//cout << "134 : xx10_OF_sw_2 : FAULT failF  LABEL \"failure in operation sw_2\"  DIST EXP (0.015)  INDUCING boolState[failF_OF_sw_2]  =  TRUE" << endl;
		list.push_back(make_tuple(134, 0.015, "EXP", 0));
	}
	if (boolState[failF_OF_sw_2] == true)
	{
		//cout << "135 : xx11_OF_sw_2 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_sw_2]  =  FALSE" << endl;
		list.push_back(make_tuple(135, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_sw_3] == false) && (boolState[required_OF_sw_3] && boolState[relevant_evt_OF_sw_3]))
	{
		//cout << "136 : xx10_OF_sw_3 : FAULT failF  LABEL \"failure in operation sw_3\"  DIST EXP (0.015)  INDUCING boolState[failF_OF_sw_3]  =  TRUE" << endl;
		list.push_back(make_tuple(136, 0.015, "EXP", 0));
	}
	if (boolState[failF_OF_sw_3] == true)
	{
		//cout << "137 : xx11_OF_sw_3 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_sw_3]  =  FALSE" << endl;
		list.push_back(make_tuple(137, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_sw_4] == false) && (boolState[required_OF_sw_4] && boolState[relevant_evt_OF_sw_4]))
	{
		//cout << "138 : xx10_OF_sw_4 : FAULT failF  LABEL \"failure in operation sw_4\"  DIST EXP (0.015)  INDUCING boolState[failF_OF_sw_4]  =  TRUE" << endl;
		list.push_back(make_tuple(138, 0.015, "EXP", 0));
	}
	if (boolState[failF_OF_sw_4] == true)
	{
		//cout << "139 : xx11_OF_sw_4 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_sw_4]  =  FALSE" << endl;
		list.push_back(make_tuple(139, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_sw_5] == false) && (boolState[required_OF_sw_5] && boolState[relevant_evt_OF_sw_5]))
	{
		//cout << "140 : xx10_OF_sw_5 : FAULT failF  LABEL \"failure in operation sw_5\"  DIST EXP (0.015)  INDUCING boolState[failF_OF_sw_5]  =  TRUE" << endl;
		list.push_back(make_tuple(140, 0.015, "EXP", 0));
	}
	if (boolState[failF_OF_sw_5] == true)
	{
		//cout << "141 : xx11_OF_sw_5 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_sw_5]  =  FALSE" << endl;
		list.push_back(make_tuple(141, 0.1, "EXP", 0));
	}
	return list;
}


void storm::figaro::FigaroProgram_rc_5_5_Trim_repair::runOnceInteractionStep_initialization()
{
	if (boolState[failF_OF_controller] == true )
	{
		boolState[S_OF_controller]  =  true;
	}

	if (boolState[failF_OF_mp1] == true )
	{
		boolState[S_OF_mp1]  =  true;
	}

	if (boolState[failF_OF_mp2] == true )
	{
		boolState[S_OF_mp2]  =  true;
	}

	if (boolState[failF_OF_mp3] == true )
	{
		boolState[S_OF_mp3]  =  true;
	}

	if (boolState[failF_OF_mp4] == true )
	{
		boolState[S_OF_mp4]  =  true;
	}

	if (boolState[failF_OF_mp5] == true )
	{
		boolState[S_OF_mp5]  =  true;
	}

	if (boolState[failF_OF_ms1] == true )
	{
		boolState[S_OF_ms1]  =  true;
	}

	if (boolState[failF_OF_ms2] == true )
	{
		boolState[S_OF_ms2]  =  true;
	}

	if (boolState[failF_OF_ms3] == true )
	{
		boolState[S_OF_ms3]  =  true;
	}

	if (boolState[failF_OF_ms4] == true )
	{
		boolState[S_OF_ms4]  =  true;
	}

	if (boolState[failF_OF_ms5] == true )
	{
		boolState[S_OF_ms5]  =  true;
	}

	if (boolState[failF_OF_network_1] == true )
	{
		boolState[S_OF_network_1]  =  true;
	}

	if (boolState[failF_OF_network_2] == true )
	{
		boolState[S_OF_network_2]  =  true;
	}

	if (boolState[failF_OF_network_3] == true )
	{
		boolState[S_OF_network_3]  =  true;
	}

	if (boolState[failF_OF_network_4] == true )
	{
		boolState[S_OF_network_4]  =  true;
	}

	if (boolState[failF_OF_network_5] == true )
	{
		boolState[S_OF_network_5]  =  true;
	}

	if (boolState[failF_OF_sA_1] == true )
	{
		boolState[S_OF_sA_1]  =  true;
	}

	if (boolState[failI_OF_sA_1_I] == true )
	{
		boolState[S_OF_sA_1_I]  =  true;
	}

	if (boolState[failF_OF_sA_2] == true )
	{
		boolState[S_OF_sA_2]  =  true;
	}

	if (boolState[failI_OF_sA_2_I] == true )
	{
		boolState[S_OF_sA_2_I]  =  true;
	}

	if (boolState[failF_OF_sA_3] == true )
	{
		boolState[S_OF_sA_3]  =  true;
	}

	if (boolState[failI_OF_sA_3_I] == true )
	{
		boolState[S_OF_sA_3_I]  =  true;
	}

	if (boolState[failF_OF_sA_4] == true )
	{
		boolState[S_OF_sA_4]  =  true;
	}

	if (boolState[failI_OF_sA_4_I] == true )
	{
		boolState[S_OF_sA_4_I]  =  true;
	}

	if (boolState[failF_OF_sA_5] == true )
	{
		boolState[S_OF_sA_5]  =  true;
	}

	if (boolState[failI_OF_sA_5_I] == true )
	{
		boolState[S_OF_sA_5_I]  =  true;
	}

	if (boolState[failF_OF_sB_1] == true )
	{
		boolState[S_OF_sB_1]  =  true;
	}

	if (boolState[failI_OF_sB_1_I] == true )
	{
		boolState[S_OF_sB_1_I]  =  true;
	}

	if (boolState[failF_OF_sB_2] == true )
	{
		boolState[S_OF_sB_2]  =  true;
	}

	if (boolState[failI_OF_sB_2_I] == true )
	{
		boolState[S_OF_sB_2_I]  =  true;
	}

	if (boolState[failF_OF_sB_3] == true )
	{
		boolState[S_OF_sB_3]  =  true;
	}

	if (boolState[failI_OF_sB_3_I] == true )
	{
		boolState[S_OF_sB_3_I]  =  true;
	}

	if (boolState[failF_OF_sB_4] == true )
	{
		boolState[S_OF_sB_4]  =  true;
	}

	if (boolState[failI_OF_sB_4_I] == true )
	{
		boolState[S_OF_sB_4_I]  =  true;
	}

	if (boolState[failF_OF_sB_5] == true )
	{
		boolState[S_OF_sB_5]  =  true;
	}

	if (boolState[failI_OF_sB_5_I] == true )
	{
		boolState[S_OF_sB_5_I]  =  true;
	}

	if (boolState[failF_OF_sC_1] == true )
	{
		boolState[S_OF_sC_1]  =  true;
	}

	if (boolState[failI_OF_sC_1_I] == true )
	{
		boolState[S_OF_sC_1_I]  =  true;
	}

	if (boolState[failF_OF_sC_2] == true )
	{
		boolState[S_OF_sC_2]  =  true;
	}

	if (boolState[failI_OF_sC_2_I] == true )
	{
		boolState[S_OF_sC_2_I]  =  true;
	}

	if (boolState[failF_OF_sC_3] == true )
	{
		boolState[S_OF_sC_3]  =  true;
	}

	if (boolState[failI_OF_sC_3_I] == true )
	{
		boolState[S_OF_sC_3_I]  =  true;
	}

	if (boolState[failF_OF_sC_4] == true )
	{
		boolState[S_OF_sC_4]  =  true;
	}

	if (boolState[failI_OF_sC_4_I] == true )
	{
		boolState[S_OF_sC_4_I]  =  true;
	}

	if (boolState[failF_OF_sC_5] == true )
	{
		boolState[S_OF_sC_5]  =  true;
	}

	if (boolState[failI_OF_sC_5_I] == true )
	{
		boolState[S_OF_sC_5_I]  =  true;
	}

	if (boolState[failF_OF_sD_1] == true )
	{
		boolState[S_OF_sD_1]  =  true;
	}

	if (boolState[failI_OF_sD_1_I] == true )
	{
		boolState[S_OF_sD_1_I]  =  true;
	}

	if (boolState[failF_OF_sD_2] == true )
	{
		boolState[S_OF_sD_2]  =  true;
	}

	if (boolState[failI_OF_sD_2_I] == true )
	{
		boolState[S_OF_sD_2_I]  =  true;
	}

	if (boolState[failF_OF_sD_3] == true )
	{
		boolState[S_OF_sD_3]  =  true;
	}

	if (boolState[failI_OF_sD_3_I] == true )
	{
		boolState[S_OF_sD_3_I]  =  true;
	}

	if (boolState[failF_OF_sD_4] == true )
	{
		boolState[S_OF_sD_4]  =  true;
	}

	if (boolState[failI_OF_sD_4_I] == true )
	{
		boolState[S_OF_sD_4_I]  =  true;
	}

	if (boolState[failF_OF_sD_5] == true )
	{
		boolState[S_OF_sD_5]  =  true;
	}

	if (boolState[failI_OF_sD_5_I] == true )
	{
		boolState[S_OF_sD_5_I]  =  true;
	}

	if (boolState[failF_OF_sw_1] == true )
	{
		boolState[S_OF_sw_1]  =  true;
	}

	if (boolState[failF_OF_sw_2] == true )
	{
		boolState[S_OF_sw_2]  =  true;
	}

	if (boolState[failF_OF_sw_3] == true )
	{
		boolState[S_OF_sw_3]  =  true;
	}

	if (boolState[failF_OF_sw_4] == true )
	{
		boolState[S_OF_sw_4]  =  true;
	}

	if (boolState[failF_OF_sw_5] == true )
	{
		boolState[S_OF_sw_5]  =  true;
	}

}


void storm::figaro::FigaroProgram_rc_5_5_Trim_repair::runOnceInteractionStep_propagate_effect_S()
{
	if ((boolState[S_OF_barriers] || boolState[S_OF_controller]) || boolState[S_OF_sensors] )
	{
		boolState[S_OF_System]  =  true;
	}

	if (boolState[S_OF_System] )
	{
		boolState[S_OF_UE_1]  =  true;
	}

	if (boolState[S_OF_sA_1] || boolState[S_OF_sA_1_I] )
	{
		boolState[S_OF__SA_1]  =  true;
	}

	if (boolState[S_OF_sA_2] || boolState[S_OF_sA_2_I] )
	{
		boolState[S_OF__SA_2]  =  true;
	}

	if (boolState[S_OF_sA_3] || boolState[S_OF_sA_3_I] )
	{
		boolState[S_OF__SA_3]  =  true;
	}

	if (boolState[S_OF_sA_4] || boolState[S_OF_sA_4_I] )
	{
		boolState[S_OF__SA_4]  =  true;
	}

	if (boolState[S_OF_sA_5] || boolState[S_OF_sA_5_I] )
	{
		boolState[S_OF__SA_5]  =  true;
	}

	if (boolState[S_OF_sB_1] || boolState[S_OF_sB_1_I] )
	{
		boolState[S_OF__SB_1]  =  true;
	}

	if (boolState[S_OF_sB_2] || boolState[S_OF_sB_2_I] )
	{
		boolState[S_OF__SB_2]  =  true;
	}

	if (boolState[S_OF_sB_3] || boolState[S_OF_sB_3_I] )
	{
		boolState[S_OF__SB_3]  =  true;
	}

	if (boolState[S_OF_sB_4] || boolState[S_OF_sB_4_I] )
	{
		boolState[S_OF__SB_4]  =  true;
	}

	if (boolState[S_OF_sB_5] || boolState[S_OF_sB_5_I] )
	{
		boolState[S_OF__SB_5]  =  true;
	}

	if (boolState[S_OF_sC_1] || boolState[S_OF_sC_1_I] )
	{
		boolState[S_OF__SC_1]  =  true;
	}

	if (boolState[S_OF_sC_2] || boolState[S_OF_sC_2_I] )
	{
		boolState[S_OF__SC_2]  =  true;
	}

	if (boolState[S_OF_sC_3] || boolState[S_OF_sC_3_I] )
	{
		boolState[S_OF__SC_3]  =  true;
	}

	if (boolState[S_OF_sC_4] || boolState[S_OF_sC_4_I] )
	{
		boolState[S_OF__SC_4]  =  true;
	}

	if (boolState[S_OF_sC_5] || boolState[S_OF_sC_5_I] )
	{
		boolState[S_OF__SC_5]  =  true;
	}

	if (boolState[S_OF_sD_1] || boolState[S_OF_sD_1_I] )
	{
		boolState[S_OF__SD_1]  =  true;
	}

	if (boolState[S_OF_sD_2] || boolState[S_OF_sD_2_I] )
	{
		boolState[S_OF__SD_2]  =  true;
	}

	if (boolState[S_OF_sD_3] || boolState[S_OF_sD_3_I] )
	{
		boolState[S_OF__SD_3]  =  true;
	}

	if (boolState[S_OF_sD_4] || boolState[S_OF_sD_4_I] )
	{
		boolState[S_OF__SD_4]  =  true;
	}

	if (boolState[S_OF_sD_5] || boolState[S_OF_sD_5_I] )
	{
		boolState[S_OF__SD_5]  =  true;
	}

	if (boolState[S_OF_motor_1] || boolState[S_OF_switch_1] )
	{
		boolState[S_OF_barrier_1]  =  true;
	}

	if (boolState[S_OF_motor_2] || boolState[S_OF_switch_2] )
	{
		boolState[S_OF_barrier_2]  =  true;
	}

	if (boolState[S_OF_motor_3] || boolState[S_OF_switch_3] )
	{
		boolState[S_OF_barrier_3]  =  true;
	}

	if (boolState[S_OF_motor_4] || boolState[S_OF_switch_4] )
	{
		boolState[S_OF_barrier_4]  =  true;
	}

	if (boolState[S_OF_motor_5] || boolState[S_OF_switch_5] )
	{
		boolState[S_OF_barrier_5]  =  true;
	}

	if ((((boolState[S_OF_barrier_1] || boolState[S_OF_barrier_2]) || boolState[S_OF_barrier_3]) || boolState[S_OF_barrier_4]) || boolState[S_OF_barrier_5] )
	{
		boolState[S_OF_barriers]  =  true;
	}

	if (boolState[S_OF_mp1] && boolState[S_OF_ms1] )
	{
		boolState[S_OF_motor_1]  =  true;
	}

	if (boolState[S_OF_mp2] && boolState[S_OF_ms2] )
	{
		boolState[S_OF_motor_2]  =  true;
	}

	if (boolState[S_OF_mp3] && boolState[S_OF_ms3] )
	{
		boolState[S_OF_motor_3]  =  true;
	}

	if (boolState[S_OF_mp4] && boolState[S_OF_ms4] )
	{
		boolState[S_OF_motor_4]  =  true;
	}

	if (boolState[S_OF_mp5] && boolState[S_OF_ms5] )
	{
		boolState[S_OF_motor_5]  =  true;
	}

	if ((2 <= (boolState[S_OF__SA_1] + boolState[S_OF__SB_1] + boolState[S_OF__SC_1] + boolState[S_OF__SD_1])) )
	{
		boolState[S_OF_sensor_1]  =  true;
	}

	if ((2 <= (boolState[S_OF__SA_2] + boolState[S_OF__SB_2] + boolState[S_OF__SC_2] + boolState[S_OF__SD_2])) )
	{
		boolState[S_OF_sensor_2]  =  true;
	}

	if ((2 <= (boolState[S_OF__SA_3] + boolState[S_OF__SB_3] + boolState[S_OF__SC_3] + boolState[S_OF__SD_3])) )
	{
		boolState[S_OF_sensor_3]  =  true;
	}

	if ((2 <= (boolState[S_OF__SA_4] + boolState[S_OF__SB_4] + boolState[S_OF__SC_4] + boolState[S_OF__SD_4])) )
	{
		boolState[S_OF_sensor_4]  =  true;
	}

	if ((2 <= (boolState[S_OF__SA_5] + boolState[S_OF__SB_5] + boolState[S_OF__SC_5] + boolState[S_OF__SD_5])) )
	{
		boolState[S_OF_sensor_5]  =  true;
	}

	if ((((boolState[S_OF_sensor_1] || boolState[S_OF_sensor_2]) || boolState[S_OF_sensor_3]) || boolState[S_OF_sensor_4]) || boolState[S_OF_sensor_5] )
	{
		boolState[S_OF_sensors]  =  true;
	}

	if (((boolState[S_OF_mp1] && boolState[S_OF_sw_1]) && boolState[already_S_OF_sw_1]) && ( !  boolState[already_S_OF_mp1]) )
	{
		boolState[S_OF_switch_1]  =  true;
	}

	if (boolState[already_S_OF_switch_1] && (boolState[S_OF_sw_1] && boolState[S_OF_mp1]) )
	{
		boolState[S_OF_switch_1]  =  true;
	}

	if (((boolState[S_OF_mp2] && boolState[S_OF_sw_2]) && boolState[already_S_OF_sw_2]) && ( !  boolState[already_S_OF_mp2]) )
	{
		boolState[S_OF_switch_2]  =  true;
	}

	if (boolState[already_S_OF_switch_2] && (boolState[S_OF_sw_2] && boolState[S_OF_mp2]) )
	{
		boolState[S_OF_switch_2]  =  true;
	}

	if (((boolState[S_OF_mp3] && boolState[S_OF_sw_3]) && boolState[already_S_OF_sw_3]) && ( !  boolState[already_S_OF_mp3]) )
	{
		boolState[S_OF_switch_3]  =  true;
	}

	if (boolState[already_S_OF_switch_3] && (boolState[S_OF_sw_3] && boolState[S_OF_mp3]) )
	{
		boolState[S_OF_switch_3]  =  true;
	}

	if (((boolState[S_OF_mp4] && boolState[S_OF_sw_4]) && boolState[already_S_OF_sw_4]) && ( !  boolState[already_S_OF_mp4]) )
	{
		boolState[S_OF_switch_4]  =  true;
	}

	if (boolState[already_S_OF_switch_4] && (boolState[S_OF_sw_4] && boolState[S_OF_mp4]) )
	{
		boolState[S_OF_switch_4]  =  true;
	}

	if (((boolState[S_OF_mp5] && boolState[S_OF_sw_5]) && boolState[already_S_OF_sw_5]) && ( !  boolState[already_S_OF_mp5]) )
	{
		boolState[S_OF_switch_5]  =  true;
	}

	if (boolState[already_S_OF_switch_5] && (boolState[S_OF_sw_5] && boolState[S_OF_mp5]) )
	{
		boolState[S_OF_switch_5]  =  true;
	}

}


void storm::figaro::FigaroProgram_rc_5_5_Trim_repair::runOnceInteractionStep_propagate_effect_required()
{
	if ( !boolState[required_OF_UE_1] )
	{
		boolState[required_OF_System]  =  false;
	}

	if (boolState[relevant_evt_OF_UE_1] && ( !boolState[S_OF_UE_1]) )
	{
		boolState[relevant_evt_OF_System]  =  true;
	}



	boolState[relevant_evt_OF_UE_1]  =  true  ;

	if ( !boolState[required_OF_sensor_1] )
	{
		boolState[required_OF__SA_1]  =  false;
	}

	if (boolState[relevant_evt_OF_sensor_1] && ( !boolState[S_OF_sensor_1]) )
	{
		boolState[relevant_evt_OF__SA_1]  =  true;
	}

	if ( !boolState[required_OF_sensor_2] )
	{
		boolState[required_OF__SA_2]  =  false;
	}

	if (boolState[relevant_evt_OF_sensor_2] && ( !boolState[S_OF_sensor_2]) )
	{
		boolState[relevant_evt_OF__SA_2]  =  true;
	}

	if ( !boolState[required_OF_sensor_3] )
	{
		boolState[required_OF__SA_3]  =  false;
	}

	if (boolState[relevant_evt_OF_sensor_3] && ( !boolState[S_OF_sensor_3]) )
	{
		boolState[relevant_evt_OF__SA_3]  =  true;
	}

	if ( !boolState[required_OF_sensor_4] )
	{
		boolState[required_OF__SA_4]  =  false;
	}

	if (boolState[relevant_evt_OF_sensor_4] && ( !boolState[S_OF_sensor_4]) )
	{
		boolState[relevant_evt_OF__SA_4]  =  true;
	}

	if ( !boolState[required_OF_sensor_5] )
	{
		boolState[required_OF__SA_5]  =  false;
	}

	if (boolState[relevant_evt_OF_sensor_5] && ( !boolState[S_OF_sensor_5]) )
	{
		boolState[relevant_evt_OF__SA_5]  =  true;
	}

	if ( !boolState[required_OF_sensor_1] )
	{
		boolState[required_OF__SB_1]  =  false;
	}

	if (boolState[relevant_evt_OF_sensor_1] && ( !boolState[S_OF_sensor_1]) )
	{
		boolState[relevant_evt_OF__SB_1]  =  true;
	}

	if ( !boolState[required_OF_sensor_2] )
	{
		boolState[required_OF__SB_2]  =  false;
	}

	if (boolState[relevant_evt_OF_sensor_2] && ( !boolState[S_OF_sensor_2]) )
	{
		boolState[relevant_evt_OF__SB_2]  =  true;
	}

	if ( !boolState[required_OF_sensor_3] )
	{
		boolState[required_OF__SB_3]  =  false;
	}

	if (boolState[relevant_evt_OF_sensor_3] && ( !boolState[S_OF_sensor_3]) )
	{
		boolState[relevant_evt_OF__SB_3]  =  true;
	}

	if ( !boolState[required_OF_sensor_4] )
	{
		boolState[required_OF__SB_4]  =  false;
	}

	if (boolState[relevant_evt_OF_sensor_4] && ( !boolState[S_OF_sensor_4]) )
	{
		boolState[relevant_evt_OF__SB_4]  =  true;
	}

	if ( !boolState[required_OF_sensor_5] )
	{
		boolState[required_OF__SB_5]  =  false;
	}

	if (boolState[relevant_evt_OF_sensor_5] && ( !boolState[S_OF_sensor_5]) )
	{
		boolState[relevant_evt_OF__SB_5]  =  true;
	}

	if ( !boolState[required_OF_sensor_1] )
	{
		boolState[required_OF__SC_1]  =  false;
	}

	if (boolState[relevant_evt_OF_sensor_1] && ( !boolState[S_OF_sensor_1]) )
	{
		boolState[relevant_evt_OF__SC_1]  =  true;
	}

	if ( !boolState[required_OF_sensor_2] )
	{
		boolState[required_OF__SC_2]  =  false;
	}

	if (boolState[relevant_evt_OF_sensor_2] && ( !boolState[S_OF_sensor_2]) )
	{
		boolState[relevant_evt_OF__SC_2]  =  true;
	}

	if ( !boolState[required_OF_sensor_3] )
	{
		boolState[required_OF__SC_3]  =  false;
	}

	if (boolState[relevant_evt_OF_sensor_3] && ( !boolState[S_OF_sensor_3]) )
	{
		boolState[relevant_evt_OF__SC_3]  =  true;
	}

	if ( !boolState[required_OF_sensor_4] )
	{
		boolState[required_OF__SC_4]  =  false;
	}

	if (boolState[relevant_evt_OF_sensor_4] && ( !boolState[S_OF_sensor_4]) )
	{
		boolState[relevant_evt_OF__SC_4]  =  true;
	}

	if ( !boolState[required_OF_sensor_5] )
	{
		boolState[required_OF__SC_5]  =  false;
	}

	if (boolState[relevant_evt_OF_sensor_5] && ( !boolState[S_OF_sensor_5]) )
	{
		boolState[relevant_evt_OF__SC_5]  =  true;
	}

	if ( !boolState[required_OF_sensor_1] )
	{
		boolState[required_OF__SD_1]  =  false;
	}

	if (boolState[relevant_evt_OF_sensor_1] && ( !boolState[S_OF_sensor_1]) )
	{
		boolState[relevant_evt_OF__SD_1]  =  true;
	}

	if ( !boolState[required_OF_sensor_2] )
	{
		boolState[required_OF__SD_2]  =  false;
	}

	if (boolState[relevant_evt_OF_sensor_2] && ( !boolState[S_OF_sensor_2]) )
	{
		boolState[relevant_evt_OF__SD_2]  =  true;
	}

	if ( !boolState[required_OF_sensor_3] )
	{
		boolState[required_OF__SD_3]  =  false;
	}

	if (boolState[relevant_evt_OF_sensor_3] && ( !boolState[S_OF_sensor_3]) )
	{
		boolState[relevant_evt_OF__SD_3]  =  true;
	}

	if ( !boolState[required_OF_sensor_4] )
	{
		boolState[required_OF__SD_4]  =  false;
	}

	if (boolState[relevant_evt_OF_sensor_4] && ( !boolState[S_OF_sensor_4]) )
	{
		boolState[relevant_evt_OF__SD_4]  =  true;
	}

	if ( !boolState[required_OF_sensor_5] )
	{
		boolState[required_OF__SD_5]  =  false;
	}

	if (boolState[relevant_evt_OF_sensor_5] && ( !boolState[S_OF_sensor_5]) )
	{
		boolState[relevant_evt_OF__SD_5]  =  true;
	}

	if ( !boolState[required_OF_barriers] )
	{
		boolState[required_OF_barrier_1]  =  false;
	}

	if (boolState[relevant_evt_OF_barriers] && ( !boolState[S_OF_barriers]) )
	{
		boolState[relevant_evt_OF_barrier_1]  =  true;
	}

	if ( !boolState[required_OF_barriers] )
	{
		boolState[required_OF_barrier_2]  =  false;
	}

	if (boolState[relevant_evt_OF_barriers] && ( !boolState[S_OF_barriers]) )
	{
		boolState[relevant_evt_OF_barrier_2]  =  true;
	}

	if ( !boolState[required_OF_barriers] )
	{
		boolState[required_OF_barrier_3]  =  false;
	}

	if (boolState[relevant_evt_OF_barriers] && ( !boolState[S_OF_barriers]) )
	{
		boolState[relevant_evt_OF_barrier_3]  =  true;
	}

	if ( !boolState[required_OF_barriers] )
	{
		boolState[required_OF_barrier_4]  =  false;
	}

	if (boolState[relevant_evt_OF_barriers] && ( !boolState[S_OF_barriers]) )
	{
		boolState[relevant_evt_OF_barrier_4]  =  true;
	}

	if ( !boolState[required_OF_barriers] )
	{
		boolState[required_OF_barrier_5]  =  false;
	}

	if (boolState[relevant_evt_OF_barriers] && ( !boolState[S_OF_barriers]) )
	{
		boolState[relevant_evt_OF_barrier_5]  =  true;
	}

	if ( !boolState[required_OF_System] )
	{
		boolState[required_OF_barriers]  =  false;
	}

	if (boolState[relevant_evt_OF_System] && ( !boolState[S_OF_System]) )
	{
		boolState[relevant_evt_OF_barriers]  =  true;
	}

	if ( !boolState[required_OF_System] )
	{
		boolState[required_OF_controller]  =  false;
	}

	if (boolState[relevant_evt_OF_System] && ( !boolState[S_OF_System]) )
	{
		boolState[relevant_evt_OF_controller]  =  true;
	}

	if ( !boolState[required_OF_barrier_1] )
	{
		boolState[required_OF_motor_1]  =  false;
	}

	if (boolState[relevant_evt_OF_barrier_1] && ( !boolState[S_OF_barrier_1]) )
	{
		boolState[relevant_evt_OF_motor_1]  =  true;
	}

	if ( !boolState[required_OF_barrier_2] )
	{
		boolState[required_OF_motor_2]  =  false;
	}

	if (boolState[relevant_evt_OF_barrier_2] && ( !boolState[S_OF_barrier_2]) )
	{
		boolState[relevant_evt_OF_motor_2]  =  true;
	}

	if ( !boolState[required_OF_barrier_3] )
	{
		boolState[required_OF_motor_3]  =  false;
	}

	if (boolState[relevant_evt_OF_barrier_3] && ( !boolState[S_OF_barrier_3]) )
	{
		boolState[relevant_evt_OF_motor_3]  =  true;
	}

	if ( !boolState[required_OF_barrier_4] )
	{
		boolState[required_OF_motor_4]  =  false;
	}

	if (boolState[relevant_evt_OF_barrier_4] && ( !boolState[S_OF_barrier_4]) )
	{
		boolState[relevant_evt_OF_motor_4]  =  true;
	}

	if ( !boolState[required_OF_barrier_5] )
	{
		boolState[required_OF_motor_5]  =  false;
	}

	if (boolState[relevant_evt_OF_barrier_5] && ( !boolState[S_OF_barrier_5]) )
	{
		boolState[relevant_evt_OF_motor_5]  =  true;
	}

	if (( !boolState[required_OF_motor_1]) && ( !boolState[required_OF_switch_1]) )
	{
		boolState[required_OF_mp1]  =  false;
	}

	if (((boolState[relevant_evt_OF_motor_1] && ( !boolState[S_OF_motor_1])) || (  boolState[relevant_evt_OF_switch_1] && ( !boolState[S_OF_switch_1]))) || (  boolState[relevant_evt_OF_ms1] && ( !boolState[S_OF_ms1])) )
	{
		boolState[relevant_evt_OF_mp1]  =  true;
	}

	if (( !boolState[required_OF_motor_2]) && ( !boolState[required_OF_switch_2]) )
	{
		boolState[required_OF_mp2]  =  false;
	}

	if (((boolState[relevant_evt_OF_motor_2] && ( !boolState[S_OF_motor_2])) || (  boolState[relevant_evt_OF_switch_2] && ( !boolState[S_OF_switch_2]))) || (  boolState[relevant_evt_OF_ms2] && ( !boolState[S_OF_ms2])) )
	{
		boolState[relevant_evt_OF_mp2]  =  true;
	}

	if (( !boolState[required_OF_motor_3]) && ( !boolState[required_OF_switch_3]) )
	{
		boolState[required_OF_mp3]  =  false;
	}

	if (((boolState[relevant_evt_OF_motor_3] && ( !boolState[S_OF_motor_3])) || (  boolState[relevant_evt_OF_switch_3] && ( !boolState[S_OF_switch_3]))) || (  boolState[relevant_evt_OF_ms3] && ( !boolState[S_OF_ms3])) )
	{
		boolState[relevant_evt_OF_mp3]  =  true;
	}

	if (( !boolState[required_OF_motor_4]) && ( !boolState[required_OF_switch_4]) )
	{
		boolState[required_OF_mp4]  =  false;
	}

	if (((boolState[relevant_evt_OF_motor_4] && ( !boolState[S_OF_motor_4])) || (  boolState[relevant_evt_OF_switch_4] && ( !boolState[S_OF_switch_4]))) || (  boolState[relevant_evt_OF_ms4] && ( !boolState[S_OF_ms4])) )
	{
		boolState[relevant_evt_OF_mp4]  =  true;
	}

	if (( !boolState[required_OF_motor_5]) && ( !boolState[required_OF_switch_5]) )
	{
		boolState[required_OF_mp5]  =  false;
	}

	if (((boolState[relevant_evt_OF_motor_5] && ( !boolState[S_OF_motor_5])) || (  boolState[relevant_evt_OF_switch_5] && ( !boolState[S_OF_switch_5]))) || (  boolState[relevant_evt_OF_ms5] && ( !boolState[S_OF_ms5])) )
	{
		boolState[relevant_evt_OF_mp5]  =  true;
	}

	if ( !boolState[required_OF_sensors] )
	{
		boolState[required_OF_sensor_1]  =  false;
	}

	if (boolState[relevant_evt_OF_sensors] && ( !boolState[S_OF_sensors]) )
	{
		boolState[relevant_evt_OF_sensor_1]  =  true;
	}

	if (( !boolState[required_OF_motor_1]) || ( !boolState[S_OF_mp1]) )
	{
		boolState[required_OF_ms1]  =  false;
	}

	if (boolState[relevant_evt_OF_motor_1] && ( !boolState[S_OF_motor_1]) )
	{
		boolState[relevant_evt_OF_ms1]  =  true;
	}

	if (( !boolState[required_OF_motor_2]) || ( !boolState[S_OF_mp2]) )
	{
		boolState[required_OF_ms2]  =  false;
	}

	if (boolState[relevant_evt_OF_motor_2] && ( !boolState[S_OF_motor_2]) )
	{
		boolState[relevant_evt_OF_ms2]  =  true;
	}

	if (( !boolState[required_OF_motor_3]) || ( !boolState[S_OF_mp3]) )
	{
		boolState[required_OF_ms3]  =  false;
	}

	if (boolState[relevant_evt_OF_motor_3] && ( !boolState[S_OF_motor_3]) )
	{
		boolState[relevant_evt_OF_ms3]  =  true;
	}

	if (( !boolState[required_OF_motor_4]) || ( !boolState[S_OF_mp4]) )
	{
		boolState[required_OF_ms4]  =  false;
	}

	if (boolState[relevant_evt_OF_motor_4] && ( !boolState[S_OF_motor_4]) )
	{
		boolState[relevant_evt_OF_ms4]  =  true;
	}

	if (( !boolState[required_OF_motor_5]) || ( !boolState[S_OF_mp5]) )
	{
		boolState[required_OF_ms5]  =  false;
	}

	if (boolState[relevant_evt_OF_motor_5] && ( !boolState[S_OF_motor_5]) )
	{
		boolState[relevant_evt_OF_ms5]  =  true;
	}

	if ((((boolState[relevant_evt_OF_sA_1_I] && ( !boolState[S_OF_sA_1_I])) || (  boolState[relevant_evt_OF_sB_1_I] && ( !boolState[S_OF_sB_1_I]))) || (  boolState[relevant_evt_OF_sC_1_I] && ( !boolState[S_OF_sC_1_I]))) || (  boolState[relevant_evt_OF_sD_1_I] && ( !boolState[S_OF_sD_1_I])) )
	{
		boolState[relevant_evt_OF_network_1]  =  true;
	}

	if ((((boolState[relevant_evt_OF_sA_2_I] && ( !boolState[S_OF_sA_2_I])) || (  boolState[relevant_evt_OF_sB_2_I] && ( !boolState[S_OF_sB_2_I]))) || (  boolState[relevant_evt_OF_sC_2_I] && ( !boolState[S_OF_sC_2_I]))) || (  boolState[relevant_evt_OF_sD_2_I] && ( !boolState[S_OF_sD_2_I])) )
	{
		boolState[relevant_evt_OF_network_2]  =  true;
	}

	if ((((boolState[relevant_evt_OF_sA_3_I] && ( !boolState[S_OF_sA_3_I])) || (  boolState[relevant_evt_OF_sB_3_I] && ( !boolState[S_OF_sB_3_I]))) || (  boolState[relevant_evt_OF_sC_3_I] && ( !boolState[S_OF_sC_3_I]))) || (  boolState[relevant_evt_OF_sD_3_I] && ( !boolState[S_OF_sD_3_I])) )
	{
		boolState[relevant_evt_OF_network_3]  =  true;
	}

	if ((((boolState[relevant_evt_OF_sA_4_I] && ( !boolState[S_OF_sA_4_I])) || (  boolState[relevant_evt_OF_sB_4_I] && ( !boolState[S_OF_sB_4_I]))) || (  boolState[relevant_evt_OF_sC_4_I] && ( !boolState[S_OF_sC_4_I]))) || (  boolState[relevant_evt_OF_sD_4_I] && ( !boolState[S_OF_sD_4_I])) )
	{
		boolState[relevant_evt_OF_network_4]  =  true;
	}

	if ((((boolState[relevant_evt_OF_sA_5_I] && ( !boolState[S_OF_sA_5_I])) || (  boolState[relevant_evt_OF_sB_5_I] && ( !boolState[S_OF_sB_5_I]))) || (  boolState[relevant_evt_OF_sC_5_I] && ( !boolState[S_OF_sC_5_I]))) || (  boolState[relevant_evt_OF_sD_5_I] && ( !boolState[S_OF_sD_5_I])) )
	{
		boolState[relevant_evt_OF_network_5]  =  true;
	}

	if ( !boolState[required_OF__SA_1] )
	{
		boolState[required_OF_sA_1]  =  false;
	}

	if (boolState[relevant_evt_OF__SA_1] && ( !boolState[S_OF__SA_1]) )
	{
		boolState[relevant_evt_OF_sA_1]  =  true;
	}

	if (( !boolState[required_OF__SA_1]) || ( !boolState[S_OF_network_1]) )
	{
		boolState[required_OF_sA_1_I]  =  false;
	}

	if (boolState[relevant_evt_OF__SA_1] && ( !boolState[S_OF__SA_1]) )
	{
		boolState[relevant_evt_OF_sA_1_I]  =  true;
	}

	if ( !boolState[required_OF__SA_2] )
	{
		boolState[required_OF_sA_2]  =  false;
	}

	if (boolState[relevant_evt_OF__SA_2] && ( !boolState[S_OF__SA_2]) )
	{
		boolState[relevant_evt_OF_sA_2]  =  true;
	}

	if (( !boolState[required_OF__SA_2]) || ( !boolState[S_OF_network_2]) )
	{
		boolState[required_OF_sA_2_I]  =  false;
	}

	if (boolState[relevant_evt_OF__SA_2] && ( !boolState[S_OF__SA_2]) )
	{
		boolState[relevant_evt_OF_sA_2_I]  =  true;
	}

	if ( !boolState[required_OF__SA_3] )
	{
		boolState[required_OF_sA_3]  =  false;
	}

	if (boolState[relevant_evt_OF__SA_3] && ( !boolState[S_OF__SA_3]) )
	{
		boolState[relevant_evt_OF_sA_3]  =  true;
	}

	if (( !boolState[required_OF__SA_3]) || ( !boolState[S_OF_network_3]) )
	{
		boolState[required_OF_sA_3_I]  =  false;
	}

	if (boolState[relevant_evt_OF__SA_3] && ( !boolState[S_OF__SA_3]) )
	{
		boolState[relevant_evt_OF_sA_3_I]  =  true;
	}

	if ( !boolState[required_OF__SA_4] )
	{
		boolState[required_OF_sA_4]  =  false;
	}

	if (boolState[relevant_evt_OF__SA_4] && ( !boolState[S_OF__SA_4]) )
	{
		boolState[relevant_evt_OF_sA_4]  =  true;
	}

	if (( !boolState[required_OF__SA_4]) || ( !boolState[S_OF_network_4]) )
	{
		boolState[required_OF_sA_4_I]  =  false;
	}

	if (boolState[relevant_evt_OF__SA_4] && ( !boolState[S_OF__SA_4]) )
	{
		boolState[relevant_evt_OF_sA_4_I]  =  true;
	}

	if ( !boolState[required_OF__SA_5] )
	{
		boolState[required_OF_sA_5]  =  false;
	}

	if (boolState[relevant_evt_OF__SA_5] && ( !boolState[S_OF__SA_5]) )
	{
		boolState[relevant_evt_OF_sA_5]  =  true;
	}

	if (( !boolState[required_OF__SA_5]) || ( !boolState[S_OF_network_5]) )
	{
		boolState[required_OF_sA_5_I]  =  false;
	}

	if (boolState[relevant_evt_OF__SA_5] && ( !boolState[S_OF__SA_5]) )
	{
		boolState[relevant_evt_OF_sA_5_I]  =  true;
	}

	if ( !boolState[required_OF__SB_1] )
	{
		boolState[required_OF_sB_1]  =  false;
	}

	if (boolState[relevant_evt_OF__SB_1] && ( !boolState[S_OF__SB_1]) )
	{
		boolState[relevant_evt_OF_sB_1]  =  true;
	}

	if (( !boolState[required_OF__SB_1]) || ( !boolState[S_OF_network_1]) )
	{
		boolState[required_OF_sB_1_I]  =  false;
	}

	if (boolState[relevant_evt_OF__SB_1] && ( !boolState[S_OF__SB_1]) )
	{
		boolState[relevant_evt_OF_sB_1_I]  =  true;
	}

	if ( !boolState[required_OF__SB_2] )
	{
		boolState[required_OF_sB_2]  =  false;
	}

	if (boolState[relevant_evt_OF__SB_2] && ( !boolState[S_OF__SB_2]) )
	{
		boolState[relevant_evt_OF_sB_2]  =  true;
	}

	if (( !boolState[required_OF__SB_2]) || ( !boolState[S_OF_network_2]) )
	{
		boolState[required_OF_sB_2_I]  =  false;
	}

	if (boolState[relevant_evt_OF__SB_2] && ( !boolState[S_OF__SB_2]) )
	{
		boolState[relevant_evt_OF_sB_2_I]  =  true;
	}

	if ( !boolState[required_OF__SB_3] )
	{
		boolState[required_OF_sB_3]  =  false;
	}

	if (boolState[relevant_evt_OF__SB_3] && ( !boolState[S_OF__SB_3]) )
	{
		boolState[relevant_evt_OF_sB_3]  =  true;
	}

	if (( !boolState[required_OF__SB_3]) || ( !boolState[S_OF_network_3]) )
	{
		boolState[required_OF_sB_3_I]  =  false;
	}

	if (boolState[relevant_evt_OF__SB_3] && ( !boolState[S_OF__SB_3]) )
	{
		boolState[relevant_evt_OF_sB_3_I]  =  true;
	}

	if ( !boolState[required_OF__SB_4] )
	{
		boolState[required_OF_sB_4]  =  false;
	}

	if (boolState[relevant_evt_OF__SB_4] && ( !boolState[S_OF__SB_4]) )
	{
		boolState[relevant_evt_OF_sB_4]  =  true;
	}

	if (( !boolState[required_OF__SB_4]) || ( !boolState[S_OF_network_4]) )
	{
		boolState[required_OF_sB_4_I]  =  false;
	}

	if (boolState[relevant_evt_OF__SB_4] && ( !boolState[S_OF__SB_4]) )
	{
		boolState[relevant_evt_OF_sB_4_I]  =  true;
	}

	if ( !boolState[required_OF__SB_5] )
	{
		boolState[required_OF_sB_5]  =  false;
	}

	if (boolState[relevant_evt_OF__SB_5] && ( !boolState[S_OF__SB_5]) )
	{
		boolState[relevant_evt_OF_sB_5]  =  true;
	}

	if (( !boolState[required_OF__SB_5]) || ( !boolState[S_OF_network_5]) )
	{
		boolState[required_OF_sB_5_I]  =  false;
	}

	if (boolState[relevant_evt_OF__SB_5] && ( !boolState[S_OF__SB_5]) )
	{
		boolState[relevant_evt_OF_sB_5_I]  =  true;
	}

	if ( !boolState[required_OF__SC_1] )
	{
		boolState[required_OF_sC_1]  =  false;
	}

	if (boolState[relevant_evt_OF__SC_1] && ( !boolState[S_OF__SC_1]) )
	{
		boolState[relevant_evt_OF_sC_1]  =  true;
	}

	if (( !boolState[required_OF__SC_1]) || ( !boolState[S_OF_network_1]) )
	{
		boolState[required_OF_sC_1_I]  =  false;
	}

	if (boolState[relevant_evt_OF__SC_1] && ( !boolState[S_OF__SC_1]) )
	{
		boolState[relevant_evt_OF_sC_1_I]  =  true;
	}

	if ( !boolState[required_OF__SC_2] )
	{
		boolState[required_OF_sC_2]  =  false;
	}

	if (boolState[relevant_evt_OF__SC_2] && ( !boolState[S_OF__SC_2]) )
	{
		boolState[relevant_evt_OF_sC_2]  =  true;
	}

	if (( !boolState[required_OF__SC_2]) || ( !boolState[S_OF_network_2]) )
	{
		boolState[required_OF_sC_2_I]  =  false;
	}

	if (boolState[relevant_evt_OF__SC_2] && ( !boolState[S_OF__SC_2]) )
	{
		boolState[relevant_evt_OF_sC_2_I]  =  true;
	}

	if ( !boolState[required_OF__SC_3] )
	{
		boolState[required_OF_sC_3]  =  false;
	}

	if (boolState[relevant_evt_OF__SC_3] && ( !boolState[S_OF__SC_3]) )
	{
		boolState[relevant_evt_OF_sC_3]  =  true;
	}

	if (( !boolState[required_OF__SC_3]) || ( !boolState[S_OF_network_3]) )
	{
		boolState[required_OF_sC_3_I]  =  false;
	}

	if (boolState[relevant_evt_OF__SC_3] && ( !boolState[S_OF__SC_3]) )
	{
		boolState[relevant_evt_OF_sC_3_I]  =  true;
	}

	if ( !boolState[required_OF__SC_4] )
	{
		boolState[required_OF_sC_4]  =  false;
	}

	if (boolState[relevant_evt_OF__SC_4] && ( !boolState[S_OF__SC_4]) )
	{
		boolState[relevant_evt_OF_sC_4]  =  true;
	}

	if (( !boolState[required_OF__SC_4]) || ( !boolState[S_OF_network_4]) )
	{
		boolState[required_OF_sC_4_I]  =  false;
	}

	if (boolState[relevant_evt_OF__SC_4] && ( !boolState[S_OF__SC_4]) )
	{
		boolState[relevant_evt_OF_sC_4_I]  =  true;
	}

	if ( !boolState[required_OF__SC_5] )
	{
		boolState[required_OF_sC_5]  =  false;
	}

	if (boolState[relevant_evt_OF__SC_5] && ( !boolState[S_OF__SC_5]) )
	{
		boolState[relevant_evt_OF_sC_5]  =  true;
	}

	if (( !boolState[required_OF__SC_5]) || ( !boolState[S_OF_network_5]) )
	{
		boolState[required_OF_sC_5_I]  =  false;
	}

	if (boolState[relevant_evt_OF__SC_5] && ( !boolState[S_OF__SC_5]) )
	{
		boolState[relevant_evt_OF_sC_5_I]  =  true;
	}

	if ( !boolState[required_OF__SD_1] )
	{
		boolState[required_OF_sD_1]  =  false;
	}

	if (boolState[relevant_evt_OF__SD_1] && ( !boolState[S_OF__SD_1]) )
	{
		boolState[relevant_evt_OF_sD_1]  =  true;
	}

	if (( !boolState[required_OF__SD_1]) || ( !boolState[S_OF_network_1]) )
	{
		boolState[required_OF_sD_1_I]  =  false;
	}

	if (boolState[relevant_evt_OF__SD_1] && ( !boolState[S_OF__SD_1]) )
	{
		boolState[relevant_evt_OF_sD_1_I]  =  true;
	}

	if ( !boolState[required_OF__SD_2] )
	{
		boolState[required_OF_sD_2]  =  false;
	}

	if (boolState[relevant_evt_OF__SD_2] && ( !boolState[S_OF__SD_2]) )
	{
		boolState[relevant_evt_OF_sD_2]  =  true;
	}

	if (( !boolState[required_OF__SD_2]) || ( !boolState[S_OF_network_2]) )
	{
		boolState[required_OF_sD_2_I]  =  false;
	}

	if (boolState[relevant_evt_OF__SD_2] && ( !boolState[S_OF__SD_2]) )
	{
		boolState[relevant_evt_OF_sD_2_I]  =  true;
	}

	if ( !boolState[required_OF__SD_3] )
	{
		boolState[required_OF_sD_3]  =  false;
	}

	if (boolState[relevant_evt_OF__SD_3] && ( !boolState[S_OF__SD_3]) )
	{
		boolState[relevant_evt_OF_sD_3]  =  true;
	}

	if (( !boolState[required_OF__SD_3]) || ( !boolState[S_OF_network_3]) )
	{
		boolState[required_OF_sD_3_I]  =  false;
	}

	if (boolState[relevant_evt_OF__SD_3] && ( !boolState[S_OF__SD_3]) )
	{
		boolState[relevant_evt_OF_sD_3_I]  =  true;
	}

	if ( !boolState[required_OF__SD_4] )
	{
		boolState[required_OF_sD_4]  =  false;
	}

	if (boolState[relevant_evt_OF__SD_4] && ( !boolState[S_OF__SD_4]) )
	{
		boolState[relevant_evt_OF_sD_4]  =  true;
	}

	if (( !boolState[required_OF__SD_4]) || ( !boolState[S_OF_network_4]) )
	{
		boolState[required_OF_sD_4_I]  =  false;
	}

	if (boolState[relevant_evt_OF__SD_4] && ( !boolState[S_OF__SD_4]) )
	{
		boolState[relevant_evt_OF_sD_4_I]  =  true;
	}

	if ( !boolState[required_OF__SD_5] )
	{
		boolState[required_OF_sD_5]  =  false;
	}

	if (boolState[relevant_evt_OF__SD_5] && ( !boolState[S_OF__SD_5]) )
	{
		boolState[relevant_evt_OF_sD_5]  =  true;
	}

	if (( !boolState[required_OF__SD_5]) || ( !boolState[S_OF_network_5]) )
	{
		boolState[required_OF_sD_5_I]  =  false;
	}

	if (boolState[relevant_evt_OF__SD_5] && ( !boolState[S_OF__SD_5]) )
	{
		boolState[relevant_evt_OF_sD_5_I]  =  true;
	}

	if ( !boolState[required_OF_sensors] )
	{
		boolState[required_OF_sensor_2]  =  false;
	}

	if (boolState[relevant_evt_OF_sensors] && ( !boolState[S_OF_sensors]) )
	{
		boolState[relevant_evt_OF_sensor_2]  =  true;
	}

	if ( !boolState[required_OF_sensors] )
	{
		boolState[required_OF_sensor_3]  =  false;
	}

	if (boolState[relevant_evt_OF_sensors] && ( !boolState[S_OF_sensors]) )
	{
		boolState[relevant_evt_OF_sensor_3]  =  true;
	}

	if ( !boolState[required_OF_sensors] )
	{
		boolState[required_OF_sensor_4]  =  false;
	}

	if (boolState[relevant_evt_OF_sensors] && ( !boolState[S_OF_sensors]) )
	{
		boolState[relevant_evt_OF_sensor_4]  =  true;
	}

	if ( !boolState[required_OF_sensors] )
	{
		boolState[required_OF_sensor_5]  =  false;
	}

	if (boolState[relevant_evt_OF_sensors] && ( !boolState[S_OF_sensors]) )
	{
		boolState[relevant_evt_OF_sensor_5]  =  true;
	}

	if ( !boolState[required_OF_System] )
	{
		boolState[required_OF_sensors]  =  false;
	}

	if (boolState[relevant_evt_OF_System] && ( !boolState[S_OF_System]) )
	{
		boolState[relevant_evt_OF_sensors]  =  true;
	}

	if ( !boolState[required_OF_switch_1] )
	{
		boolState[required_OF_sw_1]  =  false;
	}

	if (boolState[relevant_evt_OF_switch_1] && ( !boolState[S_OF_switch_1]) )
	{
		boolState[relevant_evt_OF_sw_1]  =  true;
	}

	if ( !boolState[required_OF_switch_2] )
	{
		boolState[required_OF_sw_2]  =  false;
	}

	if (boolState[relevant_evt_OF_switch_2] && ( !boolState[S_OF_switch_2]) )
	{
		boolState[relevant_evt_OF_sw_2]  =  true;
	}

	if ( !boolState[required_OF_switch_3] )
	{
		boolState[required_OF_sw_3]  =  false;
	}

	if (boolState[relevant_evt_OF_switch_3] && ( !boolState[S_OF_switch_3]) )
	{
		boolState[relevant_evt_OF_sw_3]  =  true;
	}

	if ( !boolState[required_OF_switch_4] )
	{
		boolState[required_OF_sw_4]  =  false;
	}

	if (boolState[relevant_evt_OF_switch_4] && ( !boolState[S_OF_switch_4]) )
	{
		boolState[relevant_evt_OF_sw_4]  =  true;
	}

	if ( !boolState[required_OF_switch_5] )
	{
		boolState[required_OF_sw_5]  =  false;
	}

	if (boolState[relevant_evt_OF_switch_5] && ( !boolState[S_OF_switch_5]) )
	{
		boolState[relevant_evt_OF_sw_5]  =  true;
	}

	if ( !boolState[required_OF_barrier_1] )
	{
		boolState[required_OF_switch_1]  =  false;
	}

	if (boolState[relevant_evt_OF_barrier_1] && ( !boolState[S_OF_barrier_1]) )
	{
		boolState[relevant_evt_OF_switch_1]  =  true;
	}

	if ( !boolState[required_OF_barrier_2] )
	{
		boolState[required_OF_switch_2]  =  false;
	}

	if (boolState[relevant_evt_OF_barrier_2] && ( !boolState[S_OF_barrier_2]) )
	{
		boolState[relevant_evt_OF_switch_2]  =  true;
	}

	if ( !boolState[required_OF_barrier_3] )
	{
		boolState[required_OF_switch_3]  =  false;
	}

	if (boolState[relevant_evt_OF_barrier_3] && ( !boolState[S_OF_barrier_3]) )
	{
		boolState[relevant_evt_OF_switch_3]  =  true;
	}

	if ( !boolState[required_OF_barrier_4] )
	{
		boolState[required_OF_switch_4]  =  false;
	}

	if (boolState[relevant_evt_OF_barrier_4] && ( !boolState[S_OF_barrier_4]) )
	{
		boolState[relevant_evt_OF_switch_4]  =  true;
	}

	if ( !boolState[required_OF_barrier_5] )
	{
		boolState[required_OF_switch_5]  =  false;
	}

	if (boolState[relevant_evt_OF_barrier_5] && ( !boolState[S_OF_barrier_5]) )
	{
		boolState[relevant_evt_OF_switch_5]  =  true;
	}

}


void storm::figaro::FigaroProgram_rc_5_5_Trim_repair::runOnceInteractionStep_propagate_leaves()
{


	boolState[already_S_OF_System]  =  boolState[S_OF_System]  ;



	boolState[already_S_OF_UE_1]  =  boolState[S_OF_UE_1]  ;



	boolState[already_S_OF__SA_1]  =  boolState[S_OF__SA_1]  ;



	boolState[already_S_OF__SA_2]  =  boolState[S_OF__SA_2]  ;



	boolState[already_S_OF__SA_3]  =  boolState[S_OF__SA_3]  ;



	boolState[already_S_OF__SA_4]  =  boolState[S_OF__SA_4]  ;



	boolState[already_S_OF__SA_5]  =  boolState[S_OF__SA_5]  ;



	boolState[already_S_OF__SB_1]  =  boolState[S_OF__SB_1]  ;



	boolState[already_S_OF__SB_2]  =  boolState[S_OF__SB_2]  ;



	boolState[already_S_OF__SB_3]  =  boolState[S_OF__SB_3]  ;



	boolState[already_S_OF__SB_4]  =  boolState[S_OF__SB_4]  ;



	boolState[already_S_OF__SB_5]  =  boolState[S_OF__SB_5]  ;



	boolState[already_S_OF__SC_1]  =  boolState[S_OF__SC_1]  ;



	boolState[already_S_OF__SC_2]  =  boolState[S_OF__SC_2]  ;



	boolState[already_S_OF__SC_3]  =  boolState[S_OF__SC_3]  ;



	boolState[already_S_OF__SC_4]  =  boolState[S_OF__SC_4]  ;



	boolState[already_S_OF__SC_5]  =  boolState[S_OF__SC_5]  ;



	boolState[already_S_OF__SD_1]  =  boolState[S_OF__SD_1]  ;



	boolState[already_S_OF__SD_2]  =  boolState[S_OF__SD_2]  ;



	boolState[already_S_OF__SD_3]  =  boolState[S_OF__SD_3]  ;



	boolState[already_S_OF__SD_4]  =  boolState[S_OF__SD_4]  ;



	boolState[already_S_OF__SD_5]  =  boolState[S_OF__SD_5]  ;



	boolState[already_S_OF_barrier_1]  =  boolState[S_OF_barrier_1]  ;



	boolState[already_S_OF_barrier_2]  =  boolState[S_OF_barrier_2]  ;



	boolState[already_S_OF_barrier_3]  =  boolState[S_OF_barrier_3]  ;



	boolState[already_S_OF_barrier_4]  =  boolState[S_OF_barrier_4]  ;



	boolState[already_S_OF_barrier_5]  =  boolState[S_OF_barrier_5]  ;



	boolState[already_S_OF_barriers]  =  boolState[S_OF_barriers]  ;



	boolState[already_S_OF_controller]  =  boolState[S_OF_controller]  ;



	boolState[already_S_OF_motor_1]  =  boolState[S_OF_motor_1]  ;



	boolState[already_S_OF_motor_2]  =  boolState[S_OF_motor_2]  ;



	boolState[already_S_OF_motor_3]  =  boolState[S_OF_motor_3]  ;



	boolState[already_S_OF_motor_4]  =  boolState[S_OF_motor_4]  ;



	boolState[already_S_OF_motor_5]  =  boolState[S_OF_motor_5]  ;



	boolState[already_S_OF_mp1]  =  boolState[S_OF_mp1]  ;



	boolState[already_S_OF_mp2]  =  boolState[S_OF_mp2]  ;



	boolState[already_S_OF_mp3]  =  boolState[S_OF_mp3]  ;



	boolState[already_S_OF_mp4]  =  boolState[S_OF_mp4]  ;



	boolState[already_S_OF_mp5]  =  boolState[S_OF_mp5]  ;



	boolState[already_S_OF_sensor_1]  =  boolState[S_OF_sensor_1]  ;



	boolState[already_S_OF_ms1]  =  boolState[S_OF_ms1]  ;



	boolState[already_S_OF_ms2]  =  boolState[S_OF_ms2]  ;



	boolState[already_S_OF_ms3]  =  boolState[S_OF_ms3]  ;



	boolState[already_S_OF_ms4]  =  boolState[S_OF_ms4]  ;



	boolState[already_S_OF_ms5]  =  boolState[S_OF_ms5]  ;



	boolState[already_S_OF_network_1]  =  boolState[S_OF_network_1]  ;



	boolState[already_S_OF_network_2]  =  boolState[S_OF_network_2]  ;



	boolState[already_S_OF_network_3]  =  boolState[S_OF_network_3]  ;



	boolState[already_S_OF_network_4]  =  boolState[S_OF_network_4]  ;



	boolState[already_S_OF_network_5]  =  boolState[S_OF_network_5]  ;



	boolState[already_S_OF_sA_1]  =  boolState[S_OF_sA_1]  ;



	boolState[already_S_OF_sA_1_I]  =  boolState[S_OF_sA_1_I]  ;

	if (( !boolState[required_OF_sA_1_I]) && (( !boolState[already_standby_OF_sA_1_I])   && ( !boolState[already_required_OF_sA_1_I])) )
	{
		boolState[already_standby_OF_sA_1_I]  =  true;
	}



	boolState[already_S_OF_sA_2]  =  boolState[S_OF_sA_2]  ;



	boolState[already_S_OF_sA_2_I]  =  boolState[S_OF_sA_2_I]  ;

	if (( !boolState[required_OF_sA_2_I]) && (( !boolState[already_standby_OF_sA_2_I])   && ( !boolState[already_required_OF_sA_2_I])) )
	{
		boolState[already_standby_OF_sA_2_I]  =  true;
	}



	boolState[already_S_OF_sA_3]  =  boolState[S_OF_sA_3]  ;



	boolState[already_S_OF_sA_3_I]  =  boolState[S_OF_sA_3_I]  ;

	if (( !boolState[required_OF_sA_3_I]) && (( !boolState[already_standby_OF_sA_3_I])   && ( !boolState[already_required_OF_sA_3_I])) )
	{
		boolState[already_standby_OF_sA_3_I]  =  true;
	}



	boolState[already_S_OF_sA_4]  =  boolState[S_OF_sA_4]  ;



	boolState[already_S_OF_sA_4_I]  =  boolState[S_OF_sA_4_I]  ;

	if (( !boolState[required_OF_sA_4_I]) && (( !boolState[already_standby_OF_sA_4_I])   && ( !boolState[already_required_OF_sA_4_I])) )
	{
		boolState[already_standby_OF_sA_4_I]  =  true;
	}



	boolState[already_S_OF_sA_5]  =  boolState[S_OF_sA_5]  ;



	boolState[already_S_OF_sA_5_I]  =  boolState[S_OF_sA_5_I]  ;

	if (( !boolState[required_OF_sA_5_I]) && (( !boolState[already_standby_OF_sA_5_I])   && ( !boolState[already_required_OF_sA_5_I])) )
	{
		boolState[already_standby_OF_sA_5_I]  =  true;
	}



	boolState[already_S_OF_sB_1]  =  boolState[S_OF_sB_1]  ;



	boolState[already_S_OF_sB_1_I]  =  boolState[S_OF_sB_1_I]  ;

	if (( !boolState[required_OF_sB_1_I]) && (( !boolState[already_standby_OF_sB_1_I])   && ( !boolState[already_required_OF_sB_1_I])) )
	{
		boolState[already_standby_OF_sB_1_I]  =  true;
	}



	boolState[already_S_OF_sB_2]  =  boolState[S_OF_sB_2]  ;



	boolState[already_S_OF_sB_2_I]  =  boolState[S_OF_sB_2_I]  ;

	if (( !boolState[required_OF_sB_2_I]) && (( !boolState[already_standby_OF_sB_2_I])   && ( !boolState[already_required_OF_sB_2_I])) )
	{
		boolState[already_standby_OF_sB_2_I]  =  true;
	}



	boolState[already_S_OF_sB_3]  =  boolState[S_OF_sB_3]  ;



	boolState[already_S_OF_sB_3_I]  =  boolState[S_OF_sB_3_I]  ;

	if (( !boolState[required_OF_sB_3_I]) && (( !boolState[already_standby_OF_sB_3_I])   && ( !boolState[already_required_OF_sB_3_I])) )
	{
		boolState[already_standby_OF_sB_3_I]  =  true;
	}



	boolState[already_S_OF_sB_4]  =  boolState[S_OF_sB_4]  ;



	boolState[already_S_OF_sB_4_I]  =  boolState[S_OF_sB_4_I]  ;

	if (( !boolState[required_OF_sB_4_I]) && (( !boolState[already_standby_OF_sB_4_I])   && ( !boolState[already_required_OF_sB_4_I])) )
	{
		boolState[already_standby_OF_sB_4_I]  =  true;
	}



	boolState[already_S_OF_sB_5]  =  boolState[S_OF_sB_5]  ;



	boolState[already_S_OF_sB_5_I]  =  boolState[S_OF_sB_5_I]  ;

	if (( !boolState[required_OF_sB_5_I]) && (( !boolState[already_standby_OF_sB_5_I])   && ( !boolState[already_required_OF_sB_5_I])) )
	{
		boolState[already_standby_OF_sB_5_I]  =  true;
	}



	boolState[already_S_OF_sC_1]  =  boolState[S_OF_sC_1]  ;



	boolState[already_S_OF_sC_1_I]  =  boolState[S_OF_sC_1_I]  ;

	if (( !boolState[required_OF_sC_1_I]) && (( !boolState[already_standby_OF_sC_1_I])   && ( !boolState[already_required_OF_sC_1_I])) )
	{
		boolState[already_standby_OF_sC_1_I]  =  true;
	}



	boolState[already_S_OF_sC_2]  =  boolState[S_OF_sC_2]  ;



	boolState[already_S_OF_sC_2_I]  =  boolState[S_OF_sC_2_I]  ;

	if (( !boolState[required_OF_sC_2_I]) && (( !boolState[already_standby_OF_sC_2_I])   && ( !boolState[already_required_OF_sC_2_I])) )
	{
		boolState[already_standby_OF_sC_2_I]  =  true;
	}



	boolState[already_S_OF_sC_3]  =  boolState[S_OF_sC_3]  ;



	boolState[already_S_OF_sC_3_I]  =  boolState[S_OF_sC_3_I]  ;

	if (( !boolState[required_OF_sC_3_I]) && (( !boolState[already_standby_OF_sC_3_I])   && ( !boolState[already_required_OF_sC_3_I])) )
	{
		boolState[already_standby_OF_sC_3_I]  =  true;
	}



	boolState[already_S_OF_sC_4]  =  boolState[S_OF_sC_4]  ;



	boolState[already_S_OF_sC_4_I]  =  boolState[S_OF_sC_4_I]  ;

	if (( !boolState[required_OF_sC_4_I]) && (( !boolState[already_standby_OF_sC_4_I])   && ( !boolState[already_required_OF_sC_4_I])) )
	{
		boolState[already_standby_OF_sC_4_I]  =  true;
	}



	boolState[already_S_OF_sC_5]  =  boolState[S_OF_sC_5]  ;



	boolState[already_S_OF_sC_5_I]  =  boolState[S_OF_sC_5_I]  ;

	if (( !boolState[required_OF_sC_5_I]) && (( !boolState[already_standby_OF_sC_5_I])   && ( !boolState[already_required_OF_sC_5_I])) )
	{
		boolState[already_standby_OF_sC_5_I]  =  true;
	}



	boolState[already_S_OF_sD_1]  =  boolState[S_OF_sD_1]  ;



	boolState[already_S_OF_sD_1_I]  =  boolState[S_OF_sD_1_I]  ;

	if (( !boolState[required_OF_sD_1_I]) && (( !boolState[already_standby_OF_sD_1_I])   && ( !boolState[already_required_OF_sD_1_I])) )
	{
		boolState[already_standby_OF_sD_1_I]  =  true;
	}



	boolState[already_S_OF_sD_2]  =  boolState[S_OF_sD_2]  ;



	boolState[already_S_OF_sD_2_I]  =  boolState[S_OF_sD_2_I]  ;

	if (( !boolState[required_OF_sD_2_I]) && (( !boolState[already_standby_OF_sD_2_I])   && ( !boolState[already_required_OF_sD_2_I])) )
	{
		boolState[already_standby_OF_sD_2_I]  =  true;
	}



	boolState[already_S_OF_sD_3]  =  boolState[S_OF_sD_3]  ;



	boolState[already_S_OF_sD_3_I]  =  boolState[S_OF_sD_3_I]  ;

	if (( !boolState[required_OF_sD_3_I]) && (( !boolState[already_standby_OF_sD_3_I])   && ( !boolState[already_required_OF_sD_3_I])) )
	{
		boolState[already_standby_OF_sD_3_I]  =  true;
	}



	boolState[already_S_OF_sD_4]  =  boolState[S_OF_sD_4]  ;



	boolState[already_S_OF_sD_4_I]  =  boolState[S_OF_sD_4_I]  ;

	if (( !boolState[required_OF_sD_4_I]) && (( !boolState[already_standby_OF_sD_4_I])   && ( !boolState[already_required_OF_sD_4_I])) )
	{
		boolState[already_standby_OF_sD_4_I]  =  true;
	}



	boolState[already_S_OF_sD_5]  =  boolState[S_OF_sD_5]  ;



	boolState[already_S_OF_sD_5_I]  =  boolState[S_OF_sD_5_I]  ;

	if (( !boolState[required_OF_sD_5_I]) && (( !boolState[already_standby_OF_sD_5_I])   && ( !boolState[already_required_OF_sD_5_I])) )
	{
		boolState[already_standby_OF_sD_5_I]  =  true;
	}



	boolState[already_S_OF_sensor_2]  =  boolState[S_OF_sensor_2]  ;



	boolState[already_S_OF_sensor_3]  =  boolState[S_OF_sensor_3]  ;



	boolState[already_S_OF_sensor_4]  =  boolState[S_OF_sensor_4]  ;



	boolState[already_S_OF_sensor_5]  =  boolState[S_OF_sensor_5]  ;



	boolState[already_S_OF_sensors]  =  boolState[S_OF_sensors]  ;



	boolState[already_S_OF_sw_1]  =  boolState[S_OF_sw_1]  ;



	boolState[already_S_OF_sw_2]  =  boolState[S_OF_sw_2]  ;



	boolState[already_S_OF_sw_3]  =  boolState[S_OF_sw_3]  ;



	boolState[already_S_OF_sw_4]  =  boolState[S_OF_sw_4]  ;



	boolState[already_S_OF_sw_5]  =  boolState[S_OF_sw_5]  ;



	boolState[already_S_OF_switch_1]  =  boolState[S_OF_switch_1]  ;



	boolState[already_S_OF_switch_2]  =  boolState[S_OF_switch_2]  ;



	boolState[already_S_OF_switch_3]  =  boolState[S_OF_switch_3]  ;



	boolState[already_S_OF_switch_4]  =  boolState[S_OF_switch_4]  ;



	boolState[already_S_OF_switch_5]  =  boolState[S_OF_switch_5]  ;

}


void storm::figaro::FigaroProgram_rc_5_5_Trim_repair::runOnceInteractionStep_tops()
{
	if (boolState[required_OF_sA_1_I] && boolState[already_standby_OF_sA_1_I] )
	{
		boolState[to_be_fired_OF_sA_1_I]  =  true;
	}

	if (boolState[required_OF_sA_2_I] && boolState[already_standby_OF_sA_2_I] )
	{
		boolState[to_be_fired_OF_sA_2_I]  =  true;
	}

	if (boolState[required_OF_sA_3_I] && boolState[already_standby_OF_sA_3_I] )
	{
		boolState[to_be_fired_OF_sA_3_I]  =  true;
	}

	if (boolState[required_OF_sA_4_I] && boolState[already_standby_OF_sA_4_I] )
	{
		boolState[to_be_fired_OF_sA_4_I]  =  true;
	}

	if (boolState[required_OF_sA_5_I] && boolState[already_standby_OF_sA_5_I] )
	{
		boolState[to_be_fired_OF_sA_5_I]  =  true;
	}

	if (boolState[required_OF_sB_1_I] && boolState[already_standby_OF_sB_1_I] )
	{
		boolState[to_be_fired_OF_sB_1_I]  =  true;
	}

	if (boolState[required_OF_sB_2_I] && boolState[already_standby_OF_sB_2_I] )
	{
		boolState[to_be_fired_OF_sB_2_I]  =  true;
	}

	if (boolState[required_OF_sB_3_I] && boolState[already_standby_OF_sB_3_I] )
	{
		boolState[to_be_fired_OF_sB_3_I]  =  true;
	}

	if (boolState[required_OF_sB_4_I] && boolState[already_standby_OF_sB_4_I] )
	{
		boolState[to_be_fired_OF_sB_4_I]  =  true;
	}

	if (boolState[required_OF_sB_5_I] && boolState[already_standby_OF_sB_5_I] )
	{
		boolState[to_be_fired_OF_sB_5_I]  =  true;
	}

	if (boolState[required_OF_sC_1_I] && boolState[already_standby_OF_sC_1_I] )
	{
		boolState[to_be_fired_OF_sC_1_I]  =  true;
	}

	if (boolState[required_OF_sC_2_I] && boolState[already_standby_OF_sC_2_I] )
	{
		boolState[to_be_fired_OF_sC_2_I]  =  true;
	}

	if (boolState[required_OF_sC_3_I] && boolState[already_standby_OF_sC_3_I] )
	{
		boolState[to_be_fired_OF_sC_3_I]  =  true;
	}

	if (boolState[required_OF_sC_4_I] && boolState[already_standby_OF_sC_4_I] )
	{
		boolState[to_be_fired_OF_sC_4_I]  =  true;
	}

	if (boolState[required_OF_sC_5_I] && boolState[already_standby_OF_sC_5_I] )
	{
		boolState[to_be_fired_OF_sC_5_I]  =  true;
	}

	if (boolState[required_OF_sD_1_I] && boolState[already_standby_OF_sD_1_I] )
	{
		boolState[to_be_fired_OF_sD_1_I]  =  true;
	}

	if (boolState[required_OF_sD_2_I] && boolState[already_standby_OF_sD_2_I] )
	{
		boolState[to_be_fired_OF_sD_2_I]  =  true;
	}

	if (boolState[required_OF_sD_3_I] && boolState[already_standby_OF_sD_3_I] )
	{
		boolState[to_be_fired_OF_sD_3_I]  =  true;
	}

	if (boolState[required_OF_sD_4_I] && boolState[already_standby_OF_sD_4_I] )
	{
		boolState[to_be_fired_OF_sD_4_I]  =  true;
	}

	if (boolState[required_OF_sD_5_I] && boolState[already_standby_OF_sD_5_I] )
	{
		boolState[to_be_fired_OF_sD_5_I]  =  true;
	}

}

void
storm::figaro::FigaroProgram_rc_5_5_Trim_repair::runInteractions() {
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
    }void storm::figaro::FigaroProgram_rc_5_5_Trim_repair::printstatetuple(){

                std::cout<<"\n State information: (";
                for (int i=0; i<boolFailureState.size(); i++)
                    {
                    std::cout<<boolFailureState.at(i);
                    }
                std::cout<<")";

            }
        int_fast64_t storm::figaro::FigaroProgram_rc_5_5_Trim_repair::stateSize() const{
            return numBoolState;
}
        void storm::figaro::FigaroProgram_rc_5_5_Trim_repair::fireinsttransitiongroup(std::string user_input_ins)

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
    