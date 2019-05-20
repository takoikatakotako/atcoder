#include <iostream>
#include<math.h>
#include <vector>
#include <numeric>
#include <algorithm>
#include <sstream>

using namespace std;

int abc123_a() {
    int a, b, c, d, e, k;
    cin >> a >> b >> c >> d >> e >> k;

    bool flag = true;

    if (abs(a - b) > k) {
        flag = false;
    }

    if (abs(a - c) > k) {
        flag = false;
    }

    if (abs(a - d) > k) {
        flag = false;
    }

    if (abs(a - e) > k) {
        flag = false;
    }


    if (abs(b - c) > k) {
        flag = false;
    }

    if (abs(b - d) > k) {
        flag = false;
    }

    if (abs(b - e) > k) {
        flag = false;
    }

    if (abs(c - d) > k) {
        flag = false;
    }

    if (abs(c - e) > k) {
        flag = false;
    }

    if (abs(d - e) > k) {
        flag = false;
    }

    if (flag) {
        cout << "Yay!" << endl;
    } else {
        cout << ":(" << endl;
    }
}