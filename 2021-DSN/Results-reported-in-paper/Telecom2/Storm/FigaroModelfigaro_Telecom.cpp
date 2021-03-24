#include <iostream>
#include "FigaroModelfigaro_Telecom.h"

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
        
void storm::figaro::FigaroProgram_figaro_Telecom::init()
{
	//cout <<">>>>>>>>>>>>>>>>>>>> Initialization of variables <<<<<<<<<<<<<<<<<<<<<<<" << endl;

	intState[nb_failures_OF_Failure_counter] = 0;
	boolState[fail_OF_Node_1] = false;
	REINITIALISATION_OF_connected_OF_Node_1 = false;
	boolState[fail_OF_Node_2] = false;
	REINITIALISATION_OF_connected_OF_Node_2 = false;
	boolState[fail_OF_Node_3] = false;
	REINITIALISATION_OF_connected_OF_Node_3 = false;
	boolState[fail_OF_Node_4] = false;
	REINITIALISATION_OF_connected_OF_Node_4 = false;
	boolState[fail_OF_Node_5] = false;
	REINITIALISATION_OF_connected_OF_Node_5 = false;
	boolState[fail_OF_Node_6] = false;
	REINITIALISATION_OF_connected_OF_Node_6 = false;
	boolState[fail_OF_Node_7] = false;
	REINITIALISATION_OF_connected_OF_Node_7 = false;
	boolState[fail_OF_Source] = false;
	REINITIALISATION_OF_connected_OF_Source = false;
	boolState[fail_OF_Target] = false;
	REINITIALISATION_OF_connected_OF_Target = false;
	boolState[interruption_OF_bidir_1] = false;
	boolState[interruption_OF_bidir_10] = false;
	boolState[interruption_OF_bidir_11] = false;
	boolState[interruption_OF_bidir_12] = false;
	boolState[interruption_OF_bidir_2] = false;
	boolState[interruption_OF_bidir_3] = false;
	boolState[interruption_OF_bidir_4] = false;
	boolState[interruption_OF_bidir_5] = false;
	boolState[interruption_OF_bidir_6] = false;
	boolState[interruption_OF_bidir_7] = false;
	boolState[interruption_OF_bidir_8] = false;
	boolState[interruption_OF_bidir_9] = false;
	boolState[interruption_OF_ud_1] = false;
	boolState[interruption_OF_ud_2] = false;
	boolState[interruption_OF_ud_3] = false;

	/* ---------- DECLARATION OF OCCURRENCE RULES FIRING FLAGS ------------ */
	FIRE_xx1_OF_Node_1 = false;
	FIRE_xx2_OF_Node_1 = false;
	FIRE_xx1_OF_Node_2 = false;
	FIRE_xx2_OF_Node_2 = false;
	FIRE_xx1_OF_Node_3 = false;
	FIRE_xx2_OF_Node_3 = false;
	FIRE_xx1_OF_Node_4 = false;
	FIRE_xx2_OF_Node_4 = false;
	FIRE_xx1_OF_Node_5 = false;
	FIRE_xx2_OF_Node_5 = false;
	FIRE_xx1_OF_Node_6 = false;
	FIRE_xx2_OF_Node_6 = false;
	FIRE_xx1_OF_Node_7 = false;
	FIRE_xx2_OF_Node_7 = false;
	FIRE_xx1_OF_Source = false;
	FIRE_xx2_OF_Source = false;
	FIRE_xx1_OF_Target = false;
	FIRE_xx2_OF_Target = false;
	FIRE_xx3_OF_bidir_1 = false;
	FIRE_xx4_OF_bidir_1 = false;
	FIRE_xx3_OF_bidir_10 = false;
	FIRE_xx4_OF_bidir_10 = false;
	FIRE_xx3_OF_bidir_11 = false;
	FIRE_xx4_OF_bidir_11 = false;
	FIRE_xx3_OF_bidir_12 = false;
	FIRE_xx4_OF_bidir_12 = false;
	FIRE_xx3_OF_bidir_2 = false;
	FIRE_xx4_OF_bidir_2 = false;
	FIRE_xx3_OF_bidir_3 = false;
	FIRE_xx4_OF_bidir_3 = false;
	FIRE_xx3_OF_bidir_4 = false;
	FIRE_xx4_OF_bidir_4 = false;
	FIRE_xx3_OF_bidir_5 = false;
	FIRE_xx4_OF_bidir_5 = false;
	FIRE_xx3_OF_bidir_6 = false;
	FIRE_xx4_OF_bidir_6 = false;
	FIRE_xx3_OF_bidir_7 = false;
	FIRE_xx4_OF_bidir_7 = false;
	FIRE_xx3_OF_bidir_8 = false;
	FIRE_xx4_OF_bidir_8 = false;
	FIRE_xx3_OF_bidir_9 = false;
	FIRE_xx4_OF_bidir_9 = false;
	FIRE_xx3_OF_ud_1 = false;
	FIRE_xx4_OF_ud_1 = false;
	FIRE_xx3_OF_ud_2 = false;
	FIRE_xx4_OF_ud_2 = false;
	FIRE_xx3_OF_ud_3 = false;
	FIRE_xx4_OF_ud_3 = false;

}

void storm::figaro::FigaroProgram_figaro_Telecom::saveCurrentState()
{
	// cout <<">>>>>>>>>>>>>>>>>>>> Saving current state  <<<<<<<<<<<<<<<<<<<<<<<" << endl;
	backupBoolState = boolState ;
	backupFloatState = floatState ;
	backupIntState = intState ;
	backupEnumState = enumState ;
}

int storm::figaro::FigaroProgram_figaro_Telecom::compareStates()
{
	// cout <<">>>>>>>>>>>>>>>>>>>> Comparing state with previous one (return number of differences) <<<<<<<<<<<<<<<<<<<<<<<" << endl;

	return (backupBoolState != boolState) + (backupFloatState != floatState) + (backupIntState != intState) + (backupEnumState != enumState); 
}

