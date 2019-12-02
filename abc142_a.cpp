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

    if (N % 2 == 0) {
        cout << 0.5 << endl;
        return 0;
    }

    int harf = N / 2;
    cout << double((harf + 1.0) / N) << endl;
    return 0;
}
