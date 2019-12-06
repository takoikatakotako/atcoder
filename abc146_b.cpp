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

    for(int i = 0 ; i < S.length() ; i++) {
        int x = S[i] - 'A';
        x = (x + N) % 26;
        S[i] = x + 'A';
    }
    cout << S << endl;
}
