#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    vector<int> arr;
    int temp;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        arr.push_back(temp);
    }
    int j;
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        for (j = i - 1; j >= 0; j--) {
            if (key < arr[j]) {
                arr[j+1] = arr[j];
            }
            else {
                break;
            }
        }
        arr[j+1] = key;
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << '\n';
    }

}