#include <iostream>
#include "FigaroModelTankFilling_Trim_No_repair.h"

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
        
void storm::figaro::FigaroProgram_TankFilling_Trim_No_repair::init()
{
	//cout <<">>>>>>>>>>>>>>>>>>>> Initialization of variables <<<<<<<<<<<<<<<<<<<<<<<" << endl;

	REINITIALISATION_OF_required_OF_CCFV12 = true;
	boolState[already_S_OF_CCFV12] = false;
	REINITIALISATION_OF_S_OF_CCFV12 = false;
	REINITIALISATION_OF_relevant_evt_OF_CCFV12 = false;
	boolState[failF_OF_CCFV12] = false;
	REINITIALISATION_OF_required_OF_CCFVSOL12 = true;
	boolState[already_S_OF_CCFVSOL12] = false;
	REINITIALISATION_OF_S_OF_CCFVSOL12 = false;
	REINITIALISATION_OF_relevant_evt_OF_CCFVSOL12 = false;
	boolState[failF_OF_CCFVSOL12] = false;
	REINITIALISATION_OF_required_OF_Filling = true;
	boolState[already_S_OF_Filling] = false;
	REINITIALISATION_OF_S_OF_Filling = false;
	REINITIALISATION_OF_relevant_evt_OF_Filling = false;
	boolState[failF_OF_Filling] = false;
	REINITIALISATION_OF_required_OF_LSH1 = true;
	boolState[already_S_OF_LSH1] = false;
	REINITIALISATION_OF_S_OF_LSH1 = false;
	REINITIALISATION_OF_relevant_evt_OF_LSH1 = false;
	boolState[failF_OF_LSH1] = false;
	REINITIALISATION_OF_required_OF_PSH1 = true;
	boolState[already_S_OF_PSH1] = false;
	REINITIALISATION_OF_S_OF_PSH1 = false;
	REINITIALISATION_OF_relevant_evt_OF_PSH1 = false;
	boolState[failF_OF_PSH1] = false;
	REINITIALISATION_OF_required_OF_R = true;
	boolState[already_S_OF_R] = false;
	REINITIALISATION_OF_S_OF_R = false;
	REINITIALISATION_OF_relevant_evt_OF_R = false;
	REINITIALISATION_OF_required_OF_RL = true;
	boolState[already_S_OF_RL] = false;
	REINITIALISATION_OF_S_OF_RL = false;
	REINITIALISATION_OF_relevant_evt_OF_RL = false;
	REINITIALISATION_OF_required_OF_RLL = true;
	boolState[already_S_OF_RLL] = false;
	REINITIALISATION_OF_S_OF_RLL = false;
	REINITIALISATION_OF_relevant_evt_OF_RLL = false;
	REINITIALISATION_OF_required_OF_RLR = true;
	boolState[already_S_OF_RLR] = false;
	REINITIALISATION_OF_S_OF_RLR = false;
	REINITIALISATION_OF_relevant_evt_OF_RLR = false;
	REINITIALISATION_OF_required_OF_System = true;
	boolState[already_S_OF_System] = false;
	REINITIALISATION_OF_S_OF_System = false;
	REINITIALISATION_OF_relevant_evt_OF_System = false;
	REINITIALISATION_OF_required_OF_UE_1 = true;
	boolState[already_S_OF_UE_1] = false;
	REINITIALISATION_OF_S_OF_UE_1 = false;
	REINITIALISATION_OF_relevant_evt_OF_UE_1 = false;
	REINITIALISATION_OF_required_OF_V1 = true;
	boolState[already_S_OF_V1] = false;
	REINITIALISATION_OF_S_OF_V1 = false;
	REINITIALISATION_OF_relevant_evt_OF_V1 = false;
	boolState[failF_OF_V1] = false;
	REINITIALISATION_OF_required_OF_V2 = true;
	boolState[already_S_OF_V2] = false;
	REINITIALISATION_OF_S_OF_V2 = false;
	REINITIALISATION_OF_relevant_evt_OF_V2 = false;
	boolState[failF_OF_V2] = false;
	REINITIALISATION_OF_required_OF_VSOL1 = true;
	boolState[already_S_OF_VSOL1] = false;
	REINITIALISATION_OF_S_OF_VSOL1 = false;
	REINITIALISATION_OF_relevant_evt_OF_VSOL1 = false;
	boolState[failF_OF_VSOL1] = false;
	REINITIALISATION_OF_required_OF_VSOL2 = true;
	boolState[already_S_OF_VSOL2] = false;
	REINITIALISATION_OF_S_OF_VSOL2 = false;
	REINITIALISATION_OF_relevant_evt_OF_VSOL2 = false;
	boolState[failF_OF_VSOL2] = false;

	/* ---------- DECLARATION OF OCCURRENCE RULES FIRING FLAGS ------------ */
	FIRE_xx10_OF_CCFV12 = false;
	FIRE_xx10_OF_CCFVSOL12 = false;
	FIRE_xx10_OF_Filling = false;
	FIRE_xx10_OF_LSH1 = false;
	FIRE_xx10_OF_PSH1 = false;
	FIRE_xx10_OF_V1 = false;
	FIRE_xx10_OF_V2 = false;
	FIRE_xx10_OF_VSOL1 = false;
	FIRE_xx10_OF_VSOL2 = false;

}

