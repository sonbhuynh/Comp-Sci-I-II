//yint should be double everywhere -3%
//97%
//Son Huynh
//Period 3rd
//Nov 09, 2011
//This program will allow the user to input the coordinates of two points
//then outputs the equation of the line through the 2 points.

#include <iostream.h>                                             //Libraries
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iomanip.h>
#include <ctype.h>

void getinput(int& x1,int& y1,int& x2,int& y2);		//Prototype for inputting coordinates
double getslope(int x1,int y1,int x2,int y2);		//Prototype for computting slope
double getyint(int y1, double slope, int x1);		//Prototype for computting y-intercept
void getoutput(double slope, int yint);				//Prototype for outputting equation
void magic();									//Prototype for magic formula
void initial();								//Prototype for initializing

int main()
{
	int x1, y1, x2, y2, yint;		//Declaration
     double slope;

	magic();						//Function call for magic formula

	initial();					//Function call for initializing

	getinput(x1, y1, x2, y2);		//Function call for input

	slope = getslope(x1, y1, x2, y2);	//Function call for slope

	yint = getyint(y1, slope, x1);	//Function call for y-intercept

	getoutput(slope, yint);			//Function call for output

	getchar();
	return 0;
}

//This function will read in the values for coordinates
void getinput(int& x1,int& y1,int& x2,int& y2)
{
	cout<<"\n\nEnter X1: ";			//Input X1
	cin>>x1;

	cout<<"\nEnter Y1: ";			//Input Y1
	cin>>y1;

	cout<<"\nEnter X2: ";			//Input X2
	cin>>x2;

	cout<<"\nEnter Y2: ";			//Input Y2
     cin>>y2;
}

//This function will compute the slope
double getslope(int x1,int y1,int x2,int y2)
{
	double slope;					//Declaration

	slope = double (y2 - y1) / (x2 - x1);	//Calculating slope

	return (slope);
}

//This function will compute the Y-Intercept
double getyint (int y1, double slope, int x1)
{
	int yint;						//Declaration

	yint = y1 - slope * x1;			//Calculating yint

	return (yint);
}

//This function will output the equation of the line
void getoutput(double slope, int yint)
{
	cout<<"\nThe equation of the line is y = "<<slope<<"x + "<<yint;		//Outputs equation of the line
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

	cout<<"\nThis program will allow the user to input the coordinates of two points "
		<<"then \noutputs the equation of the line through the 2 points.";		//Outputting purposes
}