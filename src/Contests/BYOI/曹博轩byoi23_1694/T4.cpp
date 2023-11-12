#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int a[200000];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        int l, k;
        cin >> l >> k;
        int aa = a[l - 1], r1 = -1;
        for (int r = l; r < n; r++) {
            aa &= a[r];
            if (aa >= k)
                r1 = r + 1;
        }
        cout << r1 << endl;
    }

    return 0;
}
