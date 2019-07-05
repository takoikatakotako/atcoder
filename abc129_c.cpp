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

#define rep(i, n) for (int i = 0; i < n; ++i)

int abc129_c() {
    int n, m;
    cin >> n >> m;
    vector<int> broken(n+1);
    rep(i,m) {
        int a;
        cin >> a;
        broken[a] = 1;
    }
    vector<int> dp(n+2);
    const int mod = 1000000007;
    dp[n] = 1;
    for (int i = n-1; i >= 0; i--) {
        if (broken[i]) {
            dp[i] = 0;
            continue;
        }
        dp[i] = (dp[i+1] + dp[i+2]) % mod;
    }
    cout << dp[0] << endl;
    return 0;
}
