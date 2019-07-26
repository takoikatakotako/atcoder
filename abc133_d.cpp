#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <queue>
#include <array>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <cassert>
#include <utility>
#include <functional>

using namespace std;
using lli = long long int;

int abc133_d() {
    lli N;
    cin >> N;

    vector<lli> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    vector<lli> X(N);

    X[0] = 0;
    for (int i = 0; i < N; ++i) {
        X[0] += A[i];
        if (i % 2 != 0) {
            X[0] -= 2 * A[i];
        }
    }

    for (int i = 1; i < N; ++i) {
        X[i] = 2 * A[i - 1] - X[i - 1];
    }

    for (int i = 0; i < N; ++i) {
        cout << X[i] << " ";
    }
    cout << endl;

    return 0;
}
