//Son Huynh
//Sep 14, 2011
//3rd Period
//This program will take 5 quiz grades and average them together

#include <iostream.h>                                             //Libraries
#include <math.h>
#include <iomanip.h>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>

int main()
{
	int quiz1, quiz2, quiz3, quiz4, quiz5;
	double average, total;

	cout.setf(ios::fixed);                                    //Magic formula
	cout.setf(ios::showpoint);
	cout.precision(2);

        cout<<"\nThis program will take 5 quiz grades and average them together. ";     //Output purpose

	total = quiz1 + quiz2 + quiz3 + quiz4 + quiz5;
	average = total / 5.0;                           //Calculating average

	cout<<"\nPlease enter quiz grade 1: ";                    //Input Quiz 1 grade
	cin>>quiz1;

	cout<<"Please enter quiz grade 2: ";                      //Input Quiz 2 grade
	cin>>quiz2;

	cout<<"Please enter quiz grade 3: ";                      //Input Quiz 3 grade
	cin>>quiz3;

	cout<<"Please enter quiz grade 4: ";                      //Input Quiz 4 grade
	cin>>quiz4;

	cout<<"Please enter quiz grade 5: ";                      //Input Quiz 5 grade
	cin>>quiz5;

	total = quiz1 + quiz2 + quiz3 + quiz4 + quiz5;            //Calculating average
	average = total / 5.0;                           

        cout<<"\n"<<setw(11)<<"Quiz 1"<<setw(11)<<"Quiz 2"<<setw(11)<<"Quiz 3"<<setw(11)<<"Quiz 4"
		<<setw(11)<<"Quiz 5"<<setw(12)<<"Average";

	cout<<"\n"<<setw(11)<<"______"<<setw(11)<<"______"<<setw(11)<<"______"<<setw(11)<<"______"
		<<setw(11)<<"______"<<setw(12)<<"______";
	cout<<"\n"<<setw(11)<<quiz1;                              //Output Quiz 1 grade

	cout<<setw(11)<<quiz2;                                    //Output Quiz 2 grade
	cout<<setw(11)<<quiz3;                                    //Output Quiz 3 grade
	cout<<setw(11)<<quiz4;                                    //Output Quiz 4 grade
	cout<<setw(11)<<quiz5;                                    //Output Quiz 5 grade
	cout<<setw(12)<<average;                                  //Output Average

	getchar();
	return 0;
}