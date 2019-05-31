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

int abc127_b() {

    int r, D, x2000;
    cin >> r >> D >> x2000;

    int x = x2000;
    for (int i = 0; i < 10; ++i) {
        int xi = r * x - D;
        cout << xi << endl;
        x = xi;
    }
}