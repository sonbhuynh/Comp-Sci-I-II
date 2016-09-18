//Son Huynh
//3rd Period
//Sep 6th, 2011
//The purpose of this program is to calculate weekly, monthly, and yearly earnings

#include <iostream.h>
#include <stdio.h>

int main()
{
	double hourly_wage, weekly_earning, monthly_earning, yearly_earning;

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	cout<<"\nPlease enter the hourly wage: $";
	cin>>hourly_wage;

	weekly_earning = hourly_wage * 40;
	monthly_earning = weekly_earning * 4;
	yearly_earning = monthly_earning * 12;

	cout<<"\nYour hourly wage is: $ "<<hourly_wage;
	cout<<"\nYour weekly earning is: $ "<<weekly_earning;
	cout<<"\nYour monthly earning is: $ "<<monthly_earning;
	cout<<"\nYour yearly earning is: $ "<<yearly_earning;

	getchar();
	return 0;
}