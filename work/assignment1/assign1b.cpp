// Name: Mark Garcia
// ID: 1213357
// Date: 1/19/12
// File: assign1b
//a program that accepts two integer numbers and prints the sum, difference, product, quotient, integer remainder ( modulus operation ), and average of the numbers. 

#include <iostream>

using namespace std;
int main()
{
	int num1, num2, sum, difference, product, quotient, remainder;
	float average;

	cout << "Input 2 integers when prompted and I will print their sum, difference, product, quotient, remainder, and average." << endl;
	cout << "#1: ";
	cin >> num1;
	cout << "#2: ";
	cin >> num2;
	
	//assinments
	sum = num1 + num2;   //sum
	difference = num1 - num2; //difference
	product = num1 * num2 ; //product
	quotient = num1 / num2; //quotient
	remainder =  num1 % num2; //remainder
	
	average = sum / 2; //average
	
	// display
	cout << "\n\n\n\n\n";
	cout << "The numbers are " << num1 << " and " << num2 << endl;
	cout << "-----------------------------" << endl;
	cout << "sum :" << "	" << sum << endl;
	cout << "difference :" << "	" << difference << endl;
	cout << "product :" << "	" << product << endl;
	cout << "quotient :" << "	" << quotient << endl;	
	cout << "remainder :" << "	" << remainder << endl;		
	cout << "average :" << "	" << average << endl;


}