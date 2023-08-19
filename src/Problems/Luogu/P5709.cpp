#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int m, t, s;
    cin >> m >> t >> s;
    if (t == 0 || m * t <= s)
        cout << 0 << endl;
    else
        cout << (m * t - s) / t << endl;

    return 0;
}
