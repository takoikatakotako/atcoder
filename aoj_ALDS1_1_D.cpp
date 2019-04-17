#include <iostream>
#include <string>
#include <vector>

using namespace std;

int aoj_ALDS1_1_D() {
    int N;
    cin >> N;
    vector<int> R(N);

    for (int i = 0; i < N; ++i) {
        cin >> R[i];
    }

    int maxBenefit = R[1] - R[0];
    int minNum = R[0];
    for (int i = 1; i < N; ++i) {

        if (R[i-1] < minNum) {
            minNum = R[i-1];
        }

        int benefit = R[i] - minNum;
        if (benefit > maxBenefit) {
            maxBenefit = benefit;
        }

    }

    cout << maxBenefit << endl;
}

