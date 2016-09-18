//100%
//leave blank line after if grouping

//Son Huynh
//Sep 13, 2011
//3rd Period
//This program will take a number and output it to a table of different values

#include <iostream.h>                                             //Libraries
#include <math.h>
#include <iomanip.h>
#include <stdio.h>

int main()
{
	double num1, squared, square_root;                        //Declaration
        int rounded, truncated;

	cout.setf(ios::fixed);                                    //Magic formula
	cout.setf(ios::showpoint);
	cout.precision(2);
                                                                  //Input number
        cout<<"\nThis program will take a number and output it to a table of different values. ";
	cout<<"\n\nPlease enter a number: ";
	cin>>num1;

	if (num1 - floor(num1)>=0.5)                              //Rounding number
		rounded = ceil(num1);
	else
		rounded = floor(num1);
        truncated = (int) (num1);
	squared = pow(num1,2);                                    //Calculating squared value
	square_root = sqrt(num1);                                 //Calculating square root value


	cout<<setw(12)<<"Rounded"<<setw(14)<<"Truncated"<<setw(12)<<"Squared"<<setw(16)<<"Square Root";
	cout<<"\n"<<setw(12)<<rounded;
	cout<<setw(14)<<truncated;
	cout<<setw(12)<<squared;
	cout<<setw(16)<<square_root;

	getchar();
	return 0;
}