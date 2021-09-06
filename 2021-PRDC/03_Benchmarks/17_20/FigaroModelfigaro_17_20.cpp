#include <iostream>
#include "FigaroModelfigaro_17_20.h"

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
        
void storm::figaro::FigaroProgram_figaro_17_20::init()
{
	//cout <<">>>>>>>>>>>>>>>>>>>> Initialization of variables <<<<<<<<<<<<<<<<<<<<<<<" << endl;

	REINITIALISATION_OF_required_OF_UE_1 = true;
	boolState[already_S_OF_UE_1] = false;
	REINITIALISATION_OF_S_OF_UE_1 = false;
	REINITIALISATION_OF_relevant_evt_OF_UE_1 = false;
	REINITIALISATION_OF_required_OF_a1 = true;
	boolState[already_S_OF_a1] = false;
	REINITIALISATION_OF_S_OF_a1 = false;
	REINITIALISATION_OF_relevant_evt_OF_a1 = false;
	boolState[failF_OF_a1] = false;
	REINITIALISATION_OF_required_OF_a10 = true;
	boolState[already_S_OF_a10] = false;
	REINITIALISATION_OF_S_OF_a10 = false;
	REINITIALISATION_OF_relevant_evt_OF_a10 = false;
	REINITIALISATION_OF_required_OF_a2 = true;
	boolState[already_S_OF_a2] = false;
	REINITIALISATION_OF_S_OF_a2 = false;
	REINITIALISATION_OF_relevant_evt_OF_a2 = false;
	boolState[failF_OF_a2] = false;
	REINITIALISATION_OF_required_OF_a3 = true;
	boolState[already_S_OF_a3] = false;
	REINITIALISATION_OF_S_OF_a3 = false;
	REINITIALISATION_OF_relevant_evt_OF_a3 = false;
	boolState[failF_OF_a3] = false;
	REINITIALISATION_OF_required_OF_a4 = true;
	boolState[already_S_OF_a4] = false;
	REINITIALISATION_OF_S_OF_a4 = false;
	REINITIALISATION_OF_relevant_evt_OF_a4 = false;
	boolState[failF_OF_a4] = false;
	REINITIALISATION_OF_required_OF_a5 = true;
	boolState[already_S_OF_a5] = false;
	REINITIALISATION_OF_S_OF_a5 = false;
	REINITIALISATION_OF_relevant_evt_OF_a5 = false;
	REINITIALISATION_OF_required_OF_a6 = true;
	boolState[already_S_OF_a6] = false;
	REINITIALISATION_OF_S_OF_a6 = false;
	REINITIALISATION_OF_relevant_evt_OF_a6 = false;
	REINITIALISATION_OF_required_OF_a7 = true;
	boolState[already_S_OF_a7] = false;
	REINITIALISATION_OF_S_OF_a7 = false;
	REINITIALISATION_OF_relevant_evt_OF_a7 = false;
	boolState[failF_OF_a7] = false;
	REINITIALISATION_OF_required_OF_a8 = true;
	boolState[already_S_OF_a8] = false;
	REINITIALISATION_OF_S_OF_a8 = false;
	REINITIALISATION_OF_relevant_evt_OF_a8 = false;
	REINITIALISATION_OF_required_OF_a9 = true;
	boolState[already_S_OF_a9] = false;
	REINITIALISATION_OF_S_OF_a9 = false;
	REINITIALISATION_OF_relevant_evt_OF_a9 = false;
	boolState[group_loss_OF_a9] = false;
	intState[nb_OK_OF_a9] = 8;
	intState[nb_being_repaired_OF_a9] = 0;

	/* ---------- DECLARATION OF OCCURRENCE RULES FIRING FLAGS ------------ */
	FIRE_xx10_OF_a1 = false;
	FIRE_xx11_OF_a1 = false;
	FIRE_xx10_OF_a2 = false;
	FIRE_xx11_OF_a2 = false;
	FIRE_xx10_OF_a3 = false;
	FIRE_xx11_OF_a3 = false;
	FIRE_xx10_OF_a4 = false;
	FIRE_xx11_OF_a4 = false;
	FIRE_xx10_OF_a7 = false;
	FIRE_xx11_OF_a7 = false;
	FIRE_xx15_OF_a9 = false;
	FIRE_xx16_OF_a9 = false;

}

