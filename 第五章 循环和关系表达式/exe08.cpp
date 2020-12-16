#include <iostream>
using namespace std;
#include <cstring>

void SumOfWord() {

	char word[50];

	cout << "Enter words (to stop, type the word done):";
	cin >> word;
	int sum = 0;
	while (strcmp(word, "done")) {
		sum++;
		cin >> word;
	}

	cout << "You entered a total of " << sum << " words." << endl;
}

int main() {

	SumOfWord();

	system("pause");

	return 0;
}