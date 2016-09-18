//Son Huynh
//3rd Period
//Nov 03, 2011
//This program will compute the cost of car rentals
                                                                  
#include <iostream.h>                                             //libraries
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iomanip.h>
#include <ctype.h>

int menu();							//Prototype for Menu
double compact(int days, int miles);		//Prototype for Compact cars
double economy(int days, int miles);		//Prototype for Economy cars
double fullsize(int days, int miles);		//Prototype for Midsize cars
double luxury(int days, int miles);		//Prototype for Luxury cars

int main()
{
	int type, days, miles;                 //declaration
	double rent, extracharge, cost_extra_mile, total_rental;

	cout.setf(ios::fixed);                 //magic formula
	cout.setf(ios::showpoint);
	cout.precision(2);

	clrscr();

     do
	{
		type = menu();		//Function call for menu

		if (type == -1)
     	{
          	cout<<"\nYou have quit ";			//Output quit message
			break;
          }

		cout<<"\nEnter the number of days rented: ";                           //Input days rented
		cin>>days;

		cout<<"\nEnter miles driven: ";        //Input miles driven
		cin>>miles;

		switch (type)                          //Determine rent and extra charge base on car type
		{
			case 1:
				total_rental = compact(days, miles);		//Function call for compact cars
               	break;
	  		case 2: 
				total_rental = economy(days, miles);		//Function call for economy cars
               	break;
			case 3:
				total_rental = fullsize(days, miles);		//Function call for fullsize cars
               	break;
			case 4:
				total_rental = luxury(days, miles);		//Function call for luxury cars
               	break;
	    		case -1:
				cout<<"\nYou have quit";       //Output quit message
				break;
		}
		cout<<"\nTotal Cost of Rental is: $"<<total_rental;		//Output total
		cout<<"\n\nPress enter to continue ";	 //Press enter
		getchar();
          clrscr();
     }
     while (type != -1);

	getchar();
	return 0;
}

//This function will calculate the costs for Compact car
double compact(int days, int miles)
{
	double extracharge, rental_cost, total_rental;			//Declaration
     int extra_miles;

	if (miles - 150 * days > 0)                  //Determine extracharge
		extracharge = (miles - 150 * days) * 0.20;      //Compute extra charge for every mile driven
	else
		extracharge = 0;

     rental_cost = 24.95 * days;			    //Compute rental cost
	total_rental = rental_cost + extracharge;   //Compute total rental fee
	extra_miles = miles - 150 * days;		    //Compute extra miles

	if (extra_miles < 0)
		extra_miles = 0;

	extracharge = extra_miles * 0.20;		    //Compute extra cost mileage

	cout<<"\nCost of Rental for "<<days<<" is: $"<<rental_cost;		//Output rental cost
	cout<<"\nExtra miles are: "<<extra_miles;	//Output extra miles
	cout<<"\nExtra cost for mileage is: $"<<extracharge;		//Output extra cost

	return (total_rental);
}

//This function will calculate the costs for Economy car
double economy(int days, int miles)
{
	double extracharge, rental_cost, total_rental;			//Declaration
     int extra_miles;

	if (miles - 150 * days > 0)                  //Determine extracharge
		extracharge = (miles - 150 * days) * 0.27;      //Compute extra charge for every mile driven
	else
		extracharge = 0;

     rental_cost = 32.95 * days;			    //Compute rental cost
	total_rental = rental_cost + extracharge;   //Compute total rental fee
	extra_miles = miles - 150 * days;		    //Compute extra miles
	extracharge = extra_miles * 0.27;		    //Compute extra cost mileage

	cout<<"\nCost of Rental for "<<days<<" is: $"<<rental_cost;		//Output rental cost
	cout<<"\nExtra miles are: "<<extra_miles;	//Output extra miles
	cout<<"\nExtra cost for mileage is: $"<<extracharge;		//Output extra cost

	return (total_rental);
}

//This function will calculate the costs for Fullsize car
double fullsize(int days, int miles)
{
	double extracharge, rental_cost, total_rental;			//Declaration
     int extra_miles;

	if (miles - 150 * days > 0)                  //Determine extracharge
		extracharge = (miles - 150 * days) * 0.32;      //Compute extra charge for every mile driven
	else
		extracharge = 0;

     rental_cost = 44.90 * days;			    //Compute rental cost
	total_rental = rental_cost + extracharge;   //Compute total rental fee
	extra_miles = miles - 150 * days;		    //Compute extra miles
	extracharge = extra_miles * 0.32;		    //Compute extra cost mileage

	cout<<"\nCost of Rental for "<<days<<" is: $"<<rental_cost;		//Output rental cost
	cout<<"\nExtra miles are: "<<extra_miles;	//Output extra miles
	cout<<"\nExtra cost for mileage is: $"<<extracharge;		//Output extra cost

	return (total_rental);
}

//This function will calculate the costs for Luxury car
double luxury(int days, int miles)
{
	double extracharge, rental_cost, total_rental;			//Declaration
     int extra_miles;

	if (miles - 150 * days > 0)                  //Determine extracharge
		extracharge = (miles - 150 * days) * 0.40;      //Compute extra charge for every mile driven
	else
		extracharge = 0;

     rental_cost = 52.00 * days;			    //Compute rental cost
	total_rental = rental_cost + extracharge;   //Compute total rental fee
	extra_miles = miles - 150 * days;		    //Compute extra miles
	extracharge = extra_miles * 0.40;		    //Compute extra cost mileage

	cout<<"\nCost of Rental for "<<days<<" is: $"<<rental_cost;		//Output rental cost
	cout<<"\nExtra miles are: "<<extra_miles;	//Output extra miles
	cout<<"\nExtra cost for mileage is: $"<<extracharge;		//Output extra cost

	return (total_rental);
}

//This function will output the menu for the user to choose from
int menu()
{
	int type;						    //Declaration

	cout<<"\n\nSelect a car type: ";       //Output car menu
	cout<<"\n\n\t1: Compact Car ";
	cout<<"\n\t2: Economy Car ";
	cout<<"\n\t3: Fullsize Car ";
	cout<<"\n\t4: Luxury Car ";

	cout<<"\n\nChoose 1,2,3,4 or -1 to quit: ";    //Input car type
	cin>>type;

     return (type);
}