//#include<iostream>
//using namespace std;
//#include<string>
//#include"brass.h"
//
//Brass::Brass(const string& name, long an, double ba) :
//	fullName(name), acctNum(an), balance(ba) {
//
//}
//
//void Brass::Deposit(double amt) {
//
//	if (amt <= 0) {
//		cout << "amt must be a positive number" << endl;
//	}
//
//	balance += amt;
//}
//
//void Brass::Withdraw(double amt) {
//
//	if (amt <= 0) {
//		cout << "amt must be a positive number" << endl;
//	}
//	else if (amt > balance) {
//		cout << "amt cannot be greater than balance" << endl;
//	}
//
//	balance -= amt;
//}
//
//double Brass::Balance() const {
//
//	return balance;
//}
//
//void Brass::ShowAcct() const {
//
//	cout << "账户姓名： " << fullName
//		<< "\t账户账号： " << acctNum
//		<< "\t账户余额： " << balance << endl;
//}
//
//
//BrassPlus::BrassPlus(const string& name, long an, double ba, double ml, double r) :
//	Brass(name, an, ba), maxLoan(ml), rate(r) {
//
//}
//
//BrassPlus::BrassPlus(Brass& ba, double ml, double r) :
//	Brass(ba), maxLoan(ml), rate(r) {
//
//}
//
//void BrassPlus::ShowAcct() const {
//	Brass::ShowAcct();
//	cout << "最大透支额度： " << maxLoan
//		<< "\t欠款： " << owesBank
//		<< "\t利率： " << rate << endl;
//}
//
//void BrassPlus::Withdraw(double amt) {
//
//	double bal = Balance();
//	if (amt <= bal) {
//		Brass::Withdraw(amt);
//	}
//	else if (amt <= bal + maxLoan - owesBank) {
//		double ad = amt - bal;
//		owesBank += ad * (1.0 + rate);
//		cout << "透支金额： " << ad << endl;
//		cout << "利息： " << ad * rate << endl;
//		Deposit(ad);
//	Brass:Withdraw(amt);
//	}
//	else {
//		cout << "信用卡透支已达上限。" << endl;
//	}
//}