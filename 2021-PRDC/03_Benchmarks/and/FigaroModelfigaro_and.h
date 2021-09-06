
#pragma once
#include "FigaroModelTemplate.h"                    

namespace storm{
    namespace figaro{
        class FigaroProgram_figaro_and: public storm::figaro::FigaroProgram{
        
            // to manage mixed types
            int tmin(int a, int b){return a<b?a:b;}
            double tmin(int a, double b){return a<b?a:b;}
            double tmin(double a, int b){return a<b?a:b;}
            double tmin(double a, double b){return a<b?a:b;}
            int tmax(int a, int b){return a>b?a:b;}
            double tmax(int a, double b){return a>b?a:b;}
            double tmax(double a, int b){return a>b?a:b;}
            double tmax(double a, double b){return a>b?a:b;}
            int fact(int i){int res = 1;while(i>0)res*=i--;return res;}
            double lfact(int i);
        public:
            FigaroProgram_figaro_and(): FigaroProgram(
//            std::map<std::string, size_t> mFigaroboolelementindex =
				{ 
				{"required_OF_AND_1" , 0},
				{"already_S_OF_AND_1" , 1},
				{"S_OF_AND_1" , 2},
				{"relevant_evt_OF_AND_1" , 3},
				{"required_OF_F_1" , 4},
				{"already_S_OF_F_1" , 5},
				{"S_OF_F_1" , 6},
				{"relevant_evt_OF_F_1" , 7},
				{"failF_OF_F_1" , 8},
				{"required_OF_F_2" , 9},
				{"already_S_OF_F_2" , 10},
				{"S_OF_F_2" , 11},
				{"relevant_evt_OF_F_2" , 12},
				{"failF_OF_F_2" , 13},
				{"required_OF_UE_1" , 14},
				{"already_S_OF_UE_1" , 15},
				{"S_OF_UE_1" , 16},
				{"relevant_evt_OF_UE_1" , 17}},
//            std::map<std::string, size_t> mFigaroelementfailureindex =
				{ 
            	{"exp0" , 0}},
//            std::map<std::string, size_t> mFigarofloatelementindex =
				{},
//            std::map<std::string, size_t> mFigarointelementindex =
				{},
//            std::map<std::string, size_t> mFigaroenumelementindex =
				{},

//				std::string const topevent=
				"exp0",
//				static int const numBoolState = 
				18 ,
//				static int numBoolFailureState = 
				1 ,
//				static int const numFloatState = 
				0 ,
//				static int const numIntState = 
				0 ,
//				static int const numEnumState = 
				0 ,
//				bool ins_transition_found = 
				 false),ExpectedStates({7}){} 

			/* ---------- CODING ENUMERATED VARIABLES STATES ------------ */
			enum enum_status {  according_to_article = 0, maximum = 1, fn_fathers_and_trig = 2, fn_fathers_opp_trig = 3, always_true = 4, always_false = 5, equal_to_S_trig = 6, opposite_to_S_trig = 7};
			enum enum_state {st_none = 0, st_vanishing = 1, st_tangible = 2, st_absorbing = 4};
//			std::vector<bool> boolState;
//			std::vector<bool> backupBoolState;
//			std::vector<double> doubleState;
//			std::vector<double> backupDoubleState;
//			std::vector<int> intState;
//			std::vector<int> backupIntState;
//			std::vector<int> enumState;
//			std::vector<int> backupEnumState;

/* ---------- DECLARATION OF CONSTANTS ------------ */
			bool const trimming_OF_OPTIONS = false;
			int const trimming_option_OF_OPTIONS = maximum;
			bool const repairable_system_OF_OPTIONS = true;
			int const calculate_required_OF_AND_1 = fn_fathers_and_trig;
			bool const force_relevant_events_OF_AND_1 = false;
			int const calculate_required_OF_F_1 = fn_fathers_and_trig;
			bool const force_relevant_events_OF_F_1 = false;
			double const mu_OF_F_1 = 0.0001;
			double const lambda_OF_F_1 = 0.1;
			bool const failF_FROZEN_OF_F_1 = false;
			int const calculate_required_OF_F_2 = fn_fathers_and_trig;
			bool const force_relevant_events_OF_F_2 = false;
			double const mu_OF_F_2 = 0.0001;
			double const lambda_OF_F_2 = 0.1;
			bool const failF_FROZEN_OF_F_2 = false;
			int const calculate_required_OF_UE_1 = fn_fathers_and_trig;
			bool const force_relevant_events_OF_UE_1 = true;
			bool const Profil1_OF___ARBRE__EIRM = true;
			bool const no_trim_OF___ARBRE__EIRM = true;

/* ---------- DECLARATION OF OCCURRENCE RULES FIRING FLAGS ------------ */
			bool FIRE_xx10_OF_F_1;
			bool FIRE_xx11_OF_F_1;
			bool FIRE_xx10_OF_F_2;
			bool FIRE_xx11_OF_F_2;

			std::vector<int>ExpectedStates;

			enum_state CurrentState = st_none;

/* ---------- DECLARATION OF VARIABLE INDEXES ------------ */
			//boolean state
			int required_OF_AND_1 = 0 ;
			int already_S_OF_AND_1 = 1 ;
			int S_OF_AND_1 = 2 ; // "AND_1"
			int relevant_evt_OF_AND_1 = 3 ;
			int required_OF_F_1 = 4 ;
			int already_S_OF_F_1 = 5 ;
			int S_OF_F_1 = 6 ; // "F_1"
			int relevant_evt_OF_F_1 = 7 ;
			int failF_OF_F_1 = 8 ; // "défaillance en fonctionnement %OBJET"
			int required_OF_F_2 = 9 ;
			int already_S_OF_F_2 = 10 ;
			int S_OF_F_2 = 11 ; // "F_2"
			int relevant_evt_OF_F_2 = 12 ;
			int failF_OF_F_2 = 13 ; // "défaillance en fonctionnement %OBJET"
			int required_OF_UE_1 = 14 ;
			int already_S_OF_UE_1 = 15 ;
			int S_OF_UE_1 = 16 ; // "UE_1"
			int relevant_evt_OF_UE_1 = 17 ;
			//double state
			//integer state
			//enum state
			int exp0 = 0 ;

/* ---------- DECLARATION OF FUNCTIONS ------------ */
			void init();
			void saveCurrentState();
			void printState();
			void fireOccurrence(int numFire);
			std::vector<std::tuple<int, double, std::string, int>> showFireableOccurrences();
			void runOnceInteractionStep_initialization();
			void runOnceInteractionStep_propagate_effect_S();
			void runOnceInteractionStep_propagate_effect_required();
			void runOnceInteractionStep_propagate_leaves();
			int compareStates();
			void doReinitialisations();
			void runInteractions();
			void printstatetuple();
			void fireinsttransitiongroup(std::string);
			bool figaromodelhasinstransitions();
			void updateFailureStates();
        };
    }
}