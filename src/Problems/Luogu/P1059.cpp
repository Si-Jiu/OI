#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short n;
    cin >> n;
    short a[n];
    for (short i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    short newN = unique(a, a + n) - a;
    cout << newN << endl;
    for (short i = 0; i < newN; i++)
        cout << a[i] << ' ';

    return 0;
}
