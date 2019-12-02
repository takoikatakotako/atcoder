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

int main() {
    lli N, K;
    cin >> N >> K;

    vector<int> h(N);
    for (int i = 0; i < N; ++i) {
        cin >> h[i];
    }

    lli counter = 0;
    for (int i = 0; i < N; ++i) {
        if (h[i] >= K) {
            ++counter;
        }
    }

    cout << counter << endl;
    return 0;
}
