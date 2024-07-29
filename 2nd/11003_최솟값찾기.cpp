#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, l, temp;
    cin >> n >> l;
    vector<int> arr;
    vector<int> res;
    // 배열 입력받기
    for (int i = 0; i < n; i++) {
        cin >> temp;
        arr.push_back(temp);
    }
    res.push_back(arr[0]);
    res.push_back((arr[0] < arr[1] ? arr[0] : arr[1]));
    // 인덱스 3부터 최소값찾기
    for (int i = 0; i < n-l+1; i++) {
        int min = arr[i];
        for (int j = i + 1; j < i+l; j++) {
            if (min > arr[j]) {
                min = arr[j];
            }
        }
        res.push_back(min);
    }
    for (int i = 0; i < n; i++) {
        cout << res[i] << " ";
    }
}