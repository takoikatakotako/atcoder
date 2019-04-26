#include <iostream>
#include<math.h>
#include <vector>
#include <numeric>

using namespace std;

int abc102_a() {

    int N;
    cin >> N;

    if (N % 2 == 0) {
        cout << N << endl;
    } else {
        cout << N * 2 << endl;
    }
}