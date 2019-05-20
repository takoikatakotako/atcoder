#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_3_A&lang=jp
// スタック

vector<string> split20190516(const string &s, char delimiter) {
    vector<string> elements;
    stringstream ss(s);
    string item;
    while (getline(ss, item, delimiter)) {
        if (!item.empty()) {
            elements.push_back(item);
        }
    }
    return elements;
}

class Stack {
private:
    int top;
    vector<int> array;

public:

    void initialize() {
        top = -1;
        array = {};
    }

    bool isEmpty() {
        return array.size() == 0;
    }


    void push(int number) {
        array.push_back(number);
        ++top;
    }

    int pop() {
        int number = array[top];
        array.pop_back();
        --top;
        return number;
    }
};


int aoj_ALDS1_3_A() {

    string s;
    getline(cin, s);

    vector<string> array = split20190516(s, ' ');

    Stack stack;
    stack.initialize();

    for (int i = 0; i < array.size(); ++i) {
        string str = array[i];
        if (str == "+") {
            int number1 = stack.pop();
            int number2 = stack.pop();
            stack.push(number2 + number1);
        } else if (str == "-") {
            int number1 = stack.pop();
            int number2 = stack.pop();
            stack.push(number2 - number1);
        } else if (str == "*") {
            int number1 = stack.pop();
            int number2 = stack.pop();
            stack.push(number2 * number1);
        } else {
            int number;
            number = atoi(str.c_str());
            stack.push(number);
        }
    }

    cout << stack.pop() << endl;

    return 0;
}

