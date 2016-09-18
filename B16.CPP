//Son Huynh
//Oct 14, 2011
//Period 3rd
//This program will output tables of addition or multiplication from 1-10

#include <iostream.h>                                   //Libraries
#include <iomanip.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <math.h>

int main()
{
	int table, row = 1, column = 1, maxrow = 10, maxcol = 10, sum = 0, product;		//Declarations

	clrscr();										//Clear screen

	cout<<"\nThis program will output tables of addition or multiplication from 1-10 ";	//Output purpose

	
	
	cout<<"\n1. Addition Table ";           						//Output menu
	cout<<"\n2. Multiplication Table ";	
	cout<<"\n\nPlease enter the number of the table of values you would like to see: ";	//Input table choice
	cin>>table;

	switch (table)
	{
		case 1:
                        cout<<"\nAddition Table ";						//Output title
			cout<<"\n"<<setw(11)<<"1"<<setw(5)<<"2"<<setw(5)<<"3"<<setw(5)<<"4";    //Setting widths of columns
			cout<<""<<setw(5)<<"5"<<setw(5)<<"6"<<setw(5)<<"7"<<setw(5)<<"8";
			cout<<""<<setw(5)<<"9"<<setw(5)<<"10";
			cout<<"\n¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯ ";    //Output line underneath

			for (row = 1; row <= maxrow; row ++)
			{
				cout<<endl<<setw(5)<<row<<"|" ;                                 //Output vertical line (columns)

				for (column = 1; column <= maxcol; column ++)			
				{
					sum = row + column;          				//Calculate sum of row and column
                                        cout<<setw(5)<<sum;                                     //Output sum 
				}
			}
			break;
		case 2:
			cout<<"\nMultiplication Table "; 					//Output title
			cout<<"\n"<<setw(11)<<"1"<<setw(5)<<"2"<<setw(5)<<"3"<<setw(5)<<"4";    //Setting widths of columns
			cout<<""<<setw(5)<<"5"<<setw(5)<<"6"<<setw(5)<<"7"<<setw(5)<<"8";
			cout<<""<<setw(5)<<"9"<<setw(5)<<"10";
			cout<<"\n¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯ ";    //Output line underneath

			for (row = 1; row <= maxrow; row ++)
			{
				cout<<endl<<setw(5)<<row<<"|" ;                                 //Output vertical line (columns)

				for (column = 1; column <= maxcol; column ++)
				{
					product = row * column;                                 //Calculate product of row and column
                                        cout<<setw(5)<<product;                                 //Output product
				}
			}
			break;
		default:
			cout<<"\nPlease re-enter 1 or 2 for your choice ";      		//Output error message
			break;
	}

	getchar();
	return 0;
}

	                      