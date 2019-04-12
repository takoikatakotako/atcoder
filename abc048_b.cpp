#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int abc048_b() {
    long long int a, b, x;
    cin >> a >> b >> x;

    long long int aWaru = a / x;
    long long int bWaru = b / x;

    if (a % x == 0) {
        cout << bWaru - aWaru + 1;
    } else {
        cout << bWaru - aWaru;
    }
}
