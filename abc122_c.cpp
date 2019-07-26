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
using ll = long long;

int abc122_c() {
    lli N, Q;
    cin >> N >> Q;

    string S;
    cin >> S;

    vector<lli> l(Q);
    vector<lli> r(Q);

    for (int i = 0; i < Q; ++i) {
        cin >> l[i] >> r[i];
    }

    // 累積和を計算
    vector<lli> count(N);
    lli counter = 0;
    count[0] = 0;
    for (int i = 1; i < N; ++i) {
        if (S[i] == 'C' && S[i - 1] == 'A') {
            ++counter;
        }
        count[i] = counter;
    }


    for (int i = 0; i < Q; ++i) {
        lli numL = l[i] - 1;
        lli numR = r[i] - 1;

        lli answer = count[numR] - count[numL];
        cout << answer << endl;
    }

    return 0;
}
