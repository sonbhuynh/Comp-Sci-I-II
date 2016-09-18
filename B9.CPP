//Son Huynh
//3rd Period
//Oct 6, 2011
//This program will 

#include <iostream.h>                                        //Libraries
#include <iomanip.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <conio.h>

int main()
{
	int number, max_value, min_value, guess, ran, count;  //Declarations
        char option = 'a';

	randomize();
	randomize();

	clrscr();

	cout<<"\nThis program will ";		//Output purpose

	cout<<"\nEnter positive integer for maximum value: ";          //Input max value
	cin>>max_value;

	cout<<"\nEnter positive integer for minimum value: ";	       //Input min value
	cin>>min_value;

	number = random (max_value - min_value + 1) + min_value;       //Generate a random number
	count = 0;                                                     //Count set to 0

	do
	{
		cout<<"\nEnter guess for my mystery number: ";         //Input guess
		cin>>guess;

                count ++;

		if (guess > number)                                    //Determine if guess is greater than number
			cout<<"\nToo large (Press C to continue or Q to quit): ";         //Input C or Q

		if (guess < number)                                    //Determine if guess is less than number
			cout<<"\nToo small (Press C to continue or Q to quit): ";         //Input C or Q
		
		if (guess == number)                                   //Determine if guess is equal to number
		{                                    
			cout<<"\nYou guessed it! ";                    //Output You guessed it
			break;
		}

		cin>>option;
		option = toupper (option);			       
	}
	while (option != 'Q');


	cout<<"\n\nThe mystery number was: "<<number;                    //Output the selected number

	cout<<"\n\nIt took "<<count<<" tries to get the correct answer ";       //Output number of tries to get the selected number

	getchar();
	return 0;
}