void storm::figaro::FigaroProgram_TankFilling_Trim_No_repair::saveCurrentState()
{
	// cout <<">>>>>>>>>>>>>>>>>>>> Saving current state  <<<<<<<<<<<<<<<<<<<<<<<" << endl;
	backupBoolState = boolState ;
	backupFloatState = floatState ;
	backupIntState = intState ;
	backupEnumState = enumState ;
}

int storm::figaro::FigaroProgram_TankFilling_Trim_No_repair::compareStates()
{
	// cout <<">>>>>>>>>>>>>>>>>>>> Comparing state with previous one (return number of differences) <<<<<<<<<<<<<<<<<<<<<<<" << endl;

	return (backupBoolState != boolState) + (backupFloatState != floatState) + (backupIntState != intState) + (backupEnumState != enumState); 
}

void storm::figaro::FigaroProgram_TankFilling_Trim_No_repair::printState()
{
	//cout <<"\n==================== Print of the current state :  ====================" << endl;

	//cout << "Attribute :  boolState[required_OF_CCFV12] | Value : " << boolState[required_OF_CCFV12] << endl;
	//cout << "Attribute :  boolState[already_S_OF_CCFV12] | Value : " << boolState[already_S_OF_CCFV12] << endl;
	//cout << "Attribute :  boolState[S_OF_CCFV12] | Value : " << boolState[S_OF_CCFV12] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_CCFV12] | Value : " << boolState[relevant_evt_OF_CCFV12] << endl;
	//cout << "Attribute :  boolState[failF_OF_CCFV12] | Value : " << boolState[failF_OF_CCFV12] << endl;
	//cout << "Attribute :  boolState[required_OF_CCFVSOL12] | Value : " << boolState[required_OF_CCFVSOL12] << endl;
	//cout << "Attribute :  boolState[already_S_OF_CCFVSOL12] | Value : " << boolState[already_S_OF_CCFVSOL12] << endl;
	//cout << "Attribute :  boolState[S_OF_CCFVSOL12] | Value : " << boolState[S_OF_CCFVSOL12] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_CCFVSOL12] | Value : " << boolState[relevant_evt_OF_CCFVSOL12] << endl;
	//cout << "Attribute :  boolState[failF_OF_CCFVSOL12] | Value : " << boolState[failF_OF_CCFVSOL12] << endl;
	//cout << "Attribute :  boolState[required_OF_Filling] | Value : " << boolState[required_OF_Filling] << endl;
	//cout << "Attribute :  boolState[already_S_OF_Filling] | Value : " << boolState[already_S_OF_Filling] << endl;
	//cout << "Attribute :  boolState[S_OF_Filling] | Value : " << boolState[S_OF_Filling] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_Filling] | Value : " << boolState[relevant_evt_OF_Filling] << endl;
	//cout << "Attribute :  boolState[failF_OF_Filling] | Value : " << boolState[failF_OF_Filling] << endl;
	//cout << "Attribute :  boolState[required_OF_LSH1] | Value : " << boolState[required_OF_LSH1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_LSH1] | Value : " << boolState[already_S_OF_LSH1] << endl;
	//cout << "Attribute :  boolState[S_OF_LSH1] | Value : " << boolState[S_OF_LSH1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_LSH1] | Value : " << boolState[relevant_evt_OF_LSH1] << endl;
	//cout << "Attribute :  boolState[failF_OF_LSH1] | Value : " << boolState[failF_OF_LSH1] << endl;
	//cout << "Attribute :  boolState[required_OF_PSH1] | Value : " << boolState[required_OF_PSH1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_PSH1] | Value : " << boolState[already_S_OF_PSH1] << endl;
	//cout << "Attribute :  boolState[S_OF_PSH1] | Value : " << boolState[S_OF_PSH1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_PSH1] | Value : " << boolState[relevant_evt_OF_PSH1] << endl;
	//cout << "Attribute :  boolState[failF_OF_PSH1] | Value : " << boolState[failF_OF_PSH1] << endl;
	//cout << "Attribute :  boolState[required_OF_R] | Value : " << boolState[required_OF_R] << endl;
	//cout << "Attribute :  boolState[already_S_OF_R] | Value : " << boolState[already_S_OF_R] << endl;
	//cout << "Attribute :  boolState[S_OF_R] | Value : " << boolState[S_OF_R] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_R] | Value : " << boolState[relevant_evt_OF_R] << endl;
	//cout << "Attribute :  boolState[required_OF_RL] | Value : " << boolState[required_OF_RL] << endl;
	//cout << "Attribute :  boolState[already_S_OF_RL] | Value : " << boolState[already_S_OF_RL] << endl;
	//cout << "Attribute :  boolState[S_OF_RL] | Value : " << boolState[S_OF_RL] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_RL] | Value : " << boolState[relevant_evt_OF_RL] << endl;
	//cout << "Attribute :  boolState[required_OF_RLL] | Value : " << boolState[required_OF_RLL] << endl;
	//cout << "Attribute :  boolState[already_S_OF_RLL] | Value : " << boolState[already_S_OF_RLL] << endl;
	//cout << "Attribute :  boolState[S_OF_RLL] | Value : " << boolState[S_OF_RLL] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_RLL] | Value : " << boolState[relevant_evt_OF_RLL] << endl;
	//cout << "Attribute :  boolState[required_OF_RLR] | Value : " << boolState[required_OF_RLR] << endl;
	//cout << "Attribute :  boolState[already_S_OF_RLR] | Value : " << boolState[already_S_OF_RLR] << endl;
	//cout << "Attribute :  boolState[S_OF_RLR] | Value : " << boolState[S_OF_RLR] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_RLR] | Value : " << boolState[relevant_evt_OF_RLR] << endl;
	//cout << "Attribute :  boolState[required_OF_System] | Value : " << boolState[required_OF_System] << endl;
	//cout << "Attribute :  boolState[already_S_OF_System] | Value : " << boolState[already_S_OF_System] << endl;
	//cout << "Attribute :  boolState[S_OF_System] | Value : " << boolState[S_OF_System] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_System] | Value : " << boolState[relevant_evt_OF_System] << endl;
	//cout << "Attribute :  boolState[required_OF_UE_1] | Value : " << boolState[required_OF_UE_1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_UE_1] | Value : " << boolState[already_S_OF_UE_1] << endl;
	//cout << "Attribute :  boolState[S_OF_UE_1] | Value : " << boolState[S_OF_UE_1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_UE_1] | Value : " << boolState[relevant_evt_OF_UE_1] << endl;
	//cout << "Attribute :  boolState[required_OF_V1] | Value : " << boolState[required_OF_V1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_V1] | Value : " << boolState[already_S_OF_V1] << endl;
	//cout << "Attribute :  boolState[S_OF_V1] | Value : " << boolState[S_OF_V1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_V1] | Value : " << boolState[relevant_evt_OF_V1] << endl;
	//cout << "Attribute :  boolState[failF_OF_V1] | Value : " << boolState[failF_OF_V1] << endl;
	//cout << "Attribute :  boolState[required_OF_V2] | Value : " << boolState[required_OF_V2] << endl;
	//cout << "Attribute :  boolState[already_S_OF_V2] | Value : " << boolState[already_S_OF_V2] << endl;
	//cout << "Attribute :  boolState[S_OF_V2] | Value : " << boolState[S_OF_V2] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_V2] | Value : " << boolState[relevant_evt_OF_V2] << endl;
	//cout << "Attribute :  boolState[failF_OF_V2] | Value : " << boolState[failF_OF_V2] << endl;
	//cout << "Attribute :  boolState[required_OF_VSOL1] | Value : " << boolState[required_OF_VSOL1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_VSOL1] | Value : " << boolState[already_S_OF_VSOL1] << endl;
	//cout << "Attribute :  boolState[S_OF_VSOL1] | Value : " << boolState[S_OF_VSOL1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_VSOL1] | Value : " << boolState[relevant_evt_OF_VSOL1] << endl;
	//cout << "Attribute :  boolState[failF_OF_VSOL1] | Value : " << boolState[failF_OF_VSOL1] << endl;
	//cout << "Attribute :  boolState[required_OF_VSOL2] | Value : " << boolState[required_OF_VSOL2] << endl;
	//cout << "Attribute :  boolState[already_S_OF_VSOL2] | Value : " << boolState[already_S_OF_VSOL2] << endl;
	//cout << "Attribute :  boolState[S_OF_VSOL2] | Value : " << boolState[S_OF_VSOL2] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_VSOL2] | Value : " << boolState[relevant_evt_OF_VSOL2] << endl;
	//cout << "Attribute :  boolState[failF_OF_VSOL2] | Value : " << boolState[failF_OF_VSOL2] << endl;
}

