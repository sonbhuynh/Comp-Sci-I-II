//Son Huynh
//3rd Period
//Sep 29, 2011
//This program will convert a decimal number, base ten, into a binary number

#include <iostream.h>                        //Libraries
#include <iomanip.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <conio.h>

int main()
{
	  int remainder, integer, binary;                   //Declarations

	  clrscr;

	  cout<<"\nThis program will convert a decimal number, base ten, into a binary number";                     //Output purpose

	  cout<<"\n\nPlease enter a positive integer (1-32000): ";                   //Input integer
	  cin>>integer;

	  cout<<"\nThe binary name (reversed) is: ";                       //Output binary number

	  while (integer != 0)
	  {
		remainder = integer % 2;                   //Calculating remainder
          cout<<remainder;                           //Outputting remainder
		integer /= 2;                              //Dividing integer by 2
	  }

	  getchar();
	  return 0;
}