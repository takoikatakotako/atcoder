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

struct Shop {
    lli price;
    lli amount;

    bool operator<(const Shop &another) const {
        return price < another.price;
    };
} ;

int abc121_c() {

    lli N, M;
    cin >> N >> M;

    vector<Shop> shops(N);
    for (int i = 0; i < N; ++i) {
        lli price;
        cin >> price;

        lli amount;
        cin >> amount;

        Shop shop;
        shop.price = price;
        shop.amount = amount;
        shops[i] = shop;
    }

    sort(shops.begin(), shops.end());

    int i = 0;
    lli answer = 0;
    do {
        Shop shop = shops[i];
        lli price = shop.price;
        lli amount = shop.amount;

        bool flag = false;
        for (int j = 0; j < amount; ++j) {
            answer += price;
            --M;

            if (M == 0) {
                break;
            }
        }
        ++i;

    } while (M > 0);

    cout << answer << endl;

    return 0;
}
