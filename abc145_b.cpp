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
#include <map>

using namespace std;
using lli = long long int;
using ll = long long;

int main() {
    int N;
    string S;
    cin >> N >> S;

    if (N % 2 == 1) {
        cout << "No" << endl;
        return 0;
    }

    string leftS = S.substr(0, N / 2);
    string rightS = S.substr(N / 2, N - 1);

    if (leftS == rightS) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
