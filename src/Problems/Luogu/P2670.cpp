#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

char minesweeper[100 + 10][100 + 10];

int minesweeper_sum(int x, int y) {
    int cnt = 0;
    int x1[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int y1[] = {-1, 0, 1, -1, 1, -1, 0, 1};
    for (int i = 0; i < 8; i++)
        if (minesweeper[x + x1[i]][y + y1[i]] == '*')
            cnt++;

    return cnt;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    n++;
    m++;
    for (int i = 1; i < n; i++) {
        string a;
        cin >> a;
        for (int j = 0; j < m; j++)
            minesweeper[i][j + 1] = a[j];
    }
    for (int i = 1; i < n; i++)
        for (int j = 1; j < m; j++)
            if (minesweeper[i][j] == '?')
                minesweeper[i][j] = minesweeper_sum(i, j) + '0';
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++)
            cout << minesweeper[i][j];
        cout << endl;
    }

    return 0;
}
