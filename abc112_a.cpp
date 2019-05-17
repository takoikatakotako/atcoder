#include <iostream>
#include<math.h>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int abc112_a() {

    int n, A, B;
    cin >> n;

    if (n == 1) {
        cout << "Hello World" << endl;
        return 0;
    }

    cin >> A >> B;
    cout << A + B << endl;
}