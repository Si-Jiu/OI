#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int n, m;
int fa[1000 + 10];

int find(int x) {
    return fa[x] == x ? x : find(fa[x]);
}

void uni(int x, int y) {
    fa[find(x)] = find(y);
}

int main() {
    while (1) {
        cin >> n;
        if (n == 0)
            return 0;
        cin >> m;
        for (int i = 0; i < n; i++)
            fa[i] = i;
        for (int i = 0; i < m; i++) {
            int x, y;
            cin >> x >> y;
            uni(x - 1, y - 1);
        }
        int cnt = -1;
        map<int, bool> city;
        for (int i = 0; i < n; i++) {
            if (city[find(i)] == false)
                cnt++;
            city[find(i)] = true;
        }
        cout << cnt << endl;
    }

    return 0;
}
