#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m, x;
    cin >> n >> m >> x;
    for (int i = n; i <= m; i++)
        if (i % x != 0)
            cout << i << ' ';

    return 0;
}
