#include<iostream>
using namespace std;
#include<string>

int main() {

	string name;
	string dessert;

	cout << "Enter your name: " << endl;
	getline(cin, name);

	cout << "Enter your favorite dessert: " << endl;
	getline(cin, dessert);

	cout << "I have some delicious " << dessert << " for you, " << name << "." << endl;

	system("pause");

	return 0;
}