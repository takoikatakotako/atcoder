#include <iostream>
#include <string>
#include <vector>

using namespace std;

int abc124_c() {

    string S;
    cin >> S;

    int N = S.size();


    // 最初が0のやつと比べる
    // 01010101

    //
    int zeroOneCounter = 0;
    for (int i = 0; i < N; ++i) {
        if (atoi(S.substr(i, 1).c_str()) != (i % 2)) {
            ++zeroOneCounter;
        }
    }
    int oneZeroCounter = 0;
    for (int i = 0; i < N; ++i) {
        if (atoi(S.substr(i, 1).c_str()) == (i % 2)) {
            ++oneZeroCounter;
        }
    }

    if (zeroOneCounter > oneZeroCounter) {
        cout << oneZeroCounter;
    } else {
        cout << zeroOneCounter;
    }
}
