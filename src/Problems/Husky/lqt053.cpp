#include <bits/stdc++.h>

using namespace std;

const short LEN = 100 + 50;
char field[LEN][LEN];
short n, m, cnt;
short nextX[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
short nextY[8] = {-1, -1, -1, 0, 0, 1, 1, 1};

void dfs(short x, short y) {
    field[x][y] = 'A';
    for (short i = 0; i < 8; i++) {
        short newX = x + nextX[i];
        short newY = y + nextY[i];
        if (newX >= 0 && newX <= n && newY >= 0 && newY <= m &&
            field[newX][newY] == 'W')
            dfs(newX, newY);
    }
}

int main() {

    cin >> n >> m;
    for (short i = 0; i < n; i++)
        for (short j = 0; j < m; j++)
            cin >> field[i][j];
    for (short i = 0; i < n; i++)
        for (short j = 0; j < m; j++)
            if (field[i][j] == 'W') {
                dfs(i, j);
                cnt++;
            }
    cout << cnt << endl;

    return 0;
}
