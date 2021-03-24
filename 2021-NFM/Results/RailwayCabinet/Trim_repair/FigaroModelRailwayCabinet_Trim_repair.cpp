#include <iostream>
#include "FigaroModelRailwayCabinet_Trim_repair.h"

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
        
void storm::figaro::FigaroProgram_RailwayCabinet_Trim_repair::init()
{
	//cout <<">>>>>>>>>>>>>>>>>>>> Initialization of variables <<<<<<<<<<<<<<<<<<<<<<<" << endl;

	REINITIALISATION_OF_required_OF_HC1_fail = true;
	boolState[already_S_OF_HC1_fail] = false;
	REINITIALISATION_OF_S_OF_HC1_fail = false;
	REINITIALISATION_OF_relevant_evt_OF_HC1_fail = false;
	boolState[failF_OF_HC1_fail] = false;
	REINITIALISATION_OF_required_OF_HC1_fail_DC = true;
	boolState[already_S_OF_HC1_fail_DC] = false;
	REINITIALISATION_OF_S_OF_HC1_fail_DC = false;
	REINITIALISATION_OF_relevant_evt_OF_HC1_fail_DC = false;
	boolState[failF_OF_HC1_fail_DC] = false;
	REINITIALISATION_OF_required_OF_HC2_fail = true;
	boolState[already_S_OF_HC2_fail] = false;
	REINITIALISATION_OF_S_OF_HC2_fail = false;
	REINITIALISATION_OF_relevant_evt_OF_HC2_fail = false;
	boolState[failF_OF_HC2_fail] = false;
	REINITIALISATION_OF_required_OF_HC2_fail_DC = true;
	boolState[already_S_OF_HC2_fail_DC] = false;
	REINITIALISATION_OF_S_OF_HC2_fail_DC = false;
	REINITIALISATION_OF_relevant_evt_OF_HC2_fail_DC = false;
	boolState[failF_OF_HC2_fail_DC] = false;
	REINITIALISATION_OF_required_OF_HC3_fail = true;
	boolState[already_S_OF_HC3_fail] = false;
	REINITIALISATION_OF_S_OF_HC3_fail = false;
	REINITIALISATION_OF_relevant_evt_OF_HC3_fail = false;
	boolState[failF_OF_HC3_fail] = false;
	REINITIALISATION_OF_required_OF_HC3_fail_DC = true;
	boolState[already_S_OF_HC3_fail_DC] = false;
	REINITIALISATION_OF_S_OF_HC3_fail_DC = false;
	REINITIALISATION_OF_relevant_evt_OF_HC3_fail_DC = false;
	boolState[failF_OF_HC3_fail_DC] = false;
	REINITIALISATION_OF_required_OF_HC4_fail = true;
	boolState[already_S_OF_HC4_fail] = false;
	REINITIALISATION_OF_S_OF_HC4_fail = false;
	REINITIALISATION_OF_relevant_evt_OF_HC4_fail = false;
	boolState[failF_OF_HC4_fail] = false;
	REINITIALISATION_OF_required_OF_HC4_fail_DC = true;
	boolState[already_S_OF_HC4_fail_DC] = false;
	REINITIALISATION_OF_S_OF_HC4_fail_DC = false;
	REINITIALISATION_OF_relevant_evt_OF_HC4_fail_DC = false;
	boolState[failF_OF_HC4_fail_DC] = false;
	REINITIALISATION_OF_required_OF_HC_fail_DC = true;
	boolState[already_S_OF_HC_fail_DC] = false;
	REINITIALISATION_OF_S_OF_HC_fail_DC = false;
	REINITIALISATION_OF_relevant_evt_OF_HC_fail_DC = false;
	REINITIALISATION_OF_required_OF_RC1_fail = true;
	boolState[already_S_OF_RC1_fail] = false;
	REINITIALISATION_OF_S_OF_RC1_fail = false;
	REINITIALISATION_OF_relevant_evt_OF_RC1_fail = false;
	boolState[failF_OF_RC1_fail] = false;
	REINITIALISATION_OF_required_OF_RC1_fail_DC = true;
	boolState[already_S_OF_RC1_fail_DC] = false;
	REINITIALISATION_OF_S_OF_RC1_fail_DC = false;
	REINITIALISATION_OF_relevant_evt_OF_RC1_fail_DC = false;
	boolState[failF_OF_RC1_fail_DC] = false;
	REINITIALISATION_OF_required_OF_RC2_fail = true;
	boolState[already_S_OF_RC2_fail] = false;
	REINITIALISATION_OF_S_OF_RC2_fail = false;
	REINITIALISATION_OF_relevant_evt_OF_RC2_fail = false;
	boolState[failF_OF_RC2_fail] = false;
	REINITIALISATION_OF_required_OF_RC2_fail_DC = true;
	boolState[already_S_OF_RC2_fail_DC] = false;
	REINITIALISATION_OF_S_OF_RC2_fail_DC = false;
	REINITIALISATION_OF_relevant_evt_OF_RC2_fail_DC = false;
	boolState[failF_OF_RC2_fail_DC] = false;
	REINITIALISATION_OF_required_OF_RC3_fail = true;
	boolState[already_S_OF_RC3_fail] = false;
	REINITIALISATION_OF_S_OF_RC3_fail = false;
	REINITIALISATION_OF_relevant_evt_OF_RC3_fail = false;
	boolState[failF_OF_RC3_fail] = false;
	REINITIALISATION_OF_required_OF_RC3_fail_DC = true;
	boolState[already_S_OF_RC3_fail_DC] = false;
	REINITIALISATION_OF_S_OF_RC3_fail_DC = false;
	REINITIALISATION_OF_relevant_evt_OF_RC3_fail_DC = false;
	boolState[failF_OF_RC3_fail_DC] = false;
	REINITIALISATION_OF_required_OF_RC4_fail = true;
	boolState[already_S_OF_RC4_fail] = false;
	REINITIALISATION_OF_S_OF_RC4_fail = false;
	REINITIALISATION_OF_relevant_evt_OF_RC4_fail = false;
	boolState[failF_OF_RC4_fail] = false;
	REINITIALISATION_OF_required_OF_RC4_fail_DC = true;
	boolState[already_S_OF_RC4_fail_DC] = false;
	REINITIALISATION_OF_S_OF_RC4_fail_DC = false;
	REINITIALISATION_OF_relevant_evt_OF_RC4_fail_DC = false;
	boolState[failF_OF_RC4_fail_DC] = false;
	REINITIALISATION_OF_required_OF_RC_fail_DC = true;
	boolState[already_S_OF_RC_fail_DC] = false;
	REINITIALISATION_OF_S_OF_RC_fail_DC = false;
	REINITIALISATION_OF_relevant_evt_OF_RC_fail_DC = false;
	REINITIALISATION_OF_required_OF_System = true;
	boolState[already_S_OF_System] = false;
	REINITIALISATION_OF_S_OF_System = false;
	REINITIALISATION_OF_relevant_evt_OF_System = false;
	REINITIALISATION_OF_required_OF_Two_HC_fail = true;
	boolState[already_S_OF_Two_HC_fail] = false;
	REINITIALISATION_OF_S_OF_Two_HC_fail = false;
	REINITIALISATION_OF_relevant_evt_OF_Two_HC_fail = false;
	REINITIALISATION_OF_required_OF_Two_RC_HC_fail_DC = true;
	boolState[already_S_OF_Two_RC_HC_fail_DC] = false;
	REINITIALISATION_OF_S_OF_Two_RC_HC_fail_DC = false;
	REINITIALISATION_OF_relevant_evt_OF_Two_RC_HC_fail_DC = false;
	REINITIALISATION_OF_required_OF_Two_RC_fail = true;
	boolState[already_S_OF_Two_RC_fail] = false;
	REINITIALISATION_OF_S_OF_Two_RC_fail = false;
	REINITIALISATION_OF_relevant_evt_OF_Two_RC_fail = false;
	REINITIALISATION_OF_required_OF_UE_1 = true;
	boolState[already_S_OF_UE_1] = false;
	REINITIALISATION_OF_S_OF_UE_1 = false;
	REINITIALISATION_OF_relevant_evt_OF_UE_1 = false;

	/* ---------- DECLARATION OF OCCURRENCE RULES FIRING FLAGS ------------ */
	FIRE_xx10_OF_HC1_fail = false;
	FIRE_xx11_OF_HC1_fail = false;
	FIRE_xx10_OF_HC1_fail_DC = false;
	FIRE_xx11_OF_HC1_fail_DC = false;
	FIRE_xx10_OF_HC2_fail = false;
	FIRE_xx11_OF_HC2_fail = false;
	FIRE_xx10_OF_HC2_fail_DC = false;
	FIRE_xx11_OF_HC2_fail_DC = false;
	FIRE_xx10_OF_HC3_fail = false;
	FIRE_xx11_OF_HC3_fail = false;
	FIRE_xx10_OF_HC3_fail_DC = false;
	FIRE_xx11_OF_HC3_fail_DC = false;
	FIRE_xx10_OF_HC4_fail = false;
	FIRE_xx11_OF_HC4_fail = false;
	FIRE_xx10_OF_HC4_fail_DC = false;
	FIRE_xx11_OF_HC4_fail_DC = false;
	FIRE_xx10_OF_RC1_fail = false;
	FIRE_xx11_OF_RC1_fail = false;
	FIRE_xx10_OF_RC1_fail_DC = false;
	FIRE_xx11_OF_RC1_fail_DC = false;
	FIRE_xx10_OF_RC2_fail = false;
	FIRE_xx11_OF_RC2_fail = false;
	FIRE_xx10_OF_RC2_fail_DC = false;
	FIRE_xx11_OF_RC2_fail_DC = false;
	FIRE_xx10_OF_RC3_fail = false;
	FIRE_xx11_OF_RC3_fail = false;
	FIRE_xx10_OF_RC3_fail_DC = false;
	FIRE_xx11_OF_RC3_fail_DC = false;
	FIRE_xx10_OF_RC4_fail = false;
	FIRE_xx11_OF_RC4_fail = false;
	FIRE_xx10_OF_RC4_fail_DC = false;
	FIRE_xx11_OF_RC4_fail_DC = false;

}

