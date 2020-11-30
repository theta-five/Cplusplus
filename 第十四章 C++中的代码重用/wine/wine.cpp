#include<iostream>
using namespace std;
#include"wine.h"

Wine::Wine() {
	label = "no label";
	unsigned n = 0;
	yearAndNo = { {0}, {0} };
}

Wine::Wine(const char* l, int y, const int yr[], const int bot[]) :
	label(l), n(y) {
	valarray<int> years(n);
	valarray<int> bottles(n);
	
	for (int i = 0; i < n; i++) {
		years[i] = yr[i];
		bottles[i] = bot[i];
	}

	yearAndNo = { years, bottles };
	
}

Wine::Wine(const char* l, int y) :
	label(l), n(y) {
	valarray<int> years(n);
	valarray<int> bottles(n);
	yearAndNo = { years, bottles };
}

void Wine::GetBottles() {

	cout << "Enter " << label << " data for " << n << " year(s):" << endl;
	
	for (int i = 0; i < n; i++) {
		cout << "Enter year: ";
		cin >> yearAndNo.first[i];
		while (yearAndNo.first[i] <= 0){
			cout << "The year must be a positive number.Enter year again: ";
			cin >> yearAndNo.first[i];
		}
		cout << "Enter bottles for that year: ";
		cin >> yearAndNo.second[i];
		while (yearAndNo.second[i] < 0){
			cout << "The year must be a positive number.Enter bottles again: ";
			cin >> yearAndNo.second[i];
		}
	}
}

void Wine::Show() const {

	cout << "Wine: " << label << endl;
	cout << "\tYear" << "\tBottles" << endl;
	for (int i = 0; i < n; i++) {
		cout << "\t" << yearAndNo.first[i]
			<< "\t" << yearAndNo.second[i] << endl;
	}
}

int Wine::Sum() const {

	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += yearAndNo.second[i];
	}
	return sum;

}