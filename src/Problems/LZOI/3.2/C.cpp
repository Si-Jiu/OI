#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long i;
    cin >> i;
    if (i <= 100000)
        cout << i * 0.1 << endl;
    else if (i <= 200000)
        cout << 100000 * 0.1 + (i - 100000) * 0.075 << endl;
    else if (i <= 400000)
        cout << 100000 * 0.1 + 100000 * 0.075 + (i - 200000) * 0.05 << endl;
    else if (i <= 600000)
        cout << 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 +
                    (i - 400000) * 0.03
             << endl;
    else if (i <= 1000000)
        cout << 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 +
                    (i - 600000) * 0.015
             << endl;
    else if (i > 1000000)
        cout << 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 +
                    400000 * 0.015 + (i - 1000000) * 0.01
             << endl;

    return 0;
}
