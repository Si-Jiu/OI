#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

long long a, b, c, x, y, cnt = 0;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> a >> b >> c >> x >> y;
    for (long long pen = 0; pen <= x; pen++)
        for (long long ballPen = 0; ballPen <= x; ballPen++) {
            long long pencil = x - pen - ballPen;
            if (pencil >= 0 && pen * a + ballPen * b + pencil * c == y)
                cnt++;
        }
    cout << cnt;

    return 0;
}
