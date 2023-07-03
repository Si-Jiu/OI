#include <bits/stdc++.h>

using namespace std;

int main() {
    short n, m;
    cin >> n >> m;
    int cnt = 0;
    for (short i = n; i <= m; i++)
        cnt += i;
    cout << cnt << endl;

    return 0;
}
