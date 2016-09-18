//Son Huynh
//3rd Period
//Sep 22, 2011
//This program will calculate the employees pay based on the number of hours worked
                                                                  
#include <iostream.h>                                             //libraries
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iomanip.h>
#include <ctype.h>

int main()
{
	int hours;                                                //declaration
	double pay;

	cout.setf(ios::fixed);                                    //magic formula
	cout.setf(ios::showpoint);
	cout.precision(2);

	clrscr();

	cout<<"\nThis program will calculate the employees pay \nbased on the number of hours worked ";                             //Output purpose

	cout<<"\n\nPlease enter the number of hours worked: ";                        //Input hours worked
	cin>>hours;

	if (hours <= 40)                                        //Determine pay according to hours worked
		pay = hours * 8;                                //Compute pay if hours is less than 40
	else
		if (hours <= 56)
			pay = (40 * 8) + ((hours - 40) * 10.50);        //Compute pay if hours is less than 56
		else
			pay = (40 * 8) + (16 * 10.50) + ((hours - 56) * 13);          //Compute pay if hours is greater than 56

	cout<<"\nYour pay is $"<<pay;                                   //Output pay

	getchar();
	return 0;
}