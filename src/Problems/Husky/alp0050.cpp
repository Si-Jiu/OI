#include <bits/stdc++.h>

using namespace std;

int main() {
    short n, m;
    cin >> n >> m;
    long long cnt = 0;
    for (short x = 0; x < n; x++)
        for (short y = 0; y < m; y++) {
            int tmp;
            cin >> tmp;
            cnt += tmp;
        }
    cout << cnt << endl;

    return 0;
}
