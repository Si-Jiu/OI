#include <bits/stdc++.h>

using namespace std;

long long kids[1000000 + 10];

int main() {
    long long n;
    cin >> n;
    for (long long i = 0; i < n; i++)
        cin >> kids[i];
    long long q;
    cin >> q;
    for (long long i = 0; i < q; i++) {
        long long t;
        cin >> t;
        long long l = lower_bound(kids, kids + n, t) - kids,
                  u = upper_bound(kids, kids + n, t) - kids;
        if (l == n)
            cout << -1 << ' ' << -1 << endl;
        else
            cout << l + 1 << ' ' << u << endl;
    }

    return 0;
}
