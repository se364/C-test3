#include <iostream>
using namespace std;

int main()
{

	double princi, Amount, Interest, rate, T, H, G, E, r;

	cout << "Enter your Principle amount... $ ";
	cin >> princi;
	cout << "Enter your interest rate....  ";
	cin >> rate;
	cout << "Enter the number of times interest is compuded per year... $ ";
	cin >> T;

	r = rate / 100;
	H = r / T;
	G = 1 + H;
	E = pow(G, T);

	Amount = (princi*E);

	Interest = Amount - princi;

	cout << "Interest rate:  " << rate << "%"<< endl;
	cout << "Times compounded " << T << endl;
	cout << "Principle:      $" << princi << endl;
	cout << "Interest:       $" << Interest << endl;
	cout << "Total amount:   $" << Amount << endl;

	int x;
	cin >> x;

	return 0;



}