bool storm::figaro::FigaroProgram_TankFilling_Trim_No_repair::figaromodelhasinstransitions()
{
	return false;
}
void storm::figaro::FigaroProgram_TankFilling_Trim_No_repair::doReinitialisations()
{
	boolState[required_OF_CCFV12] = REINITIALISATION_OF_required_OF_CCFV12;
	boolState[S_OF_CCFV12] = REINITIALISATION_OF_S_OF_CCFV12;
	boolState[relevant_evt_OF_CCFV12] = REINITIALISATION_OF_relevant_evt_OF_CCFV12;
	boolState[required_OF_CCFVSOL12] = REINITIALISATION_OF_required_OF_CCFVSOL12;
	boolState[S_OF_CCFVSOL12] = REINITIALISATION_OF_S_OF_CCFVSOL12;
	boolState[relevant_evt_OF_CCFVSOL12] = REINITIALISATION_OF_relevant_evt_OF_CCFVSOL12;
	boolState[required_OF_Filling] = REINITIALISATION_OF_required_OF_Filling;
	boolState[S_OF_Filling] = REINITIALISATION_OF_S_OF_Filling;
	boolState[relevant_evt_OF_Filling] = REINITIALISATION_OF_relevant_evt_OF_Filling;
	boolState[required_OF_LSH1] = REINITIALISATION_OF_required_OF_LSH1;
	boolState[S_OF_LSH1] = REINITIALISATION_OF_S_OF_LSH1;
	boolState[relevant_evt_OF_LSH1] = REINITIALISATION_OF_relevant_evt_OF_LSH1;
	boolState[required_OF_PSH1] = REINITIALISATION_OF_required_OF_PSH1;
	boolState[S_OF_PSH1] = REINITIALISATION_OF_S_OF_PSH1;
	boolState[relevant_evt_OF_PSH1] = REINITIALISATION_OF_relevant_evt_OF_PSH1;
	boolState[required_OF_R] = REINITIALISATION_OF_required_OF_R;
	boolState[S_OF_R] = REINITIALISATION_OF_S_OF_R;
	boolState[relevant_evt_OF_R] = REINITIALISATION_OF_relevant_evt_OF_R;
	boolState[required_OF_RL] = REINITIALISATION_OF_required_OF_RL;
	boolState[S_OF_RL] = REINITIALISATION_OF_S_OF_RL;
	boolState[relevant_evt_OF_RL] = REINITIALISATION_OF_relevant_evt_OF_RL;
	boolState[required_OF_RLL] = REINITIALISATION_OF_required_OF_RLL;
	boolState[S_OF_RLL] = REINITIALISATION_OF_S_OF_RLL;
	boolState[relevant_evt_OF_RLL] = REINITIALISATION_OF_relevant_evt_OF_RLL;
	boolState[required_OF_RLR] = REINITIALISATION_OF_required_OF_RLR;
	boolState[S_OF_RLR] = REINITIALISATION_OF_S_OF_RLR;
	boolState[relevant_evt_OF_RLR] = REINITIALISATION_OF_relevant_evt_OF_RLR;
	boolState[required_OF_System] = REINITIALISATION_OF_required_OF_System;
	boolState[S_OF_System] = REINITIALISATION_OF_S_OF_System;
	boolState[relevant_evt_OF_System] = REINITIALISATION_OF_relevant_evt_OF_System;
	boolState[required_OF_UE_1] = REINITIALISATION_OF_required_OF_UE_1;
	boolState[S_OF_UE_1] = REINITIALISATION_OF_S_OF_UE_1;
	boolState[relevant_evt_OF_UE_1] = REINITIALISATION_OF_relevant_evt_OF_UE_1;
	boolState[required_OF_V1] = REINITIALISATION_OF_required_OF_V1;
	boolState[S_OF_V1] = REINITIALISATION_OF_S_OF_V1;
	boolState[relevant_evt_OF_V1] = REINITIALISATION_OF_relevant_evt_OF_V1;
	boolState[required_OF_V2] = REINITIALISATION_OF_required_OF_V2;
	boolState[S_OF_V2] = REINITIALISATION_OF_S_OF_V2;
	boolState[relevant_evt_OF_V2] = REINITIALISATION_OF_relevant_evt_OF_V2;
	boolState[required_OF_VSOL1] = REINITIALISATION_OF_required_OF_VSOL1;
	boolState[S_OF_VSOL1] = REINITIALISATION_OF_S_OF_VSOL1;
	boolState[relevant_evt_OF_VSOL1] = REINITIALISATION_OF_relevant_evt_OF_VSOL1;
	boolState[required_OF_VSOL2] = REINITIALISATION_OF_required_OF_VSOL2;
	boolState[S_OF_VSOL2] = REINITIALISATION_OF_S_OF_VSOL2;
	boolState[relevant_evt_OF_VSOL2] = REINITIALISATION_OF_relevant_evt_OF_VSOL2;
}

