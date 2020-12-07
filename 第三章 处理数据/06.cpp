#include<iostream>
using namespace std;

int main() {

	cout << "Enter the distance in miles: ";
	double distance;
	cin >> distance;
	cout << "Enter the gasoline in gallon: ";
	double gasoline;
	cin >> gasoline;

	cout << "The distance per gallon is " << distance / gasoline << endl;

	cout << "Europen style: " << endl;
	cout << "Enter the distance in km: ";
	double Edistance;
	cin >> Edistance;
	cout << "Enter the gasoline in liter: ";
	double Egasoline;
	cin >> Egasoline;

	cout << "The gasoline per 100 km is: " << 100 * Egasoline / Edistance << endl;

	system("pause");

	return 0;
}