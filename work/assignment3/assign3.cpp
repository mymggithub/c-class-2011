// Name: Mark Garcia
// ID: 1213357
// Date: 2/2/12
// File: assign3
//a Bill Calculation program 

#include <iostream>
#include <iomanip>
#include "formatNumber.h"

using namespace std;

void totalOutput (double m,double t)         
{
	//To Declare The Varibles
	double userTotal;
	
	//Assiment
	userTotal = m + t;
	
	//The Output
	cout << "The cost for the mounth is :\t\t"<< setw(12) << left << formatNumber(m, 1) <<  endl;
	cout << "The cost for the extra hours is :\t" << setw(12) << left << formatNumber(t, 1) << endl;
	cout << "__________________________________________" << endl;
	cout << "The total is :\t\t\t\t" << setw(12) << left << formatNumber(userTotal, 1) << endl;
							
	
}        

int main ()
{
	//To quit loop
	char quit = 'y';
	do
	{
		//To Declare The Varibles
		char choice;
		int Ahours = 10, Bhours = 20 , userMonths = 1, userHousrs, exTime = 0;
		double Acost = 9.95, Bcost = 14.95, Ccost = 19.95, exTimeCost = 0, monthCost = 0;
		double A_addHoursCost = 2.00, B_addHoursCost = 1.25;
	
		//To Inform
		cout << "This is a Bill Calculation program for Package A B and C" << endl;
		cout << "---------------------------------------------------------------------" << endl;
		cout << 	"Package A:\tFor " << Acost << " per month " << Ahours << " hours of access are provided.\n Additional hours are " << A_addHoursCost << " per hour. \n\nPackage B:\tFor " << Bcost << " per month " << Bhours << " hours of access are provided.\n Additional hours are " << B_addHoursCost <<" per hour. \n\nPackage C:\tFor "<< Ccost <<" per month unlimited access is provided." << endl << endl << endl;

		//The Input of the package
		cout << "Enter the Package of you choice A B or C :";
		cin >> choice;
		cout << endl;

		//switch
		switch (choice)
				{																																	//switch start
				
					case 'a':
					case 'A':
						{																															//case a start

						
							//Input and Validation
							do 	
							{																														//loop start
									cout << "Enter the number of hours used for this Package(if not put 0) :";
									cin >> userHousrs;
									cout << endl;
							} while (userHousrs > 744 && userHousrs < -1);															//loop stop
					
							//The Assiments
							if (userHousrs > Ahours)
								exTime = userHousrs - Ahours;	
							exTimeCost = exTime * A_addHoursCost;
							monthCost = userMonths * Acost;
							
							//Output
							totalOutput (monthCost,exTimeCost);           
							
						
						}                                                                                   		   //case a stop
							break; 
					case 'b':
					case 'B':
						{                                                                                     	      //case b start

					
							//Input and Validation
							do 	
								{																													//loop start
									cout << "Enter the number of hours used for this Package(if not put 0) :";
									cin >> userHousrs;
									cout << endl;
								} while (userHousrs > 744 && userHousrs < -1);                                  			//loop stop
					
							//The Assiments
							if (userHousrs > Bhours)
								exTime = userHousrs - Bhours;
							exTimeCost = exTime * B_addHoursCost;
							monthCost = userMonths * Bcost;
					
							//Output
							totalOutput (monthCost,exTimeCost);           
						
						
						}																															// case b stop
							break; 
					case 'c':
					case 'C':
						{																															// case c start

							//The Assiments
							monthCost = userMonths * Ccost;
					
							//Output
							totalOutput (monthCost,exTimeCost);           
					
						}																															// case c stop
							break; 
					default: 
						cout << "That is not a real Package." << endl << endl;

				}																																	//swtich stop

						//quit output
						cout << endl;
						cout << "Do you want to quit" << endl << "If so type y or n" << endl;
						cin >> quit;
						cout << endl << endl;

	
	}while (quit != 'y');																													//quit loop stop
}           																																	//main stop          

                                                                                                   