#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short n;
    cin >> n;
    int a[n];
    for (short i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    for (short i = n - 1; i >= 0; i--)
        cout << a[i] << ' ';

    return 0;
}