void storm::figaro::FigaroProgram_TankFilling_Trim_No_repair::fireOccurrence(int numFire)
{
	//cout <<">>>>>>>>>>>>>>>>>>>> Fire of occurrence #" << numFire << " <<<<<<<<<<<<<<<<<<<<<<<" << endl;

	if (numFire == 0)
	{
		FIRE_xx10_OF_CCFV12 = true;
	}

	if (numFire == 1)
	{
		FIRE_xx10_OF_CCFVSOL12 = true;
	}

	if (numFire == 2)
	{
		FIRE_xx10_OF_Filling = true;
	}

	if (numFire == 3)
	{
		FIRE_xx10_OF_LSH1 = true;
	}

	if (numFire == 4)
	{
		FIRE_xx10_OF_PSH1 = true;
	}

	if (numFire == 5)
	{
		FIRE_xx10_OF_V1 = true;
	}

	if (numFire == 6)
	{
		FIRE_xx10_OF_V2 = true;
	}

	if (numFire == 7)
	{
		FIRE_xx10_OF_VSOL1 = true;
	}

	if (numFire == 8)
	{
		FIRE_xx10_OF_VSOL2 = true;
	}

/* ---------- DECLARATION OF OCCURRENCE RULES------------ */

	// Occurrence xx10_OF_CCFV12
	if ((boolState[failF_OF_CCFV12] == false) && (boolState[required_OF_CCFV12] &&  boolState[relevant_evt_OF_CCFV12])) 
	{
		 
		if (FIRE_xx10_OF_CCFV12)
		{
			boolState[failF_OF_CCFV12]  =  true;
			FIRE_xx10_OF_CCFV12 = false;
		}
	}

	// Occurrence xx10_OF_CCFVSOL12
	if ((boolState[failF_OF_CCFVSOL12] == false) && (boolState[required_OF_CCFVSOL12] &&  boolState[relevant_evt_OF_CCFVSOL12])) 
	{
		 
		if (FIRE_xx10_OF_CCFVSOL12)
		{
			boolState[failF_OF_CCFVSOL12]  =  true;
			FIRE_xx10_OF_CCFVSOL12 = false;
		}
	}

	// Occurrence xx10_OF_Filling
	if ((boolState[failF_OF_Filling] == false) && (boolState[required_OF_Filling] &&  boolState[relevant_evt_OF_Filling])) 
	{
		 
		if (FIRE_xx10_OF_Filling)
		{
			boolState[failF_OF_Filling]  =  true;
			FIRE_xx10_OF_Filling = false;
		}
	}

	// Occurrence xx10_OF_LSH1
	if ((boolState[failF_OF_LSH1] == false) && (boolState[required_OF_LSH1] &&  boolState[relevant_evt_OF_LSH1])) 
	{
		 
		if (FIRE_xx10_OF_LSH1)
		{
			boolState[failF_OF_LSH1]  =  true;
			FIRE_xx10_OF_LSH1 = false;
		}
	}

	// Occurrence xx10_OF_PSH1
	if ((boolState[failF_OF_PSH1] == false) && (boolState[required_OF_PSH1] &&  boolState[relevant_evt_OF_PSH1])) 
	{
		 
		if (FIRE_xx10_OF_PSH1)
		{
			boolState[failF_OF_PSH1]  =  true;
			FIRE_xx10_OF_PSH1 = false;
		}
	}

	// Occurrence xx10_OF_V1
	if ((boolState[failF_OF_V1] == false) && (boolState[required_OF_V1] && boolState[relevant_evt_OF_V1])) 
	{
		 
		if (FIRE_xx10_OF_V1)
		{
			boolState[failF_OF_V1]  =  true;
			FIRE_xx10_OF_V1 = false;
		}
	}

	// Occurrence xx10_OF_V2
	if ((boolState[failF_OF_V2] == false) && (boolState[required_OF_V2] && boolState[relevant_evt_OF_V2])) 
	{
		 
		if (FIRE_xx10_OF_V2)
		{
			boolState[failF_OF_V2]  =  true;
			FIRE_xx10_OF_V2 = false;
		}
	}

	// Occurrence xx10_OF_VSOL1
	if ((boolState[failF_OF_VSOL1] == false) && (boolState[required_OF_VSOL1] &&  boolState[relevant_evt_OF_VSOL1])) 
	{
		 
		if (FIRE_xx10_OF_VSOL1)
		{
			boolState[failF_OF_VSOL1]  =  true;
			FIRE_xx10_OF_VSOL1 = false;
		}
	}

	// Occurrence xx10_OF_VSOL2
	if ((boolState[failF_OF_VSOL2] == false) && (boolState[required_OF_VSOL2] &&  boolState[relevant_evt_OF_VSOL2])) 
	{
		 
		if (FIRE_xx10_OF_VSOL2)
		{
			boolState[failF_OF_VSOL2]  =  true;
			FIRE_xx10_OF_VSOL2 = false;
		}
	}

}

