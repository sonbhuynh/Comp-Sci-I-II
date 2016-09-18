//Son Huynh
//3rd Period
//Oct 27, 2011
//This program will draw an arrow based on the starting position input by the user

#include <iostream.h>								//Libraries
#include <iomanip.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int drawarrow(int column, int width);		//Prototype for drawing arrow

int main()
{
	int column, row;		//Declarations
	char choice;

	clrscr();				//Clears screen

	do
     {
		gotoxy (1,21);           //Puts cursor at 1,21

		cout<<"Select (A=clearscreen, B= place arrow, Quit = quit): ";		//Output menu
          clreol();
		cin>>choice;			//Input selection
		choice = toupper (choice);

		switch (choice)
		{
			case 'A':
				clrscr();		//Clears screen
				break;
			case 'B':
				gotoxy (1,22);	//Puts cursor at 1,22

				cout<<"Column: ";		//Input column
				clreol();                //Clears to end of line
				cin>>column;

                    gotoxy (30,22);		//Puts cursor at 30,22
				cout<<"Row: ";			//Input row
				clreol();                //Clears to end of line
				cin>>row;

				drawarrow(column,row);	//Function call for drawarrow
				break;
			case 'Q':
				cout<<"You have quit";	//Output quit message
				break;
		}
	}
	while (choice != 'Q');

	getchar();
	return 0;
}

//This function will draw the arrow

int drawarrow(int column, int row)
{
	gotoxy (column,row);	//Puts cursor at designated column and row
	cout<<"*** *";			//Outputs 3rd line of the arrow shape

	gotoxy (column + 2, row - 1);		//Puts cursor at column +2, row -1
	cout<<"**";					//Outputs 2nd line

	gotoxy (column + 2, row - 2);		//Puts cursor at column +2, row -2
	cout<<"*";					//Outputs 1st line

	gotoxy (column, row + 1);		//Puts cursor at column, row +1
	cout<<"*    *";				//Outputs 4th line of the arrow

	gotoxy (column, row + 2);		//Puts cursor at column, row +2
	cout<<"*     *";				//Outputs 5th line of the arrow

	gotoxy (column, row + 3);		//Puts cursor at column, row +3
	cout<<"*    *";				//Outputs 6th line of the arrow

	gotoxy (column, row + 4);		//Puts cursor at column, row +4
	cout<<"*** *";					//Outputs 7th line of the arrow

	gotoxy (column + 2, row + 5);		//Puts cursor at column +2, row +5
	cout<<"**";					//Outputs 8th line of the arrow

	gotoxy (column + 2, row + 6);		//Puts cursor at column +2, row +6
	cout<<"*";					//Outputs 8th line of the arrow
}