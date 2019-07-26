#include <iostream>
#include<math.h>
#include <vector>
#include <numeric>
#include <sstream>

using namespace std;

// マップ系の問題のパース

void mapProblems() {
    int H, W;
    cin >> H >> W;
    vector <vector<string>> map(H, vector<string>(W));

    for (int i = 0; i < H; ++i) {
        string S;
        cin >> S;
        for (int j = 0; j < W; ++j) {
            map[i][j] = S[j];
        }
    }
}


// 文字列を int に変換

int stringToInt(string str) {
    int number = atoi(str.c_str());
    return number;
}


// 文字列を分割して vector に入れる

vector<string> split(const string &s, char delimiter) {
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

// ベクターの最小値を取得する
// unsigned long minElementIndex = min_element(temps.begin(),temps.end()) - temps.begin();


// GCD を求める
lli gcd(lli x, lli y) {
    if(y == 0) return x;
    return gcd(y, x%y);
}

// long long int で大きい方を取得する
lli max(lli a, lli b) {
    return  (a > b) ? a : b;
}

// 文字列中の文字数をカウント
long charCounter(string sentence, char character) {
    return count(sentence.cbegin(), sentence.cend(), character);
}

// 独自 struct のソート
