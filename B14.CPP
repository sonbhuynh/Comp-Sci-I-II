//Son Huynh
//Oct 11, 2011
//3rd Period
//This program will read in ten values (1 at a time), calculate 20% of each number and then write out the % calculated,
//and give the average of all the calculations

#include <iostream.h>                                  //Libraries
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <iomanip.h>

int main()
{
	int num, count = 0;			       //Declarations
	double sum = 0, percent, average;

	cout.setf(ios::fixed);                         //Magic formula
	cout.setf(ios::showpoint);
	cout.precision(2);

	clrscr();

	cout<<"\nThis program will read in ten values (1 at a time), "
		<<"calculate 20% of each number and then write out the % calculated "
		<<"and give the average of all the calculation ";

	for (count = 1; count <= 10; count ++)
	{
		cout<<"\nEnter number "<<count<<": ";	//Input number
		cin>>num;

                percent = num * 0.2;            	//Calculating 20% of num

		cout<<"\n20% of this number is: "<<percent;          //Output 20% of the number

		sum += percent;                         //Calculating sum of average
	}

        average = sum / (count - 1);                    //Calculating average of the calculations

	cout<<"\nThe average of your calculations is "<<average;     //Output average of all calculations

	getchar();
	return 0;
}