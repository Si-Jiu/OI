#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, z;
    cin >> x >> z;
    cout << x / __gcd(x, z) * z / x << endl;

    return 0;
}
