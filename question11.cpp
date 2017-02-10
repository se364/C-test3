/*Name : Shah Emran
Date : 1/13/2017
Homework 1
CS&131         */


#include <iostream>
using namespace std;

int main()
{

	// Code for question number 11

	float  pitem1;
	pitem1 = 15.95;
	float pitem2;
	pitem2 = 24.95;

	float pitem3;
	pitem3 = 6.95;

	float pitem4;
	pitem4 = 12.95;

	float pitem5;
	pitem5 = 3.95;

	float totalsum;
	totalsum = pitem1 + pitem2 + pitem3 + pitem4 + pitem5;  // equation for subtotal of the items

	float salestaxrate;
	salestaxrate = 0.07;    // rate of the saletax

	float amountsaletax;
	amountsaletax = 0.07*totalsum;    // equation for amount of sale tax

	float totalprice;
	totalprice = totalsum - amountsaletax;  // equation for total without saletax

	cout << "11)" << endl;
	cout << "   The price of item 1 is $ " << pitem1 << "\n";
	cout << "   The price of item 2 is $ " << pitem2 << "\n";
	cout << "   The price of item 3 is $ " << pitem3 << "\n";
	cout << "   The price of item 4 is $ " << pitem4 << "\n";
	cout << "   The price of item 5 is $ " << pitem5 << "\n";

	cout << "   The subtotal of the sale $ " << totalsum << "\n";
	cout << "   The amount of sales tax $ " << amountsaletax << "\n";
	cout << "   The total amount is $ " << totalprice << endl;


	getchar();

	return 0;






}