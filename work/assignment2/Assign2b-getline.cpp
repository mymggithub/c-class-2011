// Name: Mark Garcia
// ID: 1213357
// Date: 1/26/12
// File: assign2b
//a program that calculates a theater's gross and net box office profit for a night. 
#include <iostream>
#include <iomanip>
#include <string>
#include "formatNumber.h"
using namespace std;

int main ()
{
	
	//To Declare The Varibles
	char  title[256];
	int adultTickets = 0, childTickets = 0;
	double adultTicketPrice = 12.00, childTicketPrice = 6.00, adultTicketTotal, childTicketTotal;
	double grossProfit, officeProfit, distributorProfit, officePercent = .20;

	//The Input
	cout << "Enter the Title of the movie:" << endl;	
	cin.getline (title, 256);
	cout << "Enter the number of Adult Tickets Sold:" << endl;
	cin >> adultTickets;
	cout << "Enter the number of Child Tickets Sold:" << endl;	
	cin >> childTickets;

	cout << endl << endl;
	
	
	//The Assiments
adultTicketTotal = adultTickets * adultTicketPrice;

childTicketTotal = childTickets * childTicketPrice;

grossProfit = adultTicketTotal + childTicketTotal;

officeProfit = grossProfit * officePercent;

distributorProfit = grossProfit - officeProfit;


	//The Output
	
	cout << "\t" << "Movie Name:" << "\t\t\t" << title << endl;	
	cout << "\t" << "Adult Tickets Sold:" << "\t\t" << adultTickets << endl;
	cout << "\t" << "Child Tickets Sold:" << "\t\t" << childTickets << endl;
	cout << "\t" << "Gross Box Office Profit:" << "\t" << setw(12) << left << formatNumber(grossProfit, 1 ) << endl;
	cout << "\t" << "Net Box Office Profit:" << "\t\t" << setw(12) << left << formatNumber(officeProfit, 1 ) << endl;
	cout << "\t" << "Amount Paid to Distributor:" << "\t" << setw(12) << left << formatNumber(distributorProfit, 1 ) << endl;

}