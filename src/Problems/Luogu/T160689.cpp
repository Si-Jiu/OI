#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

const short LEN = 25 + 10;
short n, m;
long long c[LEN][LEN];

void calC() {
    for (short i = 0; i <= 25; i++) {
        c[i][0] = c[i][i] = 1;
        for (int j = 1; j < i; j++)
            c[i][j] = c[i - 1][j] + c[i - 1][j - 1];
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    calC();
    cout << c[n][m] << endl;

    return 0;
}
