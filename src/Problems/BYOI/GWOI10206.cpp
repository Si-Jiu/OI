#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int r[50001];

int find(int x) {
    return r[x] == x ? x : r[x] = find(r[x]);
}

void un(int a, int b) {
    r[find(a)] = find(b);
}

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n * n; i++)
        r[i] = i;

    return 0;
}
