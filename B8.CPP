//Son Huynh
//3rd Period
//Oct 3, 2011
//This program will let the users input series of numbers, then calculate and output the Number, Total, Largest, and Average

#include <iostream.h>                                        //Libraries
#include <iomanip.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <conio.h>

int main()
{
	int number, total = 0, large = -1, count = 0;		      //Declarations
	char option = 'l';
    	double average = 0;

	cout.setf(ios::fixed);                                        //Magic formula
	cout.setf(ios::showpoint);
	cout.precision(2);

	randomize();                                                  //Randomize number
	randomize();

	clrscr();                                                     //Clear screen

	cout<<"\nThis program will let the users input series of numbers, then calculate"      //Output purpose
        	<<"\nand output the Number, Total, Largest, Average. "; 

     	while (option != 'Q')
	{
		clrscr();

		cout<<"\nOptions available: ";                        //Output menu
		cout<<"\n\tA. Generate a new value ";
		cout<<"\n\tB. Report average to this point ";
		cout<<"\n\tC. Report highest value to this point ";
		cout<<"\n\tQ. Quit ";

		cout<<"\nPlease enter a letter of one of the above options: ";         //Input option
		cin>>option;
		option = toupper (option);

		switch (option)
		{
			case 'A':
				number = random (100) +1;                	       //Generate a random number between 0-99

				cout<<"\nThe Number generated is: "<<number;           //Output number

				total += number;                      		       //Calculate total 
				count ++;                                	       //Increase count by 1
				average = (double) total / count;        	       //Calculate average

				if (number > large)
					large = number;                  	       //Largest number is equal to number

				break;
			case 'B':
				cout<<"\nThe Average is: "<<average;                   //Output average
				break;
			case 'C':
				cout<<"\nThe Largest number is: "<<large;              //Output largest number
                    		break;
			case 'Q':
				cout<<"\nThe Number generated is: "<<number;           //Output number
				cout<<"\nThe Sum of the numbers is: "<<total;          //Output total
                                cout<<"\nThe Average of the numbers is: "<<average;    //Output average
				cout<<"\nThe Largest number is: "<<large;              //Output largest number
                    		break;
			default:
				cout<<"\nPlease re-enter a letter from the given menu ";
				break;
		}

		cout<<"\n\nPlease press the RETURN key to continue ";
		getchar();
		clrscr();
	
	}

	getchar();
	return 0;
}