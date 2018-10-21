//**************************************************************//
//name:							Mark Garcia
//student number:				1213357
//class							CIS 180 – Programming in C / C++
//assignment information:	Assignment 07v2.0
//program documentation:	4/12/2012
//user documentation:		this is a program that simulates displaying information and performing statistics for a class using 2 arrays.
//*****************************include*********************************//
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;
ifstream infile("scores.txt");
//*****************************prototype*********************************//
void InfoPage();
void selectionSort(int array[], int array2[], int elems);
void studentNumber (int studentID[],int examScores[],int studentWanted,int NumPerScreen);
void studentScore (int examScores[],int studentID[],int studentWanted, int NumPerScreen);
void classStatistics (int studentWanted, double mean, double median, double S_D);
//*****************************main*********************************//

int main()
{
	InfoPage();
	char quit = 'n';
	do
	{
		int studentWanted, i;
		char choice;
		int NumPerScreen, sumOf2 = 0;
		double sum = 0, mean = 0, median = 0, S_D, S_Dnum1, S_Dnum2;
		//prompt
	
		do
		{
			cout << endl 
				  << "\t" << "How many students are there? (5 - 1000): ";
			cin >> studentWanted;
			cout << endl;
			if (studentWanted < 5 || studentWanted > 1000)
				{
					cout << endl
					     << "\n\t\tERROR!"
						  << "\n\t\t****************************************************"
					     << "\n\t\t* You must enter a number in the range of 5 - 1000 *" 
						  << "\n\t\t****************************************************"
						  << endl 
						  << endl;
					system ("PAUSE");
					system ("CLS");
				}
	
		}while (studentWanted < 5 || studentWanted > 1000);
		
		//dynamically allocate the memory
		int *studentID = new int[studentWanted];
		int *examScores = new int[studentWanted];
		
		//filein
	
		for (i = 0; i < studentWanted; i++)
		{
			infile >> studentID[i];
			infile >> examScores[i];
			sum += examScores[i];
			sumOf2 += examScores[i] * examScores[i];
	
		}
		
		
		cout << "\t"<< "Chose one of the following" << endl
			  << endl
			  << "\t\t"<< "D - veiw detailed information (student scores and statistics)" << endl
			  << "\t\t"<< "S - veiw summary information (statistics only)" << endl
			  << endl
			  << "\t"<< "Enter your choice (d/s): ";
			  cin >> choice;
			  cout << endl;
			  
		if (choice == 'd' || choice == 'D')
		{
			cout << "\t" << "Display how many records per screen [default is 15]: ";
			cin >> NumPerScreen;
			cout << endl;
		studentNumber (studentID, examScores, studentWanted, NumPerScreen);
		studentScore (examScores, studentID, studentWanted, NumPerScreen);
		}
	
		system("CLS");
		//mean
		mean = sum / studentWanted;
		//median
		selectionSort(examScores, studentID, studentWanted); 
		if (studentWanted%2 == 0)
		{
			median = examScores[(studentWanted/2)-1];
	
		}
		if (studentWanted%2 != 0)
		{
			median = (examScores[studentWanted/2-1] + examScores[studentWanted/2]) / 2.0;
	
		}	
	
	
		//S_D
		S_Dnum1 = (sum * sum)/studentWanted;
		S_Dnum2 = studentWanted - 1;
		S_D = (sumOf2 - S_Dnum1)/S_Dnum2;
		
		classStatistics (studentWanted, mean, median, S_D);
		
		infile.close();
		cout << endl
			  << "Run the simulation agian(y/n)[n is default]; ";
			  cin >> quit;
			  system("CLS");
	}while(quit == 'y' || quit == 'Y');
		  
}





void InfoPage()
{
	cout << "This program simulates performing statistics for a class of students." << endl
		  << "You will be promted to enter the number of students in the class." << endl
		  << endl
		  << "The information for tth student numbers and scores will be read from a file" << endl
		  << endl
		  << "The information for the students will be shown sorted by the student number" << endl
		  << "then sorted by the student scores." << endl
		  << endl
		  << "The class statistics <number of students, mean, median, and standard deviation>" << endl
		  << "will be displayed." << endl
		  << endl
		  << endl;
		  system("PAUSE");
		  system("CLS");
}

void selectionSort(int array[], int array2[], int elems) 
{ 
int startScan, minIndex, minValue;
int minValue2; 
	for (startScan = 0; startScan < (elems - 1); startScan++) 
	{ 
	minIndex = startScan; 
	minValue = array[startScan]; 
	minValue2 = array2[startScan];
		for(int index = startScan + 1; index < elems; index++) 
		{ 
			if (array[index] < minValue) 
			{ 
				minValue = array[index]; 
				minValue2 = array2[index]; 
				minIndex = index;


			} 
		} 
	array[minIndex] = array[startScan]; 
	array[startScan] = minValue; 
	array2[minIndex] = array2[startScan]; 
	array2[startScan] = minValue2; 
	} 
} 
void studentNumber (int studentID[],int examScores[],int studentWanted,int NumPerScreen)
{
		selectionSort(studentID, examScores, studentWanted); 
		
		int c = 0, page;
		do
		{
			page = 0;
			system("CLS");
			cout << "***Student NUMBER Sort***" << endl
				  << endl
				  << "Student#" << "\t" << "Score" << endl
				  << "--------" << "\t" << "-----" << endl;
			do
			{
	
					cout << setw(10)<< left << studentID[c] << "\t" << examScores[c] << endl;
					c++;
					page++;
					
			}while (page < NumPerScreen && c < studentWanted);
			system("PAUSE");
		}while (c < studentWanted);
}

void studentScore (int examScores[],int studentID[],int studentWanted, int NumPerScreen)
{
		selectionSort(examScores, studentID, studentWanted);
		
		int c = 0, page;
		do
		{
			page = 0;
			system("CLS");
			cout << "***Student SCORE Sort***" << endl
				  << endl
				  << "Student#" << "\t" << "Score" << endl
				  << "--------" << "\t" << "-----" << endl;
			do
			{
	
					cout << setw(10)<< left << studentID[c] << "\t" << examScores[c] << endl;
					c++;
					page++;
					
			}while (page < NumPerScreen && c < studentWanted);
			system("PAUSE");
		}while (c < studentWanted);
}
void classStatistics (int studentWanted, double mean, double median, double S_D)
{

	cout << "Here are the statistics for the class:" << endl
		  << endl
		  << endl
		  << setw(10) << left << showpoint << setprecision(4) << "\t" << "Number of students..: " << studentWanted << endl
		  << setw(10) << left << showpoint << setprecision(4) << "\t" << "Mean................: " << mean << endl
		  << setw(10) << left << showpoint << setprecision(4) << "\t" << "Median..............: " <<  median << endl
		  << setw(10) << left << showpoint << setprecision(4) << "\t" << "Standard Deviation..: " << sqrt(S_D) << endl
		  << endl;
}


