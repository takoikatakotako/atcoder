#include <iostream>
#include<math.h>
#include <vector>
#include <numeric>
#include <algorithm>
#include <sstream>

using namespace std;

int abc120_a() {
    int A, B, C;
    cin >> A >> B >> C;


    if (B > A * C) {
        cout << C << endl;
    } else {
        cout << B/ A << endl;
    }
}