#ifndef COMPLEX0_H_
#define COMPLEX0_H_

class Complex {

	friend ostream& operator<<(ostream& os, Complex c);
	friend istream& operator>>(istream& is, Complex& c);
	friend Complex& operator*(const double x, Complex& c);

public:
	Complex();
	Complex(double re, double im);
	Complex operator+(const Complex& c) const;
	Complex operator-(const Complex& c) const;
	Complex operator*(const Complex& c) const;
	Complex operator~() const;

private:
	double r;
	double i;
};


#endif // !COMPLEX0_H_
