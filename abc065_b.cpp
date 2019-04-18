#include <iostream>
#include <string>
#include <vector>

using namespace std;

int abc065_b() {
    int N;
    cin >> N;

    vector<int> A(N + 1);
    for (int i = 1; i < N + 1; ++i) {
        cin >> A[i];
    }

    bool flag = true;
    int i = 1;
    int counter = 0;
    while (flag) {
        if(i == 0){
            flag = false;
            counter = -1;
            break;
        }
        if (i == 2) {
            flag = false;

            // 最初で数えてしまっているので、一回減らす
            --counter;
        }

        int temp = A[i];
        A[i] = 0;
        i = temp;

        ++counter;
    }
    cout << counter << endl;
}

