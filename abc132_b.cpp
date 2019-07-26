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

int abc132_b() {
    long n;
    cin >> n;

    vector<long> p(n);
    for (long i = 0; i < n; ++i) {
        cin >> p[i];
    }

    int counter = 0;
    for (long i = 1; i < n - 1; ++i) {
        vector<long> check(3);
        check[0] = p[i - 1];
        check[1] = p[i];
        check[2] = p[i + 1];
        sort(check.begin(), check.end());
        if (check[1] == p[i]) {
            ++counter;
        }
    }

    cout << counter << endl;

    return 0;
}
