//Son Huynh
//Sep 26, 2011
//3rd Period
//This program will read in a code for the child's swim classes and output the class assigned

#include <iostream.h>                                    //Libraries
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main()
{
	int swim_class;                                                  //Declaration

	clrscr();

	cout<<"\nThis program will read in a code for the child's swim classes \nand output the class assigned";                    //Output purpose

	cout<<"\n\nThe following codes are for the children's swim classes: ";
	cout<<"\n\n\t1 for Tadpoles ";                                   //Output menu
	cout<<"\n\t2 for Minnows ";
	cout<<"\n\t3 for Dolphins ";
	cout<<"\n\t4 for Sharks ";
        cout<<"\n\t5 for Blue Whales ";

	cout<<"\n\nPlease enter a number for the swim class: ";          //Input a number for class
	cin>>swim_class;

	switch (swim_class)                                              //Determine swim class base on the number inputted
	{
		case 1:
			cout<<"\nYour child is in the Tadpoles ";        //Output class for number 1
			break;
		case 2:
			cout<<"\nYour child is in the Minnows ";         //Output class for number 2
			break;
		case 3:
			cout<<"\nYour child is in the Dolphins ";        //Output class for number 3
			break;
		case 4:
			cout<<"\nYour child is in the Sharks ";          //Output class for number 4
			break;
		case 5:
			cout<<"\nYour child is in the Blue Whales ";     //Output class for number 5
			break;
		default:
                        cout<<"\nYour child is not in any class. \nPlease enter a number from 1-5. ";            //Output error message
			break;
	}

	getchar();
	return 0;
}
