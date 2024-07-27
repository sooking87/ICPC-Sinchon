#include <bits/stdc++.h>
using namespace std;

int arr[1001];
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> vec(arr, arr+n);
    // 버블 정렬
    // int temp;
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n - i - 1; j++) {
    //         if (vec[j] > vec[j+1]) {
    //             temp = vec[j];
    //             vec[j] = vec[j+1];
    //             vec[j+1] = temp;
    //         }
    //     }
    // }
    // 삽입 정렬
    for (int i = 1; i < n; i++) {
        int key = vec[i];
        int j;
        for (j = i - 1; j >= 0; j--) {
            if (key < vec[j]) {
                vec[j+1] = vec[j];
            }
            else {
                break;
            }
        }
        vec[j+1] = key;
    }
    for (int i = 0; i < n; i++) {
        cout << vec[i] << '\n';
    }
}