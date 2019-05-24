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

int abc116_b() {

    int s;
    cin >> s;

    vector<int> a;
    a.push_back(s);

    for (int i = 0; i <= 1000000; ++i) {
        int num = a[i];
        if (num % 2 == 0) {
            int n = num / 2;

            auto result = find(a.begin(), a.end(), n);
            if (result == a.end()) {
                // not found
                a.push_back(n);
            } else {
                cout << i + 2 << endl;
                return 0;
            }

        } else {
            int n = 3 * num + 1;

            auto result = find(a.begin(), a.end(), n);
            if (result == a.end()) {
                // not found
                a.push_back(n);
            } else {
                cout << i + 2 << endl;
                return 0;
            }
        }
    }
    return 0;
}