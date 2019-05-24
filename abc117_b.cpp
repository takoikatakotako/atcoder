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

int abc117_b() {

    int N;
    cin >> N;

    vector<int> l(N);
    for (int i = 0; i < N; ++i) {
        cin >> l[i];
    }

    int max = *max_element(l.begin(), l.end());
    int sum = accumulate(l.begin(), l.end(), 0);

    if (max < sum - max) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}