#include <bits/stdc++.h>

using namespace std;

const short LEN = 100 + 50;
short n, m;
short cell[LEN][LEN];

int main() {
    cin >> n >> m;
    for (short i = 0; i < n; i++) {
        string tmp;
        cin >> tmp;
        for (short j = 0; j < m; j++)
            cell[i][j] = tmp[j];
    }
    for (short i = 0; i < n; i++) {
        for (short j = 0; j < m; j++) {
            if (cell[i][j] != 0) {
            }
        }
    }

    return 0;
}
