#include <iostream>
using namespace std;

int arr[1001];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int max = 0;
    for (int i = 0; i < n; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += ((double)arr[i] / max) * 100;
    }
    cout << (double)sum / n << '\n';
    

}