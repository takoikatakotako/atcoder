#include <iostream>
#include<math.h>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int abc118_a() {

    int A, B;

    cin >> A;
    cin >> B;

    if (B % A == 0) {
        cout << A + B << endl;
    } else {
        cout << B - A << endl;
    }
}