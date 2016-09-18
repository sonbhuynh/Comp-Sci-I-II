//100%
//Son Huynh
//Nov 10, 2011
//Period 3rd
//This program will request the zscore of one of the data values

#include <iostream.h>                                             //Libraries
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iomanip.h>
#include <ctype.h>

void getinput(int& count, int& sum, int& sumsqr);								//Prototype for inputting scores
void mean_st(int count, int sum, int sumsqr, double& mean, double& stdev);			//Prototype for mean and st dev
int getscore();									//Prototype for get score
double getzscore(int score, double mean, double stdev);		//Prototype for computing Z score
void getoutput(int score, double zscore);									//Prototype for outputting Z score
void magic();										//Prototype for magic formula
void initial();									//Prototype for initializing

int main()
{
	int score, count = 0, sum = 0, sumsqr = 0;		//Declaration
     double mean, stdev, zscore;

	magic();				//Function call for magic formula

	initial();			//Function call for initializing

	getinput(count, sum, sumsqr);					//Function call for input

	mean_st(count, sum, sumsqr, mean, stdev);		//Function call for mean and stdev

	cout<<"\nMean = "<<mean;
     cout<<"\nStd. Dev. = "<<stdev;

	score = getscore();							//Function call for inputting score

	zscore = getzscore(score, mean, stdev);			//Function call for calculating Z score

	getoutput(score,zscore);						//Function call for outputting Z score

	getchar();
	return 0;
}

//This function will read in scores value
void getinput(int& count, int& sum, int& sumsqr)
{
	int scores;		//Declaration

	do
	{
		cout<<"\nPlease enter your score (or -1 to quit): ";	//Input scores
		cin>>scores;

		if (scores == -1)
			break;

          count ++;							//Increases count by 1

		sum += scores;						//Computing sum of scores

		sumsqr += pow(scores,2);				//Computing sum squared
	}
	while (scores != -1);
}

//This function will calculate Mean and Standard Deviation
void mean_st(int count, int sum, int sumsqr,
			double& mean, double& stdev)
{
	mean = (double) sum / count;	//Calculating mean

	stdev = sqrt((count * sumsqr - pow(sum,2)) / (count * (count - 1)));		//Calculate Standard Deviation
}

//This function will read in score
int getscore()
{
	int score;				//Declaration

	cout<<"\n\nPlease enter score: ";		//Input score
	cin>>score;

     return (score);
}

//This function will compute the Z score
double getzscore(int score, double mean, double stdev)
{
	double zscore;				//Declaration

	zscore = (score - mean) / stdev;		//Compute Z score

	return (zscore);
}

//This function will report the Z score
void getoutput(int scores, double zscore)
{
	cout<<"\nThe Z score of "<<scores<<" is "<<zscore;		//Outputting Z score
}

//This function contains the magic formula
void magic()
{
	cout.setf(ios::fixed);				//Magic formula
	cout.setf(ios::showpoint);
     cout.precision(2);
}

//Initializing variables and outputting purposes
void initial()
{
	clrscr();							//Clears screen

	cout<<"\nThis program will request the zscore of one of the data values ";	//Output purpose
}