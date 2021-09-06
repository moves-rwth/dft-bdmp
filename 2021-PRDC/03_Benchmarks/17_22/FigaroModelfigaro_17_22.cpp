#include <iostream>
#include "FigaroModelfigaro_17_22.h"

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
        
void storm::figaro::FigaroProgram_figaro_17_22::init()
{
	//cout <<">>>>>>>>>>>>>>>>>>>> Initialization of variables <<<<<<<<<<<<<<<<<<<<<<<" << endl;

	REINITIALISATION_OF_required_OF_AND_1 = true;
	boolState[already_S_OF_AND_1] = false;
	REINITIALISATION_OF_S_OF_AND_1 = false;
	REINITIALISATION_OF_relevant_evt_OF_AND_1 = false;
	REINITIALISATION_OF_required_OF_AND_2 = true;
	boolState[already_S_OF_AND_2] = false;
	REINITIALISATION_OF_S_OF_AND_2 = false;
	REINITIALISATION_OF_relevant_evt_OF_AND_2 = false;
	REINITIALISATION_OF_required_OF_B1 = true;
	boolState[already_S_OF_B1] = false;
	REINITIALISATION_OF_S_OF_B1 = false;
	REINITIALISATION_OF_relevant_evt_OF_B1 = false;
	boolState[failF_OF_B1] = false;
	REINITIALISATION_OF_required_OF_B2 = true;
	boolState[already_S_OF_B2] = false;
	REINITIALISATION_OF_S_OF_B2 = false;
	REINITIALISATION_OF_relevant_evt_OF_B2 = false;
	boolState[failF_OF_B2] = false;
	REINITIALISATION_OF_required_OF_B3 = true;
	boolState[already_S_OF_B3] = false;
	REINITIALISATION_OF_S_OF_B3 = false;
	REINITIALISATION_OF_relevant_evt_OF_B3 = false;
	boolState[failF_OF_B3] = false;
	REINITIALISATION_OF_required_OF_B4 = true;
	boolState[already_S_OF_B4] = false;
	REINITIALISATION_OF_S_OF_B4 = false;
	REINITIALISATION_OF_relevant_evt_OF_B4 = false;
	boolState[failF_OF_B4] = false;
	REINITIALISATION_OF_required_OF_C1 = true;
	boolState[already_S_OF_C1] = false;
	REINITIALISATION_OF_S_OF_C1 = false;
	REINITIALISATION_OF_relevant_evt_OF_C1 = false;
	boolState[failF_OF_C1] = false;
	REINITIALISATION_OF_required_OF_C2 = true;
	boolState[already_S_OF_C2] = false;
	REINITIALISATION_OF_S_OF_C2 = false;
	REINITIALISATION_OF_relevant_evt_OF_C2 = false;
	boolState[failF_OF_C2] = false;
	REINITIALISATION_OF_required_OF_C3 = true;
	boolState[already_S_OF_C3] = false;
	REINITIALISATION_OF_S_OF_C3 = false;
	REINITIALISATION_OF_relevant_evt_OF_C3 = false;
	boolState[failF_OF_C3] = false;
	REINITIALISATION_OF_required_OF_C4 = true;
	boolState[already_S_OF_C4] = false;
	REINITIALISATION_OF_S_OF_C4 = false;
	REINITIALISATION_OF_relevant_evt_OF_C4 = false;
	boolState[failF_OF_C4] = false;
	REINITIALISATION_OF_required_OF_G_A = true;
	boolState[already_S_OF_G_A] = false;
	REINITIALISATION_OF_S_OF_G_A = false;
	REINITIALISATION_OF_relevant_evt_OF_G_A = false;
	boolState[group_loss_OF_G_A] = false;
	intState[nb_OK_OF_G_A] = 10;
	intState[nb_being_repaired_OF_G_A] = 0;
	REINITIALISATION_OF_required_OF_OR_1 = true;
	boolState[already_S_OF_OR_1] = false;
	REINITIALISATION_OF_S_OF_OR_1 = false;
	REINITIALISATION_OF_relevant_evt_OF_OR_1 = false;
	REINITIALISATION_OF_required_OF_UE_1 = true;
	boolState[already_S_OF_UE_1] = false;
	REINITIALISATION_OF_S_OF_UE_1 = false;
	REINITIALISATION_OF_relevant_evt_OF_UE_1 = false;

	/* ---------- DECLARATION OF OCCURRENCE RULES FIRING FLAGS ------------ */
	FIRE_xx10_OF_B1 = false;
	FIRE_xx11_OF_B1 = false;
	FIRE_xx10_OF_B2 = false;
	FIRE_xx11_OF_B2 = false;
	FIRE_xx10_OF_B3 = false;
	FIRE_xx11_OF_B3 = false;
	FIRE_xx10_OF_B4 = false;
	FIRE_xx11_OF_B4 = false;
	FIRE_xx10_OF_C1 = false;
	FIRE_xx11_OF_C1 = false;
	FIRE_xx10_OF_C2 = false;
	FIRE_xx11_OF_C2 = false;
	FIRE_xx10_OF_C3 = false;
	FIRE_xx11_OF_C3 = false;
	FIRE_xx10_OF_C4 = false;
	FIRE_xx11_OF_C4 = false;
	FIRE_xx15_OF_G_A = false;
	FIRE_xx16_OF_G_A = false;

}

