#include <iostream>
#include<math.h>
#include <vector>
#include <numeric>

using namespace std;

int abc101_b() {

    int N;
    cin >> N;

    string S = to_string(N);

    int num = 0;
    for (int i = 0; i < S.size(); ++i) {
        num += stoi(S.substr(i, 1).c_str());
    }

    if (N % num == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}