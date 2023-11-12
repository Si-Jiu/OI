#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    long long x, y, z, B;
    cin >> x >> y >> z >> B;
    if (y > z * B) {
        cout << -1 << endl;
        return 0;
    }
    unsigned long long x1 = x + y, z1 = z;
    for (int i = 1;; i++) {
        if (x1 <= z1 * B) {
            cout << i << endl;
            return 0;
        }
        x1 += y;
        z1 += z;
    }

    return 0;
}
