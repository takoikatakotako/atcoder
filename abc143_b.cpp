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
    int N;
    cin >> N;

    vector<int> d(N);
    for (int i = 0; i < N; ++i) {
        cin >> d[i];
    }

    lli answer = 0;
    for (lli i = 0; i < N; ++i) {
        for (lli j = 0; j < N; ++j) {
            answer += d[i] * d[j];
        }
        answer -= d[i] * d[i];
    }

    cout << answer / 2 << endl;
    return 0;
}
