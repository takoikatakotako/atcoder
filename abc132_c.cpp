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

int abc132_c() {
    lli N;
    cin >> N;

    vector<lli> d(N);
    for (lli i = 0; i < N; ++i) {
        cin >> d[i];
    }

    sort(d.begin(), d.end());

    lli center = N / 2;
    lli abc = d[center - 1];
    lli arc = d[center];

    cout << arc - abc << endl;
    return 0;
}
