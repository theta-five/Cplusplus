#include <iostream>
using namespace std;
#include <string>

void SumOfWords() {

	string str;
	cout << "Enter words (to stop, type the word done):";
	cin >> str;
	int sum = 0;
	while (str != "done") {
		sum++;
		cin >> str;
	}
	cout << "You entered a total of " << sum << " words." << endl;
	
}

int main() {

	SumOfWords();

	system("pause");

	return 0;
}