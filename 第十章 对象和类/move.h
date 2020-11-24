#ifndef MOVE_H_
#define Move_H_

#include<string>

class Move {
public:
	Move(double a = 0, double b = 0);
	void showMove() const;
	Move add(const Move& m);

	//void reset(double a = 0, double b = 0);


private:
	double x;
	double y;
};

#endif // !MOVE_H_

