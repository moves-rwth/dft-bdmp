#include <iostream>
#include "FigaroModelfigaro_17_18.h"

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
        
void storm::figaro::FigaroProgram_figaro_17_18::init()
{
	//cout <<">>>>>>>>>>>>>>>>>>>> Initialization of variables <<<<<<<<<<<<<<<<<<<<<<<" << endl;

	REINITIALISATION_OF_required_OF_A1 = true;
	boolState[already_S_OF_A1] = false;
	REINITIALISATION_OF_S_OF_A1 = false;
	REINITIALISATION_OF_relevant_evt_OF_A1 = false;
	boolState[failI_OF_A1] = false;
	REINITIALISATION_OF_to_be_fired_OF_A1 = false;
	boolState[already_standby_OF_A1] = false;
	boolState[already_required_OF_A1] = false;
	REINITIALISATION_OF_required_OF_A10 = true;
	boolState[already_S_OF_A10] = false;
	REINITIALISATION_OF_S_OF_A10 = false;
	REINITIALISATION_OF_relevant_evt_OF_A10 = false;
	boolState[failF_OF_A10] = false;
	REINITIALISATION_OF_required_OF_A11 = true;
	boolState[already_S_OF_A11] = false;
	REINITIALISATION_OF_S_OF_A11 = false;
	REINITIALISATION_OF_relevant_evt_OF_A11 = false;
	REINITIALISATION_OF_required_OF_A12 = true;
	boolState[already_S_OF_A12] = false;
	REINITIALISATION_OF_S_OF_A12 = false;
	REINITIALISATION_OF_relevant_evt_OF_A12 = false;
	boolState[failI_OF_A12] = false;
	REINITIALISATION_OF_to_be_fired_OF_A12 = false;
	boolState[already_standby_OF_A12] = false;
	boolState[already_required_OF_A12] = false;
	REINITIALISATION_OF_required_OF_A2 = true;
	boolState[already_S_OF_A2] = false;
	REINITIALISATION_OF_S_OF_A2 = false;
	REINITIALISATION_OF_relevant_evt_OF_A2 = false;
	boolState[failI_OF_A2] = false;
	REINITIALISATION_OF_to_be_fired_OF_A2 = false;
	boolState[already_standby_OF_A2] = false;
	boolState[already_required_OF_A2] = false;
	REINITIALISATION_OF_required_OF_A3 = true;
	boolState[already_S_OF_A3] = false;
	REINITIALISATION_OF_S_OF_A3 = false;
	REINITIALISATION_OF_relevant_evt_OF_A3 = false;
	boolState[failI_OF_A3] = false;
	REINITIALISATION_OF_to_be_fired_OF_A3 = false;
	boolState[already_standby_OF_A3] = false;
	boolState[already_required_OF_A3] = false;
	REINITIALISATION_OF_required_OF_A4 = true;
	boolState[already_S_OF_A4] = false;
	REINITIALISATION_OF_S_OF_A4 = false;
	REINITIALISATION_OF_relevant_evt_OF_A4 = false;
	boolState[failI_OF_A4] = false;
	REINITIALISATION_OF_to_be_fired_OF_A4 = false;
	boolState[already_standby_OF_A4] = false;
	boolState[already_required_OF_A4] = false;
	REINITIALISATION_OF_required_OF_A5 = true;
	boolState[already_S_OF_A5] = false;
	REINITIALISATION_OF_S_OF_A5 = false;
	REINITIALISATION_OF_relevant_evt_OF_A5 = false;
	REINITIALISATION_OF_required_OF_A6 = true;
	boolState[already_S_OF_A6] = false;
	REINITIALISATION_OF_S_OF_A6 = false;
	REINITIALISATION_OF_relevant_evt_OF_A6 = false;
	boolState[failI_OF_A6] = false;
	REINITIALISATION_OF_to_be_fired_OF_A6 = false;
	boolState[already_standby_OF_A6] = false;
	boolState[already_required_OF_A6] = false;
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
	REINITIALISATION_OF_required_OF_UE_1 = true;
	boolState[already_S_OF_UE_1] = false;
	REINITIALISATION_OF_S_OF_UE_1 = false;
	REINITIALISATION_OF_relevant_evt_OF_UE_1 = false;

	/* ---------- DECLARATION OF OCCURRENCE RULES FIRING FLAGS ------------ */
	FIRE_xx23_OF_A1_INS_0 = false;
	FIRE_xx23_OF_A1_INS_1 = false;
	FIRE_xx24_OF_A1 = false;
	FIRE_xx10_OF_A10 = false;
	FIRE_xx11_OF_A10 = false;
	FIRE_xx23_OF_A12_INS_5 = false;
	FIRE_xx23_OF_A12_INS_6 = false;
	FIRE_xx24_OF_A12 = false;
	FIRE_xx23_OF_A2_INS_8 = false;
	FIRE_xx23_OF_A2_INS_9 = false;
	FIRE_xx24_OF_A2 = false;
	FIRE_xx23_OF_A3_INS_11 = false;
	FIRE_xx23_OF_A3_INS_12 = false;
	FIRE_xx24_OF_A3 = false;
	FIRE_xx23_OF_A4_INS_14 = false;
	FIRE_xx23_OF_A4_INS_15 = false;
	FIRE_xx24_OF_A4 = false;
	FIRE_xx23_OF_A6_INS_17 = false;
	FIRE_xx23_OF_A6_INS_18 = false;
	FIRE_xx24_OF_A6 = false;

}

