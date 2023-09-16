#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    unsigned long long n, m, k;
    cin >> n >> m >> k;
    if (k >= 4 * 1e8) {
        cout << (n * (m - 1) / m) - n * ((m - 1) / m) << endl;
        return 0;
    }
    unsigned long long max1 = 0;
    for (int i = 1; i <= k; i++)
        max1 = max(max1, (n * i / m) - n * (i / m));
    cout << max1 << endl;

    return 0;
}
