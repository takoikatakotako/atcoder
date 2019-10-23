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
    lli A, B;
    cin >> A >> B;

    if (A + B > A - B) {
        if (A + B > A * B) {
            cout << A + B << endl;
        } else {
            cout << A * B << endl;
        }
    } else {
        if (A - B > A * B) {
            cout << A - B << endl;
        } else {
            cout << A * B << endl;
        }
    }
    return 0;
}
