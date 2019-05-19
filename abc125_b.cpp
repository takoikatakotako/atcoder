#include <iostream>
#include <string>
#include <vector>

using namespace std;

int abc125_b() {

    int N;
    cin >> N;

    vector<int> V(N);
    vector<int> C(N);

    for (int i = 0; i < N; ++i) {
        cin >> V[i];
    }

    for (int i = 0; i < N; ++i) {
        cin >> C[i];
    }

    int num = 0;
    for (int i = 0; i < N; ++i) {
        if (V[i] - C[i] > 0) {
            num += V[i] - C[i];
        }
    }

    cout << num << endl;
}

