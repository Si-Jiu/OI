#include <bits/stdc++.h>

using namespace std;

int n, a[100000], q;

int main() {
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
