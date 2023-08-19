#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long n, c, ans = 0;
    cin >> n >> c;
    long long a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    for (int i = 0; i < n; i++)
        ans += ((upper_bound(a, a + n, a[i] + c) - a) -
                (lower_bound(a, a + n, a[i] + c) - a));
    cout << ans;

    return 0;
}
