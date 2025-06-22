#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <thread>
using namespace std;
int main() {
	srand(time(0));
	char roll;
	char start;


	cout << "Welcome to Rarity Roller C++ Edition" << endl;
	cout << "Press any key to start" << endl;
	start = _getch();
	cout << "\n";
	cout << "Game Started" << endl;
	cout << "Press any key to roll." << endl;
	while (true) {
		cout << "\n";
		int randomRareT1 = 1 + rand() % 2;
		roll = _getch();
		if (randomRareT1 == 1) {
			cout << "You got Basic!" << endl;
			cout << "50%" << endl;
			cout << "\n";
		}
		if (randomRareT1 == 2) {
			cout << "You got Common!" << endl;
			cout << "50%" << endl;
			cout << "\n";
			int randomRareT2 = 1 + rand() % 2;
			if (randomRareT2 == 2) {
				cout << "You got Uncommon!" << endl;
				cout << "25%" << endl;
				cout << "\n";
				int randomRareT3 = 1 + rand() % 2;
				if (randomRareT3 == 2) {
					cout << "You got Rare!" << endl;
					cout << "12.5%" << endl;
					cout << "\n";
					int randomRareT4 = 1 + rand() % 2;
					if (randomRareT4 == 2) {
						cout << "You got Super Rare!" << endl;
						cout << "6.25%" << endl;
						cout << "\n";
						int randomRareT5 = 1 + rand() % 2;
						if (randomRareT5 == 2) {
							cout << "You got Epic!" << endl;
							cout << "3.125%" << endl;
							cout << "\n";
							int randomRareT6 = 1 + rand() % 2;
							if (randomRareT6 == 2) {
								cout << "You got Legendary!" << endl;
								cout << "1.56%" << endl;
								cout << "\n";
								int randomRareT7 = 1 + rand() % 2;
								if (randomRareT7 == 2) {
									cout << "You got Mythic!" << endl;
									cout << "0.78%" << endl;
									cout << "\n";
									int randomRareT8 = 1 + rand() % 2;
									if (randomRareT8 == 2) {
										cout << "You got Exotic!" << endl;
										cout << "0.39%" << endl;
										std::this_thread::sleep_for(std::chrono::seconds(1));  // sleep 1 second
										cout << "\n";
										int randomRareT9 = 1 + rand() % 2;
										if (randomRareT9 == 2) {
											cout << "You got Insane!" << endl;
											cout << "0.195%" << endl;
											std::this_thread::sleep_for(std::chrono::seconds(1));  // sleep 1 second
											cout << "\n";
											int randomRareT10 = 1 + rand() % 2;
											if (randomRareT10 == 2) {
												cout << "You got Chroma!" << endl;
												cout << "0.0975%" << endl;
												std::this_thread::sleep_for(std::chrono::seconds(1));  // sleep 1 second
												cout << "\n";
												int randomRareT11 = 1 + rand() % 2;
												if (randomRareT11 == 2) {
													cout << "You got Unreal!" << endl;
													cout << "0.0975%" << endl;
													std::this_thread::sleep_for(std::chrono::seconds(1));  // sleep 1 second
													cout << "\n";
													int randomRareT12 = 1 + rand() % 2;
													if (randomRareT12 == 2) {
														cout << "You got Nuclear!" << endl;
														cout << "0.025%" << endl;
														std::this_thread::sleep_for(std::chrono::seconds(1));  // sleep 1 second
														cout << "\n";
														int randomRareT13 = 1 + rand() % 2;
														if (randomRareT13 == 2) {
															cout << "You got Alien!" << endl;
															cout << "0.0125%" << endl;
															std::this_thread::sleep_for(std::chrono::seconds(1));  // sleep 1 second
															cout << "\n";
															int randomRareT14 = 1 + rand() % 2;
															if (randomRareT14 == 2) {
																cout << "You got Universal!" << endl;
																cout << "0.00625%" << endl;
																std::this_thread::sleep_for(std::chrono::seconds(1));  // sleep 1 second
																cout << "\n";
																int randomRareT15 = 1 + rand() % 2;
																if (randomRareT15 == 2) {
																	cout << "You got un1versalllllll!" << endl;
																	cout << "print???????0.003125%????? " << endl;
																	std::this_thread::sleep_for(std::chrono::seconds(1));  // sleep 1 second
																	cout << "\n";
																	int randomRareT16 = 1 + rand() % 2;
																	if (randomRareT16 == 2) {
																		cout << "You got Impossible!" << endl;
																		cout << "0.0015625%" << endl;
																		std::this_thread::sleep_for(std::chrono::seconds(1));  // sleep 1 second
																		cout << "\n";
																		int randomRareT17 = 1 + rand() % 2;
																		if (randomRareT17 == 2) {
																			cout << "You got Secret!" << endl;
																			cout << "......0.00078125?......" << endl;
																			std::this_thread::sleep_for(std::chrono::seconds(1));  // sleep 1 second
																			cout << "\n";
																			int randomRareT18 = 1 + rand() % 2;
																			if (randomRareT18 == 2) {
																				cout << "You got the Final Rarity!" << endl;
																				cout << "0.000390625%" << endl;
																				cout << "The amount of time to achieve this is incredible." << endl;
																				cout << "I commend you for taking your time and luck to earn this rarity." << endl;
																				cout << "aohurz mvy wshfpun";
																				cout << "\n";
																				break;


																			}
																		} // randomRareT17
																	} // randomRareT16
																} // randomRareT15
															} // randomRareT14
														} // randomRareT13
													} // randomRareT12
												} // randomRareT11
											} // randomRareT10
										} // randomRareT9
									} // randomRareT8
								} // randomRareT7
							} // randomRareT6
						} // randomRareT5
					} // randomRareT4
				} // randomRareT3
			} // randomRareT2
		} // randomRareT1
	} // while(true)
} //int main()
