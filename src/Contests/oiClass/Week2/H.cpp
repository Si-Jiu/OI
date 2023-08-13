#include <bits/stdc++.h>

using namespace std;

int main() {
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
