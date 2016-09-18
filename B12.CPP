//Son Huynh
//Period 3rd
//Oct 10, 2011
//This program will ask the user for two starting numbers, and then displays the sequence and the number of steps taken

#include <iostream.h>                        //Libraries
#include <iomanip.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <conio.h>

int main()
{
	int first, second, sum, hold1, hold2, count = 0;        //Declarations

	clrscr();

	cout<<"\nThis program will ask the user for two starting numbers, and then \ndisplays the sequence and the number of steps taken";	     //Output purpose

	cout<<"\n\nEnter first number: ";      //Input first num
	cin>>first;

	cout<<"\nEnter second number: ";     //Input second num
	cin>>second;

	hold1 = first;                       //Holding first num to hold 1
	hold2 = second;                      //Holding first

	cout<<"\n"<<first;
        cout<<""<<second;

	do
	{
		sum = first + second;        //Compute sum

		sum %= 10;                   //Compute numbers in necklace chain

		cout<<""<<sum;               //Output sum

		count ++;		     //Increases count by 1

		first = second;              //Assign second value to first
		second = sum;                //Assign sum value to second
	}
	while (first != hold1 || second != hold2);

        cout<<"\n\nYour number required "<<count<<" steps ";

	getchar();
        return 0;
}