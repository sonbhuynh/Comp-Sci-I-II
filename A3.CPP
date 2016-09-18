//Son Huynh
//3rd Period
//Sep 6th, 2011
//This program takes information inputted by the user and converts it into a mailing label

#include <iostream.h>                                                 //libraries
#include <stdio.h>

int main()
{
	char name [50],street [50],city [20],state [20],phone [20];   //declarations
	long zip ;


	cout<<"\nPlease enter your name: ";                           //inputting name
	cin.getline(name, 80, '\n');

	cout<<"\nPlease enter your street: ";                         //inputing street
	cin.getline(street, 80, '\n');

	cout<<"\nPlease enter your city: ";                           //inputting city
	cin.getline(city, 80, '\n');

	cout<<"\nPlease enter your state: ";                          //inputting state
	cin.getline(state, 80, '\n');

	cout<<"\nPlease enter your zip: ";                            //inputting zip
	cin>>zip;
	cin.ignore();

	cout<<"\nPlease enter your phone number: ";                   //inputting phone number
	cin.getline(phone, 80, '\n');

	cout<<"\nYour mailing label is: ";                            //outputting mailing label
	cout<<"\n\t"<<name;
	cout<<"\n\t"<<street;
	cout<<"\n\t"<<city<<", "<<state<<" "<<zip;
	cout<<"\n\t"<<phone;

	getchar();
	return 0;
}