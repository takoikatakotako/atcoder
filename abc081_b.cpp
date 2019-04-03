#include <iostream>
#include<math.h>

using namespace std;


int abc081_b() {
    int N;
    cin >> N;


    int A[N];
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    int counter = 0;
    while(true) {

        bool isEvenAll = true;
        for (int i = 0; i < N; ++i) {
            if (A[i] % 2 == 0) {
                A[i] = A[i] / 2;
            } else {
                isEvenAll = false;
            }
        }

        if (isEvenAll) {
            ++counter;
        } else {
            break;
        }
    }
    cout << counter << endl;
}
