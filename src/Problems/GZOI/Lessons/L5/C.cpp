#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    double weight;
    cin >> weight;
    cout << fixed << setprecision(1)
         << (weight > 500 ? 500 * 0.5 + (weight - 500) * 0.8 : weight * 0.5)
         << endl;

    return 0;
}
