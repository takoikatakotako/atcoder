#include <iostream>
#include<math.h>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int abc102_c() {

    int N;
    cin >> N;

    vector<long long> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    vector<long long> B(N);
    for (int i = 0; i < N; ++i) {
        B[i] = A[i] - (i + 1);
    }

    sort(B.begin(), B.end());

    long long centerIndex = B.size() / 2;
    long long b = B[centerIndex];

    long long num = 0;
    for (int i = 0; i < N; ++i) {
        num += abs(B[i] - b);
    }

    cout << num << endl;
    return 0;
}