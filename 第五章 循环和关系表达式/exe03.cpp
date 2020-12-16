#include<iostream>
using namespace std;

void test03() {

	int num;
	int sum = 0;
	while (cin >> num) {
		sum += num;

		cout << "目前为止所输入数字的和： " << sum << endl;
	}
	
}

int main() {

	test03();

	system("pause");

	return 0;
}