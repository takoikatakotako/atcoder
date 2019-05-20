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

int abc118_b() {

    int N, M;
    cin >> N >> M;

    vector<int> A(M + 1);
    for (int i = 0; i < M + 1; ++i) {
        A[i] = 0;
    }

    for (int i = 0; i < N; ++i) {
        int K;
        cin >> K;

        for (int j = 0; j < K; ++j) {
            int food;
            cin >> food;
            ++A[food];
        }
    }

    int counter = 0;
    for (int i = 0; i < M + 1; ++i) {
        if (A[i] == N) {
            ++counter;
        }
    }

    cout << counter << endl;
}