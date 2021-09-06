#include <iostream>
#include "FigaroModelfigaro_11_inst_and.h"

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
        
void storm::figaro::FigaroProgram_figaro_11_inst_and::init()
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
	REINITIALISATION_OF_required_OF_I_1 = true;
	boolState[already_S_OF_I_1] = false;
	REINITIALISATION_OF_S_OF_I_1 = false;
	REINITIALISATION_OF_relevant_evt_OF_I_1 = false;
	boolState[failI_OF_I_1] = false;
	REINITIALISATION_OF_to_be_fired_OF_I_1 = false;
	boolState[already_standby_OF_I_1] = false;
	boolState[already_required_OF_I_1] = false;
	REINITIALISATION_OF_required_OF_UE_1 = true;
	boolState[already_S_OF_UE_1] = false;
	REINITIALISATION_OF_S_OF_UE_1 = false;
	REINITIALISATION_OF_relevant_evt_OF_UE_1 = false;

	/* ---------- DECLARATION OF OCCURRENCE RULES FIRING FLAGS ------------ */
	FIRE_xx10_OF_F_1 = false;
	FIRE_xx11_OF_F_1 = false;
	FIRE_xx23_OF_I_1_INS_2 = false;
	FIRE_xx23_OF_I_1_INS_3 = false;
	FIRE_xx24_OF_I_1 = false;

}

void storm::figaro::FigaroProgram_figaro_11_inst_and::saveCurrentState()
{
	// cout <<">>>>>>>>>>>>>>>>>>>> Saving current state  <<<<<<<<<<<<<<<<<<<<<<<" << endl;
	backupBoolState = boolState ;
	backupFloatState = floatState ;
	backupIntState = intState ;
	backupEnumState = enumState ;
}

int storm::figaro::FigaroProgram_figaro_11_inst_and::compareStates()
{
	// cout <<">>>>>>>>>>>>>>>>>>>> Comparing state with previous one (return number of differences) <<<<<<<<<<<<<<<<<<<<<<<" << endl;

	return (backupBoolState != boolState) + (backupFloatState != floatState) + (backupIntState != intState) + (backupEnumState != enumState); 
}

void storm::figaro::FigaroProgram_figaro_11_inst_and::printState()
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
	//cout << "Attribute :  boolState[required_OF_I_1] | Value : " << boolState[required_OF_I_1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_I_1] | Value : " << boolState[already_S_OF_I_1] << endl;
	//cout << "Attribute :  boolState[S_OF_I_1] | Value : " << boolState[S_OF_I_1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_I_1] | Value : " << boolState[relevant_evt_OF_I_1] << endl;
	//cout << "Attribute :  boolState[failI_OF_I_1] | Value : " << boolState[failI_OF_I_1] << endl;
	//cout << "Attribute :  boolState[to_be_fired_OF_I_1] | Value : " << boolState[to_be_fired_OF_I_1] << endl;
	//cout << "Attribute :  boolState[already_standby_OF_I_1] | Value : " << boolState[already_standby_OF_I_1] << endl;
	//cout << "Attribute :  boolState[already_required_OF_I_1] | Value : " << boolState[already_required_OF_I_1] << endl;
	//cout << "Attribute :  boolState[required_OF_UE_1] | Value : " << boolState[required_OF_UE_1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_UE_1] | Value : " << boolState[already_S_OF_UE_1] << endl;
	//cout << "Attribute :  boolState[S_OF_UE_1] | Value : " << boolState[S_OF_UE_1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_UE_1] | Value : " << boolState[relevant_evt_OF_UE_1] << endl;
}

bool storm::figaro::FigaroProgram_figaro_11_inst_and::figaromodelhasinstransitions()
{
	return true;
}
void storm::figaro::FigaroProgram_figaro_11_inst_and::doReinitialisations()
{
	boolState[required_OF_AND_1] = REINITIALISATION_OF_required_OF_AND_1;
	boolState[S_OF_AND_1] = REINITIALISATION_OF_S_OF_AND_1;
	boolState[relevant_evt_OF_AND_1] = REINITIALISATION_OF_relevant_evt_OF_AND_1;
	boolState[required_OF_F_1] = REINITIALISATION_OF_required_OF_F_1;
	boolState[S_OF_F_1] = REINITIALISATION_OF_S_OF_F_1;
	boolState[relevant_evt_OF_F_1] = REINITIALISATION_OF_relevant_evt_OF_F_1;
	boolState[required_OF_I_1] = REINITIALISATION_OF_required_OF_I_1;
	boolState[S_OF_I_1] = REINITIALISATION_OF_S_OF_I_1;
	boolState[relevant_evt_OF_I_1] = REINITIALISATION_OF_relevant_evt_OF_I_1;
	boolState[to_be_fired_OF_I_1] = REINITIALISATION_OF_to_be_fired_OF_I_1;
	boolState[required_OF_UE_1] = REINITIALISATION_OF_required_OF_UE_1;
	boolState[S_OF_UE_1] = REINITIALISATION_OF_S_OF_UE_1;
	boolState[relevant_evt_OF_UE_1] = REINITIALISATION_OF_relevant_evt_OF_UE_1;
}

