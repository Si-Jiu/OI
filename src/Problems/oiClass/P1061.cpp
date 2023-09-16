
#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

bool ground[5000 + 10][5000 + 10];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m, b, g;
    cin >> n >> m >> b >> g;
    int cnt = 0;
    for (int i = 0; i < b; i++) {
        int x, y;
        cin >> x >> y;
        for (int j = x - 1; j < y; j++)
            for (int k = 0; k < m; k++)
                if (!ground[j][k]) {
                    cnt++;
                    ground[j][k] = true;
                }
    }
    for (int i = 0; i < g; i++) {
        int x, y;
        cin >> x >> y;
        for (int j = x - 1; j < y; j++)
            for (int k = 0; k < n; k++)
                if (!ground[k][j]) {
                    cnt++;
                    ground[k][j] = true;
                }
    }
    cout << cnt << endl;

    return 0;
}
