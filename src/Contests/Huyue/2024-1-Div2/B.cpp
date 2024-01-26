#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int a, b, m;

int main() {
    // freopen("lift.in", "r", stdin);
    // freopen("lift.out", "w", stdout);
    cin >> a >> b >> m;
    if (m == 0)
        cout << 0 << endl;
    else if (m == 1)
        cout << abs(a - 1) + 1 << endl;
    else if (abs(a - m) < abs(b - m) || abs(a - m) == abs(b - m))
        cout << abs(a - m) + m;
    else
        cout << abs(b - m) + m;

    return 0;
}