void storm::figaro::FigaroProgram_figaro_11_inst_and::fireOccurrence(int numFire)
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
		FIRE_xx23_OF_I_1_INS_2 = true;
	}

	if (numFire == 3)
	{
		FIRE_xx23_OF_I_1_INS_3 = true;
	}

	if (numFire == 4)
	{
		FIRE_xx24_OF_I_1 = true;
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

	// Occurrence xx23_OF_I_1

	if ((boolState[failI_OF_I_1] == false) && boolState[to_be_fired_OF_I_1]) 
	{
	
		
		if (FIRE_xx23_OF_I_1_INS_2) 
		{
			boolState[failI_OF_I_1]  =  true;
			boolState[already_standby_OF_I_1]  =  false;
			boolState[already_required_OF_I_1]  =  false;
			FIRE_xx23_OF_I_1_INS_2 = false;
		}
	
	}
	if ((boolState[failI_OF_I_1] == false) && boolState[to_be_fired_OF_I_1]) 
	{
	
		
		if (FIRE_xx23_OF_I_1_INS_3) 
		{
			boolState[already_standby_OF_I_1]  =  false;
			boolState[already_required_OF_I_1]  =  false;
			FIRE_xx23_OF_I_1_INS_3 = false;
		}
	
	}
	// Occurrence xx24_OF_I_1
	if (boolState[failI_OF_I_1] == true) 
	{
		 
		if (FIRE_xx24_OF_I_1)
		{
			boolState[failI_OF_I_1]  =  false;
			FIRE_xx24_OF_I_1 = false;
		}
	}

}

std::vector<std::tuple<int, double, std::string, int>> storm::figaro::FigaroProgram_figaro_11_inst_and::showFireableOccurrences()
{
	std::vector<std::tuple<int, double, std::string, int>> list = {};
	//cout <<"\n==================== List of fireable occurrences :  ====================" << endl;

	if ((boolState[failI_OF_I_1] == false) && boolState[to_be_fired_OF_I_1])
	{
		//cout << "2 :  INS_SUB_COUNT (1) |FAULT | failI  LABEL \"défaillance instantanée %OBJET\" | DIST INS (0.5) | INDUCING boolState[failI_OF_I_1]  =  TRUE,already_standby_OF_I_1  =  FALSE,already_required_OF_I_1  =  FALSE" << endl;
		list.push_back(make_tuple(2, 0.5, "INS", 1));
	}
	if ((boolState[failI_OF_I_1] == false) && boolState[to_be_fired_OF_I_1])
	{
		//cout << "3 :  INS_SUB_COUNT (1) |TRANSITION | good | DIST INS (0.5) | INDUCING boolState[already_standby_OF_I_1]  =  FALSE,already_required_OF_I_1  =  FALSE" << endl;
		list.push_back(make_tuple(3, 0.5, "INS", 1));
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
	if (boolState[failI_OF_I_1] == true)
	{
		//cout << "4 : xx24_OF_I_1 : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failI_OF_I_1]  =  FALSE" << endl;
		list.push_back(make_tuple(4, 0.1, "EXP", 0));
	}
	return list;
}


void storm::figaro::FigaroProgram_figaro_11_inst_and::runOnceInteractionStep_initialization()
{
	if (boolState[failF_OF_F_1] == true )
	{
		boolState[S_OF_F_1]  =  true;
	}

	if (boolState[failI_OF_I_1] == true )
	{
		boolState[S_OF_I_1]  =  true;
	}

}


void storm::figaro::FigaroProgram_figaro_11_inst_and::runOnceInteractionStep_propagate_effect_S()
{
	if (boolState[S_OF_F_1] && boolState[S_OF_I_1] )
	{
		boolState[S_OF_AND_1]  =  true;
	}

	if (boolState[S_OF_AND_1] )
	{
		boolState[S_OF_UE_1]  =  true;
	}

}


void storm::figaro::FigaroProgram_figaro_11_inst_and::runOnceInteractionStep_propagate_effect_required()
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

	if ((boolState[relevant_evt_OF_AND_1] && ( !boolState[S_OF_AND_1])) || (  boolState[relevant_evt_OF_I_1] && ( !boolState[S_OF_I_1])) )
	{
		boolState[relevant_evt_OF_F_1]  =  true;
	}

	if (( !boolState[required_OF_AND_1]) || ( !boolState[S_OF_F_1]) )
	{
		boolState[required_OF_I_1]  =  false;
	}

	if (boolState[relevant_evt_OF_AND_1] && ( !boolState[S_OF_AND_1]) )
	{
		boolState[relevant_evt_OF_I_1]  =  true;
	}



	boolState[relevant_evt_OF_UE_1]  =  true  ;

}


void storm::figaro::FigaroProgram_figaro_11_inst_and::runOnceInteractionStep_propagate_leaves()
{


	boolState[already_S_OF_AND_1]  =  boolState[S_OF_AND_1]  ;



	boolState[already_S_OF_F_1]  =  boolState[S_OF_F_1]  ;



	boolState[already_S_OF_I_1]  =  boolState[S_OF_I_1]  ;

	if (( !boolState[required_OF_I_1]) && (( !boolState[already_standby_OF_I_1]) && (   !boolState[already_required_OF_I_1])) )
	{
		boolState[already_standby_OF_I_1]  =  true;
	}



	boolState[already_S_OF_UE_1]  =  boolState[S_OF_UE_1]  ;

}


void storm::figaro::FigaroProgram_figaro_11_inst_and::runOnceInteractionStep_tops()
{
	if (boolState[required_OF_I_1] && boolState[already_standby_OF_I_1] )
	{
		boolState[to_be_fired_OF_I_1]  =  true;
	}

}

void
storm::figaro::FigaroProgram_figaro_11_inst_and::runInteractions() {
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
    }void storm::figaro::FigaroProgram_figaro_11_inst_and::printstatetuple(){

                std::cout<<"\n State information: (";
                for (int i=0; i<boolFailureState.size(); i++)
                    {
                    std::cout<<boolFailureState.at(i);
                    }
                std::cout<<")";

            }
        int_fast64_t storm::figaro::FigaroProgram_figaro_11_inst_and::stateSize() const{
            return numBoolState;
}
        void storm::figaro::FigaroProgram_figaro_11_inst_and::fireinsttransitiongroup(std::string user_input_ins)

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
    