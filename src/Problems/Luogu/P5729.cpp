#include <bits/stdc++.h>
#define endl '\n'

int w, x, h, q, cnt = 0, x1, x2, yy1, y2, z1, z2;
int wk[20 + 10][20 + 10][20 + 10];

using namespace std;

int main() {
    cin >> w >> x >> h;
    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> x1 >> yy1 >> z1 >> x2 >> y2 >> z2;
        for (int xx = x1; xx <= x2; xx++)
            for (int yy = yy1; yy <= y2; yy++)
                for (int zz = z1; zz <= z2; zz++)
                    wk[xx][yy][zz] = 1;
    }
    for (int xx = 1; xx <= w; xx++)
        for (int yy = 1; yy <= x; yy++)
            for (int zz = 1; zz <= h; zz++)
                if (wk[xx][yy][zz] == 0)
                    cnt++;
    cout << cnt << endl;

    return 0;
}
