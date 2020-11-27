#include<iostream>
using namespace std;
#include"cd.h"

Cd::Cd(const char* s1, const char* s2, int n, double p) {

	performers = new char[strlen(s1) + 1];
	strcpy(performers, s1);

	label = new char[strlen(s2) + 1];
	strcpy(label, s2);

	selection = n;

	playTime = p;

}

Cd::Cd(const Cd& c) {

	performers = new char[strlen(c.performers) + 1];
	strcpy(performers, c.performers);

	label = new char[strlen(c.label) + 1];
	strcpy(label, c.label);

	selection = c.selection;

	playTime = c.playTime;

}

Cd::Cd() {

	performers = nullptr;

	label = nullptr;

	selection = 0;
	playTime = 0.0;
}

Cd::~Cd() {
	if (performers != nullptr) {
		delete[] performers;
	}

	if (label != nullptr) {
		delete[] label;
	}

}

void Cd::Report() const {

	cout << "Performers: " << performers
		<< "\tLabel: " << label
		<< "\tSelection: " << selection
		<< "\tPlayTime: " << playTime;
}

Cd& Cd::operator=(const Cd& c) {

	if (this == &c) {
		return *this;
	}
	delete[] performers;
	delete[] label;

	performers = new char[strlen(c.performers) + 1];
	strcpy(performers, c.performers);

	label = new char[strlen(c.label) + 1];
	strcpy(label, c.label);

	selection = c.selection;

	playTime = c.playTime;

	return *this;

}

Classic::Classic():Cd() {

	mainX = nullptr;
}

Classic::Classic(const char* m, const char* s1, const char* s2, int n, double p):
	Cd(s1, s2, n, p){

	mainX = new char[strlen(m) + 1];
	strcpy(mainX, m);
}

Classic::Classic(const char* m, const Cd& c):
	Cd(c) {
	
	mainX = new char[strlen(m) + 1];
	strcpy(mainX, m);

}

Classic::Classic(const Classic& cl):Cd(cl) {

	mainX = new char[strlen(cl.mainX) + 1];
	strcpy(mainX, cl.mainX);

}

Classic& Classic::operator=(const Classic& cl) {

	if (this == &cl) {
		return *this;
	}

	delete[] mainX;
	Cd::operator=(cl);
	mainX = new char[strlen(cl.mainX) + 1];
	strcpy(mainX, cl.mainX);
	return *this;
}

void Classic::Report() const {
	Cd::Report();
	cout << "\tMainX: " << mainX << endl;
}

Classic::~Classic() {
	if (mainX != nullptr) {
		delete[] mainX;
	}
}