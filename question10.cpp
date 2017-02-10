#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
	    double a, b, c, d, e, average;

		cout << "Enter the first test score" << endl;
		cin >> a;
		cout << "Enter the second test score" << endl;
		cin >> b;
		cout << "Enter the third test score" << endl;
		cin >> c;
		cout << "Enter the fourth test score" << endl;
		cin >> d;
		cout << "Enter the fifth test score" << endl;
		cin >> e;

		average = (a + b + c + d + e)/5;
		
		

		//cout << "Test score 1 " << a << endl;
		//cout << "Test score 2 " << b << endl;
		//cout << "Test score 3 " << c << endl;
		//cout << "Test score 4 " << d << endl;
		//cout << "Test score 5 " << e << endl;
		cout << "The average is  " << setprecision(1) << fixed << average;
		cout << "\n";

		int x;
		cin >> x;

		


		return 0;


}