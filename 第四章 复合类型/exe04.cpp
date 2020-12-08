#include<iostream>
using namespace std;
#include<string>

int main() {

	string firstName;
	string lastName;
	string fullName;

	cout << "Enter your first name: ";
	getline(cin, firstName);

	cout << "Enter your last name: ";
	getline(cin, lastName);

	fullName = lastName + ", " + firstName;

	cout << "Here's the information in a single string: " << fullName << endl;

	system("pause");

	return 0;
}