#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    // 여는 괄호 -> 1 증가
    // 닫는 괄호 -> 1 감소
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        int cnt = 0;
        int no = 0; 
        for (int i = 0; i < str.size(); i++) {
            char c = str[i];
            if (c == '(') cnt++;
            else if (cnt == 0) no = 1;
            else cnt--;
        }
        if (cnt > 0) no = 1;
        cout << (no ? "NO" : "YES") << '\n';
    }
}