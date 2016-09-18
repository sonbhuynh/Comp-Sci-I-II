//Son Huynh
//Sep 15, 2011
//3rd Period
//This program will 

#include <iostream.h>                                        //Libraries
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <iomanip.h>

int main()
{
	int test1, test2, test3, bonus;                      //Declaration
	double average;

	cout.setf(ios::fixed);                               //Setting decimal to 2 places
	cout.setf(ios::showpoint);
	cout.precision(2);

	clrscr();

	cout<<"\nThis program will average 3 test grades and add 3 bonus points if Test 3 \nis scored 85 or higher ";         //Output purpose

	cout<<"\n\nEnter grade for Test1: ";                   //Input Test 1 grade
	cin>>test1;

	cout<<"\nEnter grade for Test2: ";                     //Input Test 2 grade
	cin>>test2;

	cout<<"\nEnter grade for Test3: ";                     //Input Test 3 grade
	cin>>test3;

	if (test3 > 85)                                        //Checking to see if Test 3 is 85 or higher
		bonus = 3;
	else
		bonus = 0;

	average = (test1 + test2 + test3) / 3.0 + bonus;       //Calculating average

	cout<<"\nAverage is: "<<average;                       //Output average

	getchar();
	return 0;
}