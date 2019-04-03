#include <iostream>
#include<math.h>

using namespace std;


int abc081_a() {
    string s;
    cin >> s;

    int count = 0;
    if (s[0] == '1') ++count;
    if (s[1] == '1') ++count;
    if (s[2] == '1') ++count;

    cout << count << endl;
}
