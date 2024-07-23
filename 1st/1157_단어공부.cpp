#include <iostream>
using namespace std;

int cnt[27] = {0, };
int main() {
    string str;
    cin >> str;
    for (int i = 0; i < str.size(); i++) {
        if ('A' <= str[i] && str[i] <= 'Z') {
            str[i] += 32;
        }
    }
    for (int i = 0; i < str.size(); i++) {
        int idx = (int)str[i] - 'a';
        cnt[idx]++;
    }
    int maxIdx = 0;
    int maxCnt = 0;
    int isSame = false;
    for (int i = 0; i < 26; i++) {
        if (maxCnt < cnt[i]) {
            isSame = false;
            maxIdx = i;
            maxCnt = cnt[i];
        }
        else if (maxCnt == cnt[i]) {
            isSame = true;
        }
    }
    
    if (isSame) {
        cout << "?" << '\n';
    }
    else {
        cout << (char)(maxIdx + 'a' - 32) << '\n';
    }
    
}