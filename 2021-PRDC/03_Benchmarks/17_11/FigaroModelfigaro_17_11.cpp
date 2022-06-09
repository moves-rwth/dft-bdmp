#include <iostream>
#include "FigaroModelfigaro_17_11.h"

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
        
void storm::figaro::FigaroProgram_figaro_17_11::init()
{
	//cout <<">>>>>>>>>>>>>>>>>>>> Initialization of variables <<<<<<<<<<<<<<<<<<<<<<<" << endl;

	REINITIALISATION_OF_required_OF_AND_1 = true;
	boolState[already_S_OF_AND_1] = false;
	REINITIALISATION_OF_S_OF_AND_1 = false;
	REINITIALISATION_OF_relevant_evt_OF_AND_1 = false;
	REINITIALISATION_OF_required_OF_F_1 = true;
	boolState[already_S_OF_F_1] = false;
	REINITIALISATION_OF_S_OF_F_1 = false;
	REINITIALISATION_OF_relevant_evt_OF_F_1 = false;
	boolState[failF_OF_F_1] = false;
	REINITIALISATION_OF_required_OF_F_2 = true;
	boolState[already_S_OF_F_2] = false;
	REINITIALISATION_OF_S_OF_F_2 = false;
	REINITIALISATION_OF_relevant_evt_OF_F_2 = false;
	boolState[failF_OF_F_2] = false;
	REINITIALISATION_OF_required_OF_OR_1 = true;
	boolState[already_S_OF_OR_1] = false;
	REINITIALISATION_OF_S_OF_OR_1 = false;
	REINITIALISATION_OF_relevant_evt_OF_OR_1 = false;
	REINITIALISATION_OF_required_OF_SF_1 = true;
	boolState[already_S_OF_SF_1] = false;
	REINITIALISATION_OF_S_OF_SF_1 = false;
	REINITIALISATION_OF_relevant_evt_OF_SF_1 = false;
	boolState[failF_OF_SF_1] = false;
	boolState[failS_OF_SF_1] = false;
	REINITIALISATION_OF_required_OF_UE_1 = true;
	boolState[already_S_OF_UE_1] = false;
	REINITIALISATION_OF_S_OF_UE_1 = false;
	REINITIALISATION_OF_relevant_evt_OF_UE_1 = false;

	/* ---------- DECLARATION OF OCCURRENCE RULES FIRING FLAGS ------------ */
	FIRE_xx10_OF_F_1 = false;
	FIRE_xx11_OF_F_1 = false;
	FIRE_xx10_OF_F_2 = false;
	FIRE_xx11_OF_F_2 = false;
	FIRE_xx17_OF_SF_1 = false;
	FIRE_xx18_OF_SF_1 = false;
	FIRE_xx19_OF_SF_1 = false;

}

void storm::figaro::FigaroProgram_figaro_17_11::saveCurrentState()
{
	// cout <<">>>>>>>>>>>>>>>>>>>> Saving current state  <<<<<<<<<<<<<<<<<<<<<<<" << endl;
	backupBoolState = boolState ;
	backupFloatState = floatState ;
	backupIntState = intState ;
	backupEnumState = enumState ;
}

int storm::figaro::FigaroProgram_figaro_17_11::compareStates()
{
	// cout <<">>>>>>>>>>>>>>>>>>>> Comparing state with previous one (return number of differences) <<<<<<<<<<<<<<<<<<<<<<<" << endl;

	return (backupBoolState != boolState) + (backupFloatState != floatState) + (backupIntState != intState) + (backupEnumState != enumState); 
}

