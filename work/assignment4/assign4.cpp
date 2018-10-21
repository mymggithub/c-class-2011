// Name: Mark Garcia
// ID: 1213357
// Date: 2/9/12
// File: assign4
//a program that will help an elementary school student learn addition, subtraction, multiplication and division.
#include <iostream>
#include <stdlib>
#include <cstdlib>
#include <ctime>

using namespace std;

int main ()
{
	//declare
	int menuChoice, randStament;
	int num1, num2, answer, userAnswer;

	
	srand( time( 0 ) );
	
	//Intro
	cout << endl << endl << endl;
	cout << "\tYou can do addition, subtraction, or  multiplication problems" << endl << endl; 
	cout << "\tOnce you make a choice about the type of problem you want to \n\tdo, I will ask you a question." << endl << endl;
	cout << "\tIf you answer the question corretly, I will give you \n\ta new problem to solve. If you miss the question, I will \n\tkeep promting you to answer it until you get it right." << endl << endl;
	cout << "\tYou can stop answering the questions at any time by entering \n\t999 as the answer for a question. This will bring you back to \n\tthe menu that follows." << endl << endl;
	system ("PAUSE");
	system("CLS");
	//menu
	//do until choice is #4
	do
	{
		system("CLS");
		//choice 1-4
		do
		{
			cout << endl << "\t\tMenu" << endl;  
			cout << endl << "\t\tWhat would you like to do?" << endl;
			cout << endl << "\t\t\t1. Addition problems";
			cout << endl << "\t\t\t2. Subtraction problems";
			cout << endl << "\t\t\t3. Multiplication problems";
			cout << endl << "\t\t\t4. Exit the program" << endl;
			cout << endl << "\t\tSelection (1, 2, 3, or 4):";
			cin >> menuChoice;
			if (menuChoice < 0 || menuChoice >4 )
			{
				cout << "\n\tYou must enter a number in the range of 1 - 4!" << endl << endl;
				system ("PAUSE");
				system("CLS");
			}	
			
		} while (menuChoice < 0 || menuChoice >4 );	
		//switch
		cout << endl << endl; //to add space 
		switch (menuChoice)
		{
			case 1:
				{
					//do while not 999
					do
					{ 
						//random generator
						num1 = rand() % 11;
						num2 = rand() % 11;
						//do while it wrong
						do
						{
							//question
							cout << "What is " << num1 << " plus " << num2 << " (999 to exit)? " ;
							cin >> userAnswer;
							//checker
							answer = num1 + num2;
							randStament = rand() % 4;
							if (answer != userAnswer)
							{
								switch (randStament)
								{
									case 0:
										cout << "No. Please try again" << endl << endl;
										break;
									case 1:
										cout << "Sorry. That's not it" << endl << endl;
										break;
									case 2:
										cout << "No. Don't give up" << endl << endl;
										break;
									case 3:
										cout << "Not yet. Keep trying" << endl << endl;
										break;
								}
							}
						} while (answer != userAnswer && userAnswer != 999); 	
						//if correct answer 
						if (answer == userAnswer)
						{
							switch (randStament)
							{
								case 0:
									cout << "Very good!" << endl << endl;
									break;
								case 1:
									cout << "Nice work!" << endl << endl;
									break;
								case 2:
									cout << "Excellent!" << endl << endl;
									break;
								case 3:
									cout << "Keep up the good work!" << endl << endl;
									break;
							}
						}
					} while (userAnswer != 999);
				}//end case 1 stament
				break;
			case 2:
				{
					//do while not 999
					do
					{ 
						//random generator
						num1 = rand() % 11;
						num2 = rand() % 11;
						//do while it wrong
						do
						{
							//question
							cout << "What is " << num1 << " minus " << num2 << " (999 to exit)? " ;
							cin >> userAnswer;
							//checker
							answer = num1 - num2;
							randStament = rand() % 4;
							if (answer != userAnswer)
							{
								switch (randStament)
								{
									case 0:
										cout << "No. Please try again" << endl << endl;
										break;
									case 1:
										cout << "Sorry. That's not it" << endl << endl;
										break;
									case 2:
										cout << "No. Don't give up" << endl << endl;
										break;
									case 3:
										cout << "Not yet. Keep trying" << endl << endl;
										break;
								}
							}
						} while (answer != userAnswer && userAnswer != 999); 	
						//if correct answer 
						if (answer == userAnswer)
						{
							switch (randStament)
							{
								case 0:
									cout << "Very good!" << endl << endl;
									break;
								case 1:
									cout << "Nice work!" << endl << endl;
									break;
								case 2:
									cout << "Excellent!" << endl << endl;
									break;
								case 3:
									cout << "Keep up the good work!" << endl << endl;
									break;
							}
						}
					} while (userAnswer != 999);
				}//end case 2 stament
				break;
			case 3:
				{
					//do while not 999
					do
					{ 
						//random generator
						num1 = rand() % 11;
						num2 = rand() % 11;
						//do while it wrong
						do
						{
							//question
							cout << "What is " << num1 << " times " << num2 << " (999 to exit)? " ;
							cin >> userAnswer;
							//checker
							answer = num1 * num2;
							randStament = rand() % 4;
							if (answer != userAnswer)
							{
								switch (randStament)
								{
									case 0:
										cout << "No. Please try again" << endl << endl;
										break;
									case 1:
										cout << "Sorry. That's not it" << endl << endl;
										break;
									case 2:
										cout << "No. Don't give up" << endl << endl;
										break;
									case 3:
										cout << "Not yet. Keep trying" << endl << endl;
										break;
								}
							}
						} while (answer != userAnswer && userAnswer != 999); 	
						//if correct answer 
						if (answer == userAnswer)
						{
							switch (randStament)
							{
								case 0:
									cout << "Very good!" << endl << endl;
									break;
								case 1:
									cout << "Nice work!" << endl << endl;
									break;
								case 2:
									cout << "Excellent!" << endl << endl;
									break;
								case 3:
									cout << "Keep up the good work!" << endl << endl;
									break;
							}
						}
					} while (userAnswer != 999);
				}//end case 3 stament
				break;
			case 4:
				{
					cout << "GoodBye till next time!" << endl;
					system ("PAUSE");
				}//end case 4 stament
				break;
		}

	}	while (menuChoice != 4);	
}