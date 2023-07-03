#include <bits/stdc++.h>

using namespace std;

int main() {
    short n, m;
    cin >> n >> m;
    int arr[n][m];
    for (short i = 0; i < n; i++)
        for (short j = 0; j < m; j++)
            cin >> arr[i][j];
    int x;
    cin >> x;
    for (short i = 0; i < n; i++)
        for (short j = 0; j < m; j++)
            if (arr[i][j] == x) {
                cout << i + 1 << ' ' << j + 1 << endl;
                return 0;
            }
    cout << -1 << endl;

    return 0;
}
