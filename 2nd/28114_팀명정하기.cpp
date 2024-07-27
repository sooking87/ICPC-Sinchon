#include <bits/stdc++.h>
using namespace std;

int main() {
    int admissionYear[4];
    map<int, string, greater<int>> info;
    int solvedCnt;
    string name;
    for (int i = 0; i < 3; i++) {
        cin >> solvedCnt >> admissionYear[i] >> name;
        info.insert(pair<int, string>(solvedCnt, name));
    }
    for (int i = 1; i < 3; i++) {
        int key = admissionYear[i];
        int j;
        for (j = i-1; j >= 0; j--) {
            if (key < admissionYear[j]) {
                admissionYear[j+1] = admissionYear[j];
            }
            else {
                break;
            }
        }
        admissionYear[j+1] = key;
    }
  
    string first;
    string second;
    string strTemp;
    // 첫 번째 줄 출력
    for (int i = 0; i < 3; i++) {
        first += to_string(admissionYear[i]%100);
    }
    cout << first << endl;
    for (const auto& elem : info) {
        second += elem.second[0];
    }
    cout << second << '\n';
}