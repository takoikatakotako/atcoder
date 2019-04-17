#include <iostream>
#include <string>
#include <vector>

using namespace std;

int abc060_b() {
    int A, B, C;
    cin >> A >> B >> C;

    for (int i = 0; i < B; ++i) {
        if ((A * i) % B == C) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}

