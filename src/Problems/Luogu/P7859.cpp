#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

bool fuck[20][20], pizza[20 + 10];
int n, m, cnt = 0;

bool check(int cur) {
    for (int i = 1; i < cur; i++) {
        if (pizza[i] == 1)
            if (fuck[i][cur])
                return true;
    }
    return false;
}

void dfs(int cur) {
    if (cur > n) {
        cnt++;
        return;
    }
    for (int i = 0; i <= 1; i++) {
        if (i == 1 && check(cur))
            return;
        pizza[cur] = i;
        dfs(cur + 1);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        fuck[x][y] = 1;
        fuck[y][x] = 1;
    }
    dfs(1);
    cout << cnt << endl;

    return 0;
}
