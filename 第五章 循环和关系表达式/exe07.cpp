#include <iostream>
using namespace std;
#include <string>

struct Car;

void PrintCar();

int main() {

	PrintCar();

	system("pause");

	return 0;
}

struct Car {

	string manu;
	int year = 0;

};

void PrintCar() {

	cout << "How many cars do you wish to catalog?";
	int size;
	cin >> size;
	cin.get();
	Car* arr = new Car[size];
	for (int i = 0; i < size; i++){

		cout << "Car #" << i + 1 << ":" << endl;
		cout << "Please enter the make: ";
		getline(cin, arr[i].manu);
		
		cout << "Please enter the year made: ";
		cin >> arr[i].year;
		cin.get();

	}

	cout << "Here is your collection:" << endl;
	for (int i = 0; i < size; i++) {
		cout << arr[i].year << " " << arr[i].manu << endl;
	}

	delete[] arr;
}