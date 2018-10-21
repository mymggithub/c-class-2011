// Name: Mark Garcia
// ID: 1213357
// Date: 2/23/12
// File: assign5
//a Physics Calculator
#include <iostream>
#include <cstdlib>
#include <ctime>
#define PI 3.14159
using namespace std;


//Defined functions
double validate();


double Speed(double v,double a,double t);
void displaySpeed(double answer);


double Distance(double a,double t);
void displayDistance(double answer);


double BarVolume(double w,double l,double h);
void displayBarVolume(double answer);


double SphereVolume(double r);
void displaySphereVolume(double answer);


double CylinderVolume(double r,double h);
void displayCylinderVolume(double answer);

int main ()
{
		//varibles
		int menuChoice;
		double a, t, r, h; //most used
		double v, speed; //speed varibles
		double distance; //distance varibles
		double volume, w, l; //volume varibles
		double sphereVolume; //SphereVolume varibles
		double cylinderVolume; //CylinderVolume varibles
		
		//Intro
		cout << "\t\t\t|---------------------------------------|" << endl
		     << "\t\t\t|Welcome to the Physics Calculator v 3.0|" << endl
		     << "\t\t\t|---------------------------------------|"
			  << endl << endl 
			  << endl;
			  
		system ("PAUSE");
		system("CLS");
	
		//Menu
		do
		{//_1_do
			do
			{//_2_do
				cout <<                               "\t\t\t\t\t ______";
				cout << endl <<                       "\t\t\t\t\t| Menu |" << endl; 
				cout << "________________________________________|______|________________________________";
				cout << endl <<              "\t\t\t\tWhat would you like to do?" << endl << endl;
				

				cout << "[1] Compute the speed of an object after t seconds of acceleration "
				     << "given that \n the object was initially travelling at v meters per second and then \n accelerated "
				     << " at a meters per second per second"
				     << endl
					  << "--------------------------------------------------------------------------------" 
				     << endl;

				cout << "[2] Compute the distance travelled in t seconds "
				     << "by an object that started at \n rest and then accelerated at a meters per second per second"
				     << endl  
					  << "--------------------------------------------------------------------------------" 
				     << endl;

				cout << "[3] Compute the volume of a rectangular bar with\n"
				     << " width w, length l, and height h "
					  << endl
				     << "--------------------------------------------------------------------------------" 
				     << endl;

				cout << "[4] Compute the volume of a sphere with radius "
				     << endl  
					  << "--------------------------------------------------------------------------------" 
				     << endl;
			
				cout << "[5] Compute the volume of a cylinder with radius r and height h "
				     << endl  
					  << "--------------------------------------------------------------------------------" 
				     << endl;
			
				cout <<"[6] Exit the program"
				     << endl  
					  << "--------------------------------------------------------------------------------" 
				     << endl;
		
				cout << "\t\t\t\tSelection (1, 2, 3, 4, 5, or 6): ";
				cin >> menuChoice;
				
				if (menuChoice < 1 || menuChoice > 6 )
				{//_1_if
					cout << endl
					     << "\n\t\t\tERROR!"
						  << "\n\t\t\t**************************************************"
					     << "\n\t\t\t* You must enter a number in the range of 1 - 6! *" 
						  << "\n\t\t\t**************************************************"
						  << endl 
						  << endl;
					system ("PAUSE");

				}//_1_if
		
				system("CLS");
			
			
			} while (menuChoice < 1 || menuChoice > 6 );	//_2_do
	
			//switch
			switch(menuChoice)
			{//_1_switch
				case 1:
				{//_1_case
					do
					{//_2_do

						cout << "[1] Compute the speed of an object after t seconds of acceleration "
						     << "given that \n the object was initially travelling at v meters per second and then \n accelerated "
					 	  	  << " at a meters per second per second"
				   		  << endl
						     << "--------------------------------------------------------------------------------" 
				           << "\n\t|----------------|"
						     << "\n\t| speed = v + at |"
							  << "\n\t|----------------|"
						     << endl << endl;

						do
						{//_3-1_do
							cout << "\nEnter a number for v: ";
							v = validate();
							cout << endl;

						} while (v <! 0);//_3-1_do
						
						do
						{//_3-2_do
							cout << "\nEnter a number for a: ";
							a = validate();
							cout << endl;

						} while (a <! 0);//_3-2_do
					
						do
						{//_3-3_do
							cout << "\nEnter a number for t: ";
							t = validate();
							cout << endl;

						} while (t <! 0);//_3-3_do
					
						cout << endl << endl;

					}while(v <! 0 || a <! 0 || t <! 0);//_2_do
				
					//function
					speed = Speed(v, a, t);
				
					//display results
					displaySpeed(speed);
				}//_1_case
					break;
				case 2:
				{//_2_case
					do
						{//_2_do

							cout << "[2] Compute the distance travelled in t seconds "
							     << "by an object that started at \n rest and then accelerated at a meters per second per second"
							     << endl  
								  << "--------------------------------------------------------------------------------" 	
					  	        << "\n\t|---------------------------|"
							     << "\n\t| distance = (a)((t)sqr2)/2 |"
								  << "\n\t|---------------------------|"
							     << endl << endl;


							do
							{//_3-1_do
								cout << "\nEnter a number for a: ";
								a = validate();
								cout << endl;

							} while (a <! 0);//_3-1_do
					
							do
							{//_3-2_do
								cout << "\nEnter a number for t: ";
								t = validate();
								cout << endl;

							} while (t <! 0);//_3-2_do
							cout << endl << endl;

						}while(a <! 0 || t <! 0);//_2_do
				
						//function
						distance = Distance(a, t);
				
						//display results
						displayDistance(distance);

					}//_2_case
						break;
					case 3:
					{//_3_case
					do
						{//_2_do

							cout << "[3] Compute the volume of a rectangular bar with\n"
							     << " width w, length l, and height h "
								  << endl
						  		  << "--------------------------------------------------------------------------------" 
					  	        << "\n\t|---------------------------|"
							     << "\n\t|     volume = (w)(l)(h)    |"
								  << "\n\t|---------------------------|"
							     << endl << endl;


							do
							{//_3-1_do
								cout << "\nEnter a number for w: ";
								w = validate();
								cout << endl;

							} while (w <! 0);//_3-1_do
					
							do
							{//_3-2_do
								cout << "\nEnter a number for l: ";
								l = validate();
								cout << endl;

							} while (l <! 0);//_3-2_do
							
							do
							{//_3-2_do
								cout << "\nEnter a number for h: ";
								h = validate();
								cout << endl;

							} while (h <! 0);//_3-2_do
							cout << endl << endl;

						}while(w <! 0 || l <! 0 || h <! 0);//_2_do
				
						//function
						volume = BarVolume(w, l, h);
				
						//display results
						displayBarVolume(volume);

					}//_3_case	
						break;
					case 4:
					{//_4_case
					
					do
						{//_2_do


							cout << "[4] Compute the volume of a sphere with radius "
							     << endl  
								  << "--------------------------------------------------------------------------------" 
					  	        << "\n\t|-----------------------------------------|"
							     << "\n\t| SphereVolume = (4)pi((r)sqr3)/3         |"
								  << "\n\t|-----------------------------------------|"
							     << endl << endl;


							do
							{//_3-1_do
								cout << "\nEnter a number for r: ";
								r = validate();
								cout << endl;

							} while (r <! 0);//_3-1_do

							cout << endl << endl;

						}while(r <! 0);//_2_do
				
						//function
						sphereVolume = SphereVolume(r);
				
						//display results
						displaySphereVolume(sphereVolume);
					
					}//_4_case
						break;	
					case 5:
					{//_5_case
					
					
					do
						{//_2_do


							cout << "[5] Compute the volume of a cylinder with radius r and height h "
							     << endl  
								  << "--------------------------------------------------------------------------------" 
					  	        << "\n\t|-----------------------------------------|"
							     << "\n\t| CylinderVolume = pi((r)sqr2)h           |"
								  << "\n\t|-----------------------------------------|"
							     << endl << endl;


							do
							{//_3-1_do
								cout << "\nEnter a number for r: ";
								r = validate();
								cout << endl;

							} while (r <! 0);//_3-1_do

							do
							{//_3-1_do
								cout << "\nEnter a number for h: ";
								h = validate();
								cout << endl;

							} while (h <! 0);//_3-1_do

							cout << endl << endl;

						}while(r <! 0 || h <! 0);//_2_do
				
						//function
						cylinderVolume = CylinderVolume(r, h);
				
						//display results
						displayCylinderVolume(cylinderVolume);
					
					}//_5_case	
				
						
				}//_1_switch
			} while (menuChoice != 6);//_1_do
}

