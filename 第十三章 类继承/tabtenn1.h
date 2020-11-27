#ifndef TABTENN1_H_
#define TABTENN1_H_
#include<string>
using namespace std;


//base class

class TableTennisPlayer {

private:
	string firstName;
	string lastName;
	bool hasTable;

public:
	//TableTennisPlayer() = default;
	TableTennisPlayer(const string& fn = "none", const string& ln = "none", bool ht = false);
	void Name() const;
	bool HasTable() const { return hasTable; };
	void ResetTable(bool v) { hasTable = v; };
};


//derived class

class RatePlayer : public TableTennisPlayer {
	
private:
	unsigned rating;

public:
	//RatePlayer() = default;
	RatePlayer(unsigned r = 0, const string& fn = "none", const string& ln = "none", bool ht = false);
	RatePlayer(unsigned r, const TableTennisPlayer& t);
	unsigned Rating() const { return rating; }
	void ResetRating(unsigned r) { rating = r; }
};

#endif // !TABTENN1_H_
