#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short t;
    cin >> t;
    for (short j = 0; j < t; j++) {
        short n;
        cin >> n;
        bool male[n];
        for (short i = 0; i < n; i++)
            cin >> male[i];
        double f[n], m[n];
        short fCnt = 0, mCnt = 0;
        for (short i = 0; i < n; i++)
            if (male[i]) {
                cin >> m[mCnt];
                mCnt++;
            } else {
                cin >> f[fCnt];
                fCnt++;
            }
        sort(f, f + fCnt);
        sort(m, m + mCnt);
        for (short i = 0; i < fCnt; i++)
            cout << f[i] << ' ';
        cout << endl;
        for (short i = 0; i < mCnt; i++) {
            cout << m[i] << ' ';
        }
    }

    return 0;
}
