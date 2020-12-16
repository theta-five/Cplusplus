#include<iostream>
using namespace std;
#include<array>

void test02() {

	const int size = 101;
	array<long double, size> fac = {0};

	fac[0] = fac[1] = 1;

	for (int i = 2; i < size; i++) {
		fac[i] = i * fac[i - 1];
	}

	for (int i = 0; i < size; i++) {
		cout << i << "! = " << fac[i] << endl;
	}

}

int main() {

	test02();

	system("pause");

	return 0;
}