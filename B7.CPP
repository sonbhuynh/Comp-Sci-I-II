//Son Huynh
//3rd Period
//Oct 3, 2011
//This program will stimulate the rolling of a die until the input value is obtained

#include <iostream.h>                                         //Libraries
#include <iomanip.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <conio.h>

int main()
{
	int num = 0, count = 0, dice;                      //Declarations
	char quit;
	randomize();
	randomize();
	randomize();

	clrscr();

	cout<<"\nThis program will stimulate the rolling of a die until the \ninput value is obtained";    //Output purpose

	while (quit != 'Q')
        {
		count = 0;                                    //Re-initializing variables
          dice = 0;

		cout<<"\n\nPlease enter number (1-6): ";      //Input number
		cin>>num;

		cout<<"\nA die is being rolled... ";          //Output statement

		while (num != dice)                         
		{
			dice = random (6) + 1;                   //Generate random number
               cout<<dice;                              //Output dice numbers
			count ++;                                //Increase count by 1
		}

		cout<<"\n\nIt took "<<count<<" tries to reach a "<<num;       //Output the number of tries to get input value

		cout<<"\n\nEnter Q to Quit. Press C for another trial: ";     //Input Q or C to either quit or continue
		cin>>quit;
		quit = toupper (quit);
        }

	getchar();
	return 0;
}

