#include<iostream>
using namespace std;

/*
	��дһ��С����Ҫ���Լ�Ӣ�߼�Ӣ��ķ�ʽ������ߣ����԰�Ϊ��λ�������ء��ó��򱨸�BMI.
*/

int main() {

	const double changeOfHeight = 0.0254;
	const double changeOfMass = 2.2;
	const int changeOfInch = 12;
	double foot = 0;
	double inch = 0;
	double mass = 0;
	double BMI = 0;
	double height = 0;

	cout << "Please enter your height in foot and inch:___\b\b\b ";
	cin >> foot >> inch;
	
	height = (foot + inch / changeOfInch) * changeOfHeight;

	cout << "Please enter your mass:___\b\b\b ";
	cin >> mass;
	
	BMI = mass / changeOfMass / (height * height);

	cout << "Your BMI is " << BMI << "." << endl;

	system("pause");

	return 0;
}