void storm::figaro::FigaroProgram_figaro_Telecom::printState()
{
	//cout <<"\n==================== Print of the current state :  ====================" << endl;

	//cout << "Attribute :  intState[nb_failures_OF_Failure_counter] | Value : " << intState[nb_failures_OF_Failure_counter] << endl;
	//cout << "Attribute :  boolState[fail_OF_Node_1] | Value : " << boolState[fail_OF_Node_1] << endl;
	//cout << "Attribute :  boolState[connected_OF_Node_1] | Value : " << boolState[connected_OF_Node_1] << endl;
	//cout << "Attribute :  boolState[fail_OF_Node_2] | Value : " << boolState[fail_OF_Node_2] << endl;
	//cout << "Attribute :  boolState[connected_OF_Node_2] | Value : " << boolState[connected_OF_Node_2] << endl;
	//cout << "Attribute :  boolState[fail_OF_Node_3] | Value : " << boolState[fail_OF_Node_3] << endl;
	//cout << "Attribute :  boolState[connected_OF_Node_3] | Value : " << boolState[connected_OF_Node_3] << endl;
	//cout << "Attribute :  boolState[fail_OF_Node_4] | Value : " << boolState[fail_OF_Node_4] << endl;
	//cout << "Attribute :  boolState[connected_OF_Node_4] | Value : " << boolState[connected_OF_Node_4] << endl;
	//cout << "Attribute :  boolState[fail_OF_Node_5] | Value : " << boolState[fail_OF_Node_5] << endl;
	//cout << "Attribute :  boolState[connected_OF_Node_5] | Value : " << boolState[connected_OF_Node_5] << endl;
	//cout << "Attribute :  boolState[fail_OF_Node_6] | Value : " << boolState[fail_OF_Node_6] << endl;
	//cout << "Attribute :  boolState[connected_OF_Node_6] | Value : " << boolState[connected_OF_Node_6] << endl;
	//cout << "Attribute :  boolState[fail_OF_Node_7] | Value : " << boolState[fail_OF_Node_7] << endl;
	//cout << "Attribute :  boolState[connected_OF_Node_7] | Value : " << boolState[connected_OF_Node_7] << endl;
	//cout << "Attribute :  boolState[fail_OF_Source] | Value : " << boolState[fail_OF_Source] << endl;
	//cout << "Attribute :  boolState[connected_OF_Source] | Value : " << boolState[connected_OF_Source] << endl;
	//cout << "Attribute :  boolState[fail_OF_Target] | Value : " << boolState[fail_OF_Target] << endl;
	//cout << "Attribute :  boolState[connected_OF_Target] | Value : " << boolState[connected_OF_Target] << endl;
	//cout << "Attribute :  boolState[interruption_OF_bidir_1] | Value : " << boolState[interruption_OF_bidir_1] << endl;
	//cout << "Attribute :  boolState[interruption_OF_bidir_10] | Value : " << boolState[interruption_OF_bidir_10] << endl;
	//cout << "Attribute :  boolState[interruption_OF_bidir_11] | Value : " << boolState[interruption_OF_bidir_11] << endl;
	//cout << "Attribute :  boolState[interruption_OF_bidir_12] | Value : " << boolState[interruption_OF_bidir_12] << endl;
	//cout << "Attribute :  boolState[interruption_OF_bidir_2] | Value : " << boolState[interruption_OF_bidir_2] << endl;
	//cout << "Attribute :  boolState[interruption_OF_bidir_3] | Value : " << boolState[interruption_OF_bidir_3] << endl;
	//cout << "Attribute :  boolState[interruption_OF_bidir_4] | Value : " << boolState[interruption_OF_bidir_4] << endl;
	//cout << "Attribute :  boolState[interruption_OF_bidir_5] | Value : " << boolState[interruption_OF_bidir_5] << endl;
	//cout << "Attribute :  boolState[interruption_OF_bidir_6] | Value : " << boolState[interruption_OF_bidir_6] << endl;
	//cout << "Attribute :  boolState[interruption_OF_bidir_7] | Value : " << boolState[interruption_OF_bidir_7] << endl;
	//cout << "Attribute :  boolState[interruption_OF_bidir_8] | Value : " << boolState[interruption_OF_bidir_8] << endl;
	//cout << "Attribute :  boolState[interruption_OF_bidir_9] | Value : " << boolState[interruption_OF_bidir_9] << endl;
	//cout << "Attribute :  boolState[interruption_OF_ud_1] | Value : " << boolState[interruption_OF_ud_1] << endl;
	//cout << "Attribute :  boolState[interruption_OF_ud_2] | Value : " << boolState[interruption_OF_ud_2] << endl;
	//cout << "Attribute :  boolState[interruption_OF_ud_3] | Value : " << boolState[interruption_OF_ud_3] << endl;
}

bool storm::figaro::FigaroProgram_figaro_Telecom::figaromodelhasinstransitions()
{
	return false;
}
void storm::figaro::FigaroProgram_figaro_Telecom::doReinitialisations()
{
	boolState[connected_OF_Node_1] = REINITIALISATION_OF_connected_OF_Node_1;
	boolState[connected_OF_Node_2] = REINITIALISATION_OF_connected_OF_Node_2;
	boolState[connected_OF_Node_3] = REINITIALISATION_OF_connected_OF_Node_3;
	boolState[connected_OF_Node_4] = REINITIALISATION_OF_connected_OF_Node_4;
	boolState[connected_OF_Node_5] = REINITIALISATION_OF_connected_OF_Node_5;
	boolState[connected_OF_Node_6] = REINITIALISATION_OF_connected_OF_Node_6;
	boolState[connected_OF_Node_7] = REINITIALISATION_OF_connected_OF_Node_7;
	boolState[connected_OF_Source] = REINITIALISATION_OF_connected_OF_Source;
	boolState[connected_OF_Target] = REINITIALISATION_OF_connected_OF_Target;
}

