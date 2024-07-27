#include <iostream>
using namespace std;

int arr[22] = {0, };
int fibo(int n) {
    if (arr[n] > 0) {
        return arr[n];
    }
    if (n <= 1) {
        return n;
    }
    else {
        arr[n] = fibo(n - 1) + fibo(n - 2);
        return arr[n];
    }
}
int main() {
    int n;
    cin >> n;
    cout << fibo(n) << '\n';
}