std::vector<std::tuple<int, double, std::string, int>> storm::figaro::FigaroProgram_TankFilling_Trim_No_repair::showFireableOccurrences()
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
     
	if ((boolState[failF_OF_CCFV12] == false) && (boolState[required_OF_CCFV12] && boolState[relevant_evt_OF_CCFV12]))
	{
		//cout << "0 : xx10_OF_CCFV12 : FAULT failF  LABEL \"failure in operation CCFV12\"  DIST EXP (0.0001)  INDUCING boolState[failF_OF_CCFV12]  =  TRUE" << endl;
		list.push_back(make_tuple(0, 0.0001, "EXP", 0));
	}
	if ((boolState[failF_OF_CCFVSOL12] == false) && (boolState[required_OF_CCFVSOL12] && boolState[relevant_evt_OF_CCFVSOL12]))
	{
		//cout << "1 : xx10_OF_CCFVSOL12 : FAULT failF  LABEL \"failure in operation CCFVSOL12\"  DIST EXP (0.0001)  INDUCING boolState[failF_OF_CCFVSOL12]  =  TRUE" << endl;
		list.push_back(make_tuple(1, 0.0001, "EXP", 0));
	}
	if ((boolState[failF_OF_Filling] == false) && (boolState[required_OF_Filling] && boolState[relevant_evt_OF_Filling]))
	{
		//cout << "2 : xx10_OF_Filling : FAULT failF  LABEL \"failure in operation Filling\"  DIST EXP (0.0001)  INDUCING boolState[failF_OF_Filling]  =  TRUE" << endl;
		list.push_back(make_tuple(2, 0.0001, "EXP", 0));
	}
	if ((boolState[failF_OF_LSH1] == false) && (boolState[required_OF_LSH1] && boolState[relevant_evt_OF_LSH1]))
	{
		//cout << "3 : xx10_OF_LSH1 : FAULT failF  LABEL \"failure in operation LSH1\"  DIST EXP (0.0001)  INDUCING boolState[failF_OF_LSH1]  =  TRUE" << endl;
		list.push_back(make_tuple(3, 0.0001, "EXP", 0));
	}
	if ((boolState[failF_OF_PSH1] == false) && (boolState[required_OF_PSH1] && boolState[relevant_evt_OF_PSH1]))
	{
		//cout << "4 : xx10_OF_PSH1 : FAULT failF  LABEL \"failure in operation PSH1\"  DIST EXP (0.0001)  INDUCING boolState[failF_OF_PSH1]  =  TRUE" << endl;
		list.push_back(make_tuple(4, 0.0001, "EXP", 0));
	}
	if ((boolState[failF_OF_V1] == false) && (boolState[required_OF_V1] && boolState[relevant_evt_OF_V1]))
	{
		//cout << "5 : xx10_OF_V1 : FAULT failF  LABEL \"failure in operation V1\"  DIST EXP (0.0001)  INDUCING boolState[failF_OF_V1]  =  TRUE" << endl;
		list.push_back(make_tuple(5, 0.0001, "EXP", 0));
	}
	if ((boolState[failF_OF_V2] == false) && (boolState[required_OF_V2] && boolState[relevant_evt_OF_V2]))
	{
		//cout << "6 : xx10_OF_V2 : FAULT failF  LABEL \"failure in operation V2\"  DIST EXP (0.0001)  INDUCING boolState[failF_OF_V2]  =  TRUE" << endl;
		list.push_back(make_tuple(6, 0.0001, "EXP", 0));
	}
	if ((boolState[failF_OF_VSOL1] == false) && (boolState[required_OF_VSOL1] && boolState[relevant_evt_OF_VSOL1]))
	{
		//cout << "7 : xx10_OF_VSOL1 : FAULT failF  LABEL \"failure in operation VSOL1\"  DIST EXP (0.0001)  INDUCING boolState[failF_OF_VSOL1]  =  TRUE" << endl;
		list.push_back(make_tuple(7, 0.0001, "EXP", 0));
	}
	if ((boolState[failF_OF_VSOL2] == false) && (boolState[required_OF_VSOL2] && boolState[relevant_evt_OF_VSOL2]))
	{
		//cout << "8 : xx10_OF_VSOL2 : FAULT failF  LABEL \"failure in operation VSOL2\"  DIST EXP (0.0001)  INDUCING boolState[failF_OF_VSOL2]  =  TRUE" << endl;
		list.push_back(make_tuple(8, 0.0001, "EXP", 0));
	}
	return list;
}


