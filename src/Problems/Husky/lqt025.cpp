#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

short n, m, posX = 1, posY = 1;
string commands, tmp;
bool maze[105][105];

int main() {
    memset(maze, 0, sizeof(maze));
    scanf("%lld %lld", &n, &m);
    for (short i = 1; i <= n; i++) {
        cin >> tmp;
        for (short j = 1; j <= m; j++)
            maze[i][j] = tmp[j - 1] == '.' ? true : false;
    }
    cin >> commands;
    for (auto cmd : commands) {
        if (cmd == 'U' && posX - 1 > 0 && maze[posX - 1][posY]) // 向上
            posX--;
        else if (cmd == 'D' && posX + 1 <= n && maze[posX + 1][posY]) // 向下
            posX++;
        else if (cmd == 'L' && posY - 1 > 0 && maze[posX][posY - 1]) // 向左
            posY--;
        else if (cmd == 'R' && posY + 1 <= m && maze[posX][posY + 1]) // 向右
            posY++;
    }
    printf("%lld %lld", posX, posY);

    return 0;
}
