#include <bits/stdc++.h>

using namespace std;

const long long LEN = 3000 + 500;
const long long MOD = 1e9 + 7;
long long c[LEN][LEN];

void calC() {
    for (long long i = 0; i <= 3000; i++) {
        c[i][0] = c[i][i] = 1;
        for (long long j = 1; j < i; j++)
            c[i][j] = (c[i - 1][j]) % MOD + (c[i - 1][j - 1]) % MOD;
    }
}

int main() {
    calC();
    long long t;
    cin >> t;
    for (long long i = 0; i < t; i++) {
        long long m, n;
        cin >> m >> n;
        cout << c[n][m] % MOD << endl;
    }

    return 0;
}
