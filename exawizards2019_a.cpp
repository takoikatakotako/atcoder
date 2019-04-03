#include <iostream>

using namespace std;

int exawizards2019_a() {
    // 入力
    int A, B, C;
    cin >> A >> B >> C;

    if (A == B && B == C && C == A) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}