void storm::figaro::FigaroProgram_TankFilling_Trim_No_repair::runOnceInteractionStep_initialization()
{
	if (boolState[failF_OF_CCFV12] == true )
	{
		boolState[S_OF_CCFV12]  =  true;
	}

	if (boolState[failF_OF_CCFVSOL12] == true )
	{
		boolState[S_OF_CCFVSOL12]  =  true;
	}

	if (boolState[failF_OF_Filling] == true )
	{
		boolState[S_OF_Filling]  =  true;
	}

	if (boolState[failF_OF_LSH1] == true )
	{
		boolState[S_OF_LSH1]  =  true;
	}

	if (boolState[failF_OF_PSH1] == true )
	{
		boolState[S_OF_PSH1]  =  true;
	}

	if (boolState[failF_OF_V1] == true )
	{
		boolState[S_OF_V1]  =  true;
	}

	if (boolState[failF_OF_V2] == true )
	{
		boolState[S_OF_V2]  =  true;
	}

	if (boolState[failF_OF_VSOL1] == true )
	{
		boolState[S_OF_VSOL1]  =  true;
	}

	if (boolState[failF_OF_VSOL2] == true )
	{
		boolState[S_OF_VSOL2]  =  true;
	}

}


void storm::figaro::FigaroProgram_TankFilling_Trim_No_repair::runOnceInteractionStep_propagate_effect_S()
{
	if ((boolState[S_OF_CCFV12] || boolState[S_OF_CCFVSOL12]) || boolState[S_OF_RL] )
	{
		boolState[S_OF_R]  =  true;
	}

	if (boolState[S_OF_RLL] && boolState[S_OF_RLR] )
	{
		boolState[S_OF_RL]  =  true;
	}

	if ((boolState[S_OF_LSH1] || boolState[S_OF_V1]) || boolState[S_OF_VSOL1] )
	{
		boolState[S_OF_RLL]  =  true;
	}

	if ((boolState[S_OF_PSH1] || boolState[S_OF_V2]) || boolState[S_OF_VSOL2] )
	{
		boolState[S_OF_RLR]  =  true;
	}

	if (boolState[S_OF_Filling] && boolState[S_OF_R] )
	{
		boolState[S_OF_System]  =  true;
	}

	if (boolState[S_OF_System] )
	{
		boolState[S_OF_UE_1]  =  true;
	}

}


