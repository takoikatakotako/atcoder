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


long charCounter(string sentence, char character) {
    return count(sentence.cbegin(), sentence.cend(), character);
}

int abc132_a() {
    string S;
    cin >> S;

    if ((charCounter(S, S[0]) == 2) && (charCounter(S, S[1]) == 2) &&
        (charCounter(S, S[2]) == 2) && (charCounter(S, S[3]) == 2)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}

