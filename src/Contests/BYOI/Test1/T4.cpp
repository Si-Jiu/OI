#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short n;
    cin >> n;
    long long h[n];
    for (short i = 0; i < n; i++)
        cin >> h[i];
    short a, b;
    cin >> a >> b;
    a--;
    short cnt = 0;
    for (short i = a; i < b; i++)
        if (h[i] % 3 == 0 && h[i] % 7 == 2)
            cnt++;
    cout << cnt << endl;

    return 0;
}
