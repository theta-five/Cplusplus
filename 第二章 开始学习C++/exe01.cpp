#include<iostream>  //包含头文件
using namespace std; //使用标准命名空间


int main() {

	string name;
	string address;

	cout << "Please enter your name : ";
	cin >> name;
	
	cout << "Please enter your address : ";
	cin >> address;

	cout << "Your name is " << name << "." << endl;
	cout << "Your address is " << address << "." << endl;

	system("pause");

	return 0;
}