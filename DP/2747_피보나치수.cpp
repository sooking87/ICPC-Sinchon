#include <iostream>
using namespace std;

int fibo(int n) {
    int first = 0;
    int second = 1;
    int next = 0;

    if (n <= 1) {
        return n;
    }
    for (int i = 2; i <= n; i++) {
        next = first + second;
        first = second;
        second = next;
    }
    return next;
}

int main() {
    int n;
    cin >> n;
    cout << fibo(n) << '\n';
}