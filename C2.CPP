//Son Huynh
//Period 3
//Oct 25, 2011
//This program will print a double starred border around the outside edges of the screen.
//and draw a large happy face on the screen

#include <iostream.h>				//Libraries
#include <iomanip.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int main()
{
	int outer, inner, height, width;	//Declarations

	for (outer = 1; outer <= 2; outer ++)         	 
	{
		for (inner = 1; inner <= 80; inner ++)		 	 //Output top border
		{
				gotoxy (inner + 0, outer + 0);           //Upper left at 1,1
				cout<<"*";                               //Output *
		}
	}


	for (outer = 1; outer <= 2; outer ++)         	 
	{
		for (inner = 1; inner <= 80; inner ++)		 	 //Output bottom border
		{
				gotoxy (inner + 0, outer + 22);          //Upper left at 1,23
				cout<<"*";                               //Output *
		}
	}

	for (outer = 1; outer <= 20; outer ++)
	{
		for (inner = 1; inner <= 2; inner ++)		 	 //Output left border
		{
				gotoxy (inner + 0, outer + 2);           //Upper left at 1,3
				cout<<"*";                               //Output *
		}
	}

	for (outer = 1; outer <= 20; outer ++)
	{
		for (inner = 1; inner <= 2; inner ++)		 	 //Output right border
		{
				gotoxy (inner + 78, outer + 2);          //Upper left at 79,3
				cout<<"*";                               //Output *
		}
	}

	gotoxy (38,8);			//Top head at 35.8
	cout<<"*****";			//Output top head

     gotoxy (35,9);
	cout<<"**       **";

	gotoxy (32,10);
	cout<<"**             **";

	gotoxy (32,11);
	cout<<"**  **     **  **";

	gotoxy (32,12);
	cout<<"**      *      **";

	gotoxy (32,13);
	cout<<"**      *      **";

	gotoxy (32,14);
	cout<<"**   *     *   **";

	gotoxy (32,15);
	cout<<"**   *******   **";

	gotoxy (32,16);
	cout<<"**             **";

	gotoxy (35,17);
	cout<<"**       **";

	gotoxy (38,18);
	cout<<"*****";

	getchar();
	return 0;
}