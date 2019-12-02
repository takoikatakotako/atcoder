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
    string S;
    cin >> S;

    bool flug = true;
    // 奇数
    for (int i = 0; i < S.size(); i += 2) {
        if (S[i] == 'R' || S[i] == 'U' || S[i] == 'D') {
        } else {
            flug = false;
        }
    }

    // 偶数
    for (int i = 1; i < S.size(); i += 2) {
        if (S[i] == 'L'  || S[i] == 'U' || S[i] == 'D') {
        } else {
            flug = false;
        }
    }

    if (flug) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}


