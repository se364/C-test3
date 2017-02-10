#include<iostream>
#include<fstream>
using namespace std;

int main()

{

	ofstream outputFile;
	outputFile.open("demo.txt");

	outputFile << "This is me Emran \n";
	outputFile << "This is the besy bro this is the best \n";
	outputFile << "yeah broo yeah broo \n";

	cout << "This is the best music";

	outputFile.close();

	int x;
	cin >> x;
	return 0;


}