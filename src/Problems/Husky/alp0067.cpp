#include <bits/stdc++.h>
#define llong long long

using namespace std;

llong a, b, c, x, y, cnt = 0;

int main()
{
    cin >> a >> b >> c >> x >> y;
    for (llong pen = 0; pen <= x; pen++)
    {
        for (llong ballPen = 0; ballPen <= x; ballPen++)
        {
            llong pencil = x - pen - ballPen;
            if (pencil >= 0 && pen * a + ballPen * b + pencil * c == y)
                cnt++;
        }
    }
    cout << cnt;

    return 0;
}
