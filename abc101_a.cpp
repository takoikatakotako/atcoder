#include <iostream>
#include<math.h>
#include <vector>
#include <numeric>

using namespace std;

int abc101_a() {

    string S;
    cin >> S;

    int num = 0;
    for (int i = 0; i < S.size(); ++i) {
        string sss = S.substr(i, 1);
        if (sss == "+") {
            ++num;
        } else {
            --num;
        }
    }

    cout << num << endl;
    return 0;
}