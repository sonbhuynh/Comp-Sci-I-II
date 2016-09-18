//Son Huynh
//Sep 14, 2011
//3rd Period
//This program will divide 2 numbers and show the quotient as well as the dividend.

#include <iostream.h>                                           //Libraries
#include <math.h>
#include <iomanip.h>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>

int main()
{
	int num1, num2, quotient, remainder;                    //Declaration

        cout<<"\nThis program will divide 2 numbers and show the quotient as well as the dividend ";   //Output purpose

	cout<<"\nPlease enter your dividend: ";                 //Input dividend
	cin>>num1;

	cout<<"Please enter your divisor: ";                    //Input divisor
	cin>>num2;

	quotient = num1 / num2;                                 //Calculating quotient
	remainder = num1 % num2;                                //Calculating remainder

	cout<<"\n"<<num1<<" ÷ "<<num2                  //Output quotient and remainder
		<<" = "<<quotient<<" Remainder "<<remainder;

	getchar();
	return 0;
}