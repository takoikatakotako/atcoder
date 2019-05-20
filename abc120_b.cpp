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

int abc120_b() {

    int A, B, K;
    cin >> A >> B >> K;

    int counter = 0;
    for (int i = 100; i <= 100; --i) {
        if (A % i == 0 && B % i == 0) {
            ++counter;
            if (counter == K) {
                cout << i << endl;
                return 0;
            }
        }
    }
}
