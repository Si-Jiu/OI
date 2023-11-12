#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    if (n > m)
        swap(n, m);
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    int b[m];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    sort(b, b + n);
    map<int, bool> c;
    for (int i = 0; i < n; i++) {
    }

    return 0;
}
