#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

long long m, n, a[100000], b[100000], cnt = 0;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> m >> n;
    for (long long i = 0; i < m; i++)
        cin >> a[i];
    sort(a, a + m);
    for (long long i = 0; i < n; i++) {
        long long score;
        cin >> score;
        long long pos1 = lower_bound(a, a + m, score) - a, pos0 = pos1 - 1;
        if (pos1 == m ||
            (pos0 >= 0 && abs(score - a[pos0]) < abs(score - a[pos1])))
            cnt += abs(score - a[pos0]);
        else
            cnt += abs(score - a[pos1]);
    }
    cout << cnt << endl;

    return 0;
}
