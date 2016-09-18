//Son Huynh
//3rd Period
//Sep 19, 2011
//This program will take the make up test score and calculate the grade book score
                                                                  
#include <iostream.h>                                             //libraries
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iomanip.h>
#include <ctype.h>

int main()
{
	int testscore, amt, scaleamt, gradebook;                  //declarations

	clrscr();

	cout<<"\nThis program will take the make up test score and calculate the grade book score ";          //Output purpose

	cout<<"\n\nPlease enter make up test score: ";            //Input test score
	cin>>testscore;

	amt = testscore - 70;                                     //Compute the amount and scale to C
	scaleamt = amt / 3;

	if (amt <= 0)                                             //Determine if the amount is equal to or less than 0
                gradebook = testscore;
	else
		gradebook = scaleamt + 70;                        //Compute grade book score if amt is greater than 0

	cout<<"\nGrade book score is: "<<gradebook;               //Output grade book score

	getchar();
	return 0;
}