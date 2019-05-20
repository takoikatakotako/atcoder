#include <iostream>
#include<math.h>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int main() {

    string S;
    cin >> S;


    int max = 0;
    int counter = 0;
    for (int i = 0; i < S.size(); ++i) {

        string str = S.substr(i, 1);
        if (str == "A" || str == "T" || str == "C" || str == "G") {
            ++counter;
        } else {
            if (counter > max) {
                max = counter;
                counter = 0;
            }
        }

    }

    cout << max << endl;
}