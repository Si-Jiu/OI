#include <bits/stdc++.h>

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
        int b;
        cin >> b;
        int *pos = lower_bound(a, a + n, b);
        if (*pos != b)
            cout << 0 << endl;
        else
            cout << pos - a;
    }

    return 0;
}