void storm::figaro::FigaroProgram_RailwayCabinet_Trim_repair::saveCurrentState()
{
	// cout <<">>>>>>>>>>>>>>>>>>>> Saving current state  <<<<<<<<<<<<<<<<<<<<<<<" << endl;
	backupBoolState = boolState ;
	backupFloatState = floatState ;
	backupIntState = intState ;
	backupEnumState = enumState ;
}

int storm::figaro::FigaroProgram_RailwayCabinet_Trim_repair::compareStates()
{
	// cout <<">>>>>>>>>>>>>>>>>>>> Comparing state with previous one (return number of differences) <<<<<<<<<<<<<<<<<<<<<<<" << endl;

	return (backupBoolState != boolState) + (backupFloatState != floatState) + (backupIntState != intState) + (backupEnumState != enumState); 
}

void storm::figaro::FigaroProgram_RailwayCabinet_Trim_repair::printState()
{
	//cout <<"\n==================== Print of the current state :  ====================" << endl;

	//cout << "Attribute :  boolState[required_OF_HC1_fail] | Value : " << boolState[required_OF_HC1_fail] << endl;
	//cout << "Attribute :  boolState[already_S_OF_HC1_fail] | Value : " << boolState[already_S_OF_HC1_fail] << endl;
	//cout << "Attribute :  boolState[S_OF_HC1_fail] | Value : " << boolState[S_OF_HC1_fail] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_HC1_fail] | Value : " << boolState[relevant_evt_OF_HC1_fail] << endl;
	//cout << "Attribute :  boolState[failF_OF_HC1_fail] | Value : " << boolState[failF_OF_HC1_fail] << endl;
	//cout << "Attribute :  boolState[required_OF_HC1_fail_DC] | Value : " << boolState[required_OF_HC1_fail_DC] << endl;
	//cout << "Attribute :  boolState[already_S_OF_HC1_fail_DC] | Value : " << boolState[already_S_OF_HC1_fail_DC] << endl;
	//cout << "Attribute :  boolState[S_OF_HC1_fail_DC] | Value : " << boolState[S_OF_HC1_fail_DC] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_HC1_fail_DC] | Value : " << boolState[relevant_evt_OF_HC1_fail_DC] << endl;
	//cout << "Attribute :  boolState[failF_OF_HC1_fail_DC] | Value : " << boolState[failF_OF_HC1_fail_DC] << endl;
	//cout << "Attribute :  boolState[required_OF_HC2_fail] | Value : " << boolState[required_OF_HC2_fail] << endl;
	//cout << "Attribute :  boolState[already_S_OF_HC2_fail] | Value : " << boolState[already_S_OF_HC2_fail] << endl;
	//cout << "Attribute :  boolState[S_OF_HC2_fail] | Value : " << boolState[S_OF_HC2_fail] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_HC2_fail] | Value : " << boolState[relevant_evt_OF_HC2_fail] << endl;
	//cout << "Attribute :  boolState[failF_OF_HC2_fail] | Value : " << boolState[failF_OF_HC2_fail] << endl;
	//cout << "Attribute :  boolState[required_OF_HC2_fail_DC] | Value : " << boolState[required_OF_HC2_fail_DC] << endl;
	//cout << "Attribute :  boolState[already_S_OF_HC2_fail_DC] | Value : " << boolState[already_S_OF_HC2_fail_DC] << endl;
	//cout << "Attribute :  boolState[S_OF_HC2_fail_DC] | Value : " << boolState[S_OF_HC2_fail_DC] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_HC2_fail_DC] | Value : " << boolState[relevant_evt_OF_HC2_fail_DC] << endl;
	//cout << "Attribute :  boolState[failF_OF_HC2_fail_DC] | Value : " << boolState[failF_OF_HC2_fail_DC] << endl;
	//cout << "Attribute :  boolState[required_OF_HC3_fail] | Value : " << boolState[required_OF_HC3_fail] << endl;
	//cout << "Attribute :  boolState[already_S_OF_HC3_fail] | Value : " << boolState[already_S_OF_HC3_fail] << endl;
	//cout << "Attribute :  boolState[S_OF_HC3_fail] | Value : " << boolState[S_OF_HC3_fail] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_HC3_fail] | Value : " << boolState[relevant_evt_OF_HC3_fail] << endl;
	//cout << "Attribute :  boolState[failF_OF_HC3_fail] | Value : " << boolState[failF_OF_HC3_fail] << endl;
	//cout << "Attribute :  boolState[required_OF_HC3_fail_DC] | Value : " << boolState[required_OF_HC3_fail_DC] << endl;
	//cout << "Attribute :  boolState[already_S_OF_HC3_fail_DC] | Value : " << boolState[already_S_OF_HC3_fail_DC] << endl;
	//cout << "Attribute :  boolState[S_OF_HC3_fail_DC] | Value : " << boolState[S_OF_HC3_fail_DC] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_HC3_fail_DC] | Value : " << boolState[relevant_evt_OF_HC3_fail_DC] << endl;
	//cout << "Attribute :  boolState[failF_OF_HC3_fail_DC] | Value : " << boolState[failF_OF_HC3_fail_DC] << endl;
	//cout << "Attribute :  boolState[required_OF_HC4_fail] | Value : " << boolState[required_OF_HC4_fail] << endl;
	//cout << "Attribute :  boolState[already_S_OF_HC4_fail] | Value : " << boolState[already_S_OF_HC4_fail] << endl;
	//cout << "Attribute :  boolState[S_OF_HC4_fail] | Value : " << boolState[S_OF_HC4_fail] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_HC4_fail] | Value : " << boolState[relevant_evt_OF_HC4_fail] << endl;
	//cout << "Attribute :  boolState[failF_OF_HC4_fail] | Value : " << boolState[failF_OF_HC4_fail] << endl;
	//cout << "Attribute :  boolState[required_OF_HC4_fail_DC] | Value : " << boolState[required_OF_HC4_fail_DC] << endl;
	//cout << "Attribute :  boolState[already_S_OF_HC4_fail_DC] | Value : " << boolState[already_S_OF_HC4_fail_DC] << endl;
	//cout << "Attribute :  boolState[S_OF_HC4_fail_DC] | Value : " << boolState[S_OF_HC4_fail_DC] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_HC4_fail_DC] | Value : " << boolState[relevant_evt_OF_HC4_fail_DC] << endl;
	//cout << "Attribute :  boolState[failF_OF_HC4_fail_DC] | Value : " << boolState[failF_OF_HC4_fail_DC] << endl;
	//cout << "Attribute :  boolState[required_OF_HC_fail_DC] | Value : " << boolState[required_OF_HC_fail_DC] << endl;
	//cout << "Attribute :  boolState[already_S_OF_HC_fail_DC] | Value : " << boolState[already_S_OF_HC_fail_DC] << endl;
	//cout << "Attribute :  boolState[S_OF_HC_fail_DC] | Value : " << boolState[S_OF_HC_fail_DC] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_HC_fail_DC] | Value : " << boolState[relevant_evt_OF_HC_fail_DC] << endl;
	//cout << "Attribute :  boolState[required_OF_RC1_fail] | Value : " << boolState[required_OF_RC1_fail] << endl;
	//cout << "Attribute :  boolState[already_S_OF_RC1_fail] | Value : " << boolState[already_S_OF_RC1_fail] << endl;
	//cout << "Attribute :  boolState[S_OF_RC1_fail] | Value : " << boolState[S_OF_RC1_fail] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_RC1_fail] | Value : " << boolState[relevant_evt_OF_RC1_fail] << endl;
	//cout << "Attribute :  boolState[failF_OF_RC1_fail] | Value : " << boolState[failF_OF_RC1_fail] << endl;
	//cout << "Attribute :  boolState[required_OF_RC1_fail_DC] | Value : " << boolState[required_OF_RC1_fail_DC] << endl;
	//cout << "Attribute :  boolState[already_S_OF_RC1_fail_DC] | Value : " << boolState[already_S_OF_RC1_fail_DC] << endl;
	//cout << "Attribute :  boolState[S_OF_RC1_fail_DC] | Value : " << boolState[S_OF_RC1_fail_DC] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_RC1_fail_DC] | Value : " << boolState[relevant_evt_OF_RC1_fail_DC] << endl;
	//cout << "Attribute :  boolState[failF_OF_RC1_fail_DC] | Value : " << boolState[failF_OF_RC1_fail_DC] << endl;
	//cout << "Attribute :  boolState[required_OF_RC2_fail] | Value : " << boolState[required_OF_RC2_fail] << endl;
	//cout << "Attribute :  boolState[already_S_OF_RC2_fail] | Value : " << boolState[already_S_OF_RC2_fail] << endl;
	//cout << "Attribute :  boolState[S_OF_RC2_fail] | Value : " << boolState[S_OF_RC2_fail] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_RC2_fail] | Value : " << boolState[relevant_evt_OF_RC2_fail] << endl;
	//cout << "Attribute :  boolState[failF_OF_RC2_fail] | Value : " << boolState[failF_OF_RC2_fail] << endl;
	//cout << "Attribute :  boolState[required_OF_RC2_fail_DC] | Value : " << boolState[required_OF_RC2_fail_DC] << endl;
	//cout << "Attribute :  boolState[already_S_OF_RC2_fail_DC] | Value : " << boolState[already_S_OF_RC2_fail_DC] << endl;
	//cout << "Attribute :  boolState[S_OF_RC2_fail_DC] | Value : " << boolState[S_OF_RC2_fail_DC] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_RC2_fail_DC] | Value : " << boolState[relevant_evt_OF_RC2_fail_DC] << endl;
	//cout << "Attribute :  boolState[failF_OF_RC2_fail_DC] | Value : " << boolState[failF_OF_RC2_fail_DC] << endl;
	//cout << "Attribute :  boolState[required_OF_RC3_fail] | Value : " << boolState[required_OF_RC3_fail] << endl;
	//cout << "Attribute :  boolState[already_S_OF_RC3_fail] | Value : " << boolState[already_S_OF_RC3_fail] << endl;
	//cout << "Attribute :  boolState[S_OF_RC3_fail] | Value : " << boolState[S_OF_RC3_fail] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_RC3_fail] | Value : " << boolState[relevant_evt_OF_RC3_fail] << endl;
	//cout << "Attribute :  boolState[failF_OF_RC3_fail] | Value : " << boolState[failF_OF_RC3_fail] << endl;
	//cout << "Attribute :  boolState[required_OF_RC3_fail_DC] | Value : " << boolState[required_OF_RC3_fail_DC] << endl;
	//cout << "Attribute :  boolState[already_S_OF_RC3_fail_DC] | Value : " << boolState[already_S_OF_RC3_fail_DC] << endl;
	//cout << "Attribute :  boolState[S_OF_RC3_fail_DC] | Value : " << boolState[S_OF_RC3_fail_DC] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_RC3_fail_DC] | Value : " << boolState[relevant_evt_OF_RC3_fail_DC] << endl;
	//cout << "Attribute :  boolState[failF_OF_RC3_fail_DC] | Value : " << boolState[failF_OF_RC3_fail_DC] << endl;
	//cout << "Attribute :  boolState[required_OF_RC4_fail] | Value : " << boolState[required_OF_RC4_fail] << endl;
	//cout << "Attribute :  boolState[already_S_OF_RC4_fail] | Value : " << boolState[already_S_OF_RC4_fail] << endl;
	//cout << "Attribute :  boolState[S_OF_RC4_fail] | Value : " << boolState[S_OF_RC4_fail] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_RC4_fail] | Value : " << boolState[relevant_evt_OF_RC4_fail] << endl;
	//cout << "Attribute :  boolState[failF_OF_RC4_fail] | Value : " << boolState[failF_OF_RC4_fail] << endl;
	//cout << "Attribute :  boolState[required_OF_RC4_fail_DC] | Value : " << boolState[required_OF_RC4_fail_DC] << endl;
	//cout << "Attribute :  boolState[already_S_OF_RC4_fail_DC] | Value : " << boolState[already_S_OF_RC4_fail_DC] << endl;
	//cout << "Attribute :  boolState[S_OF_RC4_fail_DC] | Value : " << boolState[S_OF_RC4_fail_DC] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_RC4_fail_DC] | Value : " << boolState[relevant_evt_OF_RC4_fail_DC] << endl;
	//cout << "Attribute :  boolState[failF_OF_RC4_fail_DC] | Value : " << boolState[failF_OF_RC4_fail_DC] << endl;
	//cout << "Attribute :  boolState[required_OF_RC_fail_DC] | Value : " << boolState[required_OF_RC_fail_DC] << endl;
	//cout << "Attribute :  boolState[already_S_OF_RC_fail_DC] | Value : " << boolState[already_S_OF_RC_fail_DC] << endl;
	//cout << "Attribute :  boolState[S_OF_RC_fail_DC] | Value : " << boolState[S_OF_RC_fail_DC] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_RC_fail_DC] | Value : " << boolState[relevant_evt_OF_RC_fail_DC] << endl;
	//cout << "Attribute :  boolState[required_OF_System] | Value : " << boolState[required_OF_System] << endl;
	//cout << "Attribute :  boolState[already_S_OF_System] | Value : " << boolState[already_S_OF_System] << endl;
	//cout << "Attribute :  boolState[S_OF_System] | Value : " << boolState[S_OF_System] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_System] | Value : " << boolState[relevant_evt_OF_System] << endl;
	//cout << "Attribute :  boolState[required_OF_Two_HC_fail] | Value : " << boolState[required_OF_Two_HC_fail] << endl;
	//cout << "Attribute :  boolState[already_S_OF_Two_HC_fail] | Value : " << boolState[already_S_OF_Two_HC_fail] << endl;
	//cout << "Attribute :  boolState[S_OF_Two_HC_fail] | Value : " << boolState[S_OF_Two_HC_fail] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_Two_HC_fail] | Value : " << boolState[relevant_evt_OF_Two_HC_fail] << endl;
	//cout << "Attribute :  boolState[required_OF_Two_RC_HC_fail_DC] | Value : " << boolState[required_OF_Two_RC_HC_fail_DC] << endl;
	//cout << "Attribute :  boolState[already_S_OF_Two_RC_HC_fail_DC] | Value : " << boolState[already_S_OF_Two_RC_HC_fail_DC] << endl;
	//cout << "Attribute :  boolState[S_OF_Two_RC_HC_fail_DC] | Value : " << boolState[S_OF_Two_RC_HC_fail_DC] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_Two_RC_HC_fail_DC] | Value : " << boolState[relevant_evt_OF_Two_RC_HC_fail_DC] << endl;
	//cout << "Attribute :  boolState[required_OF_Two_RC_fail] | Value : " << boolState[required_OF_Two_RC_fail] << endl;
	//cout << "Attribute :  boolState[already_S_OF_Two_RC_fail] | Value : " << boolState[already_S_OF_Two_RC_fail] << endl;
	//cout << "Attribute :  boolState[S_OF_Two_RC_fail] | Value : " << boolState[S_OF_Two_RC_fail] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_Two_RC_fail] | Value : " << boolState[relevant_evt_OF_Two_RC_fail] << endl;
	//cout << "Attribute :  boolState[required_OF_UE_1] | Value : " << boolState[required_OF_UE_1] << endl;
	//cout << "Attribute :  boolState[already_S_OF_UE_1] | Value : " << boolState[already_S_OF_UE_1] << endl;
	//cout << "Attribute :  boolState[S_OF_UE_1] | Value : " << boolState[S_OF_UE_1] << endl;
	//cout << "Attribute :  boolState[relevant_evt_OF_UE_1] | Value : " << boolState[relevant_evt_OF_UE_1] << endl;
}

