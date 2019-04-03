#include <iostream>
#include <string>
#include <vector>


using namespace std;

string replaceString(string str, string from, string to) {

    string::size_type pos = str.find(from);
    while(pos != string::npos){
        str.replace(pos, from.size(), to);
        pos = str.find(from, pos + to.size());
    }
    return  str;
}


int main() {

    string S;
    cin >> S;

    // 文字の全置換
    S = replaceString(S, "eraser", "");
    S = replaceString(S, "dreamer", "");
    S = replaceString(S, "dream", "");
    S = replaceString(S, "erase", "");

    if (S == "") {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;

    }
}

