#include <iostream>
#include <string>
#include <vector>

using namespace std;


int tenka1_2019_b() {
    int N, K;
    string S;

    cin >> N >> S >> K;

    string s = S.substr(K - 1, 1);

    for (int i = 0; i < N; ++i) {
        if (S.substr(i, 1) != s) {
            S.replace(i, 1, "*");
        }
    }

    cout << S << endl;

    return 0;
}

