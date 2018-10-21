//**************************************************************//
//name:							Mark Garcia
//student number:				1213357
//class							CIS 180 – Programming in C / C++
//assignment information:	Assignment 09v1.0
//program documentation:	4/12/2012
//user documentation:		this is a program that gets Customer Account and stored in the array.
//*****************************include*********************************//
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

struct CustomerForm
{
	int accountID;
	string name;
	double accountBalance;
};
//*****************************prototype*********************************//
void Clear (CustomerForm customer [],int size);

int IDlinearSearch (CustomerForm customer[], int size);

void EnterInfo (CustomerForm customer[], int size);
void EditInfo (CustomerForm customer[], int num1);
void DisplayInfo (CustomerForm customer[], int num1);

//*****************************main*********************************//



int main ()
{
	//declare
	int choice,  num1;
	const int size = 20;
	CustomerForm customer[size];
	
	//clear
	Clear (customer, size);
	
	//welcome
	cout << endl
		  << "Welcome to the Customer Account Manager" << endl
		  << endl
		  << "In this program will allow you to :" << endl
		  << "\t" << "> Enter data for a customer ( all the fields )" << endl
		  << "\t" << "> Change any of the data for a customer" << endl
		  << "\t" << "> Display a simple report with all of the data stored " << endl; 
		  system("PAUSE");
		  system("CLS");
		 
	do	 
	{ 
		//menu
		do
		{
			cout << endl
				  << "\t" << "\t" << "MENU" << endl
				  << endl
				  << "What do you want to do?" << endl
				  << "(1) Enter data for a customer ( all the fields )" << endl
				  << "(2) Change any of the data for a customer" << endl
				  << "(3) Display a simple report with all of the data stored " << endl
				  << "(4) Quit"
				  << endl
				  << "\t" << "\t" << "Choice # "; 
				  cin >> choice;
				  cout << endl;
			
		if (cin.fail() || choice < 1 || choice > 4)
		{
			cin.clear();	
			cin.ignore(100, '\n');
			
			cout << "Enter an integer 1-4"
				  << endl; 	  
			system("PAUSE");

		}
			system("CLS");
				  
				  
			
		} while (choice !=1 && choice !=2 && choice !=3 && choice !=4);	  
		
		
		//switch
		switch (choice)
		{	
			//Enter
			case 1:
				EnterInfo (customer, size);
				break;
			//Edit
			case 2:
				num1 = IDlinearSearch (customer, size);
				if (num1 != -1)
					EditInfo (customer, num1);
				break;
				
			//Display
			case 3:
				num1 = IDlinearSearch (customer, size);
				if (num1 != -1)
					DisplayInfo (customer, num1);
				break;
				
			default:
					cout << endl
						  << "Bye"; 	  
				break;
		}	 
	system("CLS");	 
	} while (choice !=4);	
}


void Clear (CustomerForm customer [],int size)
{

	int i = 0;
	do
	{
		customer[i].accountID = 0;
		customer[i].name = ' ';
		customer[i].accountBalance = 0;
		i++;
	}while (i < size);
}


int IDlinearSearch (CustomerForm customer[], int size)
{
	int find, i;
	cout << endl 
		  << "Enter the ID Number you wish to find (Starting at 0): ";
	cin >> find;
	
	while(cin.fail() || find < 0)
	{
		cin.clear();	
		cin.ignore(100, '\n');
		
		cout << endl
			  << "Enter an integer that is not negative : "; 	  
		cin >> find;
	}

	for (i = 0; i <= size; i++)
	{
	  
		if (customer[i].accountID == find) 
		{ 
			return i;
		}
		else if (customer[i].accountID != find && i == size)
		{
			cout << endl
				  << "Sorry not found" << endl
				  << endl;
			system("PAUSE");
			system("CLS");
			return -1; 		
		}			
	}
}