void storm::figaro::FigaroProgram_figaro_17_18::saveCurrentState()
{
	// cout <<">>>>>>>>>>>>>>>>>>>> Saving current state  <<<<<<<<<<<<<<<<<<<<<<<" << endl;
	backupBoolState = boolState ;
	backupFloatState = floatState ;
	backupIntState = intState ;
	backupEnumState = enumState ;
}

int storm::figaro::FigaroProgram_figaro_17_18::compareStates()
{
	// cout <<">>>>>>>>>>>>>>>>>>>> Comparing state with previous one (return number of differences) <<<<<<<<<<<<<<<<<<<<<<<" << endl;

	return (backupBoolState != boolState) + (backupFloatState != floatState) + (backupIntState != intState) + (backupEnumState != enumState); 
}

void storm::figaro::FigaroProgram_figaro_17_18::printState()
{
	//cout <<"\n==================== Print of the current state :  ====================" << endl;

	//cout << "Attribute :  boolState[required_OF_A1] | Value : " << boolState[required_OF_A1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A1] | Value : " << boolState[already_S_OF_A1] << endl;
	//cout << "Attribute :  boolState[S_OF_A1] | Value : " << boolState[S_OF_A1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A1] | Value : " << boolState[relevant_evt_OF_A1] << endl;
	//cout << "Attribute :  boolState[failI_OF_A1] | Value : " << boolState[failI_OF_A1] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_A1] | Value : " << boolState[to_be_fired_OF_A1] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_A1] | Value : " << boolState[already_standby_OF_A1] << endl;
	//cout << "Attribute :  boolState[already_required_OF_A1] | Value : " << boolState[already_required_OF_A1] << endl;
	//cout << "Attribute :  boolState[required_OF_A10] | Value : " << boolState[required_OF_A10] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A10] | Value : " << boolState[already_S_OF_A10] << endl;
	//cout << "Attribute :  boolState[S_OF_A10] | Value : " << boolState[S_OF_A10] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A10] | Value : " << boolState[relevant_evt_OF_A10] << endl;
	//cout << "Attribute :  boolState[failF_OF_A10] | Value : " << boolState[failF_OF_A10] << endl;
	//cout << "Attribute :  boolState[required_OF_A11] | Value : " << boolState[required_OF_A11] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A11] | Value : " << boolState[already_S_OF_A11] << endl;
	//cout << "Attribute :  boolState[S_OF_A11] | Value : " << boolState[S_OF_A11] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A11] | Value : " << boolState[relevant_evt_OF_A11] << endl;
	//cout << "Attribute :  boolState[required_OF_A12] | Value : " << boolState[required_OF_A12] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A12] | Value : " << boolState[already_S_OF_A12] << endl;
	//cout << "Attribute :  boolState[S_OF_A12] | Value : " << boolState[S_OF_A12] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A12] | Value : " << boolState[relevant_evt_OF_A12] << endl;
	//cout << "Attribute :  boolState[failI_OF_A12] | Value : " << boolState[failI_OF_A12] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_A12] | Value : " << boolState[to_be_fired_OF_A12] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_A12] | Value : " << boolState[already_standby_OF_A12] << endl;
	//cout << "Attribute :  boolState[already_required_OF_A12] | Value : " << boolState[already_required_OF_A12] << endl;
	//cout << "Attribute :  boolState[required_OF_A2] | Value : " << boolState[required_OF_A2] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A2] | Value : " << boolState[already_S_OF_A2] << endl;
	//cout << "Attribute :  boolState[S_OF_A2] | Value : " << boolState[S_OF_A2] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A2] | Value : " << boolState[relevant_evt_OF_A2] << endl;
	//cout << "Attribute :  boolState[failI_OF_A2] | Value : " << boolState[failI_OF_A2] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_A2] | Value : " << boolState[to_be_fired_OF_A2] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_A2] | Value : " << boolState[already_standby_OF_A2] << endl;
	//cout << "Attribute :  boolState[already_required_OF_A2] | Value : " << boolState[already_required_OF_A2] << endl;
	//cout << "Attribute :  boolState[required_OF_A3] | Value : " << boolState[required_OF_A3] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A3] | Value : " << boolState[already_S_OF_A3] << endl;
	//cout << "Attribute :  boolState[S_OF_A3] | Value : " << boolState[S_OF_A3] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A3] | Value : " << boolState[relevant_evt_OF_A3] << endl;
	//cout << "Attribute :  boolState[failI_OF_A3] | Value : " << boolState[failI_OF_A3] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_A3] | Value : " << boolState[to_be_fired_OF_A3] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_A3] | Value : " << boolState[already_standby_OF_A3] << endl;
	//cout << "Attribute :  boolState[already_required_OF_A3] | Value : " << boolState[already_required_OF_A3] << endl;
	//cout << "Attribute :  boolState[required_OF_A4] | Value : " << boolState[required_OF_A4] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A4] | Value : " << boolState[already_S_OF_A4] << endl;
	//cout << "Attribute :  boolState[S_OF_A4] | Value : " << boolState[S_OF_A4] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A4] | Value : " << boolState[relevant_evt_OF_A4] << endl;
	//cout << "Attribute :  boolState[failI_OF_A4] | Value : " << boolState[failI_OF_A4] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_A4] | Value : " << boolState[to_be_fired_OF_A4] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_A4] | Value : " << boolState[already_standby_OF_A4] << endl;
	//cout << "Attribute :  boolState[already_required_OF_A4] | Value : " << boolState[already_required_OF_A4] << endl;
	//cout << "Attribute :  boolState[required_OF_A5] | Value : " << boolState[required_OF_A5] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A5] | Value : " << boolState[already_S_OF_A5] << endl;
	//cout << "Attribute :  boolState[S_OF_A5] | Value : " << boolState[S_OF_A5] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A5] | Value : " << boolState[relevant_evt_OF_A5] << endl;
	//cout << "Attribute :  boolState[required_OF_A6] | Value : " << boolState[required_OF_A6] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A6] | Value : " << boolState[already_S_OF_A6] << endl;
	//cout << "Attribute :  boolState[S_OF_A6] | Value : " << boolState[S_OF_A6] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A6] | Value : " << boolState[relevant_evt_OF_A6] << endl;
	//cout << "Attribute :  boolState[failI_OF_A6] | Value : " << boolState[failI_OF_A6] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_A6] | Value : " << boolState[to_be_fired_OF_A6] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_A6] | Value : " << boolState[already_standby_OF_A6] << endl;
	//cout << "Attribute :  boolState[already_required_OF_A6] | Value : " << boolState[already_required_OF_A6] << endl;
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
	//cout << "Attribute :  boolState[required_OF_UE_1] | Value : " << boolState[required_OF_UE_1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_UE_1] | Value : " << boolState[already_S_OF_UE_1] << endl;
	//cout << "Attribute :  boolState[S_OF_UE_1] | Value : " << boolState[S_OF_UE_1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_UE_1] | Value : " << boolState[relevant_evt_OF_UE_1] << endl;
}

