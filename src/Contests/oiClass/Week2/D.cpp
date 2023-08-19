#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int x, z;
    cin >> x >> z;
    cout << x / __gcd(x, z) * z / x << endl;

    return 0;
}
