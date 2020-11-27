#include<iostream>
using namespace std;
#include<string>
#include"tabtenn1.h"
#include"cd.h"
#include"port.h"


void test1() {

	TableTennisPlayer player1("Tara", "Boomdea", false);
	RatePlayer rplayer1(1140, "Mallory", "Duck", true);

	rplayer1.Name();
	if (rplayer1.HasTable()) {
		cout << " : has a table." << endl;
	}
	else {
		cout << " : hasn't a table." << endl;
	}

	player1.Name();
	if (player1.HasTable()) {
		cout << " : has a table." << endl;
	}
	else {
		cout << " : hasn't a table." << endl;
	}

	cout << "Name: ";
	rplayer1.Name();
	cout << "; Rating: " << rplayer1.Rating() << endl;

	RatePlayer rplayer2(1120, player1);
	cout << "Name: ";
	rplayer2.Name();
	cout << "; Rating: " << rplayer2.Rating() << endl;

	//可以使用基类指针或引用指向派生类的对象

	TableTennisPlayer& p = rplayer1;
	TableTennisPlayer* p1 = &rplayer2;

	cout << "Name: ";
	p.Name();
	//cout << "; Rating: " << p.Rating() << endl;//使用基类指针或引用指向派生类对象，只能调用基类方法，不能调用派生类方法
	cout << endl;


	cout << "Name: ";
	p1->Name();
	cout << endl;
	//RatePlayer& r = player1;//不能使用派生类的指针或引用指向基类的对象
	//RatePlayer* r1 = &player1;
}

void Bravo(Cd& c) {
	c.Report();
}
void test2() {

	Cd c1("Alfred Brendel", "Philips", 2, 57.17);// ("Capitol", 14, 35.5);
	c1.Report();
	cout << "==============" << endl;

	Classic c2 = Classic("Piano Sonata in B flat, Fantasia in C", "Alfred Brendel", "Philips", 2, 57.17);
	c2.Report();
	cout << "==============" << endl;

	Cd c3 = c1;
	c3.Report();
	cout << "==============" << endl;

	Classic c4 = c2;
	c4.Report();
	cout << "==============" << endl;

	Classic c5(c2);
	Bravo(c5);
	cout << "==============" << endl;

	Cd* pcd = &c1;
	pcd->Report();
	cout << "==============" << endl;

	pcd = &c2;
	pcd->Report();
	cout << "==============" << endl;

	Cd c9;
	c9.SetPerformers("pp");
	c9.SetLabel("ll");
	c9.Report();

}

void test3() {

	Port p1;
	p1.Show();
	cout << "==============" << endl;

	Port p2("Gallo", "tawny", 20);
	p2.Show();
	cout << "==============" << endl;
	
	p2.Show();
	p2 += 3; // operator+=
	cout << p2 << endl;
	Port p3 = p2;
	p3.Show();
	p3 -= 10;
	cout << p3 << endl;
	cout << "==============" << endl;
	
	VintagePort vp1("Gallo", "tawny", 20, "Hello", 1925);
	vp1.Show();
	cout << vp1 << endl;
	

	VintagePort vp2;
	vp2.setNickName("hhh");
	vp2.Show();

	cout << vp2 << endl;
}

int main() {

	test1();

	test2();

	test3();

	system("pause");

	return 0;
}