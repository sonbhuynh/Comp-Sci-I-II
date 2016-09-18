//Son Huynh
//3rd Period
//Sep 6th, 2011
//This program will calculate the purchase price, sell price, and profit/loss in buying and selling stock.

#include <iostream.h>                                             //Libraries
#include <stdio.h>
#include <conio.h>

int main()
{
	char stock_name [50];                                     //Declaration
	int bought;
	double buy_price, sell_price, total_buy, total_buy_fee, total_sell_fee, broker_fee, total_sell, profit_loss;

	cout.setf(ios::fixed);                                    //Magic formula
	cout.setf(ios::showpoint);
	cout.precision(2);

        clrscr();
	cout<<"\nThis program will calculate the purchase price, sell price, \nand profit/loss in buying and selling stock. ";     //Outputting purpose

	cout<<"\n\nEnter name of Stock: ";                        //Inputting Stock name
	cin.getline(stock_name, 80, '\n');

	cout<<"\nEnter the number of shares bought: ";            //Inputting Number or shares
	cin>>bought;

	cout<<"\nEnter buying price per share: $ ";               //Inputting price per share
	cin>>buy_price;

	total_buy = bought * buy_price;                           //Calculating Total Buy
	broker_fee = total_buy * .02;                             //Calculating Broker's Fee
	total_buy_fee = total_buy + broker_fee;                       //Calculating Total Buy after Fee


	cout<<"\nPrice of "<<bought<<" shares of "<<stock_name<<" at \n$"<<buy_price<<" per share is $"<<total_buy;                //Outputting Total buy
	cout<<"\nBroker's fee is $"<<broker_fee;                  //Outputting Broker's fee
	cout<<"\nTotal price of buy is $"<<total_buy_fee;         //Outputting Total price of buy

        //*********************************************************************************


	cout<<"\n\nEnter the selling price per share: $ ";        //Inputting selling price
	cin>>sell_price;

	total_sell = sell_price * bought;                         //Calculating Total sell
	broker_fee = total_sell * .02;                            //Calculating Broker's Fee
        total_sell_fee = total_sell - broker_fee;                 //Calculating Total sell after Fee
	profit_loss = total_sell_fee - total_buy_fee;             //Calculating Profit or Loss


	cout<<"\nTotal for selling "<<bought<<" shares of "<<stock_name<<" at \n$"<<sell_price<<" per share is $"<<total_sell;       //Outputting Total sell
	cout<<"\nBroker's fee is $"<<broker_fee;                  //Outputting Broker's fee
	cout<<"\nTotal return on sale is $"<<total_sell_fee;      //Outputting Total return on sale
	cout<<"\nProfit/Loss is $"<<profit_loss;                  //Outputting Profit or Loss

	//*********************************************************************************

	getchar();
	return 0;
}