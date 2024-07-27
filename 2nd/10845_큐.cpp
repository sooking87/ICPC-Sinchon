#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    queue<int> que;
    for (int i = 0; i < n; i++) {
        string command;
        cin >> command;
        if (command == "push") {
            int X;
            cin >> X;
            que.push(X);
        }
        // 큐의 경우는 back에서 들어가서 front에서 pop이 된다. !!!
        else if (command == "pop") {
            if (que.empty()) {
                cout << -1 << "\n";
            }
            else {
                int front = que.front();
                cout << front << '\n';
                que.pop();
            }
        }
        else if (command == "size") {
            if (que.empty()) {
                cout << 0 << "\n";
            }
            else {
                cout << que.size() << '\n';
            }
        }
        else if (command == "empty") {
            cout << que.empty() << '\n';
        }
        else if (command == "front") {
            if (que.empty()) {
                cout << -1 << "\n";
            }
            else {
                cout << que.front() << '\n';
            }
        }
        else {
            if (que.empty()) {
                cout << -1 << "\n";
            }
            else {
                cout << que.back() << '\n';
            }
        }
    }
}