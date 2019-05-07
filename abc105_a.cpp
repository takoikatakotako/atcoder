#include <iostream>
#include<math.h>
#include <vector>
#include <numeric>

using namespace std;

int abc105_a() {

    int N, K;
    cin >> N >> K;

    if (N % K != 0) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
}