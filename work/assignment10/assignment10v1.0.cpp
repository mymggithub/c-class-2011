//**************************************************************//
//name:							Mark Garcia
//student number:				1213357
//class							CIS 180 – Programming in C / C++
//assignment information:	Assignment 010v1.0
//program documentation:	4/12/2012
//user documentation:		this is a program that has a class that will store an array of floating-point ( double ) numbers
//*****************************include*********************************//
#include <iostream>
#include <cstdlib>

using namespace std;

class MyClass
{
	private:
	int *arrayptr; // pointer ..dinamicly array
	int n; // assin array a number
	int i; // go throught by elements
	double num; // number to store
	public:
	MyClass(int n)
	{	arrayptr = new int[n];
		for(i = 0;i < n; i++)
		{arrayptr[i] = 0;}
	}
	
	void setNumInArray(double num, int i)
	{	arrayptr[i] = num;}
	
	double getNumInArray(int i)const
	{	return arrayptr[i];}
	
	~MyClass()
	{	delete [] arrayptr;
		arrayptr = NULL;}
	
	
};
	int main()
{	

	//welcome
	cout << endl
		  << "This is a program that has a class that will"  << endl << "store an array of floating-point ( double ) numbers" << endl
		  << endl
		  << "In this program will allow you to :" << endl
		  << "\t" << "> Store a number in any element of the array" << endl
		  << "\t" << "> Retrieve a number form any element of the array" << endl
		  << "\t" << "> Return the highest value stored in the array " << endl
		  << "\t" << "> Return the lowest value stored in the array " << endl
		  << "\t" << "> Return the average of all the numbers stored in the array " << endl; 
		  system("PAUSE");
		  system("CLS");

	int test, i;
	double number;
	
	
	cout << "How many numbers your going to need " << endl;
	cin >> test;
	while(cin.fail() || test < 0)
	{
		cin.clear();	
		cin.ignore(100, '\n');
					
		cout << endl
			  << "Enter an interger that is not negative : "; 	  
		cin >> test;
	}
	MyClass array(test);
	
	for (i = 0 ;i < test; i++)
	{	
		cout << "In memory # " << i+1 << " is :" << "\t" << array.getNumInArray(i) << endl;
	}
	system("PAUSE");
	
	
	for (i = 0 ;i < test; i++)
	{	cout << "Enter the number you wish to enter : ";
		cin >> number;
		
		while(cin.fail() || number < 0)
		{
			cin.clear();	
			cin.ignore(100, '\n');
						
			cout << endl
				  << "Enter a number that is not negative : "; 	  
			cin >> number;
		}
		array.setNumInArray(number, i);
	}
	 
	for (i = 0 ;i < test; i++)
	{	
		cout << "The numbers you entered are :" << "\t" << array.getNumInArray(i) << endl;
	}

	


}
