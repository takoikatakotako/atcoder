#include <iostream>
#include<math.h>
#include <vector>
#include <numeric>

using namespace std;

int abc109_a() {

    int A, B;
    cin >> A >> B;

    if (A * B % 2 == 0) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    };
}