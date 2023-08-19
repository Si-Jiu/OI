#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a;
    cin >> a;
    a -= 12;
    if (a < 0)
        cout << 24 + a << endl;
    else
        cout << a << endl;

    return 0;
}