void storm::figaro::FigaroProgram_figaro_Telecom::fireOccurrence(int numFire)
{
	//cout <<">>>>>>>>>>>>>>>>>>>> Fire of occurrence #" << numFire << " <<<<<<<<<<<<<<<<<<<<<<<" << endl;

	if (numFire == 0)
	{
		FIRE_xx1_OF_Node_1 = true;
	}

	if (numFire == 1)
	{
		FIRE_xx2_OF_Node_1 = true;
	}

	if (numFire == 2)
	{
		FIRE_xx1_OF_Node_2 = true;
	}

	if (numFire == 3)
	{
		FIRE_xx2_OF_Node_2 = true;
	}

	if (numFire == 4)
	{
		FIRE_xx1_OF_Node_3 = true;
	}

	if (numFire == 5)
	{
		FIRE_xx2_OF_Node_3 = true;
	}

	if (numFire == 6)
	{
		FIRE_xx1_OF_Node_4 = true;
	}

	if (numFire == 7)
	{
		FIRE_xx2_OF_Node_4 = true;
	}

	if (numFire == 8)
	{
		FIRE_xx1_OF_Node_5 = true;
	}

	if (numFire == 9)
	{
		FIRE_xx2_OF_Node_5 = true;
	}

	if (numFire == 10)
	{
		FIRE_xx1_OF_Node_6 = true;
	}

	if (numFire == 11)
	{
		FIRE_xx2_OF_Node_6 = true;
	}

	if (numFire == 12)
	{
		FIRE_xx1_OF_Node_7 = true;
	}

	if (numFire == 13)
	{
		FIRE_xx2_OF_Node_7 = true;
	}

	if (numFire == 14)
	{
		FIRE_xx1_OF_Source = true;
	}

	if (numFire == 15)
	{
		FIRE_xx2_OF_Source = true;
	}

	if (numFire == 16)
	{
		FIRE_xx1_OF_Target = true;
	}

	if (numFire == 17)
	{
		FIRE_xx2_OF_Target = true;
	}

	if (numFire == 18)
	{
		FIRE_xx3_OF_bidir_1 = true;
	}

	if (numFire == 19)
	{
		FIRE_xx4_OF_bidir_1 = true;
	}

	if (numFire == 20)
	{
		FIRE_xx3_OF_bidir_10 = true;
	}

	if (numFire == 21)
	{
		FIRE_xx4_OF_bidir_10 = true;
	}

	if (numFire == 22)
	{
		FIRE_xx3_OF_bidir_11 = true;
	}

	if (numFire == 23)
	{
		FIRE_xx4_OF_bidir_11 = true;
	}

	if (numFire == 24)
	{
		FIRE_xx3_OF_bidir_12 = true;
	}

	if (numFire == 25)
	{
		FIRE_xx4_OF_bidir_12 = true;
	}

	if (numFire == 26)
	{
		FIRE_xx3_OF_bidir_2 = true;
	}

	if (numFire == 27)
	{
		FIRE_xx4_OF_bidir_2 = true;
	}

	if (numFire == 28)
	{
		FIRE_xx3_OF_bidir_3 = true;
	}

	if (numFire == 29)
	{
		FIRE_xx4_OF_bidir_3 = true;
	}

	if (numFire == 30)
	{
		FIRE_xx3_OF_bidir_4 = true;
	}

	if (numFire == 31)
	{
		FIRE_xx4_OF_bidir_4 = true;
	}

	if (numFire == 32)
	{
		FIRE_xx3_OF_bidir_5 = true;
	}

	if (numFire == 33)
	{
		FIRE_xx4_OF_bidir_5 = true;
	}

	if (numFire == 34)
	{
		FIRE_xx3_OF_bidir_6 = true;
	}

	if (numFire == 35)
	{
		FIRE_xx4_OF_bidir_6 = true;
	}

	if (numFire == 36)
	{
		FIRE_xx3_OF_bidir_7 = true;
	}

	if (numFire == 37)
	{
		FIRE_xx4_OF_bidir_7 = true;
	}

	if (numFire == 38)
	{
		FIRE_xx3_OF_bidir_8 = true;
	}

	if (numFire == 39)
	{
		FIRE_xx4_OF_bidir_8 = true;
	}

	if (numFire == 40)
	{
		FIRE_xx3_OF_bidir_9 = true;
	}

	if (numFire == 41)
	{
		FIRE_xx4_OF_bidir_9 = true;
	}

	if (numFire == 42)
	{
		FIRE_xx3_OF_ud_1 = true;
	}

	if (numFire == 43)
	{
		FIRE_xx4_OF_ud_1 = true;
	}

	if (numFire == 44)
	{
		FIRE_xx3_OF_ud_2 = true;
	}

	if (numFire == 45)
	{
		FIRE_xx4_OF_ud_2 = true;
	}

	if (numFire == 46)
	{
		FIRE_xx3_OF_ud_3 = true;
	}

	if (numFire == 47)
	{
		FIRE_xx4_OF_ud_3 = true;
	}

/* ---------- DECLARATION OF OCCURRENCE RULES------------ */

	// Occurrence xx1_OF_Node_1
	if (boolState[fail_OF_Node_1] == false) 
	{
		 
		if (FIRE_xx1_OF_Node_1)
		{
			boolState[fail_OF_Node_1]  =  true;
			FIRE_xx1_OF_Node_1 = false;
		}
	}

	// Occurrence xx2_OF_Node_1
	if (boolState[fail_OF_Node_1] == true) 
	{
		 
		if (FIRE_xx2_OF_Node_1)
		{
			boolState[fail_OF_Node_1]  =  false;
			FIRE_xx2_OF_Node_1 = false;
		}
	}

	// Occurrence xx1_OF_Node_2
	if (boolState[fail_OF_Node_2] == false) 
	{
		 
		if (FIRE_xx1_OF_Node_2)
		{
			boolState[fail_OF_Node_2]  =  true;
			FIRE_xx1_OF_Node_2 = false;
		}
	}

	// Occurrence xx2_OF_Node_2
	if (boolState[fail_OF_Node_2] == true) 
	{
		 
		if (FIRE_xx2_OF_Node_2)
		{
			boolState[fail_OF_Node_2]  =  false;
			FIRE_xx2_OF_Node_2 = false;
		}
	}

	// Occurrence xx1_OF_Node_3
	if (boolState[fail_OF_Node_3] == false) 
	{
		 
		if (FIRE_xx1_OF_Node_3)
		{
			boolState[fail_OF_Node_3]  =  true;
			FIRE_xx1_OF_Node_3 = false;
		}
	}

	// Occurrence xx2_OF_Node_3
	if (boolState[fail_OF_Node_3] == true) 
	{
		 
		if (FIRE_xx2_OF_Node_3)
		{
			boolState[fail_OF_Node_3]  =  false;
			FIRE_xx2_OF_Node_3 = false;
		}
	}

	// Occurrence xx1_OF_Node_4
	if (boolState[fail_OF_Node_4] == false) 
	{
		 
		if (FIRE_xx1_OF_Node_4)
		{
			boolState[fail_OF_Node_4]  =  true;
			FIRE_xx1_OF_Node_4 = false;
		}
	}

	// Occurrence xx2_OF_Node_4
	if (boolState[fail_OF_Node_4] == true) 
	{
		 
		if (FIRE_xx2_OF_Node_4)
		{
			boolState[fail_OF_Node_4]  =  false;
			FIRE_xx2_OF_Node_4 = false;
		}
	}

	// Occurrence xx1_OF_Node_5
	if (boolState[fail_OF_Node_5] == false) 
	{
		 
		if (FIRE_xx1_OF_Node_5)
		{
			boolState[fail_OF_Node_5]  =  true;
			FIRE_xx1_OF_Node_5 = false;
		}
	}

	// Occurrence xx2_OF_Node_5
	if (boolState[fail_OF_Node_5] == true) 
	{
		 
		if (FIRE_xx2_OF_Node_5)
		{
			boolState[fail_OF_Node_5]  =  false;
			FIRE_xx2_OF_Node_5 = false;
		}
	}

	// Occurrence xx1_OF_Node_6
	if (boolState[fail_OF_Node_6] == false) 
	{
		 
		if (FIRE_xx1_OF_Node_6)
		{
			boolState[fail_OF_Node_6]  =  true;
			FIRE_xx1_OF_Node_6 = false;
		}
	}

	// Occurrence xx2_OF_Node_6
	if (boolState[fail_OF_Node_6] == true) 
	{
		 
		if (FIRE_xx2_OF_Node_6)
		{
			boolState[fail_OF_Node_6]  =  false;
			FIRE_xx2_OF_Node_6 = false;
		}
	}

	// Occurrence xx1_OF_Node_7
	if (boolState[fail_OF_Node_7] == false) 
	{
		 
		if (FIRE_xx1_OF_Node_7)
		{
			boolState[fail_OF_Node_7]  =  true;
			FIRE_xx1_OF_Node_7 = false;
		}
	}

	// Occurrence xx2_OF_Node_7
	if (boolState[fail_OF_Node_7] == true) 
	{
		 
		if (FIRE_xx2_OF_Node_7)
		{
			boolState[fail_OF_Node_7]  =  false;
			FIRE_xx2_OF_Node_7 = false;
		}
	}

	// Occurrence xx1_OF_Source
	if (boolState[fail_OF_Source] == false) 
	{
		 
		if (FIRE_xx1_OF_Source)
		{
			boolState[fail_OF_Source]  =  true;
			FIRE_xx1_OF_Source = false;
		}
	}

	// Occurrence xx2_OF_Source
	if (boolState[fail_OF_Source] == true) 
	{
		 
		if (FIRE_xx2_OF_Source)
		{
			boolState[fail_OF_Source]  =  false;
			FIRE_xx2_OF_Source = false;
		}
	}

	// Occurrence xx1_OF_Target
	if (boolState[fail_OF_Target] == false) 
	{
		 
		if (FIRE_xx1_OF_Target)
		{
			boolState[fail_OF_Target]  =  true;
			FIRE_xx1_OF_Target = false;
		}
	}

	// Occurrence xx2_OF_Target
	if (boolState[fail_OF_Target] == true) 
	{
		 
		if (FIRE_xx2_OF_Target)
		{
			boolState[fail_OF_Target]  =  false;
			FIRE_xx2_OF_Target = false;
		}
	}

	// Occurrence xx3_OF_bidir_1
	if (boolState[interruption_OF_bidir_1] == false) 
	{
		 
		if (FIRE_xx3_OF_bidir_1)
		{
			boolState[interruption_OF_bidir_1]  =  true;
			FIRE_xx3_OF_bidir_1 = false;
		}
	}

	// Occurrence xx4_OF_bidir_1
	if (boolState[interruption_OF_bidir_1] == true) 
	{
		 
		if (FIRE_xx4_OF_bidir_1)
		{
			boolState[interruption_OF_bidir_1]  =  false;
			FIRE_xx4_OF_bidir_1 = false;
		}
	}

	// Occurrence xx3_OF_bidir_10
	if (boolState[interruption_OF_bidir_10] == false) 
	{
		 
		if (FIRE_xx3_OF_bidir_10)
		{
			boolState[interruption_OF_bidir_10]  =  true;
			FIRE_xx3_OF_bidir_10 = false;
		}
	}

	// Occurrence xx4_OF_bidir_10
	if (boolState[interruption_OF_bidir_10] == true) 
	{
		 
		if (FIRE_xx4_OF_bidir_10)
		{
			boolState[interruption_OF_bidir_10]  =  false;
			FIRE_xx4_OF_bidir_10 = false;
		}
	}

	// Occurrence xx3_OF_bidir_11
	if (boolState[interruption_OF_bidir_11] == false) 
	{
		 
		if (FIRE_xx3_OF_bidir_11)
		{
			boolState[interruption_OF_bidir_11]  =  true;
			FIRE_xx3_OF_bidir_11 = false;
		}
	}

	// Occurrence xx4_OF_bidir_11
	if (boolState[interruption_OF_bidir_11] == true) 
	{
		 
		if (FIRE_xx4_OF_bidir_11)
		{
			boolState[interruption_OF_bidir_11]  =  false;
			FIRE_xx4_OF_bidir_11 = false;
		}
	}

	// Occurrence xx3_OF_bidir_12
	if (boolState[interruption_OF_bidir_12] == false) 
	{
		 
		if (FIRE_xx3_OF_bidir_12)
		{
			boolState[interruption_OF_bidir_12]  =  true;
			FIRE_xx3_OF_bidir_12 = false;
		}
	}

	// Occurrence xx4_OF_bidir_12
	if (boolState[interruption_OF_bidir_12] == true) 
	{
		 
		if (FIRE_xx4_OF_bidir_12)
		{
			boolState[interruption_OF_bidir_12]  =  false;
			FIRE_xx4_OF_bidir_12 = false;
		}
	}

	// Occurrence xx3_OF_bidir_2
	if (boolState[interruption_OF_bidir_2] == false) 
	{
		 
		if (FIRE_xx3_OF_bidir_2)
		{
			boolState[interruption_OF_bidir_2]  =  true;
			FIRE_xx3_OF_bidir_2 = false;
		}
	}

	// Occurrence xx4_OF_bidir_2
	if (boolState[interruption_OF_bidir_2] == true) 
	{
		 
		if (FIRE_xx4_OF_bidir_2)
		{
			boolState[interruption_OF_bidir_2]  =  false;
			FIRE_xx4_OF_bidir_2 = false;
		}
	}

	// Occurrence xx3_OF_bidir_3
	if (boolState[interruption_OF_bidir_3] == false) 
	{
		 
		if (FIRE_xx3_OF_bidir_3)
		{
			boolState[interruption_OF_bidir_3]  =  true;
			FIRE_xx3_OF_bidir_3 = false;
		}
	}

	// Occurrence xx4_OF_bidir_3
	if (boolState[interruption_OF_bidir_3] == true) 
	{
		 
		if (FIRE_xx4_OF_bidir_3)
		{
			boolState[interruption_OF_bidir_3]  =  false;
			FIRE_xx4_OF_bidir_3 = false;
		}
	}

	// Occurrence xx3_OF_bidir_4
	if (boolState[interruption_OF_bidir_4] == false) 
	{
		 
		if (FIRE_xx3_OF_bidir_4)
		{
			boolState[interruption_OF_bidir_4]  =  true;
			FIRE_xx3_OF_bidir_4 = false;
		}
	}

	// Occurrence xx4_OF_bidir_4
	if (boolState[interruption_OF_bidir_4] == true) 
	{
		 
		if (FIRE_xx4_OF_bidir_4)
		{
			boolState[interruption_OF_bidir_4]  =  false;
			FIRE_xx4_OF_bidir_4 = false;
		}
	}

	// Occurrence xx3_OF_bidir_5
	if (boolState[interruption_OF_bidir_5] == false) 
	{
		 
		if (FIRE_xx3_OF_bidir_5)
		{
			boolState[interruption_OF_bidir_5]  =  true;
			FIRE_xx3_OF_bidir_5 = false;
		}
	}

	// Occurrence xx4_OF_bidir_5
	if (boolState[interruption_OF_bidir_5] == true) 
	{
		 
		if (FIRE_xx4_OF_bidir_5)
		{
			boolState[interruption_OF_bidir_5]  =  false;
			FIRE_xx4_OF_bidir_5 = false;
		}
	}

	// Occurrence xx3_OF_bidir_6
	if (boolState[interruption_OF_bidir_6] == false) 
	{
		 
		if (FIRE_xx3_OF_bidir_6)
		{
			boolState[interruption_OF_bidir_6]  =  true;
			FIRE_xx3_OF_bidir_6 = false;
		}
	}

	// Occurrence xx4_OF_bidir_6
	if (boolState[interruption_OF_bidir_6] == true) 
	{
		 
		if (FIRE_xx4_OF_bidir_6)
		{
			boolState[interruption_OF_bidir_6]  =  false;
			FIRE_xx4_OF_bidir_6 = false;
		}
	}

	// Occurrence xx3_OF_bidir_7
	if (boolState[interruption_OF_bidir_7] == false) 
	{
		 
		if (FIRE_xx3_OF_bidir_7)
		{
			boolState[interruption_OF_bidir_7]  =  true;
			FIRE_xx3_OF_bidir_7 = false;
		}
	}

	// Occurrence xx4_OF_bidir_7
	if (boolState[interruption_OF_bidir_7] == true) 
	{
		 
		if (FIRE_xx4_OF_bidir_7)
		{
			boolState[interruption_OF_bidir_7]  =  false;
			FIRE_xx4_OF_bidir_7 = false;
		}
	}

	// Occurrence xx3_OF_bidir_8
	if (boolState[interruption_OF_bidir_8] == false) 
	{
		 
		if (FIRE_xx3_OF_bidir_8)
		{
			boolState[interruption_OF_bidir_8]  =  true;
			FIRE_xx3_OF_bidir_8 = false;
		}
	}

	// Occurrence xx4_OF_bidir_8
	if (boolState[interruption_OF_bidir_8] == true) 
	{
		 
		if (FIRE_xx4_OF_bidir_8)
		{
			boolState[interruption_OF_bidir_8]  =  false;
			FIRE_xx4_OF_bidir_8 = false;
		}
	}

	// Occurrence xx3_OF_bidir_9
	if (boolState[interruption_OF_bidir_9] == false) 
	{
		 
		if (FIRE_xx3_OF_bidir_9)
		{
			boolState[interruption_OF_bidir_9]  =  true;
			FIRE_xx3_OF_bidir_9 = false;
		}
	}

	// Occurrence xx4_OF_bidir_9
	if (boolState[interruption_OF_bidir_9] == true) 
	{
		 
		if (FIRE_xx4_OF_bidir_9)
		{
			boolState[interruption_OF_bidir_9]  =  false;
			FIRE_xx4_OF_bidir_9 = false;
		}
	}

	// Occurrence xx3_OF_ud_1
	if (boolState[interruption_OF_ud_1] == false) 
	{
		 
		if (FIRE_xx3_OF_ud_1)
		{
			boolState[interruption_OF_ud_1]  =  true;
			FIRE_xx3_OF_ud_1 = false;
		}
	}

	// Occurrence xx4_OF_ud_1
	if (boolState[interruption_OF_ud_1] == true) 
	{
		 
		if (FIRE_xx4_OF_ud_1)
		{
			boolState[interruption_OF_ud_1]  =  false;
			FIRE_xx4_OF_ud_1 = false;
		}
	}

	// Occurrence xx3_OF_ud_2
	if (boolState[interruption_OF_ud_2] == false) 
	{
		 
		if (FIRE_xx3_OF_ud_2)
		{
			boolState[interruption_OF_ud_2]  =  true;
			FIRE_xx3_OF_ud_2 = false;
		}
	}

	// Occurrence xx4_OF_ud_2
	if (boolState[interruption_OF_ud_2] == true) 
	{
		 
		if (FIRE_xx4_OF_ud_2)
		{
			boolState[interruption_OF_ud_2]  =  false;
			FIRE_xx4_OF_ud_2 = false;
		}
	}

	// Occurrence xx3_OF_ud_3
	if (boolState[interruption_OF_ud_3] == false) 
	{
		 
		if (FIRE_xx3_OF_ud_3)
		{
			boolState[interruption_OF_ud_3]  =  true;
			FIRE_xx3_OF_ud_3 = false;
		}
	}

	// Occurrence xx4_OF_ud_3
	if (boolState[interruption_OF_ud_3] == true) 
	{
		 
		if (FIRE_xx4_OF_ud_3)
		{
			boolState[interruption_OF_ud_3]  =  false;
			FIRE_xx4_OF_ud_3 = false;
		}
	}

}