void storm::figaro::FigaroProgram_figaro_17_22::saveCurrentState()
{
	// cout <<">>>>>>>>>>>>>>>>>>>> Saving current state  <<<<<<<<<<<<<<<<<<<<<<<" << endl;
	backupBoolState = boolState ;
	backupFloatState = floatState ;
	backupIntState = intState ;
	backupEnumState = enumState ;
}

int storm::figaro::FigaroProgram_figaro_17_22::compareStates()
{
	// cout <<">>>>>>>>>>>>>>>>>>>> Comparing state with previous one (return number of differences) <<<<<<<<<<<<<<<<<<<<<<<" << endl;

	return (backupBoolState != boolState) + (backupFloatState != floatState) + (backupIntState != intState) + (backupEnumState != enumState); 
}

void storm::figaro::FigaroProgram_figaro_17_22::printState()
{
	//cout <<"\n==================== Print of the current state :  ====================" << endl;

	//cout << "Attribute :  boolState[required_OF_AND_1] | Value : " << boolState[required_OF_AND_1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_AND_1] | Value : " << boolState[already_S_OF_AND_1] << endl;
	//cout << "Attribute :  boolState[S_OF_AND_1] | Value : " << boolState[S_OF_AND_1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_AND_1] | Value : " << boolState[relevant_evt_OF_AND_1] << endl;
	//cout << "Attribute :  boolState[required_OF_AND_2] | Value : " << boolState[required_OF_AND_2] << endl;
	//cout << "Attribute :  boolState[already_S_OF_AND_2] | Value : " << boolState[already_S_OF_AND_2] << endl;
	//cout << "Attribute :  boolState[S_OF_AND_2] | Value : " << boolState[S_OF_AND_2] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_AND_2] | Value : " << boolState[relevant_evt_OF_AND_2] << endl;
	//cout << "Attribute :  boolState[required_OF_B1] | Value : " << boolState[required_OF_B1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_B1] | Value : " << boolState[already_S_OF_B1] << endl;
	//cout << "Attribute :  boolState[S_OF_B1] | Value : " << boolState[S_OF_B1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_B1] | Value : " << boolState[relevant_evt_OF_B1] << endl;
	//cout << "Attribute :  boolState[failF_OF_B1] | Value : " << boolState[failF_OF_B1] << endl;
	//cout << "Attribute :  boolState[required_OF_B2] | Value : " << boolState[required_OF_B2] << endl;
	//cout << "Attribute :  boolState[already_S_OF_B2] | Value : " << boolState[already_S_OF_B2] << endl;
	//cout << "Attribute :  boolState[S_OF_B2] | Value : " << boolState[S_OF_B2] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_B2] | Value : " << boolState[relevant_evt_OF_B2] << endl;
	//cout << "Attribute :  boolState[failF_OF_B2] | Value : " << boolState[failF_OF_B2] << endl;
	//cout << "Attribute :  boolState[required_OF_B3] | Value : " << boolState[required_OF_B3] << endl;
	//cout << "Attribute :  boolState[already_S_OF_B3] | Value : " << boolState[already_S_OF_B3] << endl;
	//cout << "Attribute :  boolState[S_OF_B3] | Value : " << boolState[S_OF_B3] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_B3] | Value : " << boolState[relevant_evt_OF_B3] << endl;
	//cout << "Attribute :  boolState[failF_OF_B3] | Value : " << boolState[failF_OF_B3] << endl;
	//cout << "Attribute :  boolState[required_OF_B4] | Value : " << boolState[required_OF_B4] << endl;
	//cout << "Attribute :  boolState[already_S_OF_B4] | Value : " << boolState[already_S_OF_B4] << endl;
	//cout << "Attribute :  boolState[S_OF_B4] | Value : " << boolState[S_OF_B4] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_B4] | Value : " << boolState[relevant_evt_OF_B4] << endl;
	//cout << "Attribute :  boolState[failF_OF_B4] | Value : " << boolState[failF_OF_B4] << endl;
	//cout << "Attribute :  boolState[required_OF_C1] | Value : " << boolState[required_OF_C1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_C1] | Value : " << boolState[already_S_OF_C1] << endl;
	//cout << "Attribute :  boolState[S_OF_C1] | Value : " << boolState[S_OF_C1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_C1] | Value : " << boolState[relevant_evt_OF_C1] << endl;
	//cout << "Attribute :  boolState[failF_OF_C1] | Value : " << boolState[failF_OF_C1] << endl;
	//cout << "Attribute :  boolState[required_OF_C2] | Value : " << boolState[required_OF_C2] << endl;
	//cout << "Attribute :  boolState[already_S_OF_C2] | Value : " << boolState[already_S_OF_C2] << endl;
	//cout << "Attribute :  boolState[S_OF_C2] | Value : " << boolState[S_OF_C2] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_C2] | Value : " << boolState[relevant_evt_OF_C2] << endl;
	//cout << "Attribute :  boolState[failF_OF_C2] | Value : " << boolState[failF_OF_C2] << endl;
	//cout << "Attribute :  boolState[required_OF_C3] | Value : " << boolState[required_OF_C3] << endl;
	//cout << "Attribute :  boolState[already_S_OF_C3] | Value : " << boolState[already_S_OF_C3] << endl;
	//cout << "Attribute :  boolState[S_OF_C3] | Value : " << boolState[S_OF_C3] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_C3] | Value : " << boolState[relevant_evt_OF_C3] << endl;
	//cout << "Attribute :  boolState[failF_OF_C3] | Value : " << boolState[failF_OF_C3] << endl;
	//cout << "Attribute :  boolState[required_OF_C4] | Value : " << boolState[required_OF_C4] << endl;
	//cout << "Attribute :  boolState[already_S_OF_C4] | Value : " << boolState[already_S_OF_C4] << endl;
	//cout << "Attribute :  boolState[S_OF_C4] | Value : " << boolState[S_OF_C4] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_C4] | Value : " << boolState[relevant_evt_OF_C4] << endl;
	//cout << "Attribute :  boolState[failF_OF_C4] | Value : " << boolState[failF_OF_C4] << endl;
	//cout << "Attribute :  boolState[required_OF_G_A] | Value : " << boolState[required_OF_G_A] << endl;
	//cout << "Attribute :  boolState[already_S_OF_G_A] | Value : " << boolState[already_S_OF_G_A] << endl;
	//cout << "Attribute :  boolState[S_OF_G_A] | Value : " << boolState[S_OF_G_A] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_G_A] | Value : " << boolState[relevant_evt_OF_G_A] << endl;
	//cout << "Attribute :  boolState[group_loss_OF_G_A] | Value : " << boolState[group_loss_OF_G_A] << endl;
	//cout << "Attribute :  intState[nb_OK_OF_G_A] | Value : " << intState[nb_OK_OF_G_A] << endl;
	//cout << "Attribute :  intState[nb_being_repaired_OF_G_A] | Value : " << intState[nb_being_repaired_OF_G_A] << endl;
	//cout << "Attribute :  boolState[required_OF_OR_1] | Value : " << boolState[required_OF_OR_1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_OR_1] | Value : " << boolState[already_S_OF_OR_1] << endl;
	//cout << "Attribute :  boolState[S_OF_OR_1] | Value : " << boolState[S_OF_OR_1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_OR_1] | Value : " << boolState[relevant_evt_OF_OR_1] << endl;
	//cout << "Attribute :  boolState[required_OF_UE_1] | Value : " << boolState[required_OF_UE_1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_UE_1] | Value : " << boolState[already_S_OF_UE_1] << endl;
	//cout << "Attribute :  boolState[S_OF_UE_1] | Value : " << boolState[S_OF_UE_1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_UE_1] | Value : " << boolState[relevant_evt_OF_UE_1] << endl;
}

