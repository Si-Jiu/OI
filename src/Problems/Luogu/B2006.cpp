#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int x, a, y, b;
    cin >> x >> a >> y >> b;
    double c = abs(x * a - y * b) * 1.0 / abs(a - b);
    cout << fixed << setprecision(2) << c << endl;

    return 0;
}
