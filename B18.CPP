//Son Huynh
//3rd Period
//Oct 18, 2011
//This program will let the user enter the hours worked of 4 different employees for 7 days
//and output the total hours for each employee

#include <iostream.h>                           //Libraries
#include <iomanip.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main()
{
	int day, hour, employee, total1 = 0, total2 = 0, total3 = 0, total4 = 0;		//Declarations

	clrscr();				//Clear screen

	cout<<"\nThis program will enter the hours worked of 4 different employees for 7 days"
		<<" and output the total hours for each employee ";           //Output purpose

	for (day = 1; day <= 7; day ++)
	{
		for (employee = 1; employee <= 4; employee ++)
		{
			cout<<"\nEnter number of hours that employee "<<employee<<" worked on day "<<day<<": ";     //Input hour for each employee
			cin>>hour;

			switch (employee)                               //Determine if employee is 1-4
			{
				case 1:
					total1 += hour;                 //Calculate total hour for employee 1
					break;
				case 2:
					total2 += hour;                 //Calculate total hour for employee 2
					break;
				case 3:
					total3 += hour;                 //Calculate total hour for employee 3
					break;
				case 4:
					total4 += hour;                 //Calculate total hour for employee 4
					break;
			}               	
		}

		cout<<"\nPlease press Enter to enter data for next day ";          //Press enter to continue
		getch();
		clrscr();
	}

	cout<<"\nThe total hours for employee 1 is "<<total1<<" hours ";	   //Output total hours for employee 1
	cout<<"\nThe total hours for employee 2 is "<<total2<<" hours ";           //Output total hours for employee 2
	cout<<"\nThe total hours for employee 3 is "<<total3<<" hours ";	   //Output total hours for employee 3
	cout<<"\nThe total hours for employee 4 is "<<total4<<" hours ";	   //Output total hours for employee 4

	getchar();
	return 0;
}