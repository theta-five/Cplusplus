#include<iostream>
using namespace std;
#include<string>
#include"account.h"
#include"move.h"
#include"plorg.h"

void test01() {
	Account a;
	a = { "张三", "120", -100 };

	Account b = { "李四", "110", 2000 };

	a.show();
	b.show();

	b.deposit(200);
	b.show();

	b.withdraw(300);
	b.show();
}

void test02() {

	Move point1(0, 0);
	point1.showMove();

	Move point2 = { 1, 3 };

	point1.add(point2);
	point1.showMove();

}

void test03() {
	Plorg p = { "Theta", 100 };
	p.show();

}


int main() {

	test03();

	system("pause");

	return 0;
}