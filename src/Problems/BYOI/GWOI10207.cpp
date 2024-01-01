#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int fa[50001];

int find(int x) {
    return fa[x] == x ? x : fa[x] = find(fa[x]);
}

void un(int a, int b) {
    fa[find(a)] = find(b);
}

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n * n; i++)
        fa[i] = i;
    for (int i = 1; i < m; i++) {
        int x, y;
        cin >> x >> y;
        char c;
        cin >> c;
        if (c == 'D') {
            if (find(x * n + y) == find((x - 1) * n + y)) {
                cout << i << endl;
                return 0;
            }
            un((x - 1) * n + y, x * n + y);
        } else {
            if (find((x - 1) * n + y) == find((x - 1) * n + y + 1)) {
                cout << i << endl;
                return 0;
            }
            un((x - 1) * n + y + 1, (x - 1) * n + y);
        }
    }
    cout << "draw" << endl;

    return 0;
}
