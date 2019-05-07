#include <iostream>
#include<math.h>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int abc103_c() {

    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    int num = 0;
    for (int i = 0; i < N; ++i) {
        num += A[i] - 1;
    }

    cout << num << endl;
    
    return 0;
}