#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int n, a[100000], q;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cin >> q;
    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        cout << upper_bound(a, a + n, r) - lower_bound(a, a + n, l) << endl;
    }

    return 0;
}
