#include<iostream>
using namespace std;
#include<string>

struct Pizza {

	string company;
	double diameter = 0.0;
	double weight = 0.0;
};


void PrintPizza(const Pizza& c);

int main() {


	Pizza* p = new Pizza;

	cout << "Enter the diameter of pizza: ";
	cin >> p->diameter;
	cin.get();

	cout << "Enter the company of pizza: ";
	getline(cin, p->company);

	cout << "Enter the weight of pizza: ";
	cin >> p->weight;

	PrintPizza(*p);

	delete p;

	system("pause");

	return 0;
}

void PrintPizza(const Pizza& p) {

	cout << "Company: " << p.company << endl;
	cout << "Diameter: " << p.diameter << endl;
	cout << "Weight: " << p.weight << endl;

}