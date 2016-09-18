//Son Huynh
//Period 3
//Oct 25, 2011
//This program will use the screen as a drawing pad for rectangles


#include <iostream.h>				//Libraries
#include <iomanip.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int main()
{
	char quit;
	int outer, inner, height, width;		//Declarations

	do
	{
		clrscr();						//Clears screen

		gotoxy (1,21);					//Bottom left corner at 1,21

		cout<<"Enter height of rectangle (2 - 15): ";     	//Input height
		cin>>height;

		cout<<"Enter width of rectangle (2 - 70): ";			//Input width
		cin>>width;

		for (outer = 1; outer <= height; outer ++)         //Output rectangle
		{
			for (inner = 1; inner <= width; inner ++)
			{
				gotoxy (inner + 2, outer + 1);           //Upper left at 3,2
				cout<<"*";                               //Output *
			}
		}

		gotoxy (1,23);								 //Bottom left corner at 1,21

		cout<<"Press C to continue, press Q to quit: ";		//Input C or Q
		cin>>quit;
		quit = toupper (quit);
     }
	while (quit != 'Q');

	getchar();
	return 0;
}