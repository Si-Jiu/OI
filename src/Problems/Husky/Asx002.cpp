#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long a, b, c;
    cin >> a >> b >> c;
    if (a > b)
        cout << a * c << endl;
    else if (a == b)
        cout << c << endl;
    else if (a < b)
        cout << b * c << endl;

    return 0;
}
