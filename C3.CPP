//Son Huynh
//3rd Period
//Oct 27, 2011
//This program will find the area of triangle, rectangle, and trapezoid

#include <iostream.h>								//Libraries
#include <iomanip.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <ctype.h>

double triangle(double base, double height);				//Triangle prototype
double rectangle(double base, double height);			//Rectangle prototype
double trapezoid(double base, double base2, double height);	//Trapezoid prototype


int main()
{
	double area = 0, height, base, base2;			//Declarations
	char option;

	cout.setf(ios::fixed);							//Magic formula
	cout.setf(ios::showpoint);
     cout.precision(2);

	clrscr();										//Clears screen

	do
	{
		cout<<"\nGeometric Shapes available are: ";		//Output menu
		cout<<"\n\tA. Triangle ";
		cout<<"\n\tB. Rectangle ";
		cout<<"\n\tC. Trapezoid ";

		cout<<"\nPlease select by entering A, B, C, or Q = Quit: ";		//Input option
		cin>>option;
		option = toupper (option);

		clrscr();

		switch (option)
		{
			case 'A':
				cout<<"\nEnter height of triangle: ";		//Input height of triangle
				cin>>height;

				cout<<"\nEnter base of triangle: ";		//Input base of triangle
				cin>>base;

				area = triangle(base,height);				//Function call for triangle

				cout<<"\nArea measure of triangle is: "<<area;		//Output area of triangle

				break;

			case 'B':
				cout<<"\nEnter height of rectangle: ";		//Input height of rectangle
				cin>>height;

				cout<<"\nEnter base of rectangle: ";		//Input width of rectangle
				cin>>base;

				area = rectangle(base,height);			//Function call for rectangle

				cout<<"\nArea measure of rectangle is: "<<area;		//Output area of rectangle

				break;

			case 'C':
				cout<<"\nEnter height of trapezoid: ";		//Input height of trapezoid
				cin>>height;

				cout<<"\nEnter base 1 of trapezoid: ";		//Input base 1 of trapezoid
				cin>>base;

				cout<<"\nEnter base 2 of trapezoid: ";		//Input base 2 of trapezoid
				cin>>base2;

				area = trapezoid(base,base2,height);		//Function call for trapezoid

				cout<<"\nArea measure of trapezoid is: "<<area;		//Output area of trapezoid

				break;

			case 'Q':
				cout<<"You have quit";		//Output quit message
				break;
		}

		cout<<"\nPlease RETURN key for main menu- ";			//Press enter to continue
		getchar();
		clrscr();

	}
	while (option != 'Q');

	getchar();
	return 0;
}

//This function will find the area of a triangle

double triangle(double base, double height)
{
	double area;						//Declaration

	area = base * height * 0.5;			//Calculate area of triangle

	return (area);
}

//This function will find the area of a rectangle

double rectangle(double base, double height)
{
	double area;						//Declaration

	area = base * height;				//Calculate area of rectangle

	return (area);
}

//This function will find the area of a trapezoid

double trapezoid(double base, double base2, double height)
{
	double area;						//Declaration

	area = 0.5 * (base + base2) * height;	//Calculate area of trapezoid

	return (area);
} 