bool storm::figaro::FigaroProgram_figaro_17_18::figaromodelhasinstransitions()
{
	return true;
}
void storm::figaro::FigaroProgram_figaro_17_18::doReinitialisations()
{
	boolState[required_OF_A1] = REINITIALISATION_OF_required_OF_A1;
	boolState[S_OF_A1] = REINITIALISATION_OF_S_OF_A1;
	boolState[relevant_evt_OF_A1] = REINITIALISATION_OF_relevant_evt_OF_A1;
	boolState[to_be_fired_OF_A1] = REINITIALISATION_OF_to_be_fired_OF_A1;
	boolState[required_OF_A10] = REINITIALISATION_OF_required_OF_A10;
	boolState[S_OF_A10] = REINITIALISATION_OF_S_OF_A10;
	boolState[relevant_evt_OF_A10] = REINITIALISATION_OF_relevant_evt_OF_A10;
	boolState[required_OF_A11] = REINITIALISATION_OF_required_OF_A11;
	boolState[S_OF_A11] = REINITIALISATION_OF_S_OF_A11;
	boolState[relevant_evt_OF_A11] = REINITIALISATION_OF_relevant_evt_OF_A11;
	boolState[required_OF_A12] = REINITIALISATION_OF_required_OF_A12;
	boolState[S_OF_A12] = REINITIALISATION_OF_S_OF_A12;
	boolState[relevant_evt_OF_A12] = REINITIALISATION_OF_relevant_evt_OF_A12;
	boolState[to_be_fired_OF_A12] = REINITIALISATION_OF_to_be_fired_OF_A12;
	boolState[required_OF_A2] = REINITIALISATION_OF_required_OF_A2;
	boolState[S_OF_A2] = REINITIALISATION_OF_S_OF_A2;
	boolState[relevant_evt_OF_A2] = REINITIALISATION_OF_relevant_evt_OF_A2;
	boolState[to_be_fired_OF_A2] = REINITIALISATION_OF_to_be_fired_OF_A2;
	boolState[required_OF_A3] = REINITIALISATION_OF_required_OF_A3;
	boolState[S_OF_A3] = REINITIALISATION_OF_S_OF_A3;
	boolState[relevant_evt_OF_A3] = REINITIALISATION_OF_relevant_evt_OF_A3;
	boolState[to_be_fired_OF_A3] = REINITIALISATION_OF_to_be_fired_OF_A3;
	boolState[required_OF_A4] = REINITIALISATION_OF_required_OF_A4;
	boolState[S_OF_A4] = REINITIALISATION_OF_S_OF_A4;
	boolState[relevant_evt_OF_A4] = REINITIALISATION_OF_relevant_evt_OF_A4;
	boolState[to_be_fired_OF_A4] = REINITIALISATION_OF_to_be_fired_OF_A4;
	boolState[required_OF_A5] = REINITIALISATION_OF_required_OF_A5;
	boolState[S_OF_A5] = REINITIALISATION_OF_S_OF_A5;
	boolState[relevant_evt_OF_A5] = REINITIALISATION_OF_relevant_evt_OF_A5;
	boolState[required_OF_A6] = REINITIALISATION_OF_required_OF_A6;
	boolState[S_OF_A6] = REINITIALISATION_OF_S_OF_A6;
	boolState[relevant_evt_OF_A6] = REINITIALISATION_OF_relevant_evt_OF_A6;
	boolState[to_be_fired_OF_A6] = REINITIALISATION_OF_to_be_fired_OF_A6;
	boolState[required_OF_A7] = REINITIALISATION_OF_required_OF_A7;
	boolState[S_OF_A7] = REINITIALISATION_OF_S_OF_A7;
	boolState[relevant_evt_OF_A7] = REINITIALISATION_OF_relevant_evt_OF_A7;
	boolState[required_OF_A8] = REINITIALISATION_OF_required_OF_A8;
	boolState[S_OF_A8] = REINITIALISATION_OF_S_OF_A8;
	boolState[relevant_evt_OF_A8] = REINITIALISATION_OF_relevant_evt_OF_A8;
	boolState[required_OF_A9] = REINITIALISATION_OF_required_OF_A9;
	boolState[S_OF_A9] = REINITIALISATION_OF_S_OF_A9;
	boolState[relevant_evt_OF_A9] = REINITIALISATION_OF_relevant_evt_OF_A9;
	boolState[required_OF_UE_1] = REINITIALISATION_OF_required_OF_UE_1;
	boolState[S_OF_UE_1] = REINITIALISATION_OF_S_OF_UE_1;
	boolState[relevant_evt_OF_UE_1] = REINITIALISATION_OF_relevant_evt_OF_UE_1;
}

