#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    // freopen("blind.in", "r", stdin);
    // freopen("blind.out", "w", stdout);

    unsigned long long n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    unsigned long long cnt = 0, tmp = 0;
    while (k > 0)
        for (int i = 0; i < n; i++) {
            if (tmp)
                tmp--;
            else
                cnt++;
            k--;
            if (s[i] != '0')
                tmp += s[i] - '0';
            if (k <= 0)
                break;
        }
    cout << cnt << endl;

    return 0;
}
