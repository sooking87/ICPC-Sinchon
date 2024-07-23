#include <iostream>
#include <cmath>
using namespace std;

long long func(long long num1, long long num2);

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long A, B;
    long long res;
    cin >> A >> B;
    res = func(A, B);
    cout << res << '\n';
}
long long func(long long num1, long long num2) {
    long long res;
    res = pow(num1, 2)-pow(num2, 2);
    return res;
}
