#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m, k;
    cin >> n >> m >> k;
    int sum = 0;
    for (int i = 0; i < n - 1; i++) {
        int tmp;
        cin >> tmp;
        sum += tmp;
    }
    bool flag = false;
    for (int i = 0; i <= m; i++)
        if ((sum + i) / n >= k) {
            cout << i << endl;
            flag = true;
            break;
        }
    if (!flag)
        cout << -1 << endl;

    return 0;
}
