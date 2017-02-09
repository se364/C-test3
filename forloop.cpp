/* Name: Shah Emran
   Date : 2/1/2017
   Quiz 9*/

#include <iostream>
using namespace std;

int main()
{
	// The variables are set
	int KPH;
	double MPH;
	cout << "KPH" << "\t\t" << "MPH\n";
		

	for (KPH = 60; KPH <= 130; KPH = KPH + 10)
	{

		MPH = KPH * 0.6214;
		cout << KPH<< "\t\t"<< MPH << endl;

	}

	system("pause");

	return 0;



}