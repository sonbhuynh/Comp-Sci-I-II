//Son Huynh
//3rd Period
//Oct 19, 2011
//This program will ask the user to enter the given election results
//and then display the total votes and percentages for each candidate

#include <iostream.h>                        //Libraries
#include <iomanip.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main()
{
	int ward, total_wards_kubak = 0, total_wards_kelly = 0, kubak, kelly, total_kubak = 0, total_kelly = 0;		//Declarations
	double percent_kubak, percent_kelly;

	cout.setf(ios::fixed);				//Magic formula
	cout.setf(ios::showpoint);
	cout.precision(1);

	clrscr();				//Clear screen

	cout<<"\nThis program will ask the user to enter the given election results "
		<<"and \nthen display the total votes and percentages for each candidate";      //Output purpose

	for (ward = 1; ward <= 6; ward ++)
	{
		cout<<"\nWard "<<ward;			//Output ward 1

		cout<<"\n\tEnter Kubak: ";		//Input Kubak's vote
                cin>>kubak;

		cout<<"\tEnter Kelly: ";      	//Input Kelly's vote
                cin>>kelly;

		total_kelly += kelly;			//Calculate Kelly's total vote
		total_kubak += kubak;			//Calculate Kubak's total vote

		if (kubak > kelly)
			total_wards_kubak ++;		//If Kubak has more vote, increase count by 1

		if (kelly > kubak)
			total_wards_kelly ++;		//If Kelly has more vote, increase count by 1
	}

	percent_kubak = ((double) total_kubak / (total_kubak + total_kelly)) * 100;         //Calculate percentage of Kubak's vote
	percent_kelly = ((double) total_kelly / (total_kubak + total_kelly)) * 100;         //Calculate percentage of Kelly's vote

	cout<<"\n"<<setw(9)<<"Name"<<setw(10)<<"Votes"<<setw(12)<<"Percent"<<setw(14)<<"Wards Won" ;	//Output titles

	cout<<"\n"<<setw(10)<<"Kubak"<<setw(9)<<total_kubak<<setw(12)<<percent_kubak<<setw(14)<<total_wards_kubak;      //Output data for Kubak

	cout<<"\n"<<setw(10)<<"Kelly"<<setw(9)<<total_kelly<<setw(12)<<percent_kelly<<setw(14)<<total_wards_kelly;	  //Output data for Kelly

	getchar();
	return 0;
}

