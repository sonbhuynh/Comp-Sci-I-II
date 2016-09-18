//Son Huynh
//3rd Period
//Sep 22, 2011
//This program will compute the cost of the car rental
                                                                  
#include <iostream.h>                                             //libraries
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iomanip.h>
#include <ctype.h>

int main()
{
	int type, days, miles;                 //declaration
	double rent, extracharge, cost_extra_mile, total_rental;

	cout.setf(ios::fixed);                 //magic formula
	cout.setf(ios::showpoint);
	cout.precision(2);

	clrscr();

	cout<<"\nThis program will compute the cost of the car rental";	       //Output purpose

	cout<<"\n\nSelect a car type: ";       //Output car menu
	cout<<"\n\n\t1: Compact Car ";
	cout<<"\n\t2: Economy Car ";
	cout<<"\n\t3: Midsize Car ";
	cout<<"\n\t4: Luxury Car ";

	cout<<"\n\nEnter car type (1-4): ";    //Input car type
	cin>>type;

	cout<<"\nEnter the number of days rented: ";                           //Input days rented
	cin>>days;

	cout<<"\nEnter miles driven: ";        //Input miles driven
	cin>>miles;

	switch (type)                          //Determine rent and extra charge base on car type
	{
		case 1:
			rent = 24.95;                //Rent and cost per extra mile of car 1
			cost_extra_mile = 0.20;
                        break;
		case 2: 
			rent = 32.95;                //Rent and cost per extra mile of car 2
			cost_extra_mile = 0.27;
                        break;
		case 3:
			rent = 44.90;                //Rent and cost per extra mile of car 3
			cost_extra_mile = 0.32;
                        break;
		case 4:
			rent = 52.00;                //Rent and cost per extra mile of car 4
			cost_extra_mile = 0.40;
                        break;
		default:
			cout<<"\nPlease re-enter a number between 1 and 4 \nfor the type of car you have chosen ";       //Output error message
			break;
        }

	if (miles - 150 * days > 0)                  //Determine extracharge
		extracharge = (miles - 150 * days) * cost_extra_mile;      //Compute extra charge for every mile driven
	else
		extracharge = 0;

	total_rental = rent * days + extracharge;   //Compute total rental fee

	cout<<"\nCost of the rental is: $"<<total_rental;      //Output total rental fee

	getchar();
	return 0;
}