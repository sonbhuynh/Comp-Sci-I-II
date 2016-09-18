//Son Huynh
//3rd Period
//Sep 6th, 2011
//This program was designed to take a 5 letter word and rearranges it backward

#include <iostream.h>
#include <stdio.h>                                          //libraries

int main()
{
	char let1, let2, let3, let4, let5;                  //declaration
                                                            
	cout<<"\nPlease enter your five characters: ";      //Inputting a 5 letter word
	cin>>let1>>let2>>let3>>let4>>let5;
                                                            
	cout<<"\nYour word backwards is: ";                 //Outputting a 5 letter word backward
	cout<<let5<<let4<<let3<<let2<<let1;

	getchar();
	return 0;
}