#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

short n, a[10000 + 10], x;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (short i = 0; i < n; i++)
        cin >> a[i];
    cin >> x;
    for (short i = 0; i < n; i++)
        if (a[i] == x) {
            cout << i << endl;
            return 0;
        }
    cout << -1 << endl;

    return 0;
}
