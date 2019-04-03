#include <iostream>
#include<math.h>

using namespace std;


int abc086_a() {
    int a, b;
    cin >> a >> b;

    if (a * b % 2 == 0) {
        cout << "Even" << endl;
    } else {
        cout << "Odd" << endl;
    }
}
