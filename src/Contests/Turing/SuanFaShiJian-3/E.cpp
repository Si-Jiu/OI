#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int a[20 + 10];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (sum + a[i] > m) {
            if (min(sum + a[i] - m, m - sum) == m - sum)
                break;
            else {
                sum += a[i];
                break;
            }
        } else
            sum += a[i];
    }
    int u = upper_bound(a, a + n, m) - a;
    if (u != n) {
        if (a[u] - m == abs(m - sum))
            cout << min(a[u], sum) << endl;
        else if (min(a[u] - m, abs(m - sum)) == a[u] - m)
            cout << a[u] << endl;
        else
            cout << sum << endl;
    } else
        cout << sum << endl;

    return 0;
}
