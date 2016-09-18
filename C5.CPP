//Son Huynh
//Nov 2, 2011
//Period 3rd
//This program will allow the user to do math drills with all 4 operations

#include <iostream.h>								//Libraries
#include <iomanip.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int addition();				//Prototype for addition
int subtraction();				//Prototype for subtraction
int multiplication();			//Prototype for multiplication
int division();				//Prototype for division

int main()
{
	char option;				//Declaration

	randomize();
	randomize();
     randomize();

	clrscr();					//Clears screen

	do
	{
		cout<<"\nMain menu for Arithmetic Drill";		//Output menu
		cout<<"\n\tA. Addition of whole numbers";
		cout<<"\n\tB. Subtraction of whole numbers";
		cout<<"\n\tC. Multiplication of whole numbers";
		cout<<"\n\tD. Division of whole numbers";
		cout<<"\n\tQ. Quit";

		cout<<"\n\nTo select, please enter A-D, or Q: ";	//Input option
		cin>>option;
		option = toupper (option);

		switch (option)
		{
			case 'A':
				addition();				//Function call for addition
				break;
			case 'B':
				subtraction();				//Function call for subtraction
				break;
			case 'C':
				multiplication();			//Function call for multiplication
				break;
			case 'D':
				division();				//Function call for division
				break;
			case 'Q':
				cout<<"\nYou have quit";		//Output quit message
				break;
		}
	}
	while (option != 'Q');

	getchar();
	return 0;
}

//This function will generate a randomized addition drill
int addition()
{
	int num1, num2, answer, guess, count;		//Declaration
     char another;

	do
	{
     	count = 1;
		num1 = random(10) + 1;			//Randomizing num1
		num2 = random(10) + 1;			//Randomizing num2

		answer = num1 + num2;			//Computing answer

          cout<<"\nMath Drill - Addition";	//Output title

          do
		{
			cout<<"\n"<<num1<<" + "<<num2<<" = ";	//Input guess
			cin>>guess;

			count ++;						//Increases count by 1

			if (guess != answer)			//Checking if guess is equal to answer
				cout<<"Incorrect";
			else
               {
				cout<<"Correct"; 
				break;
			}
		}
		while (count <= 3);

		cout<<"\n\nThe correct answer is: "<<num1<<" + "<<num2<<" = "<<answer;	//Outputs correct answer

		cout<<"\n\nWould you like another addition question? (Y/N): ";		//Input yes or no
		cin>>another;
		another = toupper (another);
		clrscr();							//Clear screen
	}
	while (another != 'N');
}

//This function will generate a randomized subtraction drill
int subtraction()				//Prototype for subtraction
{
	int num1, num2, answer, guess, count;		//Declaration
     char another;

	do
	{
     	count = 1;
		num1 = random(10) + 1;			//Randomizing num1
		num2 = random(10) + 1;			//Randomizing num2

		answer = num1 - num2;			//Computing answer

          cout<<"\nMath Drill - Subtraction";	//Output title

          do
		{
			cout<<"\n"<<num1<<" - "<<num2<<" = ";	//Input guess
			cin>>guess;

			count ++;						//Increases count by 1

			if (guess != answer)			//Checking if guess is equal to answer
				cout<<"Incorrect";
			else
               {
				cout<<"Correct"; 
				break;
			}
		}
		while (count <= 3);

		cout<<"\n\nThe correct answer is: "<<num1<<" - "<<num2<<" = "<<answer;	//Outputs correct answer

		cout<<"\n\nWould you like another subtraction question? (Y/N): ";		//Input yes or no
		cin>>another;
		another = toupper (another);
		clrscr();							//Clear screen
	}
	while (another != 'N');
}

//This function will generate a randomized multiplication drill
int multiplication()
{
	int num1, num2, answer, guess, count;		//Declaration
     char another;

	do
	{
     	count = 1;
		num1 = random(10) + 1;			//Randomizing num1
		num2 = random(10) + 1;			//Randomizing num2

		answer = num1 * num2;			//Computing answer

          cout<<"\nMath Drill - Multiplication";	//Output title

          do
		{
			cout<<"\n"<<num1<<" * "<<num2<<" = ";	//Input guess
			cin>>guess;

			count ++;						//Increases count by 1

			if (guess != answer)			//Checking if guess is equal to answer
				cout<<"Incorrect";
			else
               {
				cout<<"Correct";
				break;
			}
		}
		while (count <= 3);

		cout<<"\n\nThe correct answer is: "<<num1<<" * "<<num2<<" = "<<answer;	//Outputs correct answer

		cout<<"\n\nWould you like another addition question? (Y/N): ";		//Input yes or no
		cin>>another;
		another = toupper (another);
		clrscr();							//Clear screen
	}
	while (another != 'N');
}

//This function will generate a randomized division drill
int division()
{
	int num1, num2, answer, guess, count;		//Declaration
     char another;

	do
	{
     	count = 1;
		num1 = random(10) + 1;			//Randomizing num1
		num2 = random(10) + 1;			//Randomizing num2

		answer = num1 / num2;			//Computing answer

		cout<<"\nMath Drill - Division";	//Output title

          do
		{
			cout<<"\n"<<num1<<" / "<<num2<<" = ";	//Input guess
			cin>>guess;

			count ++;						//Increases count by 1

			if (guess != answer)			//Checking if guess is equal to answer
				cout<<"Incorrect";
			else
               {
				cout<<"Correct"; 
				break;
			}
		}
		while (count <= 3);

		cout<<"\n\nThe correct answer is: "<<num1<<" / "<<num2<<" = "<<answer;	//Outputs correct answer

		cout<<"\n\nWould you like another addition question? (Y/N): ";		//Input yes or no
		cin>>another;
		another = toupper (another);
		clrscr();							//Clear screen
	}
	while (another != 'N');
}