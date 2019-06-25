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

int abc129_a() {

    int P, Q, R;
    cin >> P >> Q >> R;

    int sum = P + Q + R;
    cout << sum - max(max(P, Q), R) << endl;
}
