#include <iostream>
#include <string>
#include <vector>

using namespace std;

int abc087_c() {
    int N;
    cin >> N;

    vector<vector<int> > map(2, vector<int>(N));

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> map[i][j];
        }
    }

    // 左からの和
    vector<int> topSum(N);
    topSum[0] = map[0][0];
    for (int i = 1; i < N; ++i) {
        topSum[i] = topSum[i - 1] + map[0][i];
    }

    // 右からの和
    vector<int> bottomSum(N);
    bottomSum[N - 1] = map[1][N - 1];
    for (int i = N - 2; i >= 0; --i) {
        bottomSum[i] = bottomSum[i + 1] + map[1][i];
    }

    // 最大値を検索する
    int max = 0;
    for (int i = 0; i < N; ++i) {
        int num = topSum[i] + bottomSum[i];
        if (num > max) {
            max = num;
        }
    }

    cout << max << endl;
}

