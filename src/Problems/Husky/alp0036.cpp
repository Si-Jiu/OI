#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short n;
    cin >> n;
    long long cnt = 0;
    for (short i = 1; i <= n; i++) {
        long long tmp = 1;
        for (short j = 1; j <= i; j++)
            tmp *= j;
        cnt += tmp;
    }
    cout << cnt << endl;

    return 0;
}
