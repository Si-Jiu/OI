#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int n, m, p;
int fa[5000 + 10];

int find(int x) {
    return fa[x] == x ? x : fa[x] = find(fa[x]);
}

void uni(int x, int y) {
    fa[find(x)] = fa[find(y)];
}

int main() {
    cin >> n >> m >> p;
    for (int i = 0; i < n; i++)
        fa[i] = i;
    for (int i = 0; i < m; i++) {
        int mi, mj;
        cin >> mi >> mj;
        uni(mi, mj);
    }
    for (int i = 0; i < p; i++) {
        int pi, pj;
        cin >> pi >> pj;
        if (find(pi) == find(pj))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}
