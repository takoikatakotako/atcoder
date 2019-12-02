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
    int A, B;
    cin >> A >> B;

    if (A - 2 * B > 0) {
        cout << A - 2 * B << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}
