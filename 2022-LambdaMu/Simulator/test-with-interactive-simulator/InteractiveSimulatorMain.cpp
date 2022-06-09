

#include <iostream>
#include <array>
#include <sstream>
#include <algorithm>

#include "FigaroModel.h"

using namespace std;

int main()
{
	storm::figaro::FigaroProgram1 model = storm::figaro::FigaroProgram1();
	std::vector<std::tuple<int, double, std::string, int>> fireableOccurrences = {};
	//bool ins_transition_found = false;
	int user_input = -2;
	std::string user_input_ins = "";
	std::vector<int> list_user_inputs = {};
	std::vector<int> unique_ins_groups = {};
	int simulation_step = 0;

	model.init();
	model.runInteractions();

	do
	{
		cout << "\n ---------------------Simulation Step #" << simulation_step << "---------------------" << endl;

		model.printstatetuple();
		fireableOccurrences = model.showFireableOccurrences();

		//for (auto const& i : fireableOccurrences) {
		//	auto myTuple = i;
		//	((std::cout << std::get<0>(myTuple) << " | "), (std::cout << std::get<1>(myTuple) << " | ")), (std::cout << std::get<2>(myTuple) << " | "), (std::cout << std::get<3>(myTuple) << " | \n");
		//	if (std::get<3>(myTuple) > 0) {
		//		std::get<3>(fireableOccurrences[0]);

		//	}
		//}

		if (!model.ins_transition_found)
		{
			cout << "\n--> What occurrence do you want to fire ? (enter -1 to end interactive simulation)" << endl;
			cin >> user_input;
			if (user_input == -1) {
				break;
			}
			model.fireOccurrence(user_input);
		}
		else
		{
			bool ask_again = false;
			// !TODO: Asserting that the number of inputs is correct
			do
			{
				ask_again = false;
				list_user_inputs = {};
				unique_ins_groups = {};

				cout << "\n--> What occurrences do you want to fire ? Please chose one per INS_SUB_COUNT number, coma separated and without spaces e.g.: \"1,2,3\" .\n(enter -1 to end interactive simulation)" << endl;
				cin >> user_input_ins;

				// counting the number of different INS groups
				for (size_t i = 0; i < fireableOccurrences.size(); i++)
				{
					if (std::count(unique_ins_groups.begin(), unique_ins_groups.end(), std::get<3>(fireableOccurrences[i])))
					{
						// if std::get<3>(fireableOccurrences[i]) found in unique_ins_groups
					}
					else
					{
						// else
						unique_ins_groups.push_back(std::get<3>(fireableOccurrences[i]));
					}
				}
				//cout << "++++++++++++++++++++++++ Number of INS groups : " << unique_ins_groups.size() << endl;

				// put the user inputs into a list
				stringstream ss(user_input_ins);
				for (int i; ss >> i;) {
					list_user_inputs.push_back(i);
					if (ss.peek() == ',')
						ss.ignore();
				}

				// compare the number of user inputs to the number of different INS groups
				if (list_user_inputs.size() != unique_ins_groups.size()) {
					ask_again = true;
					cout << "\n--> ERROR INPUT: you must input one number per INS groups.";
				}



				std::vector<int> check_INS_groups = {};
				if (!ask_again) {
					for (size_t i = 0; i < list_user_inputs.size(); i++)
					{
						for (size_t j = 0; j < fireableOccurrences.size(); j++)
						{
							// checking over the list_user_input if the inputs are corrects
							if (list_user_inputs[i] == std::get<0>(fireableOccurrences[j]))
							{
								//cout << "************************MATCH: " << list_user_inputs[i] << " == " << std::get<0>(fireableOccurrences[j]) << " GROUP : " << std::get<3>(fireableOccurrences[j]) << endl;

								// checking that ONE number per INS transitions is chosen
								if (check_INS_groups.size() == 0)
								{
									check_INS_groups.push_back(std::get<3>(fireableOccurrences[j]));
									//cout << "========= I am adding :  " << std::get<3>(fireableOccurrences[j]) << " in check_INS_groups" << endl;
								}
								else
								{
									//cout << "~~~~~~~~~~~~~ SIZE : " << check_INS_groups.size() << endl;
									for (size_t k = 0; k < check_INS_groups.size(); k++)
									{
										//cout << "------------------ CHECK_GROUP: " << check_INS_groups[k] << " == " << std::get<3>(fireableOccurrences[j]) << endl;
										if (check_INS_groups[k] == std::get<3>(fireableOccurrences[j]))
										{
											ask_again = true;
											cout << "\n--> ERROR INPUT : Please chose one number per INS_SUB_COUNT number !";
										}

									}
									if (ask_again)
									{
										break;
									}
									else
									{
										check_INS_groups.push_back(std::get<3>(fireableOccurrences[j]));
										//cout << "========= I am adding ELSE :  " << std::get<3>(fireableOccurrences[j]) << " in check_INS_groups" << endl;
										break;
									}
								}
							}

							if (ask_again)
							{
								break;
							}
						}

						if (ask_again)
						{
							break;
						}
					}
				}
			} while (ask_again == true);


			// fire the occurrences
			for (size_t i = 0; i < list_user_inputs.size(); i++)
			{
				cout << list_user_inputs[i] << endl;
				user_input = list_user_inputs[i];
				if (user_input == -1) {
					break;
				}
				model.fireOccurrence(user_input);
			}




			if (user_input == -1) {
				break;
			}


		}




		model.runInteractions();

		simulation_step++;
		model.printstatetuple();

	} while (user_input != -1);

	cout << "\n --- Interactive simulation is over ---" << endl;

	return 0;
}


