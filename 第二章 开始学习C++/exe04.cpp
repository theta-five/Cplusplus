#include<iostream>
using namespace std;
const unsigned int MONTHS = 12;

int main() {

	int age = 0;

	cout << "Enter your age: ";
	cin >> age;

	if (age <= 0) {
		cout << "The age must be a positive numbers. Please enter your age again: ";
		cin >> age;
	}

	cout << "The age contains " << MONTHS * age << " months." << endl;
 	
	system("pause");

	return 0;
}