void storm::figaro::FigaroProgram_figaro_17_18::fireOccurrence(int numFire)
{
	//cout <<">>>>>>>>>>>>>>>>>>>> Fire of occurrence #" << numFire << " <<<<<<<<<<<<<<<<<<<<<<<" << endl;

	if (numFire == 0)
	{
		FIRE_xx23_OF_A1_INS_0 = true;
	}

	if (numFire == 1)
	{
		FIRE_xx23_OF_A1_INS_1 = true;
	}

	if (numFire == 2)
	{
		FIRE_xx24_OF_A1 = true;
	}

	if (numFire == 3)
	{
		FIRE_xx10_OF_A10 = true;
	}

	if (numFire == 4)
	{
		FIRE_xx11_OF_A10 = true;
	}

	if (numFire == 5)
	{
		FIRE_xx23_OF_A12_INS_5 = true;
	}

	if (numFire == 6)
	{
		FIRE_xx23_OF_A12_INS_6 = true;
	}

	if (numFire == 7)
	{
		FIRE_xx24_OF_A12 = true;
	}

	if (numFire == 8)
	{
		FIRE_xx23_OF_A2_INS_8 = true;
	}

	if (numFire == 9)
	{
		FIRE_xx23_OF_A2_INS_9 = true;
	}

	if (numFire == 10)
	{
		FIRE_xx24_OF_A2 = true;
	}

	if (numFire == 11)
	{
		FIRE_xx23_OF_A3_INS_11 = true;
	}

	if (numFire == 12)
	{
		FIRE_xx23_OF_A3_INS_12 = true;
	}

	if (numFire == 13)
	{
		FIRE_xx24_OF_A3 = true;
	}

	if (numFire == 14)
	{
		FIRE_xx23_OF_A4_INS_14 = true;
	}

	if (numFire == 15)
	{
		FIRE_xx23_OF_A4_INS_15 = true;
	}

	if (numFire == 16)
	{
		FIRE_xx24_OF_A4 = true;
	}

	if (numFire == 17)
	{
		FIRE_xx23_OF_A6_INS_17 = true;
	}

	if (numFire == 18)
	{
		FIRE_xx23_OF_A6_INS_18 = true;
	}

	if (numFire == 19)
	{
		FIRE_xx24_OF_A6 = true;
	}

/* ---------- DECLARATION OF OCCURRENCE RULES------------ */

	// Occurrence xx23_OF_A1

	if ((boolState[failI_OF_A1] == false) && boolState[to_be_fired_OF_A1]) 
	{
	
		
		if (FIRE_xx23_OF_A1_INS_0) 
		{
			boolState[failI_OF_A1]  =  true;
			boolState[already_standby_OF_A1]  =  false;
			boolState[already_required_OF_A1]  =  false;
			FIRE_xx23_OF_A1_INS_0 = false;
		}
	
	}
	if ((boolState[failI_OF_A1] == false) && boolState[to_be_fired_OF_A1]) 
	{
	
		
		if (FIRE_xx23_OF_A1_INS_1) 
		{
			boolState[already_standby_OF_A1]  =  false;
			boolState[already_required_OF_A1]  =  false;
			FIRE_xx23_OF_A1_INS_1 = false;
		}
	
	}
	// Occurrence xx24_OF_A1
	if (boolState[failI_OF_A1] == true) 
	{
		 
		if (FIRE_xx24_OF_A1)
		{
			boolState[failI_OF_A1]  =  false;
			FIRE_xx24_OF_A1 = false;
		}
	}

	// Occurrence xx10_OF_A10
	if ((boolState[failF_OF_A10] == false) && boolState[required_OF_A10]) 
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

	// Occurrence xx23_OF_A12

	if ((boolState[failI_OF_A12] == false) && boolState[to_be_fired_OF_A12]) 
	{
	
		
		if (FIRE_xx23_OF_A12_INS_5) 
		{
			boolState[failI_OF_A12]  =  true;
			boolState[already_standby_OF_A12]  =  false;
			boolState[already_required_OF_A12]  =  false;
			FIRE_xx23_OF_A12_INS_5 = false;
		}
	
	}
	if ((boolState[failI_OF_A12] == false) && boolState[to_be_fired_OF_A12]) 
	{
	
		
		if (FIRE_xx23_OF_A12_INS_6) 
		{
			boolState[already_standby_OF_A12]  =  false;
			boolState[already_required_OF_A12]  =  false;
			FIRE_xx23_OF_A12_INS_6 = false;
		}
	
	}
	// Occurrence xx24_OF_A12
	if (boolState[failI_OF_A12] == true) 
	{
		 
		if (FIRE_xx24_OF_A12)
		{
			boolState[failI_OF_A12]  =  false;
			FIRE_xx24_OF_A12 = false;
		}
	}

	// Occurrence xx23_OF_A2

	if ((boolState[failI_OF_A2] == false) && boolState[to_be_fired_OF_A2]) 
	{
	
		
		if (FIRE_xx23_OF_A2_INS_8) 
		{
			boolState[failI_OF_A2]  =  true;
			boolState[already_standby_OF_A2]  =  false;
			boolState[already_required_OF_A2]  =  false;
			FIRE_xx23_OF_A2_INS_8 = false;
		}
	
	}
	if ((boolState[failI_OF_A2] == false) && boolState[to_be_fired_OF_A2]) 
	{
	
		
		if (FIRE_xx23_OF_A2_INS_9) 
		{
			boolState[already_standby_OF_A2]  =  false;
			boolState[already_required_OF_A2]  =  false;
			FIRE_xx23_OF_A2_INS_9 = false;
		}
	
	}
	// Occurrence xx24_OF_A2
	if (boolState[failI_OF_A2] == true) 
	{
		 
		if (FIRE_xx24_OF_A2)
		{
			boolState[failI_OF_A2]  =  false;
			FIRE_xx24_OF_A2 = false;
		}
	}

	// Occurrence xx23_OF_A3

	if ((boolState[failI_OF_A3] == false) && boolState[to_be_fired_OF_A3]) 
	{
	
		
		if (FIRE_xx23_OF_A3_INS_11) 
		{
			boolState[failI_OF_A3]  =  true;
			boolState[already_standby_OF_A3]  =  false;
			boolState[already_required_OF_A3]  =  false;
			FIRE_xx23_OF_A3_INS_11 = false;
		}
	
	}
	if ((boolState[failI_OF_A3] == false) && boolState[to_be_fired_OF_A3]) 
	{
	
		
		if (FIRE_xx23_OF_A3_INS_12) 
		{
			boolState[already_standby_OF_A3]  =  false;
			boolState[already_required_OF_A3]  =  false;
			FIRE_xx23_OF_A3_INS_12 = false;
		}
	
	}
	// Occurrence xx24_OF_A3
	if (boolState[failI_OF_A3] == true) 
	{
		 
		if (FIRE_xx24_OF_A3)
		{
			boolState[failI_OF_A3]  =  false;
			FIRE_xx24_OF_A3 = false;
		}
	}

	// Occurrence xx23_OF_A4

	if ((boolState[failI_OF_A4] == false) && boolState[to_be_fired_OF_A4]) 
	{
	
		
		if (FIRE_xx23_OF_A4_INS_14) 
		{
			boolState[failI_OF_A4]  =  true;
			boolState[already_standby_OF_A4]  =  false;
			boolState[already_required_OF_A4]  =  false;
			FIRE_xx23_OF_A4_INS_14 = false;
		}
	
	}
	if ((boolState[failI_OF_A4] == false) && boolState[to_be_fired_OF_A4]) 
	{
	
		
		if (FIRE_xx23_OF_A4_INS_15) 
		{
			boolState[already_standby_OF_A4]  =  false;
			boolState[already_required_OF_A4]  =  false;
			FIRE_xx23_OF_A4_INS_15 = false;
		}
	
	}
	// Occurrence xx24_OF_A4
	if (boolState[failI_OF_A4] == true) 
	{
		 
		if (FIRE_xx24_OF_A4)
		{
			boolState[failI_OF_A4]  =  false;
			FIRE_xx24_OF_A4 = false;
		}
	}

	// Occurrence xx23_OF_A6

	if ((boolState[failI_OF_A6] == false) && boolState[to_be_fired_OF_A6]) 
	{
	
		
		if (FIRE_xx23_OF_A6_INS_17) 
		{
			boolState[failI_OF_A6]  =  true;
			boolState[already_standby_OF_A6]  =  false;
			boolState[already_required_OF_A6]  =  false;
			FIRE_xx23_OF_A6_INS_17 = false;
		}
	
	}
	if ((boolState[failI_OF_A6] == false) && boolState[to_be_fired_OF_A6]) 
	{
	
		
		if (FIRE_xx23_OF_A6_INS_18) 
		{
			boolState[already_standby_OF_A6]  =  false;
			boolState[already_required_OF_A6]  =  false;
			FIRE_xx23_OF_A6_INS_18 = false;
		}
	
	}
	// Occurrence xx24_OF_A6
	if (boolState[failI_OF_A6] == true) 
	{
		 
		if (FIRE_xx24_OF_A6)
		{
			boolState[failI_OF_A6]  =  false;
			FIRE_xx24_OF_A6 = false;
		}
	}

}

