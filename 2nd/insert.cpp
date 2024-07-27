#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> vec) {
    int n = vec.size();
    for (int i = 0; i < n; i++) {
        cout << vec[i] << ' ';
    }
    cout << '\n';
}
vector<int> insertSort(vector<int> vec) {
    int j;
    for (int i = 1; i < vec.size(); i++) {
        int key = vec[i]; // key를 기준으로 key가 작으면 그 앞에 위치 시킴
        for (j = i - 1; j >= 0; j--) {
            if (vec[j] > key) {
                vec[j+1] = vec[j]; // key보다 크다면 오른쪽으로 민다
            }
            else {
                break;
            }
        }
        vec[j+1] = key;
        printVec(vec);
    }
    return vec;
}
int main() {
    int arr[] = {4, 5, 2, 3, 1};
    vector<int> vec(arr, arr+sizeof(arr)/sizeof(arr[0]));
    printVec(vec);
    vector<int> result = insertSort(vec);
}