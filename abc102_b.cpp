#include <iostream>
#include<math.h>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int abc102_b() {

    int N;
    cin >> N;

    vector<long long> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    long long min = *std::min_element(A.begin(), A.end());
    long long max = *std::max_element(A.begin(), A.end());

    cout << max - min << endl;
}