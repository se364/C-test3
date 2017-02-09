/*Name: Shah Emran;
  Date : 1/3/2017
  Quiz 10*/

#include <iostream>
using namespace std;

int main()
{
	//The variable are set
	double years, rainfall, total = 0, average, months;

	cout << " Enter number of years ";  // ask for the number of years
	cin >> years;

	months = years * 12;

	// outer loop
	for (int i = 1; i <= years; i++)
	{
		// inner loop
		for (int i = 1; i <= 12; i++)
		{
			cout << " Enter the rainfall for months " << i <<endl;  // enter the rainfall
			cin >> rainfall;
			total += rainfall;
		}

		average = total / months;
		cout << "The number of months " << months << endl;
		cout << "The total rainfall " << total << endl;
		cout << "The average rainfall per month for the entire period is " << average << endl;

	}

	system("pause");

	return 0;





}
