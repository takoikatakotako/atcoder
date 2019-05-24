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

int abc115_b() {

    int N;
    cin >> N;

    vector<int> p(N);
    for (int i = 0; i < N; ++i) {
        cin >> p[i];
    }

    int max = *max_element(p.begin(), p.end());
    int sum = accumulate(p.begin(), p.end(), 0);

    cout << sum - max / 2 << endl;
}