bool storm::figaro::FigaroProgram_RailwayCabinet_Trim_repair::figaromodelhasinstransitions()
{
	return false;
}
void storm::figaro::FigaroProgram_RailwayCabinet_Trim_repair::doReinitialisations()
{
	boolState[required_OF_HC1_fail] = REINITIALISATION_OF_required_OF_HC1_fail;
	boolState[S_OF_HC1_fail] = REINITIALISATION_OF_S_OF_HC1_fail;
	boolState[relevant_evt_OF_HC1_fail] = REINITIALISATION_OF_relevant_evt_OF_HC1_fail;
	boolState[required_OF_HC1_fail_DC] = REINITIALISATION_OF_required_OF_HC1_fail_DC;
	boolState[S_OF_HC1_fail_DC] = REINITIALISATION_OF_S_OF_HC1_fail_DC;
	boolState[relevant_evt_OF_HC1_fail_DC] = REINITIALISATION_OF_relevant_evt_OF_HC1_fail_DC;
	boolState[required_OF_HC2_fail] = REINITIALISATION_OF_required_OF_HC2_fail;
	boolState[S_OF_HC2_fail] = REINITIALISATION_OF_S_OF_HC2_fail;
	boolState[relevant_evt_OF_HC2_fail] = REINITIALISATION_OF_relevant_evt_OF_HC2_fail;
	boolState[required_OF_HC2_fail_DC] = REINITIALISATION_OF_required_OF_HC2_fail_DC;
	boolState[S_OF_HC2_fail_DC] = REINITIALISATION_OF_S_OF_HC2_fail_DC;
	boolState[relevant_evt_OF_HC2_fail_DC] = REINITIALISATION_OF_relevant_evt_OF_HC2_fail_DC;
	boolState[required_OF_HC3_fail] = REINITIALISATION_OF_required_OF_HC3_fail;
	boolState[S_OF_HC3_fail] = REINITIALISATION_OF_S_OF_HC3_fail;
	boolState[relevant_evt_OF_HC3_fail] = REINITIALISATION_OF_relevant_evt_OF_HC3_fail;
	boolState[required_OF_HC3_fail_DC] = REINITIALISATION_OF_required_OF_HC3_fail_DC;
	boolState[S_OF_HC3_fail_DC] = REINITIALISATION_OF_S_OF_HC3_fail_DC;
	boolState[relevant_evt_OF_HC3_fail_DC] = REINITIALISATION_OF_relevant_evt_OF_HC3_fail_DC;
	boolState[required_OF_HC4_fail] = REINITIALISATION_OF_required_OF_HC4_fail;
	boolState[S_OF_HC4_fail] = REINITIALISATION_OF_S_OF_HC4_fail;
	boolState[relevant_evt_OF_HC4_fail] = REINITIALISATION_OF_relevant_evt_OF_HC4_fail;
	boolState[required_OF_HC4_fail_DC] = REINITIALISATION_OF_required_OF_HC4_fail_DC;
	boolState[S_OF_HC4_fail_DC] = REINITIALISATION_OF_S_OF_HC4_fail_DC;
	boolState[relevant_evt_OF_HC4_fail_DC] = REINITIALISATION_OF_relevant_evt_OF_HC4_fail_DC;
	boolState[required_OF_HC_fail_DC] = REINITIALISATION_OF_required_OF_HC_fail_DC;
	boolState[S_OF_HC_fail_DC] = REINITIALISATION_OF_S_OF_HC_fail_DC;
	boolState[relevant_evt_OF_HC_fail_DC] = REINITIALISATION_OF_relevant_evt_OF_HC_fail_DC;
	boolState[required_OF_RC1_fail] = REINITIALISATION_OF_required_OF_RC1_fail;
	boolState[S_OF_RC1_fail] = REINITIALISATION_OF_S_OF_RC1_fail;
	boolState[relevant_evt_OF_RC1_fail] = REINITIALISATION_OF_relevant_evt_OF_RC1_fail;
	boolState[required_OF_RC1_fail_DC] = REINITIALISATION_OF_required_OF_RC1_fail_DC;
	boolState[S_OF_RC1_fail_DC] = REINITIALISATION_OF_S_OF_RC1_fail_DC;
	boolState[relevant_evt_OF_RC1_fail_DC] = REINITIALISATION_OF_relevant_evt_OF_RC1_fail_DC;
	boolState[required_OF_RC2_fail] = REINITIALISATION_OF_required_OF_RC2_fail;
	boolState[S_OF_RC2_fail] = REINITIALISATION_OF_S_OF_RC2_fail;
	boolState[relevant_evt_OF_RC2_fail] = REINITIALISATION_OF_relevant_evt_OF_RC2_fail;
	boolState[required_OF_RC2_fail_DC] = REINITIALISATION_OF_required_OF_RC2_fail_DC;
	boolState[S_OF_RC2_fail_DC] = REINITIALISATION_OF_S_OF_RC2_fail_DC;
	boolState[relevant_evt_OF_RC2_fail_DC] = REINITIALISATION_OF_relevant_evt_OF_RC2_fail_DC;
	boolState[required_OF_RC3_fail] = REINITIALISATION_OF_required_OF_RC3_fail;
	boolState[S_OF_RC3_fail] = REINITIALISATION_OF_S_OF_RC3_fail;
	boolState[relevant_evt_OF_RC3_fail] = REINITIALISATION_OF_relevant_evt_OF_RC3_fail;
	boolState[required_OF_RC3_fail_DC] = REINITIALISATION_OF_required_OF_RC3_fail_DC;
	boolState[S_OF_RC3_fail_DC] = REINITIALISATION_OF_S_OF_RC3_fail_DC;
	boolState[relevant_evt_OF_RC3_fail_DC] = REINITIALISATION_OF_relevant_evt_OF_RC3_fail_DC;
	boolState[required_OF_RC4_fail] = REINITIALISATION_OF_required_OF_RC4_fail;
	boolState[S_OF_RC4_fail] = REINITIALISATION_OF_S_OF_RC4_fail;
	boolState[relevant_evt_OF_RC4_fail] = REINITIALISATION_OF_relevant_evt_OF_RC4_fail;
	boolState[required_OF_RC4_fail_DC] = REINITIALISATION_OF_required_OF_RC4_fail_DC;
	boolState[S_OF_RC4_fail_DC] = REINITIALISATION_OF_S_OF_RC4_fail_DC;
	boolState[relevant_evt_OF_RC4_fail_DC] = REINITIALISATION_OF_relevant_evt_OF_RC4_fail_DC;
	boolState[required_OF_RC_fail_DC] = REINITIALISATION_OF_required_OF_RC_fail_DC;
	boolState[S_OF_RC_fail_DC] = REINITIALISATION_OF_S_OF_RC_fail_DC;
	boolState[relevant_evt_OF_RC_fail_DC] = REINITIALISATION_OF_relevant_evt_OF_RC_fail_DC;
	boolState[required_OF_System] = REINITIALISATION_OF_required_OF_System;
	boolState[S_OF_System] = REINITIALISATION_OF_S_OF_System;
	boolState[relevant_evt_OF_System] = REINITIALISATION_OF_relevant_evt_OF_System;
	boolState[required_OF_Two_HC_fail] = REINITIALISATION_OF_required_OF_Two_HC_fail;
	boolState[S_OF_Two_HC_fail] = REINITIALISATION_OF_S_OF_Two_HC_fail;
	boolState[relevant_evt_OF_Two_HC_fail] = REINITIALISATION_OF_relevant_evt_OF_Two_HC_fail;
	boolState[required_OF_Two_RC_HC_fail_DC] = REINITIALISATION_OF_required_OF_Two_RC_HC_fail_DC;
	boolState[S_OF_Two_RC_HC_fail_DC] = REINITIALISATION_OF_S_OF_Two_RC_HC_fail_DC;
	boolState[relevant_evt_OF_Two_RC_HC_fail_DC] = REINITIALISATION_OF_relevant_evt_OF_Two_RC_HC_fail_DC;
	boolState[required_OF_Two_RC_fail] = REINITIALISATION_OF_required_OF_Two_RC_fail;
	boolState[S_OF_Two_RC_fail] = REINITIALISATION_OF_S_OF_Two_RC_fail;
	boolState[relevant_evt_OF_Two_RC_fail] = REINITIALISATION_OF_relevant_evt_OF_Two_RC_fail;
	boolState[required_OF_UE_1] = REINITIALISATION_OF_required_OF_UE_1;
	boolState[S_OF_UE_1] = REINITIALISATION_OF_S_OF_UE_1;
	boolState[relevant_evt_OF_UE_1] = REINITIALISATION_OF_relevant_evt_OF_UE_1;
}

