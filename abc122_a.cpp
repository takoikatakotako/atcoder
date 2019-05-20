#include <iostream>
#include<math.h>
#include <vector>
#include <numeric>
#include <algorithm>
#include <sstream>

using namespace std;

int abc122_a() {
    string b;
    cin >> b;

    if (b == "A") {
        cout << "T" << endl;
    } else if (b == "T") {
        cout << "A" << endl;
    } else if (b == "C") {
        cout << "G" << endl;
    } else if (b == "G") {
        cout << "C" << endl;
    }
}