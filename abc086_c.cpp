#include <iostream>
#include <string>
#include <vector>

using namespace std;

int abc086_c() {

    int N;
    cin >> N;

    vector<int> tList(N + 1);
    vector<int> xList(N + 1);
    vector<int> yList(N + 1);

    tList[0] = 0;
    xList[0] = 0;
    yList[0] = 0;

    for (int i = 1; i <= N; ++i) {
        cin >> tList[i];
        cin >> xList[i];
        cin >> yList[i];
    }

    bool flg = true;
    for (int i = 1; i <= N; ++i) {
        int time = tList[i] - tList[i - 1];
        int x = xList[i] - xList[i - 1];
        int y = yList[i] - yList[i - 1];

        // 移動が無理な場合
        if (x + y > time) {
            flg = false;
            break;
        }

        // 偶奇が合わない場合
        if (abs(x + y) % 2 != time % 2) {
            flg = false;
            break;
        }
    }


    if (flg) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

