#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string command;
    stack<int> st;
    for (int i = 0; i < n; i++) {

        cin >> command;
        // cout << "command: " << command << endl;
        if (command == "push") {
            int X;
            cin >> X;
            st.push(X);
        }
        else if (command == "pop") {
            if (st.empty()) {
                cout << -1 << '\n';
            }
            else {
                int top = st.top();
                cout << top << '\n';
                st.pop();
            }
        }
        else if (command == "size") {
            cout << st.size() << '\n';
        }
        else if (command == "empty") {
            cout << st.empty() << '\n';
        }
        else {
            if (st.empty()) {
                cout << -1 << '\n';
            }
            else {
                int top = st.top();
                cout << top << '\n';
            }
        }

    }
}