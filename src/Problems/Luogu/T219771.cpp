#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n;
    unsigned int a[n];
    for (int index = 0; index < n; index++)
        cin >> a[index];
    cin >> m;
    unsigned int q[m];
    for (int index = 0; index < m; index++)
        cin >> q[index];
    sort(a, a + n);
    for (int index = 0; index < m; index++)
        cout << upper_bound(a, a + n, q[index]) -
                    lower_bound(a, a + n, q[index])
             << ' ';

    return 0;
}