std::vector<std::tuple<int, double, std::string, int>> storm::figaro::FigaroProgram_figaro_Telecom::showFireableOccurrences()
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
     
	if (boolState[fail_OF_Node_1] == false)
	{
		//cout << "0 : xx1_OF_Node_1 : FAULT fail  DIST EXP (1e-05)  INDUCING boolState[fail_OF_Node_1]  =  TRUE" << endl;
		list.push_back(make_tuple(0, 1e-05, "EXP", 0));
	}
	if (boolState[fail_OF_Node_1] == true)
	{
		//cout << "1 : xx2_OF_Node_1 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[fail_OF_Node_1]  =  FALSE" << endl;
		list.push_back(make_tuple(1, 0.1, "EXP", 0));
	}
	if (boolState[fail_OF_Node_2] == false)
	{
		//cout << "2 : xx1_OF_Node_2 : FAULT fail  DIST EXP (1e-05)  INDUCING boolState[fail_OF_Node_2]  =  TRUE" << endl;
		list.push_back(make_tuple(2, 1e-05, "EXP", 0));
	}
	if (boolState[fail_OF_Node_2] == true)
	{
		//cout << "3 : xx2_OF_Node_2 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[fail_OF_Node_2]  =  FALSE" << endl;
		list.push_back(make_tuple(3, 0.1, "EXP", 0));
	}
	if (boolState[fail_OF_Node_3] == false)
	{
		//cout << "4 : xx1_OF_Node_3 : FAULT fail  DIST EXP (1e-05)  INDUCING boolState[fail_OF_Node_3]  =  TRUE" << endl;
		list.push_back(make_tuple(4, 1e-05, "EXP", 0));
	}
	if (boolState[fail_OF_Node_3] == true)
	{
		//cout << "5 : xx2_OF_Node_3 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[fail_OF_Node_3]  =  FALSE" << endl;
		list.push_back(make_tuple(5, 0.1, "EXP", 0));
	}
	if (boolState[fail_OF_Node_4] == false)
	{
		//cout << "6 : xx1_OF_Node_4 : FAULT fail  DIST EXP (1e-05)  INDUCING boolState[fail_OF_Node_4]  =  TRUE" << endl;
		list.push_back(make_tuple(6, 1e-05, "EXP", 0));
	}
	if (boolState[fail_OF_Node_4] == true)
	{
		//cout << "7 : xx2_OF_Node_4 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[fail_OF_Node_4]  =  FALSE" << endl;
		list.push_back(make_tuple(7, 0.1, "EXP", 0));
	}
	if (boolState[fail_OF_Node_5] == false)
	{
		//cout << "8 : xx1_OF_Node_5 : FAULT fail  DIST EXP (1e-05)  INDUCING boolState[fail_OF_Node_5]  =  TRUE" << endl;
		list.push_back(make_tuple(8, 1e-05, "EXP", 0));
	}
	if (boolState[fail_OF_Node_5] == true)
	{
		//cout << "9 : xx2_OF_Node_5 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[fail_OF_Node_5]  =  FALSE" << endl;
		list.push_back(make_tuple(9, 0.1, "EXP", 0));
	}
	if (boolState[fail_OF_Node_6] == false)
	{
		//cout << "10 : xx1_OF_Node_6 : FAULT fail  DIST EXP (1e-05)  INDUCING boolState[fail_OF_Node_6]  =  TRUE" << endl;
		list.push_back(make_tuple(10, 1e-05, "EXP", 0));
	}
	if (boolState[fail_OF_Node_6] == true)
	{
		//cout << "11 : xx2_OF_Node_6 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[fail_OF_Node_6]  =  FALSE" << endl;
		list.push_back(make_tuple(11, 0.1, "EXP", 0));
	}
	if (boolState[fail_OF_Node_7] == false)
	{
		//cout << "12 : xx1_OF_Node_7 : FAULT fail  DIST EXP (1e-05)  INDUCING boolState[fail_OF_Node_7]  =  TRUE" << endl;
		list.push_back(make_tuple(12, 1e-05, "EXP", 0));
	}
	if (boolState[fail_OF_Node_7] == true)
	{
		//cout << "13 : xx2_OF_Node_7 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[fail_OF_Node_7]  =  FALSE" << endl;
		list.push_back(make_tuple(13, 0.1, "EXP", 0));
	}
	if (boolState[fail_OF_Source] == false)
	{
		//cout << "14 : xx1_OF_Source : FAULT fail  DIST EXP (0)  INDUCING boolState[fail_OF_Source]  =  TRUE" << endl;
		list.push_back(make_tuple(14, 0, "EXP", 0));
	}
	if (boolState[fail_OF_Source] == true)
	{
		//cout << "15 : xx2_OF_Source : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[fail_OF_Source]  =  FALSE" << endl;
		list.push_back(make_tuple(15, 0.1, "EXP", 0));
	}
	if (boolState[fail_OF_Target] == false)
	{
		//cout << "16 : xx1_OF_Target : FAULT fail  DIST EXP (0)  INDUCING boolState[fail_OF_Target]  =  TRUE" << endl;
		list.push_back(make_tuple(16, 0, "EXP", 0));
	}
	if (boolState[fail_OF_Target] == true)
	{
		//cout << "17 : xx2_OF_Target : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[fail_OF_Target]  =  FALSE" << endl;
		list.push_back(make_tuple(17, 0.1, "EXP", 0));
	}
	if (boolState[interruption_OF_bidir_1] == false)
	{
		//cout << "18 : xx3_OF_bidir_1 : FAULT interruption  DIST EXP (1e-05)  INDUCING boolState[interruption_OF_bidir_1]  =  TRUE" << endl;
		list.push_back(make_tuple(18, 1e-05, "EXP", 0));
	}
	if (boolState[interruption_OF_bidir_1] == true)
	{
		//cout << "19 : xx4_OF_bidir_1 : REPAIR rep  DIST EXP (1)  INDUCING boolState[interruption_OF_bidir_1]  =  FALSE" << endl;
		list.push_back(make_tuple(19, 1, "EXP", 0));
	}
	if (boolState[interruption_OF_bidir_10] == false)
	{
		//cout << "20 : xx3_OF_bidir_10 : FAULT interruption  DIST EXP (1e-05)  INDUCING boolState[interruption_OF_bidir_10]  =  TRUE" << endl;
		list.push_back(make_tuple(20, 1e-05, "EXP", 0));
	}
	if (boolState[interruption_OF_bidir_10] == true)
	{
		//cout << "21 : xx4_OF_bidir_10 : REPAIR rep  DIST EXP (1)  INDUCING boolState[interruption_OF_bidir_10]  =  FALSE" << endl;
		list.push_back(make_tuple(21, 1, "EXP", 0));
	}
	if (boolState[interruption_OF_bidir_11] == false)
	{
		//cout << "22 : xx3_OF_bidir_11 : FAULT interruption  DIST EXP (1e-05)  INDUCING boolState[interruption_OF_bidir_11]  =  TRUE" << endl;
		list.push_back(make_tuple(22, 1e-05, "EXP", 0));
	}
	if (boolState[interruption_OF_bidir_11] == true)
	{
		//cout << "23 : xx4_OF_bidir_11 : REPAIR rep  DIST EXP (1)  INDUCING boolState[interruption_OF_bidir_11]  =  FALSE" << endl;
		list.push_back(make_tuple(23, 1, "EXP", 0));
	}
	if (boolState[interruption_OF_bidir_12] == false)
	{
		//cout << "24 : xx3_OF_bidir_12 : FAULT interruption  DIST EXP (1e-05)  INDUCING boolState[interruption_OF_bidir_12]  =  TRUE" << endl;
		list.push_back(make_tuple(24, 1e-05, "EXP", 0));
	}
	if (boolState[interruption_OF_bidir_12] == true)
	{
		//cout << "25 : xx4_OF_bidir_12 : REPAIR rep  DIST EXP (1)  INDUCING boolState[interruption_OF_bidir_12]  =  FALSE" << endl;
		list.push_back(make_tuple(25, 1, "EXP", 0));
	}
	if (boolState[interruption_OF_bidir_2] == false)
	{
		//cout << "26 : xx3_OF_bidir_2 : FAULT interruption  DIST EXP (1e-05)  INDUCING boolState[interruption_OF_bidir_2]  =  TRUE" << endl;
		list.push_back(make_tuple(26, 1e-05, "EXP", 0));
	}
	if (boolState[interruption_OF_bidir_2] == true)
	{
		//cout << "27 : xx4_OF_bidir_2 : REPAIR rep  DIST EXP (1)  INDUCING boolState[interruption_OF_bidir_2]  =  FALSE" << endl;
		list.push_back(make_tuple(27, 1, "EXP", 0));
	}
	if (boolState[interruption_OF_bidir_3] == false)
	{
		//cout << "28 : xx3_OF_bidir_3 : FAULT interruption  DIST EXP (1e-05)  INDUCING boolState[interruption_OF_bidir_3]  =  TRUE" << endl;
		list.push_back(make_tuple(28, 1e-05, "EXP", 0));
	}
	if (boolState[interruption_OF_bidir_3] == true)
	{
		//cout << "29 : xx4_OF_bidir_3 : REPAIR rep  DIST EXP (1)  INDUCING boolState[interruption_OF_bidir_3]  =  FALSE" << endl;
		list.push_back(make_tuple(29, 1, "EXP", 0));
	}
	if (boolState[interruption_OF_bidir_4] == false)
	{
		//cout << "30 : xx3_OF_bidir_4 : FAULT interruption  DIST EXP (1e-05)  INDUCING boolState[interruption_OF_bidir_4]  =  TRUE" << endl;
		list.push_back(make_tuple(30, 1e-05, "EXP", 0));
	}
	if (boolState[interruption_OF_bidir_4] == true)
	{
		//cout << "31 : xx4_OF_bidir_4 : REPAIR rep  DIST EXP (1)  INDUCING boolState[interruption_OF_bidir_4]  =  FALSE" << endl;
		list.push_back(make_tuple(31, 1, "EXP", 0));
	}
	if (boolState[interruption_OF_bidir_5] == false)
	{
		//cout << "32 : xx3_OF_bidir_5 : FAULT interruption  DIST EXP (1e-05)  INDUCING boolState[interruption_OF_bidir_5]  =  TRUE" << endl;
		list.push_back(make_tuple(32, 1e-05, "EXP", 0));
	}
	if (boolState[interruption_OF_bidir_5] == true)
	{
		//cout << "33 : xx4_OF_bidir_5 : REPAIR rep  DIST EXP (1)  INDUCING boolState[interruption_OF_bidir_5]  =  FALSE" << endl;
		list.push_back(make_tuple(33, 1, "EXP", 0));
	}
	if (boolState[interruption_OF_bidir_6] == false)
	{
		//cout << "34 : xx3_OF_bidir_6 : FAULT interruption  DIST EXP (1e-05)  INDUCING boolState[interruption_OF_bidir_6]  =  TRUE" << endl;
		list.push_back(make_tuple(34, 1e-05, "EXP", 0));
	}
	if (boolState[interruption_OF_bidir_6] == true)
	{
		//cout << "35 : xx4_OF_bidir_6 : REPAIR rep  DIST EXP (1)  INDUCING boolState[interruption_OF_bidir_6]  =  FALSE" << endl;
		list.push_back(make_tuple(35, 1, "EXP", 0));
	}
	if (boolState[interruption_OF_bidir_7] == false)
	{
		//cout << "36 : xx3_OF_bidir_7 : FAULT interruption  DIST EXP (1e-05)  INDUCING boolState[interruption_OF_bidir_7]  =  TRUE" << endl;
		list.push_back(make_tuple(36, 1e-05, "EXP", 0));
	}
	if (boolState[interruption_OF_bidir_7] == true)
	{
		//cout << "37 : xx4_OF_bidir_7 : REPAIR rep  DIST EXP (1)  INDUCING boolState[interruption_OF_bidir_7]  =  FALSE" << endl;
		list.push_back(make_tuple(37, 1, "EXP", 0));
	}
	if (boolState[interruption_OF_bidir_8] == false)
	{
		//cout << "38 : xx3_OF_bidir_8 : FAULT interruption  DIST EXP (1e-05)  INDUCING boolState[interruption_OF_bidir_8]  =  TRUE" << endl;
		list.push_back(make_tuple(38, 1e-05, "EXP", 0));
	}
	if (boolState[interruption_OF_bidir_8] == true)
	{
		//cout << "39 : xx4_OF_bidir_8 : REPAIR rep  DIST EXP (1)  INDUCING boolState[interruption_OF_bidir_8]  =  FALSE" << endl;
		list.push_back(make_tuple(39, 1, "EXP", 0));
	}
	if (boolState[interruption_OF_bidir_9] == false)
	{
		//cout << "40 : xx3_OF_bidir_9 : FAULT interruption  DIST EXP (1e-05)  INDUCING boolState[interruption_OF_bidir_9]  =  TRUE" << endl;
		list.push_back(make_tuple(40, 1e-05, "EXP", 0));
	}
	if (boolState[interruption_OF_bidir_9] == true)
	{
		//cout << "41 : xx4_OF_bidir_9 : REPAIR rep  DIST EXP (1)  INDUCING boolState[interruption_OF_bidir_9]  =  FALSE" << endl;
		list.push_back(make_tuple(41, 1, "EXP", 0));
	}
	if (boolState[interruption_OF_ud_1] == false)
	{
		//cout << "42 : xx3_OF_ud_1 : FAULT interruption  DIST EXP (1e-05)  INDUCING boolState[interruption_OF_ud_1]  =  TRUE" << endl;
		list.push_back(make_tuple(42, 1e-05, "EXP", 0));
	}
	if (boolState[interruption_OF_ud_1] == true)
	{
		//cout << "43 : xx4_OF_ud_1 : REPAIR rep  DIST EXP (1)  INDUCING boolState[interruption_OF_ud_1]  =  FALSE" << endl;
		list.push_back(make_tuple(43, 1, "EXP", 0));
	}
	if (boolState[interruption_OF_ud_2] == false)
	{
		//cout << "44 : xx3_OF_ud_2 : FAULT interruption  DIST EXP (1e-05)  INDUCING boolState[interruption_OF_ud_2]  =  TRUE" << endl;
		list.push_back(make_tuple(44, 1e-05, "EXP", 0));
	}
	if (boolState[interruption_OF_ud_2] == true)
	{
		//cout << "45 : xx4_OF_ud_2 : REPAIR rep  DIST EXP (1)  INDUCING boolState[interruption_OF_ud_2]  =  FALSE" << endl;
		list.push_back(make_tuple(45, 1, "EXP", 0));
	}
	if (boolState[interruption_OF_ud_3] == false)
	{
		//cout << "46 : xx3_OF_ud_3 : FAULT interruption  DIST EXP (1e-05)  INDUCING boolState[interruption_OF_ud_3]  =  TRUE" << endl;
		list.push_back(make_tuple(46, 1e-05, "EXP", 0));
	}
	if (boolState[interruption_OF_ud_3] == true)
	{
		//cout << "47 : xx4_OF_ud_3 : REPAIR rep  DIST EXP (1)  INDUCING boolState[interruption_OF_ud_3]  =  FALSE" << endl;
		list.push_back(make_tuple(47, 1, "EXP", 0));
	}
	return list;
}


