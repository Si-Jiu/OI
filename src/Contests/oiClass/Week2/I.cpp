#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int x, y;
    if (a > 5) {
        x = 1;
        while (a > 5) {
            x *= a / 5;
            a /= 5;
        }
    } else
        x = 0;
    if (b > 5) {
        y = 1;
        while (b > 5) {
            y *= b / 5;
            b /= 5;
        }
    } else
        y = 0;
    cout << y - x << endl;

    return 0;
}
