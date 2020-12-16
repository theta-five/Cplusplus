#include<iostream>
using namespace std;

int sum(int a, int b) {

	if (a > b) {
		return sum(b, a);
	}

	int sum = 0;

	for (int i = a; i <= b; i++) {
		sum += i;
	}
	return sum;
}

int main() {
	
	cout << "Enter a: ";
	int a = 0;
	cin >> a;

	cout << "Enter b: ";
	int b = 0;
	cin >> b;

	cout << "The sum of between " << a << " and " << b << " is " << sum(a, b) << endl;

	system("pause");

	return 0;
}