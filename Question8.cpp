/*Name : Shah Emran
Date : 1/13/2017
Homework 1
CS&131         */


#include <iostream>
using namespace std;

int main()
{

	// Code for question number 8 

	double pershare = 35.0;
	double totalshare = 750.0;
	double commissionrate = 0.02;

	double total1 = pershare*totalshare; // Equation for total amount of stock

	double total2 = commissionrate * total1;  // Equation for total amount of commission

	double total3 = total1 + total2;  // Equation for total amount paid

	cout << "8)" << endl;

	cout << "   The amount paid for the stock alone is " << total1 << "\n";
	cout << "   The amount of the commission is " << total2 << "\n";
	cout << "   The total amount paid is " << total3 << "\n";


	getchar();

	return 0;






}