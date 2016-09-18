//Son Huynh
//Sep 23, 2011
//Period
//This program will take the customer's order, output order and price of meal

#include <iostream.h>                                     //Libraries
#include <iomanip.h>
#include <math.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	char salad, meat, drink, t_or_m;                  //Declarations
	double saladp, meatp, drinkp, price, tax, total;

	cout.setf(ios::fixed);                            //Magic formula
	cout.setf(ios::showpoint);
	cout.precision(2);

	clrscr();

	cout<<"\nThis program will take the customer's order, output order and price of meal ";                     //Output purpose

	cout<<"\n\nWelcome to MyTies's ";                              //Output welcome message

	cout<<"\n\nWould you care for a salad? (Y/N): ";               //Input salad
	cin>>salad;
        salad = toupper (salad);

	cout<<"\nWould you care for the steak or fish? (F/S): ";       //Input meat
	cin>>meat;
	meat = toupper (meat);

	cout<<"\nWould you care for anything to drink? (Y/N): ";       //Input drink
	cin>>drink;
	drink = toupper (drink);

	if (drink == 'Y')                                              //Determine what drink they want if they say Yes
	{                                   
		cout<<"\nTea or Milk? (T/M): ";
                cin>>t_or_m;

		if (t_or_m == 'T')
			drinkp = 0.75;
		if (t_or_m == 'M') 
			drinkp = 1;
	}
	else
		drinkp = 0;

	if (salad == 'Y')                                              //Determine salad price
		saladp = 2;
	else
		saladp = 0;
								       

	if (meat == 'F')                                               //Determine meat price depending on selection
		meatp = 7.4;

	if (meat == 'S')
		meatp = 9.6;


	price = saladp + meatp + drinkp;                               //Compute price
	tax = price * 0.06;                                            //Compute tax of 6%
	total = price + tax;                                           //Compute total price



	cout<<"\nYour order is: ";                                     //Output order

	if (salad == 'Y')                                              //Determine salad price if put yes
		cout<<"\n\nSalad \t\t$"<<saladp;
					       
	if (meat == 'F')                                               //Determine price of fish or steak
		cout<<"\nFish dinner \t$"<<meatp;                      //Output price of fish dinner
	if (meat == 'S')
        	cout<<"\nSteak dinner \t$"<<meatp;                     //Output price of steak dinner
        
	if (drink == 'Y')                                              //Determine price of Tea or Milk
	{                                              
		if (t_or_m == 'T')
			cout<<"\nTea \t\t$"<<drinkp;                   //Output price of tea
		if (t_or_m == 'M')
			cout<<"\nMilk \t\t$"<<drinkp;                  //Output price of milk
	}


	cout<<"\n\nPrice is: \t$"<<price;                              //Output price
	cout<<"\nTax is: \t$"<<tax;                                    //Output tax
	cout<<"\nTotal is: \t$"<<total;                                //Output total price
	cout<<"\nThank you for eating at MyTie's ";

	getchar();
	return 0;
}
