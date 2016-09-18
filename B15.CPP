//Son Huynh
//Oct 14, 2011
//Period 3rd
//This program will read two integers and then calculate the sum of integers
//from one number to the other

#include <iostream.h>                                   //Libraries
#include <iomanip.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <math.h>

int main()
{
	int num1, num2, count = 0, sum = 0, hold = 0, temp1, temp2;	     //Declarations

	clrscr();                                       		     //Clear screen

	cout<<"\nThis program will read two integers and then calculate "
		<<"the sum of integers from one number to the other";	     //Output purpose

	cout<<"\n\nPlease enter integer 1: ";		//Input first integer
	cin>>num1;
	temp1 = num1;					//Temporarily hold num1 in variable temp1

	cout<<"\nPlease enter integer 2: ";		//Input second integer
	cin>>num2;
	temp2 = num2;					//Temporarily hold num2 in variable temp2

	if (num1 > num2)
	{
		hold = num1;                 //Assign num 1 to hold
		num1 = num2;                 //Assign num 1 to num 2
		num2 = hold;                 //Assign num 2 to hold
	}
	
	for (num1; num1 <= num2; num1++)
	{
		sum += num1;                 //Calculate sum
        }

	
	cout<<"\nThe sum of the integers from "<<temp1<<" to "<<temp2<<" is: "<<sum;      //Output sum

	getchar();
	return 0;
}