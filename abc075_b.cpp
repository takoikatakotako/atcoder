#include <iostream>
#include <string>
#include <vector>

using namespace std;

int abc075_b() {
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

    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            int count = 0;

            if (map[i][j] == "#") {
                cout << "#";
                continue;
            }

            // 左上
            // map[i-1][j-1] == "#"
            if (i > 0 && j > 0 && map[i-1][j-1] == "#") {
                ++count;
            }

            // 上
            // map[i-1][j] == "#"
            if (i > 0 && map[i-1][j] == "#") {
                ++count;
            }

            // 右上
            //map[i-1][j+1] == "#"
            if (i > 0 && j < W -1 && map[i-1][j+1] == "#") {
                ++count;
            }

            // 左
            // map[i][j-1] == "#"
            if (j > 0 && map[i][j-1] == "#") {
                ++count;
            }

            // 右
            // map[i][j+1] == "#"
            if (j < W - 1 && map[i][j+1] == "#") {
                ++count;
            }

            // 左下
            // map[i+1][j-1] == "#"
            if (i < H - 1 && j > 0 && map[i+1][j-1] == "#") {
                ++count;
            }

            // 下
            // map[i+1][j] == "#"
            if (i < H - 1 && map[i+1][j] == "#") {
                ++count;
            }

            // 右下
            // map[i+1][j+1] == "#"
            if (i < H - 1 && j < W - 1 && map[i+1][j+1] == "#") {
                ++count;
            }

            cout << count;
        }
        cout << endl;
    }
}

