#include <iostream>
#include "FigaroModelNPPS_No_trim_No_repair.h"

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
        
void storm::figaro::FigaroProgram_NPPS_No_trim_No_repair::init()
{
	//cout <<">>>>>>>>>>>>>>>>>>>> Initialization of variables <<<<<<<<<<<<<<<<<<<<<<<" << endl;

	REINITIALISATION_OF_required_OF_AND_3 = true;
	boolState[already_S_OF_AND_3] = false;
	REINITIALISATION_OF_S_OF_AND_3 = false;
	REINITIALISATION_OF_relevant_evt_OF_AND_3 = false;
	REINITIALISATION_OF_required_OF_BATTERY_A_lost = true;
	boolState[already_S_OF_BATTERY_A_lost] = false;
	REINITIALISATION_OF_S_OF_BATTERY_A_lost = false;
	REINITIALISATION_OF_relevant_evt_OF_BATTERY_A_lost = false;
	REINITIALISATION_OF_required_OF_BATTERY_B_lost = true;
	boolState[already_S_OF_BATTERY_B_lost] = false;
	REINITIALISATION_OF_S_OF_BATTERY_B_lost = false;
	REINITIALISATION_OF_relevant_evt_OF_BATTERY_B_lost = false;
	REINITIALISATION_OF_required_OF_BAT_A1 = true;
	boolState[already_S_OF_BAT_A1] = false;
	REINITIALISATION_OF_S_OF_BAT_A1 = false;
	REINITIALISATION_OF_relevant_evt_OF_BAT_A1 = false;
	boolState[failF_OF_BAT_A1] = false;
	REINITIALISATION_OF_required_OF_BAT_A2 = true;
	boolState[already_S_OF_BAT_A2] = false;
	REINITIALISATION_OF_S_OF_BAT_A2 = false;
	REINITIALISATION_OF_relevant_evt_OF_BAT_A2 = false;
	boolState[failF_OF_BAT_A2] = false;
	REINITIALISATION_OF_required_OF_BAT_B1 = true;
	boolState[already_S_OF_BAT_B1] = false;
	REINITIALISATION_OF_S_OF_BAT_B1 = false;
	REINITIALISATION_OF_relevant_evt_OF_BAT_B1 = false;
	boolState[failF_OF_BAT_B1] = false;
	REINITIALISATION_OF_required_OF_BAT_B2 = true;
	boolState[already_S_OF_BAT_B2] = false;
	REINITIALISATION_OF_S_OF_BAT_B2 = false;
	REINITIALISATION_OF_relevant_evt_OF_BAT_B2 = false;
	boolState[failF_OF_BAT_B2] = false;
	REINITIALISATION_OF_required_OF_CB_LGD2_unable = true;
	boolState[already_S_OF_CB_LGD2_unable] = false;
	REINITIALISATION_OF_S_OF_CB_LGD2_unable = false;
	REINITIALISATION_OF_relevant_evt_OF_CB_LGD2_unable = false;
	REINITIALISATION_OF_required_OF_CB_LGF2_unable = true;
	boolState[already_S_OF_CB_LGF2_unable] = false;
	REINITIALISATION_OF_S_OF_CB_LGF2_unable = false;
	REINITIALISATION_OF_relevant_evt_OF_CB_LGF2_unable = false;
	REINITIALISATION_OF_required_OF_CB_LHA12_unable = true;
	boolState[already_S_OF_CB_LHA12_unable] = false;
	REINITIALISATION_OF_S_OF_CB_LHA12_unable = false;
	REINITIALISATION_OF_relevant_evt_OF_CB_LHA12_unable = false;
	REINITIALISATION_OF_required_OF_CB_LHA3_unable = true;
	boolState[already_S_OF_CB_LHA3_unable] = false;
	REINITIALISATION_OF_S_OF_CB_LHA3_unable = false;
	REINITIALISATION_OF_relevant_evt_OF_CB_LHA3_unable = false;
	REINITIALISATION_OF_required_OF_CB_LHB12_unable = true;
	boolState[already_S_OF_CB_LHB12_unable] = false;
	REINITIALISATION_OF_S_OF_CB_LHB12_unable = false;
	REINITIALISATION_OF_relevant_evt_OF_CB_LHB12_unable = false;
	REINITIALISATION_OF_required_OF_CCF_DG = true;
	boolState[already_S_OF_CCF_DG] = false;
	REINITIALISATION_OF_S_OF_CCF_DG = false;
	REINITIALISATION_OF_relevant_evt_OF_CCF_DG = false;
	boolState[failF_OF_CCF_DG] = false;
	REINITIALISATION_OF_required_OF_CCF_GEV_LGR = true;
	boolState[already_S_OF_CCF_GEV_LGR] = false;
	REINITIALISATION_OF_S_OF_CCF_GEV_LGR = false;
	REINITIALISATION_OF_relevant_evt_OF_CCF_GEV_LGR = false;
	boolState[failF_OF_CCF_GEV_LGR] = false;
	REINITIALISATION_OF_required_OF_DGA_long = true;
	boolState[already_S_OF_DGA_long] = false;
	REINITIALISATION_OF_S_OF_DGA_long = false;
	REINITIALISATION_OF_relevant_evt_OF_DGA_long = false;
	boolState[failF_OF_DGA_long] = false;
	REINITIALISATION_OF_required_OF_DGA_lost = true;
	boolState[already_S_OF_DGA_lost] = false;
	REINITIALISATION_OF_S_OF_DGA_lost = false;
	REINITIALISATION_OF_relevant_evt_OF_DGA_lost = false;
	REINITIALISATION_OF_required_OF_DGA_short = true;
	boolState[already_S_OF_DGA_short] = false;
	REINITIALISATION_OF_S_OF_DGA_short = false;
	REINITIALISATION_OF_relevant_evt_OF_DGA_short = false;
	boolState[failF_OF_DGA_short] = false;
	REINITIALISATION_OF_required_OF_DGB_long = true;
	boolState[already_S_OF_DGB_long] = false;
	REINITIALISATION_OF_S_OF_DGB_long = false;
	REINITIALISATION_OF_relevant_evt_OF_DGB_long = false;
	boolState[failF_OF_DGB_long] = false;
	REINITIALISATION_OF_required_OF_DGB_lost = true;
	boolState[already_S_OF_DGB_lost] = false;
	REINITIALISATION_OF_S_OF_DGB_lost = false;
	REINITIALISATION_OF_relevant_evt_OF_DGB_lost = false;
	REINITIALISATION_OF_required_OF_DGB_short = true;
	boolState[already_S_OF_DGB_short] = false;
	REINITIALISATION_OF_S_OF_DGB_short = false;
	REINITIALISATION_OF_relevant_evt_OF_DGB_short = false;
	boolState[failF_OF_DGB_short] = false;
	REINITIALISATION_OF_required_OF_GEV = true;
	boolState[already_S_OF_GEV] = false;
	REINITIALISATION_OF_S_OF_GEV = false;
	REINITIALISATION_OF_relevant_evt_OF_GEV = false;
	boolState[failF_OF_GEV] = false;
	REINITIALISATION_OF_required_OF_GRID = true;
	boolState[already_S_OF_GRID] = false;
	REINITIALISATION_OF_S_OF_GRID = false;
	REINITIALISATION_OF_relevant_evt_OF_GRID = false;
	boolState[failF_OF_GRID] = false;
	REINITIALISATION_OF_required_OF_InFnHouse = true;
	boolState[already_S_OF_InFnHouse] = false;
	REINITIALISATION_OF_S_OF_InFnHouse = false;
	REINITIALISATION_OF_relevant_evt_OF_InFnHouse = false;
	boolState[failF_OF_InFnHouse] = false;
	REINITIALISATION_OF_required_OF_LBA = true;
	boolState[already_S_OF_LBA] = false;
	REINITIALISATION_OF_S_OF_LBA = false;
	REINITIALISATION_OF_relevant_evt_OF_LBA = false;
	boolState[failF_OF_LBA] = false;
	REINITIALISATION_OF_required_OF_LBA_lost = true;
	boolState[already_S_OF_LBA_lost] = false;
	REINITIALISATION_OF_S_OF_LBA_lost = false;
	REINITIALISATION_OF_relevant_evt_OF_LBA_lost = false;
	REINITIALISATION_OF_required_OF_LBA_not_fed = true;
	boolState[already_S_OF_LBA_not_fed] = false;
	REINITIALISATION_OF_S_OF_LBA_not_fed = false;
	REINITIALISATION_OF_relevant_evt_OF_LBA_not_fed = false;
	REINITIALISATION_OF_required_OF_LBAline1_lost = true;
	boolState[already_S_OF_LBAline1_lost] = false;
	REINITIALISATION_OF_S_OF_LBAline1_lost = false;
	REINITIALISATION_OF_relevant_evt_OF_LBAline1_lost = false;
	REINITIALISATION_OF_required_OF_LBAline2_lost = true;
	boolState[already_S_OF_LBAline2_lost] = false;
	REINITIALISATION_OF_S_OF_LBAline2_lost = false;
	REINITIALISATION_OF_relevant_evt_OF_LBAline2_lost = false;
	REINITIALISATION_OF_required_OF_LBAothers_lost = true;
	boolState[already_S_OF_LBAothers_lost] = false;
	REINITIALISATION_OF_S_OF_LBAothers_lost = false;
	REINITIALISATION_OF_relevant_evt_OF_LBAothers_lost = false;
	REINITIALISATION_OF_required_OF_LBB = true;
	boolState[already_S_OF_LBB] = false;
	REINITIALISATION_OF_S_OF_LBB = false;
	REINITIALISATION_OF_relevant_evt_OF_LBB = false;
	boolState[failF_OF_LBB] = false;
	REINITIALISATION_OF_required_OF_LBB_lost = true;
	boolState[already_S_OF_LBB_lost] = false;
	REINITIALISATION_OF_S_OF_LBB_lost = false;
	REINITIALISATION_OF_relevant_evt_OF_LBB_lost = false;
	REINITIALISATION_OF_required_OF_LBB_not_fed = true;
	boolState[already_S_OF_LBB_not_fed] = false;
	REINITIALISATION_OF_S_OF_LBB_not_fed = false;
	REINITIALISATION_OF_relevant_evt_OF_LBB_not_fed = false;
	REINITIALISATION_OF_required_OF_LBBline1_lost = true;
	boolState[already_S_OF_LBBline1_lost] = false;
	REINITIALISATION_OF_S_OF_LBBline1_lost = false;
	REINITIALISATION_OF_relevant_evt_OF_LBBline1_lost = false;
	REINITIALISATION_OF_required_OF_LBBline2_lost = true;
	boolState[already_S_OF_LBBline2_lost] = false;
	REINITIALISATION_OF_S_OF_LBBline2_lost = false;
	REINITIALISATION_OF_relevant_evt_OF_LBBline2_lost = false;
	REINITIALISATION_OF_required_OF_LGA = true;
	boolState[already_S_OF_LGA] = false;
	REINITIALISATION_OF_S_OF_LGA = false;
	REINITIALISATION_OF_relevant_evt_OF_LGA = false;
	boolState[failF_OF_LGA] = false;
	REINITIALISATION_OF_required_OF_LGB = true;
	boolState[already_S_OF_LGB] = false;
	REINITIALISATION_OF_S_OF_LGB = false;
	REINITIALISATION_OF_relevant_evt_OF_LGB = false;
	boolState[failF_OF_LGB] = false;
	REINITIALISATION_OF_required_OF_LGD = true;
	boolState[already_S_OF_LGD] = false;
	REINITIALISATION_OF_S_OF_LGD = false;
	REINITIALISATION_OF_relevant_evt_OF_LGD = false;
	boolState[failF_OF_LGD] = false;
	REINITIALISATION_OF_required_OF_LGD_not_fed = true;
	boolState[already_S_OF_LGD_not_fed] = false;
	REINITIALISATION_OF_S_OF_LGD_not_fed = false;
	REINITIALISATION_OF_relevant_evt_OF_LGD_not_fed = false;
	REINITIALISATION_OF_required_OF_LGE = true;
	boolState[already_S_OF_LGE] = false;
	REINITIALISATION_OF_S_OF_LGE = false;
	REINITIALISATION_OF_relevant_evt_OF_LGE = false;
	boolState[failF_OF_LGE] = false;
	REINITIALISATION_OF_required_OF_LGF = true;
	boolState[already_S_OF_LGF] = false;
	REINITIALISATION_OF_S_OF_LGF = false;
	REINITIALISATION_OF_relevant_evt_OF_LGF = false;
	boolState[failF_OF_LGF] = false;
	REINITIALISATION_OF_required_OF_LGF_not_fed = true;
	boolState[already_S_OF_LGF_not_fed] = false;
	REINITIALISATION_OF_S_OF_LGF_not_fed = false;
	REINITIALISATION_OF_relevant_evt_OF_LGF_not_fed = false;
	REINITIALISATION_OF_required_OF_LGR = true;
	boolState[already_S_OF_LGR] = false;
	REINITIALISATION_OF_S_OF_LGR = false;
	REINITIALISATION_OF_relevant_evt_OF_LGR = false;
	boolState[failF_OF_LGR] = false;
	REINITIALISATION_OF_required_OF_LHA = true;
	boolState[already_S_OF_LHA] = false;
	REINITIALISATION_OF_S_OF_LHA = false;
	REINITIALISATION_OF_relevant_evt_OF_LHA = false;
	boolState[failF_OF_LHA] = false;
	REINITIALISATION_OF_required_OF_LHA_and_LHB_lost = true;
	boolState[already_S_OF_LHA_and_LHB_lost] = false;
	REINITIALISATION_OF_S_OF_LHA_and_LHB_lost = false;
	REINITIALISATION_OF_relevant_evt_OF_LHA_and_LHB_lost = false;
	REINITIALISATION_OF_required_OF_LHA_lost = true;
	boolState[already_S_OF_LHA_lost] = false;
	REINITIALISATION_OF_S_OF_LHA_lost = false;
	REINITIALISATION_OF_relevant_evt_OF_LHA_lost = false;
	REINITIALISATION_OF_required_OF_LHA_not_fed = true;
	boolState[already_S_OF_LHA_not_fed] = false;
	REINITIALISATION_OF_S_OF_LHA_not_fed = false;
	REINITIALISATION_OF_relevant_evt_OF_LHA_not_fed = false;
	REINITIALISATION_OF_required_OF_LHB = true;
	boolState[already_S_OF_LHB] = false;
	REINITIALISATION_OF_S_OF_LHB = false;
	REINITIALISATION_OF_relevant_evt_OF_LHB = false;
	boolState[failF_OF_LHB] = false;
	REINITIALISATION_OF_required_OF_LHB_lost = true;
	boolState[already_S_OF_LHB_lost] = false;
	REINITIALISATION_OF_S_OF_LHB_lost = false;
	REINITIALISATION_OF_relevant_evt_OF_LHB_lost = false;
	REINITIALISATION_OF_required_OF_LHB_not_fed = true;
	boolState[already_S_OF_LHB_not_fed] = false;
	REINITIALISATION_OF_S_OF_LHB_not_fed = false;
	REINITIALISATION_OF_relevant_evt_OF_LHB_not_fed = false;
	REINITIALISATION_OF_required_OF_LKE = true;
	boolState[already_S_OF_LKE] = false;
	REINITIALISATION_OF_S_OF_LKE = false;
	REINITIALISATION_OF_relevant_evt_OF_LKE = false;
	boolState[failF_OF_LKE] = false;
	REINITIALISATION_OF_required_OF_LKI = true;
	boolState[already_S_OF_LKI] = false;
	REINITIALISATION_OF_S_OF_LKI = false;
	REINITIALISATION_OF_relevant_evt_OF_LKI = false;
	boolState[failF_OF_LKI] = false;
	REINITIALISATION_OF_required_OF_LLA = true;
	boolState[already_S_OF_LLA] = false;
	REINITIALISATION_OF_S_OF_LLA = false;
	REINITIALISATION_OF_relevant_evt_OF_LLA = false;
	boolState[failF_OF_LLA] = false;
	REINITIALISATION_OF_required_OF_LLD = true;
	boolState[already_S_OF_LLD] = false;
	REINITIALISATION_OF_S_OF_LLD = false;
	REINITIALISATION_OF_relevant_evt_OF_LLD = false;
	boolState[failF_OF_LLD] = false;
	REINITIALISATION_OF_required_OF_OR_14 = true;
	boolState[already_S_OF_OR_14] = false;
	REINITIALISATION_OF_S_OF_OR_14 = false;
	REINITIALISATION_OF_relevant_evt_OF_OR_14 = false;
	REINITIALISATION_OF_required_OF_OnDemHouse = true;
	boolState[already_S_OF_OnDemHouse] = false;
	REINITIALISATION_OF_S_OF_OnDemHouse = false;
	REINITIALISATION_OF_relevant_evt_OF_OnDemHouse = false;
	boolState[failI_OF_OnDemHouse] = false;
	REINITIALISATION_OF_to_be_fired_OF_OnDemHouse = false;
	boolState[already_standby_OF_OnDemHouse] = false;
	boolState[already_required_OF_OnDemHouse] = false;
	REINITIALISATION_OF_required_OF_RC_CB_LGD2 = true;
	boolState[already_S_OF_RC_CB_LGD2] = false;
	REINITIALISATION_OF_S_OF_RC_CB_LGD2 = false;
	REINITIALISATION_OF_relevant_evt_OF_RC_CB_LGD2 = false;
	boolState[failI_OF_RC_CB_LGD2] = false;
	REINITIALISATION_OF_to_be_fired_OF_RC_CB_LGD2 = false;
	boolState[already_standby_OF_RC_CB_LGD2] = false;
	boolState[already_required_OF_RC_CB_LGD2] = false;
	REINITIALISATION_OF_required_OF_RC_CB_LGD2_ = true;
	boolState[already_S_OF_RC_CB_LGD2_] = false;
	REINITIALISATION_OF_S_OF_RC_CB_LGD2_ = false;
	REINITIALISATION_OF_relevant_evt_OF_RC_CB_LGD2_ = false;
	REINITIALISATION_OF_required_OF_RC_CB_LGF2 = true;
	boolState[already_S_OF_RC_CB_LGF2] = false;
	REINITIALISATION_OF_S_OF_RC_CB_LGF2 = false;
	REINITIALISATION_OF_relevant_evt_OF_RC_CB_LGF2 = false;
	boolState[failI_OF_RC_CB_LGF2] = false;
	REINITIALISATION_OF_to_be_fired_OF_RC_CB_LGF2 = false;
	boolState[already_standby_OF_RC_CB_LGF2] = false;
	boolState[already_required_OF_RC_CB_LGF2] = false;
	REINITIALISATION_OF_required_OF_RC_CB_LGF2_ = true;
	boolState[already_S_OF_RC_CB_LGF2_] = false;
	REINITIALISATION_OF_S_OF_RC_CB_LGF2_ = false;
	REINITIALISATION_OF_relevant_evt_OF_RC_CB_LGF2_ = false;
	REINITIALISATION_OF_required_OF_RC_CB_LHA2 = true;
	boolState[already_S_OF_RC_CB_LHA2] = false;
	REINITIALISATION_OF_S_OF_RC_CB_LHA2 = false;
	REINITIALISATION_OF_relevant_evt_OF_RC_CB_LHA2 = false;
	boolState[failI_OF_RC_CB_LHA2] = false;
	REINITIALISATION_OF_to_be_fired_OF_RC_CB_LHA2 = false;
	boolState[already_standby_OF_RC_CB_LHA2] = false;
	boolState[already_required_OF_RC_CB_LHA2] = false;
	REINITIALISATION_OF_required_OF_RC_CB_LHA2_ = true;
	boolState[already_S_OF_RC_CB_LHA2_] = false;
	REINITIALISATION_OF_S_OF_RC_CB_LHA2_ = false;
	REINITIALISATION_OF_relevant_evt_OF_RC_CB_LHA2_ = false;
	REINITIALISATION_OF_required_OF_RC_CB_LHA3 = true;
	boolState[already_S_OF_RC_CB_LHA3] = false;
	REINITIALISATION_OF_S_OF_RC_CB_LHA3 = false;
	REINITIALISATION_OF_relevant_evt_OF_RC_CB_LHA3 = false;
	boolState[failI_OF_RC_CB_LHA3] = false;
	REINITIALISATION_OF_to_be_fired_OF_RC_CB_LHA3 = false;
	boolState[already_standby_OF_RC_CB_LHA3] = false;
	boolState[already_required_OF_RC_CB_LHA3] = false;
	REINITIALISATION_OF_required_OF_RC_CB_LHA3_ = true;
	boolState[already_S_OF_RC_CB_LHA3_] = false;
	REINITIALISATION_OF_S_OF_RC_CB_LHA3_ = false;
	REINITIALISATION_OF_relevant_evt_OF_RC_CB_LHA3_ = false;
	REINITIALISATION_OF_required_OF_RC_CB_LHB2 = true;
	boolState[already_S_OF_RC_CB_LHB2] = false;
	REINITIALISATION_OF_S_OF_RC_CB_LHB2 = false;
	REINITIALISATION_OF_relevant_evt_OF_RC_CB_LHB2 = false;
	boolState[failI_OF_RC_CB_LHB2] = false;
	REINITIALISATION_OF_to_be_fired_OF_RC_CB_LHB2 = false;
	boolState[already_standby_OF_RC_CB_LHB2] = false;
	boolState[already_required_OF_RC_CB_LHB2] = false;
	REINITIALISATION_OF_required_OF_RC_CB_LHB2_ = true;
	boolState[already_S_OF_RC_CB_LHB2_] = false;
	REINITIALISATION_OF_S_OF_RC_CB_LHB2_ = false;
	REINITIALISATION_OF_relevant_evt_OF_RC_CB_LHB2_ = false;
	REINITIALISATION_OF_required_OF_RDA1 = true;
	boolState[already_S_OF_RDA1] = false;
	REINITIALISATION_OF_S_OF_RDA1 = false;
	REINITIALISATION_OF_relevant_evt_OF_RDA1 = false;
	boolState[failF_OF_RDA1] = false;
	REINITIALISATION_OF_required_OF_RDA2 = true;
	boolState[already_S_OF_RDA2] = false;
	REINITIALISATION_OF_S_OF_RDA2 = false;
	REINITIALISATION_OF_relevant_evt_OF_RDA2 = false;
	boolState[failF_OF_RDA2] = false;
	REINITIALISATION_OF_required_OF_RDB1 = true;
	boolState[already_S_OF_RDB1] = false;
	REINITIALISATION_OF_S_OF_RDB1 = false;
	REINITIALISATION_OF_relevant_evt_OF_RDB1 = false;
	boolState[failF_OF_RDB1] = false;
	REINITIALISATION_OF_required_OF_RDB2 = true;
	boolState[already_S_OF_RDB2] = false;
	REINITIALISATION_OF_S_OF_RDB2 = false;
	REINITIALISATION_OF_relevant_evt_OF_RDB2 = false;
	boolState[failF_OF_RDB2] = false;
	REINITIALISATION_OF_required_OF_RO_CB_LHA1 = true;
	boolState[already_S_OF_RO_CB_LHA1] = false;
	REINITIALISATION_OF_S_OF_RO_CB_LHA1 = false;
	REINITIALISATION_OF_relevant_evt_OF_RO_CB_LHA1 = false;
	boolState[failI_OF_RO_CB_LHA1] = false;
	REINITIALISATION_OF_to_be_fired_OF_RO_CB_LHA1 = false;
	boolState[already_standby_OF_RO_CB_LHA1] = false;
	boolState[already_required_OF_RO_CB_LHA1] = false;
	REINITIALISATION_OF_required_OF_RO_CB_LHA1_ = true;
	boolState[already_S_OF_RO_CB_LHA1_] = false;
	REINITIALISATION_OF_S_OF_RO_CB_LHA1_ = false;
	REINITIALISATION_OF_relevant_evt_OF_RO_CB_LHA1_ = false;
	REINITIALISATION_OF_required_OF_RO_CB_LHA2 = true;
	boolState[already_S_OF_RO_CB_LHA2] = false;
	REINITIALISATION_OF_S_OF_RO_CB_LHA2 = false;
	REINITIALISATION_OF_relevant_evt_OF_RO_CB_LHA2 = false;
	boolState[failI_OF_RO_CB_LHA2] = false;
	REINITIALISATION_OF_to_be_fired_OF_RO_CB_LHA2 = false;
	boolState[already_standby_OF_RO_CB_LHA2] = false;
	boolState[already_required_OF_RO_CB_LHA2] = false;
	REINITIALISATION_OF_required_OF_RO_CB_LHA2_ = true;
	boolState[already_S_OF_RO_CB_LHA2_] = false;
	REINITIALISATION_OF_S_OF_RO_CB_LHA2_ = false;
	REINITIALISATION_OF_relevant_evt_OF_RO_CB_LHA2_ = false;
	REINITIALISATION_OF_required_OF_RO_CB_LHB1 = true;
	boolState[already_S_OF_RO_CB_LHB1] = false;
	REINITIALISATION_OF_S_OF_RO_CB_LHB1 = false;
	REINITIALISATION_OF_relevant_evt_OF_RO_CB_LHB1 = false;
	boolState[failI_OF_RO_CB_LHB1] = false;
	REINITIALISATION_OF_to_be_fired_OF_RO_CB_LHB1 = false;
	boolState[already_standby_OF_RO_CB_LHB1] = false;
	boolState[already_required_OF_RO_CB_LHB1] = false;
	REINITIALISATION_OF_required_OF_RO_CB_LHB1_ = true;
	boolState[already_S_OF_RO_CB_LHB1_] = false;
	REINITIALISATION_OF_S_OF_RO_CB_LHB1_ = false;
	REINITIALISATION_OF_relevant_evt_OF_RO_CB_LHB1_ = false;
	REINITIALISATION_OF_required_OF_SH_CB_GEV = true;
	boolState[already_S_OF_SH_CB_GEV] = false;
	REINITIALISATION_OF_S_OF_SH_CB_GEV = false;
	REINITIALISATION_OF_relevant_evt_OF_SH_CB_GEV = false;
	boolState[failF_OF_SH_CB_GEV] = false;
	REINITIALISATION_OF_required_OF_SH_CB_LBA1 = true;
	boolState[already_S_OF_SH_CB_LBA1] = false;
	REINITIALISATION_OF_S_OF_SH_CB_LBA1 = false;
	REINITIALISATION_OF_relevant_evt_OF_SH_CB_LBA1 = false;
	boolState[failF_OF_SH_CB_LBA1] = false;
	REINITIALISATION_OF_required_OF_SH_CB_LBA2 = true;
	boolState[already_S_OF_SH_CB_LBA2] = false;
	REINITIALISATION_OF_S_OF_SH_CB_LBA2 = false;
	REINITIALISATION_OF_relevant_evt_OF_SH_CB_LBA2 = false;
	boolState[failF_OF_SH_CB_LBA2] = false;
	REINITIALISATION_OF_required_OF_SH_CB_LBB1 = true;
	boolState[already_S_OF_SH_CB_LBB1] = false;
	REINITIALISATION_OF_S_OF_SH_CB_LBB1 = false;
	REINITIALISATION_OF_relevant_evt_OF_SH_CB_LBB1 = false;
	boolState[failF_OF_SH_CB_LBB1] = false;
	REINITIALISATION_OF_required_OF_SH_CB_LBB2 = true;
	boolState[already_S_OF_SH_CB_LBB2] = false;
	REINITIALISATION_OF_S_OF_SH_CB_LBB2 = false;
	REINITIALISATION_OF_relevant_evt_OF_SH_CB_LBB2 = false;
	boolState[failF_OF_SH_CB_LBB2] = false;
	REINITIALISATION_OF_required_OF_SH_CB_LGA = true;
	boolState[already_S_OF_SH_CB_LGA] = false;
	REINITIALISATION_OF_S_OF_SH_CB_LGA = false;
	REINITIALISATION_OF_relevant_evt_OF_SH_CB_LGA = false;
	boolState[failF_OF_SH_CB_LGA] = false;
	REINITIALISATION_OF_required_OF_SH_CB_LGB = true;
	boolState[already_S_OF_SH_CB_LGB] = false;
	REINITIALISATION_OF_S_OF_SH_CB_LGB = false;
	REINITIALISATION_OF_relevant_evt_OF_SH_CB_LGB = false;
	boolState[failF_OF_SH_CB_LGB] = false;
	REINITIALISATION_OF_required_OF_SH_CB_LGD1 = true;
	boolState[already_S_OF_SH_CB_LGD1] = false;
	REINITIALISATION_OF_S_OF_SH_CB_LGD1 = false;
	REINITIALISATION_OF_relevant_evt_OF_SH_CB_LGD1 = false;
	boolState[failF_OF_SH_CB_LGD1] = false;
	REINITIALISATION_OF_required_OF_SH_CB_LGD2 = true;
	boolState[already_S_OF_SH_CB_LGD2] = false;
	REINITIALISATION_OF_S_OF_SH_CB_LGD2 = false;
	REINITIALISATION_OF_relevant_evt_OF_SH_CB_LGD2 = false;
	boolState[failF_OF_SH_CB_LGD2] = false;
	REINITIALISATION_OF_required_OF_SH_CB_LGE1 = true;
	boolState[already_S_OF_SH_CB_LGE1] = false;
	REINITIALISATION_OF_S_OF_SH_CB_LGE1 = false;
	REINITIALISATION_OF_relevant_evt_OF_SH_CB_LGE1 = false;
	boolState[failF_OF_SH_CB_LGE1] = false;
	REINITIALISATION_OF_required_OF_SH_CB_LGF1 = true;
	boolState[already_S_OF_SH_CB_LGF1] = false;
	REINITIALISATION_OF_S_OF_SH_CB_LGF1 = false;
	REINITIALISATION_OF_relevant_evt_OF_SH_CB_LGF1 = false;
	boolState[failF_OF_SH_CB_LGF1] = false;
	REINITIALISATION_OF_required_OF_SH_CB_LGF2 = true;
	boolState[already_S_OF_SH_CB_LGF2] = false;
	REINITIALISATION_OF_S_OF_SH_CB_LGF2 = false;
	REINITIALISATION_OF_relevant_evt_OF_SH_CB_LGF2 = false;
	boolState[failF_OF_SH_CB_LGF2] = false;
	REINITIALISATION_OF_required_OF_SH_CB_LHA1 = true;
	boolState[already_S_OF_SH_CB_LHA1] = false;
	REINITIALISATION_OF_S_OF_SH_CB_LHA1 = false;
	REINITIALISATION_OF_relevant_evt_OF_SH_CB_LHA1 = false;
	boolState[failF_OF_SH_CB_LHA1] = false;
	REINITIALISATION_OF_required_OF_SH_CB_LHA2 = true;
	boolState[already_S_OF_SH_CB_LHA2] = false;
	REINITIALISATION_OF_S_OF_SH_CB_LHA2 = false;
	REINITIALISATION_OF_relevant_evt_OF_SH_CB_LHA2 = false;
	boolState[failF_OF_SH_CB_LHA2] = false;
	REINITIALISATION_OF_required_OF_SH_CB_LHA3 = true;
	boolState[already_S_OF_SH_CB_LHA3] = false;
	REINITIALISATION_OF_S_OF_SH_CB_LHA3 = false;
	REINITIALISATION_OF_relevant_evt_OF_SH_CB_LHA3 = false;
	boolState[failF_OF_SH_CB_LHA3] = false;
	REINITIALISATION_OF_required_OF_SH_CB_LHB1 = true;
	boolState[already_S_OF_SH_CB_LHB1] = false;
	REINITIALISATION_OF_S_OF_SH_CB_LHB1 = false;
	REINITIALISATION_OF_relevant_evt_OF_SH_CB_LHB1 = false;
	boolState[failF_OF_SH_CB_LHB1] = false;
	REINITIALISATION_OF_required_OF_SH_CB_LHB2 = true;
	boolState[already_S_OF_SH_CB_LHB2] = false;
	REINITIALISATION_OF_S_OF_SH_CB_LHB2 = false;
	REINITIALISATION_OF_relevant_evt_OF_SH_CB_LHB2 = false;
	boolState[failF_OF_SH_CB_LHB2] = false;
	REINITIALISATION_OF_required_OF_SH_CB_RDA1 = true;
	boolState[already_S_OF_SH_CB_RDA1] = false;
	REINITIALISATION_OF_S_OF_SH_CB_RDA1 = false;
	REINITIALISATION_OF_relevant_evt_OF_SH_CB_RDA1 = false;
	boolState[failF_OF_SH_CB_RDA1] = false;
	REINITIALISATION_OF_required_OF_SH_CB_RDA2 = true;
	boolState[already_S_OF_SH_CB_RDA2] = false;
	REINITIALISATION_OF_S_OF_SH_CB_RDA2 = false;
	REINITIALISATION_OF_relevant_evt_OF_SH_CB_RDA2 = false;
	boolState[failF_OF_SH_CB_RDA2] = false;
	REINITIALISATION_OF_required_OF_SH_CB_RDB1 = true;
	boolState[already_S_OF_SH_CB_RDB1] = false;
	REINITIALISATION_OF_S_OF_SH_CB_RDB1 = false;
	REINITIALISATION_OF_relevant_evt_OF_SH_CB_RDB1 = false;
	boolState[failF_OF_SH_CB_RDB1] = false;
	REINITIALISATION_OF_required_OF_SH_CB_RDB2 = true;
	boolState[already_S_OF_SH_CB_RDB2] = false;
	REINITIALISATION_OF_S_OF_SH_CB_RDB2 = false;
	REINITIALISATION_OF_relevant_evt_OF_SH_CB_RDB2 = false;
	boolState[failF_OF_SH_CB_RDB2] = false;
	REINITIALISATION_OF_required_OF_SH_CB_TUA1 = true;
	boolState[already_S_OF_SH_CB_TUA1] = false;
	REINITIALISATION_OF_S_OF_SH_CB_TUA1 = false;
	REINITIALISATION_OF_relevant_evt_OF_SH_CB_TUA1 = false;
	boolState[failF_OF_SH_CB_TUA1] = false;
	REINITIALISATION_OF_required_OF_SH_CB_TUA2 = true;
	boolState[already_S_OF_SH_CB_TUA2] = false;
	REINITIALISATION_OF_S_OF_SH_CB_TUA2 = false;
	REINITIALISATION_OF_relevant_evt_OF_SH_CB_TUA2 = false;
	boolState[failF_OF_SH_CB_TUA2] = false;
	REINITIALISATION_OF_required_OF_SH_CB_TUB1 = true;
	boolState[already_S_OF_SH_CB_TUB1] = false;
	REINITIALISATION_OF_S_OF_SH_CB_TUB1 = false;
	REINITIALISATION_OF_relevant_evt_OF_SH_CB_TUB1 = false;
	boolState[failF_OF_SH_CB_TUB1] = false;
	REINITIALISATION_OF_required_OF_SH_CB_TUB2 = true;
	boolState[already_S_OF_SH_CB_TUB2] = false;
	REINITIALISATION_OF_S_OF_SH_CB_TUB2 = false;
	REINITIALISATION_OF_relevant_evt_OF_SH_CB_TUB2 = false;
	boolState[failF_OF_SH_CB_TUB2] = false;
	REINITIALISATION_OF_required_OF_SH_CB_line_GEV = true;
	boolState[already_S_OF_SH_CB_line_GEV] = false;
	REINITIALISATION_OF_S_OF_SH_CB_line_GEV = false;
	REINITIALISATION_OF_relevant_evt_OF_SH_CB_line_GEV = false;
	boolState[failF_OF_SH_CB_line_GEV] = false;
	REINITIALISATION_OF_required_OF_SH_CB_line_LGR = true;
	boolState[already_S_OF_SH_CB_line_LGR] = false;
	REINITIALISATION_OF_S_OF_SH_CB_line_LGR = false;
	REINITIALISATION_OF_relevant_evt_OF_SH_CB_line_LGR = false;
	boolState[failF_OF_SH_CB_line_LGR] = false;
	REINITIALISATION_OF_required_OF_SH_GEV_or_LGR = true;
	boolState[already_S_OF_SH_GEV_or_LGR] = false;
	REINITIALISATION_OF_S_OF_SH_GEV_or_LGR = false;
	REINITIALISATION_OF_relevant_evt_OF_SH_GEV_or_LGR = false;
	REINITIALISATION_OF_required_OF_SUBSTATION = true;
	boolState[already_S_OF_SUBSTATION] = false;
	REINITIALISATION_OF_S_OF_SUBSTATION = false;
	REINITIALISATION_OF_relevant_evt_OF_SUBSTATION = false;
	boolState[failF_OF_SUBSTATION] = false;
	REINITIALISATION_OF_required_OF_TA = true;
	boolState[already_S_OF_TA] = false;
	REINITIALISATION_OF_S_OF_TA = false;
	REINITIALISATION_OF_relevant_evt_OF_TA = false;
	boolState[failF_OF_TA] = false;
	REINITIALISATION_OF_required_OF_TAC = true;
	boolState[already_S_OF_TAC] = false;
	REINITIALISATION_OF_S_OF_TAC = false;
	REINITIALISATION_OF_relevant_evt_OF_TAC = false;
	boolState[failF_OF_TAC] = false;
	REINITIALISATION_OF_required_OF_TA_lost = true;
	boolState[already_S_OF_TA_lost] = false;
	REINITIALISATION_OF_S_OF_TA_lost = false;
	REINITIALISATION_OF_relevant_evt_OF_TA_lost = false;
	REINITIALISATION_OF_required_OF_TP = true;
	boolState[already_S_OF_TP] = false;
	REINITIALISATION_OF_S_OF_TP = false;
	REINITIALISATION_OF_relevant_evt_OF_TP = false;
	boolState[failF_OF_TP] = false;
	REINITIALISATION_OF_required_OF_TS = true;
	boolState[already_S_OF_TS] = false;
	REINITIALISATION_OF_S_OF_TS = false;
	REINITIALISATION_OF_relevant_evt_OF_TS = false;
	boolState[failF_OF_TS] = false;
	REINITIALISATION_OF_required_OF_TS_lost = true;
	boolState[already_S_OF_TS_lost] = false;
	REINITIALISATION_OF_S_OF_TS_lost = false;
	REINITIALISATION_OF_relevant_evt_OF_TS_lost = false;
	REINITIALISATION_OF_required_OF_TS_not_fed = true;
	boolState[already_S_OF_TS_not_fed] = false;
	REINITIALISATION_OF_S_OF_TS_not_fed = false;
	REINITIALISATION_OF_relevant_evt_OF_TS_not_fed = false;
	REINITIALISATION_OF_required_OF_TUA1 = true;
	boolState[already_S_OF_TUA1] = false;
	REINITIALISATION_OF_S_OF_TUA1 = false;
	REINITIALISATION_OF_relevant_evt_OF_TUA1 = false;
	boolState[failF_OF_TUA1] = false;
	REINITIALISATION_OF_required_OF_TUA2 = true;
	boolState[already_S_OF_TUA2] = false;
	REINITIALISATION_OF_S_OF_TUA2 = false;
	REINITIALISATION_OF_relevant_evt_OF_TUA2 = false;
	boolState[failF_OF_TUA2] = false;
	REINITIALISATION_OF_required_OF_TUB1 = true;
	boolState[already_S_OF_TUB1] = false;
	REINITIALISATION_OF_S_OF_TUB1 = false;
	REINITIALISATION_OF_relevant_evt_OF_TUB1 = false;
	boolState[failF_OF_TUB1] = false;
	REINITIALISATION_OF_required_OF_TUB2 = true;
	boolState[already_S_OF_TUB2] = false;
	REINITIALISATION_OF_S_OF_TUB2 = false;
	REINITIALISATION_OF_relevant_evt_OF_TUB2 = false;
	boolState[failF_OF_TUB2] = false;
	REINITIALISATION_OF_required_OF_UE_1 = true;
	boolState[already_S_OF_UE_1] = false;
	REINITIALISATION_OF_S_OF_UE_1 = false;
	REINITIALISATION_OF_relevant_evt_OF_UE_1 = false;
	REINITIALISATION_OF_required_OF_UNIT = true;
	boolState[already_S_OF_UNIT] = false;
	REINITIALISATION_OF_S_OF_UNIT = false;
	REINITIALISATION_OF_relevant_evt_OF_UNIT = false;
	boolState[failF_OF_UNIT] = false;
	REINITIALISATION_OF_required_OF_demand_CCF_DG = true;
	boolState[already_S_OF_demand_CCF_DG] = false;
	REINITIALISATION_OF_S_OF_demand_CCF_DG = false;
	REINITIALISATION_OF_relevant_evt_OF_demand_CCF_DG = false;
	boolState[failI_OF_demand_CCF_DG] = false;
	REINITIALISATION_OF_to_be_fired_OF_demand_CCF_DG = false;
	boolState[already_standby_OF_demand_CCF_DG] = false;
	boolState[already_required_OF_demand_CCF_DG] = false;
	REINITIALISATION_OF_required_OF_demand_DGA = true;
	boolState[already_S_OF_demand_DGA] = false;
	REINITIALISATION_OF_S_OF_demand_DGA = false;
	REINITIALISATION_OF_relevant_evt_OF_demand_DGA = false;
	boolState[failI_OF_demand_DGA] = false;
	REINITIALISATION_OF_to_be_fired_OF_demand_DGA = false;
	boolState[already_standby_OF_demand_DGA] = false;
	boolState[already_required_OF_demand_DGA] = false;
	REINITIALISATION_OF_required_OF_demand_DGB = true;
	boolState[already_S_OF_demand_DGB] = false;
	REINITIALISATION_OF_S_OF_demand_DGB = false;
	REINITIALISATION_OF_relevant_evt_OF_demand_DGB = false;
	boolState[failI_OF_demand_DGB] = false;
	REINITIALISATION_OF_to_be_fired_OF_demand_DGB = false;
	boolState[already_standby_OF_demand_DGB] = false;
	boolState[already_required_OF_demand_DGB] = false;
	REINITIALISATION_OF_required_OF_demand_TAC = true;
	boolState[already_S_OF_demand_TAC] = false;
	REINITIALISATION_OF_S_OF_demand_TAC = false;
	REINITIALISATION_OF_relevant_evt_OF_demand_TAC = false;
	boolState[failI_OF_demand_TAC] = false;
	REINITIALISATION_OF_to_be_fired_OF_demand_TAC = false;
	boolState[already_standby_OF_demand_TAC] = false;
	boolState[already_required_OF_demand_TAC] = false;
	REINITIALISATION_OF_required_OF_loss_of_houseload_operation = true;
	boolState[already_S_OF_loss_of_houseload_operation] = false;
	REINITIALISATION_OF_S_OF_loss_of_houseload_operation = false;
	REINITIALISATION_OF_relevant_evt_OF_loss_of_houseload_operation = false;
	REINITIALISATION_OF_required_OF_loss_of_supply_by_DGA = true;
	boolState[already_S_OF_loss_of_supply_by_DGA] = false;
	REINITIALISATION_OF_S_OF_loss_of_supply_by_DGA = false;
	REINITIALISATION_OF_relevant_evt_OF_loss_of_supply_by_DGA = false;
	REINITIALISATION_OF_required_OF_loss_of_supply_by_DGA_and_TAC = true;
	boolState[already_S_OF_loss_of_supply_by_DGA_and_TAC] = false;
	REINITIALISATION_OF_S_OF_loss_of_supply_by_DGA_and_TAC = false;
	REINITIALISATION_OF_relevant_evt_OF_loss_of_supply_by_DGA_and_TAC = false;
	REINITIALISATION_OF_required_OF_loss_of_supply_by_DGB = true;
	boolState[already_S_OF_loss_of_supply_by_DGB] = false;
	REINITIALISATION_OF_S_OF_loss_of_supply_by_DGB = false;
	REINITIALISATION_OF_relevant_evt_OF_loss_of_supply_by_DGB = false;
	REINITIALISATION_OF_required_OF_loss_of_supply_by_GEV = true;
	boolState[already_S_OF_loss_of_supply_by_GEV] = false;
	REINITIALISATION_OF_S_OF_loss_of_supply_by_GEV = false;
	REINITIALISATION_OF_relevant_evt_OF_loss_of_supply_by_GEV = false;
	REINITIALISATION_OF_required_OF_loss_of_supply_by_LGD = true;
	boolState[already_S_OF_loss_of_supply_by_LGD] = false;
	REINITIALISATION_OF_S_OF_loss_of_supply_by_LGD = false;
	REINITIALISATION_OF_relevant_evt_OF_loss_of_supply_by_LGD = false;
	REINITIALISATION_OF_required_OF_loss_of_supply_by_LGF = true;
	boolState[already_S_OF_loss_of_supply_by_LGF] = false;
	REINITIALISATION_OF_S_OF_loss_of_supply_by_LGF = false;
	REINITIALISATION_OF_relevant_evt_OF_loss_of_supply_by_LGF = false;
	REINITIALISATION_OF_required_OF_loss_of_supply_by_LGR = true;
	boolState[already_S_OF_loss_of_supply_by_LGR] = false;
	REINITIALISATION_OF_S_OF_loss_of_supply_by_LGR = false;
	REINITIALISATION_OF_relevant_evt_OF_loss_of_supply_by_LGR = false;
	REINITIALISATION_OF_required_OF_loss_of_supply_by_TA = true;
	boolState[already_S_OF_loss_of_supply_by_TA] = false;
	REINITIALISATION_OF_S_OF_loss_of_supply_by_TA = false;
	REINITIALISATION_OF_relevant_evt_OF_loss_of_supply_by_TA = false;
	REINITIALISATION_OF_required_OF_loss_of_supply_by_TA1 = true;
	boolState[already_S_OF_loss_of_supply_by_TA1] = false;
	REINITIALISATION_OF_S_OF_loss_of_supply_by_TA1 = false;
	REINITIALISATION_OF_relevant_evt_OF_loss_of_supply_by_TA1 = false;
	REINITIALISATION_OF_required_OF_loss_of_supply_by_TAC = true;
	boolState[already_S_OF_loss_of_supply_by_TAC] = false;
	REINITIALISATION_OF_S_OF_loss_of_supply_by_TAC = false;
	REINITIALISATION_OF_relevant_evt_OF_loss_of_supply_by_TAC = false;
	REINITIALISATION_OF_required_OF_loss_of_supply_by_TS = true;
	boolState[already_S_OF_loss_of_supply_by_TS] = false;
	REINITIALISATION_OF_S_OF_loss_of_supply_by_TS = false;
	REINITIALISATION_OF_relevant_evt_OF_loss_of_supply_by_TS = false;
	REINITIALISATION_OF_required_OF_loss_of_supply_by_TS1 = true;
	boolState[already_S_OF_loss_of_supply_by_TS1] = false;
	REINITIALISATION_OF_S_OF_loss_of_supply_by_TS1 = false;
	REINITIALISATION_OF_relevant_evt_OF_loss_of_supply_by_TS1 = false;
	REINITIALISATION_OF_required_OF_loss_of_supply_by_UNIT = true;
	boolState[already_S_OF_loss_of_supply_by_UNIT] = false;
	REINITIALISATION_OF_S_OF_loss_of_supply_by_UNIT = false;
	REINITIALISATION_OF_relevant_evt_OF_loss_of_supply_by_UNIT = false;

	/* ---------- DECLARATION OF OCCURRENCE RULES FIRING FLAGS ------------ */
	FIRE_xx10_OF_BAT_A1 = false;
	FIRE_xx10_OF_BAT_A2 = false;
	FIRE_xx10_OF_BAT_B1 = false;
	FIRE_xx10_OF_BAT_B2 = false;
	FIRE_xx10_OF_CCF_DG = false;
	FIRE_xx10_OF_CCF_GEV_LGR = false;
	FIRE_xx10_OF_DGA_long = false;
	FIRE_xx10_OF_DGA_short = false;
	FIRE_xx10_OF_DGB_long = false;
	FIRE_xx10_OF_DGB_short = false;
	FIRE_xx10_OF_GEV = false;
	FIRE_xx10_OF_GRID = false;
	FIRE_xx10_OF_InFnHouse = false;
	FIRE_xx10_OF_LBA = false;
	FIRE_xx10_OF_LBB = false;
	FIRE_xx10_OF_LGA = false;
	FIRE_xx10_OF_LGB = false;
	FIRE_xx10_OF_LGD = false;
	FIRE_xx10_OF_LGE = false;
	FIRE_xx10_OF_LGF = false;
	FIRE_xx10_OF_LGR = false;
	FIRE_xx10_OF_LHA = false;
	FIRE_xx10_OF_LHB = false;
	FIRE_xx10_OF_LKE = false;
	FIRE_xx10_OF_LKI = false;
	FIRE_xx10_OF_LLA = false;
	FIRE_xx10_OF_LLD = false;
	FIRE_xx23_OF_OnDemHouse_INS_27 = false;
	FIRE_xx23_OF_OnDemHouse_INS_28 = false;
	FIRE_xx23_OF_RC_CB_LGD2_INS_29 = false;
	FIRE_xx23_OF_RC_CB_LGD2_INS_30 = false;
	FIRE_xx23_OF_RC_CB_LGF2_INS_31 = false;
	FIRE_xx23_OF_RC_CB_LGF2_INS_32 = false;
	FIRE_xx23_OF_RC_CB_LHA2_INS_33 = false;
	FIRE_xx23_OF_RC_CB_LHA2_INS_34 = false;
	FIRE_xx23_OF_RC_CB_LHA3_INS_35 = false;
	FIRE_xx23_OF_RC_CB_LHA3_INS_36 = false;
	FIRE_xx23_OF_RC_CB_LHB2_INS_37 = false;
	FIRE_xx23_OF_RC_CB_LHB2_INS_38 = false;
	FIRE_xx10_OF_RDA1 = false;
	FIRE_xx10_OF_RDA2 = false;
	FIRE_xx10_OF_RDB1 = false;
	FIRE_xx10_OF_RDB2 = false;
	FIRE_xx23_OF_RO_CB_LHA1_INS_43 = false;
	FIRE_xx23_OF_RO_CB_LHA1_INS_44 = false;
	FIRE_xx23_OF_RO_CB_LHA2_INS_45 = false;
	FIRE_xx23_OF_RO_CB_LHA2_INS_46 = false;
	FIRE_xx23_OF_RO_CB_LHB1_INS_47 = false;
	FIRE_xx23_OF_RO_CB_LHB1_INS_48 = false;
	FIRE_xx10_OF_SH_CB_GEV = false;
	FIRE_xx10_OF_SH_CB_LBA1 = false;
	FIRE_xx10_OF_SH_CB_LBA2 = false;
	FIRE_xx10_OF_SH_CB_LBB1 = false;
	FIRE_xx10_OF_SH_CB_LBB2 = false;
	FIRE_xx10_OF_SH_CB_LGA = false;
	FIRE_xx10_OF_SH_CB_LGB = false;
	FIRE_xx10_OF_SH_CB_LGD1 = false;
	FIRE_xx10_OF_SH_CB_LGD2 = false;
	FIRE_xx10_OF_SH_CB_LGE1 = false;
	FIRE_xx10_OF_SH_CB_LGF1 = false;
	FIRE_xx10_OF_SH_CB_LGF2 = false;
	FIRE_xx10_OF_SH_CB_LHA1 = false;
	FIRE_xx10_OF_SH_CB_LHA2 = false;
	FIRE_xx10_OF_SH_CB_LHA3 = false;
	FIRE_xx10_OF_SH_CB_LHB1 = false;
	FIRE_xx10_OF_SH_CB_LHB2 = false;
	FIRE_xx10_OF_SH_CB_RDA1 = false;
	FIRE_xx10_OF_SH_CB_RDA2 = false;
	FIRE_xx10_OF_SH_CB_RDB1 = false;
	FIRE_xx10_OF_SH_CB_RDB2 = false;
	FIRE_xx10_OF_SH_CB_TUA1 = false;
	FIRE_xx10_OF_SH_CB_TUA2 = false;
	FIRE_xx10_OF_SH_CB_TUB1 = false;
	FIRE_xx10_OF_SH_CB_TUB2 = false;
	FIRE_xx10_OF_SH_CB_line_GEV = false;
	FIRE_xx10_OF_SH_CB_line_LGR = false;
	FIRE_xx10_OF_SUBSTATION = false;
	FIRE_xx10_OF_TA = false;
	FIRE_xx10_OF_TAC = false;
	FIRE_xx10_OF_TP = false;
	FIRE_xx10_OF_TS = false;
	FIRE_xx10_OF_TUA1 = false;
	FIRE_xx10_OF_TUA2 = false;
	FIRE_xx10_OF_TUB1 = false;
	FIRE_xx10_OF_TUB2 = false;
	FIRE_xx10_OF_UNIT = false;
	FIRE_xx23_OF_demand_CCF_DG_INS_86 = false;
	FIRE_xx23_OF_demand_CCF_DG_INS_87 = false;
	FIRE_xx23_OF_demand_DGA_INS_88 = false;
	FIRE_xx23_OF_demand_DGA_INS_89 = false;
	FIRE_xx23_OF_demand_DGB_INS_90 = false;
	FIRE_xx23_OF_demand_DGB_INS_91 = false;
	FIRE_xx23_OF_demand_TAC_INS_92 = false;
	FIRE_xx23_OF_demand_TAC_INS_93 = false;

}

void storm::figaro::FigaroProgram_NPPS_No_trim_No_repair::saveCurrentState()
{
	// cout <<">>>>>>>>>>>>>>>>>>>> Saving current state  <<<<<<<<<<<<<<<<<<<<<<<" << endl;
	backupBoolState = boolState ;
	backupFloatState = floatState ;
	backupIntState = intState ;
	backupEnumState = enumState ;
}

int storm::figaro::FigaroProgram_NPPS_No_trim_No_repair::compareStates()
{
	// cout <<">>>>>>>>>>>>>>>>>>>> Comparing state with previous one (return number of differences) <<<<<<<<<<<<<<<<<<<<<<<" << endl;

	return (backupBoolState != boolState) + (backupFloatState != floatState) + (backupIntState != intState) + (backupEnumState != enumState); 
}

void storm::figaro::FigaroProgram_NPPS_No_trim_No_repair::printState()
{
	//cout <<"\n==================== Print of the current state :  ====================" << endl;

	//cout << "Attribute :  boolState[required_OF_AND_3] | Value : " << boolState[required_OF_AND_3] << endl;
	//cout << "Attribute :  boolState[already_S_OF_AND_3] | Value : " << boolState[already_S_OF_AND_3] << endl;
	//cout << "Attribute :  boolState[S_OF_AND_3] | Value : " << boolState[S_OF_AND_3] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_AND_3] | Value : " << boolState[relevant_evt_OF_AND_3] << endl;
	//cout << "Attribute :  boolState[required_OF_BATTERY_A_lost] | Value : " << boolState[required_OF_BATTERY_A_lost] << endl;
	//cout << "Attribute :  boolState[already_S_OF_BATTERY_A_lost] | Value : " << boolState[already_S_OF_BATTERY_A_lost] << endl;
	//cout << "Attribute :  boolState[S_OF_BATTERY_A_lost] | Value : " << boolState[S_OF_BATTERY_A_lost] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_BATTERY_A_lost] | Value : " << boolState[relevant_evt_OF_BATTERY_A_lost] << endl;
	//cout << "Attribute :  boolState[required_OF_BATTERY_B_lost] | Value : " << boolState[required_OF_BATTERY_B_lost] << endl;
	//cout << "Attribute :  boolState[already_S_OF_BATTERY_B_lost] | Value : " << boolState[already_S_OF_BATTERY_B_lost] << endl;
	//cout << "Attribute :  boolState[S_OF_BATTERY_B_lost] | Value : " << boolState[S_OF_BATTERY_B_lost] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_BATTERY_B_lost] | Value : " << boolState[relevant_evt_OF_BATTERY_B_lost] << endl;
	//cout << "Attribute :  boolState[required_OF_BAT_A1] | Value : " << boolState[required_OF_BAT_A1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_BAT_A1] | Value : " << boolState[already_S_OF_BAT_A1] << endl;
	//cout << "Attribute :  boolState[S_OF_BAT_A1] | Value : " << boolState[S_OF_BAT_A1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_BAT_A1] | Value : " << boolState[relevant_evt_OF_BAT_A1] << endl;
	//cout << "Attribute :  boolState[failF_OF_BAT_A1] | Value : " << boolState[failF_OF_BAT_A1] << endl;
	//cout << "Attribute :  boolState[required_OF_BAT_A2] | Value : " << boolState[required_OF_BAT_A2] << endl;
	//cout << "Attribute :  boolState[already_S_OF_BAT_A2] | Value : " << boolState[already_S_OF_BAT_A2] << endl;
	//cout << "Attribute :  boolState[S_OF_BAT_A2] | Value : " << boolState[S_OF_BAT_A2] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_BAT_A2] | Value : " << boolState[relevant_evt_OF_BAT_A2] << endl;
	//cout << "Attribute :  boolState[failF_OF_BAT_A2] | Value : " << boolState[failF_OF_BAT_A2] << endl;
	//cout << "Attribute :  boolState[required_OF_BAT_B1] | Value : " << boolState[required_OF_BAT_B1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_BAT_B1] | Value : " << boolState[already_S_OF_BAT_B1] << endl;
	//cout << "Attribute :  boolState[S_OF_BAT_B1] | Value : " << boolState[S_OF_BAT_B1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_BAT_B1] | Value : " << boolState[relevant_evt_OF_BAT_B1] << endl;
	//cout << "Attribute :  boolState[failF_OF_BAT_B1] | Value : " << boolState[failF_OF_BAT_B1] << endl;
	//cout << "Attribute :  boolState[required_OF_BAT_B2] | Value : " << boolState[required_OF_BAT_B2] << endl;
	//cout << "Attribute :  boolState[already_S_OF_BAT_B2] | Value : " << boolState[already_S_OF_BAT_B2] << endl;
	//cout << "Attribute :  boolState[S_OF_BAT_B2] | Value : " << boolState[S_OF_BAT_B2] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_BAT_B2] | Value : " << boolState[relevant_evt_OF_BAT_B2] << endl;
	//cout << "Attribute :  boolState[failF_OF_BAT_B2] | Value : " << boolState[failF_OF_BAT_B2] << endl;
	//cout << "Attribute :  boolState[required_OF_CB_LGD2_unable] | Value : " << boolState[required_OF_CB_LGD2_unable] << endl;
	//cout << "Attribute :  boolState[already_S_OF_CB_LGD2_unable] | Value : " << boolState[already_S_OF_CB_LGD2_unable] << endl;
	//cout << "Attribute :  boolState[S_OF_CB_LGD2_unable] | Value : " << boolState[S_OF_CB_LGD2_unable] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_CB_LGD2_unable] | Value : " << boolState[relevant_evt_OF_CB_LGD2_unable] << endl;
	//cout << "Attribute :  boolState[required_OF_CB_LGF2_unable] | Value : " << boolState[required_OF_CB_LGF2_unable] << endl;
	//cout << "Attribute :  boolState[already_S_OF_CB_LGF2_unable] | Value : " << boolState[already_S_OF_CB_LGF2_unable] << endl;
	//cout << "Attribute :  boolState[S_OF_CB_LGF2_unable] | Value : " << boolState[S_OF_CB_LGF2_unable] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_CB_LGF2_unable] | Value : " << boolState[relevant_evt_OF_CB_LGF2_unable] << endl;
	//cout << "Attribute :  boolState[required_OF_CB_LHA12_unable] | Value : " << boolState[required_OF_CB_LHA12_unable] << endl;
	//cout << "Attribute :  boolState[already_S_OF_CB_LHA12_unable] | Value : " << boolState[already_S_OF_CB_LHA12_unable] << endl;
	//cout << "Attribute :  boolState[S_OF_CB_LHA12_unable] | Value : " << boolState[S_OF_CB_LHA12_unable] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_CB_LHA12_unable] | Value : " << boolState[relevant_evt_OF_CB_LHA12_unable] << endl;
	//cout << "Attribute :  boolState[required_OF_CB_LHA3_unable] | Value : " << boolState[required_OF_CB_LHA3_unable] << endl;
	//cout << "Attribute :  boolState[already_S_OF_CB_LHA3_unable] | Value : " << boolState[already_S_OF_CB_LHA3_unable] << endl;
	//cout << "Attribute :  boolState[S_OF_CB_LHA3_unable] | Value : " << boolState[S_OF_CB_LHA3_unable] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_CB_LHA3_unable] | Value : " << boolState[relevant_evt_OF_CB_LHA3_unable] << endl;
	//cout << "Attribute :  boolState[required_OF_CB_LHB12_unable] | Value : " << boolState[required_OF_CB_LHB12_unable] << endl;
	//cout << "Attribute :  boolState[already_S_OF_CB_LHB12_unable] | Value : " << boolState[already_S_OF_CB_LHB12_unable] << endl;
	//cout << "Attribute :  boolState[S_OF_CB_LHB12_unable] | Value : " << boolState[S_OF_CB_LHB12_unable] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_CB_LHB12_unable] | Value : " << boolState[relevant_evt_OF_CB_LHB12_unable] << endl;
	//cout << "Attribute :  boolState[required_OF_CCF_DG] | Value : " << boolState[required_OF_CCF_DG] << endl;
	//cout << "Attribute :  boolState[already_S_OF_CCF_DG] | Value : " << boolState[already_S_OF_CCF_DG] << endl;
	//cout << "Attribute :  boolState[S_OF_CCF_DG] | Value : " << boolState[S_OF_CCF_DG] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_CCF_DG] | Value : " << boolState[relevant_evt_OF_CCF_DG] << endl;
	//cout << "Attribute :  boolState[failF_OF_CCF_DG] | Value : " << boolState[failF_OF_CCF_DG] << endl;
	//cout << "Attribute :  boolState[required_OF_CCF_GEV_LGR] | Value : " << boolState[required_OF_CCF_GEV_LGR] << endl;
	//cout << "Attribute :  boolState[already_S_OF_CCF_GEV_LGR] | Value : " << boolState[already_S_OF_CCF_GEV_LGR] << endl;
	//cout << "Attribute :  boolState[S_OF_CCF_GEV_LGR] | Value : " << boolState[S_OF_CCF_GEV_LGR] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_CCF_GEV_LGR] | Value : " << boolState[relevant_evt_OF_CCF_GEV_LGR] << endl;
	//cout << "Attribute :  boolState[failF_OF_CCF_GEV_LGR] | Value : " << boolState[failF_OF_CCF_GEV_LGR] << endl;
	//cout << "Attribute :  boolState[required_OF_DGA_long] | Value : " << boolState[required_OF_DGA_long] << endl;
	//cout << "Attribute :  boolState[already_S_OF_DGA_long] | Value : " << boolState[already_S_OF_DGA_long] << endl;
	//cout << "Attribute :  boolState[S_OF_DGA_long] | Value : " << boolState[S_OF_DGA_long] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_DGA_long] | Value : " << boolState[relevant_evt_OF_DGA_long] << endl;
	//cout << "Attribute :  boolState[failF_OF_DGA_long] | Value : " << boolState[failF_OF_DGA_long] << endl;
	//cout << "Attribute :  boolState[required_OF_DGA_lost] | Value : " << boolState[required_OF_DGA_lost] << endl;
	//cout << "Attribute :  boolState[already_S_OF_DGA_lost] | Value : " << boolState[already_S_OF_DGA_lost] << endl;
	//cout << "Attribute :  boolState[S_OF_DGA_lost] | Value : " << boolState[S_OF_DGA_lost] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_DGA_lost] | Value : " << boolState[relevant_evt_OF_DGA_lost] << endl;
	//cout << "Attribute :  boolState[required_OF_DGA_short] | Value : " << boolState[required_OF_DGA_short] << endl;
	//cout << "Attribute :  boolState[already_S_OF_DGA_short] | Value : " << boolState[already_S_OF_DGA_short] << endl;
	//cout << "Attribute :  boolState[S_OF_DGA_short] | Value : " << boolState[S_OF_DGA_short] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_DGA_short] | Value : " << boolState[relevant_evt_OF_DGA_short] << endl;
	//cout << "Attribute :  boolState[failF_OF_DGA_short] | Value : " << boolState[failF_OF_DGA_short] << endl;
	//cout << "Attribute :  boolState[required_OF_DGB_long] | Value : " << boolState[required_OF_DGB_long] << endl;
	//cout << "Attribute :  boolState[already_S_OF_DGB_long] | Value : " << boolState[already_S_OF_DGB_long] << endl;
	//cout << "Attribute :  boolState[S_OF_DGB_long] | Value : " << boolState[S_OF_DGB_long] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_DGB_long] | Value : " << boolState[relevant_evt_OF_DGB_long] << endl;
	//cout << "Attribute :  boolState[failF_OF_DGB_long] | Value : " << boolState[failF_OF_DGB_long] << endl;
	//cout << "Attribute :  boolState[required_OF_DGB_lost] | Value : " << boolState[required_OF_DGB_lost] << endl;
	//cout << "Attribute :  boolState[already_S_OF_DGB_lost] | Value : " << boolState[already_S_OF_DGB_lost] << endl;
	//cout << "Attribute :  boolState[S_OF_DGB_lost] | Value : " << boolState[S_OF_DGB_lost] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_DGB_lost] | Value : " << boolState[relevant_evt_OF_DGB_lost] << endl;
	//cout << "Attribute :  boolState[required_OF_DGB_short] | Value : " << boolState[required_OF_DGB_short] << endl;
	//cout << "Attribute :  boolState[already_S_OF_DGB_short] | Value : " << boolState[already_S_OF_DGB_short] << endl;
	//cout << "Attribute :  boolState[S_OF_DGB_short] | Value : " << boolState[S_OF_DGB_short] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_DGB_short] | Value : " << boolState[relevant_evt_OF_DGB_short] << endl;
	//cout << "Attribute :  boolState[failF_OF_DGB_short] | Value : " << boolState[failF_OF_DGB_short] << endl;
	//cout << "Attribute :  boolState[required_OF_GEV] | Value : " << boolState[required_OF_GEV] << endl;
	//cout << "Attribute :  boolState[already_S_OF_GEV] | Value : " << boolState[already_S_OF_GEV] << endl;
	//cout << "Attribute :  boolState[S_OF_GEV] | Value : " << boolState[S_OF_GEV] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_GEV] | Value : " << boolState[relevant_evt_OF_GEV] << endl;
	//cout << "Attribute :  boolState[failF_OF_GEV] | Value : " << boolState[failF_OF_GEV] << endl;
	//cout << "Attribute :  boolState[required_OF_GRID] | Value : " << boolState[required_OF_GRID] << endl;
	//cout << "Attribute :  boolState[already_S_OF_GRID] | Value : " << boolState[already_S_OF_GRID] << endl;
	//cout << "Attribute :  boolState[S_OF_GRID] | Value : " << boolState[S_OF_GRID] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_GRID] | Value : " << boolState[relevant_evt_OF_GRID] << endl;
	//cout << "Attribute :  boolState[failF_OF_GRID] | Value : " << boolState[failF_OF_GRID] << endl;
	//cout << "Attribute :  boolState[required_OF_InFnHouse] | Value : " << boolState[required_OF_InFnHouse] << endl;
	//cout << "Attribute :  boolState[already_S_OF_InFnHouse] | Value : " << boolState[already_S_OF_InFnHouse] << endl;
	//cout << "Attribute :  boolState[S_OF_InFnHouse] | Value : " << boolState[S_OF_InFnHouse] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_InFnHouse] | Value : " << boolState[relevant_evt_OF_InFnHouse] << endl;
	//cout << "Attribute :  boolState[failF_OF_InFnHouse] | Value : " << boolState[failF_OF_InFnHouse] << endl;
	//cout << "Attribute :  boolState[required_OF_LBA] | Value : " << boolState[required_OF_LBA] << endl;
	//cout << "Attribute :  boolState[already_S_OF_LBA] | Value : " << boolState[already_S_OF_LBA] << endl;
	//cout << "Attribute :  boolState[S_OF_LBA] | Value : " << boolState[S_OF_LBA] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_LBA] | Value : " << boolState[relevant_evt_OF_LBA] << endl;
	//cout << "Attribute :  boolState[failF_OF_LBA] | Value : " << boolState[failF_OF_LBA] << endl;
	//cout << "Attribute :  boolState[required_OF_LBA_lost] | Value : " << boolState[required_OF_LBA_lost] << endl;
	//cout << "Attribute :  boolState[already_S_OF_LBA_lost] | Value : " << boolState[already_S_OF_LBA_lost] << endl;
	//cout << "Attribute :  boolState[S_OF_LBA_lost] | Value : " << boolState[S_OF_LBA_lost] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_LBA_lost] | Value : " << boolState[relevant_evt_OF_LBA_lost] << endl;
	//cout << "Attribute :  boolState[required_OF_LBA_not_fed] | Value : " << boolState[required_OF_LBA_not_fed] << endl;
	//cout << "Attribute :  boolState[already_S_OF_LBA_not_fed] | Value : " << boolState[already_S_OF_LBA_not_fed] << endl;
	//cout << "Attribute :  boolState[S_OF_LBA_not_fed] | Value : " << boolState[S_OF_LBA_not_fed] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_LBA_not_fed] | Value : " << boolState[relevant_evt_OF_LBA_not_fed] << endl;
	//cout << "Attribute :  boolState[required_OF_LBAline1_lost] | Value : " << boolState[required_OF_LBAline1_lost] << endl;
	//cout << "Attribute :  boolState[already_S_OF_LBAline1_lost] | Value : " << boolState[already_S_OF_LBAline1_lost] << endl;
	//cout << "Attribute :  boolState[S_OF_LBAline1_lost] | Value : " << boolState[S_OF_LBAline1_lost] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_LBAline1_lost] | Value : " << boolState[relevant_evt_OF_LBAline1_lost] << endl;
	//cout << "Attribute :  boolState[required_OF_LBAline2_lost] | Value : " << boolState[required_OF_LBAline2_lost] << endl;
	//cout << "Attribute :  boolState[already_S_OF_LBAline2_lost] | Value : " << boolState[already_S_OF_LBAline2_lost] << endl;
	//cout << "Attribute :  boolState[S_OF_LBAline2_lost] | Value : " << boolState[S_OF_LBAline2_lost] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_LBAline2_lost] | Value : " << boolState[relevant_evt_OF_LBAline2_lost] << endl;
	//cout << "Attribute :  boolState[required_OF_LBAothers_lost] | Value : " << boolState[required_OF_LBAothers_lost] << endl;
	//cout << "Attribute :  boolState[already_S_OF_LBAothers_lost] | Value : " << boolState[already_S_OF_LBAothers_lost] << endl;
	//cout << "Attribute :  boolState[S_OF_LBAothers_lost] | Value : " << boolState[S_OF_LBAothers_lost] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_LBAothers_lost] | Value : " << boolState[relevant_evt_OF_LBAothers_lost] << endl;
	//cout << "Attribute :  boolState[required_OF_LBB] | Value : " << boolState[required_OF_LBB] << endl;
	//cout << "Attribute :  boolState[already_S_OF_LBB] | Value : " << boolState[already_S_OF_LBB] << endl;
	//cout << "Attribute :  boolState[S_OF_LBB] | Value : " << boolState[S_OF_LBB] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_LBB] | Value : " << boolState[relevant_evt_OF_LBB] << endl;
	//cout << "Attribute :  boolState[failF_OF_LBB] | Value : " << boolState[failF_OF_LBB] << endl;
	//cout << "Attribute :  boolState[required_OF_LBB_lost] | Value : " << boolState[required_OF_LBB_lost] << endl;
	//cout << "Attribute :  boolState[already_S_OF_LBB_lost] | Value : " << boolState[already_S_OF_LBB_lost] << endl;
	//cout << "Attribute :  boolState[S_OF_LBB_lost] | Value : " << boolState[S_OF_LBB_lost] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_LBB_lost] | Value : " << boolState[relevant_evt_OF_LBB_lost] << endl;
	//cout << "Attribute :  boolState[required_OF_LBB_not_fed] | Value : " << boolState[required_OF_LBB_not_fed] << endl;
	//cout << "Attribute :  boolState[already_S_OF_LBB_not_fed] | Value : " << boolState[already_S_OF_LBB_not_fed] << endl;
	//cout << "Attribute :  boolState[S_OF_LBB_not_fed] | Value : " << boolState[S_OF_LBB_not_fed] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_LBB_not_fed] | Value : " << boolState[relevant_evt_OF_LBB_not_fed] << endl;
	//cout << "Attribute :  boolState[required_OF_LBBline1_lost] | Value : " << boolState[required_OF_LBBline1_lost] << endl;
	//cout << "Attribute :  boolState[already_S_OF_LBBline1_lost] | Value : " << boolState[already_S_OF_LBBline1_lost] << endl;
	//cout << "Attribute :  boolState[S_OF_LBBline1_lost] | Value : " << boolState[S_OF_LBBline1_lost] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_LBBline1_lost] | Value : " << boolState[relevant_evt_OF_LBBline1_lost] << endl;
	//cout << "Attribute :  boolState[required_OF_LBBline2_lost] | Value : " << boolState[required_OF_LBBline2_lost] << endl;
	//cout << "Attribute :  boolState[already_S_OF_LBBline2_lost] | Value : " << boolState[already_S_OF_LBBline2_lost] << endl;
	//cout << "Attribute :  boolState[S_OF_LBBline2_lost] | Value : " << boolState[S_OF_LBBline2_lost] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_LBBline2_lost] | Value : " << boolState[relevant_evt_OF_LBBline2_lost] << endl;
	//cout << "Attribute :  boolState[required_OF_LGA] | Value : " << boolState[required_OF_LGA] << endl;
	//cout << "Attribute :  boolState[already_S_OF_LGA] | Value : " << boolState[already_S_OF_LGA] << endl;
	//cout << "Attribute :  boolState[S_OF_LGA] | Value : " << boolState[S_OF_LGA] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_LGA] | Value : " << boolState[relevant_evt_OF_LGA] << endl;
	//cout << "Attribute :  boolState[failF_OF_LGA] | Value : " << boolState[failF_OF_LGA] << endl;
	//cout << "Attribute :  boolState[required_OF_LGB] | Value : " << boolState[required_OF_LGB] << endl;
	//cout << "Attribute :  boolState[already_S_OF_LGB] | Value : " << boolState[already_S_OF_LGB] << endl;
	//cout << "Attribute :  boolState[S_OF_LGB] | Value : " << boolState[S_OF_LGB] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_LGB] | Value : " << boolState[relevant_evt_OF_LGB] << endl;
	//cout << "Attribute :  boolState[failF_OF_LGB] | Value : " << boolState[failF_OF_LGB] << endl;
	//cout << "Attribute :  boolState[required_OF_LGD] | Value : " << boolState[required_OF_LGD] << endl;
	//cout << "Attribute :  boolState[already_S_OF_LGD] | Value : " << boolState[already_S_OF_LGD] << endl;
	//cout << "Attribute :  boolState[S_OF_LGD] | Value : " << boolState[S_OF_LGD] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_LGD] | Value : " << boolState[relevant_evt_OF_LGD] << endl;
	//cout << "Attribute :  boolState[failF_OF_LGD] | Value : " << boolState[failF_OF_LGD] << endl;
	//cout << "Attribute :  boolState[required_OF_LGD_not_fed] | Value : " << boolState[required_OF_LGD_not_fed] << endl;
	//cout << "Attribute :  boolState[already_S_OF_LGD_not_fed] | Value : " << boolState[already_S_OF_LGD_not_fed] << endl;
	//cout << "Attribute :  boolState[S_OF_LGD_not_fed] | Value : " << boolState[S_OF_LGD_not_fed] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_LGD_not_fed] | Value : " << boolState[relevant_evt_OF_LGD_not_fed] << endl;
	//cout << "Attribute :  boolState[required_OF_LGE] | Value : " << boolState[required_OF_LGE] << endl;
	//cout << "Attribute :  boolState[already_S_OF_LGE] | Value : " << boolState[already_S_OF_LGE] << endl;
	//cout << "Attribute :  boolState[S_OF_LGE] | Value : " << boolState[S_OF_LGE] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_LGE] | Value : " << boolState[relevant_evt_OF_LGE] << endl;
	//cout << "Attribute :  boolState[failF_OF_LGE] | Value : " << boolState[failF_OF_LGE] << endl;
	//cout << "Attribute :  boolState[required_OF_LGF] | Value : " << boolState[required_OF_LGF] << endl;
	//cout << "Attribute :  boolState[already_S_OF_LGF] | Value : " << boolState[already_S_OF_LGF] << endl;
	//cout << "Attribute :  boolState[S_OF_LGF] | Value : " << boolState[S_OF_LGF] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_LGF] | Value : " << boolState[relevant_evt_OF_LGF] << endl;
	//cout << "Attribute :  boolState[failF_OF_LGF] | Value : " << boolState[failF_OF_LGF] << endl;
	//cout << "Attribute :  boolState[required_OF_LGF_not_fed] | Value : " << boolState[required_OF_LGF_not_fed] << endl;
	//cout << "Attribute :  boolState[already_S_OF_LGF_not_fed] | Value : " << boolState[already_S_OF_LGF_not_fed] << endl;
	//cout << "Attribute :  boolState[S_OF_LGF_not_fed] | Value : " << boolState[S_OF_LGF_not_fed] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_LGF_not_fed] | Value : " << boolState[relevant_evt_OF_LGF_not_fed] << endl;
	//cout << "Attribute :  boolState[required_OF_LGR] | Value : " << boolState[required_OF_LGR] << endl;
	//cout << "Attribute :  boolState[already_S_OF_LGR] | Value : " << boolState[already_S_OF_LGR] << endl;
	//cout << "Attribute :  boolState[S_OF_LGR] | Value : " << boolState[S_OF_LGR] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_LGR] | Value : " << boolState[relevant_evt_OF_LGR] << endl;
	//cout << "Attribute :  boolState[failF_OF_LGR] | Value : " << boolState[failF_OF_LGR] << endl;
	//cout << "Attribute :  boolState[required_OF_LHA] | Value : " << boolState[required_OF_LHA] << endl;
	//cout << "Attribute :  boolState[already_S_OF_LHA] | Value : " << boolState[already_S_OF_LHA] << endl;
	//cout << "Attribute :  boolState[S_OF_LHA] | Value : " << boolState[S_OF_LHA] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_LHA] | Value : " << boolState[relevant_evt_OF_LHA] << endl;
	//cout << "Attribute :  boolState[failF_OF_LHA] | Value : " << boolState[failF_OF_LHA] << endl;
	//cout << "Attribute :  boolState[required_OF_LHA_and_LHB_lost] | Value : " << boolState[required_OF_LHA_and_LHB_lost] << endl;
	//cout << "Attribute :  boolState[already_S_OF_LHA_and_LHB_lost] | Value : " << boolState[already_S_OF_LHA_and_LHB_lost] << endl;
	//cout << "Attribute :  boolState[S_OF_LHA_and_LHB_lost] | Value : " << boolState[S_OF_LHA_and_LHB_lost] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_LHA_and_LHB_lost] | Value : " << boolState[relevant_evt_OF_LHA_and_LHB_lost] << endl;
	//cout << "Attribute :  boolState[required_OF_LHA_lost] | Value : " << boolState[required_OF_LHA_lost] << endl;
	//cout << "Attribute :  boolState[already_S_OF_LHA_lost] | Value : " << boolState[already_S_OF_LHA_lost] << endl;
	//cout << "Attribute :  boolState[S_OF_LHA_lost] | Value : " << boolState[S_OF_LHA_lost] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_LHA_lost] | Value : " << boolState[relevant_evt_OF_LHA_lost] << endl;
	//cout << "Attribute :  boolState[required_OF_LHA_not_fed] | Value : " << boolState[required_OF_LHA_not_fed] << endl;
	//cout << "Attribute :  boolState[already_S_OF_LHA_not_fed] | Value : " << boolState[already_S_OF_LHA_not_fed] << endl;
	//cout << "Attribute :  boolState[S_OF_LHA_not_fed] | Value : " << boolState[S_OF_LHA_not_fed] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_LHA_not_fed] | Value : " << boolState[relevant_evt_OF_LHA_not_fed] << endl;
	//cout << "Attribute :  boolState[required_OF_LHB] | Value : " << boolState[required_OF_LHB] << endl;
	//cout << "Attribute :  boolState[already_S_OF_LHB] | Value : " << boolState[already_S_OF_LHB] << endl;
	//cout << "Attribute :  boolState[S_OF_LHB] | Value : " << boolState[S_OF_LHB] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_LHB] | Value : " << boolState[relevant_evt_OF_LHB] << endl;
	//cout << "Attribute :  boolState[failF_OF_LHB] | Value : " << boolState[failF_OF_LHB] << endl;
	//cout << "Attribute :  boolState[required_OF_LHB_lost] | Value : " << boolState[required_OF_LHB_lost] << endl;
	//cout << "Attribute :  boolState[already_S_OF_LHB_lost] | Value : " << boolState[already_S_OF_LHB_lost] << endl;
	//cout << "Attribute :  boolState[S_OF_LHB_lost] | Value : " << boolState[S_OF_LHB_lost] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_LHB_lost] | Value : " << boolState[relevant_evt_OF_LHB_lost] << endl;
	//cout << "Attribute :  boolState[required_OF_LHB_not_fed] | Value : " << boolState[required_OF_LHB_not_fed] << endl;
	//cout << "Attribute :  boolState[already_S_OF_LHB_not_fed] | Value : " << boolState[already_S_OF_LHB_not_fed] << endl;
	//cout << "Attribute :  boolState[S_OF_LHB_not_fed] | Value : " << boolState[S_OF_LHB_not_fed] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_LHB_not_fed] | Value : " << boolState[relevant_evt_OF_LHB_not_fed] << endl;
	//cout << "Attribute :  boolState[required_OF_LKE] | Value : " << boolState[required_OF_LKE] << endl;
	//cout << "Attribute :  boolState[already_S_OF_LKE] | Value : " << boolState[already_S_OF_LKE] << endl;
	//cout << "Attribute :  boolState[S_OF_LKE] | Value : " << boolState[S_OF_LKE] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_LKE] | Value : " << boolState[relevant_evt_OF_LKE] << endl;
	//cout << "Attribute :  boolState[failF_OF_LKE] | Value : " << boolState[failF_OF_LKE] << endl;
	//cout << "Attribute :  boolState[required_OF_LKI] | Value : " << boolState[required_OF_LKI] << endl;
	//cout << "Attribute :  boolState[already_S_OF_LKI] | Value : " << boolState[already_S_OF_LKI] << endl;
	//cout << "Attribute :  boolState[S_OF_LKI] | Value : " << boolState[S_OF_LKI] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_LKI] | Value : " << boolState[relevant_evt_OF_LKI] << endl;
	//cout << "Attribute :  boolState[failF_OF_LKI] | Value : " << boolState[failF_OF_LKI] << endl;
	//cout << "Attribute :  boolState[required_OF_LLA] | Value : " << boolState[required_OF_LLA] << endl;
	//cout << "Attribute :  boolState[already_S_OF_LLA] | Value : " << boolState[already_S_OF_LLA] << endl;
	//cout << "Attribute :  boolState[S_OF_LLA] | Value : " << boolState[S_OF_LLA] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_LLA] | Value : " << boolState[relevant_evt_OF_LLA] << endl;
	//cout << "Attribute :  boolState[failF_OF_LLA] | Value : " << boolState[failF_OF_LLA] << endl;
	//cout << "Attribute :  boolState[required_OF_LLD] | Value : " << boolState[required_OF_LLD] << endl;
	//cout << "Attribute :  boolState[already_S_OF_LLD] | Value : " << boolState[already_S_OF_LLD] << endl;
	//cout << "Attribute :  boolState[S_OF_LLD] | Value : " << boolState[S_OF_LLD] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_LLD] | Value : " << boolState[relevant_evt_OF_LLD] << endl;
	//cout << "Attribute :  boolState[failF_OF_LLD] | Value : " << boolState[failF_OF_LLD] << endl;
	//cout << "Attribute :  boolState[required_OF_OR_14] | Value : " << boolState[required_OF_OR_14] << endl;
	//cout << "Attribute :  boolState[already_S_OF_OR_14] | Value : " << boolState[already_S_OF_OR_14] << endl;
	//cout << "Attribute :  boolState[S_OF_OR_14] | Value : " << boolState[S_OF_OR_14] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_OR_14] | Value : " << boolState[relevant_evt_OF_OR_14] << endl;
	//cout << "Attribute :  boolState[required_OF_OnDemHouse] | Value : " << boolState[required_OF_OnDemHouse] << endl;
	//cout << "Attribute :  boolState[already_S_OF_OnDemHouse] | Value : " << boolState[already_S_OF_OnDemHouse] << endl;
	//cout << "Attribute :  boolState[S_OF_OnDemHouse] | Value : " << boolState[S_OF_OnDemHouse] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_OnDemHouse] | Value : " << boolState[relevant_evt_OF_OnDemHouse] << endl;
	//cout << "Attribute :  boolState[failI_OF_OnDemHouse] | Value : " << boolState[failI_OF_OnDemHouse] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_OnDemHouse] | Value : " << boolState[to_be_fired_OF_OnDemHouse] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_OnDemHouse] | Value : " << boolState[already_standby_OF_OnDemHouse] << endl;
	//cout << "Attribute :  boolState[already_required_OF_OnDemHouse] | Value : " << boolState[already_required_OF_OnDemHouse] << endl;
	//cout << "Attribute :  boolState[required_OF_RC_CB_LGD2] | Value : " << boolState[required_OF_RC_CB_LGD2] << endl;
	//cout << "Attribute :  boolState[already_S_OF_RC_CB_LGD2] | Value : " << boolState[already_S_OF_RC_CB_LGD2] << endl;
	//cout << "Attribute :  boolState[S_OF_RC_CB_LGD2] | Value : " << boolState[S_OF_RC_CB_LGD2] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_RC_CB_LGD2] | Value : " << boolState[relevant_evt_OF_RC_CB_LGD2] << endl;
	//cout << "Attribute :  boolState[failI_OF_RC_CB_LGD2] | Value : " << boolState[failI_OF_RC_CB_LGD2] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_RC_CB_LGD2] | Value : " << boolState[to_be_fired_OF_RC_CB_LGD2] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_RC_CB_LGD2] | Value : " << boolState[already_standby_OF_RC_CB_LGD2] << endl;
	//cout << "Attribute :  boolState[already_required_OF_RC_CB_LGD2] | Value : " << boolState[already_required_OF_RC_CB_LGD2] << endl;
	//cout << "Attribute :  boolState[required_OF_RC_CB_LGD2_] | Value : " << boolState[required_OF_RC_CB_LGD2_] << endl;
	//cout << "Attribute :  boolState[already_S_OF_RC_CB_LGD2_] | Value : " << boolState[already_S_OF_RC_CB_LGD2_] << endl;
	//cout << "Attribute :  boolState[S_OF_RC_CB_LGD2_] | Value : " << boolState[S_OF_RC_CB_LGD2_] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_RC_CB_LGD2_] | Value : " << boolState[relevant_evt_OF_RC_CB_LGD2_] << endl;
	//cout << "Attribute :  boolState[required_OF_RC_CB_LGF2] | Value : " << boolState[required_OF_RC_CB_LGF2] << endl;
	//cout << "Attribute :  boolState[already_S_OF_RC_CB_LGF2] | Value : " << boolState[already_S_OF_RC_CB_LGF2] << endl;
	//cout << "Attribute :  boolState[S_OF_RC_CB_LGF2] | Value : " << boolState[S_OF_RC_CB_LGF2] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_RC_CB_LGF2] | Value : " << boolState[relevant_evt_OF_RC_CB_LGF2] << endl;
	//cout << "Attribute :  boolState[failI_OF_RC_CB_LGF2] | Value : " << boolState[failI_OF_RC_CB_LGF2] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_RC_CB_LGF2] | Value : " << boolState[to_be_fired_OF_RC_CB_LGF2] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_RC_CB_LGF2] | Value : " << boolState[already_standby_OF_RC_CB_LGF2] << endl;
	//cout << "Attribute :  boolState[already_required_OF_RC_CB_LGF2] | Value : " << boolState[already_required_OF_RC_CB_LGF2] << endl;
	//cout << "Attribute :  boolState[required_OF_RC_CB_LGF2_] | Value : " << boolState[required_OF_RC_CB_LGF2_] << endl;
	//cout << "Attribute :  boolState[already_S_OF_RC_CB_LGF2_] | Value : " << boolState[already_S_OF_RC_CB_LGF2_] << endl;
	//cout << "Attribute :  boolState[S_OF_RC_CB_LGF2_] | Value : " << boolState[S_OF_RC_CB_LGF2_] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_RC_CB_LGF2_] | Value : " << boolState[relevant_evt_OF_RC_CB_LGF2_] << endl;
	//cout << "Attribute :  boolState[required_OF_RC_CB_LHA2] | Value : " << boolState[required_OF_RC_CB_LHA2] << endl;
	//cout << "Attribute :  boolState[already_S_OF_RC_CB_LHA2] | Value : " << boolState[already_S_OF_RC_CB_LHA2] << endl;
	//cout << "Attribute :  boolState[S_OF_RC_CB_LHA2] | Value : " << boolState[S_OF_RC_CB_LHA2] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_RC_CB_LHA2] | Value : " << boolState[relevant_evt_OF_RC_CB_LHA2] << endl;
	//cout << "Attribute :  boolState[failI_OF_RC_CB_LHA2] | Value : " << boolState[failI_OF_RC_CB_LHA2] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_RC_CB_LHA2] | Value : " << boolState[to_be_fired_OF_RC_CB_LHA2] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_RC_CB_LHA2] | Value : " << boolState[already_standby_OF_RC_CB_LHA2] << endl;
	//cout << "Attribute :  boolState[already_required_OF_RC_CB_LHA2] | Value : " << boolState[already_required_OF_RC_CB_LHA2] << endl;
	//cout << "Attribute :  boolState[required_OF_RC_CB_LHA2_] | Value : " << boolState[required_OF_RC_CB_LHA2_] << endl;
	//cout << "Attribute :  boolState[already_S_OF_RC_CB_LHA2_] | Value : " << boolState[already_S_OF_RC_CB_LHA2_] << endl;
	//cout << "Attribute :  boolState[S_OF_RC_CB_LHA2_] | Value : " << boolState[S_OF_RC_CB_LHA2_] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_RC_CB_LHA2_] | Value : " << boolState[relevant_evt_OF_RC_CB_LHA2_] << endl;
	//cout << "Attribute :  boolState[required_OF_RC_CB_LHA3] | Value : " << boolState[required_OF_RC_CB_LHA3] << endl;
	//cout << "Attribute :  boolState[already_S_OF_RC_CB_LHA3] | Value : " << boolState[already_S_OF_RC_CB_LHA3] << endl;
	//cout << "Attribute :  boolState[S_OF_RC_CB_LHA3] | Value : " << boolState[S_OF_RC_CB_LHA3] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_RC_CB_LHA3] | Value : " << boolState[relevant_evt_OF_RC_CB_LHA3] << endl;
	//cout << "Attribute :  boolState[failI_OF_RC_CB_LHA3] | Value : " << boolState[failI_OF_RC_CB_LHA3] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_RC_CB_LHA3] | Value : " << boolState[to_be_fired_OF_RC_CB_LHA3] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_RC_CB_LHA3] | Value : " << boolState[already_standby_OF_RC_CB_LHA3] << endl;
	//cout << "Attribute :  boolState[already_required_OF_RC_CB_LHA3] | Value : " << boolState[already_required_OF_RC_CB_LHA3] << endl;
	//cout << "Attribute :  boolState[required_OF_RC_CB_LHA3_] | Value : " << boolState[required_OF_RC_CB_LHA3_] << endl;
	//cout << "Attribute :  boolState[already_S_OF_RC_CB_LHA3_] | Value : " << boolState[already_S_OF_RC_CB_LHA3_] << endl;
	//cout << "Attribute :  boolState[S_OF_RC_CB_LHA3_] | Value : " << boolState[S_OF_RC_CB_LHA3_] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_RC_CB_LHA3_] | Value : " << boolState[relevant_evt_OF_RC_CB_LHA3_] << endl;
	//cout << "Attribute :  boolState[required_OF_RC_CB_LHB2] | Value : " << boolState[required_OF_RC_CB_LHB2] << endl;
	//cout << "Attribute :  boolState[already_S_OF_RC_CB_LHB2] | Value : " << boolState[already_S_OF_RC_CB_LHB2] << endl;
	//cout << "Attribute :  boolState[S_OF_RC_CB_LHB2] | Value : " << boolState[S_OF_RC_CB_LHB2] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_RC_CB_LHB2] | Value : " << boolState[relevant_evt_OF_RC_CB_LHB2] << endl;
	//cout << "Attribute :  boolState[failI_OF_RC_CB_LHB2] | Value : " << boolState[failI_OF_RC_CB_LHB2] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_RC_CB_LHB2] | Value : " << boolState[to_be_fired_OF_RC_CB_LHB2] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_RC_CB_LHB2] | Value : " << boolState[already_standby_OF_RC_CB_LHB2] << endl;
	//cout << "Attribute :  boolState[already_required_OF_RC_CB_LHB2] | Value : " << boolState[already_required_OF_RC_CB_LHB2] << endl;
	//cout << "Attribute :  boolState[required_OF_RC_CB_LHB2_] | Value : " << boolState[required_OF_RC_CB_LHB2_] << endl;
	//cout << "Attribute :  boolState[already_S_OF_RC_CB_LHB2_] | Value : " << boolState[already_S_OF_RC_CB_LHB2_] << endl;
	//cout << "Attribute :  boolState[S_OF_RC_CB_LHB2_] | Value : " << boolState[S_OF_RC_CB_LHB2_] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_RC_CB_LHB2_] | Value : " << boolState[relevant_evt_OF_RC_CB_LHB2_] << endl;
	//cout << "Attribute :  boolState[required_OF_RDA1] | Value : " << boolState[required_OF_RDA1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_RDA1] | Value : " << boolState[already_S_OF_RDA1] << endl;
	//cout << "Attribute :  boolState[S_OF_RDA1] | Value : " << boolState[S_OF_RDA1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_RDA1] | Value : " << boolState[relevant_evt_OF_RDA1] << endl;
	//cout << "Attribute :  boolState[failF_OF_RDA1] | Value : " << boolState[failF_OF_RDA1] << endl;
	//cout << "Attribute :  boolState[required_OF_RDA2] | Value : " << boolState[required_OF_RDA2] << endl;
	//cout << "Attribute :  boolState[already_S_OF_RDA2] | Value : " << boolState[already_S_OF_RDA2] << endl;
	//cout << "Attribute :  boolState[S_OF_RDA2] | Value : " << boolState[S_OF_RDA2] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_RDA2] | Value : " << boolState[relevant_evt_OF_RDA2] << endl;
	//cout << "Attribute :  boolState[failF_OF_RDA2] | Value : " << boolState[failF_OF_RDA2] << endl;
	//cout << "Attribute :  boolState[required_OF_RDB1] | Value : " << boolState[required_OF_RDB1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_RDB1] | Value : " << boolState[already_S_OF_RDB1] << endl;
	//cout << "Attribute :  boolState[S_OF_RDB1] | Value : " << boolState[S_OF_RDB1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_RDB1] | Value : " << boolState[relevant_evt_OF_RDB1] << endl;
	//cout << "Attribute :  boolState[failF_OF_RDB1] | Value : " << boolState[failF_OF_RDB1] << endl;
	//cout << "Attribute :  boolState[required_OF_RDB2] | Value : " << boolState[required_OF_RDB2] << endl;
	//cout << "Attribute :  boolState[already_S_OF_RDB2] | Value : " << boolState[already_S_OF_RDB2] << endl;
	//cout << "Attribute :  boolState[S_OF_RDB2] | Value : " << boolState[S_OF_RDB2] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_RDB2] | Value : " << boolState[relevant_evt_OF_RDB2] << endl;
	//cout << "Attribute :  boolState[failF_OF_RDB2] | Value : " << boolState[failF_OF_RDB2] << endl;
	//cout << "Attribute :  boolState[required_OF_RO_CB_LHA1] | Value : " << boolState[required_OF_RO_CB_LHA1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_RO_CB_LHA1] | Value : " << boolState[already_S_OF_RO_CB_LHA1] << endl;
	//cout << "Attribute :  boolState[S_OF_RO_CB_LHA1] | Value : " << boolState[S_OF_RO_CB_LHA1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_RO_CB_LHA1] | Value : " << boolState[relevant_evt_OF_RO_CB_LHA1] << endl;
	//cout << "Attribute :  boolState[failI_OF_RO_CB_LHA1] | Value : " << boolState[failI_OF_RO_CB_LHA1] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_RO_CB_LHA1] | Value : " << boolState[to_be_fired_OF_RO_CB_LHA1] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_RO_CB_LHA1] | Value : " << boolState[already_standby_OF_RO_CB_LHA1] << endl;
	//cout << "Attribute :  boolState[already_required_OF_RO_CB_LHA1] | Value : " << boolState[already_required_OF_RO_CB_LHA1] << endl;
	//cout << "Attribute :  boolState[required_OF_RO_CB_LHA1_] | Value : " << boolState[required_OF_RO_CB_LHA1_] << endl;
	//cout << "Attribute :  boolState[already_S_OF_RO_CB_LHA1_] | Value : " << boolState[already_S_OF_RO_CB_LHA1_] << endl;
	//cout << "Attribute :  boolState[S_OF_RO_CB_LHA1_] | Value : " << boolState[S_OF_RO_CB_LHA1_] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_RO_CB_LHA1_] | Value : " << boolState[relevant_evt_OF_RO_CB_LHA1_] << endl;
	//cout << "Attribute :  boolState[required_OF_RO_CB_LHA2] | Value : " << boolState[required_OF_RO_CB_LHA2] << endl;
	//cout << "Attribute :  boolState[already_S_OF_RO_CB_LHA2] | Value : " << boolState[already_S_OF_RO_CB_LHA2] << endl;
	//cout << "Attribute :  boolState[S_OF_RO_CB_LHA2] | Value : " << boolState[S_OF_RO_CB_LHA2] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_RO_CB_LHA2] | Value : " << boolState[relevant_evt_OF_RO_CB_LHA2] << endl;
	//cout << "Attribute :  boolState[failI_OF_RO_CB_LHA2] | Value : " << boolState[failI_OF_RO_CB_LHA2] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_RO_CB_LHA2] | Value : " << boolState[to_be_fired_OF_RO_CB_LHA2] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_RO_CB_LHA2] | Value : " << boolState[already_standby_OF_RO_CB_LHA2] << endl;
	//cout << "Attribute :  boolState[already_required_OF_RO_CB_LHA2] | Value : " << boolState[already_required_OF_RO_CB_LHA2] << endl;
	//cout << "Attribute :  boolState[required_OF_RO_CB_LHA2_] | Value : " << boolState[required_OF_RO_CB_LHA2_] << endl;
	//cout << "Attribute :  boolState[already_S_OF_RO_CB_LHA2_] | Value : " << boolState[already_S_OF_RO_CB_LHA2_] << endl;
	//cout << "Attribute :  boolState[S_OF_RO_CB_LHA2_] | Value : " << boolState[S_OF_RO_CB_LHA2_] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_RO_CB_LHA2_] | Value : " << boolState[relevant_evt_OF_RO_CB_LHA2_] << endl;
	//cout << "Attribute :  boolState[required_OF_RO_CB_LHB1] | Value : " << boolState[required_OF_RO_CB_LHB1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_RO_CB_LHB1] | Value : " << boolState[already_S_OF_RO_CB_LHB1] << endl;
	//cout << "Attribute :  boolState[S_OF_RO_CB_LHB1] | Value : " << boolState[S_OF_RO_CB_LHB1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_RO_CB_LHB1] | Value : " << boolState[relevant_evt_OF_RO_CB_LHB1] << endl;
	//cout << "Attribute :  boolState[failI_OF_RO_CB_LHB1] | Value : " << boolState[failI_OF_RO_CB_LHB1] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_RO_CB_LHB1] | Value : " << boolState[to_be_fired_OF_RO_CB_LHB1] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_RO_CB_LHB1] | Value : " << boolState[already_standby_OF_RO_CB_LHB1] << endl;
	//cout << "Attribute :  boolState[already_required_OF_RO_CB_LHB1] | Value : " << boolState[already_required_OF_RO_CB_LHB1] << endl;
	//cout << "Attribute :  boolState[required_OF_RO_CB_LHB1_] | Value : " << boolState[required_OF_RO_CB_LHB1_] << endl;
	//cout << "Attribute :  boolState[already_S_OF_RO_CB_LHB1_] | Value : " << boolState[already_S_OF_RO_CB_LHB1_] << endl;
	//cout << "Attribute :  boolState[S_OF_RO_CB_LHB1_] | Value : " << boolState[S_OF_RO_CB_LHB1_] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_RO_CB_LHB1_] | Value : " << boolState[relevant_evt_OF_RO_CB_LHB1_] << endl;
	//cout << "Attribute :  boolState[required_OF_SH_CB_GEV] | Value : " << boolState[required_OF_SH_CB_GEV] << endl;
	//cout << "Attribute :  boolState[already_S_OF_SH_CB_GEV] | Value : " << boolState[already_S_OF_SH_CB_GEV] << endl;
	//cout << "Attribute :  boolState[S_OF_SH_CB_GEV] | Value : " << boolState[S_OF_SH_CB_GEV] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_SH_CB_GEV] | Value : " << boolState[relevant_evt_OF_SH_CB_GEV] << endl;
	//cout << "Attribute :  boolState[failF_OF_SH_CB_GEV] | Value : " << boolState[failF_OF_SH_CB_GEV] << endl;
	//cout << "Attribute :  boolState[required_OF_SH_CB_LBA1] | Value : " << boolState[required_OF_SH_CB_LBA1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_SH_CB_LBA1] | Value : " << boolState[already_S_OF_SH_CB_LBA1] << endl;
	//cout << "Attribute :  boolState[S_OF_SH_CB_LBA1] | Value : " << boolState[S_OF_SH_CB_LBA1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_SH_CB_LBA1] | Value : " << boolState[relevant_evt_OF_SH_CB_LBA1] << endl;
	//cout << "Attribute :  boolState[failF_OF_SH_CB_LBA1] | Value : " << boolState[failF_OF_SH_CB_LBA1] << endl;
	//cout << "Attribute :  boolState[required_OF_SH_CB_LBA2] | Value : " << boolState[required_OF_SH_CB_LBA2] << endl;
	//cout << "Attribute :  boolState[already_S_OF_SH_CB_LBA2] | Value : " << boolState[already_S_OF_SH_CB_LBA2] << endl;
	//cout << "Attribute :  boolState[S_OF_SH_CB_LBA2] | Value : " << boolState[S_OF_SH_CB_LBA2] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_SH_CB_LBA2] | Value : " << boolState[relevant_evt_OF_SH_CB_LBA2] << endl;
	//cout << "Attribute :  boolState[failF_OF_SH_CB_LBA2] | Value : " << boolState[failF_OF_SH_CB_LBA2] << endl;
	//cout << "Attribute :  boolState[required_OF_SH_CB_LBB1] | Value : " << boolState[required_OF_SH_CB_LBB1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_SH_CB_LBB1] | Value : " << boolState[already_S_OF_SH_CB_LBB1] << endl;
	//cout << "Attribute :  boolState[S_OF_SH_CB_LBB1] | Value : " << boolState[S_OF_SH_CB_LBB1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_SH_CB_LBB1] | Value : " << boolState[relevant_evt_OF_SH_CB_LBB1] << endl;
	//cout << "Attribute :  boolState[failF_OF_SH_CB_LBB1] | Value : " << boolState[failF_OF_SH_CB_LBB1] << endl;
	//cout << "Attribute :  boolState[required_OF_SH_CB_LBB2] | Value : " << boolState[required_OF_SH_CB_LBB2] << endl;
	//cout << "Attribute :  boolState[already_S_OF_SH_CB_LBB2] | Value : " << boolState[already_S_OF_SH_CB_LBB2] << endl;
	//cout << "Attribute :  boolState[S_OF_SH_CB_LBB2] | Value : " << boolState[S_OF_SH_CB_LBB2] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_SH_CB_LBB2] | Value : " << boolState[relevant_evt_OF_SH_CB_LBB2] << endl;
	//cout << "Attribute :  boolState[failF_OF_SH_CB_LBB2] | Value : " << boolState[failF_OF_SH_CB_LBB2] << endl;
	//cout << "Attribute :  boolState[required_OF_SH_CB_LGA] | Value : " << boolState[required_OF_SH_CB_LGA] << endl;
	//cout << "Attribute :  boolState[already_S_OF_SH_CB_LGA] | Value : " << boolState[already_S_OF_SH_CB_LGA] << endl;
	//cout << "Attribute :  boolState[S_OF_SH_CB_LGA] | Value : " << boolState[S_OF_SH_CB_LGA] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_SH_CB_LGA] | Value : " << boolState[relevant_evt_OF_SH_CB_LGA] << endl;
	//cout << "Attribute :  boolState[failF_OF_SH_CB_LGA] | Value : " << boolState[failF_OF_SH_CB_LGA] << endl;
	//cout << "Attribute :  boolState[required_OF_SH_CB_LGB] | Value : " << boolState[required_OF_SH_CB_LGB] << endl;
	//cout << "Attribute :  boolState[already_S_OF_SH_CB_LGB] | Value : " << boolState[already_S_OF_SH_CB_LGB] << endl;
	//cout << "Attribute :  boolState[S_OF_SH_CB_LGB] | Value : " << boolState[S_OF_SH_CB_LGB] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_SH_CB_LGB] | Value : " << boolState[relevant_evt_OF_SH_CB_LGB] << endl;
	//cout << "Attribute :  boolState[failF_OF_SH_CB_LGB] | Value : " << boolState[failF_OF_SH_CB_LGB] << endl;
	//cout << "Attribute :  boolState[required_OF_SH_CB_LGD1] | Value : " << boolState[required_OF_SH_CB_LGD1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_SH_CB_LGD1] | Value : " << boolState[already_S_OF_SH_CB_LGD1] << endl;
	//cout << "Attribute :  boolState[S_OF_SH_CB_LGD1] | Value : " << boolState[S_OF_SH_CB_LGD1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_SH_CB_LGD1] | Value : " << boolState[relevant_evt_OF_SH_CB_LGD1] << endl;
	//cout << "Attribute :  boolState[failF_OF_SH_CB_LGD1] | Value : " << boolState[failF_OF_SH_CB_LGD1] << endl;
	//cout << "Attribute :  boolState[required_OF_SH_CB_LGD2] | Value : " << boolState[required_OF_SH_CB_LGD2] << endl;
	//cout << "Attribute :  boolState[already_S_OF_SH_CB_LGD2] | Value : " << boolState[already_S_OF_SH_CB_LGD2] << endl;
	//cout << "Attribute :  boolState[S_OF_SH_CB_LGD2] | Value : " << boolState[S_OF_SH_CB_LGD2] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_SH_CB_LGD2] | Value : " << boolState[relevant_evt_OF_SH_CB_LGD2] << endl;
	//cout << "Attribute :  boolState[failF_OF_SH_CB_LGD2] | Value : " << boolState[failF_OF_SH_CB_LGD2] << endl;
	//cout << "Attribute :  boolState[required_OF_SH_CB_LGE1] | Value : " << boolState[required_OF_SH_CB_LGE1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_SH_CB_LGE1] | Value : " << boolState[already_S_OF_SH_CB_LGE1] << endl;
	//cout << "Attribute :  boolState[S_OF_SH_CB_LGE1] | Value : " << boolState[S_OF_SH_CB_LGE1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_SH_CB_LGE1] | Value : " << boolState[relevant_evt_OF_SH_CB_LGE1] << endl;
	//cout << "Attribute :  boolState[failF_OF_SH_CB_LGE1] | Value : " << boolState[failF_OF_SH_CB_LGE1] << endl;
	//cout << "Attribute :  boolState[required_OF_SH_CB_LGF1] | Value : " << boolState[required_OF_SH_CB_LGF1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_SH_CB_LGF1] | Value : " << boolState[already_S_OF_SH_CB_LGF1] << endl;
	//cout << "Attribute :  boolState[S_OF_SH_CB_LGF1] | Value : " << boolState[S_OF_SH_CB_LGF1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_SH_CB_LGF1] | Value : " << boolState[relevant_evt_OF_SH_CB_LGF1] << endl;
	//cout << "Attribute :  boolState[failF_OF_SH_CB_LGF1] | Value : " << boolState[failF_OF_SH_CB_LGF1] << endl;
	//cout << "Attribute :  boolState[required_OF_SH_CB_LGF2] | Value : " << boolState[required_OF_SH_CB_LGF2] << endl;
	//cout << "Attribute :  boolState[already_S_OF_SH_CB_LGF2] | Value : " << boolState[already_S_OF_SH_CB_LGF2] << endl;
	//cout << "Attribute :  boolState[S_OF_SH_CB_LGF2] | Value : " << boolState[S_OF_SH_CB_LGF2] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_SH_CB_LGF2] | Value : " << boolState[relevant_evt_OF_SH_CB_LGF2] << endl;
	//cout << "Attribute :  boolState[failF_OF_SH_CB_LGF2] | Value : " << boolState[failF_OF_SH_CB_LGF2] << endl;
	//cout << "Attribute :  boolState[required_OF_SH_CB_LHA1] | Value : " << boolState[required_OF_SH_CB_LHA1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_SH_CB_LHA1] | Value : " << boolState[already_S_OF_SH_CB_LHA1] << endl;
	//cout << "Attribute :  boolState[S_OF_SH_CB_LHA1] | Value : " << boolState[S_OF_SH_CB_LHA1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_SH_CB_LHA1] | Value : " << boolState[relevant_evt_OF_SH_CB_LHA1] << endl;
	//cout << "Attribute :  boolState[failF_OF_SH_CB_LHA1] | Value : " << boolState[failF_OF_SH_CB_LHA1] << endl;
	//cout << "Attribute :  boolState[required_OF_SH_CB_LHA2] | Value : " << boolState[required_OF_SH_CB_LHA2] << endl;
	//cout << "Attribute :  boolState[already_S_OF_SH_CB_LHA2] | Value : " << boolState[already_S_OF_SH_CB_LHA2] << endl;
	//cout << "Attribute :  boolState[S_OF_SH_CB_LHA2] | Value : " << boolState[S_OF_SH_CB_LHA2] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_SH_CB_LHA2] | Value : " << boolState[relevant_evt_OF_SH_CB_LHA2] << endl;
	//cout << "Attribute :  boolState[failF_OF_SH_CB_LHA2] | Value : " << boolState[failF_OF_SH_CB_LHA2] << endl;
	//cout << "Attribute :  boolState[required_OF_SH_CB_LHA3] | Value : " << boolState[required_OF_SH_CB_LHA3] << endl;
	//cout << "Attribute :  boolState[already_S_OF_SH_CB_LHA3] | Value : " << boolState[already_S_OF_SH_CB_LHA3] << endl;
	//cout << "Attribute :  boolState[S_OF_SH_CB_LHA3] | Value : " << boolState[S_OF_SH_CB_LHA3] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_SH_CB_LHA3] | Value : " << boolState[relevant_evt_OF_SH_CB_LHA3] << endl;
	//cout << "Attribute :  boolState[failF_OF_SH_CB_LHA3] | Value : " << boolState[failF_OF_SH_CB_LHA3] << endl;
	//cout << "Attribute :  boolState[required_OF_SH_CB_LHB1] | Value : " << boolState[required_OF_SH_CB_LHB1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_SH_CB_LHB1] | Value : " << boolState[already_S_OF_SH_CB_LHB1] << endl;
	//cout << "Attribute :  boolState[S_OF_SH_CB_LHB1] | Value : " << boolState[S_OF_SH_CB_LHB1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_SH_CB_LHB1] | Value : " << boolState[relevant_evt_OF_SH_CB_LHB1] << endl;
	//cout << "Attribute :  boolState[failF_OF_SH_CB_LHB1] | Value : " << boolState[failF_OF_SH_CB_LHB1] << endl;
	//cout << "Attribute :  boolState[required_OF_SH_CB_LHB2] | Value : " << boolState[required_OF_SH_CB_LHB2] << endl;
	//cout << "Attribute :  boolState[already_S_OF_SH_CB_LHB2] | Value : " << boolState[already_S_OF_SH_CB_LHB2] << endl;
	//cout << "Attribute :  boolState[S_OF_SH_CB_LHB2] | Value : " << boolState[S_OF_SH_CB_LHB2] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_SH_CB_LHB2] | Value : " << boolState[relevant_evt_OF_SH_CB_LHB2] << endl;
	//cout << "Attribute :  boolState[failF_OF_SH_CB_LHB2] | Value : " << boolState[failF_OF_SH_CB_LHB2] << endl;
	//cout << "Attribute :  boolState[required_OF_SH_CB_RDA1] | Value : " << boolState[required_OF_SH_CB_RDA1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_SH_CB_RDA1] | Value : " << boolState[already_S_OF_SH_CB_RDA1] << endl;
	//cout << "Attribute :  boolState[S_OF_SH_CB_RDA1] | Value : " << boolState[S_OF_SH_CB_RDA1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_SH_CB_RDA1] | Value : " << boolState[relevant_evt_OF_SH_CB_RDA1] << endl;
	//cout << "Attribute :  boolState[failF_OF_SH_CB_RDA1] | Value : " << boolState[failF_OF_SH_CB_RDA1] << endl;
	//cout << "Attribute :  boolState[required_OF_SH_CB_RDA2] | Value : " << boolState[required_OF_SH_CB_RDA2] << endl;
	//cout << "Attribute :  boolState[already_S_OF_SH_CB_RDA2] | Value : " << boolState[already_S_OF_SH_CB_RDA2] << endl;
	//cout << "Attribute :  boolState[S_OF_SH_CB_RDA2] | Value : " << boolState[S_OF_SH_CB_RDA2] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_SH_CB_RDA2] | Value : " << boolState[relevant_evt_OF_SH_CB_RDA2] << endl;
	//cout << "Attribute :  boolState[failF_OF_SH_CB_RDA2] | Value : " << boolState[failF_OF_SH_CB_RDA2] << endl;
	//cout << "Attribute :  boolState[required_OF_SH_CB_RDB1] | Value : " << boolState[required_OF_SH_CB_RDB1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_SH_CB_RDB1] | Value : " << boolState[already_S_OF_SH_CB_RDB1] << endl;
	//cout << "Attribute :  boolState[S_OF_SH_CB_RDB1] | Value : " << boolState[S_OF_SH_CB_RDB1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_SH_CB_RDB1] | Value : " << boolState[relevant_evt_OF_SH_CB_RDB1] << endl;
	//cout << "Attribute :  boolState[failF_OF_SH_CB_RDB1] | Value : " << boolState[failF_OF_SH_CB_RDB1] << endl;
	//cout << "Attribute :  boolState[required_OF_SH_CB_RDB2] | Value : " << boolState[required_OF_SH_CB_RDB2] << endl;
	//cout << "Attribute :  boolState[already_S_OF_SH_CB_RDB2] | Value : " << boolState[already_S_OF_SH_CB_RDB2] << endl;
	//cout << "Attribute :  boolState[S_OF_SH_CB_RDB2] | Value : " << boolState[S_OF_SH_CB_RDB2] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_SH_CB_RDB2] | Value : " << boolState[relevant_evt_OF_SH_CB_RDB2] << endl;
	//cout << "Attribute :  boolState[failF_OF_SH_CB_RDB2] | Value : " << boolState[failF_OF_SH_CB_RDB2] << endl;
	//cout << "Attribute :  boolState[required_OF_SH_CB_TUA1] | Value : " << boolState[required_OF_SH_CB_TUA1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_SH_CB_TUA1] | Value : " << boolState[already_S_OF_SH_CB_TUA1] << endl;
	//cout << "Attribute :  boolState[S_OF_SH_CB_TUA1] | Value : " << boolState[S_OF_SH_CB_TUA1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_SH_CB_TUA1] | Value : " << boolState[relevant_evt_OF_SH_CB_TUA1] << endl;
	//cout << "Attribute :  boolState[failF_OF_SH_CB_TUA1] | Value : " << boolState[failF_OF_SH_CB_TUA1] << endl;
	//cout << "Attribute :  boolState[required_OF_SH_CB_TUA2] | Value : " << boolState[required_OF_SH_CB_TUA2] << endl;
	//cout << "Attribute :  boolState[already_S_OF_SH_CB_TUA2] | Value : " << boolState[already_S_OF_SH_CB_TUA2] << endl;
	//cout << "Attribute :  boolState[S_OF_SH_CB_TUA2] | Value : " << boolState[S_OF_SH_CB_TUA2] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_SH_CB_TUA2] | Value : " << boolState[relevant_evt_OF_SH_CB_TUA2] << endl;
	//cout << "Attribute :  boolState[failF_OF_SH_CB_TUA2] | Value : " << boolState[failF_OF_SH_CB_TUA2] << endl;
	//cout << "Attribute :  boolState[required_OF_SH_CB_TUB1] | Value : " << boolState[required_OF_SH_CB_TUB1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_SH_CB_TUB1] | Value : " << boolState[already_S_OF_SH_CB_TUB1] << endl;
	//cout << "Attribute :  boolState[S_OF_SH_CB_TUB1] | Value : " << boolState[S_OF_SH_CB_TUB1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_SH_CB_TUB1] | Value : " << boolState[relevant_evt_OF_SH_CB_TUB1] << endl;
	//cout << "Attribute :  boolState[failF_OF_SH_CB_TUB1] | Value : " << boolState[failF_OF_SH_CB_TUB1] << endl;
	//cout << "Attribute :  boolState[required_OF_SH_CB_TUB2] | Value : " << boolState[required_OF_SH_CB_TUB2] << endl;
	//cout << "Attribute :  boolState[already_S_OF_SH_CB_TUB2] | Value : " << boolState[already_S_OF_SH_CB_TUB2] << endl;
	//cout << "Attribute :  boolState[S_OF_SH_CB_TUB2] | Value : " << boolState[S_OF_SH_CB_TUB2] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_SH_CB_TUB2] | Value : " << boolState[relevant_evt_OF_SH_CB_TUB2] << endl;
	//cout << "Attribute :  boolState[failF_OF_SH_CB_TUB2] | Value : " << boolState[failF_OF_SH_CB_TUB2] << endl;
	//cout << "Attribute :  boolState[required_OF_SH_CB_line_GEV] | Value : " << boolState[required_OF_SH_CB_line_GEV] << endl;
	//cout << "Attribute :  boolState[already_S_OF_SH_CB_line_GEV] | Value : " << boolState[already_S_OF_SH_CB_line_GEV] << endl;
	//cout << "Attribute :  boolState[S_OF_SH_CB_line_GEV] | Value : " << boolState[S_OF_SH_CB_line_GEV] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_SH_CB_line_GEV] | Value : " << boolState[relevant_evt_OF_SH_CB_line_GEV] << endl;
	//cout << "Attribute :  boolState[failF_OF_SH_CB_line_GEV] | Value : " << boolState[failF_OF_SH_CB_line_GEV] << endl;
	//cout << "Attribute :  boolState[required_OF_SH_CB_line_LGR] | Value : " << boolState[required_OF_SH_CB_line_LGR] << endl;
	//cout << "Attribute :  boolState[already_S_OF_SH_CB_line_LGR] | Value : " << boolState[already_S_OF_SH_CB_line_LGR] << endl;
	//cout << "Attribute :  boolState[S_OF_SH_CB_line_LGR] | Value : " << boolState[S_OF_SH_CB_line_LGR] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_SH_CB_line_LGR] | Value : " << boolState[relevant_evt_OF_SH_CB_line_LGR] << endl;
	//cout << "Attribute :  boolState[failF_OF_SH_CB_line_LGR] | Value : " << boolState[failF_OF_SH_CB_line_LGR] << endl;
	//cout << "Attribute :  boolState[required_OF_SH_GEV_or_LGR] | Value : " << boolState[required_OF_SH_GEV_or_LGR] << endl;
	//cout << "Attribute :  boolState[already_S_OF_SH_GEV_or_LGR] | Value : " << boolState[already_S_OF_SH_GEV_or_LGR] << endl;
	//cout << "Attribute :  boolState[S_OF_SH_GEV_or_LGR] | Value : " << boolState[S_OF_SH_GEV_or_LGR] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_SH_GEV_or_LGR] | Value : " << boolState[relevant_evt_OF_SH_GEV_or_LGR] << endl;
	//cout << "Attribute :  boolState[required_OF_SUBSTATION] | Value : " << boolState[required_OF_SUBSTATION] << endl;
	//cout << "Attribute :  boolState[already_S_OF_SUBSTATION] | Value : " << boolState[already_S_OF_SUBSTATION] << endl;
	//cout << "Attribute :  boolState[S_OF_SUBSTATION] | Value : " << boolState[S_OF_SUBSTATION] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_SUBSTATION] | Value : " << boolState[relevant_evt_OF_SUBSTATION] << endl;
	//cout << "Attribute :  boolState[failF_OF_SUBSTATION] | Value : " << boolState[failF_OF_SUBSTATION] << endl;
	//cout << "Attribute :  boolState[required_OF_TA] | Value : " << boolState[required_OF_TA] << endl;
	//cout << "Attribute :  boolState[already_S_OF_TA] | Value : " << boolState[already_S_OF_TA] << endl;
	//cout << "Attribute :  boolState[S_OF_TA] | Value : " << boolState[S_OF_TA] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_TA] | Value : " << boolState[relevant_evt_OF_TA] << endl;
	//cout << "Attribute :  boolState[failF_OF_TA] | Value : " << boolState[failF_OF_TA] << endl;
	//cout << "Attribute :  boolState[required_OF_TAC] | Value : " << boolState[required_OF_TAC] << endl;
	//cout << "Attribute :  boolState[already_S_OF_TAC] | Value : " << boolState[already_S_OF_TAC] << endl;
	//cout << "Attribute :  boolState[S_OF_TAC] | Value : " << boolState[S_OF_TAC] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_TAC] | Value : " << boolState[relevant_evt_OF_TAC] << endl;
	//cout << "Attribute :  boolState[failF_OF_TAC] | Value : " << boolState[failF_OF_TAC] << endl;
	//cout << "Attribute :  boolState[required_OF_TA_lost] | Value : " << boolState[required_OF_TA_lost] << endl;
	//cout << "Attribute :  boolState[already_S_OF_TA_lost] | Value : " << boolState[already_S_OF_TA_lost] << endl;
	//cout << "Attribute :  boolState[S_OF_TA_lost] | Value : " << boolState[S_OF_TA_lost] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_TA_lost] | Value : " << boolState[relevant_evt_OF_TA_lost] << endl;
	//cout << "Attribute :  boolState[required_OF_TP] | Value : " << boolState[required_OF_TP] << endl;
	//cout << "Attribute :  boolState[already_S_OF_TP] | Value : " << boolState[already_S_OF_TP] << endl;
	//cout << "Attribute :  boolState[S_OF_TP] | Value : " << boolState[S_OF_TP] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_TP] | Value : " << boolState[relevant_evt_OF_TP] << endl;
	//cout << "Attribute :  boolState[failF_OF_TP] | Value : " << boolState[failF_OF_TP] << endl;
	//cout << "Attribute :  boolState[required_OF_TS] | Value : " << boolState[required_OF_TS] << endl;
	//cout << "Attribute :  boolState[already_S_OF_TS] | Value : " << boolState[already_S_OF_TS] << endl;
	//cout << "Attribute :  boolState[S_OF_TS] | Value : " << boolState[S_OF_TS] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_TS] | Value : " << boolState[relevant_evt_OF_TS] << endl;
	//cout << "Attribute :  boolState[failF_OF_TS] | Value : " << boolState[failF_OF_TS] << endl;
	//cout << "Attribute :  boolState[required_OF_TS_lost] | Value : " << boolState[required_OF_TS_lost] << endl;
	//cout << "Attribute :  boolState[already_S_OF_TS_lost] | Value : " << boolState[already_S_OF_TS_lost] << endl;
	//cout << "Attribute :  boolState[S_OF_TS_lost] | Value : " << boolState[S_OF_TS_lost] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_TS_lost] | Value : " << boolState[relevant_evt_OF_TS_lost] << endl;
	//cout << "Attribute :  boolState[required_OF_TS_not_fed] | Value : " << boolState[required_OF_TS_not_fed] << endl;
	//cout << "Attribute :  boolState[already_S_OF_TS_not_fed] | Value : " << boolState[already_S_OF_TS_not_fed] << endl;
	//cout << "Attribute :  boolState[S_OF_TS_not_fed] | Value : " << boolState[S_OF_TS_not_fed] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_TS_not_fed] | Value : " << boolState[relevant_evt_OF_TS_not_fed] << endl;
	//cout << "Attribute :  boolState[required_OF_TUA1] | Value : " << boolState[required_OF_TUA1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_TUA1] | Value : " << boolState[already_S_OF_TUA1] << endl;
	//cout << "Attribute :  boolState[S_OF_TUA1] | Value : " << boolState[S_OF_TUA1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_TUA1] | Value : " << boolState[relevant_evt_OF_TUA1] << endl;
	//cout << "Attribute :  boolState[failF_OF_TUA1] | Value : " << boolState[failF_OF_TUA1] << endl;
	//cout << "Attribute :  boolState[required_OF_TUA2] | Value : " << boolState[required_OF_TUA2] << endl;
	//cout << "Attribute :  boolState[already_S_OF_TUA2] | Value : " << boolState[already_S_OF_TUA2] << endl;
	//cout << "Attribute :  boolState[S_OF_TUA2] | Value : " << boolState[S_OF_TUA2] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_TUA2] | Value : " << boolState[relevant_evt_OF_TUA2] << endl;
	//cout << "Attribute :  boolState[failF_OF_TUA2] | Value : " << boolState[failF_OF_TUA2] << endl;
	//cout << "Attribute :  boolState[required_OF_TUB1] | Value : " << boolState[required_OF_TUB1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_TUB1] | Value : " << boolState[already_S_OF_TUB1] << endl;
	//cout << "Attribute :  boolState[S_OF_TUB1] | Value : " << boolState[S_OF_TUB1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_TUB1] | Value : " << boolState[relevant_evt_OF_TUB1] << endl;
	//cout << "Attribute :  boolState[failF_OF_TUB1] | Value : " << boolState[failF_OF_TUB1] << endl;
	//cout << "Attribute :  boolState[required_OF_TUB2] | Value : " << boolState[required_OF_TUB2] << endl;
	//cout << "Attribute :  boolState[already_S_OF_TUB2] | Value : " << boolState[already_S_OF_TUB2] << endl;
	//cout << "Attribute :  boolState[S_OF_TUB2] | Value : " << boolState[S_OF_TUB2] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_TUB2] | Value : " << boolState[relevant_evt_OF_TUB2] << endl;
	//cout << "Attribute :  boolState[failF_OF_TUB2] | Value : " << boolState[failF_OF_TUB2] << endl;
	//cout << "Attribute :  boolState[required_OF_UE_1] | Value : " << boolState[required_OF_UE_1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_UE_1] | Value : " << boolState[already_S_OF_UE_1] << endl;
	//cout << "Attribute :  boolState[S_OF_UE_1] | Value : " << boolState[S_OF_UE_1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_UE_1] | Value : " << boolState[relevant_evt_OF_UE_1] << endl;
	//cout << "Attribute :  boolState[required_OF_UNIT] | Value : " << boolState[required_OF_UNIT] << endl;
	//cout << "Attribute :  boolState[already_S_OF_UNIT] | Value : " << boolState[already_S_OF_UNIT] << endl;
	//cout << "Attribute :  boolState[S_OF_UNIT] | Value : " << boolState[S_OF_UNIT] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_UNIT] | Value : " << boolState[relevant_evt_OF_UNIT] << endl;
	//cout << "Attribute :  boolState[failF_OF_UNIT] | Value : " << boolState[failF_OF_UNIT] << endl;
	//cout << "Attribute :  boolState[required_OF_demand_CCF_DG] | Value : " << boolState[required_OF_demand_CCF_DG] << endl;
	//cout << "Attribute :  boolState[already_S_OF_demand_CCF_DG] | Value : " << boolState[already_S_OF_demand_CCF_DG] << endl;
	//cout << "Attribute :  boolState[S_OF_demand_CCF_DG] | Value : " << boolState[S_OF_demand_CCF_DG] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_demand_CCF_DG] | Value : " << boolState[relevant_evt_OF_demand_CCF_DG] << endl;
	//cout << "Attribute :  boolState[failI_OF_demand_CCF_DG] | Value : " << boolState[failI_OF_demand_CCF_DG] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_demand_CCF_DG] | Value : " << boolState[to_be_fired_OF_demand_CCF_DG] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_demand_CCF_DG] | Value : " << boolState[already_standby_OF_demand_CCF_DG] << endl;
	//cout << "Attribute :  boolState[already_required_OF_demand_CCF_DG] | Value : " << boolState[already_required_OF_demand_CCF_DG] << endl;
	//cout << "Attribute :  boolState[required_OF_demand_DGA] | Value : " << boolState[required_OF_demand_DGA] << endl;
	//cout << "Attribute :  boolState[already_S_OF_demand_DGA] | Value : " << boolState[already_S_OF_demand_DGA] << endl;
	//cout << "Attribute :  boolState[S_OF_demand_DGA] | Value : " << boolState[S_OF_demand_DGA] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_demand_DGA] | Value : " << boolState[relevant_evt_OF_demand_DGA] << endl;
	//cout << "Attribute :  boolState[failI_OF_demand_DGA] | Value : " << boolState[failI_OF_demand_DGA] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_demand_DGA] | Value : " << boolState[to_be_fired_OF_demand_DGA] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_demand_DGA] | Value : " << boolState[already_standby_OF_demand_DGA] << endl;
	//cout << "Attribute :  boolState[already_required_OF_demand_DGA] | Value : " << boolState[already_required_OF_demand_DGA] << endl;
	//cout << "Attribute :  boolState[required_OF_demand_DGB] | Value : " << boolState[required_OF_demand_DGB] << endl;
	//cout << "Attribute :  boolState[already_S_OF_demand_DGB] | Value : " << boolState[already_S_OF_demand_DGB] << endl;
	//cout << "Attribute :  boolState[S_OF_demand_DGB] | Value : " << boolState[S_OF_demand_DGB] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_demand_DGB] | Value : " << boolState[relevant_evt_OF_demand_DGB] << endl;
	//cout << "Attribute :  boolState[failI_OF_demand_DGB] | Value : " << boolState[failI_OF_demand_DGB] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_demand_DGB] | Value : " << boolState[to_be_fired_OF_demand_DGB] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_demand_DGB] | Value : " << boolState[already_standby_OF_demand_DGB] << endl;
	//cout << "Attribute :  boolState[already_required_OF_demand_DGB] | Value : " << boolState[already_required_OF_demand_DGB] << endl;
	//cout << "Attribute :  boolState[required_OF_demand_TAC] | Value : " << boolState[required_OF_demand_TAC] << endl;
	//cout << "Attribute :  boolState[already_S_OF_demand_TAC] | Value : " << boolState[already_S_OF_demand_TAC] << endl;
	//cout << "Attribute :  boolState[S_OF_demand_TAC] | Value : " << boolState[S_OF_demand_TAC] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_demand_TAC] | Value : " << boolState[relevant_evt_OF_demand_TAC] << endl;
	//cout << "Attribute :  boolState[failI_OF_demand_TAC] | Value : " << boolState[failI_OF_demand_TAC] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_demand_TAC] | Value : " << boolState[to_be_fired_OF_demand_TAC] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_demand_TAC] | Value : " << boolState[already_standby_OF_demand_TAC] << endl;
	//cout << "Attribute :  boolState[already_required_OF_demand_TAC] | Value : " << boolState[already_required_OF_demand_TAC] << endl;
	//cout << "Attribute :  boolState[required_OF_loss_of_houseload_operation] | Value : " << boolState[required_OF_loss_of_houseload_operation] << endl;
	//cout << "Attribute :  boolState[already_S_OF_loss_of_houseload_operation] | Value : " << boolState[already_S_OF_loss_of_houseload_operation] << endl;
	//cout << "Attribute :  boolState[S_OF_loss_of_houseload_operation] | Value : " << boolState[S_OF_loss_of_houseload_operation] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_loss_of_houseload_operation] | Value : " << boolState[relevant_evt_OF_loss_of_houseload_operation] << endl;
	//cout << "Attribute :  boolState[required_OF_loss_of_supply_by_DGA] | Value : " << boolState[required_OF_loss_of_supply_by_DGA] << endl;
	//cout << "Attribute :  boolState[already_S_OF_loss_of_supply_by_DGA] | Value : " << boolState[already_S_OF_loss_of_supply_by_DGA] << endl;
	//cout << "Attribute :  boolState[S_OF_loss_of_supply_by_DGA] | Value : " << boolState[S_OF_loss_of_supply_by_DGA] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_loss_of_supply_by_DGA] | Value : " << boolState[relevant_evt_OF_loss_of_supply_by_DGA] << endl;
	//cout << "Attribute :  boolState[required_OF_loss_of_supply_by_DGA_and_TAC] | Value : " << boolState[required_OF_loss_of_supply_by_DGA_and_TAC] << endl;
	//cout << "Attribute :  boolState[already_S_OF_loss_of_supply_by_DGA_and_TAC] | Value : " << boolState[already_S_OF_loss_of_supply_by_DGA_and_TAC] << endl;
	//cout << "Attribute :  boolState[S_OF_loss_of_supply_by_DGA_and_TAC] | Value : " << boolState[S_OF_loss_of_supply_by_DGA_and_TAC] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_loss_of_supply_by_DGA_and_TAC] | Value : " << boolState[relevant_evt_OF_loss_of_supply_by_DGA_and_TAC] << endl;
	//cout << "Attribute :  boolState[required_OF_loss_of_supply_by_DGB] | Value : " << boolState[required_OF_loss_of_supply_by_DGB] << endl;
	//cout << "Attribute :  boolState[already_S_OF_loss_of_supply_by_DGB] | Value : " << boolState[already_S_OF_loss_of_supply_by_DGB] << endl;
	//cout << "Attribute :  boolState[S_OF_loss_of_supply_by_DGB] | Value : " << boolState[S_OF_loss_of_supply_by_DGB] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_loss_of_supply_by_DGB] | Value : " << boolState[relevant_evt_OF_loss_of_supply_by_DGB] << endl;
	//cout << "Attribute :  boolState[required_OF_loss_of_supply_by_GEV] | Value : " << boolState[required_OF_loss_of_supply_by_GEV] << endl;
	//cout << "Attribute :  boolState[already_S_OF_loss_of_supply_by_GEV] | Value : " << boolState[already_S_OF_loss_of_supply_by_GEV] << endl;
	//cout << "Attribute :  boolState[S_OF_loss_of_supply_by_GEV] | Value : " << boolState[S_OF_loss_of_supply_by_GEV] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_loss_of_supply_by_GEV] | Value : " << boolState[relevant_evt_OF_loss_of_supply_by_GEV] << endl;
	//cout << "Attribute :  boolState[required_OF_loss_of_supply_by_LGD] | Value : " << boolState[required_OF_loss_of_supply_by_LGD] << endl;
	//cout << "Attribute :  boolState[already_S_OF_loss_of_supply_by_LGD] | Value : " << boolState[already_S_OF_loss_of_supply_by_LGD] << endl;
	//cout << "Attribute :  boolState[S_OF_loss_of_supply_by_LGD] | Value : " << boolState[S_OF_loss_of_supply_by_LGD] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_loss_of_supply_by_LGD] | Value : " << boolState[relevant_evt_OF_loss_of_supply_by_LGD] << endl;
	//cout << "Attribute :  boolState[required_OF_loss_of_supply_by_LGF] | Value : " << boolState[required_OF_loss_of_supply_by_LGF] << endl;
	//cout << "Attribute :  boolState[already_S_OF_loss_of_supply_by_LGF] | Value : " << boolState[already_S_OF_loss_of_supply_by_LGF] << endl;
	//cout << "Attribute :  boolState[S_OF_loss_of_supply_by_LGF] | Value : " << boolState[S_OF_loss_of_supply_by_LGF] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_loss_of_supply_by_LGF] | Value : " << boolState[relevant_evt_OF_loss_of_supply_by_LGF] << endl;
	//cout << "Attribute :  boolState[required_OF_loss_of_supply_by_LGR] | Value : " << boolState[required_OF_loss_of_supply_by_LGR] << endl;
	//cout << "Attribute :  boolState[already_S_OF_loss_of_supply_by_LGR] | Value : " << boolState[already_S_OF_loss_of_supply_by_LGR] << endl;
	//cout << "Attribute :  boolState[S_OF_loss_of_supply_by_LGR] | Value : " << boolState[S_OF_loss_of_supply_by_LGR] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_loss_of_supply_by_LGR] | Value : " << boolState[relevant_evt_OF_loss_of_supply_by_LGR] << endl;
	//cout << "Attribute :  boolState[required_OF_loss_of_supply_by_TA] | Value : " << boolState[required_OF_loss_of_supply_by_TA] << endl;
	//cout << "Attribute :  boolState[already_S_OF_loss_of_supply_by_TA] | Value : " << boolState[already_S_OF_loss_of_supply_by_TA] << endl;
	//cout << "Attribute :  boolState[S_OF_loss_of_supply_by_TA] | Value : " << boolState[S_OF_loss_of_supply_by_TA] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_loss_of_supply_by_TA] | Value : " << boolState[relevant_evt_OF_loss_of_supply_by_TA] << endl;
	//cout << "Attribute :  boolState[required_OF_loss_of_supply_by_TA1] | Value : " << boolState[required_OF_loss_of_supply_by_TA1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_loss_of_supply_by_TA1] | Value : " << boolState[already_S_OF_loss_of_supply_by_TA1] << endl;
	//cout << "Attribute :  boolState[S_OF_loss_of_supply_by_TA1] | Value : " << boolState[S_OF_loss_of_supply_by_TA1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_loss_of_supply_by_TA1] | Value : " << boolState[relevant_evt_OF_loss_of_supply_by_TA1] << endl;
	//cout << "Attribute :  boolState[required_OF_loss_of_supply_by_TAC] | Value : " << boolState[required_OF_loss_of_supply_by_TAC] << endl;
	//cout << "Attribute :  boolState[already_S_OF_loss_of_supply_by_TAC] | Value : " << boolState[already_S_OF_loss_of_supply_by_TAC] << endl;
	//cout << "Attribute :  boolState[S_OF_loss_of_supply_by_TAC] | Value : " << boolState[S_OF_loss_of_supply_by_TAC] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_loss_of_supply_by_TAC] | Value : " << boolState[relevant_evt_OF_loss_of_supply_by_TAC] << endl;
	//cout << "Attribute :  boolState[required_OF_loss_of_supply_by_TS] | Value : " << boolState[required_OF_loss_of_supply_by_TS] << endl;
	//cout << "Attribute :  boolState[already_S_OF_loss_of_supply_by_TS] | Value : " << boolState[already_S_OF_loss_of_supply_by_TS] << endl;
	//cout << "Attribute :  boolState[S_OF_loss_of_supply_by_TS] | Value : " << boolState[S_OF_loss_of_supply_by_TS] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_loss_of_supply_by_TS] | Value : " << boolState[relevant_evt_OF_loss_of_supply_by_TS] << endl;
	//cout << "Attribute :  boolState[required_OF_loss_of_supply_by_TS1] | Value : " << boolState[required_OF_loss_of_supply_by_TS1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_loss_of_supply_by_TS1] | Value : " << boolState[already_S_OF_loss_of_supply_by_TS1] << endl;
	//cout << "Attribute :  boolState[S_OF_loss_of_supply_by_TS1] | Value : " << boolState[S_OF_loss_of_supply_by_TS1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_loss_of_supply_by_TS1] | Value : " << boolState[relevant_evt_OF_loss_of_supply_by_TS1] << endl;
	//cout << "Attribute :  boolState[required_OF_loss_of_supply_by_UNIT] | Value : " << boolState[required_OF_loss_of_supply_by_UNIT] << endl;
	//cout << "Attribute :  boolState[already_S_OF_loss_of_supply_by_UNIT] | Value : " << boolState[already_S_OF_loss_of_supply_by_UNIT] << endl;
	//cout << "Attribute :  boolState[S_OF_loss_of_supply_by_UNIT] | Value : " << boolState[S_OF_loss_of_supply_by_UNIT] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_loss_of_supply_by_UNIT] | Value : " << boolState[relevant_evt_OF_loss_of_supply_by_UNIT] << endl;
}

bool storm::figaro::FigaroProgram_NPPS_No_trim_No_repair::figaromodelhasinstransitions()
{
	return true;
}
void storm::figaro::FigaroProgram_NPPS_No_trim_No_repair::doReinitialisations()
{
	boolState[required_OF_AND_3] = REINITIALISATION_OF_required_OF_AND_3;
	boolState[S_OF_AND_3] = REINITIALISATION_OF_S_OF_AND_3;
	boolState[relevant_evt_OF_AND_3] = REINITIALISATION_OF_relevant_evt_OF_AND_3;
	boolState[required_OF_BATTERY_A_lost] = REINITIALISATION_OF_required_OF_BATTERY_A_lost;
	boolState[S_OF_BATTERY_A_lost] = REINITIALISATION_OF_S_OF_BATTERY_A_lost;
	boolState[relevant_evt_OF_BATTERY_A_lost] = REINITIALISATION_OF_relevant_evt_OF_BATTERY_A_lost;
	boolState[required_OF_BATTERY_B_lost] = REINITIALISATION_OF_required_OF_BATTERY_B_lost;
	boolState[S_OF_BATTERY_B_lost] = REINITIALISATION_OF_S_OF_BATTERY_B_lost;
	boolState[relevant_evt_OF_BATTERY_B_lost] = REINITIALISATION_OF_relevant_evt_OF_BATTERY_B_lost;
	boolState[required_OF_BAT_A1] = REINITIALISATION_OF_required_OF_BAT_A1;
	boolState[S_OF_BAT_A1] = REINITIALISATION_OF_S_OF_BAT_A1;
	boolState[relevant_evt_OF_BAT_A1] = REINITIALISATION_OF_relevant_evt_OF_BAT_A1;
	boolState[required_OF_BAT_A2] = REINITIALISATION_OF_required_OF_BAT_A2;
	boolState[S_OF_BAT_A2] = REINITIALISATION_OF_S_OF_BAT_A2;
	boolState[relevant_evt_OF_BAT_A2] = REINITIALISATION_OF_relevant_evt_OF_BAT_A2;
	boolState[required_OF_BAT_B1] = REINITIALISATION_OF_required_OF_BAT_B1;
	boolState[S_OF_BAT_B1] = REINITIALISATION_OF_S_OF_BAT_B1;
	boolState[relevant_evt_OF_BAT_B1] = REINITIALISATION_OF_relevant_evt_OF_BAT_B1;
	boolState[required_OF_BAT_B2] = REINITIALISATION_OF_required_OF_BAT_B2;
	boolState[S_OF_BAT_B2] = REINITIALISATION_OF_S_OF_BAT_B2;
	boolState[relevant_evt_OF_BAT_B2] = REINITIALISATION_OF_relevant_evt_OF_BAT_B2;
	boolState[required_OF_CB_LGD2_unable] = REINITIALISATION_OF_required_OF_CB_LGD2_unable;
	boolState[S_OF_CB_LGD2_unable] = REINITIALISATION_OF_S_OF_CB_LGD2_unable;
	boolState[relevant_evt_OF_CB_LGD2_unable] = REINITIALISATION_OF_relevant_evt_OF_CB_LGD2_unable;
	boolState[required_OF_CB_LGF2_unable] = REINITIALISATION_OF_required_OF_CB_LGF2_unable;
	boolState[S_OF_CB_LGF2_unable] = REINITIALISATION_OF_S_OF_CB_LGF2_unable;
	boolState[relevant_evt_OF_CB_LGF2_unable] = REINITIALISATION_OF_relevant_evt_OF_CB_LGF2_unable;
	boolState[required_OF_CB_LHA12_unable] = REINITIALISATION_OF_required_OF_CB_LHA12_unable;
	boolState[S_OF_CB_LHA12_unable] = REINITIALISATION_OF_S_OF_CB_LHA12_unable;
	boolState[relevant_evt_OF_CB_LHA12_unable] = REINITIALISATION_OF_relevant_evt_OF_CB_LHA12_unable;
	boolState[required_OF_CB_LHA3_unable] = REINITIALISATION_OF_required_OF_CB_LHA3_unable;
	boolState[S_OF_CB_LHA3_unable] = REINITIALISATION_OF_S_OF_CB_LHA3_unable;
	boolState[relevant_evt_OF_CB_LHA3_unable] = REINITIALISATION_OF_relevant_evt_OF_CB_LHA3_unable;
	boolState[required_OF_CB_LHB12_unable] = REINITIALISATION_OF_required_OF_CB_LHB12_unable;
	boolState[S_OF_CB_LHB12_unable] = REINITIALISATION_OF_S_OF_CB_LHB12_unable;
	boolState[relevant_evt_OF_CB_LHB12_unable] = REINITIALISATION_OF_relevant_evt_OF_CB_LHB12_unable;
	boolState[required_OF_CCF_DG] = REINITIALISATION_OF_required_OF_CCF_DG;
	boolState[S_OF_CCF_DG] = REINITIALISATION_OF_S_OF_CCF_DG;
	boolState[relevant_evt_OF_CCF_DG] = REINITIALISATION_OF_relevant_evt_OF_CCF_DG;
	boolState[required_OF_CCF_GEV_LGR] = REINITIALISATION_OF_required_OF_CCF_GEV_LGR;
	boolState[S_OF_CCF_GEV_LGR] = REINITIALISATION_OF_S_OF_CCF_GEV_LGR;
	boolState[relevant_evt_OF_CCF_GEV_LGR] = REINITIALISATION_OF_relevant_evt_OF_CCF_GEV_LGR;
	boolState[required_OF_DGA_long] = REINITIALISATION_OF_required_OF_DGA_long;
	boolState[S_OF_DGA_long] = REINITIALISATION_OF_S_OF_DGA_long;
	boolState[relevant_evt_OF_DGA_long] = REINITIALISATION_OF_relevant_evt_OF_DGA_long;
	boolState[required_OF_DGA_lost] = REINITIALISATION_OF_required_OF_DGA_lost;
	boolState[S_OF_DGA_lost] = REINITIALISATION_OF_S_OF_DGA_lost;
	boolState[relevant_evt_OF_DGA_lost] = REINITIALISATION_OF_relevant_evt_OF_DGA_lost;
	boolState[required_OF_DGA_short] = REINITIALISATION_OF_required_OF_DGA_short;
	boolState[S_OF_DGA_short] = REINITIALISATION_OF_S_OF_DGA_short;
	boolState[relevant_evt_OF_DGA_short] = REINITIALISATION_OF_relevant_evt_OF_DGA_short;
	boolState[required_OF_DGB_long] = REINITIALISATION_OF_required_OF_DGB_long;
	boolState[S_OF_DGB_long] = REINITIALISATION_OF_S_OF_DGB_long;
	boolState[relevant_evt_OF_DGB_long] = REINITIALISATION_OF_relevant_evt_OF_DGB_long;
	boolState[required_OF_DGB_lost] = REINITIALISATION_OF_required_OF_DGB_lost;
	boolState[S_OF_DGB_lost] = REINITIALISATION_OF_S_OF_DGB_lost;
	boolState[relevant_evt_OF_DGB_lost] = REINITIALISATION_OF_relevant_evt_OF_DGB_lost;
	boolState[required_OF_DGB_short] = REINITIALISATION_OF_required_OF_DGB_short;
	boolState[S_OF_DGB_short] = REINITIALISATION_OF_S_OF_DGB_short;
	boolState[relevant_evt_OF_DGB_short] = REINITIALISATION_OF_relevant_evt_OF_DGB_short;
	boolState[required_OF_GEV] = REINITIALISATION_OF_required_OF_GEV;
	boolState[S_OF_GEV] = REINITIALISATION_OF_S_OF_GEV;
	boolState[relevant_evt_OF_GEV] = REINITIALISATION_OF_relevant_evt_OF_GEV;
	boolState[required_OF_GRID] = REINITIALISATION_OF_required_OF_GRID;
	boolState[S_OF_GRID] = REINITIALISATION_OF_S_OF_GRID;
	boolState[relevant_evt_OF_GRID] = REINITIALISATION_OF_relevant_evt_OF_GRID;
	boolState[required_OF_InFnHouse] = REINITIALISATION_OF_required_OF_InFnHouse;
	boolState[S_OF_InFnHouse] = REINITIALISATION_OF_S_OF_InFnHouse;
	boolState[relevant_evt_OF_InFnHouse] = REINITIALISATION_OF_relevant_evt_OF_InFnHouse;
	boolState[required_OF_LBA] = REINITIALISATION_OF_required_OF_LBA;
	boolState[S_OF_LBA] = REINITIALISATION_OF_S_OF_LBA;
	boolState[relevant_evt_OF_LBA] = REINITIALISATION_OF_relevant_evt_OF_LBA;
	boolState[required_OF_LBA_lost] = REINITIALISATION_OF_required_OF_LBA_lost;
	boolState[S_OF_LBA_lost] = REINITIALISATION_OF_S_OF_LBA_lost;
	boolState[relevant_evt_OF_LBA_lost] = REINITIALISATION_OF_relevant_evt_OF_LBA_lost;
	boolState[required_OF_LBA_not_fed] = REINITIALISATION_OF_required_OF_LBA_not_fed;
	boolState[S_OF_LBA_not_fed] = REINITIALISATION_OF_S_OF_LBA_not_fed;
	boolState[relevant_evt_OF_LBA_not_fed] = REINITIALISATION_OF_relevant_evt_OF_LBA_not_fed;
	boolState[required_OF_LBAline1_lost] = REINITIALISATION_OF_required_OF_LBAline1_lost;
	boolState[S_OF_LBAline1_lost] = REINITIALISATION_OF_S_OF_LBAline1_lost;
	boolState[relevant_evt_OF_LBAline1_lost] = REINITIALISATION_OF_relevant_evt_OF_LBAline1_lost;
	boolState[required_OF_LBAline2_lost] = REINITIALISATION_OF_required_OF_LBAline2_lost;
	boolState[S_OF_LBAline2_lost] = REINITIALISATION_OF_S_OF_LBAline2_lost;
	boolState[relevant_evt_OF_LBAline2_lost] = REINITIALISATION_OF_relevant_evt_OF_LBAline2_lost;
	boolState[required_OF_LBAothers_lost] = REINITIALISATION_OF_required_OF_LBAothers_lost;
	boolState[S_OF_LBAothers_lost] = REINITIALISATION_OF_S_OF_LBAothers_lost;
	boolState[relevant_evt_OF_LBAothers_lost] = REINITIALISATION_OF_relevant_evt_OF_LBAothers_lost;
	boolState[required_OF_LBB] = REINITIALISATION_OF_required_OF_LBB;
	boolState[S_OF_LBB] = REINITIALISATION_OF_S_OF_LBB;
	boolState[relevant_evt_OF_LBB] = REINITIALISATION_OF_relevant_evt_OF_LBB;
	boolState[required_OF_LBB_lost] = REINITIALISATION_OF_required_OF_LBB_lost;
	boolState[S_OF_LBB_lost] = REINITIALISATION_OF_S_OF_LBB_lost;
	boolState[relevant_evt_OF_LBB_lost] = REINITIALISATION_OF_relevant_evt_OF_LBB_lost;
	boolState[required_OF_LBB_not_fed] = REINITIALISATION_OF_required_OF_LBB_not_fed;
	boolState[S_OF_LBB_not_fed] = REINITIALISATION_OF_S_OF_LBB_not_fed;
	boolState[relevant_evt_OF_LBB_not_fed] = REINITIALISATION_OF_relevant_evt_OF_LBB_not_fed;
	boolState[required_OF_LBBline1_lost] = REINITIALISATION_OF_required_OF_LBBline1_lost;
	boolState[S_OF_LBBline1_lost] = REINITIALISATION_OF_S_OF_LBBline1_lost;
	boolState[relevant_evt_OF_LBBline1_lost] = REINITIALISATION_OF_relevant_evt_OF_LBBline1_lost;
	boolState[required_OF_LBBline2_lost] = REINITIALISATION_OF_required_OF_LBBline2_lost;
	boolState[S_OF_LBBline2_lost] = REINITIALISATION_OF_S_OF_LBBline2_lost;
	boolState[relevant_evt_OF_LBBline2_lost] = REINITIALISATION_OF_relevant_evt_OF_LBBline2_lost;
	boolState[required_OF_LGA] = REINITIALISATION_OF_required_OF_LGA;
	boolState[S_OF_LGA] = REINITIALISATION_OF_S_OF_LGA;
	boolState[relevant_evt_OF_LGA] = REINITIALISATION_OF_relevant_evt_OF_LGA;
	boolState[required_OF_LGB] = REINITIALISATION_OF_required_OF_LGB;
	boolState[S_OF_LGB] = REINITIALISATION_OF_S_OF_LGB;
	boolState[relevant_evt_OF_LGB] = REINITIALISATION_OF_relevant_evt_OF_LGB;
	boolState[required_OF_LGD] = REINITIALISATION_OF_required_OF_LGD;
	boolState[S_OF_LGD] = REINITIALISATION_OF_S_OF_LGD;
	boolState[relevant_evt_OF_LGD] = REINITIALISATION_OF_relevant_evt_OF_LGD;
	boolState[required_OF_LGD_not_fed] = REINITIALISATION_OF_required_OF_LGD_not_fed;
	boolState[S_OF_LGD_not_fed] = REINITIALISATION_OF_S_OF_LGD_not_fed;
	boolState[relevant_evt_OF_LGD_not_fed] = REINITIALISATION_OF_relevant_evt_OF_LGD_not_fed;
	boolState[required_OF_LGE] = REINITIALISATION_OF_required_OF_LGE;
	boolState[S_OF_LGE] = REINITIALISATION_OF_S_OF_LGE;
	boolState[relevant_evt_OF_LGE] = REINITIALISATION_OF_relevant_evt_OF_LGE;
	boolState[required_OF_LGF] = REINITIALISATION_OF_required_OF_LGF;
	boolState[S_OF_LGF] = REINITIALISATION_OF_S_OF_LGF;
	boolState[relevant_evt_OF_LGF] = REINITIALISATION_OF_relevant_evt_OF_LGF;
	boolState[required_OF_LGF_not_fed] = REINITIALISATION_OF_required_OF_LGF_not_fed;
	boolState[S_OF_LGF_not_fed] = REINITIALISATION_OF_S_OF_LGF_not_fed;
	boolState[relevant_evt_OF_LGF_not_fed] = REINITIALISATION_OF_relevant_evt_OF_LGF_not_fed;
	boolState[required_OF_LGR] = REINITIALISATION_OF_required_OF_LGR;
	boolState[S_OF_LGR] = REINITIALISATION_OF_S_OF_LGR;
	boolState[relevant_evt_OF_LGR] = REINITIALISATION_OF_relevant_evt_OF_LGR;
	boolState[required_OF_LHA] = REINITIALISATION_OF_required_OF_LHA;
	boolState[S_OF_LHA] = REINITIALISATION_OF_S_OF_LHA;
	boolState[relevant_evt_OF_LHA] = REINITIALISATION_OF_relevant_evt_OF_LHA;
	boolState[required_OF_LHA_and_LHB_lost] = REINITIALISATION_OF_required_OF_LHA_and_LHB_lost;
	boolState[S_OF_LHA_and_LHB_lost] = REINITIALISATION_OF_S_OF_LHA_and_LHB_lost;
	boolState[relevant_evt_OF_LHA_and_LHB_lost] = REINITIALISATION_OF_relevant_evt_OF_LHA_and_LHB_lost;
	boolState[required_OF_LHA_lost] = REINITIALISATION_OF_required_OF_LHA_lost;
	boolState[S_OF_LHA_lost] = REINITIALISATION_OF_S_OF_LHA_lost;
	boolState[relevant_evt_OF_LHA_lost] = REINITIALISATION_OF_relevant_evt_OF_LHA_lost;
	boolState[required_OF_LHA_not_fed] = REINITIALISATION_OF_required_OF_LHA_not_fed;
	boolState[S_OF_LHA_not_fed] = REINITIALISATION_OF_S_OF_LHA_not_fed;
	boolState[relevant_evt_OF_LHA_not_fed] = REINITIALISATION_OF_relevant_evt_OF_LHA_not_fed;
	boolState[required_OF_LHB] = REINITIALISATION_OF_required_OF_LHB;
	boolState[S_OF_LHB] = REINITIALISATION_OF_S_OF_LHB;
	boolState[relevant_evt_OF_LHB] = REINITIALISATION_OF_relevant_evt_OF_LHB;
	boolState[required_OF_LHB_lost] = REINITIALISATION_OF_required_OF_LHB_lost;
	boolState[S_OF_LHB_lost] = REINITIALISATION_OF_S_OF_LHB_lost;
	boolState[relevant_evt_OF_LHB_lost] = REINITIALISATION_OF_relevant_evt_OF_LHB_lost;
	boolState[required_OF_LHB_not_fed] = REINITIALISATION_OF_required_OF_LHB_not_fed;
	boolState[S_OF_LHB_not_fed] = REINITIALISATION_OF_S_OF_LHB_not_fed;
	boolState[relevant_evt_OF_LHB_not_fed] = REINITIALISATION_OF_relevant_evt_OF_LHB_not_fed;
	boolState[required_OF_LKE] = REINITIALISATION_OF_required_OF_LKE;
	boolState[S_OF_LKE] = REINITIALISATION_OF_S_OF_LKE;
	boolState[relevant_evt_OF_LKE] = REINITIALISATION_OF_relevant_evt_OF_LKE;
	boolState[required_OF_LKI] = REINITIALISATION_OF_required_OF_LKI;
	boolState[S_OF_LKI] = REINITIALISATION_OF_S_OF_LKI;
	boolState[relevant_evt_OF_LKI] = REINITIALISATION_OF_relevant_evt_OF_LKI;
	boolState[required_OF_LLA] = REINITIALISATION_OF_required_OF_LLA;
	boolState[S_OF_LLA] = REINITIALISATION_OF_S_OF_LLA;
	boolState[relevant_evt_OF_LLA] = REINITIALISATION_OF_relevant_evt_OF_LLA;
	boolState[required_OF_LLD] = REINITIALISATION_OF_required_OF_LLD;
	boolState[S_OF_LLD] = REINITIALISATION_OF_S_OF_LLD;
	boolState[relevant_evt_OF_LLD] = REINITIALISATION_OF_relevant_evt_OF_LLD;
	boolState[required_OF_OR_14] = REINITIALISATION_OF_required_OF_OR_14;
	boolState[S_OF_OR_14] = REINITIALISATION_OF_S_OF_OR_14;
	boolState[relevant_evt_OF_OR_14] = REINITIALISATION_OF_relevant_evt_OF_OR_14;
	boolState[required_OF_OnDemHouse] = REINITIALISATION_OF_required_OF_OnDemHouse;
	boolState[S_OF_OnDemHouse] = REINITIALISATION_OF_S_OF_OnDemHouse;
	boolState[relevant_evt_OF_OnDemHouse] = REINITIALISATION_OF_relevant_evt_OF_OnDemHouse;
	boolState[to_be_fired_OF_OnDemHouse] = REINITIALISATION_OF_to_be_fired_OF_OnDemHouse;
	boolState[required_OF_RC_CB_LGD2] = REINITIALISATION_OF_required_OF_RC_CB_LGD2;
	boolState[S_OF_RC_CB_LGD2] = REINITIALISATION_OF_S_OF_RC_CB_LGD2;
	boolState[relevant_evt_OF_RC_CB_LGD2] = REINITIALISATION_OF_relevant_evt_OF_RC_CB_LGD2;
	boolState[to_be_fired_OF_RC_CB_LGD2] = REINITIALISATION_OF_to_be_fired_OF_RC_CB_LGD2;
	boolState[required_OF_RC_CB_LGD2_] = REINITIALISATION_OF_required_OF_RC_CB_LGD2_;
	boolState[S_OF_RC_CB_LGD2_] = REINITIALISATION_OF_S_OF_RC_CB_LGD2_;
	boolState[relevant_evt_OF_RC_CB_LGD2_] = REINITIALISATION_OF_relevant_evt_OF_RC_CB_LGD2_;
	boolState[required_OF_RC_CB_LGF2] = REINITIALISATION_OF_required_OF_RC_CB_LGF2;
	boolState[S_OF_RC_CB_LGF2] = REINITIALISATION_OF_S_OF_RC_CB_LGF2;
	boolState[relevant_evt_OF_RC_CB_LGF2] = REINITIALISATION_OF_relevant_evt_OF_RC_CB_LGF2;
	boolState[to_be_fired_OF_RC_CB_LGF2] = REINITIALISATION_OF_to_be_fired_OF_RC_CB_LGF2;
	boolState[required_OF_RC_CB_LGF2_] = REINITIALISATION_OF_required_OF_RC_CB_LGF2_;
	boolState[S_OF_RC_CB_LGF2_] = REINITIALISATION_OF_S_OF_RC_CB_LGF2_;
	boolState[relevant_evt_OF_RC_CB_LGF2_] = REINITIALISATION_OF_relevant_evt_OF_RC_CB_LGF2_;
	boolState[required_OF_RC_CB_LHA2] = REINITIALISATION_OF_required_OF_RC_CB_LHA2;
	boolState[S_OF_RC_CB_LHA2] = REINITIALISATION_OF_S_OF_RC_CB_LHA2;
	boolState[relevant_evt_OF_RC_CB_LHA2] = REINITIALISATION_OF_relevant_evt_OF_RC_CB_LHA2;
	boolState[to_be_fired_OF_RC_CB_LHA2] = REINITIALISATION_OF_to_be_fired_OF_RC_CB_LHA2;
	boolState[required_OF_RC_CB_LHA2_] = REINITIALISATION_OF_required_OF_RC_CB_LHA2_;
	boolState[S_OF_RC_CB_LHA2_] = REINITIALISATION_OF_S_OF_RC_CB_LHA2_;
	boolState[relevant_evt_OF_RC_CB_LHA2_] = REINITIALISATION_OF_relevant_evt_OF_RC_CB_LHA2_;
	boolState[required_OF_RC_CB_LHA3] = REINITIALISATION_OF_required_OF_RC_CB_LHA3;
	boolState[S_OF_RC_CB_LHA3] = REINITIALISATION_OF_S_OF_RC_CB_LHA3;
	boolState[relevant_evt_OF_RC_CB_LHA3] = REINITIALISATION_OF_relevant_evt_OF_RC_CB_LHA3;
	boolState[to_be_fired_OF_RC_CB_LHA3] = REINITIALISATION_OF_to_be_fired_OF_RC_CB_LHA3;
	boolState[required_OF_RC_CB_LHA3_] = REINITIALISATION_OF_required_OF_RC_CB_LHA3_;
	boolState[S_OF_RC_CB_LHA3_] = REINITIALISATION_OF_S_OF_RC_CB_LHA3_;
	boolState[relevant_evt_OF_RC_CB_LHA3_] = REINITIALISATION_OF_relevant_evt_OF_RC_CB_LHA3_;
	boolState[required_OF_RC_CB_LHB2] = REINITIALISATION_OF_required_OF_RC_CB_LHB2;
	boolState[S_OF_RC_CB_LHB2] = REINITIALISATION_OF_S_OF_RC_CB_LHB2;
	boolState[relevant_evt_OF_RC_CB_LHB2] = REINITIALISATION_OF_relevant_evt_OF_RC_CB_LHB2;
	boolState[to_be_fired_OF_RC_CB_LHB2] = REINITIALISATION_OF_to_be_fired_OF_RC_CB_LHB2;
	boolState[required_OF_RC_CB_LHB2_] = REINITIALISATION_OF_required_OF_RC_CB_LHB2_;
	boolState[S_OF_RC_CB_LHB2_] = REINITIALISATION_OF_S_OF_RC_CB_LHB2_;
	boolState[relevant_evt_OF_RC_CB_LHB2_] = REINITIALISATION_OF_relevant_evt_OF_RC_CB_LHB2_;
	boolState[required_OF_RDA1] = REINITIALISATION_OF_required_OF_RDA1;
	boolState[S_OF_RDA1] = REINITIALISATION_OF_S_OF_RDA1;
	boolState[relevant_evt_OF_RDA1] = REINITIALISATION_OF_relevant_evt_OF_RDA1;
	boolState[required_OF_RDA2] = REINITIALISATION_OF_required_OF_RDA2;
	boolState[S_OF_RDA2] = REINITIALISATION_OF_S_OF_RDA2;
	boolState[relevant_evt_OF_RDA2] = REINITIALISATION_OF_relevant_evt_OF_RDA2;
	boolState[required_OF_RDB1] = REINITIALISATION_OF_required_OF_RDB1;
	boolState[S_OF_RDB1] = REINITIALISATION_OF_S_OF_RDB1;
	boolState[relevant_evt_OF_RDB1] = REINITIALISATION_OF_relevant_evt_OF_RDB1;
	boolState[required_OF_RDB2] = REINITIALISATION_OF_required_OF_RDB2;
	boolState[S_OF_RDB2] = REINITIALISATION_OF_S_OF_RDB2;
	boolState[relevant_evt_OF_RDB2] = REINITIALISATION_OF_relevant_evt_OF_RDB2;
	boolState[required_OF_RO_CB_LHA1] = REINITIALISATION_OF_required_OF_RO_CB_LHA1;
	boolState[S_OF_RO_CB_LHA1] = REINITIALISATION_OF_S_OF_RO_CB_LHA1;
	boolState[relevant_evt_OF_RO_CB_LHA1] = REINITIALISATION_OF_relevant_evt_OF_RO_CB_LHA1;
	boolState[to_be_fired_OF_RO_CB_LHA1] = REINITIALISATION_OF_to_be_fired_OF_RO_CB_LHA1;
	boolState[required_OF_RO_CB_LHA1_] = REINITIALISATION_OF_required_OF_RO_CB_LHA1_;
	boolState[S_OF_RO_CB_LHA1_] = REINITIALISATION_OF_S_OF_RO_CB_LHA1_;
	boolState[relevant_evt_OF_RO_CB_LHA1_] = REINITIALISATION_OF_relevant_evt_OF_RO_CB_LHA1_;
	boolState[required_OF_RO_CB_LHA2] = REINITIALISATION_OF_required_OF_RO_CB_LHA2;
	boolState[S_OF_RO_CB_LHA2] = REINITIALISATION_OF_S_OF_RO_CB_LHA2;
	boolState[relevant_evt_OF_RO_CB_LHA2] = REINITIALISATION_OF_relevant_evt_OF_RO_CB_LHA2;
	boolState[to_be_fired_OF_RO_CB_LHA2] = REINITIALISATION_OF_to_be_fired_OF_RO_CB_LHA2;
	boolState[required_OF_RO_CB_LHA2_] = REINITIALISATION_OF_required_OF_RO_CB_LHA2_;
	boolState[S_OF_RO_CB_LHA2_] = REINITIALISATION_OF_S_OF_RO_CB_LHA2_;
	boolState[relevant_evt_OF_RO_CB_LHA2_] = REINITIALISATION_OF_relevant_evt_OF_RO_CB_LHA2_;
	boolState[required_OF_RO_CB_LHB1] = REINITIALISATION_OF_required_OF_RO_CB_LHB1;
	boolState[S_OF_RO_CB_LHB1] = REINITIALISATION_OF_S_OF_RO_CB_LHB1;
	boolState[relevant_evt_OF_RO_CB_LHB1] = REINITIALISATION_OF_relevant_evt_OF_RO_CB_LHB1;
	boolState[to_be_fired_OF_RO_CB_LHB1] = REINITIALISATION_OF_to_be_fired_OF_RO_CB_LHB1;
	boolState[required_OF_RO_CB_LHB1_] = REINITIALISATION_OF_required_OF_RO_CB_LHB1_;
	boolState[S_OF_RO_CB_LHB1_] = REINITIALISATION_OF_S_OF_RO_CB_LHB1_;
	boolState[relevant_evt_OF_RO_CB_LHB1_] = REINITIALISATION_OF_relevant_evt_OF_RO_CB_LHB1_;
	boolState[required_OF_SH_CB_GEV] = REINITIALISATION_OF_required_OF_SH_CB_GEV;
	boolState[S_OF_SH_CB_GEV] = REINITIALISATION_OF_S_OF_SH_CB_GEV;
	boolState[relevant_evt_OF_SH_CB_GEV] = REINITIALISATION_OF_relevant_evt_OF_SH_CB_GEV;
	boolState[required_OF_SH_CB_LBA1] = REINITIALISATION_OF_required_OF_SH_CB_LBA1;
	boolState[S_OF_SH_CB_LBA1] = REINITIALISATION_OF_S_OF_SH_CB_LBA1;
	boolState[relevant_evt_OF_SH_CB_LBA1] = REINITIALISATION_OF_relevant_evt_OF_SH_CB_LBA1;
	boolState[required_OF_SH_CB_LBA2] = REINITIALISATION_OF_required_OF_SH_CB_LBA2;
	boolState[S_OF_SH_CB_LBA2] = REINITIALISATION_OF_S_OF_SH_CB_LBA2;
	boolState[relevant_evt_OF_SH_CB_LBA2] = REINITIALISATION_OF_relevant_evt_OF_SH_CB_LBA2;
	boolState[required_OF_SH_CB_LBB1] = REINITIALISATION_OF_required_OF_SH_CB_LBB1;
	boolState[S_OF_SH_CB_LBB1] = REINITIALISATION_OF_S_OF_SH_CB_LBB1;
	boolState[relevant_evt_OF_SH_CB_LBB1] = REINITIALISATION_OF_relevant_evt_OF_SH_CB_LBB1;
	boolState[required_OF_SH_CB_LBB2] = REINITIALISATION_OF_required_OF_SH_CB_LBB2;
	boolState[S_OF_SH_CB_LBB2] = REINITIALISATION_OF_S_OF_SH_CB_LBB2;
	boolState[relevant_evt_OF_SH_CB_LBB2] = REINITIALISATION_OF_relevant_evt_OF_SH_CB_LBB2;
	boolState[required_OF_SH_CB_LGA] = REINITIALISATION_OF_required_OF_SH_CB_LGA;
	boolState[S_OF_SH_CB_LGA] = REINITIALISATION_OF_S_OF_SH_CB_LGA;
	boolState[relevant_evt_OF_SH_CB_LGA] = REINITIALISATION_OF_relevant_evt_OF_SH_CB_LGA;
	boolState[required_OF_SH_CB_LGB] = REINITIALISATION_OF_required_OF_SH_CB_LGB;
	boolState[S_OF_SH_CB_LGB] = REINITIALISATION_OF_S_OF_SH_CB_LGB;
	boolState[relevant_evt_OF_SH_CB_LGB] = REINITIALISATION_OF_relevant_evt_OF_SH_CB_LGB;
	boolState[required_OF_SH_CB_LGD1] = REINITIALISATION_OF_required_OF_SH_CB_LGD1;
	boolState[S_OF_SH_CB_LGD1] = REINITIALISATION_OF_S_OF_SH_CB_LGD1;
	boolState[relevant_evt_OF_SH_CB_LGD1] = REINITIALISATION_OF_relevant_evt_OF_SH_CB_LGD1;
	boolState[required_OF_SH_CB_LGD2] = REINITIALISATION_OF_required_OF_SH_CB_LGD2;
	boolState[S_OF_SH_CB_LGD2] = REINITIALISATION_OF_S_OF_SH_CB_LGD2;
	boolState[relevant_evt_OF_SH_CB_LGD2] = REINITIALISATION_OF_relevant_evt_OF_SH_CB_LGD2;
	boolState[required_OF_SH_CB_LGE1] = REINITIALISATION_OF_required_OF_SH_CB_LGE1;
	boolState[S_OF_SH_CB_LGE1] = REINITIALISATION_OF_S_OF_SH_CB_LGE1;
	boolState[relevant_evt_OF_SH_CB_LGE1] = REINITIALISATION_OF_relevant_evt_OF_SH_CB_LGE1;
	boolState[required_OF_SH_CB_LGF1] = REINITIALISATION_OF_required_OF_SH_CB_LGF1;
	boolState[S_OF_SH_CB_LGF1] = REINITIALISATION_OF_S_OF_SH_CB_LGF1;
	boolState[relevant_evt_OF_SH_CB_LGF1] = REINITIALISATION_OF_relevant_evt_OF_SH_CB_LGF1;
	boolState[required_OF_SH_CB_LGF2] = REINITIALISATION_OF_required_OF_SH_CB_LGF2;
	boolState[S_OF_SH_CB_LGF2] = REINITIALISATION_OF_S_OF_SH_CB_LGF2;
	boolState[relevant_evt_OF_SH_CB_LGF2] = REINITIALISATION_OF_relevant_evt_OF_SH_CB_LGF2;
	boolState[required_OF_SH_CB_LHA1] = REINITIALISATION_OF_required_OF_SH_CB_LHA1;
	boolState[S_OF_SH_CB_LHA1] = REINITIALISATION_OF_S_OF_SH_CB_LHA1;
	boolState[relevant_evt_OF_SH_CB_LHA1] = REINITIALISATION_OF_relevant_evt_OF_SH_CB_LHA1;
	boolState[required_OF_SH_CB_LHA2] = REINITIALISATION_OF_required_OF_SH_CB_LHA2;
	boolState[S_OF_SH_CB_LHA2] = REINITIALISATION_OF_S_OF_SH_CB_LHA2;
	boolState[relevant_evt_OF_SH_CB_LHA2] = REINITIALISATION_OF_relevant_evt_OF_SH_CB_LHA2;
	boolState[required_OF_SH_CB_LHA3] = REINITIALISATION_OF_required_OF_SH_CB_LHA3;
	boolState[S_OF_SH_CB_LHA3] = REINITIALISATION_OF_S_OF_SH_CB_LHA3;
	boolState[relevant_evt_OF_SH_CB_LHA3] = REINITIALISATION_OF_relevant_evt_OF_SH_CB_LHA3;
	boolState[required_OF_SH_CB_LHB1] = REINITIALISATION_OF_required_OF_SH_CB_LHB1;
	boolState[S_OF_SH_CB_LHB1] = REINITIALISATION_OF_S_OF_SH_CB_LHB1;
	boolState[relevant_evt_OF_SH_CB_LHB1] = REINITIALISATION_OF_relevant_evt_OF_SH_CB_LHB1;
	boolState[required_OF_SH_CB_LHB2] = REINITIALISATION_OF_required_OF_SH_CB_LHB2;
	boolState[S_OF_SH_CB_LHB2] = REINITIALISATION_OF_S_OF_SH_CB_LHB2;
	boolState[relevant_evt_OF_SH_CB_LHB2] = REINITIALISATION_OF_relevant_evt_OF_SH_CB_LHB2;
	boolState[required_OF_SH_CB_RDA1] = REINITIALISATION_OF_required_OF_SH_CB_RDA1;
	boolState[S_OF_SH_CB_RDA1] = REINITIALISATION_OF_S_OF_SH_CB_RDA1;
	boolState[relevant_evt_OF_SH_CB_RDA1] = REINITIALISATION_OF_relevant_evt_OF_SH_CB_RDA1;
	boolState[required_OF_SH_CB_RDA2] = REINITIALISATION_OF_required_OF_SH_CB_RDA2;
	boolState[S_OF_SH_CB_RDA2] = REINITIALISATION_OF_S_OF_SH_CB_RDA2;
	boolState[relevant_evt_OF_SH_CB_RDA2] = REINITIALISATION_OF_relevant_evt_OF_SH_CB_RDA2;
	boolState[required_OF_SH_CB_RDB1] = REINITIALISATION_OF_required_OF_SH_CB_RDB1;
	boolState[S_OF_SH_CB_RDB1] = REINITIALISATION_OF_S_OF_SH_CB_RDB1;
	boolState[relevant_evt_OF_SH_CB_RDB1] = REINITIALISATION_OF_relevant_evt_OF_SH_CB_RDB1;
	boolState[required_OF_SH_CB_RDB2] = REINITIALISATION_OF_required_OF_SH_CB_RDB2;
	boolState[S_OF_SH_CB_RDB2] = REINITIALISATION_OF_S_OF_SH_CB_RDB2;
	boolState[relevant_evt_OF_SH_CB_RDB2] = REINITIALISATION_OF_relevant_evt_OF_SH_CB_RDB2;
	boolState[required_OF_SH_CB_TUA1] = REINITIALISATION_OF_required_OF_SH_CB_TUA1;
	boolState[S_OF_SH_CB_TUA1] = REINITIALISATION_OF_S_OF_SH_CB_TUA1;
	boolState[relevant_evt_OF_SH_CB_TUA1] = REINITIALISATION_OF_relevant_evt_OF_SH_CB_TUA1;
	boolState[required_OF_SH_CB_TUA2] = REINITIALISATION_OF_required_OF_SH_CB_TUA2;
	boolState[S_OF_SH_CB_TUA2] = REINITIALISATION_OF_S_OF_SH_CB_TUA2;
	boolState[relevant_evt_OF_SH_CB_TUA2] = REINITIALISATION_OF_relevant_evt_OF_SH_CB_TUA2;
	boolState[required_OF_SH_CB_TUB1] = REINITIALISATION_OF_required_OF_SH_CB_TUB1;
	boolState[S_OF_SH_CB_TUB1] = REINITIALISATION_OF_S_OF_SH_CB_TUB1;
	boolState[relevant_evt_OF_SH_CB_TUB1] = REINITIALISATION_OF_relevant_evt_OF_SH_CB_TUB1;
	boolState[required_OF_SH_CB_TUB2] = REINITIALISATION_OF_required_OF_SH_CB_TUB2;
	boolState[S_OF_SH_CB_TUB2] = REINITIALISATION_OF_S_OF_SH_CB_TUB2;
	boolState[relevant_evt_OF_SH_CB_TUB2] = REINITIALISATION_OF_relevant_evt_OF_SH_CB_TUB2;
	boolState[required_OF_SH_CB_line_GEV] = REINITIALISATION_OF_required_OF_SH_CB_line_GEV;
	boolState[S_OF_SH_CB_line_GEV] = REINITIALISATION_OF_S_OF_SH_CB_line_GEV;
	boolState[relevant_evt_OF_SH_CB_line_GEV] = REINITIALISATION_OF_relevant_evt_OF_SH_CB_line_GEV;
	boolState[required_OF_SH_CB_line_LGR] = REINITIALISATION_OF_required_OF_SH_CB_line_LGR;
	boolState[S_OF_SH_CB_line_LGR] = REINITIALISATION_OF_S_OF_SH_CB_line_LGR;
	boolState[relevant_evt_OF_SH_CB_line_LGR] = REINITIALISATION_OF_relevant_evt_OF_SH_CB_line_LGR;
	boolState[required_OF_SH_GEV_or_LGR] = REINITIALISATION_OF_required_OF_SH_GEV_or_LGR;
	boolState[S_OF_SH_GEV_or_LGR] = REINITIALISATION_OF_S_OF_SH_GEV_or_LGR;
	boolState[relevant_evt_OF_SH_GEV_or_LGR] = REINITIALISATION_OF_relevant_evt_OF_SH_GEV_or_LGR;
	boolState[required_OF_SUBSTATION] = REINITIALISATION_OF_required_OF_SUBSTATION;
	boolState[S_OF_SUBSTATION] = REINITIALISATION_OF_S_OF_SUBSTATION;
	boolState[relevant_evt_OF_SUBSTATION] = REINITIALISATION_OF_relevant_evt_OF_SUBSTATION;
	boolState[required_OF_TA] = REINITIALISATION_OF_required_OF_TA;
	boolState[S_OF_TA] = REINITIALISATION_OF_S_OF_TA;
	boolState[relevant_evt_OF_TA] = REINITIALISATION_OF_relevant_evt_OF_TA;
	boolState[required_OF_TAC] = REINITIALISATION_OF_required_OF_TAC;
	boolState[S_OF_TAC] = REINITIALISATION_OF_S_OF_TAC;
	boolState[relevant_evt_OF_TAC] = REINITIALISATION_OF_relevant_evt_OF_TAC;
	boolState[required_OF_TA_lost] = REINITIALISATION_OF_required_OF_TA_lost;
	boolState[S_OF_TA_lost] = REINITIALISATION_OF_S_OF_TA_lost;
	boolState[relevant_evt_OF_TA_lost] = REINITIALISATION_OF_relevant_evt_OF_TA_lost;
	boolState[required_OF_TP] = REINITIALISATION_OF_required_OF_TP;
	boolState[S_OF_TP] = REINITIALISATION_OF_S_OF_TP;
	boolState[relevant_evt_OF_TP] = REINITIALISATION_OF_relevant_evt_OF_TP;
	boolState[required_OF_TS] = REINITIALISATION_OF_required_OF_TS;
	boolState[S_OF_TS] = REINITIALISATION_OF_S_OF_TS;
	boolState[relevant_evt_OF_TS] = REINITIALISATION_OF_relevant_evt_OF_TS;
	boolState[required_OF_TS_lost] = REINITIALISATION_OF_required_OF_TS_lost;
	boolState[S_OF_TS_lost] = REINITIALISATION_OF_S_OF_TS_lost;
	boolState[relevant_evt_OF_TS_lost] = REINITIALISATION_OF_relevant_evt_OF_TS_lost;
	boolState[required_OF_TS_not_fed] = REINITIALISATION_OF_required_OF_TS_not_fed;
	boolState[S_OF_TS_not_fed] = REINITIALISATION_OF_S_OF_TS_not_fed;
	boolState[relevant_evt_OF_TS_not_fed] = REINITIALISATION_OF_relevant_evt_OF_TS_not_fed;
	boolState[required_OF_TUA1] = REINITIALISATION_OF_required_OF_TUA1;
	boolState[S_OF_TUA1] = REINITIALISATION_OF_S_OF_TUA1;
	boolState[relevant_evt_OF_TUA1] = REINITIALISATION_OF_relevant_evt_OF_TUA1;
	boolState[required_OF_TUA2] = REINITIALISATION_OF_required_OF_TUA2;
	boolState[S_OF_TUA2] = REINITIALISATION_OF_S_OF_TUA2;
	boolState[relevant_evt_OF_TUA2] = REINITIALISATION_OF_relevant_evt_OF_TUA2;
	boolState[required_OF_TUB1] = REINITIALISATION_OF_required_OF_TUB1;
	boolState[S_OF_TUB1] = REINITIALISATION_OF_S_OF_TUB1;
	boolState[relevant_evt_OF_TUB1] = REINITIALISATION_OF_relevant_evt_OF_TUB1;
	boolState[required_OF_TUB2] = REINITIALISATION_OF_required_OF_TUB2;
	boolState[S_OF_TUB2] = REINITIALISATION_OF_S_OF_TUB2;
	boolState[relevant_evt_OF_TUB2] = REINITIALISATION_OF_relevant_evt_OF_TUB2;
	boolState[required_OF_UE_1] = REINITIALISATION_OF_required_OF_UE_1;
	boolState[S_OF_UE_1] = REINITIALISATION_OF_S_OF_UE_1;
	boolState[relevant_evt_OF_UE_1] = REINITIALISATION_OF_relevant_evt_OF_UE_1;
	boolState[required_OF_UNIT] = REINITIALISATION_OF_required_OF_UNIT;
	boolState[S_OF_UNIT] = REINITIALISATION_OF_S_OF_UNIT;
	boolState[relevant_evt_OF_UNIT] = REINITIALISATION_OF_relevant_evt_OF_UNIT;
	boolState[required_OF_demand_CCF_DG] = REINITIALISATION_OF_required_OF_demand_CCF_DG;
	boolState[S_OF_demand_CCF_DG] = REINITIALISATION_OF_S_OF_demand_CCF_DG;
	boolState[relevant_evt_OF_demand_CCF_DG] = REINITIALISATION_OF_relevant_evt_OF_demand_CCF_DG;
	boolState[to_be_fired_OF_demand_CCF_DG] = REINITIALISATION_OF_to_be_fired_OF_demand_CCF_DG;
	boolState[required_OF_demand_DGA] = REINITIALISATION_OF_required_OF_demand_DGA;
	boolState[S_OF_demand_DGA] = REINITIALISATION_OF_S_OF_demand_DGA;
	boolState[relevant_evt_OF_demand_DGA] = REINITIALISATION_OF_relevant_evt_OF_demand_DGA;
	boolState[to_be_fired_OF_demand_DGA] = REINITIALISATION_OF_to_be_fired_OF_demand_DGA;
	boolState[required_OF_demand_DGB] = REINITIALISATION_OF_required_OF_demand_DGB;
	boolState[S_OF_demand_DGB] = REINITIALISATION_OF_S_OF_demand_DGB;
	boolState[relevant_evt_OF_demand_DGB] = REINITIALISATION_OF_relevant_evt_OF_demand_DGB;
	boolState[to_be_fired_OF_demand_DGB] = REINITIALISATION_OF_to_be_fired_OF_demand_DGB;
	boolState[required_OF_demand_TAC] = REINITIALISATION_OF_required_OF_demand_TAC;
	boolState[S_OF_demand_TAC] = REINITIALISATION_OF_S_OF_demand_TAC;
	boolState[relevant_evt_OF_demand_TAC] = REINITIALISATION_OF_relevant_evt_OF_demand_TAC;
	boolState[to_be_fired_OF_demand_TAC] = REINITIALISATION_OF_to_be_fired_OF_demand_TAC;
	boolState[required_OF_loss_of_houseload_operation] = REINITIALISATION_OF_required_OF_loss_of_houseload_operation;
	boolState[S_OF_loss_of_houseload_operation] = REINITIALISATION_OF_S_OF_loss_of_houseload_operation;
	boolState[relevant_evt_OF_loss_of_houseload_operation] = REINITIALISATION_OF_relevant_evt_OF_loss_of_houseload_operation;
	boolState[required_OF_loss_of_supply_by_DGA] = REINITIALISATION_OF_required_OF_loss_of_supply_by_DGA;
	boolState[S_OF_loss_of_supply_by_DGA] = REINITIALISATION_OF_S_OF_loss_of_supply_by_DGA;
	boolState[relevant_evt_OF_loss_of_supply_by_DGA] = REINITIALISATION_OF_relevant_evt_OF_loss_of_supply_by_DGA;
	boolState[required_OF_loss_of_supply_by_DGA_and_TAC] = REINITIALISATION_OF_required_OF_loss_of_supply_by_DGA_and_TAC;
	boolState[S_OF_loss_of_supply_by_DGA_and_TAC] = REINITIALISATION_OF_S_OF_loss_of_supply_by_DGA_and_TAC;
	boolState[relevant_evt_OF_loss_of_supply_by_DGA_and_TAC] = REINITIALISATION_OF_relevant_evt_OF_loss_of_supply_by_DGA_and_TAC;
	boolState[required_OF_loss_of_supply_by_DGB] = REINITIALISATION_OF_required_OF_loss_of_supply_by_DGB;
	boolState[S_OF_loss_of_supply_by_DGB] = REINITIALISATION_OF_S_OF_loss_of_supply_by_DGB;
	boolState[relevant_evt_OF_loss_of_supply_by_DGB] = REINITIALISATION_OF_relevant_evt_OF_loss_of_supply_by_DGB;
	boolState[required_OF_loss_of_supply_by_GEV] = REINITIALISATION_OF_required_OF_loss_of_supply_by_GEV;
	boolState[S_OF_loss_of_supply_by_GEV] = REINITIALISATION_OF_S_OF_loss_of_supply_by_GEV;
	boolState[relevant_evt_OF_loss_of_supply_by_GEV] = REINITIALISATION_OF_relevant_evt_OF_loss_of_supply_by_GEV;
	boolState[required_OF_loss_of_supply_by_LGD] = REINITIALISATION_OF_required_OF_loss_of_supply_by_LGD;
	boolState[S_OF_loss_of_supply_by_LGD] = REINITIALISATION_OF_S_OF_loss_of_supply_by_LGD;
	boolState[relevant_evt_OF_loss_of_supply_by_LGD] = REINITIALISATION_OF_relevant_evt_OF_loss_of_supply_by_LGD;
	boolState[required_OF_loss_of_supply_by_LGF] = REINITIALISATION_OF_required_OF_loss_of_supply_by_LGF;
	boolState[S_OF_loss_of_supply_by_LGF] = REINITIALISATION_OF_S_OF_loss_of_supply_by_LGF;
	boolState[relevant_evt_OF_loss_of_supply_by_LGF] = REINITIALISATION_OF_relevant_evt_OF_loss_of_supply_by_LGF;
	boolState[required_OF_loss_of_supply_by_LGR] = REINITIALISATION_OF_required_OF_loss_of_supply_by_LGR;
	boolState[S_OF_loss_of_supply_by_LGR] = REINITIALISATION_OF_S_OF_loss_of_supply_by_LGR;
	boolState[relevant_evt_OF_loss_of_supply_by_LGR] = REINITIALISATION_OF_relevant_evt_OF_loss_of_supply_by_LGR;
	boolState[required_OF_loss_of_supply_by_TA] = REINITIALISATION_OF_required_OF_loss_of_supply_by_TA;
	boolState[S_OF_loss_of_supply_by_TA] = REINITIALISATION_OF_S_OF_loss_of_supply_by_TA;
	boolState[relevant_evt_OF_loss_of_supply_by_TA] = REINITIALISATION_OF_relevant_evt_OF_loss_of_supply_by_TA;
	boolState[required_OF_loss_of_supply_by_TA1] = REINITIALISATION_OF_required_OF_loss_of_supply_by_TA1;
	boolState[S_OF_loss_of_supply_by_TA1] = REINITIALISATION_OF_S_OF_loss_of_supply_by_TA1;
	boolState[relevant_evt_OF_loss_of_supply_by_TA1] = REINITIALISATION_OF_relevant_evt_OF_loss_of_supply_by_TA1;
	boolState[required_OF_loss_of_supply_by_TAC] = REINITIALISATION_OF_required_OF_loss_of_supply_by_TAC;
	boolState[S_OF_loss_of_supply_by_TAC] = REINITIALISATION_OF_S_OF_loss_of_supply_by_TAC;
	boolState[relevant_evt_OF_loss_of_supply_by_TAC] = REINITIALISATION_OF_relevant_evt_OF_loss_of_supply_by_TAC;
	boolState[required_OF_loss_of_supply_by_TS] = REINITIALISATION_OF_required_OF_loss_of_supply_by_TS;
	boolState[S_OF_loss_of_supply_by_TS] = REINITIALISATION_OF_S_OF_loss_of_supply_by_TS;
	boolState[relevant_evt_OF_loss_of_supply_by_TS] = REINITIALISATION_OF_relevant_evt_OF_loss_of_supply_by_TS;
	boolState[required_OF_loss_of_supply_by_TS1] = REINITIALISATION_OF_required_OF_loss_of_supply_by_TS1;
	boolState[S_OF_loss_of_supply_by_TS1] = REINITIALISATION_OF_S_OF_loss_of_supply_by_TS1;
	boolState[relevant_evt_OF_loss_of_supply_by_TS1] = REINITIALISATION_OF_relevant_evt_OF_loss_of_supply_by_TS1;
	boolState[required_OF_loss_of_supply_by_UNIT] = REINITIALISATION_OF_required_OF_loss_of_supply_by_UNIT;
	boolState[S_OF_loss_of_supply_by_UNIT] = REINITIALISATION_OF_S_OF_loss_of_supply_by_UNIT;
	boolState[relevant_evt_OF_loss_of_supply_by_UNIT] = REINITIALISATION_OF_relevant_evt_OF_loss_of_supply_by_UNIT;
}

void storm::figaro::FigaroProgram_NPPS_No_trim_No_repair::fireOccurrence(int numFire)
{
	//cout <<">>>>>>>>>>>>>>>>>>>> Fire of occurrence #" << numFire << " <<<<<<<<<<<<<<<<<<<<<<<" << endl;

	if (numFire == 0)
	{
		FIRE_xx10_OF_BAT_A1 = true;
	}

	if (numFire == 1)
	{
		FIRE_xx10_OF_BAT_A2 = true;
	}

	if (numFire == 2)
	{
		FIRE_xx10_OF_BAT_B1 = true;
	}

	if (numFire == 3)
	{
		FIRE_xx10_OF_BAT_B2 = true;
	}

	if (numFire == 4)
	{
		FIRE_xx10_OF_CCF_DG = true;
	}

	if (numFire == 5)
	{
		FIRE_xx10_OF_CCF_GEV_LGR = true;
	}

	if (numFire == 6)
	{
		FIRE_xx10_OF_DGA_long = true;
	}

	if (numFire == 7)
	{
		FIRE_xx10_OF_DGA_short = true;
	}

	if (numFire == 8)
	{
		FIRE_xx10_OF_DGB_long = true;
	}

	if (numFire == 9)
	{
		FIRE_xx10_OF_DGB_short = true;
	}

	if (numFire == 10)
	{
		FIRE_xx10_OF_GEV = true;
	}

	if (numFire == 11)
	{
		FIRE_xx10_OF_GRID = true;
	}

	if (numFire == 12)
	{
		FIRE_xx10_OF_InFnHouse = true;
	}

	if (numFire == 13)
	{
		FIRE_xx10_OF_LBA = true;
	}

	if (numFire == 14)
	{
		FIRE_xx10_OF_LBB = true;
	}

	if (numFire == 15)
	{
		FIRE_xx10_OF_LGA = true;
	}

	if (numFire == 16)
	{
		FIRE_xx10_OF_LGB = true;
	}

	if (numFire == 17)
	{
		FIRE_xx10_OF_LGD = true;
	}

	if (numFire == 18)
	{
		FIRE_xx10_OF_LGE = true;
	}

	if (numFire == 19)
	{
		FIRE_xx10_OF_LGF = true;
	}

	if (numFire == 20)
	{
		FIRE_xx10_OF_LGR = true;
	}

	if (numFire == 21)
	{
		FIRE_xx10_OF_LHA = true;
	}

	if (numFire == 22)
	{
		FIRE_xx10_OF_LHB = true;
	}

	if (numFire == 23)
	{
		FIRE_xx10_OF_LKE = true;
	}

	if (numFire == 24)
	{
		FIRE_xx10_OF_LKI = true;
	}

	if (numFire == 25)
	{
		FIRE_xx10_OF_LLA = true;
	}

	if (numFire == 26)
	{
		FIRE_xx10_OF_LLD = true;
	}

	if (numFire == 27)
	{
		FIRE_xx23_OF_OnDemHouse_INS_27 = true;
	}

	if (numFire == 28)
	{
		FIRE_xx23_OF_OnDemHouse_INS_28 = true;
	}

	if (numFire == 29)
	{
		FIRE_xx23_OF_RC_CB_LGD2_INS_29 = true;
	}

	if (numFire == 30)
	{
		FIRE_xx23_OF_RC_CB_LGD2_INS_30 = true;
	}

	if (numFire == 31)
	{
		FIRE_xx23_OF_RC_CB_LGF2_INS_31 = true;
	}

	if (numFire == 32)
	{
		FIRE_xx23_OF_RC_CB_LGF2_INS_32 = true;
	}

	if (numFire == 33)
	{
		FIRE_xx23_OF_RC_CB_LHA2_INS_33 = true;
	}

	if (numFire == 34)
	{
		FIRE_xx23_OF_RC_CB_LHA2_INS_34 = true;
	}

	if (numFire == 35)
	{
		FIRE_xx23_OF_RC_CB_LHA3_INS_35 = true;
	}

	if (numFire == 36)
	{
		FIRE_xx23_OF_RC_CB_LHA3_INS_36 = true;
	}

	if (numFire == 37)
	{
		FIRE_xx23_OF_RC_CB_LHB2_INS_37 = true;
	}

	if (numFire == 38)
	{
		FIRE_xx23_OF_RC_CB_LHB2_INS_38 = true;
	}

	if (numFire == 39)
	{
		FIRE_xx10_OF_RDA1 = true;
	}

	if (numFire == 40)
	{
		FIRE_xx10_OF_RDA2 = true;
	}

	if (numFire == 41)
	{
		FIRE_xx10_OF_RDB1 = true;
	}

	if (numFire == 42)
	{
		FIRE_xx10_OF_RDB2 = true;
	}

	if (numFire == 43)
	{
		FIRE_xx23_OF_RO_CB_LHA1_INS_43 = true;
	}

	if (numFire == 44)
	{
		FIRE_xx23_OF_RO_CB_LHA1_INS_44 = true;
	}

	if (numFire == 45)
	{
		FIRE_xx23_OF_RO_CB_LHA2_INS_45 = true;
	}

	if (numFire == 46)
	{
		FIRE_xx23_OF_RO_CB_LHA2_INS_46 = true;
	}

	if (numFire == 47)
	{
		FIRE_xx23_OF_RO_CB_LHB1_INS_47 = true;
	}

	if (numFire == 48)
	{
		FIRE_xx23_OF_RO_CB_LHB1_INS_48 = true;
	}

	if (numFire == 49)
	{
		FIRE_xx10_OF_SH_CB_GEV = true;
	}

	if (numFire == 50)
	{
		FIRE_xx10_OF_SH_CB_LBA1 = true;
	}

	if (numFire == 51)
	{
		FIRE_xx10_OF_SH_CB_LBA2 = true;
	}

	if (numFire == 52)
	{
		FIRE_xx10_OF_SH_CB_LBB1 = true;
	}

	if (numFire == 53)
	{
		FIRE_xx10_OF_SH_CB_LBB2 = true;
	}

	if (numFire == 54)
	{
		FIRE_xx10_OF_SH_CB_LGA = true;
	}

	if (numFire == 55)
	{
		FIRE_xx10_OF_SH_CB_LGB = true;
	}

	if (numFire == 56)
	{
		FIRE_xx10_OF_SH_CB_LGD1 = true;
	}

	if (numFire == 57)
	{
		FIRE_xx10_OF_SH_CB_LGD2 = true;
	}

	if (numFire == 58)
	{
		FIRE_xx10_OF_SH_CB_LGE1 = true;
	}

	if (numFire == 59)
	{
		FIRE_xx10_OF_SH_CB_LGF1 = true;
	}

	if (numFire == 60)
	{
		FIRE_xx10_OF_SH_CB_LGF2 = true;
	}

	if (numFire == 61)
	{
		FIRE_xx10_OF_SH_CB_LHA1 = true;
	}

	if (numFire == 62)
	{
		FIRE_xx10_OF_SH_CB_LHA2 = true;
	}

	if (numFire == 63)
	{
		FIRE_xx10_OF_SH_CB_LHA3 = true;
	}

	if (numFire == 64)
	{
		FIRE_xx10_OF_SH_CB_LHB1 = true;
	}

	if (numFire == 65)
	{
		FIRE_xx10_OF_SH_CB_LHB2 = true;
	}

	if (numFire == 66)
	{
		FIRE_xx10_OF_SH_CB_RDA1 = true;
	}

	if (numFire == 67)
	{
		FIRE_xx10_OF_SH_CB_RDA2 = true;
	}

	if (numFire == 68)
	{
		FIRE_xx10_OF_SH_CB_RDB1 = true;
	}

	if (numFire == 69)
	{
		FIRE_xx10_OF_SH_CB_RDB2 = true;
	}

	if (numFire == 70)
	{
		FIRE_xx10_OF_SH_CB_TUA1 = true;
	}

	if (numFire == 71)
	{
		FIRE_xx10_OF_SH_CB_TUA2 = true;
	}

	if (numFire == 72)
	{
		FIRE_xx10_OF_SH_CB_TUB1 = true;
	}

	if (numFire == 73)
	{
		FIRE_xx10_OF_SH_CB_TUB2 = true;
	}

	if (numFire == 74)
	{
		FIRE_xx10_OF_SH_CB_line_GEV = true;
	}

	if (numFire == 75)
	{
		FIRE_xx10_OF_SH_CB_line_LGR = true;
	}

	if (numFire == 76)
	{
		FIRE_xx10_OF_SUBSTATION = true;
	}

	if (numFire == 77)
	{
		FIRE_xx10_OF_TA = true;
	}

	if (numFire == 78)
	{
		FIRE_xx10_OF_TAC = true;
	}

	if (numFire == 79)
	{
		FIRE_xx10_OF_TP = true;
	}

	if (numFire == 80)
	{
		FIRE_xx10_OF_TS = true;
	}

	if (numFire == 81)
	{
		FIRE_xx10_OF_TUA1 = true;
	}

	if (numFire == 82)
	{
		FIRE_xx10_OF_TUA2 = true;
	}

	if (numFire == 83)
	{
		FIRE_xx10_OF_TUB1 = true;
	}

	if (numFire == 84)
	{
		FIRE_xx10_OF_TUB2 = true;
	}

	if (numFire == 85)
	{
		FIRE_xx10_OF_UNIT = true;
	}

	if (numFire == 86)
	{
		FIRE_xx23_OF_demand_CCF_DG_INS_86 = true;
	}

	if (numFire == 87)
	{
		FIRE_xx23_OF_demand_CCF_DG_INS_87 = true;
	}

	if (numFire == 88)
	{
		FIRE_xx23_OF_demand_DGA_INS_88 = true;
	}

	if (numFire == 89)
	{
		FIRE_xx23_OF_demand_DGA_INS_89 = true;
	}

	if (numFire == 90)
	{
		FIRE_xx23_OF_demand_DGB_INS_90 = true;
	}

	if (numFire == 91)
	{
		FIRE_xx23_OF_demand_DGB_INS_91 = true;
	}

	if (numFire == 92)
	{
		FIRE_xx23_OF_demand_TAC_INS_92 = true;
	}

	if (numFire == 93)
	{
		FIRE_xx23_OF_demand_TAC_INS_93 = true;
	}

/* ---------- DECLARATION OF OCCURRENCE RULES------------ */

	// Occurrence xx10_OF_BAT_A1
	if ((boolState[failF_OF_BAT_A1] == false) && boolState[required_OF_BAT_A1]) 
	{
		 
		if (FIRE_xx10_OF_BAT_A1)
		{
			boolState[failF_OF_BAT_A1]  =  true;
			FIRE_xx10_OF_BAT_A1 = false;
		}
	}

	// Occurrence xx10_OF_BAT_A2
	if ((boolState[failF_OF_BAT_A2] == false) && boolState[required_OF_BAT_A2]) 
	{
		 
		if (FIRE_xx10_OF_BAT_A2)
		{
			boolState[failF_OF_BAT_A2]  =  true;
			FIRE_xx10_OF_BAT_A2 = false;
		}
	}

	// Occurrence xx10_OF_BAT_B1
	if ((boolState[failF_OF_BAT_B1] == false) && boolState[required_OF_BAT_B1]) 
	{
		 
		if (FIRE_xx10_OF_BAT_B1)
		{
			boolState[failF_OF_BAT_B1]  =  true;
			FIRE_xx10_OF_BAT_B1 = false;
		}
	}

	// Occurrence xx10_OF_BAT_B2
	if ((boolState[failF_OF_BAT_B2] == false) && boolState[required_OF_BAT_B2]) 
	{
		 
		if (FIRE_xx10_OF_BAT_B2)
		{
			boolState[failF_OF_BAT_B2]  =  true;
			FIRE_xx10_OF_BAT_B2 = false;
		}
	}

	// Occurrence xx10_OF_CCF_DG
	if ((boolState[failF_OF_CCF_DG] == false) && boolState[required_OF_CCF_DG]) 
	{
		 
		if (FIRE_xx10_OF_CCF_DG)
		{
			boolState[failF_OF_CCF_DG]  =  true;
			FIRE_xx10_OF_CCF_DG = false;
		}
	}

	// Occurrence xx10_OF_CCF_GEV_LGR
	if ((boolState[failF_OF_CCF_GEV_LGR] == false) && boolState[required_OF_CCF_GEV_LGR]) 
	{
		 
		if (FIRE_xx10_OF_CCF_GEV_LGR)
		{
			boolState[failF_OF_CCF_GEV_LGR]  =  true;
			FIRE_xx10_OF_CCF_GEV_LGR = false;
		}
	}

	// Occurrence xx10_OF_DGA_long
	if ((boolState[failF_OF_DGA_long] == false) && boolState[required_OF_DGA_long]) 
	{
		 
		if (FIRE_xx10_OF_DGA_long)
		{
			boolState[failF_OF_DGA_long]  =  true;
			FIRE_xx10_OF_DGA_long = false;
		}
	}

	// Occurrence xx10_OF_DGA_short
	if ((boolState[failF_OF_DGA_short] == false) && boolState[required_OF_DGA_short]) 
	{
		 
		if (FIRE_xx10_OF_DGA_short)
		{
			boolState[failF_OF_DGA_short]  =  true;
			FIRE_xx10_OF_DGA_short = false;
		}
	}

	// Occurrence xx10_OF_DGB_long
	if ((boolState[failF_OF_DGB_long] == false) && boolState[required_OF_DGB_long]) 
	{
		 
		if (FIRE_xx10_OF_DGB_long)
		{
			boolState[failF_OF_DGB_long]  =  true;
			FIRE_xx10_OF_DGB_long = false;
		}
	}

	// Occurrence xx10_OF_DGB_short
	if ((boolState[failF_OF_DGB_short] == false) && boolState[required_OF_DGB_short]) 
	{
		 
		if (FIRE_xx10_OF_DGB_short)
		{
			boolState[failF_OF_DGB_short]  =  true;
			FIRE_xx10_OF_DGB_short = false;
		}
	}

	// Occurrence xx10_OF_GEV
	if ((boolState[failF_OF_GEV] == false) && boolState[required_OF_GEV]) 
	{
		 
		if (FIRE_xx10_OF_GEV)
		{
			boolState[failF_OF_GEV]  =  true;
			FIRE_xx10_OF_GEV = false;
		}
	}

	// Occurrence xx10_OF_GRID
	if ((boolState[failF_OF_GRID] == false) && boolState[required_OF_GRID]) 
	{
		 
		if (FIRE_xx10_OF_GRID)
		{
			boolState[failF_OF_GRID]  =  true;
			FIRE_xx10_OF_GRID = false;
		}
	}

	// Occurrence xx10_OF_InFnHouse
	if ((boolState[failF_OF_InFnHouse] == false) && boolState[required_OF_InFnHouse]) 
	{
		 
		if (FIRE_xx10_OF_InFnHouse)
		{
			boolState[failF_OF_InFnHouse]  =  true;
			FIRE_xx10_OF_InFnHouse = false;
		}
	}

	// Occurrence xx10_OF_LBA
	if ((boolState[failF_OF_LBA] == false) && boolState[required_OF_LBA]) 
	{
		 
		if (FIRE_xx10_OF_LBA)
		{
			boolState[failF_OF_LBA]  =  true;
			FIRE_xx10_OF_LBA = false;
		}
	}

	// Occurrence xx10_OF_LBB
	if ((boolState[failF_OF_LBB] == false) && boolState[required_OF_LBB]) 
	{
		 
		if (FIRE_xx10_OF_LBB)
		{
			boolState[failF_OF_LBB]  =  true;
			FIRE_xx10_OF_LBB = false;
		}
	}

	// Occurrence xx10_OF_LGA
	if ((boolState[failF_OF_LGA] == false) && boolState[required_OF_LGA]) 
	{
		 
		if (FIRE_xx10_OF_LGA)
		{
			boolState[failF_OF_LGA]  =  true;
			FIRE_xx10_OF_LGA = false;
		}
	}

	// Occurrence xx10_OF_LGB
	if ((boolState[failF_OF_LGB] == false) && boolState[required_OF_LGB]) 
	{
		 
		if (FIRE_xx10_OF_LGB)
		{
			boolState[failF_OF_LGB]  =  true;
			FIRE_xx10_OF_LGB = false;
		}
	}

	// Occurrence xx10_OF_LGD
	if ((boolState[failF_OF_LGD] == false) && boolState[required_OF_LGD]) 
	{
		 
		if (FIRE_xx10_OF_LGD)
		{
			boolState[failF_OF_LGD]  =  true;
			FIRE_xx10_OF_LGD = false;
		}
	}

	// Occurrence xx10_OF_LGE
	if ((boolState[failF_OF_LGE] == false) && boolState[required_OF_LGE]) 
	{
		 
		if (FIRE_xx10_OF_LGE)
		{
			boolState[failF_OF_LGE]  =  true;
			FIRE_xx10_OF_LGE = false;
		}
	}

	// Occurrence xx10_OF_LGF
	if ((boolState[failF_OF_LGF] == false) && boolState[required_OF_LGF]) 
	{
		 
		if (FIRE_xx10_OF_LGF)
		{
			boolState[failF_OF_LGF]  =  true;
			FIRE_xx10_OF_LGF = false;
		}
	}

	// Occurrence xx10_OF_LGR
	if ((boolState[failF_OF_LGR] == false) && boolState[required_OF_LGR]) 
	{
		 
		if (FIRE_xx10_OF_LGR)
		{
			boolState[failF_OF_LGR]  =  true;
			FIRE_xx10_OF_LGR = false;
		}
	}

	// Occurrence xx10_OF_LHA
	if ((boolState[failF_OF_LHA] == false) && boolState[required_OF_LHA]) 
	{
		 
		if (FIRE_xx10_OF_LHA)
		{
			boolState[failF_OF_LHA]  =  true;
			FIRE_xx10_OF_LHA = false;
		}
	}

	// Occurrence xx10_OF_LHB
	if ((boolState[failF_OF_LHB] == false) && boolState[required_OF_LHB]) 
	{
		 
		if (FIRE_xx10_OF_LHB)
		{
			boolState[failF_OF_LHB]  =  true;
			FIRE_xx10_OF_LHB = false;
		}
	}

	// Occurrence xx10_OF_LKE
	if ((boolState[failF_OF_LKE] == false) && boolState[required_OF_LKE]) 
	{
		 
		if (FIRE_xx10_OF_LKE)
		{
			boolState[failF_OF_LKE]  =  true;
			FIRE_xx10_OF_LKE = false;
		}
	}

	// Occurrence xx10_OF_LKI
	if ((boolState[failF_OF_LKI] == false) && boolState[required_OF_LKI]) 
	{
		 
		if (FIRE_xx10_OF_LKI)
		{
			boolState[failF_OF_LKI]  =  true;
			FIRE_xx10_OF_LKI = false;
		}
	}

	// Occurrence xx10_OF_LLA
	if ((boolState[failF_OF_LLA] == false) && boolState[required_OF_LLA]) 
	{
		 
		if (FIRE_xx10_OF_LLA)
		{
			boolState[failF_OF_LLA]  =  true;
			FIRE_xx10_OF_LLA = false;
		}
	}

	// Occurrence xx10_OF_LLD
	if ((boolState[failF_OF_LLD] == false) && boolState[required_OF_LLD]) 
	{
		 
		if (FIRE_xx10_OF_LLD)
		{
			boolState[failF_OF_LLD]  =  true;
			FIRE_xx10_OF_LLD = false;
		}
	}

	// Occurrence xx23_OF_OnDemHouse

	if ((boolState[failI_OF_OnDemHouse] == false) && boolState[to_be_fired_OF_OnDemHouse]) 
	{
	
		
		if (FIRE_xx23_OF_OnDemHouse_INS_27) 
		{
			boolState[failI_OF_OnDemHouse]  =  true;
			boolState[already_standby_OF_OnDemHouse]  =  false;
			boolState[already_required_OF_OnDemHouse]  =  false;
			FIRE_xx23_OF_OnDemHouse_INS_27 = false;
		}
	
	}
	if ((boolState[failI_OF_OnDemHouse] == false) && boolState[to_be_fired_OF_OnDemHouse]) 
	{
	
		
		if (FIRE_xx23_OF_OnDemHouse_INS_28) 
		{
			boolState[already_standby_OF_OnDemHouse]  =  false;
			boolState[already_required_OF_OnDemHouse]  =  false;
			FIRE_xx23_OF_OnDemHouse_INS_28 = false;
		}
	
	}
	// Occurrence xx23_OF_RC_CB_LGD2

	if ((boolState[failI_OF_RC_CB_LGD2] == false) && boolState[to_be_fired_OF_RC_CB_LGD2]) 
	{
	
		
		if (FIRE_xx23_OF_RC_CB_LGD2_INS_29) 
		{
			boolState[failI_OF_RC_CB_LGD2]  =  true;
			boolState[already_standby_OF_RC_CB_LGD2]  =  false;
			boolState[already_required_OF_RC_CB_LGD2]  =  false;
			FIRE_xx23_OF_RC_CB_LGD2_INS_29 = false;
		}
	
	}
	if ((boolState[failI_OF_RC_CB_LGD2] == false) && boolState[to_be_fired_OF_RC_CB_LGD2]) 
	{
	
		
		if (FIRE_xx23_OF_RC_CB_LGD2_INS_30) 
		{
			boolState[already_standby_OF_RC_CB_LGD2]  =  false;
			boolState[already_required_OF_RC_CB_LGD2]  =  false;
			FIRE_xx23_OF_RC_CB_LGD2_INS_30 = false;
		}
	
	}
	// Occurrence xx23_OF_RC_CB_LGF2

	if ((boolState[failI_OF_RC_CB_LGF2] == false) && boolState[to_be_fired_OF_RC_CB_LGF2]) 
	{
	
		
		if (FIRE_xx23_OF_RC_CB_LGF2_INS_31) 
		{
			boolState[failI_OF_RC_CB_LGF2]  =  true;
			boolState[already_standby_OF_RC_CB_LGF2]  =  false;
			boolState[already_required_OF_RC_CB_LGF2]  =  false;
			FIRE_xx23_OF_RC_CB_LGF2_INS_31 = false;
		}
	
	}
	if ((boolState[failI_OF_RC_CB_LGF2] == false) && boolState[to_be_fired_OF_RC_CB_LGF2]) 
	{
	
		
		if (FIRE_xx23_OF_RC_CB_LGF2_INS_32) 
		{
			boolState[already_standby_OF_RC_CB_LGF2]  =  false;
			boolState[already_required_OF_RC_CB_LGF2]  =  false;
			FIRE_xx23_OF_RC_CB_LGF2_INS_32 = false;
		}
	
	}
	// Occurrence xx23_OF_RC_CB_LHA2

	if ((boolState[failI_OF_RC_CB_LHA2] == false) && (boolState[to_be_fired_OF_RC_CB_LHA2]
	&& ( !boolState[to_be_fired_OF_RO_CB_LHA1]))) 
	{
	
		
		if (FIRE_xx23_OF_RC_CB_LHA2_INS_33) 
		{
			boolState[failI_OF_RC_CB_LHA2]  =  true;
			boolState[already_standby_OF_RC_CB_LHA2]  =  false;
			boolState[already_required_OF_RC_CB_LHA2]  =  false;
			FIRE_xx23_OF_RC_CB_LHA2_INS_33 = false;
		}
	
	}
	if ((boolState[failI_OF_RC_CB_LHA2] == false) && (boolState[to_be_fired_OF_RC_CB_LHA2]
	&& ( !boolState[to_be_fired_OF_RO_CB_LHA1]))) 
	{
	
		
		if (FIRE_xx23_OF_RC_CB_LHA2_INS_34) 
		{
			boolState[already_standby_OF_RC_CB_LHA2]  =  false;
			boolState[already_required_OF_RC_CB_LHA2]  =  false;
			FIRE_xx23_OF_RC_CB_LHA2_INS_34 = false;
		}
	
	}
	// Occurrence xx23_OF_RC_CB_LHA3

	if ((boolState[failI_OF_RC_CB_LHA3] == false) && (boolState[to_be_fired_OF_RC_CB_LHA3]
	&& ( !boolState[to_be_fired_OF_RO_CB_LHA2]))) 
	{
	
		
		if (FIRE_xx23_OF_RC_CB_LHA3_INS_35) 
		{
			boolState[failI_OF_RC_CB_LHA3]  =  true;
			boolState[already_standby_OF_RC_CB_LHA3]  =  false;
			boolState[already_required_OF_RC_CB_LHA3]  =  false;
			FIRE_xx23_OF_RC_CB_LHA3_INS_35 = false;
		}
	
	}
	if ((boolState[failI_OF_RC_CB_LHA3] == false) && (boolState[to_be_fired_OF_RC_CB_LHA3]
	&& ( !boolState[to_be_fired_OF_RO_CB_LHA2]))) 
	{
	
		
		if (FIRE_xx23_OF_RC_CB_LHA3_INS_36) 
		{
			boolState[already_standby_OF_RC_CB_LHA3]  =  false;
			boolState[already_required_OF_RC_CB_LHA3]  =  false;
			FIRE_xx23_OF_RC_CB_LHA3_INS_36 = false;
		}
	
	}
	// Occurrence xx23_OF_RC_CB_LHB2

	if ((boolState[failI_OF_RC_CB_LHB2] == false) && (boolState[to_be_fired_OF_RC_CB_LHB2]
	&& ( !boolState[to_be_fired_OF_RO_CB_LHB1]))) 
	{
	
		
		if (FIRE_xx23_OF_RC_CB_LHB2_INS_37) 
		{
			boolState[failI_OF_RC_CB_LHB2]  =  true;
			boolState[already_standby_OF_RC_CB_LHB2]  =  false;
			boolState[already_required_OF_RC_CB_LHB2]  =  false;
			FIRE_xx23_OF_RC_CB_LHB2_INS_37 = false;
		}
	
	}
	if ((boolState[failI_OF_RC_CB_LHB2] == false) && (boolState[to_be_fired_OF_RC_CB_LHB2]
	&& ( !boolState[to_be_fired_OF_RO_CB_LHB1]))) 
	{
	
		
		if (FIRE_xx23_OF_RC_CB_LHB2_INS_38) 
		{
			boolState[already_standby_OF_RC_CB_LHB2]  =  false;
			boolState[already_required_OF_RC_CB_LHB2]  =  false;
			FIRE_xx23_OF_RC_CB_LHB2_INS_38 = false;
		}
	
	}
	// Occurrence xx10_OF_RDA1
	if ((boolState[failF_OF_RDA1] == false) && boolState[required_OF_RDA1]) 
	{
		 
		if (FIRE_xx10_OF_RDA1)
		{
			boolState[failF_OF_RDA1]  =  true;
			FIRE_xx10_OF_RDA1 = false;
		}
	}

	// Occurrence xx10_OF_RDA2
	if ((boolState[failF_OF_RDA2] == false) && boolState[required_OF_RDA2]) 
	{
		 
		if (FIRE_xx10_OF_RDA2)
		{
			boolState[failF_OF_RDA2]  =  true;
			FIRE_xx10_OF_RDA2 = false;
		}
	}

	// Occurrence xx10_OF_RDB1
	if ((boolState[failF_OF_RDB1] == false) && boolState[required_OF_RDB1]) 
	{
		 
		if (FIRE_xx10_OF_RDB1)
		{
			boolState[failF_OF_RDB1]  =  true;
			FIRE_xx10_OF_RDB1 = false;
		}
	}

	// Occurrence xx10_OF_RDB2
	if ((boolState[failF_OF_RDB2] == false) && boolState[required_OF_RDB2]) 
	{
		 
		if (FIRE_xx10_OF_RDB2)
		{
			boolState[failF_OF_RDB2]  =  true;
			FIRE_xx10_OF_RDB2 = false;
		}
	}

	// Occurrence xx23_OF_RO_CB_LHA1

	if ((boolState[failI_OF_RO_CB_LHA1] == false) && (boolState[to_be_fired_OF_RO_CB_LHA1]
	&& ( !boolState[to_be_fired_OF_demand_DGA]))) 
	{
	
		
		if (FIRE_xx23_OF_RO_CB_LHA1_INS_43) 
		{
			boolState[failI_OF_RO_CB_LHA1]  =  true;
			boolState[already_standby_OF_RO_CB_LHA1]  =  false;
			boolState[already_required_OF_RO_CB_LHA1]  =  false;
			FIRE_xx23_OF_RO_CB_LHA1_INS_43 = false;
		}
	
	}
	if ((boolState[failI_OF_RO_CB_LHA1] == false) && (boolState[to_be_fired_OF_RO_CB_LHA1]
	&& ( !boolState[to_be_fired_OF_demand_DGA]))) 
	{
	
		
		if (FIRE_xx23_OF_RO_CB_LHA1_INS_44) 
		{
			boolState[already_standby_OF_RO_CB_LHA1]  =  false;
			boolState[already_required_OF_RO_CB_LHA1]  =  false;
			FIRE_xx23_OF_RO_CB_LHA1_INS_44 = false;
		}
	
	}
	// Occurrence xx23_OF_RO_CB_LHA2

	if ((boolState[failI_OF_RO_CB_LHA2] == false) && (boolState[to_be_fired_OF_RO_CB_LHA2]
	&& ( !boolState[to_be_fired_OF_demand_TAC]))) 
	{
	
		
		if (FIRE_xx23_OF_RO_CB_LHA2_INS_45) 
		{
			boolState[failI_OF_RO_CB_LHA2]  =  true;
			boolState[already_standby_OF_RO_CB_LHA2]  =  false;
			boolState[already_required_OF_RO_CB_LHA2]  =  false;
			FIRE_xx23_OF_RO_CB_LHA2_INS_45 = false;
		}
	
	}
	if ((boolState[failI_OF_RO_CB_LHA2] == false) && (boolState[to_be_fired_OF_RO_CB_LHA2]
	&& ( !boolState[to_be_fired_OF_demand_TAC]))) 
	{
	
		
		if (FIRE_xx23_OF_RO_CB_LHA2_INS_46) 
		{
			boolState[already_standby_OF_RO_CB_LHA2]  =  false;
			boolState[already_required_OF_RO_CB_LHA2]  =  false;
			FIRE_xx23_OF_RO_CB_LHA2_INS_46 = false;
		}
	
	}
	// Occurrence xx23_OF_RO_CB_LHB1

	if ((boolState[failI_OF_RO_CB_LHB1] == false) && (boolState[to_be_fired_OF_RO_CB_LHB1]
	&& ( !boolState[to_be_fired_OF_demand_DGB]))) 
	{
	
		
		if (FIRE_xx23_OF_RO_CB_LHB1_INS_47) 
		{
			boolState[failI_OF_RO_CB_LHB1]  =  true;
			boolState[already_standby_OF_RO_CB_LHB1]  =  false;
			boolState[already_required_OF_RO_CB_LHB1]  =  false;
			FIRE_xx23_OF_RO_CB_LHB1_INS_47 = false;
		}
	
	}
	if ((boolState[failI_OF_RO_CB_LHB1] == false) && (boolState[to_be_fired_OF_RO_CB_LHB1]
	&& ( !boolState[to_be_fired_OF_demand_DGB]))) 
	{
	
		
		if (FIRE_xx23_OF_RO_CB_LHB1_INS_48) 
		{
			boolState[already_standby_OF_RO_CB_LHB1]  =  false;
			boolState[already_required_OF_RO_CB_LHB1]  =  false;
			FIRE_xx23_OF_RO_CB_LHB1_INS_48 = false;
		}
	
	}
	// Occurrence xx10_OF_SH_CB_GEV
	if ((boolState[failF_OF_SH_CB_GEV] == false) && boolState[required_OF_SH_CB_GEV]) 
	{
		 
		if (FIRE_xx10_OF_SH_CB_GEV)
		{
			boolState[failF_OF_SH_CB_GEV]  =  true;
			FIRE_xx10_OF_SH_CB_GEV = false;
		}
	}

	// Occurrence xx10_OF_SH_CB_LBA1
	if ((boolState[failF_OF_SH_CB_LBA1] == false) && boolState[required_OF_SH_CB_LBA1]) 
	{
		 
		if (FIRE_xx10_OF_SH_CB_LBA1)
		{
			boolState[failF_OF_SH_CB_LBA1]  =  true;
			FIRE_xx10_OF_SH_CB_LBA1 = false;
		}
	}

	// Occurrence xx10_OF_SH_CB_LBA2
	if ((boolState[failF_OF_SH_CB_LBA2] == false) && boolState[required_OF_SH_CB_LBA2]) 
	{
		 
		if (FIRE_xx10_OF_SH_CB_LBA2)
		{
			boolState[failF_OF_SH_CB_LBA2]  =  true;
			FIRE_xx10_OF_SH_CB_LBA2 = false;
		}
	}

	// Occurrence xx10_OF_SH_CB_LBB1
	if ((boolState[failF_OF_SH_CB_LBB1] == false) && boolState[required_OF_SH_CB_LBB1]) 
	{
		 
		if (FIRE_xx10_OF_SH_CB_LBB1)
		{
			boolState[failF_OF_SH_CB_LBB1]  =  true;
			FIRE_xx10_OF_SH_CB_LBB1 = false;
		}
	}

	// Occurrence xx10_OF_SH_CB_LBB2
	if ((boolState[failF_OF_SH_CB_LBB2] == false) && boolState[required_OF_SH_CB_LBB2]) 
	{
		 
		if (FIRE_xx10_OF_SH_CB_LBB2)
		{
			boolState[failF_OF_SH_CB_LBB2]  =  true;
			FIRE_xx10_OF_SH_CB_LBB2 = false;
		}
	}

	// Occurrence xx10_OF_SH_CB_LGA
	if ((boolState[failF_OF_SH_CB_LGA] == false) && boolState[required_OF_SH_CB_LGA]) 
	{
		 
		if (FIRE_xx10_OF_SH_CB_LGA)
		{
			boolState[failF_OF_SH_CB_LGA]  =  true;
			FIRE_xx10_OF_SH_CB_LGA = false;
		}
	}

	// Occurrence xx10_OF_SH_CB_LGB
	if ((boolState[failF_OF_SH_CB_LGB] == false) && boolState[required_OF_SH_CB_LGB]) 
	{
		 
		if (FIRE_xx10_OF_SH_CB_LGB)
		{
			boolState[failF_OF_SH_CB_LGB]  =  true;
			FIRE_xx10_OF_SH_CB_LGB = false;
		}
	}

	// Occurrence xx10_OF_SH_CB_LGD1
	if ((boolState[failF_OF_SH_CB_LGD1] == false) && boolState[required_OF_SH_CB_LGD1]) 
	{
		 
		if (FIRE_xx10_OF_SH_CB_LGD1)
		{
			boolState[failF_OF_SH_CB_LGD1]  =  true;
			FIRE_xx10_OF_SH_CB_LGD1 = false;
		}
	}

	// Occurrence xx10_OF_SH_CB_LGD2
	if ((boolState[failF_OF_SH_CB_LGD2] == false) && boolState[required_OF_SH_CB_LGD2]) 
	{
		 
		if (FIRE_xx10_OF_SH_CB_LGD2)
		{
			boolState[failF_OF_SH_CB_LGD2]  =  true;
			FIRE_xx10_OF_SH_CB_LGD2 = false;
		}
	}

	// Occurrence xx10_OF_SH_CB_LGE1
	if ((boolState[failF_OF_SH_CB_LGE1] == false) && boolState[required_OF_SH_CB_LGE1]) 
	{
		 
		if (FIRE_xx10_OF_SH_CB_LGE1)
		{
			boolState[failF_OF_SH_CB_LGE1]  =  true;
			FIRE_xx10_OF_SH_CB_LGE1 = false;
		}
	}

	// Occurrence xx10_OF_SH_CB_LGF1
	if ((boolState[failF_OF_SH_CB_LGF1] == false) && boolState[required_OF_SH_CB_LGF1]) 
	{
		 
		if (FIRE_xx10_OF_SH_CB_LGF1)
		{
			boolState[failF_OF_SH_CB_LGF1]  =  true;
			FIRE_xx10_OF_SH_CB_LGF1 = false;
		}
	}

	// Occurrence xx10_OF_SH_CB_LGF2
	if ((boolState[failF_OF_SH_CB_LGF2] == false) && boolState[required_OF_SH_CB_LGF2]) 
	{
		 
		if (FIRE_xx10_OF_SH_CB_LGF2)
		{
			boolState[failF_OF_SH_CB_LGF2]  =  true;
			FIRE_xx10_OF_SH_CB_LGF2 = false;
		}
	}

	// Occurrence xx10_OF_SH_CB_LHA1
	if ((boolState[failF_OF_SH_CB_LHA1] == false) && boolState[required_OF_SH_CB_LHA1]) 
	{
		 
		if (FIRE_xx10_OF_SH_CB_LHA1)
		{
			boolState[failF_OF_SH_CB_LHA1]  =  true;
			FIRE_xx10_OF_SH_CB_LHA1 = false;
		}
	}

	// Occurrence xx10_OF_SH_CB_LHA2
	if ((boolState[failF_OF_SH_CB_LHA2] == false) && boolState[required_OF_SH_CB_LHA2]) 
	{
		 
		if (FIRE_xx10_OF_SH_CB_LHA2)
		{
			boolState[failF_OF_SH_CB_LHA2]  =  true;
			FIRE_xx10_OF_SH_CB_LHA2 = false;
		}
	}

	// Occurrence xx10_OF_SH_CB_LHA3
	if ((boolState[failF_OF_SH_CB_LHA3] == false) && boolState[required_OF_SH_CB_LHA3]) 
	{
		 
		if (FIRE_xx10_OF_SH_CB_LHA3)
		{
			boolState[failF_OF_SH_CB_LHA3]  =  true;
			FIRE_xx10_OF_SH_CB_LHA3 = false;
		}
	}

	// Occurrence xx10_OF_SH_CB_LHB1
	if ((boolState[failF_OF_SH_CB_LHB1] == false) && boolState[required_OF_SH_CB_LHB1]) 
	{
		 
		if (FIRE_xx10_OF_SH_CB_LHB1)
		{
			boolState[failF_OF_SH_CB_LHB1]  =  true;
			FIRE_xx10_OF_SH_CB_LHB1 = false;
		}
	}

	// Occurrence xx10_OF_SH_CB_LHB2
	if ((boolState[failF_OF_SH_CB_LHB2] == false) && boolState[required_OF_SH_CB_LHB2]) 
	{
		 
		if (FIRE_xx10_OF_SH_CB_LHB2)
		{
			boolState[failF_OF_SH_CB_LHB2]  =  true;
			FIRE_xx10_OF_SH_CB_LHB2 = false;
		}
	}

	// Occurrence xx10_OF_SH_CB_RDA1
	if ((boolState[failF_OF_SH_CB_RDA1] == false) && boolState[required_OF_SH_CB_RDA1]) 
	{
		 
		if (FIRE_xx10_OF_SH_CB_RDA1)
		{
			boolState[failF_OF_SH_CB_RDA1]  =  true;
			FIRE_xx10_OF_SH_CB_RDA1 = false;
		}
	}

	// Occurrence xx10_OF_SH_CB_RDA2
	if ((boolState[failF_OF_SH_CB_RDA2] == false) && boolState[required_OF_SH_CB_RDA2]) 
	{
		 
		if (FIRE_xx10_OF_SH_CB_RDA2)
		{
			boolState[failF_OF_SH_CB_RDA2]  =  true;
			FIRE_xx10_OF_SH_CB_RDA2 = false;
		}
	}

	// Occurrence xx10_OF_SH_CB_RDB1
	if ((boolState[failF_OF_SH_CB_RDB1] == false) && boolState[required_OF_SH_CB_RDB1]) 
	{
		 
		if (FIRE_xx10_OF_SH_CB_RDB1)
		{
			boolState[failF_OF_SH_CB_RDB1]  =  true;
			FIRE_xx10_OF_SH_CB_RDB1 = false;
		}
	}

	// Occurrence xx10_OF_SH_CB_RDB2
	if ((boolState[failF_OF_SH_CB_RDB2] == false) && boolState[required_OF_SH_CB_RDB2]) 
	{
		 
		if (FIRE_xx10_OF_SH_CB_RDB2)
		{
			boolState[failF_OF_SH_CB_RDB2]  =  true;
			FIRE_xx10_OF_SH_CB_RDB2 = false;
		}
	}

	// Occurrence xx10_OF_SH_CB_TUA1
	if ((boolState[failF_OF_SH_CB_TUA1] == false) && boolState[required_OF_SH_CB_TUA1]) 
	{
		 
		if (FIRE_xx10_OF_SH_CB_TUA1)
		{
			boolState[failF_OF_SH_CB_TUA1]  =  true;
			FIRE_xx10_OF_SH_CB_TUA1 = false;
		}
	}

	// Occurrence xx10_OF_SH_CB_TUA2
	if ((boolState[failF_OF_SH_CB_TUA2] == false) && boolState[required_OF_SH_CB_TUA2]) 
	{
		 
		if (FIRE_xx10_OF_SH_CB_TUA2)
		{
			boolState[failF_OF_SH_CB_TUA2]  =  true;
			FIRE_xx10_OF_SH_CB_TUA2 = false;
		}
	}

	// Occurrence xx10_OF_SH_CB_TUB1
	if ((boolState[failF_OF_SH_CB_TUB1] == false) && boolState[required_OF_SH_CB_TUB1]) 
	{
		 
		if (FIRE_xx10_OF_SH_CB_TUB1)
		{
			boolState[failF_OF_SH_CB_TUB1]  =  true;
			FIRE_xx10_OF_SH_CB_TUB1 = false;
		}
	}

	// Occurrence xx10_OF_SH_CB_TUB2
	if ((boolState[failF_OF_SH_CB_TUB2] == false) && boolState[required_OF_SH_CB_TUB2]) 
	{
		 
		if (FIRE_xx10_OF_SH_CB_TUB2)
		{
			boolState[failF_OF_SH_CB_TUB2]  =  true;
			FIRE_xx10_OF_SH_CB_TUB2 = false;
		}
	}

	// Occurrence xx10_OF_SH_CB_line_GEV
	if ((boolState[failF_OF_SH_CB_line_GEV] == false) && boolState[required_OF_SH_CB_line_GEV]) 
	{
		 
		if (FIRE_xx10_OF_SH_CB_line_GEV)
		{
			boolState[failF_OF_SH_CB_line_GEV]  =  true;
			FIRE_xx10_OF_SH_CB_line_GEV = false;
		}
	}

	// Occurrence xx10_OF_SH_CB_line_LGR
	if ((boolState[failF_OF_SH_CB_line_LGR] == false) && boolState[required_OF_SH_CB_line_LGR]) 
	{
		 
		if (FIRE_xx10_OF_SH_CB_line_LGR)
		{
			boolState[failF_OF_SH_CB_line_LGR]  =  true;
			FIRE_xx10_OF_SH_CB_line_LGR = false;
		}
	}

	// Occurrence xx10_OF_SUBSTATION
	if ((boolState[failF_OF_SUBSTATION] == false) && boolState[required_OF_SUBSTATION]) 
	{
		 
		if (FIRE_xx10_OF_SUBSTATION)
		{
			boolState[failF_OF_SUBSTATION]  =  true;
			FIRE_xx10_OF_SUBSTATION = false;
		}
	}

	// Occurrence xx10_OF_TA
	if ((boolState[failF_OF_TA] == false) && boolState[required_OF_TA]) 
	{
		 
		if (FIRE_xx10_OF_TA)
		{
			boolState[failF_OF_TA]  =  true;
			FIRE_xx10_OF_TA = false;
		}
	}

	// Occurrence xx10_OF_TAC
	if ((boolState[failF_OF_TAC] == false) && boolState[required_OF_TAC]) 
	{
		 
		if (FIRE_xx10_OF_TAC)
		{
			boolState[failF_OF_TAC]  =  true;
			FIRE_xx10_OF_TAC = false;
		}
	}

	// Occurrence xx10_OF_TP
	if ((boolState[failF_OF_TP] == false) && boolState[required_OF_TP]) 
	{
		 
		if (FIRE_xx10_OF_TP)
		{
			boolState[failF_OF_TP]  =  true;
			FIRE_xx10_OF_TP = false;
		}
	}

	// Occurrence xx10_OF_TS
	if ((boolState[failF_OF_TS] == false) && boolState[required_OF_TS]) 
	{
		 
		if (FIRE_xx10_OF_TS)
		{
			boolState[failF_OF_TS]  =  true;
			FIRE_xx10_OF_TS = false;
		}
	}

	// Occurrence xx10_OF_TUA1
	if ((boolState[failF_OF_TUA1] == false) && boolState[required_OF_TUA1]) 
	{
		 
		if (FIRE_xx10_OF_TUA1)
		{
			boolState[failF_OF_TUA1]  =  true;
			FIRE_xx10_OF_TUA1 = false;
		}
	}

	// Occurrence xx10_OF_TUA2
	if ((boolState[failF_OF_TUA2] == false) && boolState[required_OF_TUA2]) 
	{
		 
		if (FIRE_xx10_OF_TUA2)
		{
			boolState[failF_OF_TUA2]  =  true;
			FIRE_xx10_OF_TUA2 = false;
		}
	}

	// Occurrence xx10_OF_TUB1
	if ((boolState[failF_OF_TUB1] == false) && boolState[required_OF_TUB1]) 
	{
		 
		if (FIRE_xx10_OF_TUB1)
		{
			boolState[failF_OF_TUB1]  =  true;
			FIRE_xx10_OF_TUB1 = false;
		}
	}

	// Occurrence xx10_OF_TUB2
	if ((boolState[failF_OF_TUB2] == false) && boolState[required_OF_TUB2]) 
	{
		 
		if (FIRE_xx10_OF_TUB2)
		{
			boolState[failF_OF_TUB2]  =  true;
			FIRE_xx10_OF_TUB2 = false;
		}
	}

	// Occurrence xx10_OF_UNIT
	if ((boolState[failF_OF_UNIT] == false) && boolState[required_OF_UNIT]) 
	{
		 
		if (FIRE_xx10_OF_UNIT)
		{
			boolState[failF_OF_UNIT]  =  true;
			FIRE_xx10_OF_UNIT = false;
		}
	}

	// Occurrence xx23_OF_demand_CCF_DG

	if ((boolState[failI_OF_demand_CCF_DG] == false) && boolState[to_be_fired_OF_demand_CCF_DG]) 
	{
	
		
		if (FIRE_xx23_OF_demand_CCF_DG_INS_86) 
		{
			boolState[failI_OF_demand_CCF_DG]  =  true;
			boolState[already_standby_OF_demand_CCF_DG]  =  false;
			boolState[already_required_OF_demand_CCF_DG]  =  false;
			FIRE_xx23_OF_demand_CCF_DG_INS_86 = false;
		}
	
	}
	if ((boolState[failI_OF_demand_CCF_DG] == false) && boolState[to_be_fired_OF_demand_CCF_DG]) 
	{
	
		
		if (FIRE_xx23_OF_demand_CCF_DG_INS_87) 
		{
			boolState[already_standby_OF_demand_CCF_DG]  =  false;
			boolState[already_required_OF_demand_CCF_DG]  =  false;
			FIRE_xx23_OF_demand_CCF_DG_INS_87 = false;
		}
	
	}
	// Occurrence xx23_OF_demand_DGA

	if ((boolState[failI_OF_demand_DGA] == false) && (boolState[to_be_fired_OF_demand_DGA]
	&& ( !boolState[to_be_fired_OF_demand_CCF_DG]))) 
	{
	
		
		if (FIRE_xx23_OF_demand_DGA_INS_88) 
		{
			boolState[failI_OF_demand_DGA]  =  true;
			boolState[already_standby_OF_demand_DGA]  =  false;
			boolState[already_required_OF_demand_DGA]  =  false;
			FIRE_xx23_OF_demand_DGA_INS_88 = false;
		}
	
	}
	if ((boolState[failI_OF_demand_DGA] == false) && (boolState[to_be_fired_OF_demand_DGA]
	&& ( !boolState[to_be_fired_OF_demand_CCF_DG]))) 
	{
	
		
		if (FIRE_xx23_OF_demand_DGA_INS_89) 
		{
			boolState[already_standby_OF_demand_DGA]  =  false;
			boolState[already_required_OF_demand_DGA]  =  false;
			FIRE_xx23_OF_demand_DGA_INS_89 = false;
		}
	
	}
	// Occurrence xx23_OF_demand_DGB

	if ((boolState[failI_OF_demand_DGB] == false) && (boolState[to_be_fired_OF_demand_DGB]
	&& ( !boolState[to_be_fired_OF_demand_CCF_DG]))) 
	{
	
		
		if (FIRE_xx23_OF_demand_DGB_INS_90) 
		{
			boolState[failI_OF_demand_DGB]  =  true;
			boolState[already_standby_OF_demand_DGB]  =  false;
			boolState[already_required_OF_demand_DGB]  =  false;
			FIRE_xx23_OF_demand_DGB_INS_90 = false;
		}
	
	}
	if ((boolState[failI_OF_demand_DGB] == false) && (boolState[to_be_fired_OF_demand_DGB]
	&& ( !boolState[to_be_fired_OF_demand_CCF_DG]))) 
	{
	
		
		if (FIRE_xx23_OF_demand_DGB_INS_91) 
		{
			boolState[already_standby_OF_demand_DGB]  =  false;
			boolState[already_required_OF_demand_DGB]  =  false;
			FIRE_xx23_OF_demand_DGB_INS_91 = false;
		}
	
	}
	// Occurrence xx23_OF_demand_TAC

	if ((boolState[failI_OF_demand_TAC] == false) && boolState[to_be_fired_OF_demand_TAC]) 
	{
	
		
		if (FIRE_xx23_OF_demand_TAC_INS_92) 
		{
			boolState[failI_OF_demand_TAC]  =  true;
			boolState[already_standby_OF_demand_TAC]  =  false;
			boolState[already_required_OF_demand_TAC]  =  false;
			FIRE_xx23_OF_demand_TAC_INS_92 = false;
		}
	
	}
	if ((boolState[failI_OF_demand_TAC] == false) && boolState[to_be_fired_OF_demand_TAC]) 
	{
	
		
		if (FIRE_xx23_OF_demand_TAC_INS_93) 
		{
			boolState[already_standby_OF_demand_TAC]  =  false;
			boolState[already_required_OF_demand_TAC]  =  false;
			FIRE_xx23_OF_demand_TAC_INS_93 = false;
		}
	
	}
}

std::vector<std::tuple<int, double, std::string, int>> storm::figaro::FigaroProgram_NPPS_No_trim_No_repair::showFireableOccurrences()
{
	std::vector<std::tuple<int, double, std::string, int>> list = {};
	//cout <<"\n==================== List of fireable occurrences :  ====================" << endl;

	if ((boolState[failI_OF_OnDemHouse] == false) && boolState[to_be_fired_OF_OnDemHouse])
	{
		//cout << "27 :  INS_SUB_COUNT (1) |FAULT | failI  LABEL \"instantaneous failure OnDemHouse\" | DIST INS (0.2) | INDUCING boolState[failI_OF_OnDemHouse]  =  TRUE,already_standby_OF_OnDemHouse  =  FALSE,already_required_OF_OnDemHouse  =  FALSE" << endl;
		list.push_back(make_tuple(27, 0.2, "INS", 1));
	}
	if ((boolState[failI_OF_OnDemHouse] == false) && boolState[to_be_fired_OF_OnDemHouse])
	{
		//cout << "28 :  INS_SUB_COUNT (1) |TRANSITION | good | DIST INS (0.8) | INDUCING boolState[already_standby_OF_OnDemHouse]  =  FALSE,already_required_OF_OnDemHouse  =  FALSE" << endl;
		list.push_back(make_tuple(28, 0.8, "INS", 1));
	}
	if ((boolState[failI_OF_RC_CB_LGD2] == false) && boolState[to_be_fired_OF_RC_CB_LGD2])
	{
		//cout << "29 :  INS_SUB_COUNT (2) |FAULT | failI  LABEL \"instantaneous failure RC_CB_LGD2\" | DIST INS (0.0002) | INDUCING boolState[failI_OF_RC_CB_LGD2]  =  TRUE,already_standby_OF_RC_CB_LGD2  =  FALSE,already_required_OF_RC_CB_LGD2  =  FALSE" << endl;
		list.push_back(make_tuple(29, 0.0002, "INS", 2));
	}
	if ((boolState[failI_OF_RC_CB_LGD2] == false) && boolState[to_be_fired_OF_RC_CB_LGD2])
	{
		//cout << "30 :  INS_SUB_COUNT (2) |TRANSITION | good | DIST INS (0.9998) | INDUCING boolState[already_standby_OF_RC_CB_LGD2]  =  FALSE,already_required_OF_RC_CB_LGD2  =  FALSE" << endl;
		list.push_back(make_tuple(30, 0.9998, "INS", 2));
	}
	if ((boolState[failI_OF_RC_CB_LGF2] == false) && boolState[to_be_fired_OF_RC_CB_LGF2])
	{
		//cout << "31 :  INS_SUB_COUNT (3) |FAULT | failI  LABEL \"instantaneous failure RC_CB_LGF2\" | DIST INS (0.0002) | INDUCING boolState[failI_OF_RC_CB_LGF2]  =  TRUE,already_standby_OF_RC_CB_LGF2  =  FALSE,already_required_OF_RC_CB_LGF2  =  FALSE" << endl;
		list.push_back(make_tuple(31, 0.0002, "INS", 3));
	}
	if ((boolState[failI_OF_RC_CB_LGF2] == false) && boolState[to_be_fired_OF_RC_CB_LGF2])
	{
		//cout << "32 :  INS_SUB_COUNT (3) |TRANSITION | good | DIST INS (0.9998) | INDUCING boolState[already_standby_OF_RC_CB_LGF2]  =  FALSE,already_required_OF_RC_CB_LGF2  =  FALSE" << endl;
		list.push_back(make_tuple(32, 0.9998, "INS", 3));
	}
	if ((boolState[failI_OF_RC_CB_LHA2] == false) && (boolState[to_be_fired_OF_RC_CB_LHA2] && ( !boolState[to_be_fired_OF_RO_CB_LHA1])))
	{
		//cout << "33 :  INS_SUB_COUNT (4) |FAULT | failI  LABEL \"instantaneous failure RC_CB_LHA2\" | DIST INS (0.0002) | INDUCING boolState[failI_OF_RC_CB_LHA2]  =  TRUE,already_standby_OF_RC_CB_LHA2  =  FALSE,already_required_OF_RC_CB_LHA2  =  FALSE" << endl;
		list.push_back(make_tuple(33, 0.0002, "INS", 4));
	}
	if ((boolState[failI_OF_RC_CB_LHA2] == false) && (boolState[to_be_fired_OF_RC_CB_LHA2] && ( !boolState[to_be_fired_OF_RO_CB_LHA1])))
	{
		//cout << "34 :  INS_SUB_COUNT (4) |TRANSITION | good | DIST INS (0.9998) | INDUCING boolState[already_standby_OF_RC_CB_LHA2]  =  FALSE,already_required_OF_RC_CB_LHA2  =  FALSE" << endl;
		list.push_back(make_tuple(34, 0.9998, "INS", 4));
	}
	if ((boolState[failI_OF_RC_CB_LHA3] == false) && (boolState[to_be_fired_OF_RC_CB_LHA3] && ( !boolState[to_be_fired_OF_RO_CB_LHA2])))
	{
		//cout << "35 :  INS_SUB_COUNT (5) |FAULT | failI  LABEL \"instantaneous failure RC_CB_LHA3\" | DIST INS (0.0002) | INDUCING boolState[failI_OF_RC_CB_LHA3]  =  TRUE,already_standby_OF_RC_CB_LHA3  =  FALSE,already_required_OF_RC_CB_LHA3  =  FALSE" << endl;
		list.push_back(make_tuple(35, 0.0002, "INS", 5));
	}
	if ((boolState[failI_OF_RC_CB_LHA3] == false) && (boolState[to_be_fired_OF_RC_CB_LHA3] && ( !boolState[to_be_fired_OF_RO_CB_LHA2])))
	{
		//cout << "36 :  INS_SUB_COUNT (5) |TRANSITION | good | DIST INS (0.9998) | INDUCING boolState[already_standby_OF_RC_CB_LHA3]  =  FALSE,already_required_OF_RC_CB_LHA3  =  FALSE" << endl;
		list.push_back(make_tuple(36, 0.9998, "INS", 5));
	}
	if ((boolState[failI_OF_RC_CB_LHB2] == false) && (boolState[to_be_fired_OF_RC_CB_LHB2] && ( !boolState[to_be_fired_OF_RO_CB_LHB1])))
	{
		//cout << "37 :  INS_SUB_COUNT (6) |FAULT | failI  LABEL \"instantaneous failure RC_CB_LHB2\" | DIST INS (0.0002) | INDUCING boolState[failI_OF_RC_CB_LHB2]  =  TRUE,already_standby_OF_RC_CB_LHB2  =  FALSE,already_required_OF_RC_CB_LHB2  =  FALSE" << endl;
		list.push_back(make_tuple(37, 0.0002, "INS", 6));
	}
	if ((boolState[failI_OF_RC_CB_LHB2] == false) && (boolState[to_be_fired_OF_RC_CB_LHB2] && ( !boolState[to_be_fired_OF_RO_CB_LHB1])))
	{
		//cout << "38 :  INS_SUB_COUNT (6) |TRANSITION | good | DIST INS (0.9998) | INDUCING boolState[already_standby_OF_RC_CB_LHB2]  =  FALSE,already_required_OF_RC_CB_LHB2  =  FALSE" << endl;
		list.push_back(make_tuple(38, 0.9998, "INS", 6));
	}
	if ((boolState[failI_OF_RO_CB_LHA1] == false) && (boolState[to_be_fired_OF_RO_CB_LHA1] && ( !boolState[to_be_fired_OF_demand_DGA])))
	{
		//cout << "43 :  INS_SUB_COUNT (7) |FAULT | failI  LABEL \"instantaneous failure RO_CB_LHA1\" | DIST INS (0.0002) | INDUCING boolState[failI_OF_RO_CB_LHA1]  =  TRUE,already_standby_OF_RO_CB_LHA1  =  FALSE,already_required_OF_RO_CB_LHA1  =  FALSE" << endl;
		list.push_back(make_tuple(43, 0.0002, "INS", 7));
	}
	if ((boolState[failI_OF_RO_CB_LHA1] == false) && (boolState[to_be_fired_OF_RO_CB_LHA1] && ( !boolState[to_be_fired_OF_demand_DGA])))
	{
		//cout << "44 :  INS_SUB_COUNT (7) |TRANSITION | good | DIST INS (0.9998) | INDUCING boolState[already_standby_OF_RO_CB_LHA1]  =  FALSE,already_required_OF_RO_CB_LHA1  =  FALSE" << endl;
		list.push_back(make_tuple(44, 0.9998, "INS", 7));
	}
	if ((boolState[failI_OF_RO_CB_LHA2] == false) && (boolState[to_be_fired_OF_RO_CB_LHA2] && ( !boolState[to_be_fired_OF_demand_TAC])))
	{
		//cout << "45 :  INS_SUB_COUNT (8) |FAULT | failI  LABEL \"instantaneous failure RO_CB_LHA2\" | DIST INS (0.0002) | INDUCING boolState[failI_OF_RO_CB_LHA2]  =  TRUE,already_standby_OF_RO_CB_LHA2  =  FALSE,already_required_OF_RO_CB_LHA2  =  FALSE" << endl;
		list.push_back(make_tuple(45, 0.0002, "INS", 8));
	}
	if ((boolState[failI_OF_RO_CB_LHA2] == false) && (boolState[to_be_fired_OF_RO_CB_LHA2] && ( !boolState[to_be_fired_OF_demand_TAC])))
	{
		//cout << "46 :  INS_SUB_COUNT (8) |TRANSITION | good | DIST INS (0.9998) | INDUCING boolState[already_standby_OF_RO_CB_LHA2]  =  FALSE,already_required_OF_RO_CB_LHA2  =  FALSE" << endl;
		list.push_back(make_tuple(46, 0.9998, "INS", 8));
	}
	if ((boolState[failI_OF_RO_CB_LHB1] == false) && (boolState[to_be_fired_OF_RO_CB_LHB1] && ( !boolState[to_be_fired_OF_demand_DGB])))
	{
		//cout << "47 :  INS_SUB_COUNT (9) |FAULT | failI  LABEL \"instantaneous failure RO_CB_LHB1\" | DIST INS (0.0002) | INDUCING boolState[failI_OF_RO_CB_LHB1]  =  TRUE,already_standby_OF_RO_CB_LHB1  =  FALSE,already_required_OF_RO_CB_LHB1  =  FALSE" << endl;
		list.push_back(make_tuple(47, 0.0002, "INS", 9));
	}
	if ((boolState[failI_OF_RO_CB_LHB1] == false) && (boolState[to_be_fired_OF_RO_CB_LHB1] && ( !boolState[to_be_fired_OF_demand_DGB])))
	{
		//cout << "48 :  INS_SUB_COUNT (9) |TRANSITION | good | DIST INS (0.9998) | INDUCING boolState[already_standby_OF_RO_CB_LHB1]  =  FALSE,already_required_OF_RO_CB_LHB1  =  FALSE" << endl;
		list.push_back(make_tuple(48, 0.9998, "INS", 9));
	}
	if ((boolState[failI_OF_demand_CCF_DG] == false) && boolState[to_be_fired_OF_demand_CCF_DG])
	{
		//cout << "86 :  INS_SUB_COUNT (10) |FAULT | failI  LABEL \"instantaneous failure demand_CCF_DG\" | DIST INS (0.0002) | INDUCING boolState[failI_OF_demand_CCF_DG]  =  TRUE,already_standby_OF_demand_CCF_DG  =  FALSE,already_required_OF_demand_CCF_DG  =  FALSE" << endl;
		list.push_back(make_tuple(86, 0.0002, "INS", 10));
	}
	if ((boolState[failI_OF_demand_CCF_DG] == false) && boolState[to_be_fired_OF_demand_CCF_DG])
	{
		//cout << "87 :  INS_SUB_COUNT (10) |TRANSITION | good | DIST INS (0.9998) | INDUCING boolState[already_standby_OF_demand_CCF_DG]  =  FALSE,already_required_OF_demand_CCF_DG  =  FALSE" << endl;
		list.push_back(make_tuple(87, 0.9998, "INS", 10));
	}
	if ((boolState[failI_OF_demand_DGA] == false) && (boolState[to_be_fired_OF_demand_DGA] && ( !boolState[to_be_fired_OF_demand_CCF_DG])))
	{
		//cout << "88 :  INS_SUB_COUNT (11) |FAULT | failI  LABEL \"instantaneous failure demand_DGA\" | DIST INS (0.002) | INDUCING boolState[failI_OF_demand_DGA]  =  TRUE,already_standby_OF_demand_DGA  =  FALSE,already_required_OF_demand_DGA  =  FALSE" << endl;
		list.push_back(make_tuple(88, 0.002, "INS", 11));
	}
	if ((boolState[failI_OF_demand_DGA] == false) && (boolState[to_be_fired_OF_demand_DGA] && ( !boolState[to_be_fired_OF_demand_CCF_DG])))
	{
		//cout << "89 :  INS_SUB_COUNT (11) |TRANSITION | good | DIST INS (0.998) | INDUCING boolState[already_standby_OF_demand_DGA]  =  FALSE,already_required_OF_demand_DGA  =  FALSE" << endl;
		list.push_back(make_tuple(89, 0.998, "INS", 11));
	}
	if ((boolState[failI_OF_demand_DGB] == false) && (boolState[to_be_fired_OF_demand_DGB] && ( !boolState[to_be_fired_OF_demand_CCF_DG])))
	{
		//cout << "90 :  INS_SUB_COUNT (12) |FAULT | failI  LABEL \"instantaneous failure demand_DGB\" | DIST INS (0.002) | INDUCING boolState[failI_OF_demand_DGB]  =  TRUE,already_standby_OF_demand_DGB  =  FALSE,already_required_OF_demand_DGB  =  FALSE" << endl;
		list.push_back(make_tuple(90, 0.002, "INS", 12));
	}
	if ((boolState[failI_OF_demand_DGB] == false) && (boolState[to_be_fired_OF_demand_DGB] && ( !boolState[to_be_fired_OF_demand_CCF_DG])))
	{
		//cout << "91 :  INS_SUB_COUNT (12) |TRANSITION | good | DIST INS (0.998) | INDUCING boolState[already_standby_OF_demand_DGB]  =  FALSE,already_required_OF_demand_DGB  =  FALSE" << endl;
		list.push_back(make_tuple(91, 0.998, "INS", 12));
	}
	if ((boolState[failI_OF_demand_TAC] == false) && boolState[to_be_fired_OF_demand_TAC])
	{
		//cout << "92 :  INS_SUB_COUNT (13) |FAULT | failI  LABEL \"instantaneous failure demand_TAC\" | DIST INS (0.002) | INDUCING boolState[failI_OF_demand_TAC]  =  TRUE,already_standby_OF_demand_TAC  =  FALSE,already_required_OF_demand_TAC  =  FALSE" << endl;
		list.push_back(make_tuple(92, 0.002, "INS", 13));
	}
	if ((boolState[failI_OF_demand_TAC] == false) && boolState[to_be_fired_OF_demand_TAC])
	{
		//cout << "93 :  INS_SUB_COUNT (13) |TRANSITION | good | DIST INS (0.998) | INDUCING boolState[already_standby_OF_demand_TAC]  =  FALSE,already_required_OF_demand_TAC  =  FALSE" << endl;
		list.push_back(make_tuple(93, 0.998, "INS", 13));
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
     
	if ((boolState[failF_OF_BAT_A1] == false) && boolState[required_OF_BAT_A1])
	{
		//cout << "0 : xx10_OF_BAT_A1 : FAULT failF  LABEL \"failure in operation BAT_A1\"  DIST EXP (2)  INDUCING boolState[failF_OF_BAT_A1]  =  TRUE" << endl;
		list.push_back(make_tuple(0, 2, "EXP", 0));
	}
	if ((boolState[failF_OF_BAT_A2] == false) && boolState[required_OF_BAT_A2])
	{
		//cout << "1 : xx10_OF_BAT_A2 : FAULT failF  LABEL \"failure in operation BAT_A2\"  DIST EXP (2)  INDUCING boolState[failF_OF_BAT_A2]  =  TRUE" << endl;
		list.push_back(make_tuple(1, 2, "EXP", 0));
	}
	if ((boolState[failF_OF_BAT_B1] == false) && boolState[required_OF_BAT_B1])
	{
		//cout << "2 : xx10_OF_BAT_B1 : FAULT failF  LABEL \"failure in operation BAT_B1\"  DIST EXP (2)  INDUCING boolState[failF_OF_BAT_B1]  =  TRUE" << endl;
		list.push_back(make_tuple(2, 2, "EXP", 0));
	}
	if ((boolState[failF_OF_BAT_B2] == false) && boolState[required_OF_BAT_B2])
	{
		//cout << "3 : xx10_OF_BAT_B2 : FAULT failF  LABEL \"failure in operation BAT_B2\"  DIST EXP (2)  INDUCING boolState[failF_OF_BAT_B2]  =  TRUE" << endl;
		list.push_back(make_tuple(3, 2, "EXP", 0));
	}
	if ((boolState[failF_OF_CCF_DG] == false) && boolState[required_OF_CCF_DG])
	{
		//cout << "4 : xx10_OF_CCF_DG : FAULT failF  LABEL \"failure in operation CCF_DG\"  DIST EXP (5e-05)  INDUCING boolState[failF_OF_CCF_DG]  =  TRUE" << endl;
		list.push_back(make_tuple(4, 5e-05, "EXP", 0));
	}
	if ((boolState[failF_OF_CCF_GEV_LGR] == false) && boolState[required_OF_CCF_GEV_LGR])
	{
		//cout << "5 : xx10_OF_CCF_GEV_LGR : FAULT failF  LABEL \"failure in operation CCF_GEV_LGR\"  DIST EXP (1e-06)  INDUCING boolState[failF_OF_CCF_GEV_LGR]  =  TRUE" << endl;
		list.push_back(make_tuple(5, 1e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_DGA_long] == false) && boolState[required_OF_DGA_long])
	{
		//cout << "6 : xx10_OF_DGA_long : FAULT failF  LABEL \"failure in operation DGA_long\"  DIST EXP (0.0005)  INDUCING boolState[failF_OF_DGA_long]  =  TRUE" << endl;
		list.push_back(make_tuple(6, 0.0005, "EXP", 0));
	}
	if ((boolState[failF_OF_DGA_short] == false) && boolState[required_OF_DGA_short])
	{
		//cout << "7 : xx10_OF_DGA_short : FAULT failF  LABEL \"failure in operation DGA_short\"  DIST EXP (0.002)  INDUCING boolState[failF_OF_DGA_short]  =  TRUE" << endl;
		list.push_back(make_tuple(7, 0.002, "EXP", 0));
	}
	if ((boolState[failF_OF_DGB_long] == false) && boolState[required_OF_DGB_long])
	{
		//cout << "8 : xx10_OF_DGB_long : FAULT failF  LABEL \"failure in operation DGB_long\"  DIST EXP (0.0005)  INDUCING boolState[failF_OF_DGB_long]  =  TRUE" << endl;
		list.push_back(make_tuple(8, 0.0005, "EXP", 0));
	}
	if ((boolState[failF_OF_DGB_short] == false) && boolState[required_OF_DGB_short])
	{
		//cout << "9 : xx10_OF_DGB_short : FAULT failF  LABEL \"failure in operation DGB_short\"  DIST EXP (0.002)  INDUCING boolState[failF_OF_DGB_short]  =  TRUE" << endl;
		list.push_back(make_tuple(9, 0.002, "EXP", 0));
	}
	if ((boolState[failF_OF_GEV] == false) && boolState[required_OF_GEV])
	{
		//cout << "10 : xx10_OF_GEV : FAULT failF  LABEL \"failure in operation GEV\"  DIST EXP (2e-05)  INDUCING boolState[failF_OF_GEV]  =  TRUE" << endl;
		list.push_back(make_tuple(10, 2e-05, "EXP", 0));
	}
	if ((boolState[failF_OF_GRID] == false) && boolState[required_OF_GRID])
	{
		//cout << "11 : xx10_OF_GRID : FAULT failF  LABEL \"failure in operation GRID\"  DIST EXP (1e-05)  INDUCING boolState[failF_OF_GRID]  =  TRUE" << endl;
		list.push_back(make_tuple(11, 1e-05, "EXP", 0));
	}
	if ((boolState[failF_OF_InFnHouse] == false) && boolState[required_OF_InFnHouse])
	{
		//cout << "12 : xx10_OF_InFnHouse : FAULT failF  LABEL \"failure in operation InFnHouse\"  DIST EXP (0.1)  INDUCING boolState[failF_OF_InFnHouse]  =  TRUE" << endl;
		list.push_back(make_tuple(12, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_LBA] == false) && boolState[required_OF_LBA])
	{
		//cout << "13 : xx10_OF_LBA : FAULT failF  LABEL \"failure in operation LBA\"  DIST EXP (5e-07)  INDUCING boolState[failF_OF_LBA]  =  TRUE" << endl;
		list.push_back(make_tuple(13, 5e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_LBB] == false) && boolState[required_OF_LBB])
	{
		//cout << "14 : xx10_OF_LBB : FAULT failF  LABEL \"failure in operation LBB\"  DIST EXP (5e-07)  INDUCING boolState[failF_OF_LBB]  =  TRUE" << endl;
		list.push_back(make_tuple(14, 5e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_LGA] == false) && boolState[required_OF_LGA])
	{
		//cout << "15 : xx10_OF_LGA : FAULT failF  LABEL \"failure in operation LGA\"  DIST EXP (2e-07)  INDUCING boolState[failF_OF_LGA]  =  TRUE" << endl;
		list.push_back(make_tuple(15, 2e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_LGB] == false) && boolState[required_OF_LGB])
	{
		//cout << "16 : xx10_OF_LGB : FAULT failF  LABEL \"failure in operation LGB\"  DIST EXP (2e-07)  INDUCING boolState[failF_OF_LGB]  =  TRUE" << endl;
		list.push_back(make_tuple(16, 2e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_LGD] == false) && boolState[required_OF_LGD])
	{
		//cout << "17 : xx10_OF_LGD : FAULT failF  LABEL \"failure in operation LGD\"  DIST EXP (2e-07)  INDUCING boolState[failF_OF_LGD]  =  TRUE" << endl;
		list.push_back(make_tuple(17, 2e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_LGE] == false) && boolState[required_OF_LGE])
	{
		//cout << "18 : xx10_OF_LGE : FAULT failF  LABEL \"failure in operation LGE\"  DIST EXP (2e-07)  INDUCING boolState[failF_OF_LGE]  =  TRUE" << endl;
		list.push_back(make_tuple(18, 2e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_LGF] == false) && boolState[required_OF_LGF])
	{
		//cout << "19 : xx10_OF_LGF : FAULT failF  LABEL \"failure in operation LGF\"  DIST EXP (2e-07)  INDUCING boolState[failF_OF_LGF]  =  TRUE" << endl;
		list.push_back(make_tuple(19, 2e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_LGR] == false) && boolState[required_OF_LGR])
	{
		//cout << "20 : xx10_OF_LGR : FAULT failF  LABEL \"failure in operation LGR\"  DIST EXP (2e-05)  INDUCING boolState[failF_OF_LGR]  =  TRUE" << endl;
		list.push_back(make_tuple(20, 2e-05, "EXP", 0));
	}
	if ((boolState[failF_OF_LHA] == false) && boolState[required_OF_LHA])
	{
		//cout << "21 : xx10_OF_LHA : FAULT failF  LABEL \"failure in operation LHA\"  DIST EXP (2e-07)  INDUCING boolState[failF_OF_LHA]  =  TRUE" << endl;
		list.push_back(make_tuple(21, 2e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_LHB] == false) && boolState[required_OF_LHB])
	{
		//cout << "22 : xx10_OF_LHB : FAULT failF  LABEL \"failure in operation LHB\"  DIST EXP (2e-07)  INDUCING boolState[failF_OF_LHB]  =  TRUE" << endl;
		list.push_back(make_tuple(22, 2e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_LKE] == false) && boolState[required_OF_LKE])
	{
		//cout << "23 : xx10_OF_LKE : FAULT failF  LABEL \"failure in operation LKE\"  DIST EXP (5e-07)  INDUCING boolState[failF_OF_LKE]  =  TRUE" << endl;
		list.push_back(make_tuple(23, 5e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_LKI] == false) && boolState[required_OF_LKI])
	{
		//cout << "24 : xx10_OF_LKI : FAULT failF  LABEL \"failure in operation LKI\"  DIST EXP (5e-07)  INDUCING boolState[failF_OF_LKI]  =  TRUE" << endl;
		list.push_back(make_tuple(24, 5e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_LLA] == false) && boolState[required_OF_LLA])
	{
		//cout << "25 : xx10_OF_LLA : FAULT failF  LABEL \"failure in operation LLA\"  DIST EXP (5e-07)  INDUCING boolState[failF_OF_LLA]  =  TRUE" << endl;
		list.push_back(make_tuple(25, 5e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_LLD] == false) && boolState[required_OF_LLD])
	{
		//cout << "26 : xx10_OF_LLD : FAULT failF  LABEL \"failure in operation LLD\"  DIST EXP (5e-07)  INDUCING boolState[failF_OF_LLD]  =  TRUE" << endl;
		list.push_back(make_tuple(26, 5e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_RDA1] == false) && boolState[required_OF_RDA1])
	{
		//cout << "39 : xx10_OF_RDA1 : FAULT failF  LABEL \"failure in operation RDA1\"  DIST EXP (1e-06)  INDUCING boolState[failF_OF_RDA1]  =  TRUE" << endl;
		list.push_back(make_tuple(39, 1e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_RDA2] == false) && boolState[required_OF_RDA2])
	{
		//cout << "40 : xx10_OF_RDA2 : FAULT failF  LABEL \"failure in operation RDA2\"  DIST EXP (1e-06)  INDUCING boolState[failF_OF_RDA2]  =  TRUE" << endl;
		list.push_back(make_tuple(40, 1e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_RDB1] == false) && boolState[required_OF_RDB1])
	{
		//cout << "41 : xx10_OF_RDB1 : FAULT failF  LABEL \"failure in operation RDB1\"  DIST EXP (1e-06)  INDUCING boolState[failF_OF_RDB1]  =  TRUE" << endl;
		list.push_back(make_tuple(41, 1e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_RDB2] == false) && boolState[required_OF_RDB2])
	{
		//cout << "42 : xx10_OF_RDB2 : FAULT failF  LABEL \"failure in operation RDB2\"  DIST EXP (1e-06)  INDUCING boolState[failF_OF_RDB2]  =  TRUE" << endl;
		list.push_back(make_tuple(42, 1e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_SH_CB_GEV] == false) && boolState[required_OF_SH_CB_GEV])
	{
		//cout << "49 : xx10_OF_SH_CB_GEV : FAULT failF  LABEL \"failure in operation SH_CB_GEV\"  DIST EXP (1e-07)  INDUCING boolState[failF_OF_SH_CB_GEV]  =  TRUE" << endl;
		list.push_back(make_tuple(49, 1e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_SH_CB_LBA1] == false) && boolState[required_OF_SH_CB_LBA1])
	{
		//cout << "50 : xx10_OF_SH_CB_LBA1 : FAULT failF  LABEL \"failure in operation SH_CB_LBA1\"  DIST EXP (1e-06)  INDUCING boolState[failF_OF_SH_CB_LBA1]  =  TRUE" << endl;
		list.push_back(make_tuple(50, 1e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_SH_CB_LBA2] == false) && boolState[required_OF_SH_CB_LBA2])
	{
		//cout << "51 : xx10_OF_SH_CB_LBA2 : FAULT failF  LABEL \"failure in operation SH_CB_LBA2\"  DIST EXP (1e-06)  INDUCING boolState[failF_OF_SH_CB_LBA2]  =  TRUE" << endl;
		list.push_back(make_tuple(51, 1e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_SH_CB_LBB1] == false) && boolState[required_OF_SH_CB_LBB1])
	{
		//cout << "52 : xx10_OF_SH_CB_LBB1 : FAULT failF  LABEL \"failure in operation SH_CB_LBB1\"  DIST EXP (1e-06)  INDUCING boolState[failF_OF_SH_CB_LBB1]  =  TRUE" << endl;
		list.push_back(make_tuple(52, 1e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_SH_CB_LBB2] == false) && boolState[required_OF_SH_CB_LBB2])
	{
		//cout << "53 : xx10_OF_SH_CB_LBB2 : FAULT failF  LABEL \"failure in operation SH_CB_LBB2\"  DIST EXP (1e-06)  INDUCING boolState[failF_OF_SH_CB_LBB2]  =  TRUE" << endl;
		list.push_back(make_tuple(53, 1e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_SH_CB_LGA] == false) && boolState[required_OF_SH_CB_LGA])
	{
		//cout << "54 : xx10_OF_SH_CB_LGA : FAULT failF  LABEL \"failure in operation SH_CB_LGA\"  DIST EXP (5e-07)  INDUCING boolState[failF_OF_SH_CB_LGA]  =  TRUE" << endl;
		list.push_back(make_tuple(54, 5e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_SH_CB_LGB] == false) && boolState[required_OF_SH_CB_LGB])
	{
		//cout << "55 : xx10_OF_SH_CB_LGB : FAULT failF  LABEL \"failure in operation SH_CB_LGB\"  DIST EXP (5e-07)  INDUCING boolState[failF_OF_SH_CB_LGB]  =  TRUE" << endl;
		list.push_back(make_tuple(55, 5e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_SH_CB_LGD1] == false) && boolState[required_OF_SH_CB_LGD1])
	{
		//cout << "56 : xx10_OF_SH_CB_LGD1 : FAULT failF  LABEL \"failure in operation SH_CB_LGD1\"  DIST EXP (5e-07)  INDUCING boolState[failF_OF_SH_CB_LGD1]  =  TRUE" << endl;
		list.push_back(make_tuple(56, 5e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_SH_CB_LGD2] == false) && boolState[required_OF_SH_CB_LGD2])
	{
		//cout << "57 : xx10_OF_SH_CB_LGD2 : FAULT failF  LABEL \"failure in operation SH_CB_LGD2\"  DIST EXP (5e-07)  INDUCING boolState[failF_OF_SH_CB_LGD2]  =  TRUE" << endl;
		list.push_back(make_tuple(57, 5e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_SH_CB_LGE1] == false) && boolState[required_OF_SH_CB_LGE1])
	{
		//cout << "58 : xx10_OF_SH_CB_LGE1 : FAULT failF  LABEL \"failure in operation SH_CB_LGE1\"  DIST EXP (5e-07)  INDUCING boolState[failF_OF_SH_CB_LGE1]  =  TRUE" << endl;
		list.push_back(make_tuple(58, 5e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_SH_CB_LGF1] == false) && boolState[required_OF_SH_CB_LGF1])
	{
		//cout << "59 : xx10_OF_SH_CB_LGF1 : FAULT failF  LABEL \"failure in operation SH_CB_LGF1\"  DIST EXP (5e-07)  INDUCING boolState[failF_OF_SH_CB_LGF1]  =  TRUE" << endl;
		list.push_back(make_tuple(59, 5e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_SH_CB_LGF2] == false) && boolState[required_OF_SH_CB_LGF2])
	{
		//cout << "60 : xx10_OF_SH_CB_LGF2 : FAULT failF  LABEL \"failure in operation SH_CB_LGF2\"  DIST EXP (5e-07)  INDUCING boolState[failF_OF_SH_CB_LGF2]  =  TRUE" << endl;
		list.push_back(make_tuple(60, 5e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_SH_CB_LHA1] == false) && boolState[required_OF_SH_CB_LHA1])
	{
		//cout << "61 : xx10_OF_SH_CB_LHA1 : FAULT failF  LABEL \"failure in operation SH_CB_LHA1\"  DIST EXP (5e-07)  INDUCING boolState[failF_OF_SH_CB_LHA1]  =  TRUE" << endl;
		list.push_back(make_tuple(61, 5e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_SH_CB_LHA2] == false) && boolState[required_OF_SH_CB_LHA2])
	{
		//cout << "62 : xx10_OF_SH_CB_LHA2 : FAULT failF  LABEL \"failure in operation SH_CB_LHA2\"  DIST EXP (5e-07)  INDUCING boolState[failF_OF_SH_CB_LHA2]  =  TRUE" << endl;
		list.push_back(make_tuple(62, 5e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_SH_CB_LHA3] == false) && boolState[required_OF_SH_CB_LHA3])
	{
		//cout << "63 : xx10_OF_SH_CB_LHA3 : FAULT failF  LABEL \"failure in operation SH_CB_LHA3\"  DIST EXP (5e-07)  INDUCING boolState[failF_OF_SH_CB_LHA3]  =  TRUE" << endl;
		list.push_back(make_tuple(63, 5e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_SH_CB_LHB1] == false) && boolState[required_OF_SH_CB_LHB1])
	{
		//cout << "64 : xx10_OF_SH_CB_LHB1 : FAULT failF  LABEL \"failure in operation SH_CB_LHB1\"  DIST EXP (5e-07)  INDUCING boolState[failF_OF_SH_CB_LHB1]  =  TRUE" << endl;
		list.push_back(make_tuple(64, 5e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_SH_CB_LHB2] == false) && boolState[required_OF_SH_CB_LHB2])
	{
		//cout << "65 : xx10_OF_SH_CB_LHB2 : FAULT failF  LABEL \"failure in operation SH_CB_LHB2\"  DIST EXP (5e-07)  INDUCING boolState[failF_OF_SH_CB_LHB2]  =  TRUE" << endl;
		list.push_back(make_tuple(65, 5e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_SH_CB_RDA1] == false) && boolState[required_OF_SH_CB_RDA1])
	{
		//cout << "66 : xx10_OF_SH_CB_RDA1 : FAULT failF  LABEL \"failure in operation SH_CB_RDA1\"  DIST EXP (1e-06)  INDUCING boolState[failF_OF_SH_CB_RDA1]  =  TRUE" << endl;
		list.push_back(make_tuple(66, 1e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_SH_CB_RDA2] == false) && boolState[required_OF_SH_CB_RDA2])
	{
		//cout << "67 : xx10_OF_SH_CB_RDA2 : FAULT failF  LABEL \"failure in operation SH_CB_RDA2\"  DIST EXP (1e-06)  INDUCING boolState[failF_OF_SH_CB_RDA2]  =  TRUE" << endl;
		list.push_back(make_tuple(67, 1e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_SH_CB_RDB1] == false) && boolState[required_OF_SH_CB_RDB1])
	{
		//cout << "68 : xx10_OF_SH_CB_RDB1 : FAULT failF  LABEL \"failure in operation SH_CB_RDB1\"  DIST EXP (1e-06)  INDUCING boolState[failF_OF_SH_CB_RDB1]  =  TRUE" << endl;
		list.push_back(make_tuple(68, 1e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_SH_CB_RDB2] == false) && boolState[required_OF_SH_CB_RDB2])
	{
		//cout << "69 : xx10_OF_SH_CB_RDB2 : FAULT failF  LABEL \"failure in operation SH_CB_RDB2\"  DIST EXP (1e-06)  INDUCING boolState[failF_OF_SH_CB_RDB2]  =  TRUE" << endl;
		list.push_back(make_tuple(69, 1e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_SH_CB_TUA1] == false) && boolState[required_OF_SH_CB_TUA1])
	{
		//cout << "70 : xx10_OF_SH_CB_TUA1 : FAULT failF  LABEL \"failure in operation SH_CB_TUA1\"  DIST EXP (5e-07)  INDUCING boolState[failF_OF_SH_CB_TUA1]  =  TRUE" << endl;
		list.push_back(make_tuple(70, 5e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_SH_CB_TUA2] == false) && boolState[required_OF_SH_CB_TUA2])
	{
		//cout << "71 : xx10_OF_SH_CB_TUA2 : FAULT failF  LABEL \"failure in operation SH_CB_TUA2\"  DIST EXP (5e-07)  INDUCING boolState[failF_OF_SH_CB_TUA2]  =  TRUE" << endl;
		list.push_back(make_tuple(71, 5e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_SH_CB_TUB1] == false) && boolState[required_OF_SH_CB_TUB1])
	{
		//cout << "72 : xx10_OF_SH_CB_TUB1 : FAULT failF  LABEL \"failure in operation SH_CB_TUB1\"  DIST EXP (5e-07)  INDUCING boolState[failF_OF_SH_CB_TUB1]  =  TRUE" << endl;
		list.push_back(make_tuple(72, 5e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_SH_CB_TUB2] == false) && boolState[required_OF_SH_CB_TUB2])
	{
		//cout << "73 : xx10_OF_SH_CB_TUB2 : FAULT failF  LABEL \"failure in operation SH_CB_TUB2\"  DIST EXP (5e-07)  INDUCING boolState[failF_OF_SH_CB_TUB2]  =  TRUE" << endl;
		list.push_back(make_tuple(73, 5e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_SH_CB_line_GEV] == false) && boolState[required_OF_SH_CB_line_GEV])
	{
		//cout << "74 : xx10_OF_SH_CB_line_GEV : FAULT failF  LABEL \"failure in operation SH_CB_line_GEV\"  DIST EXP (1e-07)  INDUCING boolState[failF_OF_SH_CB_line_GEV]  =  TRUE" << endl;
		list.push_back(make_tuple(74, 1e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_SH_CB_line_LGR] == false) && boolState[required_OF_SH_CB_line_LGR])
	{
		//cout << "75 : xx10_OF_SH_CB_line_LGR : FAULT failF  LABEL \"failure in operation SH_CB_line_LGR\"  DIST EXP (1e-07)  INDUCING boolState[failF_OF_SH_CB_line_LGR]  =  TRUE" << endl;
		list.push_back(make_tuple(75, 1e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_SUBSTATION] == false) && boolState[required_OF_SUBSTATION])
	{
		//cout << "76 : xx10_OF_SUBSTATION : FAULT failF  LABEL \"failure in operation SUBSTATION\"  DIST EXP (1e-06)  INDUCING boolState[failF_OF_SUBSTATION]  =  TRUE" << endl;
		list.push_back(make_tuple(76, 1e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_TA] == false) && boolState[required_OF_TA])
	{
		//cout << "77 : xx10_OF_TA : FAULT failF  LABEL \"failure in operation TA\"  DIST EXP (5e-06)  INDUCING boolState[failF_OF_TA]  =  TRUE" << endl;
		list.push_back(make_tuple(77, 5e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_TAC] == false) && boolState[required_OF_TAC])
	{
		//cout << "78 : xx10_OF_TAC : FAULT failF  LABEL \"failure in operation TAC\"  DIST EXP (0.001)  INDUCING boolState[failF_OF_TAC]  =  TRUE" << endl;
		list.push_back(make_tuple(78, 0.001, "EXP", 0));
	}
	if ((boolState[failF_OF_TP] == false) && boolState[required_OF_TP])
	{
		//cout << "79 : xx10_OF_TP : FAULT failF  LABEL \"failure in operation TP\"  DIST EXP (5e-06)  INDUCING boolState[failF_OF_TP]  =  TRUE" << endl;
		list.push_back(make_tuple(79, 5e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_TS] == false) && boolState[required_OF_TS])
	{
		//cout << "80 : xx10_OF_TS : FAULT failF  LABEL \"failure in operation TS\"  DIST EXP (5e-06)  INDUCING boolState[failF_OF_TS]  =  TRUE" << endl;
		list.push_back(make_tuple(80, 5e-06, "EXP", 0));
	}
	if ((boolState[failF_OF_TUA1] == false) && boolState[required_OF_TUA1])
	{
		//cout << "81 : xx10_OF_TUA1 : FAULT failF  LABEL \"failure in operation TUA1\"  DIST EXP (2e-07)  INDUCING boolState[failF_OF_TUA1]  =  TRUE" << endl;
		list.push_back(make_tuple(81, 2e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_TUA2] == false) && boolState[required_OF_TUA2])
	{
		//cout << "82 : xx10_OF_TUA2 : FAULT failF  LABEL \"failure in operation TUA2\"  DIST EXP (2e-07)  INDUCING boolState[failF_OF_TUA2]  =  TRUE" << endl;
		list.push_back(make_tuple(82, 2e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_TUB1] == false) && boolState[required_OF_TUB1])
	{
		//cout << "83 : xx10_OF_TUB1 : FAULT failF  LABEL \"failure in operation TUB1\"  DIST EXP (2e-07)  INDUCING boolState[failF_OF_TUB1]  =  TRUE" << endl;
		list.push_back(make_tuple(83, 2e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_TUB2] == false) && boolState[required_OF_TUB2])
	{
		//cout << "84 : xx10_OF_TUB2 : FAULT failF  LABEL \"failure in operation TUB2\"  DIST EXP (2e-07)  INDUCING boolState[failF_OF_TUB2]  =  TRUE" << endl;
		list.push_back(make_tuple(84, 2e-07, "EXP", 0));
	}
	if ((boolState[failF_OF_UNIT] == false) && boolState[required_OF_UNIT])
	{
		//cout << "85 : xx10_OF_UNIT : FAULT failF  LABEL \"failure in operation UNIT\"  DIST EXP (0.0001)  INDUCING boolState[failF_OF_UNIT]  =  TRUE" << endl;
		list.push_back(make_tuple(85, 0.0001, "EXP", 0));
	}
	return list;
}


void storm::figaro::FigaroProgram_NPPS_No_trim_No_repair::runOnceInteractionStep_initialization()
{
	if (boolState[failF_OF_BAT_A1] == true )
	{
		boolState[S_OF_BAT_A1]  =  true;
	}

	if (boolState[failF_OF_BAT_A2] == true )
	{
		boolState[S_OF_BAT_A2]  =  true;
	}

	if (boolState[failF_OF_BAT_B1] == true )
	{
		boolState[S_OF_BAT_B1]  =  true;
	}

	if (boolState[failF_OF_BAT_B2] == true )
	{
		boolState[S_OF_BAT_B2]  =  true;
	}

	if (boolState[failF_OF_CCF_DG] == true )
	{
		boolState[S_OF_CCF_DG]  =  true;
	}

	if (boolState[failF_OF_CCF_GEV_LGR] == true )
	{
		boolState[S_OF_CCF_GEV_LGR]  =  true;
	}

	if (boolState[failF_OF_DGA_long] == true )
	{
		boolState[S_OF_DGA_long]  =  true;
	}

	if (boolState[failF_OF_DGA_short] == true )
	{
		boolState[S_OF_DGA_short]  =  true;
	}

	if (boolState[failF_OF_DGB_long] == true )
	{
		boolState[S_OF_DGB_long]  =  true;
	}

	if (boolState[failF_OF_DGB_short] == true )
	{
		boolState[S_OF_DGB_short]  =  true;
	}

	if (boolState[failF_OF_GEV] == true )
	{
		boolState[S_OF_GEV]  =  true;
	}

	if (boolState[failF_OF_GRID] == true )
	{
		boolState[S_OF_GRID]  =  true;
	}

	if (boolState[failF_OF_InFnHouse] == true )
	{
		boolState[S_OF_InFnHouse]  =  true;
	}

	if (boolState[failF_OF_LBA] == true )
	{
		boolState[S_OF_LBA]  =  true;
	}

	if (boolState[failF_OF_LBB] == true )
	{
		boolState[S_OF_LBB]  =  true;
	}

	if (boolState[failF_OF_LGA] == true )
	{
		boolState[S_OF_LGA]  =  true;
	}

	if (boolState[failF_OF_LGB] == true )
	{
		boolState[S_OF_LGB]  =  true;
	}

	if (boolState[failF_OF_LGD] == true )
	{
		boolState[S_OF_LGD]  =  true;
	}

	if (boolState[failF_OF_LGE] == true )
	{
		boolState[S_OF_LGE]  =  true;
	}

	if (boolState[failF_OF_LGF] == true )
	{
		boolState[S_OF_LGF]  =  true;
	}

	if (boolState[failF_OF_LGR] == true )
	{
		boolState[S_OF_LGR]  =  true;
	}

	if (boolState[failF_OF_LHA] == true )
	{
		boolState[S_OF_LHA]  =  true;
	}

	if (boolState[failF_OF_LHB] == true )
	{
		boolState[S_OF_LHB]  =  true;
	}

	if (boolState[failF_OF_LKE] == true )
	{
		boolState[S_OF_LKE]  =  true;
	}

	if (boolState[failF_OF_LKI] == true )
	{
		boolState[S_OF_LKI]  =  true;
	}

	if (boolState[failF_OF_LLA] == true )
	{
		boolState[S_OF_LLA]  =  true;
	}

	if (boolState[failF_OF_LLD] == true )
	{
		boolState[S_OF_LLD]  =  true;
	}

	if (boolState[failI_OF_OnDemHouse] == true )
	{
		boolState[S_OF_OnDemHouse]  =  true;
	}

	if (boolState[failI_OF_RC_CB_LGD2] == true )
	{
		boolState[S_OF_RC_CB_LGD2]  =  true;
	}

	if (boolState[failI_OF_RC_CB_LGF2] == true )
	{
		boolState[S_OF_RC_CB_LGF2]  =  true;
	}

	if (boolState[failI_OF_RC_CB_LHA2] == true )
	{
		boolState[S_OF_RC_CB_LHA2]  =  true;
	}

	if (boolState[failI_OF_RC_CB_LHA3] == true )
	{
		boolState[S_OF_RC_CB_LHA3]  =  true;
	}

	if (boolState[failI_OF_RC_CB_LHB2] == true )
	{
		boolState[S_OF_RC_CB_LHB2]  =  true;
	}

	if (boolState[failF_OF_RDA1] == true )
	{
		boolState[S_OF_RDA1]  =  true;
	}

	if (boolState[failF_OF_RDA2] == true )
	{
		boolState[S_OF_RDA2]  =  true;
	}

	if (boolState[failF_OF_RDB1] == true )
	{
		boolState[S_OF_RDB1]  =  true;
	}

	if (boolState[failF_OF_RDB2] == true )
	{
		boolState[S_OF_RDB2]  =  true;
	}

	if (boolState[failI_OF_RO_CB_LHA1] == true )
	{
		boolState[S_OF_RO_CB_LHA1]  =  true;
	}

	if (boolState[failI_OF_RO_CB_LHA2] == true )
	{
		boolState[S_OF_RO_CB_LHA2]  =  true;
	}

	if (boolState[failI_OF_RO_CB_LHB1] == true )
	{
		boolState[S_OF_RO_CB_LHB1]  =  true;
	}

	if (boolState[failF_OF_SH_CB_GEV] == true )
	{
		boolState[S_OF_SH_CB_GEV]  =  true;
	}

	if (boolState[failF_OF_SH_CB_LBA1] == true )
	{
		boolState[S_OF_SH_CB_LBA1]  =  true;
	}

	if (boolState[failF_OF_SH_CB_LBA2] == true )
	{
		boolState[S_OF_SH_CB_LBA2]  =  true;
	}

	if (boolState[failF_OF_SH_CB_LBB1] == true )
	{
		boolState[S_OF_SH_CB_LBB1]  =  true;
	}

	if (boolState[failF_OF_SH_CB_LBB2] == true )
	{
		boolState[S_OF_SH_CB_LBB2]  =  true;
	}

	if (boolState[failF_OF_SH_CB_LGA] == true )
	{
		boolState[S_OF_SH_CB_LGA]  =  true;
	}

	if (boolState[failF_OF_SH_CB_LGB] == true )
	{
		boolState[S_OF_SH_CB_LGB]  =  true;
	}

	if (boolState[failF_OF_SH_CB_LGD1] == true )
	{
		boolState[S_OF_SH_CB_LGD1]  =  true;
	}

	if (boolState[failF_OF_SH_CB_LGD2] == true )
	{
		boolState[S_OF_SH_CB_LGD2]  =  true;
	}

	if (boolState[failF_OF_SH_CB_LGE1] == true )
	{
		boolState[S_OF_SH_CB_LGE1]  =  true;
	}

	if (boolState[failF_OF_SH_CB_LGF1] == true )
	{
		boolState[S_OF_SH_CB_LGF1]  =  true;
	}

	if (boolState[failF_OF_SH_CB_LGF2] == true )
	{
		boolState[S_OF_SH_CB_LGF2]  =  true;
	}

	if (boolState[failF_OF_SH_CB_LHA1] == true )
	{
		boolState[S_OF_SH_CB_LHA1]  =  true;
	}

	if (boolState[failF_OF_SH_CB_LHA2] == true )
	{
		boolState[S_OF_SH_CB_LHA2]  =  true;
	}

	if (boolState[failF_OF_SH_CB_LHA3] == true )
	{
		boolState[S_OF_SH_CB_LHA3]  =  true;
	}

	if (boolState[failF_OF_SH_CB_LHB1] == true )
	{
		boolState[S_OF_SH_CB_LHB1]  =  true;
	}

	if (boolState[failF_OF_SH_CB_LHB2] == true )
	{
		boolState[S_OF_SH_CB_LHB2]  =  true;
	}

	if (boolState[failF_OF_SH_CB_RDA1] == true )
	{
		boolState[S_OF_SH_CB_RDA1]  =  true;
	}

	if (boolState[failF_OF_SH_CB_RDA2] == true )
	{
		boolState[S_OF_SH_CB_RDA2]  =  true;
	}

	if (boolState[failF_OF_SH_CB_RDB1] == true )
	{
		boolState[S_OF_SH_CB_RDB1]  =  true;
	}

	if (boolState[failF_OF_SH_CB_RDB2] == true )
	{
		boolState[S_OF_SH_CB_RDB2]  =  true;
	}

	if (boolState[failF_OF_SH_CB_TUA1] == true )
	{
		boolState[S_OF_SH_CB_TUA1]  =  true;
	}

	if (boolState[failF_OF_SH_CB_TUA2] == true )
	{
		boolState[S_OF_SH_CB_TUA2]  =  true;
	}

	if (boolState[failF_OF_SH_CB_TUB1] == true )
	{
		boolState[S_OF_SH_CB_TUB1]  =  true;
	}

	if (boolState[failF_OF_SH_CB_TUB2] == true )
	{
		boolState[S_OF_SH_CB_TUB2]  =  true;
	}

	if (boolState[failF_OF_SH_CB_line_GEV] == true )
	{
		boolState[S_OF_SH_CB_line_GEV]  =  true;
	}

	if (boolState[failF_OF_SH_CB_line_LGR] == true )
	{
		boolState[S_OF_SH_CB_line_LGR]  =  true;
	}

	if (boolState[failF_OF_SUBSTATION] == true )
	{
		boolState[S_OF_SUBSTATION]  =  true;
	}

	if (boolState[failF_OF_TA] == true )
	{
		boolState[S_OF_TA]  =  true;
	}

	if (boolState[failF_OF_TAC] == true )
	{
		boolState[S_OF_TAC]  =  true;
	}

	if (boolState[failF_OF_TP] == true )
	{
		boolState[S_OF_TP]  =  true;
	}

	if (boolState[failF_OF_TS] == true )
	{
		boolState[S_OF_TS]  =  true;
	}

	if (boolState[failF_OF_TUA1] == true )
	{
		boolState[S_OF_TUA1]  =  true;
	}

	if (boolState[failF_OF_TUA2] == true )
	{
		boolState[S_OF_TUA2]  =  true;
	}

	if (boolState[failF_OF_TUB1] == true )
	{
		boolState[S_OF_TUB1]  =  true;
	}

	if (boolState[failF_OF_TUB2] == true )
	{
		boolState[S_OF_TUB2]  =  true;
	}

	if (boolState[failF_OF_UNIT] == true )
	{
		boolState[S_OF_UNIT]  =  true;
	}

	if (boolState[failI_OF_demand_CCF_DG] == true )
	{
		boolState[S_OF_demand_CCF_DG]  =  true;
	}

	if (boolState[failI_OF_demand_DGA] == true )
	{
		boolState[S_OF_demand_DGA]  =  true;
	}

	if (boolState[failI_OF_demand_DGB] == true )
	{
		boolState[S_OF_demand_DGB]  =  true;
	}

	if (boolState[failI_OF_demand_TAC] == true )
	{
		boolState[S_OF_demand_TAC]  =  true;
	}

}


void storm::figaro::FigaroProgram_NPPS_No_trim_No_repair::runOnceInteractionStep_propagate_effect_S()
{
	if (boolState[S_OF_BATTERY_B_lost] && boolState[S_OF_LBBline2_lost] )
	{
		boolState[S_OF_AND_3]  =  true;
	}

	if (boolState[S_OF_BAT_A1] && boolState[S_OF_BAT_A2] )
	{
		boolState[S_OF_BATTERY_A_lost]  =  true;
	}

	if (boolState[S_OF_BAT_B1] && boolState[S_OF_BAT_B2] )
	{
		boolState[S_OF_BATTERY_B_lost]  =  true;
	}

	if (((boolState[S_OF_loss_of_supply_by_TS] && boolState[S_OF_LBA_lost]) && boolState[already_S_OF_LBA_lost]) && ( !boolState[already_S_OF_loss_of_supply_by_TS]) )
	{
		boolState[S_OF_CB_LGD2_unable]  =  true;
	}

	if (boolState[already_S_OF_CB_LGD2_unable] && (boolState[S_OF_LBA_lost] && boolState[S_OF_loss_of_supply_by_TS]) )
	{
		boolState[S_OF_CB_LGD2_unable]  =  true;
	}

	if (((boolState[S_OF_loss_of_supply_by_TS1] && boolState[S_OF_LBB_lost]) && boolState[already_S_OF_LBB_lost]) && ( !boolState[already_S_OF_loss_of_supply_by_TS1]) )
	{
		boolState[S_OF_CB_LGF2_unable]  =  true;
	}

	if (boolState[already_S_OF_CB_LGF2_unable] && (boolState[S_OF_LBB_lost] && boolState[S_OF_loss_of_supply_by_TS1]) )
	{
		boolState[S_OF_CB_LGF2_unable]  =  true;
	}

	if (((boolState[S_OF_loss_of_supply_by_LGD] && boolState[S_OF_LBA_lost]) && boolState[already_S_OF_LBA_lost]) && ( !boolState[already_S_OF_loss_of_supply_by_LGD]) )
	{
		boolState[S_OF_CB_LHA12_unable]  =  true;
	}

	if (boolState[already_S_OF_CB_LHA12_unable] && (boolState[S_OF_LBA_lost] && boolState[S_OF_loss_of_supply_by_LGD]) )
	{
		boolState[S_OF_CB_LHA12_unable]  =  true;
	}

	if (((boolState[S_OF_loss_of_supply_by_DGA] && boolState[S_OF_LBA_lost]) && boolState[already_S_OF_LBA_lost]) && ( !boolState[already_S_OF_loss_of_supply_by_DGA]) )
	{
		boolState[S_OF_CB_LHA3_unable]  =  true;
	}

	if (boolState[already_S_OF_CB_LHA3_unable] && (boolState[S_OF_LBA_lost] && boolState[S_OF_loss_of_supply_by_DGA]) )
	{
		boolState[S_OF_CB_LHA3_unable]  =  true;
	}

	if (((boolState[S_OF_loss_of_supply_by_LGF] && boolState[S_OF_LBB_lost]) && boolState[already_S_OF_LBB_lost]) && ( !boolState[already_S_OF_loss_of_supply_by_LGF]) )
	{
		boolState[S_OF_CB_LHB12_unable]  =  true;
	}

	if (boolState[already_S_OF_CB_LHB12_unable] && (boolState[S_OF_LBB_lost] && boolState[S_OF_loss_of_supply_by_LGF]) )
	{
		boolState[S_OF_CB_LHB12_unable]  =  true;
	}

	if ((((boolState[S_OF_CCF_DG] || boolState[S_OF_DGA_long]) || boolState[S_OF_DGA_short]) || boolState[S_OF_demand_CCF_DG]) || boolState[S_OF_demand_DGA] )
	{
		boolState[S_OF_DGA_lost]  =  true;
	}

	if ((((boolState[S_OF_CCF_DG] || boolState[S_OF_DGB_long]) || boolState[S_OF_DGB_short]) || boolState[S_OF_demand_CCF_DG]) || boolState[S_OF_demand_DGB] )
	{
		boolState[S_OF_DGB_lost]  =  true;
	}

	if ((boolState[S_OF_LBA] || boolState[S_OF_LBA_not_fed]) || boolState[S_OF_SH_CB_LBA1] )
	{
		boolState[S_OF_LBA_lost]  =  true;
	}

	if (boolState[S_OF_LBAline1_lost] && boolState[S_OF_LBAothers_lost] )
	{
		boolState[S_OF_LBA_not_fed]  =  true;
	}

	if ((((((boolState[S_OF_LGE] || boolState[S_OF_LKE]) || boolState[S_OF_RDA1]) || boolState[S_OF_SH_CB_LGE1]) || boolState[S_OF_SH_CB_RDA1]) || boolState[S_OF_SH_CB_TUA1]) || boolState[S_OF_TUA1] )
	{
		boolState[S_OF_LBAline1_lost]  =  true;
	}

	if (((((boolState[S_OF_LLA] || boolState[S_OF_RDA2]) || boolState[S_OF_SH_CB_LBA2]) || boolState[S_OF_SH_CB_RDA2]) || boolState[S_OF_SH_CB_TUA2]) || boolState[S_OF_TUA2] )
	{
		boolState[S_OF_LBAline2_lost]  =  true;
	}

	if (boolState[S_OF_BATTERY_A_lost] && boolState[S_OF_LBAline2_lost] )
	{
		boolState[S_OF_LBAothers_lost]  =  true;
	}

	if ((boolState[S_OF_LBB] || boolState[S_OF_LBB_not_fed]) || boolState[S_OF_SH_CB_LBB1] )
	{
		boolState[S_OF_LBB_lost]  =  true;
	}

	if (boolState[S_OF_AND_3] && boolState[S_OF_LBBline1_lost] )
	{
		boolState[S_OF_LBB_not_fed]  =  true;
	}

	if ((((boolState[S_OF_LKI] || boolState[S_OF_RDB1]) || boolState[S_OF_SH_CB_RDB1]) || boolState[S_OF_SH_CB_TUB1]) || boolState[S_OF_TUB1] )
	{
		boolState[S_OF_LBBline1_lost]  =  true;
	}

	if (((((boolState[S_OF_LLD] || boolState[S_OF_RDB2]) || boolState[S_OF_SH_CB_LBB2]) || boolState[S_OF_SH_CB_RDB2]) || boolState[S_OF_SH_CB_TUB2]) || boolState[S_OF_TUB2] )
	{
		boolState[S_OF_LBBline2_lost]  =  true;
	}

	if (boolState[S_OF_loss_of_supply_by_TA] && boolState[S_OF_loss_of_supply_by_TS] )
	{
		boolState[S_OF_LGD_not_fed]  =  true;
	}

	if (boolState[S_OF_loss_of_supply_by_TA1] && boolState[S_OF_loss_of_supply_by_TS1] )
	{
		boolState[S_OF_LGF_not_fed]  =  true;
	}

	if (boolState[S_OF_LHA_lost] && boolState[S_OF_LHB_lost] )
	{
		boolState[S_OF_LHA_and_LHB_lost]  =  true;
	}

	if ((boolState[S_OF_LHA] || boolState[S_OF_LHA_not_fed]) || boolState[S_OF_SH_CB_LHA1] )
	{
		boolState[S_OF_LHA_lost]  =  true;
	}

	if (boolState[S_OF_loss_of_supply_by_DGA_and_TAC] && boolState[S_OF_loss_of_supply_by_LGD] )
	{
		boolState[S_OF_LHA_not_fed]  =  true;
	}

	if ((boolState[S_OF_LHB] || boolState[S_OF_LHB_not_fed]) || boolState[S_OF_SH_CB_LHB1] )
	{
		boolState[S_OF_LHB_lost]  =  true;
	}

	if (boolState[S_OF_loss_of_supply_by_DGB] && boolState[S_OF_loss_of_supply_by_LGF] )
	{
		boolState[S_OF_LHB_not_fed]  =  true;
	}

	if (boolState[S_OF_GRID] || boolState[S_OF_SUBSTATION] )
	{
		boolState[S_OF_OR_14]  =  true;
	}

	if (boolState[S_OF_CB_LGD2_unable] || boolState[S_OF_RC_CB_LGD2] )
	{
		boolState[S_OF_RC_CB_LGD2_]  =  true;
	}

	if (boolState[S_OF_CB_LGF2_unable] || boolState[S_OF_RC_CB_LGF2] )
	{
		boolState[S_OF_RC_CB_LGF2_]  =  true;
	}

	if (boolState[S_OF_CB_LHA12_unable] || boolState[S_OF_RC_CB_LHA2] )
	{
		boolState[S_OF_RC_CB_LHA2_]  =  true;
	}

	if (boolState[S_OF_CB_LHA3_unable] || boolState[S_OF_RC_CB_LHA3] )
	{
		boolState[S_OF_RC_CB_LHA3_]  =  true;
	}

	if (boolState[S_OF_CB_LHB12_unable] || boolState[S_OF_RC_CB_LHB2] )
	{
		boolState[S_OF_RC_CB_LHB2_]  =  true;
	}

	if (boolState[S_OF_CB_LHA12_unable] || boolState[S_OF_RO_CB_LHA1] )
	{
		boolState[S_OF_RO_CB_LHA1_]  =  true;
	}

	if (boolState[S_OF_CB_LHA12_unable] || boolState[S_OF_RO_CB_LHA2] )
	{
		boolState[S_OF_RO_CB_LHA2_]  =  true;
	}

	if (boolState[S_OF_CB_LHB12_unable] || boolState[S_OF_RO_CB_LHB1] )
	{
		boolState[S_OF_RO_CB_LHB1_]  =  true;
	}

	if (boolState[S_OF_GEV] || boolState[S_OF_LGR] )
	{
		boolState[S_OF_SH_GEV_or_LGR]  =  true;
	}

	if ((boolState[S_OF_SH_CB_line_LGR] || boolState[S_OF_TA]) || boolState[S_OF_loss_of_supply_by_LGR] )
	{
		boolState[S_OF_TA_lost]  =  true;
	}

	if (((boolState[S_OF_SH_CB_GEV] || boolState[S_OF_SH_CB_line_GEV]) || boolState[S_OF_TS]) || boolState[S_OF_TS_not_fed] )
	{
		boolState[S_OF_TS_lost]  =  true;
	}

	if (boolState[S_OF_loss_of_supply_by_GEV] && boolState[S_OF_loss_of_supply_by_UNIT] )
	{
		boolState[S_OF_TS_not_fed]  =  true;
	}

	if (boolState[S_OF_LHA_and_LHB_lost] )
	{
		boolState[S_OF_UE_1]  =  true;
	}

	if (boolState[S_OF_InFnHouse] || boolState[S_OF_OnDemHouse] )
	{
		boolState[S_OF_loss_of_houseload_operation]  =  true;
	}

	if (((boolState[S_OF_DGA_lost] || boolState[S_OF_RC_CB_LHA2_]) || boolState[S_OF_RO_CB_LHA1_]) || boolState[S_OF_SH_CB_LHA2] )
	{
		boolState[S_OF_loss_of_supply_by_DGA]  =  true;
	}

	if (boolState[S_OF_loss_of_supply_by_DGA] && boolState[S_OF_loss_of_supply_by_TAC] )
	{
		boolState[S_OF_loss_of_supply_by_DGA_and_TAC]  =  true;
	}

	if (((boolState[S_OF_DGB_lost] || boolState[S_OF_RC_CB_LHB2_]) || boolState[S_OF_RO_CB_LHB1_]) || boolState[S_OF_SH_CB_LHB2] )
	{
		boolState[S_OF_loss_of_supply_by_DGB]  =  true;
	}

	if ((boolState[S_OF_CCF_GEV_LGR] || boolState[S_OF_OR_14]) || boolState[S_OF_SH_GEV_or_LGR] )
	{
		boolState[S_OF_loss_of_supply_by_GEV]  =  true;
	}

	if ((boolState[S_OF_LGD] || boolState[S_OF_LGD_not_fed]) || boolState[S_OF_SH_CB_LGD1] )
	{
		boolState[S_OF_loss_of_supply_by_LGD]  =  true;
	}

	if ((boolState[S_OF_LGF] || boolState[S_OF_LGF_not_fed]) || boolState[S_OF_SH_CB_LGF1] )
	{
		boolState[S_OF_loss_of_supply_by_LGF]  =  true;
	}

	if ((boolState[S_OF_CCF_GEV_LGR] || boolState[S_OF_OR_14]) || boolState[S_OF_SH_GEV_or_LGR] )
	{
		boolState[S_OF_loss_of_supply_by_LGR]  =  true;
	}

	if ((boolState[S_OF_RC_CB_LGD2_] || boolState[S_OF_SH_CB_LGD2]) || boolState[S_OF_TA_lost] )
	{
		boolState[S_OF_loss_of_supply_by_TA]  =  true;
	}

	if ((boolState[S_OF_RC_CB_LGF2_] || boolState[S_OF_SH_CB_LGF2]) || boolState[S_OF_TA_lost] )
	{
		boolState[S_OF_loss_of_supply_by_TA1]  =  true;
	}

	if (((((boolState[S_OF_RC_CB_LHA3_] || boolState[S_OF_RO_CB_LHA1_]) || boolState[S_OF_RO_CB_LHA2_]) || boolState[S_OF_SH_CB_LHA3]) || boolState[S_OF_TAC]) || boolState[S_OF_demand_TAC] )
	{
		boolState[S_OF_loss_of_supply_by_TAC]  =  true;
	}

	if ((boolState[S_OF_LGA] || boolState[S_OF_SH_CB_LGA]) || boolState[S_OF_TS_lost] )
	{
		boolState[S_OF_loss_of_supply_by_TS]  =  true;
	}

	if ((boolState[S_OF_LGB] || boolState[S_OF_SH_CB_LGB]) || boolState[S_OF_TS_lost] )
	{
		boolState[S_OF_loss_of_supply_by_TS1]  =  true;
	}

	if ((boolState[S_OF_TP] || boolState[S_OF_UNIT]) || boolState[S_OF_loss_of_houseload_operation] )
	{
		boolState[S_OF_loss_of_supply_by_UNIT]  =  true;
	}

}


void storm::figaro::FigaroProgram_NPPS_No_trim_No_repair::runOnceInteractionStep_propagate_effect_required()
{
	if (( !boolState[required_OF_LBB_not_fed]) || ( !boolState[S_OF_LBBline1_lost]) )
	{
		boolState[required_OF_AND_3]  =  false;
	}

	if (boolState[relevant_evt_OF_LBB_not_fed] && ( !boolState[S_OF_LBB_not_fed]) )
	{
		boolState[relevant_evt_OF_AND_3]  =  true;
	}

	if (( !boolState[required_OF_LBAothers_lost]) || ( !boolState[S_OF_LBAline2_lost]) )
	{
		boolState[required_OF_BATTERY_A_lost]  =  false;
	}

	if (boolState[relevant_evt_OF_LBAothers_lost] && ( !boolState[S_OF_LBAothers_lost]) )
	{
		boolState[relevant_evt_OF_BATTERY_A_lost]  =  true;
	}

	if (( !boolState[required_OF_AND_3]) || ( !boolState[S_OF_LBBline2_lost]) )
	{
		boolState[required_OF_BATTERY_B_lost]  =  false;
	}

	if (boolState[relevant_evt_OF_AND_3] && ( !boolState[S_OF_AND_3]) )
	{
		boolState[relevant_evt_OF_BATTERY_B_lost]  =  true;
	}

	if ( !boolState[required_OF_BATTERY_A_lost] )
	{
		boolState[required_OF_BAT_A1]  =  false;
	}

	if ((boolState[relevant_evt_OF_BATTERY_A_lost] && ( !boolState[S_OF_BATTERY_A_lost])  ) || (boolState[relevant_evt_OF_BAT_A2] && ( !boolState[S_OF_BAT_A2])) )
	{
		boolState[relevant_evt_OF_BAT_A1]  =  true;
	}

	if (( !boolState[required_OF_BATTERY_A_lost]) || ( !boolState[S_OF_BAT_A1]) )
	{
		boolState[required_OF_BAT_A2]  =  false;
	}

	if (boolState[relevant_evt_OF_BATTERY_A_lost] && ( !boolState[S_OF_BATTERY_A_lost]) )
	{
		boolState[relevant_evt_OF_BAT_A2]  =  true;
	}

	if ( !boolState[required_OF_BATTERY_B_lost] )
	{
		boolState[required_OF_BAT_B1]  =  false;
	}

	if ((boolState[relevant_evt_OF_BATTERY_B_lost] && ( !boolState[S_OF_BATTERY_B_lost])  ) || (boolState[relevant_evt_OF_BAT_B2] && ( !boolState[S_OF_BAT_B2])) )
	{
		boolState[relevant_evt_OF_BAT_B1]  =  true;
	}

	if (( !boolState[required_OF_BATTERY_B_lost]) || ( !boolState[S_OF_BAT_B1]) )
	{
		boolState[required_OF_BAT_B2]  =  false;
	}

	if (boolState[relevant_evt_OF_BATTERY_B_lost] && ( !boolState[S_OF_BATTERY_B_lost]) )
	{
		boolState[relevant_evt_OF_BAT_B2]  =  true;
	}

	if ( !boolState[required_OF_RC_CB_LGD2_] )
	{
		boolState[required_OF_CB_LGD2_unable]  =  false;
	}

	if (boolState[relevant_evt_OF_RC_CB_LGD2_] && ( !boolState[S_OF_RC_CB_LGD2_]) )
	{
		boolState[relevant_evt_OF_CB_LGD2_unable]  =  true;
	}

	if ( !boolState[required_OF_RC_CB_LGF2_] )
	{
		boolState[required_OF_CB_LGF2_unable]  =  false;
	}

	if (boolState[relevant_evt_OF_RC_CB_LGF2_] && ( !boolState[S_OF_RC_CB_LGF2_]) )
	{
		boolState[relevant_evt_OF_CB_LGF2_unable]  =  true;
	}

	if ((( !boolState[required_OF_RC_CB_LHA2_]) && ( !boolState[required_OF_RO_CB_LHA1_])) && ( !boolState[required_OF_RO_CB_LHA2_]) )
	{
		boolState[required_OF_CB_LHA12_unable]  =  false;
	}

	if (((boolState[relevant_evt_OF_RC_CB_LHA2_] && ( !boolState[S_OF_RC_CB_LHA2_])) || (boolState[relevant_evt_OF_RO_CB_LHA1_] && ( !boolState[S_OF_RO_CB_LHA1_]))) || (boolState[relevant_evt_OF_RO_CB_LHA2_] && ( !boolState[S_OF_RO_CB_LHA2_])) )
	{
		boolState[relevant_evt_OF_CB_LHA12_unable]  =  true;
	}

	if ( !boolState[required_OF_RC_CB_LHA3_] )
	{
		boolState[required_OF_CB_LHA3_unable]  =  false;
	}

	if (boolState[relevant_evt_OF_RC_CB_LHA3_] && ( !boolState[S_OF_RC_CB_LHA3_]) )
	{
		boolState[relevant_evt_OF_CB_LHA3_unable]  =  true;
	}

	if (( !boolState[required_OF_RC_CB_LHB2_]) && ( !boolState[required_OF_RO_CB_LHB1_]) )
	{
		boolState[required_OF_CB_LHB12_unable]  =  false;
	}

	if ((boolState[relevant_evt_OF_RC_CB_LHB2_] && ( !boolState[S_OF_RC_CB_LHB2_])) || (  boolState[relevant_evt_OF_RO_CB_LHB1_] && ( !boolState[S_OF_RO_CB_LHB1_])) )
	{
		boolState[relevant_evt_OF_CB_LHB12_unable]  =  true;
	}

	if (( !boolState[required_OF_DGA_lost]) && ( !boolState[required_OF_DGB_lost]) )
	{
		boolState[required_OF_CCF_DG]  =  false;
	}

	if ((boolState[relevant_evt_OF_DGA_lost] && ( !boolState[S_OF_DGA_lost])) || (  boolState[relevant_evt_OF_DGB_lost] && ( !boolState[S_OF_DGB_lost])) )
	{
		boolState[relevant_evt_OF_CCF_DG]  =  true;
	}

	if (( !boolState[required_OF_loss_of_supply_by_GEV]) && ( !boolState[required_OF_loss_of_supply_by_LGR]) )
	{
		boolState[required_OF_CCF_GEV_LGR]  =  false;
	}

	if ((boolState[relevant_evt_OF_loss_of_supply_by_GEV] && ( !boolState[S_OF_loss_of_supply_by_GEV])) || (boolState[relevant_evt_OF_loss_of_supply_by_LGR] && ( !boolState[S_OF_loss_of_supply_by_LGR])) )
	{
		boolState[relevant_evt_OF_CCF_GEV_LGR]  =  true;
	}

	if ( !boolState[required_OF_DGA_lost] )
	{
		boolState[required_OF_DGA_long]  =  false;
	}

	if (boolState[relevant_evt_OF_DGA_lost] && ( !boolState[S_OF_DGA_lost]) )
	{
		boolState[relevant_evt_OF_DGA_long]  =  true;
	}

	if ( !boolState[required_OF_loss_of_supply_by_DGA] )
	{
		boolState[required_OF_DGA_lost]  =  false;
	}

	if (boolState[relevant_evt_OF_loss_of_supply_by_DGA] && ( !boolState[S_OF_loss_of_supply_by_DGA]) )
	{
		boolState[relevant_evt_OF_DGA_lost]  =  true;
	}

	if ( !boolState[required_OF_DGA_lost] )
	{
		boolState[required_OF_DGA_short]  =  false;
	}

	if (boolState[relevant_evt_OF_DGA_lost] && ( !boolState[S_OF_DGA_lost]) )
	{
		boolState[relevant_evt_OF_DGA_short]  =  true;
	}

	if ( !boolState[required_OF_DGB_lost] )
	{
		boolState[required_OF_DGB_long]  =  false;
	}

	if (boolState[relevant_evt_OF_DGB_lost] && ( !boolState[S_OF_DGB_lost]) )
	{
		boolState[relevant_evt_OF_DGB_long]  =  true;
	}

	if ( !boolState[required_OF_loss_of_supply_by_DGB] )
	{
		boolState[required_OF_DGB_lost]  =  false;
	}

	if (boolState[relevant_evt_OF_loss_of_supply_by_DGB] && ( !boolState[S_OF_loss_of_supply_by_DGB]) )
	{
		boolState[relevant_evt_OF_DGB_lost]  =  true;
	}

	if ( !boolState[required_OF_DGB_lost] )
	{
		boolState[required_OF_DGB_short]  =  false;
	}

	if (boolState[relevant_evt_OF_DGB_lost] && ( !boolState[S_OF_DGB_lost]) )
	{
		boolState[relevant_evt_OF_DGB_short]  =  true;
	}

	if ( !boolState[required_OF_SH_GEV_or_LGR] )
	{
		boolState[required_OF_GEV]  =  false;
	}

	if (boolState[relevant_evt_OF_SH_GEV_or_LGR] && ( !boolState[S_OF_SH_GEV_or_LGR]) )
	{
		boolState[relevant_evt_OF_GEV]  =  true;
	}

	if ( !boolState[required_OF_OR_14] )
	{
		boolState[required_OF_GRID]  =  false;
	}

	if (boolState[relevant_evt_OF_OR_14] && ( !boolState[S_OF_OR_14]) )
	{
		boolState[relevant_evt_OF_GRID]  =  true;
	}

	if ( !boolState[required_OF_loss_of_houseload_operation] )
	{
		boolState[required_OF_InFnHouse]  =  false;
	}

	if (boolState[relevant_evt_OF_loss_of_houseload_operation] && ( !boolState[S_OF_loss_of_houseload_operation]) )
	{
		boolState[relevant_evt_OF_InFnHouse]  =  true;
	}

	if ( !boolState[required_OF_LBA_lost] )
	{
		boolState[required_OF_LBA]  =  false;
	}

	if (boolState[relevant_evt_OF_LBA_lost] && ( !boolState[S_OF_LBA_lost]) )
	{
		boolState[relevant_evt_OF_LBA]  =  true;
	}

	if (((boolState[relevant_evt_OF_CB_LGD2_unable] && ( !boolState[S_OF_CB_LGD2_unable])) || (boolState[relevant_evt_OF_CB_LHA12_unable] && (   !boolState[S_OF_CB_LHA12_unable]))) || (boolState[relevant_evt_OF_CB_LHA3_unable] && ( !boolState[S_OF_CB_LHA3_unable])) )
	{
		boolState[relevant_evt_OF_LBA_lost]  =  true;
	}

	if ( !boolState[required_OF_LBA_lost] )
	{
		boolState[required_OF_LBA_not_fed]  =  false;
	}

	if (boolState[relevant_evt_OF_LBA_lost] && ( !boolState[S_OF_LBA_lost]) )
	{
		boolState[relevant_evt_OF_LBA_not_fed]  =  true;
	}

	if ( !boolState[required_OF_LBA_not_fed] )
	{
		boolState[required_OF_LBAline1_lost]  =  false;
	}

	if ((boolState[relevant_evt_OF_LBA_not_fed] && ( !boolState[S_OF_LBA_not_fed])) || (  boolState[relevant_evt_OF_LBAothers_lost] && ( !boolState[S_OF_LBAothers_lost])) )
	{
		boolState[relevant_evt_OF_LBAline1_lost]  =  true;
	}

	if ( !boolState[required_OF_LBAothers_lost] )
	{
		boolState[required_OF_LBAline2_lost]  =  false;
	}

	if ((boolState[relevant_evt_OF_LBAothers_lost] && ( !boolState[S_OF_LBAothers_lost])  ) || (boolState[relevant_evt_OF_BATTERY_A_lost] && ( !boolState[S_OF_BATTERY_A_lost])) )
	{
		boolState[relevant_evt_OF_LBAline2_lost]  =  true;
	}

	if (( !boolState[required_OF_LBA_not_fed]) || ( !boolState[S_OF_LBAline1_lost]) )
	{
		boolState[required_OF_LBAothers_lost]  =  false;
	}

	if (boolState[relevant_evt_OF_LBA_not_fed] && ( !boolState[S_OF_LBA_not_fed]) )
	{
		boolState[relevant_evt_OF_LBAothers_lost]  =  true;
	}

	if ( !boolState[required_OF_LBB_lost] )
	{
		boolState[required_OF_LBB]  =  false;
	}

	if (boolState[relevant_evt_OF_LBB_lost] && ( !boolState[S_OF_LBB_lost]) )
	{
		boolState[relevant_evt_OF_LBB]  =  true;
	}

	if ((boolState[relevant_evt_OF_CB_LGF2_unable] && ( !boolState[S_OF_CB_LGF2_unable])  ) || (boolState[relevant_evt_OF_CB_LHB12_unable] && ( !boolState[S_OF_CB_LHB12_unable])) )
	{
		boolState[relevant_evt_OF_LBB_lost]  =  true;
	}

	if ( !boolState[required_OF_LBB_lost] )
	{
		boolState[required_OF_LBB_not_fed]  =  false;
	}

	if (boolState[relevant_evt_OF_LBB_lost] && ( !boolState[S_OF_LBB_lost]) )
	{
		boolState[relevant_evt_OF_LBB_not_fed]  =  true;
	}

	if ( !boolState[required_OF_LBB_not_fed] )
	{
		boolState[required_OF_LBBline1_lost]  =  false;
	}

	if ((boolState[relevant_evt_OF_LBB_not_fed] && ( !boolState[S_OF_LBB_not_fed])) || (  boolState[relevant_evt_OF_AND_3] && ( !boolState[S_OF_AND_3])) )
	{
		boolState[relevant_evt_OF_LBBline1_lost]  =  true;
	}

	if ( !boolState[required_OF_AND_3] )
	{
		boolState[required_OF_LBBline2_lost]  =  false;
	}

	if ((boolState[relevant_evt_OF_AND_3] && ( !boolState[S_OF_AND_3])) || (  boolState[relevant_evt_OF_BATTERY_B_lost] && ( !boolState[S_OF_BATTERY_B_lost])) )
	{
		boolState[relevant_evt_OF_LBBline2_lost]  =  true;
	}

	if ( !boolState[required_OF_loss_of_supply_by_TS] )
	{
		boolState[required_OF_LGA]  =  false;
	}

	if (boolState[relevant_evt_OF_loss_of_supply_by_TS] && ( !boolState[S_OF_loss_of_supply_by_TS]) )
	{
		boolState[relevant_evt_OF_LGA]  =  true;
	}

	if ( !boolState[required_OF_loss_of_supply_by_TS1] )
	{
		boolState[required_OF_LGB]  =  false;
	}

	if (boolState[relevant_evt_OF_loss_of_supply_by_TS1] && ( !boolState[S_OF_loss_of_supply_by_TS1]) )
	{
		boolState[relevant_evt_OF_LGB]  =  true;
	}

	if ( !boolState[required_OF_loss_of_supply_by_LGD] )
	{
		boolState[required_OF_LGD]  =  false;
	}

	if (boolState[relevant_evt_OF_loss_of_supply_by_LGD] && ( !boolState[S_OF_loss_of_supply_by_LGD]) )
	{
		boolState[relevant_evt_OF_LGD]  =  true;
	}

	if ( !boolState[required_OF_loss_of_supply_by_LGD] )
	{
		boolState[required_OF_LGD_not_fed]  =  false;
	}

	if (boolState[relevant_evt_OF_loss_of_supply_by_LGD] && ( !boolState[S_OF_loss_of_supply_by_LGD]) )
	{
		boolState[relevant_evt_OF_LGD_not_fed]  =  true;
	}

	if ( !boolState[required_OF_LBAline1_lost] )
	{
		boolState[required_OF_LGE]  =  false;
	}

	if (boolState[relevant_evt_OF_LBAline1_lost] && ( !boolState[S_OF_LBAline1_lost]) )
	{
		boolState[relevant_evt_OF_LGE]  =  true;
	}

	if ( !boolState[required_OF_loss_of_supply_by_LGF] )
	{
		boolState[required_OF_LGF]  =  false;
	}

	if (boolState[relevant_evt_OF_loss_of_supply_by_LGF] && ( !boolState[S_OF_loss_of_supply_by_LGF]) )
	{
		boolState[relevant_evt_OF_LGF]  =  true;
	}

	if ( !boolState[required_OF_loss_of_supply_by_LGF] )
	{
		boolState[required_OF_LGF_not_fed]  =  false;
	}

	if (boolState[relevant_evt_OF_loss_of_supply_by_LGF] && ( !boolState[S_OF_loss_of_supply_by_LGF]) )
	{
		boolState[relevant_evt_OF_LGF_not_fed]  =  true;
	}

	if ( !boolState[required_OF_SH_GEV_or_LGR] )
	{
		boolState[required_OF_LGR]  =  false;
	}

	if (boolState[relevant_evt_OF_SH_GEV_or_LGR] && ( !boolState[S_OF_SH_GEV_or_LGR]) )
	{
		boolState[relevant_evt_OF_LGR]  =  true;
	}

	if ( !boolState[required_OF_LHA_lost] )
	{
		boolState[required_OF_LHA]  =  false;
	}

	if (boolState[relevant_evt_OF_LHA_lost] && ( !boolState[S_OF_LHA_lost]) )
	{
		boolState[relevant_evt_OF_LHA]  =  true;
	}

	if ( !boolState[required_OF_UE_1] )
	{
		boolState[required_OF_LHA_and_LHB_lost]  =  false;
	}

	if (boolState[relevant_evt_OF_UE_1] && ( !boolState[S_OF_UE_1]) )
	{
		boolState[relevant_evt_OF_LHA_and_LHB_lost]  =  true;
	}

	if ( !boolState[required_OF_LHA_and_LHB_lost] )
	{
		boolState[required_OF_LHA_lost]  =  false;
	}

	if (boolState[relevant_evt_OF_LHA_and_LHB_lost] && ( !boolState[S_OF_LHA_and_LHB_lost]) )
	{
		boolState[relevant_evt_OF_LHA_lost]  =  true;
	}

	if ( !boolState[required_OF_LHA_lost] )
	{
		boolState[required_OF_LHA_not_fed]  =  false;
	}

	if (boolState[relevant_evt_OF_LHA_lost] && ( !boolState[S_OF_LHA_lost]) )
	{
		boolState[relevant_evt_OF_LHA_not_fed]  =  true;
	}

	if ( !boolState[required_OF_LHB_lost] )
	{
		boolState[required_OF_LHB]  =  false;
	}

	if (boolState[relevant_evt_OF_LHB_lost] && ( !boolState[S_OF_LHB_lost]) )
	{
		boolState[relevant_evt_OF_LHB]  =  true;
	}

	if ( !boolState[required_OF_LHA_and_LHB_lost] )
	{
		boolState[required_OF_LHB_lost]  =  false;
	}

	if (boolState[relevant_evt_OF_LHA_and_LHB_lost] && ( !boolState[S_OF_LHA_and_LHB_lost]) )
	{
		boolState[relevant_evt_OF_LHB_lost]  =  true;
	}

	if ( !boolState[required_OF_LHB_lost] )
	{
		boolState[required_OF_LHB_not_fed]  =  false;
	}

	if (boolState[relevant_evt_OF_LHB_lost] && ( !boolState[S_OF_LHB_lost]) )
	{
		boolState[relevant_evt_OF_LHB_not_fed]  =  true;
	}

	if ( !boolState[required_OF_LBAline1_lost] )
	{
		boolState[required_OF_LKE]  =  false;
	}

	if (boolState[relevant_evt_OF_LBAline1_lost] && ( !boolState[S_OF_LBAline1_lost]) )
	{
		boolState[relevant_evt_OF_LKE]  =  true;
	}

	if ( !boolState[required_OF_LBBline1_lost] )
	{
		boolState[required_OF_LKI]  =  false;
	}

	if (boolState[relevant_evt_OF_LBBline1_lost] && ( !boolState[S_OF_LBBline1_lost]) )
	{
		boolState[relevant_evt_OF_LKI]  =  true;
	}

	if ( !boolState[required_OF_LBAline2_lost] )
	{
		boolState[required_OF_LLA]  =  false;
	}

	if (boolState[relevant_evt_OF_LBAline2_lost] && ( !boolState[S_OF_LBAline2_lost]) )
	{
		boolState[relevant_evt_OF_LLA]  =  true;
	}

	if ( !boolState[required_OF_LBBline2_lost] )
	{
		boolState[required_OF_LLD]  =  false;
	}

	if (boolState[relevant_evt_OF_LBBline2_lost] && ( !boolState[S_OF_LBBline2_lost]) )
	{
		boolState[relevant_evt_OF_LLD]  =  true;
	}

	if (( !boolState[required_OF_loss_of_supply_by_GEV]) && ( !boolState[required_OF_loss_of_supply_by_LGR]) )
	{
		boolState[required_OF_OR_14]  =  false;
	}

	if ((boolState[relevant_evt_OF_loss_of_supply_by_GEV] && ( !boolState[S_OF_loss_of_supply_by_GEV])) || (boolState[relevant_evt_OF_loss_of_supply_by_LGR] && ( !boolState[S_OF_loss_of_supply_by_LGR])) )
	{
		boolState[relevant_evt_OF_OR_14]  =  true;
	}

	if ( !boolState[required_OF_loss_of_houseload_operation] )
	{
		boolState[required_OF_OnDemHouse]  =  false;
	}

	if (boolState[relevant_evt_OF_loss_of_houseload_operation] && ( !boolState[S_OF_loss_of_houseload_operation]) )
	{
		boolState[relevant_evt_OF_OnDemHouse]  =  true;
	}

	if ( !boolState[required_OF_RC_CB_LGD2_] )
	{
		boolState[required_OF_RC_CB_LGD2]  =  false;
	}

	if (boolState[relevant_evt_OF_RC_CB_LGD2_] && ( !boolState[S_OF_RC_CB_LGD2_]) )
	{
		boolState[relevant_evt_OF_RC_CB_LGD2]  =  true;
	}

	if ( !boolState[required_OF_loss_of_supply_by_TA] )
	{
		boolState[required_OF_RC_CB_LGD2_]  =  false;
	}

	if (boolState[relevant_evt_OF_loss_of_supply_by_TA] && ( !boolState[S_OF_loss_of_supply_by_TA]) )
	{
		boolState[relevant_evt_OF_RC_CB_LGD2_]  =  true;
	}

	if ( !boolState[required_OF_RC_CB_LGF2_] )
	{
		boolState[required_OF_RC_CB_LGF2]  =  false;
	}

	if (boolState[relevant_evt_OF_RC_CB_LGF2_] && ( !boolState[S_OF_RC_CB_LGF2_]) )
	{
		boolState[relevant_evt_OF_RC_CB_LGF2]  =  true;
	}

	if ( !boolState[required_OF_loss_of_supply_by_TA1] )
	{
		boolState[required_OF_RC_CB_LGF2_]  =  false;
	}

	if (boolState[relevant_evt_OF_loss_of_supply_by_TA1] && ( !boolState[S_OF_loss_of_supply_by_TA1]) )
	{
		boolState[relevant_evt_OF_RC_CB_LGF2_]  =  true;
	}

	if ( !boolState[required_OF_RC_CB_LHA2_] )
	{
		boolState[required_OF_RC_CB_LHA2]  =  false;
	}

	if (boolState[relevant_evt_OF_RC_CB_LHA2_] && ( !boolState[S_OF_RC_CB_LHA2_]) )
	{
		boolState[relevant_evt_OF_RC_CB_LHA2]  =  true;
	}

	if ( !boolState[required_OF_loss_of_supply_by_DGA] )
	{
		boolState[required_OF_RC_CB_LHA2_]  =  false;
	}

	if (boolState[relevant_evt_OF_loss_of_supply_by_DGA] && ( !boolState[S_OF_loss_of_supply_by_DGA]) )
	{
		boolState[relevant_evt_OF_RC_CB_LHA2_]  =  true;
	}

	if ( !boolState[required_OF_RC_CB_LHA3_] )
	{
		boolState[required_OF_RC_CB_LHA3]  =  false;
	}

	if (boolState[relevant_evt_OF_RC_CB_LHA3_] && ( !boolState[S_OF_RC_CB_LHA3_]) )
	{
		boolState[relevant_evt_OF_RC_CB_LHA3]  =  true;
	}

	if ( !boolState[required_OF_loss_of_supply_by_TAC] )
	{
		boolState[required_OF_RC_CB_LHA3_]  =  false;
	}

	if (boolState[relevant_evt_OF_loss_of_supply_by_TAC] && ( !boolState[S_OF_loss_of_supply_by_TAC]) )
	{
		boolState[relevant_evt_OF_RC_CB_LHA3_]  =  true;
	}

	if ( !boolState[required_OF_RC_CB_LHB2_] )
	{
		boolState[required_OF_RC_CB_LHB2]  =  false;
	}

	if (boolState[relevant_evt_OF_RC_CB_LHB2_] && ( !boolState[S_OF_RC_CB_LHB2_]) )
	{
		boolState[relevant_evt_OF_RC_CB_LHB2]  =  true;
	}

	if ( !boolState[required_OF_loss_of_supply_by_DGB] )
	{
		boolState[required_OF_RC_CB_LHB2_]  =  false;
	}

	if (boolState[relevant_evt_OF_loss_of_supply_by_DGB] && ( !boolState[S_OF_loss_of_supply_by_DGB]) )
	{
		boolState[relevant_evt_OF_RC_CB_LHB2_]  =  true;
	}

	if ( !boolState[required_OF_LBAline1_lost] )
	{
		boolState[required_OF_RDA1]  =  false;
	}

	if (boolState[relevant_evt_OF_LBAline1_lost] && ( !boolState[S_OF_LBAline1_lost]) )
	{
		boolState[relevant_evt_OF_RDA1]  =  true;
	}

	if ( !boolState[required_OF_LBAline2_lost] )
	{
		boolState[required_OF_RDA2]  =  false;
	}

	if (boolState[relevant_evt_OF_LBAline2_lost] && ( !boolState[S_OF_LBAline2_lost]) )
	{
		boolState[relevant_evt_OF_RDA2]  =  true;
	}

	if ( !boolState[required_OF_LBBline1_lost] )
	{
		boolState[required_OF_RDB1]  =  false;
	}

	if (boolState[relevant_evt_OF_LBBline1_lost] && ( !boolState[S_OF_LBBline1_lost]) )
	{
		boolState[relevant_evt_OF_RDB1]  =  true;
	}

	if ( !boolState[required_OF_LBBline2_lost] )
	{
		boolState[required_OF_RDB2]  =  false;
	}

	if (boolState[relevant_evt_OF_LBBline2_lost] && ( !boolState[S_OF_LBBline2_lost]) )
	{
		boolState[relevant_evt_OF_RDB2]  =  true;
	}

	if ( !boolState[required_OF_RO_CB_LHA1_] )
	{
		boolState[required_OF_RO_CB_LHA1]  =  false;
	}

	if (boolState[relevant_evt_OF_RO_CB_LHA1_] && ( !boolState[S_OF_RO_CB_LHA1_]) )
	{
		boolState[relevant_evt_OF_RO_CB_LHA1]  =  true;
	}

	if (( !boolState[required_OF_loss_of_supply_by_DGA]) && ( !boolState[required_OF_loss_of_supply_by_TAC]) )
	{
		boolState[required_OF_RO_CB_LHA1_]  =  false;
	}

	if ((boolState[relevant_evt_OF_loss_of_supply_by_DGA] && ( !boolState[S_OF_loss_of_supply_by_DGA])) || (boolState[relevant_evt_OF_loss_of_supply_by_TAC] && ( !boolState[S_OF_loss_of_supply_by_TAC])) )
	{
		boolState[relevant_evt_OF_RO_CB_LHA1_]  =  true;
	}

	if ( !boolState[required_OF_RO_CB_LHA2_] )
	{
		boolState[required_OF_RO_CB_LHA2]  =  false;
	}

	if (boolState[relevant_evt_OF_RO_CB_LHA2_] && ( !boolState[S_OF_RO_CB_LHA2_]) )
	{
		boolState[relevant_evt_OF_RO_CB_LHA2]  =  true;
	}

	if ( !boolState[required_OF_loss_of_supply_by_TAC] )
	{
		boolState[required_OF_RO_CB_LHA2_]  =  false;
	}

	if (boolState[relevant_evt_OF_loss_of_supply_by_TAC] && ( !boolState[S_OF_loss_of_supply_by_TAC]) )
	{
		boolState[relevant_evt_OF_RO_CB_LHA2_]  =  true;
	}

	if ( !boolState[required_OF_RO_CB_LHB1_] )
	{
		boolState[required_OF_RO_CB_LHB1]  =  false;
	}

	if (boolState[relevant_evt_OF_RO_CB_LHB1_] && ( !boolState[S_OF_RO_CB_LHB1_]) )
	{
		boolState[relevant_evt_OF_RO_CB_LHB1]  =  true;
	}

	if ( !boolState[required_OF_loss_of_supply_by_DGB] )
	{
		boolState[required_OF_RO_CB_LHB1_]  =  false;
	}

	if (boolState[relevant_evt_OF_loss_of_supply_by_DGB] && ( !boolState[S_OF_loss_of_supply_by_DGB]) )
	{
		boolState[relevant_evt_OF_RO_CB_LHB1_]  =  true;
	}

	if ( !boolState[required_OF_TS_lost] )
	{
		boolState[required_OF_SH_CB_GEV]  =  false;
	}

	if (boolState[relevant_evt_OF_TS_lost] && ( !boolState[S_OF_TS_lost]) )
	{
		boolState[relevant_evt_OF_SH_CB_GEV]  =  true;
	}

	if ( !boolState[required_OF_LBA_lost] )
	{
		boolState[required_OF_SH_CB_LBA1]  =  false;
	}

	if (boolState[relevant_evt_OF_LBA_lost] && ( !boolState[S_OF_LBA_lost]) )
	{
		boolState[relevant_evt_OF_SH_CB_LBA1]  =  true;
	}

	if ( !boolState[required_OF_LBAline2_lost] )
	{
		boolState[required_OF_SH_CB_LBA2]  =  false;
	}

	if (boolState[relevant_evt_OF_LBAline2_lost] && ( !boolState[S_OF_LBAline2_lost]) )
	{
		boolState[relevant_evt_OF_SH_CB_LBA2]  =  true;
	}

	if ( !boolState[required_OF_LBB_lost] )
	{
		boolState[required_OF_SH_CB_LBB1]  =  false;
	}

	if (boolState[relevant_evt_OF_LBB_lost] && ( !boolState[S_OF_LBB_lost]) )
	{
		boolState[relevant_evt_OF_SH_CB_LBB1]  =  true;
	}

	if ( !boolState[required_OF_LBBline2_lost] )
	{
		boolState[required_OF_SH_CB_LBB2]  =  false;
	}

	if (boolState[relevant_evt_OF_LBBline2_lost] && ( !boolState[S_OF_LBBline2_lost]) )
	{
		boolState[relevant_evt_OF_SH_CB_LBB2]  =  true;
	}

	if ( !boolState[required_OF_loss_of_supply_by_TS] )
	{
		boolState[required_OF_SH_CB_LGA]  =  false;
	}

	if (boolState[relevant_evt_OF_loss_of_supply_by_TS] && ( !boolState[S_OF_loss_of_supply_by_TS]) )
	{
		boolState[relevant_evt_OF_SH_CB_LGA]  =  true;
	}

	if ( !boolState[required_OF_loss_of_supply_by_TS1] )
	{
		boolState[required_OF_SH_CB_LGB]  =  false;
	}

	if (boolState[relevant_evt_OF_loss_of_supply_by_TS1] && ( !boolState[S_OF_loss_of_supply_by_TS1]) )
	{
		boolState[relevant_evt_OF_SH_CB_LGB]  =  true;
	}

	if ( !boolState[required_OF_loss_of_supply_by_LGD] )
	{
		boolState[required_OF_SH_CB_LGD1]  =  false;
	}

	if (boolState[relevant_evt_OF_loss_of_supply_by_LGD] && ( !boolState[S_OF_loss_of_supply_by_LGD]) )
	{
		boolState[relevant_evt_OF_SH_CB_LGD1]  =  true;
	}

	if ( !boolState[required_OF_loss_of_supply_by_TA] )
	{
		boolState[required_OF_SH_CB_LGD2]  =  false;
	}

	if (boolState[relevant_evt_OF_loss_of_supply_by_TA] && ( !boolState[S_OF_loss_of_supply_by_TA]) )
	{
		boolState[relevant_evt_OF_SH_CB_LGD2]  =  true;
	}

	if ( !boolState[required_OF_LBAline1_lost] )
	{
		boolState[required_OF_SH_CB_LGE1]  =  false;
	}

	if (boolState[relevant_evt_OF_LBAline1_lost] && ( !boolState[S_OF_LBAline1_lost]) )
	{
		boolState[relevant_evt_OF_SH_CB_LGE1]  =  true;
	}

	if ( !boolState[required_OF_loss_of_supply_by_LGF] )
	{
		boolState[required_OF_SH_CB_LGF1]  =  false;
	}

	if (boolState[relevant_evt_OF_loss_of_supply_by_LGF] && ( !boolState[S_OF_loss_of_supply_by_LGF]) )
	{
		boolState[relevant_evt_OF_SH_CB_LGF1]  =  true;
	}

	if ( !boolState[required_OF_loss_of_supply_by_TA1] )
	{
		boolState[required_OF_SH_CB_LGF2]  =  false;
	}

	if (boolState[relevant_evt_OF_loss_of_supply_by_TA1] && ( !boolState[S_OF_loss_of_supply_by_TA1]) )
	{
		boolState[relevant_evt_OF_SH_CB_LGF2]  =  true;
	}

	if ( !boolState[required_OF_LHA_lost] )
	{
		boolState[required_OF_SH_CB_LHA1]  =  false;
	}

	if (boolState[relevant_evt_OF_LHA_lost] && ( !boolState[S_OF_LHA_lost]) )
	{
		boolState[relevant_evt_OF_SH_CB_LHA1]  =  true;
	}

	if ( !boolState[required_OF_loss_of_supply_by_DGA] )
	{
		boolState[required_OF_SH_CB_LHA2]  =  false;
	}

	if (boolState[relevant_evt_OF_loss_of_supply_by_DGA] && ( !boolState[S_OF_loss_of_supply_by_DGA]) )
	{
		boolState[relevant_evt_OF_SH_CB_LHA2]  =  true;
	}

	if ( !boolState[required_OF_loss_of_supply_by_TAC] )
	{
		boolState[required_OF_SH_CB_LHA3]  =  false;
	}

	if (boolState[relevant_evt_OF_loss_of_supply_by_TAC] && ( !boolState[S_OF_loss_of_supply_by_TAC]) )
	{
		boolState[relevant_evt_OF_SH_CB_LHA3]  =  true;
	}

	if ( !boolState[required_OF_LHB_lost] )
	{
		boolState[required_OF_SH_CB_LHB1]  =  false;
	}

	if (boolState[relevant_evt_OF_LHB_lost] && ( !boolState[S_OF_LHB_lost]) )
	{
		boolState[relevant_evt_OF_SH_CB_LHB1]  =  true;
	}

	if ( !boolState[required_OF_loss_of_supply_by_DGB] )
	{
		boolState[required_OF_SH_CB_LHB2]  =  false;
	}

	if (boolState[relevant_evt_OF_loss_of_supply_by_DGB] && ( !boolState[S_OF_loss_of_supply_by_DGB]) )
	{
		boolState[relevant_evt_OF_SH_CB_LHB2]  =  true;
	}

	if ( !boolState[required_OF_LBAline1_lost] )
	{
		boolState[required_OF_SH_CB_RDA1]  =  false;
	}

	if (boolState[relevant_evt_OF_LBAline1_lost] && ( !boolState[S_OF_LBAline1_lost]) )
	{
		boolState[relevant_evt_OF_SH_CB_RDA1]  =  true;
	}

	if ( !boolState[required_OF_LBAline2_lost] )
	{
		boolState[required_OF_SH_CB_RDA2]  =  false;
	}

	if (boolState[relevant_evt_OF_LBAline2_lost] && ( !boolState[S_OF_LBAline2_lost]) )
	{
		boolState[relevant_evt_OF_SH_CB_RDA2]  =  true;
	}

	if ( !boolState[required_OF_LBBline1_lost] )
	{
		boolState[required_OF_SH_CB_RDB1]  =  false;
	}

	if (boolState[relevant_evt_OF_LBBline1_lost] && ( !boolState[S_OF_LBBline1_lost]) )
	{
		boolState[relevant_evt_OF_SH_CB_RDB1]  =  true;
	}

	if ( !boolState[required_OF_LBBline2_lost] )
	{
		boolState[required_OF_SH_CB_RDB2]  =  false;
	}

	if (boolState[relevant_evt_OF_LBBline2_lost] && ( !boolState[S_OF_LBBline2_lost]) )
	{
		boolState[relevant_evt_OF_SH_CB_RDB2]  =  true;
	}

	if ( !boolState[required_OF_LBAline1_lost] )
	{
		boolState[required_OF_SH_CB_TUA1]  =  false;
	}

	if (boolState[relevant_evt_OF_LBAline1_lost] && ( !boolState[S_OF_LBAline1_lost]) )
	{
		boolState[relevant_evt_OF_SH_CB_TUA1]  =  true;
	}

	if ( !boolState[required_OF_LBAline2_lost] )
	{
		boolState[required_OF_SH_CB_TUA2]  =  false;
	}

	if (boolState[relevant_evt_OF_LBAline2_lost] && ( !boolState[S_OF_LBAline2_lost]) )
	{
		boolState[relevant_evt_OF_SH_CB_TUA2]  =  true;
	}

	if ( !boolState[required_OF_LBBline1_lost] )
	{
		boolState[required_OF_SH_CB_TUB1]  =  false;
	}

	if (boolState[relevant_evt_OF_LBBline1_lost] && ( !boolState[S_OF_LBBline1_lost]) )
	{
		boolState[relevant_evt_OF_SH_CB_TUB1]  =  true;
	}

	if ( !boolState[required_OF_LBBline2_lost] )
	{
		boolState[required_OF_SH_CB_TUB2]  =  false;
	}

	if (boolState[relevant_evt_OF_LBBline2_lost] && ( !boolState[S_OF_LBBline2_lost]) )
	{
		boolState[relevant_evt_OF_SH_CB_TUB2]  =  true;
	}

	if ( !boolState[required_OF_TS_lost] )
	{
		boolState[required_OF_SH_CB_line_GEV]  =  false;
	}

	if (boolState[relevant_evt_OF_TS_lost] && ( !boolState[S_OF_TS_lost]) )
	{
		boolState[relevant_evt_OF_SH_CB_line_GEV]  =  true;
	}

	if ( !boolState[required_OF_TA_lost] )
	{
		boolState[required_OF_SH_CB_line_LGR]  =  false;
	}

	if (boolState[relevant_evt_OF_TA_lost] && ( !boolState[S_OF_TA_lost]) )
	{
		boolState[relevant_evt_OF_SH_CB_line_LGR]  =  true;
	}

	if (( !boolState[required_OF_loss_of_supply_by_GEV]) && ( !boolState[required_OF_loss_of_supply_by_LGR]) )
	{
		boolState[required_OF_SH_GEV_or_LGR]  =  false;
	}

	if ((boolState[relevant_evt_OF_loss_of_supply_by_GEV] && ( !boolState[S_OF_loss_of_supply_by_GEV])) || (boolState[relevant_evt_OF_loss_of_supply_by_LGR] && ( !boolState[S_OF_loss_of_supply_by_LGR])) )
	{
		boolState[relevant_evt_OF_SH_GEV_or_LGR]  =  true;
	}

	if ( !boolState[required_OF_OR_14] )
	{
		boolState[required_OF_SUBSTATION]  =  false;
	}

	if (boolState[relevant_evt_OF_OR_14] && ( !boolState[S_OF_OR_14]) )
	{
		boolState[relevant_evt_OF_SUBSTATION]  =  true;
	}

	if ( !boolState[required_OF_TA_lost] )
	{
		boolState[required_OF_TA]  =  false;
	}

	if (boolState[relevant_evt_OF_TA_lost] && ( !boolState[S_OF_TA_lost]) )
	{
		boolState[relevant_evt_OF_TA]  =  true;
	}

	if ( !boolState[required_OF_loss_of_supply_by_TAC] )
	{
		boolState[required_OF_TAC]  =  false;
	}

	if (boolState[relevant_evt_OF_loss_of_supply_by_TAC] && ( !boolState[S_OF_loss_of_supply_by_TAC]) )
	{
		boolState[relevant_evt_OF_TAC]  =  true;
	}

	if ((boolState[relevant_evt_OF_loss_of_supply_by_TA] && ( !boolState[S_OF_loss_of_supply_by_TA])) || (boolState[relevant_evt_OF_loss_of_supply_by_TA1] && ( !boolState[S_OF_loss_of_supply_by_TA1])) )
	{
		boolState[relevant_evt_OF_TA_lost]  =  true;
	}

	if ( !boolState[required_OF_loss_of_supply_by_UNIT] )
	{
		boolState[required_OF_TP]  =  false;
	}

	if (boolState[relevant_evt_OF_loss_of_supply_by_UNIT] && ( !boolState[S_OF_loss_of_supply_by_UNIT]) )
	{
		boolState[relevant_evt_OF_TP]  =  true;
	}

	if ( !boolState[required_OF_TS_lost] )
	{
		boolState[required_OF_TS]  =  false;
	}

	if (boolState[relevant_evt_OF_TS_lost] && ( !boolState[S_OF_TS_lost]) )
	{
		boolState[relevant_evt_OF_TS]  =  true;
	}

	if (( !boolState[required_OF_loss_of_supply_by_TS]) && ( !boolState[required_OF_loss_of_supply_by_TS1]) )
	{
		boolState[required_OF_TS_lost]  =  false;
	}

	if ((boolState[relevant_evt_OF_loss_of_supply_by_TS] && ( !boolState[S_OF_loss_of_supply_by_TS])) || (boolState[relevant_evt_OF_loss_of_supply_by_TS1] && ( !boolState[S_OF_loss_of_supply_by_TS1])) )
	{
		boolState[relevant_evt_OF_TS_lost]  =  true;
	}

	if ( !boolState[required_OF_TS_lost] )
	{
		boolState[required_OF_TS_not_fed]  =  false;
	}

	if (boolState[relevant_evt_OF_TS_lost] && ( !boolState[S_OF_TS_lost]) )
	{
		boolState[relevant_evt_OF_TS_not_fed]  =  true;
	}

	if ( !boolState[required_OF_LBAline1_lost] )
	{
		boolState[required_OF_TUA1]  =  false;
	}

	if (boolState[relevant_evt_OF_LBAline1_lost] && ( !boolState[S_OF_LBAline1_lost]) )
	{
		boolState[relevant_evt_OF_TUA1]  =  true;
	}

	if ( !boolState[required_OF_LBAline2_lost] )
	{
		boolState[required_OF_TUA2]  =  false;
	}

	if (boolState[relevant_evt_OF_LBAline2_lost] && ( !boolState[S_OF_LBAline2_lost]) )
	{
		boolState[relevant_evt_OF_TUA2]  =  true;
	}

	if ( !boolState[required_OF_LBBline1_lost] )
	{
		boolState[required_OF_TUB1]  =  false;
	}

	if (boolState[relevant_evt_OF_LBBline1_lost] && ( !boolState[S_OF_LBBline1_lost]) )
	{
		boolState[relevant_evt_OF_TUB1]  =  true;
	}

	if ( !boolState[required_OF_LBBline2_lost] )
	{
		boolState[required_OF_TUB2]  =  false;
	}

	if (boolState[relevant_evt_OF_LBBline2_lost] && ( !boolState[S_OF_LBBline2_lost]) )
	{
		boolState[relevant_evt_OF_TUB2]  =  true;
	}



	boolState[relevant_evt_OF_UE_1]  =  true  ;

	if ( !boolState[required_OF_loss_of_supply_by_UNIT] )
	{
		boolState[required_OF_UNIT]  =  false;
	}

	if (boolState[relevant_evt_OF_loss_of_supply_by_UNIT] && ( !boolState[S_OF_loss_of_supply_by_UNIT]) )
	{
		boolState[relevant_evt_OF_UNIT]  =  true;
	}

	if (( !boolState[required_OF_DGA_lost]) && ( !boolState[required_OF_DGB_lost]) )
	{
		boolState[required_OF_demand_CCF_DG]  =  false;
	}

	if ((boolState[relevant_evt_OF_DGA_lost] && ( !boolState[S_OF_DGA_lost])) || (  boolState[relevant_evt_OF_DGB_lost] && ( !boolState[S_OF_DGB_lost])) )
	{
		boolState[relevant_evt_OF_demand_CCF_DG]  =  true;
	}

	if ( !boolState[required_OF_DGA_lost] )
	{
		boolState[required_OF_demand_DGA]  =  false;
	}

	if (boolState[relevant_evt_OF_DGA_lost] && ( !boolState[S_OF_DGA_lost]) )
	{
		boolState[relevant_evt_OF_demand_DGA]  =  true;
	}

	if ( !boolState[required_OF_DGB_lost] )
	{
		boolState[required_OF_demand_DGB]  =  false;
	}

	if (boolState[relevant_evt_OF_DGB_lost] && ( !boolState[S_OF_DGB_lost]) )
	{
		boolState[relevant_evt_OF_demand_DGB]  =  true;
	}

	if ( !boolState[required_OF_loss_of_supply_by_TAC] )
	{
		boolState[required_OF_demand_TAC]  =  false;
	}

	if (boolState[relevant_evt_OF_loss_of_supply_by_TAC] && ( !boolState[S_OF_loss_of_supply_by_TAC]) )
	{
		boolState[relevant_evt_OF_demand_TAC]  =  true;
	}

	if (( !boolState[required_OF_loss_of_supply_by_UNIT]) || ( !boolState[S_OF_loss_of_supply_by_GEV]) )
	{
		boolState[required_OF_loss_of_houseload_operation]  =  false;
	}

	if (boolState[relevant_evt_OF_loss_of_supply_by_UNIT] && ( !boolState[S_OF_loss_of_supply_by_UNIT]) )
	{
		boolState[relevant_evt_OF_loss_of_houseload_operation]  =  true;
	}

	if (( !boolState[required_OF_CB_LHA3_unable]) && ( !boolState[required_OF_loss_of_supply_by_DGA_and_TAC]) )
	{
		boolState[required_OF_loss_of_supply_by_DGA]  =  false;
	}

	if (((boolState[relevant_evt_OF_CB_LHA3_unable] && ( !boolState[S_OF_CB_LHA3_unable])) || (boolState[relevant_evt_OF_loss_of_supply_by_DGA_and_TAC] && ( !boolState[S_OF_loss_of_supply_by_DGA_and_TAC]))) || (boolState[relevant_evt_OF_loss_of_supply_by_TAC] && ( !boolState[S_OF_loss_of_supply_by_TAC])) )
	{
		boolState[relevant_evt_OF_loss_of_supply_by_DGA]  =  true;
	}

	if (( !boolState[required_OF_LHA_not_fed]) || ( !boolState[S_OF_loss_of_supply_by_LGD]) )
	{
		boolState[required_OF_loss_of_supply_by_DGA_and_TAC]  =  false;
	}

	if (boolState[relevant_evt_OF_LHA_not_fed] && ( !boolState[S_OF_LHA_not_fed]) )
	{
		boolState[relevant_evt_OF_loss_of_supply_by_DGA_and_TAC]  =  true;
	}

	if (( !boolState[required_OF_LHB_not_fed]) || ( !boolState[S_OF_loss_of_supply_by_LGF]) )
	{
		boolState[required_OF_loss_of_supply_by_DGB]  =  false;
	}

	if (boolState[relevant_evt_OF_LHB_not_fed] && ( !boolState[S_OF_LHB_not_fed]) )
	{
		boolState[relevant_evt_OF_loss_of_supply_by_DGB]  =  true;
	}

	if ( !boolState[required_OF_TS_not_fed] )
	{
		boolState[required_OF_loss_of_supply_by_GEV]  =  false;
	}

	if ((boolState[relevant_evt_OF_TS_not_fed] && ( !boolState[S_OF_TS_not_fed])) || (  boolState[relevant_evt_OF_loss_of_houseload_operation] && ( !boolState[S_OF_loss_of_houseload_operation])) )
	{
		boolState[relevant_evt_OF_loss_of_supply_by_GEV]  =  true;
	}

	if (( !boolState[required_OF_CB_LHA12_unable]) && ( !boolState[required_OF_LHA_not_fed]) )
	{
		boolState[required_OF_loss_of_supply_by_LGD]  =  false;
	}

	if (((boolState[relevant_evt_OF_CB_LHA12_unable] && ( !boolState[S_OF_CB_LHA12_unable])) || (boolState[relevant_evt_OF_LHA_not_fed] && ( !boolState[S_OF_LHA_not_fed]))) || (boolState[relevant_evt_OF_loss_of_supply_by_DGA_and_TAC] && ( !boolState[S_OF_loss_of_supply_by_DGA_and_TAC])) )
	{
		boolState[relevant_evt_OF_loss_of_supply_by_LGD]  =  true;
	}

	if (( !boolState[required_OF_CB_LHB12_unable]) && ( !boolState[required_OF_LHB_not_fed]) )
	{
		boolState[required_OF_loss_of_supply_by_LGF]  =  false;
	}

	if (((boolState[relevant_evt_OF_CB_LHB12_unable] && ( !boolState[S_OF_CB_LHB12_unable])) || (boolState[relevant_evt_OF_LHB_not_fed] && ( !boolState[S_OF_LHB_not_fed]))) || (boolState[relevant_evt_OF_loss_of_supply_by_DGB] && ( !boolState[S_OF_loss_of_supply_by_DGB])) )
	{
		boolState[relevant_evt_OF_loss_of_supply_by_LGF]  =  true;
	}

	if ( !boolState[required_OF_TA_lost] )
	{
		boolState[required_OF_loss_of_supply_by_LGR]  =  false;
	}

	if (boolState[relevant_evt_OF_TA_lost] && ( !boolState[S_OF_TA_lost]) )
	{
		boolState[relevant_evt_OF_loss_of_supply_by_LGR]  =  true;
	}

	if (( !boolState[required_OF_LGD_not_fed]) || ( !boolState[S_OF_loss_of_supply_by_TS]) )
	{
		boolState[required_OF_loss_of_supply_by_TA]  =  false;
	}

	if (boolState[relevant_evt_OF_LGD_not_fed] && ( !boolState[S_OF_LGD_not_fed]) )
	{
		boolState[relevant_evt_OF_loss_of_supply_by_TA]  =  true;
	}

	if (( !boolState[required_OF_LGF_not_fed]) || ( !boolState[S_OF_loss_of_supply_by_TS1]) )
	{
		boolState[required_OF_loss_of_supply_by_TA1]  =  false;
	}

	if (boolState[relevant_evt_OF_LGF_not_fed] && ( !boolState[S_OF_LGF_not_fed]) )
	{
		boolState[relevant_evt_OF_loss_of_supply_by_TA1]  =  true;
	}

	if (( !boolState[required_OF_loss_of_supply_by_DGA_and_TAC]) || ( !boolState[S_OF_loss_of_supply_by_DGA]) )
	{
		boolState[required_OF_loss_of_supply_by_TAC]  =  false;
	}

	if (boolState[relevant_evt_OF_loss_of_supply_by_DGA_and_TAC] && ( !boolState[S_OF_loss_of_supply_by_DGA_and_TAC]) )
	{
		boolState[relevant_evt_OF_loss_of_supply_by_TAC]  =  true;
	}

	if (( !boolState[required_OF_CB_LGD2_unable]) && ( !boolState[required_OF_LGD_not_fed]) )
	{
		boolState[required_OF_loss_of_supply_by_TS]  =  false;
	}

	if (((boolState[relevant_evt_OF_CB_LGD2_unable] && ( !boolState[S_OF_CB_LGD2_unable])) || (boolState[relevant_evt_OF_LGD_not_fed] && ( !boolState[S_OF_LGD_not_fed]))) || (boolState[relevant_evt_OF_loss_of_supply_by_TA] && ( !boolState[S_OF_loss_of_supply_by_TA])) )
	{
		boolState[relevant_evt_OF_loss_of_supply_by_TS]  =  true;
	}

	if (( !boolState[required_OF_CB_LGF2_unable]) && ( !boolState[required_OF_LGF_not_fed]) )
	{
		boolState[required_OF_loss_of_supply_by_TS1]  =  false;
	}

	if (((boolState[relevant_evt_OF_CB_LGF2_unable] && ( !boolState[S_OF_CB_LGF2_unable])) || (boolState[relevant_evt_OF_LGF_not_fed] && ( !boolState[S_OF_LGF_not_fed]))) || (boolState[relevant_evt_OF_loss_of_supply_by_TA1] && ( !boolState[S_OF_loss_of_supply_by_TA1])) )
	{
		boolState[relevant_evt_OF_loss_of_supply_by_TS1]  =  true;
	}

	if ( !boolState[required_OF_TS_not_fed] )
	{
		boolState[required_OF_loss_of_supply_by_UNIT]  =  false;
	}

	if (boolState[relevant_evt_OF_TS_not_fed] && ( !boolState[S_OF_TS_not_fed]) )
	{
		boolState[relevant_evt_OF_loss_of_supply_by_UNIT]  =  true;
	}

}


void storm::figaro::FigaroProgram_NPPS_No_trim_No_repair::runOnceInteractionStep_propagate_leaves()
{


	boolState[already_S_OF_AND_3]  =  boolState[S_OF_AND_3]  ;



	boolState[already_S_OF_BATTERY_A_lost]  =  boolState[S_OF_BATTERY_A_lost]  ;



	boolState[already_S_OF_BATTERY_B_lost]  =  boolState[S_OF_BATTERY_B_lost]  ;



	boolState[already_S_OF_BAT_A1]  =  boolState[S_OF_BAT_A1]  ;



	boolState[already_S_OF_BAT_A2]  =  boolState[S_OF_BAT_A2]  ;



	boolState[already_S_OF_BAT_B1]  =  boolState[S_OF_BAT_B1]  ;



	boolState[already_S_OF_BAT_B2]  =  boolState[S_OF_BAT_B2]  ;



	boolState[already_S_OF_CB_LGD2_unable]  =  boolState[S_OF_CB_LGD2_unable]  ;



	boolState[already_S_OF_CB_LGF2_unable]  =  boolState[S_OF_CB_LGF2_unable]  ;



	boolState[already_S_OF_CB_LHA12_unable]  =  boolState[S_OF_CB_LHA12_unable]  ;



	boolState[already_S_OF_CB_LHA3_unable]  =  boolState[S_OF_CB_LHA3_unable]  ;



	boolState[already_S_OF_CB_LHB12_unable]  =  boolState[S_OF_CB_LHB12_unable]  ;



	boolState[already_S_OF_CCF_DG]  =  boolState[S_OF_CCF_DG]  ;



	boolState[already_S_OF_CCF_GEV_LGR]  =  boolState[S_OF_CCF_GEV_LGR]  ;



	boolState[already_S_OF_DGA_long]  =  boolState[S_OF_DGA_long]  ;



	boolState[already_S_OF_DGA_lost]  =  boolState[S_OF_DGA_lost]  ;



	boolState[already_S_OF_DGA_short]  =  boolState[S_OF_DGA_short]  ;



	boolState[already_S_OF_DGB_long]  =  boolState[S_OF_DGB_long]  ;



	boolState[already_S_OF_DGB_lost]  =  boolState[S_OF_DGB_lost]  ;



	boolState[already_S_OF_DGB_short]  =  boolState[S_OF_DGB_short]  ;



	boolState[already_S_OF_GEV]  =  boolState[S_OF_GEV]  ;



	boolState[already_S_OF_GRID]  =  boolState[S_OF_GRID]  ;



	boolState[already_S_OF_InFnHouse]  =  boolState[S_OF_InFnHouse]  ;



	boolState[already_S_OF_LBA]  =  boolState[S_OF_LBA]  ;



	boolState[already_S_OF_LBA_lost]  =  boolState[S_OF_LBA_lost]  ;



	boolState[already_S_OF_LBA_not_fed]  =  boolState[S_OF_LBA_not_fed]  ;



	boolState[already_S_OF_LBAline1_lost]  =  boolState[S_OF_LBAline1_lost]  ;



	boolState[already_S_OF_LBAline2_lost]  =  boolState[S_OF_LBAline2_lost]  ;



	boolState[already_S_OF_LBAothers_lost]  =  boolState[S_OF_LBAothers_lost]  ;



	boolState[already_S_OF_LBB]  =  boolState[S_OF_LBB]  ;



	boolState[already_S_OF_LBB_lost]  =  boolState[S_OF_LBB_lost]  ;



	boolState[already_S_OF_LBB_not_fed]  =  boolState[S_OF_LBB_not_fed]  ;



	boolState[already_S_OF_LBBline1_lost]  =  boolState[S_OF_LBBline1_lost]  ;



	boolState[already_S_OF_LBBline2_lost]  =  boolState[S_OF_LBBline2_lost]  ;



	boolState[already_S_OF_LGA]  =  boolState[S_OF_LGA]  ;



	boolState[already_S_OF_LGB]  =  boolState[S_OF_LGB]  ;



	boolState[already_S_OF_LGD]  =  boolState[S_OF_LGD]  ;



	boolState[already_S_OF_LGD_not_fed]  =  boolState[S_OF_LGD_not_fed]  ;



	boolState[already_S_OF_LGE]  =  boolState[S_OF_LGE]  ;



	boolState[already_S_OF_LGF]  =  boolState[S_OF_LGF]  ;



	boolState[already_S_OF_LGF_not_fed]  =  boolState[S_OF_LGF_not_fed]  ;



	boolState[already_S_OF_LGR]  =  boolState[S_OF_LGR]  ;



	boolState[already_S_OF_LHA]  =  boolState[S_OF_LHA]  ;



	boolState[already_S_OF_LHA_and_LHB_lost]  =  boolState[S_OF_LHA_and_LHB_lost]  ;



	boolState[already_S_OF_LHA_lost]  =  boolState[S_OF_LHA_lost]  ;



	boolState[already_S_OF_LHA_not_fed]  =  boolState[S_OF_LHA_not_fed]  ;



	boolState[already_S_OF_LHB]  =  boolState[S_OF_LHB]  ;



	boolState[already_S_OF_LHB_lost]  =  boolState[S_OF_LHB_lost]  ;



	boolState[already_S_OF_LHB_not_fed]  =  boolState[S_OF_LHB_not_fed]  ;



	boolState[already_S_OF_LKE]  =  boolState[S_OF_LKE]  ;



	boolState[already_S_OF_LKI]  =  boolState[S_OF_LKI]  ;



	boolState[already_S_OF_LLA]  =  boolState[S_OF_LLA]  ;



	boolState[already_S_OF_LLD]  =  boolState[S_OF_LLD]  ;



	boolState[already_S_OF_OR_14]  =  boolState[S_OF_OR_14]  ;



	boolState[already_S_OF_OnDemHouse]  =  boolState[S_OF_OnDemHouse]  ;

	if (( !boolState[required_OF_OnDemHouse]) && (( !boolState[already_standby_OF_OnDemHouse]) && ( !boolState[already_required_OF_OnDemHouse])) )
	{
		boolState[already_standby_OF_OnDemHouse]  =  true;
	}



	boolState[already_S_OF_RC_CB_LGD2]  =  boolState[S_OF_RC_CB_LGD2]  ;

	if (( !boolState[required_OF_RC_CB_LGD2]) && (( !boolState[already_standby_OF_RC_CB_LGD2]) && ( !boolState[already_required_OF_RC_CB_LGD2])) )
	{
		boolState[already_standby_OF_RC_CB_LGD2]  =  true;
	}



	boolState[already_S_OF_RC_CB_LGD2_]  =  boolState[S_OF_RC_CB_LGD2_]  ;



	boolState[already_S_OF_RC_CB_LGF2]  =  boolState[S_OF_RC_CB_LGF2]  ;

	if (( !boolState[required_OF_RC_CB_LGF2]) && (( !boolState[already_standby_OF_RC_CB_LGF2]) && ( !boolState[already_required_OF_RC_CB_LGF2])) )
	{
		boolState[already_standby_OF_RC_CB_LGF2]  =  true;
	}



	boolState[already_S_OF_RC_CB_LGF2_]  =  boolState[S_OF_RC_CB_LGF2_]  ;



	boolState[already_S_OF_RC_CB_LHA2]  =  boolState[S_OF_RC_CB_LHA2]  ;

	if (( !boolState[required_OF_RC_CB_LHA2]) && (( !boolState[already_standby_OF_RC_CB_LHA2]) && ( !boolState[already_required_OF_RC_CB_LHA2])) )
	{
		boolState[already_standby_OF_RC_CB_LHA2]  =  true;
	}



	boolState[already_S_OF_RC_CB_LHA2_]  =  boolState[S_OF_RC_CB_LHA2_]  ;



	boolState[already_S_OF_RC_CB_LHA3]  =  boolState[S_OF_RC_CB_LHA3]  ;

	if (( !boolState[required_OF_RC_CB_LHA3]) && (( !boolState[already_standby_OF_RC_CB_LHA3]) && ( !boolState[already_required_OF_RC_CB_LHA3])) )
	{
		boolState[already_standby_OF_RC_CB_LHA3]  =  true;
	}



	boolState[already_S_OF_RC_CB_LHA3_]  =  boolState[S_OF_RC_CB_LHA3_]  ;



	boolState[already_S_OF_RC_CB_LHB2]  =  boolState[S_OF_RC_CB_LHB2]  ;

	if (( !boolState[required_OF_RC_CB_LHB2]) && (( !boolState[already_standby_OF_RC_CB_LHB2]) && ( !boolState[already_required_OF_RC_CB_LHB2])) )
	{
		boolState[already_standby_OF_RC_CB_LHB2]  =  true;
	}



	boolState[already_S_OF_RC_CB_LHB2_]  =  boolState[S_OF_RC_CB_LHB2_]  ;



	boolState[already_S_OF_RDA1]  =  boolState[S_OF_RDA1]  ;



	boolState[already_S_OF_RDA2]  =  boolState[S_OF_RDA2]  ;



	boolState[already_S_OF_RDB1]  =  boolState[S_OF_RDB1]  ;



	boolState[already_S_OF_RDB2]  =  boolState[S_OF_RDB2]  ;



	boolState[already_S_OF_RO_CB_LHA1]  =  boolState[S_OF_RO_CB_LHA1]  ;

	if (( !boolState[required_OF_RO_CB_LHA1]) && (( !boolState[already_standby_OF_RO_CB_LHA1]) && ( !boolState[already_required_OF_RO_CB_LHA1])) )
	{
		boolState[already_standby_OF_RO_CB_LHA1]  =  true;
	}



	boolState[already_S_OF_RO_CB_LHA1_]  =  boolState[S_OF_RO_CB_LHA1_]  ;



	boolState[already_S_OF_RO_CB_LHA2]  =  boolState[S_OF_RO_CB_LHA2]  ;

	if (( !boolState[required_OF_RO_CB_LHA2]) && (( !boolState[already_standby_OF_RO_CB_LHA2]) && ( !boolState[already_required_OF_RO_CB_LHA2])) )
	{
		boolState[already_standby_OF_RO_CB_LHA2]  =  true;
	}



	boolState[already_S_OF_RO_CB_LHA2_]  =  boolState[S_OF_RO_CB_LHA2_]  ;



	boolState[already_S_OF_RO_CB_LHB1]  =  boolState[S_OF_RO_CB_LHB1]  ;

	if (( !boolState[required_OF_RO_CB_LHB1]) && (( !boolState[already_standby_OF_RO_CB_LHB1]) && ( !boolState[already_required_OF_RO_CB_LHB1])) )
	{
		boolState[already_standby_OF_RO_CB_LHB1]  =  true;
	}



	boolState[already_S_OF_RO_CB_LHB1_]  =  boolState[S_OF_RO_CB_LHB1_]  ;



	boolState[already_S_OF_SH_CB_GEV]  =  boolState[S_OF_SH_CB_GEV]  ;



	boolState[already_S_OF_SH_CB_LBA1]  =  boolState[S_OF_SH_CB_LBA1]  ;



	boolState[already_S_OF_SH_CB_LBA2]  =  boolState[S_OF_SH_CB_LBA2]  ;



	boolState[already_S_OF_SH_CB_LBB1]  =  boolState[S_OF_SH_CB_LBB1]  ;



	boolState[already_S_OF_SH_CB_LBB2]  =  boolState[S_OF_SH_CB_LBB2]  ;



	boolState[already_S_OF_SH_CB_LGA]  =  boolState[S_OF_SH_CB_LGA]  ;



	boolState[already_S_OF_SH_CB_LGB]  =  boolState[S_OF_SH_CB_LGB]  ;



	boolState[already_S_OF_SH_CB_LGD1]  =  boolState[S_OF_SH_CB_LGD1]  ;



	boolState[already_S_OF_SH_CB_LGD2]  =  boolState[S_OF_SH_CB_LGD2]  ;



	boolState[already_S_OF_SH_CB_LGE1]  =  boolState[S_OF_SH_CB_LGE1]  ;



	boolState[already_S_OF_SH_CB_LGF1]  =  boolState[S_OF_SH_CB_LGF1]  ;



	boolState[already_S_OF_SH_CB_LGF2]  =  boolState[S_OF_SH_CB_LGF2]  ;



	boolState[already_S_OF_SH_CB_LHA1]  =  boolState[S_OF_SH_CB_LHA1]  ;



	boolState[already_S_OF_SH_CB_LHA2]  =  boolState[S_OF_SH_CB_LHA2]  ;



	boolState[already_S_OF_SH_CB_LHA3]  =  boolState[S_OF_SH_CB_LHA3]  ;



	boolState[already_S_OF_SH_CB_LHB1]  =  boolState[S_OF_SH_CB_LHB1]  ;



	boolState[already_S_OF_SH_CB_LHB2]  =  boolState[S_OF_SH_CB_LHB2]  ;



	boolState[already_S_OF_SH_CB_RDA1]  =  boolState[S_OF_SH_CB_RDA1]  ;



	boolState[already_S_OF_SH_CB_RDA2]  =  boolState[S_OF_SH_CB_RDA2]  ;



	boolState[already_S_OF_SH_CB_RDB1]  =  boolState[S_OF_SH_CB_RDB1]  ;



	boolState[already_S_OF_SH_CB_RDB2]  =  boolState[S_OF_SH_CB_RDB2]  ;



	boolState[already_S_OF_SH_CB_TUA1]  =  boolState[S_OF_SH_CB_TUA1]  ;



	boolState[already_S_OF_SH_CB_TUA2]  =  boolState[S_OF_SH_CB_TUA2]  ;



	boolState[already_S_OF_SH_CB_TUB1]  =  boolState[S_OF_SH_CB_TUB1]  ;



	boolState[already_S_OF_SH_CB_TUB2]  =  boolState[S_OF_SH_CB_TUB2]  ;



	boolState[already_S_OF_SH_CB_line_GEV]  =  boolState[S_OF_SH_CB_line_GEV]  ;



	boolState[already_S_OF_SH_CB_line_LGR]  =  boolState[S_OF_SH_CB_line_LGR]  ;



	boolState[already_S_OF_SH_GEV_or_LGR]  =  boolState[S_OF_SH_GEV_or_LGR]  ;



	boolState[already_S_OF_SUBSTATION]  =  boolState[S_OF_SUBSTATION]  ;



	boolState[already_S_OF_TA]  =  boolState[S_OF_TA]  ;



	boolState[already_S_OF_TAC]  =  boolState[S_OF_TAC]  ;



	boolState[already_S_OF_TA_lost]  =  boolState[S_OF_TA_lost]  ;



	boolState[already_S_OF_TP]  =  boolState[S_OF_TP]  ;



	boolState[already_S_OF_TS]  =  boolState[S_OF_TS]  ;



	boolState[already_S_OF_TS_lost]  =  boolState[S_OF_TS_lost]  ;



	boolState[already_S_OF_TS_not_fed]  =  boolState[S_OF_TS_not_fed]  ;



	boolState[already_S_OF_TUA1]  =  boolState[S_OF_TUA1]  ;



	boolState[already_S_OF_TUA2]  =  boolState[S_OF_TUA2]  ;



	boolState[already_S_OF_TUB1]  =  boolState[S_OF_TUB1]  ;



	boolState[already_S_OF_TUB2]  =  boolState[S_OF_TUB2]  ;



	boolState[already_S_OF_UE_1]  =  boolState[S_OF_UE_1]  ;



	boolState[already_S_OF_UNIT]  =  boolState[S_OF_UNIT]  ;



	boolState[already_S_OF_demand_CCF_DG]  =  boolState[S_OF_demand_CCF_DG]  ;

	if (( !boolState[required_OF_demand_CCF_DG]) && (( !boolState[already_standby_OF_demand_CCF_DG]) && ( !boolState[already_required_OF_demand_CCF_DG])) )
	{
		boolState[already_standby_OF_demand_CCF_DG]  =  true;
	}



	boolState[already_S_OF_demand_DGA]  =  boolState[S_OF_demand_DGA]  ;

	if (( !boolState[required_OF_demand_DGA]) && (( !boolState[already_standby_OF_demand_DGA]) && ( !boolState[already_required_OF_demand_DGA])) )
	{
		boolState[already_standby_OF_demand_DGA]  =  true;
	}



	boolState[already_S_OF_demand_DGB]  =  boolState[S_OF_demand_DGB]  ;

	if (( !boolState[required_OF_demand_DGB]) && (( !boolState[already_standby_OF_demand_DGB]) && ( !boolState[already_required_OF_demand_DGB])) )
	{
		boolState[already_standby_OF_demand_DGB]  =  true;
	}



	boolState[already_S_OF_demand_TAC]  =  boolState[S_OF_demand_TAC]  ;

	if (( !boolState[required_OF_demand_TAC]) && (( !boolState[already_standby_OF_demand_TAC]) && ( !boolState[already_required_OF_demand_TAC])) )
	{
		boolState[already_standby_OF_demand_TAC]  =  true;
	}



	boolState[already_S_OF_loss_of_houseload_operation]  =  boolState[S_OF_loss_of_houseload_operation]  ;



	boolState[already_S_OF_loss_of_supply_by_DGA]  =  boolState[S_OF_loss_of_supply_by_DGA]  ;



	boolState[already_S_OF_loss_of_supply_by_DGA_and_TAC]  =  boolState[S_OF_loss_of_supply_by_DGA_and_TAC]  ;



	boolState[already_S_OF_loss_of_supply_by_DGB]  =  boolState[S_OF_loss_of_supply_by_DGB]  ;



	boolState[already_S_OF_loss_of_supply_by_GEV]  =  boolState[S_OF_loss_of_supply_by_GEV]  ;



	boolState[already_S_OF_loss_of_supply_by_LGD]  =  boolState[S_OF_loss_of_supply_by_LGD]  ;



	boolState[already_S_OF_loss_of_supply_by_LGF]  =  boolState[S_OF_loss_of_supply_by_LGF]  ;



	boolState[already_S_OF_loss_of_supply_by_LGR]  =  boolState[S_OF_loss_of_supply_by_LGR]  ;



	boolState[already_S_OF_loss_of_supply_by_TA]  =  boolState[S_OF_loss_of_supply_by_TA]  ;



	boolState[already_S_OF_loss_of_supply_by_TA1]  =  boolState[S_OF_loss_of_supply_by_TA1]  ;



	boolState[already_S_OF_loss_of_supply_by_TAC]  =  boolState[S_OF_loss_of_supply_by_TAC]  ;



	boolState[already_S_OF_loss_of_supply_by_TS]  =  boolState[S_OF_loss_of_supply_by_TS]  ;



	boolState[already_S_OF_loss_of_supply_by_TS1]  =  boolState[S_OF_loss_of_supply_by_TS1]  ;



	boolState[already_S_OF_loss_of_supply_by_UNIT]  =  boolState[S_OF_loss_of_supply_by_UNIT]  ;

}


void storm::figaro::FigaroProgram_NPPS_No_trim_No_repair::runOnceInteractionStep_tops()
{
	if (boolState[required_OF_OnDemHouse] && boolState[already_standby_OF_OnDemHouse] )
	{
		boolState[to_be_fired_OF_OnDemHouse]  =  true;
	}

	if (boolState[required_OF_RC_CB_LGD2] && boolState[already_standby_OF_RC_CB_LGD2] )
	{
		boolState[to_be_fired_OF_RC_CB_LGD2]  =  true;
	}

	if (boolState[required_OF_RC_CB_LGF2] && boolState[already_standby_OF_RC_CB_LGF2] )
	{
		boolState[to_be_fired_OF_RC_CB_LGF2]  =  true;
	}

	if (boolState[required_OF_RC_CB_LHA2] && boolState[already_standby_OF_RC_CB_LHA2] )
	{
		boolState[to_be_fired_OF_RC_CB_LHA2]  =  true;
	}

	if (boolState[required_OF_RC_CB_LHA3] && boolState[already_standby_OF_RC_CB_LHA3] )
	{
		boolState[to_be_fired_OF_RC_CB_LHA3]  =  true;
	}

	if (boolState[required_OF_RC_CB_LHB2] && boolState[already_standby_OF_RC_CB_LHB2] )
	{
		boolState[to_be_fired_OF_RC_CB_LHB2]  =  true;
	}

	if (boolState[required_OF_RO_CB_LHA1] && boolState[already_standby_OF_RO_CB_LHA1] )
	{
		boolState[to_be_fired_OF_RO_CB_LHA1]  =  true;
	}

	if (boolState[required_OF_RO_CB_LHA2] && boolState[already_standby_OF_RO_CB_LHA2] )
	{
		boolState[to_be_fired_OF_RO_CB_LHA2]  =  true;
	}

	if (boolState[required_OF_RO_CB_LHB1] && boolState[already_standby_OF_RO_CB_LHB1] )
	{
		boolState[to_be_fired_OF_RO_CB_LHB1]  =  true;
	}

	if (boolState[required_OF_demand_CCF_DG] && boolState[already_standby_OF_demand_CCF_DG] )
	{
		boolState[to_be_fired_OF_demand_CCF_DG]  =  true;
	}

	if (boolState[required_OF_demand_DGA] && boolState[already_standby_OF_demand_DGA] )
	{
		boolState[to_be_fired_OF_demand_DGA]  =  true;
	}

	if (boolState[required_OF_demand_DGB] && boolState[already_standby_OF_demand_DGB] )
	{
		boolState[to_be_fired_OF_demand_DGB]  =  true;
	}

	if (boolState[required_OF_demand_TAC] && boolState[already_standby_OF_demand_TAC] )
	{
		boolState[to_be_fired_OF_demand_TAC]  =  true;
	}

}

void
storm::figaro::FigaroProgram_NPPS_No_trim_No_repair::runInteractions() {
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
    }void storm::figaro::FigaroProgram_NPPS_No_trim_No_repair::printstatetuple(){

                std::cout<<"\n State information: (";
                for (int i=0; i<boolFailureState.size(); i++)
                    {
                    std::cout<<boolFailureState.at(i);
                    }
                std::cout<<")";

            }
        int_fast64_t storm::figaro::FigaroProgram_NPPS_No_trim_No_repair::stateSize() const{
            return numBoolState;
}
        void storm::figaro::FigaroProgram_NPPS_No_trim_No_repair::fireinsttransitiongroup(std::string user_input_ins)

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
    