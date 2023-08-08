#include <bits/stdc++.h>

using namespace std;

map<int, short> cnt;

int n, m;

int main() {
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
