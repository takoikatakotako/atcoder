#include <iostream>
#include<math.h>
#include <vector>
#include <numeric>
#include <algorithm>
#include <sstream>

using namespace std;

vector<string> split20190517(const string &s, char delimiter) {
    vector<string> elements;
    stringstream ss(s);
    string item;
    while (getline(ss, item, delimiter)) {
        if (!item.empty()) {
            elements.push_back(item);
        }
    }
    return elements;
}

 int stringToInt20190517(string str) {
    int number = atoi(str.c_str());
    return number;
}

int abc119_a() {
    string s;
    cin >> s;
    vector<string> strArray = split20190517(s, '/');

    int year = stringToInt20190517(strArray[0]);
    int month = stringToInt20190517(strArray[1]);
    int day = stringToInt20190517(strArray[2]);

    if (year <= 2019 && month <= 4 && day <= 30) {
        cout << "Heisei" << endl;
    } else {
        cout << "TBD" << endl;
    }
}