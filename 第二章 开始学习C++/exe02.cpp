#include<iostream>
using namespace std;
const int RATE = 200;

int main() {

	int distance = 0;
	cout << "Please the distance with long unit: ";
	cin >> distance;

	if (distance < 0) {
		cout << "The distance cannot be a negative numbers. Please enter your age again: ";
		cin >> distance;
	}

	cout << "The distance is " << RATE * distance << "Y." << endl;

	system("pause");

	return 0;
}