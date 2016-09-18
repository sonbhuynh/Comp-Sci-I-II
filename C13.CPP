//75%

//call magic in main
//separate function for menu and dotriange etc do not have parameters going into them if you follow directions

//Son Huynh
//Nov 15, 2011
//Period 3rd
//This program will compute the area and perimeter for triangle, rectangle, and trapezoid

#include <iostream.h>                                             //Libraries
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iomanip.h>
#include <ctype.h>

int doperimetertri(int s1, int s2, int s3);				//Prototype for computing Peri of Triangle
double doareatri(int s1, int s2, int s3);				//Prototype for computing Area of Triangle
void dotriangle(int peri_tri, double area_tri);			//Prototype for outputting Area and Perimeter
//*****************************************************

int doperimeterrec(int base, int height);				//Prototype for computing Peri of Rectangle
double doarearec(int base, int height);					//Prototype for computing Area of Rectangle
void dorectangle(int peri_rec, double area_rec);		//Prototype for outputting Area and Perimeter
//*****************************************************

int doperimetertrap(int base1, int base2, int side1, int side2);		//Prototype for computing Peri of Trapezoid
double doareatrap(int base1, int base2, int height);	//Prototype for computing Area of Trapezoid
void dotrapezoid(int peri_trap, double area_trap);		//Prototype for outputting Area and Perimeter
//*****************************************************

void magic();										//Prototype for the magic formula
void initial();									//Prototype for initializing

int main()
{
	int s1, s2, s3, base, height, side1, side2, base1, base2, peri_tri, peri_rec, peri_trap;					//Declaration
	double area_tri, area_rec, area_trap;
	char option;

	do
	{
		cout<<"\nGeometric Shapes available are: ";		//Output menu
		cout<<"\n\tA. Triangle ";
		cout<<"\n\tB. Rectangle ";
		cout<<"\n\tC. Trapezoid ";

		cout<<"\nPlease select by entering A, B, C, or Q = Quit: ";		//Input option
		cin>>option;
		option = toupper (option);

		clrscr();									//Clear screen

		switch (option)
		{
			case 'A':
				cout<<"\nEnter length of side 1: ";	//Input side A
				cin>>s1;

				cout<<"\nEnter length of side 2: ";	//Input side B
				cin>>s2;

				cout<<"\nEnter length of side 3: ";	//Input side C
				cin>>s3;
				
				peri_tri = doperimetertri(s1, s2, s3);    //Function call for Perimeter of Triangle
				
				area_tri = doareatri(s1, s2, s3);         //Function call for Area of Triangle

				dotriangle(peri_tri, area_tri);		//Function call for triangle

				break;
			case 'B':
				cout<<"\nEnter base: ";				//Input base of Rectangle
				cin>>base;

				cout<<"\nEnter height: ";			//Input height of Rectangle
				cin>>height;
				
				peri_rec = doperimeterrec(base, height);   //Function call for Perimeter of Rectangle
				
				area_rec = doarearec(base, height);        //Function call for Area of Rectangle

				dorectangle(peri_rec, area_rec);		//Function call for rectangle

				break;
			case 'C':
				cout<<"\nPlease enter base 1: ";	//Input base 1
				cin>>base1;

				cout<<"\nPlease enter base 2: ";	//Input base 2
				cin>>base2;

				cout<<"\nPlease enter side 1: ";	//Input side 1
				cin>>side1;

				cout<<"\nPlease enter side 2: ";	//Input side 2
				cin>>side2;
				
				cout<<"\nPlease enter height: ";    //Input height
				cin>>height;
				
				peri_trap = doperimetertrap(base1, base2, side1, side2);    //Function call for Perimeter of Trapezoid
				
				area_trap = doareatrap(base1, base2, height);               //Function call for Area of Trapezoid

				dotrapezoid(peri_trap, area_trap);	//Function call for trapezoid

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

//This function will calculate the Peri of a triangle
int doperimetertri(int s1, int s2, int s3)
{
	int peri_tri;			//Declaration

	peri_tri = s1 + s2 + s3;	//Computing perimeter of triangle

	return (peri_tri);
}

//This function will calculate the Area of a triangle
double doareatri(int s1, int s2, int s3)
{
	double semi_peri = 0, area_tri;			//Declaration

	semi_peri = (s1 + s2 + s3) / 2.0;	//Calculating semi-perimeter

	area_tri = sqrt((semi_peri * (semi_peri - s1) * (semi_peri - s2) * (semi_peri - s3)));	//Computing Area of triangle

	return (area_tri);
}

//This function will output the perimeter and area of the triangle
void dotriangle(int peri_tri, double area_tri)
{
	cout<<"\nThe Area of the Triangle is: "<<area_tri;			//Outputs area of triangle
	cout<<"\nThe Perimeter of the Triangle is: "<<peri_tri;		//Outputs perimeter of triangle
}

//*****************************************************************

//This function will compute the Peri of a rectangle
int doperimeterrec(int base, int height)
{
	int peri_rec;			//Declaration

	peri_rec = (base + height) * 2;								//Computing perimeter of rectangle

	return (peri_rec);
}

//This function will compute the Area of a rectangle
double doarearec(int base, int height)
{
	double area_rec;		//Declaration

	area_rec = (double) base * height;		//Compute area of rectangle

	return (area_rec);
}

//This function will output the perimeter and area of the rectangle
void dorectangle(int peri_rec, double area_rec)
{
	cout<<"\nThe Area of the Rectangle is: "<<area_rec;				//Outputs area of rectangle
	cout<<"\nThe Perimeter of the Rectangle is: "<<peri_rec;		//Outputs perimeter of rectangle
}

//*****************************************************************

//This function will compute the Peri of a Trapezoid
int doperimetertrap(int base1, int base2, int side1, int side2)
{
	int peri_trap;		//Declaration

	peri_trap = base1 + base2 + side1 + side2;		//Compute perimeter of trapezoid

	return (peri_trap);
}

//This function will compute the Area of a Trapezoid
double doareatrap(int base1, int base2, int height)
{
	double area_trap;	//Declaration

	area_trap = 0.5 * (base1 + base2) * height;		//Compute area of trapezoid

	return (area_trap);
}

//This function will output the perimeter and area of the rectangle
void dotrapezoid(int peri_trap, double area_trap)
{
	cout<<"\nThe Area of the Trapezoid is: "<<area_trap;			//Outputs area of trapezoid
	cout<<"\nThe Perimeter of the Trapezoid is: "<<peri_trap;		//Outputs perimeter of trapezoid
}

//*****************************************************************

//This function contains the magic formula
void magic()
{
	cout.setf(ios::fixed);				//Magic formula
	cout.setf(ios::showpoint);
	cout.precision(2);
}

//Initializing variables and outputting purposes
void initial()
{
	clrscr();							//Clears screen

	cout<<"\nThis program will compute the area and perimeter for triangle, rectangle, and trapezoid ";	//Output purpose
}
