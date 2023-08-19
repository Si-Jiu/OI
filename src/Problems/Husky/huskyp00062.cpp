#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short a, b, c;
    cin >> a >> b >> c;
    cout << max(max(a, b), c);

    return 0;
}
