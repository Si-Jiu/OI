#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short l, m, cnt = 0;
    cin >> l >> m;
    short trees[l + 10];
    memset(trees, 0, sizeof(trees));
    for (short i = 0; i < m; i++) {
        short start, end;
        cin >> start >> end;
        for (short pos = start; pos <= end; pos++)
            trees[pos] = 1;
    }
    for (short i = 0; i <= l; i++)
        if (trees[i] == 0)
            cnt++;
    cout << cnt << endl;

    return 0;
}
