#include <iostream>
#include "FigaroModelfigaro_17_07.h"

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
        
void storm::figaro::FigaroProgram_figaro_17_07::init()
{
	//cout <<">>>>>>>>>>>>>>>>>>>> Initialization of variables <<<<<<<<<<<<<<<<<<<<<<<" << endl;

	REINITIALISATION_OF_required_OF_A1 = true;
	boolState[already_S_OF_A1] = false;
	REINITIALISATION_OF_S_OF_A1 = false;
	REINITIALISATION_OF_relevant_evt_OF_A1 = false;
	boolState[failF_OF_A1] = false;
	REINITIALISATION_OF_required_OF_A2 = true;
	boolState[already_S_OF_A2] = false;
	REINITIALISATION_OF_S_OF_A2 = false;
	REINITIALISATION_OF_relevant_evt_OF_A2 = false;
	boolState[failF_OF_A2] = false;
	REINITIALISATION_OF_required_OF_A3 = true;
	boolState[already_S_OF_A3] = false;
	REINITIALISATION_OF_S_OF_A3 = false;
	REINITIALISATION_OF_relevant_evt_OF_A3 = false;
	boolState[failF_OF_A3] = false;
	REINITIALISATION_OF_required_OF_A4 = true;
	boolState[already_S_OF_A4] = false;
	REINITIALISATION_OF_S_OF_A4 = false;
	REINITIALISATION_OF_relevant_evt_OF_A4 = false;
	boolState[failF_OF_A4] = false;
	REINITIALISATION_OF_required_OF_A5 = true;
	boolState[already_S_OF_A5] = false;
	REINITIALISATION_OF_S_OF_A5 = false;
	REINITIALISATION_OF_relevant_evt_OF_A5 = false;
	REINITIALISATION_OF_required_OF_A6 = true;
	boolState[already_S_OF_A6] = false;
	REINITIALISATION_OF_S_OF_A6 = false;
	REINITIALISATION_OF_relevant_evt_OF_A6 = false;
	REINITIALISATION_OF_required_OF_A7 = true;
	boolState[already_S_OF_A7] = false;
	REINITIALISATION_OF_S_OF_A7 = false;
	REINITIALISATION_OF_relevant_evt_OF_A7 = false;
	REINITIALISATION_OF_required_OF_UE_1 = true;
	boolState[already_S_OF_UE_1] = false;
	REINITIALISATION_OF_S_OF_UE_1 = false;
	REINITIALISATION_OF_relevant_evt_OF_UE_1 = false;

	/* ---------- DECLARATION OF OCCURRENCE RULES FIRING FLAGS ------------ */
	FIRE_xx10_OF_A1 = false;
	FIRE_xx11_OF_A1 = false;
	FIRE_xx10_OF_A2 = false;
	FIRE_xx11_OF_A2 = false;
	FIRE_xx10_OF_A3 = false;
	FIRE_xx11_OF_A3 = false;
	FIRE_xx10_OF_A4 = false;
	FIRE_xx11_OF_A4 = false;

}

void storm::figaro::FigaroProgram_figaro_17_07::saveCurrentState()
{
	// cout <<">>>>>>>>>>>>>>>>>>>> Saving current state  <<<<<<<<<<<<<<<<<<<<<<<" << endl;
	backupBoolState = boolState ;
	backupFloatState = floatState ;
	backupIntState = intState ;
	backupEnumState = enumState ;
}

int storm::figaro::FigaroProgram_figaro_17_07::compareStates()
{
	// cout <<">>>>>>>>>>>>>>>>>>>> Comparing state with previous one (return number of differences) <<<<<<<<<<<<<<<<<<<<<<<" << endl;

	return (backupBoolState != boolState) + (backupFloatState != floatState) + (backupIntState != intState) + (backupEnumState != enumState); 
}

