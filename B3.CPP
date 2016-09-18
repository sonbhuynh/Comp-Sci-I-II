//Son Huynh
//3rd Period
//Sep 28, 2011
//This program will

#include <iostream.h>                              //Libraries
#include <iomanip.h>
#include <math.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
        int amount;
	char item;                                         //Declarations
	double gross = 0, price, total;

	cout.setf(ios::fixed);                             //Magic formula
	cout.setf(ios::showpoint);
	cout.precision(2);

	clrscr();

	cout<<"\nThis program will allows the manager to enter the item name, number sold, \nand price/item. "
		<<"The program is to compute and output the gross of all sales ";              //Output purpose

	cout<<"\n\nMenu: ";
	cout<<"\n\tT = Tennis ";
	cout<<"\n\tG = Golf ";
        cout<<"\n\tS = Soccer ";

	cout<<"\n\nEnter item name (X to quit): ";         //Input item name
	cin>>item;
	item = toupper (item);

        while (item != 'X')
        {
		cout<<"\nEnter number of items sold: ";    //Input number of items
		cin>>amount;

		cout<<"\nEnter price per item: $";         //Input price per item
		cin>>price;

                total = amount * price;                    //Compute sale
		gross += total;                            //Compute gross

		cout<<"\nEnter item name (X to quit): ";   //Input item name
		cin>>item;
		item = toupper (item);
	}

	cout<<"\nGross for all sales is $"<<gross;         //Output gross

	getchar();
	return 0;
}

