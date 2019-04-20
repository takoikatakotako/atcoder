#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int tenka1_2019_c() {
    int N;
    string S;

    cin >> N >> S;

    vector<int> counterSharpToDot(N);
    vector<int> counterDotToSharp(N);

    counterSharpToDot[0] = 0;
    counterDotToSharp[0] = 0;

    for (int i = 0; i < N - 1; ++i) {
        counterSharpToDot[i + 1] = counterSharpToDot[i];
        if (S.substr(i, 1) == "#") {
            ++counterSharpToDot[i + 1];
        }
    }

    reverse(S.begin(), S.end());

    for (int i = 0; i < N - 1; ++i) {
        counterDotToSharp[i + 1] = counterDotToSharp[i];
        if (S.substr(i, 1) == ".") {
            ++counterDotToSharp[i + 1];
        }
    }

    reverse(counterDotToSharp.begin(), counterDotToSharp.end());

    int min = N;
    for (int i = 0; i < N; ++i) {
        int num = counterDotToSharp[i] + counterSharpToDot[i];
        if (min > num) {
            min = num;
        }
    }
    cout << min << endl;

    return 0;
}

