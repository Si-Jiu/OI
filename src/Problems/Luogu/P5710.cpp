#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int x;
    cin >> x;
    bool one = x % 2 == 0, two = x > 4 && !(x > 12);
    cout << (one && two) << ' ' << (one || two) << ' ' << (one + two == 1)
         << ' ' << (one + two == 0);

    return 0;
}
