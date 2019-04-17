#include <iostream>
#include <string>
#include <vector>

using namespace std;

int abc124_b() {

    int N;
    cin >> N;

    vector<int> H(N + 1);

    H[0] = 0;
    for (int i = 1; i <= N; ++i) {
        cin >> H[i];
    }

    int counter = 0;
    for (int i = 1; i <= N; ++i) {

        bool  topFlg = true;
        for (int j = 0; j < i; ++j) {
            if (H[j] > H[i]) {
                topFlg = false;
                break;
            }
        }

        if (topFlg) {
            ++counter;
        }
    }

    cout << counter;
}