void storm::figaro::FigaroProgram_figaro_17_20::saveCurrentState()
{
	// cout <<">>>>>>>>>>>>>>>>>>>> Saving current state  <<<<<<<<<<<<<<<<<<<<<<<" << endl;
	backupBoolState = boolState ;
	backupFloatState = floatState ;
	backupIntState = intState ;
	backupEnumState = enumState ;
}

int storm::figaro::FigaroProgram_figaro_17_20::compareStates()
{
	// cout <<">>>>>>>>>>>>>>>>>>>> Comparing state with previous one (return number of differences) <<<<<<<<<<<<<<<<<<<<<<<" << endl;

	return (backupBoolState != boolState) + (backupFloatState != floatState) + (backupIntState != intState) + (backupEnumState != enumState); 
}

void storm::figaro::FigaroProgram_figaro_17_20::printState()
{
	//cout <<"\n==================== Print of the current state :  ====================" << endl;

	//cout << "Attribute :  boolState[required_OF_UE_1] | Value : " << boolState[required_OF_UE_1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_UE_1] | Value : " << boolState[already_S_OF_UE_1] << endl;
	//cout << "Attribute :  boolState[S_OF_UE_1] | Value : " << boolState[S_OF_UE_1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_UE_1] | Value : " << boolState[relevant_evt_OF_UE_1] << endl;
	//cout << "Attribute :  boolState[required_OF_a1] | Value : " << boolState[required_OF_a1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_a1] | Value : " << boolState[already_S_OF_a1] << endl;
	//cout << "Attribute :  boolState[S_OF_a1] | Value : " << boolState[S_OF_a1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_a1] | Value : " << boolState[relevant_evt_OF_a1] << endl;
	//cout << "Attribute :  boolState[failF_OF_a1] | Value : " << boolState[failF_OF_a1] << endl;
	//cout << "Attribute :  boolState[required_OF_a10] | Value : " << boolState[required_OF_a10] << endl;
	//cout << "Attribute :  boolState[already_S_OF_a10] | Value : " << boolState[already_S_OF_a10] << endl;
	//cout << "Attribute :  boolState[S_OF_a10] | Value : " << boolState[S_OF_a10] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_a10] | Value : " << boolState[relevant_evt_OF_a10] << endl;
	//cout << "Attribute :  boolState[required_OF_a2] | Value : " << boolState[required_OF_a2] << endl;
	//cout << "Attribute :  boolState[already_S_OF_a2] | Value : " << boolState[already_S_OF_a2] << endl;
	//cout << "Attribute :  boolState[S_OF_a2] | Value : " << boolState[S_OF_a2] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_a2] | Value : " << boolState[relevant_evt_OF_a2] << endl;
	//cout << "Attribute :  boolState[failF_OF_a2] | Value : " << boolState[failF_OF_a2] << endl;
	//cout << "Attribute :  boolState[required_OF_a3] | Value : " << boolState[required_OF_a3] << endl;
	//cout << "Attribute :  boolState[already_S_OF_a3] | Value : " << boolState[already_S_OF_a3] << endl;
	//cout << "Attribute :  boolState[S_OF_a3] | Value : " << boolState[S_OF_a3] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_a3] | Value : " << boolState[relevant_evt_OF_a3] << endl;
	//cout << "Attribute :  boolState[failF_OF_a3] | Value : " << boolState[failF_OF_a3] << endl;
	//cout << "Attribute :  boolState[required_OF_a4] | Value : " << boolState[required_OF_a4] << endl;
	//cout << "Attribute :  boolState[already_S_OF_a4] | Value : " << boolState[already_S_OF_a4] << endl;
	//cout << "Attribute :  boolState[S_OF_a4] | Value : " << boolState[S_OF_a4] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_a4] | Value : " << boolState[relevant_evt_OF_a4] << endl;
	//cout << "Attribute :  boolState[failF_OF_a4] | Value : " << boolState[failF_OF_a4] << endl;
	//cout << "Attribute :  boolState[required_OF_a5] | Value : " << boolState[required_OF_a5] << endl;
	//cout << "Attribute :  boolState[already_S_OF_a5] | Value : " << boolState[already_S_OF_a5] << endl;
	//cout << "Attribute :  boolState[S_OF_a5] | Value : " << boolState[S_OF_a5] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_a5] | Value : " << boolState[relevant_evt_OF_a5] << endl;
	//cout << "Attribute :  boolState[required_OF_a6] | Value : " << boolState[required_OF_a6] << endl;
	//cout << "Attribute :  boolState[already_S_OF_a6] | Value : " << boolState[already_S_OF_a6] << endl;
	//cout << "Attribute :  boolState[S_OF_a6] | Value : " << boolState[S_OF_a6] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_a6] | Value : " << boolState[relevant_evt_OF_a6] << endl;
	//cout << "Attribute :  boolState[required_OF_a7] | Value : " << boolState[required_OF_a7] << endl;
	//cout << "Attribute :  boolState[already_S_OF_a7] | Value : " << boolState[already_S_OF_a7] << endl;
	//cout << "Attribute :  boolState[S_OF_a7] | Value : " << boolState[S_OF_a7] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_a7] | Value : " << boolState[relevant_evt_OF_a7] << endl;
	//cout << "Attribute :  boolState[failF_OF_a7] | Value : " << boolState[failF_OF_a7] << endl;
	//cout << "Attribute :  boolState[required_OF_a8] | Value : " << boolState[required_OF_a8] << endl;
	//cout << "Attribute :  boolState[already_S_OF_a8] | Value : " << boolState[already_S_OF_a8] << endl;
	//cout << "Attribute :  boolState[S_OF_a8] | Value : " << boolState[S_OF_a8] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_a8] | Value : " << boolState[relevant_evt_OF_a8] << endl;
	//cout << "Attribute :  boolState[required_OF_a9] | Value : " << boolState[required_OF_a9] << endl;
	//cout << "Attribute :  boolState[already_S_OF_a9] | Value : " << boolState[already_S_OF_a9] << endl;
	//cout << "Attribute :  boolState[S_OF_a9] | Value : " << boolState[S_OF_a9] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_a9] | Value : " << boolState[relevant_evt_OF_a9] << endl;
	//cout << "Attribute :  boolState[group_loss_OF_a9] | Value : " << boolState[group_loss_OF_a9] << endl;
	//cout << "Attribute :  intState[nb_OK_OF_a9] | Value : " << intState[nb_OK_OF_a9] << endl;
	//cout << "Attribute :  intState[nb_being_repaired_OF_a9] | Value : " << intState[nb_being_repaired_OF_a9] << endl;
}

