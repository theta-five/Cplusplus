#include<iostream>
using namespace std;

/*
	��дһ��С����Ҫ���Զȡ��֡���ķ�ʽ����һ��γ�ȣ�Ȼ���Զ�Ϊ��λ��ʾ��γ�ȡ�
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