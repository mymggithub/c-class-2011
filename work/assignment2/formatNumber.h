#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
using namespace std;

string formatNumber( double n, int showDollarSign = 0 )
{
	int intPart, digitsPart;
	double decPart;
	char left[14], right[3];
	
	//get integer portion of n and decimal digits as integers	
	intPart = static_cast<int>(n);
	decPart = n - intPart;
	digitsPart = (decPart + .0051) * 100;
	
	//get character arrays for integer and decimal digits
	itoa(intPart, left, 10);
	itoa(digitsPart, right, 10);

	string s, temp;
	static string number;
	number.clear();
		
	if (strlen(left) <= 3)
	{
		number.assign(left);
		//cout << "number is " << number << endl; 
	}
	else
	{
		if ( (strlen(left) % 3) != 0 )
		{		
			//get leading digits
			number.append(left,0,strlen(left)%3);
			number.append(1,',');
			s.append(left,strlen(left)%3,strlen(left));
			/*
			cout << "leadings digits are " << number << endl;
			cout << "remainder of number is " << s << endl;
			*/
		}
		else
				s.append(left);
				
		while (s.length() > 3)
		{
			number.append(s,0,3);
			number.append(1,',');
			temp=s;
			s.assign(temp,3,temp.length());
		}
		number.append(s,0,3);
	}
	number.append(1,'.');
	
	switch ( strlen(right) )
	{
		case 0:  number.append("00");
					break;
		case 1:  number.append(right);
					number.append("0");
					break;
		default:	number.append(right);
	}
	
	if (showDollarSign)
		number =  "$" + number;
		
	return number;
}
	