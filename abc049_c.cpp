#include <iostream>
#include <string>
#include <vector>

using namespace std;

int abc049_c() {

    string S;
    cin >> S;

    reverse(S.begin(), S.end());

    string eraser = "eraser";
    string erase = "erase";
    string dreamer = "dreamer";
    string dream = "dream";

    reverse(eraser.begin(), eraser.end());
    reverse(erase.begin(), erase.end());
    reverse(dreamer.begin(), dreamer.end());
    reverse(dream.begin(), dream.end());

    do {

        int flg = false;

        if (S.substr(0, eraser.size()) == eraser) {
            flg = true;
            S = S.substr(eraser.size(), S.size() - eraser.size());
        }

        if (S.substr(0, erase.size()) == erase) {
            flg = true;
            S = S.substr(erase.size(), S.size() - erase.size());
        }

        if (S.substr(0, dreamer.size()) == dreamer) {
            flg = true;
            S = S.substr(dreamer.size(), S.size() - dreamer.size());
        }

        if (S.substr(0, dream.size()) == dream) {
            flg = true;
            S = S.substr(dream.size(), S.size() - dream.size());
        }


        // 全部見つからないとbreak
        if (flg != 0) continue;
        break;

    } while (true);


    if (S == "") {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;

    }
}

