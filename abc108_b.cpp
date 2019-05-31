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

int abc108_b() {

    lli x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2;

    lli x = x2 - x1;
    lli y = y2 - y1;

    x3 = x2 - y;
    y3 = y2 + x;
    x4 = x1 - y;
    y4 = y1 + x;

    cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
}