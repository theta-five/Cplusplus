#include<iostream>
using namespace std;
#include"complex.h"

Complex::Complex() {

	r = 0.0;
	i = 0.0;
}

Complex::Complex(double re, double im) {
	r = re;
	i = im;
}

Complex Complex::operator+(const Complex& c) const {

	return Complex(r + c.r, i + c.i);

}

Complex Complex::operator-(const Complex& c) const {
		
	return Complex(r - c.r, i - c.i);
}

Complex Complex::operator*(const Complex& c) const {
				 
	double tem1;
	double tem2;

	tem1 = r * c.r - i * c.i;
	tem2 = r * c.i + i * c.r;

	return Complex(tem1, tem2);
}

Complex Complex::operator~() const {

	return Complex(r, -i);
}

Complex& operator*(const double x, Complex& c) {

	c.r *= x;
	c.i *= x;
	return c;
}

ostream& operator<<(ostream& os, Complex c) {

	os << "(" << c.r << "," << c.i << "i)";
	return os;
}

istream& operator>>(istream& is, Complex& c) {

	cout << "real: ";
	
	if (is >> c.r) {
		cout << "imaginary: ";
		is >> c.i;
	}
	

	return is;
}