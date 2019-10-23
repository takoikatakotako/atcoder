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
using ll = long long;


int main() {
    string S;
    cin >> S;
    if (S == "Sunny") {
        cout << "Cloudy" << endl;

    } else if (S == "Cloudy") {
        cout << "Rainy" << endl;


    } else if (S == "Rainy") {
        cout << "Sunny" << endl;

    }

    return 0;
}
