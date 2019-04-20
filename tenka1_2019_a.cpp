#include <iostream>
#include <string>
#include <vector>

using namespace std;


int tenka1_2019_a() {
    int A, B, C;
    cin >> A >> B >> C;


    // C が一番大さい
    if (A < C && B < C) {
        cout << "No" << endl;
        return 0;
    }

    // C が一番小さい
    if (C < A && C < B) {
        cout << "No" << endl;
        return 0;
    }

    cout << "Yes" << endl;

    return 0;
}

