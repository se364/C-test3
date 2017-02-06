

/*Name: Shah Emran
Date: 2/1/2017
Homework 3
question 6*/

#include <iostream>
using namespace std;

int main()

{
	// The variables are set
	char letter;
	double minutes, pack1, pack2, pack3, pack4;;
	cout << " Enter the package A or B - ";  // ask the package 
	cin >> letter;
	cout << " Enter number of minutes - ";   // ask the number of minutes
	cin >> minutes;

	pack1 = (minutes - 450)*0.45; // equation for finding extra bill for package 1
	pack2 = (minutes - 900)*0.40; // equation for finding extra bill for package 2
	pack3 = 50.0 - pack1;   // saving in a month from package A
	pack4 = 10 - pack2;     // saving in a month from package B
	  
	switch (letter)
	{
	case 'A':
		if (minutes > 450)
		{
			if (pack3 == 0)
			{
				return 0;
			}
			else {

				cout << "The monthly saving is $ " << pack3 << endl;
			}
		}
		else
		{
			cout << "The monthly saving is $ " << 50.0 << endl;
		}
		break;

	case 'B':
		if (minutes > 900)
		{
			if (pack4 == 0)
			{
				return 0;
			}
			else {
				cout << "The monthly saving is $ " << pack4 << endl;
			}
		}
		else
		{
			cout << "The monthly bill is $ " << 10.00 << endl;
		}
		break;
	default:

		cout << " Error" << endl;
		break;
	}
	


	int x;
	cin >> x;

	return 0;


}