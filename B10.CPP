//Son Huynh
//Period 3rd
//Oct 7, 2011
//This program will take a non-negative long int as input and display each digit on a separate line, as well as computing the sum of the digits of that number

#include <iostream.h>                        //Libraries
#include <iomanip.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <conio.h>

int main()
{
	int denom = 10000, quotient, sum = 0;	     //Declarations
	long int origin_num;

	clrscr();

	cout<<"\nThis program will take a non-negative long int as input and display each digit \non a separate line "
		<<"as well as computing the sum of the digits of that number";   //Output purpose

	cout<<"\n\nEnter an integer: ";   //Input positive integer
	cin>>origin_num;

	do
	{
		quotient = origin_num / denom;       //Compute 1st digit
                origin_num = origin_num % denom;     //Compute remainder

		cout<<"\n"<<quotient;                //Output 1st digit

	
		sum += quotient;                     //Compute the sum of digit
		denom /= 10;                         //Divide denominator by 10

	}
	while (denom != 0);

	cout<<"\n\nSum of the Digits is: "<<sum;     //Output the sum of the digits

	getchar();
	return 0;
}
