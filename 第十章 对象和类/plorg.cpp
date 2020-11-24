#include<iostream>
using namespace std;
#include"plorg.h"

Plorg::Plorg(string na, int c) {
	if (na.size() > 19) {
		cout << "名称不能超过19个字符" << endl;
		na = "";
	}
	name = na;
	CI = c;
}

void Plorg::show() const{
	cout << "名称： " << name
		<< "\t满意指数：" << CI << endl;
}