void storm::figaro::FigaroProgram_TankFilling_Trim_No_repair::runOnceInteractionStep_propagate_effect_required()
{
	if ( !boolState[required_OF_R] )
	{
		boolState[required_OF_CCFV12]  =  false;
	}

	if (boolState[relevant_evt_OF_R] && ( !boolState[S_OF_R]) )
	{
		boolState[relevant_evt_OF_CCFV12]  =  true;
	}

	if ( !boolState[required_OF_R] )
	{
		boolState[required_OF_CCFVSOL12]  =  false;
	}

	if (boolState[relevant_evt_OF_R] && ( !boolState[S_OF_R]) )
	{
		boolState[relevant_evt_OF_CCFVSOL12]  =  true;
	}

	if ( !boolState[required_OF_System] )
	{
		boolState[required_OF_Filling]  =  false;
	}

	if (boolState[relevant_evt_OF_System] && ( !boolState[S_OF_System]) )
	{
		boolState[relevant_evt_OF_Filling]  =  true;
	}

	if ( !boolState[required_OF_RLL] )
	{
		boolState[required_OF_LSH1]  =  false;
	}

	if (boolState[relevant_evt_OF_RLL] && ( !boolState[S_OF_RLL]) )
	{
		boolState[relevant_evt_OF_LSH1]  =  true;
	}

	if ( !boolState[required_OF_RLR] )
	{
		boolState[required_OF_PSH1]  =  false;
	}

	if (boolState[relevant_evt_OF_RLR] && ( !boolState[S_OF_RLR]) )
	{
		boolState[relevant_evt_OF_PSH1]  =  true;
	}

	if ( !boolState[required_OF_System] )
	{
		boolState[required_OF_R]  =  false;
	}

	if (boolState[relevant_evt_OF_System] && ( !boolState[S_OF_System]) )
	{
		boolState[relevant_evt_OF_R]  =  true;
	}

	if ( !boolState[required_OF_R] )
	{
		boolState[required_OF_RL]  =  false;
	}

	if (boolState[relevant_evt_OF_R] && ( !boolState[S_OF_R]) )
	{
		boolState[relevant_evt_OF_RL]  =  true;
	}

	if ( !boolState[required_OF_RL] )
	{
		boolState[required_OF_RLL]  =  false;
	}

	if (boolState[relevant_evt_OF_RL] && ( !boolState[S_OF_RL]) )
	{
		boolState[relevant_evt_OF_RLL]  =  true;
	}

	if ( !boolState[required_OF_RL] )
	{
		boolState[required_OF_RLR]  =  false;
	}

	if (boolState[relevant_evt_OF_RL] && ( !boolState[S_OF_RL]) )
	{
		boolState[relevant_evt_OF_RLR]  =  true;
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

	if ( !boolState[required_OF_RLL] )
	{
		boolState[required_OF_V1]  =  false;
	}

	if (boolState[relevant_evt_OF_RLL] && ( !boolState[S_OF_RLL]) )
	{
		boolState[relevant_evt_OF_V1]  =  true;
	}

	if ( !boolState[required_OF_RLR] )
	{
		boolState[required_OF_V2]  =  false;
	}

	if (boolState[relevant_evt_OF_RLR] && ( !boolState[S_OF_RLR]) )
	{
		boolState[relevant_evt_OF_V2]  =  true;
	}

	if ( !boolState[required_OF_RLL] )
	{
		boolState[required_OF_VSOL1]  =  false;
	}

	if (boolState[relevant_evt_OF_RLL] && ( !boolState[S_OF_RLL]) )
	{
		boolState[relevant_evt_OF_VSOL1]  =  true;
	}

	if ( !boolState[required_OF_RLR] )
	{
		boolState[required_OF_VSOL2]  =  false;
	}

	if (boolState[relevant_evt_OF_RLR] && ( !boolState[S_OF_RLR]) )
	{
		boolState[relevant_evt_OF_VSOL2]  =  true;
	}

}


void storm::figaro::FigaroProgram_TankFilling_Trim_No_repair::runOnceInteractionStep_propagate_leaves()
{


	boolState[already_S_OF_CCFV12]  =  boolState[S_OF_CCFV12]  ;



	boolState[already_S_OF_CCFVSOL12]  =  boolState[S_OF_CCFVSOL12]  ;



	boolState[already_S_OF_Filling]  =  boolState[S_OF_Filling]  ;



	boolState[already_S_OF_LSH1]  =  boolState[S_OF_LSH1]  ;



	boolState[already_S_OF_PSH1]  =  boolState[S_OF_PSH1]  ;



	boolState[already_S_OF_R]  =  boolState[S_OF_R]  ;



	boolState[already_S_OF_RL]  =  boolState[S_OF_RL]  ;



	boolState[already_S_OF_RLL]  =  boolState[S_OF_RLL]  ;



	boolState[already_S_OF_RLR]  =  boolState[S_OF_RLR]  ;



	boolState[already_S_OF_System]  =  boolState[S_OF_System]  ;



	boolState[already_S_OF_UE_1]  =  boolState[S_OF_UE_1]  ;



	boolState[already_S_OF_V1]  =  boolState[S_OF_V1]  ;



	boolState[already_S_OF_V2]  =  boolState[S_OF_V2]  ;



	boolState[already_S_OF_VSOL1]  =  boolState[S_OF_VSOL1]  ;



	boolState[already_S_OF_VSOL2]  =  boolState[S_OF_VSOL2]  ;

}

void
storm::figaro::FigaroProgram_TankFilling_Trim_No_repair::runInteractions() {
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
    }void storm::figaro::FigaroProgram_TankFilling_Trim_No_repair::printstatetuple(){

                std::cout<<"\n State information: (";
                for (int i=0; i<boolFailureState.size(); i++)
                    {
                    std::cout<<boolFailureState.at(i);
                    }
                std::cout<<")";

            }
        int_fast64_t storm::figaro::FigaroProgram_TankFilling_Trim_No_repair::stateSize() const{
            return numBoolState;
}
        void storm::figaro::FigaroProgram_TankFilling_Trim_No_repair::fireinsttransitiongroup(std::string user_input_ins)

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
    