bool storm::figaro::FigaroProgram_figaro_17_22::figaromodelhasinstransitions()
{
	return false;
}
void storm::figaro::FigaroProgram_figaro_17_22::doReinitialisations()
{
	boolState[required_OF_AND_1] = REINITIALISATION_OF_required_OF_AND_1;
	boolState[S_OF_AND_1] = REINITIALISATION_OF_S_OF_AND_1;
	boolState[relevant_evt_OF_AND_1] = REINITIALISATION_OF_relevant_evt_OF_AND_1;
	boolState[required_OF_AND_2] = REINITIALISATION_OF_required_OF_AND_2;
	boolState[S_OF_AND_2] = REINITIALISATION_OF_S_OF_AND_2;
	boolState[relevant_evt_OF_AND_2] = REINITIALISATION_OF_relevant_evt_OF_AND_2;
	boolState[required_OF_B1] = REINITIALISATION_OF_required_OF_B1;
	boolState[S_OF_B1] = REINITIALISATION_OF_S_OF_B1;
	boolState[relevant_evt_OF_B1] = REINITIALISATION_OF_relevant_evt_OF_B1;
	boolState[required_OF_B2] = REINITIALISATION_OF_required_OF_B2;
	boolState[S_OF_B2] = REINITIALISATION_OF_S_OF_B2;
	boolState[relevant_evt_OF_B2] = REINITIALISATION_OF_relevant_evt_OF_B2;
	boolState[required_OF_B3] = REINITIALISATION_OF_required_OF_B3;
	boolState[S_OF_B3] = REINITIALISATION_OF_S_OF_B3;
	boolState[relevant_evt_OF_B3] = REINITIALISATION_OF_relevant_evt_OF_B3;
	boolState[required_OF_B4] = REINITIALISATION_OF_required_OF_B4;
	boolState[S_OF_B4] = REINITIALISATION_OF_S_OF_B4;
	boolState[relevant_evt_OF_B4] = REINITIALISATION_OF_relevant_evt_OF_B4;
	boolState[required_OF_C1] = REINITIALISATION_OF_required_OF_C1;
	boolState[S_OF_C1] = REINITIALISATION_OF_S_OF_C1;
	boolState[relevant_evt_OF_C1] = REINITIALISATION_OF_relevant_evt_OF_C1;
	boolState[required_OF_C2] = REINITIALISATION_OF_required_OF_C2;
	boolState[S_OF_C2] = REINITIALISATION_OF_S_OF_C2;
	boolState[relevant_evt_OF_C2] = REINITIALISATION_OF_relevant_evt_OF_C2;
	boolState[required_OF_C3] = REINITIALISATION_OF_required_OF_C3;
	boolState[S_OF_C3] = REINITIALISATION_OF_S_OF_C3;
	boolState[relevant_evt_OF_C3] = REINITIALISATION_OF_relevant_evt_OF_C3;
	boolState[required_OF_C4] = REINITIALISATION_OF_required_OF_C4;
	boolState[S_OF_C4] = REINITIALISATION_OF_S_OF_C4;
	boolState[relevant_evt_OF_C4] = REINITIALISATION_OF_relevant_evt_OF_C4;
	boolState[required_OF_G_A] = REINITIALISATION_OF_required_OF_G_A;
	boolState[S_OF_G_A] = REINITIALISATION_OF_S_OF_G_A;
	boolState[relevant_evt_OF_G_A] = REINITIALISATION_OF_relevant_evt_OF_G_A;
	boolState[required_OF_OR_1] = REINITIALISATION_OF_required_OF_OR_1;
	boolState[S_OF_OR_1] = REINITIALISATION_OF_S_OF_OR_1;
	boolState[relevant_evt_OF_OR_1] = REINITIALISATION_OF_relevant_evt_OF_OR_1;
	boolState[required_OF_UE_1] = REINITIALISATION_OF_required_OF_UE_1;
	boolState[S_OF_UE_1] = REINITIALISATION_OF_S_OF_UE_1;
	boolState[relevant_evt_OF_UE_1] = REINITIALISATION_OF_relevant_evt_OF_UE_1;
}

