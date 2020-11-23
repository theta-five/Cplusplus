#include<iostream>
using namespace std;
void Func1();
void Func2();

int main() {

	
	Func1();
	Func1();

	Func2();
	Func2();

	system("pause");

	return 0;
}

void Func1() {
	cout << "Three blind mice." << endl;
}

void Func2() {
	cout << "See how they run." << endl;
}