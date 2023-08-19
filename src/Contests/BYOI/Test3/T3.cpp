#include <bits/stdc++.h>
#define endl '\n'
#define endl '\n'

using namespace std;

int a[100000 + 10], b[100000 + 10], c[100000 + 10];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int l1, r1, l2, r2, k;
        cin >> l1 >> r1 >> l2 >> r2 >> k;
        memset(c, 0, sizeof(int) * 100010);
        int cnt = 0;
        for (int j = l1 - 1; j < r1; j++) {
            c[cnt] = a[j];
            cnt++;
        }
        for (int j = l2 - 1; j < r2; j++) {
            c[cnt] = b[j];
            cnt++;
        }
        sort(c, c + cnt);
        cout << c[k - 1] << endl;
    }

    return 0;
}
