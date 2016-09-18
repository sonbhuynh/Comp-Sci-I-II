//Son Huynh
//Period 3rd
//Oct 10, 2011
//This program will determine what integers of two, three, or four digits are equal to the sum of the cubes of their digits.

#include <iostream.h>                        //Libraries
#include <iomanip.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <conio.h>

int main()
{
	int denom = 10000, quotient, sum = 0, cube = 0, hold;	     //Declarations
	long int origin_num = 10;

	clrscr();

	cout<<"\nThis program will determine what integers of two, three, or four digits \nare equal to the sum of the cubes of their digits.";	    //Output purpose

	do
	{
		sum = 0;                                     //Re-initializing variables
		hold = origin_num;
                denom = 10000;

		do
                {
			quotient = origin_num / denom;       //Compute 1st digit
			origin_num %= denom;     	     //Compute remainder
			denom /= 10;                         //Divide denominator by 10
			cube = pow(quotient, 3);	     //Compute cube of digits
                        sum += cube;                         //Add up the sum of the cubes
		}
		while (denom != 0);

		if (hold == sum)
			cout<<"\n\nThe Sum of Cubes of the Digits is: "<<sum;              //Output the sum of the cubes

		origin_num = hold;                           //Puts orig number on hold
		origin_num += 1;                             //Increases orig number by 1
		
	}
	while (origin_num != 9999);

	getchar();
	return 0;
}