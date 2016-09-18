//Son Huynh
//3rd Period
//Nov 07, 2011
//This program will convert F to C and vice versa
                                                                  
#include <iostream.h>                                             //libraries
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iomanip.h>
#include <ctype.h>

char menu();				//Prototype for menu
double tocentigrade (int temp);	//Prototype for F to C
double tofahrenheit (int temp);	//Prototype for C to F

int main()
{
	double final_temp;
	int fahrenheit, centigrade, temp;		//Declaration
     char option;
	
	cout.setf(ios::fixed);				//Magic formula
	cout.setf(ios::showpoint);
     cout.precision(2);

	clrscr();

	do
	{
		option = menu();		//Function call for menu

		if (option == 'Q')
		{
			cout<<"\nYou have quit ";		//Output message
			break;
		}

		cout<<"\nWhat temperature would you like to convert: ";		//Input temperature
		cin>>temp;

		switch (option)
		{
			case 'A':
				final_temp = tocentigrade(temp);		//Function call for centigrade

				cout<<"\n"<<temp<<" degrees in Fahrenheit equals "<<final_temp<<" degrees centigrade ";	//Output result in centigrade
				break;
			case 'B':
				final_temp = tofahrenheit(temp);		//Function call for fahrenheit

				cout<<"\n"<<temp<<" degrees in Centigrade equals "<<final_temp<<" degrees fahrenheit ";	//Output result in fahrenheit
                    break;
			case 'Q':
				cout<<"You have quit ";				//Output quit message
				break;
		}
		cout<<"\nPress enter to continue- ";		//Press enter
		getchar();
		clrscr();
	}
	while (option != 'Q');

	getchar();
	return 0;
}

//This function will output a menu for a user to choose from
char menu()
{
	char option;				//Declaration

	cout<<"\nPlease select: ";	//Output menu
	cout<<"\n\tA. Fahrenheit to Centigrade ";
	cout<<"\n\tB. Centigrade to Fahrenheit ";
	cout<<"\n\tQ. Quit ";

	cout<<"\n\nChoose one: ";	//Input option
	cin>>option;
	option = toupper (option);

	return (option);
}

//This function will convert Fahrenheit to Centigrade
double tocentigrade (int temp)
{
	double centigrade;

	centigrade = (temp - 32) * 5.0/9;		//Calculating centigrade


	return (centigrade);
}

//This function will convert Centigrade to Fahrenheit
double tofahrenheit (int temp)
{
	double fahrenheit;

	fahrenheit = temp * 9.0/5 + 32;		//Calculating fahrenheit


	return (fahrenheit);
}