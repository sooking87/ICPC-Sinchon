#include <bits/stdc++.h>
using namespace std;
int arr[100001];
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int max = arr[n-1];
    int cnt = 1;
    for (int i = n-2; i >= 0; i--) {
        if (max < arr[i]) {
            cnt++;
            max = arr[i];
        }
    }
    cout << cnt << '\n';
}