void storm::figaro::FigaroProgram_RailwayCabinet_Trim_repair::fireOccurrence(int numFire)
{
	//cout <<">>>>>>>>>>>>>>>>>>>> Fire of occurrence #" << numFire << " <<<<<<<<<<<<<<<<<<<<<<<" << endl;

	if (numFire == 0)
	{
		FIRE_xx10_OF_HC1_fail = true;
	}

	if (numFire == 1)
	{
		FIRE_xx11_OF_HC1_fail = true;
	}

	if (numFire == 2)
	{
		FIRE_xx10_OF_HC1_fail_DC = true;
	}

	if (numFire == 3)
	{
		FIRE_xx11_OF_HC1_fail_DC = true;
	}

	if (numFire == 4)
	{
		FIRE_xx10_OF_HC2_fail = true;
	}

	if (numFire == 5)
	{
		FIRE_xx11_OF_HC2_fail = true;
	}

	if (numFire == 6)
	{
		FIRE_xx10_OF_HC2_fail_DC = true;
	}

	if (numFire == 7)
	{
		FIRE_xx11_OF_HC2_fail_DC = true;
	}

	if (numFire == 8)
	{
		FIRE_xx10_OF_HC3_fail = true;
	}

	if (numFire == 9)
	{
		FIRE_xx11_OF_HC3_fail = true;
	}

	if (numFire == 10)
	{
		FIRE_xx10_OF_HC3_fail_DC = true;
	}

	if (numFire == 11)
	{
		FIRE_xx11_OF_HC3_fail_DC = true;
	}

	if (numFire == 12)
	{
		FIRE_xx10_OF_HC4_fail = true;
	}

	if (numFire == 13)
	{
		FIRE_xx11_OF_HC4_fail = true;
	}

	if (numFire == 14)
	{
		FIRE_xx10_OF_HC4_fail_DC = true;
	}

	if (numFire == 15)
	{
		FIRE_xx11_OF_HC4_fail_DC = true;
	}

	if (numFire == 16)
	{
		FIRE_xx10_OF_RC1_fail = true;
	}

	if (numFire == 17)
	{
		FIRE_xx11_OF_RC1_fail = true;
	}

	if (numFire == 18)
	{
		FIRE_xx10_OF_RC1_fail_DC = true;
	}

	if (numFire == 19)
	{
		FIRE_xx11_OF_RC1_fail_DC = true;
	}

	if (numFire == 20)
	{
		FIRE_xx10_OF_RC2_fail = true;
	}

	if (numFire == 21)
	{
		FIRE_xx11_OF_RC2_fail = true;
	}

	if (numFire == 22)
	{
		FIRE_xx10_OF_RC2_fail_DC = true;
	}

	if (numFire == 23)
	{
		FIRE_xx11_OF_RC2_fail_DC = true;
	}

	if (numFire == 24)
	{
		FIRE_xx10_OF_RC3_fail = true;
	}

	if (numFire == 25)
	{
		FIRE_xx11_OF_RC3_fail = true;
	}

	if (numFire == 26)
	{
		FIRE_xx10_OF_RC3_fail_DC = true;
	}

	if (numFire == 27)
	{
		FIRE_xx11_OF_RC3_fail_DC = true;
	}

	if (numFire == 28)
	{
		FIRE_xx10_OF_RC4_fail = true;
	}

	if (numFire == 29)
	{
		FIRE_xx11_OF_RC4_fail = true;
	}

	if (numFire == 30)
	{
		FIRE_xx10_OF_RC4_fail_DC = true;
	}

	if (numFire == 31)
	{
		FIRE_xx11_OF_RC4_fail_DC = true;
	}

/* ---------- DECLARATION OF OCCURRENCE RULES------------ */

	// Occurrence xx10_OF_HC1_fail
	if ((boolState[failF_OF_HC1_fail] == false) && (boolState[required_OF_HC1_fail] &&  boolState[relevant_evt_OF_HC1_fail])) 
	{
		 
		if (FIRE_xx10_OF_HC1_fail)
		{
			boolState[failF_OF_HC1_fail]  =  true;
			FIRE_xx10_OF_HC1_fail = false;
		}
	}

	// Occurrence xx11_OF_HC1_fail
	if (boolState[failF_OF_HC1_fail] == true) 
	{
		 
		if (FIRE_xx11_OF_HC1_fail)
		{
			boolState[failF_OF_HC1_fail]  =  false;
			FIRE_xx11_OF_HC1_fail = false;
		}
	}

	// Occurrence xx10_OF_HC1_fail_DC
	if ((boolState[failF_OF_HC1_fail_DC] == false) && (boolState[required_OF_HC1_fail_DC]
&& boolState[relevant_evt_OF_HC1_fail_DC])) 
	{
		 
		if (FIRE_xx10_OF_HC1_fail_DC)
		{
			boolState[failF_OF_HC1_fail_DC]  =  true;
			FIRE_xx10_OF_HC1_fail_DC = false;
		}
	}

	// Occurrence xx11_OF_HC1_fail_DC
	if (boolState[failF_OF_HC1_fail_DC] == true) 
	{
		 
		if (FIRE_xx11_OF_HC1_fail_DC)
		{
			boolState[failF_OF_HC1_fail_DC]  =  false;
			FIRE_xx11_OF_HC1_fail_DC = false;
		}
	}

	// Occurrence xx10_OF_HC2_fail
	if ((boolState[failF_OF_HC2_fail] == false) && (boolState[required_OF_HC2_fail] &&  boolState[relevant_evt_OF_HC2_fail])) 
	{
		 
		if (FIRE_xx10_OF_HC2_fail)
		{
			boolState[failF_OF_HC2_fail]  =  true;
			FIRE_xx10_OF_HC2_fail = false;
		}
	}

	// Occurrence xx11_OF_HC2_fail
	if (boolState[failF_OF_HC2_fail] == true) 
	{
		 
		if (FIRE_xx11_OF_HC2_fail)
		{
			boolState[failF_OF_HC2_fail]  =  false;
			FIRE_xx11_OF_HC2_fail = false;
		}
	}

	// Occurrence xx10_OF_HC2_fail_DC
	if ((boolState[failF_OF_HC2_fail_DC] == false) && (boolState[required_OF_HC2_fail_DC]
&& boolState[relevant_evt_OF_HC2_fail_DC])) 
	{
		 
		if (FIRE_xx10_OF_HC2_fail_DC)
		{
			boolState[failF_OF_HC2_fail_DC]  =  true;
			FIRE_xx10_OF_HC2_fail_DC = false;
		}
	}

	// Occurrence xx11_OF_HC2_fail_DC
	if (boolState[failF_OF_HC2_fail_DC] == true) 
	{
		 
		if (FIRE_xx11_OF_HC2_fail_DC)
		{
			boolState[failF_OF_HC2_fail_DC]  =  false;
			FIRE_xx11_OF_HC2_fail_DC = false;
		}
	}

	// Occurrence xx10_OF_HC3_fail
	if ((boolState[failF_OF_HC3_fail] == false) && (boolState[required_OF_HC3_fail] &&  boolState[relevant_evt_OF_HC3_fail])) 
	{
		 
		if (FIRE_xx10_OF_HC3_fail)
		{
			boolState[failF_OF_HC3_fail]  =  true;
			FIRE_xx10_OF_HC3_fail = false;
		}
	}

	// Occurrence xx11_OF_HC3_fail
	if (boolState[failF_OF_HC3_fail] == true) 
	{
		 
		if (FIRE_xx11_OF_HC3_fail)
		{
			boolState[failF_OF_HC3_fail]  =  false;
			FIRE_xx11_OF_HC3_fail = false;
		}
	}

	// Occurrence xx10_OF_HC3_fail_DC
	if ((boolState[failF_OF_HC3_fail_DC] == false) && (boolState[required_OF_HC3_fail_DC]
&& boolState[relevant_evt_OF_HC3_fail_DC])) 
	{
		 
		if (FIRE_xx10_OF_HC3_fail_DC)
		{
			boolState[failF_OF_HC3_fail_DC]  =  true;
			FIRE_xx10_OF_HC3_fail_DC = false;
		}
	}

	// Occurrence xx11_OF_HC3_fail_DC
	if (boolState[failF_OF_HC3_fail_DC] == true) 
	{
		 
		if (FIRE_xx11_OF_HC3_fail_DC)
		{
			boolState[failF_OF_HC3_fail_DC]  =  false;
			FIRE_xx11_OF_HC3_fail_DC = false;
		}
	}

	// Occurrence xx10_OF_HC4_fail
	if ((boolState[failF_OF_HC4_fail] == false) && (boolState[required_OF_HC4_fail] &&  boolState[relevant_evt_OF_HC4_fail])) 
	{
		 
		if (FIRE_xx10_OF_HC4_fail)
		{
			boolState[failF_OF_HC4_fail]  =  true;
			FIRE_xx10_OF_HC4_fail = false;
		}
	}

	// Occurrence xx11_OF_HC4_fail
	if (boolState[failF_OF_HC4_fail] == true) 
	{
		 
		if (FIRE_xx11_OF_HC4_fail)
		{
			boolState[failF_OF_HC4_fail]  =  false;
			FIRE_xx11_OF_HC4_fail = false;
		}
	}

	// Occurrence xx10_OF_HC4_fail_DC
	if ((boolState[failF_OF_HC4_fail_DC] == false) && (boolState[required_OF_HC4_fail_DC]
&& boolState[relevant_evt_OF_HC4_fail_DC])) 
	{
		 
		if (FIRE_xx10_OF_HC4_fail_DC)
		{
			boolState[failF_OF_HC4_fail_DC]  =  true;
			FIRE_xx10_OF_HC4_fail_DC = false;
		}
	}

	// Occurrence xx11_OF_HC4_fail_DC
	if (boolState[failF_OF_HC4_fail_DC] == true) 
	{
		 
		if (FIRE_xx11_OF_HC4_fail_DC)
		{
			boolState[failF_OF_HC4_fail_DC]  =  false;
			FIRE_xx11_OF_HC4_fail_DC = false;
		}
	}

	// Occurrence xx10_OF_RC1_fail
	if ((boolState[failF_OF_RC1_fail] == false) && (boolState[required_OF_RC1_fail] &&  boolState[relevant_evt_OF_RC1_fail])) 
	{
		 
		if (FIRE_xx10_OF_RC1_fail)
		{
			boolState[failF_OF_RC1_fail]  =  true;
			FIRE_xx10_OF_RC1_fail = false;
		}
	}

	// Occurrence xx11_OF_RC1_fail
	if (boolState[failF_OF_RC1_fail] == true) 
	{
		 
		if (FIRE_xx11_OF_RC1_fail)
		{
			boolState[failF_OF_RC1_fail]  =  false;
			FIRE_xx11_OF_RC1_fail = false;
		}
	}

	// Occurrence xx10_OF_RC1_fail_DC
	if ((boolState[failF_OF_RC1_fail_DC] == false) && (boolState[required_OF_RC1_fail_DC]
&& boolState[relevant_evt_OF_RC1_fail_DC])) 
	{
		 
		if (FIRE_xx10_OF_RC1_fail_DC)
		{
			boolState[failF_OF_RC1_fail_DC]  =  true;
			FIRE_xx10_OF_RC1_fail_DC = false;
		}
	}

	// Occurrence xx11_OF_RC1_fail_DC
	if (boolState[failF_OF_RC1_fail_DC] == true) 
	{
		 
		if (FIRE_xx11_OF_RC1_fail_DC)
		{
			boolState[failF_OF_RC1_fail_DC]  =  false;
			FIRE_xx11_OF_RC1_fail_DC = false;
		}
	}

	// Occurrence xx10_OF_RC2_fail
	if ((boolState[failF_OF_RC2_fail] == false) && (boolState[required_OF_RC2_fail] &&  boolState[relevant_evt_OF_RC2_fail])) 
	{
		 
		if (FIRE_xx10_OF_RC2_fail)
		{
			boolState[failF_OF_RC2_fail]  =  true;
			FIRE_xx10_OF_RC2_fail = false;
		}
	}

	// Occurrence xx11_OF_RC2_fail
	if (boolState[failF_OF_RC2_fail] == true) 
	{
		 
		if (FIRE_xx11_OF_RC2_fail)
		{
			boolState[failF_OF_RC2_fail]  =  false;
			FIRE_xx11_OF_RC2_fail = false;
		}
	}

	// Occurrence xx10_OF_RC2_fail_DC
	if ((boolState[failF_OF_RC2_fail_DC] == false) && (boolState[required_OF_RC2_fail_DC]
&& boolState[relevant_evt_OF_RC2_fail_DC])) 
	{
		 
		if (FIRE_xx10_OF_RC2_fail_DC)
		{
			boolState[failF_OF_RC2_fail_DC]  =  true;
			FIRE_xx10_OF_RC2_fail_DC = false;
		}
	}

	// Occurrence xx11_OF_RC2_fail_DC
	if (boolState[failF_OF_RC2_fail_DC] == true) 
	{
		 
		if (FIRE_xx11_OF_RC2_fail_DC)
		{
			boolState[failF_OF_RC2_fail_DC]  =  false;
			FIRE_xx11_OF_RC2_fail_DC = false;
		}
	}

	// Occurrence xx10_OF_RC3_fail
	if ((boolState[failF_OF_RC3_fail] == false) && (boolState[required_OF_RC3_fail] &&  boolState[relevant_evt_OF_RC3_fail])) 
	{
		 
		if (FIRE_xx10_OF_RC3_fail)
		{
			boolState[failF_OF_RC3_fail]  =  true;
			FIRE_xx10_OF_RC3_fail = false;
		}
	}

	// Occurrence xx11_OF_RC3_fail
	if (boolState[failF_OF_RC3_fail] == true) 
	{
		 
		if (FIRE_xx11_OF_RC3_fail)
		{
			boolState[failF_OF_RC3_fail]  =  false;
			FIRE_xx11_OF_RC3_fail = false;
		}
	}

	// Occurrence xx10_OF_RC3_fail_DC
	if ((boolState[failF_OF_RC3_fail_DC] == false) && (boolState[required_OF_RC3_fail_DC]
&& boolState[relevant_evt_OF_RC3_fail_DC])) 
	{
		 
		if (FIRE_xx10_OF_RC3_fail_DC)
		{
			boolState[failF_OF_RC3_fail_DC]  =  true;
			FIRE_xx10_OF_RC3_fail_DC = false;
		}
	}

	// Occurrence xx11_OF_RC3_fail_DC
	if (boolState[failF_OF_RC3_fail_DC] == true) 
	{
		 
		if (FIRE_xx11_OF_RC3_fail_DC)
		{
			boolState[failF_OF_RC3_fail_DC]  =  false;
			FIRE_xx11_OF_RC3_fail_DC = false;
		}
	}

	// Occurrence xx10_OF_RC4_fail
	if ((boolState[failF_OF_RC4_fail] == false) && (boolState[required_OF_RC4_fail] &&  boolState[relevant_evt_OF_RC4_fail])) 
	{
		 
		if (FIRE_xx10_OF_RC4_fail)
		{
			boolState[failF_OF_RC4_fail]  =  true;
			FIRE_xx10_OF_RC4_fail = false;
		}
	}

	// Occurrence xx11_OF_RC4_fail
	if (boolState[failF_OF_RC4_fail] == true) 
	{
		 
		if (FIRE_xx11_OF_RC4_fail)
		{
			boolState[failF_OF_RC4_fail]  =  false;
			FIRE_xx11_OF_RC4_fail = false;
		}
	}

	// Occurrence xx10_OF_RC4_fail_DC
	if ((boolState[failF_OF_RC4_fail_DC] == false) && (boolState[required_OF_RC4_fail_DC]
&& boolState[relevant_evt_OF_RC4_fail_DC])) 
	{
		 
		if (FIRE_xx10_OF_RC4_fail_DC)
		{
			boolState[failF_OF_RC4_fail_DC]  =  true;
			FIRE_xx10_OF_RC4_fail_DC = false;
		}
	}

	// Occurrence xx11_OF_RC4_fail_DC
	if (boolState[failF_OF_RC4_fail_DC] == true) 
	{
		 
		if (FIRE_xx11_OF_RC4_fail_DC)
		{
			boolState[failF_OF_RC4_fail_DC]  =  false;
			FIRE_xx11_OF_RC4_fail_DC = false;
		}
	}

}

