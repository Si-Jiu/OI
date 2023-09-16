#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int cnt[10];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int iCpy = i;
        while (iCpy != 0) {
            cnt[iCpy % 10]++;
            iCpy /= 10;
        }
    }
    for (int i = 0; i < 10; i++)
        cout << cnt[i] << ' ';

    return 0;
}
