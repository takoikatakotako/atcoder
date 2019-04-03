#include <iostream>
#include <string>
#include <vector>


using namespace std;


int exawizards2019_b() {
    // 入力
    int N;
    string S;
    cin >> N >> S;


    int count = 0;
    for (int i = 0; i < N; ++i) {
        string str = S.substr(i, 1);
        if (str == "R") {
            count ++;
        };
    }

    if (count > (N / 2)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    };
}

