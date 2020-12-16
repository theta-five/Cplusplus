#include <iostream>
using namespace std;

int main() {

    const char* month[] = { "一", "二", "三", "四","五", "六", "七", "八","九", "十", "十一", "十二" };
    int count[12];

    for (int i = 0; i < 12; i++) {
        cout << "请输入" << month[i] << "月的销售量：";
        cin >> count[i];

    }

    int sum = 0;
    for (int x : count) {
        sum += x;
    }

    cout << "一年的销售量为：" << sum << endl;

    return 0;
}
