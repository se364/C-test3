/*Name: Shah Emran
  Date : 1/26/2017
  quiz 7*/

#include <iostream>
using namespace std;

int main()
{

	// The variables are set
	int number;
	int min = 1;
	int sum = 0;

	cout << " Enter the number ";
	cin >> number;

	while (min <= number ) {

		sum += min;
		min++;
	}

	cout << sum << endl;

	while (number < 0)
	{

		cout << "Please input positive integer";
		cin >> number;

	}


	int x;
	cin >> x;

	return 0;

}