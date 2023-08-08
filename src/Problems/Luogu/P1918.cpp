#include <bits/stdc++.h>

using namespace std;

map<int, int> a;
int n, q;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        a[tmp] = i + 1;
    }
    cin >> q;
    for (int i = 0; i < q; i++) {
        int b;
        cin >> b;
        if (a.count(b) == 0)
            cout << 0 << endl;
        else
            cout << a[b] << endl;
    }

    return 0;
}
