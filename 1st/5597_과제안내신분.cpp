#include <iostream>
using namespace std;
int arr[32] = {0, };

int main() {
    int idx;
    for (int i = 0; i < 28; i++) {
        cin >> idx;
        arr[idx] = 1;
    }
    for (int i = 1; i < 31; i++) {
        if (arr[i] != 1) {
            cout << i << '\n';
        }
    }
}