#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int abc125_c() {

    long long N;
    cin >> N;

    vector<long long int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    sort(A.begin(), A.end());
    A.erase(unique(A.begin(), A.end()), A.end());

    N = A.size();

    // 1 個数を弾く
    if (N == 1) {
        cout << A[0] << endl;
        return 0;
    }


    vector<long long int> original(N);
    original = A;

    long long int result = 1;
    long long int max = A[N - 1];


    long long int borderLine;
    borderLine = (N > 3) ? A[2] : A[N - 1];


    bool didChangeFinal = false;
    for (int i = 2; i < borderLine; ++i) {

        bool didChange = false;

        if (didChangeFinal) {
            didChange = true;
        }


        int continuFlug = false;
        for (int j = 0; j < N; ++j) {
            // 全部割れるか確認
            long long int num = A[j];
            if (num % i == 0) {
                A[j] = num / i;
            } else {

                if (didChange) {
                    // 交換したけどダメだった
                    didChange = false;
                    A = original;
                    continuFlug = true;
                    continue;
                } else {
                    //  初回のダメ
                    didChange = true;
                    A[j] = max / 2;
                }
            }
        }

        //
        if (continuFlug) {
            continue;
        }

        if (didChange) {
            didChangeFinal = true;
        }

        // 最後までわりきれた
        original = A;

        result *= i;
        borderLine = (N > 3) ? A[2] : A[N - 1];
        i = 1;
    }


    cout << result << endl;

    return 0;
}

