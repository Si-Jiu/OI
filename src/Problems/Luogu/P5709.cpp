#include <bits/stdc++.h>

using namespace std;

int main() {
    int m, t, s;
    cin >> m >> t >> s;
    if (t == 0 || m * t <= s)
        cout << 0 << endl;
    else
        cout << (m * t - s) / t << endl;

    return 0;
}
