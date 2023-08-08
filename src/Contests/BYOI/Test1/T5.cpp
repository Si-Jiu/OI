#include <bits/stdc++.h>

using namespace std;

int main() {
    short n, q;
    cin >> n >> q;
    vector<short> a;
    for (short i = 0; i < n; i++) {
        short tmp;
        cin >> tmp;
        a.push_back(tmp);
    }
    for (short i = 0; i < q; i++) {
        short o;
        cin >> o;
        if (o == 1) {
            short x, y;
            cin >> x >> y;
            a[x - 1] = y;
        } else if (o == 2) {
            short x;
            cin >> x;
            a.erase(a.begin() + x - 1);
        } else {
            short l, r;
            cin >> l >> r;
            reverse(a.begin() + l - 1, a.begin() + r);
        }
    }
    cout << a.size() << endl;
    for (short i = 0; i < a.size(); i++)
        cout << a[i] << ' ';

    return 0;
}