bool storm::figaro::FigaroProgram_figaro_17_20::figaromodelhasinstransitions()
{
	return false;
}
void storm::figaro::FigaroProgram_figaro_17_20::doReinitialisations()
{
	boolState[required_OF_UE_1] = REINITIALISATION_OF_required_OF_UE_1;
	boolState[S_OF_UE_1] = REINITIALISATION_OF_S_OF_UE_1;
	boolState[relevant_evt_OF_UE_1] = REINITIALISATION_OF_relevant_evt_OF_UE_1;
	boolState[required_OF_a1] = REINITIALISATION_OF_required_OF_a1;
	boolState[S_OF_a1] = REINITIALISATION_OF_S_OF_a1;
	boolState[relevant_evt_OF_a1] = REINITIALISATION_OF_relevant_evt_OF_a1;
	boolState[required_OF_a10] = REINITIALISATION_OF_required_OF_a10;
	boolState[S_OF_a10] = REINITIALISATION_OF_S_OF_a10;
	boolState[relevant_evt_OF_a10] = REINITIALISATION_OF_relevant_evt_OF_a10;
	boolState[required_OF_a2] = REINITIALISATION_OF_required_OF_a2;
	boolState[S_OF_a2] = REINITIALISATION_OF_S_OF_a2;
	boolState[relevant_evt_OF_a2] = REINITIALISATION_OF_relevant_evt_OF_a2;
	boolState[required_OF_a3] = REINITIALISATION_OF_required_OF_a3;
	boolState[S_OF_a3] = REINITIALISATION_OF_S_OF_a3;
	boolState[relevant_evt_OF_a3] = REINITIALISATION_OF_relevant_evt_OF_a3;
	boolState[required_OF_a4] = REINITIALISATION_OF_required_OF_a4;
	boolState[S_OF_a4] = REINITIALISATION_OF_S_OF_a4;
	boolState[relevant_evt_OF_a4] = REINITIALISATION_OF_relevant_evt_OF_a4;
	boolState[required_OF_a5] = REINITIALISATION_OF_required_OF_a5;
	boolState[S_OF_a5] = REINITIALISATION_OF_S_OF_a5;
	boolState[relevant_evt_OF_a5] = REINITIALISATION_OF_relevant_evt_OF_a5;
	boolState[required_OF_a6] = REINITIALISATION_OF_required_OF_a6;
	boolState[S_OF_a6] = REINITIALISATION_OF_S_OF_a6;
	boolState[relevant_evt_OF_a6] = REINITIALISATION_OF_relevant_evt_OF_a6;
	boolState[required_OF_a7] = REINITIALISATION_OF_required_OF_a7;
	boolState[S_OF_a7] = REINITIALISATION_OF_S_OF_a7;
	boolState[relevant_evt_OF_a7] = REINITIALISATION_OF_relevant_evt_OF_a7;
	boolState[required_OF_a8] = REINITIALISATION_OF_required_OF_a8;
	boolState[S_OF_a8] = REINITIALISATION_OF_S_OF_a8;
	boolState[relevant_evt_OF_a8] = REINITIALISATION_OF_relevant_evt_OF_a8;
	boolState[required_OF_a9] = REINITIALISATION_OF_required_OF_a9;
	boolState[S_OF_a9] = REINITIALISATION_OF_S_OF_a9;
	boolState[relevant_evt_OF_a9] = REINITIALISATION_OF_relevant_evt_OF_a9;
}