//****************************validate**************************//
double validate()
{
	double num;

	cin >> num;
	if (num <! 0)
		{
		cout << "\n\t\t\tERROR!"
			  << "\n\t\t\t**************************"
 		  	  << "\n\t\t\t* Only positive numbers! *"
			  << "\n\t\t\t**************************"
			  << endl << endl;
		}
	return num;
}

//****************************SPEED**************************//


double Speed(double v,double a,double t)
{
	double answer;
	cout << "\n\t|------------------------|"
		  << "\n\t| speed = v  +  a  *  t  |"
		  << "\n\t|------------------------|"
		  << "\n\t  speed = " << v << " + " << a << " * " << t 
		  << "\n\t|------------------------|"
	     << endl;
	//assignment
	answer = v + a * t;
	return answer;
}

void displaySpeed(double answer)
{

	cout << "\t  The speed is : " << answer 
		  << "\n\t|------------------------|"
	     << endl
		  << endl; 
	system ("PAUSE");
	system("CLS");
}

//****************************distance**************************//

double Distance(double a,double t)
{
	double answer;
	cout << "\n\t|---------------------------|"
		  << "\n\t| distance = (a)((t)sqr2)/2 |"
		  << "\n\t|---------------------------|"
		  << "\n\t  distance = " << a << " * " << t << " sqr2 " << " / " << 2 
		  << "\n\t|---------------------------|"
	     << endl;
	//assignment
	answer = a * (t*t)/2;
	return answer;
}

