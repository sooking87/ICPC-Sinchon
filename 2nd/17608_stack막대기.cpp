#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int temp;
    cin >> n;
    stack<int> s;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        s.push(temp);
    }
    int max = 0;
    int cnt = 0;
    while(s.size()) {
        if (max < s.top()) {
            max = s.top();
            cnt++;
        }
        s.pop();
    }
    cout << cnt << '\n';
}