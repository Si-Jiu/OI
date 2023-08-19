#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int a[1000 + 10], b[1000 + 10], n, q;

void arr_copy(int a[], int b[]) {
    for (int i = 0; i < n; i++)
        a[i] = b[i];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> q;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        arr_copy(b, a);
        sort(b + l - 1, b + r);
        int tmp = b[r - 1];
        bool flag = false;
        for (int j = r - 1; j >= l - 1; j--)
            if (b[j] != tmp) {
                cout << b[j] << endl;
                flag = true;
                break;
            }
        if (!flag)
            cout << -1 << endl;
    }

    return 0;
}