void storm::figaro::FigaroProgram_figaro_17_11::printState()
{
	//cout <<"\n==================== Print of the current state :  ====================" << endl;

	//cout << "Attribute :  boolState[required_OF_AND_1] | Value : " << boolState[required_OF_AND_1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_AND_1] | Value : " << boolState[already_S_OF_AND_1] << endl;
	//cout << "Attribute :  boolState[S_OF_AND_1] | Value : " << boolState[S_OF_AND_1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_AND_1] | Value : " << boolState[relevant_evt_OF_AND_1] << endl;
	//cout << "Attribute :  boolState[required_OF_F_1] | Value : " << boolState[required_OF_F_1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_F_1] | Value : " << boolState[already_S_OF_F_1] << endl;
	//cout << "Attribute :  boolState[S_OF_F_1] | Value : " << boolState[S_OF_F_1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_F_1] | Value : " << boolState[relevant_evt_OF_F_1] << endl;
	//cout << "Attribute :  boolState[failF_OF_F_1] | Value : " << boolState[failF_OF_F_1] << endl;
	//cout << "Attribute :  boolState[required_OF_F_2] | Value : " << boolState[required_OF_F_2] << endl;
	//cout << "Attribute :  boolState[already_S_OF_F_2] | Value : " << boolState[already_S_OF_F_2] << endl;
	//cout << "Attribute :  boolState[S_OF_F_2] | Value : " << boolState[S_OF_F_2] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_F_2] | Value : " << boolState[relevant_evt_OF_F_2] << endl;
	//cout << "Attribute :  boolState[failF_OF_F_2] | Value : " << boolState[failF_OF_F_2] << endl;
	//cout << "Attribute :  boolState[required_OF_OR_1] | Value : " << boolState[required_OF_OR_1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_OR_1] | Value : " << boolState[already_S_OF_OR_1] << endl;
	//cout << "Attribute :  boolState[S_OF_OR_1] | Value : " << boolState[S_OF_OR_1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_OR_1] | Value : " << boolState[relevant_evt_OF_OR_1] << endl;
	//cout << "Attribute :  boolState[required_OF_SF_1] | Value : " << boolState[required_OF_SF_1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_SF_1] | Value : " << boolState[already_S_OF_SF_1] << endl;
	//cout << "Attribute :  boolState[S_OF_SF_1] | Value : " << boolState[S_OF_SF_1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_SF_1] | Value : " << boolState[relevant_evt_OF_SF_1] << endl;
	//cout << "Attribute :  boolState[failF_OF_SF_1] | Value : " << boolState[failF_OF_SF_1] << endl;
	//cout << "Attribute :  boolState[failS_OF_SF_1] | Value : " << boolState[failS_OF_SF_1] << endl;
	//cout << "Attribute :  boolState[required_OF_UE_1] | Value : " << boolState[required_OF_UE_1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_UE_1] | Value : " << boolState[already_S_OF_UE_1] << endl;
	//cout << "Attribute :  boolState[S_OF_UE_1] | Value : " << boolState[S_OF_UE_1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_UE_1] | Value : " << boolState[relevant_evt_OF_UE_1] << endl;
}

bool storm::figaro::FigaroProgram_figaro_17_11::figaromodelhasinstransitions()
{
	return false;
}
void storm::figaro::FigaroProgram_figaro_17_11::doReinitialisations()
{
	boolState[required_OF_AND_1] = REINITIALISATION_OF_required_OF_AND_1;
	boolState[S_OF_AND_1] = REINITIALISATION_OF_S_OF_AND_1;
	boolState[relevant_evt_OF_AND_1] = REINITIALISATION_OF_relevant_evt_OF_AND_1;
	boolState[required_OF_F_1] = REINITIALISATION_OF_required_OF_F_1;
	boolState[S_OF_F_1] = REINITIALISATION_OF_S_OF_F_1;
	boolState[relevant_evt_OF_F_1] = REINITIALISATION_OF_relevant_evt_OF_F_1;
	boolState[required_OF_F_2] = REINITIALISATION_OF_required_OF_F_2;
	boolState[S_OF_F_2] = REINITIALISATION_OF_S_OF_F_2;
	boolState[relevant_evt_OF_F_2] = REINITIALISATION_OF_relevant_evt_OF_F_2;
	boolState[required_OF_OR_1] = REINITIALISATION_OF_required_OF_OR_1;
	boolState[S_OF_OR_1] = REINITIALISATION_OF_S_OF_OR_1;
	boolState[relevant_evt_OF_OR_1] = REINITIALISATION_OF_relevant_evt_OF_OR_1;
	boolState[required_OF_SF_1] = REINITIALISATION_OF_required_OF_SF_1;
	boolState[S_OF_SF_1] = REINITIALISATION_OF_S_OF_SF_1;
	boolState[relevant_evt_OF_SF_1] = REINITIALISATION_OF_relevant_evt_OF_SF_1;
	boolState[required_OF_UE_1] = REINITIALISATION_OF_required_OF_UE_1;
	boolState[S_OF_UE_1] = REINITIALISATION_OF_S_OF_UE_1;
	boolState[relevant_evt_OF_UE_1] = REINITIALISATION_OF_relevant_evt_OF_UE_1;
}

