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

struct Task {
    lli A;
    lli B;
    bool operator<(const Task &another) const {
        return B < another.B;
    };
};


int abc131_d() {

    int N;
    cin >> N;

    vector<Task> tasks(N);
    for (int i = 0; i < N; ++i) {
        lli a, b;
        cin >> a >> b;
        Task task;
        task.A = a;
        task.B = b;
        tasks[i] = task;
    }

    sort(tasks.begin(), tasks.end());

    lli time = 0;
    for (int i = 0; i < N; ++i) {
        Task task = tasks[i];
        time += task.A;
        if (time <= task.B) {
            continue;
        } else {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}