void storm::figaro::FigaroProgram_figaro_17_22::fireOccurrence(int numFire)
{
	//cout <<">>>>>>>>>>>>>>>>>>>> Fire of occurrence #" << numFire << " <<<<<<<<<<<<<<<<<<<<<<<" << endl;

	if (numFire == 0)
	{
		FIRE_xx10_OF_B1 = true;
	}

	if (numFire == 1)
	{
		FIRE_xx11_OF_B1 = true;
	}

	if (numFire == 2)
	{
		FIRE_xx10_OF_B2 = true;
	}

	if (numFire == 3)
	{
		FIRE_xx11_OF_B2 = true;
	}

	if (numFire == 4)
	{
		FIRE_xx10_OF_B3 = true;
	}

	if (numFire == 5)
	{
		FIRE_xx11_OF_B3 = true;
	}

	if (numFire == 6)
	{
		FIRE_xx10_OF_B4 = true;
	}

	if (numFire == 7)
	{
		FIRE_xx11_OF_B4 = true;
	}

	if (numFire == 8)
	{
		FIRE_xx10_OF_C1 = true;
	}

	if (numFire == 9)
	{
		FIRE_xx11_OF_C1 = true;
	}

	if (numFire == 10)
	{
		FIRE_xx10_OF_C2 = true;
	}

	if (numFire == 11)
	{
		FIRE_xx11_OF_C2 = true;
	}

	if (numFire == 12)
	{
		FIRE_xx10_OF_C3 = true;
	}

	if (numFire == 13)
	{
		FIRE_xx11_OF_C3 = true;
	}

	if (numFire == 14)
	{
		FIRE_xx10_OF_C4 = true;
	}

	if (numFire == 15)
	{
		FIRE_xx11_OF_C4 = true;
	}

	if (numFire == 16)
	{
		FIRE_xx15_OF_G_A = true;
	}

	if (numFire == 17)
	{
		FIRE_xx16_OF_G_A = true;
	}

/* ---------- DECLARATION OF OCCURRENCE RULES------------ */

	// Occurrence xx10_OF_B1
	if ((boolState[failF_OF_B1] == false) && boolState[required_OF_B1]) 
	{
		 
		if (FIRE_xx10_OF_B1)
		{
			boolState[failF_OF_B1]  =  true;
			FIRE_xx10_OF_B1 = false;
		}
	}

	// Occurrence xx11_OF_B1
	if (boolState[failF_OF_B1] == true) 
	{
		 
		if (FIRE_xx11_OF_B1)
		{
			boolState[failF_OF_B1]  =  false;
			FIRE_xx11_OF_B1 = false;
		}
	}

	// Occurrence xx10_OF_B2
	if ((boolState[failF_OF_B2] == false) && boolState[required_OF_B2]) 
	{
		 
		if (FIRE_xx10_OF_B2)
		{
			boolState[failF_OF_B2]  =  true;
			FIRE_xx10_OF_B2 = false;
		}
	}

	// Occurrence xx11_OF_B2
	if (boolState[failF_OF_B2] == true) 
	{
		 
		if (FIRE_xx11_OF_B2)
		{
			boolState[failF_OF_B2]  =  false;
			FIRE_xx11_OF_B2 = false;
		}
	}

	// Occurrence xx10_OF_B3
	if ((boolState[failF_OF_B3] == false) && boolState[required_OF_B3]) 
	{
		 
		if (FIRE_xx10_OF_B3)
		{
			boolState[failF_OF_B3]  =  true;
			FIRE_xx10_OF_B3 = false;
		}
	}

	// Occurrence xx11_OF_B3
	if (boolState[failF_OF_B3] == true) 
	{
		 
		if (FIRE_xx11_OF_B3)
		{
			boolState[failF_OF_B3]  =  false;
			FIRE_xx11_OF_B3 = false;
		}
	}

	// Occurrence xx10_OF_B4
	if ((boolState[failF_OF_B4] == false) && boolState[required_OF_B4]) 
	{
		 
		if (FIRE_xx10_OF_B4)
		{
			boolState[failF_OF_B4]  =  true;
			FIRE_xx10_OF_B4 = false;
		}
	}

	// Occurrence xx11_OF_B4
	if (boolState[failF_OF_B4] == true) 
	{
		 
		if (FIRE_xx11_OF_B4)
		{
			boolState[failF_OF_B4]  =  false;
			FIRE_xx11_OF_B4 = false;
		}
	}

	// Occurrence xx10_OF_C1
	if ((boolState[failF_OF_C1] == false) && boolState[required_OF_C1]) 
	{
		 
		if (FIRE_xx10_OF_C1)
		{
			boolState[failF_OF_C1]  =  true;
			FIRE_xx10_OF_C1 = false;
		}
	}

	// Occurrence xx11_OF_C1
	if (boolState[failF_OF_C1] == true) 
	{
		 
		if (FIRE_xx11_OF_C1)
		{
			boolState[failF_OF_C1]  =  false;
			FIRE_xx11_OF_C1 = false;
		}
	}

	// Occurrence xx10_OF_C2
	if ((boolState[failF_OF_C2] == false) && boolState[required_OF_C2]) 
	{
		 
		if (FIRE_xx10_OF_C2)
		{
			boolState[failF_OF_C2]  =  true;
			FIRE_xx10_OF_C2 = false;
		}
	}

	// Occurrence xx11_OF_C2
	if (boolState[failF_OF_C2] == true) 
	{
		 
		if (FIRE_xx11_OF_C2)
		{
			boolState[failF_OF_C2]  =  false;
			FIRE_xx11_OF_C2 = false;
		}
	}

	// Occurrence xx10_OF_C3
	if ((boolState[failF_OF_C3] == false) && boolState[required_OF_C3]) 
	{
		 
		if (FIRE_xx10_OF_C3)
		{
			boolState[failF_OF_C3]  =  true;
			FIRE_xx10_OF_C3 = false;
		}
	}

	// Occurrence xx11_OF_C3
	if (boolState[failF_OF_C3] == true) 
	{
		 
		if (FIRE_xx11_OF_C3)
		{
			boolState[failF_OF_C3]  =  false;
			FIRE_xx11_OF_C3 = false;
		}
	}

	// Occurrence xx10_OF_C4
	if ((boolState[failF_OF_C4] == false) && boolState[required_OF_C4]) 
	{
		 
		if (FIRE_xx10_OF_C4)
		{
			boolState[failF_OF_C4]  =  true;
			FIRE_xx10_OF_C4 = false;
		}
	}

	// Occurrence xx11_OF_C4
	if (boolState[failF_OF_C4] == true) 
	{
		 
		if (FIRE_xx11_OF_C4)
		{
			boolState[failF_OF_C4]  =  false;
			FIRE_xx11_OF_C4 = false;
		}
	}

	// Occurrence xx15_OF_G_A
	if ((intState[nb_OK_OF_G_A] > 0) && boolState[required_OF_G_A]) 
	{
		 
		if (FIRE_xx15_OF_G_A)
		{
			intState[nb_OK_OF_G_A]  =  (intState[nb_OK_OF_G_A] - 1);
			FIRE_xx15_OF_G_A = false;
		}
	}

	// Occurrence xx16_OF_G_A
	if ((intState[nb_OK_OF_G_A] < 10) && (intState[nb_being_repaired_OF_G_A] > 0)) 
	{
		 
		if (FIRE_xx16_OF_G_A)
		{
			intState[nb_OK_OF_G_A]  =  (intState[nb_OK_OF_G_A] + 1);
			FIRE_xx16_OF_G_A = false;
		}
	}

}

