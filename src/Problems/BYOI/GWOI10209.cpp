#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int fa[50000];

int find(int x) {
    return fa[x] == x ? x : fa[x] = find(fa[x]);
}

int main() {
    int n, m, q;
    cin >> n >> m >> q;
    for (int i = 0; i < n; i++) {
        fa[i] = i;
    }

    return 0;
}
