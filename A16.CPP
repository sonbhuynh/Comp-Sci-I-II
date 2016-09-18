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
	double rent, extracharge, total_rental;

	cout.setf(ios::fixed);                 //magic formula
	cout.setf(ios::showpoint);
	cout.precision(2);

	clrscr();

	cout<<"\nThis program will compute the cost of the car rental";	       //Output purpose

	cout<<"\n\nEnter car type: ";          //Input car type
	cin>>type;

	cout<<"\nEnter the number of days rented: ";                           //Input days rented
	cin>>days;

	cout<<"\nEnter miles driven: ";        //Input miles driven
	cin>>miles;

	if (type == 1)                         //Determine the rent base on the car type
		rent = days * 24.95;

	if (type == 2)
		rent = days * 32.95;

	if (type == 3)
		rent = days * 44.90;

	if (miles - 150 * days > 0)            //Determine extracharge
		extracharge = (miles - 150 * days) * 0.2;      //Compute extra charge for every mile driven
	else
		extracharge = 0;

	total_rental = rent + extracharge;     //Compute total rental fee

	cout<<"\nCost of the rental is: $"<<total_rental;     //Output total rental fee

	getchar();
	return 0;
}