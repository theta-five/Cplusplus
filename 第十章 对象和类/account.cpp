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
		cout << "����С��0.0" << endl;
		count = 0.0;
	}
	m_name = name;
	m_ac = ac;
	m_count = count;

}

void Account::show() const{
	cout << "�˻������� " << this->m_name
		<< "\t�˻��˺ţ� " << this->m_ac
		<< "\t�˺Ŵ� " << this->m_count << endl;
}

void Account::deposit(double x) {
	if (x <= 0) {
		cout << "�������ȷ�Ľ�" << endl;
	}
	else {
		this->m_count += x;
	}
}

void Account::withdraw(double x) {
	if (x >= m_count || x <= 0) {
		cout << "��ȡ����ȷ�Ľ�" << endl;
	}
	else {
		m_count -= x;
	}
}
