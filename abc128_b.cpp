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

struct Shop {
    int id;
    string city;
    int price;

    bool operator<(const Shop &another) const {
        // return city < another.city;
        if (city != another.city) {
            return city < another.city;
        } else {
            return price > another.price;
        }
    };
} ;

int abc128_b() {

    int N;
    cin >> N;

    vector<Shop> array(N);
    for (int i = 0; i < N; ++i) {
        int id = i + 1;
        string s;
        int p;
        cin >> s >> p;
        Shop shop;
        shop.id = id;
        shop.city = s;
        shop.price = p;
        array[i] = shop;
    }

    sort(array.begin(), array.end());

    for (int i = 0; i < N; ++i) {
        cout << array[i].id << endl;
    }

    return 0;
}