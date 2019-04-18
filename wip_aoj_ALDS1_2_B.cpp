#include <iostream>
#include <string>
#include <vector>

using namespace std;

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_2_B
// 選択ソート
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

int aoj_ALDS1_2_() {
    int N;
    cin >> N;
    vector<int> A(N);

    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }


    printArray(A);
//    cout << counter << endl;

    return 0;
}