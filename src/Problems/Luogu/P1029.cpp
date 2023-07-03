#include <bits/stdc++.h>

using namespace std;

int x, y, cnt = 0;

int main() {
    cin >> x >> y;
    for (int p = x; p <= y; p++) {
        int q = x * y / p;
        if (__gcd(p, q) == x && q * p / __gcd(q, p) == y)
            cnt++;
    }
    cout << cnt;

    return 0;
}
