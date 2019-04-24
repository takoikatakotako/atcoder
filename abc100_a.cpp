#include <iostream>
#include<math.h>

using namespace std;


int abc100_a() {

    int A, B;

    cin >> A >> B;

    int amari = 16 - A - B;
    int sa = abs(A - B);

    if (sa > amari) {
        cout << ":(" << endl;
    } else {
        cout << "Yay!" << endl;
    }

    return 0;
}