void storm::figaro::FigaroProgram_figaro_17_07::printState()
{
	//cout <<"\n==================== Print of the current state :  ====================" << endl;

	//cout << "Attribute :  boolState[required_OF_A1] | Value : " << boolState[required_OF_A1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A1] | Value : " << boolState[already_S_OF_A1] << endl;
	//cout << "Attribute :  boolState[S_OF_A1] | Value : " << boolState[S_OF_A1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A1] | Value : " << boolState[relevant_evt_OF_A1] << endl;
	//cout << "Attribute :  boolState[failF_OF_A1] | Value : " << boolState[failF_OF_A1] << endl;
	//cout << "Attribute :  boolState[required_OF_A2] | Value : " << boolState[required_OF_A2] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A2] | Value : " << boolState[already_S_OF_A2] << endl;
	//cout << "Attribute :  boolState[S_OF_A2] | Value : " << boolState[S_OF_A2] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A2] | Value : " << boolState[relevant_evt_OF_A2] << endl;
	//cout << "Attribute :  boolState[failF_OF_A2] | Value : " << boolState[failF_OF_A2] << endl;
	//cout << "Attribute :  boolState[required_OF_A3] | Value : " << boolState[required_OF_A3] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A3] | Value : " << boolState[already_S_OF_A3] << endl;
	//cout << "Attribute :  boolState[S_OF_A3] | Value : " << boolState[S_OF_A3] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A3] | Value : " << boolState[relevant_evt_OF_A3] << endl;
	//cout << "Attribute :  boolState[failF_OF_A3] | Value : " << boolState[failF_OF_A3] << endl;
	//cout << "Attribute :  boolState[required_OF_A4] | Value : " << boolState[required_OF_A4] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A4] | Value : " << boolState[already_S_OF_A4] << endl;
	//cout << "Attribute :  boolState[S_OF_A4] | Value : " << boolState[S_OF_A4] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A4] | Value : " << boolState[relevant_evt_OF_A4] << endl;
	//cout << "Attribute :  boolState[failF_OF_A4] | Value : " << boolState[failF_OF_A4] << endl;
	//cout << "Attribute :  boolState[required_OF_A5] | Value : " << boolState[required_OF_A5] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A5] | Value : " << boolState[already_S_OF_A5] << endl;
	//cout << "Attribute :  boolState[S_OF_A5] | Value : " << boolState[S_OF_A5] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A5] | Value : " << boolState[relevant_evt_OF_A5] << endl;
	//cout << "Attribute :  boolState[required_OF_A6] | Value : " << boolState[required_OF_A6] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A6] | Value : " << boolState[already_S_OF_A6] << endl;
	//cout << "Attribute :  boolState[S_OF_A6] | Value : " << boolState[S_OF_A6] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A6] | Value : " << boolState[relevant_evt_OF_A6] << endl;
	//cout << "Attribute :  boolState[required_OF_A7] | Value : " << boolState[required_OF_A7] << endl;
	//cout << "Attribute :  boolState[already_S_OF_A7] | Value : " << boolState[already_S_OF_A7] << endl;
	//cout << "Attribute :  boolState[S_OF_A7] | Value : " << boolState[S_OF_A7] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_A7] | Value : " << boolState[relevant_evt_OF_A7] << endl;
	//cout << "Attribute :  boolState[required_OF_UE_1] | Value : " << boolState[required_OF_UE_1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_UE_1] | Value : " << boolState[already_S_OF_UE_1] << endl;
	//cout << "Attribute :  boolState[S_OF_UE_1] | Value : " << boolState[S_OF_UE_1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_UE_1] | Value : " << boolState[relevant_evt_OF_UE_1] << endl;
}