std::vector<std::tuple<int, double, std::string, int>> storm::figaro::FigaroProgram_figaro_17_22::showFireableOccurrences()
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
     
	if ((boolState[failF_OF_B1] == false) && boolState[required_OF_B1])
	{
		//cout << "0 : xx10_OF_B1 : FAULT failF  LABEL \"défaillance en fonctionnement %OBJET\"  DIST EXP (0.01)  INDUCING boolState[failF_OF_B1]  =  TRUE" << endl;
		list.push_back(make_tuple(0, 0.01, "EXP", 0));
	}
	if (boolState[failF_OF_B1] == true)
	{
		//cout << "1 : xx11_OF_B1 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_B1]  =  FALSE" << endl;
		list.push_back(make_tuple(1, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_B2] == false) && boolState[required_OF_B2])
	{
		//cout << "2 : xx10_OF_B2 : FAULT failF  LABEL \"défaillance en fonctionnement %OBJET\"  DIST EXP (0.01)  INDUCING boolState[failF_OF_B2]  =  TRUE" << endl;
		list.push_back(make_tuple(2, 0.01, "EXP", 0));
	}
	if (boolState[failF_OF_B2] == true)
	{
		//cout << "3 : xx11_OF_B2 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_B2]  =  FALSE" << endl;
		list.push_back(make_tuple(3, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_B3] == false) && boolState[required_OF_B3])
	{
		//cout << "4 : xx10_OF_B3 : FAULT failF  LABEL \"défaillance en fonctionnement %OBJET\"  DIST EXP (0.01)  INDUCING boolState[failF_OF_B3]  =  TRUE" << endl;
		list.push_back(make_tuple(4, 0.01, "EXP", 0));
	}
	if (boolState[failF_OF_B3] == true)
	{
		//cout << "5 : xx11_OF_B3 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_B3]  =  FALSE" << endl;
		list.push_back(make_tuple(5, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_B4] == false) && boolState[required_OF_B4])
	{
		//cout << "6 : xx10_OF_B4 : FAULT failF  LABEL \"défaillance en fonctionnement %OBJET\"  DIST EXP (0.01)  INDUCING boolState[failF_OF_B4]  =  TRUE" << endl;
		list.push_back(make_tuple(6, 0.01, "EXP", 0));
	}
	if (boolState[failF_OF_B4] == true)
	{
		//cout << "7 : xx11_OF_B4 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_B4]  =  FALSE" << endl;
		list.push_back(make_tuple(7, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_C1] == false) && boolState[required_OF_C1])
	{
		//cout << "8 : xx10_OF_C1 : FAULT failF  LABEL \"défaillance en fonctionnement %OBJET\"  DIST EXP (0.01)  INDUCING boolState[failF_OF_C1]  =  TRUE" << endl;
		list.push_back(make_tuple(8, 0.01, "EXP", 0));
	}
	if (boolState[failF_OF_C1] == true)
	{
		//cout << "9 : xx11_OF_C1 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_C1]  =  FALSE" << endl;
		list.push_back(make_tuple(9, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_C2] == false) && boolState[required_OF_C2])
	{
		//cout << "10 : xx10_OF_C2 : FAULT failF  LABEL \"défaillance en fonctionnement %OBJET\"  DIST EXP (0.01)  INDUCING boolState[failF_OF_C2]  =  TRUE" << endl;
		list.push_back(make_tuple(10, 0.01, "EXP", 0));
	}
	if (boolState[failF_OF_C2] == true)
	{
		//cout << "11 : xx11_OF_C2 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_C2]  =  FALSE" << endl;
		list.push_back(make_tuple(11, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_C3] == false) && boolState[required_OF_C3])
	{
		//cout << "12 : xx10_OF_C3 : FAULT failF  LABEL \"défaillance en fonctionnement %OBJET\"  DIST EXP (0.01)  INDUCING boolState[failF_OF_C3]  =  TRUE" << endl;
		list.push_back(make_tuple(12, 0.01, "EXP", 0));
	}
	if (boolState[failF_OF_C3] == true)
	{
		//cout << "13 : xx11_OF_C3 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_C3]  =  FALSE" << endl;
		list.push_back(make_tuple(13, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_C4] == false) && boolState[required_OF_C4])
	{
		//cout << "14 : xx10_OF_C4 : FAULT failF  LABEL \"défaillance en fonctionnement %OBJET\"  DIST EXP (0.01)  INDUCING boolState[failF_OF_C4]  =  TRUE" << endl;
		list.push_back(make_tuple(14, 0.01, "EXP", 0));
	}
	if (boolState[failF_OF_C4] == true)
	{
		//cout << "15 : xx11_OF_C4 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_C4]  =  FALSE" << endl;
		list.push_back(make_tuple(15, 0.1, "EXP", 0));
	}
	if ((intState[nb_OK_OF_G_A] > 0) && boolState[required_OF_G_A])
	{
		//cout << "16 : xx15_OF_G_A : FAULT failF  LABEL \"déf. d'un objet du groupe %OBJET\"  DIST EXP (0.1 *  intState[nb_OK_OF_G_A])  INDUCING intState[nb_OK_OF_G_A]  =  (intState[nb_OK_OF_G_A] - 1)" << endl;
		list.push_back(make_tuple(16, 0.1 *  intState[nb_OK_OF_G_A], "EXP", 0));
	}
	if ((intState[nb_OK_OF_G_A] < 10) && (intState[nb_being_repaired_OF_G_A] > 0))
	{
		//cout << "17 : xx16_OF_G_A : REPAIR rep  DIST EXP (0.1 *  intState[nb_being_repaired_OF_G_A])  INDUCING intState[nb_OK_OF_G_A]  =  (intState[nb_OK_OF_G_A] + 1)" << endl;
		list.push_back(make_tuple(17, 0.1 *  intState[nb_being_repaired_OF_G_A], "EXP", 0));
	}
	return list;
}