void storm::figaro::FigaroProgram_figaro_17_20::fireOccurrence(int numFire)
{
	//cout <<">>>>>>>>>>>>>>>>>>>> Fire of occurrence #" << numFire << " <<<<<<<<<<<<<<<<<<<<<<<" << endl;

	if (numFire == 0)
	{
		FIRE_xx10_OF_a1 = true;
	}

	if (numFire == 1)
	{
		FIRE_xx11_OF_a1 = true;
	}

	if (numFire == 2)
	{
		FIRE_xx10_OF_a2 = true;
	}

	if (numFire == 3)
	{
		FIRE_xx11_OF_a2 = true;
	}

	if (numFire == 4)
	{
		FIRE_xx10_OF_a3 = true;
	}

	if (numFire == 5)
	{
		FIRE_xx11_OF_a3 = true;
	}

	if (numFire == 6)
	{
		FIRE_xx10_OF_a4 = true;
	}

	if (numFire == 7)
	{
		FIRE_xx11_OF_a4 = true;
	}

	if (numFire == 8)
	{
		FIRE_xx10_OF_a7 = true;
	}

	if (numFire == 9)
	{
		FIRE_xx11_OF_a7 = true;
	}

	if (numFire == 10)
	{
		FIRE_xx15_OF_a9 = true;
	}

	if (numFire == 11)
	{
		FIRE_xx16_OF_a9 = true;
	}

/* ---------- DECLARATION OF OCCURRENCE RULES------------ */

	// Occurrence xx10_OF_a1
	if ((boolState[failF_OF_a1] == false) && boolState[required_OF_a1]) 
	{
		 
		if (FIRE_xx10_OF_a1)
		{
			boolState[failF_OF_a1]  =  true;
			FIRE_xx10_OF_a1 = false;
		}
	}

	// Occurrence xx11_OF_a1
	if (boolState[failF_OF_a1] == true) 
	{
		 
		if (FIRE_xx11_OF_a1)
		{
			boolState[failF_OF_a1]  =  false;
			FIRE_xx11_OF_a1 = false;
		}
	}

	// Occurrence xx10_OF_a2
	if ((boolState[failF_OF_a2] == false) && boolState[required_OF_a2]) 
	{
		 
		if (FIRE_xx10_OF_a2)
		{
			boolState[failF_OF_a2]  =  true;
			FIRE_xx10_OF_a2 = false;
		}
	}

	// Occurrence xx11_OF_a2
	if (boolState[failF_OF_a2] == true) 
	{
		 
		if (FIRE_xx11_OF_a2)
		{
			boolState[failF_OF_a2]  =  false;
			FIRE_xx11_OF_a2 = false;
		}
	}

	// Occurrence xx10_OF_a3
	if ((boolState[failF_OF_a3] == false) && boolState[required_OF_a3]) 
	{
		 
		if (FIRE_xx10_OF_a3)
		{
			boolState[failF_OF_a3]  =  true;
			FIRE_xx10_OF_a3 = false;
		}
	}

	// Occurrence xx11_OF_a3
	if (boolState[failF_OF_a3] == true) 
	{
		 
		if (FIRE_xx11_OF_a3)
		{
			boolState[failF_OF_a3]  =  false;
			FIRE_xx11_OF_a3 = false;
		}
	}

	// Occurrence xx10_OF_a4
	if ((boolState[failF_OF_a4] == false) && boolState[required_OF_a4]) 
	{
		 
		if (FIRE_xx10_OF_a4)
		{
			boolState[failF_OF_a4]  =  true;
			FIRE_xx10_OF_a4 = false;
		}
	}

	// Occurrence xx11_OF_a4
	if (boolState[failF_OF_a4] == true) 
	{
		 
		if (FIRE_xx11_OF_a4)
		{
			boolState[failF_OF_a4]  =  false;
			FIRE_xx11_OF_a4 = false;
		}
	}

	// Occurrence xx10_OF_a7
	if ((boolState[failF_OF_a7] == false) && boolState[required_OF_a7]) 
	{
		 
		if (FIRE_xx10_OF_a7)
		{
			boolState[failF_OF_a7]  =  true;
			FIRE_xx10_OF_a7 = false;
		}
	}

	// Occurrence xx11_OF_a7
	if (boolState[failF_OF_a7] == true) 
	{
		 
		if (FIRE_xx11_OF_a7)
		{
			boolState[failF_OF_a7]  =  false;
			FIRE_xx11_OF_a7 = false;
		}
	}

	// Occurrence xx15_OF_a9
	if ((intState[nb_OK_OF_a9] > 0) && boolState[required_OF_a9]) 
	{
		 
		if (FIRE_xx15_OF_a9)
		{
			intState[nb_OK_OF_a9]  =  (intState[nb_OK_OF_a9] - 1);
			FIRE_xx15_OF_a9 = false;
		}
	}

	// Occurrence xx16_OF_a9
	if ((intState[nb_OK_OF_a9] < 8) && (intState[nb_being_repaired_OF_a9] > 0)) 
	{
		 
		if (FIRE_xx16_OF_a9)
		{
			intState[nb_OK_OF_a9]  =  (intState[nb_OK_OF_a9] + 1);
			FIRE_xx16_OF_a9 = false;
		}
	}

}

