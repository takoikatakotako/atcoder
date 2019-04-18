#include <iostream>
#include <string>
#include <vector>

using namespace std;

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_2_A
// バブルソート
static void printArray(vector<int> vector) {
    int size = vector.size();
    for (int i = 0; i < size; ++i) {
        if (i == size - 1) {
            cout << vector[i] << endl;
        } else {
            cout << vector[i] << " ";
        }
    }
}

int aoj_ALDS1_2_A() {
    int N;
    cin >> N;
    vector<int> A(N);

    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    // 逆の隣接要素が存在する
    bool flag = true;
    int counter = 0;
    while (flag) {
        flag = false;
        for (int j = N - 1; j > 0; --j) {
            if(A[j] < A[j-1]) {
                swap(A[j], A[j - 1]);
                flag = true;
                ++counter;
            }
        }
    }

    printArray(A);
    cout << counter << endl;

    return 0;
}