void storm::figaro::FigaroProgram_figaro_17_22::runOnceInteractionStep_initialization()
{
	if (boolState[failF_OF_B1] == true )
	{
		boolState[S_OF_B1]  =  true;
	}

	if (boolState[failF_OF_B2] == true )
	{
		boolState[S_OF_B2]  =  true;
	}

	if (boolState[failF_OF_B3] == true )
	{
		boolState[S_OF_B3]  =  true;
	}

	if (boolState[failF_OF_B4] == true )
	{
		boolState[S_OF_B4]  =  true;
	}

	if (boolState[failF_OF_C1] == true )
	{
		boolState[S_OF_C1]  =  true;
	}

	if (boolState[failF_OF_C2] == true )
	{
		boolState[S_OF_C2]  =  true;
	}

	if (boolState[failF_OF_C3] == true )
	{
		boolState[S_OF_C3]  =  true;
	}

	if (boolState[failF_OF_C4] == true )
	{
		boolState[S_OF_C4]  =  true;
	}

	if (intState[nb_OK_OF_G_A] < 0 )
	{
		intState[nb_being_repaired_OF_G_A]  =  10;
	}

	if (intState[nb_OK_OF_G_A] >= 0 )
	{
		intState[nb_being_repaired_OF_G_A]  =  (10 - intState[nb_OK_OF_G_A]);
	}

	if (intState[nb_OK_OF_G_A] < 8 )
	{
		boolState[S_OF_G_A]  =  true;
	}

}


