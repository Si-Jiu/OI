#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int k, n;
    cin >> k;
    double Sn = 0.0;
    for (n = 1; Sn <= k; n++)
        Sn += (1.0 / n);
    cout << n - 1 << endl;

    return 0;
}
