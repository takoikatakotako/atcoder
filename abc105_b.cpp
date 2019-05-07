#include <iostream>
#include<math.h>
#include <vector>
#include <numeric>

using namespace std;

int abc105_b() {

    int N;
    cin >> N;

    for (int i = 0; i < 100 / 7; ++i) {
        for (int j = 0; j < 100 / 4; ++j) {
            if (4 * i + 7 * j == N) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
}