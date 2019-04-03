#include <iostream>
#include<math.h>

using namespace std;


int abc087_b() {
    int A, B, C, X;
    cin >> A >> B >> C >> X;

    int counter = 0;
    for (int i = 0; i <= A; ++i) {
        for (int j = 0; j <= B; ++j) {
            for (int k = 0; k <= C; ++k) {
                if (500 * i + 100 * j + 50 * k == X) {
                    ++ counter;
                }
            }
        }
    }

    cout << counter << endl;
}
