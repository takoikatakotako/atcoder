#include <iostream>
#include<math.h>
#include <vector>
#include <numeric>

using namespace std;


int abc100_c() {

    int N;
    cin >> N;

    vector<int> a(N);
    for (int i = 0; i < N; ++i) {
        cin >> a[i];
    }

    vector<int> counter(N);
    for (int i = 0; i < N; ++i) {
        int num = a[i];
        int count = 0;
        do {
            if (num % 2 != 0) {
                break;
            }

            num = num / 2;
            ++count;
        } while (true);
        counter[i] = count;
    }

    cout << accumulate(counter.begin(), counter.end(), 0) << endl;
    return 0;
}
