// Name: Mark Garcia
// ID: 1213357
// Date: 1/29/12
// File: assign2a
//a program for a softball game that asks how many tickets for each class of seats were sold, then displays the amount of income generated from ticket sales.
#include <iostream>
#include <iomanip>
#include "formatNumber.h"
using namespace std;

int main ()
{
	//To Declare The Varibles
	int classA = 15, classB = 12, classC = 9;
	double totalClassA, totalClassB, totalClassC, totalSales;
	double numClassA = 0,numClassB = 0, numClassC = 0;

	//To Inform
	cout << "This a program for a softball game that asks how many tickets \nfor each class of seats were sold, then displays the amount \nof income generated from ticket sales." << endl << endl << "Class A = $" << classA << "\t" << "Class B = $" << classB << "\t" << "Class C = $" << classC << endl << endl;

	//The Input
	cout << "Enter the number of seats for Class A" << endl;
	cin >> numClassA;
	cout << "Enter the number of seats for Class B" << endl;	
	cin >> numClassB;
	cout << "Enter the number of seats for Class C" << endl;	
	cin >> numClassC;
	cout << endl << endl;
			
	//The Assiments
	totalClassA = classA * numClassA;
	totalClassB = classB * numClassB;
	totalClassC = classC * numClassC;
	totalSales = totalClassA + totalClassB + totalClassC;
	
	
	//The Output
	cout << "\t" << "Total for Class A tickets:" << "\t" << setw(12) << left << formatNumber(totalClassA, 1 ) << endl;
	cout << "\t" << "Total for Class B tickets:" << "\t" << setw(12) << left << formatNumber(totalClassB, 1 ) << endl;
	cout << "\t" << "Total for Class C tickets:" << "\t" << setw(12) << left << formatNumber(totalClassC, 1 ) << endl;
	cout << "---------------------------------------------" << endl;
	cout << "\t" << "Total Ticket Sales:" << "\t" << "\t" << setw(12) << formatNumber(totalSales, 1 ) << endl;

}