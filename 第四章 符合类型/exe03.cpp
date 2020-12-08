#include<iostream>
using namespace std;
#include<cstring>

int main() {

	const int SIZE = 50;
	char firstName[SIZE];
	char lastName[SIZE];
	char fullName[2 * SIZE];

	cout << "Enter your first name: ";
	cin.getline(firstName, SIZE);

	cout << "Enter your last name: ";
	cin.getline(lastName, SIZE);

	strcpy_s(fullName, lastName);
	strcat_s(fullName, ", ");
	strcat_s(fullName, firstName);

	cout << "Here's the information in a single string: " << fullName << endl;

	system("pause");

	return 0;
}