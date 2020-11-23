#include<iostream>
using namespace std;
const int RATE = 63240;
double LightToAst(double nums);

int main() {

	double lightYear = 0.0;

	cout << "Enter the number of light years: ";
	cin >> lightYear;

	if (lightYear <= 0) {
		cout << "The lightYear cannot be a negative numbers. Please enter your age again: ";
		cin >> lightYear;
	}

	double ast = LightToAst(lightYear);
	cout << lightYear << " light years = " << ast << " astronomical units." << endl;

	system("pause");

	return 0;
}

double LightToAst(double nums) {

	double ast = RATE * nums;

	return ast;
}