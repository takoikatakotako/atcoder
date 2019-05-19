#include <iostream>
#include <string>
#include <vector>

using namespace std;

// 渡された文字をひっくりかえす
string reverse(string str) {
    // 一旦 0 をXに
    replace(str.begin(), str.end(), '0', 'X');
    replace(str.begin(), str.end(), '1', '0');
    replace(str.begin(), str.end(), 'X', '1');
    return str;
}

int main() {

    int N, K;
    cin >> N >> K;

    string S;
    cin >> S;


    string newS = S;
    for (int i = 0; i < N; ++i) {

        for (int j = 3; j < N; ++j) {

            // 上限を超えてしまった場合
            if (i + j >= N) {
                break;
            }

            newS = "3";

        }





    }
}