std::vector<std::tuple<int, double, std::string, int>> storm::figaro::FigaroProgram_figaro_17_20::showFireableOccurrences()
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
     
	if ((boolState[failF_OF_a1] == false) && boolState[required_OF_a1])
	{
		//cout << "0 : xx10_OF_a1 : FAULT failF  LABEL \"défaillance en fonctionnement %OBJET\"  DIST EXP (0.01)  INDUCING boolState[failF_OF_a1]  =  TRUE" << endl;
		list.push_back(make_tuple(0, 0.01, "EXP", 0));
	}
	if (boolState[failF_OF_a1] == true)
	{
		//cout << "1 : xx11_OF_a1 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_a1]  =  FALSE" << endl;
		list.push_back(make_tuple(1, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_a2] == false) && boolState[required_OF_a2])
	{
		//cout << "2 : xx10_OF_a2 : FAULT failF  LABEL \"défaillance en fonctionnement %OBJET\"  DIST EXP (0.01)  INDUCING boolState[failF_OF_a2]  =  TRUE" << endl;
		list.push_back(make_tuple(2, 0.01, "EXP", 0));
	}
	if (boolState[failF_OF_a2] == true)
	{
		//cout << "3 : xx11_OF_a2 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_a2]  =  FALSE" << endl;
		list.push_back(make_tuple(3, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_a3] == false) && boolState[required_OF_a3])
	{
		//cout << "4 : xx10_OF_a3 : FAULT failF  LABEL \"défaillance en fonctionnement %OBJET\"  DIST EXP (0.01)  INDUCING boolState[failF_OF_a3]  =  TRUE" << endl;
		list.push_back(make_tuple(4, 0.01, "EXP", 0));
	}
	if (boolState[failF_OF_a3] == true)
	{
		//cout << "5 : xx11_OF_a3 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_a3]  =  FALSE" << endl;
		list.push_back(make_tuple(5, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_a4] == false) && boolState[required_OF_a4])
	{
		//cout << "6 : xx10_OF_a4 : FAULT failF  LABEL \"défaillance en fonctionnement %OBJET\"  DIST EXP (0.01)  INDUCING boolState[failF_OF_a4]  =  TRUE" << endl;
		list.push_back(make_tuple(6, 0.01, "EXP", 0));
	}
	if (boolState[failF_OF_a4] == true)
	{
		//cout << "7 : xx11_OF_a4 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_a4]  =  FALSE" << endl;
		list.push_back(make_tuple(7, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_a7] == false) && boolState[required_OF_a7])
	{
		//cout << "8 : xx10_OF_a7 : FAULT failF  LABEL \"défaillance en fonctionnement %OBJET\"  DIST EXP (0.01)  INDUCING boolState[failF_OF_a7]  =  TRUE" << endl;
		list.push_back(make_tuple(8, 0.01, "EXP", 0));
	}
	if (boolState[failF_OF_a7] == true)
	{
		//cout << "9 : xx11_OF_a7 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_a7]  =  FALSE" << endl;
		list.push_back(make_tuple(9, 0.1, "EXP", 0));
	}
	if ((intState[nb_OK_OF_a9] > 0) && boolState[required_OF_a9])
	{
		//cout << "10 : xx15_OF_a9 : FAULT failF  LABEL \"déf. d'un objet du groupe %OBJET\"  DIST EXP (0.1 *  intState[nb_OK_OF_a9])  INDUCING intState[nb_OK_OF_a9]  =  (intState[nb_OK_OF_a9] - 1)" << endl;
		list.push_back(make_tuple(10, 0.1 *  intState[nb_OK_OF_a9], "EXP", 0));
	}
	if ((intState[nb_OK_OF_a9] < 8) && (intState[nb_being_repaired_OF_a9] > 0))
	{
		//cout << "11 : xx16_OF_a9 : REPAIR rep  DIST EXP (0.1 *  intState[nb_being_repaired_OF_a9])  INDUCING intState[nb_OK_OF_a9]  =  (intState[nb_OK_OF_a9] + 1)" << endl;
		list.push_back(make_tuple(11, 0.1 *  intState[nb_being_repaired_OF_a9], "EXP", 0));
	}
	return list;
}


