#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int n, cnt = 0;
string s, t;

int main() {
    // freopen("letter.in", "r", stdin);
    // freopen("letter.out", "w", stdout);
    cin >> n;
    cin >> s;
    cin >> t;
    for (int i = 0; i < n; i++)
        if (s[i] != t[i])
            cnt++;
    cout << cnt << endl;

    return 0;
}
