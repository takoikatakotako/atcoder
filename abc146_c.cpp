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
using ll = long long int;
using ll = long long;

ll getDigit(ll num) {
    return to_string(num).length();
}

ll getPrice(ll A, ll B, ll N) {
    return A * N + B * getDigit(N);
}

int main() {
    ll a, b, x;
    cin >> a >> b >> x;
    ll l = 0, r = 1000000001;

    while (r - l > 1) {
        ll c = (l + r) / 2;
        if (getPrice(a, b, c) <= x) {
            l = c;
        } else {
            r = c;
        }
    }
    cout << l << endl;
    return 0;
}
