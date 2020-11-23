#include<iostream>
using namespace std;
void TimeShow(int hour, int minitue);

int main() {

	int hour = 0;
	int minitue = 0;

	cout << "Enter the number of hours: ";
	cin >> hour;
	cout << "Enter the number of minitues: ";
	cin >> minitue;

	TimeShow(hour, minitue);

	system("pause");

	return 0;
}

void TimeShow(int hour, int minitue) {

	if (hour >= 0 && hour < 24 && minitue >= 0 && minitue <= 59) {
		cout << "Time: " << hour << ":" << minitue << endl;
	}
	else {
		cout << "Please enter the correct number." << endl;
		return;
	}
}