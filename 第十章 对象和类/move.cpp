#include<iostream>
using namespace std;
#include<string>
#include"move.h"

Move::Move(double a, double b) :
	x(a), y(b) {

}

void Move::showMove() const {
	cout << "��������Ϊ ��" << "x = " << x << ", y = " << y << endl;
}

Move Move::add(const Move& m) {
	
	x += m.x;
	y += m.y;
	return *this;
}