void storm::figaro::FigaroProgram_figaro_17_20::runOnceInteractionStep_initialization()
{
	if (boolState[failF_OF_a1] == true )
	{
		boolState[S_OF_a1]  =  true;
	}

	if (boolState[failF_OF_a2] == true )
	{
		boolState[S_OF_a2]  =  true;
	}

	if (boolState[failF_OF_a3] == true )
	{
		boolState[S_OF_a3]  =  true;
	}

	if (boolState[failF_OF_a4] == true )
	{
		boolState[S_OF_a4]  =  true;
	}

	if (boolState[failF_OF_a7] == true )
	{
		boolState[S_OF_a7]  =  true;
	}

	if (intState[nb_OK_OF_a9] < 0 )
	{
		intState[nb_being_repaired_OF_a9]  =  8;
	}

	if (intState[nb_OK_OF_a9] >= 0 )
	{
		intState[nb_being_repaired_OF_a9]  =  (8 - intState[nb_OK_OF_a9]);
	}

	if (intState[nb_OK_OF_a9] < 6 )
	{
		boolState[S_OF_a9]  =  true;
	}

}


void storm::figaro::FigaroProgram_figaro_17_20::runOnceInteractionStep_propagate_effect_S()
{
	if (boolState[S_OF_a10] )
	{
		boolState[S_OF_UE_1]  =  true;
	}

	if ((boolState[S_OF_a7] || boolState[S_OF_a8]) || boolState[S_OF_a9] )
	{
		boolState[S_OF_a10]  =  true;
	}

	if (boolState[S_OF_a1] && boolState[S_OF_a2] )
	{
		boolState[S_OF_a5]  =  true;
	}

	if (boolState[S_OF_a3] && boolState[S_OF_a4] )
	{
		boolState[S_OF_a6]  =  true;
	}

	if (boolState[S_OF_a5] && boolState[S_OF_a6] )
	{
		boolState[S_OF_a8]  =  true;
	}

}


