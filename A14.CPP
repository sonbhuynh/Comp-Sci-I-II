//Son Huynh
//3rd Period
//Sep 19, 2011
//This program will calculate all 3 deductions of The Broken Spirit store from the price, as well as the final price
                                                                  //libraries
#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iomanip.h>
#include <ctype.h>

int main()
{
	double tagged_price, sale_discount, guy_discount, jkhs_discount, final_price;       //declaration
	char cash_sale, student, male;

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	clrscr();

	cout<<"\nThis program will calculate all 3 deductions of The Broken Spirit store from the tagged price, as well as the final price ";     //Output purpose

	cout<<"\n\nPlease enter tagged price: $";                  //Input tag price of item
	cin>>tagged_price;

        cout<<"\nIs customer a J.K.H.S student? (Y/N): ";          //Input if student is JKHS student
	cin>>student;
	student = toupper (student);

	cout<<"\nIs this a cash sale? (Y/N): ";                    //Input if it was a cash sale
	cin>>cash_sale;
	cash_sale = toupper (cash_sale);

	cout<<"\nIs customer male? (Y/N): ";                       //Input if customer is male or not
	cin>>male;
	male = toupper (male);

	sale_discount = tagged_price * .3;                         //Calculate sale discount

	if (student == 'Y' && cash_sale == 'Y')
		jkhs_discount = (tagged_price - sale_discount) * .2;      //Calculate JKHS discount
	else
		jkhs_discount = 0;

	if (male == 'Y' && tagged_price > 15.00)
		guy_discount = 5;                                         //Calculate guy discount
	else
		guy_discount = 0;

	final_price = tagged_price - (sale_discount + jkhs_discount + guy_discount);       //Calculate final price after all discounts

	cout<<"\nSale discount is: $"<<sale_discount;              //Output sale discount

	cout<<"\n\nJ.K.H.S discount is: $"<<jkhs_discount;         //Output JKHS discount

	cout<<"\n\nGuy Day discount is: $"<<guy_discount;          //Output guy day discount

	cout<<"\n\nFinal Price is: $"<<final_price;                //Output final price after all discounts

	getchar();
	return 0;
}