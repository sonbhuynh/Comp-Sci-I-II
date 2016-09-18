//Son Huynh
//Period 3rd
//Nov 08, 2011
//This program will calculate the area of a triangle using Heron's formula

#include <iostream.h>                                             //Libraries
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iomanip.h>
#include <ctype.h>

void getinput(int& side_a, int& side_b, int& side_c);		//Prototype for inputting values
double getarea(int side_a, int side_b, int side_c);		//Prototype for calculating area
void getoutput(double final_area);						//Prototype for outputting area
void magic();										//Prototype for the magic formula
void initial();									//Prototype for initializing

int main()
{
	int side_a, side_b, side_c;			//Declaration
     double final_area;

	magic();							//Function call for magic formula

	initial();						//Function call for initializing

	getinput(side_a, side_b, side_c);		//Function call for input

	final_area = getarea(side_a, side_b, side_c);	//Function call for area

	getoutput(final_area);				//Function call for output

	getchar();
	return 0;
}
                                          
//This function will read in the values for Side A, B, and C
void getinput(int& side_a, int& side_b, int& side_c)
{
	cout<<"\nEnter length of side A: ";	//Input side A
	cin>>side_a;

	cout<<"\nEnter length of side B: ";	//Input side B
	cin>>side_b;

	cout<<"\nEnter length of side C: ";	//Input side C
	cin>>side_c;
}

//This function will calculate the area using Heron's formula
double getarea(int side_a, int side_b, int side_c)
{
	double final_area, semi_peri = 0;			//Declaration

	semi_peri = (side_a + side_b + side_c) / 2.0;	//Calculating semi-perimeter

	final_area = sqrt((semi_peri * (semi_peri - side_a) * (semi_peri - side_b) * (semi_peri - side_c)));		//Calculating area using Heron's formula

	return (final_area);
}

//This function will output the area
void getoutput(double final_area)
{
	cout<<"\nThe area measure of the triangle is: "<<final_area;		//Output area
}

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

	cout<<"\nThis program will calculate the area of a triangle using Heron's formula ";		//Outputting purposes
}