std::vector<std::tuple<int, double, std::string, int>> storm::figaro::FigaroProgram_RailwayCabinet_Trim_repair::showFireableOccurrences()
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
     
	if ((boolState[failF_OF_HC1_fail] == false) && (boolState[required_OF_HC1_fail] && boolState[relevant_evt_OF_HC1_fail]))
	{
		//cout << "0 : xx10_OF_HC1_fail : FAULT failF  LABEL \"failure in operation HC1_fail\"  DIST EXP (0.0253)  INDUCING boolState[failF_OF_HC1_fail]  =  TRUE" << endl;
		list.push_back(make_tuple(0, 0.0253, "EXP", 0));
	}
	if (boolState[failF_OF_HC1_fail] == true)
	{
		//cout << "1 : xx11_OF_HC1_fail : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_HC1_fail]  =  FALSE" << endl;
		list.push_back(make_tuple(1, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_HC1_fail_DC] == false) && (boolState[required_OF_HC1_fail_DC] && boolState[relevant_evt_OF_HC1_fail_DC]))
	{
		//cout << "2 : xx10_OF_HC1_fail_DC : FAULT failF  LABEL \"failure in operation HC1_fail_DC\"  DIST EXP (0.0253)  INDUCING boolState[failF_OF_HC1_fail_DC]  =  TRUE" << endl;
		list.push_back(make_tuple(2, 0.0253, "EXP", 0));
	}
	if (boolState[failF_OF_HC1_fail_DC] == true)
	{
		//cout << "3 : xx11_OF_HC1_fail_DC : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_HC1_fail_DC]  =  FALSE" << endl;
		list.push_back(make_tuple(3, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_HC2_fail] == false) && (boolState[required_OF_HC2_fail] && boolState[relevant_evt_OF_HC2_fail]))
	{
		//cout << "4 : xx10_OF_HC2_fail : FAULT failF  LABEL \"failure in operation HC2_fail\"  DIST EXP (0.0253)  INDUCING boolState[failF_OF_HC2_fail]  =  TRUE" << endl;
		list.push_back(make_tuple(4, 0.0253, "EXP", 0));
	}
	if (boolState[failF_OF_HC2_fail] == true)
	{
		//cout << "5 : xx11_OF_HC2_fail : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_HC2_fail]  =  FALSE" << endl;
		list.push_back(make_tuple(5, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_HC2_fail_DC] == false) && (boolState[required_OF_HC2_fail_DC] && boolState[relevant_evt_OF_HC2_fail_DC]))
	{
		//cout << "6 : xx10_OF_HC2_fail_DC : FAULT failF  LABEL \"failure in operation HC2_fail_DC\"  DIST EXP (0.0253)  INDUCING boolState[failF_OF_HC2_fail_DC]  =  TRUE" << endl;
		list.push_back(make_tuple(6, 0.0253, "EXP", 0));
	}
	if (boolState[failF_OF_HC2_fail_DC] == true)
	{
		//cout << "7 : xx11_OF_HC2_fail_DC : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_HC2_fail_DC]  =  FALSE" << endl;
		list.push_back(make_tuple(7, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_HC3_fail] == false) && (boolState[required_OF_HC3_fail] && boolState[relevant_evt_OF_HC3_fail]))
	{
		//cout << "8 : xx10_OF_HC3_fail : FAULT failF  LABEL \"failure in operation HC3_fail\"  DIST EXP (0.0253)  INDUCING boolState[failF_OF_HC3_fail]  =  TRUE" << endl;
		list.push_back(make_tuple(8, 0.0253, "EXP", 0));
	}
	if (boolState[failF_OF_HC3_fail] == true)
	{
		//cout << "9 : xx11_OF_HC3_fail : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_HC3_fail]  =  FALSE" << endl;
		list.push_back(make_tuple(9, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_HC3_fail_DC] == false) && (boolState[required_OF_HC3_fail_DC] && boolState[relevant_evt_OF_HC3_fail_DC]))
	{
		//cout << "10 : xx10_OF_HC3_fail_DC : FAULT failF  LABEL \"failure in operation HC3_fail_DC\"  DIST EXP (0.0253)  INDUCING boolState[failF_OF_HC3_fail_DC]  =  TRUE" << endl;
		list.push_back(make_tuple(10, 0.0253, "EXP", 0));
	}
	if (boolState[failF_OF_HC3_fail_DC] == true)
	{
		//cout << "11 : xx11_OF_HC3_fail_DC : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_HC3_fail_DC]  =  FALSE" << endl;
		list.push_back(make_tuple(11, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_HC4_fail] == false) && (boolState[required_OF_HC4_fail] && boolState[relevant_evt_OF_HC4_fail]))
	{
		//cout << "12 : xx10_OF_HC4_fail : FAULT failF  LABEL \"failure in operation HC4_fail\"  DIST EXP (0.0253)  INDUCING boolState[failF_OF_HC4_fail]  =  TRUE" << endl;
		list.push_back(make_tuple(12, 0.0253, "EXP", 0));
	}
	if (boolState[failF_OF_HC4_fail] == true)
	{
		//cout << "13 : xx11_OF_HC4_fail : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_HC4_fail]  =  FALSE" << endl;
		list.push_back(make_tuple(13, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_HC4_fail_DC] == false) && (boolState[required_OF_HC4_fail_DC] && boolState[relevant_evt_OF_HC4_fail_DC]))
	{
		//cout << "14 : xx10_OF_HC4_fail_DC : FAULT failF  LABEL \"failure in operation HC4_fail_DC\"  DIST EXP (0.0253)  INDUCING boolState[failF_OF_HC4_fail_DC]  =  TRUE" << endl;
		list.push_back(make_tuple(14, 0.0253, "EXP", 0));
	}
	if (boolState[failF_OF_HC4_fail_DC] == true)
	{
		//cout << "15 : xx11_OF_HC4_fail_DC : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_HC4_fail_DC]  =  FALSE" << endl;
		list.push_back(make_tuple(15, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_RC1_fail] == false) && (boolState[required_OF_RC1_fail] && boolState[relevant_evt_OF_RC1_fail]))
	{
		//cout << "16 : xx10_OF_RC1_fail : FAULT failF  LABEL \"failure in operation RC1_fail\"  DIST EXP (0.01)  INDUCING boolState[failF_OF_RC1_fail]  =  TRUE" << endl;
		list.push_back(make_tuple(16, 0.01, "EXP", 0));
	}
	if (boolState[failF_OF_RC1_fail] == true)
	{
		//cout << "17 : xx11_OF_RC1_fail : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_RC1_fail]  =  FALSE" << endl;
		list.push_back(make_tuple(17, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_RC1_fail_DC] == false) && (boolState[required_OF_RC1_fail_DC] && boolState[relevant_evt_OF_RC1_fail_DC]))
	{
		//cout << "18 : xx10_OF_RC1_fail_DC : FAULT failF  LABEL \"failure in operation RC1_fail_DC\"  DIST EXP (0.01)  INDUCING boolState[failF_OF_RC1_fail_DC]  =  TRUE" << endl;
		list.push_back(make_tuple(18, 0.01, "EXP", 0));
	}
	if (boolState[failF_OF_RC1_fail_DC] == true)
	{
		//cout << "19 : xx11_OF_RC1_fail_DC : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_RC1_fail_DC]  =  FALSE" << endl;
		list.push_back(make_tuple(19, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_RC2_fail] == false) && (boolState[required_OF_RC2_fail] && boolState[relevant_evt_OF_RC2_fail]))
	{
		//cout << "20 : xx10_OF_RC2_fail : FAULT failF  LABEL \"failure in operation RC2_fail\"  DIST EXP (0.01)  INDUCING boolState[failF_OF_RC2_fail]  =  TRUE" << endl;
		list.push_back(make_tuple(20, 0.01, "EXP", 0));
	}
	if (boolState[failF_OF_RC2_fail] == true)
	{
		//cout << "21 : xx11_OF_RC2_fail : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_RC2_fail]  =  FALSE" << endl;
		list.push_back(make_tuple(21, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_RC2_fail_DC] == false) && (boolState[required_OF_RC2_fail_DC] && boolState[relevant_evt_OF_RC2_fail_DC]))
	{
		//cout << "22 : xx10_OF_RC2_fail_DC : FAULT failF  LABEL \"failure in operation RC2_fail_DC\"  DIST EXP (0.01)  INDUCING boolState[failF_OF_RC2_fail_DC]  =  TRUE" << endl;
		list.push_back(make_tuple(22, 0.01, "EXP", 0));
	}
	if (boolState[failF_OF_RC2_fail_DC] == true)
	{
		//cout << "23 : xx11_OF_RC2_fail_DC : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_RC2_fail_DC]  =  FALSE" << endl;
		list.push_back(make_tuple(23, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_RC3_fail] == false) && (boolState[required_OF_RC3_fail] && boolState[relevant_evt_OF_RC3_fail]))
	{
		//cout << "24 : xx10_OF_RC3_fail : FAULT failF  LABEL \"failure in operation RC3_fail\"  DIST EXP (0.01)  INDUCING boolState[failF_OF_RC3_fail]  =  TRUE" << endl;
		list.push_back(make_tuple(24, 0.01, "EXP", 0));
	}
	if (boolState[failF_OF_RC3_fail] == true)
	{
		//cout << "25 : xx11_OF_RC3_fail : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_RC3_fail]  =  FALSE" << endl;
		list.push_back(make_tuple(25, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_RC3_fail_DC] == false) && (boolState[required_OF_RC3_fail_DC] && boolState[relevant_evt_OF_RC3_fail_DC]))
	{
		//cout << "26 : xx10_OF_RC3_fail_DC : FAULT failF  LABEL \"failure in operation RC3_fail_DC\"  DIST EXP (0.01)  INDUCING boolState[failF_OF_RC3_fail_DC]  =  TRUE" << endl;
		list.push_back(make_tuple(26, 0.01, "EXP", 0));
	}
	if (boolState[failF_OF_RC3_fail_DC] == true)
	{
		//cout << "27 : xx11_OF_RC3_fail_DC : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_RC3_fail_DC]  =  FALSE" << endl;
		list.push_back(make_tuple(27, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_RC4_fail] == false) && (boolState[required_OF_RC4_fail] && boolState[relevant_evt_OF_RC4_fail]))
	{
		//cout << "28 : xx10_OF_RC4_fail : FAULT failF  LABEL \"failure in operation RC4_fail\"  DIST EXP (0.01)  INDUCING boolState[failF_OF_RC4_fail]  =  TRUE" << endl;
		list.push_back(make_tuple(28, 0.01, "EXP", 0));
	}
	if (boolState[failF_OF_RC4_fail] == true)
	{
		//cout << "29 : xx11_OF_RC4_fail : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_RC4_fail]  =  FALSE" << endl;
		list.push_back(make_tuple(29, 0.1, "EXP", 0));
	}
	if ((boolState[failF_OF_RC4_fail_DC] == false) && (boolState[required_OF_RC4_fail_DC] && boolState[relevant_evt_OF_RC4_fail_DC]))
	{
		//cout << "30 : xx10_OF_RC4_fail_DC : FAULT failF  LABEL \"failure in operation RC4_fail_DC\"  DIST EXP (0.01)  INDUCING boolState[failF_OF_RC4_fail_DC]  =  TRUE" << endl;
		list.push_back(make_tuple(30, 0.01, "EXP", 0));
	}
	if (boolState[failF_OF_RC4_fail_DC] == true)
	{
		//cout << "31 : xx11_OF_RC4_fail_DC : REPAIR rep  DIST EXP (0.1)  INDUCING boolState[failF_OF_RC4_fail_DC]  =  FALSE" << endl;
		list.push_back(make_tuple(31, 0.1, "EXP", 0));
	}
	return list;
}


