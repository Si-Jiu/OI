#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

struct cube {
    int a, b, g, k;
};

cube m[10000], tmp;
short n, i = 0;
int x, y, tmpX, tmpY;

int main() {
    cin >> n;
    for (; i < n; i++) {
        cin >> tmp.a >> tmp.b >> tmp.g >> tmp.k;
        m[i] = tmp;
    }
    cin >> x >> y;
    for (short j = i - 1; j >= 0; j--) {
        tmpX = m[j].a + m[j].g;
        tmpY = m[j].b + m[j].k;
        if (m[j].a <= x && x <= tmpX && m[j].b <= y && y <= tmpY) {
            cout << j + 1 << endl;
            break;
        }
    }
    cout << -1 << endl;

    return 0;
}
