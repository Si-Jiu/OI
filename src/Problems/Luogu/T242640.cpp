#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

short n, res[15 + 5];

void dfs(short cur) {
    if (cur == n) {
        for (short i = 0; i < n; i++)
            cout << res[i] << ' ';
        cout << endl;
        return;
    }
    for (short i = 0; i <= 1; i++) {
        res[cur] = i;
        dfs(cur + 1);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    dfs(0);

    return 0;
}
