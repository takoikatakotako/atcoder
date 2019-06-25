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


int abc130_d() {

    lli N, K;
    cin >> N >> K;

    vector<lli> a(N);
    for (int i = 0; i < N; ++i) {
        cin >> a[i];
    }

    lli answer = 0;
    lli sum = 0;

    int r = 0;
    for (int l = 0; l < N; ++l) {

        while (sum < K) {
            if (r == N) {
                break;
            }
            else {
                sum += a[r];
                r++;
            }
        }
        if (sum < K) {
            break;
        }
        answer += N - r + 1;
        sum -= a[l];
    }
    cout << answer << endl;
    return 0;
}
