#include <iostream>
using namespace std;
int arr[101];

int main() {
    int n;
    int v;
    int cnt = 0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> v;
    for (int i = 0; i < n; i++) {
        if (arr[i] == v) {
            cnt++;
        }
    }
    cout << cnt << '\n';
}