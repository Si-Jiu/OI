#include <bits/stdc++.h>

using namespace std;

int main() {
    int k, n;
    cin >> k;
    double Sn = 0.0;
    for (n = 1; Sn <= k; n++)
        Sn += (1.0 / n);
    cout << n - 1 << endl;

    return 0;
}
