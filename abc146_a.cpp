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
    string S;
    cin >> S;

    map<string, int> mp;    //  文字列 → 整数 の連想配列
    mp["SUN"] = 7;
    mp["MON"] = 6;
    mp["TUE"] = 5;
    mp["WED"] = 4;
    mp["THU"] = 3;
    mp["FRI"] = 2;
    mp["SAT"] = 1;

    cout << mp[S] << endl;
}
