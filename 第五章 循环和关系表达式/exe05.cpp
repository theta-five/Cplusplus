#include <iostream>
using namespace std;

int main() {

    const char* month[] = { "һ", "��", "��", "��","��", "��", "��", "��","��", "ʮ", "ʮһ", "ʮ��" };
    int count[12];

    for (int i = 0; i < 12; i++) {
        cout << "������" << month[i] << "�µ���������";
        cin >> count[i];

    }

    int sum = 0;
    for (int x : count) {
        sum += x;
    }

    cout << "һ���������Ϊ��" << sum << endl;

    return 0;
}
