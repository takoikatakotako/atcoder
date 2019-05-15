#include <iostream>
#include<math.h>
#include <vector>
#include <numeric>

using namespace std;

int abc108_a() {

    int K;
    cin >> K;

    if (K % 2 == 0) {
        int hanbun = K / 2;
        cout << hanbun * hanbun << endl;
    } else {
        int hanbun = K / 2;
        cout << hanbun * (hanbun + 1) << endl;
    };
}