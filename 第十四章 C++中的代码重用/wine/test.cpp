#include<iostream>
using namespace std;
#include<string>
#include<valarray>
#include"wine.h"

void test2() {
	cout << "Enter name of wine: ";
	char lab[50];
	cin.getline(lab, 50);
	cout << "Enter number of year: ";
	int yrs;
	cin >> yrs;

	Wine holding(lab, yrs);
	holding.GetBottles();
	holding.Show();
	cout << "Sum of Bottles: " << holding.Sum() << endl;

	const int YRS = 3;
	int y[YRS] = { 1993, 1995, 1998 };
	int b[YRS] = { 48, 60, 72 };
	Wine more("Gushing Grape Red", YRS, y, b);
	more.Show();
	cout << "Total bottles for " << more.Label() << ": " << more.Sum() << endl;
	cout << "Bye" << endl;
}


int main() {

	test2();

	system("pause");

	return 0;
}