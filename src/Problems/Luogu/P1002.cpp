#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
unsigned long long f[20 + 10][20 + 10];
bool p[20 + 10][20 + 10];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short n, m, maX, maY;
    cin >> n >> m >> maX >> maY;
    n += 2, m += 2, maX += 2, maY += 2;
    f[2][2] = 1;
    p[maX][maY] = 1;
    p[maX - 2][maY - 1] = 1;
    p[maX - 2][maY + 1] = 1;
    p[maX - 1][maY - 2] = 1;
    p[maX - 1][maY + 2] = 1;
    p[maX + 1][maY - 2] = 1;
    p[maX + 1][maY + 2] = 1;
    p[maX + 2][maY - 1] = 1;
    p[maX + 2][maY + 1] = 1;
    for (int i = 2; i <= n; i++) {
        for (int j = 2; j <= m; j++) {
            if (i == 2 && j == 2)
                continue;
            if (p[i][j])
                f[i][j] = 0;
            else
                f[i][j] = f[i - 1][j] + f[i][j - 1];
        }
    }
    cout << f[n][m] << endl;
    return 0;
}
