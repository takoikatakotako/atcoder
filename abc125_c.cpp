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

lli gcd(lli x, lli y) {
    if (y == 0) return x;
    return gcd(y, x % y);
}

lli max(lli a, lli b) {
    return (a > b) ? a : b;
}

int abc125_c() {
    lli N;
    cin >> N;

    vector<lli> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    vector<lli> L(N + 1);
    vector<lli> R(N + 1);

    for (int i = 0; i < N; i++) {
        if (i != 0) {
            L[i + 1] = gcd(L[i], A[i - 1]);
        }
        R[N - 1 - i] = gcd(R[N - i], A[N - 1 - i]);
    }

    lli ans = 0;
    for (int i = 0; i < N; i++) {
        ans = max(ans, gcd(L[i + 1], R[i + 1]));
    }

    cout << ans << endl;
}
