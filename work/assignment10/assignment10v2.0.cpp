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
	
	double getHigh(int i,int n,double *temp)
	{
		for (i = 0; i < n; i++)
		{
			if (*temp < arrayptr[i])
			{
				*temp = arrayptr[i];
				return *temp;
			}
		}
		return *temp;
	}
	
	
	double getLow(int i,int n, double *temp)
	{	
		for (i = 0; i < n; i++)
		{
			if (*temp > arrayptr[i])
			{
				*temp = arrayptr[i];
				return *temp;
			}
		}
		return *temp;
	}
	
	double getAve(int i,int n, double *total)
	{	
		for(i = 0; i < n; i++)
		{	*total+=arrayptr[i];}
		
		return *total/ n;
	}
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

	int size, i;
	double number, High, Low, total, Ave;
	char quit;
	
	
	cout << "How many numbers your going to store ? : ";
	cin >> size;
	while(cin.fail() || size < 1)
	{
		cin.clear();	
		cin.ignore(100, '\n');
					
		cout << endl
			  << "Enter a number that is grater than 0 : "; 	  
		cin >> size;
	}
	MyClass array(size);
	
	do
	{
		for (i = 0 ;i < size; i++)
		{	
			cout << "In memory # " << i+1 << " is :" << "\t" << array.getNumInArray(i) << endl;
		}
		
		cout << endl
			  << "In what memory # you would like to store a number ? ";
		cin >> i;
		while(cin.fail() || i < 1 || i > size)
			{
				cin.clear();	
				cin.ignore(100, '\n');
							
				cout << endl
					  << "Enter a numbers 1-" << size << " : "; 	  
				cin >> i;
			}
		i--;
		cout << endl
			  << "What would you like to put in memory # " << i+1 << " : ";
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
		
	for (i = 0 ;i < size; i++)
	{	
			cout << "In memory # " << i+1 << " is :" << "\t" << array.getNumInArray(i) << endl;
	}
	
	
	High = 0;
	Low = 0;
	total = 0;

	High = array.getHigh(i,size, &High);
	Low = array.getLow(i,size, &Low);
	Ave = array.getAve(i, size, &total);
	
	cout << endl
		  << endl
		  << "Highest # " << High << endl
		  << "Lowest # "  << Low << endl
		  << "Average # " << Ave << endl;
	cout << endl
		  << "Do you want to quit? (Y or N) : ";
	cin >> quit;
	system("CLS");
	}while (toupper(quit) != 'Y');


}
