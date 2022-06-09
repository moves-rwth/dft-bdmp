

#include "FigaroModel.h"

#include <iostream>
#include <cmath>

namespace storm{
    namespace figaro{
        double storm::figaro::FigaroProgram1::lfact(int i){
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

void storm::figaro::FigaroProgram1::init()
{
    std::cout <<">>>>>>>>>>>>>>>>>>>> Initialization of variables <<<<<<<<<<<<<<<<<<<<<<<" << std::endl;

	enumState[state_OF_Backup_1] = standby;
	intState[rank_OF_Backup_1] = 0;
	boolState[fail_OF_Backup_1] = false;
	enumState[state_OF_Block_1] = working;
	intState[rank_OF_Block_1] = 0;
	boolState[fail_OF_Block_1] = false;
	enumState[state_OF_Block_2] = working;
	intState[rank_OF_Block_2] = 0;
	boolState[fail_OF_Block_2] = false;
	enumState[state_OF_Block_3] = working;
	intState[rank_OF_Block_3] = 0;
	boolState[fail_OF_Block_3] = false;
	enumState[state_OF_Block_4] = working;
	intState[rank_OF_Block_4] = 0;
	boolState[fail_OF_Block_4] = false;
	boolState[free_OF_rep_1] = true;
	boolState[dequeue_OF_rep_1] = false;
	/* ---------- DECLARATION OF OCCURRENCE RULES FIRING FLAGS ------------ */
	FIRE_fail_in_op_OF_Backup_1 = false;
	FIRE_xx1_OF_Backup_1 = false;
	FIRE_xx2_OF_Backup_1_INS_1 = false;
	FIRE_xx2_OF_Backup_1_INS_2 = false;
	FIRE_fail_in_op_OF_Block_1 = false;
	FIRE_xx1_OF_Block_1 = false;
	FIRE_fail_in_op_OF_Block_2 = false;
	FIRE_xx1_OF_Block_2 = false;
	FIRE_fail_in_op_OF_Block_3 = false;
	FIRE_xx1_OF_Block_3 = false;
	FIRE_fail_in_op_OF_Block_4 = false;
	FIRE_xx1_OF_Block_4 = false;
	doReinitialisations();
}

void storm::figaro::FigaroProgram1::saveCurrentState()
{
    // std::cout <<">>>>>>>>>>>>>>>>>>>> Saving current state  <<<<<<<<<<<<<<<<<<<<<<<" << std::endl;
    backupBoolState = boolState ;
    backupDoubleState = doubleState ;
    backupIntState = intState ;
    backupEnumState = enumState ;
}

int storm::figaro::FigaroProgram1::compareStates()
{
    // std::cout <<">>>>>>>>>>>>>>>>>>>> Comparing state with previous one (return number of differences) <<<<<<<<<<<<<<<<<<<<<<<" << std::endl;

    return (backupBoolState != boolState) + (backupDoubleState != doubleState) + (backupIntState != intState) + (backupEnumState != enumState); 
}

void storm::figaro::FigaroProgram1::printState()
{
    std::cout <<"\n==================== Print of the current state :  ====================" << std::endl;

	std::cout << "Attribute :  doubleState[capacity_OF_Backup_1] | Value : " << doubleState[capacity_OF_Backup_1] << std::endl;
	std::cout << "Attribute :  boolState[null_production_OF_Backup_1] | Value : " << boolState[null_production_OF_Backup_1] << std::endl;
	std::cout << "Attribute :  enumState[state_OF_Backup_1] | Value : " << enumState[state_OF_Backup_1] << std::endl;
	std::cout << "Attribute :  intState[rank_OF_Backup_1] | Value : " << intState[rank_OF_Backup_1] << std::endl;
	std::cout << "Attribute :  boolState[dequeue_OF_Backup_1] | Value : " << boolState[dequeue_OF_Backup_1] << std::endl;
	std::cout << "Attribute :  boolState[fail_OF_Backup_1] | Value : " << boolState[fail_OF_Backup_1] << std::endl;
	std::cout << "Attribute :  doubleState[capacity_OF_Block_1] | Value : " << doubleState[capacity_OF_Block_1] << std::endl;
	std::cout << "Attribute :  boolState[null_production_OF_Block_1] | Value : " << boolState[null_production_OF_Block_1] << std::endl;
	std::cout << "Attribute :  enumState[state_OF_Block_1] | Value : " << enumState[state_OF_Block_1] << std::endl;
	std::cout << "Attribute :  intState[rank_OF_Block_1] | Value : " << intState[rank_OF_Block_1] << std::endl;
	std::cout << "Attribute :  boolState[dequeue_OF_Block_1] | Value : " << boolState[dequeue_OF_Block_1] << std::endl;
	std::cout << "Attribute :  boolState[fail_OF_Block_1] | Value : " << boolState[fail_OF_Block_1] << std::endl;
	std::cout << "Attribute :  doubleState[capacity_OF_Block_2] | Value : " << doubleState[capacity_OF_Block_2] << std::endl;
	std::cout << "Attribute :  boolState[null_production_OF_Block_2] | Value : " << boolState[null_production_OF_Block_2] << std::endl;
	std::cout << "Attribute :  enumState[state_OF_Block_2] | Value : " << enumState[state_OF_Block_2] << std::endl;
	std::cout << "Attribute :  intState[rank_OF_Block_2] | Value : " << intState[rank_OF_Block_2] << std::endl;
	std::cout << "Attribute :  boolState[dequeue_OF_Block_2] | Value : " << boolState[dequeue_OF_Block_2] << std::endl;
	std::cout << "Attribute :  boolState[fail_OF_Block_2] | Value : " << boolState[fail_OF_Block_2] << std::endl;
	std::cout << "Attribute :  doubleState[capacity_OF_Block_3] | Value : " << doubleState[capacity_OF_Block_3] << std::endl;
	std::cout << "Attribute :  boolState[null_production_OF_Block_3] | Value : " << boolState[null_production_OF_Block_3] << std::endl;
	std::cout << "Attribute :  enumState[state_OF_Block_3] | Value : " << enumState[state_OF_Block_3] << std::endl;
	std::cout << "Attribute :  intState[rank_OF_Block_3] | Value : " << intState[rank_OF_Block_3] << std::endl;
	std::cout << "Attribute :  boolState[dequeue_OF_Block_3] | Value : " << boolState[dequeue_OF_Block_3] << std::endl;
	std::cout << "Attribute :  boolState[fail_OF_Block_3] | Value : " << boolState[fail_OF_Block_3] << std::endl;
	std::cout << "Attribute :  doubleState[capacity_OF_Block_4] | Value : " << doubleState[capacity_OF_Block_4] << std::endl;
	std::cout << "Attribute :  boolState[null_production_OF_Block_4] | Value : " << boolState[null_production_OF_Block_4] << std::endl;
	std::cout << "Attribute :  enumState[state_OF_Block_4] | Value : " << enumState[state_OF_Block_4] << std::endl;
	std::cout << "Attribute :  intState[rank_OF_Block_4] | Value : " << intState[rank_OF_Block_4] << std::endl;
	std::cout << "Attribute :  boolState[dequeue_OF_Block_4] | Value : " << boolState[dequeue_OF_Block_4] << std::endl;
	std::cout << "Attribute :  boolState[fail_OF_Block_4] | Value : " << boolState[fail_OF_Block_4] << std::endl;
	std::cout << "Attribute :  doubleState[capacity_OF_SS1] | Value : " << doubleState[capacity_OF_SS1] << std::endl;
	std::cout << "Attribute :  boolState[null_production_OF_SS1] | Value : " << boolState[null_production_OF_SS1] << std::endl;
	std::cout << "Attribute :  doubleState[potential_capacity_OF_SS1] | Value : " << doubleState[potential_capacity_OF_SS1] << std::endl;
	std::cout << "Attribute :  doubleState[capacity_OF_SS2] | Value : " << doubleState[capacity_OF_SS2] << std::endl;
	std::cout << "Attribute :  boolState[null_production_OF_SS2] | Value : " << boolState[null_production_OF_SS2] << std::endl;
	std::cout << "Attribute :  doubleState[potential_capacity_OF_SS2] | Value : " << doubleState[potential_capacity_OF_SS2] << std::endl;
	std::cout << "Attribute :  doubleState[capacity_OF_min_1] | Value : " << doubleState[capacity_OF_min_1] << std::endl;
	std::cout << "Attribute :  boolState[null_production_OF_min_1] | Value : " << boolState[null_production_OF_min_1] << std::endl;
	std::cout << "Attribute :  intState[max_rank_OF_rep_1] | Value : " << intState[max_rank_OF_rep_1] << std::endl;
	std::cout << "Attribute :  boolState[free_OF_rep_1] | Value : " << boolState[free_OF_rep_1] << std::endl;
	std::cout << "Attribute :  boolState[dequeue_OF_rep_1] | Value : " << boolState[dequeue_OF_rep_1] << std::endl;
}

bool storm::figaro::FigaroProgram1::figaromodelhasinstransitions()
{
    return true;
}

void storm::figaro::FigaroProgram1::updateFailureStates()
{
    // ------------------- Handling of FailureState elements --------------------------------
	boolFailureState[exp0] = (doubleState[capacity_OF_min_1] == 0 && (CurrentState & ExpectedStates[0]) != 0);
}

void storm::figaro::FigaroProgram1::doReinitialisations()
{
	doubleState[capacity_OF_Backup_1] = 100;
	boolState[null_production_OF_Backup_1] = false;
	boolState[dequeue_OF_Backup_1] = false;
	doubleState[capacity_OF_Block_1] = 100;
	boolState[null_production_OF_Block_1] = false;
	boolState[dequeue_OF_Block_1] = false;
	doubleState[capacity_OF_Block_2] = 100;
	boolState[null_production_OF_Block_2] = false;
	boolState[dequeue_OF_Block_2] = false;
	doubleState[capacity_OF_Block_3] = 100;
	boolState[null_production_OF_Block_3] = false;
	boolState[dequeue_OF_Block_3] = false;
	doubleState[capacity_OF_Block_4] = 100;
	boolState[null_production_OF_Block_4] = false;
	boolState[dequeue_OF_Block_4] = false;
	doubleState[capacity_OF_SS1] = 100;
	boolState[null_production_OF_SS1] = false;
	doubleState[potential_capacity_OF_SS1] = 100;
	doubleState[capacity_OF_SS2] = 100;
	boolState[null_production_OF_SS2] = false;
	doubleState[potential_capacity_OF_SS2] = 100;
	doubleState[capacity_OF_min_1] = 100;
	boolState[null_production_OF_min_1] = false;
	intState[max_rank_OF_rep_1] = 0;
}

void storm::figaro::FigaroProgram1::fireOccurrence(int numFire)
{
    std::cout <<">>>>>>>>>>>>>>>>>>>> Fire of occurrence #" << numFire << " <<<<<<<<<<<<<<<<<<<<<<<" << std::endl;

	if (numFire == 0)
		FIRE_fail_in_op_OF_Backup_1 = true;
	if (numFire == 1)
		FIRE_xx1_OF_Backup_1 = true;
	if (numFire == 2)
		FIRE_xx2_OF_Backup_1_INS_1 = true;
	if (numFire == 3)
		FIRE_xx2_OF_Backup_1_INS_2 = true;
	if (numFire == 4)
		FIRE_fail_in_op_OF_Block_1 = true;
	if (numFire == 5)
		FIRE_xx1_OF_Block_1 = true;
	if (numFire == 6)
		FIRE_fail_in_op_OF_Block_2 = true;
	if (numFire == 7)
		FIRE_xx1_OF_Block_2 = true;
	if (numFire == 8)
		FIRE_fail_in_op_OF_Block_3 = true;
	if (numFire == 9)
		FIRE_xx1_OF_Block_3 = true;
	if (numFire == 10)
		FIRE_fail_in_op_OF_Block_4 = true;
	if (numFire == 11)
		FIRE_xx1_OF_Block_4 = true;
	/* ---------- DECLARATION OF OCCURRENCE RULES------------ */

	// Occurrence fail_in_op_OF_Backup_1
	if ((boolState[fail_OF_Backup_1] == false) && (intState[state_OF_Backup_1] == working))
		if (FIRE_fail_in_op_OF_Backup_1)
		{
			boolState[fail_OF_Backup_1] = true;
			intState[state_OF_Backup_1] = waiting_for_rep;
			intState[rank_OF_Backup_1] = (intState[max_rank_OF_rep_1] + 1);
			FIRE_fail_in_op_OF_Backup_1 = false;
		}
	// Occurrence xx1_OF_Backup_1
	if ((boolState[fail_OF_Backup_1] == true) && (intState[state_OF_Backup_1] == under_repair))
		if (FIRE_xx1_OF_Backup_1)
		{
			boolState[fail_OF_Backup_1] = false;
			intState[state_OF_Backup_1] = working;
			boolState[free_OF_rep_1] = true;
			boolState[dequeue_OF_rep_1] = true;
			FIRE_xx1_OF_Backup_1 = false;
		}
	// Occurrence xx2_OF_Backup_1
	if ((boolState[fail_OF_Backup_1] == false) && (intState[state_OF_Backup_1] == required))
		if (FIRE_xx2_OF_Backup_1_INS_1)
		{
			boolState[fail_OF_Backup_1] = true;
			intState[state_OF_Backup_1] = waiting_for_rep;
			intState[rank_OF_Backup_1] = (intState[max_rank_OF_rep_1] + 1);
			FIRE_xx2_OF_Backup_1_INS_1 = false;
		}
	if ((boolState[fail_OF_Backup_1] == false) && (intState[state_OF_Backup_1] == required))
		if (FIRE_xx2_OF_Backup_1_INS_2)
		{
			intState[state_OF_Backup_1] = working;
			FIRE_xx2_OF_Backup_1_INS_2 = false;
		}
	// Occurrence fail_in_op_OF_Block_1
	if ((boolState[fail_OF_Block_1] == false) && (intState[state_OF_Block_1] == working))
		if (FIRE_fail_in_op_OF_Block_1)
		{
			boolState[fail_OF_Block_1] = true;
			intState[state_OF_Block_1] = waiting_for_rep;
			intState[rank_OF_Block_1] = (intState[max_rank_OF_rep_1] + 1);
			FIRE_fail_in_op_OF_Block_1 = false;
		}
	// Occurrence xx1_OF_Block_1
	if ((boolState[fail_OF_Block_1] == true) && (intState[state_OF_Block_1] == under_repair))
		if (FIRE_xx1_OF_Block_1)
		{
			boolState[fail_OF_Block_1] = false;
			intState[state_OF_Block_1] = working;
			boolState[free_OF_rep_1] = true;
			boolState[dequeue_OF_rep_1] = true;
			FIRE_xx1_OF_Block_1 = false;
		}
	// Occurrence fail_in_op_OF_Block_2
	if ((boolState[fail_OF_Block_2] == false) && (intState[state_OF_Block_2] == working))
		if (FIRE_fail_in_op_OF_Block_2)
		{
			boolState[fail_OF_Block_2] = true;
			intState[state_OF_Block_2] = waiting_for_rep;
			intState[rank_OF_Block_2] = (intState[max_rank_OF_rep_1] + 1);
			FIRE_fail_in_op_OF_Block_2 = false;
		}
	// Occurrence xx1_OF_Block_2
	if ((boolState[fail_OF_Block_2] == true) && (intState[state_OF_Block_2] == under_repair))
		if (FIRE_xx1_OF_Block_2)
		{
			boolState[fail_OF_Block_2] = false;
			intState[state_OF_Block_2] = working;
			boolState[free_OF_rep_1] = true;
			boolState[dequeue_OF_rep_1] = true;
			FIRE_xx1_OF_Block_2 = false;
		}
	// Occurrence fail_in_op_OF_Block_3
	if ((boolState[fail_OF_Block_3] == false) && (intState[state_OF_Block_3] == working))
		if (FIRE_fail_in_op_OF_Block_3)
		{
			boolState[fail_OF_Block_3] = true;
			intState[state_OF_Block_3] = waiting_for_rep;
			intState[rank_OF_Block_3] = (intState[max_rank_OF_rep_1] + 1);
			FIRE_fail_in_op_OF_Block_3 = false;
		}
	// Occurrence xx1_OF_Block_3
	if ((boolState[fail_OF_Block_3] == true) && (intState[state_OF_Block_3] == under_repair))
		if (FIRE_xx1_OF_Block_3)
		{
			boolState[fail_OF_Block_3] = false;
			intState[state_OF_Block_3] = working;
			boolState[free_OF_rep_1] = true;
			boolState[dequeue_OF_rep_1] = true;
			FIRE_xx1_OF_Block_3 = false;
		}
	// Occurrence fail_in_op_OF_Block_4
	if ((boolState[fail_OF_Block_4] == false) && (intState[state_OF_Block_4] == working))
		if (FIRE_fail_in_op_OF_Block_4)
		{
			boolState[fail_OF_Block_4] = true;
			intState[state_OF_Block_4] = waiting_for_rep;
			intState[rank_OF_Block_4] = (intState[max_rank_OF_rep_1] + 1);
			FIRE_fail_in_op_OF_Block_4 = false;
		}
	// Occurrence xx1_OF_Block_4
	if ((boolState[fail_OF_Block_4] == true) && (intState[state_OF_Block_4] == under_repair))
		if (FIRE_xx1_OF_Block_4)
		{
			boolState[fail_OF_Block_4] = false;
			intState[state_OF_Block_4] = working;
			boolState[free_OF_rep_1] = true;
			boolState[dequeue_OF_rep_1] = true;
			FIRE_xx1_OF_Block_4 = false;
		}
}
std::vector<std::tuple<int, double, std::string, int>> storm::figaro::FigaroProgram1::showFireableOccurrences()
{
    std::vector<std::tuple<int, double, std::string, int>> list = {};
    std::cout <<"\n==================== List of fireable occurrences :  ====================" << std::endl;

	if ((boolState[fail_OF_Backup_1] == false) && (intState[state_OF_Backup_1] == required))
	{
		#ifdef INTERACTIVE
			std::cout << "2 : INS_SUB_COUNT(1) xx2_OF_Backup_1_INS_1 : FAULT fail  DIST EXP (gamma_OF_Backup_1)  INDUCING fail_OF_Backup_1 = true;state_OF_Backup_1 = waiting_for_rep;rank_OF_Backup_1 = (max_rank_OF_rep_1 + 1)" << std::endl;
		#endif
		list.push_back(std::make_tuple(2, gamma_OF_Backup_1, "INS", 1));
	}
	if ((boolState[fail_OF_Backup_1] == false) && (intState[state_OF_Backup_1] == required))
	{
		#ifdef INTERACTIVE
			std::cout << "3 : INS_SUB_COUNT(1) xx2_OF_Backup_1_INS_2 : TRANSITION startup  DIST EXP (1 - gamma_OF_Backup_1)  INDUCING state_OF_Backup_1 = working" << std::endl;
		#endif
		list.push_back(std::make_tuple(3, 1 - gamma_OF_Backup_1, "INS", 1));
	}
    if ((ins_transition_found = (list.size() > 0)))
    {
		CurrentState = st_vanishing;
		updateFailureStates();
		return list;
	}
	if ((boolState[fail_OF_Backup_1] == false) && (intState[state_OF_Backup_1] == working))
	{
		#ifdef INTERACTIVE
			std::cout << "0 : fail_in_op_OF_Backup_1 : FAULT fail  DIST EXP (lambda_OF_Backup_1)  INDUCING fail_OF_Backup_1 = true;state_OF_Backup_1 = waiting_for_rep;rank_OF_Backup_1 = (max_rank_OF_rep_1 + 1)" << std::endl;
		#endif
		list.push_back(std::make_tuple(0, lambda_OF_Backup_1, "EXP", 0));
	}
	if ((boolState[fail_OF_Backup_1] == true) && (intState[state_OF_Backup_1] == under_repair))
	{
		#ifdef INTERACTIVE
			std::cout << "1 : xx1_OF_Backup_1 : REPAIR rep  DIST EXP (mu_OF_Backup_1)  INDUCING fail_OF_Backup_1 = false;state_OF_Backup_1 = working;free_OF_rep_1 = true;dequeue_OF_rep_1 = true" << std::endl;
		#endif
		list.push_back(std::make_tuple(1, mu_OF_Backup_1, "EXP", 0));
	}
	if ((boolState[fail_OF_Block_1] == false) && (intState[state_OF_Block_1] == working))
	{
		#ifdef INTERACTIVE
			std::cout << "4 : fail_in_op_OF_Block_1 : FAULT fail  DIST EXP (lambda_OF_Block_1)  INDUCING fail_OF_Block_1 = true;state_OF_Block_1 = waiting_for_rep;rank_OF_Block_1 = (max_rank_OF_rep_1 + 1)" << std::endl;
		#endif
		list.push_back(std::make_tuple(4, lambda_OF_Block_1, "EXP", 0));
	}
	if ((boolState[fail_OF_Block_1] == true) && (intState[state_OF_Block_1] == under_repair))
	{
		#ifdef INTERACTIVE
			std::cout << "5 : xx1_OF_Block_1 : REPAIR rep  DIST EXP (mu_OF_Block_1)  INDUCING fail_OF_Block_1 = false;state_OF_Block_1 = working;free_OF_rep_1 = true;dequeue_OF_rep_1 = true" << std::endl;
		#endif
		list.push_back(std::make_tuple(5, mu_OF_Block_1, "EXP", 0));
	}
	if ((boolState[fail_OF_Block_2] == false) && (intState[state_OF_Block_2] == working))
	{
		#ifdef INTERACTIVE
			std::cout << "6 : fail_in_op_OF_Block_2 : FAULT fail  DIST EXP (lambda_OF_Block_2)  INDUCING fail_OF_Block_2 = true;state_OF_Block_2 = waiting_for_rep;rank_OF_Block_2 = (max_rank_OF_rep_1 + 1)" << std::endl;
		#endif
		list.push_back(std::make_tuple(6, lambda_OF_Block_2, "EXP", 0));
	}
	if ((boolState[fail_OF_Block_2] == true) && (intState[state_OF_Block_2] == under_repair))
	{
		#ifdef INTERACTIVE
			std::cout << "7 : xx1_OF_Block_2 : REPAIR rep  DIST EXP (mu_OF_Block_2)  INDUCING fail_OF_Block_2 = false;state_OF_Block_2 = working;free_OF_rep_1 = true;dequeue_OF_rep_1 = true" << std::endl;
		#endif
		list.push_back(std::make_tuple(7, mu_OF_Block_2, "EXP", 0));
	}
	if ((boolState[fail_OF_Block_3] == false) && (intState[state_OF_Block_3] == working))
	{
		#ifdef INTERACTIVE
			std::cout << "8 : fail_in_op_OF_Block_3 : FAULT fail  DIST EXP (lambda_OF_Block_3)  INDUCING fail_OF_Block_3 = true;state_OF_Block_3 = waiting_for_rep;rank_OF_Block_3 = (max_rank_OF_rep_1 + 1)" << std::endl;
		#endif
		list.push_back(std::make_tuple(8, lambda_OF_Block_3, "EXP", 0));
	}
	if ((boolState[fail_OF_Block_3] == true) && (intState[state_OF_Block_3] == under_repair))
	{
		#ifdef INTERACTIVE
			std::cout << "9 : xx1_OF_Block_3 : REPAIR rep  DIST EXP (mu_OF_Block_3)  INDUCING fail_OF_Block_3 = false;state_OF_Block_3 = working;free_OF_rep_1 = true;dequeue_OF_rep_1 = true" << std::endl;
		#endif
		list.push_back(std::make_tuple(9, mu_OF_Block_3, "EXP", 0));
	}
	if ((boolState[fail_OF_Block_4] == false) && (intState[state_OF_Block_4] == working))
	{
		#ifdef INTERACTIVE
			std::cout << "10 : fail_in_op_OF_Block_4 : FAULT fail  DIST EXP (lambda_OF_Block_4)  INDUCING fail_OF_Block_4 = true;state_OF_Block_4 = waiting_for_rep;rank_OF_Block_4 = (max_rank_OF_rep_1 + 1)" << std::endl;
		#endif
		list.push_back(std::make_tuple(10, lambda_OF_Block_4, "EXP", 0));
	}
	if ((boolState[fail_OF_Block_4] == true) && (intState[state_OF_Block_4] == under_repair))
	{
		#ifdef INTERACTIVE
			std::cout << "11 : xx1_OF_Block_4 : REPAIR rep  DIST EXP (mu_OF_Block_4)  INDUCING fail_OF_Block_4 = false;state_OF_Block_4 = working;free_OF_rep_1 = true;dequeue_OF_rep_1 = true" << std::endl;
		#endif
		list.push_back(std::make_tuple(11, mu_OF_Block_4, "EXP", 0));
	}
	CurrentState = list.empty()?st_absorbing:st_tangible;
	updateFailureStates();
	return list;
}
void storm::figaro::FigaroProgram1::runOnceInteractionStep_default_step()
{
	if (intState[state_OF_Backup_1] == working)
	{
		doubleState[capacity_OF_Backup_1] = nominal_capacity_OF_Backup_1;
	} else {doubleState[capacity_OF_Backup_1] = 0; }
	if (! (boolState[fail_OF_Backup_1] == false))
	{
		boolState[null_production_OF_Backup_1] = true;
	}
	if (boolState[dequeue_OF_Backup_1] && (intState[rank_OF_Backup_1] > 0))
	{
		boolState[dequeue_OF_Backup_1] = false;
		intState[rank_OF_Backup_1] = (intState[rank_OF_Backup_1] - 1);
	}
	if (((intState[state_OF_Backup_1] == working) || (intState[state_OF_Backup_1] == required)) && (boolState[fail_OF_Block_4] == false))
	{
		intState[state_OF_Backup_1] = standby;
	}
	if ((intState[state_OF_Backup_1] == standby) && (boolState[fail_OF_Block_4] == true))
	{
		intState[state_OF_Backup_1] = required;
	}
	if (boolState[fail_OF_Block_1] == false)
	{
		doubleState[capacity_OF_Block_1] = nominal_capacity_OF_Block_1;
	} else {doubleState[capacity_OF_Block_1] = 0; }
	if (! (boolState[fail_OF_Block_1] == false))
	{
		boolState[null_production_OF_Block_1] = true;
	}
	if (boolState[dequeue_OF_Block_1] && (intState[rank_OF_Block_1] > 0))
	{
		boolState[dequeue_OF_Block_1] = false;
		intState[rank_OF_Block_1] = (intState[rank_OF_Block_1] - 1);
	}
	if (boolState[fail_OF_Block_2] == false)
	{
		doubleState[capacity_OF_Block_2] = nominal_capacity_OF_Block_2;
	} else {doubleState[capacity_OF_Block_2] = 0; }
	if (! (boolState[fail_OF_Block_2] == false))
	{
		boolState[null_production_OF_Block_2] = true;
	}
	if (boolState[dequeue_OF_Block_2] && (intState[rank_OF_Block_2] > 0))
	{
		boolState[dequeue_OF_Block_2] = false;
		intState[rank_OF_Block_2] = (intState[rank_OF_Block_2] - 1);
	}
	if (boolState[fail_OF_Block_3] == false)
	{
		doubleState[capacity_OF_Block_3] = nominal_capacity_OF_Block_3;
	} else {doubleState[capacity_OF_Block_3] = 0; }
	if (! (boolState[fail_OF_Block_3] == false))
	{
		boolState[null_production_OF_Block_3] = true;
	}
	if (boolState[dequeue_OF_Block_3] && (intState[rank_OF_Block_3] > 0))
	{
		boolState[dequeue_OF_Block_3] = false;
		intState[rank_OF_Block_3] = (intState[rank_OF_Block_3] - 1);
	}
	if (boolState[fail_OF_Block_4] == false)
	{
		doubleState[capacity_OF_Block_4] = nominal_capacity_OF_Block_4;
	} else {doubleState[capacity_OF_Block_4] = 0; }
	if (! (boolState[fail_OF_Block_4] == false))
	{
		boolState[null_production_OF_Block_4] = true;
	}
	if (boolState[dequeue_OF_Block_4] && (intState[rank_OF_Block_4] > 0))
	{
		boolState[dequeue_OF_Block_4] = false;
		intState[rank_OF_Block_4] = (intState[rank_OF_Block_4] - 1);
	}
	doubleState[potential_capacity_OF_SS1] = tmin(doubleState[capacity_OF_Block_1] + doubleState[capacity_OF_Block_2], 100);
	if (doubleState[potential_capacity_OF_SS1] < functioning_threshold_OF_SS1)
	{
		doubleState[capacity_OF_SS1] = 0;
	} else {doubleState[capacity_OF_SS1] = doubleState[potential_capacity_OF_SS1]; }
	if (boolState[null_production_OF_Block_1] && boolState[null_production_OF_Block_2])
	{
		boolState[null_production_OF_SS1] = true;
	}
	doubleState[potential_capacity_OF_SS2] = tmin((doubleState[capacity_OF_Backup_1] + doubleState[capacity_OF_Block_3]) + doubleState[capacity_OF_Block_4], 100);
	if (doubleState[potential_capacity_OF_SS2] < functioning_threshold_OF_SS2)
	{
		doubleState[capacity_OF_SS2] = 0;
	} else {doubleState[capacity_OF_SS2] = doubleState[potential_capacity_OF_SS2]; }
	if ((boolState[null_production_OF_Backup_1] && boolState[null_production_OF_Block_3]) && boolState[null_production_OF_Block_4])
	{
		boolState[null_production_OF_SS2] = true;
	}
	if (doubleState[capacity_OF_SS1] < doubleState[capacity_OF_min_1])
	{
		doubleState[capacity_OF_min_1] = doubleState[capacity_OF_SS1];
	}
	if (doubleState[capacity_OF_SS2] < doubleState[capacity_OF_min_1])
	{
		doubleState[capacity_OF_min_1] = doubleState[capacity_OF_SS2];
	}
	if (boolState[null_production_OF_SS1] || boolState[null_production_OF_SS2])
	{
		boolState[null_production_OF_min_1] = true;
	}
	if (boolState[dequeue_OF_rep_1])
	{
		boolState[dequeue_OF_rep_1] = false;
		boolState[dequeue_OF_Block_1] = true;
		boolState[dequeue_OF_Block_3] = true;
		boolState[dequeue_OF_Block_2] = true;
		boolState[dequeue_OF_Block_4] = true;
		boolState[dequeue_OF_Backup_1] = true;
	}
}
void storm::figaro::FigaroProgram1::runOnceInteractionStep_compute_max_rank()
{
	intState[max_rank_OF_rep_1] = tmax(intState[max_rank_OF_rep_1], tmax(intState[rank_OF_Block_1], tmax(intState[rank_OF_Block_3], tmax(intState[rank_OF_Block_2], tmax(intState[rank_OF_Block_4], intState[rank_OF_Backup_1])))));
}
void storm::figaro::FigaroProgram1::runOnceInteractionStep_rep_management()
{
	if (((intState[state_OF_Backup_1] == waiting_for_rep) && ((intState[rank_OF_Backup_1] == 1) || (1 == 0))) && boolState[free_OF_rep_1])
	{
		intState[state_OF_Backup_1] = under_repair;
		boolState[free_OF_rep_1] = false;
	}
	if (((intState[state_OF_Block_1] == waiting_for_rep) && ((intState[rank_OF_Block_1] == 1) || (1 == 0))) && boolState[free_OF_rep_1])
	{
		intState[state_OF_Block_1] = under_repair;
		boolState[free_OF_rep_1] = false;
	}
	if (((intState[state_OF_Block_2] == waiting_for_rep) && ((intState[rank_OF_Block_2] == 1) || (1 == 0))) && boolState[free_OF_rep_1])
	{
		intState[state_OF_Block_2] = under_repair;
		boolState[free_OF_rep_1] = false;
	}
	if (((intState[state_OF_Block_3] == waiting_for_rep) && ((intState[rank_OF_Block_3] == 1) || (1 == 0))) && boolState[free_OF_rep_1])
	{
		intState[state_OF_Block_3] = under_repair;
		boolState[free_OF_rep_1] = false;
	}
	if (((intState[state_OF_Block_4] == waiting_for_rep) && ((intState[rank_OF_Block_4] == 1) || (1 == 0))) && boolState[free_OF_rep_1])
	{
		intState[state_OF_Block_4] = under_repair;
		boolState[free_OF_rep_1] = false;
	}
}
    
void storm::figaro::FigaroProgram1::runInteractions() {
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
		runOnceInteractionStep_default_step();
		comparator = compareStates();
		counter++;
 	} while (comparator > 0 && counter < max_interactions_loop);
 	if (comparator <= 0)
 	{
		std::cout << "==> Stabilisation of interactions at loop #" << counter << " for runInteractionStep_default_step() ." << std::endl;
 	}
 	else {
		std::cout << "==> Maximum of interactions loop  reached : #" << counter <<" for runOnceInteractionStep_default_step()." << std::endl;
 	}
 	counter = 0;
 	comparator = 1;
    do
 	{
		//std::cout << counter << std::endl;
		saveCurrentState();
		runOnceInteractionStep_compute_max_rank();
		comparator = compareStates();
		counter++;
 	} while (comparator > 0 && counter < max_interactions_loop);
 	if (comparator <= 0)
 	{
		std::cout << "==> Stabilisation of interactions at loop #" << counter << " for runInteractionStep_compute_max_rank() ." << std::endl;
 	}
 	else {
		std::cout << "==> Maximum of interactions loop  reached : #" << counter <<" for runOnceInteractionStep_compute_max_rank()." << std::endl;
 	}
 	counter = 0;
 	comparator = 1;
    do
 	{
		//std::cout << counter << std::endl;
		saveCurrentState();
		runOnceInteractionStep_rep_management();
		comparator = compareStates();
		counter++;
 	} while (comparator > 0 && counter < max_interactions_loop);
 	if (comparator <= 0)
 	{
		std::cout << "==> Stabilisation of interactions at loop #" << counter << " for runInteractionStep_rep_management() ." << std::endl;
 	}
 	else {
		std::cout << "==> Maximum of interactions loop  reached : #" << counter <<" for runOnceInteractionStep_rep_management()." << std::endl;
 	}
	std::cout << std::endl;
}
void storm::figaro::FigaroProgram1::printstatetuple(){
    std::cout<<"\n State information: (";
    for (int i=0; i<(int)boolFailureState.size(); i++)
    {
        std::cout<<boolFailureState.at(i);
    }
    std::cout<<")";    
}
    
void storm::figaro::FigaroProgram1::fireinsttransitiongroup(std::string user_input_ins)
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
