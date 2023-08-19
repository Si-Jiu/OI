#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int x;
    cin >> x;
    if (x < 1)
        cout << x << endl;
    else if (1 <= x && x < 10)
        cout << 2 * x - 1 << endl;
    else
        cout << 3 * x - 11 << endl;

    return 0;
}
