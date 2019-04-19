#include <iostream>
#include <string>
#include <vector>

using namespace std;

int abc098_c() {
    int N;
    cin >> N;

    string S;
    cin >> S;

    vector<int> counterWtoE(N);
    vector<int> counterEtoW(N);

    counterWtoE[0] = 0;
    counterEtoW[0] = 0;

    for (int i = 0; i < N - 1; ++i) {
        counterWtoE[i + 1] = counterWtoE[i];
        if (S.substr(i, 1) == "W") {
            ++counterWtoE[i + 1];
        }
    }

    reverse(S.begin(), S.end());

    for (int i = 0; i < N - 1; ++i) {
        counterEtoW[i + 1] = counterEtoW[i];
        if (S.substr(i, 1) == "E") {
            ++counterEtoW[i + 1];
        }
    }

    reverse(counterEtoW.begin(), counterEtoW.end());

    int min = N;
    for (int i = 0; i < N; ++i) {
        int num = counterWtoE[i] + counterEtoW[i];
        if (min > num) {
            min = num;
        }
    }
    cout << min << endl;
}

