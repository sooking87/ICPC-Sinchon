#include <bits/stdc++.h>
using namespace std;

vector<int> arr;
int NGE(int idx) {
    int key = arr[idx];
    int res = -1;
    for (int i = idx+1; i < arr.size(); i++) {
        if (key < arr[i]) {
            res = arr[i];
            break;
        }
    }
    return res;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    int temp;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        arr.push_back(temp);
    }
    // O(N^2)이라서 시간 초과가 나는 것 같다. -> 어떻게 하면 복잡도를 줄일 수 있을까?
    for (int i = 0; i < n; i++) {
        cout << NGE(i) << " ";
    }
}