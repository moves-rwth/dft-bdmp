

#include "FigaroModelfigaro_and.h"

#include <iostream>
#include <cmath>

namespace storm{
    namespace figaro{
        double storm::figaro::FigaroProgram_figaro_and::lfact(int i){
            double res = 0;
            while(i>0)
                res += std::log(i);
            return res;
        }
        /* ---------- MANAGEMENT OF ?= OPERATOR ---------- */
        std::vector<bool>choices(bool c1, std::vector<bool>v1 = std::vector<bool>()) {
            v1.push_back(c1);
            return v1;
        }
        std::vector<int>choices(int c1, std::vector<int>v1 = std::vector<int>()) {
            v1.push_back(c1);
            return v1;
        }
        std::vector<double>choices(double c1, std::vector<double>v1 = std::vector<double>()) {
            v1.push_back(c1);
            return v1;
        }
        std::vector<int>choices(int c1, std::vector<bool>&v1) {
            return choices(c1, std::vector<int>(v1.begin(),v1.end()));
        }
        std::vector<double>choices(double c1, std::vector<bool>&v1) {
            return choices(c1, std::vector<double>(v1.begin(),v1.end()));
        }
        std::vector<double>choices(double c1, std::vector<int>&v1) {
            return choices(c1, std::vector<double>(v1.begin(), v1.end()));
        }
        template<typename TYPE>TYPE operator%(int ichoice, std::vector<TYPE> const&choices) {
            if (--ichoice < 0 || ichoice >= (int)choices.size())
                return choices.back();
            return choices[ichoice];
        }

void storm::figaro::FigaroProgram_figaro_and::init()
{
    std::cout <<">>>>>>>>>>>>>>>>>>>> Initialization of variables <<<<<<<<<<<<<<<<<<<<<<<" << std::endl;

	boolState[already_S_OF_AND_1] = false;
	boolState[already_S_OF_F_1] = false;
	boolState[failF_OF_F_1] = false;
	boolState[already_S_OF_F_2] = false;
	boolState[failF_OF_F_2] = false;
	boolState[already_S_OF_UE_1] = false;
	/* ---------- DECLARATION OF OCCURRENCE RULES FIRING FLAGS ------------ */
	FIRE_xx10_OF_F_1 = false;
	FIRE_xx11_OF_F_1 = false;
	FIRE_xx10_OF_F_2 = false;
	FIRE_xx11_OF_F_2 = false;
	doReinitialisations();
}

void storm::figaro::FigaroProgram_figaro_and::saveCurrentState()
{
    // std::cout <<">>>>>>>>>>>>>>>>>>>> Saving current state  <<<<<<<<<<<<<<<<<<<<<<<" << std::endl;
    backupBoolState = boolState ;
    backupDoubleState = doubleState ;
    backupIntState = intState ;
    backupEnumState = enumState ;
}

int storm::figaro::FigaroProgram_figaro_and::compareStates()
{
    // std::cout <<">>>>>>>>>>>>>>>>>>>> Comparing state with previous one (return number of differences) <<<<<<<<<<<<<<<<<<<<<<<" << std::endl;

    return (backupBoolState != boolState) + (backupDoubleState != doubleState) + (backupIntState != intState) + (backupEnumState != enumState); 
}

void storm::figaro::FigaroProgram_figaro_and::printState()
{
    std::cout <<"\n==================== Print of the current state :  ====================" << std::endl;

	std::cout << "Attribute :  boolState[required_OF_AND_1] | Value : " << boolState[required_OF_AND_1] << std::endl;
	std::cout << "Attribute :  boolState[already_S_OF_AND_1] | Value : " << boolState[already_S_OF_AND_1] << std::endl;
	std::cout << "Attribute :  boolState[S_OF_AND_1] | Value : " << boolState[S_OF_AND_1] << std::endl;
	std::cout << "Attribute :  boolState[relevant_evt_OF_AND_1] | Value : " << boolState[relevant_evt_OF_AND_1] << std::endl;
	std::cout << "Attribute :  boolState[required_OF_F_1] | Value : " << boolState[required_OF_F_1] << std::endl;
	std::cout << "Attribute :  boolState[already_S_OF_F_1] | Value : " << boolState[already_S_OF_F_1] << std::endl;
	std::cout << "Attribute :  boolState[S_OF_F_1] | Value : " << boolState[S_OF_F_1] << std::endl;
	std::cout << "Attribute :  boolState[relevant_evt_OF_F_1] | Value : " << boolState[relevant_evt_OF_F_1] << std::endl;
	std::cout << "Attribute :  boolState[failF_OF_F_1] | Value : " << boolState[failF_OF_F_1] << std::endl;
	std::cout << "Attribute :  boolState[required_OF_F_2] | Value : " << boolState[required_OF_F_2] << std::endl;
	std::cout << "Attribute :  boolState[already_S_OF_F_2] | Value : " << boolState[already_S_OF_F_2] << std::endl;
	std::cout << "Attribute :  boolState[S_OF_F_2] | Value : " << boolState[S_OF_F_2] << std::endl;
	std::cout << "Attribute :  boolState[relevant_evt_OF_F_2] | Value : " << boolState[relevant_evt_OF_F_2] << std::endl;
	std::cout << "Attribute :  boolState[failF_OF_F_2] | Value : " << boolState[failF_OF_F_2] << std::endl;
	std::cout << "Attribute :  boolState[required_OF_UE_1] | Value : " << boolState[required_OF_UE_1] << std::endl;
	std::cout << "Attribute :  boolState[already_S_OF_UE_1] | Value : " << boolState[already_S_OF_UE_1] << std::endl;
	std::cout << "Attribute :  boolState[S_OF_UE_1] | Value : " << boolState[S_OF_UE_1] << std::endl;
	std::cout << "Attribute :  boolState[relevant_evt_OF_UE_1] | Value : " << boolState[relevant_evt_OF_UE_1] << std::endl;
}

bool storm::figaro::FigaroProgram_figaro_and::figaromodelhasinstransitions()
{
    return false;
}

void storm::figaro::FigaroProgram_figaro_and::updateFailureStates()
{
    // ------------------- Handling of FailureState elements --------------------------------
	boolFailureState[exp0] = (boolState[S_OF_UE_1] && (CurrentState & ExpectedStates[0]) != 0);
}

void storm::figaro::FigaroProgram_figaro_and::doReinitialisations()
{
	boolState[required_OF_AND_1] = true;
	boolState[S_OF_AND_1] = false;
	boolState[relevant_evt_OF_AND_1] = false;
	boolState[required_OF_F_1] = true;
	boolState[S_OF_F_1] = false;
	boolState[relevant_evt_OF_F_1] = false;
	boolState[required_OF_F_2] = true;
	boolState[S_OF_F_2] = false;
	boolState[relevant_evt_OF_F_2] = false;
	boolState[required_OF_UE_1] = true;
	boolState[S_OF_UE_1] = false;
	boolState[relevant_evt_OF_UE_1] = false;
}

void storm::figaro::FigaroProgram_figaro_and::fireOccurrence(int numFire)
{
    std::cout <<">>>>>>>>>>>>>>>>>>>> Fire of occurrence #" << numFire << " <<<<<<<<<<<<<<<<<<<<<<<" << std::endl;

	if (numFire == 0)
		FIRE_xx10_OF_F_1 = true;
	if (numFire == 1)
		FIRE_xx11_OF_F_1 = true;
	if (numFire == 2)
		FIRE_xx10_OF_F_2 = true;
	if (numFire == 3)
		FIRE_xx11_OF_F_2 = true;
	/* ---------- DECLARATION OF OCCURRENCE RULES------------ */

	// Occurrence xx10_OF_F_1
	if ((boolState[failF_OF_F_1] == false) && boolState[required_OF_F_1])
		if (FIRE_xx10_OF_F_1)
		{
			boolState[failF_OF_F_1] = true;
			FIRE_xx10_OF_F_1 = false;
		}
	// Occurrence xx11_OF_F_1
	if (boolState[failF_OF_F_1] == true)
		if (FIRE_xx11_OF_F_1)
		{
			boolState[failF_OF_F_1] = false;
			FIRE_xx11_OF_F_1 = false;
		}
	// Occurrence xx10_OF_F_2
	if ((boolState[failF_OF_F_2] == false) && boolState[required_OF_F_2])
		if (FIRE_xx10_OF_F_2)
		{
			boolState[failF_OF_F_2] = true;
			FIRE_xx10_OF_F_2 = false;
		}
	// Occurrence xx11_OF_F_2
	if (boolState[failF_OF_F_2] == true)
		if (FIRE_xx11_OF_F_2)
		{
			boolState[failF_OF_F_2] = false;
			FIRE_xx11_OF_F_2 = false;
		}
}
std::vector<std::tuple<int, double, std::string, int>> storm::figaro::FigaroProgram_figaro_and::showFireableOccurrences()
{
    std::vector<std::tuple<int, double, std::string, int>> list = {};
    std::cout <<"\n==================== List of fireable occurrences :  ====================" << std::endl;

    if ((ins_transition_found = (list.size() > 0)))
    {
		CurrentState = st_vanishing;
		updateFailureStates();
		return list;
	}
	if ((boolState[failF_OF_F_1] == false) && boolState[required_OF_F_1])
	{
		#ifdef INTERACTIVE
			std::cout << "0 : xx10_OF_F_1 : FAULT failF LABEL \"défaillance en fonctionnement %OBJET\"  DIST EXP (0.1)  INDUCING failF_OF_F_1 = true" << std::endl;
		#endif
		list.push_back(std::make_tuple(0, 0.1, "EXP", 0));
	}
	if (boolState[failF_OF_F_1] == true)
	{
		#ifdef INTERACTIVE
			std::cout << "1 : xx11_OF_F_1 : REPAIR rep  DIST EXP (0.0001)  INDUCING failF_OF_F_1 = false" << std::endl;
		#endif
		list.push_back(std::make_tuple(1, 0.0001, "EXP", 0));
	}
	if ((boolState[failF_OF_F_2] == false) && boolState[required_OF_F_2])
	{
		#ifdef INTERACTIVE
			std::cout << "2 : xx10_OF_F_2 : FAULT failF LABEL \"défaillance en fonctionnement %OBJET\"  DIST EXP (0.1)  INDUCING failF_OF_F_2 = true" << std::endl;
		#endif
		list.push_back(std::make_tuple(2, 0.1, "EXP", 0));
	}
	if (boolState[failF_OF_F_2] == true)
	{
		#ifdef INTERACTIVE
			std::cout << "3 : xx11_OF_F_2 : REPAIR rep  DIST EXP (0.0001)  INDUCING failF_OF_F_2 = false" << std::endl;
		#endif
		list.push_back(std::make_tuple(3, 0.0001, "EXP", 0));
	}
	CurrentState = list.empty()?st_absorbing:st_tangible;
	updateFailureStates();
	return list;
}
void storm::figaro::FigaroProgram_figaro_and::runOnceInteractionStep_initialization()
{
	if (boolState[failF_OF_F_1] == true)
	{
		boolState[S_OF_F_1] = true;
	}
	if (boolState[failF_OF_F_2] == true)
	{
		boolState[S_OF_F_2] = true;
	}
}
void storm::figaro::FigaroProgram_figaro_and::runOnceInteractionStep_propagate_effect_S()
{
	if (boolState[S_OF_F_1] && boolState[S_OF_F_2])
	{
		boolState[S_OF_AND_1] = true;
	}
	if (boolState[S_OF_AND_1])
	{
		boolState[S_OF_UE_1] = true;
	}
}
void storm::figaro::FigaroProgram_figaro_and::runOnceInteractionStep_propagate_effect_required()
{
	if (! boolState[required_OF_UE_1])
	{
		boolState[required_OF_AND_1] = false;
	}
	if (boolState[relevant_evt_OF_UE_1] && (! boolState[S_OF_UE_1]))
	{
		boolState[relevant_evt_OF_AND_1] = true;
	}
	if (! boolState[required_OF_AND_1])
	{
		boolState[required_OF_F_1] = false;
	}
	if (boolState[relevant_evt_OF_AND_1] && (! boolState[S_OF_AND_1]))
	{
		boolState[relevant_evt_OF_F_1] = true;
	}
	if (! boolState[required_OF_AND_1])
	{
		boolState[required_OF_F_2] = false;
	}
	if (boolState[relevant_evt_OF_AND_1] && (! boolState[S_OF_AND_1]))
	{
		boolState[relevant_evt_OF_F_2] = true;
	}
	boolState[relevant_evt_OF_UE_1] = true;
}
void storm::figaro::FigaroProgram_figaro_and::runOnceInteractionStep_propagate_leaves()
{
	boolState[already_S_OF_AND_1] = boolState[S_OF_AND_1];
	boolState[already_S_OF_F_1] = boolState[S_OF_F_1];
	boolState[already_S_OF_F_2] = boolState[S_OF_F_2];
	boolState[already_S_OF_UE_1] = boolState[S_OF_UE_1];
}
    
void storm::figaro::FigaroProgram_figaro_and::runInteractions() {
    int counter = 0;
    int comparator = 1;
    CurrentState = st_none;
    doReinitialisations();
    int max_interactions_loop = 200; 

 	counter = 0;
 	comparator = 1;
    do
 	{
		//std::cout << counter << std::endl;
		saveCurrentState();
		runOnceInteractionStep_initialization();
		comparator = compareStates();
		counter++;
 	} while (comparator > 0 && counter < max_interactions_loop);
 	if (comparator <= 0)
 	{
		std::cout << "==> Stabilisation of interactions at loop #" << counter << " for runInteractionStep_initialization() ." << std::endl;
 	}
 	else {
		std::cout << "==> Maximum of interactions loop  reached : #" << counter <<" for runOnceInteractionStep_initialization()." << std::endl;
 	}
 	counter = 0;
 	comparator = 1;
    do
 	{
		//std::cout << counter << std::endl;
		saveCurrentState();
		runOnceInteractionStep_propagate_effect_S();
		comparator = compareStates();
		counter++;
 	} while (comparator > 0 && counter < max_interactions_loop);
 	if (comparator <= 0)
 	{
		std::cout << "==> Stabilisation of interactions at loop #" << counter << " for runInteractionStep_propagate_effect_S() ." << std::endl;
 	}
 	else {
		std::cout << "==> Maximum of interactions loop  reached : #" << counter <<" for runOnceInteractionStep_propagate_effect_S()." << std::endl;
 	}
 	counter = 0;
 	comparator = 1;
    do
 	{
		//std::cout << counter << std::endl;
		saveCurrentState();
		runOnceInteractionStep_propagate_effect_required();
		comparator = compareStates();
		counter++;
 	} while (comparator > 0 && counter < max_interactions_loop);
 	if (comparator <= 0)
 	{
		std::cout << "==> Stabilisation of interactions at loop #" << counter << " for runInteractionStep_propagate_effect_required() ." << std::endl;
 	}
 	else {
		std::cout << "==> Maximum of interactions loop  reached : #" << counter <<" for runOnceInteractionStep_propagate_effect_required()." << std::endl;
 	}
 	counter = 0;
 	comparator = 1;
    do
 	{
		//std::cout << counter << std::endl;
		saveCurrentState();
		runOnceInteractionStep_propagate_leaves();
		comparator = compareStates();
		counter++;
 	} while (comparator > 0 && counter < max_interactions_loop);
 	if (comparator <= 0)
 	{
		std::cout << "==> Stabilisation of interactions at loop #" << counter << " for runInteractionStep_propagate_leaves() ." << std::endl;
 	}
 	else {
		std::cout << "==> Maximum of interactions loop  reached : #" << counter <<" for runOnceInteractionStep_propagate_leaves()." << std::endl;
 	}
	std::cout << std::endl;
}
void storm::figaro::FigaroProgram_figaro_and::printstatetuple(){
    std::cout<<"\n State information: (";
    for (int i=0; i<(int)boolFailureState.size(); i++)
    {
        std::cout<<boolFailureState.at(i);
    }
    std::cout<<")";    
}
    
void storm::figaro::FigaroProgram_figaro_and::fireinsttransitiongroup(std::string user_input_ins)
{
    std::vector<int> list_user_inputs = {};
    int user_input = -2;
    std::stringstream ss(user_input_ins);
    for (int i; ss >> i;) {
        list_user_inputs.push_back(i);
        if (ss.peek() == ',')
            ss.ignore();
    }
    
    for (size_t i = 0; i < list_user_inputs.size(); i++)
    {
        std::cout << list_user_inputs[i] << std::endl;
        user_input = list_user_inputs[i];
        if (user_input == -1)
            break;
        fireOccurrence(user_input);
    }
}
}
}