void storm::figaro::FigaroProgram_figaro_17_11::fireOccurrence(int numFire)
{
	//cout <<">>>>>>>>>>>>>>>>>>>> Fire of occurrence #" << numFire << " <<<<<<<<<<<<<<<<<<<<<<<" << endl;

	if (numFire == 0)
	{
		FIRE_xx10_OF_F_1 = true;
	}

	if (numFire == 1)
	{
		FIRE_xx11_OF_F_1 = true;
	}

	if (numFire == 2)
	{
		FIRE_xx10_OF_F_2 = true;
	}

	if (numFire == 3)
	{
		FIRE_xx11_OF_F_2 = true;
	}

	if (numFire == 4)
	{
		FIRE_xx17_OF_SF_1 = true;
	}

	if (numFire == 5)
	{
		FIRE_xx18_OF_SF_1 = true;
	}

	if (numFire == 6)
	{
		FIRE_xx19_OF_SF_1 = true;
	}

/* ---------- DECLARATION OF OCCURRENCE RULES------------ */

	// Occurrence xx10_OF_F_1
	if ((boolState[failF_OF_F_1] == false) && boolState[required_OF_F_1]) 
	{
		 
		if (FIRE_xx10_OF_F_1)
		{
			boolState[failF_OF_F_1]  =  true;
			FIRE_xx10_OF_F_1 = false;
		}
	}

	// Occurrence xx11_OF_F_1
	if (boolState[failF_OF_F_1] == true) 
	{
		 
		if (FIRE_xx11_OF_F_1)
		{
			boolState[failF_OF_F_1]  =  false;
			FIRE_xx11_OF_F_1 = false;
		}
	}

	// Occurrence xx10_OF_F_2
	if ((boolState[failF_OF_F_2] == false) && boolState[required_OF_F_2]) 
	{
		 
		if (FIRE_xx10_OF_F_2)
		{
			boolState[failF_OF_F_2]  =  true;
			FIRE_xx10_OF_F_2 = false;
		}
	}

	// Occurrence xx11_OF_F_2
	if (boolState[failF_OF_F_2] == true) 
	{
		 
		if (FIRE_xx11_OF_F_2)
		{
			boolState[failF_OF_F_2]  =  false;
			FIRE_xx11_OF_F_2 = false;
		}
	}

	// Occurrence xx17_OF_SF_1
	if ((boolState[failF_OF_SF_1] == false) && (boolState[required_OF_SF_1] && ( !boolState[failS_OF_SF_1]))) 
	{
		 
		if (FIRE_xx17_OF_SF_1)
		{
			boolState[failF_OF_SF_1]  =  true;
			FIRE_xx17_OF_SF_1 = false;
		}
	}

	// Occurrence xx18_OF_SF_1
	if ((boolState[failS_OF_SF_1] == false) && (( !boolState[required_OF_SF_1]) && ( !boolState[failF_OF_SF_1]))) 
	{
		 
		if (FIRE_xx18_OF_SF_1)
		{
			boolState[failS_OF_SF_1]  =  true;
			FIRE_xx18_OF_SF_1 = false;
		}
	}

	// Occurrence xx19_OF_SF_1
	if ((boolState[failS_OF_SF_1] == true) || (boolState[failF_OF_SF_1] == true)) 
	{
		 
		if (FIRE_xx19_OF_SF_1)
		{
			boolState[failS_OF_SF_1]  =  false;
			boolState[failF_OF_SF_1]  =  false;
			FIRE_xx19_OF_SF_1 = false;
		}
	}

}

std::vector<std::tuple<int, double, std::string, int>> storm::figaro::FigaroProgram_figaro_17_11::showFireableOccurrences()
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
     
	if ((boolState[failF_OF_F_1] == false) && boolState[required_OF_F_1])
	{
		//cout << "0 : xx10_OF_F_1 : FAULT failF  LABEL \"défaillance en fonctionnement %OBJET\"  DIST EXP (0.01)  INDUCING boolState[failF_OF_F_1]  =  TRUE" << endl;
		list.push_back(make_tuple(0, 0.01, "EXP", 0));
	}
	if (boolState[failF_OF_F_1] == true)
	{
		//cout << "1 : xx11_OF_F_1 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_F_1]  =  FALSE" << endl;
		list.push_back(make_tuple(1, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_F_2] == false) && boolState[required_OF_F_2])
	{
		//cout << "2 : xx10_OF_F_2 : FAULT failF  LABEL \"défaillance en fonctionnement %OBJET\"  DIST EXP (0.01)  INDUCING boolState[failF_OF_F_2]  =  TRUE" << endl;
		list.push_back(make_tuple(2, 0.01, "EXP", 0));
	}
	if (boolState[failF_OF_F_2] == true)
	{
		//cout << "3 : xx11_OF_F_2 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_F_2]  =  FALSE" << endl;
		list.push_back(make_tuple(3, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_SF_1] == false) && (boolState[required_OF_SF_1] && ( !boolState[failS_OF_SF_1])))
	{
		//cout << "4 : xx17_OF_SF_1 : FAULT failF  LABEL \"défaillance en fonctionnement %OBJET\"  DIST EXP (0.01)  INDUCING boolState[failF_OF_SF_1]  =  TRUE" << endl;
		list.push_back(make_tuple(4, 0.01, "EXP", 0));
	}
	if ((boolState[failS_OF_SF_1] == false) && (( !boolState[required_OF_SF_1]) && ( !boolState[failF_OF_SF_1])))
	{
		//cout << "5 : xx18_OF_SF_1 : FAULT failS  LABEL \"défaillance en attente %OBJET\"  DIST EXP (0.001)  INDUCING boolState[failS_OF_SF_1]  =  TRUE" << endl;
		list.push_back(make_tuple(5, 0.001, "EXP", 0));
	}
	if ((boolState[failS_OF_SF_1] == true) || (boolState[failF_OF_SF_1] == true))
	{
		//cout << "6 : xx19_OF_SF_1 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failS_OF_SF_1]  =  FALSE,failF_OF_SF_1  =  FALSE" << endl;
		list.push_back(make_tuple(6, 0.1, "EXP", 0));
	}
	return list;
}


