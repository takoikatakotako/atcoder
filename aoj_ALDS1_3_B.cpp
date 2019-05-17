#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_3_B&lang=jp
// キュー

struct Process {
    string name;
    int time;
};

class Queue {
private:
    int MAX;
    int head;
    int tail;
    Process Q[100];

public:

    void initialize(int size) {
        head = tail = 0;
        MAX = size;
    }

    bool isEmpty() {
        return head == tail;
    }

    bool isFull() {
        return head == (tail + 1) % MAX;
    }

    void enqueue(Process x) {
        if (isFull()) {
            throw ("オーバーフロー");
        }
        Q[tail] = x;
        if (tail + 1 == MAX) {
            tail = 0;
        } else {
            ++tail;
        }
    }

    Process dequeue() {
        if (isEmpty()) {
            throw ("アンダーフロー");
        }
        Process x = Q[head];
        if (head + 1 == MAX) {
            head = 0;
        } else {
            ++head;
        }
        return x;
    }
};


int main() {
    int n, q;
    cin >> n >> q;


    vector<Process> processList;
    for (int i = 0; i < n; ++i) {
        string name;
        cin >> name;
        int time;
        cin >> time;

        processList.push_back({name, time});
    }

    Queue queue;
    queue.initialize((int) processList.size());


    for (Process process : processList) {
        queue.enqueue(process);
    }

    do {

        int quantum = n;

        do {
            Process process = queue.dequeue();
            if (process.time > quantum) {
                queue.enqueue({process.name, process.time - quantum});
            } else {
                quantum -= process.time;
                cout << process.name << ' ' << process.time << endl;
            }

        } while (quantum != 0);


    } while (!queue.isEmpty());

    return 0;
}

