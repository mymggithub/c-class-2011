//**************************************************************//
//name:							Mark Garcia
//student number:				1213357
//class							CIS 180 – Programming in C / C++
//assignment information:	Assignment 06v1.0
//program documentation:	3/8/2012
//user documentation:		this is a program that uses arrays to gather
// the students scores form the teacher and outputs the info to the screen
// and to a folder
//*****************************include*********************************//
#include <iostream>
#include <iomanip> 
#include <cstdlib>
#include <string>
#include <fstream>
using namespace std;

const int studentRow = 25,testColumn = 4; 
ifstream infile("classData.txt");

//***************************prototype***********************************//

void verify (int gradeChart [studentRow][testColumn], int test, int student);

void DisplayGradeRow (int gradeChart[studentRow][testColumn], int test, int student, int exitNum, double * test1Total, double * test2Total, double * test3Total, double * test4Total)
;

void gradeAverage (int gradeChart[studentRow][testColumn],double GradeAverage [studentRow],int testColumn, int exitNum);
void letterGrade (double GradeAverage [studentRow],char LetterGrade[studentRow],int exitNum);

//***************************welcomeScreen***********************************//
void welcomeScreen()
{
	
	cout << "\t\t\t|---------------------------------------|" << endl
	     << "\t\t\t|Welcome to the Grade book Program v 1.0|" << endl
	     << "\t\t\t|---------------------------------------|"
		  << endl << endl 
		  << endl;
	system ("PAUSE");
	system("CLS");
		  
		  
} 
//***************************main***********************************//
int main ()
{
	welcomeScreen();
	
	//declare

	string name[studentRow];
	
	char LetterGrade[studentRow];
	
	int gradeChart[studentRow][testColumn] = {0};

	double GradeAverage [studentRow] = {0.0};
	
	int grade,averageGrade;
	
	string exit;
	
	double test1Total = 0.0, test2Total = 0.0, test3Total = 0.0, test4Total = 0.0  ;
	
	int test, student = 0, exitNum = 0;
	//inputGrade
	do
	{//_1_do

		exitNum++;

		


		test = 0;
		while (test < testColumn && ! infile.eof())//_2_do  
		{//_2_do
			infile >> gradeChart[student][test];
			verify (gradeChart, test, student);
			++test;
		}//_2_do



		

		getline (infile, name[student]);

		exit = name[student];
		
		++student;
	} while (student < studentRow && ! infile.eof());//_1_do
	
	//call to GradeAverage
	gradeAverage (gradeChart, GradeAverage, testColumn, exitNum);
	//call to letterGrade
	letterGrade (GradeAverage, LetterGrade, exitNum);

	//display

	cout << "Test1     Test2     Test3     Test4   \t\t Name" <<endl;
	student = 0;
	do
	{//_1_do
		test = 0;
		DisplayGradeRow (gradeChart, test, student, exitNum, & test1Total, & test2Total, & test3Total, & test4Total);
		cout << left << name[student];
		cout << endl << " test average would be " << GradeAverage [student];
		cout << " = " << LetterGrade[student];
		cout << endl << endl;
		++student;
	} while (student < studentRow && student <  exitNum-1);//_1_do
	
	
	cout << endl << "Class Test Averages" << endl
		  << "Test1     Test2     Test3     Test4" 
		  << endl;
	cout << fixed
		  << setprecision(2)
		  << setw(10)
		  << left
		  << test1Total / exitNum;
	cout << fixed
		  << setprecision(2)
		  << setw(10)
		  << left
		  << test2Total / exitNum;
	cout << fixed
		  << setprecision(2)
		  << setw(10)
		  << left
		  << test3Total / exitNum;
	cout << fixed
		  << setprecision(2)
		  << setw(10)
		  << left
		  << test4Total / exitNum;
	cout << endl << endl;
	
	infile.close();
	system("PAUSE");

}

//***************************verify***********************************//

void verify (int gradeChart[studentRow][testColumn], int test, int student)
{
	if (gradeChart[student][test] < 0 || gradeChart[student][test] > 100)//if_1_
	{
		do//do_2_
		{

			cout << endl
			     << "\n\t\t\tERROR!"
				  << "\n\t\t\t***************************************************"
			     << "\n\t\t\t* You must enter a number in the range of 0 - 100 *" 
				  << "\n\t\t\t***************************************************"
				  << endl 
				  << endl;
			system ("PAUSE");
			
			cout << "Enter grade for test " << test+1  << " for student number " << student+1 << " (-1 to exit) :"<< endl;
			infile >> gradeChart[student][test];

		
		}while(gradeChart[student][test] < -1 || gradeChart[student][test] > 100);//do_2_
	}//if_1_
}



//***************************DisplayGradeRow***********************************//

void DisplayGradeRow (int gradeChart[studentRow][testColumn], int test, int student, int exitNum, double * test1Total, double * test2Total, double * test3Total, double * test4Total)
{
		int exit;
		
		do	  
		{//_2_do
			cout << fixed
				  << setprecision (2)
				  << setw (10)
				  << left
				  << gradeChart[student][test] ;	  
			if (test == 0)
				*test1Total += gradeChart[student][test];
			if (test == 1)
				*test2Total += gradeChart[student][test];
			if (test == 2)
				*test3Total += gradeChart[student][test];
			if (test == 3)
				*test4Total += gradeChart[student][test];

				
				  
			++test;
		} while (test < testColumn);//_2_do


}
//***************************gradeAverage***********************************//
void gradeAverage (int gradeChart[studentRow][testColumn],double GradeAverage [studentRow],int testColumn, int exitNum)
{


	int totalTest, student = 0;
	do
	{//do_1_

		int test = 0;
		totalTest = 0;
		do	  
		{//do_2_
				 
			totalTest += gradeChart[student][test];


		} while (++test < testColumn);//do_2_
		GradeAverage [student] = totalTest / 4.0;

	}while (++student < studentRow && student <  exitNum-1);//do_1_

}
//***************************letterGrade***********************************//

void letterGrade (double GradeAverage [studentRow],char LetterGrade[studentRow],int exitNum)
{
	int student = 0;
	do
	{
	
		if (GradeAverage [student] >= 1 && GradeAverage [student] <= 100)
		{//if_1_
			LetterGrade[student] = 'A';
			
			if (GradeAverage [student] >= 1 && GradeAverage [student] <= 89)
			{//if_2_
				LetterGrade[student] = 'B';
				
				if (GradeAverage [student] >= 1 && GradeAverage [student] <= 79)
				{//if_3_
					LetterGrade[student] = 'C';
				
					if (GradeAverage [student] >= 1 && GradeAverage [student] <= 69)
					{//if_4_
						LetterGrade[student] = 'D';
					
						if (GradeAverage [student] >= 1 && GradeAverage [student] <= 59)
						{//if_5_
	
							LetterGrade[student] = 'F';
	
						}//if_5_
					
					}//if_4_
	
				}//if_3_
				
			}//if_2_
		
		}//if_1_
	}while (++student < studentRow && student <  exitNum-1);
}	
