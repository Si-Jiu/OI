#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int gcd;
    cin >> gcd;
    for (int i = 1; i < n; i++) {
        int x;
        cin >> x;
        gcd = __gcd(x, gcd);
    }
    cout << gcd << endl;

    return 0;
}
