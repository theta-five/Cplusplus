#include<iostream>
using namespace std;

/*
	编写一个小程序，要求以度、分、秒的方式输入一个纬度，然后以度为单位显示该纬度。
*/

int main() {

	const double change = 60;
	
	int degrees = 0;
	int minutes = 0;
	int seconds = 0;

	cout << "Enter a latitude in degrees, minutes, and seconds: " << endl;
	cout << "First, enter the degrees: ";
	cin >> degrees;
	cout << "Next, enter the minutes of arc: ";
	cin >> minutes;
	cout << "Finally, enter the seconds of arc: ";
	cin >> seconds;

	double res = degrees + 1.0 * minutes / change + 1.0 * seconds / change / change;

	cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = " << res << " degrees"  << endl;

	system("pause");

	return 0;
}