void storm::figaro::FigaroProgram_RailwayCabinet_Trim_repair::runOnceInteractionStep_initialization()
{
	if (boolState[failF_OF_HC1_fail] == true )
	{
		boolState[S_OF_HC1_fail]  =  true;
	}

	if (boolState[failF_OF_HC1_fail_DC] == true )
	{
		boolState[S_OF_HC1_fail_DC]  =  true;
	}

	if (boolState[failF_OF_HC2_fail] == true )
	{
		boolState[S_OF_HC2_fail]  =  true;
	}

	if (boolState[failF_OF_HC2_fail_DC] == true )
	{
		boolState[S_OF_HC2_fail_DC]  =  true;
	}

	if (boolState[failF_OF_HC3_fail] == true )
	{
		boolState[S_OF_HC3_fail]  =  true;
	}

	if (boolState[failF_OF_HC3_fail_DC] == true )
	{
		boolState[S_OF_HC3_fail_DC]  =  true;
	}

	if (boolState[failF_OF_HC4_fail] == true )
	{
		boolState[S_OF_HC4_fail]  =  true;
	}

	if (boolState[failF_OF_HC4_fail_DC] == true )
	{
		boolState[S_OF_HC4_fail_DC]  =  true;
	}

	if (boolState[failF_OF_RC1_fail] == true )
	{
		boolState[S_OF_RC1_fail]  =  true;
	}

	if (boolState[failF_OF_RC1_fail_DC] == true )
	{
		boolState[S_OF_RC1_fail_DC]  =  true;
	}

	if (boolState[failF_OF_RC2_fail] == true )
	{
		boolState[S_OF_RC2_fail]  =  true;
	}

	if (boolState[failF_OF_RC2_fail_DC] == true )
	{
		boolState[S_OF_RC2_fail_DC]  =  true;
	}

	if (boolState[failF_OF_RC3_fail] == true )
	{
		boolState[S_OF_RC3_fail]  =  true;
	}

	if (boolState[failF_OF_RC3_fail_DC] == true )
	{
		boolState[S_OF_RC3_fail_DC]  =  true;
	}

	if (boolState[failF_OF_RC4_fail] == true )
	{
		boolState[S_OF_RC4_fail]  =  true;
	}

	if (boolState[failF_OF_RC4_fail_DC] == true )
	{
		boolState[S_OF_RC4_fail_DC]  =  true;
	}

}


