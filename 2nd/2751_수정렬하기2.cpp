#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec;
    int n, temp;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        vec.push_back(temp);
    }
    sort(vec.begin(), vec.end()); // 퀵솔트
    for (int i = 0; i < n; i++) {
        cout << vec[i] << '\n';
    }
}