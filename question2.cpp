#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	int month, year, P;
	
	cout << "Enter the number of the month";
	cin >> month;

	cout << "Enter the year ";
	cin >> year;
	P = year / 100;


	if (month == 1 && month == 3 && month == 5 && month == 7 && month == 8 && month == 10 && month == 12)
	{
		cout << " The number of days is 31" << endl;
	}
	else if (month == 4 && month == 6 && month == 9 && month == 11)
	{

		cout << " The number of days is 30" << endl;
	}
	else if (month == 2)
	{
		if (year % 100 == 0)
		{
			if (year % 400)
			{
				cout << "The number of days 29" << endl;
			}
			else
				cout << "The number of days 28" << endl;
		}

		else
			cout << "The number of days is 29" << (year % 4 == 0) << endl;
	}
	else
		cout << "The input number is wrong" << endl;


	int x;
	cin >> x;

	return 0;

 


}