void storm::figaro::FigaroProgram_figaro_Telecom::runOnceInteractionStep_default_step()
{


	intState[nb_failures_OF_Failure_counter]  =  ((((((((( boolState[fail_OF_Node_1]  +   boolState[fail_OF_Node_2])  +   boolState[fail_OF_Node_3])  +   boolState[fail_OF_Node_4])  +   boolState[fail_OF_Node_5])  +   boolState[fail_OF_Node_6])  +   boolState[fail_OF_Node_7])  +   boolState[fail_OF_Source])  +   boolState[fail_OF_Target])  +  (((((((((((((  ( boolState[interruption_OF_bidir_1]  +   boolState[interruption_OF_bidir_10])  +    boolState[interruption_OF_bidir_11])  +   boolState[interruption_OF_bidir_12])  +    boolState[interruption_OF_bidir_2])  +   boolState[interruption_OF_bidir_3])  +    boolState[interruption_OF_bidir_4])  +   boolState[interruption_OF_bidir_5])  +    boolState[interruption_OF_bidir_6])  +   boolState[interruption_OF_bidir_7])  +    boolState[interruption_OF_bidir_8])  +   boolState[interruption_OF_bidir_9])  +    boolState[interruption_OF_ud_1])  +   boolState[interruption_OF_ud_2])  +    boolState[interruption_OF_ud_3]))  ;

	if (boolState[fail_OF_Source] == false )
	{
		boolState[connected_OF_Source]  =  true;
	}

	if (((boolState[interruption_OF_bidir_1] == false) && ((boolState[fail_OF_Node_1] ==  false) && (boolState[fail_OF_Node_2] == false))) && (boolState[connected_OF_Node_1] || boolState[connected_OF_Node_2]) )
	{
		boolState[connected_OF_Node_1]  =  true;
		  boolState[connected_OF_Node_2]  =  true;
	}

	if (((boolState[interruption_OF_bidir_10] == false) && ((boolState[fail_OF_Node_4] ==  false) && (boolState[fail_OF_Node_6] == false))) && (boolState[connected_OF_Node_4] || boolState[connected_OF_Node_6]) )
	{
		boolState[connected_OF_Node_4]  =  true;
		  boolState[connected_OF_Node_6]  =  true;
	}

	if (((boolState[interruption_OF_bidir_11] == false) && ((boolState[fail_OF_Node_4] ==  false) && (boolState[fail_OF_Node_5] == false))) && (boolState[connected_OF_Node_4] || boolState[connected_OF_Node_5]) )
	{
		boolState[connected_OF_Node_4]  =  true;
		  boolState[connected_OF_Node_5]  =  true;
	}

	if (((boolState[interruption_OF_bidir_12] == false) && ((boolState[fail_OF_Node_6] ==  false) && (boolState[fail_OF_Target] == false))) && (boolState[connected_OF_Node_6] || boolState[connected_OF_Target]) )
	{
		boolState[connected_OF_Node_6]  =  true;
		  boolState[connected_OF_Target]  =  true;
	}

	if (((boolState[interruption_OF_bidir_2] == false) && ((boolState[fail_OF_Node_2] ==  false) && (boolState[fail_OF_Source] == false))) && (boolState[connected_OF_Node_2] || boolState[connected_OF_Source]) )
	{
		boolState[connected_OF_Node_2]  =  true;
		  boolState[connected_OF_Source]  =  true;
	}

	if (((boolState[interruption_OF_bidir_3] == false) && ((boolState[fail_OF_Node_2] ==  false) && (boolState[fail_OF_Node_7] == false))) && (boolState[connected_OF_Node_2] || boolState[connected_OF_Node_7]) )
	{
		boolState[connected_OF_Node_2]  =  true;
		  boolState[connected_OF_Node_7]  =  true;
	}

	if (((boolState[interruption_OF_bidir_4] == false) && ((boolState[fail_OF_Node_3] ==  false) && (boolState[fail_OF_Node_7] == false))) && (boolState[connected_OF_Node_3] || boolState[connected_OF_Node_7]) )
	{
		boolState[connected_OF_Node_3]  =  true;
		  boolState[connected_OF_Node_7]  =  true;
	}

	if (((boolState[interruption_OF_bidir_5] == false) && ((boolState[fail_OF_Node_2] ==  false) && (boolState[fail_OF_Node_3] == false))) && (boolState[connected_OF_Node_2] || boolState[connected_OF_Node_3]) )
	{
		boolState[connected_OF_Node_2]  =  true;
		  boolState[connected_OF_Node_3]  =  true;
	}

	if (((boolState[interruption_OF_bidir_6] == false) && ((boolState[fail_OF_Node_1] ==  false) && (boolState[fail_OF_Node_5] == false))) && (boolState[connected_OF_Node_1] || boolState[connected_OF_Node_5]) )
	{
		boolState[connected_OF_Node_1]  =  true;
		  boolState[connected_OF_Node_5]  =  true;
	}

	if (((boolState[interruption_OF_bidir_7] == false) && ((boolState[fail_OF_Node_7] ==  false) && (boolState[fail_OF_Target] == false))) && (boolState[connected_OF_Node_7] || boolState[connected_OF_Target]) )
	{
		boolState[connected_OF_Node_7]  =  true;
		  boolState[connected_OF_Target]  =  true;
	}

	if (((boolState[interruption_OF_bidir_8] == false) && ((boolState[fail_OF_Node_3] ==  false) && (boolState[fail_OF_Node_4] == false))) && (boolState[connected_OF_Node_3] || boolState[connected_OF_Node_4]) )
	{
		boolState[connected_OF_Node_3]  =  true;
		  boolState[connected_OF_Node_4]  =  true;
	}

	if (((boolState[interruption_OF_bidir_9] == false) && ((boolState[fail_OF_Node_4] ==  false) && (boolState[fail_OF_Target] == false))) && (boolState[connected_OF_Node_4] || boolState[connected_OF_Target]) )
	{
		boolState[connected_OF_Node_4]  =  true;
		  boolState[connected_OF_Target]  =  true;
	}

	if (((boolState[interruption_OF_ud_1] == false) && boolState[connected_OF_Source]) && (boolState[fail_OF_Node_1] == false) )
	{
		boolState[connected_OF_Node_1]  =  true;
	}

	if (((boolState[interruption_OF_ud_2] == false) && boolState[connected_OF_Node_1]) && (boolState[fail_OF_Node_3] == false) )
	{
		boolState[connected_OF_Node_3]  =  true;
	}

	if (((boolState[interruption_OF_ud_3] == false) && boolState[connected_OF_Node_5]) && (boolState[fail_OF_Node_6] == false) )
	{
		boolState[connected_OF_Node_6]  =  true;
	}

}

void
storm::figaro::FigaroProgram_figaro_Telecom::runInteractions() {
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
		runOnceInteractionStep_default_step();

		comparator = compareStates();
            counter++;

        } while (comparator > 0 && counter < max_interactions_loop);
        if (comparator <= 0)
        {
            //cout << "==> Stabilisation of interactions at loop #" << counter << " for runInteractionStep_default_step() ." << endl;
        }
        else {
            //cout << "==> Maximum of interactions loop  reached : #" << counter <<" for runOnceInteractionStep_default_step()." << endl;
        }
         
        // ------------------- Handling of FailureState element --------------------------------
    
	boolFailureState[exp0] = (  !boolState[connected_OF_Target] );
        //cout << endl;
    }void storm::figaro::FigaroProgram_figaro_Telecom::printstatetuple(){

                std::cout<<"\n State information: (";
                for (int i=0; i<boolFailureState.size(); i++)
                    {
                    std::cout<<boolFailureState.at(i);
                    }
                std::cout<<")";

            }
        int_fast64_t storm::figaro::FigaroProgram_figaro_Telecom::stateSize() const{
            return numBoolState;
}
        void storm::figaro::FigaroProgram_figaro_Telecom::fireinsttransitiongroup(std::string user_input_ins)

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
    