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

int abc119_b() {

    int N;
    cin >> N;

    vector<double> x(N);
    vector<string> u(N);

    for (int i = 0; i < N; ++i) {
        cin >> x[i];
        cin >> u[i];
    }


    double sum = 0;
    for (int i = 0; i < N; ++i) {
        if (u[i] == "BTC") {
            sum += 380000.0 * x[i];
        } else {
            sum += x[i];
        }
    }
    cout << sum << endl;
}