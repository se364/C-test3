#include <iostream>
using namespace std;

int main()
{

	double w, h, hh, bmi;

	cout << " Enter your weight" << endl;
	cin >> w;
	cout << " Enter your height" << endl;
	cin >> h;


	hh = pow(h, 2.0);

	bmi = w * 703 / hh;

	cout << " The BMI of your body is " << bmi << endl;

	if (bmi > 25)
	{

		cout << " You are overweight" << endl;

	}

	else if (bmi > 18.5)
	{

		cout << "You are ok" << endl;
	}

	else if (bmi > 0)
	{

		cout << " you are underweight" << endl;


	}
	

	else
		cout << " It is is error" << endl;


	int x;
	cin >> x;

	return 0;





}