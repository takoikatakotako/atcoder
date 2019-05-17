#include <iostream>
#include<math.h>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int abc110_a() {

    int A, B, C;
    cin >> A >> B >> C;


    int resultA = A * 10 + B + C;
    int resultB = A + B * 10 + C;
    int resultC= A + B + C * 10;

    vector<int> answer(3);
    answer.push_back(resultA);
    answer.push_back(resultB);
    answer.push_back(resultC);

    int max = *max_element(answer.begin(), answer.end());

    cout << max << endl;
}