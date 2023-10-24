#include <bits/stdc++.h>
#define endl '\n'

const double PI = 3.14159;

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    double r;
    cin >> r;
    cout << fixed << setprecision(4) << 2 * r << ' ' << 2 * r * PI << ' '
         << PI * r * r << endl;

    return 0;
}
