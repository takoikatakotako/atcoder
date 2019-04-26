#include <iostream>
#include<math.h>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int abc103_a() {

    vector<int> A(3);
    for (int i = 0; i < 3; ++i) {
        cin >> A[i];
    }

    sort(A.begin(), A.end(), greater<>());

    int num = 0;
    for (int i = 1; i < 3; ++i) {
        num += abs(A[i - 1] - A[i]);
    }

    cout << num << endl;

    return 0;
}