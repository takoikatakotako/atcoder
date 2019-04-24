#include <iostream>
#include<math.h>

using namespace std;


int abc079_c() {

    string S;
    cin >> S;


    int A, B, C, D;

    A = stoi(S.substr(0, 1).c_str());
    B = stoi(S.substr(1, 1).c_str());
    C = stoi(S.substr(2, 1).c_str());
    D = stoi(S.substr(3, 1).c_str());

    // + + +
    if (A + B + C + D == 7) {
        cout << A << "+" << B << "+" << C << "+" << D << "=7" << endl;
        return 0;
    }

    // + + -
    if (A + B + C - D == 7) {
        cout << A << "+" << B << "+" << C << "-" << D << "=7" << endl;
        return 0;
    }

    // + - +
    if (A + B - C + D == 7) {
        cout << A << "+" << B << "-" << C << "+" << D << "=7" << endl;
        return 0;
    }

    // + - -
    if (A + B - C - D == 7) {
        cout << A << "+" << B << "-" << C << "-" << D << "=7" << endl;
        return 0;
    }

    // - + +
    if (A - B + C + D == 7) {
        cout << A << "-" << B << "+" << C << "+" << D << "=7" << endl;
        return 0;
    }

    // - + -
    if (A - B + C - D == 7) {
        cout << A << "-" << B << "+" << C << "-" << D << "=7" << endl;
        return 0;
    }

    // - - +
    if (A - B - C + D == 7) {
        cout << A << "-" << B << "-" << C << "+" << D << "=7" << endl;
        return 0;
    }

    // - - -
    if (A + B + C - D == 7) {
        cout << A << "-" << B << "-" << C << "-" << D << "=7" << endl;
        return 0;
    }
}
