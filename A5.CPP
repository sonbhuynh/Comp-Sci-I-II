//Son Huynh
//3rd Period
//Sep 12, 2011
//This program will generate and roll 2 die

#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>					        //libraries

int main()
{
	int num1,num2;                                          //declaration
	randomize();
	randomize();

	cout<<"\nThis program will generate and roll 2 die. ";  //outputting program's purpose

	num1 = random(6) + 1;                                   //calculation
	num2 = random(6) + 1;

	cout<<"\n\nA pair of dice has been rolled. ";           //outputting results
	cout<<"\nThe results are a "<<num1<<" and a "<<num2;

	getchar();
	return 0;
}