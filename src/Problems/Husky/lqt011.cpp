#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

long long t, x;
bool flag;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    for (long long i = 0; i < t; i++) {
        cin >> x;
        flag = false;
        for (long long j = 2; j * j < x; j++)
            if (x % j == 0)
                if (gcd(j, x / j) == 1) {
                    flag = true;
                    break;
                }
        cout << (flag ? "YES\n" : "NO\n");
    }

    return 0;
}
