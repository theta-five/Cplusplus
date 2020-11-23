#include<iostream>
using namespace std;
double CeToFa(double nums);

int main() {

	double celsius = 0.0;

	cout << "Please enter a celsius value: ";
	cin >> celsius;

	double fahrenheit = CeToFa(celsius);
	cout << celsius << " degrees Celsius is " << fahrenheit << " degrees Fahrenheit." << endl;

	system("pause");

	return 0;
}

double CeToFa(double nums) {

	double fa = 1.8 * nums + 32.0;

	return fa;
}