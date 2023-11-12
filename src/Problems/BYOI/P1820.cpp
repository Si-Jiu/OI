#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int x;
        cin >> x;
        int u = upper_bound(a, a + n, x) - a;
        if (a[u - 1] == x)
            cout << u << ' ';
        else
            cout << -1 << ' ';
    }

    return 0;
}
