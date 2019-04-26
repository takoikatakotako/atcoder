#include <iostream>
#include<math.h>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int abc103_b() {

    int N;
    cin >> N;

    string S, T;
    cin >> S >> T;

    long length = S.size();
    for (int i = 0; i < length; ++i) {

        // 一個ずらす
        string first = S.substr(0, 1);
        string last = S.substr(length - 1, 1);
        S = S.substr(1, length - 1) + first;

        if (S == T) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}