std::vector<std::tuple<int, double, std::string, int>> storm::figaro::FigaroProgram_figaro_17_18::showFireableOccurrences()
{
	std::vector<std::tuple<int, double, std::string, int>> list = {};
	//cout <<"\n==================== List of fireable occurrences :  ====================" << endl;

	if ((boolState[failI_OF_A1] == false) && boolState[to_be_fired_OF_A1])
	{
		//cout << "0 :  INS_SUB_COUNT (1) |FAULT | failI  LABEL \"défaillance instantanée %OBJET\" | DIST INS (0.01) | INDUCING boolState[failI_OF_A1]  =  TRUE,already_standby_OF_A1  =  FALSE,already_required_OF_A1  =  FALSE" << endl;
		list.push_back(make_tuple(0, 0.01, "INS", 1));
	}
	if ((boolState[failI_OF_A1] == false) && boolState[to_be_fired_OF_A1])
	{
		//cout << "1 :  INS_SUB_COUNT (1) |TRANSITION | good | DIST INS (0.99) | INDUCING boolState[already_standby_OF_A1]  =  FALSE,already_required_OF_A1  =  FALSE" << endl;
		list.push_back(make_tuple(1, 0.99, "INS", 1));
	}
	if ((boolState[failI_OF_A12] == false) && boolState[to_be_fired_OF_A12])
	{
		//cout << "5 :  INS_SUB_COUNT (2) |FAULT | failI  LABEL \"défaillance instantanée %OBJET\" | DIST INS (0.01) | INDUCING boolState[failI_OF_A12]  =  TRUE,already_standby_OF_A12  =  FALSE,already_required_OF_A12  =  FALSE" << endl;
		list.push_back(make_tuple(5, 0.01, "INS", 2));
	}
	if ((boolState[failI_OF_A12] == false) && boolState[to_be_fired_OF_A12])
	{
		//cout << "6 :  INS_SUB_COUNT (2) |TRANSITION | good | DIST INS (0.99) | INDUCING boolState[already_standby_OF_A12]  =  FALSE,already_required_OF_A12  =  FALSE" << endl;
		list.push_back(make_tuple(6, 0.99, "INS", 2));
	}
	if ((boolState[failI_OF_A2] == false) && boolState[to_be_fired_OF_A2])
	{
		//cout << "8 :  INS_SUB_COUNT (3) |FAULT | failI  LABEL \"défaillance instantanée %OBJET\" | DIST INS (0.01) | INDUCING boolState[failI_OF_A2]  =  TRUE,already_standby_OF_A2  =  FALSE,already_required_OF_A2  =  FALSE" << endl;
		list.push_back(make_tuple(8, 0.01, "INS", 3));
	}
	if ((boolState[failI_OF_A2] == false) && boolState[to_be_fired_OF_A2])
	{
		//cout << "9 :  INS_SUB_COUNT (3) |TRANSITION | good | DIST INS (0.99) | INDUCING boolState[already_standby_OF_A2]  =  FALSE,already_required_OF_A2  =  FALSE" << endl;
		list.push_back(make_tuple(9, 0.99, "INS", 3));
	}
	if ((boolState[failI_OF_A3] == false) && boolState[to_be_fired_OF_A3])
	{
		//cout << "11 :  INS_SUB_COUNT (4) |FAULT | failI  LABEL \"défaillance instantanée %OBJET\" | DIST INS (0.01) | INDUCING boolState[failI_OF_A3]  =  TRUE,already_standby_OF_A3  =  FALSE,already_required_OF_A3  =  FALSE" << endl;
		list.push_back(make_tuple(11, 0.01, "INS", 4));
	}
	if ((boolState[failI_OF_A3] == false) && boolState[to_be_fired_OF_A3])
	{
		//cout << "12 :  INS_SUB_COUNT (4) |TRANSITION | good | DIST INS (0.99) | INDUCING boolState[already_standby_OF_A3]  =  FALSE,already_required_OF_A3  =  FALSE" << endl;
		list.push_back(make_tuple(12, 0.99, "INS", 4));
	}
	if ((boolState[failI_OF_A4] == false) && boolState[to_be_fired_OF_A4])
	{
		//cout << "14 :  INS_SUB_COUNT (5) |FAULT | failI  LABEL \"défaillance instantanée %OBJET\" | DIST INS (0.01) | INDUCING boolState[failI_OF_A4]  =  TRUE,already_standby_OF_A4  =  FALSE,already_required_OF_A4  =  FALSE" << endl;
		list.push_back(make_tuple(14, 0.01, "INS", 5));
	}
	if ((boolState[failI_OF_A4] == false) && boolState[to_be_fired_OF_A4])
	{
		//cout << "15 :  INS_SUB_COUNT (5) |TRANSITION | good | DIST INS (0.99) | INDUCING boolState[already_standby_OF_A4]  =  FALSE,already_required_OF_A4  =  FALSE" << endl;
		list.push_back(make_tuple(15, 0.99, "INS", 5));
	}
	if ((boolState[failI_OF_A6] == false) && boolState[to_be_fired_OF_A6])
	{
		//cout << "17 :  INS_SUB_COUNT (6) |FAULT | failI  LABEL \"défaillance instantanée %OBJET\" | DIST INS (0.01) | INDUCING boolState[failI_OF_A6]  =  TRUE,already_standby_OF_A6  =  FALSE,already_required_OF_A6  =  FALSE" << endl;
		list.push_back(make_tuple(17, 0.01, "INS", 6));
	}
	if ((boolState[failI_OF_A6] == false) && boolState[to_be_fired_OF_A6])
	{
		//cout << "18 :  INS_SUB_COUNT (6) |TRANSITION | good | DIST INS (0.99) | INDUCING boolState[already_standby_OF_A6]  =  FALSE,already_required_OF_A6  =  FALSE" << endl;
		list.push_back(make_tuple(18, 0.99, "INS", 6));
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
     
	if (boolState[failI_OF_A1] == true)
	{
		//cout << "2 : xx24_OF_A1 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failI_OF_A1]  =  FALSE" << endl;
		list.push_back(make_tuple(2, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A10] == false) && boolState[required_OF_A10])
	{
		//cout << "3 : xx10_OF_A10 : FAULT failF  LABEL \"défaillance en fonctionnement %OBJET\"  DIST EXP (0.01)  INDUCING boolState[failF_OF_A10]  =  TRUE" << endl;
		list.push_back(make_tuple(3, 0.01, "EXP", 0));
	}
	if (boolState[failF_OF_A10] == true)
	{
		//cout << "4 : xx11_OF_A10 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A10]  =  FALSE" << endl;
		list.push_back(make_tuple(4, 0.1, "EXP", 0));
	}
	if (boolState[failI_OF_A12] == true)
	{
		//cout << "7 : xx24_OF_A12 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failI_OF_A12]  =  FALSE" << endl;
		list.push_back(make_tuple(7, 0.1, "EXP", 0));
	}
	if (boolState[failI_OF_A2] == true)
	{
		//cout << "10 : xx24_OF_A2 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failI_OF_A2]  =  FALSE" << endl;
		list.push_back(make_tuple(10, 0.1, "EXP", 0));
	}
	if (boolState[failI_OF_A3] == true)
	{
		//cout << "13 : xx24_OF_A3 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failI_OF_A3]  =  FALSE" << endl;
		list.push_back(make_tuple(13, 0.1, "EXP", 0));
	}
	if (boolState[failI_OF_A4] == true)
	{
		//cout << "16 : xx24_OF_A4 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failI_OF_A4]  =  FALSE" << endl;
		list.push_back(make_tuple(16, 0.1, "EXP", 0));
	}
	if (boolState[failI_OF_A6] == true)
	{
		//cout << "19 : xx24_OF_A6 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failI_OF_A6]  =  FALSE" << endl;
		list.push_back(make_tuple(19, 0.1, "EXP", 0));
	}
	return list;
}


void storm::figaro::FigaroProgram_figaro_17_18::runOnceInteractionStep_initialization()
{
	if (boolState[failI_OF_A1] == true )
	{
		boolState[S_OF_A1]  =  true;
	}

	if (boolState[failF_OF_A10] == true )
	{
		boolState[S_OF_A10]  =  true;
	}

	if (boolState[failI_OF_A12] == true )
	{
		boolState[S_OF_A12]  =  true;
	}

	if (boolState[failI_OF_A2] == true )
	{
		boolState[S_OF_A2]  =  true;
	}

	if (boolState[failI_OF_A3] == true )
	{
		boolState[S_OF_A3]  =  true;
	}

	if (boolState[failI_OF_A4] == true )
	{
		boolState[S_OF_A4]  =  true;
	}

	if (boolState[failI_OF_A6] == true )
	{
		boolState[S_OF_A6]  =  true;
	}

}


void storm::figaro::FigaroProgram_figaro_17_18::runOnceInteractionStep_propagate_effect_S()
{
	if (boolState[S_OF_A12] || boolState[S_OF_A9] )
	{
		boolState[S_OF_A11]  =  true;
	}

	if (boolState[S_OF_A3] && boolState[S_OF_A4] )
	{
		boolState[S_OF_A5]  =  true;
	}

	if (boolState[S_OF_A1] && boolState[S_OF_A2] )
	{
		boolState[S_OF_A7]  =  true;
	}

	if (boolState[S_OF_A5] || boolState[S_OF_A6] )
	{
		boolState[S_OF_A8]  =  true;
	}

	if (boolState[S_OF_A7] && boolState[S_OF_A8] )
	{
		boolState[S_OF_A9]  =  true;
	}

	if (boolState[S_OF_A11] )
	{
		boolState[S_OF_UE_1]  =  true;
	}

}


void storm::figaro::FigaroProgram_figaro_17_18::runOnceInteractionStep_propagate_effect_required()
{
	if ( !boolState[required_OF_A7] )
	{
		boolState[required_OF_A1]  =  false;
	}

	if (boolState[relevant_evt_OF_A7] && ( !boolState[S_OF_A7]) )
	{
		boolState[relevant_evt_OF_A1]  =  true;
	}

	if (boolState[relevant_evt_OF_A11] && ( !boolState[S_OF_A11]) )
	{
		boolState[relevant_evt_OF_A10]  =  true;
	}

	if (( !boolState[required_OF_UE_1]) || ( !boolState[S_OF_A10]) )
	{
		boolState[required_OF_A11]  =  false;
	}

	if (boolState[relevant_evt_OF_UE_1] && ( !boolState[S_OF_UE_1]) )
	{
		boolState[relevant_evt_OF_A11]  =  true;
	}

	if ( !boolState[required_OF_A11] )
	{
		boolState[required_OF_A12]  =  false;
	}

	if (boolState[relevant_evt_OF_A11] && ( !boolState[S_OF_A11]) )
	{
		boolState[relevant_evt_OF_A12]  =  true;
	}

	if ( !boolState[required_OF_A7] )
	{
		boolState[required_OF_A2]  =  false;
	}

	if (boolState[relevant_evt_OF_A7] && ( !boolState[S_OF_A7]) )
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

	if ( !boolState[required_OF_A5] )
	{
		boolState[required_OF_A4]  =  false;
	}

	if (boolState[relevant_evt_OF_A5] && ( !boolState[S_OF_A5]) )
	{
		boolState[relevant_evt_OF_A4]  =  true;
	}

	if ( !boolState[required_OF_A8] )
	{
		boolState[required_OF_A5]  =  false;
	}

	if (boolState[relevant_evt_OF_A8] && ( !boolState[S_OF_A8]) )
	{
		boolState[relevant_evt_OF_A5]  =  true;
	}

	if ( !boolState[required_OF_A8] )
	{
		boolState[required_OF_A6]  =  false;
	}

	if (boolState[relevant_evt_OF_A8] && ( !boolState[S_OF_A8]) )
	{
		boolState[relevant_evt_OF_A6]  =  true;
	}

	if ( !boolState[required_OF_A9] )
	{
		boolState[required_OF_A7]  =  false;
	}

	if (boolState[relevant_evt_OF_A9] && ( !boolState[S_OF_A9]) )
	{
		boolState[relevant_evt_OF_A7]  =  true;
	}

	if ( !boolState[required_OF_A9] )
	{
		boolState[required_OF_A8]  =  false;
	}

	if (boolState[relevant_evt_OF_A9] && ( !boolState[S_OF_A9]) )
	{
		boolState[relevant_evt_OF_A8]  =  true;
	}

	if ( !boolState[required_OF_A11] )
	{
		boolState[required_OF_A9]  =  false;
	}

	if (boolState[relevant_evt_OF_A11] && ( !boolState[S_OF_A11]) )
	{
		boolState[relevant_evt_OF_A9]  =  true;
	}



	boolState[relevant_evt_OF_UE_1]  =  true  ;

}


void storm::figaro::FigaroProgram_figaro_17_18::runOnceInteractionStep_propagate_leaves()
{


	boolState[already_S_OF_A1]  =  boolState[S_OF_A1]  ;

	if (( !boolState[required_OF_A1]) && (( !boolState[already_standby_OF_A1]) && (   !boolState[already_required_OF_A1])) )
	{
		boolState[already_standby_OF_A1]  =  true;
	}



	boolState[already_S_OF_A10]  =  boolState[S_OF_A10]  ;



	boolState[already_S_OF_A11]  =  boolState[S_OF_A11]  ;



	boolState[already_S_OF_A12]  =  boolState[S_OF_A12]  ;

	if (( !boolState[required_OF_A12]) && (( !boolState[already_standby_OF_A12]) && (   !boolState[already_required_OF_A12])) )
	{
		boolState[already_standby_OF_A12]  =  true;
	}



	boolState[already_S_OF_A2]  =  boolState[S_OF_A2]  ;

	if (( !boolState[required_OF_A2]) && (( !boolState[already_standby_OF_A2]) && (   !boolState[already_required_OF_A2])) )
	{
		boolState[already_standby_OF_A2]  =  true;
	}



	boolState[already_S_OF_A3]  =  boolState[S_OF_A3]  ;

	if (( !boolState[required_OF_A3]) && (( !boolState[already_standby_OF_A3]) && (   !boolState[already_required_OF_A3])) )
	{
		boolState[already_standby_OF_A3]  =  true;
	}



	boolState[already_S_OF_A4]  =  boolState[S_OF_A4]  ;

	if (( !boolState[required_OF_A4]) && (( !boolState[already_standby_OF_A4]) && (   !boolState[already_required_OF_A4])) )
	{
		boolState[already_standby_OF_A4]  =  true;
	}



	boolState[already_S_OF_A5]  =  boolState[S_OF_A5]  ;



	boolState[already_S_OF_A6]  =  boolState[S_OF_A6]  ;

	if (( !boolState[required_OF_A6]) && (( !boolState[already_standby_OF_A6]) && (   !boolState[already_required_OF_A6])) )
	{
		boolState[already_standby_OF_A6]  =  true;
	}



	boolState[already_S_OF_A7]  =  boolState[S_OF_A7]  ;



	boolState[already_S_OF_A8]  =  boolState[S_OF_A8]  ;



	boolState[already_S_OF_A9]  =  boolState[S_OF_A9]  ;



	boolState[already_S_OF_UE_1]  =  boolState[S_OF_UE_1]  ;

}


void storm::figaro::FigaroProgram_figaro_17_18::runOnceInteractionStep_tops()
{
	if (boolState[required_OF_A1] && boolState[already_standby_OF_A1] )
	{
		boolState[to_be_fired_OF_A1]  =  true;
	}

	if (boolState[required_OF_A12] && boolState[already_standby_OF_A12] )
	{
		boolState[to_be_fired_OF_A12]  =  true;
	}

	if (boolState[required_OF_A2] && boolState[already_standby_OF_A2] )
	{
		boolState[to_be_fired_OF_A2]  =  true;
	}

	if (boolState[required_OF_A3] && boolState[already_standby_OF_A3] )
	{
		boolState[to_be_fired_OF_A3]  =  true;
	}

	if (boolState[required_OF_A4] && boolState[already_standby_OF_A4] )
	{
		boolState[to_be_fired_OF_A4]  =  true;
	}

	if (boolState[required_OF_A6] && boolState[already_standby_OF_A6] )
	{
		boolState[to_be_fired_OF_A6]  =  true;
	}

}

void
storm::figaro::FigaroProgram_figaro_17_18::runInteractions() {
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
    }void storm::figaro::FigaroProgram_figaro_17_18::printstatetuple(){

                std::cout<<"\n State information: (";
                for (int i=0; i<boolFailureState.size(); i++)
                    {
                    std::cout<<boolFailureState.at(i);
                    }
                std::cout<<")";

            }
        int_fast64_t storm::figaro::FigaroProgram_figaro_17_18::stateSize() const{
            return numBoolState;
}
        void storm::figaro::FigaroProgram_figaro_17_18::fireinsttransitiongroup(std::string user_input_ins)

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
    