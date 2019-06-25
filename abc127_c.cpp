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

int abc127_c() {
    lli N, M;
    cin >> N >> M;

    vector<lli> L(M);
    vector<lli> R(M);

    for (int i = 0; i < M; ++i) {
        cin >> L[i];
        cin >> R[i];
    }

    lli lMax = *max_element(L.begin(), L.end());
    lli rMin = *min_element(R.begin(), R.end());

    if (lMax <= rMin) {
        cout << rMin - lMax + 1 << endl;
    } else {
        cout << 0 << endl;
    }
}