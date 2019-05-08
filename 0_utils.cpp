
#include <iostream>
#include<math.h>
#include <vector>
#include <numeric>

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