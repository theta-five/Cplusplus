#include<iostream>
using namespace std;

// �˴�hour���Ϊ23�� minute���Ϊ59�� second���Ϊ59�� �������������Ϊunsigned

int main() {

	const unsigned HOURSOFDAY = 24;
	const unsigned MINUTESOFHOUR = 60;
	const unsigned SECONDSOFMINUTE = 60;

	long seconds;
	cout << "Enter the number of seconds: ";
	cin >> seconds;

	if (seconds < 0) {
		cout << "Seconds cannot be a negative number. Please enter seconds again: ";
		cin >> seconds;
	}


	int day = seconds / HOURSOFDAY / MINUTESOFHOUR / SECONDSOFMINUTE;

	unsigned hour = (seconds % (HOURSOFDAY * MINUTESOFHOUR * SECONDSOFMINUTE)) / (MINUTESOFHOUR * SECONDSOFMINUTE);

	unsigned minute = ((seconds % (HOURSOFDAY * MINUTESOFHOUR * SECONDSOFMINUTE)) % (MINUTESOFHOUR * SECONDSOFMINUTE)) / SECONDSOFMINUTE;

	unsigned second = ((seconds % (HOURSOFDAY * MINUTESOFHOUR * SECONDSOFMINUTE)) % (MINUTESOFHOUR * SECONDSOFMINUTE)) % SECONDSOFMINUTE;

	cout << seconds << " seconds = " << day << " days, " << hour << " hours, " << minute << " minutes, " << second << " seconds" << endl;

	system("pause");

	return 0;
}