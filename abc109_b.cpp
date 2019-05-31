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

int abc109_b() {

    lli N;
    cin >> N;

    vector<string> history(N);

    bool flag = true;
    for (int i = 0; i < N; ++i) {
        string w;
        cin >> w;

        if (i == 0) {
            history[0] = w;
            continue;
        }

        string beforeLast = history[i - 1];
        beforeLast = beforeLast.substr(beforeLast.size() - 1, 1);

        string first = w.substr(0, 1);

        if (beforeLast != first) {
            flag = false;
            break;
        }

        auto result = find(history.begin(), history.end(), w);
        if (result != history.end()) {
            // found
            flag = false;
            break;
        }

        history[i] = w;
    }

    if (flag) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}