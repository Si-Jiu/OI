#include <bits/stdc++.h>

using namespace std;

short n, res[5 + 5][5 + 5];

void dfs(short curX, short curY)
{
    if (curY == n)
    {
        dfs(curX + 1, 0);
        return;
    }
    if (curX == n)
    {
        for (short i = 0; i < n; i++)
        {
            for (short j = 0; j < n; j++)
                cout << res[i][j] << ' ';
            cout << endl;
        }
        cout << endl;
        return;
    }
    for (short i = 0; i <= 1; i++)
    {
        res[curX][curY] = i;
        dfs(curX, curY + 1);
    }
}

int main()
{
    cin >> n;
    dfs(0, 0);

    return 0;
}
