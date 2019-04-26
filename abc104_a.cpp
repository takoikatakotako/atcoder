#include <iostream>
#include<math.h>
#include <vector>
#include <numeric>

using namespace std;

int abc104_a() {

    int R;
    cin >> R;

    if (R < 1200) {
        cout << "ABC" << endl;

    } else if (R < 2800) {
        cout << "ARC" << endl;

    } else {
        cout << "AGC" << endl;
    }
}