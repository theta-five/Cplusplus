#include<iostream>
using namespace std;

/*
	��дһ��С����Ҫ���û�ʹ��һ������ָ���Լ�����ߣ���λΪӢ�磩��Ȼ�����ת��ΪӢ�ߺ�Ӣ�硣
	�ó���ʹ���»����ַ���ָʾ����λ�ã����⣬ʹ��һ��const���ų�������ʾת�����ӡ�
*/

int main() {

	const int change = 12;
	int height = 0;

	cout << "Please enter your height:___\b\b\b";
	cin >> height;

	if (height <= 0) {
		cout << "The height must be a positive number. Please enter your height again:___\b\b\b";
		cin >> height;
	}

	int foot = height / change;
	int inch = height % change;

	if (!inch) {
		cout << "Your height is " << foot << " foot." << endl;
	}
	else {
		cout << "Your height is " << foot << " foot and " << inch << " inch." << endl;
	}

	system("pause");

	return 0;
}