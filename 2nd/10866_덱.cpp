#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    deque<int> deq;
    for (int i = 0; i < n; i++) {
        string command;
        cin >> command;
        if (command == "push_front") {
            int X;
            cin >> X;
            deq.push_front(X);
        }
        else if (command == "push_back") {
            int X;
            cin >> X;
            deq.push_back(X);
        }
        else if (command == "pop_front") {
            if (deq.empty()) {
                cout << -1 << '\n';
            }
            else {
                int front = deq.front();
                cout << front << '\n';
                deq.pop_front();
            }
        }
        else if (command == "pop_back") {
            if (deq.empty()) {
                cout << -1 << '\n';
            }
            else {
                int back = deq.back();
                cout << back << '\n';
                deq.pop_back();
            }
        }
        else if (command == "size") {
            cout << deq.size() << '\n';
        }
        else if (command == "empty") {
            cout << deq.empty() << '\n';
        }
        else if (command == "front") {
            if (deq.empty()) {
                cout << -1 << '\n';
            }
            else {
                cout << deq.front() << '\n';
            }
        }
        else if (command == "back") {
            if (deq.empty()) {
                cout << -1 << '\n';
            }
            else {
                cout << deq.back() << '\n';
            }
        }
    }

}