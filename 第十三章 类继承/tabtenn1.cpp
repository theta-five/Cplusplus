#include<iostream>
using namespace std;
#include<string>
#include"tabtenn1.h"

TableTennisPlayer::TableTennisPlayer(const string& fn, const string& ln, bool ht) :
	firstName(fn), lastName(ln), hasTable(ht){

}

void TableTennisPlayer::Name() const{

	cout << lastName << ", " << firstName;
}

RatePlayer::RatePlayer(unsigned r, const string& fn, const string& ln, bool ht) :
	TableTennisPlayer(fn, ln, ht) {
	rating = r;
}

RatePlayer::RatePlayer(unsigned r, const TableTennisPlayer& t) :
	TableTennisPlayer(t), rating(r) {

}

