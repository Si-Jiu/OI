#include <bits/stdc++.h>

using namespace std;

long long nx[] = {-1, 1, 0, 0};
long long ny[] = {0, 0, -1, 1};
short n, m, cnt = 0;
char field[505][505];

void dfs(short i, short j) {
    field[i][j] = 'F';
    for (long long g = 0; g < 4; g++) {
        int newX = nx[g] + i;
        int newY = ny[g] + j;
        if (newX >= 0 && newX < n && newY >= 0 && newY < m &&
            field[newX][newY] == 'R')
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
            if (field[i][j] == 'R') {
                dfs(i, j);
                cnt++;
            }
    cout << cnt;

    return 0;
}
