#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int n;
int c, a[1000 + 5];
map<int, int> cnt, pos;

bool comp(const int &a, const int &b) {
    if (cnt[a] == cnt[b])
        return pos[a] < pos[b];
    return cnt[a] > cnt[b];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> c;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        cnt[a[i]]++;
        if (pos.count(a[i]) == 0)
            pos[a[i]] = i;
    }
    sort(a, a + n, comp);
    for (int i = 0; i < n; i++)
        cout << a[i] << ' ';

    return 0;
}
