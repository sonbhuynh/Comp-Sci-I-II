//Son Huynh
//3rd Period
//Nov 08, 2011
//This program will calculate the value of the investment ( V )
//after being compounded for the number of months input.

#include <iostream.h>                                             //libraries
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iomanip.h>
#include <ctype.h>

void getinput(double& principal, double& interest, int& months);			//Prototype for inputting values
double getfinal(double principal, double interest, int months);			//Prototype for calculating final value
void getoutput(double final_total);										//Prototype for outputting final value
void magic();													//Prototype for magic formula
void initial();												//Prototype for initializing

int main()
{
	int months, input;						//Declaration
	double principal, final_total, output, interest;

	magic();				//Function call for magic formula

     initial();			//Function call for initial

	getinput(principal, interest, months);				//Function call for getinput

	final_total = getfinal( principal,  interest, months);										//Function call for getfinal

	getoutput(final_total);								//Function call for getoutput

	getchar();
	return 0;
}

//This function will read in the values for principal, interest, and months
void getinput(double& principal, double& interest, int& months)
{
	cout<<"\nPlease enter investment amount: $ ";		//Input principal value
	cin>>principal;

	cout<<"\nPlease enter interest rate per month: ";		//Input interest rate
	cin>>interest;

	cout<<"\nPlease enter number of months: ";			//Input months
	cin>>months;
}

//This function will calculate the final investment value
double getfinal(double principal, double interest, int months)
{
	double final_total;			//Declaration

	final_total = principal * pow(1 + interest, months);	//Multiplying principal to final_exponent

	return (final_total);
}

//This function will output the final investment value
void getoutput(double final_total)
{
	cout<<"\nInvestment value is: $ "<<final_total;		//Output final investment value
}

//This function contains the magic formula
void magic()
{
	cout.setf(ios::fixed);			//Magic formula
	cout.setf(ios::showpoint);
	cout.precision(2);
}

//Initializing variables and outputting purposes
void initial()
{
	clrscr();

	cout<<"\nThis program will calculate the value of the investment ( V ) "
		<<"after being \ncompounded for the number of months input ";
}