#include <iostream>
#include<math.h>

using namespace std;


int abc124_a() {
    int A, B;
    cin >> A >> B;

    if (A == B) {
        cout << 2 * A;
    } else if (A > B) {
        cout << 2 * A - 1;
    } else {
        cout << 2 * B - 1;
    }
}