void storm::figaro::FigaroProgram_figaro_17_22::runOnceInteractionStep_propagate_effect_S()
{
	if (((boolState[S_OF_B4] && boolState[S_OF_B2]) && boolState[S_OF_B3]) && boolState[S_OF_B1] )
	{
		boolState[S_OF_AND_1]  =  true;
	}

	if (((boolState[S_OF_C3] && boolState[S_OF_C2]) && boolState[S_OF_C1]) && boolState[S_OF_C4] )
	{
		boolState[S_OF_AND_2]  =  true;
	}

	if ((boolState[S_OF_AND_1] || boolState[S_OF_AND_2]) || boolState[S_OF_G_A] )
	{
		boolState[S_OF_OR_1]  =  true;
	}

	if (boolState[S_OF_OR_1] )
	{
		boolState[S_OF_UE_1]  =  true;
	}

}


void storm::figaro::FigaroProgram_figaro_17_22::runOnceInteractionStep_propagate_effect_required()
{
	if ( !boolState[required_OF_OR_1] )
	{
		boolState[required_OF_AND_1]  =  false;
	}

	if (boolState[relevant_evt_OF_OR_1] && ( !boolState[S_OF_OR_1]) )
	{
		boolState[relevant_evt_OF_AND_1]  =  true;
	}

	if ( !boolState[required_OF_OR_1] )
	{
		boolState[required_OF_AND_2]  =  false;
	}

	if (boolState[relevant_evt_OF_OR_1] && ( !boolState[S_OF_OR_1]) )
	{
		boolState[relevant_evt_OF_AND_2]  =  true;
	}

	if ( !boolState[required_OF_AND_1] )
	{
		boolState[required_OF_B1]  =  false;
	}

	if ((boolState[relevant_evt_OF_AND_1] && ( !boolState[S_OF_AND_1])) || (  boolState[relevant_evt_OF_B2] && ( !boolState[S_OF_B2])) )
	{
		boolState[relevant_evt_OF_B1]  =  true;
	}

	if (( !boolState[required_OF_AND_1]) || ( !boolState[S_OF_B1]) )
	{
		boolState[required_OF_B2]  =  false;
	}

	if ((boolState[relevant_evt_OF_AND_1] && ( !boolState[S_OF_AND_1])) || (  boolState[relevant_evt_OF_B3] && ( !boolState[S_OF_B3])) )
	{
		boolState[relevant_evt_OF_B2]  =  true;
	}

	if (( !boolState[required_OF_AND_1]) || ( !boolState[S_OF_B2]) )
	{
		boolState[required_OF_B3]  =  false;
	}

	if ((boolState[relevant_evt_OF_AND_1] && ( !boolState[S_OF_AND_1])) || (  boolState[relevant_evt_OF_B4] && ( !boolState[S_OF_B4])) )
	{
		boolState[relevant_evt_OF_B3]  =  true;
	}

	if (( !boolState[required_OF_AND_1]) || ( !boolState[S_OF_B3]) )
	{
		boolState[required_OF_B4]  =  false;
	}

	if (boolState[relevant_evt_OF_AND_1] && ( !boolState[S_OF_AND_1]) )
	{
		boolState[relevant_evt_OF_B4]  =  true;
	}

	if ( !boolState[required_OF_AND_2] )
	{
		boolState[required_OF_C1]  =  false;
	}

	if ((boolState[relevant_evt_OF_AND_2] && ( !boolState[S_OF_AND_2])) || (  boolState[relevant_evt_OF_C2] && ( !boolState[S_OF_C2])) )
	{
		boolState[relevant_evt_OF_C1]  =  true;
	}

	if (( !boolState[required_OF_AND_2]) || ( !boolState[S_OF_C1]) )
	{
		boolState[required_OF_C2]  =  false;
	}

	if ((boolState[relevant_evt_OF_AND_2] && ( !boolState[S_OF_AND_2])) || (  boolState[relevant_evt_OF_C3] && ( !boolState[S_OF_C3])) )
	{
		boolState[relevant_evt_OF_C2]  =  true;
	}

	if (( !boolState[required_OF_AND_2]) || ( !boolState[S_OF_C2]) )
	{
		boolState[required_OF_C3]  =  false;
	}

	if ((boolState[relevant_evt_OF_AND_2] && ( !boolState[S_OF_AND_2])) || (  boolState[relevant_evt_OF_C4] && ( !boolState[S_OF_C4])) )
	{
		boolState[relevant_evt_OF_C3]  =  true;
	}

	if (( !boolState[required_OF_AND_2]) || ( !boolState[S_OF_C3]) )
	{
		boolState[required_OF_C4]  =  false;
	}

	if (boolState[relevant_evt_OF_AND_2] && ( !boolState[S_OF_AND_2]) )
	{
		boolState[relevant_evt_OF_C4]  =  true;
	}

	if ( !boolState[required_OF_OR_1] )
	{
		boolState[required_OF_G_A]  =  false;
	}

	if (boolState[relevant_evt_OF_OR_1] && ( !boolState[S_OF_OR_1]) )
	{
		boolState[relevant_evt_OF_G_A]  =  true;
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


void storm::figaro::FigaroProgram_figaro_17_22::runOnceInteractionStep_propagate_leaves()
{


	boolState[already_S_OF_AND_1]  =  boolState[S_OF_AND_1]  ;



	boolState[already_S_OF_AND_2]  =  boolState[S_OF_AND_2]  ;



	boolState[already_S_OF_B1]  =  boolState[S_OF_B1]  ;



	boolState[already_S_OF_B2]  =  boolState[S_OF_B2]  ;



	boolState[already_S_OF_B3]  =  boolState[S_OF_B3]  ;



	boolState[already_S_OF_B4]  =  boolState[S_OF_B4]  ;



	boolState[already_S_OF_C1]  =  boolState[S_OF_C1]  ;



	boolState[already_S_OF_C2]  =  boolState[S_OF_C2]  ;



	boolState[already_S_OF_C3]  =  boolState[S_OF_C3]  ;



	boolState[already_S_OF_C4]  =  boolState[S_OF_C4]  ;



	boolState[already_S_OF_G_A]  =  boolState[S_OF_G_A]  ;



	boolState[already_S_OF_OR_1]  =  boolState[S_OF_OR_1]  ;



	boolState[already_S_OF_UE_1]  =  boolState[S_OF_UE_1]  ;

}

void
storm::figaro::FigaroProgram_figaro_17_22::runInteractions() {
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
    }void storm::figaro::FigaroProgram_figaro_17_22::printstatetuple(){

                std::cout<<"\n State information: (";
                for (int i=0; i<boolFailureState.size(); i++)
                    {
                    std::cout<<boolFailureState.at(i);
                    }
                std::cout<<")";

            }
        int_fast64_t storm::figaro::FigaroProgram_figaro_17_22::stateSize() const{
            return numBoolState;
}
        void storm::figaro::FigaroProgram_figaro_17_22::fireinsttransitiongroup(std::string user_input_ins)

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
    