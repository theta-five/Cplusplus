#include<iostream>
using namespace std;
#include<string>

struct Student {

	string firstName;
	string lastName;
	char grade = 0;
	int age = 0;

};


void PrintStudent(const Student& stu);

int main() {

	Student stu;
	cout << "What is your first name ? ";
	getline(cin, stu.firstName);

	cout << "What is your last name ? ";
	getline(cin, stu.lastName);

	cout << "What letter grade do you deserve ? ";
	cin >> stu.grade;

	cout << "What is your age ? ";
	cin >> stu.age;

	PrintStudent(stu); getline(cin, stu.firstName);

	system("pause");

	return 0;
}

void PrintStudent(const Student& stu) {

	cout << "Name: " << stu.lastName << " , " << stu.firstName << endl;
	cout << "Grade: " << (char)(stu.grade + 1) << endl;
	cout << "Age: " << stu.age << endl;

}