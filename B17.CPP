//Son Huynh
//Oct 17, 2011
//Period 3rd
//This program will

#include <iostream.h>                                   //Libraries
#include <iomanip.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <math.h>

int main()
{
	int principal, year, interest;		//Declarations

	clrscr();

	cout<<"\nThis program will ";	//Output purpose

	for (principal = 1000; principal <= 2000; principal += 100)
	{
		cout<<"\n"<<setw(14)<<"Principal"<<setw(9)<<"Time"<<setw(13)<<"Interest";     //Output titles

		for (year = 1; year <= 5; year ++)
		{
			interest = (principal * 0.05) * year;      //Calculating interest

			cout<<"\n"<<setw(14)<<principal<<setw(9)<<year<<setw(13)<<interest;                 //Output interest
		}

		cout<<"\nPlease enter to continue ";
		getch();
                clrscr();
	}

	getchar();
	return 0;
}
        