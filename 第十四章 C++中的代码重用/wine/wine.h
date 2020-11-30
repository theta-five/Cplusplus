#ifndef WINE_H_
#define WINE_H_
#include<string>
using namespace std;
#include<valarray>

class Wine {

private:
	string label;
	pair<valarray<int>, valarray<int>> yearAndNo;
	int n;

public:
	Wine();
	Wine(const char* l, int y, const int yr[], const int bot[]);
	Wine(const char* l, int y);
	void GetBottles();
	void Show() const;
	string& Label() { return label; }
	int Sum() const;

};

#endif // !WINE_H_