void storm::figaro::FigaroProgram_figaro_17_11::runOnceInteractionStep_initialization()
{
	if (boolState[failF_OF_F_1] == true )
	{
		boolState[S_OF_F_1]  =  true;
	}

	if (boolState[failF_OF_F_2] == true )
	{
		boolState[S_OF_F_2]  =  true;
	}

	if ((boolState[failS_OF_SF_1] == true) || (boolState[failF_OF_SF_1] == true) )
	{
		boolState[S_OF_SF_1]  =  true;
	}

}


void storm::figaro::FigaroProgram_figaro_17_11::runOnceInteractionStep_propagate_effect_S()
{
	if (boolState[S_OF_OR_1] && boolState[S_OF_F_1] )
	{
		boolState[S_OF_AND_1]  =  true;
	}

	if (boolState[S_OF_SF_1] || boolState[S_OF_F_2] )
	{
		boolState[S_OF_OR_1]  =  true;
	}

	if (boolState[S_OF_AND_1] )
	{
		boolState[S_OF_UE_1]  =  true;
	}

}


void storm::figaro::FigaroProgram_figaro_17_11::runOnceInteractionStep_propagate_effect_required()
{
	if ( !boolState[required_OF_UE_1] )
	{
		boolState[required_OF_AND_1]  =  false;
	}

	if (boolState[relevant_evt_OF_UE_1] && ( !boolState[S_OF_UE_1]) )
	{
		boolState[relevant_evt_OF_AND_1]  =  true;
	}

	if ( !boolState[required_OF_AND_1] )
	{
		boolState[required_OF_F_1]  =  false;
	}

	if ((boolState[relevant_evt_OF_AND_1] && ( !boolState[S_OF_AND_1])) || (  boolState[relevant_evt_OF_OR_1] && ( !boolState[S_OF_OR_1])) )
	{
		boolState[relevant_evt_OF_F_1]  =  true;
	}

	if ( !boolState[required_OF_OR_1] )
	{
		boolState[required_OF_F_2]  =  false;
	}

	if (boolState[relevant_evt_OF_OR_1] && ( !boolState[S_OF_OR_1]) )
	{
		boolState[relevant_evt_OF_F_2]  =  true;
	}

	if (( !boolState[required_OF_AND_1]) || ( !boolState[S_OF_F_1]) )
	{
		boolState[required_OF_OR_1]  =  false;
	}

	if (boolState[relevant_evt_OF_AND_1] && ( !boolState[S_OF_AND_1]) )
	{
		boolState[relevant_evt_OF_OR_1]  =  true;
	}

	if ( !boolState[required_OF_OR_1] )
	{
		boolState[required_OF_SF_1]  =  false;
	}

	if (boolState[relevant_evt_OF_OR_1] && ( !boolState[S_OF_OR_1]) )
	{
		boolState[relevant_evt_OF_SF_1]  =  true;
	}



	boolState[relevant_evt_OF_UE_1]  =  true  ;

}


void storm::figaro::FigaroProgram_figaro_17_11::runOnceInteractionStep_propagate_leaves()
{


	boolState[already_S_OF_AND_1]  =  boolState[S_OF_AND_1]  ;



	boolState[already_S_OF_F_1]  =  boolState[S_OF_F_1]  ;



	boolState[already_S_OF_F_2]  =  boolState[S_OF_F_2]  ;



	boolState[already_S_OF_OR_1]  =  boolState[S_OF_OR_1]  ;



	boolState[already_S_OF_SF_1]  =  boolState[S_OF_SF_1]  ;



	boolState[already_S_OF_UE_1]  =  boolState[S_OF_UE_1]  ;

}

void
storm::figaro::FigaroProgram_figaro_17_11::runInteractions() {
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
    }void storm::figaro::FigaroProgram_figaro_17_11::printstatetuple(){

                std::cout<<"\n State information: (";
                for (int i=0; i<boolFailureState.size(); i++)
                    {
                    std::cout<<boolFailureState.at(i);
                    }
                std::cout<<")";

            }
        int_fast64_t storm::figaro::FigaroProgram_figaro_17_11::stateSize() const{
            return numBoolState;
}
        void storm::figaro::FigaroProgram_figaro_17_11::fireinsttransitiongroup(std::string user_input_ins)

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
    