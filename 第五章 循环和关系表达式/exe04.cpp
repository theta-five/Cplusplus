#include<iostream>
using namespace std;

void test04() {

	int i = 1;

	double sum1 = 110;
	double sum2 = 105;

	while (sum1 > sum2) {
		sum1 += 10;
		sum2 *= 1.05;
		i++;
	}

	cout << sum1 << endl;
	cout << sum2 << endl;
	cout << i << endl;
}

int main() {

	test04();

	system("pause");

	return 0;
}