#include <iostream>
using namespace std;

const int YEAR = 3;
const int MONTH = 12;

void Sale() {
	int count[YEAR][MONTH];
	int m = 0;
	for (int i = 0; i < YEAR; i++) {
		cout << "�������" << i + 1 << "�����������" << endl;
		for (int j = 0; j < MONTH; j++) {
			cout << "\t������" << j + 1 << "�µ���������";
			cin >> m;
			count[i][j] = m;
		}
	}

	int sum = 0;
	for (int i = 0; i < YEAR; i++) {
		int sumOfYear = 0;
		for (int j = 0; j < MONTH; j++)	{
			sumOfYear += count[i][j];
		}
		cout << "��" << i + 1 << "���������Ϊ��" << sumOfYear << endl;
		sum += sumOfYear;
	}

	cout << YEAR << "���������Ϊ��" << sum << endl;
}

int main() {

	Sale();

	system("pause");

	return 0;
}