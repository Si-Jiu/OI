#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

const short LEN = 50 + 10;
const int MOD = 1e9 + 7;
short n, m[LEN];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    unsigned long long sum = 1;
    for (short i = 0; i < n; i++)
        cin >> m[i];
    sort(m, m + n);
    for (short i = 0; i < n; i++)
        sum = sum * (m[i] - i) % MOD;
    cout << sum << endl;

    return 0;
}
