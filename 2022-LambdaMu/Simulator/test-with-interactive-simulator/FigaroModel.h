
#pragma once
#include "FigaroModelTemplate.h"                    

namespace storm{
    namespace figaro{
        class FigaroProgram1: public storm::figaro::FigaroProgram{
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
            FigaroProgram1(): FigaroProgram(
//            std::map<std::string, size_t> mFigaroboolelementindex =
				{ 
				{"null_production_OF_Backup_1" , 0},
				{"dequeue_OF_Backup_1" , 1},
				{"fail_OF_Backup_1" , 2},
				{"null_production_OF_Block_1" , 3},
				{"dequeue_OF_Block_1" , 4},
				{"fail_OF_Block_1" , 5},
				{"null_production_OF_Block_2" , 6},
				{"dequeue_OF_Block_2" , 7},
				{"fail_OF_Block_2" , 8},
				{"null_production_OF_Block_3" , 9},
				{"dequeue_OF_Block_3" , 10},
				{"fail_OF_Block_3" , 11},
				{"null_production_OF_Block_4" , 12},
				{"dequeue_OF_Block_4" , 13},
				{"fail_OF_Block_4" , 14},
				{"null_production_OF_SS1" , 15},
				{"null_production_OF_SS2" , 16},
				{"null_production_OF_min_1" , 17},
				{"free_OF_rep_1" , 18},
				{"dequeue_OF_rep_1" , 19}},
//            std::map<std::string, size_t> mFigaroelementfailureindex =
				{ 
            	{"exp0" , 0}},
//            std::map<std::string, size_t> mFigarofloatelementindex =
				{ 
				{"capacity_OF_Backup_1" , 0},
				{"capacity_OF_Block_1" , 1},
				{"capacity_OF_Block_2" , 2},
				{"capacity_OF_Block_3" , 3},
				{"capacity_OF_Block_4" , 4},
				{"capacity_OF_SS1" , 5},
				{"potential_capacity_OF_SS1" , 6},
				{"capacity_OF_SS2" , 7},
				{"potential_capacity_OF_SS2" , 8},
				{"capacity_OF_min_1" , 9}},
//            std::map<std::string, size_t> mFigarointelementindex =
				{ 
				{"rank_OF_Backup_1" , 0},
				{"rank_OF_Block_1" , 1},
				{"rank_OF_Block_2" , 2},
				{"rank_OF_Block_3" , 3},
				{"rank_OF_Block_4" , 4},
				{"max_rank_OF_rep_1" , 5}},
//            std::map<std::string, size_t> mFigaroenumelementindex =
				{ 
				{"state_OF_Backup_1" , 0},
				{"state_OF_Block_1" , 1},
				{"state_OF_Block_2" , 2},
				{"state_OF_Block_3" , 3},
				{"state_OF_Block_4" , 4}},

//				std::string const topevent=
				"exp0",
//				static int const numBoolState = 
				20 ,
//				static int numBoolFailureState = 
				1 ,
//				static int const numFloatState = 
				10 ,
//				static int const numIntState = 
				6 ,
//				static int const numEnumState = 
				5 ,
//				bool ins_transition_found = 
				 false),ExpectedStates({7}){} 

