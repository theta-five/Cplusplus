#ifndef PORT_H_
#define PORT_H_
#include<iostream>
using namespace std;

class Port {
private:
	char* brand;
	char style[20];
	int bottle;

public:
	Port(const char* br = "none", const char* st = "none", int b = 0);
	Port(const Port& p);
	virtual ~Port();

	Port& operator=(const Port& p);
	Port& operator+=(int b);
	Port& operator-=(int b);
	int BottleCount() const { return bottle; }
	virtual void Show() const;
	friend ostream& operator<<(ostream& os, const Port& p);

};

class VintagePort : public Port{
private:
	char* nickName;
	int year;

public:
	VintagePort();
	VintagePort(const char* br, const char* st, int b, const char* nn, int y);
	VintagePort(const VintagePort& vp);
	~VintagePort();
	void setNickName(const char* nn) { 

		nickName = new char[strlen(nn) + 1];
		strcpy_s(nickName, strlen(nn) + 1, nn);
	}
	VintagePort& operator=(const VintagePort& vp);
	void Show() const;
	friend ostream& operator<<(ostream& os, const VintagePort& p);
};

#endif // !PORT_H_
