#include<iostream>
using namespace std;
#include"port.h"

Port::Port(const char* br, const char* st, int b) {

	brand = new char[strlen(br) + 1];
	strcpy_s(brand, strlen(br) + 1, br);//

	strcpy(style, st);//style是数组名，st是指针，均可表示数组的第一个元素地址 

	bottle = b;
}

Port::Port(const Port& p) {

	brand = new char[strlen(p.brand) + 1];
	strcpy_s(brand, strlen(p.brand) + 1, p.brand);

	strcpy(style, p.style);

	bottle = p.bottle;

}

Port::~Port() {

	if (brand != nullptr) {
		delete[] brand;
	}
}

Port& Port::operator=(const Port& p) {

	if (this == &p) {
		return *this;
	}

	delete[] brand;

	brand = new char[strlen(p.brand) + 1];
	strcpy_s(brand, strlen(p.brand) + 1, p.brand);

	strcpy(style, p.style);

	bottle = p.bottle;

	return *this;
}

Port& Port::operator+=(int b) {

	bottle += b;
	return *this;

}

Port& Port::operator-=(int b) {

	bottle -= b;
	return *this;
}

void Port::Show() const {

	cout << "Brand: " << brand << endl;
	cout << "Kind: " << style << endl;
	cout << "Bottles: " << bottle << endl;

}

ostream& operator<<(ostream& os, const Port& p) {

	os << p.brand << ", " << p.style << ", " << p.bottle;
	return os;

}

//VintagePort method

VintagePort::VintagePort():Port() {

	nickName = nullptr;
	year = 1900;
}

VintagePort::VintagePort(const char* br, const char* st, int b, const char* nn, int y): Port(br, st, b) {

	nickName = new char[strlen(nn) + 1];
	strcpy_s(nickName, strlen(nn) + 1, nn);

	year = y;
}

VintagePort::VintagePort(const VintagePort& vp): Port(vp) {

	nickName = new char[strlen(vp.nickName) + 1];
	strcpy_s(nickName, strlen(vp.nickName) + 1, vp.nickName);

	year = vp.year;
}

VintagePort::~VintagePort() {

	if (nickName != nullptr) {
		delete[] nickName;
	}
}

VintagePort& VintagePort::operator=(const VintagePort& vp) {

	if (this == &vp) {
		return *this;
	}

	Port::operator=(vp);
	delete[] nickName;
	nickName = new char[strlen(vp.nickName) + 1];
	strcpy_s(nickName, strlen(vp.nickName) + 1, vp.nickName);

	year = vp.year;
	return *this;
}

void VintagePort::Show() const {
	Port::Show();
	cout << "NickName: " << nickName << endl;
	cout << "Year: " << year << endl;
}

ostream& operator<<(ostream& os, const VintagePort& p) {

	os << (const Port &)p;
	os << " ," << p.nickName << ", " << p.year;
	return os;
}