#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short a, b;
    cin >> a >> b;
    cout << (a + 1 == b || a == b ? "Yes" : "No") << endl;

    return 0;
}
