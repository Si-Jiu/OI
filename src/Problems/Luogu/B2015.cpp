#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    double r1, r2;
    cin >> r1 >> r2;
    cout << fixed << setprecision(2) << 1 / (1 / r1 + 1 / r2) << endl;

    return 0;
}
