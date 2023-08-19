#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    unsigned long long v;
    cin >> v;
    cout << v << ' ';
    if (v < 7690)
        cout << 0;
    if (v >= 7690)
        cout << 1;
    if (v >= 11200)
        cout << 2;
    if (v >= 16700)
        cout << 3;
    if (v >= 115000)
        cout << 4;
    if (v >= 2000000)
        cout << 5;
    cout << endl;

    return 0;
}
