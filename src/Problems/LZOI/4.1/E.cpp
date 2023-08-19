#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int m, n;
    cin >> m >> n;
    int sum = 0;
    for (int i = m; i <= n; i++)
        if (i % 2 == 0)
            continue;
        else
            sum += i;
    cout << sum << endl;

    return 0;
}
