#ifndef ACCOUNT_H_
#define ACCOUNT_H_
#include<string>
using namespace std;

class Account {
public:
	Account();
	Account(const string name, const string ac, double count);
	void show() const;//œ‘ æ
	void deposit(double x);//¥Ê«Æ
	void withdraw(double x);//»°«Æ

private:
	string m_name;
	string m_ac;
	double m_count;
};

#endif // !ACCOUNT_H_

