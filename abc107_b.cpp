#include <iostream>
#include<math.h>
#include <vector>
#include <numeric>

using namespace std;

int abc107_b() {

    int H, W;
    cin >> H >> W;

    vector< vector<string> > map(H, vector<string>(W));

    for (int i = 0; i < H; ++i) {
        string S;
        cin >> S;
        for (int j = 0; j < W; ++j) {
            map[i][j] = S[j];
        }
    }

    // row が全部 . の場合は消す
    for (int i = 0; i < H; ++i) {
        bool isFind = false;
        for (int j = 0; j < W; ++j) {
            if (map[i][j] == "#") {
                isFind = true;
            }
        }

        if (isFind) {
            continue;
        }

        // delete row
        map.erase(map.begin() + i);
        --H;
        --i;
    }

    // column が全部 . の場合は消す
    for (int i = 0; i < W; ++i) {


        bool isFind = false;
        for (int j = 0; j < H; ++j) {
            if (map[j][i] == "#") {
                isFind = true;
            }
        }

        if (isFind) {
            continue;
        }

        // delete column
        for (int j = 0; j < H; ++j) {
            map[j].erase(map[j].begin() + i);
        }
        --W;
        --i;
    }

    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            cout << map[i][j];
        }
        cout << endl;
    }

    return 0;
}