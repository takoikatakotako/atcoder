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

int abc112_b() {

    double N, T;
    cin >> N >> T;

    vector<int > costs;
    for (int i = 0; i < N; ++i) {
        int c, t;
        cin >> c >> t;
        if (t <= T) {
            costs.push_back(c);
        }
    }

    if (costs.size() == 0) {
        cout << "TLE" << endl;
        return 0;
    }

    int min = *std::min_element(costs.begin(), costs.end());
    cout << min << endl;
}