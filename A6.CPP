//Son Huynh
//3rd Period
//Sep 12, 2011
//This program will calculate the distance to the Andromeda galaxy in miles, and the time in years

#include <iostream.h>                                                //libraries
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	const double LIGHT=1.86e5, ANDROMEDA=2.0e6;                  //declarations
        double speed, distance, time;

	cout<<"\nThis program will calculate the distance to the Andromeda galaxy in miles ";           //outputting purpose
	cout<<"and \nthe time in years to travel to the Andromeda galaxy, traveling at one-tenth ";
	cout<<"the speed of light. ";

	speed = LIGHT * 60 * 60 * 24 * 365.25;                              //Calculating speed in miles per year
	distance = ANDROMEDA * speed;                                       //Calculating distance to Andromeda in miles
	time = (distance / ((1.0/10) * LIGHT * 60 * 60)) / 24 / 365.25;     //Calculating time at one-tenth the speed of light

	cout<<"\nThe distance to the Andromeda galaxy is "<<distance<<" miles. ";        //outputting results
        cout<<"\nIt takes "<<time<<" years to travel to the Andromeda galaxy at one-tenth the speed of light. ";

	getchar();
	return 0;
}