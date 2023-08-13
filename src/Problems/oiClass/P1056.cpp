#include <bits/stdc++.h>

using namespace std;

int a[200000], n, cnt[3 + 1], out[200000];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = n - 1; i >= 0; i--) {
        cnt[a[i]]++;
        int cnt1 = 0;
        for (int j = 1; j < a[i]; j++)
            cnt1 += cnt[j];
        out[i] = cnt1;
    }
    for (int i = 0; i < n; i++)
        cout << out[i] << ' ';

    return 0;
}
