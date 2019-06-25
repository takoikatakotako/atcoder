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

// wip wip
int abc129_c() {

    lli N, M;
    cin >> N >> M;

    vector<lli> calc(N);
    calc[0] = 1;
    calc[1] = 2;

    for (int i = 2; i < N; ++i) {
        calc[i] = calc[i - 1] + calc[i - 2];
    }



    vector<lli> a(M + 2);
    a[0] = 0;
    for (int i = 1; i <= M; ++i) {
        cin >> a[i];
    }
    a[M + 1] = N;


    lli ans = 1;
    for (int i = 1; i <= M + 1; ++i) {
        lli distance = a[i] - a[i - 1] - 1;
        if (distance == 0) {
            continue;
        }
        ans = ans * calc[distance - 1];
        ans %= 1000000007;
    }


    cout << ans << endl;

}