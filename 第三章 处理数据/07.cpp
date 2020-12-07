#include<iostream>
using namespace std;

int main() {

	const double Ratio = 62.14 * 3.875;

	cout << "Enter the consumption of gasoline in Europenan style (liters per 100km): ";
	double EuropeanStyle;
	cin >> EuropeanStyle;

	cout << "The result in USA style is " << Ratio / EuropeanStyle << " miles per gallon." << endl;

	system("pause");

	return 0;
}