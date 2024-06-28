#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int n, cntAll[7+10], num[33+10], tmp, cnt;

int main() {
    cin >> n;
    for (int i = 0; i < 7; i++) {
        cin >> tmp;
        num[tmp] = 1;
    }
    for (int i = 0; i < n; i++) {
        cnt = 0;
        for (int j = 0; j < 7; j++) {
            cin >> tmp;
            if (num[tmp] == 1)
                cnt++;
        }
        cntAll[cnt]++;
    }
    for (int i = 7; i > 0; i--)
        cout << cntAll[i] << ' ';
    cout << endl;

    return 0;
}
