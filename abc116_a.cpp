#include <iostream>
#include<math.h>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int abc116_a() {

    vector<int> R(3);

    cin >> R[0] >> R[1] >> R[2];

    sort(R.begin(), R.end());
    cout << R[0] * R[1] / 2 << endl;
}