#ifndef PLORG_H_
#define PLORG_H_
using namespace std;
#include<string>

class Plorg {
public:
	Plorg(string na = "Plorga", int c = 0);

	void show() const;


private:
	string name;
	int CI = 0;
};


#endif