void storm::figaro::FigaroProgram_figaro_17_20::runOnceInteractionStep_propagate_effect_required()
{


	boolState[relevant_evt_OF_UE_1]  =  true  ;

	if ( !boolState[required_OF_a5] )
	{
		boolState[required_OF_a1]  =  false;
	}

	if ((boolState[relevant_evt_OF_a5] && ( !boolState[S_OF_a5])) || (boolState[relevant_evt_OF_a2] && ( !boolState[S_OF_a2])) )
	{
		boolState[relevant_evt_OF_a1]  =  true;
	}

	if ( !boolState[required_OF_UE_1] )
	{
		boolState[required_OF_a10]  =  false;
	}

	if (boolState[relevant_evt_OF_UE_1] && ( !boolState[S_OF_UE_1]) )
	{
		boolState[relevant_evt_OF_a10]  =  true;
	}

	if (( !boolState[required_OF_a5]) || ( !boolState[S_OF_a1]) )
	{
		boolState[required_OF_a2]  =  false;
	}

	if (boolState[relevant_evt_OF_a5] && ( !boolState[S_OF_a5]) )
	{
		boolState[relevant_evt_OF_a2]  =  true;
	}

	if ( !boolState[required_OF_a6] )
	{
		boolState[required_OF_a3]  =  false;
	}

	if (boolState[relevant_evt_OF_a6] && ( !boolState[S_OF_a6]) )
	{
		boolState[relevant_evt_OF_a3]  =  true;
	}

	if ( !boolState[required_OF_a6] )
	{
		boolState[required_OF_a4]  =  false;
	}

	if (boolState[relevant_evt_OF_a6] && ( !boolState[S_OF_a6]) )
	{
		boolState[relevant_evt_OF_a4]  =  true;
	}

	if ( !boolState[required_OF_a8] )
	{
		boolState[required_OF_a5]  =  false;
	}

	if (boolState[relevant_evt_OF_a8] && ( !boolState[S_OF_a8]) )
	{
		boolState[relevant_evt_OF_a5]  =  true;
	}

	if ( !boolState[required_OF_a8] )
	{
		boolState[required_OF_a6]  =  false;
	}

	if (boolState[relevant_evt_OF_a8] && ( !boolState[S_OF_a8]) )
	{
		boolState[relevant_evt_OF_a6]  =  true;
	}

	if ( !boolState[required_OF_a10] )
	{
		boolState[required_OF_a7]  =  false;
	}

	if (boolState[relevant_evt_OF_a10] && ( !boolState[S_OF_a10]) )
	{
		boolState[relevant_evt_OF_a7]  =  true;
	}

	if ( !boolState[required_OF_a10] )
	{
		boolState[required_OF_a8]  =  false;
	}

	if (boolState[relevant_evt_OF_a10] && ( !boolState[S_OF_a10]) )
	{
		boolState[relevant_evt_OF_a8]  =  true;
	}

	if ( !boolState[required_OF_a10] )
	{
		boolState[required_OF_a9]  =  false;
	}

	if (boolState[relevant_evt_OF_a10] && ( !boolState[S_OF_a10]) )
	{
		boolState[relevant_evt_OF_a9]  =  true;
	}

}


void storm::figaro::FigaroProgram_figaro_17_20::runOnceInteractionStep_propagate_leaves()
{


	boolState[already_S_OF_UE_1]  =  boolState[S_OF_UE_1]  ;



	boolState[already_S_OF_a1]  =  boolState[S_OF_a1]  ;



	boolState[already_S_OF_a10]  =  boolState[S_OF_a10]  ;



	boolState[already_S_OF_a2]  =  boolState[S_OF_a2]  ;



	boolState[already_S_OF_a3]  =  boolState[S_OF_a3]  ;



	boolState[already_S_OF_a4]  =  boolState[S_OF_a4]  ;



	boolState[already_S_OF_a5]  =  boolState[S_OF_a5]  ;



	boolState[already_S_OF_a6]  =  boolState[S_OF_a6]  ;



	boolState[already_S_OF_a7]  =  boolState[S_OF_a7]  ;



	boolState[already_S_OF_a8]  =  boolState[S_OF_a8]  ;



	boolState[already_S_OF_a9]  =  boolState[S_OF_a9]  ;

}

void
storm::figaro::FigaroProgram_figaro_17_20::runInteractions() {
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
    }void storm::figaro::FigaroProgram_figaro_17_20::printstatetuple(){

                std::cout<<"\n State information: (";
                for (int i=0; i<boolFailureState.size(); i++)
                    {
                    std::cout<<boolFailureState.at(i);
                    }
                std::cout<<")";

            }
        int_fast64_t storm::figaro::FigaroProgram_figaro_17_20::stateSize() const{
            return numBoolState;
}
        void storm::figaro::FigaroProgram_figaro_17_20::fireinsttransitiongroup(std::string user_input_ins)

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
    