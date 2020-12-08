#include<iostream>
using namespace std;
#include<array>


int main() {

	const int SIZE = 3;

	array<double, SIZE> grade;

	int size = SIZE;

	while (size) {

		cout << "Enter grade # " << SIZE - size << " : ";
		cin >> grade[SIZE - size];
		size--;
	}

	
	double sum = 0.0;
	for (double x : grade) {
		sum += x;
	}

	double average = sum / SIZE;

	cout << "The average of 40 meters is " << average << " seconds." << endl;

	system("pause");

	return 0;
}