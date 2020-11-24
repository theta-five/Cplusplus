#include<iostream>
using namespace std;
#include<string>
#include"account.h"

Account::Account() {
	m_name = "name";
	m_ac = "0";
	m_count = 0.0;
}

Account::Account(const string name, const string ac, double count) {

	if (count < 0) {
		cout << "余额不能小于0.0" << endl;
		count = 0.0;
	}
	m_name = name;
	m_ac = ac;
	m_count = count;

}

void Account::show() const{
	cout << "账户姓名： " << this->m_name
		<< "\t账户账号： " << this->m_ac
		<< "\t账号存款： " << this->m_count << endl;
}

void Account::deposit(double x) {
	if (x <= 0) {
		cout << "请存入正确的金额。" << endl;
	}
	else {
		this->m_count += x;
	}
}

void Account::withdraw(double x) {
	if (x >= m_count || x <= 0) {
		cout << "请取出正确的金额。" << endl;
	}
	else {
		m_count -= x;
	}
}