void displayDistance(double answer)
{

	cout << "\t  The distance is : " << answer 
		  << "\n\t|---------------------------|"
	     << endl
		  << endl; 
	system ("PAUSE");
	system("CLS");
}
//****************************BarVolume**************************//


double BarVolume(double w,double l,double h)
{
	double answer;
	cout << "\n\t|------------------------------|"
		  << "\n\t| BarVolume = (w)(l)(h)        |"
		  << "\n\t|------------------------------|"
		  << "\n\t  BarVolume = " << w << " * " << l << " * " << h 
		  << "\n\t|------------------------------|"
	     << endl;
	//assignment
	answer = w * l * h;
	return answer;
}

void displayBarVolume(double answer)
{

	cout << "\t  The BarVolume is : " << answer 
		  << "\n\t|------------------------------|"
	     << endl
		  << endl; 
	system ("PAUSE");
	system("CLS");
}
//****************************SphereVolume**************************//


double SphereVolume(double r)
{
	double answer;
	cout << "\n\t|-----------------------------------------|"
		  << "\n\t| SphereVolume = (4)pi((r)sqr3)/3         |"
		  << "\n\t|-----------------------------------------|"
		  << "\n\t  SphereVolume = " << 4 << " * pi * " << r << " sqr3 " << " / " << 3 
		  << "\n\t|-----------------------------------------|"
	     << endl;
	//assignment
	answer = 4 * PI * (r*r*r)/3;
	return answer;
}

void displaySphereVolume(double answer)
{

	cout << "\t  The SphereVolume is : " << answer 
		  << "\n\t|-----------------------------------------|"
	     << endl
		  << endl; 
	system ("PAUSE");
	system("CLS");
}
//****************************CylinderVolume**************************//


double CylinderVolume(double r,double h)
{
	double answer;
	cout << "\n\t|-----------------------------------------|"
		  << "\n\t| CylinderVolume = pi((r)sqr2)h           |"
		  << "\n\t|-----------------------------------------|"
		  << "\n\t  CylinderVolume = " << "pi * " << r << " sqr2 " << " * " << h 
		  << "\n\t|-----------------------------------------|"
	     << endl;
	//assignment
	answer = PI * (r*r)* h;
	return answer;
}

void displayCylinderVolume(double answer)
{

	cout << "\t  The CylinderVolume is : " << answer 
		  << "\n\t|-----------------------------------------|"
	     << endl
		  << endl; 
	system ("PAUSE");
	system("CLS");
}
