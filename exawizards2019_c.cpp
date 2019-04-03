//#include <iostream>
//#include <string>
//#include <vector>
//
//
//using namespace std;
//
//int main() {
//
//    int N, Q;
//    string s;
//    cin >> N >> Q >> s;
//
//    vector<string> t(Q);
//    vector<string> d(Q);
//
//    for (int i = 0; i < Q; ++i) {
//        string t_str;
//        string d_str;
//
//        cin >> t_str;
//        cin >> d_str;
//
//        t[i] = t_str;
//        d[i] = d_str;
//    }
//
//    vector<int> golem(N);
//    for (int i = 0; i < N; ++i) {
//        golem[i] = 1;
//    }
//
//    for (int i = 0; i < Q; ++i) {
//
//        // 対象のマップは何か
//        string targetMap = t[i];
//        string command = d[i];
//
//
//        for (int j = 0; j < N; ++j) {
//
//            if (targetMap == s.substr(j , 1)) {
//                if (command == "L") {
//                    if (j == 0) {
//                        // 一番左の時
//                        golem[0] = 0;
//                    } else {
//                        // 一番左以外
//                        golem[j - 1] = golem[j - 1] + golem[j];
//                        golem[j] = 0;
//                    }
//                } else if (command == "R") {
//                    if (j == N - 1) {
//                        // 一番右の時
//                        golem[N - 1] = 0;
//                    } else {
//                        // 一番右以外
//                        golem[j + 1] = golem[j + 1] + golem[j];
//                        golem[j] = 0;
//                    }
//                }
//
//            }
//        }
//    }
//
//
//    long count = 0;
//    for (int i = 0; i < N; ++i) {
//        count = count + golem[i];
//    }
//
//    cout << count << endl;
//
//}
//
