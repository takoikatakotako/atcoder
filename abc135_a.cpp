//
// Created by 小野 純平 on 2019-08-30.
//

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

int abc135_a() {

    lli A, B;
    cin >> A >> B;

    lli k = (A + B) / 2;
    if (abs(A - k) == abs(B - k)) {
        cout << k << endl;
    } else {
        cout << "IMPOSSIBLE" << endl;
    }

    return 0;
}
