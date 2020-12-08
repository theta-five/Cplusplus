#include<iostream>
using namespace std;
#include<string>

struct CandyBar {

	string brand = "Mocha Munch";
	double weight = 2.5;
	int calorie = 350;
}snack;


void PrintCandyBar(const CandyBar& c);

int main() {

	PrintCandyBar(snack);

	system("pause");

	return 0;
}

void PrintCandyBar(const CandyBar& c) {

	cout << "Brand: " << c.brand << endl;
	cout << "Weight: " << c.weight << endl;
	cout << "Calorie: " << c.calorie << endl;

}