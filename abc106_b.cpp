#include <iostream>
#include<math.h>
#include <vector>
#include <numeric>

using namespace std;

int abc106_b() {

    int N;
    cin >> N;

    int numCounter = 0;
    for (int i = 1; i <= N; ++i) {

        int counter = 0;
        for (int j = 1; j <=i; j+=2) {
            if (i % j == 0) {
                ++counter;
            }
        }

        if (counter == 8) {
            ++numCounter;
        }
    }
    cout << numCounter << endl;
}