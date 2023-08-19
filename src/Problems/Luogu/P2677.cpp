#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int n, b, h[20 + 10], choose[20 + 10], s = 0, minS = 1145141919;

void dfs(int cur) {
    if (cur >= n) {
        if (s >= b && s < minS)
            minS = s;
        return;
    }
    for (int val = 0; val <= 1; val++) {
        choose[cur] = val;
        if (val)
            s += h[cur];
        dfs(cur + 1);
        if (val)
            s -= h[cur];
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> b;
    for (int i = 0; i < n; i++)
        cin >> h[i];
    dfs(0);
    cout << minS - b << endl;

    return 0;
}
