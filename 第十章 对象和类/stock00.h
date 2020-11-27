#ifndef STOCK00_H_
#define STOCK00_H_

#include<string>

class Stock {

private:
	string company;
	long shares;
	double shareVal = 0.0;
	double totalVal;
	void setTotal() {
		totalVal = shares * shareVal;
	}

public:
	void acquire(const string& co, long n, double pr);
	void buy(long num, double price);
	void sell(long num, double price);
	void updated(double price);
	void show();

	const Stock& topval(const Stock& s) const;


};



#endif // !STOCK00_H_
