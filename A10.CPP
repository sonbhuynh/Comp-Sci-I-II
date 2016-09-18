//Son Huynh
//Sep 15, 2011
//3rd Period
//This program will determine if the second number is a factor of the first number

#include <iostream.h>                                                                //Libraries
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <iomanip.h>

int main()
{
	int num1, numfactor, rangefactor;                                            //Declaration

	clrscr();

	cout<<"\nThis program will determine if the second number is a factor of the first number. ";          //Output purpose

	cout<<"\nPlease enter a number (10-30000): ";                                //Input first number
	cin>>num1;

	rangefactor = num1 - 1;                                                      //Calculating factor range

	cout<<"\nEnter a number to check as factor (2-"<<rangefactor<<"): ";         //Input factor
	cin>>numfactor;

	if (num1 % numfactor == 0)                                                   //Checking if second number is a factor of the first number
		cout<<"\n"<<numfactor<<" is a factor of "<<num1<<" is TRUE ";
	else
		cout<<"\n"<<numfactor<<" is a factor of "<<num1<<" is FALSE ";

	getchar();
	return 0;
}