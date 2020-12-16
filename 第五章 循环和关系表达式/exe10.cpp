#include <iostream>
using namespace std;

void PrintStar(int n);

int main() {

    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    PrintStar(n);

    return 0;
}

void PrintStar(int n) {

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j < n - i - 1) {
                cout << "." << " ";
            }
            else {
                cout << "*" << " ";
            }


        }
        cout << endl;
    }

}
