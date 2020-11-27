#ifndef BRASS_H_
#define BRASS_H_
#include<string>

using namespace std;

class Brass {
private:

	string fullName;
	long acctNum;
	double balance;

public:
	Brass(const string& name = "Null", long an = -1, double ba = 0.0);
	void Deposit(double amt);
	virtual void Withdraw(double amt);
	double Balance() const;
	virtual void ShowAcct() const;
	virtual ~Brass() {};
};

class BrassPlus : public Brass {

private:
	double maxLoan;
	double rate;
	double owesBank;

public:
	BrassPlus(const string& name = "Null", long an = -1, double ba = 0.0, double ml = 500, double r = 0.11125);
	BrassPlus(Brass& ba, double ml = 500, double r = 0.11125);
	void ShowAcct() const;
	void Withdraw(double amt);
	void ResetMax(double m) { maxLoan = m; }
	void ResestRate(double r) { rate = r; }
	void ResetOwes() { owesBank = 0; }
};


#endif // !BRASS_H_

