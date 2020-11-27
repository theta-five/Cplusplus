#include<iostream>
using namespace std;
#include"stock00.h"

void Stock::acquire(const string& co, long n, double pr) {
	company = co;

	if (n < 0) {
		cout << "Number of shares cannot be negative; " << company << " should set to be 0." << endl;
		shares = 0;
	}
	else {
		shares = n;
	}

	shareVal = pr;
	setTotal();
}

void Stock::buy(long num, double price) {
	if (num < 0) {
		cout << "Number of shares cannot be negative. Transaction is aborted." << endl;
	}
	else {
		shares += num;
		shareVal = price;
		setTotal();
	}
}

void Stock::sell(long num, double price) {
	if (num < 0) {
		cout << "Number of shares cannot be negative. Transaction is aborted." << endl;
	}
	else if (num > shares) {
		cout << "You cannot sell more than you have! Transaction is aborted." << endl;
	}
	else {
		shares -= num;
		shareVal = price;
		setTotal();
	}
}

void Stock::updated(double price) {
	shareVal = price;
	setTotal();
}

void Stock::show() {

	cout << "Company: " << company
		 << " Shares: " << shares
		 << " Share Price: $" << shareVal
		 << " Total Worth: $" << totalVal << endl;
}

const Stock& Stock::topval (const Stock& s) const {

	if (s.totalVal > this->totalVal) {
		return s;
	}
	return *this;

}