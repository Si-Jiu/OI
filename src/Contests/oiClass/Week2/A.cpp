#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int a[50 + 10];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, l, w;
    cin >> n >> l >> w;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int cnt = 0;
    for (int i = 0; i < n; i++)
        if (a[i] <= l || a[i] <= w || a[i] <= (int)sqrt(l * l + w * w))
            cnt++;
    cout << cnt << endl;

    return 0;
}
