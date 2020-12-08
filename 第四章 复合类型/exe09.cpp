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


	CandyBar c1 = { "C++", 3.5, 630 };
	CandyBar c2 = { "Java", 2.5, 560 };
	CandyBar c3 = { "Python", 4.5, 120 };

	CandyBar* arrp = new CandyBar[]{c1, c2, c3};

	for (int i = 0; i < 3; i++) {
		PrintCandyBar(arrp[i]);
		cout << endl;
	}

	delete[] arrp;
	system("pause");

	return 0;
}

void PrintCandyBar(const CandyBar& c) {

	cout << "Brand: " << c.brand << endl;
	cout << "Weight: " << c.weight << endl;
	cout << "Calorie: " << c.calorie << endl;

}