bool storm::figaro::FigaroProgram_figaro_17_07::figaromodelhasinstransitions()
{
	return false;
}
void storm::figaro::FigaroProgram_figaro_17_07::doReinitialisations()
{
	boolState[required_OF_A1] = REINITIALISATION_OF_required_OF_A1;
	boolState[S_OF_A1] = REINITIALISATION_OF_S_OF_A1;
	boolState[relevant_evt_OF_A1] = REINITIALISATION_OF_relevant_evt_OF_A1;
	boolState[required_OF_A2] = REINITIALISATION_OF_required_OF_A2;
	boolState[S_OF_A2] = REINITIALISATION_OF_S_OF_A2;
	boolState[relevant_evt_OF_A2] = REINITIALISATION_OF_relevant_evt_OF_A2;
	boolState[required_OF_A3] = REINITIALISATION_OF_required_OF_A3;
	boolState[S_OF_A3] = REINITIALISATION_OF_S_OF_A3;
	boolState[relevant_evt_OF_A3] = REINITIALISATION_OF_relevant_evt_OF_A3;
	boolState[required_OF_A4] = REINITIALISATION_OF_required_OF_A4;
	boolState[S_OF_A4] = REINITIALISATION_OF_S_OF_A4;
	boolState[relevant_evt_OF_A4] = REINITIALISATION_OF_relevant_evt_OF_A4;
	boolState[required_OF_A5] = REINITIALISATION_OF_required_OF_A5;
	boolState[S_OF_A5] = REINITIALISATION_OF_S_OF_A5;
	boolState[relevant_evt_OF_A5] = REINITIALISATION_OF_relevant_evt_OF_A5;
	boolState[required_OF_A6] = REINITIALISATION_OF_required_OF_A6;
	boolState[S_OF_A6] = REINITIALISATION_OF_S_OF_A6;
	boolState[relevant_evt_OF_A6] = REINITIALISATION_OF_relevant_evt_OF_A6;
	boolState[required_OF_A7] = REINITIALISATION_OF_required_OF_A7;
	boolState[S_OF_A7] = REINITIALISATION_OF_S_OF_A7;
	boolState[relevant_evt_OF_A7] = REINITIALISATION_OF_relevant_evt_OF_A7;
	boolState[required_OF_UE_1] = REINITIALISATION_OF_required_OF_UE_1;
	boolState[S_OF_UE_1] = REINITIALISATION_OF_S_OF_UE_1;
	boolState[relevant_evt_OF_UE_1] = REINITIALISATION_OF_relevant_evt_OF_UE_1;
}

void storm::figaro::FigaroProgram_figaro_17_07::fireOccurrence(int numFire)
{
	//cout <<">>>>>>>>>>>>>>>>>>>> Fire of occurrence #" << numFire << " <<<<<<<<<<<<<<<<<<<<<<<" << endl;

	if (numFire == 0)
	{
		FIRE_xx10_OF_A1 = true;
	}

	if (numFire == 1)
	{
		FIRE_xx11_OF_A1 = true;
	}

	if (numFire == 2)
	{
		FIRE_xx10_OF_A2 = true;
	}

	if (numFire == 3)
	{
		FIRE_xx11_OF_A2 = true;
	}

	if (numFire == 4)
	{
		FIRE_xx10_OF_A3 = true;
	}

	if (numFire == 5)
	{
		FIRE_xx11_OF_A3 = true;
	}

	if (numFire == 6)
	{
		FIRE_xx10_OF_A4 = true;
	}

	if (numFire == 7)
	{
		FIRE_xx11_OF_A4 = true;
	}

/* ---------- DECLARATION OF OCCURRENCE RULES------------ */

	// Occurrence xx10_OF_A1
	if ((boolState[failF_OF_A1] == false) && boolState[required_OF_A1]) 
	{
		 
		if (FIRE_xx10_OF_A1)
		{
			boolState[failF_OF_A1]  =  true;
			FIRE_xx10_OF_A1 = false;
		}
	}

	// Occurrence xx11_OF_A1
	if (boolState[failF_OF_A1] == true) 
	{
		 
		if (FIRE_xx11_OF_A1)
		{
			boolState[failF_OF_A1]  =  false;
			FIRE_xx11_OF_A1 = false;
		}
	}

	// Occurrence xx10_OF_A2
	if ((boolState[failF_OF_A2] == false) && boolState[required_OF_A2]) 
	{
		 
		if (FIRE_xx10_OF_A2)
		{
			boolState[failF_OF_A2]  =  true;
			FIRE_xx10_OF_A2 = false;
		}
	}

	// Occurrence xx11_OF_A2
	if (boolState[failF_OF_A2] == true) 
	{
		 
		if (FIRE_xx11_OF_A2)
		{
			boolState[failF_OF_A2]  =  false;
			FIRE_xx11_OF_A2 = false;
		}
	}

	// Occurrence xx10_OF_A3
	if ((boolState[failF_OF_A3] == false) && boolState[required_OF_A3]) 
	{
		 
		if (FIRE_xx10_OF_A3)
		{
			boolState[failF_OF_A3]  =  true;
			FIRE_xx10_OF_A3 = false;
		}
	}

	// Occurrence xx11_OF_A3
	if (boolState[failF_OF_A3] == true) 
	{
		 
		if (FIRE_xx11_OF_A3)
		{
			boolState[failF_OF_A3]  =  false;
			FIRE_xx11_OF_A3 = false;
		}
	}

	// Occurrence xx10_OF_A4
	if ((boolState[failF_OF_A4] == false) && boolState[required_OF_A4]) 
	{
		 
		if (FIRE_xx10_OF_A4)
		{
			boolState[failF_OF_A4]  =  true;
			FIRE_xx10_OF_A4 = false;
		}
	}

	// Occurrence xx11_OF_A4
	if (boolState[failF_OF_A4] == true) 
	{
		 
		if (FIRE_xx11_OF_A4)
		{
			boolState[failF_OF_A4]  =  false;
			FIRE_xx11_OF_A4 = false;
		}
	}

}

