#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int x, y, cnt = 0;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> x >> y;
    for (int p = x; p <= y; p++) {
        int q = x * y / p;
        if (__gcd(p, q) == x && q * p / __gcd(q, p) == y)
            cnt++;
    }
    cout << cnt;

    return 0;
}
