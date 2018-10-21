//**************************************************************//
//name:							Mark Garcia
//student number:				1213357
//class							CIS 180 – Programming in C / C++
//assignment information:	Assignment 08v1.0
//program documentation:	4/12/2012
//user documentation:		this is a program that gets a password and validates it.
//*****************************include*********************************//
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
//*****************************prototype*********************************//

//*****************************main*********************************//

int main()

{
	const int size = 20;
	char password[size];
	bool ifUP = false, ifLOW = false, ifINT = false, ifLONG = false;

	cout << endl
		  << "Welcome to password validator." << endl
		  << "This is a program that gets a password and validates it." << endl
		  << endl;
	system ("PAUSE");
	system ("ClS");


	cout << endl
		  << "\t" << "\t" << "Enter a password." << endl
		  << "The password should be at least six characters long. (using size of)" << endl
		  << endl
		  << "The password should contain at least one uppercase" << endl
		  << "and at least one lowercase letter." << endl
		  << endl
		  << "The password should have at least one digit." << endl
		  << endl
		  << "Password# ";
	cin >> password;
	while(ifINT == false || ifLOW == false || ifUP == false || ifLONG == false )
	{
		for (int i = 0; i < strlen(password); i++)
		{
			if (isdigit(password[i]))
			{
				ifINT = true;
			}
			if (islower(password[i]))
			{
				ifLOW = true;
			}
			if (isupper(password[i])) 
			{
				ifUP = true;
			}	
			if (strlen(password) >= 6) 
			{
				ifLONG = true;
			}	
		}

		if (ifINT == false || ifLOW == false || ifUP == false || ifLONG == false )
		{ 
			ifUP = false, ifLOW = false, ifINT = false, ifLONG = false;
			cout << "**Error** Try Again" << endl
				  << endl
				  << "Password# ";
			cin >> password;
		}
	}

}  