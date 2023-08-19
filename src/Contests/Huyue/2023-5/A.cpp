#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    // freopen("type.in","r",stdin);
    // freopen("type.out","w",stdout);
    short n;
    cin >> n;
    int sum = 0, cant = 0;
    for (short i = 0; i < n; i++) {
        int t;
        string s;
        cin >> t >> s;
        int tmp = 12 * t / 1000;
        if (tmp >= s.length()) {
            sum += s.length();
            continue;
        }
        cant += s.length() - tmp;
        sum += tmp;
    }
    cout << sum << ' ' << cant;

    return 0;
}
