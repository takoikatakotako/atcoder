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

int abc110_b() {

    lli N, M, X, Y;
    cin >> N >> M >> X >> Y;

    vector<lli> x(N);
    for (int i = 0; i < N; ++i) {
        cin >> x[i];
    }

    vector<lli> y(M);
    for (int i = 0; i < M; ++i) {
        cin >> y[i];
    }

    lli xMax = *max_element(x.begin(), x.end());
    lli yMin = *min_element(y.begin(), y.end());
    
    if (X < Y && xMax < yMin && xMax < Y && yMin > X+1) {
        cout << "No War" << endl;
    } else {
        cout << "War" << endl;
    }
}