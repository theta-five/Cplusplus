#include<iostream>
using namespace std;

int main() {

	long long populationOfWord;
	long long populationOfUS;

	cout << "Enter the world's population: ";
	cin >> populationOfWord;

	cout << "Enter the population of the US: ";
	cin >> populationOfUS;

	if (populationOfWord < 0) {
		cout << "Population of world cannot be a negative number. Please enter again: ";
		cin >> populationOfWord;
	}

	if (populationOfUS < 0) {
		cout << "Population of US cannot be a negative number. Please enter again: ";
		cin >> populationOfUS;
	}

	double rate = 100.0 * populationOfUS / populationOfWord;

	cout << "The population of the US is " << rate << "% of the world population." << endl;

	system("pause");

	return 0;
}