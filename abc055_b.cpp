#include <iostream>
#include <string>
#include <vector>

using namespace std;

int num = 1000000007;

int abc055_b() {
    int N;
    cin >> N;

    long long power = 1;
    for (int i = 1; i <= N; ++i) {
        power = power * i;
        power = power % num;
    }

    cout << power;
}

