#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long a, b;
    cin >> a >> b;
    if (a == b)
        cout << "Equal" << endl;
    else
        cout << max(a, b) << endl;

    return 0;
}
