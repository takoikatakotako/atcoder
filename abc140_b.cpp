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
#include <map>

#define rep(i, n) for (int i = 0; i < (n); ++i)

using namespace std;
using lli = long long int;
using ll = long long;

int main() {
    lli N;
    cin >> N;

    vector<lli> A(N);
    vector<lli> B(N);
    vector<lli> C(N-1);

    for (lli i = 0; i < N; ++i) {
        cin >> A[i];
    }
    for (lli i = 0; i < N; ++i) {
        cin >> B[i];
    }
    for (lli i = 0; i < N - 1; ++i) {
        cin >> C[i];
    }

    lli result = 0;

    for (lli i = 0; i < N; ++i) {
        lli index = A[i];
        result += B[index - 1];

        if (i != N - 1 && A[i] + 1 == A[i + 1]) {
            result += C[index - 1];
        }
    }

    cout << result << endl;
}
