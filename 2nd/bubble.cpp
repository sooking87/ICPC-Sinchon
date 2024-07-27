#include <bits/stdc++.h>
using namespace std;

void printVec(const vector<int>& vec) {
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << ' ';
    }
    cout << '\n';
}

vector<int> bubbleSort(vector<int> target) {
    int n = target.size();
    int temp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (target[j] > target[j+1]) {
                temp = target[j];
                target[j] = target[j+1];
                target[j+1] = temp;
            }
            printVec(target);
        }
    }
    return target;
}

int main() {
    int arr[] = {5, 3, 1, 4, 2};
    vector<int> target(arr, arr+sizeof(arr) / sizeof(arr[0]));
    vector<int> result = bubbleSort(target);
    printVec(result);
    return 0;
}