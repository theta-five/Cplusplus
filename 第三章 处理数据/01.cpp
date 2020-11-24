#include<iostream>
using namespace std;

/*
	编写一个小程序，要求用户使用一个整数指出自己的身高（单位为英寸），然后将身高转换为英尺和英寸。
	该程序使用下划线字符来指示输入位置，另外，使用一个const符号常量来表示转换因子。
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