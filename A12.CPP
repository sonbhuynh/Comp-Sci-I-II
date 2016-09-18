//Son Huynh
//Sep 16, 2011
//3rd Period
//This program will

#include <iostream.h>                                                 //Libraries
#include <iomanip.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main()
{
	int year, employee_number, position;                          //Declarations
	double payrate, bonus;

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	clrscr();

	cout<<"\nThis program will calculate the bonus employees at Sarah's Style Shop are to be paid an end of the year ";         //Output purpose

	cout<<"\n\nEnter employee number: ";                          //Input employee number
	cin>>employee_number;

	cout<<"\nEnter weekly pay rate: $";                           //Input weekly pay rate
	cin>>payrate;

	cout<<"\nEnter position code (1,2,3): ";                      //Input position code
	cin>>position;

	cout<<"\nEnter years experience: ";                           //Input years experience
	cin>>year;

	if (position == 1)                                            //Determine bonus
		bonus = payrate;

	if (position == 2)                                            //Determine bonus for position 2 by multiplying pay rate by 2
		bonus = 2.0 * payrate;

	if (position == 3)                                            //Determine bonus for position 3 by multiplying pay rate by 1.5
		bonus = 1.5 * payrate;

	if (position == 2 && bonus > 700)                             //Determine position 2 bonus, if greater than 700, will just be 700
		bonus = 700;

	if (year > 10)                                                //Determine bonus of 10% of work more than 10 years
		bonus *= 1.1;

	if (year < 3 && bonus >300)                                   //Determine bonus if work less than 3 years, at most bonus can be is 300
		bonus <= 300;

	cout<<"\nBonus for year is: $"<<bonus;                        //Output total bonus

	getchar();
	return 0;
}