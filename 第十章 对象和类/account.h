#ifndef ACCOUNT_H_
#define ACCOUNT_H_
#include<string>
using namespace std;

class Account {
public:
	Account();
	Account(const string name, const string ac, double count);
	void show() const;//��ʾ
	void deposit(double x);//��Ǯ
	void withdraw(double x);//ȡǮ

private:
	string m_name;
	string m_ac;
	double m_count;
};

#endif // !ACCOUNT_H_