std::vector<std::tuple<int, double, std::string, int>> storm::figaro::FigaroProgram_figaro_17_07::showFireableOccurrences()
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
     
	if ((boolState[failF_OF_A1] == false) && boolState[required_OF_A1])
	{
		//cout << "0 : xx10_OF_A1 : FAULT failF  LABEL \"défaillance en fonctionnement %OBJET\"  DIST EXP (0.01)  INDUCING boolState[failF_OF_A1]  =  TRUE" << endl;
		list.push_back(make_tuple(0, 0.01, "EXP", 0));
	}
	if (boolState[failF_OF_A1] == true)
	{
		//cout << "1 : xx11_OF_A1 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A1]  =  FALSE" << endl;
		list.push_back(make_tuple(1, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A2] == false) && boolState[required_OF_A2])
	{
		//cout << "2 : xx10_OF_A2 : FAULT failF  LABEL \"défaillance en fonctionnement %OBJET\"  DIST EXP (0.01)  INDUCING boolState[failF_OF_A2]  =  TRUE" << endl;
		list.push_back(make_tuple(2, 0.01, "EXP", 0));
	}
	if (boolState[failF_OF_A2] == true)
	{
		//cout << "3 : xx11_OF_A2 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A2]  =  FALSE" << endl;
		list.push_back(make_tuple(3, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A3] == false) && boolState[required_OF_A3])
	{
		//cout << "4 : xx10_OF_A3 : FAULT failF  LABEL \"défaillance en fonctionnement %OBJET\"  DIST EXP (0.01)  INDUCING boolState[failF_OF_A3]  =  TRUE" << endl;
		list.push_back(make_tuple(4, 0.01, "EXP", 0));
	}
	if (boolState[failF_OF_A3] == true)
	{
		//cout << "5 : xx11_OF_A3 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A3]  =  FALSE" << endl;
		list.push_back(make_tuple(5, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_A4] == false) && boolState[required_OF_A4])
	{
		//cout << "6 : xx10_OF_A4 : FAULT failF  LABEL \"défaillance en fonctionnement %OBJET\"  DIST EXP (0.01)  INDUCING boolState[failF_OF_A4]  =  TRUE" << endl;
		list.push_back(make_tuple(6, 0.01, "EXP", 0));
	}
	if (boolState[failF_OF_A4] == true)
	{
		//cout << "7 : xx11_OF_A4 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_A4]  =  FALSE" << endl;
		list.push_back(make_tuple(7, 0.1, "EXP", 0));
	}
	return list;
}


void storm::figaro::FigaroProgram_figaro_17_07::runOnceInteractionStep_initialization()
{
	if (boolState[failF_OF_A1] == true )
	{
		boolState[S_OF_A1]  =  true;
	}

	if (boolState[failF_OF_A2] == true )
	{
		boolState[S_OF_A2]  =  true;
	}

	if (boolState[failF_OF_A3] == true )
	{
		boolState[S_OF_A3]  =  true;
	}

	if (boolState[failF_OF_A4] == true )
	{
		boolState[S_OF_A4]  =  true;
	}

}


void storm::figaro::FigaroProgram_figaro_17_07::runOnceInteractionStep_propagate_effect_S()
{
	if (boolState[S_OF_A1] && boolState[S_OF_A2] )
	{
		boolState[S_OF_A5]  =  true;
	}

	if (boolState[S_OF_A3] && boolState[S_OF_A4] )
	{
		boolState[S_OF_A6]  =  true;
	}

	if (boolState[S_OF_A5] || boolState[S_OF_A6] )
	{
		boolState[S_OF_A7]  =  true;
	}

	if (boolState[S_OF_A7] )
	{
		boolState[S_OF_UE_1]  =  true;
	}

}


