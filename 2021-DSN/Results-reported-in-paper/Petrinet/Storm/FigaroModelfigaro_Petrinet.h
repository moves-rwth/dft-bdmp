
    #pragma once
    #include "storm-figaro/model/FigaroModelTemplate.h"
    #include <array>
    #include <map>
    #include <vector>
    #include <sstream>
    #include<math.h>
    #include <set>

    namespace storm{
        namespace figaro{
        class FigaroProgram_figaro_Petrinet: public storm::figaro::FigaroProgram{
        public:
        FigaroProgram_figaro_Petrinet(): FigaroProgram(//            std::map<std::string, size_t> mFigaroboolelementindex =
                    { },

//            std::map<std::string, size_t> mFigaroelementfailureindex =
                    {  { "exp0",0}},

//            std::map<std::string, size_t> mFigarofloatelementindex =
                     {  
            	{"calculated_lambda_OF_Arrival" , 0},
            	{"calculated_lambda_OF_end_of_payment" , 1},
            	{"calculated_lambda_OF_tank_is_full_1" , 2},
            	{"calculated_lambda_OF_tank_is_full_2" , 3},
            	{"calculated_lambda_OF_tank_is_full_3" , 4}},

//            std::map<std::string, size_t> mFigarointelementindex =
                     {  
            	{"mark_OF_Cashdesk" , 0},
            	{"mark_OF_First_waiting_area" , 1},
            	{"mark_OF_Pump_1" , 2},
            	{"mark_OF_Pump_2" , 3},
            	{"mark_OF_Pump_3" , 4},
            	{"mark_OF_Second_waiting_area" , 5}},

//            std::map<std::string, size_t> mFigaroenumelementindex =
                     { },

//            std::map<std::string, size_t> failure_variable_names =
                    {  "exp0"},

//            std::set<std::string> enum_variables_names =
                     { },

//            std::set<std::string> float_variables_names =
                     {  
            	"calculated_lambda_OF_Arrival" ,
            	"calculated_lambda_OF_end_of_payment" ,
            	"calculated_lambda_OF_tank_is_full_1" ,
            	"calculated_lambda_OF_tank_is_full_2" ,
            	"calculated_lambda_OF_tank_is_full_3" },


//            std::string const topevent=
                    "exp0",
//            static int const numBoolState = 
                    0 ,
//             numBoolFailureState = 
                    1 ,
//            static int const numFloatState = 
                    5 ,
//            static int const numIntState = 
                    6 ,
//            static int const numEnumState = 
                    0 ,
//            bool ins_transition_found = 
                     false){} 

            /* ---------- CODING ENUMERATED VARIABLES STATES ------------ */
            enum enum_status {};

//            std::array<bool, numBoolState> boolState;
//            std::array<bool, numBoolState> backupBoolState;
//            std::array<float, numFloatState> floatState;
//            std::array<float, numFloatState> backupFloatState;
//            std::array<int, numIntState> intState;
//            std::array<int, numIntState> backupIntState;
//            std::array<int, numEnumState> enumState;
//            std::array<int, numEnumState> backupEnumState;
            
		/* ---------- DECLARATION OF CONSTANTS ------------ */
			double const lambda_OF_tank_is_full_3 = 0.1;
			int const weight_OF_ia_4 = 3;
			int const weight_OF_am_1 = 1;
			int const weight_OF_ai_6_C2 = 3;
			int const weight_OF_av_2 = 1;
			int const weight_OF_av_3 = 1;
			int const weight_OF_av_1 = 1;
			bool const Profil1_OF___ARBRE__EIRM = true;
			int const weight_OF_ai_6_C1 = 3;
			int const weight_OF_am_8 = 1;
			int const weight_OF_ia_1 = 1;
			int const weight_OF_av_7 = 1;
			int const weight_OF_ia_5 = 2;
			int const weight_OF_am_6 = 1;
			int const weight_OF_av_4 = 1;
			int const weight_OF_av_6 = 1;
			int const weight_OF_am_2 = 1;
			int const weight_OF_ia_1_2 = 1;
			int const weight_OF_am_5 = 1;
			int const weight_OF_av_8 = 1;
			int const weight_OF_av_5 = 1;
			int const weight_OF_am_7 = 1;
			int const weight_OF_ia_1_1 = 1;
			int const weight_OF_am_4 = 1;
			double const lambda_OF_tank_is_full_2 = 0.1;
			int const weight_OF_am_3 = 1;
			int const weight_OF_ai_6 = 3;
			double const lambda_OF_tank_is_full_1 = 0.1;
			double const lambda_OF_end_of_payment = 0.1;
			double const lambda_OF_Arrival = 0.2;
		
            /* ---------- DECLARATION OF OCCURRENCE RULES FIRING FLAGS ------------ */
            bool FIRE_xx2_OF_Arrival;
            bool FIRE_xx2_OF_end_of_payment;
            bool FIRE_xx2_OF_tank_is_full_1;
            bool FIRE_xx2_OF_tank_is_full_2;
            bool FIRE_xx2_OF_tank_is_full_3;


            int calculated_lambda_OF_Arrival = 0 ;
            int calculated_lambda_OF_end_of_payment = 1 ;
            int calculated_lambda_OF_tank_is_full_1 = 2 ;
            int calculated_lambda_OF_tank_is_full_2 = 3 ;
            int calculated_lambda_OF_tank_is_full_3 = 4 ;

            int mark_OF_Cashdesk = 0 ;
            int mark_OF_First_waiting_area = 1 ;
            int mark_OF_Pump_1 = 2 ;
            int mark_OF_Pump_2 = 3 ;
            int mark_OF_Pump_3 = 4 ;
            int mark_OF_Second_waiting_area = 5 ;


            int exp0 = 0 ;


            /* ---------- DECLARATION OF FUNCTIONS ------------ */
            void init();
            void saveCurrentState();
            void printState();
            void fireOccurrence(int numFire);
            std::vector<std::tuple<int, double, std::string, int>> showFireableOccurrences();
            void runOnceInteractionStep_default_step();
            int compareStates();
            void doReinitialisations();
            void runInteractions();
            void printstatetuple();
            void fireinsttransitiongroup(std::string);
            int_fast64_t stateSize() const;
            bool figaromodelhasinstransitions();
            };
        }
    }