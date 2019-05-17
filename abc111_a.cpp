#include <iostream>
#include<math.h>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int abc111_a() {

    string n;
    cin >> n;

    for (int i = 0; i < n.size(); ++i) {
        string str = n.substr(i, 1);
        if (str == "9") {
            cout << "1";
        } else {
            cout << "9";
        }
    }
    cout << endl;
}