void storm::figaro::FigaroProgram_figaro_17_07::runOnceInteractionStep_propagate_effect_required()
{
	if (( !boolState[required_OF_A5]) || boolState[S_OF_A3] )
	{
		boolState[required_OF_A1]  =  false;
	}

	if ((boolState[relevant_evt_OF_A5] && ( !boolState[S_OF_A5])) || ((boolState[relevant_evt_OF_A2] && ( !boolState[S_OF_A2])) || (boolState[relevant_evt_OF_A3] && ( !boolState[S_OF_A3]))) )
	{
		boolState[relevant_evt_OF_A1]  =  true;
	}

	if (( !boolState[required_OF_A5]) || ( !boolState[S_OF_A1]) )
	{
		boolState[required_OF_A2]  =  false;
	}

	if (boolState[relevant_evt_OF_A5] && ( !boolState[S_OF_A5]) )
	{
		boolState[relevant_evt_OF_A2]  =  true;
	}

	if (( !boolState[required_OF_A6]) || boolState[S_OF_A1] )
	{
		boolState[required_OF_A3]  =  false;
	}

	if ((boolState[relevant_evt_OF_A6] && ( !boolState[S_OF_A6])) || ((boolState[relevant_evt_OF_A1] && ( !boolState[S_OF_A1])) || (boolState[relevant_evt_OF_A4] && ( !boolState[S_OF_A4]))) )
	{
		boolState[relevant_evt_OF_A3]  =  true;
	}

	if (( !boolState[required_OF_A6]) || ( !boolState[S_OF_A3]) )
	{
		boolState[required_OF_A4]  =  false;
	}

	if (boolState[relevant_evt_OF_A6] && ( !boolState[S_OF_A6]) )
	{
		boolState[relevant_evt_OF_A4]  =  true;
	}

	if ( !boolState[required_OF_A7] )
	{
		boolState[required_OF_A5]  =  false;
	}

	if (boolState[relevant_evt_OF_A7] && ( !boolState[S_OF_A7]) )
	{
		boolState[relevant_evt_OF_A5]  =  true;
	}

	if ( !boolState[required_OF_A7] )
	{
		boolState[required_OF_A6]  =  false;
	}

	if (boolState[relevant_evt_OF_A7] && ( !boolState[S_OF_A7]) )
	{
		boolState[relevant_evt_OF_A6]  =  true;
	}

	if ( !boolState[required_OF_UE_1] )
	{
		boolState[required_OF_A7]  =  false;
	}

	if (boolState[relevant_evt_OF_UE_1] && ( !boolState[S_OF_UE_1]) )
	{
		boolState[relevant_evt_OF_A7]  =  true;
	}



	boolState[relevant_evt_OF_UE_1]  =  true  ;

}


void storm::figaro::FigaroProgram_figaro_17_07::runOnceInteractionStep_propagate_leaves()
{


	boolState[already_S_OF_A1]  =  boolState[S_OF_A1]  ;



	boolState[already_S_OF_A2]  =  boolState[S_OF_A2]  ;



	boolState[already_S_OF_A3]  =  boolState[S_OF_A3]  ;



	boolState[already_S_OF_A4]  =  boolState[S_OF_A4]  ;



	boolState[already_S_OF_A5]  =  boolState[S_OF_A5]  ;



	boolState[already_S_OF_A6]  =  boolState[S_OF_A6]  ;



	boolState[already_S_OF_A7]  =  boolState[S_OF_A7]  ;



	boolState[already_S_OF_UE_1]  =  boolState[S_OF_UE_1]  ;

}

void
storm::figaro::FigaroProgram_figaro_17_07::runInteractions() {
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
    }void storm::figaro::FigaroProgram_figaro_17_07::printstatetuple(){

                std::cout<<"\n State information: (";
                for (int i=0; i<boolFailureState.size(); i++)
                    {
                    std::cout<<boolFailureState.at(i);
                    }
                std::cout<<")";

            }
        int_fast64_t storm::figaro::FigaroProgram_figaro_17_07::stateSize() const{
            return numBoolState;
}
        void storm::figaro::FigaroProgram_figaro_17_07::fireinsttransitiongroup(std::string user_input_ins)

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
    