			/* ---------- CODING ENUMERATED VARIABLES STATES ------------ */
			enum enum_status {  working = 0, standby = 1, under_repair = 2, waiting_for_rep = 3, required = 4};
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
			double const nominal_capacity_OF_Backup_1 = 70;
			double const lambda_OF_Backup_1 = 0.0001;
			double const mu_OF_Backup_1 = 0.1;
			double const gamma_OF_Backup_1 = 0.01;
			double const nominal_capacity_OF_Block_1 = 30;
			double const lambda_OF_Block_1 = 0.0001;
			double const mu_OF_Block_1 = 0.1;
			double const nominal_capacity_OF_Block_2 = 70;
			double const lambda_OF_Block_2 = 0.0001;
			double const mu_OF_Block_2 = 0.1;
			double const nominal_capacity_OF_Block_3 = 30;
			double const lambda_OF_Block_3 = 0.0001;
			double const mu_OF_Block_3 = 0.1;
			double const nominal_capacity_OF_Block_4 = 70;
			double const lambda_OF_Block_4 = 0.0001;
			double const mu_OF_Block_4 = 0.1;
			double const functioning_threshold_OF_SS1 = 0;
			double const functioning_threshold_OF_SS2 = 0;
			bool const Profil1_OF___ARBRE__EIRM = true;

/* ---------- DECLARATION OF OCCURRENCE RULES FIRING FLAGS ------------ */
			bool FIRE_fail_in_op_OF_Backup_1;
			bool FIRE_xx1_OF_Backup_1;
			bool FIRE_xx2_OF_Backup_1_INS_1;
			bool FIRE_xx2_OF_Backup_1_INS_2;
			bool FIRE_fail_in_op_OF_Block_1;
			bool FIRE_xx1_OF_Block_1;
			bool FIRE_fail_in_op_OF_Block_2;
			bool FIRE_xx1_OF_Block_2;
			bool FIRE_fail_in_op_OF_Block_3;
			bool FIRE_xx1_OF_Block_3;
			bool FIRE_fail_in_op_OF_Block_4;
			bool FIRE_xx1_OF_Block_4;

			std::vector<int>ExpectedStates;

			enum_state CurrentState = st_none;

/* ---------- DECLARATION OF VARIABLE INDEXES ------------ */
			//boolean state
			int null_production_OF_Backup_1 = 0 ; // "Backup_1 produces nothing"
			int dequeue_OF_Backup_1 = 1 ;
			int fail_OF_Backup_1 = 2 ; // "Backup_1 failure"
			int null_production_OF_Block_1 = 3 ; // "Block_1 produces nothing"
			int dequeue_OF_Block_1 = 4 ;
			int fail_OF_Block_1 = 5 ; // "Block_1 failure"
			int null_production_OF_Block_2 = 6 ; // "Block_2 produces nothing"
			int dequeue_OF_Block_2 = 7 ;
			int fail_OF_Block_2 = 8 ; // "Block_2 failure"
			int null_production_OF_Block_3 = 9 ; // "Block_3 produces nothing"
			int dequeue_OF_Block_3 = 10 ;
			int fail_OF_Block_3 = 11 ; // "Block_3 failure"
			int null_production_OF_Block_4 = 12 ; // "Block_4 produces nothing"
			int dequeue_OF_Block_4 = 13 ;
			int fail_OF_Block_4 = 14 ; // "Block_4 failure"
			int null_production_OF_SS1 = 15 ; // "SS1 produces nothing"
			int null_production_OF_SS2 = 16 ; // "SS2 produces nothing"
			int null_production_OF_min_1 = 17 ; // "min_1 produces nothing"
			int free_OF_rep_1 = 18 ;
			int dequeue_OF_rep_1 = 19 ;
			//double state
			int capacity_OF_Backup_1 = 0 ;
			int capacity_OF_Block_1 = 1 ;
			int capacity_OF_Block_2 = 2 ;
			int capacity_OF_Block_3 = 3 ;
			int capacity_OF_Block_4 = 4 ;
			int capacity_OF_SS1 = 5 ;
			int potential_capacity_OF_SS1 = 6 ;
			int capacity_OF_SS2 = 7 ;
			int potential_capacity_OF_SS2 = 8 ;
			int capacity_OF_min_1 = 9 ;
			//integer state
			int rank_OF_Backup_1 = 0 ;
			int rank_OF_Block_1 = 1 ;
			int rank_OF_Block_2 = 2 ;
			int rank_OF_Block_3 = 3 ;
			int rank_OF_Block_4 = 4 ;
			int max_rank_OF_rep_1 = 5 ;
			//enum state
			int state_OF_Backup_1 = 0 ;
			int state_OF_Block_1 = 1 ;
			int state_OF_Block_2 = 2 ;
			int state_OF_Block_3 = 3 ;
			int state_OF_Block_4 = 4 ;
			int exp0 = 0 ;

/* ---------- DECLARATION OF FUNCTIONS ------------ */
			void init();
			void saveCurrentState();
			void printState();
			void fireOccurrence(int numFire);
			std::vector<std::tuple<int, double, std::string, int>> showFireableOccurrences();
			void runOnceInteractionStep_default_step();
			void runOnceInteractionStep_compute_max_rank();
			void runOnceInteractionStep_rep_management();
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