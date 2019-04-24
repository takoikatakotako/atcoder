#include <iostream>
#include<math.h>

using namespace std;


int abc100_b() {

    long long D, N;

    cin >> D >> N;

    // 100 だけ特別
    if (N == 100) {
        cout << (N + 1) * (int) pow(100, D) << endl;
        return 0;
    }

    cout << N * (int) pow(100, D) << endl;

    return 0;
}
