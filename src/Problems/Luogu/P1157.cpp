#include <bits/stdc++.h>

using namespace std;

short n, r, res[21 + 5];

void dfs(int cur) {
    if (cur >= r) {
        for (short i = 0; i < r; i++)
            cout << setw(3) << res[i];
        cout << endl;
        return;
    }
    for (short i = 1; i <= n; i++) {
        if (cur != 0 && res[cur - 1] >= i)
            continue;
        res[cur] = i;
        dfs(cur + 1);
    }
}

int main() {
    cin >> n >> r;
    dfs(0);

    return 0;
}
