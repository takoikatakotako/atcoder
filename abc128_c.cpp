#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <queue>
#include <array>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <cassert>
#include <utility>
#include <functional>

using namespace std;
using lli = long long int;

string binary(lli bina){
    lli ans = 0;
    for (lli i = 0; bina>0 ; i++)
    {
        ans = ans+(bina%2)*pow(10,i);
        bina = bina/2;
    }
    return to_string(ans);
}

int abc128_c() {

    int N, M;
    cin >> N >> M;

    vector<int> kVec;
    vector<vector<int >> sVec;
    vector<int> pVec;

    for (int i = 0; i < M; ++i) {
        int k;
        cin >> k;
        kVec.push_back(k);

        vector<int > sVecRow;
        for (int j = 0; j < k; ++j) {
            int s;
            cin >> s;
            sVecRow.push_back(s);
        }
        sVec.push_back(sVecRow);
    }

    for (int i = 0; i < M; ++i) {
        int p;
        cin >> p;
        pVec.push_back(p);
    }


    // スイッチの状態に合わせて回す
    int result = 0;
    lli count = (lli)pow(2.0, N);
    for (lli i = 0; i < count; ++i) {

        string nishin = binary(i);
        lli length = (lli)nishin.length();

        for (int j = 0; j < N - length; ++j) {
            nishin = "0" + nishin;
        }

        vector<bool> swVec;
        length = (lli)nishin.length();
        for (lli j = 0; j < length; ++j) {
            string are = nishin.substr(length - j - 1, 1);
            if (are == "1") {
                swVec.push_back(true);
            } else {
                swVec.push_back(false);
            }
        }

        bool isLight = true;
        for (lli j = 0; j <M ; ++j) {
            int k = kVec[j];
            vector<int> vecvec = sVec[j];
            int counter = 0;
            for (int l = 0; l < k; ++l) {
                int index = vecvec[l];
                bool isOn = swVec[index - 1];
                if (isOn) {
                    ++counter;
                }
            }

            int p = pVec[j];
            if (counter % 2 == p) {
                // ついた
            } else {
                isLight = false;
                break;
            }
        }

        if (isLight) {
            ++result;
        }

    }

    cout << result << endl;

    return 0;
}