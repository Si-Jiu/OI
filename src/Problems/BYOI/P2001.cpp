#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < q; i++) {
        int x;
        cin >> x;
        int l = lower_bound(a, a + n, x) - a;
        if (a[l] == x) {
            cout << l + 1 << ' ';
            int u = upper_bound(a, a + n, x) - a;
            cout << u << endl;
        } else
            cout << -1 << ' ' << -1 << endl;
    }

    return 0;
}
