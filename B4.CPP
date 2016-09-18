//Son Huynh
//3rd Period
//Sep 29, 2011
//This program will calculate the student's GPA base on their Total Quality Points and Total Credit Hours ";

#include <iostream.h>                        //Libraries
#include <iomanip.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <conio.h>

int main()
{
	int hours, quality, total_hours = 0, total_quality = 0;                 //Declarations
	char course, grade;
	double gpa = 0;

	cout.setf(ios::fixed);               //Magic formula
	cout.setf(ios::showpoint);
	cout.precision(2);

	clrscr();

	cout<<"\nThis program will calculate the student's GPA base on their "  //Output purpose
		<<"\nTotal Quality Points and Total Credit Hours ";

	cout<<"\n\nMenu: ";                                                     //Output menu
	cout<<"\n\tM = Math ";
	cout<<"\n\tS = Speech ";
	cout<<"\n\tC = Chemistry ";

	cout<<"\n\nPlease enter the course name (Q to quit): ";                 //Input course name
	cin>>course;
	course = toupper (course);

	while (course != 'Q')
	{
		cout<<"\nEnter credit hours: ";           //Input hours
		cin>>hours;

		cout<<"\nEnter grade earned: ";           //Input grade earned
		cin>>grade;
		grade = toupper (grade);
                
		switch (grade)                            //Determine grade point
		{
			case 'A':
				grade = 4;
				break;
			case 'B':
				grade = 3;
				break;
			case 'C':
				grade = 2;
				break;
			case 'D':
				grade = 1;
				break;
			case 'F':
				grade = 0;
				break;
			default:
				cout<<"\nPlease re-enter the grade earned (A-F) ";  //Output error message
				break;
		}

		quality = hours * grade;                                            //Compute quality points
		total_hours += hours;                                               //Compute total hours
		total_quality += quality;                                           //Compute total quality points

		cout<<"\nPlease enter the course name (Q to quit): ";               //Input course name
		cin>>course;
		course = toupper (course);
	}

	gpa = (double) total_quality / total_hours;                                 //Compute GPA

	cout<<"\nThe number of hours taken is: "<<total_hours;                      //Output total hours
	cout<<"\nThe total quality points are: "<<total_quality;                    //Output total quality points
	cout<<"\nThe GPA is: "<<gpa;                                                //Output GPA

	getchar();
	return 0;
}