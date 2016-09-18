//Son Huynh
//Nov 10, 2011
//Period 3rd
//This program will calculate the value of pi

#include <iostream.h>                                             //Libraries
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iomanip.h>
#include <ctype.h>

double getpi();				//Prototype for getting value of pi
void getoutput(double valuepi);	//Prototype for outputting value of pi
void magic();						//Prototype for magic formula
void initial();					//Prototype for initializing

int main()
{
	double valuepi;			//Declaration

	magic();					//Function call for magic formula

	initial();				//Function call for initializing

	valuepi = getpi();			//Function call for getting value of pi

     getoutput(valuepi);			//Function call for outputting pie

	getchar();
	return 0;
}

//This function will calculate the value of pi
double getpi()
{
	double valuepi, sumpos = 0, sumneg = 0;			//Declaration
	int denom1 = 1, denom2 = 3,  count;

	for (count = 1; count <= 100; count ++)
	{
		sumpos += 1.0/denom1;	//Calculating sum of all the positive denominators

		sumneg += 1.0/denom2;	//Calculating sum of all the negative denominators

		denom1 += 4;			//Increases denom1 by 4
		denom2 += 4;			//Increases denom2 by 4
	}
		

	valuepi = 4 * (sumpos - sumneg);		//Calculating pi

     return (valuepi);
}

//This function will output the value of pi to the screen
void getoutput(double valuepi)
{
	cout<<"\n\nThe value of Pi is: "<<valuepi;		//Outputs pi
}

//This function contains the magic formula
void magic()
{
	cout.setf(ios::fixed);				//Magic formula
	cout.setf(ios::showpoint);
     cout.precision(5);
}

//Initializing variables and outputting purposes
void initial()
{
	clrscr();							//Clears screen

	cout<<"\nThis program will calculating the value of pi ";		//Outputting purposes
}