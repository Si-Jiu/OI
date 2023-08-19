#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short n;
    cin >> n;
    int cnt = 0;
    for (short i = 1; i <= n; i += 2)
        cnt += i;
    cout << cnt << endl;

    return 0;
}
