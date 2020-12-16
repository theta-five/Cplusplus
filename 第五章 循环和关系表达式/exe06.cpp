#include <iostream>
using namespace std;

const int YEAR = 3;
const int MONTH = 12;

void Sale() {
	int count[YEAR][MONTH];
	int m = 0;
	for (int i = 0; i < YEAR; i++) {
		cout << "请输入第" << i + 1 << "年的销售量：" << endl;
		for (int j = 0; j < MONTH; j++) {
			cout << "\t请输入" << j + 1 << "月的销售量：";
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
		cout << "第" << i + 1 << "年的销售量为：" << sumOfYear << endl;
		sum += sumOfYear;
	}

	cout << YEAR << "年的总销量为：" << sum << endl;
}

int main() {

	Sale();

	system("pause");

	return 0;
}