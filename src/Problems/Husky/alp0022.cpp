#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short n, m;
    cin >> n >> m;
    int cnt = 0;
    for (short i = n; i <= m; i++)
        cnt += i;
    cout << cnt << endl;

    return 0;
}
