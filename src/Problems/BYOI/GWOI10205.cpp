#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int r[20000];

int find(int x) {
    return x == r[x] ? x : r[x] = find(r[x]);
}

void un(int a, int b) {
    r[find(a)] = find(b);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        r[i] = i;
    for (int i = 0; i < m; i++) {
        int ai, bi;
        cin >> ai >> bi;
        un(ai, bi);
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int ci, di;
        cin >> ci >> di;
        cout << (find(ci) == find(di) ? "Yes" : "No") << endl;
    }

    return 0;
}
