#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 

    int n;
    int temp;
    int arr[1000001];
    int answer[1000001];
    stack<int> idxStack; // 인덱스를 넣는 스택
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    } 
    for (int i = 0; i < n; i++) {
        while (!idxStack.empty() && arr[idxStack.top()] < arr[i]) {
            answer[idxStack.top()] = arr[i];
            idxStack.pop();
        }
        idxStack.push(i);
    }
    while (!idxStack.empty()) {
        answer[idxStack.top()] = -1;
        idxStack.pop();
    }
    for (int i = 0; i < n; i++) {
        cout << answer[i] << '\n';
    }

    
}