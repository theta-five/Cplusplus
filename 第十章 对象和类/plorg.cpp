#include<iostream>
using namespace std;
#include"plorg.h"

Plorg::Plorg(string na, int c) {
	if (na.size() > 19) {
		cout << "���Ʋ��ܳ���19���ַ�" << endl;
		na = "";
	}
	name = na;
	CI = c;
}

void Plorg::show() const{
	cout << "���ƣ� " << name
		<< "\t����ָ����" << CI << endl;
}