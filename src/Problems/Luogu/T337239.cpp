#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

map<int, short> cnt;

int n, m;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        cnt[tmp]++;
    }
    for (int i = 0; i < m; i++) {
        int tmp;
        cin >> tmp;
        cnt[tmp]++;
    }
    for (auto p : cnt)
        if (p.second == 2)
            cout << p.first << ' ';

    return 0;
}
