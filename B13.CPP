//Son Huynh
//Oct 11, 2011
//3rd Period
//This program will ask the user for starting and ending values and then display a formatted table of squares and cubes

#include <iostream.h>                                  //Libraries
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <iomanip.h>

int main()
{
	int start, end, squared, count = 0;		//Declarations
	long int cubed;

	clrscr();

	cout<<"\nThis program will ask the user for starting and ending values and then display "
		<<"a formatted table of squares and cubes";		//Output purpose

	cout<<"\n\nEnter a starting value: ";	//Input starting value
	cin>>start;

	cout<<"\nEnter an ending value: ";	//Input ending value
	cin>>end;

	cout<<setw(6)<<"X"<<setw(14)<<"X Squared"<<setw(12)<<"X Cubed";      //Setting and outputting table width

	do
	{
		squared = pow(start, 2);	//Squaring first number
		cubed = pow(start, 3);		//Cubing first number

		
		cout<<"\n"<<setw(6)<<start;     //Output start number
		cout<<setw(14)<<squared;        //Output squared value
		cout<<setw(12)<<cubed;          //Output cubed value

		if ((count +1) % 15 == 0)
		{
			cout<<"\nPress Enter to Continue ";     //Input Enter to see the rest of table
			getch();
			clrscr();
			cout<<setw(6)<<"X"<<setw(14)<<"X Squared"<<setw(12)<<"X Cubed";      //Re-outputting titles
		}

		count ++;                       //Increases count by 1
		start ++;                       //Increases start by 1
	}
	while (end +1 != start);

	getchar();
	return 0;
}
	 