#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short x;
    cin >> x;
    cout << x % 10 + x / 10 % 10 + x / 100 << endl;

    return 0;
}