void storm::figaro::FigaroProgram_RailwayCabinet_Trim_repair::runOnceInteractionStep_propagate_effect_S()
{
	if (((boolState[S_OF_HC1_fail_DC] || boolState[S_OF_HC2_fail_DC]) || boolState[S_OF_HC3_fail_DC]) || boolState[S_OF_HC4_fail_DC] )
	{
		boolState[S_OF_HC_fail_DC]  =  true;
	}

	if (((boolState[S_OF_RC1_fail_DC] || boolState[S_OF_RC2_fail_DC]) || boolState[S_OF_RC3_fail_DC]) || boolState[S_OF_RC4_fail_DC] )
	{
		boolState[S_OF_RC_fail_DC]  =  true;
	}

	if ((boolState[S_OF_Two_HC_fail] || boolState[S_OF_Two_RC_HC_fail_DC]) || boolState[S_OF_Two_RC_fail] )
	{
		boolState[S_OF_System]  =  true;
	}

	if ((2 <= (boolState[S_OF_HC1_fail] + boolState[S_OF_HC2_fail] + boolState[S_OF_HC3_fail] + boolState[S_OF_HC4_fail])) )
	{
		boolState[S_OF_Two_HC_fail]  =  true;
	}

	if (boolState[S_OF_HC_fail_DC] && boolState[S_OF_RC_fail_DC] )
	{
		boolState[S_OF_Two_RC_HC_fail_DC]  =  true;
	}

	if ((2 <= (boolState[S_OF_RC1_fail] + boolState[S_OF_RC2_fail] + boolState[S_OF_RC3_fail] + boolState[S_OF_RC4_fail])) )
	{
		boolState[S_OF_Two_RC_fail]  =  true;
	}

	if (boolState[S_OF_System] )
	{
		boolState[S_OF_UE_1]  =  true;
	}

}


