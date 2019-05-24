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

int abc114_b() {

    string S;
    cin >> S;

    vector<int> nums;

    for (int i = 0; i < S.size() - 2; ++i) {
        string str = S.substr(i, 3);
        int num = atoi(str.c_str());
        nums.push_back(abs(753 - num));
    }

    int min = *std::min_element(nums.begin(), nums.end());
    cout << min << endl;
}