void EnterInfo (CustomerForm customer [], int size)
{
	int i = 0;

	while (customer[i].accountID != 0 && i < size)
	{
		i++;
	}
			
	if (customer[i].accountID != 0 && i > size)
	{
		cout << endl
			  << "**Error** No Space left"; 
	}
			
	cout << endl
		  << "Enter account ID # ";
	cin >> customer[i].accountID;
			
	while(cin.fail() || customer[i].accountID < 0)
	{
		cin.clear();	
		cin.ignore(100, '\n');
		
		cout << endl
			  << "Enter an integer that is not negative : "; 	  
		cin >> customer[i].accountID;
	}
			
			
			
	cout << endl
		  << "Enter the Name : ";
	cin >> customer[i].name;

	cout << endl
		  << "Enter the Account Balance # ";
	cin >> customer[i].accountBalance;
				

	while (cin.fail() || customer[i].accountBalance < 0)
	{
		cin.clear();	
		cin.ignore(100, '\n');
			
		cout << endl
			  << "Enter an integer that is not negative : "; 	  
		cin >> customer[i].accountBalance;
	}


		

			
	system("CLS");
	
}

void EditInfo (CustomerForm customer [],int num1)
{
	int choice, i;
	i = num1;
	do
	{
		do
		{
			cout << "What would you like to do?" << endl
				  << endl
				  << "(1) Edit the Account ID" << endl
				  << "(2) Edit the Name" << endl
				  << "(3) Edit the Account Balance" << endl
				  << "(4) DELETE" << endl
				  << "(5) Preview" << endl
				  << "(6) Back" << endl
				  << "choice # ";
			cin >> choice;
			if (cin.fail() || choice < 1 || choice > 6)
			{
				cin.clear();	
				cin.ignore(100, '\n');
				
				cout << "Enter an integer 1-6"
					  << endl; 	  
				system("PAUSE");
			}
			system("CLS");
		}while (choice < 1 || choice > 6);	
		switch (choice)
		{
			case 1:	
			{
				cout << endl
					  << "Enter account ID # ";
				cin >> customer[i].accountID;
						
				while(cin.fail() || customer[i].accountID < 0)
				{
					cin.clear();	
					cin.ignore(100, '\n');
					
					cout << endl
						  << "Enter an integer that is not negative : "; 	  
					cin >> customer[i].accountID;
				}
			}
				break;
			case 2:
			{
				cout << endl
					  << "Enter the Name : ";
				cin >> customer[i].name;
			}
				break;
			case 3:
			{
				cout << endl
					  << "Enter the Account Balance # ";
				cin >> customer[i].accountBalance;
							
			
				while (cin.fail() || customer[i].accountBalance < 0)
				{
					cin.clear();	
					cin.ignore(100, '\n');
						
					cout << endl
						  << "Enter an integer that is not negative : "; 	  
					cin >> customer[i].accountBalance;
				}
			}
				break;
			case 4:
				customer[i].accountID = 0;
				customer[i].name = ' ';
				customer[i].accountBalance = 0;
				cout << endl
					  << "Deleted";
				break;
			case 5:
				DisplayInfo (customer, num1);
				break;
		}
	}while (choice != 6);	
}


void DisplayInfo (CustomerForm customer [], int num1)
{	
	int size = 20;
	char all;
	cout << endl
		  << "# " << num1+1 << endl
		  << "Account ID # "             << customer[num1].accountID       << endl
		  << endl
		  << "Name : "                    << customer[num1].name            << endl
		  << endl
		  << "Account Balance # "        << customer[num1].accountBalance  << endl
		  << endl;
	cout << "Do you want to see all of them? (y or n): ";
	cin >> all; 
	if (toupper(all)== 'Y')	  
	{
		system("CLS");
		for (num1 = 0; num1 < size; num1++)
		{
			cout << endl
				  << "# " << num1+1 << endl
				  << "Account ID # "             << customer[num1].accountID       << endl
				  << endl
				  << "Name : "                    << customer[num1].name            << endl
				  << endl
				  << "Account Balance # "        << customer[num1].accountBalance  << endl
				  << endl;
		}
	
	}
		
	system("PAUSE");
	system("CLS");
}