void storm::figaro::FigaroProgram_RailwayCabinet_Trim_repair::runOnceInteractionStep_propagate_effect_required()
{
	if ( !boolState[required_OF_Two_HC_fail] )
	{
		boolState[required_OF_HC1_fail]  =  false;
	}

	if (boolState[relevant_evt_OF_Two_HC_fail] && ( !boolState[S_OF_Two_HC_fail]) )
	{
		boolState[relevant_evt_OF_HC1_fail]  =  true;
	}

	if ( !boolState[required_OF_HC_fail_DC] )
	{
		boolState[required_OF_HC1_fail_DC]  =  false;
	}

	if (boolState[relevant_evt_OF_HC_fail_DC] && ( !boolState[S_OF_HC_fail_DC]) )
	{
		boolState[relevant_evt_OF_HC1_fail_DC]  =  true;
	}

	if ( !boolState[required_OF_Two_HC_fail] )
	{
		boolState[required_OF_HC2_fail]  =  false;
	}

	if (boolState[relevant_evt_OF_Two_HC_fail] && ( !boolState[S_OF_Two_HC_fail]) )
	{
		boolState[relevant_evt_OF_HC2_fail]  =  true;
	}

	if ( !boolState[required_OF_HC_fail_DC] )
	{
		boolState[required_OF_HC2_fail_DC]  =  false;
	}

	if (boolState[relevant_evt_OF_HC_fail_DC] && ( !boolState[S_OF_HC_fail_DC]) )
	{
		boolState[relevant_evt_OF_HC2_fail_DC]  =  true;
	}

	if ( !boolState[required_OF_Two_HC_fail] )
	{
		boolState[required_OF_HC3_fail]  =  false;
	}

	if (boolState[relevant_evt_OF_Two_HC_fail] && ( !boolState[S_OF_Two_HC_fail]) )
	{
		boolState[relevant_evt_OF_HC3_fail]  =  true;
	}

	if ( !boolState[required_OF_HC_fail_DC] )
	{
		boolState[required_OF_HC3_fail_DC]  =  false;
	}

	if (boolState[relevant_evt_OF_HC_fail_DC] && ( !boolState[S_OF_HC_fail_DC]) )
	{
		boolState[relevant_evt_OF_HC3_fail_DC]  =  true;
	}

	if ( !boolState[required_OF_Two_HC_fail] )
	{
		boolState[required_OF_HC4_fail]  =  false;
	}

	if (boolState[relevant_evt_OF_Two_HC_fail] && ( !boolState[S_OF_Two_HC_fail]) )
	{
		boolState[relevant_evt_OF_HC4_fail]  =  true;
	}

	if ( !boolState[required_OF_HC_fail_DC] )
	{
		boolState[required_OF_HC4_fail_DC]  =  false;
	}

	if (boolState[relevant_evt_OF_HC_fail_DC] && ( !boolState[S_OF_HC_fail_DC]) )
	{
		boolState[relevant_evt_OF_HC4_fail_DC]  =  true;
	}

	if ( !boolState[required_OF_Two_RC_HC_fail_DC] )
	{
		boolState[required_OF_HC_fail_DC]  =  false;
	}

	if (boolState[relevant_evt_OF_Two_RC_HC_fail_DC] && ( !boolState[S_OF_Two_RC_HC_fail_DC]) )
	{
		boolState[relevant_evt_OF_HC_fail_DC]  =  true;
	}

	if ( !boolState[required_OF_Two_RC_fail] )
	{
		boolState[required_OF_RC1_fail]  =  false;
	}

	if (boolState[relevant_evt_OF_Two_RC_fail] && ( !boolState[S_OF_Two_RC_fail]) )
	{
		boolState[relevant_evt_OF_RC1_fail]  =  true;
	}

	if ( !boolState[required_OF_RC_fail_DC] )
	{
		boolState[required_OF_RC1_fail_DC]  =  false;
	}

	if (boolState[relevant_evt_OF_RC_fail_DC] && ( !boolState[S_OF_RC_fail_DC]) )
	{
		boolState[relevant_evt_OF_RC1_fail_DC]  =  true;
	}

	if ( !boolState[required_OF_Two_RC_fail] )
	{
		boolState[required_OF_RC2_fail]  =  false;
	}

	if (boolState[relevant_evt_OF_Two_RC_fail] && ( !boolState[S_OF_Two_RC_fail]) )
	{
		boolState[relevant_evt_OF_RC2_fail]  =  true;
	}

	if ( !boolState[required_OF_RC_fail_DC] )
	{
		boolState[required_OF_RC2_fail_DC]  =  false;
	}

	if (boolState[relevant_evt_OF_RC_fail_DC] && ( !boolState[S_OF_RC_fail_DC]) )
	{
		boolState[relevant_evt_OF_RC2_fail_DC]  =  true;
	}

	if ( !boolState[required_OF_Two_RC_fail] )
	{
		boolState[required_OF_RC3_fail]  =  false;
	}

	if (boolState[relevant_evt_OF_Two_RC_fail] && ( !boolState[S_OF_Two_RC_fail]) )
	{
		boolState[relevant_evt_OF_RC3_fail]  =  true;
	}

	if ( !boolState[required_OF_RC_fail_DC] )
	{
		boolState[required_OF_RC3_fail_DC]  =  false;
	}

	if (boolState[relevant_evt_OF_RC_fail_DC] && ( !boolState[S_OF_RC_fail_DC]) )
	{
		boolState[relevant_evt_OF_RC3_fail_DC]  =  true;
	}

	if ( !boolState[required_OF_Two_RC_fail] )
	{
		boolState[required_OF_RC4_fail]  =  false;
	}

	if (boolState[relevant_evt_OF_Two_RC_fail] && ( !boolState[S_OF_Two_RC_fail]) )
	{
		boolState[relevant_evt_OF_RC4_fail]  =  true;
	}

	if ( !boolState[required_OF_RC_fail_DC] )
	{
		boolState[required_OF_RC4_fail_DC]  =  false;
	}

	if (boolState[relevant_evt_OF_RC_fail_DC] && ( !boolState[S_OF_RC_fail_DC]) )
	{
		boolState[relevant_evt_OF_RC4_fail_DC]  =  true;
	}

	if ( !boolState[required_OF_Two_RC_HC_fail_DC] )
	{
		boolState[required_OF_RC_fail_DC]  =  false;
	}

	if (boolState[relevant_evt_OF_Two_RC_HC_fail_DC] && ( !boolState[S_OF_Two_RC_HC_fail_DC]) )
	{
		boolState[relevant_evt_OF_RC_fail_DC]  =  true;
	}

	if ( !boolState[required_OF_UE_1] )
	{
		boolState[required_OF_System]  =  false;
	}

	if (boolState[relevant_evt_OF_UE_1] && ( !boolState[S_OF_UE_1]) )
	{
		boolState[relevant_evt_OF_System]  =  true;
	}

	if ( !boolState[required_OF_System] )
	{
		boolState[required_OF_Two_HC_fail]  =  false;
	}

	if (boolState[relevant_evt_OF_System] && ( !boolState[S_OF_System]) )
	{
		boolState[relevant_evt_OF_Two_HC_fail]  =  true;
	}

	if ( !boolState[required_OF_System] )
	{
		boolState[required_OF_Two_RC_HC_fail_DC]  =  false;
	}

	if (boolState[relevant_evt_OF_System] && ( !boolState[S_OF_System]) )
	{
		boolState[relevant_evt_OF_Two_RC_HC_fail_DC]  =  true;
	}

	if ( !boolState[required_OF_System] )
	{
		boolState[required_OF_Two_RC_fail]  =  false;
	}

	if (boolState[relevant_evt_OF_System] && ( !boolState[S_OF_System]) )
	{
		boolState[relevant_evt_OF_Two_RC_fail]  =  true;
	}



	boolState[relevant_evt_OF_UE_1]  =  true  ;

}


void storm::figaro::FigaroProgram_RailwayCabinet_Trim_repair::runOnceInteractionStep_propagate_leaves()
{


	boolState[already_S_OF_HC1_fail]  =  boolState[S_OF_HC1_fail]  ;



	boolState[already_S_OF_HC1_fail_DC]  =  boolState[S_OF_HC1_fail_DC]  ;



	boolState[already_S_OF_HC2_fail]  =  boolState[S_OF_HC2_fail]  ;



	boolState[already_S_OF_HC2_fail_DC]  =  boolState[S_OF_HC2_fail_DC]  ;



	boolState[already_S_OF_HC3_fail]  =  boolState[S_OF_HC3_fail]  ;



	boolState[already_S_OF_HC3_fail_DC]  =  boolState[S_OF_HC3_fail_DC]  ;



	boolState[already_S_OF_HC4_fail]  =  boolState[S_OF_HC4_fail]  ;



	boolState[already_S_OF_HC4_fail_DC]  =  boolState[S_OF_HC4_fail_DC]  ;



	boolState[already_S_OF_HC_fail_DC]  =  boolState[S_OF_HC_fail_DC]  ;



	boolState[already_S_OF_RC1_fail]  =  boolState[S_OF_RC1_fail]  ;



	boolState[already_S_OF_RC1_fail_DC]  =  boolState[S_OF_RC1_fail_DC]  ;



	boolState[already_S_OF_RC2_fail]  =  boolState[S_OF_RC2_fail]  ;



	boolState[already_S_OF_RC2_fail_DC]  =  boolState[S_OF_RC2_fail_DC]  ;



	boolState[already_S_OF_RC3_fail]  =  boolState[S_OF_RC3_fail]  ;



	boolState[already_S_OF_RC3_fail_DC]  =  boolState[S_OF_RC3_fail_DC]  ;



	boolState[already_S_OF_RC4_fail]  =  boolState[S_OF_RC4_fail]  ;



	boolState[already_S_OF_RC4_fail_DC]  =  boolState[S_OF_RC4_fail_DC]  ;



	boolState[already_S_OF_RC_fail_DC]  =  boolState[S_OF_RC_fail_DC]  ;



	boolState[already_S_OF_System]  =  boolState[S_OF_System]  ;



	boolState[already_S_OF_Two_HC_fail]  =  boolState[S_OF_Two_HC_fail]  ;



	boolState[already_S_OF_Two_RC_HC_fail_DC]  =  boolState[S_OF_Two_RC_HC_fail_DC]  ;



	boolState[already_S_OF_Two_RC_fail]  =  boolState[S_OF_Two_RC_fail]  ;



	boolState[already_S_OF_UE_1]  =  boolState[S_OF_UE_1]  ;

}

void
storm::figaro::FigaroProgram_RailwayCabinet_Trim_repair::runInteractions() {
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
    }void storm::figaro::FigaroProgram_RailwayCabinet_Trim_repair::printstatetuple(){

                std::cout<<"\n State information: (";
                for (int i=0; i<boolFailureState.size(); i++)
                    {
                    std::cout<<boolFailureState.at(i);
                    }
                std::cout<<")";

            }
        int_fast64_t storm::figaro::FigaroProgram_RailwayCabinet_Trim_repair::stateSize() const{
            return numBoolState;
}
        void storm::figaro::FigaroProgram_RailwayCabinet_Trim_repair::fireinsttransitiongroup(std::string user_input_ins)

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
    