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

int abc130_c() {
    double W, H, x, y;
    cin >> W >> H >> x >> y;

    double S = W * H / 2;
    int count = (x == W / 2 && y == H / 2) ? 1 : 0;
    cout << S << " " << count << endl;
}