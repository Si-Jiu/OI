#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short a1, a2, n;
    cin >> a1 >> a2 >> n;
    cout << a1 + (n - 1) * (a2 - a1) << endl;

    return 0;
}
