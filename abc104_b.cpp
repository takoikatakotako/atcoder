#include <iostream>
#include <math.h>
#include <vector>
#include <numeric>

using namespace std;

string replaceOtherStr(string &replacedStr, string from, string to) {
    const unsigned int pos = replacedStr.find(from);
    const int len = from.length();

    if (pos == string::npos || from.empty()) {
        return replacedStr;
    }

    return replacedStr.replace(pos, len, to);
}

int abc104_b() {

    string S;
    cin >> S;

    // 先頭が大文字のA
    if (S.substr(0, 1) != "A") {
        cout << "WA" << endl;
        return 0;
    }

    // 先頭から3文字と末尾から2文字の間にCが一個
    int counter = 0;
    for (int i = 2; i < S.size() - 1; ++i) {
        if (S.substr(i, 1) == "C") {
            ++counter;
        }
    }

    if (counter != 1) {
        cout << "WA" << endl;
        return 0;
    }

    // 全部小文字であることを判定
    // 大文字を小文字に置換
    S = replaceOtherStr(S, "A", "a");
    S = replaceOtherStr(S, "C", "c");

    for (int i = 0; i < S.size(); ++i) {
        char c = S[i];
        if (isupper(c)) {
            cout << "WA" << endl;
            return 0;
        }
    }
    cout << "AC" << endl;
    return 0;
}