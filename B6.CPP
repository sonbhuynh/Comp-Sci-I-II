//Son Huynh
//3rd Period
//Oct 3, 2011
//This program will allow the user to input the number of folds, and output the thickness in miles

#include <iostream.h>                        //Libraries
#include <iomanip.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <conio.h>

int main()
{
	int folds;                           //Declarations
	double paper = 6;

	clrscr();

	cout<<"\nThis program will allow the user to input the number of folds "
		<<"\nand output the thickness in miles ";                    //Output purpose

	cout<<"\n\nPlease enter the number of times to fold paper: ";        //Input folds
	cin>>folds;

	while (folds != 0)
	{
		paper *= 2;                                   //Doubling paper thickness
		folds --;                                     //Subtracting from folds
	}

	paper = paper / 1000 / 12 / 5280;                     //Convert thickness to miles

	cout<<"\nThickness would be "<<paper<<" miles ";      //Output thickness in miles

	getchar();
	return 0;
}